#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_160C4CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C4CC0u);

L_160C4CC0:
    edi = edi; /* 0x160C4CC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C4CC2: push ebp */
    ebp = esp; /* 0x160C4CC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3F0u; /* 0x160C4CC5: sub esp, 0x3f0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x161B2070); /* 0x160C4CCB: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x160C4CD0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x160C4CD2: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x160C4CD5: push ebx */
    PUSH32(esp, esi); /* 0x160C4CD6: push esi */
    PUSH32(esp, edi); /* 0x160C4CD7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160C4CD8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(ebp + 0x10), 8 */ /* 0x160C4CDA: test byte ptr [ebp + 0x10], 8 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = ecx; /* 0x160C4CDE: mov ebx, ecx */
    esi = edx; /* 0x160C4CE0: mov esi, edx */
    MEM32(ebp + (-0x3F0)) = edi; /* 0x160C4CE2: mov dword ptr [ebp - 0x3f0], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4D34; /* 0x160C4CE8: je 0x160c4d34 */
L_160C4CEA:
    edi = esi; /* 0x160C4CEA: mov edi, esi */
    RECOMP_CALL(sub_160BEB40); /* 0x160C4CEC: call 0x160beb40 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160C4CF1: mov edi, eax */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x160C4CF3: mov al, byte ptr [ebp + 0x10] */
    /* test LO8(eax), 0x10u */ /* 0x160C4CF6: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4D06; /* 0x160C4CF8: je 0x160c4d06 */
L_160C4CFA:
    MEM32(ebp + (-0x3F0)) = 0x40u; /* 0x160C4CFA: mov dword ptr [ebp - 0x3f0], 0x40 */
    goto L_160C4D34; /* 0x160C4D04: jmp 0x160c4d34 */
L_160C4D06:
    /* test LO8(eax), 0x20u */ /* 0x160C4D06: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4D16; /* 0x160C4D08: je 0x160c4d16 */
L_160C4D0A:
    MEM32(ebp + (-0x3F0)) = 0x100u; /* 0x160C4D0A: mov dword ptr [ebp - 0x3f0], 0x100 */
    goto L_160C4D34; /* 0x160C4D14: jmp 0x160c4d34 */
L_160C4D16:
    /* test LO8(eax), 0x40u */ /* 0x160C4D16: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4D26; /* 0x160C4D18: je 0x160c4d26 */
L_160C4D1A:
    MEM32(ebp + (-0x3F0)) = 0x200u; /* 0x160C4D1A: mov dword ptr [ebp - 0x3f0], 0x200 */
    goto L_160C4D34; /* 0x160C4D24: jmp 0x160c4d34 */
L_160C4D26:
    /* test LO8(eax), LO8(eax) */ /* 0x160C4D26: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160C4D34; /* 0x160C4D28: jns 0x160c4d34 */
L_160C4D2A:
    MEM32(ebp + (-0x3F0)) = 0x400u; /* 0x160C4D2A: mov dword ptr [ebp - 0x3f0], 0x400 */
L_160C4D34:
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x160C4D34: mov al, byte ptr [ebp + 0x10] */
    /* test LO8(eax), 1 */ /* 0x160C4D37: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4D54; /* 0x160C4D39: je 0x160c4d54 */
L_160C4D3B:
    eax = MEM32(ebp + 0x14); /* 0x160C4D3B: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x160C4D3E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x160C4D41: push eax */
    PUSH32(esp, ecx); /* 0x160C4D42: push ecx */
    ecx = esi; /* 0x160C4D43: mov ecx, esi */
    esi = MEM32(ebx); /* 0x160C4D45: mov esi, dword ptr [ebx] */
    edx = ebp + 0x18; /* 0x160C4D47: lea edx, [ebp + 0x18] */
    RECOMP_CALL(sub_1618E330); /* 0x160C4D4A: call 0x1618e330 */
    RECOMP_FLAGS_IN();
    goto L_160C4DE8; /* 0x160C4D4F: jmp 0x160c4de8 */
L_160C4D54:
    /* test LO8(eax), 2 */ /* 0x160C4D54: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4DE8; /* 0x160C4D56: je 0x160c4de8 */
L_160C4D5C:
    /* test edi, edi */ /* 0x160C4D5C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4D6B; /* 0x160C4D5E: je 0x160c4d6b */
L_160C4D60:
    edx = MEM32(ebp + (-0x3F0)); /* 0x160C4D60: mov edx, dword ptr [ebp - 0x3f0] */
    /* test MEM32(edi + 0x8), edx */ /* 0x160C4D66: test dword ptr [edi + 8], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C4DE8; /* 0x160C4D69: jne 0x160c4de8 */
L_160C4D6B:
    /* test LO8(eax), 0x10u */ /* 0x160C4D6B: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4DC9; /* 0x160C4D6D: je 0x160c4dc9 */
L_160C4D6F:
    eax = MEM32(ebp + 0x14); /* 0x160C4D6F: mov eax, dword ptr [ebp + 0x14] */
    edx = 0x3E8u; /* 0x160C4D72: mov edx, 0x3e8 */
    ecx = ebp + (-0x3EC); /* 0x160C4D77: lea ecx, [ebp - 0x3ec] */
    RECOMP_CALL(sub_160B7C80); /* 0x160C4D7D: call 0x160b7c80 */
    RECOMP_FLAGS_IN();
    ecx = 0x3E8u; /* 0x160C4D82: mov ecx, 0x3e8 */
    eax = ebp + (-0x3EC); /* 0x160C4D87: lea eax, [ebp - 0x3ec] */
    ecx = ecx; /* 0x160C4D8D: lea ecx, [ecx] */
L_160C4D90:
    /* cmp MEM8(eax), 0 */ /* 0x160C4D90: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C4D9D; /* 0x160C4D93: je 0x160c4d9d */
L_160C4D95:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160C4D95: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x160C4D96: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160C4D90; /* 0x160C4D99: jne 0x160c4d90 */
L_160C4D9B:
    goto L_160C4DC0; /* 0x160C4D9B: jmp 0x160c4dc0 */
L_160C4D9D:
    /* test ecx, ecx */ /* 0x160C4D9D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4DC0; /* 0x160C4D9F: je 0x160c4dc0 */
L_160C4DA1:
    eax = 0x3E8u; /* 0x160C4DA1: mov eax, 0x3e8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x160C4DA6: sub eax, ecx */
    _flag_k = FK_CMP;
    edx = 0x3E8u; /* 0x160C4DA8: mov edx, 0x3e8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x160C4DAD: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = ebp + eax + (-0x3EC); /* 0x160C4DAF: lea ecx, [ebp + eax - 0x3ec] */
    eax = 0x16038394u; /* 0x160C4DB6: mov eax, 0x16038394 */
    RECOMP_CALL(sub_160D1B70); /* 0x160C4DBB: call 0x160d1b70 */
    RECOMP_FLAGS_IN();
L_160C4DC0:
    eax = ebp + (-0x3EC); /* 0x160C4DC0: lea eax, [ebp - 0x3ec] */
    MEM32(ebp + 0x14) = eax; /* 0x160C4DC6: mov dword ptr [ebp + 0x14], eax */
L_160C4DC9:
    ecx = MEM32(ebp + 0xC); /* 0x160C4DC9: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x160C4DCC: push ecx */
    ecx = MEM32(ebp + 0x14); /* 0x160C4DCD: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x160C4DD0: push esi */
    esi = MEM32(ebx); /* 0x160C4DD1: mov esi, dword ptr [ebx] */
    edx = ebp + 0x18; /* 0x160C4DD3: lea edx, [ebp + 0x18] */
    RECOMP_CALL(sub_1618E510); /* 0x160C4DD6: call 0x1618e510 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x160C4DDB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4DE8; /* 0x160C4DDD: je 0x160c4de8 */
L_160C4DDF:
    edx = MEM32(ebp + (-0x3F0)); /* 0x160C4DDF: mov edx, dword ptr [ebp - 0x3f0] */
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | edx)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | edx));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | edx; /* 0x160C4DE5: or dword ptr [edi + 8], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C4DE8:
    /* test MEM8(ebp + 0x10), 4 */ /* 0x160C4DE8: test byte ptr [ebp + 0x10], 4 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4E17; /* 0x160C4DEC: je 0x160c4e17 */
L_160C4DEE:
    eax = MEM32(ebx + 0x10C); /* 0x160C4DEE: mov eax, dword ptr [ebx + 0x10c] */
    ecx = eax; /* 0x160C4DF4: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x160C4DF6: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 3 */ /* 0x160C4DF9: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C4E0B; /* 0x160C4DFC: je 0x160c4e0b */
L_160C4DFE:
    /* cmp ecx, 4 */ /* 0x160C4DFE: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C4E0B; /* 0x160C4E01: je 0x160c4e0b */
L_160C4E03:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF9u);
    eax = eax & 0xFFFFFFF9u; /* 0x160C4E03: and eax, 0xfffffff9 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x160C4E06: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C4E11; /* 0x160C4E09: jmp 0x160c4e11 */
L_160C4E0B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x160C4E0B: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x160C4E0E: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C4E11:
    MEM32(ebx + 0x10C) = eax; /* 0x160C4E11: mov dword ptr [ebx + 0x10c], eax */
L_160C4E17:
    ecx = MEM32(ebp + (-0x4)); /* 0x160C4E17: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x160C4E1A: pop edi */
    esi = POP32_VAL(esp); /* 0x160C4E1B: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x160C4E1C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C4E1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160C4E20: pop ebx */
    RECOMP_CALL(sub_161ADCF5); /* 0x160C4E21: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160C4E26: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C4E28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4E29: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C4E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C4E30u);

L_160C4E30:
    SET_LO8(eax, MEM8(ecx + 0x100)); /* 0x160C4E30: mov al, byte ptr [ecx + 0x100] */
    /* test LO8(eax), LO8(eax) */ /* 0x160C4E36: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C4E48; /* 0x160C4E38: jne 0x160c4e48 */
L_160C4E3A:
    /* cmp MEM8(ecx + 0x101), LO8(eax) */ /* 0x160C4E3A: cmp byte ptr [ecx + 0x101], al */
    _flag_a = (uint32_t)(MEM8(ecx + 0x101)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C4E48; /* 0x160C4E40: jne 0x160c4e48 */
L_160C4E42:
    eax = 1; /* 0x160C4E42: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4E47: ret  */
L_160C4E48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C4E48: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), LO8(eax) */ /* 0x160C4E4A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x160C4E4C: sete cl */
    ecx = ecx + ecx + 0x1C; /* 0x160C4E4F: lea ecx, [ecx + ecx + 0x1c] */
    eax = ecx; /* 0x160C4E53: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4E55: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C4E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C4E60u);

L_160C4E60:
    edi = edi; /* 0x160C4E60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C4E62: push ebp */
    ebp = esp; /* 0x160C4E63: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x160C4E65: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x1C); /* 0x160C4E68: mov eax, dword ptr [eax + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x160C4E6B: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(eax + ecx * 4); /* 0x160C4E6E: mov edx, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + 0xC); /* 0x160C4E71: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x160C4E74: push esi */
    esi = MEM32(eax + ecx * 4); /* 0x160C4E75: mov esi, dword ptr [eax + ecx*4] */
    eax = MEM32(edx + 0x54); /* 0x160C4E78: mov eax, dword ptr [edx + 0x54] */
    ecx = MEM32(esi + 0x54); /* 0x160C4E7B: mov ecx, dword ptr [esi + 0x54] */
    /* cmp eax, ecx */ /* 0x160C4E7E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C4E8A; /* 0x160C4E80: jae 0x160c4e8a */
L_160C4E82:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160C4E82: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160C4E85: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C4E86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C4E87: ret 0xc */
L_160C4E8A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_160C4E96; /* 0x160C4E8A: jbe 0x160c4e96 */
L_160C4E8C:
    eax = 1; /* 0x160C4E8C: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x160C4E91: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C4E92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C4E93: ret 0xc */
L_160C4E96:
    eax = MEM32(esi + 0x50); /* 0x160C4E96: mov eax, dword ptr [esi + 0x50] */
    ecx = MEM32(edx + 0x50); /* 0x160C4E99: mov ecx, dword ptr [edx + 0x50] */
    eax = MEM32(eax + 0xC); /* 0x160C4E9C: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x160C4E9F: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, ebx); /* 0x160C4EA2: push ebx */
    PUSH32(esp, edi); /* 0x160C4EA3: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1800u);
    eax = eax & 0x1800u; /* 0x160C4EA4: and eax, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1800u);
    ecx = ecx & 0x1800u; /* 0x160C4EA9: and ecx, 0x1800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160C4EAF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160C4EB1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x160C4EB3: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C4F0D; /* 0x160C4EB5: ja 0x160c4f0d */
L_160C4EB7:
    if (CMP_B(_flag_a, _flag_b)) goto L_160C4F0D; /* 0x160C4EB7: jb 0x160c4f0d */
L_160C4EB9:
    /* cmp ebx, edi */ /* 0x160C4EB9: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160C4F0D; /* 0x160C4EBB: jb 0x160c4f0d */
L_160C4EBD:
    /* cmp ecx, eax */ /* 0x160C4EBD: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160C4EC7; /* 0x160C4EBF: jb 0x160c4ec7 */
L_160C4EC1:
    if (CMP_A(_flag_a, _flag_b)) goto L_160C4F0D; /* 0x160C4EC1: ja 0x160c4f0d */
L_160C4EC3:
    /* cmp ebx, edi */ /* 0x160C4EC3: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C4F0D; /* 0x160C4EC5: ja 0x160c4f0d */
L_160C4EC7:
    eax = MEM32(edx + 0xA8); /* 0x160C4EC7: mov eax, dword ptr [edx + 0xa8] */
    ecx = MEM32(esi + 0xA8); /* 0x160C4ECD: mov ecx, dword ptr [esi + 0xa8] */
    /* cmp eax, ecx */ /* 0x160C4ED3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160C4F0D; /* 0x160C4ED5: jb 0x160c4f0d */
L_160C4ED7:
    if (CMP_A(_flag_a, _flag_b)) goto L_160C4EF7; /* 0x160C4ED7: ja 0x160c4ef7 */
L_160C4ED9:
    eax = MEM32(edx + 0xB4); /* 0x160C4ED9: mov eax, dword ptr [edx + 0xb4] */
    ecx = MEM32(esi + 0xB4); /* 0x160C4EDF: mov ecx, dword ptr [esi + 0xb4] */
    /* cmp eax, ecx */ /* 0x160C4EE5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160C4F0D; /* 0x160C4EE7: jb 0x160c4f0d */
L_160C4EE9:
    if (CMP_A(_flag_a, _flag_b)) goto L_160C4EF7; /* 0x160C4EE9: ja 0x160c4ef7 */
L_160C4EEB:
    edx = MEM32(edx + 0x64); /* 0x160C4EEB: mov edx, dword ptr [edx + 0x64] */
    esi = MEM32(esi + 0x64); /* 0x160C4EEE: mov esi, dword ptr [esi + 0x64] */
    /* cmp edx, esi */ /* 0x160C4EF1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160C4F0D; /* 0x160C4EF3: jb 0x160c4f0d */
L_160C4EF5:
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C4F03; /* 0x160C4EF5: jbe 0x160c4f03 */
L_160C4EF7:
    edi = POP32_VAL(esp); /* 0x160C4EF7: pop edi */
    ebx = POP32_VAL(esp); /* 0x160C4EF8: pop ebx */
    eax = 1; /* 0x160C4EF9: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x160C4EFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C4EFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C4F00: ret 0xc */
L_160C4F03:
    eax = MEM32(ebp + 0x8); /* 0x160C4F03: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x160C4F06: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, eax */ /* 0x160C4F09: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C4F17; /* 0x160C4F0B: jbe 0x160c4f17 */
L_160C4F0D:
    edi = POP32_VAL(esp); /* 0x160C4F0D: pop edi */
    ebx = POP32_VAL(esp); /* 0x160C4F0E: pop ebx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160C4F0F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160C4F12: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C4F13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C4F14: ret 0xc */
L_160C4F17:
    edi = POP32_VAL(esp); /* 0x160C4F17: pop edi */
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C4F18: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = POP32_VAL(esp); /* 0x160C4F1A: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160C4F1B: neg eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x160C4F1D: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C4F1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C4F1F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160C4F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C4F30u);

L_160C4F30:
    ecx = MEM32(eax + 0x4); /* 0x160C4F30: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ecx + 0x14); /* 0x160C4F33: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11u; /* 0x160C4F36: add eax, 0x11 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4F39: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C4F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C4F40u);

L_160C4F40:
    edi = edi; /* 0x160C4F40: mov edi, edi */
    PUSH32(esp, esi); /* 0x160C4F42: push esi */
    esi = MEM32(edi); /* 0x160C4F43: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x160C4F45: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C4F77; /* 0x160C4F47: je 0x160c4f77 */
L_160C4F49:
    PUSH32(esp, ebx); /* 0x160C4F49: push ebx */
    ebx = MEM32(0x16001098); /* 0x160C4F4A: mov ebx, dword ptr [0x16001098] */
L_160C4F50:
    eax = MEM32(esi); /* 0x160C4F50: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x160C4F52: mov dword ptr [edi], eax */
    eax = MEM32(0x161B4344); /* 0x160C4F54: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160C4F59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160C4F61; /* 0x160C4F5B: jge 0x160c4f61 */
L_160C4F5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C4F5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C4F68; /* 0x160C4F5F: jmp 0x160c4f68 */
L_160C4F61:
    PUSH32(esp, eax); /* 0x160C4F61: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160C4F62: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160C4F68:
    ecx = MEM32(eax); /* 0x160C4F68: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x160C4F6A: push esi */
    PUSH32(esp, 0); /* 0x160C4F6B: push 0 */
    PUSH32(esp, ecx); /* 0x160C4F6D: push ecx */
    RECOMP_ICALL(ebx); /* 0x160C4F6E: call ebx */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi); /* 0x160C4F70: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x160C4F72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C4F50; /* 0x160C4F74: jne 0x160c4f50 */
L_160C4F76:
    ebx = POP32_VAL(esp); /* 0x160C4F76: pop ebx */
L_160C4F77:
    MEM32(edi + 0x4) = 0; /* 0x160C4F77: mov dword ptr [edi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x160C4F7E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4F7F: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C4F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C4F90u);

L_160C4F90:
    edx = MEM32(eax + 0x4); /* 0x160C4F90: mov edx, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x160C4F93: push esi */
    esi = MEM32(eax + 0x8); /* 0x160C4F94: mov esi, dword ptr [eax + 8] */
    ecx = eax + 0xC; /* 0x160C4F97: lea ecx, [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x160C4F9A: push ecx */
    PUSH32(esp, eax); /* 0x160C4F9B: push eax */
    PUSH32(esp, edx); /* 0x160C4F9C: push edx */
    ecx = 4; /* 0x160C4F9D: mov ecx, 4 */
    RECOMP_CALL(sub_16093780); /* 0x160C4FA2: call 0x16093780 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x160C4FA7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4FA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C4FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C4FB0u);

L_160C4FB0:
    eax = MEM32(esi + 0xC); /* 0x160C4FB0: mov eax, dword ptr [esi + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x160C4FB3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C4FDD; /* 0x160C4FB6: je 0x160c4fdd */
L_160C4FB8:
    PUSH32(esp, edi); /* 0x160C4FB8: push edi */
    /* cmp eax, 0xFFFFFFCDu */ /* 0x160C4FB9: cmp eax, -0x33 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFCDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C4FD8; /* 0x160C4FBC: ja 0x160c4fd8 */
L_160C4FBE:
    edi = eax + 0x32; /* 0x160C4FBE: lea edi, [eax + 0x32] */
L_160C4FC1:
    ecx = MEM32(esi + 0x8); /* 0x160C4FC1: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160C4FC4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFFFFEFu; /* 0x160C4FC6: mov eax, 0xffffffef */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x160C4FCB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, edi */ /* 0x160C4FCD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C4FE3; /* 0x160C4FCF: jae 0x160c4fe3 */
L_160C4FD1:
    eax = 0x80070216u; /* 0x160C4FD1: mov eax, 0x80070216 */
    edi = POP32_VAL(esp); /* 0x160C4FD6: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4FD7: ret  */
L_160C4FD8:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x160C4FD8: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160C4FC1; /* 0x160C4FDB: jmp 0x160c4fc1 */
L_160C4FDD:
    eax = 0x80070216u; /* 0x160C4FDD: mov eax, 0x80070216 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4FE2: ret  */
L_160C4FE3:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x160C4FE3: imul ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x160C4FE6: add ecx, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x160C4FE9: push ecx */
    RECOMP_CALL(sub_16094280); /* 0x160C4FEA: call 0x16094280 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C4FEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C4FFA; /* 0x160C4FF1: jne 0x160c4ffa */
L_160C4FF3:
    eax = 0x8007000Eu; /* 0x160C4FF3: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x160C4FF8: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C4FF9: ret  */
L_160C4FFA:
    MEM32(eax + 0x8) = edi; /* 0x160C4FFA: mov dword ptr [eax + 8], edi */
    ecx = MEM32(esi); /* 0x160C4FFD: mov ecx, dword ptr [esi] */
    MEM32(eax) = ecx; /* 0x160C4FFF: mov dword ptr [eax], ecx */
    edx = MEM32(esi + 0x8); /* 0x160C5001: mov edx, dword ptr [esi + 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)edi); /* 0x160C5004: imul edx, edi */
    MEM32(esi) = eax; /* 0x160C5007: mov dword ptr [esi], eax */
    MEM32(esi + 0xC) = edi; /* 0x160C5009: mov dword ptr [esi + 0xc], edi */
    eax = edx + eax + 0x10; /* 0x160C500C: lea eax, [edx + eax + 0x10] */
    /* test edi, edi */ /* 0x160C5010: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5024; /* 0x160C5012: jbe 0x160c5024 */
L_160C5014:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x8); /* 0x160C5014: sub eax, dword ptr [esi + 8] */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x4); /* 0x160C5017: mov ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x160C501A: dec edi */
    _flag_k = FK_DEC;
    MEM32(eax) = ecx; /* 0x160C501B: mov dword ptr [eax], ecx */
    MEM32(esi + 0x4) = eax; /* 0x160C501D: mov dword ptr [esi + 4], eax */
    /* test edi, edi */ /* 0x160C5020: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C5014; /* 0x160C5022: ja 0x160c5014 */
L_160C5024:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C5024: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160C5026: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5027: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5030u);

L_160C5030:
    eax = MEM32(edx + 0x10C); /* 0x160C5030: mov eax, dword ptr [edx + 0x10c] */
    ecx = eax; /* 0x160C5036: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x160C5038: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 3 */ /* 0x160C503B: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5052; /* 0x160C503E: je 0x160c5052 */
L_160C5040:
    /* cmp ecx, 4 */ /* 0x160C5040: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5052; /* 0x160C5043: je 0x160c5052 */
L_160C5045:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF9u);
    eax = eax & 0xFFFFFFF9u; /* 0x160C5045: and eax, 0xfffffff9 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x160C5048: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x10C) = eax; /* 0x160C504B: mov dword ptr [edx + 0x10c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5051: ret  */
L_160C5052:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x160C5052: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x160C5055: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x10C) = eax; /* 0x160C5058: mov dword ptr [edx + 0x10c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C505E: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5070u);

L_160C5070:
    edi = edi; /* 0x160C5070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C5072: push ebp */
    ebp = esp; /* 0x160C5073: mov ebp, esp */
    ecx = eax * 4; /* 0x160C5075: lea ecx, [eax*4] */
    eax = MEM32(ebp + 0x8); /* 0x160C507C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x160C507F: push ecx */
    ecx = MEM32(eax + 0x1C); /* 0x160C5080: mov ecx, dword ptr [eax + 0x1c] */
    PUSH32(esp, edx); /* 0x160C5083: push edx */
    PUSH32(esp, ecx); /* 0x160C5084: push ecx */
    RECOMP_CALL(sub_161AE3C0); /* 0x160C5085: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160C508A: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x160C508D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C508E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C50A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C50A0u);

L_160C50A0:
    edi = edi; /* 0x160C50A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C50A2: push ebp */
    ebp = esp; /* 0x160C50A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160C50A5: sub esp, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160C50A8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x160C50AA: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = 0xFFF00000u; /* 0x160C50AD: mov dword ptr [ebp - 4], 0xfff00000 */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x160C50B4: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0xD0)); /* 0x160C50B7: fcomp qword ptr [ecx + 0xd0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x160C50BD: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x160C50BF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_160C50E4; /* 0x160C50C2: jp 0x160c50e4 */
L_160C50C4:
    MEM32(ebp + (-0x8)) = edx; /* 0x160C50C4: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = 0x7FF00000u; /* 0x160C50C7: mov dword ptr [ebp - 4], 0x7ff00000 */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x160C50CE: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0xD8)); /* 0x160C50D1: fcomp qword ptr [ecx + 0xd8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x160C50D7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x160C50D9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_160C50E4; /* 0x160C50DC: jp 0x160c50e4 */
L_160C50DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C50DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x160C50E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C50E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C50E3: ret  */
L_160C50E4:
    eax = 1; /* 0x160C50E4: mov eax, 1 */
    esp = ebp; /* 0x160C50E9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C50EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C50EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5100u);

L_160C5100:
    /* cmp MEM32(eax + 0xE0), 0 */ /* 0x160C5100: cmp dword ptr [eax + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C512D; /* 0x160C5107: jne 0x160c512d */
L_160C5109:
    /* cmp MEM32(eax + 0xE4), 0x80000000u */ /* 0x160C5109: cmp dword ptr [eax + 0xe4], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(eax + 0xE4)); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C512D; /* 0x160C5113: jne 0x160c512d */
L_160C5115:
    /* cmp MEM32(eax + 0xE8), 0xFFFFFFFFu */ /* 0x160C5115: cmp dword ptr [eax + 0xe8], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0xE8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C512D; /* 0x160C511C: jne 0x160c512d */
L_160C511E:
    /* cmp MEM32(eax + 0xEC), 0x7FFFFFFFu */ /* 0x160C511E: cmp dword ptr [eax + 0xec], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(eax + 0xEC)); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C512D; /* 0x160C5128: jne 0x160c512d */
L_160C512A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C512A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C512C: ret  */
L_160C512D:
    eax = 1; /* 0x160C512D: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5132: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5140u);

L_160C5140:
    ecx = MEM32(eax + 0xF0); /* 0x160C5140: mov ecx, dword ptr [eax + 0xf0] */
    _flag_a = (uint32_t)((ecx | MEM32(eax + 0xF4))); _flag_b = (uint32_t)((ecx | MEM32(eax + 0xF4)));
    ecx = ecx | MEM32(eax + 0xF4); /* 0x160C5146: or ecx, dword ptr [eax + 0xf4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C5162; /* 0x160C514C: jne 0x160c5162 */
L_160C514E:
    edx = MEM32(eax + 0xF8); /* 0x160C514E: mov edx, dword ptr [eax + 0xf8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0xFC));
    edx = edx & MEM32(eax + 0xFC); /* 0x160C5154: and edx, dword ptr [eax + 0xfc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xFFFFFFFFu */ /* 0x160C515A: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5162; /* 0x160C515D: jne 0x160c5162 */
L_160C515F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C515F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5161: ret  */
L_160C5162:
    eax = 1; /* 0x160C5162: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5167: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5170u);

L_160C5170:
    ecx = MEM32(eax + 0xC8); /* 0x160C5170: mov ecx, dword ptr [eax + 0xc8] */
    _flag_a = (uint32_t)((ecx | MEM32(eax + 0xCC))); _flag_b = (uint32_t)((ecx | MEM32(eax + 0xCC)));
    ecx = ecx | MEM32(eax + 0xCC); /* 0x160C5176: or ecx, dword ptr [eax + 0xcc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5184; /* 0x160C517C: je 0x160c5184 */
L_160C517E:
    eax = 1; /* 0x160C517E: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5183: ret  */
L_160C5184:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C5184: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5186: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5190u);

L_160C5190:
    edi = edi; /* 0x160C5190: mov edi, edi */
    PUSH32(esp, ecx); /* 0x160C5192: push ecx */
    ecx = esi; /* 0x160C5193: mov ecx, esi */
    RECOMP_CALL(sub_160C50A0); /* 0x160C5195: call 0x160c50a0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C519A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C51F7; /* 0x160C519C: jne 0x160c51f7 */
L_160C519E:
    /* cmp MEM32(esi + 0xE0), 0 */ /* 0x160C519E: cmp dword ptr [esi + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C51F7; /* 0x160C51A5: jne 0x160c51f7 */
L_160C51A7:
    /* cmp MEM32(esi + 0xE4), 0x80000000u */ /* 0x160C51A7: cmp dword ptr [esi + 0xe4], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE4)); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C51F7; /* 0x160C51B1: jne 0x160c51f7 */
L_160C51B3:
    /* cmp MEM32(esi + 0xE8), 0xFFFFFFFFu */ /* 0x160C51B3: cmp dword ptr [esi + 0xe8], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C51F7; /* 0x160C51BA: jne 0x160c51f7 */
L_160C51BC:
    /* cmp MEM32(esi + 0xEC), 0x7FFFFFFFu */ /* 0x160C51BC: cmp dword ptr [esi + 0xec], 0x7fffffff */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C51F7; /* 0x160C51C6: jne 0x160c51f7 */
L_160C51C8:
    eax = MEM32(esi + 0xF0); /* 0x160C51C8: mov eax, dword ptr [esi + 0xf0] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xF4))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xF4)));
    eax = eax | MEM32(esi + 0xF4); /* 0x160C51CE: or eax, dword ptr [esi + 0xf4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C51F7; /* 0x160C51D4: jne 0x160c51f7 */
L_160C51D6:
    ecx = MEM32(esi + 0xF8); /* 0x160C51D6: mov ecx, dword ptr [esi + 0xf8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xFC));
    ecx = ecx & MEM32(esi + 0xFC); /* 0x160C51DC: and ecx, dword ptr [esi + 0xfc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C51E2: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C51F7; /* 0x160C51E5: jne 0x160c51f7 */
L_160C51E7:
    edx = MEM32(esi + 0xC8); /* 0x160C51E7: mov edx, dword ptr [esi + 0xc8] */
    _flag_a = (uint32_t)((edx | MEM32(esi + 0xCC))); _flag_b = (uint32_t)((edx | MEM32(esi + 0xCC)));
    edx = edx | MEM32(esi + 0xCC); /* 0x160C51ED: or edx, dword ptr [esi + 0xcc] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C51F7; /* 0x160C51F3: jne 0x160c51f7 */
L_160C51F5:
    ecx = POP32_VAL(esp); /* 0x160C51F5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C51F6: ret  */
L_160C51F7:
    eax = 1; /* 0x160C51F7: mov eax, 1 */
    ecx = POP32_VAL(esp); /* 0x160C51FC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C51FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5210u);

L_160C5210:
    ecx = MEM32(eax + 0x4C); /* 0x160C5210: mov ecx, dword ptr [eax + 0x4c] */
    eax = MEM32(ecx * 4 + 0x160217A0); /* 0x160C5213: mov eax, dword ptr [ecx*4 + 0x160217a0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00102000u);
    eax = eax & 0x00102000u; /* 0x160C521A: and eax, 0x102000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160C521F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160C5221: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160C5223: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5224: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5230u);

L_160C5230:
    eax = MEM32(eax + 0x10); /* 0x160C5230: mov eax, dword ptr [eax + 0x10] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5233: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5240u);

L_160C5240:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C5240: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x160C5242: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x160C5244: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x160C5247: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160C524A: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 0xFFFFFFFFu; /* 0x160C524D: mov dword ptr [eax + 0x10], 0xffffffff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5254: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5260u);

L_160C5260:
    ecx = MEM32(eax + 0x10); /* 0x160C5260: mov ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C5263: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(edx + 0x10) */ /* 0x160C5265: cmp ecx, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x160C5268: setne al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C526B: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5280u);

L_160C5280:
    ecx = MEM32(eax + 0xC); /* 0x160C5280: mov ecx, dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x160C5283: push esi */
    esi = 1; /* 0x160C5284: mov esi, 1 */
    /* cmp ecx, esi */ /* 0x160C5289: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C529D; /* 0x160C528B: ja 0x160c529d */
L_160C528D:
    MEM32(eax + 0xC) = 0; /* 0x160C528D: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0xFFFFFFFFu; /* 0x160C5294: mov dword ptr [eax + 0x10], 0xffffffff */
    esi = POP32_VAL(esp); /* 0x160C529B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C529C: ret  */
L_160C529D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160C529D: dec ecx */
    _flag_k = FK_DEC;
    MEM32(eax + 0xC) = ecx; /* 0x160C529E: mov dword ptr [eax + 0xc], ecx */
    edx = 0x20u; /* 0x160C52A1: mov edx, 0x20 */
    PUSH32(esp, edi); /* 0x160C52A6: push edi */
L_160C52A7:
    ecx = MEM32(eax + 0x10); /* 0x160C52A7: mov ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x160C52AA: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ecx), 0x1Fu */ /* 0x160C52AD: cmp cl, 0x1f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C52DA; /* 0x160C52B0: jne 0x160c52da */
L_160C52B2:
    ecx = MEM32(eax); /* 0x160C52B2: mov ecx, dword ptr [eax] */
    MEM32(eax + 0x8) = esi; /* 0x160C52B4: mov dword ptr [eax + 8], esi */
    edi = MEM32(ecx); /* 0x160C52B7: mov edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x160C52B9: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x4) = edi; /* 0x160C52BC: mov dword ptr [eax + 4], edi */
    MEM32(eax) = ecx; /* 0x160C52BF: mov dword ptr [eax], ecx */
    /* test edi, edi */ /* 0x160C52C1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C52DD; /* 0x160C52C3: jne 0x160c52dd */
L_160C52C5:
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + edx; /* 0x160C52C5: add dword ptr [eax + 0x10], edx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x160C52C8: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx); /* 0x160C52CA: mov ecx, dword ptr [ecx] */
    MEM32(eax + 0x4) = ecx; /* 0x160C52CC: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 4; /* 0x160C52CF: add dword ptr [eax], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x160C52D2: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C52C5; /* 0x160C52D6: je 0x160c52c5 */
L_160C52D8:
    goto L_160C52DD; /* 0x160C52D8: jmp 0x160c52dd */
L_160C52DA:
    if (1u) _cf = (((MEM32(eax + 0x8)) >> 31) & 1u); /* 0x160C52DA: shl dword ptr [eax + 8], 1 */
    if (1u) { _flag_a = recomp_flags_pack((MEM32(eax + 0x8) << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(eax + 0x8) = MEM32(eax + 0x8) << 1u; /* 0x160C52DA: shl dword ptr [eax + 8], 1 */
L_160C52DD:
    ecx = MEM32(eax + 0x8); /* 0x160C52DD: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + esi; /* 0x160C52E0: add dword ptr [eax + 0x10], esi */
    _flag_k = FK_ADD;
    /* test MEM32(eax + 0x4), ecx */ /* 0x160C52E3: test dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C52A7; /* 0x160C52E6: je 0x160c52a7 */
L_160C52E8:
    edi = POP32_VAL(esp); /* 0x160C52E8: pop edi */
    esi = POP32_VAL(esp); /* 0x160C52E9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C52EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C52F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C52F0u);

L_160C52F0:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160C52F0: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x10), edx */ /* 0x160C52F3: cmp dword ptr [esi + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5309; /* 0x160C52F6: jne 0x160c5309 */
L_160C52F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C52F8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x160C52FA: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x160C52FC: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x160C52FF: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160C5302: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = edx; /* 0x160C5305: mov dword ptr [eax + 0x10], edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5308: ret  */
L_160C5309:
    edx = MEM32(esi + 0x10); /* 0x160C5309: mov edx, dword ptr [esi + 0x10] */
    ecx = edx; /* 0x160C530C: mov ecx, edx */
    PUSH32(esp, edi); /* 0x160C530E: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x160C530F: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 1; /* 0x160C5312: mov edi, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x160C5317: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x160C5317: shl edi, cl */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x160C5319: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x160C5319: shr edx, 5 */
    MEM32(eax + 0x8) = edi; /* 0x160C531C: mov dword ptr [eax + 8], edi */
    ecx = MEM32(esi + 0x4); /* 0x160C531F: mov ecx, dword ptr [esi + 4] */
    ecx = ecx + edx * 4; /* 0x160C5322: lea ecx, [ecx + edx*4] */
    MEM32(eax) = ecx; /* 0x160C5325: mov dword ptr [eax], ecx */
    edx = MEM32(ecx); /* 0x160C5327: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 4; /* 0x160C5329: add dword ptr [eax], 4 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x4) = edx; /* 0x160C532C: mov dword ptr [eax + 4], edx */
    ecx = MEM32(esi + 0xC); /* 0x160C532F: mov ecx, dword ptr [esi + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x160C5332: mov dword ptr [eax + 0xc], ecx */
    edx = MEM32(esi + 0x10); /* 0x160C5335: mov edx, dword ptr [esi + 0x10] */
    edi = POP32_VAL(esp); /* 0x160C5338: pop edi */
    MEM32(eax + 0x10) = edx; /* 0x160C5339: mov dword ptr [eax + 0x10], edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C533C: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5350u);

L_160C5350:
    eax = edi; /* 0x160C5350: mov eax, edi */
    RECOMP_CALL(sub_160C52F0); /* 0x160C5352: call 0x160c52f0 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x160C5357: mov eax, edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5359: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5360u);

L_160C5360:
    edi = edi; /* 0x160C5360: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C5362: push ebp */
    ebp = esp; /* 0x160C5363: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x160C5365: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160C5369: push ebx */
    ebx = edx; /* 0x160C536A: mov ebx, edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5386; /* 0x160C536C: jne 0x160c5386 */
L_160C536E:
    eax = (uint32_t)LO8(eax); /* 0x160C536E: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160C5371: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160C5373: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x160C5375: cdq  */
    PUSH32(esp, 0x11u); /* 0x160C5376: push 0x11 */
    PUSH32(esp, edx); /* 0x160C5378: push edx */
    PUSH32(esp, eax); /* 0x160C5379: push eax */
    eax = ecx; /* 0x160C537A: mov eax, ecx */
    RECOMP_CALL(sub_16125120); /* 0x160C537C: call 0x16125120 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x160C5381: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C5382: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C5383: ret 4 */
L_160C5386:
    /* test LO8(eax), LO8(eax) */ /* 0x160C5386: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C53A0; /* 0x160C5388: je 0x160c53a0 */
L_160C538A:
    fp_push(1.0); /* 0x160C538A: fld1  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160C538C: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x160C538F: fstp qword ptr [esp] */
    eax = ecx; /* 0x160C5392: mov eax, ecx */
    PUSH32(esp, 0x11u); /* 0x160C5394: push 0x11 */
    RECOMP_CALL(sub_16125040); /* 0x160C5396: call 0x16125040 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x160C539B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C539C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C539D: ret 4 */
L_160C53A0:
    fp_push(0.0); /* 0x160C53A0: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160C53A2: sub esp, 8 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x160C53A5: fstp qword ptr [esp] */
    eax = ecx; /* 0x160C53A8: mov eax, ecx */
    PUSH32(esp, 0x11u); /* 0x160C53AA: push 0x11 */
    RECOMP_CALL(sub_16125040); /* 0x160C53AC: call 0x16125040 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x160C53B1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C53B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C53B3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C53C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C53C0u);

L_160C53C0:
    ecx = MEM32(eax + 0x30); /* 0x160C53C0: mov ecx, dword ptr [eax + 0x30] */
    /* cmp ecx, MEM32(eax + 0x38) */ /* 0x160C53C3: cmp ecx, dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C53D6; /* 0x160C53C6: jne 0x160c53d6 */
L_160C53C8:
    edx = MEM32(eax + 0x34); /* 0x160C53C8: mov edx, dword ptr [eax + 0x34] */
    /* cmp edx, MEM32(eax + 0x3C) */ /* 0x160C53CB: cmp edx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C53D6; /* 0x160C53CE: jne 0x160c53d6 */
L_160C53D0:
    eax = 1; /* 0x160C53D0: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C53D5: ret  */
L_160C53D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C53D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C53D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C53E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C53E0u);

L_160C53E0:
    edi = edi; /* 0x160C53E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C53E2: push ebp */
    ebp = esp; /* 0x160C53E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x160C53E5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x11u); /* 0x160C53E8: push 0x11 */
    PUSH32(esp, eax); /* 0x160C53EA: push eax */
    eax = MEM32(ebp + 0x14); /* 0x160C53EB: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x160C53EE: push 0 */
    PUSH32(esp, 0); /* 0x160C53F0: push 0 */
    PUSH32(esp, ecx); /* 0x160C53F2: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x160C53F3: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x160C53F6: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160C53F7: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160C53FA: push eax */
    PUSH32(esp, ecx); /* 0x160C53FB: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160C53FC: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160C53FF: push edx */
    RECOMP_CALL(sub_160DD420); /* 0x160C5400: call 0x160dd420 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160C5405: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C5407: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160C5408: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_160C5440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5440u);

L_160C5440:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C5440: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5459; /* 0x160C5443: je 0x160c5459 */
L_160C5445:
    eax = MEM32(ecx + 0x40); /* 0x160C5445: mov eax, dword ptr [ecx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x160C5448: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x160C544B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x160C544D: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C545C; /* 0x160C544F: je 0x160c545c */
L_160C5451:
    ecx = MEM32(ecx + 0x68); /* 0x160C5451: mov ecx, dword ptr [ecx + 0x68] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C5454: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5445; /* 0x160C5457: jne 0x160c5445 */
L_160C5459:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160C5459: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C545B: ret  */
L_160C545C:
    SET_LO8(eax, 1); /* 0x160C545C: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C545E: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5470u);

L_160C5470:
    edi = edi; /* 0x160C5470: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C5472: push ebp */
    ebp = esp; /* 0x160C5473: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160C5475: push ecx */
    PUSH32(esp, 0x11u); /* 0x160C5476: push 0x11 */
    PUSH32(esp, eax); /* 0x160C5478: push eax */
    eax = MEM32(ebp + 0x18); /* 0x160C5479: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x160C547C: push ecx */
    ecx = MEM32(ebp + 0x14); /* 0x160C547D: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x160C5480: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160C5481: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160C5484: push eax */
    eax = MEM32(ebp + 0x8); /* 0x160C5485: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x160C5488: push ecx */
    PUSH32(esp, edx); /* 0x160C5489: push edx */
    PUSH32(esp, eax); /* 0x160C548A: push eax */
    eax = MEM32(ebp + 0x10); /* 0x160C548B: mov eax, dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_160DCC50); /* 0x160C548E: call 0x160dcc50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x160C5493: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5494: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160C5495: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_160C54A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C54A0u);

L_160C54A0:
    eax = MEM32(edx + 0x40); /* 0x160C54A0: mov eax, dword ptr [edx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x160C54A3: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C54A8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160C54AA: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C54D2; /* 0x160C54AC: je 0x160c54d2 */
L_160C54AE:
    fp_push(0.0); /* 0x160C54AE: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0xD0)); /* 0x160C54B0: fcomp qword ptr [edx + 0xd0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x160C54B6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x160C54B8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_160C54D2; /* 0x160C54BB: jp 0x160c54d2 */
L_160C54BD:
    fp_push(1.0); /* 0x160C54BD: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0xD8)); /* 0x160C54BF: fcomp qword ptr [edx + 0xd8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x160C54C5: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x160C54C7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C54D2; /* 0x160C54CA: jne 0x160c54d2 */
L_160C54CC:
    eax = 1; /* 0x160C54CC: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C54D1: ret  */
L_160C54D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C54D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C54D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C54E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C54E0u);

L_160C54E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C54E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x8), eax */ /* 0x160C54E2: cmp dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C550C; /* 0x160C54E5: jbe 0x160c550c */
L_160C54E7:
    PUSH32(esp, esi); /* 0x160C54E7: push esi */
    goto L_160C54F0; /* 0x160C54E8: jmp 0x160c54f0 */
L_160C54F0:
    esi = MEM32(ecx + 0xC); /* 0x160C54F0: mov esi, dword ptr [ecx + 0xc] */
    esi = MEM32(esi + eax * 4); /* 0x160C54F3: mov esi, dword ptr [esi + eax*4] */
    MEM32(esi + 0x88) = ecx; /* 0x160C54F6: mov dword ptr [esi + 0x88], ecx */
    esi = MEM32(ecx + 0xC); /* 0x160C54FC: mov esi, dword ptr [ecx + 0xc] */
    esi = MEM32(esi + eax * 4); /* 0x160C54FF: mov esi, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160C5502: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0xC) = edx; /* 0x160C5503: mov dword ptr [esi + 0xc], edx */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x160C5506: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160C54F0; /* 0x160C5509: jb 0x160c54f0 */
L_160C550B:
    esi = POP32_VAL(esp); /* 0x160C550B: pop esi */
L_160C550C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C550C: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5520u);

L_160C5520:
    edi = edi; /* 0x160C5520: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C5522: push ebp */
    ebp = esp; /* 0x160C5523: mov ebp, esp */
    PUSH32(esp, 0x11u); /* 0x160C5525: push 0x11 */
    PUSH32(esp, eax); /* 0x160C5527: push eax */
    eax = MEM32(ebp + 0x14); /* 0x160C5528: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x160C552B: push 0 */
    PUSH32(esp, 0); /* 0x160C552D: push 0 */
    PUSH32(esp, ecx); /* 0x160C552F: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x160C5530: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x160C5533: push edx */
    edx = MEM32(ebp + 0xC); /* 0x160C5534: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160C5537: push eax */
    PUSH32(esp, ecx); /* 0x160C5538: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160C5539: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160C553C: push edx */
    RECOMP_CALL(sub_160DD420); /* 0x160C553D: call 0x160dd420 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160C5542: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160C5543: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_160C5550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5550u);

L_160C5550:
    /* test eax, eax */ /* 0x160C5550: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5558; /* 0x160C5552: je 0x160c5558 */
L_160C5554:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x160C5554: add eax, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5557: ret  */
L_160C5558:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C5558: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C555A: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5560u);

L_160C5560:
    ecx = MEM32(eax + 0x4C); /* 0x160C5560: mov ecx, dword ptr [eax + 0x4c] */
    edx = MEM32(ecx * 4 + 0x160217A0); /* 0x160C5563: mov edx, dword ptr [ecx*4 + 0x160217a0] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x70u);
    edx = edx & 0x70u; /* 0x160C556A: and edx, 0x70 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C556D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(edx), 0x60u */ /* 0x160C556F: cmp dl, 0x60 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x60u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160C5572: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5575: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5580u);

L_160C5580:
    ecx = MEM32(eax + 0x4C); /* 0x160C5580: mov ecx, dword ptr [eax + 0x4c] */
    eax = MEM32(ecx * 4 + 0x160217A0); /* 0x160C5583: mov eax, dword ptr [ecx*4 + 0x160217a0] */
    if (9u) _cf = (((eax) >> 8) & 1u); /* 0x160C558A: shr eax, 9 */
    if (9u) { _flag_a = recomp_flags_pack((eax >> 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 9u; /* 0x160C558A: shr eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x160C558D: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5590: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C55A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C55A0u);

L_160C55A0:
    edi = edi; /* 0x160C55A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C55A2: push ebp */
    ebp = esp; /* 0x160C55A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160C55A5: push ecx */
    PUSH32(esp, esi); /* 0x160C55A6: push esi */
    PUSH32(esp, edi); /* 0x160C55A7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160C55A8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x160C55AA: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x160C55AC: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x160C55AF: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C5627; /* 0x160C55B2: jbe 0x160c5627 */
L_160C55B4:
    ecx = esi * 4; /* 0x160C55B4: lea ecx, [esi*4] */
    PUSH32(esp, ebx); /* 0x160C55BB: push ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x160C55BC: mov dword ptr [ebp - 4], ecx */
    goto L_160C55C4; /* 0x160C55BF: jmp 0x160c55c4 */
L_160C55C1:
    eax = MEM32(ebp + 0x8); /* 0x160C55C1: mov eax, dword ptr [ebp + 8] */
L_160C55C4:
    ecx = MEM32(ebp + 0x10); /* 0x160C55C4: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(eax + 0x1C); /* 0x160C55C7: mov edx, dword ptr [eax + 0x1c] */
    ecx = MEM32(ecx + edi * 4); /* 0x160C55CA: mov ecx, dword ptr [ecx + edi*4] */
    ebx = MEM32(ebp + (-0x4)); /* 0x160C55CD: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebx + edx) = ecx; /* 0x160C55D0: mov dword ptr [ebx + edx], ecx */
    eax = MEM32(eax + 0x29C); /* 0x160C55D3: mov eax, dword ptr [eax + 0x29c] */
    /* test eax, eax */ /* 0x160C55D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C561B; /* 0x160C55DB: je 0x160c561b */
L_160C55DD:
    ebx = MEM32(eax + 0x4); /* 0x160C55DD: mov ebx, dword ptr [eax + 4] */
    ecx = esi; /* 0x160C55E0: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x160C55E2: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 1; /* 0x160C55E5: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x160C55EA: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x160C55EA: shl edx, cl */
    ecx = esi; /* 0x160C55EC: mov ecx, esi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x160C55EE: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x160C55EE: shr ecx, 5 */
    ecx = ebx + ecx * 4; /* 0x160C55F1: lea ecx, [ebx + ecx*4] */
    /* test MEM32(ecx), edx */ /* 0x160C55F4: test dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C561B; /* 0x160C55F6: jne 0x160c561b */
L_160C55F8:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1; /* 0x160C55F8: inc dword ptr [eax + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ecx) | edx)); _flag_b = (uint32_t)((MEM32(ecx) | edx));
    MEM32(ecx) = MEM32(ecx) | edx; /* 0x160C55FB: or dword ptr [ecx], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x10); /* 0x160C55FD: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C5600: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5609; /* 0x160C5603: je 0x160c5609 */
L_160C5605:
    /* cmp esi, ecx */ /* 0x160C5605: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C560C; /* 0x160C5607: jae 0x160c560c */
L_160C5609:
    MEM32(eax + 0x10) = esi; /* 0x160C5609: mov dword ptr [eax + 0x10], esi */
L_160C560C:
    ecx = MEM32(eax + 0x14); /* 0x160C560C: mov ecx, dword ptr [eax + 0x14] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C560F: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5618; /* 0x160C5612: je 0x160c5618 */
L_160C5614:
    /* cmp esi, ecx */ /* 0x160C5614: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C561B; /* 0x160C5616: jbe 0x160c561b */
L_160C5618:
    MEM32(eax + 0x14) = esi; /* 0x160C5618: mov dword ptr [eax + 0x14], esi */
L_160C561B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x160C561B: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x160C561F: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x160C5620: inc esi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x160C5621: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160C55C1; /* 0x160C5624: jb 0x160c55c1 */
L_160C5626:
    ebx = POP32_VAL(esp); /* 0x160C5626: pop ebx */
L_160C5627:
    edi = POP32_VAL(esp); /* 0x160C5627: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C5628: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160C562A: pop esi */
    esp = ebp; /* 0x160C562B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C562D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C562E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160C5640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5640u);

L_160C5640:
    edi = edi; /* 0x160C5640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C5642: push ebp */
    ebp = esp; /* 0x160C5643: mov ebp, esp */
    /* test eax, eax */ /* 0x160C5645: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C564F; /* 0x160C5647: jne 0x160c564f */
L_160C5649:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160C5649: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebp = POP32_VAL(esp); /* 0x160C564B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C564C: ret 4 */
L_160C564F:
    ecx = 0xAu; /* 0x160C564F: mov ecx, 0xa */
L_160C5654:
    /* test eax, eax */ /* 0x160C5654: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5662; /* 0x160C5656: je 0x160c5662 */
L_160C5658:
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x160C5658: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5662; /* 0x160C565B: jne 0x160c5662 */
L_160C565D:
    eax = MEM32(eax + 0x20); /* 0x160C565D: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_160C5654; /* 0x160C5660: jmp 0x160c5654 */
L_160C5662:
    edx = MEM32(eax + 0x4); /* 0x160C5662: mov edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C5665: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x160C5667: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x160C566A: sete cl */
    SET_LO8(eax, LO8(ecx)); /* 0x160C566D: mov al, cl */
    ebp = POP32_VAL(esp); /* 0x160C566F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C5670: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C5680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5680u);

L_160C5680:
    edi = edi; /* 0x160C5680: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C5682: push ebp */
    ebp = esp; /* 0x160C5683: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160C5685: push ecx */
    eax = MEM32(ecx); /* 0x160C5686: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x28); /* 0x160C5688: mov eax, dword ptr [eax + 0x28] */
    edx = ebp + (-0x4); /* 0x160C568B: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x160C568E: push edx */
    RECOMP_ICALL(eax); /* 0x160C568F: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(eax)); /* 0x160C5691: mov al, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x160C5693: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x160C5695: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C5697: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5698: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C56A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C56A0u);

L_160C56A0:
    /* test eax, eax */ /* 0x160C56A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C56B6; /* 0x160C56A2: je 0x160c56b6 */
L_160C56A4:
    /* cmp eax, 1 */ /* 0x160C56A4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C56B6; /* 0x160C56A7: je 0x160c56b6 */
L_160C56A9:
    /* cmp eax, 4 */ /* 0x160C56A9: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C56B6; /* 0x160C56AC: je 0x160c56b6 */
L_160C56AE:
    /* cmp eax, 5 */ /* 0x160C56AE: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C56B6; /* 0x160C56B1: je 0x160c56b6 */
L_160C56B3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C56B3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C56B5: ret  */
L_160C56B6:
    eax = 1; /* 0x160C56B6: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C56BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C56D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C56D0u);

L_160C56D0:
    edi = edi; /* 0x160C56D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C56D2: push ebp */
    ebp = esp; /* 0x160C56D3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160C56D5: push ecx */
    eax = MEM32(ecx); /* 0x160C56D6: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x28); /* 0x160C56D8: mov eax, dword ptr [eax + 0x28] */
    edx = ebp + (-0x4); /* 0x160C56DB: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x160C56DE: push edx */
    RECOMP_ICALL(eax); /* 0x160C56DF: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(eax)); /* 0x160C56E1: mov al, byte ptr [eax] */
    if (1u) _cf = (((LO8(eax)) >> 0) & 1u); /* 0x160C56E3: shr al, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> 1u); /* 0x160C56E3: shr al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x160C56E5: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x160C56E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C56E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C56EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C56F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C56F0u);

L_160C56F0:
    edi = edi; /* 0x160C56F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C56F2: push ebp */
    ebp = esp; /* 0x160C56F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x160C56F5: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x11u); /* 0x160C56F8: push 0x11 */
    PUSH32(esp, eax); /* 0x160C56FA: push eax */
    eax = MEM32(ebp + 0x10); /* 0x160C56FB: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x160C56FE: push 0 */
    PUSH32(esp, 0); /* 0x160C5700: push 0 */
    PUSH32(esp, 0); /* 0x160C5702: push 0 */
    PUSH32(esp, ecx); /* 0x160C5704: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x160C5705: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x160C5708: push edx */
    PUSH32(esp, eax); /* 0x160C5709: push eax */
    PUSH32(esp, ecx); /* 0x160C570A: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160C570B: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_160DD420); /* 0x160C570E: call 0x160dd420 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160C5713: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C5715: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5716: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160C5720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5720u);

L_160C5720:
    /* test ecx, ecx */ /* 0x160C5720: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C572D; /* 0x160C5722: jbe 0x160c572d */
L_160C5724:
    PUSH32(esp, edi); /* 0x160C5724: push edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160C5725: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x160C5728: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x160C572A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x160C572C: pop edi */
L_160C572D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C572D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C572F: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5740u);

L_160C5740:
    ecx = esi; /* 0x160C5740: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x160C5742: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 1; /* 0x160C5745: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x160C574A: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x160C574A: shl edx, cl */
    PUSH32(esp, edi); /* 0x160C574C: push edi */
    edi = MEM32(eax + 0x4); /* 0x160C574D: mov edi, dword ptr [eax + 4] */
    ecx = esi; /* 0x160C5750: mov ecx, esi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x160C5752: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x160C5752: shr ecx, 5 */
    ecx = edi + ecx * 4; /* 0x160C5755: lea ecx, [edi + ecx*4] */
    edi = POP32_VAL(esp); /* 0x160C5758: pop edi */
    /* test MEM32(ecx), edx */ /* 0x160C5759: test dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C5780; /* 0x160C575B: jne 0x160c5780 */
L_160C575D:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1; /* 0x160C575D: inc dword ptr [eax + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ecx) | edx)); _flag_b = (uint32_t)((MEM32(ecx) | edx));
    MEM32(ecx) = MEM32(ecx) | edx; /* 0x160C5760: or dword ptr [ecx], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x10); /* 0x160C5762: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C5765: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C576E; /* 0x160C5768: je 0x160c576e */
L_160C576A:
    /* cmp esi, ecx */ /* 0x160C576A: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C5771; /* 0x160C576C: jae 0x160c5771 */
L_160C576E:
    MEM32(eax + 0x10) = esi; /* 0x160C576E: mov dword ptr [eax + 0x10], esi */
L_160C5771:
    ecx = MEM32(eax + 0x14); /* 0x160C5771: mov ecx, dword ptr [eax + 0x14] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C5774: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C577D; /* 0x160C5777: je 0x160c577d */
L_160C5779:
    /* cmp esi, ecx */ /* 0x160C5779: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C5780; /* 0x160C577B: jbe 0x160c5780 */
L_160C577D:
    MEM32(eax + 0x14) = esi; /* 0x160C577D: mov dword ptr [eax + 0x14], esi */
L_160C5780:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C5780: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5782: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5790u);

L_160C5790:
    ecx = MEM32(eax + 0x1C); /* 0x160C5790: mov ecx, dword ptr [eax + 0x1c] */
    MEM32(ecx + esi * 4) = edx; /* 0x160C5793: mov dword ptr [ecx + esi*4], edx */
    eax = MEM32(eax + 0x29C); /* 0x160C5796: mov eax, dword ptr [eax + 0x29c] */
    /* test eax, eax */ /* 0x160C579C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C57E0; /* 0x160C579E: je 0x160c57e0 */
L_160C57A0:
    ecx = esi; /* 0x160C57A0: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x160C57A2: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 1; /* 0x160C57A5: mov edx, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x160C57AA: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x160C57AA: shl edx, cl */
    PUSH32(esp, edi); /* 0x160C57AC: push edi */
    edi = MEM32(eax + 0x4); /* 0x160C57AD: mov edi, dword ptr [eax + 4] */
    ecx = esi; /* 0x160C57B0: mov ecx, esi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x160C57B2: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x160C57B2: shr ecx, 5 */
    ecx = edi + ecx * 4; /* 0x160C57B5: lea ecx, [edi + ecx*4] */
    edi = POP32_VAL(esp); /* 0x160C57B8: pop edi */
    /* test MEM32(ecx), edx */ /* 0x160C57B9: test dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C57E0; /* 0x160C57BB: jne 0x160c57e0 */
L_160C57BD:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + 1; /* 0x160C57BD: inc dword ptr [eax + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((MEM32(ecx) | edx)); _flag_b = (uint32_t)((MEM32(ecx) | edx));
    MEM32(ecx) = MEM32(ecx) | edx; /* 0x160C57C0: or dword ptr [ecx], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax + 0x10); /* 0x160C57C2: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C57C5: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C57CE; /* 0x160C57C8: je 0x160c57ce */
L_160C57CA:
    /* cmp esi, ecx */ /* 0x160C57CA: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C57D1; /* 0x160C57CC: jae 0x160c57d1 */
L_160C57CE:
    MEM32(eax + 0x10) = esi; /* 0x160C57CE: mov dword ptr [eax + 0x10], esi */
L_160C57D1:
    ecx = MEM32(eax + 0x14); /* 0x160C57D1: mov ecx, dword ptr [eax + 0x14] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x160C57D4: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C57DD; /* 0x160C57D7: je 0x160c57dd */
L_160C57D9:
    /* cmp esi, ecx */ /* 0x160C57D9: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C57E0; /* 0x160C57DB: jbe 0x160c57e0 */
L_160C57DD:
    MEM32(eax + 0x14) = esi; /* 0x160C57DD: mov dword ptr [eax + 0x14], esi */
L_160C57E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C57E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C57E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C57F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C57F0u);

L_160C57F0:
    edi = edi; /* 0x160C57F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C57F2: push ebp */
    ebp = esp; /* 0x160C57F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160C57F5: push ecx */
    eax = MEM32(ecx); /* 0x160C57F6: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x28); /* 0x160C57F8: mov eax, dword ptr [eax + 0x28] */
    edx = ebp + (-0x4); /* 0x160C57FB: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x160C57FE: push edx */
    RECOMP_ICALL(eax); /* 0x160C57FF: call eax */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(eax)); /* 0x160C5801: mov al, byte ptr [eax] */
    if (6u) _cf = (((LO8(eax)) >> 5) & 1u); /* 0x160C5803: shr al, 6 */
    if (6u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> 6u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> 6u); /* 0x160C5803: shr al, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x160C5806: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esp = ebp; /* 0x160C5808: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C580A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C580B: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5820u);

L_160C5820:
    MEM32(eax + 0xC) = 4; /* 0x160C5820: mov dword ptr [eax + 0xc], 4 */
    ecx = eax + 0x18; /* 0x160C5827: lea ecx, [eax + 0x18] */
    MEM32(eax + 0x8) = ecx; /* 0x160C582A: mov dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C582D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x10) = ecx; /* 0x160C582F: mov dword ptr [eax + 0x10], ecx */
    MEM8(eax + 0x14) = (uint8_t)(LO8(ecx)); /* 0x160C5832: mov byte ptr [eax + 0x14], cl */
    PUSH32(esp, edi); /* 0x160C5835: push edi */
    SET_LO8(edx, 1); /* 0x160C5836: mov dl, 1 */
    MEM8(eax + 0x15) = (uint8_t)(LO8(edx)); /* 0x160C5838: mov byte ptr [eax + 0x15], dl */
    MEM32(eax + 0x1E8) = 4; /* 0x160C583B: mov dword ptr [eax + 0x1e8], 4 */
    MEM32(eax + 0x1EC) = ecx; /* 0x160C5845: mov dword ptr [eax + 0x1ec], ecx */
    MEM8(eax + 0x1F0) = (uint8_t)(LO8(ecx)); /* 0x160C584B: mov byte ptr [eax + 0x1f0], cl */
    MEM8(eax + 0x1F1) = (uint8_t)(LO8(edx)); /* 0x160C5851: mov byte ptr [eax + 0x1f1], dl */
    edi = eax + 0x1F4; /* 0x160C5857: lea edi, [eax + 0x1f4] */
    MEM32(eax + 0x1E4) = edi; /* 0x160C585D: mov dword ptr [eax + 0x1e4], edi */
    MEM32(eax + 0x54) = ecx; /* 0x160C5863: mov dword ptr [eax + 0x54], ecx */
    MEM8(eax + 0x244) = (uint8_t)(LO8(ecx)); /* 0x160C5866: mov byte ptr [eax + 0x244], cl */
    MEM8(eax + 0x246) = (uint8_t)(LO8(ecx)); /* 0x160C586C: mov byte ptr [eax + 0x246], cl */
    MEM32(eax + 0x58) = ecx; /* 0x160C5872: mov dword ptr [eax + 0x58], ecx */
    MEM32(eax + 0x5C) = ecx; /* 0x160C5875: mov dword ptr [eax + 0x5c], ecx */
    MEM32(eax + 0x60) = ecx; /* 0x160C5878: mov dword ptr [eax + 0x60], ecx */
    MEM32(eax + 0x264) = ecx; /* 0x160C587B: mov dword ptr [eax + 0x264], ecx */
    MEM32(eax + 0x268) = ecx; /* 0x160C5881: mov dword ptr [eax + 0x268], ecx */
    MEM32(eax + 0x26C) = ecx; /* 0x160C5887: mov dword ptr [eax + 0x26c], ecx */
    MEM32(eax + 0x1E0) = ecx; /* 0x160C588D: mov dword ptr [eax + 0x1e0], ecx */
    edi = POP32_VAL(esp); /* 0x160C5893: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5894: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C58A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C58A0u);

L_160C58A0:
    eax = MEM32(esi + 0x60); /* 0x160C58A0: mov eax, dword ptr [esi + 0x60] */
    PUSH32(esp, ebx); /* 0x160C58A3: push ebx */
    PUSH32(esp, eax); /* 0x160C58A4: push eax */
    RECOMP_CALL(sub_161AE0F0); /* 0x160C58A5: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1E0); /* 0x160C58AA: mov ecx, dword ptr [esi + 0x1e0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160C58B0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160C58B2: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x60) = ebx; /* 0x160C58B5: mov dword ptr [esi + 0x60], ebx */
    /* cmp ecx, ebx */ /* 0x160C58B8: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C58CA; /* 0x160C58BA: je 0x160c58ca */
L_160C58BC:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160C58BC: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160C58CA; /* 0x160C58C0: jne 0x160c58ca */
L_160C58C2:
    edx = MEM32(ecx); /* 0x160C58C2: mov edx, dword ptr [ecx] */
    eax = MEM32(edx); /* 0x160C58C4: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160C58C6: push 1 */
    RECOMP_ICALL(eax); /* 0x160C58C8: call eax */
    RECOMP_FLAGS_IN();
L_160C58CA:
    MEM32(esi + 0x1EC) = ebx; /* 0x160C58CA: mov dword ptr [esi + 0x1ec], ebx */
    /* cmp MEM8(esi + 0x1F0), LO8(ebx) */ /* 0x160C58D0: cmp byte ptr [esi + 0x1f0], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x1F0)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C58ED; /* 0x160C58D6: je 0x160c58ed */
L_160C58D8:
    ecx = MEM32(esi + 0x1E4); /* 0x160C58D8: mov ecx, dword ptr [esi + 0x1e4] */
    PUSH32(esp, ecx); /* 0x160C58DE: push ecx */
    RECOMP_CALL(sub_161AE0F0); /* 0x160C58DF: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160C58E4: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x1F0) = (uint8_t)(LO8(ebx)); /* 0x160C58E7: mov byte ptr [esi + 0x1f0], bl */
L_160C58ED:
    MEM32(esi + 0x1E4) = ebx; /* 0x160C58ED: mov dword ptr [esi + 0x1e4], ebx */
    MEM32(esi + 0x1E8) = ebx; /* 0x160C58F3: mov dword ptr [esi + 0x1e8], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x160C58F9: mov dword ptr [esi + 0x10], ebx */
    /* cmp MEM8(esi + 0x14), LO8(ebx) */ /* 0x160C58FC: cmp byte ptr [esi + 0x14], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5910; /* 0x160C58FF: je 0x160c5910 */
L_160C5901:
    edx = MEM32(esi + 0x8); /* 0x160C5901: mov edx, dword ptr [esi + 8] */
    PUSH32(esp, edx); /* 0x160C5904: push edx */
    RECOMP_CALL(sub_161AE0F0); /* 0x160C5905: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160C590A: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x14) = (uint8_t)(LO8(ebx)); /* 0x160C590D: mov byte ptr [esi + 0x14], bl */
L_160C5910:
    MEM32(esi + 0xC) = ebx; /* 0x160C5910: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x160C5913: mov dword ptr [esi + 8], ebx */
    ebx = POP32_VAL(esp); /* 0x160C5916: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C5917: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C5920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5920u);

L_160C5920:
    edi = edi; /* 0x160C5920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C5922: push ebp */
    ebp = esp; /* 0x160C5923: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160C5925: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160C5928: push ebx */
    PUSH32(esp, edi); /* 0x160C5929: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160C592A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x160C592C: push ebx */
    PUSH32(esp, ebx); /* 0x160C592D: push ebx */
    RECOMP_CALL(sub_161AE1EE); /* 0x160C592E: call 0x161ae1ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0008001Fu); /* 0x160C5933: push 0x8001f */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x160C5938: push -1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x160C593A: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_161AE1EE); /* 0x160C593D: call 0x161ae1ee */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x160C5942: push 0x30000 */
    PUSH32(esp, ebx); /* 0x160C5947: push ebx */
    RECOMP_CALL(sub_161AE1EE); /* 0x160C5948: call 0x161ae1ee */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x161B4344); /* 0x160C594D: mov eax, dword ptr [0x161b4344] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x160C5952: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x160C5955: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160C595D; /* 0x160C5957: jge 0x160c595d */
L_160C5959:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C5959: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C5964; /* 0x160C595B: jmp 0x160c5964 */
L_160C595D:
    PUSH32(esp, eax); /* 0x160C595D: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160C595E: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160C5964:
    ecx = MEM32(ebp + 0x10); /* 0x160C5964: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x160C5967: mov dword ptr [eax + 4], ecx */
    edx = MEM32(esi + 0x60); /* 0x160C596A: mov edx, dword ptr [esi + 0x60] */
    PUSH32(esp, edx); /* 0x160C596D: push edx */
    RECOMP_CALL(sub_161AE0F0); /* 0x160C596E: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x160C5973: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x160C5976: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160C5979: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x3Cu); /* 0x160C597C: push 0x3c */
    edx = esi + 0x68; /* 0x160C597E: lea edx, [esi + 0x68] */
    PUSH32(esp, ebx); /* 0x160C5981: push ebx */
    PUSH32(esp, edx); /* 0x160C5982: push edx */
    MEM32(esi + 0x50) = eax; /* 0x160C5983: mov dword ptr [esi + 0x50], eax */
    MEM32(esi + 0x54) = ecx; /* 0x160C5986: mov dword ptr [esi + 0x54], ecx */
    MEM32(esi + 0x60) = ebx; /* 0x160C5989: mov dword ptr [esi + 0x60], ebx */
    MEM8(esi + 0x240) = (uint8_t)(LO8(ebx)); /* 0x160C598C: mov byte ptr [esi + 0x240], bl */
    MEM8(esi + 0x241) = (uint8_t)(LO8(ebx)); /* 0x160C5992: mov byte ptr [esi + 0x241], bl */
    MEM8(esi + 0x242) = (uint8_t)(LO8(ebx)); /* 0x160C5998: mov byte ptr [esi + 0x242], bl */
    MEM8(esi + 0x243) = (uint8_t)(LO8(ebx)); /* 0x160C599E: mov byte ptr [esi + 0x243], bl */
    MEM8(esi + 0x245) = (uint8_t)(1); /* 0x160C59A4: mov byte ptr [esi + 0x245], 1 */
    MEM8(esi + 0x244) = (uint8_t)(LO8(ebx)); /* 0x160C59AB: mov byte ptr [esi + 0x244], bl */
    MEM32(esi + 0x248) = ebx; /* 0x160C59B1: mov dword ptr [esi + 0x248], ebx */
    MEM32(esi + 0x24C) = ebx; /* 0x160C59B7: mov dword ptr [esi + 0x24c], ebx */
    MEM32(esi + 0x250) = ebx; /* 0x160C59BD: mov dword ptr [esi + 0x250], ebx */
    MEM32(esi + 0x254) = ebx; /* 0x160C59C3: mov dword ptr [esi + 0x254], ebx */
    MEM32(esi + 0x258) = ebx; /* 0x160C59C9: mov dword ptr [esi + 0x258], ebx */
    MEM32(esi + 0x25C) = ebx; /* 0x160C59CF: mov dword ptr [esi + 0x25c], ebx */
    MEM32(esi + 0x260) = ebx; /* 0x160C59D5: mov dword ptr [esi + 0x260], ebx */
    MEM32(esi + 0x264) = ebx; /* 0x160C59DB: mov dword ptr [esi + 0x264], ebx */
    MEM32(esi + 0x268) = ebx; /* 0x160C59E1: mov dword ptr [esi + 0x268], ebx */
    MEM32(esi + 0x26C) = ebx; /* 0x160C59E7: mov dword ptr [esi + 0x26c], ebx */
    RECOMP_CALL(sub_161AE3CC); /* 0x160C59ED: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160C59F2: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x114u); /* 0x160C59F5: push 0x114 */
    eax = esi + 0xA4; /* 0x160C59FA: lea eax, [esi + 0xa4] */
    PUSH32(esp, ebx); /* 0x160C5A00: push ebx */
    PUSH32(esp, eax); /* 0x160C5A01: push eax */
    RECOMP_CALL(sub_161AE3CC); /* 0x160C5A02: call 0x161ae3cc */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1B8) = ebx; /* 0x160C5A07: mov dword ptr [esi + 0x1b8], ebx */
    MEM32(esi + 0x1BC) = ebx; /* 0x160C5A0D: mov dword ptr [esi + 0x1bc], ebx */
    MEM32(esi + 0x1C0) = ebx; /* 0x160C5A13: mov dword ptr [esi + 0x1c0], ebx */
    MEM32(esi + 0x1C8) = ebx; /* 0x160C5A19: mov dword ptr [esi + 0x1c8], ebx */
    MEM32(esi + 0x1CC) = ebx; /* 0x160C5A1F: mov dword ptr [esi + 0x1cc], ebx */
    MEM32(esi + 0x1D0) = ebx; /* 0x160C5A25: mov dword ptr [esi + 0x1d0], ebx */
    MEM32(esi + 0x1D4) = ebx; /* 0x160C5A2B: mov dword ptr [esi + 0x1d4], ebx */
    MEM32(esi + 0x1E0) = ebx; /* 0x160C5A31: mov dword ptr [esi + 0x1e0], ebx */
    MEM32(esi + 0x1DC) = ebx; /* 0x160C5A37: mov dword ptr [esi + 0x1dc], ebx */
    MEM32(esi) = ebx; /* 0x160C5A3D: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x160C5A3F: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x160C5A42: mov dword ptr [esi + 0x10], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160C5A45: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test MEM8(esi + 0x50), 1 */ /* 0x160C5A48: test byte ptr [esi + 0x50], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x50)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x38) = ebx; /* 0x160C5A4C: mov dword ptr [esi + 0x38], ebx */
    MEM32(esi + 0x40) = ebx; /* 0x160C5A4F: mov dword ptr [esi + 0x40], ebx */
    MEM32(esi + 0x44) = ebx; /* 0x160C5A52: mov dword ptr [esi + 0x44], ebx */
    MEM32(esi + 0x48) = ebx; /* 0x160C5A55: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x4C) = ebx; /* 0x160C5A58: mov dword ptr [esi + 0x4c], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5A64; /* 0x160C5A5B: je 0x160c5a64 */
L_160C5A5D:
    MEM8(esi + 0x244) = (uint8_t)(1); /* 0x160C5A5D: mov byte ptr [esi + 0x244], 1 */
L_160C5A64:
    edi = MEM32(esi + 0x54); /* 0x160C5A64: mov edi, dword ptr [esi + 0x54] */
    PUSH32(esp, 1); /* 0x160C5A67: push 1 */
    RECOMP_CALL(sub_16189770); /* 0x160C5A69: call 0x16189770 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160C5A6E: mov edi, eax */
    /* cmp edi, ebx */ /* 0x160C5A70: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_160C5B56; /* 0x160C5A72: jl 0x160c5b56 */
L_160C5A78:
    PUSH32(esp, esi); /* 0x160C5A78: push esi */
    RECOMP_CALL(sub_16109D10); /* 0x160C5A79: call 0x16109d10 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x160C5A7E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x160C5A80: mov dword ptr [ebp + 0x10], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_160C5B53; /* 0x160C5A83: jl 0x160c5b53 */
L_160C5A89:
    PUSH32(esp, esi); /* 0x160C5A89: push esi */
    RECOMP_CALL(sub_1610E3B0); /* 0x160C5A8A: call 0x1610e3b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C5A8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5A9A; /* 0x160C5A91: je 0x160c5a9a */
L_160C5A93:
    MEM8(esi + 0x241) = (uint8_t)(1); /* 0x160C5A93: mov byte ptr [esi + 0x241], 1 */
L_160C5A9A:
    ecx = MEM32(esi + 0x54); /* 0x160C5A9A: mov ecx, dword ptr [esi + 0x54] */
    PUSH32(esp, ebx); /* 0x160C5A9D: push ebx */
    PUSH32(esp, ecx); /* 0x160C5A9E: push ecx */
    RECOMP_CALL(sub_16189EC0); /* 0x160C5A9F: call 0x16189ec0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x160C5AA4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x160C5AA6: mov dword ptr [ebp + 0x10], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_160C5B53; /* 0x160C5AA9: jl 0x160c5b53 */
L_160C5AAF:
    /* cmp MEM8(esi + 0x241), LO8(ebx) */ /* 0x160C5AAF: cmp byte ptr [esi + 0x241], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x241)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5B53; /* 0x160C5AB5: jne 0x160c5b53 */
L_160C5ABB:
    edx = MEM32(esi); /* 0x160C5ABB: mov edx, dword ptr [esi] */
    edi = MEM32(ebp + 0x14); /* 0x160C5ABD: mov edi, dword ptr [ebp + 0x14] */
    MEM32(edi) = edx; /* 0x160C5AC0: mov dword ptr [edi], edx */
    eax = MEM32(esi + 0x264); /* 0x160C5AC2: mov eax, dword ptr [esi + 0x264] */
    ecx = MEM32(esi + 0x54); /* 0x160C5AC8: mov ecx, dword ptr [esi + 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160C5ACB: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x160C5ACD: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 8); /* 0x160C5ACF: push 8 */
    PUSH32(esp, eax); /* 0x160C5AD1: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x160C5AD2: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_161A8F81); /* 0x160C5AD5: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x160C5ADA: mov dword ptr [edi + 4], eax */
    /* cmp eax, ebx */ /* 0x160C5ADD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5AEA; /* 0x160C5ADF: jne 0x160c5aea */
L_160C5AE1:
    MEM32(ebp + 0x10) = 0x8007000Eu; /* 0x160C5AE1: mov dword ptr [ebp + 0x10], 0x8007000e */
    goto L_160C5B53; /* 0x160C5AE8: jmp 0x160c5b53 */
L_160C5AEA:
    ecx = MEM32(esi + 0x264); /* 0x160C5AEA: mov ecx, dword ptr [esi + 0x264] */
    edx = MEM32(esi + 0x60); /* 0x160C5AF0: mov edx, dword ptr [esi + 0x60] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x160C5AF3: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x160C5AF5: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x160C5AF7: push ecx */
    PUSH32(esp, edx); /* 0x160C5AF8: push edx */
    PUSH32(esp, eax); /* 0x160C5AF9: push eax */
    RECOMP_CALL(sub_161AE3C0); /* 0x160C5AFA: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x24C); /* 0x160C5AFF: mov eax, dword ptr [esi + 0x24c] */
    MEM32(edi + 0x8) = eax; /* 0x160C5B05: mov dword ptr [edi + 8], eax */
    ecx = MEM32(esi + 0x250); /* 0x160C5B08: mov ecx, dword ptr [esi + 0x250] */
    MEM32(edi + 0xC) = ecx; /* 0x160C5B0E: mov dword ptr [edi + 0xc], ecx */
    edx = MEM32(esi + 0x254); /* 0x160C5B11: mov edx, dword ptr [esi + 0x254] */
    MEM32(edi + 0x10) = edx; /* 0x160C5B17: mov dword ptr [edi + 0x10], edx */
    eax = MEM32(esi + 0x258); /* 0x160C5B1A: mov eax, dword ptr [esi + 0x258] */
    MEM32(edi + 0x14) = eax; /* 0x160C5B20: mov dword ptr [edi + 0x14], eax */
    ecx = MEM32(esi + 0x260); /* 0x160C5B23: mov ecx, dword ptr [esi + 0x260] */
    MEM32(edi + 0x18) = ecx; /* 0x160C5B29: mov dword ptr [edi + 0x18], ecx */
    edx = MEM32(esi + 0x25C); /* 0x160C5B2C: mov edx, dword ptr [esi + 0x25c] */
    MEM32(edi + 0x1C) = edx; /* 0x160C5B32: mov dword ptr [edi + 0x1c], edx */
    eax = MEM32(esi + 0x248); /* 0x160C5B35: mov eax, dword ptr [esi + 0x248] */
    MEM32(edi + 0x20) = eax; /* 0x160C5B3B: mov dword ptr [edi + 0x20], eax */
    ecx = MEM32(esi + 0x264); /* 0x160C5B3E: mov ecx, dword ptr [esi + 0x264] */
    MEM32(edi + 0x24) = ecx; /* 0x160C5B44: mov dword ptr [edi + 0x24], ecx */
    edx = MEM32(esi + 0x26C); /* 0x160C5B47: mov edx, dword ptr [esi + 0x26c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160C5B4D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x28) = edx; /* 0x160C5B50: mov dword ptr [edi + 0x28], edx */
L_160C5B53:
    edi = MEM32(ebp + 0x10); /* 0x160C5B53: mov edi, dword ptr [ebp + 0x10] */
L_160C5B56:
    RECOMP_CALL(sub_161AE1FA); /* 0x160C5B56: call 0x161ae1fa */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x160C5B5B: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x000B001Fu); /* 0x160C5B5E: push 0xb001f */
    PUSH32(esp, eax); /* 0x160C5B63: push eax */
    RECOMP_CALL(sub_161AE1EE); /* 0x160C5B64: call 0x161ae1ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C5B69: add esp, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x160C5B6C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160C5B7A; /* 0x160C5B6E: jge 0x160c5b7a */
L_160C5B70:
    eax = edi; /* 0x160C5B70: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x160C5B72: pop edi */
    ebx = POP32_VAL(esp); /* 0x160C5B73: pop ebx */
    esp = ebp; /* 0x160C5B74: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C5B76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160C5B77: ret 0x10 */
L_160C5B7A:
    eax = (uint32_t)MEM8(esi + 0x241); /* 0x160C5B7A: movzx eax, byte ptr [esi + 0x241] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160C5B81: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160C5B83: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x160C5B85: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    eax = eax & 0x80004005u; /* 0x160C5B86: and eax, 0x80004005 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160C5B8B: pop ebx */
    esp = ebp; /* 0x160C5B8C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C5B8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160C5B8F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_160C5BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C5BA0u);

L_160C5BA0:
    edi = edi; /* 0x160C5BA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C5BA2: push ebp */
    ebp = esp; /* 0x160C5BA3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160C5BA5: push ecx */
    PUSH32(esp, ecx); /* 0x160C5BA6: push ecx */
    PUSH32(esp, ebx); /* 0x160C5BA7: push ebx */
    PUSH32(esp, esi); /* 0x160C5BA8: push esi */
    PUSH32(esp, edi); /* 0x160C5BA9: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160C5BAA: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM8(edi + 0x241), 0 */ /* 0x160C5BAD: cmp byte ptr [edi + 0x241], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x241)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5BD5; /* 0x160C5BB4: jne 0x160c5bd5 */
L_160C5BB6:
    /* cmp MEM8(edi + 0x240), 0 */ /* 0x160C5BB6: cmp byte ptr [edi + 0x240], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x240)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5BE1; /* 0x160C5BBD: je 0x160c5be1 */
L_160C5BBF:
    eax = MEM32(ebp + 0x10); /* 0x160C5BBF: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x160383B0u); /* 0x160C5BC2: push 0x160383b0 */
    PUSH32(esp, eax); /* 0x160C5BC7: push eax */
    ecx = 0xC15u; /* 0x160C5BC8: mov ecx, 0xc15 */
    RECOMP_CALL(sub_160C8A90); /* 0x160C5BCD: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C5BD2: add esp, 8 */
    _flag_k = FK_ADD;
L_160C5BD5:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160C5BD5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160C5BD8: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5BD9: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5BDA: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5BDB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5BDC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5BDD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5BDE: ret 0xc */
L_160C5BE1:
    ecx = MEM32(edi + 0x54); /* 0x160C5BE1: mov ecx, dword ptr [edi + 0x54] */
    esi = edi + 0x218; /* 0x160C5BE4: lea esi, [edi + 0x218] */
    PUSH32(esp, esi); /* 0x160C5BEA: push esi */
    PUSH32(esp, ecx); /* 0x160C5BEB: push ecx */
    RECOMP_CALL(sub_16189920); /* 0x160C5BEC: call 0x16189920 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C5BF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160C5CE1; /* 0x160C5BF3: jl 0x160c5ce1 */
L_160C5BF9:
    ebx = MEM32(ebp + 0x10); /* 0x160C5BF9: mov ebx, dword ptr [ebp + 0x10] */
    edi = ebx + 0x1C; /* 0x160C5BFC: lea edi, [ebx + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x160C5BFF: add ebx, 0x18 */
    _flag_k = FK_ADD;
L_160C5C02:
    edx = MEM32(esi + 0x10); /* 0x160C5C02: mov edx, dword ptr [esi + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x160C5C05: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edx; /* 0x160C5C08: mov dword ptr [eax], edx */
    ecx = MEM32(esi + 0x14); /* 0x160C5C0A: mov ecx, dword ptr [esi + 0x14] */
    MEM32(eax + 0x4) = ecx; /* 0x160C5C0D: mov dword ptr [eax + 4], ecx */
    edx = MEM32(esi + 0x18); /* 0x160C5C10: mov edx, dword ptr [esi + 0x18] */
    MEM32(eax + 0x8) = edx; /* 0x160C5C13: mov dword ptr [eax + 8], edx */
    ecx = MEM32(esi + 0x1C); /* 0x160C5C16: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, edi); /* 0x160C5C19: push edi */
    MEM32(eax + 0xC) = ecx; /* 0x160C5C1A: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = edx; /* 0x160C5C1D: mov dword ptr [eax + 0x10], edx */
    MEM32(eax + 0x14) = ecx; /* 0x160C5C20: mov dword ptr [eax + 0x14], ecx */
    eax = MEM32(ebp + 0x8); /* 0x160C5C23: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x160C5C26: push ebx */
    RECOMP_CALL(sub_16111410); /* 0x160C5C27: call 0x16111410 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C5C2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160C5CF4; /* 0x160C5C2E: jl 0x160c5cf4 */
L_160C5C34:
    /* cmp MEM32(esi), 1 */ /* 0x160C5C34: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5CA8; /* 0x160C5C37: jne 0x160c5ca8 */
L_160C5C39:
    edx = MEM32(ebp + 0x8); /* 0x160C5C39: mov edx, dword ptr [ebp + 8] */
    SET_LO8(ecx, MEM8(edx + 0x220)); /* 0x160C5C3C: mov cl, byte ptr [edx + 0x220] */
    /* cmp LO8(ecx), 0x7Bu */ /* 0x160C5C42: cmp cl, 0x7b */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5C7A; /* 0x160C5C45: jne 0x160c5c7a */
L_160C5C47:
    /* cmp MEM8(edx + 0x221), 0 */ /* 0x160C5C47: cmp byte ptr [edx + 0x221], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x221)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5C7A; /* 0x160C5C4E: jne 0x160c5c7a */
L_160C5C50:
    /* cmp MEM8(edx + 0x246), 0 */ /* 0x160C5C50: cmp byte ptr [edx + 0x246], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x246)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5C73; /* 0x160C5C57: jne 0x160c5c73 */
L_160C5C59:
    /* cmp MEM32(edx + 0x1DC), 0 */ /* 0x160C5C59: cmp dword ptr [edx + 0x1dc], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1DC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5C73; /* 0x160C5C60: je 0x160c5c73 */
L_160C5C62:
    eax = MEM32(edx + 0x4); /* 0x160C5C62: mov eax, dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x160C5C65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5C73; /* 0x160C5C67: je 0x160c5c73 */
L_160C5C69:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x160C5C69: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C5D19; /* 0x160C5C6D: je 0x160c5d19 */
L_160C5C73:
    MEM8(edx + 0x246) = (uint8_t)(0); /* 0x160C5C73: mov byte ptr [edx + 0x246], 0 */
L_160C5C7A:
    /* cmp LO8(ecx), 0x7Du */ /* 0x160C5C7A: cmp cl, 0x7d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5CAB; /* 0x160C5C7D: jne 0x160c5cab */
L_160C5C7F:
    /* cmp MEM8(edx + 0x221), 0 */ /* 0x160C5C7F: cmp byte ptr [edx + 0x221], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x221)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5CAB; /* 0x160C5C86: jne 0x160c5cab */
L_160C5C88:
    /* cmp MEM32(edx + 0x48), 0 */ /* 0x160C5C88: cmp dword ptr [edx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5CAB; /* 0x160C5C8C: jne 0x160c5cab */
L_160C5C8E:
    eax = MEM32(edx + 0x1DC); /* 0x160C5C8E: mov eax, dword ptr [edx + 0x1dc] */
    /* test eax, eax */ /* 0x160C5C94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5CAB; /* 0x160C5C96: je 0x160c5cab */
L_160C5C98:
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x160C5C98: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5CAB; /* 0x160C5C9B: jne 0x160c5cab */
L_160C5C9D:
    PUSH32(esp, eax); /* 0x160C5C9D: push eax */
    PUSH32(esp, edx); /* 0x160C5C9E: push edx */
    RECOMP_CALL(sub_160C9A80); /* 0x160C5C9F: call 0x160c9a80 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C5CA4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C5CC9; /* 0x160C5CA6: jne 0x160c5cc9 */
L_160C5CA8:
    edx = MEM32(ebp + 0x8); /* 0x160C5CA8: mov edx, dword ptr [ebp + 8] */
L_160C5CAB:
    eax = MEM32(esi); /* 0x160C5CAB: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x160C5CAD: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x160C5CB0: mov dword ptr [ecx], eax */
    fp_push(*(double*)ADDR(edx + 0x220)); /* 0x160C5CB2: fld qword ptr [edx + 0x220] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x8) = _v; } /* 0x160C5CB8: fstp qword ptr [ecx + 8] */
    eax = MEM32(esi); /* 0x160C5CBB: mov eax, dword ptr [esi] */
    /* cmp eax, 0x11u */ /* 0x160C5CBD: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C5CC9; /* 0x160C5CC0: ja 0x160c5cc9 */
L_160C5CC2:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160C86A0)); goto _ljump; }
L_160C5CC9:
    ecx = MEM32(ebp + 0x8); /* 0x160C5CC9: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x54); /* 0x160C5CCC: mov edx, dword ptr [ecx + 0x54] */
    PUSH32(esp, esi); /* 0x160C5CCF: push esi */
    PUSH32(esp, edx); /* 0x160C5CD0: push edx */
    RECOMP_CALL(sub_16189920); /* 0x160C5CD1: call 0x16189920 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C5CD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160C5C02; /* 0x160C5CD8: jge 0x160c5c02 */
L_160C5CDE:
    edi = MEM32(ebp + 0x8); /* 0x160C5CDE: mov edi, dword ptr [ebp + 8] */
L_160C5CE1:
    MEM8(edi + 0x241) = (uint8_t)(1); /* 0x160C5CE1: mov byte ptr [edi + 0x241], 1 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160C5CE8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160C5CEB: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5CEC: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5CED: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5CEE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5CEF: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5CF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5CF1: ret 0xc */
L_160C5CF4:
    eax = MEM32(ebp + 0x10); /* 0x160C5CF4: mov eax, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x160C5CF7: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x160383B0u); /* 0x160C5CFA: push 0x160383b0 */
    PUSH32(esp, eax); /* 0x160C5CFF: push eax */
    ecx = 0xC15u; /* 0x160C5D00: mov ecx, 0xc15 */
    RECOMP_CALL(sub_160C8A90); /* 0x160C5D05: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C5D0A: add esp, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160C5D0D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160C5D10: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5D11: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5D12: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5D13: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5D14: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5D15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5D16: ret 0xc */
L_160C5D19:
    edi = edx; /* 0x160C5D19: mov edi, edx */
    edx = MEM32(edi + 0x4); /* 0x160C5D1B: mov edx, dword ptr [edi + 4] */
    ecx = ebp + 0x8; /* 0x160C5D1E: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x160C5D21: push ecx */
    PUSH32(esp, edx); /* 0x160C5D22: push edx */
    PUSH32(esp, edi); /* 0x160C5D23: push edi */
    RECOMP_CALL(sub_160C9950); /* 0x160C5D24: call 0x160c9950 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C5D29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160C5BBF; /* 0x160C5D2B: jl 0x160c5bbf */
L_160C5D31:
    ecx = MEM32(edi + 0x220); /* 0x160C5D31: mov ecx, dword ptr [edi + 0x220] */
    edx = MEM32(ebp + 0xC); /* 0x160C5D37: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x160C5D3A: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = ecx; /* 0x160C5D3D: mov dword ptr [edx], ecx */
    edi = POP32_VAL(esp); /* 0x160C5D3F: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5D40: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5D41: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5D42: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5D43: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5D44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5D45: ret 0xc */
L_160C5D48:
    SET_LO8(eax, MEM8(edx + 0x221)); /* 0x160C5D48: mov al, byte ptr [edx + 0x221] */
    /* test LO8(eax), LO8(eax) */ /* 0x160C5D4E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C5D62; /* 0x160C5D50: jne 0x160c5d62 */
L_160C5D52:
    eax = (int32_t)(int8_t)MEM8(edx + 0x220); /* 0x160C5D52: movsx eax, byte ptr [edx + 0x220] */
    edi = POP32_VAL(esp); /* 0x160C5D59: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5D5A: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5D5B: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5D5C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5D5D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5D5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5D5F: ret 0xc */
L_160C5D62:
    SET_LO8(ecx, MEM8(edx + 0x222)); /* 0x160C5D62: mov cl, byte ptr [edx + 0x222] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x160C5D68: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C5EC0; /* 0x160C5D6A: jne 0x160c5ec0 */
L_160C5D70:
    /* cmp LO8(eax), 0x3Du */ /* 0x160C5D70: cmp al, 0x3d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5E41; /* 0x160C5D72: jne 0x160c5e41 */
L_160C5D78:
    eax = (int32_t)(int8_t)MEM8(edx + 0x220); /* 0x160C5D78: movsx eax, byte ptr [edx + 0x220] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFDFu; /* 0x160C5D7F: add eax, -0x21 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x5Bu */ /* 0x160C5D82: cmp eax, 0x5b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C5D85: ja 0x160c66cd */
L_160C5D8B:
    eax = (uint32_t)MEM8(eax + 0x160C871C); /* 0x160C5D8B: movzx eax, byte ptr [eax + 0x160c871c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160C86E8)); goto _ljump; }
L_160C5D99:
    eax = 0x15Fu; /* 0x160C5D99: mov eax, 0x15f */
    edi = POP32_VAL(esp); /* 0x160C5D9E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5D9F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5DA0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5DA1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5DA2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5DA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5DA4: ret 0xc */
L_160C5DA7:
    eax = 0x160u; /* 0x160C5DA7: mov eax, 0x160 */
    edi = POP32_VAL(esp); /* 0x160C5DAC: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5DAD: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5DAE: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5DAF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5DB0: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5DB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5DB2: ret 0xc */
L_160C5DB5:
    eax = 0x161u; /* 0x160C5DB5: mov eax, 0x161 */
    edi = POP32_VAL(esp); /* 0x160C5DBA: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5DBB: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5DBC: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5DBD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5DBE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5DBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5DC0: ret 0xc */
L_160C5DC3:
    eax = 0x162u; /* 0x160C5DC3: mov eax, 0x162 */
    edi = POP32_VAL(esp); /* 0x160C5DC8: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5DC9: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5DCA: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5DCB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5DCC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5DCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5DCE: ret 0xc */
L_160C5DD1:
    eax = 0x165u; /* 0x160C5DD1: mov eax, 0x165 */
    edi = POP32_VAL(esp); /* 0x160C5DD6: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5DD7: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5DD8: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5DD9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5DDA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5DDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5DDC: ret 0xc */
L_160C5DDF:
    eax = 0x166u; /* 0x160C5DDF: mov eax, 0x166 */
    edi = POP32_VAL(esp); /* 0x160C5DE4: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5DE5: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5DE6: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5DE7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5DE8: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5DE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5DEA: ret 0xc */
L_160C5DED:
    eax = 0x167u; /* 0x160C5DED: mov eax, 0x167 */
    edi = POP32_VAL(esp); /* 0x160C5DF2: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5DF3: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5DF4: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5DF5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5DF6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5DF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5DF8: ret 0xc */
L_160C5DFB:
    eax = 0x168u; /* 0x160C5DFB: mov eax, 0x168 */
    edi = POP32_VAL(esp); /* 0x160C5E00: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E01: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E02: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E03: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E04: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5E05: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5E06: ret 0xc */
L_160C5E09:
    eax = 0x169u; /* 0x160C5E09: mov eax, 0x169 */
    edi = POP32_VAL(esp); /* 0x160C5E0E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E0F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E10: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E11: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E12: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5E13: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5E14: ret 0xc */
L_160C5E17:
    eax = 0x16Fu; /* 0x160C5E17: mov eax, 0x16f */
    edi = POP32_VAL(esp); /* 0x160C5E1C: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E1D: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E1E: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E1F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E20: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5E21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5E22: ret 0xc */
L_160C5E25:
    eax = 0x16Eu; /* 0x160C5E25: mov eax, 0x16e */
    edi = POP32_VAL(esp); /* 0x160C5E2A: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E2B: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E2C: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E2D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E2E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5E2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5E30: ret 0xc */
L_160C5E33:
    eax = 0x170u; /* 0x160C5E33: mov eax, 0x170 */
    edi = POP32_VAL(esp); /* 0x160C5E38: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E39: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E3A: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E3B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E3C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5E3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5E3E: ret 0xc */
L_160C5E41:
    SET_LO8(ecx, MEM8(edx + 0x220)); /* 0x160C5E41: mov cl, byte ptr [edx + 0x220] */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x160C5E47: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C5E49: jne 0x160c66cd */
L_160C5E4F:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x160C5E4F: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFDAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFDAu; /* 0x160C5E52: add eax, -0x26 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x56u */ /* 0x160C5E55: cmp eax, 0x56 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x56u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C5E58: ja 0x160c66cd */
L_160C5E5E:
    ecx = (uint32_t)MEM8(eax + 0x160C8794); /* 0x160C5E5E: movzx ecx, byte ptr [eax + 0x160c8794] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160C8778)); goto _ljump; }
L_160C5E6C:
    eax = 0x15Du; /* 0x160C5E6C: mov eax, 0x15d */
    edi = POP32_VAL(esp); /* 0x160C5E71: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E72: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E73: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E74: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E75: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5E76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5E77: ret 0xc */
L_160C5E7A:
    eax = 0x15Eu; /* 0x160C5E7A: mov eax, 0x15e */
    edi = POP32_VAL(esp); /* 0x160C5E7F: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E80: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E81: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E82: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E83: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5E84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5E85: ret 0xc */
L_160C5E88:
    eax = 0x163u; /* 0x160C5E88: mov eax, 0x163 */
    edi = POP32_VAL(esp); /* 0x160C5E8D: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E8E: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E8F: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E90: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E91: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5E92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5E93: ret 0xc */
L_160C5E96:
    eax = 0x164u; /* 0x160C5E96: mov eax, 0x164 */
    edi = POP32_VAL(esp); /* 0x160C5E9B: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5E9C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5E9D: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5E9E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5E9F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5EA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5EA1: ret 0xc */
L_160C5EA4:
    eax = 0x16Bu; /* 0x160C5EA4: mov eax, 0x16b */
    edi = POP32_VAL(esp); /* 0x160C5EA9: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5EAA: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5EAB: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5EAC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5EAD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5EAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5EAF: ret 0xc */
L_160C5EB2:
    eax = 0x16Au; /* 0x160C5EB2: mov eax, 0x16a */
    edi = POP32_VAL(esp); /* 0x160C5EB7: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5EB8: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5EB9: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5EBA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5EBB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5EBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5EBD: ret 0xc */
L_160C5EC0:
    /* cmp MEM8(edx + 0x223), 0 */ /* 0x160C5EC0: cmp byte ptr [edx + 0x223], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x223)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C5EC7: jne 0x160c66cd */
L_160C5ECD:
    /* cmp LO8(ecx), 0x3Du */ /* 0x160C5ECD: cmp cl, 0x3d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C5ED0: jne 0x160c66cd */
L_160C5ED6:
    SET_LO8(ecx, MEM8(edx + 0x220)); /* 0x160C5ED6: mov cl, byte ptr [edx + 0x220] */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x160C5EDC: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C5EDE: jne 0x160c66cd */
L_160C5EE4:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x160C5EE4: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x3Cu; /* 0x160C5EE7: sub eax, 0x3c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_160C5F03; /* 0x160C5EEA: je 0x160c5f03 */
L_160C5EEC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x160C5EEC: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C5EEF: jne 0x160c66cd */
L_160C5EF5:
    eax = 0x16Du; /* 0x160C5EF5: mov eax, 0x16d */
    edi = POP32_VAL(esp); /* 0x160C5EFA: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5EFB: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5EFC: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5EFD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5EFE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5EFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F00: ret 0xc */
L_160C5F03:
    eax = 0x16Cu; /* 0x160C5F03: mov eax, 0x16c */
    edi = POP32_VAL(esp); /* 0x160C5F08: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F09: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F0A: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F0B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F0C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F0E: ret 0xc */
L_160C5F11:
    eax = 0x171u; /* 0x160C5F11: mov eax, 0x171 */
    edi = POP32_VAL(esp); /* 0x160C5F16: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F17: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F18: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F19: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F1A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F1B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F1C: ret 0xc */
L_160C5F1F:
    eax = 0x172u; /* 0x160C5F1F: mov eax, 0x172 */
    edi = POP32_VAL(esp); /* 0x160C5F24: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F25: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F26: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F27: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F28: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F2A: ret 0xc */
L_160C5F2D:
    eax = 0x173u; /* 0x160C5F2D: mov eax, 0x173 */
    edi = POP32_VAL(esp); /* 0x160C5F32: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F33: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F34: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F35: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F36: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F38: ret 0xc */
L_160C5F3B:
    eax = 0x174u; /* 0x160C5F3B: mov eax, 0x174 */
    edi = POP32_VAL(esp); /* 0x160C5F40: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F41: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F42: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F43: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F44: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F46: ret 0xc */
L_160C5F49:
    eax = 0x175u; /* 0x160C5F49: mov eax, 0x175 */
    edi = POP32_VAL(esp); /* 0x160C5F4E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F4F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F50: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F51: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F52: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F54: ret 0xc */
L_160C5F57:
    eax = 0x176u; /* 0x160C5F57: mov eax, 0x176 */
    edi = POP32_VAL(esp); /* 0x160C5F5C: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F5E: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F5F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F60: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F62: ret 0xc */
L_160C5F65:
    eax = 0x177u; /* 0x160C5F65: mov eax, 0x177 */
    edi = POP32_VAL(esp); /* 0x160C5F6A: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F6B: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F6C: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F6D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F6E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F70: ret 0xc */
L_160C5F73:
    eax = MEM32(edx + 0x220); /* 0x160C5F73: mov eax, dword ptr [edx + 0x220] */
    MEM32(ecx) = eax; /* 0x160C5F79: mov dword ptr [ecx], eax */
    MEM8(edx + 0x246) = (uint8_t)(1); /* 0x160C5F7B: mov byte ptr [edx + 0x246], 1 */
    eax = 0x15Cu; /* 0x160C5F82: mov eax, 0x15c */
    edi = POP32_VAL(esp); /* 0x160C5F87: pop edi */
    esi = POP32_VAL(esp); /* 0x160C5F88: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C5F89: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C5F8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C5F8B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C5F8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C5F8D: ret 0xc */
L_160C5F90:
    esi = MEM32(edx + 0x220); /* 0x160C5F90: mov esi, dword ptr [edx + 0x220] */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x160C5F96: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFBFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFBFu; /* 0x160C5F99: add eax, -0x41 */
    _flag_k = FK_ADD;
    ebx = 0x800u; /* 0x160C5F9C: mov ebx, 0x800 */
    /* cmp eax, 0x36u */ /* 0x160C5FA1: cmp eax, 0x36 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C5FA4: ja 0x160c70bb */
L_160C5FAA:
    ecx = (uint32_t)MEM8(eax + 0x160C8874); /* 0x160C5FAA: movzx ecx, byte ptr [eax + 0x160c8874] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160C87EC)); goto _ljump; }
L_160C5FB8:
    ecx = 0x160383CCu; /* 0x160C5FB8: mov ecx, 0x160383cc */
    eax = esi; /* 0x160C5FBD: mov eax, esi */
    /* nop */ /* 0x160C5FBF: nop  */
L_160C5FC0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C5FC0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C5FC2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5FE0; /* 0x160C5FC4: jne 0x160c5fe0 */
L_160C5FC6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C5FC6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C5FDC; /* 0x160C5FC8: je 0x160c5fdc */
L_160C5FCA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C5FCA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C5FCD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C5FE0; /* 0x160C5FD0: jne 0x160c5fe0 */
L_160C5FD2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C5FD2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C5FD5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C5FD8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C5FC0; /* 0x160C5FDA: jne 0x160c5fc0 */
L_160C5FDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C5FDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C5FE5; /* 0x160C5FDE: jmp 0x160c5fe5 */
L_160C5FE0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C5FE0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C5FE2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C5FE5:
    /* test eax, eax */ /* 0x160C5FE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C5FE7: je 0x160c66cd */
L_160C5FED:
    ecx = 0x160383D4u; /* 0x160C5FED: mov ecx, 0x160383d4 */
    eax = esi; /* 0x160C5FF2: mov eax, esi */
L_160C5FF4:
    SET_LO8(edx, MEM8(eax)); /* 0x160C5FF4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C5FF6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6014; /* 0x160C5FF8: jne 0x160c6014 */
L_160C5FFA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C5FFA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6010; /* 0x160C5FFC: je 0x160c6010 */
L_160C5FFE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C5FFE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6001: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6014; /* 0x160C6004: jne 0x160c6014 */
L_160C6006:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6006: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6009: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C600C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C5FF4; /* 0x160C600E: jne 0x160c5ff4 */
L_160C6010:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6010: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6019; /* 0x160C6012: jmp 0x160c6019 */
L_160C6014:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6014: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6016: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6019:
    /* test eax, eax */ /* 0x160C6019: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C602B; /* 0x160C601B: jne 0x160c602b */
L_160C601D:
    eax = 0x103u; /* 0x160C601D: mov eax, 0x103 */
    edi = POP32_VAL(esp); /* 0x160C6022: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6023: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6024: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6025: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6026: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6027: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6028: ret 0xc */
L_160C602B:
    PUSH32(esp, 0x160383E4u); /* 0x160C602B: push 0x160383e4 */
    PUSH32(esp, esi); /* 0x160C6030: push esi */
    RECOMP_CALL(sub_161AE180); /* 0x160C6031: call 0x161ae180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C6036: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160C6039: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C603B: jne 0x160c70bb */
L_160C6041:
    eax = 0x102u; /* 0x160C6041: mov eax, 0x102 */
    edi = POP32_VAL(esp); /* 0x160C6046: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6047: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6048: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6049: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C604A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C604B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C604C: ret 0xc */
L_160C604F:
    edx = MEM32(ebp + 0x8); /* 0x160C604F: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM8(edx + 0x243), 0 */ /* 0x160C6052: cmp byte ptr [edx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6059: jne 0x160c70bb */
L_160C605F:
    ecx = 0x160383E8u; /* 0x160C605F: mov ecx, 0x160383e8 */
    eax = esi; /* 0x160C6064: mov eax, esi */
L_160C6066:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6066: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6068: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6086; /* 0x160C606A: jne 0x160c6086 */
L_160C606C:
    /* test LO8(edx), LO8(edx) */ /* 0x160C606C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6082; /* 0x160C606E: je 0x160c6082 */
L_160C6070:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6070: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6073: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6086; /* 0x160C6076: jne 0x160c6086 */
L_160C6078:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6078: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C607B: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C607E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6066; /* 0x160C6080: jne 0x160c6066 */
L_160C6082:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6082: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C608B; /* 0x160C6084: jmp 0x160c608b */
L_160C6086:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6086: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6088: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C608B:
    /* test eax, eax */ /* 0x160C608B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C60A6; /* 0x160C608D: jne 0x160c60a6 */
L_160C608F:
    eax = MEM32(ebp + 0xC); /* 0x160C608F: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x41u; /* 0x160C6092: mov dword ptr [eax], 0x41 */
    eax = 0x17Du; /* 0x160C6098: mov eax, 0x17d */
    edi = POP32_VAL(esp); /* 0x160C609D: pop edi */
    esi = POP32_VAL(esp); /* 0x160C609E: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C609F: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C60A0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C60A1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C60A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C60A3: ret 0xc */
L_160C60A6:
    ecx = 0x16038400u; /* 0x160C60A6: mov ecx, 0x16038400 */
    eax = esi; /* 0x160C60AB: mov eax, esi */
    ecx = ecx; /* 0x160C60AD: lea ecx, [ecx] */
L_160C60B0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C60B0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C60B2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C60D0; /* 0x160C60B4: jne 0x160c60d0 */
L_160C60B6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C60B6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C60CC; /* 0x160C60B8: je 0x160c60cc */
L_160C60BA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C60BA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C60BD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C60D0; /* 0x160C60C0: jne 0x160c60d0 */
L_160C60C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C60C2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C60C5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C60C8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C60B0; /* 0x160C60CA: jne 0x160c60b0 */
L_160C60CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C60CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C60D5; /* 0x160C60CE: jmp 0x160c60d5 */
L_160C60D0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C60D0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C60D2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C60D5:
    /* test eax, eax */ /* 0x160C60D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C60D7: jne 0x160c70bb */
L_160C60DD:
    ecx = MEM32(ebp + 0xC); /* 0x160C60DD: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = 0x43u; /* 0x160C60E0: mov dword ptr [ecx], 0x43 */
    eax = 0x17Cu; /* 0x160C60E6: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C60EB: pop edi */
    esi = POP32_VAL(esp); /* 0x160C60EC: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C60ED: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C60EE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C60EF: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C60F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C60F1: ret 0xc */
L_160C60F4:
    ecx = 0x1602CF80u; /* 0x160C60F4: mov ecx, 0x1602cf80 */
    eax = esi; /* 0x160C60F9: mov eax, esi */
    goto L_160C6100; /* 0x160C60FB: jmp 0x160c6100 */
L_160C6100:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6100: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6102: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6120; /* 0x160C6104: jne 0x160c6120 */
L_160C6106:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6106: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C611C; /* 0x160C6108: je 0x160c611c */
L_160C610A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C610A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C610D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6120; /* 0x160C6110: jne 0x160c6120 */
L_160C6112:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6112: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6115: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6118: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6100; /* 0x160C611A: jne 0x160c6100 */
L_160C611C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C611C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6125; /* 0x160C611E: jmp 0x160c6125 */
L_160C6120:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6120: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6122: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6125:
    /* test eax, eax */ /* 0x160C6125: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6127: jne 0x160c70bb */
L_160C612D:
    eax = 0x105u; /* 0x160C612D: mov eax, 0x105 */
    edi = POP32_VAL(esp); /* 0x160C6132: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6133: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6134: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6135: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6136: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6137: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6138: ret 0xc */
L_160C613B:
    ecx = 0x16030164u; /* 0x160C613B: mov ecx, 0x16030164 */
    eax = esi; /* 0x160C6140: mov eax, esi */
L_160C6142:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6142: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6144: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6162; /* 0x160C6146: jne 0x160c6162 */
L_160C6148:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6148: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C615E; /* 0x160C614A: je 0x160c615e */
L_160C614C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C614C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C614F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6162; /* 0x160C6152: jne 0x160c6162 */
L_160C6154:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6154: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6157: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C615A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6142; /* 0x160C615C: jne 0x160c6142 */
L_160C615E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C615E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6167; /* 0x160C6160: jmp 0x160c6167 */
L_160C6162:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6162: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6164: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6167:
    /* test eax, eax */ /* 0x160C6167: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6179; /* 0x160C6169: jne 0x160c6179 */
L_160C616B:
    eax = 0x104u; /* 0x160C616B: mov eax, 0x104 */
    edi = POP32_VAL(esp); /* 0x160C6170: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6171: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6172: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6173: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6174: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6175: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6176: ret 0xc */
L_160C6179:
    ecx = 0x1602DF24u; /* 0x160C6179: mov ecx, 0x1602df24 */
    eax = esi; /* 0x160C617E: mov eax, esi */
L_160C6180:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6180: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6182: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C61A0; /* 0x160C6184: jne 0x160c61a0 */
L_160C6186:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6186: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C619C; /* 0x160C6188: je 0x160c619c */
L_160C618A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C618A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C618D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C61A0; /* 0x160C6190: jne 0x160c61a0 */
L_160C6192:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6192: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6195: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6198: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6180; /* 0x160C619A: jne 0x160c6180 */
L_160C619C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C619C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C61A5; /* 0x160C619E: jmp 0x160c61a5 */
L_160C61A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C61A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C61A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C61A5:
    /* test eax, eax */ /* 0x160C61A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C61C0; /* 0x160C61A7: jne 0x160c61c0 */
L_160C61A9:
    edx = MEM32(ebp + 0xC); /* 0x160C61A9: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x26u; /* 0x160C61AC: mov dword ptr [edx], 0x26 */
    eax = 0x17Bu; /* 0x160C61B2: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C61B7: pop edi */
    esi = POP32_VAL(esp); /* 0x160C61B8: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C61B9: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C61BA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C61BB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C61BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C61BD: ret 0xc */
L_160C61C0:
    eax = MEM32(ebp + 0x8); /* 0x160C61C0: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax + 0x243), 0 */ /* 0x160C61C3: cmp byte ptr [eax + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C61CA: jne 0x160c70bb */
L_160C61D0:
    ecx = 0x16038418u; /* 0x160C61D0: mov ecx, 0x16038418 */
    eax = esi; /* 0x160C61D5: mov eax, esi */
L_160C61D7:
    SET_LO8(edx, MEM8(eax)); /* 0x160C61D7: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C61D9: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C61F7; /* 0x160C61DB: jne 0x160c61f7 */
L_160C61DD:
    /* test LO8(edx), LO8(edx) */ /* 0x160C61DD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C61F3; /* 0x160C61DF: je 0x160c61f3 */
L_160C61E1:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C61E1: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C61E4: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C61F7; /* 0x160C61E7: jne 0x160c61f7 */
L_160C61E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C61E9: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C61EC: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C61EF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C61D7; /* 0x160C61F1: jne 0x160c61d7 */
L_160C61F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C61F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C61FC; /* 0x160C61F5: jmp 0x160c61fc */
L_160C61F7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C61F7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C61F9: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C61FC:
    /* test eax, eax */ /* 0x160C61FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C61FE: jne 0x160c70bb */
L_160C6204:
    ecx = MEM32(ebp + 0xC); /* 0x160C6204: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = 0x3Du; /* 0x160C6207: mov dword ptr [ecx], 0x3d */
    eax = 0x17Du; /* 0x160C620D: mov eax, 0x17d */
    edi = POP32_VAL(esp); /* 0x160C6212: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6213: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6214: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6215: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6216: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6217: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6218: ret 0xc */
L_160C621B:
    ecx = 0x1603842Cu; /* 0x160C621B: mov ecx, 0x1603842c */
    eax = esi; /* 0x160C6220: mov eax, esi */
L_160C6222:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6222: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6224: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6242; /* 0x160C6226: jne 0x160c6242 */
L_160C6228:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6228: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C623E; /* 0x160C622A: je 0x160c623e */
L_160C622C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C622C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C622F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6242; /* 0x160C6232: jne 0x160c6242 */
L_160C6234:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6234: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6237: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C623A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6222; /* 0x160C623C: jne 0x160c6222 */
L_160C623E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C623E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6247; /* 0x160C6240: jmp 0x160c6247 */
L_160C6242:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6242: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6244: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6247:
    /* test eax, eax */ /* 0x160C6247: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6259; /* 0x160C6249: jne 0x160c6259 */
L_160C624B:
    eax = 0x106u; /* 0x160C624B: mov eax, 0x106 */
    edi = POP32_VAL(esp); /* 0x160C6250: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6251: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6252: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6253: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6254: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6255: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6256: ret 0xc */
L_160C6259:
    ecx = 0x16038434u; /* 0x160C6259: mov ecx, 0x16038434 */
    eax = esi; /* 0x160C625E: mov eax, esi */
L_160C6260:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6260: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6262: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6280; /* 0x160C6264: jne 0x160c6280 */
L_160C6266:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6266: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C627C; /* 0x160C6268: je 0x160c627c */
L_160C626A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C626A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C626D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6280; /* 0x160C6270: jne 0x160c6280 */
L_160C6272:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6272: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6275: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6278: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6260; /* 0x160C627A: jne 0x160c6260 */
L_160C627C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C627C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6285; /* 0x160C627E: jmp 0x160c6285 */
L_160C6280:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6280: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6282: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6285:
    /* test eax, eax */ /* 0x160C6285: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C6287: je 0x160c66cd */
L_160C628D:
    ecx = 0x1602E154u; /* 0x160C628D: mov ecx, 0x1602e154 */
    eax = esi; /* 0x160C6292: mov eax, esi */
L_160C6294:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6294: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6296: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C62B4; /* 0x160C6298: jne 0x160c62b4 */
L_160C629A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C629A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C62B0; /* 0x160C629C: je 0x160c62b0 */
L_160C629E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C629E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C62A1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C62B4; /* 0x160C62A4: jne 0x160c62b4 */
L_160C62A6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C62A6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C62A9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C62AC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6294; /* 0x160C62AE: jne 0x160c6294 */
L_160C62B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C62B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C62B9; /* 0x160C62B2: jmp 0x160c62b9 */
L_160C62B4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C62B4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C62B6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C62B9:
    /* test eax, eax */ /* 0x160C62B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C62CB; /* 0x160C62BB: jne 0x160c62cb */
L_160C62BD:
    eax = 0x107u; /* 0x160C62BD: mov eax, 0x107 */
    edi = POP32_VAL(esp); /* 0x160C62C2: pop edi */
    esi = POP32_VAL(esp); /* 0x160C62C3: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C62C4: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C62C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C62C6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C62C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C62C8: ret 0xc */
L_160C62CB:
    ecx = 0x1603843Cu; /* 0x160C62CB: mov ecx, 0x1603843c */
    eax = esi; /* 0x160C62D0: mov eax, esi */
L_160C62D2:
    SET_LO8(edx, MEM8(eax)); /* 0x160C62D2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C62D4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C62F2; /* 0x160C62D6: jne 0x160c62f2 */
L_160C62D8:
    /* test LO8(edx), LO8(edx) */ /* 0x160C62D8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C62EE; /* 0x160C62DA: je 0x160c62ee */
L_160C62DC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C62DC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C62DF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C62F2; /* 0x160C62E2: jne 0x160c62f2 */
L_160C62E4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C62E4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C62E7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C62EA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C62D2; /* 0x160C62EC: jne 0x160c62d2 */
L_160C62EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C62EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C62F7; /* 0x160C62F0: jmp 0x160c62f7 */
L_160C62F2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C62F2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C62F4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C62F7:
    /* test eax, eax */ /* 0x160C62F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6309; /* 0x160C62F9: jne 0x160c6309 */
L_160C62FB:
    eax = 0x109u; /* 0x160C62FB: mov eax, 0x109 */
    edi = POP32_VAL(esp); /* 0x160C6300: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6301: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6302: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6303: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6304: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6305: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6306: ret 0xc */
L_160C6309:
    ecx = 0x1602D928u; /* 0x160C6309: mov ecx, 0x1602d928 */
    eax = esi; /* 0x160C630E: mov eax, esi */
L_160C6310:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6310: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6312: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6330; /* 0x160C6314: jne 0x160c6330 */
L_160C6316:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6316: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C632C; /* 0x160C6318: je 0x160c632c */
L_160C631A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C631A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C631D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6330; /* 0x160C6320: jne 0x160c6330 */
L_160C6322:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6322: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6325: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6328: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6310; /* 0x160C632A: jne 0x160c6310 */
L_160C632C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C632C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6335; /* 0x160C632E: jmp 0x160c6335 */
L_160C6330:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6330: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6332: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6335:
    /* test eax, eax */ /* 0x160C6335: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6347; /* 0x160C6337: jne 0x160c6347 */
L_160C6339:
    eax = 0x108u; /* 0x160C6339: mov eax, 0x108 */
    edi = POP32_VAL(esp); /* 0x160C633E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C633F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6340: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6341: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6342: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6343: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6344: ret 0xc */
L_160C6347:
    ecx = 0x16038444u; /* 0x160C6347: mov ecx, 0x16038444 */
    eax = esi; /* 0x160C634C: mov eax, esi */
    edi = edi; /* 0x160C634E: mov edi, edi */
L_160C6350:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6350: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6352: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6370; /* 0x160C6354: jne 0x160c6370 */
L_160C6356:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6356: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C636C; /* 0x160C6358: je 0x160c636c */
L_160C635A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C635A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C635D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6370; /* 0x160C6360: jne 0x160c6370 */
L_160C6362:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6362: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6365: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6368: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6350; /* 0x160C636A: jne 0x160c6350 */
L_160C636C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C636C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6375; /* 0x160C636E: jmp 0x160c6375 */
L_160C6370:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6370: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6372: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6375:
    /* test eax, eax */ /* 0x160C6375: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6387; /* 0x160C6377: jne 0x160c6387 */
L_160C6379:
    eax = 0x10Au; /* 0x160C6379: mov eax, 0x10a */
    edi = POP32_VAL(esp); /* 0x160C637E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C637F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6380: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6381: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6382: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6383: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6384: ret 0xc */
L_160C6387:
    ecx = 0x16038454u; /* 0x160C6387: mov ecx, 0x16038454 */
    eax = esi; /* 0x160C638C: mov eax, esi */
    edi = edi; /* 0x160C638E: mov edi, edi */
L_160C6390:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6390: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6392: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C63B0; /* 0x160C6394: jne 0x160c63b0 */
L_160C6396:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6396: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C63AC; /* 0x160C6398: je 0x160c63ac */
L_160C639A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C639A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C639D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C63B0; /* 0x160C63A0: jne 0x160c63b0 */
L_160C63A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C63A2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C63A5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C63A8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6390; /* 0x160C63AA: jne 0x160c6390 */
L_160C63AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C63AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C63B5; /* 0x160C63AE: jmp 0x160c63b5 */
L_160C63B0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C63B0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C63B2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C63B5:
    /* test eax, eax */ /* 0x160C63B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C63C7; /* 0x160C63B7: jne 0x160c63c7 */
L_160C63B9:
    eax = 0x10Bu; /* 0x160C63B9: mov eax, 0x10b */
    edi = POP32_VAL(esp); /* 0x160C63BE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C63BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C63C0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C63C1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C63C2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C63C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C63C4: ret 0xc */
L_160C63C7:
    ecx = 0x1603845Cu; /* 0x160C63C7: mov ecx, 0x1603845c */
    eax = esi; /* 0x160C63CC: mov eax, esi */
    edi = edi; /* 0x160C63CE: mov edi, edi */
L_160C63D0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C63D0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C63D2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C63F0; /* 0x160C63D4: jne 0x160c63f0 */
L_160C63D6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C63D6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C63EC; /* 0x160C63D8: je 0x160c63ec */
L_160C63DA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C63DA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C63DD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C63F0; /* 0x160C63E0: jne 0x160c63f0 */
L_160C63E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C63E2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C63E5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C63E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C63D0; /* 0x160C63EA: jne 0x160c63d0 */
L_160C63EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C63EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C63F5; /* 0x160C63EE: jmp 0x160c63f5 */
L_160C63F0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C63F0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C63F2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C63F5:
    /* test eax, eax */ /* 0x160C63F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6407; /* 0x160C63F7: jne 0x160c6407 */
L_160C63F9:
    eax = 0x10Du; /* 0x160C63F9: mov eax, 0x10d */
    edi = POP32_VAL(esp); /* 0x160C63FE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C63FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6400: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6401: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6402: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6403: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6404: ret 0xc */
L_160C6407:
    ecx = 0x16038470u; /* 0x160C6407: mov ecx, 0x16038470 */
    eax = esi; /* 0x160C640C: mov eax, esi */
    edi = edi; /* 0x160C640E: mov edi, edi */
L_160C6410:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6410: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6412: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6430; /* 0x160C6414: jne 0x160c6430 */
L_160C6416:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6416: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C642C; /* 0x160C6418: je 0x160c642c */
L_160C641A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C641A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C641D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6430; /* 0x160C6420: jne 0x160c6430 */
L_160C6422:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6422: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6425: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6428: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6410; /* 0x160C642A: jne 0x160c6410 */
L_160C642C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C642C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6435; /* 0x160C642E: jmp 0x160c6435 */
L_160C6430:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6430: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6432: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6435:
    /* test eax, eax */ /* 0x160C6435: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6447; /* 0x160C6437: jne 0x160c6447 */
L_160C6439:
    eax = 0x10Eu; /* 0x160C6439: mov eax, 0x10e */
    edi = POP32_VAL(esp); /* 0x160C643E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C643F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6440: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6441: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6442: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6443: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6444: ret 0xc */
L_160C6447:
    ecx = 0x16038478u; /* 0x160C6447: mov ecx, 0x16038478 */
    eax = esi; /* 0x160C644C: mov eax, esi */
    edi = edi; /* 0x160C644E: mov edi, edi */
L_160C6450:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6450: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6452: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6470; /* 0x160C6454: jne 0x160c6470 */
L_160C6456:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6456: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C646C; /* 0x160C6458: je 0x160c646c */
L_160C645A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C645A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C645D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6470; /* 0x160C6460: jne 0x160c6470 */
L_160C6462:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6462: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6465: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6468: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6450; /* 0x160C646A: jne 0x160c6450 */
L_160C646C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C646C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6475; /* 0x160C646E: jmp 0x160c6475 */
L_160C6470:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6470: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6472: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6475:
    /* test eax, eax */ /* 0x160C6475: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C6477: je 0x160c66cd */
L_160C647D:
    ecx = 0x16038484u; /* 0x160C647D: mov ecx, 0x16038484 */
    eax = esi; /* 0x160C6482: mov eax, esi */
L_160C6484:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6484: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6486: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C64A4; /* 0x160C6488: jne 0x160c64a4 */
L_160C648A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C648A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C64A0; /* 0x160C648C: je 0x160c64a0 */
L_160C648E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C648E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6491: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C64A4; /* 0x160C6494: jne 0x160c64a4 */
L_160C6496:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6496: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6499: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C649C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6484; /* 0x160C649E: jne 0x160c6484 */
L_160C64A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C64A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C64A9; /* 0x160C64A2: jmp 0x160c64a9 */
L_160C64A4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C64A4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C64A6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C64A9:
    /* test eax, eax */ /* 0x160C64A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C64AB: jne 0x160c70bb */
L_160C64B1:
    eax = 0x110u; /* 0x160C64B1: mov eax, 0x110 */
    edi = POP32_VAL(esp); /* 0x160C64B6: pop edi */
    esi = POP32_VAL(esp); /* 0x160C64B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C64B8: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C64B9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C64BA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C64BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C64BC: ret 0xc */
L_160C64BF:
    ecx = 0x16038490u; /* 0x160C64BF: mov ecx, 0x16038490 */
    eax = esi; /* 0x160C64C4: mov eax, esi */
L_160C64C6:
    SET_LO8(edx, MEM8(eax)); /* 0x160C64C6: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C64C8: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C64E6; /* 0x160C64CA: jne 0x160c64e6 */
L_160C64CC:
    /* test LO8(edx), LO8(edx) */ /* 0x160C64CC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C64E2; /* 0x160C64CE: je 0x160c64e2 */
L_160C64D0:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C64D0: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C64D3: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C64E6; /* 0x160C64D6: jne 0x160c64e6 */
L_160C64D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C64D8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C64DB: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C64DE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C64C6; /* 0x160C64E0: jne 0x160c64c6 */
L_160C64E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C64E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C64EB; /* 0x160C64E4: jmp 0x160c64eb */
L_160C64E6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C64E6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C64E8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C64EB:
    /* test eax, eax */ /* 0x160C64EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C64FD; /* 0x160C64ED: jne 0x160c64fd */
L_160C64EF:
    eax = 0x10Cu; /* 0x160C64EF: mov eax, 0x10c */
    edi = POP32_VAL(esp); /* 0x160C64F4: pop edi */
    esi = POP32_VAL(esp); /* 0x160C64F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C64F6: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C64F7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C64F8: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C64F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C64FA: ret 0xc */
L_160C64FD:
    edx = MEM32(ebp + 0x8); /* 0x160C64FD: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM8(edx + 0x243), 0 */ /* 0x160C6500: cmp byte ptr [edx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6507: jne 0x160c70bb */
L_160C650D:
    ecx = 0x160384A0u; /* 0x160C650D: mov ecx, 0x160384a0 */
    eax = esi; /* 0x160C6512: mov eax, esi */
L_160C6514:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6514: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6516: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6534; /* 0x160C6518: jne 0x160c6534 */
L_160C651A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C651A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6530; /* 0x160C651C: je 0x160c6530 */
L_160C651E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C651E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6521: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6534; /* 0x160C6524: jne 0x160c6534 */
L_160C6526:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6526: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6529: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C652C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6514; /* 0x160C652E: jne 0x160c6514 */
L_160C6530:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6530: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6539; /* 0x160C6532: jmp 0x160c6539 */
L_160C6534:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6534: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6536: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6539:
    /* test eax, eax */ /* 0x160C6539: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6554; /* 0x160C653B: jne 0x160c6554 */
L_160C653D:
    eax = MEM32(ebp + 0xC); /* 0x160C653D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x42u; /* 0x160C6540: mov dword ptr [eax], 0x42 */
    eax = 0x17Du; /* 0x160C6546: mov eax, 0x17d */
    edi = POP32_VAL(esp); /* 0x160C654B: pop edi */
    esi = POP32_VAL(esp); /* 0x160C654C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C654D: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C654E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C654F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6550: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6551: ret 0xc */
L_160C6554:
    ecx = 0x160384BCu; /* 0x160C6554: mov ecx, 0x160384bc */
    eax = esi; /* 0x160C6559: mov eax, esi */
    goto L_160C6560; /* 0x160C655B: jmp 0x160c6560 */
L_160C6560:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6560: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6562: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6580; /* 0x160C6564: jne 0x160c6580 */
L_160C6566:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6566: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C657C; /* 0x160C6568: je 0x160c657c */
L_160C656A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C656A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C656D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6580; /* 0x160C6570: jne 0x160c6580 */
L_160C6572:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6572: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6575: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6578: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6560; /* 0x160C657A: jne 0x160c6560 */
L_160C657C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C657C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6585; /* 0x160C657E: jmp 0x160c6585 */
L_160C6580:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6580: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6582: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6585:
    /* test eax, eax */ /* 0x160C6585: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6587: jne 0x160c70bb */
L_160C658D:
    ecx = MEM32(ebp + 0xC); /* 0x160C658D: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = 0x44u; /* 0x160C6590: mov dword ptr [ecx], 0x44 */
    eax = 0x17Cu; /* 0x160C6596: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C659B: pop edi */
    esi = POP32_VAL(esp); /* 0x160C659C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C659D: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C659E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C659F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C65A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C65A1: ret 0xc */
L_160C65A4:
    ecx = 0x160384D4u; /* 0x160C65A4: mov ecx, 0x160384d4 */
    eax = esi; /* 0x160C65A9: mov eax, esi */
    goto L_160C65B0; /* 0x160C65AB: jmp 0x160c65b0 */
L_160C65B0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C65B0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C65B2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C65D0; /* 0x160C65B4: jne 0x160c65d0 */
L_160C65B6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C65B6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C65CC; /* 0x160C65B8: je 0x160c65cc */
L_160C65BA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C65BA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C65BD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C65D0; /* 0x160C65C0: jne 0x160c65d0 */
L_160C65C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C65C2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C65C5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C65C8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C65B0; /* 0x160C65CA: jne 0x160c65b0 */
L_160C65CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C65CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C65D5; /* 0x160C65CE: jmp 0x160c65d5 */
L_160C65D0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C65D0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C65D2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C65D5:
    /* test eax, eax */ /* 0x160C65D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C65E7; /* 0x160C65D7: jne 0x160c65e7 */
L_160C65D9:
    eax = 0x112u; /* 0x160C65D9: mov eax, 0x112 */
    edi = POP32_VAL(esp); /* 0x160C65DE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C65DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C65E0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C65E1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C65E2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C65E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C65E4: ret 0xc */
L_160C65E7:
    ecx = 0x160384DCu; /* 0x160C65E7: mov ecx, 0x160384dc */
    eax = esi; /* 0x160C65EC: mov eax, esi */
    edi = edi; /* 0x160C65EE: mov edi, edi */
L_160C65F0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C65F0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C65F2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6610; /* 0x160C65F4: jne 0x160c6610 */
L_160C65F6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C65F6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C660C; /* 0x160C65F8: je 0x160c660c */
L_160C65FA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C65FA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C65FD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6610; /* 0x160C6600: jne 0x160c6610 */
L_160C6602:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6602: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6605: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6608: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C65F0; /* 0x160C660A: jne 0x160c65f0 */
L_160C660C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C660C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6615; /* 0x160C660E: jmp 0x160c6615 */
L_160C6610:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6610: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6612: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6615:
    /* test eax, eax */ /* 0x160C6615: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C6617: je 0x160c66cd */
L_160C661D:
    ecx = 0x160384E4u; /* 0x160C661D: mov ecx, 0x160384e4 */
    eax = esi; /* 0x160C6622: mov eax, esi */
L_160C6624:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6624: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6626: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6644; /* 0x160C6628: jne 0x160c6644 */
L_160C662A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C662A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6640; /* 0x160C662C: je 0x160c6640 */
L_160C662E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C662E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6631: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6644; /* 0x160C6634: jne 0x160c6644 */
L_160C6636:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6636: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6639: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C663C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6624; /* 0x160C663E: jne 0x160c6624 */
L_160C6640:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6640: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6649; /* 0x160C6642: jmp 0x160c6649 */
L_160C6644:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6644: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6646: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6649:
    /* test eax, eax */ /* 0x160C6649: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C665B; /* 0x160C664B: jne 0x160c665b */
L_160C664D:
    eax = 0x115u; /* 0x160C664D: mov eax, 0x115 */
    edi = POP32_VAL(esp); /* 0x160C6652: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6653: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6654: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6655: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6656: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6657: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6658: ret 0xc */
L_160C665B:
    ecx = 0x160384ECu; /* 0x160C665B: mov ecx, 0x160384ec */
    eax = esi; /* 0x160C6660: mov eax, esi */
L_160C6662:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6662: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6664: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6682; /* 0x160C6666: jne 0x160c6682 */
L_160C6668:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6668: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C667E; /* 0x160C666A: je 0x160c667e */
L_160C666C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C666C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C666F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6682; /* 0x160C6672: jne 0x160c6682 */
L_160C6674:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6674: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6677: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C667A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6662; /* 0x160C667C: jne 0x160c6662 */
L_160C667E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C667E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6687; /* 0x160C6680: jmp 0x160c6687 */
L_160C6682:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6682: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6684: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6687:
    /* test eax, eax */ /* 0x160C6687: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6699; /* 0x160C6689: jne 0x160c6699 */
L_160C668B:
    eax = 0x116u; /* 0x160C668B: mov eax, 0x116 */
    edi = POP32_VAL(esp); /* 0x160C6690: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6691: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6692: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6693: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6694: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6695: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6696: ret 0xc */
L_160C6699:
    ecx = 0x160384F0u; /* 0x160C6699: mov ecx, 0x160384f0 */
    eax = esi; /* 0x160C669E: mov eax, esi */
L_160C66A0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C66A0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C66A2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C66A4: jne 0x160c66c0 */
L_160C66A6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C66A6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66BC; /* 0x160C66A8: je 0x160c66bc */
L_160C66AA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C66AA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C66AD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C66B0: jne 0x160c66c0 */
L_160C66B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C66B2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C66B5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C66B8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C66A0; /* 0x160C66BA: jne 0x160c66a0 */
L_160C66BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C66BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C66C5; /* 0x160C66BE: jmp 0x160c66c5 */
L_160C66C0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C66C0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C66C2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C66C5:
    /* test eax, eax */ /* 0x160C66C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C66C7: jne 0x160c70bb */
L_160C66CD:
    eax = 0x17Eu; /* 0x160C66CD: mov eax, 0x17e */
    edi = POP32_VAL(esp); /* 0x160C66D2: pop edi */
    esi = POP32_VAL(esp); /* 0x160C66D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C66D4: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C66D5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C66D6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C66D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C66D8: ret 0xc */
L_160C66DB:
    ecx = 0x16030170u; /* 0x160C66DB: mov ecx, 0x16030170 */
    eax = esi; /* 0x160C66E0: mov eax, esi */
L_160C66E2:
    SET_LO8(edx, MEM8(eax)); /* 0x160C66E2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C66E4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6702; /* 0x160C66E6: jne 0x160c6702 */
L_160C66E8:
    /* test LO8(edx), LO8(edx) */ /* 0x160C66E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66FE; /* 0x160C66EA: je 0x160c66fe */
L_160C66EC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C66EC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C66EF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6702; /* 0x160C66F2: jne 0x160c6702 */
L_160C66F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C66F4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C66F7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C66FA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C66E2; /* 0x160C66FC: jne 0x160c66e2 */
L_160C66FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C66FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6707; /* 0x160C6700: jmp 0x160c6707 */
L_160C6702:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6702: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6704: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6707:
    /* test eax, eax */ /* 0x160C6707: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6719; /* 0x160C6709: jne 0x160c6719 */
L_160C670B:
    eax = 0x113u; /* 0x160C670B: mov eax, 0x113 */
    edi = POP32_VAL(esp); /* 0x160C6710: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6711: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6712: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6713: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6714: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6715: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6716: ret 0xc */
L_160C6719:
    ecx = 0x1603013Cu; /* 0x160C6719: mov ecx, 0x1603013c */
    eax = esi; /* 0x160C671E: mov eax, esi */
L_160C6720:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6720: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6722: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6740; /* 0x160C6724: jne 0x160c6740 */
L_160C6726:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6726: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C673C; /* 0x160C6728: je 0x160c673c */
L_160C672A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C672A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C672D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6740; /* 0x160C6730: jne 0x160c6740 */
L_160C6732:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6732: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6735: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6738: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6720; /* 0x160C673A: jne 0x160c6720 */
L_160C673C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C673C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6745; /* 0x160C673E: jmp 0x160c6745 */
L_160C6740:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6740: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6742: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6745:
    /* test eax, eax */ /* 0x160C6745: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6747: jne 0x160c70bb */
L_160C674D:
    eax = 0x114u; /* 0x160C674D: mov eax, 0x114 */
    edi = POP32_VAL(esp); /* 0x160C6752: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6753: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6754: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6755: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6756: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6757: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6758: ret 0xc */
L_160C675B:
    ecx = 0x1602CF90u; /* 0x160C675B: mov ecx, 0x1602cf90 */
    eax = esi; /* 0x160C6760: mov eax, esi */
L_160C6762:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6762: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6764: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6782; /* 0x160C6766: jne 0x160c6782 */
L_160C6768:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6768: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C677E; /* 0x160C676A: je 0x160c677e */
L_160C676C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C676C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C676F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6782; /* 0x160C6772: jne 0x160c6782 */
L_160C6774:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6774: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6777: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C677A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6762; /* 0x160C677C: jne 0x160c6762 */
L_160C677E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C677E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6787; /* 0x160C6780: jmp 0x160c6787 */
L_160C6782:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6782: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6784: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6787:
    /* test eax, eax */ /* 0x160C6787: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6799; /* 0x160C6789: jne 0x160c6799 */
L_160C678B:
    eax = 0x117u; /* 0x160C678B: mov eax, 0x117 */
    edi = POP32_VAL(esp); /* 0x160C6790: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6791: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6792: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6793: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6794: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6795: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6796: ret 0xc */
L_160C6799:
    ecx = 0x16038500u; /* 0x160C6799: mov ecx, 0x16038500 */
    eax = esi; /* 0x160C679E: mov eax, esi */
L_160C67A0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C67A0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C67A2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C67C0; /* 0x160C67A4: jne 0x160c67c0 */
L_160C67A6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C67A6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C67BC; /* 0x160C67A8: je 0x160c67bc */
L_160C67AA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C67AA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C67AD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C67C0; /* 0x160C67B0: jne 0x160c67c0 */
L_160C67B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C67B2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C67B5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C67B8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C67A0; /* 0x160C67BA: jne 0x160c67a0 */
L_160C67BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C67BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C67C5; /* 0x160C67BE: jmp 0x160c67c5 */
L_160C67C0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C67C0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C67C2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C67C5:
    /* test eax, eax */ /* 0x160C67C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C67C7: je 0x160c66cd */
L_160C67CD:
    ecx = 0x16038508u; /* 0x160C67CD: mov ecx, 0x16038508 */
    eax = esi; /* 0x160C67D2: mov eax, esi */
L_160C67D4:
    SET_LO8(edx, MEM8(eax)); /* 0x160C67D4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C67D6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C67F4; /* 0x160C67D8: jne 0x160c67f4 */
L_160C67DA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C67DA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C67F0; /* 0x160C67DC: je 0x160c67f0 */
L_160C67DE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C67DE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C67E1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C67F4; /* 0x160C67E4: jne 0x160c67f4 */
L_160C67E6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C67E6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C67E9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C67EC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C67D4; /* 0x160C67EE: jne 0x160c67d4 */
L_160C67F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C67F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C67F9; /* 0x160C67F2: jmp 0x160c67f9 */
L_160C67F4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C67F4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C67F6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C67F9:
    /* test eax, eax */ /* 0x160C67F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C67FB: je 0x160c66cd */
L_160C6801:
    ecx = 0x16038514u; /* 0x160C6801: mov ecx, 0x16038514 */
    eax = esi; /* 0x160C6806: mov eax, esi */
L_160C6808:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6808: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C680A: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6828; /* 0x160C680C: jne 0x160c6828 */
L_160C680E:
    /* test LO8(edx), LO8(edx) */ /* 0x160C680E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6824; /* 0x160C6810: je 0x160c6824 */
L_160C6812:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6812: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6815: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6828; /* 0x160C6818: jne 0x160c6828 */
L_160C681A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C681A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C681D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6820: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6808; /* 0x160C6822: jne 0x160c6808 */
L_160C6824:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6824: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C682D; /* 0x160C6826: jmp 0x160c682d */
L_160C6828:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6828: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C682A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C682D:
    /* test eax, eax */ /* 0x160C682D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C682F: jne 0x160c70bb */
L_160C6835:
    eax = 0x118u; /* 0x160C6835: mov eax, 0x118 */
    edi = POP32_VAL(esp); /* 0x160C683A: pop edi */
    esi = POP32_VAL(esp); /* 0x160C683B: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C683C: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C683D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C683E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C683F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6840: ret 0xc */
L_160C6843:
    ecx = 0x1602D648u; /* 0x160C6843: mov ecx, 0x1602d648 */
    eax = esi; /* 0x160C6848: mov eax, esi */
    ebx = ebx; /* 0x160C684A: lea ebx, [ebx] */
L_160C6850:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6850: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6852: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6870; /* 0x160C6854: jne 0x160c6870 */
L_160C6856:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6856: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C686C; /* 0x160C6858: je 0x160c686c */
L_160C685A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C685A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C685D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6870; /* 0x160C6860: jne 0x160c6870 */
L_160C6862:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6862: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6865: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6868: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6850; /* 0x160C686A: jne 0x160c6850 */
L_160C686C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C686C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6875; /* 0x160C686E: jmp 0x160c6875 */
L_160C6870:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6870: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6872: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6875:
    /* test eax, eax */ /* 0x160C6875: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6887; /* 0x160C6877: jne 0x160c6887 */
L_160C6879:
    eax = 0x119u; /* 0x160C6879: mov eax, 0x119 */
    edi = POP32_VAL(esp); /* 0x160C687E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C687F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6880: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6881: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6882: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6883: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6884: ret 0xc */
L_160C6887:
    ecx = 0x1602CD1Cu; /* 0x160C6887: mov ecx, 0x1602cd1c */
    eax = esi; /* 0x160C688C: mov eax, esi */
    edi = edi; /* 0x160C688E: mov edi, edi */
L_160C6890:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6890: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6892: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C68B0; /* 0x160C6894: jne 0x160c68b0 */
L_160C6896:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6896: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C68AC; /* 0x160C6898: je 0x160c68ac */
L_160C689A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C689A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C689D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C68B0; /* 0x160C68A0: jne 0x160c68b0 */
L_160C68A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C68A2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C68A5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C68A8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6890; /* 0x160C68AA: jne 0x160c6890 */
L_160C68AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C68AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C68B5; /* 0x160C68AE: jmp 0x160c68b5 */
L_160C68B0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C68B0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C68B2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C68B5:
    /* test eax, eax */ /* 0x160C68B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C68C7; /* 0x160C68B7: jne 0x160c68c7 */
L_160C68B9:
    eax = 0x11Au; /* 0x160C68B9: mov eax, 0x11a */
    edi = POP32_VAL(esp); /* 0x160C68BE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C68BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C68C0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C68C1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C68C2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C68C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C68C4: ret 0xc */
L_160C68C7:
    ecx = 0x1603851Cu; /* 0x160C68C7: mov ecx, 0x1603851c */
    eax = esi; /* 0x160C68CC: mov eax, esi */
    edi = edi; /* 0x160C68CE: mov edi, edi */
L_160C68D0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C68D0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C68D2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C68D4: jne 0x160c66c0 */
L_160C68DA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C68DA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C68F4; /* 0x160C68DC: je 0x160c68f4 */
L_160C68DE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C68DE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C68E1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C68E4: jne 0x160c66c0 */
L_160C68EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C68EA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C68ED: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C68F0: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C68D0; /* 0x160C68F2: jne 0x160c68d0 */
L_160C68F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C68F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160C66C5; /* 0x160C68F6: jmp 0x160c66c5 */
L_160C68FB:
    ecx = 0x16038524u; /* 0x160C68FB: mov ecx, 0x16038524 */
    eax = esi; /* 0x160C6900: mov eax, esi */
L_160C6902:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6902: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6904: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6922; /* 0x160C6906: jne 0x160c6922 */
L_160C6908:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6908: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C691E; /* 0x160C690A: je 0x160c691e */
L_160C690C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C690C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C690F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6922; /* 0x160C6912: jne 0x160c6922 */
L_160C6914:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6914: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6917: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C691A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6902; /* 0x160C691C: jne 0x160c6902 */
L_160C691E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C691E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6927; /* 0x160C6920: jmp 0x160c6927 */
L_160C6922:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6922: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6924: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6927:
    /* test eax, eax */ /* 0x160C6927: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C6929: je 0x160c66cd */
L_160C692F:
    ecx = 0x1603852Cu; /* 0x160C692F: mov ecx, 0x1603852c */
    eax = esi; /* 0x160C6934: mov eax, esi */
L_160C6936:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6936: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6938: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6956; /* 0x160C693A: jne 0x160c6956 */
L_160C693C:
    /* test LO8(edx), LO8(edx) */ /* 0x160C693C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6952; /* 0x160C693E: je 0x160c6952 */
L_160C6940:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6940: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6943: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6956; /* 0x160C6946: jne 0x160c6956 */
L_160C6948:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6948: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C694B: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C694E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6936; /* 0x160C6950: jne 0x160c6936 */
L_160C6952:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6952: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C695B; /* 0x160C6954: jmp 0x160c695b */
L_160C6956:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6956: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6958: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C695B:
    /* test eax, eax */ /* 0x160C695B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C695D: jne 0x160c70bb */
L_160C6963:
    eax = 0x11Cu; /* 0x160C6963: mov eax, 0x11c */
    edi = POP32_VAL(esp); /* 0x160C6968: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6969: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C696A: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C696B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C696C: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C696D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C696E: ret 0xc */
L_160C6971:
    edx = MEM32(ebp + 0x8); /* 0x160C6971: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM8(edx + 0x243), 0 */ /* 0x160C6974: cmp byte ptr [edx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C697B: jne 0x160c70bb */
L_160C6981:
    ecx = 0x16030110u; /* 0x160C6981: mov ecx, 0x16030110 */
    eax = esi; /* 0x160C6986: mov eax, esi */
L_160C6988:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6988: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C698A: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C69A8; /* 0x160C698C: jne 0x160c69a8 */
L_160C698E:
    /* test LO8(edx), LO8(edx) */ /* 0x160C698E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C69A4; /* 0x160C6990: je 0x160c69a4 */
L_160C6992:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6992: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6995: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C69A8; /* 0x160C6998: jne 0x160c69a8 */
L_160C699A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C699A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C699D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C69A0: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6988; /* 0x160C69A2: jne 0x160c6988 */
L_160C69A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C69A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C69AD; /* 0x160C69A6: jmp 0x160c69ad */
L_160C69A8:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C69A8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C69AA: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C69AD:
    /* test eax, eax */ /* 0x160C69AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C69AF: jne 0x160c70bb */
L_160C69B5:
    eax = 0x11Bu; /* 0x160C69B5: mov eax, 0x11b */
    edi = POP32_VAL(esp); /* 0x160C69BA: pop edi */
    esi = POP32_VAL(esp); /* 0x160C69BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C69BC: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C69BD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C69BE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C69BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C69C0: ret 0xc */
L_160C69C3:
    ecx = 0x1602CF98u; /* 0x160C69C3: mov ecx, 0x1602cf98 */
    eax = esi; /* 0x160C69C8: mov eax, esi */
    ebx = ebx; /* 0x160C69CA: lea ebx, [ebx] */
L_160C69D0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C69D0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C69D2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C69F0; /* 0x160C69D4: jne 0x160c69f0 */
L_160C69D6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C69D6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C69EC; /* 0x160C69D8: je 0x160c69ec */
L_160C69DA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C69DA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C69DD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C69F0; /* 0x160C69E0: jne 0x160c69f0 */
L_160C69E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C69E2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C69E5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C69E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C69D0; /* 0x160C69EA: jne 0x160c69d0 */
L_160C69EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C69EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C69F5; /* 0x160C69EE: jmp 0x160c69f5 */
L_160C69F0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C69F0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C69F2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C69F5:
    /* test eax, eax */ /* 0x160C69F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6A07; /* 0x160C69F7: jne 0x160c6a07 */
L_160C69F9:
    eax = 0x11Du; /* 0x160C69F9: mov eax, 0x11d */
    edi = POP32_VAL(esp); /* 0x160C69FE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C69FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6A00: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6A01: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6A02: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6A03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6A04: ret 0xc */
L_160C6A07:
    ecx = 0x16038538u; /* 0x160C6A07: mov ecx, 0x16038538 */
    eax = esi; /* 0x160C6A0C: mov eax, esi */
    edi = edi; /* 0x160C6A0E: mov edi, edi */
L_160C6A10:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6A10: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6A12: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6A30; /* 0x160C6A14: jne 0x160c6a30 */
L_160C6A16:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6A16: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6A2C; /* 0x160C6A18: je 0x160c6a2c */
L_160C6A1A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6A1A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6A1D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6A30; /* 0x160C6A20: jne 0x160c6a30 */
L_160C6A22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6A22: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6A25: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6A28: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6A10; /* 0x160C6A2A: jne 0x160c6a10 */
L_160C6A2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6A2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6A35; /* 0x160C6A2E: jmp 0x160c6a35 */
L_160C6A30:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6A30: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6A32: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6A35:
    /* test eax, eax */ /* 0x160C6A35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6A47; /* 0x160C6A37: jne 0x160c6a47 */
L_160C6A39:
    eax = 0x11Eu; /* 0x160C6A39: mov eax, 0x11e */
    edi = POP32_VAL(esp); /* 0x160C6A3E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6A3F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6A40: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6A41: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6A42: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6A43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6A44: ret 0xc */
L_160C6A47:
    ecx = 0x1603853Cu; /* 0x160C6A47: mov ecx, 0x1603853c */
    eax = esi; /* 0x160C6A4C: mov eax, esi */
    edi = edi; /* 0x160C6A4E: mov edi, edi */
L_160C6A50:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6A50: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6A52: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6A70; /* 0x160C6A54: jne 0x160c6a70 */
L_160C6A56:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6A56: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6A6C; /* 0x160C6A58: je 0x160c6a6c */
L_160C6A5A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6A5A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6A5D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6A70; /* 0x160C6A60: jne 0x160c6a70 */
L_160C6A62:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6A62: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6A65: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6A68: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6A50; /* 0x160C6A6A: jne 0x160c6a50 */
L_160C6A6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6A6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6A75; /* 0x160C6A6E: jmp 0x160c6a75 */
L_160C6A70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6A70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6A72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6A75:
    /* test eax, eax */ /* 0x160C6A75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6A87; /* 0x160C6A77: jne 0x160c6a87 */
L_160C6A79:
    eax = 0x11Fu; /* 0x160C6A79: mov eax, 0x11f */
    edi = POP32_VAL(esp); /* 0x160C6A7E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6A7F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6A80: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6A81: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6A82: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6A83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6A84: ret 0xc */
L_160C6A87:
    ecx = 0x1602E034u; /* 0x160C6A87: mov ecx, 0x1602e034 */
    eax = esi; /* 0x160C6A8C: mov eax, esi */
    edi = edi; /* 0x160C6A8E: mov edi, edi */
L_160C6A90:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6A90: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6A92: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6AB0; /* 0x160C6A94: jne 0x160c6ab0 */
L_160C6A96:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6A96: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6AAC; /* 0x160C6A98: je 0x160c6aac */
L_160C6A9A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6A9A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6A9D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6AB0; /* 0x160C6AA0: jne 0x160c6ab0 */
L_160C6AA2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6AA2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6AA5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6AA8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6A90; /* 0x160C6AAA: jne 0x160c6a90 */
L_160C6AAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6AAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6AB5; /* 0x160C6AAE: jmp 0x160c6ab5 */
L_160C6AB0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6AB0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6AB2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6AB5:
    /* test eax, eax */ /* 0x160C6AB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6AC7; /* 0x160C6AB7: jne 0x160c6ac7 */
L_160C6AB9:
    eax = 0x121u; /* 0x160C6AB9: mov eax, 0x121 */
    edi = POP32_VAL(esp); /* 0x160C6ABE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6ABF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6AC0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6AC1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6AC2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6AC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6AC4: ret 0xc */
L_160C6AC7:
    ecx = 0x16038544u; /* 0x160C6AC7: mov ecx, 0x16038544 */
    eax = esi; /* 0x160C6ACC: mov eax, esi */
    edi = edi; /* 0x160C6ACE: mov edi, edi */
L_160C6AD0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6AD0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6AD2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6AF0; /* 0x160C6AD4: jne 0x160c6af0 */
L_160C6AD6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6AD6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6AEC; /* 0x160C6AD8: je 0x160c6aec */
L_160C6ADA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6ADA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6ADD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6AF0; /* 0x160C6AE0: jne 0x160c6af0 */
L_160C6AE2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6AE2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6AE5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6AE8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6AD0; /* 0x160C6AEA: jne 0x160c6ad0 */
L_160C6AEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6AEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6AF5; /* 0x160C6AEE: jmp 0x160c6af5 */
L_160C6AF0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6AF0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6AF2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6AF5:
    /* test eax, eax */ /* 0x160C6AF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6AF7: jne 0x160c70bb */
L_160C6AFD:
    eax = 0x122u; /* 0x160C6AFD: mov eax, 0x122 */
    edi = POP32_VAL(esp); /* 0x160C6B02: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6B03: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6B04: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6B05: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6B06: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6B07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6B08: ret 0xc */
L_160C6B0B:
    ecx = 0x1603854Cu; /* 0x160C6B0B: mov ecx, 0x1603854c */
    eax = esi; /* 0x160C6B10: mov eax, esi */
L_160C6B12:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6B12: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6B14: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6B32; /* 0x160C6B16: jne 0x160c6b32 */
L_160C6B18:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6B18: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6B2E; /* 0x160C6B1A: je 0x160c6b2e */
L_160C6B1C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6B1C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6B1F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6B32; /* 0x160C6B22: jne 0x160c6b32 */
L_160C6B24:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6B24: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6B27: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6B2A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6B12; /* 0x160C6B2C: jne 0x160c6b12 */
L_160C6B2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6B2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6B37; /* 0x160C6B30: jmp 0x160c6b37 */
L_160C6B32:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6B32: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6B34: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6B37:
    /* test eax, eax */ /* 0x160C6B37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6B39: jne 0x160c70bb */
L_160C6B3F:
    eax = 0x120u; /* 0x160C6B3F: mov eax, 0x120 */
    edi = POP32_VAL(esp); /* 0x160C6B44: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6B45: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6B46: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6B47: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6B48: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6B49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6B4A: ret 0xc */
L_160C6B4D:
    ecx = 0x16038558u; /* 0x160C6B4D: mov ecx, 0x16038558 */
    eax = esi; /* 0x160C6B52: mov eax, esi */
L_160C6B54:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6B54: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6B56: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6B74; /* 0x160C6B58: jne 0x160c6b74 */
L_160C6B5A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6B5A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6B70; /* 0x160C6B5C: je 0x160c6b70 */
L_160C6B5E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6B5E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6B61: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6B74; /* 0x160C6B64: jne 0x160c6b74 */
L_160C6B66:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6B66: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6B69: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6B6C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6B54; /* 0x160C6B6E: jne 0x160c6b54 */
L_160C6B70:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6B70: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6B79; /* 0x160C6B72: jmp 0x160c6b79 */
L_160C6B74:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6B74: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6B76: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6B79:
    /* test eax, eax */ /* 0x160C6B79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6B8B; /* 0x160C6B7B: jne 0x160c6b8b */
L_160C6B7D:
    eax = 0x123u; /* 0x160C6B7D: mov eax, 0x123 */
    edi = POP32_VAL(esp); /* 0x160C6B82: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6B83: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6B84: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6B85: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6B86: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6B87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6B88: ret 0xc */
L_160C6B8B:
    ecx = 0x16038560u; /* 0x160C6B8B: mov ecx, 0x16038560 */
    eax = esi; /* 0x160C6B90: mov eax, esi */
L_160C6B92:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6B92: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6B94: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6BB2; /* 0x160C6B96: jne 0x160c6bb2 */
L_160C6B98:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6B98: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6BAE; /* 0x160C6B9A: je 0x160c6bae */
L_160C6B9C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6B9C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6B9F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6BB2; /* 0x160C6BA2: jne 0x160c6bb2 */
L_160C6BA4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6BA4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6BA7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6BAA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6B92; /* 0x160C6BAC: jne 0x160c6b92 */
L_160C6BAE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6BAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6BB7; /* 0x160C6BB0: jmp 0x160c6bb7 */
L_160C6BB2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6BB2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6BB4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6BB7:
    /* test eax, eax */ /* 0x160C6BB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6BC9; /* 0x160C6BB9: jne 0x160c6bc9 */
L_160C6BBB:
    eax = 0x124u; /* 0x160C6BBB: mov eax, 0x124 */
    edi = POP32_VAL(esp); /* 0x160C6BC0: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6BC1: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6BC2: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6BC3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6BC4: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6BC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6BC6: ret 0xc */
L_160C6BC9:
    eax = MEM32(ebp + 0x8); /* 0x160C6BC9: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax + 0x243), 0 */ /* 0x160C6BCC: cmp byte ptr [eax + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6BD3: jne 0x160c70bb */
L_160C6BD9:
    ecx = 0x16038568u; /* 0x160C6BD9: mov ecx, 0x16038568 */
    eax = esi; /* 0x160C6BDE: mov eax, esi */
L_160C6BE0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6BE0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6BE2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6C00; /* 0x160C6BE4: jne 0x160c6c00 */
L_160C6BE6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6BE6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6BFC; /* 0x160C6BE8: je 0x160c6bfc */
L_160C6BEA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6BEA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6BED: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6C00; /* 0x160C6BF0: jne 0x160c6c00 */
L_160C6BF2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6BF2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6BF5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6BF8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6BE0; /* 0x160C6BFA: jne 0x160c6be0 */
L_160C6BFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6BFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6C05; /* 0x160C6BFE: jmp 0x160c6c05 */
L_160C6C00:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6C00: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6C02: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6C05:
    /* test eax, eax */ /* 0x160C6C05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6C07: jne 0x160c70bb */
L_160C6C0D:
    eax = 0x125u; /* 0x160C6C0D: mov eax, 0x125 */
    edi = POP32_VAL(esp); /* 0x160C6C12: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6C13: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6C14: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6C15: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6C16: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6C17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6C18: ret 0xc */
L_160C6C1B:
    ecx = 0x16038570u; /* 0x160C6C1B: mov ecx, 0x16038570 */
    eax = esi; /* 0x160C6C20: mov eax, esi */
L_160C6C22:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6C22: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6C24: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6C42; /* 0x160C6C26: jne 0x160c6c42 */
L_160C6C28:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6C28: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6C3E; /* 0x160C6C2A: je 0x160c6c3e */
L_160C6C2C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6C2C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6C2F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6C42; /* 0x160C6C32: jne 0x160c6c42 */
L_160C6C34:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6C34: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6C37: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6C3A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6C22; /* 0x160C6C3C: jne 0x160c6c22 */
L_160C6C3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6C3E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6C47; /* 0x160C6C40: jmp 0x160c6c47 */
L_160C6C42:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6C42: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6C44: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6C47:
    /* test eax, eax */ /* 0x160C6C47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6C49: jne 0x160c70bb */
L_160C6C4F:
    eax = 0x126u; /* 0x160C6C4F: mov eax, 0x126 */
    edi = POP32_VAL(esp); /* 0x160C6C54: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6C55: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6C56: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6C57: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6C58: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6C59: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6C5A: ret 0xc */
L_160C6C5D:
    ecx = 0x1603857Cu; /* 0x160C6C5D: mov ecx, 0x1603857c */
    eax = esi; /* 0x160C6C62: mov eax, esi */
L_160C6C64:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6C64: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6C66: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6C84; /* 0x160C6C68: jne 0x160c6c84 */
L_160C6C6A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6C6A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6C80; /* 0x160C6C6C: je 0x160c6c80 */
L_160C6C6E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6C6E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6C71: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6C84; /* 0x160C6C74: jne 0x160c6c84 */
L_160C6C76:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6C76: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6C79: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6C7C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6C64; /* 0x160C6C7E: jne 0x160c6c64 */
L_160C6C80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6C80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6C89; /* 0x160C6C82: jmp 0x160c6c89 */
L_160C6C84:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6C84: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6C86: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6C89:
    /* test eax, eax */ /* 0x160C6C89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6C9B; /* 0x160C6C8B: jne 0x160c6c9b */
L_160C6C8D:
    eax = 0x127u; /* 0x160C6C8D: mov eax, 0x127 */
    edi = POP32_VAL(esp); /* 0x160C6C92: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6C93: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6C94: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6C95: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6C96: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6C97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6C98: ret 0xc */
L_160C6C9B:
    ecx = 0x16038584u; /* 0x160C6C9B: mov ecx, 0x16038584 */
    eax = esi; /* 0x160C6CA0: mov eax, esi */
L_160C6CA2:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6CA2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6CA4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C6CA6: jne 0x160c66c0 */
L_160C6CAC:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6CAC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6CC6; /* 0x160C6CAE: je 0x160c6cc6 */
L_160C6CB0:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6CB0: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6CB3: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C6CB6: jne 0x160c66c0 */
L_160C6CBC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6CBC: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6CBF: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6CC2: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6CA2; /* 0x160C6CC4: jne 0x160c6ca2 */
L_160C6CC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6CC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160C66C5; /* 0x160C6CC8: jmp 0x160c66c5 */
L_160C6CCD:
    ecx = 0x1603858Cu; /* 0x160C6CCD: mov ecx, 0x1603858c */
    eax = esi; /* 0x160C6CD2: mov eax, esi */
L_160C6CD4:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6CD4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6CD6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6CF4; /* 0x160C6CD8: jne 0x160c6cf4 */
L_160C6CDA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6CDA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6CF0; /* 0x160C6CDC: je 0x160c6cf0 */
L_160C6CDE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6CDE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6CE1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6CF4; /* 0x160C6CE4: jne 0x160c6cf4 */
L_160C6CE6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6CE6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6CE9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6CEC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6CD4; /* 0x160C6CEE: jne 0x160c6cd4 */
L_160C6CF0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6CF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6CF9; /* 0x160C6CF2: jmp 0x160c6cf9 */
L_160C6CF4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6CF4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6CF6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6CF9:
    /* test eax, eax */ /* 0x160C6CF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6D0B; /* 0x160C6CFB: jne 0x160c6d0b */
L_160C6CFD:
    eax = 0x10Fu; /* 0x160C6CFD: mov eax, 0x10f */
    edi = POP32_VAL(esp); /* 0x160C6D02: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6D03: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6D04: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6D05: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6D06: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6D07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6D08: ret 0xc */
L_160C6D0B:
    ecx = 0x1603859Cu; /* 0x160C6D0B: mov ecx, 0x1603859c */
    eax = esi; /* 0x160C6D10: mov eax, esi */
L_160C6D12:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6D12: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6D14: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6D32; /* 0x160C6D16: jne 0x160c6d32 */
L_160C6D18:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6D18: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6D2E; /* 0x160C6D1A: je 0x160c6d2e */
L_160C6D1C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6D1C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6D1F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6D32; /* 0x160C6D22: jne 0x160c6d32 */
L_160C6D24:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6D24: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6D27: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6D2A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6D12; /* 0x160C6D2C: jne 0x160c6d12 */
L_160C6D2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6D2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6D37; /* 0x160C6D30: jmp 0x160c6d37 */
L_160C6D32:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6D32: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6D34: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6D37:
    /* test eax, eax */ /* 0x160C6D37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6D49; /* 0x160C6D39: jne 0x160c6d49 */
L_160C6D3B:
    eax = 0x128u; /* 0x160C6D3B: mov eax, 0x128 */
    edi = POP32_VAL(esp); /* 0x160C6D40: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6D41: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6D42: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6D43: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6D44: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6D45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6D46: ret 0xc */
L_160C6D49:
    ecx = 0x160385A8u; /* 0x160C6D49: mov ecx, 0x160385a8 */
    eax = esi; /* 0x160C6D4E: mov eax, esi */
L_160C6D50:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6D50: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6D52: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6D70; /* 0x160C6D54: jne 0x160c6d70 */
L_160C6D56:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6D56: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6D6C; /* 0x160C6D58: je 0x160c6d6c */
L_160C6D5A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6D5A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6D5D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6D70; /* 0x160C6D60: jne 0x160c6d70 */
L_160C6D62:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6D62: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6D65: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6D68: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6D50; /* 0x160C6D6A: jne 0x160c6d50 */
L_160C6D6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6D6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6D75; /* 0x160C6D6E: jmp 0x160c6d75 */
L_160C6D70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6D70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6D72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6D75:
    /* test eax, eax */ /* 0x160C6D75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C6D77: je 0x160c66cd */
L_160C6D7D:
    ecx = 0x160385ACu; /* 0x160C6D7D: mov ecx, 0x160385ac */
    eax = esi; /* 0x160C6D82: mov eax, esi */
L_160C6D84:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6D84: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6D86: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6DA4; /* 0x160C6D88: jne 0x160c6da4 */
L_160C6D8A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6D8A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6DA0; /* 0x160C6D8C: je 0x160c6da0 */
L_160C6D8E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6D8E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6D91: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6DA4; /* 0x160C6D94: jne 0x160c6da4 */
L_160C6D96:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6D96: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6D99: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6D9C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6D84; /* 0x160C6D9E: jne 0x160c6d84 */
L_160C6DA0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6DA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6DA9; /* 0x160C6DA2: jmp 0x160c6da9 */
L_160C6DA4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6DA4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6DA6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6DA9:
    /* test eax, eax */ /* 0x160C6DA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6DAB: jne 0x160c70bb */
L_160C6DB1:
    eax = 0x129u; /* 0x160C6DB1: mov eax, 0x129 */
    edi = POP32_VAL(esp); /* 0x160C6DB6: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6DB7: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6DB8: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6DB9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6DBA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6DBB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6DBC: ret 0xc */
L_160C6DBF:
    ecx = 0x160300F8u; /* 0x160C6DBF: mov ecx, 0x160300f8 */
    eax = esi; /* 0x160C6DC4: mov eax, esi */
L_160C6DC6:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6DC6: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6DC8: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6DE6; /* 0x160C6DCA: jne 0x160c6de6 */
L_160C6DCC:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6DCC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6DE2; /* 0x160C6DCE: je 0x160c6de2 */
L_160C6DD0:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6DD0: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6DD3: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6DE6; /* 0x160C6DD6: jne 0x160c6de6 */
L_160C6DD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6DD8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6DDB: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6DDE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6DC6; /* 0x160C6DE0: jne 0x160c6dc6 */
L_160C6DE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6DE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6DEB; /* 0x160C6DE4: jmp 0x160c6deb */
L_160C6DE6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6DE6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6DE8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6DEB:
    /* test eax, eax */ /* 0x160C6DEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6DED: jne 0x160c70bb */
L_160C6DF3:
    eax = 0x12Au; /* 0x160C6DF3: mov eax, 0x12a */
    edi = POP32_VAL(esp); /* 0x160C6DF8: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6DF9: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6DFA: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6DFB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6DFC: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6DFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6DFE: ret 0xc */
L_160C6E01:
    ecx = 0x160385BCu; /* 0x160C6E01: mov ecx, 0x160385bc */
    eax = esi; /* 0x160C6E06: mov eax, esi */
L_160C6E08:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6E08: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6E0A: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6E28; /* 0x160C6E0C: jne 0x160c6e28 */
L_160C6E0E:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6E0E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6E24; /* 0x160C6E10: je 0x160c6e24 */
L_160C6E12:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6E12: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6E15: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6E28; /* 0x160C6E18: jne 0x160c6e28 */
L_160C6E1A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6E1A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6E1D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6E20: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6E08; /* 0x160C6E22: jne 0x160c6e08 */
L_160C6E24:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6E24: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6E2D; /* 0x160C6E26: jmp 0x160c6e2d */
L_160C6E28:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6E28: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6E2A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6E2D:
    /* test eax, eax */ /* 0x160C6E2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6E3F; /* 0x160C6E2F: jne 0x160c6e3f */
L_160C6E31:
    eax = 0x12Bu; /* 0x160C6E31: mov eax, 0x12b */
    edi = POP32_VAL(esp); /* 0x160C6E36: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6E37: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6E38: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6E39: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6E3A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6E3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6E3C: ret 0xc */
L_160C6E3F:
    ecx = 0x160385C0u; /* 0x160C6E3F: mov ecx, 0x160385c0 */
    eax = esi; /* 0x160C6E44: mov eax, esi */
L_160C6E46:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6E46: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6E48: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C6E4A: jne 0x160c66c0 */
L_160C6E50:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6E50: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6E6A; /* 0x160C6E52: je 0x160c6e6a */
L_160C6E54:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6E54: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6E57: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C6E5A: jne 0x160c66c0 */
L_160C6E60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6E60: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6E63: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6E66: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6E46; /* 0x160C6E68: jne 0x160c6e46 */
L_160C6E6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6E6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160C66C5; /* 0x160C6E6C: jmp 0x160c66c5 */
L_160C6E71:
    ecx = 0x160385CCu; /* 0x160C6E71: mov ecx, 0x160385cc */
    eax = esi; /* 0x160C6E76: mov eax, esi */
L_160C6E78:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6E78: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6E7A: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6E98; /* 0x160C6E7C: jne 0x160c6e98 */
L_160C6E7E:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6E7E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6E94; /* 0x160C6E80: je 0x160c6e94 */
L_160C6E82:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6E82: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6E85: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6E98; /* 0x160C6E88: jne 0x160c6e98 */
L_160C6E8A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6E8A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6E8D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6E90: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6E78; /* 0x160C6E92: jne 0x160c6e78 */
L_160C6E94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6E94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6E9D; /* 0x160C6E96: jmp 0x160c6e9d */
L_160C6E98:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6E98: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6E9A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6E9D:
    /* test eax, eax */ /* 0x160C6E9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C6E9F: jne 0x160c70bb */
L_160C6EA5:
    eax = 0x12Cu; /* 0x160C6EA5: mov eax, 0x12c */
    edi = POP32_VAL(esp); /* 0x160C6EAA: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6EAB: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6EAC: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6EAD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6EAE: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6EAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6EB0: ret 0xc */
L_160C6EB3:
    ecx = 0x160385D8u; /* 0x160C6EB3: mov ecx, 0x160385d8 */
    eax = esi; /* 0x160C6EB8: mov eax, esi */
    ebx = ebx; /* 0x160C6EBA: lea ebx, [ebx] */
L_160C6EC0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6EC0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6EC2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6EE0; /* 0x160C6EC4: jne 0x160c6ee0 */
L_160C6EC6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6EC6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6EDC; /* 0x160C6EC8: je 0x160c6edc */
L_160C6ECA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6ECA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6ECD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6EE0; /* 0x160C6ED0: jne 0x160c6ee0 */
L_160C6ED2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6ED2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6ED5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6ED8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6EC0; /* 0x160C6EDA: jne 0x160c6ec0 */
L_160C6EDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6EDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6EE5; /* 0x160C6EDE: jmp 0x160c6ee5 */
L_160C6EE0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6EE0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6EE2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6EE5:
    /* test eax, eax */ /* 0x160C6EE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6EF7; /* 0x160C6EE7: jne 0x160c6ef7 */
L_160C6EE9:
    eax = 0x12Du; /* 0x160C6EE9: mov eax, 0x12d */
    edi = POP32_VAL(esp); /* 0x160C6EEE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6EEF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6EF0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6EF1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6EF2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6EF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6EF4: ret 0xc */
L_160C6EF7:
    ecx = 0x16030B28u; /* 0x160C6EF7: mov ecx, 0x16030b28 */
    eax = esi; /* 0x160C6EFC: mov eax, esi */
    edi = edi; /* 0x160C6EFE: mov edi, edi */
L_160C6F00:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6F00: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6F02: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6F20; /* 0x160C6F04: jne 0x160c6f20 */
L_160C6F06:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6F06: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6F1C; /* 0x160C6F08: je 0x160c6f1c */
L_160C6F0A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6F0A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6F0D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6F20; /* 0x160C6F10: jne 0x160c6f20 */
L_160C6F12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6F12: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6F15: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6F18: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6F00; /* 0x160C6F1A: jne 0x160c6f00 */
L_160C6F1C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6F1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6F25; /* 0x160C6F1E: jmp 0x160c6f25 */
L_160C6F20:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6F20: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6F22: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6F25:
    /* test eax, eax */ /* 0x160C6F25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6F37; /* 0x160C6F27: jne 0x160c6f37 */
L_160C6F29:
    eax = 0x12Eu; /* 0x160C6F29: mov eax, 0x12e */
    edi = POP32_VAL(esp); /* 0x160C6F2E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6F2F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6F30: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6F31: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6F32: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6F33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6F34: ret 0xc */
L_160C6F37:
    ecx = 0x1602E014u; /* 0x160C6F37: mov ecx, 0x1602e014 */
    eax = esi; /* 0x160C6F3C: mov eax, esi */
    edi = edi; /* 0x160C6F3E: mov edi, edi */
L_160C6F40:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6F40: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6F42: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6F60; /* 0x160C6F44: jne 0x160c6f60 */
L_160C6F46:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6F46: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6F5C; /* 0x160C6F48: je 0x160c6f5c */
L_160C6F4A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6F4A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6F4D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6F60; /* 0x160C6F50: jne 0x160c6f60 */
L_160C6F52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6F52: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6F55: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6F58: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6F40; /* 0x160C6F5A: jne 0x160c6f40 */
L_160C6F5C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6F5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6F65; /* 0x160C6F5E: jmp 0x160c6f65 */
L_160C6F60:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6F60: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6F62: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6F65:
    /* test eax, eax */ /* 0x160C6F65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6F77; /* 0x160C6F67: jne 0x160c6f77 */
L_160C6F69:
    eax = 0x12Fu; /* 0x160C6F69: mov eax, 0x12f */
    edi = POP32_VAL(esp); /* 0x160C6F6E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C6F6F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C6F70: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C6F71: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C6F72: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C6F73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C6F74: ret 0xc */
L_160C6F77:
    ecx = 0x160385E4u; /* 0x160C6F77: mov ecx, 0x160385e4 */
    eax = esi; /* 0x160C6F7C: mov eax, esi */
    edi = edi; /* 0x160C6F7E: mov edi, edi */
L_160C6F80:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6F80: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6F82: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6FA0; /* 0x160C6F84: jne 0x160c6fa0 */
L_160C6F86:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6F86: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6F9C; /* 0x160C6F88: je 0x160c6f9c */
L_160C6F8A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6F8A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6F8D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6FA0; /* 0x160C6F90: jne 0x160c6fa0 */
L_160C6F92:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6F92: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6F95: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6F98: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6F80; /* 0x160C6F9A: jne 0x160c6f80 */
L_160C6F9C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6F9C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6FA5; /* 0x160C6F9E: jmp 0x160c6fa5 */
L_160C6FA0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6FA0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6FA2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6FA5:
    /* test eax, eax */ /* 0x160C6FA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C6FA7: je 0x160c66cd */
L_160C6FAD:
    ecx = 0x160385ECu; /* 0x160C6FAD: mov ecx, 0x160385ec */
    eax = esi; /* 0x160C6FB2: mov eax, esi */
L_160C6FB4:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6FB4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6FB6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6FD4; /* 0x160C6FB8: jne 0x160c6fd4 */
L_160C6FBA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6FBA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6FD0; /* 0x160C6FBC: je 0x160c6fd0 */
L_160C6FBE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6FBE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6FC1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C6FD4; /* 0x160C6FC4: jne 0x160c6fd4 */
L_160C6FC6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6FC6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6FC9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C6FCC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6FB4; /* 0x160C6FCE: jne 0x160c6fb4 */
L_160C6FD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C6FD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C6FD9; /* 0x160C6FD2: jmp 0x160c6fd9 */
L_160C6FD4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6FD4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C6FD6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C6FD9:
    /* test eax, eax */ /* 0x160C6FD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C6FDB: je 0x160c66cd */
L_160C6FE1:
    ecx = 0x160385F8u; /* 0x160C6FE1: mov ecx, 0x160385f8 */
    eax = esi; /* 0x160C6FE6: mov eax, esi */
L_160C6FE8:
    SET_LO8(edx, MEM8(eax)); /* 0x160C6FE8: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C6FEA: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7008; /* 0x160C6FEC: jne 0x160c7008 */
L_160C6FEE:
    /* test LO8(edx), LO8(edx) */ /* 0x160C6FEE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7004; /* 0x160C6FF0: je 0x160c7004 */
L_160C6FF2:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C6FF2: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C6FF5: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7008; /* 0x160C6FF8: jne 0x160c7008 */
L_160C6FFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C6FFA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C6FFD: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7000: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C6FE8; /* 0x160C7002: jne 0x160c6fe8 */
L_160C7004:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7004: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C700D; /* 0x160C7006: jmp 0x160c700d */
L_160C7008:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7008: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C700A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C700D:
    /* test eax, eax */ /* 0x160C700D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C700F: je 0x160c66cd */
L_160C7015:
    ecx = MEM32(ebp + 0x8); /* 0x160C7015: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx + 0x243), 0 */ /* 0x160C7018: cmp byte ptr [ecx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C701F: jne 0x160c70bb */
L_160C7025:
    ecx = 0x16038600u; /* 0x160C7025: mov ecx, 0x16038600 */
    eax = esi; /* 0x160C702A: mov eax, esi */
    esp = esp; /* 0x160C702C: lea esp, [esp] */
L_160C7030:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7030: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7032: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7050; /* 0x160C7034: jne 0x160c7050 */
L_160C7036:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7036: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C704C; /* 0x160C7038: je 0x160c704c */
L_160C703A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C703A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C703D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7050; /* 0x160C7040: jne 0x160c7050 */
L_160C7042:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7042: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7045: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7048: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7030; /* 0x160C704A: jne 0x160c7030 */
L_160C704C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C704C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7055; /* 0x160C704E: jmp 0x160c7055 */
L_160C7050:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7050: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7052: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7055:
    /* test eax, eax */ /* 0x160C7055: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7067; /* 0x160C7057: jne 0x160c7067 */
L_160C7059:
    eax = 0x131u; /* 0x160C7059: mov eax, 0x131 */
    edi = POP32_VAL(esp); /* 0x160C705E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C705F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7060: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7061: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7062: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7063: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7064: ret 0xc */
L_160C7067:
    ecx = 0x16038608u; /* 0x160C7067: mov ecx, 0x16038608 */
    eax = esi; /* 0x160C706C: mov eax, esi */
    edi = edi; /* 0x160C706E: mov edi, edi */
L_160C7070:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7070: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7072: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7090; /* 0x160C7074: jne 0x160c7090 */
L_160C7076:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7076: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C708C; /* 0x160C7078: je 0x160c708c */
L_160C707A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C707A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C707D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7090; /* 0x160C7080: jne 0x160c7090 */
L_160C7082:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7082: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7085: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7088: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7070; /* 0x160C708A: jne 0x160c7070 */
L_160C708C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C708C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7095; /* 0x160C708E: jmp 0x160c7095 */
L_160C7090:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7090: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7092: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7095:
    /* test eax, eax */ /* 0x160C7095: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7097: jne 0x160c70bb */
L_160C7099:
    edi = MEM32(ebp + 0x8); /* 0x160C7099: mov edi, dword ptr [ebp + 8] */
    /* test MEM32(edi + 0x50), ebx */ /* 0x160C709C: test dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C716D; /* 0x160C709F: je 0x160c716d */
L_160C70A5:
    edx = MEM32(ebp + 0x10); /* 0x160C70A5: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x16038618u); /* 0x160C70A8: push 0x16038618 */
    PUSH32(esp, edx); /* 0x160C70AD: push edx */
L_160C70AE:
    ecx = 0xC0Eu; /* 0x160C70AE: mov ecx, 0xc0e */
    RECOMP_CALL(sub_160C8A90); /* 0x160C70B3: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C70B8: add esp, 8 */
    _flag_k = FK_ADD;
L_160C70BB:
    edi = MEM32(ebp + 0x8); /* 0x160C70BB: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x220); /* 0x160C70BE: mov eax, dword ptr [edi + 0x220] */
    ecx = (int32_t)(int8_t)MEM8(eax); /* 0x160C70C4: movsx ecx, byte ptr [eax] */
    PUSH32(esp, ecx); /* 0x160C70C7: push ecx */
    RECOMP_CALL(sub_161AE12C); /* 0x160C70C8: call 0x161ae12c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF9Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF9Fu; /* 0x160C70CD: add eax, -0x61 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160C70D0: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x13u */ /* 0x160C70D3: cmp eax, 0x13 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C8650; /* 0x160C70D6: ja 0x160c8650 */
L_160C70DC:
    edx = (uint32_t)MEM8(eax + 0x160C88C0); /* 0x160C70DC: movzx edx, byte ptr [eax + 0x160c88c0] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x160C88AC)); goto _ljump; }
L_160C70EA:
    ecx = 0x1603865Cu; /* 0x160C70EA: mov ecx, 0x1603865c */
    eax = esi; /* 0x160C70EF: mov eax, esi */
L_160C70F1:
    SET_LO8(edx, MEM8(eax)); /* 0x160C70F1: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C70F3: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7111; /* 0x160C70F5: jne 0x160c7111 */
L_160C70F7:
    /* test LO8(edx), LO8(edx) */ /* 0x160C70F7: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C710D; /* 0x160C70F9: je 0x160c710d */
L_160C70FB:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C70FB: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C70FE: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7111; /* 0x160C7101: jne 0x160c7111 */
L_160C7103:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7103: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7106: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7109: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70F1; /* 0x160C710B: jne 0x160c70f1 */
L_160C710D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C710D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7116; /* 0x160C710F: jmp 0x160c7116 */
L_160C7111:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7111: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7113: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7116:
    /* test eax, eax */ /* 0x160C7116: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7128; /* 0x160C7118: jne 0x160c7128 */
L_160C711A:
    eax = 0x132u; /* 0x160C711A: mov eax, 0x132 */
    edi = POP32_VAL(esp); /* 0x160C711F: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7120: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7121: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7122: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7123: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7124: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7125: ret 0xc */
L_160C7128:
    eax = MEM32(ebp + 0x8); /* 0x160C7128: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax + 0x243), 0 */ /* 0x160C712B: cmp byte ptr [eax + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7132: jne 0x160c70bb */
L_160C7134:
    ecx = 0x16030120u; /* 0x160C7134: mov ecx, 0x16030120 */
    eax = esi; /* 0x160C7139: mov eax, esi */
    goto L_160C7140; /* 0x160C713B: jmp 0x160c7140 */
L_160C7140:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7140: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7142: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7160; /* 0x160C7144: jne 0x160c7160 */
L_160C7146:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7146: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C715C; /* 0x160C7148: je 0x160c715c */
L_160C714A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C714A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C714D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7160; /* 0x160C7150: jne 0x160c7160 */
L_160C7152:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7152: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7155: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7158: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7140; /* 0x160C715A: jne 0x160c7140 */
L_160C715C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C715C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7165; /* 0x160C715E: jmp 0x160c7165 */
L_160C7160:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7160: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7162: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7165:
    /* test eax, eax */ /* 0x160C7165: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7167: jne 0x160c70bb */
L_160C716D:
    eax = 0x130u; /* 0x160C716D: mov eax, 0x130 */
    edi = POP32_VAL(esp); /* 0x160C7172: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7173: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7174: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7175: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7176: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7177: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7178: ret 0xc */
L_160C717B:
    ecx = 0x16038668u; /* 0x160C717B: mov ecx, 0x16038668 */
    eax = esi; /* 0x160C7180: mov eax, esi */
L_160C7182:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7182: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7184: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C71A2; /* 0x160C7186: jne 0x160c71a2 */
L_160C7188:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7188: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C719E; /* 0x160C718A: je 0x160c719e */
L_160C718C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C718C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C718F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C71A2; /* 0x160C7192: jne 0x160c71a2 */
L_160C7194:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7194: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7197: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C719A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7182; /* 0x160C719C: jne 0x160c7182 */
L_160C719E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C719E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C71A7; /* 0x160C71A0: jmp 0x160c71a7 */
L_160C71A2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C71A2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C71A4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C71A7:
    /* test eax, eax */ /* 0x160C71A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C71B9; /* 0x160C71A9: jne 0x160c71b9 */
L_160C71AB:
    eax = 0x134u; /* 0x160C71AB: mov eax, 0x134 */
    edi = POP32_VAL(esp); /* 0x160C71B0: pop edi */
    esi = POP32_VAL(esp); /* 0x160C71B1: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C71B2: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C71B3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C71B4: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C71B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C71B6: ret 0xc */
L_160C71B9:
    ecx = 0x16038674u; /* 0x160C71B9: mov ecx, 0x16038674 */
    eax = esi; /* 0x160C71BE: mov eax, esi */
L_160C71C0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C71C0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C71C2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C71E0; /* 0x160C71C4: jne 0x160c71e0 */
L_160C71C6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C71C6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C71DC; /* 0x160C71C8: je 0x160c71dc */
L_160C71CA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C71CA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C71CD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C71E0; /* 0x160C71D0: jne 0x160c71e0 */
L_160C71D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C71D2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C71D5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C71D8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C71C0; /* 0x160C71DA: jne 0x160c71c0 */
L_160C71DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C71DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C71E5; /* 0x160C71DE: jmp 0x160c71e5 */
L_160C71E0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C71E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C71E2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C71E5:
    /* test eax, eax */ /* 0x160C71E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C71E7: je 0x160c66cd */
L_160C71ED:
    ecx = 0x16038688u; /* 0x160C71ED: mov ecx, 0x16038688 */
    eax = esi; /* 0x160C71F2: mov eax, esi */
L_160C71F4:
    SET_LO8(edx, MEM8(eax)); /* 0x160C71F4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C71F6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7214; /* 0x160C71F8: jne 0x160c7214 */
L_160C71FA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C71FA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7210; /* 0x160C71FC: je 0x160c7210 */
L_160C71FE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C71FE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7201: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7214; /* 0x160C7204: jne 0x160c7214 */
L_160C7206:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7206: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7209: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C720C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C71F4; /* 0x160C720E: jne 0x160c71f4 */
L_160C7210:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7210: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7219; /* 0x160C7212: jmp 0x160c7219 */
L_160C7214:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7214: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7216: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7219:
    /* test eax, eax */ /* 0x160C7219: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C722B; /* 0x160C721B: jne 0x160c722b */
L_160C721D:
    eax = 0x137u; /* 0x160C721D: mov eax, 0x137 */
    edi = POP32_VAL(esp); /* 0x160C7222: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7223: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7224: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7225: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7226: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7227: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7228: ret 0xc */
L_160C722B:
    ecx = 0x16038694u; /* 0x160C722B: mov ecx, 0x16038694 */
    eax = esi; /* 0x160C7230: mov eax, esi */
L_160C7232:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7232: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7234: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7252; /* 0x160C7236: jne 0x160c7252 */
L_160C7238:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7238: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C724E; /* 0x160C723A: je 0x160c724e */
L_160C723C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C723C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C723F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7252; /* 0x160C7242: jne 0x160c7252 */
L_160C7244:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7244: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7247: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C724A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7232; /* 0x160C724C: jne 0x160c7232 */
L_160C724E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C724E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7257; /* 0x160C7250: jmp 0x160c7257 */
L_160C7252:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7252: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7254: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7257:
    /* test eax, eax */ /* 0x160C7257: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7259: jne 0x160c70bb */
L_160C725F:
    eax = 0x136u; /* 0x160C725F: mov eax, 0x136 */
    edi = POP32_VAL(esp); /* 0x160C7264: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7265: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7266: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7267: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7268: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7269: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C726A: ret 0xc */
L_160C726D:
    ecx = 0x16030184u; /* 0x160C726D: mov ecx, 0x16030184 */
    eax = esi; /* 0x160C7272: mov eax, esi */
L_160C7274:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7274: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7276: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7294; /* 0x160C7278: jne 0x160c7294 */
L_160C727A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C727A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7290; /* 0x160C727C: je 0x160c7290 */
L_160C727E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C727E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7281: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7294; /* 0x160C7284: jne 0x160c7294 */
L_160C7286:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7286: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7289: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C728C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7274; /* 0x160C728E: jne 0x160c7274 */
L_160C7290:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7290: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7299; /* 0x160C7292: jmp 0x160c7299 */
L_160C7294:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7294: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7296: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7299:
    /* test eax, eax */ /* 0x160C7299: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C72AB; /* 0x160C729B: jne 0x160c72ab */
L_160C729D:
    eax = 0x133u; /* 0x160C729D: mov eax, 0x133 */
    edi = POP32_VAL(esp); /* 0x160C72A2: pop edi */
    esi = POP32_VAL(esp); /* 0x160C72A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C72A4: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C72A5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C72A6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C72A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C72A8: ret 0xc */
L_160C72AB:
    ecx = 0x16030150u; /* 0x160C72AB: mov ecx, 0x16030150 */
    eax = esi; /* 0x160C72B0: mov eax, esi */
L_160C72B2:
    SET_LO8(edx, MEM8(eax)); /* 0x160C72B2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C72B4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C72D2; /* 0x160C72B6: jne 0x160c72d2 */
L_160C72B8:
    /* test LO8(edx), LO8(edx) */ /* 0x160C72B8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C72CE; /* 0x160C72BA: je 0x160c72ce */
L_160C72BC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C72BC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C72BF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C72D2; /* 0x160C72C2: jne 0x160c72d2 */
L_160C72C4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C72C4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C72C7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C72CA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C72B2; /* 0x160C72CC: jne 0x160c72b2 */
L_160C72CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C72CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C72D7; /* 0x160C72D0: jmp 0x160c72d7 */
L_160C72D2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C72D2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C72D4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C72D7:
    /* test eax, eax */ /* 0x160C72D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C72E9; /* 0x160C72D9: jne 0x160c72e9 */
L_160C72DB:
    eax = 0x135u; /* 0x160C72DB: mov eax, 0x135 */
    edi = POP32_VAL(esp); /* 0x160C72E0: pop edi */
    esi = POP32_VAL(esp); /* 0x160C72E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C72E2: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C72E3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C72E4: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C72E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C72E6: ret 0xc */
L_160C72E9:
    ecx = MEM32(ebp + 0x8); /* 0x160C72E9: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx + 0x243), 0 */ /* 0x160C72EC: cmp byte ptr [ecx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C72F3: jne 0x160c70bb */
L_160C72F9:
    ecx = 0x1603869Cu; /* 0x160C72F9: mov ecx, 0x1603869c */
    eax = esi; /* 0x160C72FE: mov eax, esi */
L_160C7300:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7300: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7302: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7320; /* 0x160C7304: jne 0x160c7320 */
L_160C7306:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7306: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C731C; /* 0x160C7308: je 0x160c731c */
L_160C730A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C730A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C730D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7320; /* 0x160C7310: jne 0x160c7320 */
L_160C7312:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7312: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7315: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7318: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7300; /* 0x160C731A: jne 0x160c7300 */
L_160C731C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C731C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7325; /* 0x160C731E: jmp 0x160c7325 */
L_160C7320:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7320: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7322: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7325:
    /* test eax, eax */ /* 0x160C7325: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7340; /* 0x160C7327: jne 0x160c7340 */
L_160C7329:
    edx = MEM32(ebp + 0xC); /* 0x160C7329: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x3Cu; /* 0x160C732C: mov dword ptr [edx], 0x3c */
    eax = 0x17Cu; /* 0x160C7332: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C7337: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7338: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7339: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C733A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C733B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C733C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C733D: ret 0xc */
L_160C7340:
    ecx = 0x160386A8u; /* 0x160C7340: mov ecx, 0x160386a8 */
    eax = esi; /* 0x160C7345: mov eax, esi */
L_160C7347:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7347: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7349: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7367; /* 0x160C734B: jne 0x160c7367 */
L_160C734D:
    /* test LO8(edx), LO8(edx) */ /* 0x160C734D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7363; /* 0x160C734F: je 0x160c7363 */
L_160C7351:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7351: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7354: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7367; /* 0x160C7357: jne 0x160c7367 */
L_160C7359:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7359: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C735C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C735F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7347; /* 0x160C7361: jne 0x160c7347 */
L_160C7363:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7363: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C736C; /* 0x160C7365: jmp 0x160c736c */
L_160C7367:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7367: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7369: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C736C:
    /* test eax, eax */ /* 0x160C736C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7387; /* 0x160C736E: jne 0x160c7387 */
L_160C7370:
    eax = MEM32(ebp + 0xC); /* 0x160C7370: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x3Eu; /* 0x160C7373: mov dword ptr [eax], 0x3e */
    eax = 0x17Du; /* 0x160C7379: mov eax, 0x17d */
    edi = POP32_VAL(esp); /* 0x160C737E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C737F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7380: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7381: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7382: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7383: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7384: ret 0xc */
L_160C7387:
    ecx = 0x160386BCu; /* 0x160C7387: mov ecx, 0x160386bc */
    eax = esi; /* 0x160C738C: mov eax, esi */
    edi = edi; /* 0x160C738E: mov edi, edi */
L_160C7390:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7390: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7392: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C73B0; /* 0x160C7394: jne 0x160c73b0 */
L_160C7396:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7396: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C73AC; /* 0x160C7398: je 0x160c73ac */
L_160C739A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C739A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C739D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C73B0; /* 0x160C73A0: jne 0x160c73b0 */
L_160C73A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C73A2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C73A5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C73A8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7390; /* 0x160C73AA: jne 0x160c7390 */
L_160C73AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C73AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C73B5; /* 0x160C73AE: jmp 0x160c73b5 */
L_160C73B0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C73B0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C73B2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C73B5:
    /* test eax, eax */ /* 0x160C73B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C73D0; /* 0x160C73B7: jne 0x160c73d0 */
L_160C73B9:
    ecx = MEM32(ebp + 0xC); /* 0x160C73B9: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = 0x40u; /* 0x160C73BC: mov dword ptr [ecx], 0x40 */
    eax = 0x17Cu; /* 0x160C73C2: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C73C7: pop edi */
    esi = POP32_VAL(esp); /* 0x160C73C8: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C73C9: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C73CA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C73CB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C73CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C73CD: ret 0xc */
L_160C73D0:
    ecx = 0x160386D0u; /* 0x160C73D0: mov ecx, 0x160386d0 */
    eax = esi; /* 0x160C73D5: mov eax, esi */
L_160C73D7:
    SET_LO8(edx, MEM8(eax)); /* 0x160C73D7: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C73D9: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C73F7; /* 0x160C73DB: jne 0x160c73f7 */
L_160C73DD:
    /* test LO8(edx), LO8(edx) */ /* 0x160C73DD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C73F3; /* 0x160C73DF: je 0x160c73f3 */
L_160C73E1:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C73E1: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C73E4: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C73F7; /* 0x160C73E7: jne 0x160c73f7 */
L_160C73E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C73E9: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C73EC: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C73EF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C73D7; /* 0x160C73F1: jne 0x160c73d7 */
L_160C73F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C73F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C73FC; /* 0x160C73F5: jmp 0x160c73fc */
L_160C73F7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C73F7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C73F9: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C73FC:
    /* test eax, eax */ /* 0x160C73FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7417; /* 0x160C73FE: jne 0x160c7417 */
L_160C7400:
    edx = MEM32(ebp + 0xC); /* 0x160C7400: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x37u; /* 0x160C7403: mov dword ptr [edx], 0x37 */
    eax = 0x17Cu; /* 0x160C7409: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C740E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C740F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7410: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7411: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7412: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7413: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7414: ret 0xc */
L_160C7417:
    ecx = 0x160386DCu; /* 0x160C7417: mov ecx, 0x160386dc */
    eax = esi; /* 0x160C741C: mov eax, esi */
    edi = edi; /* 0x160C741E: mov edi, edi */
L_160C7420:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7420: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7422: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7440; /* 0x160C7424: jne 0x160c7440 */
L_160C7426:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7426: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C743C; /* 0x160C7428: je 0x160c743c */
L_160C742A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C742A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C742D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7440; /* 0x160C7430: jne 0x160c7440 */
L_160C7432:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7432: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7435: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7438: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7420; /* 0x160C743A: jne 0x160c7420 */
L_160C743C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C743C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7445; /* 0x160C743E: jmp 0x160c7445 */
L_160C7440:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7440: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7442: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7445:
    /* test eax, eax */ /* 0x160C7445: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7460; /* 0x160C7447: jne 0x160c7460 */
L_160C7449:
    eax = MEM32(ebp + 0xC); /* 0x160C7449: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x38u; /* 0x160C744C: mov dword ptr [eax], 0x38 */
    eax = 0x17Cu; /* 0x160C7452: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C7457: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7458: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7459: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C745A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C745B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C745C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C745D: ret 0xc */
L_160C7460:
    ecx = 0x160386F0u; /* 0x160C7460: mov ecx, 0x160386f0 */
    eax = esi; /* 0x160C7465: mov eax, esi */
L_160C7467:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7467: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7469: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7487; /* 0x160C746B: jne 0x160c7487 */
L_160C746D:
    /* test LO8(edx), LO8(edx) */ /* 0x160C746D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7483; /* 0x160C746F: je 0x160c7483 */
L_160C7471:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7471: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7474: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7487; /* 0x160C7477: jne 0x160c7487 */
L_160C7479:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7479: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C747C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C747F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7467; /* 0x160C7481: jne 0x160c7467 */
L_160C7483:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7483: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C748C; /* 0x160C7485: jmp 0x160c748c */
L_160C7487:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7487: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7489: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C748C:
    /* test eax, eax */ /* 0x160C748C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C74A7; /* 0x160C748E: jne 0x160c74a7 */
L_160C7490:
    ecx = MEM32(ebp + 0xC); /* 0x160C7490: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = 0x39u; /* 0x160C7493: mov dword ptr [ecx], 0x39 */
    eax = 0x17Cu; /* 0x160C7499: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C749E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C749F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C74A0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C74A1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C74A2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C74A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C74A4: ret 0xc */
L_160C74A7:
    ecx = 0x160386FCu; /* 0x160C74A7: mov ecx, 0x160386fc */
    eax = esi; /* 0x160C74AC: mov eax, esi */
    edi = edi; /* 0x160C74AE: mov edi, edi */
L_160C74B0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C74B0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C74B2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C74D0; /* 0x160C74B4: jne 0x160c74d0 */
L_160C74B6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C74B6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C74CC; /* 0x160C74B8: je 0x160c74cc */
L_160C74BA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C74BA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C74BD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C74D0; /* 0x160C74C0: jne 0x160c74d0 */
L_160C74C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C74C2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C74C5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C74C8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C74B0; /* 0x160C74CA: jne 0x160c74b0 */
L_160C74CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C74CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C74D5; /* 0x160C74CE: jmp 0x160c74d5 */
L_160C74D0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C74D0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C74D2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C74D5:
    /* test eax, eax */ /* 0x160C74D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C74F0; /* 0x160C74D7: jne 0x160c74f0 */
L_160C74D9:
    edx = MEM32(ebp + 0xC); /* 0x160C74D9: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x3Au; /* 0x160C74DC: mov dword ptr [edx], 0x3a */
    eax = 0x17Cu; /* 0x160C74E2: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C74E7: pop edi */
    esi = POP32_VAL(esp); /* 0x160C74E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C74E9: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C74EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C74EB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C74EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C74ED: ret 0xc */
L_160C74F0:
    ecx = 0x16038710u; /* 0x160C74F0: mov ecx, 0x16038710 */
    eax = esi; /* 0x160C74F5: mov eax, esi */
L_160C74F7:
    SET_LO8(edx, MEM8(eax)); /* 0x160C74F7: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C74F9: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7517; /* 0x160C74FB: jne 0x160c7517 */
L_160C74FD:
    /* test LO8(edx), LO8(edx) */ /* 0x160C74FD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7513; /* 0x160C74FF: je 0x160c7513 */
L_160C7501:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7501: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7504: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7517; /* 0x160C7507: jne 0x160c7517 */
L_160C7509:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7509: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C750C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C750F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C74F7; /* 0x160C7511: jne 0x160c74f7 */
L_160C7513:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7513: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C751C; /* 0x160C7515: jmp 0x160c751c */
L_160C7517:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7517: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7519: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C751C:
    /* test eax, eax */ /* 0x160C751C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C751E: jne 0x160c70bb */
L_160C7524:
    eax = MEM32(ebp + 0xC); /* 0x160C7524: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x3Bu; /* 0x160C7527: mov dword ptr [eax], 0x3b */
    eax = 0x17Cu; /* 0x160C752D: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C7532: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7533: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7534: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7535: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7536: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7537: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7538: ret 0xc */
L_160C753B:
    ecx = 0x1602DFC8u; /* 0x160C753B: mov ecx, 0x1602dfc8 */
    eax = esi; /* 0x160C7540: mov eax, esi */
L_160C7542:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7542: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7544: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7562; /* 0x160C7546: jne 0x160c7562 */
L_160C7548:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7548: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C755E; /* 0x160C754A: je 0x160c755e */
L_160C754C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C754C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C754F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7562; /* 0x160C7552: jne 0x160c7562 */
L_160C7554:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7554: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7557: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C755A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7542; /* 0x160C755C: jne 0x160c7542 */
L_160C755E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C755E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7567; /* 0x160C7560: jmp 0x160c7567 */
L_160C7562:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7562: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7564: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7567:
    /* test eax, eax */ /* 0x160C7567: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7579; /* 0x160C7569: jne 0x160c7579 */
L_160C756B:
    eax = 0x13Au; /* 0x160C756B: mov eax, 0x13a */
    edi = POP32_VAL(esp); /* 0x160C7570: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7571: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7572: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7573: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7574: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7575: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7576: ret 0xc */
L_160C7579:
    ecx = 0x1602DFD4u; /* 0x160C7579: mov ecx, 0x1602dfd4 */
    eax = esi; /* 0x160C757E: mov eax, esi */
L_160C7580:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7580: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7582: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C75A0; /* 0x160C7584: jne 0x160c75a0 */
L_160C7586:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7586: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C759C; /* 0x160C7588: je 0x160c759c */
L_160C758A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C758A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C758D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C75A0; /* 0x160C7590: jne 0x160c75a0 */
L_160C7592:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7592: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7595: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7598: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7580; /* 0x160C759A: jne 0x160c7580 */
L_160C759C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C759C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C75A5; /* 0x160C759E: jmp 0x160c75a5 */
L_160C75A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C75A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C75A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C75A5:
    /* test eax, eax */ /* 0x160C75A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C75B7; /* 0x160C75A7: jne 0x160c75b7 */
L_160C75A9:
    eax = 0x13Bu; /* 0x160C75A9: mov eax, 0x13b */
    edi = POP32_VAL(esp); /* 0x160C75AE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C75AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C75B0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C75B1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C75B2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C75B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C75B4: ret 0xc */
L_160C75B7:
    ecx = 0x1602DFE0u; /* 0x160C75B7: mov ecx, 0x1602dfe0 */
    eax = esi; /* 0x160C75BC: mov eax, esi */
    edi = edi; /* 0x160C75BE: mov edi, edi */
L_160C75C0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C75C0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C75C2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C75E0; /* 0x160C75C4: jne 0x160c75e0 */
L_160C75C6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C75C6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C75DC; /* 0x160C75C8: je 0x160c75dc */
L_160C75CA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C75CA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C75CD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C75E0; /* 0x160C75D0: jne 0x160c75e0 */
L_160C75D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C75D2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C75D5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C75D8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C75C0; /* 0x160C75DA: jne 0x160c75c0 */
L_160C75DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C75DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C75E5; /* 0x160C75DE: jmp 0x160c75e5 */
L_160C75E0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C75E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C75E2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C75E5:
    /* test eax, eax */ /* 0x160C75E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C75F7; /* 0x160C75E7: jne 0x160c75f7 */
L_160C75E9:
    eax = 0x13Cu; /* 0x160C75E9: mov eax, 0x13c */
    edi = POP32_VAL(esp); /* 0x160C75EE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C75EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C75F0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C75F1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C75F2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C75F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C75F4: ret 0xc */
L_160C75F7:
    ecx = 0x1602DFECu; /* 0x160C75F7: mov ecx, 0x1602dfec */
    eax = esi; /* 0x160C75FC: mov eax, esi */
    edi = edi; /* 0x160C75FE: mov edi, edi */
L_160C7600:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7600: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7602: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7620; /* 0x160C7604: jne 0x160c7620 */
L_160C7606:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7606: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C761C; /* 0x160C7608: je 0x160c761c */
L_160C760A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C760A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C760D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7620; /* 0x160C7610: jne 0x160c7620 */
L_160C7612:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7612: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7615: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7618: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7600; /* 0x160C761A: jne 0x160c7600 */
L_160C761C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C761C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7625; /* 0x160C761E: jmp 0x160c7625 */
L_160C7620:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7620: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7622: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7625:
    /* test eax, eax */ /* 0x160C7625: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7637; /* 0x160C7627: jne 0x160c7637 */
L_160C7629:
    eax = 0x13Du; /* 0x160C7629: mov eax, 0x13d */
    edi = POP32_VAL(esp); /* 0x160C762E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C762F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7630: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7631: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7632: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7633: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7634: ret 0xc */
L_160C7637:
    ecx = 0x1603871Cu; /* 0x160C7637: mov ecx, 0x1603871c */
    eax = esi; /* 0x160C763C: mov eax, esi */
    edi = edi; /* 0x160C763E: mov edi, edi */
L_160C7640:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7640: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7642: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7660; /* 0x160C7644: jne 0x160c7660 */
L_160C7646:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7646: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C765C; /* 0x160C7648: je 0x160c765c */
L_160C764A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C764A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C764D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7660; /* 0x160C7650: jne 0x160c7660 */
L_160C7652:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7652: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7655: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7658: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7640; /* 0x160C765A: jne 0x160c7640 */
L_160C765C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C765C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7665; /* 0x160C765E: jmp 0x160c7665 */
L_160C7660:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7660: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7662: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7665:
    /* test eax, eax */ /* 0x160C7665: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7677; /* 0x160C7667: jne 0x160c7677 */
L_160C7669:
    eax = 0x13Eu; /* 0x160C7669: mov eax, 0x13e */
    edi = POP32_VAL(esp); /* 0x160C766E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C766F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7670: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7671: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7672: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7673: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7674: ret 0xc */
L_160C7677:
    ecx = 0x16030B7Cu; /* 0x160C7677: mov ecx, 0x16030b7c */
    eax = esi; /* 0x160C767C: mov eax, esi */
    edi = edi; /* 0x160C767E: mov edi, edi */
L_160C7680:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7680: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7682: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C76A0; /* 0x160C7684: jne 0x160c76a0 */
L_160C7686:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7686: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C769C; /* 0x160C7688: je 0x160c769c */
L_160C768A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C768A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C768D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C76A0; /* 0x160C7690: jne 0x160c76a0 */
L_160C7692:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7692: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7695: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7698: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7680; /* 0x160C769A: jne 0x160c7680 */
L_160C769C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C769C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C76A5; /* 0x160C769E: jmp 0x160c76a5 */
L_160C76A0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C76A0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C76A2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C76A5:
    /* test eax, eax */ /* 0x160C76A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C76B7; /* 0x160C76A7: jne 0x160c76b7 */
L_160C76A9:
    eax = 0x13Fu; /* 0x160C76A9: mov eax, 0x13f */
    edi = POP32_VAL(esp); /* 0x160C76AE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C76AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C76B0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C76B1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C76B2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C76B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C76B4: ret 0xc */
L_160C76B7:
    ecx = 0x1603872Cu; /* 0x160C76B7: mov ecx, 0x1603872c */
    eax = esi; /* 0x160C76BC: mov eax, esi */
    edi = edi; /* 0x160C76BE: mov edi, edi */
L_160C76C0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C76C0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C76C2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C76E0; /* 0x160C76C4: jne 0x160c76e0 */
L_160C76C6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C76C6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C76DC; /* 0x160C76C8: je 0x160c76dc */
L_160C76CA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C76CA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C76CD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C76E0; /* 0x160C76D0: jne 0x160c76e0 */
L_160C76D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C76D2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C76D5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C76D8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C76C0; /* 0x160C76DA: jne 0x160c76c0 */
L_160C76DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C76DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C76E5; /* 0x160C76DE: jmp 0x160c76e5 */
L_160C76E0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C76E0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C76E2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C76E5:
    /* test eax, eax */ /* 0x160C76E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C76E7: je 0x160c66cd */
L_160C76ED:
    ecx = 0x16038734u; /* 0x160C76ED: mov ecx, 0x16038734 */
    eax = esi; /* 0x160C76F2: mov eax, esi */
L_160C76F4:
    SET_LO8(edx, MEM8(eax)); /* 0x160C76F4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C76F6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7714; /* 0x160C76F8: jne 0x160c7714 */
L_160C76FA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C76FA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7710; /* 0x160C76FC: je 0x160c7710 */
L_160C76FE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C76FE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7701: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7714; /* 0x160C7704: jne 0x160c7714 */
L_160C7706:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7706: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7709: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C770C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C76F4; /* 0x160C770E: jne 0x160c76f4 */
L_160C7710:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7710: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7719; /* 0x160C7712: jmp 0x160c7719 */
L_160C7714:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7714: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7716: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7719:
    /* test eax, eax */ /* 0x160C7719: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C771B: je 0x160c66cd */
L_160C7721:
    ecx = 0x1602E0F0u; /* 0x160C7721: mov ecx, 0x1602e0f0 */
    eax = esi; /* 0x160C7726: mov eax, esi */
L_160C7728:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7728: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C772A: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7748; /* 0x160C772C: jne 0x160c7748 */
L_160C772E:
    /* test LO8(edx), LO8(edx) */ /* 0x160C772E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7744; /* 0x160C7730: je 0x160c7744 */
L_160C7732:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7732: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7735: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7748; /* 0x160C7738: jne 0x160c7748 */
L_160C773A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C773A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C773D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7740: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7728; /* 0x160C7742: jne 0x160c7728 */
L_160C7744:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7744: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C774D; /* 0x160C7746: jmp 0x160c774d */
L_160C7748:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7748: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C774A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C774D:
    /* test eax, eax */ /* 0x160C774D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C775F; /* 0x160C774F: jne 0x160c775f */
L_160C7751:
    eax = 0x140u; /* 0x160C7751: mov eax, 0x140 */
    edi = POP32_VAL(esp); /* 0x160C7756: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7757: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7758: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7759: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C775A: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C775B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C775C: ret 0xc */
L_160C775F:
    ecx = 0x1603873Cu; /* 0x160C775F: mov ecx, 0x1603873c */
    eax = esi; /* 0x160C7764: mov eax, esi */
L_160C7766:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7766: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7768: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7786; /* 0x160C776A: jne 0x160c7786 */
L_160C776C:
    /* test LO8(edx), LO8(edx) */ /* 0x160C776C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7782; /* 0x160C776E: je 0x160c7782 */
L_160C7770:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7770: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7773: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7786; /* 0x160C7776: jne 0x160c7786 */
L_160C7778:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7778: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C777B: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C777E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7766; /* 0x160C7780: jne 0x160c7766 */
L_160C7782:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7782: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C778B; /* 0x160C7784: jmp 0x160c778b */
L_160C7786:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7786: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7788: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C778B:
    /* test eax, eax */ /* 0x160C778B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C779D; /* 0x160C778D: jne 0x160c779d */
L_160C778F:
    eax = 0x142u; /* 0x160C778F: mov eax, 0x142 */
    edi = POP32_VAL(esp); /* 0x160C7794: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7795: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7796: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7797: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7798: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7799: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C779A: ret 0xc */
L_160C779D:
    ecx = 0x16038750u; /* 0x160C779D: mov ecx, 0x16038750 */
    eax = esi; /* 0x160C77A2: mov eax, esi */
L_160C77A4:
    SET_LO8(edx, MEM8(eax)); /* 0x160C77A4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C77A6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C77C4; /* 0x160C77A8: jne 0x160c77c4 */
L_160C77AA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C77AA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C77C0; /* 0x160C77AC: je 0x160c77c0 */
L_160C77AE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C77AE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C77B1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C77C4; /* 0x160C77B4: jne 0x160c77c4 */
L_160C77B6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C77B6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C77B9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C77BC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C77A4; /* 0x160C77BE: jne 0x160c77a4 */
L_160C77C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C77C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C77C9; /* 0x160C77C2: jmp 0x160c77c9 */
L_160C77C4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C77C4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C77C6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C77C9:
    /* test eax, eax */ /* 0x160C77C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C77DB; /* 0x160C77CB: jne 0x160c77db */
L_160C77CD:
    eax = 0x143u; /* 0x160C77CD: mov eax, 0x143 */
    edi = POP32_VAL(esp); /* 0x160C77D2: pop edi */
    esi = POP32_VAL(esp); /* 0x160C77D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C77D4: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C77D5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C77D6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C77D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C77D8: ret 0xc */
L_160C77DB:
    ecx = 0x16038758u; /* 0x160C77DB: mov ecx, 0x16038758 */
    eax = esi; /* 0x160C77E0: mov eax, esi */
L_160C77E2:
    SET_LO8(edx, MEM8(eax)); /* 0x160C77E2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C77E4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7802; /* 0x160C77E6: jne 0x160c7802 */
L_160C77E8:
    /* test LO8(edx), LO8(edx) */ /* 0x160C77E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C77FE; /* 0x160C77EA: je 0x160c77fe */
L_160C77EC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C77EC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C77EF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7802; /* 0x160C77F2: jne 0x160c7802 */
L_160C77F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C77F4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C77F7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C77FA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C77E2; /* 0x160C77FC: jne 0x160c77e2 */
L_160C77FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C77FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7807; /* 0x160C7800: jmp 0x160c7807 */
L_160C7802:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7802: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7804: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7807:
    /* test eax, eax */ /* 0x160C7807: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C7809: je 0x160c66cd */
L_160C780F:
    ecx = 0x1602DF1Cu; /* 0x160C780F: mov ecx, 0x1602df1c */
    eax = esi; /* 0x160C7814: mov eax, esi */
L_160C7816:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7816: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7818: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7836; /* 0x160C781A: jne 0x160c7836 */
L_160C781C:
    /* test LO8(edx), LO8(edx) */ /* 0x160C781C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7832; /* 0x160C781E: je 0x160c7832 */
L_160C7820:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7820: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7823: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7836; /* 0x160C7826: jne 0x160c7836 */
L_160C7828:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7828: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C782B: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C782E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7816; /* 0x160C7830: jne 0x160c7816 */
L_160C7832:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7832: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C783B; /* 0x160C7834: jmp 0x160c783b */
L_160C7836:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7836: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7838: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C783B:
    /* test eax, eax */ /* 0x160C783B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C784D; /* 0x160C783D: jne 0x160c784d */
L_160C783F:
    eax = 0x144u; /* 0x160C783F: mov eax, 0x144 */
    edi = POP32_VAL(esp); /* 0x160C7844: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7845: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7846: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7847: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7848: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7849: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C784A: ret 0xc */
L_160C784D:
    ecx = 0x1602E330u; /* 0x160C784D: mov ecx, 0x1602e330 */
    eax = esi; /* 0x160C7852: mov eax, esi */
L_160C7854:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7854: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7856: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7874; /* 0x160C7858: jne 0x160c7874 */
L_160C785A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C785A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7870; /* 0x160C785C: je 0x160c7870 */
L_160C785E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C785E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7861: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7874; /* 0x160C7864: jne 0x160c7874 */
L_160C7866:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7866: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7869: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C786C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7854; /* 0x160C786E: jne 0x160c7854 */
L_160C7870:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7870: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7879; /* 0x160C7872: jmp 0x160c7879 */
L_160C7874:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7874: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7876: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7879:
    /* test eax, eax */ /* 0x160C7879: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C788B; /* 0x160C787B: jne 0x160c788b */
L_160C787D:
    eax = 0x145u; /* 0x160C787D: mov eax, 0x145 */
    edi = POP32_VAL(esp); /* 0x160C7882: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7883: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7884: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7885: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7886: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7887: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7888: ret 0xc */
L_160C788B:
    ecx = 0x16038764u; /* 0x160C788B: mov ecx, 0x16038764 */
    eax = esi; /* 0x160C7890: mov eax, esi */
L_160C7892:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7892: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7894: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C78B2; /* 0x160C7896: jne 0x160c78b2 */
L_160C7898:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7898: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C78AE; /* 0x160C789A: je 0x160c78ae */
L_160C789C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C789C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C789F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C78B2; /* 0x160C78A2: jne 0x160c78b2 */
L_160C78A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C78A4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C78A7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C78AA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7892; /* 0x160C78AC: jne 0x160c7892 */
L_160C78AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C78AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C78B7; /* 0x160C78B0: jmp 0x160c78b7 */
L_160C78B2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C78B2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C78B4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C78B7:
    /* test eax, eax */ /* 0x160C78B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C78C9; /* 0x160C78B9: jne 0x160c78c9 */
L_160C78BB:
    eax = 0x146u; /* 0x160C78BB: mov eax, 0x146 */
    edi = POP32_VAL(esp); /* 0x160C78C0: pop edi */
    esi = POP32_VAL(esp); /* 0x160C78C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C78C2: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C78C3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C78C4: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C78C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C78C6: ret 0xc */
L_160C78C9:
    ecx = MEM32(ebp + 0x8); /* 0x160C78C9: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx + 0x243), 0 */ /* 0x160C78CC: cmp byte ptr [ecx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C78D3: jne 0x160c70bb */
L_160C78D9:
    ecx = 0x1602DFB0u; /* 0x160C78D9: mov ecx, 0x1602dfb0 */
    eax = esi; /* 0x160C78DE: mov eax, esi */
L_160C78E0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C78E0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C78E2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7900; /* 0x160C78E4: jne 0x160c7900 */
L_160C78E6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C78E6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C78FC; /* 0x160C78E8: je 0x160c78fc */
L_160C78EA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C78EA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C78ED: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7900; /* 0x160C78F0: jne 0x160c7900 */
L_160C78F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C78F2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C78F5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C78F8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C78E0; /* 0x160C78FA: jne 0x160c78e0 */
L_160C78FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C78FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7905; /* 0x160C78FE: jmp 0x160c7905 */
L_160C7900:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7900: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7902: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7905:
    /* test eax, eax */ /* 0x160C7905: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7917; /* 0x160C7907: jne 0x160c7917 */
L_160C7909:
    eax = 0x138u; /* 0x160C7909: mov eax, 0x138 */
    edi = POP32_VAL(esp); /* 0x160C790E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C790F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7910: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7911: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7912: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7913: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7914: ret 0xc */
L_160C7917:
    ecx = 0x1603876Cu; /* 0x160C7917: mov ecx, 0x1603876c */
    eax = esi; /* 0x160C791C: mov eax, esi */
    edi = edi; /* 0x160C791E: mov edi, edi */
L_160C7920:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7920: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7922: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7940; /* 0x160C7924: jne 0x160c7940 */
L_160C7926:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7926: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C793C; /* 0x160C7928: je 0x160c793c */
L_160C792A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C792A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C792D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7940; /* 0x160C7930: jne 0x160c7940 */
L_160C7932:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7932: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7935: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7938: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7920; /* 0x160C793A: jne 0x160c7920 */
L_160C793C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C793C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7945; /* 0x160C793E: jmp 0x160c7945 */
L_160C7940:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7940: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7942: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7945:
    /* test eax, eax */ /* 0x160C7945: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7947: jne 0x160c70bb */
L_160C794D:
    eax = 0x141u; /* 0x160C794D: mov eax, 0x141 */
    edi = POP32_VAL(esp); /* 0x160C7952: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7953: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7954: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7955: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7956: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7957: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7958: ret 0xc */
L_160C795B:
    ecx = 0x16031084u; /* 0x160C795B: mov ecx, 0x16031084 */
    eax = esi; /* 0x160C7960: mov eax, esi */
L_160C7962:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7962: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7964: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7982; /* 0x160C7966: jne 0x160c7982 */
L_160C7968:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7968: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C797E; /* 0x160C796A: je 0x160c797e */
L_160C796C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C796C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C796F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7982; /* 0x160C7972: jne 0x160c7982 */
L_160C7974:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7974: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7977: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C797A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7962; /* 0x160C797C: jne 0x160c7962 */
L_160C797E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C797E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7987; /* 0x160C7980: jmp 0x160c7987 */
L_160C7982:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7982: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7984: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7987:
    /* test eax, eax */ /* 0x160C7987: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C783F; /* 0x160C7989: je 0x160c783f */
L_160C798F:
    ecx = 0x1602DFB8u; /* 0x160C798F: mov ecx, 0x1602dfb8 */
    eax = esi; /* 0x160C7994: mov eax, esi */
L_160C7996:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7996: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7998: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C79B6; /* 0x160C799A: jne 0x160c79b6 */
L_160C799C:
    /* test LO8(edx), LO8(edx) */ /* 0x160C799C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C79B2; /* 0x160C799E: je 0x160c79b2 */
L_160C79A0:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C79A0: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C79A3: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C79B6; /* 0x160C79A6: jne 0x160c79b6 */
L_160C79A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C79A8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C79AB: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C79AE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7996; /* 0x160C79B0: jne 0x160c7996 */
L_160C79B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C79B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C79BB; /* 0x160C79B4: jmp 0x160c79bb */
L_160C79B6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C79B6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C79B8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C79BB:
    /* test eax, eax */ /* 0x160C79BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7909; /* 0x160C79BD: je 0x160c7909 */
L_160C79C3:
    ecx = 0x1603108Cu; /* 0x160C79C3: mov ecx, 0x1603108c */
    eax = esi; /* 0x160C79C8: mov eax, esi */
    ebx = ebx; /* 0x160C79CA: lea ebx, [ebx] */
L_160C79D0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C79D0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C79D2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C79F0; /* 0x160C79D4: jne 0x160c79f0 */
L_160C79D6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C79D6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C79EC; /* 0x160C79D8: je 0x160c79ec */
L_160C79DA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C79DA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C79DD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C79F0; /* 0x160C79E0: jne 0x160c79f0 */
L_160C79E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C79E2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C79E5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C79E8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C79D0; /* 0x160C79EA: jne 0x160c79d0 */
L_160C79EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C79EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C79F5; /* 0x160C79EE: jmp 0x160c79f5 */
L_160C79F0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C79F0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C79F2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C79F5:
    /* test eax, eax */ /* 0x160C79F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7A07; /* 0x160C79F7: jne 0x160c7a07 */
L_160C79F9:
    eax = 0x139u; /* 0x160C79F9: mov eax, 0x139 */
    edi = POP32_VAL(esp); /* 0x160C79FE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C79FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7A00: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7A01: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7A02: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7A03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7A04: ret 0xc */
L_160C7A07:
    edx = MEM32(ebp + 0x8); /* 0x160C7A07: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM8(edx + 0x243), 0 */ /* 0x160C7A0A: cmp byte ptr [edx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7A11: jne 0x160c70bb */
L_160C7A17:
    ecx = 0x16038778u; /* 0x160C7A17: mov ecx, 0x16038778 */
    eax = esi; /* 0x160C7A1C: mov eax, esi */
    edi = edi; /* 0x160C7A1E: mov edi, edi */
L_160C7A20:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7A20: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7A22: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7A40; /* 0x160C7A24: jne 0x160c7a40 */
L_160C7A26:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7A26: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7A3C; /* 0x160C7A28: je 0x160c7a3c */
L_160C7A2A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7A2A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7A2D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7A40; /* 0x160C7A30: jne 0x160c7a40 */
L_160C7A32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7A32: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7A35: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7A38: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7A20; /* 0x160C7A3A: jne 0x160c7a20 */
L_160C7A3C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7A3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7A45; /* 0x160C7A3E: jmp 0x160c7a45 */
L_160C7A40:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7A40: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7A42: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7A45:
    /* test eax, eax */ /* 0x160C7A45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7A47: jne 0x160c70bb */
L_160C7A4D:
    eax = MEM32(ebp + 0xC); /* 0x160C7A4D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x3Fu; /* 0x160C7A50: mov dword ptr [eax], 0x3f */
    eax = 0x17Cu; /* 0x160C7A56: mov eax, 0x17c */
    edi = POP32_VAL(esp); /* 0x160C7A5B: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7A5C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7A5D: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7A5E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7A5F: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7A60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7A61: ret 0xc */
L_160C7A64:
    ecx = 0x1602E15Cu; /* 0x160C7A64: mov ecx, 0x1602e15c */
    eax = esi; /* 0x160C7A69: mov eax, esi */
    goto L_160C7A70; /* 0x160C7A6B: jmp 0x160c7a70 */
L_160C7A70:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7A70: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7A72: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7A90; /* 0x160C7A74: jne 0x160c7a90 */
L_160C7A76:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7A76: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7A8C; /* 0x160C7A78: je 0x160c7a8c */
L_160C7A7A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7A7A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7A7D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7A90; /* 0x160C7A80: jne 0x160c7a90 */
L_160C7A82:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7A82: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7A85: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7A88: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7A70; /* 0x160C7A8A: jne 0x160c7a70 */
L_160C7A8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7A8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7A95; /* 0x160C7A8E: jmp 0x160c7a95 */
L_160C7A90:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7A90: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7A92: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7A95:
    /* test eax, eax */ /* 0x160C7A95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7AA7; /* 0x160C7A97: jne 0x160c7aa7 */
L_160C7A99:
    eax = 0x147u; /* 0x160C7A99: mov eax, 0x147 */
    edi = POP32_VAL(esp); /* 0x160C7A9E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7A9F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7AA0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7AA1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7AA2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7AA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7AA4: ret 0xc */
L_160C7AA7:
    ecx = 0x1603878Cu; /* 0x160C7AA7: mov ecx, 0x1603878c */
    eax = esi; /* 0x160C7AAC: mov eax, esi */
    edi = edi; /* 0x160C7AAE: mov edi, edi */
L_160C7AB0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7AB0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7AB2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7AD0; /* 0x160C7AB4: jne 0x160c7ad0 */
L_160C7AB6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7AB6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7ACC; /* 0x160C7AB8: je 0x160c7acc */
L_160C7ABA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7ABA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7ABD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7AD0; /* 0x160C7AC0: jne 0x160c7ad0 */
L_160C7AC2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7AC2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7AC5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7AC8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7AB0; /* 0x160C7ACA: jne 0x160c7ab0 */
L_160C7ACC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7ACC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7AD5; /* 0x160C7ACE: jmp 0x160c7ad5 */
L_160C7AD0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7AD0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7AD2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7AD5:
    /* test eax, eax */ /* 0x160C7AD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C7AD7: je 0x160c66cd */
L_160C7ADD:
    ecx = 0x16038798u; /* 0x160C7ADD: mov ecx, 0x16038798 */
    eax = esi; /* 0x160C7AE2: mov eax, esi */
L_160C7AE4:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7AE4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7AE6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7B04; /* 0x160C7AE8: jne 0x160c7b04 */
L_160C7AEA:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7AEA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7B00; /* 0x160C7AEC: je 0x160c7b00 */
L_160C7AEE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7AEE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7AF1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7B04; /* 0x160C7AF4: jne 0x160c7b04 */
L_160C7AF6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7AF6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7AF9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7AFC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7AE4; /* 0x160C7AFE: jne 0x160c7ae4 */
L_160C7B00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7B00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7B09; /* 0x160C7B02: jmp 0x160c7b09 */
L_160C7B04:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7B04: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7B06: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7B09:
    /* test eax, eax */ /* 0x160C7B09: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7B1B; /* 0x160C7B0B: jne 0x160c7b1b */
L_160C7B0D:
    eax = 0x14Du; /* 0x160C7B0D: mov eax, 0x14d */
    edi = POP32_VAL(esp); /* 0x160C7B12: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7B13: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7B14: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7B15: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7B16: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7B17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7B18: ret 0xc */
L_160C7B1B:
    ecx = 0x160387A4u; /* 0x160C7B1B: mov ecx, 0x160387a4 */
    eax = esi; /* 0x160C7B20: mov eax, esi */
L_160C7B22:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7B22: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7B24: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7B42; /* 0x160C7B26: jne 0x160c7b42 */
L_160C7B28:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7B28: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7B3E; /* 0x160C7B2A: je 0x160c7b3e */
L_160C7B2C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7B2C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7B2F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7B42; /* 0x160C7B32: jne 0x160c7b42 */
L_160C7B34:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7B34: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7B37: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7B3A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7B22; /* 0x160C7B3C: jne 0x160c7b22 */
L_160C7B3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7B3E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7B47; /* 0x160C7B40: jmp 0x160c7b47 */
L_160C7B42:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7B42: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7B44: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7B47:
    /* test eax, eax */ /* 0x160C7B47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7B59; /* 0x160C7B49: jne 0x160c7b59 */
L_160C7B4B:
    eax = 0x14Eu; /* 0x160C7B4B: mov eax, 0x14e */
    edi = POP32_VAL(esp); /* 0x160C7B50: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7B51: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7B52: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7B53: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7B54: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7B55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7B56: ret 0xc */
L_160C7B59:
    ecx = 0x160387B0u; /* 0x160C7B59: mov ecx, 0x160387b0 */
    eax = esi; /* 0x160C7B5E: mov eax, esi */
L_160C7B60:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7B60: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7B62: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7B80; /* 0x160C7B64: jne 0x160c7b80 */
L_160C7B66:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7B66: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7B7C; /* 0x160C7B68: je 0x160c7b7c */
L_160C7B6A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7B6A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7B6D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7B80; /* 0x160C7B70: jne 0x160c7b80 */
L_160C7B72:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7B72: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7B75: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7B78: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7B60; /* 0x160C7B7A: jne 0x160c7b60 */
L_160C7B7C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7B7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7B85; /* 0x160C7B7E: jmp 0x160c7b85 */
L_160C7B80:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7B80: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7B82: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7B85:
    /* test eax, eax */ /* 0x160C7B85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C7B87: je 0x160c66cd */
L_160C7B8D:
    ecx = 0x1602D640u; /* 0x160C7B8D: mov ecx, 0x1602d640 */
    eax = esi; /* 0x160C7B92: mov eax, esi */
L_160C7B94:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7B94: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7B96: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7BB4; /* 0x160C7B98: jne 0x160c7bb4 */
L_160C7B9A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7B9A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7BB0; /* 0x160C7B9C: je 0x160c7bb0 */
L_160C7B9E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7B9E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7BA1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7BB4; /* 0x160C7BA4: jne 0x160c7bb4 */
L_160C7BA6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7BA6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7BA9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7BAC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7B94; /* 0x160C7BAE: jne 0x160c7b94 */
L_160C7BB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7BB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7BB9; /* 0x160C7BB2: jmp 0x160c7bb9 */
L_160C7BB4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7BB4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7BB6: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7BB9:
    /* test eax, eax */ /* 0x160C7BB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7BCB; /* 0x160C7BBB: jne 0x160c7bcb */
L_160C7BBD:
    eax = 0x150u; /* 0x160C7BBD: mov eax, 0x150 */
    edi = POP32_VAL(esp); /* 0x160C7BC2: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7BC3: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7BC4: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7BC5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7BC6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7BC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7BC8: ret 0xc */
L_160C7BCB:
    ecx = 0x160387B8u; /* 0x160C7BCB: mov ecx, 0x160387b8 */
    eax = esi; /* 0x160C7BD0: mov eax, esi */
L_160C7BD2:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7BD2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7BD4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7BF2; /* 0x160C7BD6: jne 0x160c7bf2 */
L_160C7BD8:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7BD8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7BEE; /* 0x160C7BDA: je 0x160c7bee */
L_160C7BDC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7BDC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7BDF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7BF2; /* 0x160C7BE2: jne 0x160c7bf2 */
L_160C7BE4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7BE4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7BE7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7BEA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7BD2; /* 0x160C7BEC: jne 0x160c7bd2 */
L_160C7BEE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7BEE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7BF7; /* 0x160C7BF0: jmp 0x160c7bf7 */
L_160C7BF2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7BF2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7BF4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7BF7:
    /* test eax, eax */ /* 0x160C7BF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C7BF9: je 0x160c66cd */
L_160C7BFF:
    ecx = 0x160387BCu; /* 0x160C7BFF: mov ecx, 0x160387bc */
    eax = esi; /* 0x160C7C04: mov eax, esi */
L_160C7C06:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7C06: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7C08: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7C26; /* 0x160C7C0A: jne 0x160c7c26 */
L_160C7C0C:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7C0C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7C22; /* 0x160C7C0E: je 0x160c7c22 */
L_160C7C10:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7C10: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7C13: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7C26; /* 0x160C7C16: jne 0x160c7c26 */
L_160C7C18:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7C18: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7C1B: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7C1E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7C06; /* 0x160C7C20: jne 0x160c7c06 */
L_160C7C22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7C22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7C2B; /* 0x160C7C24: jmp 0x160c7c2b */
L_160C7C26:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7C26: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7C28: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7C2B:
    /* test eax, eax */ /* 0x160C7C2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7C3D; /* 0x160C7C2D: jne 0x160c7c3d */
L_160C7C2F:
    eax = 0x151u; /* 0x160C7C2F: mov eax, 0x151 */
    edi = POP32_VAL(esp); /* 0x160C7C34: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7C35: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7C36: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7C37: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7C38: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7C39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7C3A: ret 0xc */
L_160C7C3D:
    ecx = 0x160387C4u; /* 0x160C7C3D: mov ecx, 0x160387c4 */
    eax = esi; /* 0x160C7C42: mov eax, esi */
L_160C7C44:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7C44: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7C46: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7C64; /* 0x160C7C48: jne 0x160c7c64 */
L_160C7C4A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7C4A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7C60; /* 0x160C7C4C: je 0x160c7c60 */
L_160C7C4E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7C4E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7C51: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7C64; /* 0x160C7C54: jne 0x160c7c64 */
L_160C7C56:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7C56: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7C59: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7C5C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7C44; /* 0x160C7C5E: jne 0x160c7c44 */
L_160C7C60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7C60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7C69; /* 0x160C7C62: jmp 0x160c7c69 */
L_160C7C64:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7C64: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7C66: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7C69:
    /* test eax, eax */ /* 0x160C7C69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C7C6B: je 0x160c66cd */
L_160C7C71:
    ecx = 0x160387D0u; /* 0x160C7C71: mov ecx, 0x160387d0 */
    eax = esi; /* 0x160C7C76: mov eax, esi */
L_160C7C78:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7C78: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7C7A: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7C98; /* 0x160C7C7C: jne 0x160c7c98 */
L_160C7C7E:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7C7E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7C94; /* 0x160C7C80: je 0x160c7c94 */
L_160C7C82:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7C82: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7C85: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7C98; /* 0x160C7C88: jne 0x160c7c98 */
L_160C7C8A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7C8A: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7C8D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7C90: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7C78; /* 0x160C7C92: jne 0x160c7c78 */
L_160C7C94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7C94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7C9D; /* 0x160C7C96: jmp 0x160c7c9d */
L_160C7C98:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7C98: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7C9A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7C9D:
    /* test eax, eax */ /* 0x160C7C9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7CAF; /* 0x160C7C9F: jne 0x160c7caf */
L_160C7CA1:
    eax = 0x148u; /* 0x160C7CA1: mov eax, 0x148 */
    edi = POP32_VAL(esp); /* 0x160C7CA6: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7CA7: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7CA8: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7CA9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7CAA: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7CAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7CAC: ret 0xc */
L_160C7CAF:
    ecx = 0x16030B1Cu; /* 0x160C7CAF: mov ecx, 0x16030b1c */
    eax = esi; /* 0x160C7CB4: mov eax, esi */
L_160C7CB6:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7CB6: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7CB8: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7CD6; /* 0x160C7CBA: jne 0x160c7cd6 */
L_160C7CBC:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7CBC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7CD2; /* 0x160C7CBE: je 0x160c7cd2 */
L_160C7CC0:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7CC0: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7CC3: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7CD6; /* 0x160C7CC6: jne 0x160c7cd6 */
L_160C7CC8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7CC8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7CCB: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7CCE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7CB6; /* 0x160C7CD0: jne 0x160c7cb6 */
L_160C7CD2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7CD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7CDB; /* 0x160C7CD4: jmp 0x160c7cdb */
L_160C7CD6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7CD6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7CD8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7CDB:
    /* test eax, eax */ /* 0x160C7CDB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7CED; /* 0x160C7CDD: jne 0x160c7ced */
L_160C7CDF:
    eax = 0x149u; /* 0x160C7CDF: mov eax, 0x149 */
    edi = POP32_VAL(esp); /* 0x160C7CE4: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7CE5: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7CE6: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7CE7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7CE8: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7CE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7CEA: ret 0xc */
L_160C7CED:
    ecx = MEM32(ebp + 0x8); /* 0x160C7CED: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx + 0x243), 0 */ /* 0x160C7CF0: cmp byte ptr [ecx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7CF7: jne 0x160c70bb */
L_160C7CFD:
    ecx = 0x1602E2DCu; /* 0x160C7CFD: mov ecx, 0x1602e2dc */
    eax = esi; /* 0x160C7D02: mov eax, esi */
L_160C7D04:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7D04: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7D06: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7D24; /* 0x160C7D08: jne 0x160c7d24 */
L_160C7D0A:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7D0A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7D20; /* 0x160C7D0C: je 0x160c7d20 */
L_160C7D0E:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7D0E: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7D11: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7D24; /* 0x160C7D14: jne 0x160c7d24 */
L_160C7D16:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7D16: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7D19: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7D1C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7D04; /* 0x160C7D1E: jne 0x160c7d04 */
L_160C7D20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7D20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7D29; /* 0x160C7D22: jmp 0x160c7d29 */
L_160C7D24:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7D24: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7D26: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7D29:
    /* test eax, eax */ /* 0x160C7D29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7D3B; /* 0x160C7D2B: jne 0x160c7d3b */
L_160C7D2D:
    eax = 0x14Au; /* 0x160C7D2D: mov eax, 0x14a */
    edi = POP32_VAL(esp); /* 0x160C7D32: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7D33: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7D34: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7D35: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7D36: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7D37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7D38: ret 0xc */
L_160C7D3B:
    edi = MEM32(ebp + 0x8); /* 0x160C7D3B: mov edi, dword ptr [ebp + 8] */
    ecx = 0x160387DCu; /* 0x160C7D3E: mov ecx, 0x160387dc */
    eax = esi; /* 0x160C7D43: mov eax, esi */
    /* test MEM32(edi + 0x50), ebx */ /* 0x160C7D45: test dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7E70; /* 0x160C7D48: jne 0x160c7e70 */
L_160C7D4E:
    edi = edi; /* 0x160C7D4E: mov edi, edi */
L_160C7D50:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7D50: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7D52: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7D70; /* 0x160C7D54: jne 0x160c7d70 */
L_160C7D56:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7D56: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7D6C; /* 0x160C7D58: je 0x160c7d6c */
L_160C7D5A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7D5A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7D5D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7D70; /* 0x160C7D60: jne 0x160c7d70 */
L_160C7D62:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7D62: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7D65: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7D68: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7D50; /* 0x160C7D6A: jne 0x160c7d50 */
L_160C7D6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7D6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7D75; /* 0x160C7D6E: jmp 0x160c7d75 */
L_160C7D70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7D70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7D72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7D75:
    /* test eax, eax */ /* 0x160C7D75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7D90; /* 0x160C7D77: jne 0x160c7d90 */
L_160C7D79:
    edx = MEM32(ebp + 0xC); /* 0x160C7D79: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x17u; /* 0x160C7D7C: mov dword ptr [edx], 0x17 */
    eax = 0x17Bu; /* 0x160C7D82: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C7D87: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7D88: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7D89: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7D8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7D8B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7D8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7D8D: ret 0xc */
L_160C7D90:
    ecx = 0x160387E8u; /* 0x160C7D90: mov ecx, 0x160387e8 */
    eax = esi; /* 0x160C7D95: mov eax, esi */
L_160C7D97:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7D97: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7D99: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7DB7; /* 0x160C7D9B: jne 0x160c7db7 */
L_160C7D9D:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7D9D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7DB3; /* 0x160C7D9F: je 0x160c7db3 */
L_160C7DA1:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7DA1: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7DA4: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7DB7; /* 0x160C7DA7: jne 0x160c7db7 */
L_160C7DA9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7DA9: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7DAC: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7DAF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7D97; /* 0x160C7DB1: jne 0x160c7d97 */
L_160C7DB3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7DB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7DBC; /* 0x160C7DB5: jmp 0x160c7dbc */
L_160C7DB7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7DB7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7DB9: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7DBC:
    /* test eax, eax */ /* 0x160C7DBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7DD7; /* 0x160C7DBE: jne 0x160c7dd7 */
L_160C7DC0:
    eax = MEM32(ebp + 0xC); /* 0x160C7DC0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x19u; /* 0x160C7DC3: mov dword ptr [eax], 0x19 */
    eax = 0x17Bu; /* 0x160C7DC9: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C7DCE: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7DCF: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7DD0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7DD1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7DD2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7DD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7DD4: ret 0xc */
L_160C7DD7:
    ecx = 0x160387F4u; /* 0x160C7DD7: mov ecx, 0x160387f4 */
    eax = esi; /* 0x160C7DDC: mov eax, esi */
    edi = edi; /* 0x160C7DDE: mov edi, edi */
L_160C7DE0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7DE0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7DE2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7E00; /* 0x160C7DE4: jne 0x160c7e00 */
L_160C7DE6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7DE6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7DFC; /* 0x160C7DE8: je 0x160c7dfc */
L_160C7DEA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7DEA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7DED: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7E00; /* 0x160C7DF0: jne 0x160c7e00 */
L_160C7DF2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7DF2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7DF5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7DF8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7DE0; /* 0x160C7DFA: jne 0x160c7de0 */
L_160C7DFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7DFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7E05; /* 0x160C7DFE: jmp 0x160c7e05 */
L_160C7E00:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7E00: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7E02: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7E05:
    /* test eax, eax */ /* 0x160C7E05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7E20; /* 0x160C7E07: jne 0x160c7e20 */
L_160C7E09:
    ecx = MEM32(ebp + 0xC); /* 0x160C7E09: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = 0x1Bu; /* 0x160C7E0C: mov dword ptr [ecx], 0x1b */
    eax = 0x17Bu; /* 0x160C7E12: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C7E17: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7E18: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7E19: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7E1A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7E1B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7E1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7E1D: ret 0xc */
L_160C7E20:
    ecx = 0x16038800u; /* 0x160C7E20: mov ecx, 0x16038800 */
    eax = esi; /* 0x160C7E25: mov eax, esi */
L_160C7E27:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7E27: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7E29: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7E47; /* 0x160C7E2B: jne 0x160c7e47 */
L_160C7E2D:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7E2D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7E43; /* 0x160C7E2F: je 0x160c7e43 */
L_160C7E31:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7E31: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7E34: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7E47; /* 0x160C7E37: jne 0x160c7e47 */
L_160C7E39:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7E39: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7E3C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7E3F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7E27; /* 0x160C7E41: jne 0x160c7e27 */
L_160C7E43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7E43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7E4C; /* 0x160C7E45: jmp 0x160c7e4c */
L_160C7E47:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7E47: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7E49: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7E4C:
    /* test eax, eax */ /* 0x160C7E4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7E4E: jne 0x160c70bb */
L_160C7E54:
    edx = MEM32(ebp + 0xC); /* 0x160C7E54: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x1Cu; /* 0x160C7E57: mov dword ptr [edx], 0x1c */
    eax = 0x17Bu; /* 0x160C7E5D: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C7E62: pop edi */
    esi = POP32_VAL(esp); /* 0x160C7E63: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C7E64: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C7E65: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C7E66: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C7E67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C7E68: ret 0xc */
L_160C7E70:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7E70: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7E72: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7E90; /* 0x160C7E74: jne 0x160c7e90 */
L_160C7E76:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7E76: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7E8C; /* 0x160C7E78: je 0x160c7e8c */
L_160C7E7A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7E7A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7E7D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7E90; /* 0x160C7E80: jne 0x160c7e90 */
L_160C7E82:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7E82: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7E85: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7E88: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7E70; /* 0x160C7E8A: jne 0x160c7e70 */
L_160C7E8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7E8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7E95; /* 0x160C7E8E: jmp 0x160c7e95 */
L_160C7E90:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7E90: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7E92: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7E95:
    esi = MEM32(ebp + 0x10); /* 0x160C7E95: mov esi, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x160C7E98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7EAF; /* 0x160C7E9A: jne 0x160c7eaf */
L_160C7E9C:
    PUSH32(esp, 0x1603880Cu); /* 0x160C7E9C: push 0x1603880c */
    PUSH32(esp, esi); /* 0x160C7EA1: push esi */
    ecx = 0xC0Eu; /* 0x160C7EA2: mov ecx, 0xc0e */
    RECOMP_CALL(sub_160C8A90); /* 0x160C7EA7: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C7EAC: add esp, 8 */
    _flag_k = FK_ADD;
L_160C7EAF:
    eax = MEM32(edi + 0x220); /* 0x160C7EAF: mov eax, dword ptr [edi + 0x220] */
    ecx = 0x160387E8u; /* 0x160C7EB5: mov ecx, 0x160387e8 */
    ebx = ebx; /* 0x160C7EBA: lea ebx, [ebx] */
L_160C7EC0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7EC0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7EC2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7EE0; /* 0x160C7EC4: jne 0x160c7ee0 */
L_160C7EC6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7EC6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7EDC; /* 0x160C7EC8: je 0x160c7edc */
L_160C7ECA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7ECA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7ECD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7EE0; /* 0x160C7ED0: jne 0x160c7ee0 */
L_160C7ED2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7ED2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7ED5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7ED8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7EC0; /* 0x160C7EDA: jne 0x160c7ec0 */
L_160C7EDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7EDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7EE5; /* 0x160C7EDE: jmp 0x160c7ee5 */
L_160C7EE0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7EE0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7EE2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7EE5:
    /* test eax, eax */ /* 0x160C7EE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7EFC; /* 0x160C7EE7: jne 0x160c7efc */
L_160C7EE9:
    PUSH32(esp, 0x1603884Cu); /* 0x160C7EE9: push 0x1603884c */
    PUSH32(esp, esi); /* 0x160C7EEE: push esi */
    ecx = 0xC0Eu; /* 0x160C7EEF: mov ecx, 0xc0e */
    RECOMP_CALL(sub_160C8A90); /* 0x160C7EF4: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C7EF9: add esp, 8 */
    _flag_k = FK_ADD;
L_160C7EFC:
    eax = MEM32(edi + 0x220); /* 0x160C7EFC: mov eax, dword ptr [edi + 0x220] */
    ecx = 0x160387F4u; /* 0x160C7F02: mov ecx, 0x160387f4 */
L_160C7F07:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7F07: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7F09: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7F27; /* 0x160C7F0B: jne 0x160c7f27 */
L_160C7F0D:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7F0D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7F23; /* 0x160C7F0F: je 0x160c7f23 */
L_160C7F11:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7F11: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7F14: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7F27; /* 0x160C7F17: jne 0x160c7f27 */
L_160C7F19:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7F19: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7F1C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7F1F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7F07; /* 0x160C7F21: jne 0x160c7f07 */
L_160C7F23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7F23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7F2C; /* 0x160C7F25: jmp 0x160c7f2c */
L_160C7F27:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7F27: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7F29: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7F2C:
    /* test eax, eax */ /* 0x160C7F2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7F43; /* 0x160C7F2E: jne 0x160c7f43 */
L_160C7F30:
    PUSH32(esp, 0x1603888Cu); /* 0x160C7F30: push 0x1603888c */
    PUSH32(esp, esi); /* 0x160C7F35: push esi */
    ecx = 0xC0Eu; /* 0x160C7F36: mov ecx, 0xc0e */
    RECOMP_CALL(sub_160C8A90); /* 0x160C7F3B: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C7F40: add esp, 8 */
    _flag_k = FK_ADD;
L_160C7F43:
    eax = MEM32(edi + 0x220); /* 0x160C7F43: mov eax, dword ptr [edi + 0x220] */
    ecx = 0x16038800u; /* 0x160C7F49: mov ecx, 0x16038800 */
    edi = edi; /* 0x160C7F4E: mov edi, edi */
L_160C7F50:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7F50: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7F52: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7F70; /* 0x160C7F54: jne 0x160c7f70 */
L_160C7F56:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7F56: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7F6C; /* 0x160C7F58: je 0x160c7f6c */
L_160C7F5A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7F5A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7F5D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7F70; /* 0x160C7F60: jne 0x160c7f70 */
L_160C7F62:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7F62: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7F65: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7F68: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7F50; /* 0x160C7F6A: jne 0x160c7f50 */
L_160C7F6C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7F6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7F75; /* 0x160C7F6E: jmp 0x160c7f75 */
L_160C7F70:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7F70: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7F72: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7F75:
    /* test eax, eax */ /* 0x160C7F75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7F77: jne 0x160c70bb */
L_160C7F7D:
    eax = MEM32(ebp + 0x10); /* 0x160C7F7D: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x160388D0u); /* 0x160C7F80: push 0x160388d0 */
    PUSH32(esp, eax); /* 0x160C7F85: push eax */
    RECOMP_BACKEDGE();
    goto L_160C70AE; /* 0x160C7F86: jmp 0x160c70ae */
L_160C7F8B:
    ecx = MEM32(ebp + 0x8); /* 0x160C7F8B: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM8(ecx + 0x243), 0 */ /* 0x160C7F8E: cmp byte ptr [ecx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C7F95: jne 0x160c70bb */
L_160C7F9B:
    ecx = 0x1602DF2Cu; /* 0x160C7F9B: mov ecx, 0x1602df2c */
    eax = esi; /* 0x160C7FA0: mov eax, esi */
L_160C7FA2:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7FA2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7FA4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7FC2; /* 0x160C7FA6: jne 0x160c7fc2 */
L_160C7FA8:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7FA8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7FBE; /* 0x160C7FAA: je 0x160c7fbe */
L_160C7FAC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7FAC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7FAF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7FC2; /* 0x160C7FB2: jne 0x160c7fc2 */
L_160C7FB4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7FB4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7FB7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7FBA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7FA2; /* 0x160C7FBC: jne 0x160c7fa2 */
L_160C7FBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7FBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7FC7; /* 0x160C7FC0: jmp 0x160c7fc7 */
L_160C7FC2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7FC2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7FC4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7FC7:
    /* test eax, eax */ /* 0x160C7FC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7D79; /* 0x160C7FC9: je 0x160c7d79 */
L_160C7FCF:
    ecx = 0x1602DF38u; /* 0x160C7FCF: mov ecx, 0x1602df38 */
    eax = esi; /* 0x160C7FD4: mov eax, esi */
L_160C7FD6:
    SET_LO8(edx, MEM8(eax)); /* 0x160C7FD6: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C7FD8: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7FF6; /* 0x160C7FDA: jne 0x160c7ff6 */
L_160C7FDC:
    /* test LO8(edx), LO8(edx) */ /* 0x160C7FDC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7FF2; /* 0x160C7FDE: je 0x160c7ff2 */
L_160C7FE0:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C7FE0: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C7FE3: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C7FF6; /* 0x160C7FE6: jne 0x160c7ff6 */
L_160C7FE8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C7FE8: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C7FEB: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C7FEE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C7FD6; /* 0x160C7FF0: jne 0x160c7fd6 */
L_160C7FF2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C7FF2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C7FFB; /* 0x160C7FF4: jmp 0x160c7ffb */
L_160C7FF6:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7FF6: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C7FF8: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C7FFB:
    /* test eax, eax */ /* 0x160C7FFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8016; /* 0x160C7FFD: jne 0x160c8016 */
L_160C7FFF:
    eax = MEM32(ebp + 0xC); /* 0x160C7FFF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x18u; /* 0x160C8002: mov dword ptr [eax], 0x18 */
    eax = 0x17Bu; /* 0x160C8008: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C800D: pop edi */
    esi = POP32_VAL(esp); /* 0x160C800E: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C800F: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8010: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8011: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8012: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8013: ret 0xc */
L_160C8016:
    ecx = 0x1602DF48u; /* 0x160C8016: mov ecx, 0x1602df48 */
    eax = esi; /* 0x160C801B: mov eax, esi */
    ecx = ecx; /* 0x160C801D: lea ecx, [ecx] */
L_160C8020:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8020: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8022: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8040; /* 0x160C8024: jne 0x160c8040 */
L_160C8026:
    /* test LO8(edx), LO8(edx) */ /* 0x160C8026: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C803C; /* 0x160C8028: je 0x160c803c */
L_160C802A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C802A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C802D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8040; /* 0x160C8030: jne 0x160c8040 */
L_160C8032:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8032: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8035: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C8038: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8020; /* 0x160C803A: jne 0x160c8020 */
L_160C803C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C803C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8045; /* 0x160C803E: jmp 0x160c8045 */
L_160C8040:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8040: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8042: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C8045:
    /* test eax, eax */ /* 0x160C8045: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8060; /* 0x160C8047: jne 0x160c8060 */
L_160C8049:
    ecx = MEM32(ebp + 0xC); /* 0x160C8049: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = 0x19u; /* 0x160C804C: mov dword ptr [ecx], 0x19 */
    eax = 0x17Bu; /* 0x160C8052: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C8057: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8058: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8059: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C805A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C805B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C805C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C805D: ret 0xc */
L_160C8060:
    ecx = 0x1602DF60u; /* 0x160C8060: mov ecx, 0x1602df60 */
    eax = esi; /* 0x160C8065: mov eax, esi */
L_160C8067:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8067: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8069: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8087; /* 0x160C806B: jne 0x160c8087 */
L_160C806D:
    /* test LO8(edx), LO8(edx) */ /* 0x160C806D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8083; /* 0x160C806F: je 0x160c8083 */
L_160C8071:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C8071: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8074: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8087; /* 0x160C8077: jne 0x160c8087 */
L_160C8079:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8079: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C807C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C807F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8067; /* 0x160C8081: jne 0x160c8067 */
L_160C8083:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C8083: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C808C; /* 0x160C8085: jmp 0x160c808c */
L_160C8087:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8087: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8089: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C808C:
    /* test eax, eax */ /* 0x160C808C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C80A7; /* 0x160C808E: jne 0x160c80a7 */
L_160C8090:
    edx = MEM32(ebp + 0xC); /* 0x160C8090: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x1Au; /* 0x160C8093: mov dword ptr [edx], 0x1a */
    eax = 0x17Bu; /* 0x160C8099: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C809E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C809F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C80A0: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C80A1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C80A2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C80A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C80A4: ret 0xc */
L_160C80A7:
    ecx = 0x1602DF84u; /* 0x160C80A7: mov ecx, 0x1602df84 */
    eax = esi; /* 0x160C80AC: mov eax, esi */
    edi = edi; /* 0x160C80AE: mov edi, edi */
L_160C80B0:
    SET_LO8(edx, MEM8(eax)); /* 0x160C80B0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C80B2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C80D0; /* 0x160C80B4: jne 0x160c80d0 */
L_160C80B6:
    /* test LO8(edx), LO8(edx) */ /* 0x160C80B6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C80CC; /* 0x160C80B8: je 0x160c80cc */
L_160C80BA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C80BA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C80BD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C80D0; /* 0x160C80C0: jne 0x160c80d0 */
L_160C80C2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C80C2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C80C5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C80C8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C80B0; /* 0x160C80CA: jne 0x160c80b0 */
L_160C80CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C80CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C80D5; /* 0x160C80CE: jmp 0x160c80d5 */
L_160C80D0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C80D0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C80D2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C80D5:
    /* test eax, eax */ /* 0x160C80D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C80F0; /* 0x160C80D7: jne 0x160c80f0 */
L_160C80D9:
    eax = MEM32(ebp + 0xC); /* 0x160C80D9: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1Bu; /* 0x160C80DC: mov dword ptr [eax], 0x1b */
    eax = 0x17Bu; /* 0x160C80E2: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C80E7: pop edi */
    esi = POP32_VAL(esp); /* 0x160C80E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C80E9: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C80EA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C80EB: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C80EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C80ED: ret 0xc */
L_160C80F0:
    ecx = 0x1602DF90u; /* 0x160C80F0: mov ecx, 0x1602df90 */
    eax = esi; /* 0x160C80F5: mov eax, esi */
L_160C80F7:
    SET_LO8(edx, MEM8(eax)); /* 0x160C80F7: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C80F9: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8117; /* 0x160C80FB: jne 0x160c8117 */
L_160C80FD:
    /* test LO8(edx), LO8(edx) */ /* 0x160C80FD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8113; /* 0x160C80FF: je 0x160c8113 */
L_160C8101:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C8101: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8104: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8117; /* 0x160C8107: jne 0x160c8117 */
L_160C8109:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8109: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C810C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C810F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C80F7; /* 0x160C8111: jne 0x160c80f7 */
L_160C8113:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C8113: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C811C; /* 0x160C8115: jmp 0x160c811c */
L_160C8117:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8117: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8119: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C811C:
    /* test eax, eax */ /* 0x160C811C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8137; /* 0x160C811E: jne 0x160c8137 */
L_160C8120:
    ecx = MEM32(ebp + 0xC); /* 0x160C8120: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = 0x1Cu; /* 0x160C8123: mov dword ptr [ecx], 0x1c */
    eax = 0x17Bu; /* 0x160C8129: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C812E: pop edi */
    esi = POP32_VAL(esp); /* 0x160C812F: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8130: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8131: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8132: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8133: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8134: ret 0xc */
L_160C8137:
    ecx = 0x1602DF9Cu; /* 0x160C8137: mov ecx, 0x1602df9c */
    eax = esi; /* 0x160C813C: mov eax, esi */
    edi = edi; /* 0x160C813E: mov edi, edi */
L_160C8140:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8140: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8142: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8160; /* 0x160C8144: jne 0x160c8160 */
L_160C8146:
    /* test LO8(edx), LO8(edx) */ /* 0x160C8146: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C815C; /* 0x160C8148: je 0x160c815c */
L_160C814A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C814A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C814D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8160; /* 0x160C8150: jne 0x160c8160 */
L_160C8152:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8152: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8155: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C8158: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8140; /* 0x160C815A: jne 0x160c8140 */
L_160C815C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C815C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8165; /* 0x160C815E: jmp 0x160c8165 */
L_160C8160:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8160: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8162: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C8165:
    /* test eax, eax */ /* 0x160C8165: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8180; /* 0x160C8167: jne 0x160c8180 */
L_160C8169:
    edx = MEM32(ebp + 0xC); /* 0x160C8169: mov edx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x1Du; /* 0x160C816C: mov dword ptr [edx], 0x1d */
    eax = 0x17Bu; /* 0x160C8172: mov eax, 0x17b */
    edi = POP32_VAL(esp); /* 0x160C8177: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8178: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8179: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C817A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C817B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C817C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C817D: ret 0xc */
L_160C8180:
    ecx = 0x16038910u; /* 0x160C8180: mov ecx, 0x16038910 */
    eax = esi; /* 0x160C8185: mov eax, esi */
L_160C8187:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8187: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8189: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C81A7; /* 0x160C818B: jne 0x160c81a7 */
L_160C818D:
    /* test LO8(edx), LO8(edx) */ /* 0x160C818D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C81A3; /* 0x160C818F: je 0x160c81a3 */
L_160C8191:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C8191: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8194: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C81A7; /* 0x160C8197: jne 0x160c81a7 */
L_160C8199:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8199: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C819C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C819F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8187; /* 0x160C81A1: jne 0x160c8187 */
L_160C81A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C81A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C81AC; /* 0x160C81A5: jmp 0x160c81ac */
L_160C81A7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C81A7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C81A9: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C81AC:
    /* test eax, eax */ /* 0x160C81AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C81BE; /* 0x160C81AE: jne 0x160c81be */
L_160C81B0:
    eax = 0x14Fu; /* 0x160C81B0: mov eax, 0x14f */
    edi = POP32_VAL(esp); /* 0x160C81B5: pop edi */
    esi = POP32_VAL(esp); /* 0x160C81B6: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C81B7: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C81B8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C81B9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C81BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C81BB: ret 0xc */
L_160C81BE:
    ecx = 0x1602DF54u; /* 0x160C81BE: mov ecx, 0x1602df54 */
    eax = esi; /* 0x160C81C3: mov eax, esi */
L_160C81C5:
    SET_LO8(edx, MEM8(eax)); /* 0x160C81C5: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C81C7: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C81E5; /* 0x160C81C9: jne 0x160c81e5 */
L_160C81CB:
    /* test LO8(edx), LO8(edx) */ /* 0x160C81CB: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C81E1; /* 0x160C81CD: je 0x160c81e1 */
L_160C81CF:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C81CF: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C81D2: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C81E5; /* 0x160C81D5: jne 0x160c81e5 */
L_160C81D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C81D7: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C81DA: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C81DD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C81C5; /* 0x160C81DF: jne 0x160c81c5 */
L_160C81E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C81E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C81EA; /* 0x160C81E3: jmp 0x160c81ea */
L_160C81E5:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C81E5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C81E7: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C81EA:
    /* test eax, eax */ /* 0x160C81EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C81FC; /* 0x160C81EC: jne 0x160c81fc */
L_160C81EE:
    eax = 0x14Bu; /* 0x160C81EE: mov eax, 0x14b */
    edi = POP32_VAL(esp); /* 0x160C81F3: pop edi */
    esi = POP32_VAL(esp); /* 0x160C81F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C81F5: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C81F6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C81F7: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C81F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C81F9: ret 0xc */
L_160C81FC:
    ecx = 0x1602DF70u; /* 0x160C81FC: mov ecx, 0x1602df70 */
    eax = esi; /* 0x160C8201: mov eax, esi */
L_160C8203:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8203: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8205: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8223; /* 0x160C8207: jne 0x160c8223 */
L_160C8209:
    /* test LO8(edx), LO8(edx) */ /* 0x160C8209: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C821F; /* 0x160C820B: je 0x160c821f */
L_160C820D:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C820D: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8210: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8223; /* 0x160C8213: jne 0x160c8223 */
L_160C8215:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8215: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8218: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C821B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8203; /* 0x160C821D: jne 0x160c8203 */
L_160C821F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C821F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8228; /* 0x160C8221: jmp 0x160c8228 */
L_160C8223:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8223: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8225: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C8228:
    /* test eax, eax */ /* 0x160C8228: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C822A: jne 0x160c70bb */
L_160C8230:
    eax = 0x14Cu; /* 0x160C8230: mov eax, 0x14c */
    edi = POP32_VAL(esp); /* 0x160C8235: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8236: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8237: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8238: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8239: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C823A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C823B: ret 0xc */
L_160C823E:
    ecx = 0x16038920u; /* 0x160C823E: mov ecx, 0x16038920 */
    eax = esi; /* 0x160C8243: mov eax, esi */
L_160C8245:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8245: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8247: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8265; /* 0x160C8249: jne 0x160c8265 */
L_160C824B:
    /* test LO8(edx), LO8(edx) */ /* 0x160C824B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8261; /* 0x160C824D: je 0x160c8261 */
L_160C824F:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C824F: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8252: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8265; /* 0x160C8255: jne 0x160c8265 */
L_160C8257:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8257: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C825A: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C825D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8245; /* 0x160C825F: jne 0x160c8245 */
L_160C8261:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C8261: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C826A; /* 0x160C8263: jmp 0x160c826a */
L_160C8265:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8265: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8267: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C826A:
    /* test eax, eax */ /* 0x160C826A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C827C; /* 0x160C826C: jne 0x160c827c */
L_160C826E:
    eax = 0x152u; /* 0x160C826E: mov eax, 0x152 */
    edi = POP32_VAL(esp); /* 0x160C8273: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8274: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8275: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8276: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8277: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8278: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8279: ret 0xc */
L_160C827C:
    ecx = 0x16038928u; /* 0x160C827C: mov ecx, 0x16038928 */
    eax = esi; /* 0x160C8281: mov eax, esi */
L_160C8283:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8283: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8285: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C82A3; /* 0x160C8287: jne 0x160c82a3 */
L_160C8289:
    /* test LO8(edx), LO8(edx) */ /* 0x160C8289: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C829F; /* 0x160C828B: je 0x160c829f */
L_160C828D:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C828D: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8290: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C82A3; /* 0x160C8293: jne 0x160c82a3 */
L_160C8295:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8295: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8298: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C829B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8283; /* 0x160C829D: jne 0x160c8283 */
L_160C829F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C829F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C82A8; /* 0x160C82A1: jmp 0x160c82a8 */
L_160C82A3:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C82A3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C82A5: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C82A8:
    /* test eax, eax */ /* 0x160C82A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C82AA: je 0x160c66cd */
L_160C82B0:
    ecx = 0x1602E0E8u; /* 0x160C82B0: mov ecx, 0x1602e0e8 */
    eax = esi; /* 0x160C82B5: mov eax, esi */
L_160C82B7:
    SET_LO8(edx, MEM8(eax)); /* 0x160C82B7: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C82B9: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C82D7; /* 0x160C82BB: jne 0x160c82d7 */
L_160C82BD:
    /* test LO8(edx), LO8(edx) */ /* 0x160C82BD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C82D3; /* 0x160C82BF: je 0x160c82d3 */
L_160C82C1:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C82C1: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C82C4: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C82D7; /* 0x160C82C7: jne 0x160c82d7 */
L_160C82C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C82C9: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C82CC: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C82CF: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C82B7; /* 0x160C82D1: jne 0x160c82b7 */
L_160C82D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C82D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C82DC; /* 0x160C82D5: jmp 0x160c82dc */
L_160C82D7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C82D7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C82D9: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C82DC:
    /* test eax, eax */ /* 0x160C82DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C82EE; /* 0x160C82DE: jne 0x160c82ee */
L_160C82E0:
    eax = 0x154u; /* 0x160C82E0: mov eax, 0x154 */
    edi = POP32_VAL(esp); /* 0x160C82E5: pop edi */
    esi = POP32_VAL(esp); /* 0x160C82E6: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C82E7: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C82E8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C82E9: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C82EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C82EB: ret 0xc */
L_160C82EE:
    ecx = 0x16038930u; /* 0x160C82EE: mov ecx, 0x16038930 */
    eax = esi; /* 0x160C82F3: mov eax, esi */
L_160C82F5:
    SET_LO8(edx, MEM8(eax)); /* 0x160C82F5: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C82F7: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8315; /* 0x160C82F9: jne 0x160c8315 */
L_160C82FB:
    /* test LO8(edx), LO8(edx) */ /* 0x160C82FB: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8311; /* 0x160C82FD: je 0x160c8311 */
L_160C82FF:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C82FF: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8302: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8315; /* 0x160C8305: jne 0x160c8315 */
L_160C8307:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8307: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C830A: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C830D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C82F5; /* 0x160C830F: jne 0x160c82f5 */
L_160C8311:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C8311: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C831A; /* 0x160C8313: jmp 0x160c831a */
L_160C8315:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8315: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8317: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C831A:
    /* test eax, eax */ /* 0x160C831A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C832C; /* 0x160C831C: jne 0x160c832c */
L_160C831E:
    eax = 0x153u; /* 0x160C831E: mov eax, 0x153 */
    edi = POP32_VAL(esp); /* 0x160C8323: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8324: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8325: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8326: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8327: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8328: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8329: ret 0xc */
L_160C832C:
    ecx = 0x1603893Cu; /* 0x160C832C: mov ecx, 0x1603893c */
    eax = esi; /* 0x160C8331: mov eax, esi */
L_160C8333:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8333: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8335: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C8337: jne 0x160c66c0 */
L_160C833D:
    /* test LO8(edx), LO8(edx) */ /* 0x160C833D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8357; /* 0x160C833F: je 0x160c8357 */
L_160C8341:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C8341: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8344: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C66C0; /* 0x160C8347: jne 0x160c66c0 */
L_160C834D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C834D: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8350: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C8353: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8333; /* 0x160C8355: jne 0x160c8333 */
L_160C8357:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C8357: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_160C66C5; /* 0x160C8359: jmp 0x160c66c5 */
L_160C835E:
    ecx = 0x16038944u; /* 0x160C835E: mov ecx, 0x16038944 */
    eax = esi; /* 0x160C8363: mov eax, esi */
L_160C8365:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8365: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8367: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8385; /* 0x160C8369: jne 0x160c8385 */
L_160C836B:
    /* test LO8(edx), LO8(edx) */ /* 0x160C836B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8381; /* 0x160C836D: je 0x160c8381 */
L_160C836F:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C836F: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8372: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8385; /* 0x160C8375: jne 0x160c8385 */
L_160C8377:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8377: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C837A: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C837D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8365; /* 0x160C837F: jne 0x160c8365 */
L_160C8381:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C8381: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C838A; /* 0x160C8383: jmp 0x160c838a */
L_160C8385:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8385: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8387: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C838A:
    /* test eax, eax */ /* 0x160C838A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C839C; /* 0x160C838C: jne 0x160c839c */
L_160C838E:
    eax = 0x155u; /* 0x160C838E: mov eax, 0x155 */
    edi = POP32_VAL(esp); /* 0x160C8393: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8394: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8395: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8396: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8397: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8398: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8399: ret 0xc */
L_160C839C:
    ecx = 0x1602E024u; /* 0x160C839C: mov ecx, 0x1602e024 */
    eax = esi; /* 0x160C83A1: mov eax, esi */
L_160C83A3:
    SET_LO8(edx, MEM8(eax)); /* 0x160C83A3: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C83A5: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C83C3; /* 0x160C83A7: jne 0x160c83c3 */
L_160C83A9:
    /* test LO8(edx), LO8(edx) */ /* 0x160C83A9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C83BF; /* 0x160C83AB: je 0x160c83bf */
L_160C83AD:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C83AD: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C83B0: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C83C3; /* 0x160C83B3: jne 0x160c83c3 */
L_160C83B5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C83B5: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C83B8: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C83BB: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C83A3; /* 0x160C83BD: jne 0x160c83a3 */
L_160C83BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C83BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C83C8; /* 0x160C83C1: jmp 0x160c83c8 */
L_160C83C3:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C83C3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C83C5: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C83C8:
    /* test eax, eax */ /* 0x160C83C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C83DA; /* 0x160C83CA: jne 0x160c83da */
L_160C83CC:
    eax = 0x156u; /* 0x160C83CC: mov eax, 0x156 */
    edi = POP32_VAL(esp); /* 0x160C83D1: pop edi */
    esi = POP32_VAL(esp); /* 0x160C83D2: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C83D3: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C83D4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C83D5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C83D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C83D7: ret 0xc */
L_160C83DA:
    ecx = 0x1603894Cu; /* 0x160C83DA: mov ecx, 0x1603894c */
    eax = esi; /* 0x160C83DF: mov eax, esi */
L_160C83E1:
    SET_LO8(edx, MEM8(eax)); /* 0x160C83E1: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C83E3: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8401; /* 0x160C83E5: jne 0x160c8401 */
L_160C83E7:
    /* test LO8(edx), LO8(edx) */ /* 0x160C83E7: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C83FD; /* 0x160C83E9: je 0x160c83fd */
L_160C83EB:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C83EB: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C83EE: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8401; /* 0x160C83F1: jne 0x160c8401 */
L_160C83F3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C83F3: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C83F6: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C83F9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C83E1; /* 0x160C83FB: jne 0x160c83e1 */
L_160C83FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C83FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8406; /* 0x160C83FF: jmp 0x160c8406 */
L_160C8401:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8401: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8403: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C8406:
    /* test eax, eax */ /* 0x160C8406: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C66CD; /* 0x160C8408: je 0x160c66cd */
L_160C840E:
    ecx = 0x1602DEF0u; /* 0x160C840E: mov ecx, 0x1602def0 */
    eax = esi; /* 0x160C8413: mov eax, esi */
L_160C8415:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8415: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8417: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8435; /* 0x160C8419: jne 0x160c8435 */
L_160C841B:
    /* test LO8(edx), LO8(edx) */ /* 0x160C841B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8431; /* 0x160C841D: je 0x160c8431 */
L_160C841F:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C841F: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8422: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8435; /* 0x160C8425: jne 0x160c8435 */
L_160C8427:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8427: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C842A: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C842D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8415; /* 0x160C842F: jne 0x160c8415 */
L_160C8431:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C8431: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C843A; /* 0x160C8433: jmp 0x160c843a */
L_160C8435:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8435: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8437: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C843A:
    /* test eax, eax */ /* 0x160C843A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C844C; /* 0x160C843C: jne 0x160c844c */
L_160C843E:
    eax = 0x158u; /* 0x160C843E: mov eax, 0x158 */
    edi = POP32_VAL(esp); /* 0x160C8443: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8444: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8445: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8446: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8447: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8448: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8449: ret 0xc */
L_160C844C:
    ecx = 0x16038954u; /* 0x160C844C: mov ecx, 0x16038954 */
    eax = esi; /* 0x160C8451: mov eax, esi */
L_160C8453:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8453: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8455: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8473; /* 0x160C8457: jne 0x160c8473 */
L_160C8459:
    /* test LO8(edx), LO8(edx) */ /* 0x160C8459: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C846F; /* 0x160C845B: je 0x160c846f */
L_160C845D:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C845D: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C8460: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8473; /* 0x160C8463: jne 0x160c8473 */
L_160C8465:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8465: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8468: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C846B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8453; /* 0x160C846D: jne 0x160c8453 */
L_160C846F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C846F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8478; /* 0x160C8471: jmp 0x160c8478 */
L_160C8473:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8473: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8475: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C8478:
    /* test eax, eax */ /* 0x160C8478: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C848A; /* 0x160C847A: jne 0x160c848a */
L_160C847C:
    eax = 0x159u; /* 0x160C847C: mov eax, 0x159 */
    edi = POP32_VAL(esp); /* 0x160C8481: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8482: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8483: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8484: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8485: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8486: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8487: ret 0xc */
L_160C848A:
    eax = MEM32(ebp + 0x8); /* 0x160C848A: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax + 0x243), 0 */ /* 0x160C848D: cmp byte ptr [eax + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C8494: jne 0x160c70bb */
L_160C849A:
    ecx = 0x16038960u; /* 0x160C849A: mov ecx, 0x16038960 */
    eax = esi; /* 0x160C849F: mov eax, esi */
L_160C84A1:
    SET_LO8(edx, MEM8(eax)); /* 0x160C84A1: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C84A3: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C84C1; /* 0x160C84A5: jne 0x160c84c1 */
L_160C84A7:
    /* test LO8(edx), LO8(edx) */ /* 0x160C84A7: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C84BD; /* 0x160C84A9: je 0x160c84bd */
L_160C84AB:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C84AB: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C84AE: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C84C1; /* 0x160C84B1: jne 0x160c84c1 */
L_160C84B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C84B3: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C84B6: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C84B9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C84A1; /* 0x160C84BB: jne 0x160c84a1 */
L_160C84BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C84BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C84C6; /* 0x160C84BF: jmp 0x160c84c6 */
L_160C84C1:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C84C1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C84C3: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C84C6:
    /* test eax, eax */ /* 0x160C84C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C84C8: jne 0x160c70bb */
L_160C84CE:
    edi = MEM32(ebp + 0x8); /* 0x160C84CE: mov edi, dword ptr [ebp + 8] */
    /* test MEM32(edi + 0x50), ebx */ /* 0x160C84D1: test dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C852D; /* 0x160C84D4: je 0x160c852d */
L_160C84DA:
    ecx = MEM32(ebp + 0x10); /* 0x160C84DA: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x16038970u); /* 0x160C84DD: push 0x16038970 */
    PUSH32(esp, ecx); /* 0x160C84E2: push ecx */
    RECOMP_BACKEDGE();
    goto L_160C70AE; /* 0x160C84E3: jmp 0x160c70ae */
L_160C84E8:
    edx = MEM32(ebp + 0x8); /* 0x160C84E8: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM8(edx + 0x243), 0 */ /* 0x160C84EB: cmp byte ptr [edx + 0x243], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x243)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C84F2: jne 0x160c70bb */
L_160C84F8:
    ecx = 0x1603012Cu; /* 0x160C84F8: mov ecx, 0x1603012c */
    eax = esi; /* 0x160C84FD: mov eax, esi */
    /* nop */ /* 0x160C84FF: nop  */
L_160C8500:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8500: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8502: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8520; /* 0x160C8504: jne 0x160c8520 */
L_160C8506:
    /* test LO8(edx), LO8(edx) */ /* 0x160C8506: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C851C; /* 0x160C8508: je 0x160c851c */
L_160C850A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C850A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C850D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8520; /* 0x160C8510: jne 0x160c8520 */
L_160C8512:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8512: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8515: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C8518: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8500; /* 0x160C851A: jne 0x160c8500 */
L_160C851C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C851C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8525; /* 0x160C851E: jmp 0x160c8525 */
L_160C8520:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8520: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8522: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C8525:
    /* test eax, eax */ /* 0x160C8525: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C8527: jne 0x160c70bb */
L_160C852D:
    eax = 0x157u; /* 0x160C852D: mov eax, 0x157 */
    edi = POP32_VAL(esp); /* 0x160C8532: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8533: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8534: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8535: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8536: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8537: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8538: ret 0xc */
L_160C853B:
    ecx = 0x160389B8u; /* 0x160C853B: mov ecx, 0x160389b8 */
    eax = esi; /* 0x160C8540: mov eax, esi */
L_160C8542:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8542: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8544: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8562; /* 0x160C8546: jne 0x160c8562 */
L_160C8548:
    /* test LO8(edx), LO8(edx) */ /* 0x160C8548: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C855E; /* 0x160C854A: je 0x160c855e */
L_160C854C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C854C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C854F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8562; /* 0x160C8552: jne 0x160c8562 */
L_160C8554:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8554: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8557: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C855A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8542; /* 0x160C855C: jne 0x160c8542 */
L_160C855E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C855E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8567; /* 0x160C8560: jmp 0x160c8567 */
L_160C8562:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8562: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8564: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C8567:
    /* test eax, eax */ /* 0x160C8567: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C70BB; /* 0x160C8569: jne 0x160c70bb */
L_160C856F:
    eax = 0x15Au; /* 0x160C856F: mov eax, 0x15a */
    edi = POP32_VAL(esp); /* 0x160C8574: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8575: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8576: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8577: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8578: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8579: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C857A: ret 0xc */
L_160C857D:
    eax = MEM32(edi + 0x220); /* 0x160C857D: mov eax, dword ptr [edi + 0x220] */
    PUSH32(esp, 0x160383E4u); /* 0x160C8583: push 0x160383e4 */
    PUSH32(esp, eax); /* 0x160C8588: push eax */
    RECOMP_CALL(sub_161AE180); /* 0x160C8589: call 0x161ae180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C858E: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160C8591: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8650; /* 0x160C8593: jne 0x160c8650 */
L_160C8599:
    /* test MEM32(edi + 0x50), ebx */ /* 0x160C8599: test dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6041; /* 0x160C859C: je 0x160c6041 */
L_160C85A2:
    PUSH32(esp, 0x160389C0u); /* 0x160C85A2: push 0x160389c0 */
    goto L_160C863F; /* 0x160C85A7: jmp 0x160c863f */
L_160C85AC:
    edx = MEM32(edi + 0x220); /* 0x160C85AC: mov edx, dword ptr [edi + 0x220] */
    PUSH32(esp, 0x160389F8u); /* 0x160C85B2: push 0x160389f8 */
    PUSH32(esp, edx); /* 0x160C85B7: push edx */
    RECOMP_CALL(sub_161AE180); /* 0x160C85B8: call 0x161ae180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C85BD: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160C85C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8650; /* 0x160C85C2: jne 0x160c8650 */
L_160C85C8:
    /* test MEM32(edi + 0x50), ebx */ /* 0x160C85C8: test dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C85DB; /* 0x160C85CB: jne 0x160c85db */
L_160C85CD:
    eax = 0x111u; /* 0x160C85CD: mov eax, 0x111 */
    edi = POP32_VAL(esp); /* 0x160C85D2: pop edi */
    esi = POP32_VAL(esp); /* 0x160C85D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C85D4: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C85D5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C85D6: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C85D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C85D8: ret 0xc */
L_160C85DB:
    eax = MEM32(ebp + 0x10); /* 0x160C85DB: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x16038A00u); /* 0x160C85DE: push 0x16038a00 */
    PUSH32(esp, eax); /* 0x160C85E3: push eax */
    goto L_160C8643; /* 0x160C85E4: jmp 0x160c8643 */
L_160C85E9:
    ecx = MEM32(edi + 0x220); /* 0x160C85E9: mov ecx, dword ptr [edi + 0x220] */
    PUSH32(esp, 0x16030B28u); /* 0x160C85EF: push 0x16030b28 */
    PUSH32(esp, ecx); /* 0x160C85F4: push ecx */
    RECOMP_CALL(sub_161AE180); /* 0x160C85F5: call 0x161ae180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C85FA: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160C85FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8650; /* 0x160C85FF: jne 0x160c8650 */
L_160C8605:
    /* test MEM32(edi + 0x50), ebx */ /* 0x160C8605: test dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C6F29; /* 0x160C8608: je 0x160c6f29 */
L_160C860E:
    edx = MEM32(ebp + 0x10); /* 0x160C860E: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x16038A3Cu); /* 0x160C8611: push 0x16038a3c */
    PUSH32(esp, edx); /* 0x160C8616: push edx */
    goto L_160C8643; /* 0x160C8617: jmp 0x160c8643 */
L_160C8619:
    eax = MEM32(edi + 0x220); /* 0x160C8619: mov eax, dword ptr [edi + 0x220] */
    PUSH32(esp, 0x160387D0u); /* 0x160C861F: push 0x160387d0 */
    PUSH32(esp, eax); /* 0x160C8624: push eax */
    RECOMP_CALL(sub_161AE180); /* 0x160C8625: call 0x161ae180 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C862A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160C862D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8650; /* 0x160C862F: jne 0x160c8650 */
L_160C8631:
    /* test MEM32(edi + 0x50), ebx */ /* 0x160C8631: test dword ptr [edi + 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C7CA1; /* 0x160C8634: je 0x160c7ca1 */
L_160C863A:
    PUSH32(esp, 0x16038A78u); /* 0x160C863A: push 0x16038a78 */
L_160C863F:
    ecx = MEM32(ebp + 0x10); /* 0x160C863F: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x160C8642: push ecx */
L_160C8643:
    ecx = 0xC0Eu; /* 0x160C8643: mov ecx, 0xc0e */
    RECOMP_CALL(sub_160C8A90); /* 0x160C8648: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C864D: add esp, 8 */
    _flag_k = FK_ADD;
L_160C8650:
    eax = MEM32(edi + 0x220); /* 0x160C8650: mov eax, dword ptr [edi + 0x220] */
    PUSH32(esp, edi); /* 0x160C8656: push edi */
    RECOMP_CALL(sub_1610A590); /* 0x160C8657: call 0x1610a590 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x160C865C: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x160C865F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C867C; /* 0x160C8661: je 0x160c867c */
L_160C8663:
    edx = MEM32(edi + 0x220); /* 0x160C8663: mov edx, dword ptr [edi + 0x220] */
    MEM32(ecx + 0x4) = eax; /* 0x160C8669: mov dword ptr [ecx + 4], eax */
    MEM32(ecx) = edx; /* 0x160C866C: mov dword ptr [ecx], edx */
    eax = 0x179u; /* 0x160C866E: mov eax, 0x179 */
    edi = POP32_VAL(esp); /* 0x160C8673: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8674: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C8675: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C8676: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C8677: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C8678: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8679: ret 0xc */
L_160C867C:
    eax = MEM32(edi + 0x220); /* 0x160C867C: mov eax, dword ptr [edi + 0x220] */
    MEM32(ecx) = eax; /* 0x160C8682: mov dword ptr [ecx], eax */
    eax = 0x17Au; /* 0x160C8684: mov eax, 0x17a */
    edi = POP32_VAL(esp); /* 0x160C8689: pop edi */
    esi = POP32_VAL(esp); /* 0x160C868A: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C868B: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C868C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C868D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C868E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C868F: ret 0xc */
L_160C8692:
    edi = POP32_VAL(esp); /* 0x160C8692: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8693: pop esi */
    eax = 0x178u; /* 0x160C8694: mov eax, 0x178 */
    ebx = POP32_VAL(esp); /* 0x160C8699: pop ebx */
    ecx = POP32_VAL(esp); /* 0x160C869A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x160C869B: pop ecx */
    ebp = POP32_VAL(esp); /* 0x160C869C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C869D: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x160C5BD5u: goto L_160C5BD5;
      case 0x160C5CC9u: goto L_160C5CC9;
      case 0x160C5D48u: goto L_160C5D48;
      case 0x160C5D99u: goto L_160C5D99;
      case 0x160C5DA7u: goto L_160C5DA7;
      case 0x160C5DB5u: goto L_160C5DB5;
      case 0x160C5DC3u: goto L_160C5DC3;
      case 0x160C5DD1u: goto L_160C5DD1;
      case 0x160C5DDFu: goto L_160C5DDF;
      case 0x160C5DEDu: goto L_160C5DED;
      case 0x160C5DFBu: goto L_160C5DFB;
      case 0x160C5E09u: goto L_160C5E09;
      case 0x160C5E17u: goto L_160C5E17;
      case 0x160C5E25u: goto L_160C5E25;
      case 0x160C5E33u: goto L_160C5E33;
      case 0x160C5E6Cu: goto L_160C5E6C;
      case 0x160C5E7Au: goto L_160C5E7A;
      case 0x160C5E88u: goto L_160C5E88;
      case 0x160C5E96u: goto L_160C5E96;
      case 0x160C5EA4u: goto L_160C5EA4;
      case 0x160C5EB2u: goto L_160C5EB2;
      case 0x160C5F11u: goto L_160C5F11;
      case 0x160C5F1Fu: goto L_160C5F1F;
      case 0x160C5F2Du: goto L_160C5F2D;
      case 0x160C5F3Bu: goto L_160C5F3B;
      case 0x160C5F49u: goto L_160C5F49;
      case 0x160C5F57u: goto L_160C5F57;
      case 0x160C5F65u: goto L_160C5F65;
      case 0x160C5F73u: goto L_160C5F73;
      case 0x160C5F90u: goto L_160C5F90;
      case 0x160C5FB8u: goto L_160C5FB8;
      case 0x160C604Fu: goto L_160C604F;
      case 0x160C60F4u: goto L_160C60F4;
      case 0x160C613Bu: goto L_160C613B;
      case 0x160C621Bu: goto L_160C621B;
      case 0x160C64BFu: goto L_160C64BF;
      case 0x160C65A4u: goto L_160C65A4;
      case 0x160C66CDu: goto L_160C66CD;
      case 0x160C66DBu: goto L_160C66DB;
      case 0x160C675Bu: goto L_160C675B;
      case 0x160C6843u: goto L_160C6843;
      case 0x160C68FBu: goto L_160C68FB;
      case 0x160C6971u: goto L_160C6971;
      case 0x160C69C3u: goto L_160C69C3;
      case 0x160C6B0Bu: goto L_160C6B0B;
      case 0x160C6B4Du: goto L_160C6B4D;
      case 0x160C6C1Bu: goto L_160C6C1B;
      case 0x160C6C5Du: goto L_160C6C5D;
      case 0x160C6CCDu: goto L_160C6CCD;
      case 0x160C6DBFu: goto L_160C6DBF;
      case 0x160C6E01u: goto L_160C6E01;
      case 0x160C6E71u: goto L_160C6E71;
      case 0x160C6EB3u: goto L_160C6EB3;
      case 0x160C70BBu: goto L_160C70BB;
      case 0x160C70EAu: goto L_160C70EA;
      case 0x160C717Bu: goto L_160C717B;
      case 0x160C726Du: goto L_160C726D;
      case 0x160C753Bu: goto L_160C753B;
      case 0x160C795Bu: goto L_160C795B;
      case 0x160C7A64u: goto L_160C7A64;
      case 0x160C7F8Bu: goto L_160C7F8B;
      case 0x160C823Eu: goto L_160C823E;
      case 0x160C835Eu: goto L_160C835E;
      case 0x160C84E8u: goto L_160C84E8;
      case 0x160C853Bu: goto L_160C853B;
      case 0x160C857Du: goto L_160C857D;
      case 0x160C85ACu: goto L_160C85AC;
      case 0x160C85E9u: goto L_160C85E9;
      case 0x160C8619u: goto L_160C8619;
      case 0x160C8650u: goto L_160C8650;
      case 0x160C8692u: goto L_160C8692;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160C88E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C88E0u);

L_160C88E0:
    edi = edi; /* 0x160C88E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C88E2: push ebp */
    ebp = esp; /* 0x160C88E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x160C88E5: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x161B2070); /* 0x160C88EB: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x160C88F0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x160C88F2: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x160C88F5: push esi */
    esi = ecx; /* 0x160C88F6: mov esi, ecx */
    ecx = 0x1602D890u; /* 0x160C88F8: mov ecx, 0x1602d890 */
    eax = esi; /* 0x160C88FD: mov eax, esi */
    /* nop */ /* 0x160C88FF: nop  */
L_160C8900:
    SET_LO8(edx, MEM8(eax)); /* 0x160C8900: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x160C8902: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8920; /* 0x160C8904: jne 0x160c8920 */
L_160C8906:
    /* test LO8(edx), LO8(edx) */ /* 0x160C8906: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C891C; /* 0x160C8908: je 0x160c891c */
L_160C890A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x160C890A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x160C890D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8920; /* 0x160C8910: jne 0x160c8920 */
L_160C8912:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x160C8912: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x160C8915: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x160C8918: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8900; /* 0x160C891A: jne 0x160c8900 */
L_160C891C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C891C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8925; /* 0x160C891E: jmp 0x160c8925 */
L_160C8920:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8920: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x160C8922: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_160C8925:
    /* test eax, eax */ /* 0x160C8925: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8936; /* 0x160C8927: je 0x160c8936 */
L_160C8929:
    PUSH32(esp, esi); /* 0x160C8929: push esi */
    PUSH32(esp, 0x1602D8FCu); /* 0x160C892A: push 0x1602d8fc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C892F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C8A2E; /* 0x160C8931: jmp 0x160c8a2e */
L_160C8936:
    /* cmp MEM8(edi + 0x241), 0 */ /* 0x160C8936: cmp byte ptr [edi + 0x241], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x241)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8A3A; /* 0x160C893D: jne 0x160c8a3a */
L_160C8943:
    eax = MEM32(edi + 0x218); /* 0x160C8943: mov eax, dword ptr [edi + 0x218] */
    /* cmp eax, 0x11u */ /* 0x160C8949: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C8A04; /* 0x160C894C: ja 0x160c8a04 */
L_160C8952:
    eax = (uint32_t)MEM8(eax + 0x160C8A74); /* 0x160C8952: movzx eax, byte ptr [eax + 0x160c8a74] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160C8A50)); goto _ljump; }
L_160C8960:
    PUSH32(esp, 0x16038AB8u); /* 0x160C8960: push 0x16038ab8 */
    PUSH32(esp, 0x100u); /* 0x160C8965: push 0x100 */
    ecx = ebp + (-0x104); /* 0x160C896A: lea ecx, [ebp - 0x104] */
    PUSH32(esp, ecx); /* 0x160C8970: push ecx */
    goto L_160C8A15; /* 0x160C8971: jmp 0x160c8a15 */
L_160C8976:
    edx = edi + 0x220; /* 0x160C8976: lea edx, [edi + 0x220] */
    PUSH32(esp, edx); /* 0x160C897C: push edx */
    PUSH32(esp, 0x16038AC8u); /* 0x160C897D: push 0x16038ac8 */
    eax = ebp + (-0x104); /* 0x160C8982: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x160C8988: push 0x100 */
    PUSH32(esp, eax); /* 0x160C898D: push eax */
    RECOMP_CALL(sub_16065F10); /* 0x160C898E: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x160C8993: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_160C8A1D; /* 0x160C8996: jmp 0x160c8a1d */
L_160C899B:
    PUSH32(esp, 0x16038AD4u); /* 0x160C899B: push 0x16038ad4 */
    PUSH32(esp, 0x100u); /* 0x160C89A0: push 0x100 */
    ecx = ebp + (-0x104); /* 0x160C89A5: lea ecx, [ebp - 0x104] */
    PUSH32(esp, ecx); /* 0x160C89AB: push ecx */
    goto L_160C8A15; /* 0x160C89AC: jmp 0x160c8a15 */
L_160C89AE:
    PUSH32(esp, 0x16038AE8u); /* 0x160C89AE: push 0x16038ae8 */
    goto L_160C8A09; /* 0x160C89B3: jmp 0x160c8a09 */
L_160C89B5:
    eax = MEM32(edi + 0x220); /* 0x160C89B5: mov eax, dword ptr [edi + 0x220] */
    PUSH32(esp, eax); /* 0x160C89BB: push eax */
    PUSH32(esp, 0x16038AC8u); /* 0x160C89BC: push 0x16038ac8 */
    ecx = ebp + (-0x104); /* 0x160C89C1: lea ecx, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x160C89C7: push 0x100 */
    PUSH32(esp, ecx); /* 0x160C89CC: push ecx */
    RECOMP_CALL(sub_16065F10); /* 0x160C89CD: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x160C89D2: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_160C8A1D; /* 0x160C89D5: jmp 0x160c8a1d */
L_160C89D7:
    PUSH32(esp, 0x16038AF8u); /* 0x160C89D7: push 0x16038af8 */
    goto L_160C8A09; /* 0x160C89DC: jmp 0x160c8a09 */
L_160C89DE:
    PUSH32(esp, 0x16038B08u); /* 0x160C89DE: push 0x16038b08 */
    PUSH32(esp, 0x100u); /* 0x160C89E3: push 0x100 */
    eax = ebp + (-0x104); /* 0x160C89E8: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x160C89EE: push eax */
    goto L_160C8A15; /* 0x160C89EF: jmp 0x160c8a15 */
L_160C89F1:
    PUSH32(esp, 0x16038B14u); /* 0x160C89F1: push 0x16038b14 */
    PUSH32(esp, 0x100u); /* 0x160C89F6: push 0x100 */
    ecx = ebp + (-0x104); /* 0x160C89FB: lea ecx, [ebp - 0x104] */
    PUSH32(esp, ecx); /* 0x160C8A01: push ecx */
    goto L_160C8A15; /* 0x160C8A02: jmp 0x160c8a15 */
L_160C8A04:
    PUSH32(esp, 0x16038B20u); /* 0x160C8A04: push 0x16038b20 */
L_160C8A09:
    PUSH32(esp, 0x100u); /* 0x160C8A09: push 0x100 */
    edx = ebp + (-0x104); /* 0x160C8A0E: lea edx, [ebp - 0x104] */
    PUSH32(esp, edx); /* 0x160C8A14: push edx */
L_160C8A15:
    RECOMP_CALL(sub_16065F10); /* 0x160C8A15: call 0x16065f10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160C8A1A: add esp, 0xc */
    _flag_k = FK_ADD;
L_160C8A1D:
    eax = ebp + (-0x104); /* 0x160C8A1D: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x160C8A23: push eax */
    PUSH32(esp, 0x16038B28u); /* 0x160C8A24: push 0x16038b28 */
    ecx = 0xBB8u; /* 0x160C8A29: mov ecx, 0xbb8 */
L_160C8A2E:
    esi = MEM32(edi + 0x54); /* 0x160C8A2E: mov esi, dword ptr [edi + 0x54] */
    PUSH32(esp, ebx); /* 0x160C8A31: push ebx */
    RECOMP_CALL(sub_1618E440); /* 0x160C8A32: call 0x1618e440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160C8A37: add esp, 0xc */
    _flag_k = FK_ADD;
L_160C8A3A:
    ecx = MEM32(ebp + (-0x4)); /* 0x160C8A3A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x160C8A3D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x241) = (uint8_t)(1); /* 0x160C8A3F: mov byte ptr [edi + 0x241], 1 */
    esi = POP32_VAL(esp); /* 0x160C8A46: pop esi */
    RECOMP_CALL(sub_161ADCF5); /* 0x160C8A47: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160C8A4C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C8A4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C8A4F: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x160C8960u: goto L_160C8960;
      case 0x160C8976u: goto L_160C8976;
      case 0x160C899Bu: goto L_160C899B;
      case 0x160C89AEu: goto L_160C89AE;
      case 0x160C89B5u: goto L_160C89B5;
      case 0x160C89D7u: goto L_160C89D7;
      case 0x160C89DEu: goto L_160C89DE;
      case 0x160C89F1u: goto L_160C89F1;
      case 0x160C8A04u: goto L_160C8A04;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160C8A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C8A90u);

L_160C8A90:
    edi = edi; /* 0x160C8A90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C8A92: push ebp */
    ebp = esp; /* 0x160C8A93: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x160C8A95: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x160C8A98: push esi */
    esi = MEM32(edi + 0x54); /* 0x160C8A99: mov esi, dword ptr [edi + 0x54] */
    PUSH32(esp, eax); /* 0x160C8A9C: push eax */
    PUSH32(esp, ecx); /* 0x160C8A9D: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160C8A9E: mov ecx, dword ptr [ebp + 8] */
    edx = ebp + 0x10; /* 0x160C8AA1: lea edx, [ebp + 0x10] */
    RECOMP_CALL(sub_1618E330); /* 0x160C8AA4: call 0x1618e330 */
    RECOMP_FLAGS_IN();
    MEM8(edi + 0x241) = (uint8_t)(1); /* 0x160C8AA9: mov byte ptr [edi + 0x241], 1 */
    esi = POP32_VAL(esp); /* 0x160C8AB0: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C8AB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C8AB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C8AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C8AC0u);

L_160C8AC0:
    edi = edi; /* 0x160C8AC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C8AC2: push ebp */
    ebp = esp; /* 0x160C8AC3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160C8AC5: push esi */
    PUSH32(esp, eax); /* 0x160C8AC6: push eax */
    eax = MEM32(ebp + 0x8); /* 0x160C8AC7: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x54); /* 0x160C8ACA: mov esi, dword ptr [eax + 0x54] */
    PUSH32(esp, ecx); /* 0x160C8ACD: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x160C8ACE: mov ecx, dword ptr [ebp + 0xc] */
    edx = ebp + 0x10; /* 0x160C8AD1: lea edx, [ebp + 0x10] */
    RECOMP_CALL(sub_1618E510); /* 0x160C8AD4: call 0x1618e510 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x160C8AD9: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C8ADA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C8ADB: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C8AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C8AF0u);

L_160C8AF0:
    edi = edi; /* 0x160C8AF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C8AF2: push ebp */
    ebp = esp; /* 0x160C8AF3: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x160C8AF5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x160C8AF8: push esi */
    esi = MEM32(edi + 0x54); /* 0x160C8AF9: mov esi, dword ptr [edi + 0x54] */
    PUSH32(esp, eax); /* 0x160C8AFC: push eax */
    PUSH32(esp, ecx); /* 0x160C8AFD: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x160C8AFE: mov ecx, dword ptr [ebp + 8] */
    edx = ebp + 0x10; /* 0x160C8B01: lea edx, [ebp + 0x10] */
    RECOMP_CALL(sub_1618E330); /* 0x160C8B04: call 0x1618e330 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x160C8B09: mov al, 1 */
    MEM8(edi + 0x241) = (uint8_t)(LO8(eax)); /* 0x160C8B0B: mov byte ptr [edi + 0x241], al */
    MEM8(edi + 0x242) = (uint8_t)(LO8(eax)); /* 0x160C8B11: mov byte ptr [edi + 0x242], al */
    esi = POP32_VAL(esp); /* 0x160C8B17: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C8B18: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C8B19: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C8B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C8B20u);

L_160C8B20:
    edi = edi; /* 0x160C8B20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C8B22: push ebp */
    ebp = esp; /* 0x160C8B23: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x21Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x21Cu; /* 0x160C8B25: sub esp, 0x21c */
    _flag_k = FK_CMP;
    eax = MEM32(0x161B2070); /* 0x160C8B2B: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x160C8B30: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x160C8B32: mov dword ptr [ebp - 8], eax */
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x160C8B35: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + 0x8); /* 0x160C8B39: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160C8B3C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160C8B3D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x160C8B40: push edi */
    edi = edx; /* 0x160C8B41: mov edi, edx */
    MEM32(ebp + (-0x214)) = eax; /* 0x160C8B43: mov dword ptr [ebp - 0x214], eax */
    MEM32(ebp + (-0x218)) = ecx; /* 0x160C8B49: mov dword ptr [ebp - 0x218], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C8B67; /* 0x160C8B4F: jne 0x160c8b67 */
L_160C8B51:
    /* test esi, esi */ /* 0x160C8B51: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8B73; /* 0x160C8B53: je 0x160c8b73 */
L_160C8B55:
    /* test ebx, ebx */ /* 0x160C8B55: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8B73; /* 0x160C8B57: je 0x160c8b73 */
L_160C8B59:
    PUSH32(esp, 1); /* 0x160C8B59: push 1 */
    PUSH32(esp, esi); /* 0x160C8B5B: push esi */
    ecx = ebx; /* 0x160C8B5C: mov ecx, ebx */
    RECOMP_CALL(sub_160CE190); /* 0x160C8B5E: call 0x160ce190 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C8B63: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8B73; /* 0x160C8B65: je 0x160c8b73 */
L_160C8B67:
    MEM32(ebp + (-0x210)) = 0x1602DEABu; /* 0x160C8B67: mov dword ptr [ebp - 0x210], 0x1602deab */
    goto L_160C8B7D; /* 0x160C8B71: jmp 0x160c8b7d */
L_160C8B73:
    MEM32(ebp + (-0x210)) = 0x16038B44u; /* 0x160C8B73: mov dword ptr [ebp - 0x210], 0x16038b44 */
L_160C8B7D:
    eax = ebp + (-0x20C); /* 0x160C8B7D: lea eax, [ebp - 0x20c] */
    /* test esi, esi */ /* 0x160C8B83: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8BBD; /* 0x160C8B85: jne 0x160c8bbd */
L_160C8B87:
    esi = 0x16039634u; /* 0x160C8B87: mov esi, 0x16039634 */
    ecx = eax; /* 0x160C8B8C: mov ecx, eax */
    edx = 0x100u; /* 0x160C8B8E: mov edx, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x160C8B93: sub esi, ecx */
    _flag_k = FK_CMP;
L_160C8B95:
    ecx = edx + 0x7FFFFEFE; /* 0x160C8B95: lea ecx, [edx + 0x7ffffefe] */
    /* test ecx, ecx */ /* 0x160C8B9B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8BB3; /* 0x160C8B9D: je 0x160c8bb3 */
L_160C8B9F:
    SET_LO8(ecx, MEM8(esi + eax)); /* 0x160C8B9F: mov cl, byte ptr [esi + eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x160C8BA2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8BB3; /* 0x160C8BA4: je 0x160c8bb3 */
L_160C8BA6:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x160C8BA6: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160C8BA8: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x160C8BA9: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160C8B95; /* 0x160C8BAC: jne 0x160c8b95 */
L_160C8BAE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x160C8BAE: dec eax */
    _flag_k = FK_DEC;
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x160C8BAF: mov byte ptr [eax], dl */
    goto L_160C8BCC; /* 0x160C8BB1: jmp 0x160c8bcc */
L_160C8BB3:
    /* test edx, edx */ /* 0x160C8BB3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8BB8; /* 0x160C8BB5: jne 0x160c8bb8 */
L_160C8BB7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x160C8BB7: dec eax */
    _flag_k = FK_DEC;
L_160C8BB8:
    MEM8(eax) = (uint8_t)(0); /* 0x160C8BB8: mov byte ptr [eax], 0 */
    goto L_160C8BCC; /* 0x160C8BBB: jmp 0x160c8bcc */
L_160C8BBD:
    edx = MEM32(esi); /* 0x160C8BBD: mov edx, dword ptr [esi] */
    edx = MEM32(edx + 0x18); /* 0x160C8BBF: mov edx, dword ptr [edx + 0x18] */
    PUSH32(esp, 0x100u); /* 0x160C8BC2: push 0x100 */
    PUSH32(esp, eax); /* 0x160C8BC7: push eax */
    ecx = esi; /* 0x160C8BC8: mov ecx, esi */
    RECOMP_ICALL(edx); /* 0x160C8BCA: call edx */
    RECOMP_FLAGS_IN();
L_160C8BCC:
    eax = ebp + (-0x10C); /* 0x160C8BCC: lea eax, [ebp - 0x10c] */
    /* test ebx, ebx */ /* 0x160C8BD2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8C0C; /* 0x160C8BD4: jne 0x160c8c0c */
L_160C8BD6:
    esi = 0x16039634u; /* 0x160C8BD6: mov esi, 0x16039634 */
    ecx = eax; /* 0x160C8BDB: mov ecx, eax */
    edx = 0x100u; /* 0x160C8BDD: mov edx, 0x100 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x160C8BE2: sub esi, ecx */
    _flag_k = FK_CMP;
L_160C8BE4:
    ecx = edx + 0x7FFFFEFE; /* 0x160C8BE4: lea ecx, [edx + 0x7ffffefe] */
    /* test ecx, ecx */ /* 0x160C8BEA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8C02; /* 0x160C8BEC: je 0x160c8c02 */
L_160C8BEE:
    SET_LO8(ecx, MEM8(esi + eax)); /* 0x160C8BEE: mov cl, byte ptr [esi + eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x160C8BF1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8C02; /* 0x160C8BF3: je 0x160c8c02 */
L_160C8BF5:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x160C8BF5: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160C8BF7: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x160C8BF8: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160C8BE4; /* 0x160C8BFB: jne 0x160c8be4 */
L_160C8BFD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x160C8BFD: dec eax */
    _flag_k = FK_DEC;
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x160C8BFE: mov byte ptr [eax], dl */
    goto L_160C8C1B; /* 0x160C8C00: jmp 0x160c8c1b */
L_160C8C02:
    /* test edx, edx */ /* 0x160C8C02: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8C07; /* 0x160C8C04: jne 0x160c8c07 */
L_160C8C06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x160C8C06: dec eax */
    _flag_k = FK_DEC;
L_160C8C07:
    MEM8(eax) = (uint8_t)(0); /* 0x160C8C07: mov byte ptr [eax], 0 */
    goto L_160C8C1B; /* 0x160C8C0A: jmp 0x160c8c1b */
L_160C8C0C:
    edx = MEM32(ebx); /* 0x160C8C0C: mov edx, dword ptr [ebx] */
    edx = MEM32(edx + 0x18); /* 0x160C8C0E: mov edx, dword ptr [edx + 0x18] */
    PUSH32(esp, 0x100u); /* 0x160C8C11: push 0x100 */
    PUSH32(esp, eax); /* 0x160C8C16: push eax */
    ecx = ebx; /* 0x160C8C17: mov ecx, ebx */
    RECOMP_ICALL(edx); /* 0x160C8C19: call edx */
    RECOMP_FLAGS_IN();
L_160C8C1B:
    eax = MEM32(ebp + (-0x218)); /* 0x160C8C1B: mov eax, dword ptr [ebp - 0x218] */
    /* test eax, eax */ /* 0x160C8C21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C8C65; /* 0x160C8C23: jne 0x160c8c65 */
L_160C8C25:
    edx = MEM32(ebp + (-0x210)); /* 0x160C8C25: mov edx, dword ptr [ebp - 0x210] */
    eax = ebp + (-0x20C); /* 0x160C8C2B: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x160C8C31: push eax */
    eax = MEM32(ebp + (-0x214)); /* 0x160C8C32: mov eax, dword ptr [ebp - 0x214] */
    ecx = ebp + (-0x10C); /* 0x160C8C38: lea ecx, [ebp - 0x10c] */
    PUSH32(esp, ecx); /* 0x160C8C3E: push ecx */
    PUSH32(esp, edx); /* 0x160C8C3F: push edx */
    PUSH32(esp, 0x16038B50u); /* 0x160C8C40: push 0x16038b50 */
    PUSH32(esp, eax); /* 0x160C8C45: push eax */
    ecx = 0xBC9u; /* 0x160C8C46: mov ecx, 0xbc9 */
    RECOMP_CALL(sub_160C8A90); /* 0x160C8C4B: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x160C8C50: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x160C8C53: pop edi */
    esi = POP32_VAL(esp); /* 0x160C8C54: pop esi */
    ecx = MEM32(ebp + (-0x8)); /* 0x160C8C55: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x160C8C58: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_161ADCF5); /* 0x160C8C5A: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160C8C5F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C8C61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8C62: ret 0xc */
L_160C8C65:
    ecx = ebp + (-0x20C); /* 0x160C8C65: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, ecx); /* 0x160C8C6B: push ecx */
    ecx = MEM32(ebp + (-0x210)); /* 0x160C8C6C: mov ecx, dword ptr [ebp - 0x210] */
    edx = ebp + (-0x10C); /* 0x160C8C72: lea edx, [ebp - 0x10c] */
    PUSH32(esp, edx); /* 0x160C8C78: push edx */
    edx = MEM32(ebp + (-0x214)); /* 0x160C8C79: mov edx, dword ptr [ebp - 0x214] */
    PUSH32(esp, ecx); /* 0x160C8C7F: push ecx */
    PUSH32(esp, eax); /* 0x160C8C80: push eax */
    PUSH32(esp, 0x16038B74u); /* 0x160C8C81: push 0x16038b74 */
    PUSH32(esp, edx); /* 0x160C8C86: push edx */
    ecx = 0xBC9u; /* 0x160C8C87: mov ecx, 0xbc9 */
    RECOMP_CALL(sub_160C8A90); /* 0x160C8C8C: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x160C8C91: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x160C8C94: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x160C8C97: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x160C8C98: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160C8C9A: pop esi */
    RECOMP_CALL(sub_161ADCF5); /* 0x160C8C9B: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160C8CA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C8CA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C8CA3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160C8FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C8FE0u);

L_160C8FE0:
    eax = MEM32(eax + 0x20); /* 0x160C8FE0: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x160C8FE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8FED; /* 0x160C8FE5: je 0x160c8fed */
L_160C8FE7:
    /* cmp MEM32(eax + 0x4), 2 */ /* 0x160C8FE7: cmp dword ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C8FF3; /* 0x160C8FEB: je 0x160c8ff3 */
L_160C8FED:
    eax = 0x80004005u; /* 0x160C8FED: mov eax, 0x80004005 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C8FF2: ret  */
L_160C8FF3:
    eax = MEM32(eax + 0x88); /* 0x160C8FF3: mov eax, dword ptr [eax + 0x88] */
    /* test eax, eax */ /* 0x160C8FF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C8FED; /* 0x160C8FFB: je 0x160c8fed */
L_160C8FFD:
    MEM32(ecx) = eax; /* 0x160C8FFD: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C8FFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9001: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C9010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9010u);

L_160C9010:
    edi = edi; /* 0x160C9010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9012: push ebp */
    ebp = esp; /* 0x160C9013: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160C9015: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160C9016: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160C9019: push edi */
    edi = ecx; /* 0x160C901A: mov edi, ecx */
    esp = esp; /* 0x160C901C: lea esp, [esp] */
L_160C9020:
    /* test esi, esi */ /* 0x160C9020: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9089; /* 0x160C9022: je 0x160c9089 */
L_160C9024:
    eax = MEM32(esi + 0x4); /* 0x160C9024: mov eax, dword ptr [esi + 4] */
    /* cmp eax, 1 */ /* 0x160C9027: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9040; /* 0x160C902A: jne 0x160c9040 */
L_160C902C:
    eax = MEM32(esi + 0x8); /* 0x160C902C: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x160C902F: push eax */
    ecx = edi; /* 0x160C9030: mov ecx, edi */
    RECOMP_CALL(sub_160C9010); /* 0x160C9032: call 0x160c9010 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C9037: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9081; /* 0x160C9039: jne 0x160c9081 */
L_160C903B:
    esi = MEM32(esi + 0xC); /* 0x160C903B: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_160C9020; /* 0x160C903E: jmp 0x160c9020 */
L_160C9040:
    /* cmp eax, 6 */ /* 0x160C9040: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9065; /* 0x160C9043: je 0x160c9065 */
L_160C9045:
    /* cmp eax, 5 */ /* 0x160C9045: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9089; /* 0x160C9048: jne 0x160c9089 */
L_160C904A:
    eax = MEM32(esi + 0x20); /* 0x160C904A: mov eax, dword ptr [esi + 0x20] */
    /* cmp eax, 0x28u */ /* 0x160C904D: cmp eax, 0x28 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C9081; /* 0x160C9050: ja 0x160c9081 */
L_160C9052:
    ecx = (uint32_t)MEM8(eax + 0x160C90A0); /* 0x160C9052: movzx ecx, byte ptr [eax + 0x160c90a0] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160C9094)); goto _ljump; }
L_160C9060:
    esi = MEM32(esi + 0x24); /* 0x160C9060: mov esi, dword ptr [esi + 0x24] */
    RECOMP_BACKEDGE();
    goto L_160C9020; /* 0x160C9063: jmp 0x160c9020 */
L_160C9065:
    /* cmp MEM32(esi + 0x18), 5 */ /* 0x160C9065: cmp dword ptr [esi + 0x18], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9081; /* 0x160C9069: jne 0x160c9081 */
L_160C906B:
    esi = MEM32(esi + 0x20); /* 0x160C906B: mov esi, dword ptr [esi + 0x20] */
    /* test esi, esi */ /* 0x160C906E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9089; /* 0x160C9070: je 0x160c9089 */
L_160C9072:
    /* cmp MEM32(esi + 0x4), 2 */ /* 0x160C9072: cmp dword ptr [esi + 4], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9089; /* 0x160C9076: jne 0x160c9089 */
L_160C9078:
    /* cmp MEM32(esi + 0x88), 0 */ /* 0x160C9078: cmp dword ptr [esi + 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9089; /* 0x160C907F: je 0x160c9089 */
L_160C9081:
    edi = POP32_VAL(esp); /* 0x160C9081: pop edi */
    SET_LO8(eax, 1); /* 0x160C9082: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160C9084: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C9085: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9086: ret 4 */
L_160C9089:
    edi = POP32_VAL(esp); /* 0x160C9089: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160C908A: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160C908C: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C908D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C908E: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160C9060u: goto L_160C9060;
      case 0x160C9081u: goto L_160C9081;
      case 0x160C9089u: goto L_160C9089;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160C90D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C90D0u);

L_160C90D0:
    edi = edi; /* 0x160C90D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C90D2: push ebp */
    ebp = esp; /* 0x160C90D3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160C90D5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x160C90D6: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x160C90D9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160C90DA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160C90DD: push edi */
    edi = ecx; /* 0x160C90DE: mov edi, ecx */
L_160C90E0:
    /* test esi, esi */ /* 0x160C90E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9211; /* 0x160C90E2: je 0x160c9211 */
L_160C90E8:
    eax = MEM32(esi + 0x4); /* 0x160C90E8: mov eax, dword ptr [esi + 4] */
    /* cmp eax, 1 */ /* 0x160C90EB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9109; /* 0x160C90EE: jne 0x160c9109 */
L_160C90F0:
    eax = MEM32(esi + 0x8); /* 0x160C90F0: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x160C90F3: push ebx */
    PUSH32(esp, eax); /* 0x160C90F4: push eax */
    ecx = edi; /* 0x160C90F5: mov ecx, edi */
    RECOMP_CALL(sub_160C90D0); /* 0x160C90F7: call 0x160c90d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C90FC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C91A1; /* 0x160C90FE: je 0x160c91a1 */
L_160C9104:
    esi = MEM32(esi + 0xC); /* 0x160C9104: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_160C90E0; /* 0x160C9107: jmp 0x160c90e0 */
L_160C9109:
    /* cmp eax, 6 */ /* 0x160C9109: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9146; /* 0x160C910C: je 0x160c9146 */
L_160C910E:
    /* cmp eax, 5 */ /* 0x160C910E: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9211; /* 0x160C9111: jne 0x160c9211 */
L_160C9117:
    eax = MEM32(esi + 0x20); /* 0x160C9117: mov eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE5u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE5u; /* 0x160C911A: add eax, -0x1b */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFu */ /* 0x160C911D: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C91E5; /* 0x160C9120: ja 0x160c91e5 */
L_160C9126:
    ecx = (uint32_t)MEM8(eax + 0x160C922C); /* 0x160C9126: movzx ecx, byte ptr [eax + 0x160c922c] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160C921C)); goto _ljump; }
L_160C9134:
    esi = MEM32(esi + 0x28); /* 0x160C9134: mov esi, dword ptr [esi + 0x28] */
    /* test esi, esi */ /* 0x160C9137: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C91A1; /* 0x160C9139: je 0x160c91a1 */
L_160C913B:
    /* cmp MEM32(esi + 0x4), 5 */ /* 0x160C913B: cmp dword ptr [esi + 4], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C91A1; /* 0x160C913F: jne 0x160c91a1 */
L_160C9141:
    esi = MEM32(esi + 0x28); /* 0x160C9141: mov esi, dword ptr [esi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_160C90E0; /* 0x160C9144: jmp 0x160c90e0 */
L_160C9146:
    eax = MEM32(esi + 0x18); /* 0x160C9146: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, 7 */ /* 0x160C9149: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C91A1; /* 0x160C914C: je 0x160c91a1 */
L_160C914E:
    /* test LO8(ebx), LO8(ebx) */ /* 0x160C914E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C915C; /* 0x160C9150: jne 0x160c915c */
L_160C9152:
    /* cmp eax, 4 */ /* 0x160C9152: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C91A1; /* 0x160C9155: je 0x160c91a1 */
L_160C9157:
    /* cmp eax, 6 */ /* 0x160C9157: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C91A1; /* 0x160C915A: je 0x160c91a1 */
L_160C915C:
    /* cmp eax, 5 */ /* 0x160C915C: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9211; /* 0x160C915F: jne 0x160c9211 */
L_160C9165:
    ecx = ebp + 0xC; /* 0x160C9165: lea ecx, [ebp + 0xc] */
    eax = esi; /* 0x160C9168: mov eax, esi */
    RECOMP_CALL(sub_160C8FE0); /* 0x160C916A: call 0x160c8fe0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C916F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9211; /* 0x160C9171: je 0x160c9211 */
L_160C9177:
    edi = POP32_VAL(esp); /* 0x160C9177: pop edi */
    esi = POP32_VAL(esp); /* 0x160C9178: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160C9179: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x160C917B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C917C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C917D: ret 8 */
L_160C9180:
    edx = MEM32(esi + 0x24); /* 0x160C9180: mov edx, dword ptr [esi + 0x24] */
    eax = MEM32(edx + 0x20); /* 0x160C9183: mov eax, dword ptr [edx + 0x20] */
    eax = MEM32(eax + 0x30); /* 0x160C9186: mov eax, dword ptr [eax + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF7u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF7u; /* 0x160C9189: add eax, -9 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xA7u */ /* 0x160C918C: cmp eax, 0xa7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xA7u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C91AA; /* 0x160C9191: ja 0x160c91aa */
L_160C9193:
    ecx = (uint32_t)MEM8(eax + 0x160C9244); /* 0x160C9193: movzx ecx, byte ptr [eax + 0x160c9244] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160C923C)); goto _ljump; }
L_160C91A1:
    edi = POP32_VAL(esp); /* 0x160C91A1: pop edi */
    esi = POP32_VAL(esp); /* 0x160C91A2: pop esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160C91A3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = POP32_VAL(esp); /* 0x160C91A5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C91A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C91A7: ret 8 */
L_160C91AA:
    edx = MEM32(esi + 0x28); /* 0x160C91AA: mov edx, dword ptr [esi + 0x28] */
    eax = MEM32(edx + 0x8); /* 0x160C91AD: mov eax, dword ptr [edx + 8] */
    PUSH32(esp, ebx); /* 0x160C91B0: push ebx */
    PUSH32(esp, eax); /* 0x160C91B1: push eax */
    ecx = edi; /* 0x160C91B2: mov ecx, edi */
    RECOMP_CALL(sub_160C90D0); /* 0x160C91B4: call 0x160c90d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C91B9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C91DC; /* 0x160C91BB: je 0x160c91dc */
L_160C91BD:
    ecx = MEM32(esi + 0x28); /* 0x160C91BD: mov ecx, dword ptr [esi + 0x28] */
    edx = MEM32(ecx + 0xC); /* 0x160C91C0: mov edx, dword ptr [ecx + 0xc] */
    PUSH32(esp, ebx); /* 0x160C91C3: push ebx */
    PUSH32(esp, edx); /* 0x160C91C4: push edx */
    ecx = edi; /* 0x160C91C5: mov ecx, edi */
    RECOMP_CALL(sub_160C90D0); /* 0x160C91C7: call 0x160c90d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C91CC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C91DC; /* 0x160C91CE: je 0x160c91dc */
L_160C91D0:
    edi = POP32_VAL(esp); /* 0x160C91D0: pop edi */
    esi = POP32_VAL(esp); /* 0x160C91D1: pop esi */
    eax = 1; /* 0x160C91D2: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x160C91D7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C91D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C91D9: ret 8 */
L_160C91DC:
    edi = POP32_VAL(esp); /* 0x160C91DC: pop edi */
    esi = POP32_VAL(esp); /* 0x160C91DD: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C91DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160C91E0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C91E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C91E2: ret 8 */
L_160C91E5:
    eax = MEM32(esi + 0x24); /* 0x160C91E5: mov eax, dword ptr [esi + 0x24] */
    PUSH32(esp, ebx); /* 0x160C91E8: push ebx */
    PUSH32(esp, eax); /* 0x160C91E9: push eax */
    ecx = edi; /* 0x160C91EA: mov ecx, edi */
    RECOMP_CALL(sub_160C90D0); /* 0x160C91EC: call 0x160c90d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C91F1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C91DC; /* 0x160C91F3: je 0x160c91dc */
L_160C91F5:
    ecx = MEM32(esi + 0x28); /* 0x160C91F5: mov ecx, dword ptr [esi + 0x28] */
    PUSH32(esp, ebx); /* 0x160C91F8: push ebx */
    PUSH32(esp, ecx); /* 0x160C91F9: push ecx */
    ecx = edi; /* 0x160C91FA: mov ecx, edi */
    RECOMP_CALL(sub_160C90D0); /* 0x160C91FC: call 0x160c90d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C9201: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C91DC; /* 0x160C9203: je 0x160c91dc */
L_160C9205:
    edi = POP32_VAL(esp); /* 0x160C9205: pop edi */
    esi = POP32_VAL(esp); /* 0x160C9206: pop esi */
    eax = 1; /* 0x160C9207: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x160C920C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C920D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C920E: ret 8 */
L_160C9211:
    edi = POP32_VAL(esp); /* 0x160C9211: pop edi */
    esi = POP32_VAL(esp); /* 0x160C9212: pop esi */
    SET_LO8(eax, 1); /* 0x160C9213: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x160C9215: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C9216: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C9217: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160C9134u: goto L_160C9134;
      case 0x160C9180u: goto L_160C9180;
      case 0x160C91A1u: goto L_160C91A1;
      case 0x160C91AAu: goto L_160C91AA;
      case 0x160C91E5u: goto L_160C91E5;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160C9300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9300u);

L_160C9300:
    edi = edi; /* 0x160C9300: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9302: push ebp */
    ebp = esp; /* 0x160C9303: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160C9305: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160C9306: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160C9309: push edi */
    edi = ecx; /* 0x160C930A: mov edi, ecx */
    esp = esp; /* 0x160C930C: lea esp, [esp] */
L_160C9310:
    /* test esi, esi */ /* 0x160C9310: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C93AC; /* 0x160C9312: je 0x160c93ac */
L_160C9318:
    eax = MEM32(esi + 0x4); /* 0x160C9318: mov eax, dword ptr [esi + 4] */
    /* cmp eax, 1 */ /* 0x160C931B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9334; /* 0x160C931E: jne 0x160c9334 */
L_160C9320:
    eax = MEM32(esi + 0x8); /* 0x160C9320: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x160C9323: push eax */
    ecx = edi; /* 0x160C9324: mov ecx, edi */
    RECOMP_CALL(sub_160C9300); /* 0x160C9326: call 0x160c9300 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C932B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C936F; /* 0x160C932D: je 0x160c936f */
L_160C932F:
    esi = MEM32(esi + 0xC); /* 0x160C932F: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_160C9310; /* 0x160C9332: jmp 0x160c9310 */
L_160C9334:
    /* cmp eax, 6 */ /* 0x160C9334: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9349; /* 0x160C9337: je 0x160c9349 */
L_160C9339:
    /* cmp eax, 5 */ /* 0x160C9339: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C93AC; /* 0x160C933C: jne 0x160c93ac */
L_160C933E:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x160C933E: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9377; /* 0x160C9342: jne 0x160c9377 */
L_160C9344:
    esi = MEM32(esi + 0x24); /* 0x160C9344: mov esi, dword ptr [esi + 0x24] */
    RECOMP_BACKEDGE();
    goto L_160C9310; /* 0x160C9347: jmp 0x160c9310 */
L_160C9349:
    eax = MEM32(esi + 0x18); /* 0x160C9349: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, 4 */ /* 0x160C934C: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C936F; /* 0x160C934F: je 0x160c936f */
L_160C9351:
    /* cmp eax, 6 */ /* 0x160C9351: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C935C; /* 0x160C9354: jne 0x160c935c */
L_160C9356:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x160C9356: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C936F; /* 0x160C935A: jne 0x160c936f */
L_160C935C:
    /* cmp eax, 5 */ /* 0x160C935C: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C93AC; /* 0x160C935F: jne 0x160c93ac */
L_160C9361:
    ecx = ebp + 0x8; /* 0x160C9361: lea ecx, [ebp + 8] */
    eax = esi; /* 0x160C9364: mov eax, esi */
    RECOMP_CALL(sub_160C8FE0); /* 0x160C9366: call 0x160c8fe0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C936B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C93AC; /* 0x160C936D: je 0x160c93ac */
L_160C936F:
    edi = POP32_VAL(esp); /* 0x160C936F: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160C9370: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160C9372: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C9373: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9374: ret 4 */
L_160C9377:
    ecx = MEM32(esi + 0x24); /* 0x160C9377: mov ecx, dword ptr [esi + 0x24] */
    PUSH32(esp, 0); /* 0x160C937A: push 0 */
    PUSH32(esp, ecx); /* 0x160C937C: push ecx */
    ecx = edi; /* 0x160C937D: mov ecx, edi */
    RECOMP_CALL(sub_160C90D0); /* 0x160C937F: call 0x160c90d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C9384: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C93A4; /* 0x160C9386: je 0x160c93a4 */
L_160C9388:
    edx = MEM32(esi + 0x28); /* 0x160C9388: mov edx, dword ptr [esi + 0x28] */
    PUSH32(esp, 0); /* 0x160C938B: push 0 */
    PUSH32(esp, edx); /* 0x160C938D: push edx */
    ecx = edi; /* 0x160C938E: mov ecx, edi */
    RECOMP_CALL(sub_160C90D0); /* 0x160C9390: call 0x160c90d0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160C9395: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C93A4; /* 0x160C9397: je 0x160c93a4 */
L_160C9399:
    edi = POP32_VAL(esp); /* 0x160C9399: pop edi */
    eax = 1; /* 0x160C939A: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x160C939F: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C93A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C93A1: ret 4 */
L_160C93A4:
    edi = POP32_VAL(esp); /* 0x160C93A4: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C93A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160C93A7: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C93A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C93A9: ret 4 */
L_160C93AC:
    edi = POP32_VAL(esp); /* 0x160C93AC: pop edi */
    SET_LO8(eax, 1); /* 0x160C93AD: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160C93AF: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C93B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C93B1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C9480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9480u);

L_160C9480:
    edi = edi; /* 0x160C9480: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9482: push ebp */
    ebp = esp; /* 0x160C9483: mov ebp, esp */
    eax = MEM32(0x161B4344); /* 0x160C9485: mov eax, dword ptr [0x161b4344] */
    PUSH32(esp, ebx); /* 0x160C948A: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160C948B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x160C948D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_160C9495; /* 0x160C948F: jge 0x160c9495 */
L_160C9491:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9491: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160C949C; /* 0x160C9493: jmp 0x160c949c */
L_160C9495:
    PUSH32(esp, eax); /* 0x160C9495: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160C9496: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160C949C:
    ecx = MEM32(eax + 0x4); /* 0x160C949C: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160C949F: push 0x10 */
    PUSH32(esp, 0x3Cu); /* 0x160C94A1: push 0x3c */
    RECOMP_CALL(sub_161A8F81); /* 0x160C94A3: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x160C94A8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C94EB; /* 0x160C94AA: je 0x160c94eb */
L_160C94AC:
    ecx = MEM32(ebp + 0x10); /* 0x160C94AC: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x160C94AF: mov edx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x20) = ecx; /* 0x160C94B2: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x38) = ebx; /* 0x160C94B5: mov dword ptr [eax + 0x38], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C94B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x24) = ecx; /* 0x160C94BA: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x160C94BD: mov dword ptr [eax + 0x28], ecx */
    PUSH32(esp, esi); /* 0x160C94C0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x160C94C1: mov esi, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x2C) = ecx; /* 0x160C94C4: mov dword ptr [eax + 0x2c], ecx */
    PUSH32(esp, edi); /* 0x160C94C7: push edi */
    MEM32(eax + 0x34) = ebx; /* 0x160C94C8: mov dword ptr [eax + 0x34], ebx */
    MEM32(eax + 0x30) = 0xFFFFFFFFu; /* 0x160C94CB: mov dword ptr [eax + 0x30], 0xffffffff */
    ecx = 8; /* 0x160C94D2: mov ecx, 8 */
    edi = eax; /* 0x160C94D7: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160C94D9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x160C94DB: pop edi */
    esi = POP32_VAL(esp); /* 0x160C94DC: pop esi */
    MEM32(eax + 0x28) = ebx; /* 0x160C94DD: mov dword ptr [eax + 0x28], ebx */
    MEM32(eax + 0x2C) = ebx; /* 0x160C94E0: mov dword ptr [eax + 0x2c], ebx */
    MEM32(eax + 0x24) = edx; /* 0x160C94E3: mov dword ptr [eax + 0x24], edx */
    ebx = POP32_VAL(esp); /* 0x160C94E6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C94E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160C94E8: ret 0x10 */
L_160C94EB:
    eax = MEM32(ebp + 0x8); /* 0x160C94EB: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x240) = (uint8_t)(1); /* 0x160C94EE: mov byte ptr [eax + 0x240], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C94F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160C94F7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C94F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x160C94F9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_160C9510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9510u);

L_160C9510:
    edi = edi; /* 0x160C9510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9512: push ebp */
    ebp = esp; /* 0x160C9513: mov ebp, esp */
    PUSH32(esp, edi); /* 0x160C9515: push edi */
    edi = eax; /* 0x160C9516: mov edi, eax */
    /* test esi, esi */ /* 0x160C9518: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C954B; /* 0x160C951A: je 0x160c954b */
L_160C951C:
    /* cmp ebx, 2 */ /* 0x160C951C: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9552; /* 0x160C951F: jne 0x160c9552 */
L_160C9521:
    ecx = MEM32(edi + 0x4); /* 0x160C9521: mov ecx, dword ptr [edi + 4] */
    eax = MEM32(ecx); /* 0x160C9524: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x10); /* 0x160C9526: mov edx, dword ptr [eax + 0x10] */
    RECOMP_ICALL(edx); /* 0x160C9529: call edx */
    RECOMP_FLAGS_IN();
    /* cmp eax, 4 */ /* 0x160C952B: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_160C9535; /* 0x160C952E: jl 0x160c9535 */
L_160C9530:
    /* cmp eax, 5 */ /* 0x160C9530: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_160C9552; /* 0x160C9533: jle 0x160c9552 */
L_160C9535:
    eax = MEM32(ebp + 0x8); /* 0x160C9535: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x16038BE8u); /* 0x160C9538: push 0x16038be8 */
    PUSH32(esp, eax); /* 0x160C953D: push eax */
    ecx = 0xC13u; /* 0x160C953E: mov ecx, 0xc13 */
    RECOMP_CALL(sub_160C8A90); /* 0x160C9543: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C9548: add esp, 8 */
    _flag_k = FK_ADD;
L_160C954B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C954B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160C954D: pop edi */
    ebp = POP32_VAL(esp); /* 0x160C954E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C954F: ret 4 */
L_160C9552:
    MEM32(esi + 0x20) = ebx; /* 0x160C9552: mov dword ptr [esi + 0x20], ebx */
    eax = esi; /* 0x160C9555: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x160C9557: pop edi */
    ebp = POP32_VAL(esp); /* 0x160C9558: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9559: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C9570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9570u);

L_160C9570:
    edi = edi; /* 0x160C9570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9572: push ebp */
    ebp = esp; /* 0x160C9573: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x160C9575: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test ebx, ebx */ /* 0x160C9578: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9584; /* 0x160C957A: jne 0x160c9584 */
L_160C957C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C957C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x160C957E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9580: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9581: ret 4 */
L_160C9584:
    /* test esi, esi */ /* 0x160C9584: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C95D2; /* 0x160C9586: je 0x160c95d2 */
L_160C9588:
    eax = ebp + (-0x10); /* 0x160C9588: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x160C958B: push eax */
    PUSH32(esp, 0); /* 0x160C958C: push 0 */
    PUSH32(esp, 0); /* 0x160C958E: push 0 */
    PUSH32(esp, esi); /* 0x160C9590: push esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFFu; /* 0x160C9591: mov dword ptr [ebp - 4], 0xffffffff */
    RECOMP_CALL(sub_161AB5E3); /* 0x160C9598: call 0x161ab5e3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C959D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C95C9; /* 0x160C959F: je 0x160c95c9 */
L_160C95A1:
    ecx = MEM32(ebp + 0x8); /* 0x160C95A1: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x160C95A4: push esi */
    PUSH32(esp, 0x16038C18u); /* 0x160C95A5: push 0x16038c18 */
    PUSH32(esp, ecx); /* 0x160C95AA: push ecx */
    ecx = 0xC11u; /* 0x160C95AB: mov ecx, 0xc11 */
    RECOMP_CALL(sub_160C8A90); /* 0x160C95B0: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x160C95B5: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0x30) = eax; /* 0x160C95B8: mov dword ptr [ebx + 0x30], eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160C95BB: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x28) = esi; /* 0x160C95BE: mov dword ptr [ebx + 0x28], esi */
    eax = ebx; /* 0x160C95C1: mov eax, ebx */
    esp = ebp; /* 0x160C95C3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C95C5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C95C6: ret 4 */
L_160C95C9:
    eax = MEM32(ebp + (-0xC)); /* 0x160C95C9: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx + 0x30) = eax; /* 0x160C95CC: mov dword ptr [ebx + 0x30], eax */
    MEM32(ebx + 0x28) = esi; /* 0x160C95CF: mov dword ptr [ebx + 0x28], esi */
L_160C95D2:
    eax = ebx; /* 0x160C95D2: mov eax, ebx */
    esp = ebp; /* 0x160C95D4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C95D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C95D7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C95E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C95E0u);

L_160C95E0:
    edi = edi; /* 0x160C95E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C95E2: push ebp */
    ebp = esp; /* 0x160C95E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160C95E5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x160C95E8: push edi */
    edi = eax; /* 0x160C95E9: mov edi, eax */
    /* test esi, esi */ /* 0x160C95EB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C961A; /* 0x160C95ED: je 0x160c961a */
L_160C95EF:
    eax = ebp + (-0x4); /* 0x160C95EF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160C95F2: push eax */
    PUSH32(esp, edi); /* 0x160C95F3: push edi */
    MEM32(ebp + (-0x4)) = 0; /* 0x160C95F4: mov dword ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_16114990); /* 0x160C95FB: call 0x16114990 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C9600: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160C9623; /* 0x160C9602: jge 0x160c9623 */
L_160C9604:
    ecx = MEM32(ebp + 0x8); /* 0x160C9604: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x16038C3Cu); /* 0x160C9607: push 0x16038c3c */
    PUSH32(esp, ecx); /* 0x160C960C: push ecx */
    ecx = 0xBF2u; /* 0x160C960D: mov ecx, 0xbf2 */
    RECOMP_CALL(sub_160C8A90); /* 0x160C9612: call 0x160c8a90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C9617: add esp, 8 */
    _flag_k = FK_ADD;
L_160C961A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C961A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x160C961C: pop edi */
    esp = ebp; /* 0x160C961D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C961F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9620: ret 4 */
L_160C9623:
    edx = MEM32(ebp + (-0x4)); /* 0x160C9623: mov edx, dword ptr [ebp - 4] */
    MEM32(esi + 0x34) = edx; /* 0x160C9626: mov dword ptr [esi + 0x34], edx */
    eax = esi; /* 0x160C9629: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x160C962B: pop edi */
    esp = ebp; /* 0x160C962C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C962E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C962F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C9950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9950u);

L_160C9950:
    edi = edi; /* 0x160C9950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9952: push ebp */
    ebp = esp; /* 0x160C9953: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x160C9955: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160C9958: push ebx */
    PUSH32(esp, esi); /* 0x160C9959: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160C995A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160C995D: push edi */
    edi = MEM32(esi + 0x54); /* 0x160C995E: mov edi, dword ptr [esi + 0x54] */
    PUSH32(esp, 1); /* 0x160C9961: push 1 */
    RECOMP_CALL(sub_16189770); /* 0x160C9963: call 0x16189770 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C9968: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160C9A5B; /* 0x160C996A: jl 0x160c9a5b */
L_160C9970:
    ecx = MEM32(esi + 0x54); /* 0x160C9970: mov ecx, dword ptr [esi + 0x54] */
    eax = ebp + (-0x4); /* 0x160C9973: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160C9976: push eax */
    PUSH32(esp, ecx); /* 0x160C9977: push ecx */
    RECOMP_CALL(sub_16189EC0); /* 0x160C9978: call 0x16189ec0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C997D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160C9A5B; /* 0x160C997F: jl 0x160c9a5b */
L_160C9985:
    edi = 0x40u; /* 0x160C9985: mov edi, 0x40 */
    RECOMP_CALL(sub_1605C8C0); /* 0x160C998A: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160C998F: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9991: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x160C9993: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9A64; /* 0x160C9995: je 0x160c9a64 */
L_160C999B:
    edx = MEM32(ebp + 0xC); /* 0x160C999B: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0x8) = eax; /* 0x160C999E: mov dword ptr [ebx + 8], eax */
    MEM32(ebx + 0xC) = eax; /* 0x160C99A1: mov dword ptr [ebx + 0xc], eax */
    eax = ebx + 0x18; /* 0x160C99A4: lea eax, [ebx + 0x18] */
    MEM32(ebx + 0x4) = 2; /* 0x160C99A7: mov dword ptr [ebx + 4], 2 */
    MEM32(ebx + 0x10) = 1; /* 0x160C99AE: mov dword ptr [ebx + 0x10], 1 */
    MEM32(ebx) = 0x16038E78u; /* 0x160C99B5: mov dword ptr [ebx], 0x16038e78 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x218u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x218u; /* 0x160C99BB: add esi, 0x218 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x160C99C1: mov edi, eax */
    PUSH32(esp, 1); /* 0x160C99C3: push 1 */
    ecx = 0xAu; /* 0x160C99C5: mov ecx, 0xa */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160C99CA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x160C99CC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x160C99CF: push edx */
    PUSH32(esp, esi); /* 0x160C99D0: push esi */
    MEM32(eax) = 0xEu; /* 0x160C99D1: mov dword ptr [eax], 0xe */
    RECOMP_CALL(sub_1610DAE0); /* 0x160C99D7: call 0x1610dae0 */
    RECOMP_FLAGS_IN();
    edi = 0x40u; /* 0x160C99DC: mov edi, 0x40 */
    MEM32(ebx + 0x20) = eax; /* 0x160C99E1: mov dword ptr [ebx + 0x20], eax */
    RECOMP_CALL(sub_1605C8C0); /* 0x160C99E4: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C99E9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x160C99EB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9A64; /* 0x160C99ED: je 0x160c9a64 */
L_160C99EF:
    MEM32(eax + 0x8) = ecx; /* 0x160C99EF: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x160C99F2: mov dword ptr [eax + 0xc], ecx */
    edx = esi + 0x218; /* 0x160C99F5: lea edx, [esi + 0x218] */
    edi = eax + 0x18; /* 0x160C99FB: lea edi, [eax + 0x18] */
    MEM32(eax + 0x4) = 2; /* 0x160C99FE: mov dword ptr [eax + 4], 2 */
    MEM32(eax + 0x10) = 1; /* 0x160C9A05: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax) = 0x16038E78u; /* 0x160C9A0C: mov dword ptr [eax], 0x16038e78 */
    ecx = 0xAu; /* 0x160C9A12: mov ecx, 0xa */
    esi = edx; /* 0x160C9A17: mov esi, edx */
    PUSH32(esp, ebx); /* 0x160C9A19: push ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160C9A1A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_160CAC70); /* 0x160C9A1C: call 0x160cac70 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160C9A21: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x160C9A23: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x160C9A26: push esi */
    RECOMP_CALL(sub_160CAC70); /* 0x160C9A27: call 0x160cac70 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x160C9A2C: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x1E0); /* 0x160C9A2F: mov ecx, dword ptr [edi + 0x1e0] */
    PUSH32(esp, ecx); /* 0x160C9A35: push ecx */
    RECOMP_CALL(sub_160CAC70); /* 0x160C9A36: call 0x160cac70 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x1E0) = eax; /* 0x160C9A3B: mov dword ptr [edi + 0x1e0], eax */
    eax = MEM32(ebp + 0x10); /* 0x160C9A41: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx) = 0xEu; /* 0x160C9A44: mov dword ptr [edx], 0xe */
    edx = MEM32(esi + 0x20); /* 0x160C9A4A: mov edx, dword ptr [esi + 0x20] */
    MEM32(eax) = 0x15Bu; /* 0x160C9A4D: mov dword ptr [eax], 0x15b */
    MEM32(edi + 0x220) = edx; /* 0x160C9A53: mov dword ptr [edi + 0x220], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9A59: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C9A5B:
    edi = POP32_VAL(esp); /* 0x160C9A5B: pop edi */
    esi = POP32_VAL(esp); /* 0x160C9A5C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C9A5D: pop ebx */
    esp = ebp; /* 0x160C9A5E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9A60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C9A61: ret 0xc */
L_160C9A64:
    edi = POP32_VAL(esp); /* 0x160C9A64: pop edi */
    esi = POP32_VAL(esp); /* 0x160C9A65: pop esi */
    eax = 0x8007000Eu; /* 0x160C9A66: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x160C9A6B: pop ebx */
    esp = ebp; /* 0x160C9A6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9A6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C9A6F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160C9A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9A80u);

L_160C9A80:
    edi = edi; /* 0x160C9A80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9A82: push ebp */
    ebp = esp; /* 0x160C9A83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x160C9A85: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160C9A88: push ebx */
    PUSH32(esp, esi); /* 0x160C9A89: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160C9A8A: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x1E0), 0 */ /* 0x160C9A8D: cmp dword ptr [esi + 0x1e0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1E0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x160C9A94: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9AF4; /* 0x160C9A95: jne 0x160c9af4 */
L_160C9A97:
    /* cmp MEM32(esi + 0x1EC), 0 */ /* 0x160C9A97: cmp dword ptr [esi + 0x1ec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1EC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C9AE9; /* 0x160C9A9E: jbe 0x160c9ae9 */
L_160C9AA0:
    /* cmp MEM32(esi + 0x1EC), 0 */ /* 0x160C9AA0: cmp dword ptr [esi + 0x1ec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1EC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = esi + 0x1E4; /* 0x160C9AA7: lea eax, [esi + 0x1e4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9AC0; /* 0x160C9AAD: je 0x160c9ac0 */
L_160C9AAF:
    ecx = MEM32(eax + 0x8); /* 0x160C9AAF: mov ecx, dword ptr [eax + 8] */
    edx = ecx + (-0x1); /* 0x160C9AB2: lea edx, [ecx - 1] */
    /* cmp edx, ecx */ /* 0x160C9AB5: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C9AC0; /* 0x160C9AB7: jae 0x160c9ac0 */
L_160C9AB9:
    ecx = MEM32(eax); /* 0x160C9AB9: mov ecx, dword ptr [eax] */
    ecx = ecx + edx * 8; /* 0x160C9ABB: lea ecx, [ecx + edx*8] */
    goto L_160C9AC2; /* 0x160C9ABE: jmp 0x160c9ac2 */
L_160C9AC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C9AC0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C9AC2:
    edx = MEM32(ecx); /* 0x160C9AC2: mov edx, dword ptr [ecx] */
    edi = MEM32(ecx + 0x4); /* 0x160C9AC4: mov edi, dword ptr [ecx + 4] */
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x160C9AC7: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9AE9; /* 0x160C9ACA: jne 0x160c9ae9 */
L_160C9ACC:
    ecx = MEM32(eax + 0x8); /* 0x160C9ACC: mov ecx, dword ptr [eax + 8] */
    /* cmp ecx, 1 */ /* 0x160C9ACF: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160C9AE9; /* 0x160C9AD2: jb 0x160c9ae9 */
L_160C9AD4:
    edx = ecx + (-0x1); /* 0x160C9AD4: lea edx, [ecx - 1] */
    RECOMP_CALL(sub_160C9C00); /* 0x160C9AD7: call 0x160c9c00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C9ADC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160C9AE9; /* 0x160C9ADE: jl 0x160c9ae9 */
L_160C9AE0:
    edx = MEM32(esi + 0x54); /* 0x160C9AE0: mov edx, dword ptr [esi + 0x54] */
    MEM32(edx + 0x684) = edi; /* 0x160C9AE3: mov dword ptr [edx + 0x684], edi */
L_160C9AE9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160C9AE9: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = POP32_VAL(esp); /* 0x160C9AEB: pop edi */
    esi = POP32_VAL(esp); /* 0x160C9AEC: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C9AED: pop ebx */
    esp = ebp; /* 0x160C9AEE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9AF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C9AF1: ret 8 */
L_160C9AF4:
    edi = 0x40u; /* 0x160C9AF4: mov edi, 0x40 */
    RECOMP_CALL(sub_1605C8C0); /* 0x160C9AF9: call 0x1605c8c0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x160C9AFE: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9B00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x160C9B02: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9AE9; /* 0x160C9B04: je 0x160c9ae9 */
L_160C9B06:
    MEM32(ebx + 0x8) = eax; /* 0x160C9B06: mov dword ptr [ebx + 8], eax */
    MEM32(ebx + 0xC) = eax; /* 0x160C9B09: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x160C9B0C: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x218u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x218u; /* 0x160C9B0F: add esi, 0x218 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = 2; /* 0x160C9B15: mov dword ptr [ebx + 4], 2 */
    MEM32(ebx + 0x10) = 1; /* 0x160C9B1C: mov dword ptr [ebx + 0x10], 1 */
    MEM32(ebx) = 0x16038E78u; /* 0x160C9B23: mov dword ptr [ebx], 0x16038e78 */
    edi = ebx + 0x18; /* 0x160C9B29: lea edi, [ebx + 0x18] */
    ecx = 0xAu; /* 0x160C9B2C: mov ecx, 0xa */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x160C9B31: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x160C9B33: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x54); /* 0x160C9B36: mov ecx, dword ptr [esi + 0x54] */
    MEM32(ebp + (-0x8)) = eax; /* 0x160C9B39: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx + 0x684); /* 0x160C9B3C: mov eax, dword ptr [ecx + 0x684] */
    MEM32(ebp + (-0x4)) = eax; /* 0x160C9B42: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x160C9B45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9B5C; /* 0x160C9B47: je 0x160c9b5c */
L_160C9B49:
    edx = ebp + (-0x8); /* 0x160C9B49: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x160C9B4C: push edx */
    eax = esi + 0x1E4; /* 0x160C9B4D: lea eax, [esi + 0x1e4] */
    RECOMP_CALL(sub_160C9B90); /* 0x160C9B53: call 0x160c9b90 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C9B58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160C9AE9; /* 0x160C9B5A: jl 0x160c9ae9 */
L_160C9B5C:
    eax = MEM32(esi + 0x1E0); /* 0x160C9B5C: mov eax, dword ptr [esi + 0x1e0] */
    PUSH32(esp, eax); /* 0x160C9B62: push eax */
    eax = ebx; /* 0x160C9B63: mov eax, ebx */
    RECOMP_CALL(sub_160CAC70); /* 0x160C9B65: call 0x160cac70 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x54); /* 0x160C9B6A: mov ecx, dword ptr [esi + 0x54] */
    MEM32(ecx + 0x684) = eax; /* 0x160C9B6D: mov dword ptr [ecx + 0x684], eax */
    edi = POP32_VAL(esp); /* 0x160C9B73: pop edi */
    MEM32(esi + 0x1E0) = 0; /* 0x160C9B74: mov dword ptr [esi + 0x1e0], 0 */
    esi = POP32_VAL(esp); /* 0x160C9B7E: pop esi */
    SET_LO8(eax, 1); /* 0x160C9B7F: mov al, 1 */
    ebx = POP32_VAL(esp); /* 0x160C9B81: pop ebx */
    esp = ebp; /* 0x160C9B82: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9B84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C9B85: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160C9B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9B90u);

L_160C9B90:
    edi = edi; /* 0x160C9B90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9B92: push ebp */
    ebp = esp; /* 0x160C9B93: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160C9B95: push ebx */
    PUSH32(esp, esi); /* 0x160C9B96: push esi */
    esi = eax; /* 0x160C9B97: mov esi, eax */
    ebx = MEM32(esi + 0x8); /* 0x160C9B99: mov ebx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160C9B9C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x160C9B9F: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x160C9BA1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C9BB1; /* 0x160C9BA4: jae 0x160c9bb1 */
L_160C9BA6:
    esi = POP32_VAL(esp); /* 0x160C9BA6: pop esi */
    eax = 0x80070216u; /* 0x160C9BA7: mov eax, 0x80070216 */
    ebx = POP32_VAL(esp); /* 0x160C9BAC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C9BAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9BAE: ret 4 */
L_160C9BB1:
    PUSH32(esp, edi); /* 0x160C9BB1: push edi */
    edi = ebx + 0x1; /* 0x160C9BB2: lea edi, [ebx + 1] */
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x160C9BB5: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C9BD2; /* 0x160C9BB8: jbe 0x160c9bd2 */
L_160C9BBA:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x160C9BBA: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9BC7; /* 0x160C9BBE: jne 0x160c9bc7 */
L_160C9BC0:
    eax = 0x8007000Eu; /* 0x160C9BC0: mov eax, 0x8007000e */
    goto L_160C9BD7; /* 0x160C9BC5: jmp 0x160c9bd7 */
L_160C9BC7:
    ecx = edi; /* 0x160C9BC7: mov ecx, edi */
    RECOMP_CALL(sub_160C9CC0); /* 0x160C9BC9: call 0x160c9cc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C9BCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9BD7; /* 0x160C9BD0: jne 0x160c9bd7 */
L_160C9BD2:
    MEM32(esi + 0x8) = edi; /* 0x160C9BD2: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9BD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C9BD7:
    edi = POP32_VAL(esp); /* 0x160C9BD7: pop edi */
    /* test eax, eax */ /* 0x160C9BD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9BF0; /* 0x160C9BDA: jne 0x160c9bf0 */
L_160C9BDC:
    ecx = MEM32(esi); /* 0x160C9BDC: mov ecx, dword ptr [esi] */
    eax = ecx + ebx * 8; /* 0x160C9BDE: lea eax, [ecx + ebx*8] */
    ecx = MEM32(ebp + 0x8); /* 0x160C9BE1: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx); /* 0x160C9BE4: mov edx, dword ptr [ecx] */
    MEM32(eax) = edx; /* 0x160C9BE6: mov dword ptr [eax], edx */
    ecx = MEM32(ecx + 0x4); /* 0x160C9BE8: mov ecx, dword ptr [ecx + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x160C9BEB: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9BEE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C9BF0:
    esi = POP32_VAL(esp); /* 0x160C9BF0: pop esi */
    ebx = POP32_VAL(esp); /* 0x160C9BF1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160C9BF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9BF3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C9C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9C00u);

L_160C9C00:
    ecx = MEM32(eax + 0x8); /* 0x160C9C00: mov ecx, dword ptr [eax + 8] */
    /* cmp edx, ecx */ /* 0x160C9C03: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_160C9C0D; /* 0x160C9C05: jb 0x160c9c0d */
L_160C9C07:
    eax = 0x80070057u; /* 0x160C9C07: mov eax, 0x80070057 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9C0C: ret  */
L_160C9C0D:
    PUSH32(esp, esi); /* 0x160C9C0D: push esi */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x160C9C0E: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x160C9C11: sub esi, edx */
    _flag_k = FK_CMP;
    /* cmp esi, 1 */ /* 0x160C9C13: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C9C1F; /* 0x160C9C16: jae 0x160c9c1f */
L_160C9C18:
    eax = 0x80070216u; /* 0x160C9C18: mov eax, 0x80070216 */
    esi = POP32_VAL(esp); /* 0x160C9C1D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9C1E: ret  */
L_160C9C1F:
    PUSH32(esp, edi); /* 0x160C9C1F: push edi */
    edi = edx + 0x1; /* 0x160C9C20: lea edi, [edx + 1] */
    /* cmp edi, ecx */ /* 0x160C9C23: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C9C2F; /* 0x160C9C25: jbe 0x160c9c2f */
L_160C9C27:
    edi = POP32_VAL(esp); /* 0x160C9C27: pop edi */
    eax = 0x80070057u; /* 0x160C9C28: mov eax, 0x80070057 */
    esi = POP32_VAL(esp); /* 0x160C9C2D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9C2E: ret  */
L_160C9C2F:
    esi = ecx + (-0x1); /* 0x160C9C2F: lea esi, [ecx - 1] */
    /* cmp edx, esi */ /* 0x160C9C32: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C9C5A; /* 0x160C9C34: jae 0x160c9c5a */
L_160C9C36:
    esi = MEM32(eax); /* 0x160C9C36: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x160C9C38: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x160C9C3A: sub ecx, 1 */
    _flag_k = FK_CMP;
    edx = esi + edx * 8; /* 0x160C9C3D: lea edx, [esi + edx*8] */
    esi = esi + edi * 8; /* 0x160C9C40: lea esi, [esi + edi*8] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_160C9C5A; /* 0x160C9C43: je 0x160c9c5a */
L_160C9C45:
    edi = MEM32(esi); /* 0x160C9C45: mov edi, dword ptr [esi] */
    MEM32(edx) = edi; /* 0x160C9C47: mov dword ptr [edx], edi */
    edi = MEM32(esi + 0x4); /* 0x160C9C49: mov edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160C9C4C: dec ecx */
    _flag_k = FK_DEC;
    MEM32(edx + 0x4) = edi; /* 0x160C9C4D: mov dword ptr [edx + 4], edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x160C9C50: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x160C9C53: add esi, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x160C9C56: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9C45; /* 0x160C9C58: ja 0x160c9c45 */
L_160C9C5A:
    edi = POP32_VAL(esp); /* 0x160C9C5A: pop edi */
    esi = POP32_VAL(esp); /* 0x160C9C5B: pop esi */
    goto L_160C9C70; /* 0x160C9C5C: jmp 0x160c9c70 */
L_160C9C70:
    edi = edi; /* 0x160C9C70: mov edi, edi */
    PUSH32(esp, esi); /* 0x160C9C72: push esi */
    esi = eax; /* 0x160C9C73: mov esi, eax */
    eax = MEM32(esi + 0x8); /* 0x160C9C75: mov eax, dword ptr [esi + 8] */
    ecx = 1; /* 0x160C9C78: mov ecx, 1 */
    PUSH32(esp, edi); /* 0x160C9C7D: push edi */
    /* cmp eax, ecx */ /* 0x160C9C7E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160C9C84; /* 0x160C9C80: jae 0x160c9c84 */
L_160C9C82:
    ecx = eax; /* 0x160C9C82: mov ecx, eax */
L_160C9C84:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x160C9C84: sub eax, ecx */
    _flag_k = FK_CMP;
    edi = eax; /* 0x160C9C86: mov edi, eax */
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x160C9C88: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C9CA6; /* 0x160C9C8B: jbe 0x160c9ca6 */
L_160C9C8D:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x160C9C8D: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9C9B; /* 0x160C9C91: jne 0x160c9c9b */
L_160C9C93:
    edi = POP32_VAL(esp); /* 0x160C9C93: pop edi */
    eax = 0x8007000Eu; /* 0x160C9C94: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x160C9C99: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9C9A: ret  */
L_160C9C9B:
    ecx = edi; /* 0x160C9C9B: mov ecx, edi */
    RECOMP_CALL(sub_160C9CC0); /* 0x160C9C9D: call 0x160c9cc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C9CA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9CAB; /* 0x160C9CA4: jne 0x160c9cab */
L_160C9CA6:
    MEM32(esi + 0x8) = edi; /* 0x160C9CA6: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9CA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C9CAB:
    edi = POP32_VAL(esp); /* 0x160C9CAB: pop edi */
    esi = POP32_VAL(esp); /* 0x160C9CAC: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9CAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C9CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9CC0u);

L_160C9CC0:
    edi = edi; /* 0x160C9CC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9CC2: push ebp */
    ebp = esp; /* 0x160C9CC3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160C9CC5: push ecx */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x160C9CC6: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160C9CD5; /* 0x160C9CCA: jne 0x160c9cd5 */
L_160C9CCC:
    eax = 0x8000FFFFu; /* 0x160C9CCC: mov eax, 0x8000ffff */
    esp = ebp; /* 0x160C9CD1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9CD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9CD4: ret  */
L_160C9CD5:
    PUSH32(esp, ebx); /* 0x160C9CD5: push ebx */
    PUSH32(esp, edi); /* 0x160C9CD6: push edi */
    /* test ecx, ecx */ /* 0x160C9CD7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9D00; /* 0x160C9CD9: jbe 0x160c9d00 */
L_160C9CDB:
    eax = ebp + (-0x4); /* 0x160C9CDB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160C9CDE: push eax */
    eax = esi; /* 0x160C9CDF: mov eax, esi */
    RECOMP_CALL(sub_160B25B0); /* 0x160C9CE1: call 0x160b25b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C9CE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9D28; /* 0x160C9CE8: jne 0x160c9d28 */
L_160C9CEA:
    ebx = MEM32(ebp + (-0x4)); /* 0x160C9CEA: mov ebx, dword ptr [ebp - 4] */
    /* cmp ebx, 0x1FFFFFFFu */ /* 0x160C9CED: cmp ebx, 0x1fffffff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C9D2E; /* 0x160C9CF3: jbe 0x160c9d2e */
L_160C9CF5:
    edi = POP32_VAL(esp); /* 0x160C9CF5: pop edi */
    eax = 0x80070216u; /* 0x160C9CF6: mov eax, 0x80070216 */
    ebx = POP32_VAL(esp); /* 0x160C9CFB: pop ebx */
    esp = ebp; /* 0x160C9CFC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9CFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9CFF: ret  */
L_160C9D00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160C9D00: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C9D02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x160C9D02: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C9D04:
    /* cmp MEM8(esi + 0xC), 0 */ /* 0x160C9D04: cmp byte ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9D15; /* 0x160C9D08: je 0x160c9d15 */
L_160C9D0A:
    edx = MEM32(esi); /* 0x160C9D0A: mov edx, dword ptr [esi] */
    PUSH32(esp, edx); /* 0x160C9D0C: push edx */
    RECOMP_CALL(sub_161AE0F0); /* 0x160C9D0D: call 0x161ae0f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160C9D12: add esp, 4 */
    _flag_k = FK_ADD;
L_160C9D15:
    MEM32(esi) = edi; /* 0x160C9D15: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = ebx; /* 0x160C9D17: mov dword ptr [esi + 4], ebx */
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x160C9D1A: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C9D22; /* 0x160C9D1D: jbe 0x160c9d22 */
L_160C9D1F:
    MEM32(esi + 0x8) = ebx; /* 0x160C9D1F: mov dword ptr [esi + 8], ebx */
L_160C9D22:
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x160C9D22: mov byte ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9D26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160C9D28:
    edi = POP32_VAL(esp); /* 0x160C9D28: pop edi */
    ebx = POP32_VAL(esp); /* 0x160C9D29: pop ebx */
    esp = ebp; /* 0x160C9D2A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9D2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9D2D: ret  */
L_160C9D2E:
    /* test ebx, ebx */ /* 0x160C9D2E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9D02; /* 0x160C9D30: jbe 0x160c9d02 */
L_160C9D32:
    ecx = ebx * 8; /* 0x160C9D32: lea ecx, [ebx*8] */
    PUSH32(esp, ecx); /* 0x160C9D39: push ecx */
    RECOMP_CALL(sub_161AE0FC); /* 0x160C9D3A: call 0x161ae0fc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x160C9D3F: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x160C9D41: add esp, 4 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x160C9D44: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9D53; /* 0x160C9D46: jne 0x160c9d53 */
L_160C9D48:
    edi = POP32_VAL(esp); /* 0x160C9D48: pop edi */
    eax = 0x8007000Eu; /* 0x160C9D49: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x160C9D4E: pop ebx */
    esp = ebp; /* 0x160C9D4F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160C9D51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9D52: ret  */
L_160C9D53:
    eax = MEM32(esi + 0x8); /* 0x160C9D53: mov eax, dword ptr [esi + 8] */
    edx = ebx; /* 0x160C9D56: mov edx, ebx */
    /* cmp ebx, eax */ /* 0x160C9D58: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_160C9D5E; /* 0x160C9D5A: jbe 0x160c9d5e */
L_160C9D5C:
    edx = eax; /* 0x160C9D5C: mov edx, eax */
L_160C9D5E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9D5E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160C9D60: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9D04; /* 0x160C9D62: jbe 0x160c9d04 */
L_160C9D64:
    ecx = MEM32(esi); /* 0x160C9D64: mov ecx, dword ptr [esi] */
    ebx = MEM32(ecx + eax * 8); /* 0x160C9D66: mov ebx, dword ptr [ecx + eax*8] */
    MEM32(edi + eax * 8) = ebx; /* 0x160C9D69: mov dword ptr [edi + eax*8], ebx */
    ecx = MEM32(ecx + eax * 8 + 0x4); /* 0x160C9D6C: mov ecx, dword ptr [ecx + eax*8 + 4] */
    MEM32(edi + eax * 8 + 0x4) = ecx; /* 0x160C9D70: mov dword ptr [edi + eax*8 + 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160C9D74: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x160C9D75: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_160C9D64; /* 0x160C9D77: jb 0x160c9d64 */
L_160C9D79:
    ebx = MEM32(ebp + (-0x4)); /* 0x160C9D79: mov ebx, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_160C9D04; /* 0x160C9D7C: jmp 0x160c9d04 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_160C9D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9D90u);

L_160C9D90:
    edi = edi; /* 0x160C9D90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9D92: push ebp */
    ebp = esp; /* 0x160C9D93: mov ebp, esp */
    eax = MEM32(ecx + 0x24); /* 0x160C9D95: mov eax, dword ptr [ecx + 0x24] */
    eax = MEM32(eax + 0x20); /* 0x160C9D98: mov eax, dword ptr [eax + 0x20] */
    MEM32(edx) = eax; /* 0x160C9D9B: mov dword ptr [edx], eax */
    eax = MEM32(eax + 0x30); /* 0x160C9D9D: mov eax, dword ptr [eax + 0x30] */
    edx = MEM32(ebp + 0x8); /* 0x160C9DA0: mov edx, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x160C9DA3: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x28); /* 0x160C9DA5: mov eax, dword ptr [ecx + 0x28] */
    ecx = MEM32(ebp + 0xC); /* 0x160C9DA8: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x160C9DAB: mov dword ptr [ecx], eax */
    ebp = POP32_VAL(esp); /* 0x160C9DAD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160C9DAE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160C9DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9DC0u);

L_160C9DC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9DC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x160C9DC2: push esi */
    esi = ecx; /* 0x160C9DC3: mov esi, ecx */
    /* test ecx, ecx */ /* 0x160C9DC5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9DE0; /* 0x160C9DC7: je 0x160c9de0 */
L_160C9DC9:
    esp = esp; /* 0x160C9DC9: lea esp, [esp] */
L_160C9DD0:
    /* cmp MEM8(edx), LO8(eax) */ /* 0x160C9DD0: cmp byte ptr [edx], al */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9DDC; /* 0x160C9DD2: je 0x160c9ddc */
L_160C9DD4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x160C9DD4: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x160C9DD5: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160C9DD0; /* 0x160C9DD8: jne 0x160c9dd0 */
L_160C9DDA:
    goto L_160C9DE0; /* 0x160C9DDA: jmp 0x160c9de0 */
L_160C9DDC:
    /* test ecx, ecx */ /* 0x160C9DDC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9DE5; /* 0x160C9DDE: jne 0x160c9de5 */
L_160C9DE0:
    eax = 0x80070057u; /* 0x160C9DE0: mov eax, 0x80070057 */
L_160C9DE5:
    /* test edi, edi */ /* 0x160C9DE5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9DF9; /* 0x160C9DE7: je 0x160c9df9 */
L_160C9DE9:
    /* test eax, eax */ /* 0x160C9DE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160C9DF3; /* 0x160C9DEB: jl 0x160c9df3 */
L_160C9DED:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x160C9DED: sub esi, ecx */
    _flag_k = FK_CMP;
    MEM32(edi) = esi; /* 0x160C9DEF: mov dword ptr [edi], esi */
    esi = POP32_VAL(esp); /* 0x160C9DF1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9DF2: ret  */
L_160C9DF3:
    MEM32(edi) = 0; /* 0x160C9DF3: mov dword ptr [edi], 0 */
L_160C9DF9:
    esi = POP32_VAL(esp); /* 0x160C9DF9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9DFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C9E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9E00u);

L_160C9E00:
    edi = edi; /* 0x160C9E00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9E02: push ebp */
    ebp = esp; /* 0x160C9E03: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x160C9E05: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160C9E08: push edi */
    edi = MEM32(ebp + 0x10); /* 0x160C9E09: mov edi, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x160C9E0C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9E33; /* 0x160C9E0E: je 0x160c9e33 */
L_160C9E10:
    ecx = MEM32(ebp + 0xC); /* 0x160C9E10: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x160C9E13: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160C9E33; /* 0x160C9E19: ja 0x160c9e33 */
L_160C9E1B:
    RECOMP_CALL(sub_160C9DC0); /* 0x160C9E1B: call 0x160c9dc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160C9E20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160C9E2E; /* 0x160C9E22: jge 0x160c9e2e */
L_160C9E24:
    /* test edi, edi */ /* 0x160C9E24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9E2E; /* 0x160C9E26: je 0x160c9e2e */
L_160C9E28:
    MEM32(edi) = 0; /* 0x160C9E28: mov dword ptr [edi], 0 */
L_160C9E2E:
    edi = POP32_VAL(esp); /* 0x160C9E2E: pop edi */
    ebp = POP32_VAL(esp); /* 0x160C9E2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C9E30: ret 0xc */
L_160C9E33:
    eax = 0x80070057u; /* 0x160C9E33: mov eax, 0x80070057 */
    RECOMP_BACKEDGE();
    goto L_160C9E24; /* 0x160C9E38: jmp 0x160c9e24 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_160C9E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9E40u);

L_160C9E40:
    edi = edi; /* 0x160C9E40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9E42: push ebp */
    ebp = esp; /* 0x160C9E43: mov ebp, esp */
    eax = MEM32(0x161B4344); /* 0x160C9E45: mov eax, dword ptr [0x161b4344] */
    /* test eax, eax */ /* 0x160C9E4A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160C9E62; /* 0x160C9E4C: jge 0x160c9e62 */
L_160C9E4E:
    ecx = MEM32(ebp + 0x8); /* 0x160C9E4E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x10u); /* 0x160C9E51: push 0x10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9E53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x160C9E55: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x160C9E56: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_161A8F81); /* 0x160C9E59: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160C9E5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9E5F: ret 4 */
L_160C9E62:
    PUSH32(esp, eax); /* 0x160C9E62: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160C9E63: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x160C9E69: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x10u); /* 0x160C9E6C: push 0x10 */
    PUSH32(esp, ecx); /* 0x160C9E6E: push ecx */
    ecx = MEM32(eax + 0x4); /* 0x160C9E6F: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_161A8F81); /* 0x160C9E72: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160C9E77: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160C9E78: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160C9E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9E80u);

L_160C9E80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C9E80: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x16038E38u; /* 0x160C9E82: mov dword ptr [eax], 0x16038e38 */
    MEM32(eax + 0x4) = ecx; /* 0x160C9E88: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x48) = ecx; /* 0x160C9E8B: mov dword ptr [eax + 0x48], ecx */
    MEM32(eax + 0x4C) = ecx; /* 0x160C9E8E: mov dword ptr [eax + 0x4c], ecx */
    MEM32(eax + 0x50) = ecx; /* 0x160C9E91: mov dword ptr [eax + 0x50], ecx */
    MEM32(eax + 0x54) = ecx; /* 0x160C9E94: mov dword ptr [eax + 0x54], ecx */
    MEM32(eax + 0x58) = ecx; /* 0x160C9E97: mov dword ptr [eax + 0x58], ecx */
    MEM32(eax + 0x60) = ecx; /* 0x160C9E9A: mov dword ptr [eax + 0x60], ecx */
    edx = 0x1602DEABu; /* 0x160C9E9D: mov edx, 0x1602deab */
    MEM32(eax + 0x8) = edx; /* 0x160C9EA2: mov dword ptr [eax + 8], edx */
    MEM32(eax + 0xC) = edx; /* 0x160C9EA5: mov dword ptr [eax + 0xc], edx */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160C9EA8: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x10) = ecx; /* 0x160C9EAB: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = edx; /* 0x160C9EAE: mov dword ptr [eax + 0x14], edx */
    MEM32(eax + 0x18) = edx; /* 0x160C9EB1: mov dword ptr [eax + 0x18], edx */
    MEM32(eax + 0x1C) = edx; /* 0x160C9EB4: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x20) = edx; /* 0x160C9EB7: mov dword ptr [eax + 0x20], edx */
    MEM32(eax + 0x24) = edx; /* 0x160C9EBA: mov dword ptr [eax + 0x24], edx */
    MEM32(eax + 0x28) = ecx; /* 0x160C9EBD: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x160C9EC0: mov dword ptr [eax + 0x2c], ecx */
    _flag_a = (uint32_t)(MEM8(eax + 0x64)) << 24; _flag_b = (uint32_t)(0xE0u) << 24;
    MEM8(eax + 0x64) = (uint8_t)(MEM8(eax + 0x64) & 0xE0u); /* 0x160C9EC3: and byte ptr [eax + 0x64], 0xe0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax + 0x30) = edx; /* 0x160C9EC7: mov dword ptr [eax + 0x30], edx */
    MEM32(eax + 0x38) = edx; /* 0x160C9ECA: mov dword ptr [eax + 0x38], edx */
    MEM32(eax + 0x3C) = edx; /* 0x160C9ECD: mov dword ptr [eax + 0x3c], edx */
    MEM32(eax + 0x40) = edx; /* 0x160C9ED0: mov dword ptr [eax + 0x40], edx */
    MEM32(eax + 0x44) = edx; /* 0x160C9ED3: mov dword ptr [eax + 0x44], edx */
    MEM32(eax + 0x34) = ecx; /* 0x160C9ED6: mov dword ptr [eax + 0x34], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9ED9: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C9EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9EE0u);

L_160C9EE0:
    eax = 0xDu; /* 0x160C9EE0: mov eax, 0xd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9EE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C9EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9EF0u);

L_160C9EF0:
    MEM32(eax + 0x4C) = ecx; /* 0x160C9EF0: mov dword ptr [eax + 0x4c], ecx */
    MEM32(eax + 0x58) = 0; /* 0x160C9EF3: mov dword ptr [eax + 0x58], 0 */
    edx = MEM32(ecx + 0x54); /* 0x160C9EFA: mov edx, dword ptr [ecx + 0x54] */
    /* test edx, edx */ /* 0x160C9EFD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9F08; /* 0x160C9EFF: je 0x160c9f08 */
L_160C9F01:
    MEM32(edx + 0x58) = eax; /* 0x160C9F01: mov dword ptr [edx + 0x58], eax */
    MEM32(ecx + 0x54) = eax; /* 0x160C9F04: mov dword ptr [ecx + 0x54], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9F07: ret  */
L_160C9F08:
    MEM32(ecx + 0x50) = eax; /* 0x160C9F08: mov dword ptr [ecx + 0x50], eax */
    MEM32(ecx + 0x54) = eax; /* 0x160C9F0B: mov dword ptr [ecx + 0x54], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9F0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_160C9F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9F20u);

L_160C9F20:
    edi = edi; /* 0x160C9F20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160C9F22: push ebp */
    ebp = esp; /* 0x160C9F23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160C9F25: push esi */
    SET_LO8(ecx, 8); /* 0x160C9F26: mov cl, 8 */
    PUSH32(esp, edi); /* 0x160C9F28: push edi */
    esi = ebx; /* 0x160C9F29: mov esi, ebx */
    /* test MEM8(ebx + 0x64), LO8(ecx) */ /* 0x160C9F2B: test byte ptr [ebx + 0x64], cl */
    _flag_a = (uint32_t)(MEM8(ebx + 0x64)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9F3E; /* 0x160C9F2E: je 0x160c9f3e */
L_160C9F30:
    eax = MEM32(esi + 0x4C); /* 0x160C9F30: mov eax, dword ptr [esi + 0x4c] */
    /* test eax, eax */ /* 0x160C9F33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9F3E; /* 0x160C9F35: je 0x160c9f3e */
L_160C9F37:
    esi = eax; /* 0x160C9F37: mov esi, eax */
    /* test MEM8(esi + 0x64), LO8(ecx) */ /* 0x160C9F39: test byte ptr [esi + 0x64], cl */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9F30; /* 0x160C9F3C: jne 0x160c9f30 */
L_160C9F3E:
    eax = MEM32(ebp + 0x8); /* 0x160C9F3E: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(eax + 0x8); /* 0x160C9F41: mov edi, dword ptr [eax + 8] */
    /* test edi, edi */ /* 0x160C9F44: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9F96; /* 0x160C9F46: je 0x160c9f96 */
L_160C9F48:
    PUSH32(esp, 0x3Au); /* 0x160C9F48: push 0x3a */
    PUSH32(esp, edi); /* 0x160C9F4A: push edi */
    RECOMP_CALL(sub_161AE206); /* 0x160C9F4B: call 0x161ae206 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160C9F50: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160C9F53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9F5C; /* 0x160C9F55: je 0x160c9f5c */
L_160C9F57:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x160C9F57: add eax, 1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160C9F6A; /* 0x160C9F5A: jne 0x160c9f6a */
L_160C9F5C:
    PUSH32(esp, 0); /* 0x160C9F5C: push 0 */
    PUSH32(esp, 0); /* 0x160C9F5E: push 0 */
    PUSH32(esp, edi); /* 0x160C9F60: push edi */
    ecx = esi; /* 0x160C9F61: mov ecx, esi */
    RECOMP_CALL(sub_160CA1F0); /* 0x160C9F63: call 0x160ca1f0 */
    RECOMP_FLAGS_IN();
    goto L_160C9F7B; /* 0x160C9F68: jmp 0x160c9f7b */
L_160C9F6A:
    eax = MEM32(ebp + 0xC); /* 0x160C9F6A: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x160C9F6D: push 0 */
    PUSH32(esp, 0); /* 0x160C9F6F: push 0 */
    PUSH32(esp, eax); /* 0x160C9F71: push eax */
    edx = edi; /* 0x160C9F72: mov edx, edi */
    ecx = esi; /* 0x160C9F74: mov ecx, esi */
    RECOMP_CALL(sub_160CA070); /* 0x160C9F76: call 0x160ca070 */
    RECOMP_FLAGS_IN();
L_160C9F7B:
    /* test eax, eax */ /* 0x160C9F7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9F93; /* 0x160C9F7D: je 0x160c9f93 */
L_160C9F7F:
    ecx = MEM32(ebp + 0x10); /* 0x160C9F7F: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x160C9F82: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9F88; /* 0x160C9F84: je 0x160c9f88 */
L_160C9F86:
    MEM32(ecx) = eax; /* 0x160C9F86: mov dword ptr [ecx], eax */
L_160C9F88:
    edi = POP32_VAL(esp); /* 0x160C9F88: pop edi */
    eax = 0x80070057u; /* 0x160C9F89: mov eax, 0x80070057 */
    esi = POP32_VAL(esp); /* 0x160C9F8E: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C9F8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C9F90: ret 0xc */
L_160C9F93:
    eax = MEM32(ebp + 0x8); /* 0x160C9F93: mov eax, dword ptr [ebp + 8] */
L_160C9F96:
    MEM32(eax + 0x4C) = ebx; /* 0x160C9F96: mov dword ptr [eax + 0x4c], ebx */
    MEM32(eax + 0x58) = 0; /* 0x160C9F99: mov dword ptr [eax + 0x58], 0 */
    ecx = MEM32(ebx + 0x54); /* 0x160C9FA0: mov ecx, dword ptr [ebx + 0x54] */
    /* test ecx, ecx */ /* 0x160C9FA3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9FB5; /* 0x160C9FA5: je 0x160c9fb5 */
L_160C9FA7:
    MEM32(ecx + 0x58) = eax; /* 0x160C9FA7: mov dword ptr [ecx + 0x58], eax */
    edi = POP32_VAL(esp); /* 0x160C9FAA: pop edi */
    MEM32(ebx + 0x54) = eax; /* 0x160C9FAB: mov dword ptr [ebx + 0x54], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9FAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160C9FB0: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C9FB1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C9FB2: ret 0xc */
L_160C9FB5:
    edi = POP32_VAL(esp); /* 0x160C9FB5: pop edi */
    MEM32(ebx + 0x50) = eax; /* 0x160C9FB6: mov dword ptr [ebx + 0x50], eax */
    MEM32(ebx + 0x54) = eax; /* 0x160C9FB9: mov dword ptr [ebx + 0x54], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160C9FBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160C9FBE: pop esi */
    ebp = POP32_VAL(esp); /* 0x160C9FBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160C9FC0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160C9FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160C9FD0u);

L_160C9FD0:
    eax = MEM32(edx + 0x50); /* 0x160C9FD0: mov eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160C9FD3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x160C9FD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA015; /* 0x160C9FD7: je 0x160ca015 */
L_160C9FD9:
    esp = esp; /* 0x160C9FD9: lea esp, [esp] */
L_160C9FE0:
    /* cmp eax, esi */ /* 0x160C9FE0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160C9FEE; /* 0x160C9FE2: je 0x160c9fee */
L_160C9FE4:
    ecx = eax; /* 0x160C9FE4: mov ecx, eax */
    eax = MEM32(eax + 0x58); /* 0x160C9FE6: mov eax, dword ptr [eax + 0x58] */
    /* test eax, eax */ /* 0x160C9FE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160C9FE0; /* 0x160C9FEB: jne 0x160c9fe0 */
L_160C9FED:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160C9FED: ret  */
L_160C9FEE:
    PUSH32(esp, ebx); /* 0x160C9FEE: push ebx */
    ebx = MEM32(eax + 0x58); /* 0x160C9FEF: mov ebx, dword ptr [eax + 0x58] */
    /* test ecx, ecx */ /* 0x160C9FF2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160C9FFB; /* 0x160C9FF4: je 0x160c9ffb */
L_160C9FF6:
    MEM32(ecx + 0x58) = ebx; /* 0x160C9FF6: mov dword ptr [ecx + 0x58], ebx */
    goto L_160C9FFE; /* 0x160C9FF9: jmp 0x160c9ffe */
L_160C9FFB:
    MEM32(edx + 0x50) = ebx; /* 0x160C9FFB: mov dword ptr [edx + 0x50], ebx */
L_160C9FFE:
    ebx = POP32_VAL(esp); /* 0x160C9FFE: pop ebx */
    /* cmp eax, MEM32(edx + 0x54) */ /* 0x160C9FFF: cmp eax, dword ptr [edx + 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x54));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA007; /* 0x160CA002: jne 0x160ca007 */
L_160CA004:
    MEM32(edx + 0x54) = ecx; /* 0x160CA004: mov dword ptr [edx + 0x54], ecx */
L_160CA007:
    MEM32(esi + 0x4C) = 0; /* 0x160CA007: mov dword ptr [esi + 0x4c], 0 */
    MEM32(esi + 0x58) = 0; /* 0x160CA00E: mov dword ptr [esi + 0x58], 0 */
L_160CA015:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA015: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA020u);

L_160CA020:
    edi = edi; /* 0x160CA020: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CA022: push ebp */
    ebp = esp; /* 0x160CA023: mov ebp, esp */
    PUSH32(esp, 0x3Au); /* 0x160CA025: push 0x3a */
    PUSH32(esp, esi); /* 0x160CA027: push esi */
    RECOMP_CALL(sub_161AE206); /* 0x160CA028: call 0x161ae206 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CA02D: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x160CA030: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA039; /* 0x160CA032: je 0x160ca039 */
L_160CA034:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x160CA034: add eax, 1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CA048; /* 0x160CA037: jne 0x160ca048 */
L_160CA039:
    ecx = MEM32(ebp + 0x8); /* 0x160CA039: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160CA03C: push edi */
    PUSH32(esp, ebx); /* 0x160CA03D: push ebx */
    PUSH32(esp, esi); /* 0x160CA03E: push esi */
    RECOMP_CALL(sub_160CA1F0); /* 0x160CA03F: call 0x160ca1f0 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160CA044: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CA045: ret 8 */
L_160CA048:
    eax = MEM32(ebp + 0xC); /* 0x160CA048: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x160CA04B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160CA04E: push edi */
    PUSH32(esp, ebx); /* 0x160CA04F: push ebx */
    PUSH32(esp, eax); /* 0x160CA050: push eax */
    edx = esi; /* 0x160CA051: mov edx, esi */
    RECOMP_CALL(sub_160CA070); /* 0x160CA053: call 0x160ca070 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x160CA058: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CA059: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CA070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA070u);

L_160CA070:
    edi = edi; /* 0x160CA070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CA072: push ebp */
    ebp = esp; /* 0x160CA073: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x114u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x114u; /* 0x160CA075: sub esp, 0x114 */
    _flag_k = FK_CMP;
    eax = MEM32(0x161B2070); /* 0x160CA07B: mov eax, dword ptr [0x161b2070] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x160CA080: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x160CA082: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x160CA085: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x160CA088: push esi */
    PUSH32(esp, edi); /* 0x160CA089: push edi */
    edi = MEM32(ebp + 0x8); /* 0x160CA08A: mov edi, dword ptr [ebp + 8] */
    esi = edx; /* 0x160CA08D: mov esi, edx */
    MEM32(ebp + (-0x114)) = edi; /* 0x160CA08F: mov dword ptr [ebp - 0x114], edi */
    /* test eax, eax */ /* 0x160CA095: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA0B9; /* 0x160CA097: je 0x160ca0b9 */
L_160CA099:
    edx = MEM32(ebp + 0xC); /* 0x160CA099: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x160CA09C: push eax */
    eax = MEM32(eax + 0x8); /* 0x160CA09D: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edx); /* 0x160CA0A0: push edx */
    PUSH32(esp, eax); /* 0x160CA0A1: push eax */
    RECOMP_CALL(sub_160CA1F0); /* 0x160CA0A2: call 0x160ca1f0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x160CA0A7: pop edi */
    esi = POP32_VAL(esp); /* 0x160CA0A8: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x160CA0A9: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x160CA0AC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_161ADCF5); /* 0x160CA0AE: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160CA0B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CA0B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CA0B6: ret 0xc */
L_160CA0B9:
    /* cmp MEM8(esi), 0x3Au */ /* 0x160CA0B9: cmp byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x10C)) = ecx; /* 0x160CA0BC: mov dword ptr [ebp - 0x10c], ecx */
    MEM8(ebp + (-0x105)) = (uint8_t)(0); /* 0x160CA0C2: mov byte ptr [ebp - 0x105], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA0FB; /* 0x160CA0C9: jne 0x160ca0fb */
L_160CA0CB:
    /* cmp MEM8(esi + 0x1), 0x3Au */ /* 0x160CA0CB: cmp byte ptr [esi + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA0FB; /* 0x160CA0CF: jne 0x160ca0fb */
L_160CA0D1:
    ecx = MEM32(ecx + 0x4C); /* 0x160CA0D1: mov ecx, dword ptr [ecx + 0x4c] */
    /* test ecx, ecx */ /* 0x160CA0D4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA0ED; /* 0x160CA0D6: je 0x160ca0ed */
L_160CA0D8:
    eax = ecx; /* 0x160CA0D8: mov eax, ecx */
    ebx = ebx; /* 0x160CA0DA: lea ebx, [ebx] */
L_160CA0E0:
    MEM32(ebp + (-0x10C)) = eax; /* 0x160CA0E0: mov dword ptr [ebp - 0x10c], eax */
    eax = MEM32(eax + 0x4C); /* 0x160CA0E6: mov eax, dword ptr [eax + 0x4c] */
    /* test eax, eax */ /* 0x160CA0E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA0E0; /* 0x160CA0EB: jne 0x160ca0e0 */
L_160CA0ED:
    MEM8(ebp + (-0x105)) = (uint8_t)(1); /* 0x160CA0ED: mov byte ptr [ebp - 0x105], 1 */
    MEM8(ebp + 0xC) = (uint8_t)(0); /* 0x160CA0F4: mov byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x160CA0F8: add esi, 2 */
    _flag_k = FK_ADD;
L_160CA0FB:
    PUSH32(esp, ebx); /* 0x160CA0FB: push ebx */
    esp = esp; /* 0x160CA0FC: lea esp, [esp] */
L_160CA100:
    PUSH32(esp, 0x3Au); /* 0x160CA100: push 0x3a */
    PUSH32(esp, esi); /* 0x160CA102: push esi */
    RECOMP_CALL(sub_161ADD22); /* 0x160CA103: call 0x161add22 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x160CA108: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x160CA10A: add esp, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x160CA10D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA125; /* 0x160CA10F: je 0x160ca125 */
L_160CA111:
    /* cmp MEM8(ecx + 0x1), 0x3Au */ /* 0x160CA111: cmp byte ptr [ecx + 1], 0x3a */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA125; /* 0x160CA115: jne 0x160ca125 */
L_160CA117:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x160CA117: sub eax, esi */
    _flag_k = FK_CMP;
    ebx = ecx + 0x2; /* 0x160CA119: lea ebx, [ecx + 2] */
    MEM8(ebp + (-0x105)) = (uint8_t)(1); /* 0x160CA11C: mov byte ptr [ebp - 0x105], 1 */
    goto L_160CA13C; /* 0x160CA123: jmp 0x160ca13c */
L_160CA125:
    eax = esi; /* 0x160CA125: mov eax, esi */
    edx = eax + 0x1; /* 0x160CA127: lea edx, [eax + 1] */
    ebx = ebx; /* 0x160CA12A: lea ebx, [ebx] */
L_160CA130:
    SET_LO8(ecx, MEM8(eax)); /* 0x160CA130: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160CA132: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CA133: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA130; /* 0x160CA135: jne 0x160ca130 */
L_160CA137:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x160CA137: sub eax, edx */
    _flag_k = FK_CMP;
    ebx = eax + esi; /* 0x160CA139: lea ebx, [eax + esi] */
L_160CA13C:
    /* cmp eax, 0x7FFFFFFEu */ /* 0x160CA13C: cmp eax, 0x7ffffffe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CA1CF; /* 0x160CA141: ja 0x160ca1cf */
L_160CA147:
    PUSH32(esp, esi); /* 0x160CA147: push esi */
    edx = 0x100u; /* 0x160CA148: mov edx, 0x100 */
    ecx = ebp + (-0x104); /* 0x160CA14D: lea ecx, [ebp - 0x104] */
    RECOMP_CALL(sub_160CAB60); /* 0x160CA153: call 0x160cab60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CA158: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA1CF; /* 0x160CA15A: jne 0x160ca1cf */
L_160CA15C:
    eax = ebp + (-0x104); /* 0x160CA15C: lea eax, [ebp - 0x104] */
    esi = ebx; /* 0x160CA162: mov esi, ebx */
    edx = eax + 0x1; /* 0x160CA164: lea edx, [eax + 1] */
L_160CA167:
    SET_LO8(ecx, MEM8(eax)); /* 0x160CA167: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160CA169: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CA16A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA167; /* 0x160CA16C: jne 0x160ca167 */
L_160CA16E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x160CA16E: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x110); /* 0x160CA170: lea ecx, [ebp - 0x110] */
    PUSH32(esp, ecx); /* 0x160CA176: push ecx */
    edx = ebp + (-0x104); /* 0x160CA177: lea edx, [ebp - 0x104] */
    ecx = edi + 0x30; /* 0x160CA17D: lea ecx, [edi + 0x30] */
    PUSH32(esp, edx); /* 0x160CA180: push edx */
    PUSH32(esp, ecx); /* 0x160CA181: push ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x48u; /* 0x160CA182: add edi, 0x48 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x160CA185: push edi */
    edi = eax; /* 0x160CA186: mov edi, eax */
    RECOMP_CALL(sub_1618EA00); /* 0x160CA188: call 0x1618ea00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CA18D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA1CF; /* 0x160CA18F: jne 0x160ca1cf */
L_160CA191:
    edx = MEM32(ebp + 0xC); /* 0x160CA191: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x10C)); /* 0x160CA194: mov ecx, dword ptr [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x160CA19A: push eax */
    eax = MEM32(ebp + (-0x110)); /* 0x160CA19B: mov eax, dword ptr [ebp - 0x110] */
    PUSH32(esp, edx); /* 0x160CA1A1: push edx */
    PUSH32(esp, eax); /* 0x160CA1A2: push eax */
    RECOMP_CALL(sub_160CA1F0); /* 0x160CA1A3: call 0x160ca1f0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x105)), 0 */ /* 0x160CA1A8: cmp byte ptr [ebp - 0x105], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x105))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x10C)) = eax; /* 0x160CA1AF: mov dword ptr [ebp - 0x10c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA1BB; /* 0x160CA1B5: je 0x160ca1bb */
L_160CA1B7:
    MEM8(ebp + 0xC) = (uint8_t)(0); /* 0x160CA1B7: mov byte ptr [ebp + 0xc], 0 */
L_160CA1BB:
    /* cmp MEM8(ebx), 0 */ /* 0x160CA1BB: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA1D1; /* 0x160CA1BE: je 0x160ca1d1 */
L_160CA1C0:
    /* test eax, eax */ /* 0x160CA1C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA1D1; /* 0x160CA1C2: je 0x160ca1d1 */
L_160CA1C4:
    edi = MEM32(ebp + (-0x114)); /* 0x160CA1C4: mov edi, dword ptr [ebp - 0x114] */
    RECOMP_BACKEDGE();
    goto L_160CA100; /* 0x160CA1CA: jmp 0x160ca100 */
L_160CA1CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA1CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CA1D1:
    ecx = MEM32(ebp + (-0x4)); /* 0x160CA1D1: mov ecx, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x160CA1D4: pop ebx */
    edi = POP32_VAL(esp); /* 0x160CA1D5: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x160CA1D6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CA1D8: pop esi */
    RECOMP_CALL(sub_161ADCF5); /* 0x160CA1D9: call 0x161adcf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x160CA1DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CA1E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CA1E1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160CA1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA1F0u);

L_160CA1F0:
    edi = edi; /* 0x160CA1F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CA1F2: push ebp */
    ebp = esp; /* 0x160CA1F3: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x160CA1F5: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x160CA1F8: push ebx */
    PUSH32(esp, esi); /* 0x160CA1F9: push esi */
    PUSH32(esp, edi); /* 0x160CA1FA: push edi */
    edi = ecx; /* 0x160CA1FB: mov edi, ecx */
    esi = MEM32(edi + 0x50); /* 0x160CA1FD: mov esi, dword ptr [edi + 0x50] */
    /* test eax, eax */ /* 0x160CA200: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA20A; /* 0x160CA202: je 0x160ca20a */
L_160CA204:
    edi = MEM32(eax + 0x4C); /* 0x160CA204: mov edi, dword ptr [eax + 0x4c] */
    esi = MEM32(eax + 0x58); /* 0x160CA207: mov esi, dword ptr [eax + 0x58] */
L_160CA20A:
    ebx = MEM32(ebp + 0x8); /* 0x160CA20A: mov ebx, dword ptr [ebp + 8] */
    ecx = ecx; /* 0x160CA20D: lea ecx, [ecx] */
L_160CA210:
    /* test esi, esi */ /* 0x160CA210: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA226; /* 0x160CA212: jne 0x160ca226 */
L_160CA214:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x160CA214: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA267; /* 0x160CA218: je 0x160ca267 */
L_160CA21A:
    eax = MEM32(edi + 0x4C); /* 0x160CA21A: mov eax, dword ptr [edi + 0x4c] */
    /* test eax, eax */ /* 0x160CA21D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA267; /* 0x160CA21F: je 0x160ca267 */
L_160CA221:
    edi = eax; /* 0x160CA221: mov edi, eax */
    esi = MEM32(edi + 0x50); /* 0x160CA223: mov esi, dword ptr [edi + 0x50] */
L_160CA226:
    /* test MEM8(esi + 0x64), 8 */ /* 0x160CA226: test byte ptr [esi + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA247; /* 0x160CA22A: je 0x160ca247 */
L_160CA22C:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x160CA22C: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA262; /* 0x160CA230: je 0x160ca262 */
L_160CA232:
    PUSH32(esp, 0); /* 0x160CA232: push 0 */
    PUSH32(esp, 0); /* 0x160CA234: push 0 */
    PUSH32(esp, ebx); /* 0x160CA236: push ebx */
    ecx = esi; /* 0x160CA237: mov ecx, esi */
    RECOMP_CALL(sub_160CA1F0); /* 0x160CA239: call 0x160ca1f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CA23E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA272; /* 0x160CA240: jne 0x160ca272 */
L_160CA242:
    esi = MEM32(esi + 0x58); /* 0x160CA242: mov esi, dword ptr [esi + 0x58] */
    RECOMP_BACKEDGE();
    goto L_160CA210; /* 0x160CA245: jmp 0x160ca210 */
L_160CA247:
    /* cmp MEM8(ebx), 0 */ /* 0x160CA247: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(esi + 0x8); /* 0x160CA24A: mov eax, dword ptr [esi + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA254; /* 0x160CA24D: jne 0x160ca254 */
L_160CA24F:
    /* cmp MEM8(eax), 0 */ /* 0x160CA24F: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_160CA25B; /* 0x160CA252: jmp 0x160ca25b */
L_160CA254:
    /* cmp MEM8(eax), 0 */ /* 0x160CA254: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA262; /* 0x160CA257: je 0x160ca262 */
L_160CA259:
    /* cmp ebx, eax */ /* 0x160CA259: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_160CA25B:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) ? 1 : 0); /* 0x160CA25B: sete al */
    /* test LO8(eax), LO8(eax) */ /* 0x160CA25E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA270; /* 0x160CA260: jne 0x160ca270 */
L_160CA262:
    esi = MEM32(esi + 0x58); /* 0x160CA262: mov esi, dword ptr [esi + 0x58] */
    RECOMP_BACKEDGE();
    goto L_160CA210; /* 0x160CA265: jmp 0x160ca210 */
L_160CA267:
    edi = POP32_VAL(esp); /* 0x160CA267: pop edi */
    esi = POP32_VAL(esp); /* 0x160CA268: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA269: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CA26B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA26C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CA26D: ret 0xc */
L_160CA270:
    eax = esi; /* 0x160CA270: mov eax, esi */
L_160CA272:
    edi = POP32_VAL(esp); /* 0x160CA272: pop edi */
    esi = POP32_VAL(esp); /* 0x160CA273: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CA274: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA275: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CA276: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160CA280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA280u);

L_160CA280:
    edi = edi; /* 0x160CA280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CA282: push ebp */
    ebp = esp; /* 0x160CA283: mov ebp, esp */
    eax = MEM32(ecx + 0x58); /* 0x160CA285: mov eax, dword ptr [ecx + 0x58] */
    /* test eax, eax */ /* 0x160CA288: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA2B6; /* 0x160CA28A: jne 0x160ca2b6 */
L_160CA28C:
    /* test MEM32(ebp + 0x8), 0x80000000u */ /* 0x160CA28C: test dword ptr [ebp + 8], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x80000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA2AD; /* 0x160CA293: jne 0x160ca2ad */
L_160CA295:
    eax = MEM32(ecx + 0x4C); /* 0x160CA295: mov eax, dword ptr [ecx + 0x4c] */
    /* test eax, eax */ /* 0x160CA298: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA2AD; /* 0x160CA29A: je 0x160ca2ad */
L_160CA29C:
    esp = esp; /* 0x160CA29C: lea esp, [esp] */
L_160CA2A0:
    /* cmp MEM32(eax + 0x58), 0 */ /* 0x160CA2A0: cmp dword ptr [eax + 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA2B3; /* 0x160CA2A4: jne 0x160ca2b3 */
L_160CA2A6:
    eax = MEM32(eax + 0x4C); /* 0x160CA2A6: mov eax, dword ptr [eax + 0x4c] */
    /* test eax, eax */ /* 0x160CA2A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA2A0; /* 0x160CA2AB: jne 0x160ca2a0 */
L_160CA2AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA2AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x160CA2AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CA2B0: ret 4 */
L_160CA2B3:
    eax = MEM32(eax + 0x58); /* 0x160CA2B3: mov eax, dword ptr [eax + 0x58] */
L_160CA2B6:
    ebp = POP32_VAL(esp); /* 0x160CA2B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CA2B7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CA2C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA2C0u);

L_160CA2C0:
    edi = edi; /* 0x160CA2C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CA2C2: push ebp */
    ebp = esp; /* 0x160CA2C3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160CA2C5: push ebx */
    PUSH32(esp, esi); /* 0x160CA2C6: push esi */
    esi = MEM32(ebp + 0x10); /* 0x160CA2C7: mov esi, dword ptr [ebp + 0x10] */
    eax = esi; /* 0x160CA2CA: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x160CA2CC: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x160CA2CE: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFBFFBu);
    eax = eax & 0x7FFFBFFBu; /* 0x160CA2D0: and eax, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x80004005u; /* 0x160CA2D5: add eax, 0x80004005 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x160CA2DA: push edi */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_160CA430; /* 0x160CA2DB: js 0x160ca430 */
L_160CA2E1:
    /* cmp MEM8(esi), 0 */ /* 0x160CA2E1: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA2F8; /* 0x160CA2E4: jne 0x160ca2f8 */
L_160CA2E6:
    eax = MEM32(ebp + 0x8); /* 0x160CA2E6: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x160CA2E9: pop edi */
    MEM32(eax + 0x8) = esi; /* 0x160CA2EA: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x160CA2ED: mov dword ptr [eax + 0xc], esi */
    esi = POP32_VAL(esp); /* 0x160CA2F0: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA2F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CA2F3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA2F4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CA2F5: ret 0x14 */
L_160CA2F8:
    /* cmp MEM8(ebp + 0x14), 0 */ /* 0x160CA2F8: cmp byte ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(ebp + 0x8); /* 0x160CA2FC: mov ebx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA317; /* 0x160CA2FF: jne 0x160ca317 */
L_160CA301:
    edx = MEM32(ebp + 0x18); /* 0x160CA301: mov edx, dword ptr [ebp + 0x18] */
    edi = ebx + 0x8; /* 0x160CA304: lea edi, [ebx + 8] */
    PUSH32(esp, edi); /* 0x160CA307: push edi */
    RECOMP_CALL(sub_1605CA00); /* 0x160CA308: call 0x1605ca00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CA30D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CA430; /* 0x160CA30F: jl 0x160ca430 */
L_160CA315:
    goto L_160CA31F; /* 0x160CA315: jmp 0x160ca31f */
L_160CA317:
    edi = MEM32(ebp + 0x8); /* 0x160CA317: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x160CA31A: add edi, 8 */
    _flag_k = FK_ADD;
    MEM32(edi) = esi; /* 0x160CA31D: mov dword ptr [edi], esi */
L_160CA31F:
    ecx = MEM32(ebp + 0xC); /* 0x160CA31F: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x160CA322: mov eax, dword ptr [edi] */
    MEM32(ebx + 0xC) = eax; /* 0x160CA324: mov dword ptr [ebx + 0xc], eax */
    /* test ecx, ecx */ /* 0x160CA327: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA42E; /* 0x160CA329: je 0x160ca42e */
L_160CA32F:
    edx = MEM32(ecx); /* 0x160CA32F: mov edx, dword ptr [ecx] */
    eax = MEM32(edx + 0x10); /* 0x160CA331: mov eax, dword ptr [edx + 0x10] */
    RECOMP_ICALL(eax); /* 0x160CA334: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x160CA336: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0xAu */ /* 0x160CA337: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CA42E; /* 0x160CA33A: ja 0x160ca42e */
L_160CA340:
    ecx = (uint32_t)MEM8(eax + 0x160CA444); /* 0x160CA340: movzx ecx, byte ptr [eax + 0x160ca444] */
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x160CA438)); goto _ljump; }
L_160CA34E:
    PUSH32(esp, 2); /* 0x160CA34E: push 2 */
    eax = ebx; /* 0x160CA350: mov eax, ebx */
    RECOMP_CALL(sub_16070DA0); /* 0x160CA352: call 0x16070da0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CA357: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA36A; /* 0x160CA359: je 0x160ca36a */
L_160CA35B:
    edx = ebx; /* 0x160CA35B: mov edx, ebx */
    RECOMP_CALL(sub_160CAB20); /* 0x160CA35D: call 0x160cab20 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CA362: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA42E; /* 0x160CA364: jne 0x160ca42e */
L_160CA36A:
    eax = esi; /* 0x160CA36A: mov eax, esi */
    edx = eax + 0x1; /* 0x160CA36C: lea edx, [eax + 1] */
    /* nop */ /* 0x160CA36F: nop  */
L_160CA370:
    SET_LO8(ecx, MEM8(eax)); /* 0x160CA370: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160CA372: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CA373: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA370; /* 0x160CA375: jne 0x160ca370 */
L_160CA377:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x160CA377: sub eax, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x160CA379: mov edx, dword ptr [ebp + 0xc] */
    ebx = eax; /* 0x160CA37C: mov ebx, eax */
    edi = ebx + 0x1; /* 0x160CA37E: lea edi, [ebx + 1] */
L_160CA381:
    /* test MEM8(edx + 0x64), 8 */ /* 0x160CA381: test byte ptr [edx + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(edx + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(edx + 0x8); /* 0x160CA385: mov eax, dword ptr [edx + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA3A3; /* 0x160CA388: jne 0x160ca3a3 */
L_160CA38A:
    /* test eax, eax */ /* 0x160CA38A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA3A3; /* 0x160CA38C: je 0x160ca3a3 */
L_160CA38E:
    /* cmp MEM8(eax), 0 */ /* 0x160CA38E: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA3A3; /* 0x160CA391: je 0x160ca3a3 */
L_160CA393:
    esi = eax + 0x1; /* 0x160CA393: lea esi, [eax + 1] */
L_160CA396:
    SET_LO8(ecx, MEM8(eax)); /* 0x160CA396: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160CA398: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x160CA399: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA396; /* 0x160CA39B: jne 0x160ca396 */
L_160CA39D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x160CA39D: sub eax, esi */
    _flag_k = FK_CMP;
    edi = edi + eax + 0x2; /* 0x160CA39F: lea edi, [edi + eax + 2] */
L_160CA3A3:
    edx = MEM32(edx + 0x4C); /* 0x160CA3A3: mov edx, dword ptr [edx + 0x4c] */
    /* test edx, edx */ /* 0x160CA3A6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA381; /* 0x160CA3A8: jne 0x160ca381 */
L_160CA3AA:
    ecx = MEM32(ebp + 0x18); /* 0x160CA3AA: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, 1); /* 0x160CA3AD: push 1 */
    PUSH32(esp, edi); /* 0x160CA3AF: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x160CA3B0: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_161A8F81); /* 0x160CA3B3: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160CA3B8: mov esi, eax */
    MEM32(ebp + 0x14) = esi; /* 0x160CA3BA: mov dword ptr [ebp + 0x14], esi */
    /* test esi, esi */ /* 0x160CA3BD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA3CD; /* 0x160CA3BF: jne 0x160ca3cd */
L_160CA3C1:
    edi = POP32_VAL(esp); /* 0x160CA3C1: pop edi */
    esi = POP32_VAL(esp); /* 0x160CA3C2: pop esi */
    eax = 0x8007000Eu; /* 0x160CA3C3: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x160CA3C8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA3C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CA3CA: ret 0x14 */
L_160CA3CD:
    edx = MEM32(ebp + 0x10); /* 0x160CA3CD: mov edx, dword ptr [ebp + 0x10] */
    edi = esi + edi + (-0x1); /* 0x160CA3D0: lea edi, [esi + edi - 1] */
    PUSH32(esp, ebx); /* 0x160CA3D4: push ebx */
    MEM8(edi) = (uint8_t)(0); /* 0x160CA3D5: mov byte ptr [edi], 0 */
    PUSH32(esp, edx); /* 0x160CA3D8: push edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x160CA3D9: sub edi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x160CA3DB: push edi */
    RECOMP_CALL(sub_161AE3C0); /* 0x160CA3DC: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x160CA3E1: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160CA3E4: add esp, 0xc */
    _flag_k = FK_ADD;
L_160CA3E7:
    /* test MEM8(ebx + 0x64), 8 */ /* 0x160CA3E7: test byte ptr [ebx + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebx + 0x8); /* 0x160CA3EB: mov ecx, dword ptr [ebx + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA421; /* 0x160CA3EE: jne 0x160ca421 */
L_160CA3F0:
    /* test ecx, ecx */ /* 0x160CA3F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA421; /* 0x160CA3F2: je 0x160ca421 */
L_160CA3F4:
    /* cmp MEM8(ecx), 0 */ /* 0x160CA3F4: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA421; /* 0x160CA3F7: je 0x160ca421 */
L_160CA3F9:
    eax = ecx; /* 0x160CA3F9: mov eax, ecx */
    esi = eax + 0x1; /* 0x160CA3FB: lea esi, [eax + 1] */
    edi = edi; /* 0x160CA3FE: mov edi, edi */
L_160CA400:
    SET_LO8(edx, MEM8(eax)); /* 0x160CA400: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x160CA402: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x160CA403: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA400; /* 0x160CA405: jne 0x160ca400 */
L_160CA407:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x160CA407: dec edi */
    _flag_k = FK_DEC;
    MEM8(edi) = (uint8_t)(0x3Au); /* 0x160CA408: mov byte ptr [edi], 0x3a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x160CA40B: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x160CA40D: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x160CA40E: push eax */
    MEM8(edi) = (uint8_t)(0x3Au); /* 0x160CA40F: mov byte ptr [edi], 0x3a */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x160CA412: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x160CA414: push ecx */
    PUSH32(esp, edi); /* 0x160CA415: push edi */
    RECOMP_CALL(sub_161AE3C0); /* 0x160CA416: call 0x161ae3c0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x14); /* 0x160CA41B: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x160CA41E: add esp, 0xc */
    _flag_k = FK_ADD;
L_160CA421:
    ebx = MEM32(ebx + 0x4C); /* 0x160CA421: mov ebx, dword ptr [ebx + 0x4c] */
    /* test ebx, ebx */ /* 0x160CA424: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA3E7; /* 0x160CA426: jne 0x160ca3e7 */
L_160CA428:
    eax = MEM32(ebp + 0x8); /* 0x160CA428: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = esi; /* 0x160CA42B: mov dword ptr [eax + 0xc], esi */
L_160CA42E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA42E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CA430:
    edi = POP32_VAL(esp); /* 0x160CA430: pop edi */
    esi = POP32_VAL(esp); /* 0x160CA431: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CA432: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA433: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x160CA434: ret 0x14 */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CA34Eu: goto L_160CA34E;
      case 0x160CA36Au: goto L_160CA36A;
      case 0x160CA42Eu: goto L_160CA42E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CA460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA460u);

L_160CA460:
    ecx = MEM32(esi + 0x48); /* 0x160CA460: mov ecx, dword ptr [esi + 0x48] */
    MEM32(esi + 0x34) = 0; /* 0x160CA463: mov dword ptr [esi + 0x34], 0 */
    /* test ecx, ecx */ /* 0x160CA46A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA478; /* 0x160CA46C: je 0x160ca478 */
L_160CA46E:
    eax = MEM32(ecx); /* 0x160CA46E: mov eax, dword ptr [ecx] */
    edx = MEM32(eax + 0x4); /* 0x160CA470: mov edx, dword ptr [eax + 4] */
    RECOMP_ICALL(edx); /* 0x160CA473: call edx */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = eax; /* 0x160CA475: mov dword ptr [esi + 0x34], eax */
L_160CA478:
    eax = MEM32(esi + 0x34); /* 0x160CA478: mov eax, dword ptr [esi + 0x34] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA47B: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA490u);

L_160CA490:
    edi = edi; /* 0x160CA490: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CA492: push ebp */
    ebp = esp; /* 0x160CA493: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x160CA495: push ecx */
    ecx = MEM32(eax + 0x48); /* 0x160CA496: mov ecx, dword ptr [eax + 0x48] */
    /* test ecx, ecx */ /* 0x160CA499: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA4B6; /* 0x160CA49B: je 0x160ca4b6 */
L_160CA49D:
    edx = MEM32(ecx); /* 0x160CA49D: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x28); /* 0x160CA49F: mov edx, dword ptr [edx + 0x28] */
    eax = ebp + (-0x4); /* 0x160CA4A2: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x160CA4A5: push eax */
    RECOMP_ICALL(edx); /* 0x160CA4A6: call edx */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax), 2 */ /* 0x160CA4A8: test byte ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA4B6; /* 0x160CA4AB: je 0x160ca4b6 */
L_160CA4AD:
    eax = 1; /* 0x160CA4AD: mov eax, 1 */
    esp = ebp; /* 0x160CA4B2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CA4B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA4B5: ret  */
L_160CA4B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA4B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x160CA4B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CA4BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA4BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA4D0u);

L_160CA4D0:
    /* test eax, eax */ /* 0x160CA4D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA4ED; /* 0x160CA4D2: je 0x160ca4ed */
L_160CA4D4:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x160CA4D4: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA4ED; /* 0x160CA4D8: jne 0x160ca4ed */
L_160CA4DA:
    eax = MEM32(eax + 0x48); /* 0x160CA4DA: mov eax, dword ptr [eax + 0x48] */
    /* test eax, eax */ /* 0x160CA4DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA4ED; /* 0x160CA4DF: je 0x160ca4ed */
L_160CA4E1:
    /* cmp MEM32(eax + 0x4), 4 */ /* 0x160CA4E1: cmp dword ptr [eax + 4], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA4ED; /* 0x160CA4E5: jne 0x160ca4ed */
L_160CA4E7:
    eax = 1; /* 0x160CA4E7: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA4EC: ret  */
L_160CA4ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA4ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA4EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA500u);

L_160CA500:
    /* test eax, eax */ /* 0x160CA500: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA51E; /* 0x160CA502: je 0x160ca51e */
L_160CA504:
    /* cmp MEM32(eax + 0x4), 3 */ /* 0x160CA504: cmp dword ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA51E; /* 0x160CA508: jne 0x160ca51e */
L_160CA50A:
    eax = MEM32(eax + 0x48); /* 0x160CA50A: mov eax, dword ptr [eax + 0x48] */
    eax = MEM32(eax + 0x4); /* 0x160CA50D: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFDu; /* 0x160CA510: add eax, -3 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x160CA513: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CA51E; /* 0x160CA516: ja 0x160ca51e */
L_160CA518:
    eax = 1; /* 0x160CA518: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA51D: ret  */
L_160CA51E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA51E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA520: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA530u);

L_160CA530:
    /* cmp eax, 0xEu */ /* 0x160CA530: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CA53D; /* 0x160CA533: jae 0x160ca53d */
L_160CA535:
    eax = MEM32(eax * 4 + 0x161B2DF4); /* 0x160CA535: mov eax, dword ptr [eax*4 + 0x161b2df4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA53C: ret  */
L_160CA53D:
    eax = 0x16038DD8u; /* 0x160CA53D: mov eax, 0x16038dd8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA542: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA550u);

L_160CA550:
    /* cmp eax, 0xEu */ /* 0x160CA550: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_160CA55D; /* 0x160CA553: jae 0x160ca55d */
L_160CA555:
    eax = MEM32(eax * 4 + 0x161B2E2C); /* 0x160CA555: mov eax, dword ptr [eax*4 + 0x161b2e2c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA55C: ret  */
L_160CA55D:
    eax = 0x16038DF4u; /* 0x160CA55D: mov eax, 0x16038df4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA562: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA570u);

L_160CA570:
    edi = edi; /* 0x160CA570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CA572: push ebp */
    ebp = esp; /* 0x160CA573: mov ebp, esp */
    SET_LO8(edx, MEM8(esi)); /* 0x160CA575: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x160CA577: sub esp, 0x64 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x160CA57A: push ebx */
    ebx = eax; /* 0x160CA57B: mov ebx, eax */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x160CA57D: movsx eax, dl */
    /* cmp eax, 0x7Au */ /* 0x160CA580: cmp eax, 0x7a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CA5E4; /* 0x160CA583: ja 0x160ca5e4 */
L_160CA585:
    eax = (uint32_t)MEM8(eax + 0x160CA600); /* 0x160CA585: movzx eax, byte ptr [eax + 0x160ca600] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x160CA5EC)); goto _ljump; }
L_160CA593:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x160CA593: inc ebx */
    _flag_k = FK_INC;
    goto L_160CA59E; /* 0x160CA594: jmp 0x160ca59e */
L_160CA596:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x160CA596: add ebx, 2 */
    _flag_k = FK_ADD;
    goto L_160CA59E; /* 0x160CA599: jmp 0x160ca59e */
L_160CA59B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 3; /* 0x160CA59B: add ebx, 3 */
    _flag_k = FK_ADD;
L_160CA59E:
    /* test LO8(edx), LO8(edx) */ /* 0x160CA59E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA5A8; /* 0x160CA5A0: je 0x160ca5a8 */
L_160CA5A2:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x160CA5A2: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA5E4; /* 0x160CA5A6: jne 0x160ca5e4 */
L_160CA5A8:
    /* test LO8(ebx), 3 */ /* 0x160CA5A8: test bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA5DD; /* 0x160CA5AB: je 0x160ca5dd */
L_160CA5AD:
    edx = MEM32(ecx); /* 0x160CA5AD: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x2C); /* 0x160CA5AF: mov edx, dword ptr [edx + 0x2c] */
    eax = ebp + (-0x60); /* 0x160CA5B2: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x160CA5B5: push eax */
    PUSH32(esp, 0); /* 0x160CA5B6: push 0 */
    RECOMP_ICALL(edx); /* 0x160CA5B8: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CA5BA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA5E4; /* 0x160CA5BC: je 0x160ca5e4 */
L_160CA5BE:
    eax = MEM32(ebp + (-0x60)); /* 0x160CA5BE: mov eax, dword ptr [ebp - 0x60] */
    /* cmp eax, 2 */ /* 0x160CA5C1: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA5CB; /* 0x160CA5C4: je 0x160ca5cb */
L_160CA5C6:
    /* cmp eax, 9 */ /* 0x160CA5C6: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA5E4; /* 0x160CA5C9: jne 0x160ca5e4 */
L_160CA5CB:
    eax = MEM32(ebp + (-0x2C)); /* 0x160CA5CB: mov eax, dword ptr [ebp - 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x30))); /* 0x160CA5CE: imul eax, dword ptr [ebp - 0x30] */
    ecx = ebx; /* 0x160CA5D2: mov ecx, ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x160CA5D4: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x160CA5D6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x160CA5D9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_160CA5E4; /* 0x160CA5DB: ja 0x160ca5e4 */
L_160CA5DD:
    eax = ebx; /* 0x160CA5DD: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x160CA5DF: pop ebx */
    esp = ebp; /* 0x160CA5E0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CA5E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA5E3: ret  */
L_160CA5E4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x160CA5E4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CA5E7: pop ebx */
    esp = ebp; /* 0x160CA5E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x160CA5EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA5EB: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x160CA593u: goto L_160CA593;
      case 0x160CA596u: goto L_160CA596;
      case 0x160CA59Bu: goto L_160CA59B;
      case 0x160CA59Eu: goto L_160CA59E;
      case 0x160CA5E4u: goto L_160CA5E4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_160CA680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA680u);

L_160CA680:
    edi = edi; /* 0x160CA680: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CA682: push ebp */
    ebp = esp; /* 0x160CA683: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x160CA685: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x160CA688: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x160CA689: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x160CA68C: push esi */
    /* test ecx, ecx */ /* 0x160CA68D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA6A3; /* 0x160CA68F: jne 0x160ca6a3 */
L_160CA691:
    eax = MEM32(ebp + 0x8); /* 0x160CA691: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x160CA694: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA69E; /* 0x160CA696: jne 0x160ca69e */
L_160CA698:
    esi = POP32_VAL(esp); /* 0x160CA698: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CA699: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA69A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CA69B: ret 0xc */
L_160CA69E:
    esi = MEM32(eax + 0x50); /* 0x160CA69E: mov esi, dword ptr [eax + 0x50] */
    goto L_160CA6AB; /* 0x160CA6A1: jmp 0x160ca6ab */
L_160CA6A3:
    PUSH32(esp, ebx); /* 0x160CA6A3: push ebx */
    RECOMP_CALL(sub_160CA280); /* 0x160CA6A4: call 0x160ca280 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x160CA6A9: mov esi, eax */
L_160CA6AB:
    PUSH32(esp, edi); /* 0x160CA6AB: push edi */
    /* test esi, esi */ /* 0x160CA6AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA710; /* 0x160CA6AE: je 0x160ca710 */
L_160CA6B0:
    ecx = MEM32(esi + 0x4); /* 0x160CA6B0: mov ecx, dword ptr [esi + 4] */
    eax = 1; /* 0x160CA6B3: mov eax, 1 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x160CA6B8: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x160CA6B8: shl eax, cl */
    /* test ebx, eax */ /* 0x160CA6BA: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA719; /* 0x160CA6BC: jne 0x160ca719 */
L_160CA6BE:
    edi = ebx; /* 0x160CA6BE: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    edi = edi & 0x80000000u; /* 0x160CA6C0: and edi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA6DF; /* 0x160CA6C6: jne 0x160ca6df */
L_160CA6C8:
    /* test MEM8(esi + 0x64), 8 */ /* 0x160CA6C8: test byte ptr [esi + 0x64], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA6DF; /* 0x160CA6CC: je 0x160ca6df */
L_160CA6CE:
    /* cmp MEM32(esi + 0x50), edi */ /* 0x160CA6CE: cmp dword ptr [esi + 0x50], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA6DF; /* 0x160CA6D1: je 0x160ca6df */
L_160CA6D3:
    PUSH32(esp, edi); /* 0x160CA6D3: push edi */
    PUSH32(esp, ebx); /* 0x160CA6D4: push ebx */
    PUSH32(esp, esi); /* 0x160CA6D5: push esi */
    RECOMP_CALL(sub_160CA680); /* 0x160CA6D6: call 0x160ca680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CA6DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA71B; /* 0x160CA6DD: jne 0x160ca71b */
L_160CA6DF:
    eax = MEM32(esi + 0x58); /* 0x160CA6DF: mov eax, dword ptr [esi + 0x58] */
    /* test eax, eax */ /* 0x160CA6E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA6EA; /* 0x160CA6E4: je 0x160ca6ea */
L_160CA6E6:
    esi = eax; /* 0x160CA6E6: mov esi, eax */
    goto L_160CA70C; /* 0x160CA6E8: jmp 0x160ca70c */
L_160CA6EA:
    /* test edi, edi */ /* 0x160CA6EA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA710; /* 0x160CA6EC: jne 0x160ca710 */
L_160CA6EE:
    eax = MEM32(esi + 0x4C); /* 0x160CA6EE: mov eax, dword ptr [esi + 0x4c] */
    /* test eax, eax */ /* 0x160CA6F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA710; /* 0x160CA6F3: je 0x160ca710 */
L_160CA6F5:
    /* cmp MEM32(eax + 0x58), 0 */ /* 0x160CA6F5: cmp dword ptr [eax + 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA709; /* 0x160CA6F9: jne 0x160ca709 */
L_160CA6FB:
    eax = MEM32(eax + 0x4C); /* 0x160CA6FB: mov eax, dword ptr [eax + 0x4c] */
    /* test eax, eax */ /* 0x160CA6FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA6F5; /* 0x160CA700: jne 0x160ca6f5 */
L_160CA702:
    edi = POP32_VAL(esp); /* 0x160CA702: pop edi */
    esi = POP32_VAL(esp); /* 0x160CA703: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CA704: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA705: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CA706: ret 0xc */
L_160CA709:
    esi = MEM32(eax + 0x58); /* 0x160CA709: mov esi, dword ptr [eax + 0x58] */
L_160CA70C:
    /* test esi, esi */ /* 0x160CA70C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA6B0; /* 0x160CA70E: jne 0x160ca6b0 */
L_160CA710:
    edi = POP32_VAL(esp); /* 0x160CA710: pop edi */
    esi = POP32_VAL(esp); /* 0x160CA711: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA712: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x160CA714: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA715: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CA716: ret 0xc */
L_160CA719:
    eax = esi; /* 0x160CA719: mov eax, esi */
L_160CA71B:
    edi = POP32_VAL(esp); /* 0x160CA71B: pop edi */
    esi = POP32_VAL(esp); /* 0x160CA71C: pop esi */
    ebx = POP32_VAL(esp); /* 0x160CA71D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CA71E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x160CA71F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_160CA730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA730u);

L_160CA730:
    eax = MEM32(ecx + 0x68); /* 0x160CA730: mov eax, dword ptr [ecx + 0x68] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA733: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA740u);

L_160CA740:
    RECOMP_CALL(sub_160C9E80); /* 0x160CA740: call 0x160c9e80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax + 0x9C)) << 24; _flag_b = (uint32_t)(0xF8u) << 24;
    MEM8(eax + 0x9C) = (uint8_t)(MEM8(eax + 0x9C) & 0xF8u); /* 0x160CA745: and byte ptr [eax + 0x9c], 0xf8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = 2; /* 0x160CA74C: mov ecx, 2 */
    _flag_a = (uint32_t)((MEM8(eax + 0x64) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x64) | LO8(ecx))) << 24;
    MEM8(eax + 0x64) = (uint8_t)(MEM8(eax + 0x64) | LO8(ecx)); /* 0x160CA751: or byte ptr [eax + 0x64], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(eax + 0x4) = ecx; /* 0x160CA754: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CA757: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x16038E38u; /* 0x160CA759: mov dword ptr [eax], 0x16038e38 */
    MEM32(eax + 0x34) = 0xFFFFFFFFu; /* 0x160CA75F: mov dword ptr [eax + 0x34], 0xffffffff */
    MEM32(eax + 0x68) = ecx; /* 0x160CA766: mov dword ptr [eax + 0x68], ecx */
    MEM32(eax + 0x6C) = ecx; /* 0x160CA769: mov dword ptr [eax + 0x6c], ecx */
    MEM32(eax + 0x70) = ecx; /* 0x160CA76C: mov dword ptr [eax + 0x70], ecx */
    MEM32(eax + 0x74) = ecx; /* 0x160CA76F: mov dword ptr [eax + 0x74], ecx */
    MEM32(eax + 0x78) = ecx; /* 0x160CA772: mov dword ptr [eax + 0x78], ecx */
    MEM32(eax + 0x7C) = ecx; /* 0x160CA775: mov dword ptr [eax + 0x7c], ecx */
    MEM32(eax + 0x80) = ecx; /* 0x160CA778: mov dword ptr [eax + 0x80], ecx */
    MEM32(eax + 0x84) = ecx; /* 0x160CA77E: mov dword ptr [eax + 0x84], ecx */
    MEM32(eax + 0x88) = ecx; /* 0x160CA784: mov dword ptr [eax + 0x88], ecx */
    MEM32(eax + 0x8C) = ecx; /* 0x160CA78A: mov dword ptr [eax + 0x8c], ecx */
    MEM32(eax + 0x90) = ecx; /* 0x160CA790: mov dword ptr [eax + 0x90], ecx */
    MEM32(eax + 0x94) = ecx; /* 0x160CA796: mov dword ptr [eax + 0x94], ecx */
    MEM32(eax + 0x98) = ecx; /* 0x160CA79C: mov dword ptr [eax + 0x98], ecx */
    MEM32(eax + 0xA0) = ecx; /* 0x160CA7A2: mov dword ptr [eax + 0xa0], ecx */
    MEM32(eax + 0xA4) = ecx; /* 0x160CA7A8: mov dword ptr [eax + 0xa4], ecx */
    MEM32(eax + 0xA8) = ecx; /* 0x160CA7AE: mov dword ptr [eax + 0xa8], ecx */
    MEM32(eax + 0xAC) = ecx; /* 0x160CA7B4: mov dword ptr [eax + 0xac], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA7BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA7C0u);

L_160CA7C0:
    ecx = MEM32(esi + 0x7C); /* 0x160CA7C0: mov ecx, dword ptr [esi + 0x7c] */
    PUSH32(esp, ebx); /* 0x160CA7C3: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x160CA7C4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x160CA7C6: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA7D8; /* 0x160CA7C8: je 0x160ca7d8 */
L_160CA7CA:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CA7CA: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CA7D8; /* 0x160CA7CE: jne 0x160ca7d8 */
L_160CA7D0:
    eax = MEM32(ecx); /* 0x160CA7D0: mov eax, dword ptr [ecx] */
    edx = MEM32(eax); /* 0x160CA7D2: mov edx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x160CA7D4: push 1 */
    RECOMP_ICALL(edx); /* 0x160CA7D6: call edx */
    RECOMP_FLAGS_IN();
L_160CA7D8:
    eax = MEM32(edi + 0x7C); /* 0x160CA7D8: mov eax, dword ptr [edi + 0x7c] */
    MEM32(esi + 0x7C) = eax; /* 0x160CA7DB: mov dword ptr [esi + 0x7c], eax */
    MEM32(edi + 0x7C) = ebx; /* 0x160CA7DE: mov dword ptr [edi + 0x7c], ebx */
    ecx = MEM32(esi + 0x80); /* 0x160CA7E1: mov ecx, dword ptr [esi + 0x80] */
    /* cmp ecx, ebx */ /* 0x160CA7E7: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA7F9; /* 0x160CA7E9: je 0x160ca7f9 */
L_160CA7EB:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CA7EB: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CA7F9; /* 0x160CA7EF: jne 0x160ca7f9 */
L_160CA7F1:
    edx = MEM32(ecx); /* 0x160CA7F1: mov edx, dword ptr [ecx] */
    eax = MEM32(edx); /* 0x160CA7F3: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160CA7F5: push 1 */
    RECOMP_ICALL(eax); /* 0x160CA7F7: call eax */
    RECOMP_FLAGS_IN();
L_160CA7F9:
    ecx = MEM32(edi + 0x80); /* 0x160CA7F9: mov ecx, dword ptr [edi + 0x80] */
    MEM32(esi + 0x80) = ecx; /* 0x160CA7FF: mov dword ptr [esi + 0x80], ecx */
    MEM32(edi + 0x80) = ebx; /* 0x160CA805: mov dword ptr [edi + 0x80], ebx */
    ecx = MEM32(esi + 0x84); /* 0x160CA80B: mov ecx, dword ptr [esi + 0x84] */
    /* cmp ecx, ebx */ /* 0x160CA811: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA823; /* 0x160CA813: je 0x160ca823 */
L_160CA815:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CA815: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CA823; /* 0x160CA819: jne 0x160ca823 */
L_160CA81B:
    edx = MEM32(ecx); /* 0x160CA81B: mov edx, dword ptr [ecx] */
    eax = MEM32(edx); /* 0x160CA81D: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160CA81F: push 1 */
    RECOMP_ICALL(eax); /* 0x160CA821: call eax */
    RECOMP_FLAGS_IN();
L_160CA823:
    ecx = MEM32(edi + 0x84); /* 0x160CA823: mov ecx, dword ptr [edi + 0x84] */
    MEM32(esi + 0x84) = ecx; /* 0x160CA829: mov dword ptr [esi + 0x84], ecx */
    MEM32(edi + 0x84) = ebx; /* 0x160CA82F: mov dword ptr [edi + 0x84], ebx */
    ecx = MEM32(esi + 0x88); /* 0x160CA835: mov ecx, dword ptr [esi + 0x88] */
    /* cmp ecx, ebx */ /* 0x160CA83B: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA84D; /* 0x160CA83D: je 0x160ca84d */
L_160CA83F:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 0xFFFFFFFFu; /* 0x160CA83F: add dword ptr [ecx + 0x10], -1 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_160CA84D; /* 0x160CA843: jne 0x160ca84d */
L_160CA845:
    edx = MEM32(ecx); /* 0x160CA845: mov edx, dword ptr [ecx] */
    eax = MEM32(edx); /* 0x160CA847: mov eax, dword ptr [edx] */
    PUSH32(esp, 1); /* 0x160CA849: push 1 */
    RECOMP_ICALL(eax); /* 0x160CA84B: call eax */
    RECOMP_FLAGS_IN();
L_160CA84D:
    ecx = MEM32(edi + 0x88); /* 0x160CA84D: mov ecx, dword ptr [edi + 0x88] */
    MEM32(esi + 0x88) = ecx; /* 0x160CA853: mov dword ptr [esi + 0x88], ecx */
    MEM32(edi + 0x88) = ebx; /* 0x160CA859: mov dword ptr [edi + 0x88], ebx */
    ebx = POP32_VAL(esp); /* 0x160CA85F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA860: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA870u);

L_160CA870:
    eax = ecx; /* 0x160CA870: mov eax, ecx */
    MEM32(eax) = 0x16038E38u; /* 0x160CA872: mov dword ptr [eax], 0x16038e38 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CA878: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_160CA880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA880u);

L_160CA880:
    eax = MEM32(ecx + 0x48); /* 0x160CA880: mov eax, dword ptr [ecx + 0x48] */
    /* test eax, eax */ /* 0x160CA883: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA8A0; /* 0x160CA885: je 0x160ca8a0 */
L_160CA887:
    eax = MEM32(eax + 0x4); /* 0x160CA887: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x160CA88A: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_160CA89A; /* 0x160CA88D: je 0x160ca89a */
L_160CA88F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x160CA88F: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_160CA8A0; /* 0x160CA892: jne 0x160ca8a0 */
L_160CA894:
    eax = 0xBu; /* 0x160CA894: mov eax, 0xb */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA899: ret  */
L_160CA89A:
    eax = 0xAu; /* 0x160CA89A: mov eax, 0xa */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA89F: ret  */
L_160CA8A0:
    eax = 0xDu; /* 0x160CA8A0: mov eax, 0xd */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA8A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA8B0u);

L_160CA8B0:
    RECOMP_CALL(sub_160C9E80); /* 0x160CA8B0: call 0x160c9e80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM8(eax + 0xB4)) << 24; _flag_b = (uint32_t)(0xF0u) << 24;
    MEM8(eax + 0xB4) = (uint8_t)(MEM8(eax + 0xB4) & 0xF0u); /* 0x160CA8B5: and byte ptr [eax + 0xb4], 0xf0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CA8BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x160CA8BE: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x16038E24u; /* 0x160CA8C1: mov dword ptr [eax], 0x16038e24 */
    MEM32(eax + 0x4) = 4; /* 0x160CA8C7: mov dword ptr [eax + 4], 4 */
    MEM32(eax + 0x34) = edx; /* 0x160CA8CE: mov dword ptr [eax + 0x34], edx */
    MEM32(eax + 0x68) = edx; /* 0x160CA8D1: mov dword ptr [eax + 0x68], edx */
    MEM32(eax + 0x6C) = ecx; /* 0x160CA8D4: mov dword ptr [eax + 0x6c], ecx */
    MEM32(eax + 0x70) = edx; /* 0x160CA8D7: mov dword ptr [eax + 0x70], edx */
    MEM32(eax + 0x78) = ecx; /* 0x160CA8DA: mov dword ptr [eax + 0x78], ecx */
    MEM32(eax + 0x7C) = ecx; /* 0x160CA8DD: mov dword ptr [eax + 0x7c], ecx */
    MEM32(eax + 0x80) = ecx; /* 0x160CA8E0: mov dword ptr [eax + 0x80], ecx */
    MEM32(eax + 0x84) = ecx; /* 0x160CA8E6: mov dword ptr [eax + 0x84], ecx */
    MEM32(eax + 0x88) = ecx; /* 0x160CA8EC: mov dword ptr [eax + 0x88], ecx */
    MEM32(eax + 0x8C) = ecx; /* 0x160CA8F2: mov dword ptr [eax + 0x8c], ecx */
    MEM32(eax + 0x90) = ecx; /* 0x160CA8F8: mov dword ptr [eax + 0x90], ecx */
    MEM32(eax + 0x94) = ecx; /* 0x160CA8FE: mov dword ptr [eax + 0x94], ecx */
    MEM32(eax + 0x98) = ecx; /* 0x160CA904: mov dword ptr [eax + 0x98], ecx */
    MEM32(eax + 0xA8) = ecx; /* 0x160CA90A: mov dword ptr [eax + 0xa8], ecx */
    MEM32(eax + 0xAC) = ecx; /* 0x160CA910: mov dword ptr [eax + 0xac], ecx */
    MEM32(eax + 0xB0) = ecx; /* 0x160CA916: mov dword ptr [eax + 0xb0], ecx */
    MEM8(eax + 0xB5) = (uint8_t)(LO8(ecx)); /* 0x160CA91C: mov byte ptr [eax + 0xb5], cl */
    MEM32(eax + 0xA4) = ecx; /* 0x160CA922: mov dword ptr [eax + 0xa4], ecx */
    MEM32(eax + 0x9C) = eax; /* 0x160CA928: mov dword ptr [eax + 0x9c], eax */
    MEM32(eax + 0xA0) = ecx; /* 0x160CA92E: mov dword ptr [eax + 0xa0], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA934: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA940u);

L_160CA940:
    eax = 0xCu; /* 0x160CA940: mov eax, 0xc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA945: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA950u);

L_160CA950:
    /* cmp MEM32(ecx + 0x4), 4 */ /* 0x160CA950: cmp dword ptr [ecx + 4], 4 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA959; /* 0x160CA954: je 0x160ca959 */
L_160CA956:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CA956: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA958: ret  */
L_160CA959:
    PUSH32(esp, esi); /* 0x160CA959: push esi */
    esi = MEM32(eax + 0x50); /* 0x160CA95A: mov esi, dword ptr [eax + 0x50] */
    eax = MEM32(eax + 0xA4); /* 0x160CA95D: mov eax, dword ptr [eax + 0xa4] */
    PUSH32(esp, edi); /* 0x160CA963: push edi */
    edi = MEM32(ecx + 0x50); /* 0x160CA964: mov edi, dword ptr [ecx + 0x50] */
    /* test eax, eax */ /* 0x160CA967: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA972; /* 0x160CA969: je 0x160ca972 */
L_160CA96B:
    /* cmp esi, eax */ /* 0x160CA96B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA972; /* 0x160CA96D: jne 0x160ca972 */
L_160CA96F:
    esi = MEM32(esi + 0x58); /* 0x160CA96F: mov esi, dword ptr [esi + 0x58] */
L_160CA972:
    ecx = MEM32(ecx + 0xA4); /* 0x160CA972: mov ecx, dword ptr [ecx + 0xa4] */
    /* test ecx, ecx */ /* 0x160CA978: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA983; /* 0x160CA97A: je 0x160ca983 */
L_160CA97C:
    /* cmp edi, ecx */ /* 0x160CA97C: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA983; /* 0x160CA97E: jne 0x160ca983 */
L_160CA980:
    edi = MEM32(edi + 0x58); /* 0x160CA980: mov edi, dword ptr [edi + 0x58] */
L_160CA983:
    /* test esi, esi */ /* 0x160CA983: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA9B8; /* 0x160CA985: je 0x160ca9b8 */
L_160CA987:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x160CA987: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA9C6; /* 0x160CA98B: je 0x160ca9c6 */
L_160CA98D:
    /* test edi, edi */ /* 0x160CA98D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA9C1; /* 0x160CA98F: je 0x160ca9c1 */
L_160CA991:
    eax = MEM32(esi + 0x68); /* 0x160CA991: mov eax, dword ptr [esi + 0x68] */
    /* cmp eax, MEM32(edi + 0x68) */ /* 0x160CA994: cmp eax, dword ptr [edi + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x68));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA9C1; /* 0x160CA997: jne 0x160ca9c1 */
L_160CA999:
    ecx = MEM32(esi + 0x6C); /* 0x160CA999: mov ecx, dword ptr [esi + 0x6c] */
    /* cmp ecx, MEM32(edi + 0x6C) */ /* 0x160CA99C: cmp ecx, dword ptr [edi + 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x6C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CA9C1; /* 0x160CA99F: jne 0x160ca9c1 */
L_160CA9A1:
    ecx = MEM32(esi + 0x48); /* 0x160CA9A1: mov ecx, dword ptr [esi + 0x48] */
    edx = MEM32(ecx); /* 0x160CA9A4: mov edx, dword ptr [ecx] */
    eax = MEM32(edi + 0x48); /* 0x160CA9A6: mov eax, dword ptr [edi + 0x48] */
    edx = MEM32(edx + 0x30); /* 0x160CA9A9: mov edx, dword ptr [edx + 0x30] */
    PUSH32(esp, eax); /* 0x160CA9AC: push eax */
    RECOMP_ICALL(edx); /* 0x160CA9AD: call edx */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x160CA9AF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA9C1; /* 0x160CA9B1: je 0x160ca9c1 */
L_160CA9B3:
    esi = MEM32(esi + 0x58); /* 0x160CA9B3: mov esi, dword ptr [esi + 0x58] */
    RECOMP_BACKEDGE();
    goto L_160CA980; /* 0x160CA9B6: jmp 0x160ca980 */
L_160CA9B8:
    /* test edi, edi */ /* 0x160CA9B8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CA9CA; /* 0x160CA9BA: jne 0x160ca9ca */
L_160CA9BC:
    edi = POP32_VAL(esp); /* 0x160CA9BC: pop edi */
    SET_LO8(eax, 1); /* 0x160CA9BD: mov al, 1 */
    esi = POP32_VAL(esp); /* 0x160CA9BF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA9C0: ret  */
L_160CA9C1:
    edi = POP32_VAL(esp); /* 0x160CA9C1: pop edi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x160CA9C2: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    esi = POP32_VAL(esp); /* 0x160CA9C4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA9C5: ret  */
L_160CA9C6:
    /* test edi, edi */ /* 0x160CA9C6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CA9D5; /* 0x160CA9C8: je 0x160ca9d5 */
L_160CA9CA:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x160CA9CA: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CA9D5; /* 0x160CA9CE: je 0x160ca9d5 */
L_160CA9D0:
    edi = POP32_VAL(esp); /* 0x160CA9D0: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CA9D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x160CA9D3: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA9D4: ret  */
L_160CA9D5:
    edi = POP32_VAL(esp); /* 0x160CA9D5: pop edi */
    eax = 1; /* 0x160CA9D6: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x160CA9DB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CA9DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CA9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CA9F0u);

L_160CA9F0:
    eax = MEM32(esi + 0x9C); /* 0x160CA9F0: mov eax, dword ptr [esi + 0x9c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CA9F6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x160CA9F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAA2E; /* 0x160CA9FA: je 0x160caa2e */
L_160CA9FC:
    esp = esp; /* 0x160CA9FC: lea esp, [esp] */
L_160CAA00:
    /* cmp eax, edx */ /* 0x160CAA00: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_160CAA11; /* 0x160CAA02: je 0x160caa11 */
L_160CAA04:
    ecx = eax; /* 0x160CAA04: mov ecx, eax */
    eax = MEM32(eax + 0xA0); /* 0x160CAA06: mov eax, dword ptr [eax + 0xa0] */
    /* test eax, eax */ /* 0x160CAA0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAA00; /* 0x160CAA0E: jne 0x160caa00 */
L_160CAA10:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAA10: ret  */
L_160CAA11:
    /* test ecx, ecx */ /* 0x160CAA11: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAA22; /* 0x160CAA13: jne 0x160caa22 */
L_160CAA15:
    eax = MEM32(eax + 0xA0); /* 0x160CAA15: mov eax, dword ptr [eax + 0xa0] */
    MEM32(esi + 0x9C) = eax; /* 0x160CAA1B: mov dword ptr [esi + 0x9c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAA21: ret  */
L_160CAA22:
    edx = MEM32(eax + 0xA0); /* 0x160CAA22: mov edx, dword ptr [eax + 0xa0] */
    MEM32(ecx + 0xA0) = edx; /* 0x160CAA28: mov dword ptr [ecx + 0xa0], edx */
L_160CAA2E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAA2E: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CAA40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAA40u);

L_160CAA40:
    edi = edi; /* 0x160CAA40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CAA42: push ebp */
    ebp = esp; /* 0x160CAA43: mov ebp, esp */
    PUSH32(esp, esi); /* 0x160CAA45: push esi */
    esi = MEM32(ebx + 0xAC); /* 0x160CAA46: mov esi, dword ptr [ebx + 0xac] */
    PUSH32(esp, edi); /* 0x160CAA4C: push edi */
    /* test esi, esi */ /* 0x160CAA4D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAAAA; /* 0x160CAA4F: je 0x160caaaa */
L_160CAA51:
    eax = MEM32(ebp + 0x8); /* 0x160CAA51: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x160CAA54: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAAA3; /* 0x160CAA57: jne 0x160caaa3 */
L_160CAA59:
    eax = MEM32(0x161B4344); /* 0x160CAA59: mov eax, dword ptr [0x161b4344] */
    edi = MEM32(esi); /* 0x160CAA5E: mov edi, dword ptr [esi] */
    /* test eax, eax */ /* 0x160CAA60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_160CAA68; /* 0x160CAA62: jge 0x160caa68 */
L_160CAA64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAA64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_160CAA6F; /* 0x160CAA66: jmp 0x160caa6f */
L_160CAA68:
    PUSH32(esp, eax); /* 0x160CAA68: push eax */
    RECOMP_ICALL(MEM32(0x16001068)); /* 0x160CAA69: call dword ptr [0x16001068] */
    RECOMP_FLAGS_IN();
L_160CAA6F:
    ecx = MEM32(eax + 0x4); /* 0x160CAA6F: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x160CAA72: push 0x10 */
    PUSH32(esp, 0xCu); /* 0x160CAA74: push 0xc */
    RECOMP_CALL(sub_161A8F81); /* 0x160CAA76: call 0x161a8f81 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x160CAA7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAA86; /* 0x160CAA7D: jne 0x160caa86 */
L_160CAA7F:
    eax = 0x8007000Eu; /* 0x160CAA7F: mov eax, 0x8007000e */
    goto L_160CAA9F; /* 0x160CAA84: jmp 0x160caa9f */
L_160CAA86:
    ecx = MEM32(ebp + 0xC); /* 0x160CAA86: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x160CAA89: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = ecx; /* 0x160CAA8B: mov dword ptr [eax + 4], ecx */
    edx = MEM32(ebx + 0xAC); /* 0x160CAA8E: mov edx, dword ptr [ebx + 0xac] */
    MEM32(eax + 0x8) = edx; /* 0x160CAA94: mov dword ptr [eax + 8], edx */
    MEM32(ebx + 0xAC) = eax; /* 0x160CAA97: mov dword ptr [ebx + 0xac], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAA9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CAA9F:
    /* test eax, eax */ /* 0x160CAA9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_160CAAAC; /* 0x160CAAA1: jl 0x160caaac */
L_160CAAA3:
    esi = MEM32(esi + 0x8); /* 0x160CAAA3: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x160CAAA6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAA51; /* 0x160CAAA8: jne 0x160caa51 */
L_160CAAAA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAAAA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_160CAAAC:
    edi = POP32_VAL(esp); /* 0x160CAAAC: pop edi */
    esi = POP32_VAL(esp); /* 0x160CAAAD: pop esi */
    ebp = POP32_VAL(esp); /* 0x160CAAAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x160CAAAF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_160CAAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAAC0u);

L_160CAAC0:
    RECOMP_CALL(sub_160C9E80); /* 0x160CAAC0: call 0x160c9e80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM8(eax + 0x64) | 8)) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x64) | 8)) << 24;
    MEM8(eax + 0x64) = (uint8_t)(MEM8(eax + 0x64) | 8); /* 0x160CAAC5: or byte ptr [eax + 0x64], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CAAC9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x68) = ecx; /* 0x160CAACB: mov dword ptr [eax + 0x68], ecx */
    MEM32(eax) = 0x16038E4Cu; /* 0x160CAACE: mov dword ptr [eax], 0x16038e4c */
    MEM32(eax + 0x4) = 5; /* 0x160CAAD4: mov dword ptr [eax + 4], 5 */
    MEM32(eax + 0x70) = ecx; /* 0x160CAADB: mov dword ptr [eax + 0x70], ecx */
    MEM32(eax + 0x74) = ecx; /* 0x160CAADE: mov dword ptr [eax + 0x74], ecx */
    MEM32(eax + 0x78) = ecx; /* 0x160CAAE1: mov dword ptr [eax + 0x78], ecx */
    MEM32(eax + 0x7C) = ecx; /* 0x160CAAE4: mov dword ptr [eax + 0x7c], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAAE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CAAF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAAF0u);

L_160CAAF0:
    eax = MEM32(eax + 0x4C); /* 0x160CAAF0: mov eax, dword ptr [eax + 0x4c] */
    /* test eax, eax */ /* 0x160CAAF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAB0F; /* 0x160CAAF5: je 0x160cab0f */
L_160CAAF7:
    ecx = 3; /* 0x160CAAF7: mov ecx, 3 */
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x160CAAFC: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAB0F; /* 0x160CAAFF: jne 0x160cab0f */
L_160CAB01:
    edx = MEM32(eax + 0x48); /* 0x160CAB01: mov edx, dword ptr [eax + 0x48] */
    /* cmp MEM32(edx + 0x4), ecx */ /* 0x160CAB04: cmp dword ptr [edx + 4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAB0F; /* 0x160CAB07: jne 0x160cab0f */
L_160CAB09:
    eax = 1; /* 0x160CAB09: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAB0E: ret  */
L_160CAB0F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAB0F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAB11: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CAB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAB20u);

L_160CAB20:
    eax = MEM32(edx + 0x68); /* 0x160CAB20: mov eax, dword ptr [edx + 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x160CAB23: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x160CAB26: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x160CAB28: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAB4B; /* 0x160CAB2A: jne 0x160cab4b */
L_160CAB2C:
    eax = MEM32(edx + 0x4C); /* 0x160CAB2C: mov eax, dword ptr [edx + 0x4c] */
    /* test eax, eax */ /* 0x160CAB2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAB4B; /* 0x160CAB31: je 0x160cab4b */
L_160CAB33:
    ecx = 3; /* 0x160CAB33: mov ecx, 3 */
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x160CAB38: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAB4B; /* 0x160CAB3B: jne 0x160cab4b */
L_160CAB3D:
    eax = MEM32(eax + 0x48); /* 0x160CAB3D: mov eax, dword ptr [eax + 0x48] */
    /* cmp MEM32(eax + 0x4), ecx */ /* 0x160CAB40: cmp dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_160CAB4B; /* 0x160CAB43: jne 0x160cab4b */
L_160CAB45:
    eax = 1; /* 0x160CAB45: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAB4A: ret  */
L_160CAB4B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAB4B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x160CAB4D: ret  */
    RECOMP_REGS_OUT();
}

void sub_160CAB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x160CAB60u);

L_160CAB60:
    edi = edi; /* 0x160CAB60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x160CAB62: push ebp */
    ebp = esp; /* 0x160CAB63: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x160CAB65: push ebx */
    PUSH32(esp, esi); /* 0x160CAB66: push esi */
    esi = MEM32(ebp + 0x8); /* 0x160CAB67: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x160CAB6A: push edi */
    edi = eax; /* 0x160CAB6B: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x160CAB6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x160CAB6F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAB9A; /* 0x160CAB71: je 0x160cab9a */
L_160CAB73:
    /* test edi, edi */ /* 0x160CAB73: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAB96; /* 0x160CAB75: je 0x160cab96 */
L_160CAB77:
    SET_LO8(ebx, MEM8(esi)); /* 0x160CAB77: mov bl, byte ptr [esi] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x160CAB79: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_160CAB96; /* 0x160CAB7B: je 0x160cab96 */
L_160CAB7D:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x160CAB7D: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x160CAB7F: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x160CAB80: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x160CAB81: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x160CAB82: dec edi */
    _flag_k = FK_DEC;
    /* test edx, edx */ /* 0x160CAB83: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CAB73; /* 0x160CAB85: jne 0x160cab73 */
L_160CAB87:
    edi = POP32_VAL(esp); /* 0x160CAB87: pop edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160CAB88: dec ecx */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x160CAB89: pop esi */
    eax = 0x8007007Au; /* 0x160CAB8A: mov eax, 0x8007007a */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x160CAB8F: mov byte ptr [ecx], dl */
    ebx = POP32_VAL(esp); /* 0x160CAB91: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CAB92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CAB93: ret 4 */
L_160CAB96:
    /* test edx, edx */ /* 0x160CAB96: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_160CABAA; /* 0x160CAB98: jne 0x160cabaa */
L_160CAB9A:
    edi = POP32_VAL(esp); /* 0x160CAB9A: pop edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x160CAB9B: dec ecx */
    _flag_k = FK_DEC;
    esi = POP32_VAL(esp); /* 0x160CAB9C: pop esi */
    eax = 0x8007007Au; /* 0x160CAB9D: mov eax, 0x8007007a */
    MEM8(ecx) = (uint8_t)(0); /* 0x160CABA2: mov byte ptr [ecx], 0 */
    ebx = POP32_VAL(esp); /* 0x160CABA5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CABA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CABA7: ret 4 */
L_160CABAA:
    edi = POP32_VAL(esp); /* 0x160CABAA: pop edi */
    esi = POP32_VAL(esp); /* 0x160CABAB: pop esi */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x160CABAC: mov byte ptr [ecx], al */
    ebx = POP32_VAL(esp); /* 0x160CABAE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x160CABAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x160CABB0: ret 4 */
    RECOMP_REGS_OUT();
}
