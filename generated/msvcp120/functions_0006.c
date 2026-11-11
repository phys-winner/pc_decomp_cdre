#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_11009D1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009D1Eu);

L_11009D1E:
    PUSH32(esp, 0x28u); /* 0x11009D1E: push 0x28 */
    eax = 0x1103C0FFu; /* 0x11009D20: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x11009D25: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11009D2A: mov esi, ecx */
    eax = esi + 0xB8; /* 0x11009D2C: lea eax, [esi + 0xb8] */
    PUSH32(esp, eax); /* 0x11009D32: push eax */
    ecx = ebp + (-0x34); /* 0x11009D33: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x11009D36: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009D3C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x11009D40: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x11009D43: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009D70; /* 0x11009D45: jne 0x11009d70 */
L_11009D47:
    eax = ebp + 0xC; /* 0x11009D47: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x11009D4A: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x11009D51: push eax */
    ecx = ebp + (-0x18); /* 0x11009D52: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009D55: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x11009D5B: push 0x11045568 */
    eax = ebp + (-0x18); /* 0x11009D60: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x11009D63: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, eax); /* 0x11009D6A: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009D6B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11009D70:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x11009D70: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009D87; /* 0x11009D74: je 0x11009d87 */
L_11009D76:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009D76: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11009D7A: lea ecx, [ebp - 0x34] */
L_11009D7D:
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x11009D7D: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x11009D83: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_11009DAB; /* 0x11009D85: jmp 0x11009dab */
L_11009D87:
    eax = MEM32(esi); /* 0x11009D87: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11009D89: mov ecx, esi */
    ebx = MEM32(ebp + 0x8); /* 0x11009D8B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x11009D8E: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x11009D8F: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009D92: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11009D96: lea ecx, [ebp - 0x34] */
    /* test LO8(eax), LO8(eax) */ /* 0x11009D99: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009D7D; /* 0x11009D9B: je 0x11009d7d */
L_11009D9D:
    MEM32(esi + 0x4) = edi; /* 0x11009D9D: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = ebx; /* 0x11009DA0: mov dword ptr [esi + 8], ebx */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x11009DA3: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x11009DA9: mov al, 1 */
L_11009DAB:
    RECOMP_CALL(sub_1103B340); /* 0x11009DAB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11009DB0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11009DB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009DB3u);

L_11009DB3:
    PUSH32(esp, 0x28u); /* 0x11009DB3: push 0x28 */
    eax = 0x1103C0FFu; /* 0x11009DB5: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x11009DBA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11009DBF: mov esi, ecx */
    eax = esi + 0xB8; /* 0x11009DC1: lea eax, [esi + 0xb8] */
    PUSH32(esp, eax); /* 0x11009DC7: push eax */
    ecx = ebp + (-0x34); /* 0x11009DC8: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x11009DCB: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009DD1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x11009DD5: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x11009DD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009E05; /* 0x11009DDA: jne 0x11009e05 */
L_11009DDC:
    eax = ebp + 0xC; /* 0x11009DDC: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x11009DDF: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x11009DE6: push eax */
    ecx = ebp + (-0x18); /* 0x11009DE7: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009DEA: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x11009DF0: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, 0x11045568u); /* 0x11009DF7: push 0x11045568 */
L_11009DFC:
    eax = ebp + (-0x18); /* 0x11009DFC: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x11009DFF: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009E00: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11009E05:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x11009E05: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009E42; /* 0x11009E09: je 0x11009e42 */
L_11009E0B:
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x11009E0B: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11009E42; /* 0x11009E0E: jne 0x11009e42 */
L_11009E10:
    eax = MEM32(esi); /* 0x11009E10: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11009E12: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11009E14: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x11009E17: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x11009E1A: mov edi, eax */
    /* test edi, edi */ /* 0x11009E1C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11009E2B; /* 0x11009E1E: je 0x11009e2b */
L_11009E20:
    edx = MEM32(esi); /* 0x11009E20: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x11009E22: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11009E24: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(edx + 0x40)); /* 0x11009E28: call dword ptr [edx + 0x40] */
    RECOMP_FLAGS_IN();
L_11009E2B:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009E2B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11009E2F: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x11009E32: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x11009E38: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x11009E3A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11009E3F: ret 8 */
L_11009E42:
    ecx = ebp + (-0x18); /* 0x11009E42: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x11069210)); /* 0x11009E45: call dword ptr [0x11069210] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110454B8u); /* 0x11009E4B: push 0x110454b8 */
    RECOMP_BACKEDGE();
    goto L_11009DFC; /* 0x11009E50: jmp 0x11009dfc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009E52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009E52u);

L_11009E52:
    PUSH32(esp, 0x28u); /* 0x11009E52: push 0x28 */
    eax = 0x1103C0FFu; /* 0x11009E54: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x11009E59: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x11009E5E: mov esi, ecx */
    eax = esi + 0xB8; /* 0x11009E60: lea eax, [esi + 0xb8] */
    PUSH32(esp, eax); /* 0x11009E66: push eax */
    ecx = ebp + (-0x34); /* 0x11009E67: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x11009E6A: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009E70: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x11009E74: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x11009E77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_11009EA4; /* 0x11009E79: jne 0x11009ea4 */
L_11009E7B:
    eax = ebp + 0xC; /* 0x11009E7B: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x11003944u; /* 0x11009E7E: mov dword ptr [ebp + 0xc], 0x11003944 */
    PUSH32(esp, eax); /* 0x11009E85: push eax */
    ecx = ebp + (-0x18); /* 0x11009E86: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x11009E89: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = 0x11001470u; /* 0x11009E8F: mov dword ptr [ebp - 0x18], 0x11001470 */
    PUSH32(esp, 0x11045568u); /* 0x11009E96: push 0x11045568 */
L_11009E9B:
    eax = ebp + (-0x18); /* 0x11009E9B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x11009E9E: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009E9F: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_11009EA4:
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x11009EA4: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009EB9; /* 0x11009EA7: je 0x11009eb9 */
L_11009EA9:
    ecx = ebp + (-0x18); /* 0x11009EA9: lea ecx, [ebp - 0x18] */
    RECOMP_ICALL(MEM32(0x11069210)); /* 0x11009EAC: call dword ptr [0x11069210] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x110454B8u); /* 0x11009EB2: push 0x110454b8 */
    RECOMP_BACKEDGE();
    goto L_11009E9B; /* 0x11009EB7: jmp 0x11009e9b */
L_11009EB9:
    eax = MEM32(esi); /* 0x11009EB9: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11009EBB: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11009EBD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x11009EC0: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x11009EC3: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x11009EC5: mov ecx, esi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x11009EC7: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x11009ECB: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x11009ECE: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x11009ED2: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x11009ED5: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x11009EDB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x11009EE0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_11009EE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009EE3u);

L_11009EE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x11009EE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xE0u; /* 0x11009EE5: add ecx, 0xe0 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x11009EEB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x11009EEC: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009EF0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009EF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009EF3u);

L_11009EF3:
    PUSH32(esp, 0x1Cu); /* 0x11009EF3: push 0x1c */
    eax = 0x1103C123u; /* 0x11009EF5: mov eax, 0x1103c123 */
    RECOMP_CALL(sub_1103B372); /* 0x11009EFA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11009EFF: mov edi, ecx */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x11009F01: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x11009F04: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11009F34; /* 0x11009F08: je 0x11009f34 */
L_11009F0A:
    eax = edi + 0xB8; /* 0x11009F0A: lea eax, [edi + 0xb8] */
    PUSH32(esp, eax); /* 0x11009F10: push eax */
    ecx = ebp + (-0x28); /* 0x11009F11: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x11009F14: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x11009F1A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x11009F1E: mov ecx, edi */
    eax = MEM32(edi); /* 0x11009F20: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x11009F22: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x11009F25: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x11009F28: lea ecx, [ebp - 0x28] */
    MEM32(ebp + (-0x4)) = esi; /* 0x11009F2B: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x11009F2E: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
L_11009F34:
    eax = edi + 0xE0; /* 0x11009F34: lea eax, [edi + 0xe0] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + esi; esi = _old; MEM32(eax) = _sum; } /* 0x11009F3A: lock xadd dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x11009F3E: dec esi */
    _flag_k = FK_DEC;
    RECOMP_CALL(sub_1103B340); /* 0x11009F3F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009F44: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009F47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009F47u);

L_11009F47:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x11009F47: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11009F54; /* 0x11009F4B: jne 0x11009f54 */
L_11009F4D:
    eax = MEM32(ecx); /* 0x11009F4D: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x11009F4F: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x11009F51: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
L_11009F54:
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009F54: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009F57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009F57u);

L_11009F57:
    PUSH32(esp, ebp); /* 0x11009F57: push ebp */
    ebp = esp; /* 0x11009F58: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x11009F5A: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x4), edx */ /* 0x11009F5D: cmp dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_11009F6B; /* 0x11009F60: jne 0x11009f6b */
L_11009F62:
    eax = MEM32(ecx); /* 0x11009F62: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x11009F64: push edx */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x11009F65: push dword ptr [ecx + 8] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x11009F68: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
L_11009F6B:
    ebp = POP32_VAL(esp); /* 0x11009F6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x11009F6C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_11009F6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009F6Fu);

L_11009F6F:
    PUSH32(esp, ebp); /* 0x11009F6F: push ebp */
    ebp = esp; /* 0x11009F70: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11009F72: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x11009F75: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x11003950u); /* 0x11009F78: push 0x11003950 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x11009F7D: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x11009F83: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x11009F88: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11009F8B: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009F8C: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009F91u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009F92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009F92u);

L_11009F92:
    PUSH32(esp, ebp); /* 0x11009F92: push ebp */
    ebp = esp; /* 0x11009F93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x11009F95: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = ebp + (-0xC); /* 0x11009F98: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 0x110039B0u); /* 0x11009F9B: push 0x110039b0 */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x11009FA0: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x11009FA6: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x11009FAB: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x11009FAE: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x11009FAF: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x11009FB4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_11009FB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009FB5u);

L_11009FB5:
    PUSH32(esp, ebp); /* 0x11009FB5: push ebp */
    ebp = esp; /* 0x11009FB6: mov ebp, esp */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x11009FB8: add ecx, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x11009FBB: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x11009FBD: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11009FC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009FC1u);

L_11009FC1:
    PUSH32(esp, ebp); /* 0x11009FC1: push ebp */
    ebp = esp; /* 0x11009FC2: mov ebp, esp */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x11009FC4: add ecx, 0x20 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x11009FC7: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x11009FC9: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_11009FD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x11009FD3u);

L_11009FD3:
    PUSH32(esp, 4); /* 0x11009FD3: push 4 */
    eax = 0x1103C178u; /* 0x11009FD5: mov eax, 0x1103c178 */
    RECOMP_CALL(sub_1103B372); /* 0x11009FDA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x11009FDF: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x11009FE1: mov dword ptr [ebp - 0x10], edi */
    MEM32(edi) = 0x11004174u; /* 0x11009FE4: mov dword ptr [edi], 0x11004174 */
    MEM32(ebp + (-0x4)) = 4; /* 0x11009FEA: mov dword ptr [ebp - 4], 4 */
    RECOMP_CALL(sub_1100A161); /* 0x11009FF1: call 0x1100a161 */
    RECOMP_FLAGS_IN();
    esi = edi + 0x80; /* 0x11009FF6: lea esi, [edi + 0x80] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x11009FFC: mov byte ptr [ebp - 4], 3 */
    ecx = esi; /* 0x1100A000: mov ecx, esi */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A002: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1100A007: mov ecx, esi */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A009: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x68; /* 0x1100A00E: lea ecx, [edi + 0x68] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100A011: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A015: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x68; /* 0x1100A01A: lea ecx, [edi + 0x68] */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A01D: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x50; /* 0x1100A022: lea ecx, [edi + 0x50] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100A025: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A029: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x50; /* 0x1100A02E: lea ecx, [edi + 0x50] */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A031: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x18; /* 0x1100A036: lea ecx, [edi + 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100A039: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100A03D: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100A043: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x4; /* 0x1100A047: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_1100CAD0); /* 0x1100A04A: call 0x1100cad0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100A04F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A054: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A055(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A055u);

L_1100A055:
    PUSH32(esp, ebp); /* 0x1100A055: push ebp */
    ebp = esp; /* 0x1100A056: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100A058: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100A059: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100A05C: mov esi, ecx */
    ecx = esi + 0x68; /* 0x1100A05E: lea ecx, [esi + 0x68] */
    RECOMP_CALL(sub_1100B3B0); /* 0x1100A061: call 0x1100b3b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0xFFFFFF80u; /* 0x1100A066: sub esi, -0x80 */
    _flag_k = FK_CMP;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x1100A069: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A07F; /* 0x1100A06C: je 0x1100a07f */
L_1100A06E:
    ecx = esi; /* 0x1100A06E: mov ecx, esi */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A070: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100A075: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1100A078: mov ecx, esi */
    RECOMP_CALL(sub_1100C3F6); /* 0x1100A07A: call 0x1100c3f6 */
    RECOMP_FLAGS_IN();
L_1100A07F:
    esi = POP32_VAL(esp); /* 0x1100A07F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100A080: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100A081: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100A084(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A084u);

L_1100A084:
    PUSH32(esp, ebp); /* 0x1100A084: push ebp */
    ebp = esp; /* 0x1100A085: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100A087: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ecx + 0x60), 0 */ /* 0x1100A08A: cmp dword ptr [ecx + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A09E; /* 0x1100A08E: je 0x1100a09e */
L_1100A090:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100A090: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100B28E); /* 0x1100A093: call 0x1100b28e */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1100A098: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100A09A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100A09B: ret 4 */
L_1100A09E:
    PUSH32(esp, 0x11003A14u); /* 0x1100A09E: push 0x11003a14 */
    ecx = ebp + (-0xC); /* 0x1100A0A3: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100A0A6: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100A0AC: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100A0B1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100A0B4: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100A0B5: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100A0BAu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100A0BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A0BBu);

L_1100A0BB:
    PUSH32(esp, ebp); /* 0x1100A0BB: push ebp */
    ebp = esp; /* 0x1100A0BC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100A0BE: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100A0C1: push esi */
    esi = ecx; /* 0x1100A0C2: mov esi, ecx */
    /* cmp MEM32(esi + 0x60), 0 */ /* 0x1100A0C4: cmp dword ptr [esi + 0x60], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A144; /* 0x1100A0C8: je 0x1100a144 */
L_1100A0CA:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1100A0CA: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A0DC; /* 0x1100A0CE: je 0x1100a0dc */
L_1100A0D0:
    eax = ebp + 0x8; /* 0x1100A0D0: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100A0D3: push eax */
    ecx = esi + 0x4; /* 0x1100A0D4: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1101150D); /* 0x1100A0D7: call 0x1101150d */
    RECOMP_FLAGS_IN();
L_1100A0DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1100A0DC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x38; /* 0x1100A0DE: lea ecx, [esi + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1100A0E1: inc edx */
    _flag_k = FK_INC;
    eax = edx; /* 0x1100A0E2: mov eax, edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1100A0E4: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100A0E8: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x1100A0E9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100A13D; /* 0x1100A0EB: jne 0x1100a13d */
L_1100A0ED:
    ecx = esi + 0x48; /* 0x1100A0ED: lea ecx, [esi + 0x48] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + edx; edx = _old; MEM32(ecx) = _sum; } /* 0x1100A0F0: lock xadd dword ptr [ecx], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1100A0F4: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x1100A0F5: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100A136; /* 0x1100A0F9: jne 0x1100a136 */
L_1100A0FB:
    eax = esi; /* 0x1100A0FB: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100A0FD: cdq  */
    PUSH32(esp, edx); /* 0x1100A0FE: push edx */
    PUSH32(esp, eax); /* 0x1100A0FF: push eax */
    PUSH32(esp, 4); /* 0x1100A100: push 4 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100A102: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x40); /* 0x1100A108: mov ecx, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100A10B: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1100A10E: push esi */
    PUSH32(esp, 0x1100B3A4u); /* 0x1100A10F: push 0x1100b3a4 */
    /* test ecx, ecx */ /* 0x1100A114: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A11E; /* 0x1100A116: je 0x1100a11e */
L_1100A118:
    eax = MEM32(ecx); /* 0x1100A118: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1100A11A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_1100A13D; /* 0x1100A11C: jmp 0x1100a13d */
L_1100A11E:
    ecx = MEM32(esi + 0x3C); /* 0x1100A11E: mov ecx, dword ptr [esi + 0x3c] */
    /* test ecx, ecx */ /* 0x1100A121: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A12C; /* 0x1100A123: je 0x1100a12c */
L_1100A125:
    eax = MEM32(ecx); /* 0x1100A125: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1100A127: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    goto L_1100A13D; /* 0x1100A12A: jmp 0x1100a13d */
L_1100A12C:
    RECOMP_ICALL(MEM32(0x110690E4)); /* 0x1100A12C: call dword ptr [0x110690e4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100A132: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100A133: pop ecx */
    goto L_1100A13D; /* 0x1100A134: jmp 0x1100a13d */
L_1100A136:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1100A136: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1100A139: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
L_1100A13D:
    esi = POP32_VAL(esp); /* 0x1100A13D: pop esi */
    esp = ebp; /* 0x1100A13E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100A140: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100A141: ret 4 */
L_1100A144:
    PUSH32(esp, 0x11003A44u); /* 0x1100A144: push 0x11003a44 */
    ecx = ebp + (-0xC); /* 0x1100A149: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100A14C: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100A152: push 0x1104550c */
    eax = ebp + (-0xC); /* 0x1100A157: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100A15A: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100A15B: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100A160u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100A161(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A161u);

L_1100A161:
    PUSH32(esp, ebp); /* 0x1100A161: push ebp */
    ebp = esp; /* 0x1100A162: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1100A164: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100A167: push -1 */
    PUSH32(esp, 0x1103C19Cu); /* 0x1100A169: push 0x1103c19c */
    eax = MEM32(FS_BASE + (0)); /* 0x1100A16E: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1100A174: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x1100A175: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100A178: push esi */
    PUSH32(esp, edi); /* 0x1100A179: push edi */
    eax = MEM32(0x110631D0); /* 0x1100A17A: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1100A17F: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100A181: push eax */
    eax = esp + 0x40; /* 0x1100A182: lea eax, [esp + 0x40] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1100A186: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x1100A18C: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100A18E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + 0x44; /* 0x1100A190: lea edx, [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100A193: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x1100A194: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(0x1106922C); /* 0x1100A198: mov eax, dword ptr [0x1106922c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100A19D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = edi; /* 0x1100A19F: mov dword ptr [esp + 0x18], edi */
    MEM32(esp + 0x1C) = eax; /* 0x1100A1A3: mov dword ptr [esp + 0x1c], eax */
    goto L_1100A1B3; /* 0x1100A1A7: jmp 0x1100a1b3 */
L_1100A1A9:
    ecx = esp + 0x10; /* 0x1100A1A9: lea ecx, [esp + 0x10] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x1100A1AD: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_1100A1B3:
    /* cmp MEM32(esi + 0x48), edi */ /* 0x1100A1B3: cmp dword ptr [esi + 0x48], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100A1A9; /* 0x1100A1B6: jne 0x1100a1a9 */
L_1100A1B8:
    eax = esi + 0x18; /* 0x1100A1B8: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x1100A1BB: push eax */
    ecx = esp + 0x24; /* 0x1100A1BC: lea ecx, [esp + 0x24] */
    RECOMP_ICALL(MEM32(0x11069224)); /* 0x1100A1C0: call dword ptr [0x11069224] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x48) = edi; /* 0x1100A1C6: mov dword ptr [esp + 0x48], edi */
    MEM32(esp + 0xC) = edi; /* 0x1100A1CA: mov dword ptr [esp + 0xc], edi */
    goto L_1100A1DF; /* 0x1100A1CE: jmp 0x1100a1df */
L_1100A1D0:
    ecx = MEM32(esp + 0xC); /* 0x1100A1D0: mov ecx, dword ptr [esp + 0xc] */
    /* test ecx, ecx */ /* 0x1100A1D4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A1DF; /* 0x1100A1D6: je 0x1100a1df */
L_1100A1D8:
    eax = MEM32(ecx); /* 0x1100A1D8: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100A1DA: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100A1DC: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100A1DF:
    eax = esp + 0xC; /* 0x1100A1DF: lea eax, [esp + 0xc] */
    PUSH32(esp, eax); /* 0x1100A1E3: push eax */
    ecx = esi + 0x4; /* 0x1100A1E4: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1101157D); /* 0x1100A1E7: call 0x1101157d */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100A1EC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100A1D0; /* 0x1100A1EE: jne 0x1100a1d0 */
L_1100A1F0:
    _flag_a = (uint32_t)((MEM32(esp + 0x48) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x48) | 0xFFFFFFFFu));
    MEM32(esp + 0x48) = MEM32(esp + 0x48) | 0xFFFFFFFFu; /* 0x1100A1F0: or dword ptr [esp + 0x48], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esp + 0x20; /* 0x1100A1F5: lea ecx, [esp + 0x20] */
    RECOMP_ICALL(MEM32(0x11069220)); /* 0x1100A1F9: call dword ptr [0x11069220] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x40); /* 0x1100A1FF: mov ecx, dword ptr [esp + 0x40] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1100A203: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1100A20A: pop ecx */
    edi = POP32_VAL(esp); /* 0x1100A20B: pop edi */
    esi = POP32_VAL(esp); /* 0x1100A20C: pop esi */
    esp = ebp; /* 0x1100A20D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100A20F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A210: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A211(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A211u);

L_1100A211:
    PUSH32(esp, ebp); /* 0x1100A211: push ebp */
    ebp = esp; /* 0x1100A212: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1100A214: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1100A217: push ecx */
    PUSH32(esp, ecx); /* 0x1100A218: push ecx */
    PUSH32(esp, ebx); /* 0x1100A219: push ebx */
    eax = ecx; /* 0x1100A21A: mov eax, ecx */
    PUSH32(esp, edi); /* 0x1100A21C: push edi */
    MEM32(esp + 0xC) = eax; /* 0x1100A21D: mov dword ptr [esp + 0xc], eax */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100A221: cdq  */
    edi = edx; /* 0x1100A222: mov edi, edx */
    ebx = eax; /* 0x1100A224: mov ebx, eax */
    PUSH32(esp, edi); /* 0x1100A226: push edi */
    PUSH32(esp, ebx); /* 0x1100A227: push ebx */
    PUSH32(esp, 1); /* 0x1100A228: push 1 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100A22A: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x18); /* 0x1100A230: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100A234: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1100B321); /* 0x1100A237: call 0x1100b321 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100A23C: push eax */
    PUSH32(esp, edi); /* 0x1100A23D: push edi */
    PUSH32(esp, ebx); /* 0x1100A23E: push ebx */
    PUSH32(esp, 2); /* 0x1100A23F: push 2 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100A241: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x1C); /* 0x1100A247: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1100A24B: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x48u; /* 0x1100A24E: add eax, 0x48 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1100A251: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x1100A254: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1100A258: pop edi */
    ebx = POP32_VAL(esp); /* 0x1100A259: pop ebx */
    esp = ebp; /* 0x1100A25A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100A25C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A25D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A25E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A25Eu);

L_1100A25E:
    PUSH32(esp, ebp); /* 0x1100A25E: push ebp */
    ebp = esp; /* 0x1100A25F: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1100A261: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1100A264: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1100A267: add ecx, 2 */
    _flag_k = FK_ADD;
    ecx = eax + ecx * 4; /* 0x1100A26A: lea ecx, [eax + ecx*4] */
    /* test ecx, ecx */ /* 0x1100A26D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A278; /* 0x1100A26F: je 0x1100a278 */
L_1100A271:
    eax = MEM32(ebp + 0x10); /* 0x1100A271: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x1100A274: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x1100A276: mov dword ptr [ecx], eax */
L_1100A278:
    ebp = POP32_VAL(esp); /* 0x1100A278: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100A279: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100A27C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A27Cu);

L_1100A27C:
    PUSH32(esp, ebp); /* 0x1100A27C: push ebp */
    ebp = esp; /* 0x1100A27D: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1100A27F: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1100A282: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A292; /* 0x1100A284: je 0x1100a292 */
L_1100A286:
    ecx = MEM32(ebp + 0x10); /* 0x1100A286: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x1100A289: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + ecx * 4 + 0x8); /* 0x1100A28C: mov eax, dword ptr [eax + ecx*4 + 8] */
    MEM32(edx) = eax; /* 0x1100A290: mov dword ptr [edx], eax */
L_1100A292:
    ebp = POP32_VAL(esp); /* 0x1100A292: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100A293: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100A296(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A296u);

L_1100A296:
    PUSH32(esp, esi); /* 0x1100A296: push esi */
    esi = ecx; /* 0x1100A297: mov esi, ecx */
    PUSH32(esp, 0); /* 0x1100A299: push 0 */
    eax = MEM32(esi + 0xC); /* 0x1100A29B: mov eax, dword ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x8)); /* 0x1100A29E: imul eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1100A2A2: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1100A2A5: push eax */
    RECOMP_CALL(sub_1100CB62); /* 0x1100A2A6: call 0x1100cb62 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100A2AB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100A2AC: pop ecx */
    /* test eax, eax */ /* 0x1100A2AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A2B3; /* 0x1100A2AF: je 0x1100a2b3 */
L_1100A2B1:
    esi = POP32_VAL(esp); /* 0x1100A2B1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A2B2: ret  */
L_1100A2B3:
    ecx = esi; /* 0x1100A2B3: mov ecx, esi */
    RECOMP_CALL(sub_1101163C); /* 0x1100A2B5: call 0x1101163c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100A2BAu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100A2BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A2BBu);

L_1100A2BB:
    PUSH32(esp, ebp); /* 0x1100A2BB: push ebp */
    ebp = esp; /* 0x1100A2BC: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100A2BE: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100A2C1: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100A2C7: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1100A2C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100A2C9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100A2CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A2CCu);

L_1100A2CC:
    PUSH32(esp, 0x10u); /* 0x1100A2CC: push 0x10 */
    eax = 0x1103C032u; /* 0x1100A2CE: mov eax, 0x1103c032 */
    RECOMP_CALL(sub_1103B372); /* 0x1100A2D3: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100A2D8: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100A2DA: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11004530u; /* 0x1100A2DD: mov dword ptr [esi], 0x11004530 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100A2E3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_110097C8); /* 0x1100A2E7: call 0x110097c8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100A2EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A30C; /* 0x1100A2EE: je 0x1100a30c */
L_1100A2F0:
    PUSH32(esp, 0x1100388Cu); /* 0x1100A2F0: push 0x1100388c */
    ecx = ebp + (-0x1C); /* 0x1100A2F5: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100A2F8: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100A2FE: push 0x1104550c */
    eax = ebp + (-0x1C); /* 0x1100A303: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1100A306: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100A307: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100A30C:
    ecx = esi + 0x8; /* 0x1100A30C: lea ecx, [esi + 8] */
    RECOMP_CALL(sub_1100B222); /* 0x1100A30F: call 0x1100b222 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100A314: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A319: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A31A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A31Au);

L_1100A31A:
    PUSH32(esp, ebp); /* 0x1100A31A: push ebp */
    ebp = esp; /* 0x1100A31B: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1100A31D: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A329; /* 0x1100A321: je 0x1100a329 */
L_1100A323:
    ebp = POP32_VAL(esp); /* 0x1100A323: pop ebp */
    goto L_1100B3E7; /* 0x1100A324: jmp 0x1100b3e7 */
L_1100A329:
    ebp = POP32_VAL(esp); /* 0x1100A329: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100A32A: ret 4 */
L_1100B3E7:
    PUSH32(esp, ebp); /* 0x1100B3E7: push ebp */
    ebp = esp; /* 0x1100B3E8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100B3EA: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100B3ED: push ebx */
    PUSH32(esp, esi); /* 0x1100B3EE: push esi */
    esi = MEM32(ecx + 0xC); /* 0x1100B3EF: mov esi, dword ptr [ecx + 0xc] */
    PUSH32(esp, edi); /* 0x1100B3F2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100B3F3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), 0xFFFFFFFFu */ /* 0x1100B3F5: cmp dword ptr [ecx + 4], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B403; /* 0x1100B3F9: je 0x1100b403 */
L_1100B3FB:
    eax = esi + 0x1; /* 0x1100B3FB: lea eax, [esi + 1] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x1100B3FE: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1100B440; /* 0x1100B401: ja 0x1100b440 */
L_1100B403:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1100B403: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1100B405: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B42B; /* 0x1100B407: je 0x1100b42b */
L_1100B409:
    ebx = MEM32(ebp + 0x8); /* 0x1100B409: mov ebx, dword ptr [ebp + 8] */
L_1100B40C:
    eax = MEM32(ecx + 0x8); /* 0x1100B40C: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM32(eax + edx * 4), 0 */ /* 0x1100B40F: cmp dword ptr [eax + edx*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B41D; /* 0x1100B413: je 0x1100b41d */
L_1100B415:
    edi = edx + 0x1; /* 0x1100B415: lea edi, [edx + 1] */
    /* cmp MEM32(eax + edx * 4), ebx */ /* 0x1100B418: cmp dword ptr [eax + edx*4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + edx * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B440; /* 0x1100B41B: je 0x1100b440 */
L_1100B41D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1100B41D: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x1100B41E: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100B40C; /* 0x1100B420: jb 0x1100b40c */
L_1100B422:
    /* cmp edi, esi */ /* 0x1100B422: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100B42B; /* 0x1100B424: jae 0x1100b42b */
L_1100B426:
    MEM32(eax + edi * 4) = ebx; /* 0x1100B426: mov dword ptr [eax + edi*4], ebx */
    goto L_1100B437; /* 0x1100B429: jmp 0x1100b437 */
L_1100B42B:
    eax = ebp + 0x8; /* 0x1100B42B: lea eax, [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1100B42E: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1100B431: push eax */
    RECOMP_CALL(sub_1100C53C); /* 0x1100B432: call 0x1100c53c */
    RECOMP_FLAGS_IN();
L_1100B437:
    edi = POP32_VAL(esp); /* 0x1100B437: pop edi */
    esi = POP32_VAL(esp); /* 0x1100B438: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100B439: pop ebx */
    esp = ebp; /* 0x1100B43A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100B43C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B43D: ret 4 */
L_1100B440:
    PUSH32(esp, 0x110038C4u); /* 0x1100B440: push 0x110038c4 */
    ecx = ebp + (-0xC); /* 0x1100B445: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x11069204)); /* 0x1100B448: call dword ptr [0x11069204] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104552Cu); /* 0x1100B44E: push 0x1104552c */
    eax = ebp + (-0xC); /* 0x1100B453: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100B456: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100B457: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100B45Cu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100A32D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A32Du);

L_1100A32D:
    PUSH32(esp, esi); /* 0x1100A32D: push esi */
    esi = ecx; /* 0x1100A32E: mov esi, ecx */
    ecx = MEM32(esi + 0x10); /* 0x1100A330: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x1100A333: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A349; /* 0x1100A335: je 0x1100a349 */
L_1100A337:
    edx = MEM32(ecx); /* 0x1100A337: mov edx, dword ptr [ecx] */
    /* cmp ecx, esi */ /* 0x1100A339: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100A33B: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1100A33E: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100A341: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100A342: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1100A345: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100A349:
    ecx = esi; /* 0x1100A349: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x1100A34B: pop esi */
    goto L_1100B58D; /* 0x1100A34C: jmp 0x1100b58d */
L_1100B58D:
    PUSH32(esp, esi); /* 0x1100B58D: push esi */
    esi = ecx; /* 0x1100B58E: mov esi, ecx */
    ecx = MEM32(esi + 0x10); /* 0x1100B590: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x1100B593: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B5A9; /* 0x1100B595: je 0x1100b5a9 */
L_1100B597:
    edx = MEM32(ecx); /* 0x1100B597: mov edx, dword ptr [ecx] */
    /* cmp ecx, esi */ /* 0x1100B599: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100B59B: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1100B59E: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100B5A1: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100B5A2: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1100B5A5: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100B5A9:
    esi = POP32_VAL(esp); /* 0x1100B5A9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B5AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A351(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A351u);

L_1100A351:
    PUSH32(esp, 0x24u); /* 0x1100A351: push 0x24 */
    eax = 0x1103C1DDu; /* 0x1100A353: mov eax, 0x1103c1dd */
    RECOMP_CALL(sub_1103B3A5); /* 0x1100A358: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100A35D: mov edi, ecx */
    MEM32(ebp + (-0x30)) = edi; /* 0x1100A35F: mov dword ptr [ebp - 0x30], edi */
    RECOMP_CALL(sub_1100B5AB); /* 0x1100A362: call 0x1100b5ab */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100A367: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = edi + 0xE8; /* 0x1100A36B: lea ebx, [edi + 0xe8] */
    _flag_a = (uint32_t)(MEM32(edi + 0x148)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x148) = MEM32(edi + 0x148) & 0; /* 0x1100A371: and dword ptr [edi + 0x148], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x14C; /* 0x1100A378: lea ecx, [edi + 0x14c] */
    MEM32(edi) = 0x110040F0u; /* 0x1100A37E: mov dword ptr [edi], 0x110040f0 */
    MEM32(ebx) = 0x11004398u; /* 0x1100A384: mov dword ptr [ebx], 0x11004398 */
    RECOMP_ICALL(MEM32(0x11069228)); /* 0x1100A38A: call dword ptr [0x11069228] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100A390: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x16C) = (uint8_t)(LO8(ecx)); /* 0x1100A392: mov byte ptr [edi + 0x16c], cl */
    eax = ebp + (-0x2C); /* 0x1100A398: lea eax, [ebp - 0x2c] */
    MEM32(ebp + (-0x2C)) = 0x11003C9Cu; /* 0x1100A39B: mov dword ptr [ebp - 0x2c], 0x11003c9c */
    MEM32(ebp + (-0x28)) = edi; /* 0x1100A3A2: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1100A3A5: mov dword ptr [ebp - 0x1c], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1100A3A8: mov byte ptr [ebp - 4], 3 */
    MEM32(edi + 0x5C) = ecx; /* 0x1100A3AC: mov dword ptr [edi + 0x5c], ecx */
    MEM32(edi + 0x60) = ecx; /* 0x1100A3AF: mov dword ptr [edi + 0x60], ecx */
    ecx = edi + 0x70; /* 0x1100A3B2: lea ecx, [edi + 0x70] */
    PUSH32(esp, eax); /* 0x1100A3B5: push eax */
    RECOMP_CALL(sub_1100B3B0); /* 0x1100A3B6: call 0x1100b3b0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x64) = 0; /* 0x1100A3BB: mov dword ptr [edi + 0x64], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100A3C2: mov byte ptr [ebp - 4], 1 */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1100A3C6: mov ecx, dword ptr [ebp - 0x1c] */
    /* test ecx, ecx */ /* 0x1100A3C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A3E2; /* 0x1100A3CB: je 0x1100a3e2 */
L_1100A3CD:
    esi = MEM32(ecx); /* 0x1100A3CD: mov esi, dword ptr [ecx] */
    eax = ebp + (-0x2C); /* 0x1100A3CF: lea eax, [ebp - 0x2c] */
    /* cmp ecx, eax */ /* 0x1100A3D2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100A3D4: setne dl */
    edx = (uint32_t)LO8(edx); /* 0x1100A3D7: movzx edx, dl */
    PUSH32(esp, edx); /* 0x1100A3DA: push edx */
    RECOMP_ICALL(MEM32(esi + 0x10)); /* 0x1100A3DB: call dword ptr [esi + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1100A3DE: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100A3E2:
    MEM32(edi + 0x138) = ebx; /* 0x1100A3E2: mov dword ptr [edi + 0x138], ebx */
    eax = edi; /* 0x1100A3E8: mov eax, edi */
    RECOMP_CALL(sub_1103B354); /* 0x1100A3EA: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A3EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A3F0u);

L_1100A3F0:
    PUSH32(esp, 4); /* 0x1100A3F0: push 4 */
    eax = 0x1103C218u; /* 0x1100A3F2: mov eax, 0x1103c218 */
    RECOMP_CALL(sub_1103B372); /* 0x1100A3F7: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100A3FC: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100A3FE: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x110040F0u; /* 0x1100A401: mov dword ptr [esi], 0x110040f0 */
    MEM32(esi + 0xE8) = 0x11004398u; /* 0x1100A407: mov dword ptr [esi + 0xe8], 0x11004398 */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100A411: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100B661); /* 0x1100A418: call 0x1100b661 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x148); /* 0x1100A41D: mov ecx, dword ptr [esi + 0x148] */
    /* test ecx, ecx */ /* 0x1100A423: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A42E; /* 0x1100A425: je 0x1100a42e */
L_1100A427:
    eax = MEM32(ecx); /* 0x1100A427: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100A429: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100A42B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100A42E:
    ecx = esi + 0x14C; /* 0x1100A42E: lea ecx, [esi + 0x14c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100A434: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100A438: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100A43E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100A442: mov ecx, esi */
    RECOMP_CALL(sub_1100A6DF); /* 0x1100A444: call 0x1100a6df */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100A449: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A44E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A44F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A44Fu);

L_1100A44F:
    PUSH32(esp, 0x1Cu); /* 0x1100A44F: push 0x1c */
    eax = 0x1103C23Cu; /* 0x1100A451: mov eax, 0x1103c23c */
    RECOMP_CALL(sub_1103B372); /* 0x1100A456: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100A45B: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100A45D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edi + 0x16C), LO8(ebx) */ /* 0x1100A45F: cmp byte ptr [edi + 0x16c], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x16C)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A46C; /* 0x1100A465: je 0x1100a46c */
L_1100A467:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100A467: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100A469: inc eax */
    _flag_k = FK_INC;
    goto L_1100A4D2; /* 0x1100A46A: jmp 0x1100a4d2 */
L_1100A46C:
    eax = edi + 0x14C; /* 0x1100A46C: lea eax, [edi + 0x14c] */
    PUSH32(esp, eax); /* 0x1100A472: push eax */
    ecx = ebp + (-0x28); /* 0x1100A473: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069224)); /* 0x1100A476: call dword ptr [0x11069224] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100A47C: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(edi + 0x16C), 0 */ /* 0x1100A47F: cmp byte ptr [edi + 0x16c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x16C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A490; /* 0x1100A486: je 0x1100a490 */
L_1100A488:
    esi = MEM32(ebp + 0x8); /* 0x1100A488: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100A48B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100A48D: inc ebx */
    _flag_k = FK_INC;
    goto L_1100A4B7; /* 0x1100A48E: jmp 0x1100a4b7 */
L_1100A490:
    ecx = MEM32(ebp + 0xC); /* 0x1100A490: mov ecx, dword ptr [ebp + 0xc] */
    esi = edi + 0xE8; /* 0x1100A493: lea esi, [edi + 0xe8] */
    eax = MEM32(ebp + 0x8); /* 0x1100A499: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100A49C: push esi */
    edx = MEM32(ecx); /* 0x1100A49D: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1100A49F: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100A4A2: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100A4A5: mov esi, eax */
    /* test esi, esi */ /* 0x1100A4A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A4B4; /* 0x1100A4A9: je 0x1100a4b4 */
L_1100A4AB:
    MEM8(edi + 0x16C) = (uint8_t)(1); /* 0x1100A4AB: mov byte ptr [edi + 0x16c], 1 */
    goto L_1100A4B7; /* 0x1100A4B2: jmp 0x1100a4b7 */
L_1100A4B4:
    PUSH32(esp, 3); /* 0x1100A4B4: push 3 */
    ebx = POP32_VAL(esp); /* 0x1100A4B6: pop ebx */
L_1100A4B7:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100A4B7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100A4BB: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069220)); /* 0x1100A4BE: call dword ptr [0x11069220] */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1100A4C4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100A4D0; /* 0x1100A4C6: jne 0x1100a4d0 */
L_1100A4C8:
    edx = MEM32(edi); /* 0x1100A4C8: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x1100A4CA: mov ecx, edi */
    PUSH32(esp, esi); /* 0x1100A4CC: push esi */
    RECOMP_ICALL(MEM32(edx + 0x54)); /* 0x1100A4CD: call dword ptr [edx + 0x54] */
    RECOMP_FLAGS_IN();
L_1100A4D0:
    eax = ebx; /* 0x1100A4D0: mov eax, ebx */
L_1100A4D2:
    RECOMP_CALL(sub_1103B340); /* 0x1100A4D2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100A4D7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100A4DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A4DAu);

L_1100A4DA:
    PUSH32(esp, 0x1Cu); /* 0x1100A4DA: push 0x1c */
    eax = 0x1103C23Cu; /* 0x1100A4DC: mov eax, 0x1103c23c */
    RECOMP_CALL(sub_1103B372); /* 0x1100A4E1: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100A4E6: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100A4E8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edi + 0x16C), LO8(ebx) */ /* 0x1100A4EA: cmp byte ptr [edi + 0x16c], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x16C)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A4F7; /* 0x1100A4F0: je 0x1100a4f7 */
L_1100A4F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100A4F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100A4F4: inc eax */
    _flag_k = FK_INC;
    goto L_1100A55D; /* 0x1100A4F5: jmp 0x1100a55d */
L_1100A4F7:
    eax = edi + 0x14C; /* 0x1100A4F7: lea eax, [edi + 0x14c] */
    PUSH32(esp, eax); /* 0x1100A4FD: push eax */
    ecx = ebp + (-0x28); /* 0x1100A4FE: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069224)); /* 0x1100A501: call dword ptr [0x11069224] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100A507: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM8(edi + 0x16C), 0 */ /* 0x1100A50A: cmp byte ptr [edi + 0x16c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x16C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A51B; /* 0x1100A511: je 0x1100a51b */
L_1100A513:
    esi = MEM32(ebp + 0x8); /* 0x1100A513: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100A516: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100A518: inc ebx */
    _flag_k = FK_INC;
    goto L_1100A542; /* 0x1100A519: jmp 0x1100a542 */
L_1100A51B:
    ecx = MEM32(ebp + 0xC); /* 0x1100A51B: mov ecx, dword ptr [ebp + 0xc] */
    esi = edi + 0xE8; /* 0x1100A51E: lea esi, [edi + 0xe8] */
    eax = MEM32(ebp + 0x8); /* 0x1100A524: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100A527: push esi */
    edx = MEM32(ecx); /* 0x1100A528: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1100A52A: push dword ptr [eax + 4] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100A52D: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100A530: mov esi, eax */
    /* test esi, esi */ /* 0x1100A532: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A53F; /* 0x1100A534: je 0x1100a53f */
L_1100A536:
    MEM8(edi + 0x16C) = (uint8_t)(1); /* 0x1100A536: mov byte ptr [edi + 0x16c], 1 */
    goto L_1100A542; /* 0x1100A53D: jmp 0x1100a542 */
L_1100A53F:
    PUSH32(esp, 3); /* 0x1100A53F: push 3 */
    ebx = POP32_VAL(esp); /* 0x1100A541: pop ebx */
L_1100A542:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100A542: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100A546: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069220)); /* 0x1100A549: call dword ptr [0x11069220] */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1100A54F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100A55B; /* 0x1100A551: jne 0x1100a55b */
L_1100A553:
    edx = MEM32(edi); /* 0x1100A553: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x1100A555: mov ecx, edi */
    PUSH32(esp, esi); /* 0x1100A557: push esi */
    RECOMP_ICALL(MEM32(edx + 0x50)); /* 0x1100A558: call dword ptr [edx + 0x50] */
    RECOMP_FLAGS_IN();
L_1100A55B:
    eax = ebx; /* 0x1100A55B: mov eax, ebx */
L_1100A55D:
    RECOMP_CALL(sub_1103B340); /* 0x1100A55D: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100A562: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100A565(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A565u);

L_1100A565:
    PUSH32(esp, ebp); /* 0x1100A565: push ebp */
    ebp = esp; /* 0x1100A566: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100A568: push esi */
    esi = ecx; /* 0x1100A569: mov esi, ecx */
    edx = MEM32(esi + 0x148); /* 0x1100A56B: mov edx, dword ptr [esi + 0x148] */
    /* test edx, edx */ /* 0x1100A571: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A59D; /* 0x1100A573: je 0x1100a59d */
L_1100A575:
    eax = MEM32(ebp + 0x8); /* 0x1100A575: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x1100A578: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100A59D; /* 0x1100A57B: jne 0x1100a59d */
L_1100A57D:
    PUSH32(esp, 0x14u); /* 0x1100A57D: push 0x14 */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x1100A57F: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100A585: pop ecx */
    /* test eax, eax */ /* 0x1100A586: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A59D; /* 0x1100A588: je 0x1100a59d */
L_1100A58A:
    ecx = MEM32(esi + 0x148); /* 0x1100A58A: mov ecx, dword ptr [esi + 0x148] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1100A590: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1100A593: push ecx */
    ecx = eax; /* 0x1100A594: mov ecx, eax */
    RECOMP_CALL(sub_1100B765); /* 0x1100A596: call 0x1100b765 */
    RECOMP_FLAGS_IN();
    goto L_1100A59F; /* 0x1100A59B: jmp 0x1100a59f */
L_1100A59D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100A59D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100A59F:
    esi = POP32_VAL(esp); /* 0x1100A59F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100A5A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100A5A1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100A5A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A5A4u);

L_1100A5A4:
    PUSH32(esp, ebp); /* 0x1100A5A4: push ebp */
    ebp = esp; /* 0x1100A5A5: mov ebp, esp */
    eax = MEM32(ecx + 0x148); /* 0x1100A5A7: mov eax, dword ptr [ecx + 0x148] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100A5AD: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1100A5B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100A5B8; /* 0x1100A5B2: jne 0x1100a5b8 */
L_1100A5B4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1100A5B4: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1100A5C2; /* 0x1100A5B6: jmp 0x1100a5c2 */
L_1100A5B8:
    eax = MEM32(eax + 0x4); /* 0x1100A5B8: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1100A5BB: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100A5C8; /* 0x1100A5BE: jne 0x1100a5c8 */
L_1100A5C0:
    SET_LO8(eax, 1); /* 0x1100A5C0: mov al, 1 */
L_1100A5C2:
    esp = ebp; /* 0x1100A5C2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100A5C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100A5C5: ret 4 */
L_1100A5C8:
    ecx = ebp + (-0xC); /* 0x1100A5C8: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x11069208)); /* 0x1100A5CB: call dword ptr [0x11069208] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104551Cu); /* 0x1100A5D1: push 0x1104551c */
    eax = ebp + (-0xC); /* 0x1100A5D6: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100A5D9: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100A5DA: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100A5DFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100A5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A5E0u);

L_1100A5E0:
    PUSH32(esp, ebp); /* 0x1100A5E0: push ebp */
    ebp = esp; /* 0x1100A5E1: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100A5E3: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100A5E5: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x30)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100A5E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A5E9u);

L_1100A5E9:
    PUSH32(esp, ebp); /* 0x1100A5E9: push ebp */
    ebp = esp; /* 0x1100A5EA: mov ebp, esp */
    eax = MEM32(ecx + 0x148); /* 0x1100A5EC: mov eax, dword ptr [ecx + 0x148] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100A5F2: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1100A5F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A607; /* 0x1100A5F7: je 0x1100a607 */
L_1100A5F9:
    eax = MEM32(eax + 0x4); /* 0x1100A5F9: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1100A5FC: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100A607; /* 0x1100A5FF: jne 0x1100a607 */
L_1100A601:
    esp = ebp; /* 0x1100A601: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100A603: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100A604: ret 4 */
L_1100A607:
    ecx = ebp + (-0xC); /* 0x1100A607: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x11069208)); /* 0x1100A60A: call dword ptr [0x11069208] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104551Cu); /* 0x1100A610: push 0x1104551c */
    eax = ebp + (-0xC); /* 0x1100A615: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100A618: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100A619: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100A61Eu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100A61F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A61Fu);

L_1100A61F:
    PUSH32(esp, ebp); /* 0x1100A61F: push ebp */
    ebp = esp; /* 0x1100A620: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100A622: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = ebp + (-0xC); /* 0x1100A625: lea edx, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1100A628: push esi */
    esi = ecx; /* 0x1100A629: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1100A62B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100A62C: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1100A62F: push edx */
    ecx = esi + 0xC; /* 0x1100A630: lea ecx, [esi + 0xc] */
    MEM32(esi + 0x148) = edi; /* 0x1100A633: mov dword ptr [esi + 0x148], edi */
    eax = MEM32(ecx); /* 0x1100A639: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100A63B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_1100A666; /* 0x1100A63E: jmp 0x1100a666 */
L_1100A640:
    ecx = MEM32(ebp + (-0xC)); /* 0x1100A640: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1100A643: push dword ptr [ebp - 8] */
    eax = MEM32(ecx); /* 0x1100A646: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100A648: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1100A64B: mov dword ptr [ebp - 4], eax */
    ecx = eax; /* 0x1100A64E: mov ecx, eax */
    PUSH32(esp, esi); /* 0x1100A650: push esi */
    PUSH32(esp, edi); /* 0x1100A651: push edi */
    edx = MEM32(eax); /* 0x1100A652: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x1100A654: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1100A657: mov ecx, dword ptr [ebp - 0xc] */
    edx = ebp + (-0x8); /* 0x1100A65A: lea edx, [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1100A65D: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x1100A660: push edx */
    eax = MEM32(ecx); /* 0x1100A661: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100A663: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1100A666:
    ecx = MEM32(ebp + (-0xC)); /* 0x1100A666: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1100A669: push dword ptr [ebp - 8] */
    eax = MEM32(ecx); /* 0x1100A66C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100A66E: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1100A671: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1100A674: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100A640; /* 0x1100A676: jne 0x1100a640 */
L_1100A678:
    edi = POP32_VAL(esp); /* 0x1100A678: pop edi */
    esi = POP32_VAL(esp); /* 0x1100A679: pop esi */
    esp = ebp; /* 0x1100A67A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100A67C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100A67D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100A680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A680u);

L_1100A680:
    PUSH32(esp, 0x10u); /* 0x1100A680: push 0x10 */
    eax = 0x1103C032u; /* 0x1100A682: mov eax, 0x1103c032 */
    RECOMP_CALL(sub_1103B372); /* 0x1100A687: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100A68C: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100A68E: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003DB4u; /* 0x1100A691: mov dword ptr [esi], 0x11003db4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100A697: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1100A699: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_110097C8); /* 0x1100A69C: call 0x110097c8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100A6A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A6C1; /* 0x1100A6A3: je 0x1100a6c1 */
L_1100A6A5:
    PUSH32(esp, 0x1100388Cu); /* 0x1100A6A5: push 0x1100388c */
    ecx = ebp + (-0x1C); /* 0x1100A6AA: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100A6AD: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100A6B3: push 0x1104550c */
    eax = ebp + (-0x1C); /* 0x1100A6B8: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1100A6BB: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100A6BC: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100A6C1:
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1100A6C1: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A6D9; /* 0x1100A6C4: je 0x1100a6d9 */
L_1100A6C6:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1100A6C6: push dword ptr [esi + 8] */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100A6C9: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100A6CF: pop ecx */
    MEM32(esi + 0x8) = edi; /* 0x1100A6D0: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x1100A6D3: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = edi; /* 0x1100A6D6: mov dword ptr [esi + 0x10], edi */
L_1100A6D9:
    RECOMP_CALL(sub_1103B340); /* 0x1100A6D9: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A6DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A6DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A6DFu);

L_1100A6DF:
    PUSH32(esp, 4); /* 0x1100A6DF: push 4 */
    eax = 0x1103C27Bu; /* 0x1100A6E1: mov eax, 0x1103c27b */
    RECOMP_CALL(sub_1103B372); /* 0x1100A6E6: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100A6EB: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100A6ED: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11004590u; /* 0x1100A6F0: mov dword ptr [esi], 0x11004590 */
    MEM32(esi + 0xE8) = 0x11003FF4u; /* 0x1100A6F6: mov dword ptr [esi + 0xe8], 0x11003ff4 */
    MEM32(ebp + (-0x4)) = 2; /* 0x1100A700: mov dword ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1100B661); /* 0x1100A707: call 0x1100b661 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x13C); /* 0x1100A70C: mov ecx, dword ptr [esi + 0x13c] */
    /* test ecx, ecx */ /* 0x1100A712: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A71C; /* 0x1100A714: je 0x1100a71c */
L_1100A716:
    PUSH32(esp, ecx); /* 0x1100A716: push ecx */
    RECOMP_CALL(sub_1100B054); /* 0x1100A717: call 0x1100b054 */
    RECOMP_FLAGS_IN();
L_1100A71C:
    ecx = esi + 0xEC; /* 0x1100A71C: lea ecx, [esi + 0xec] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100A722: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100B6B0); /* 0x1100A726: call 0x1100b6b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100A72B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100A72F: mov ecx, esi */
    MEM32(esi + 0xE8) = 0x11003E58u; /* 0x1100A731: mov dword ptr [esi + 0xe8], 0x11003e58 */
    RECOMP_CALL(sub_1100A7B4); /* 0x1100A73B: call 0x1100a7b4 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100A740: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A745: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A746(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A746u);

L_1100A746:
    PUSH32(esp, 0x1Cu); /* 0x1100A746: push 0x1c */
    eax = 0x1103C29Eu; /* 0x1100A748: mov eax, 0x1103c29e */
    RECOMP_CALL(sub_1103B372); /* 0x1100A74D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100A752: mov esi, ecx */
    eax = ebp + (-0x28); /* 0x1100A754: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1100A757: push eax */
    ecx = esi + 0x4; /* 0x1100A758: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B6EA); /* 0x1100A75B: call 0x1100b6ea */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100A760: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x14)); /* 0x1100A764: mov eax, dword ptr [ebp - 0x14] */
L_1100A767:
    ecx = ebp + (-0x10); /* 0x1100A767: lea ecx, [ebp - 0x10] */
    edx = MEM32(ebp + (-0x24)); /* 0x1100A76A: mov edx, dword ptr [ebp - 0x24] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1100A76D: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100A775; /* 0x1100A770: jae 0x1100a775 */
L_1100A772:
    ecx = edx + eax * 4; /* 0x1100A772: lea ecx, [edx + eax*4] */
L_1100A775:
    /* cmp MEM32(ecx), 0 */ /* 0x1100A775: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100A7A2; /* 0x1100A778: je 0x1100a7a2 */
L_1100A77A:
    ecx = ebp + (-0x10); /* 0x1100A77A: lea ecx, [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1100A77D: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100A785; /* 0x1100A780: jae 0x1100a785 */
L_1100A782:
    ecx = edx + eax * 4; /* 0x1100A782: lea ecx, [edx + eax*4] */
L_1100A785:
    ecx = MEM32(ecx); /* 0x1100A785: mov ecx, dword ptr [ecx] */
    edx = esi + (-0xE8); /* 0x1100A787: lea edx, [esi - 0xe8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1100A78D: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100A78F: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = MEM32(ecx); /* 0x1100A791: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1100A793: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1100A795: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100A796: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1100A799: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100A79C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = eax; /* 0x1100A79D: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    goto L_1100A767; /* 0x1100A7A0: jmp 0x1100a767 */
L_1100A7A2:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100A7A2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100A7A6: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1100B790); /* 0x1100A7A9: call 0x1100b790 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100A7AE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A7B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A7B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A7B4u);

L_1100A7B4:
    PUSH32(esp, 4); /* 0x1100A7B4: push 4 */
    eax = 0x1103C2E5u; /* 0x1100A7B6: mov eax, 0x1103c2e5 */
    RECOMP_CALL(sub_1103B372); /* 0x1100A7BB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100A7C0: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100A7C2: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003E78u; /* 0x1100A7C5: mov dword ptr [esi], 0x11003e78 */
    PUSH32(esp, 3); /* 0x1100A7CB: push 3 */
    ecx = POP32_VAL(esp); /* 0x1100A7CD: pop ecx */
    eax = esi; /* 0x1100A7CE: mov eax, esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1100A7D0: mov dword ptr [ebp - 4], ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100A7D3: cdq  */
    PUSH32(esp, edx); /* 0x1100A7D4: push edx */
    PUSH32(esp, eax); /* 0x1100A7D5: push eax */
    PUSH32(esp, ecx); /* 0x1100A7D6: push ecx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100A7D7: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100A7DD: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100A7E0: mov byte ptr [ebp - 4], 2 */
    ecx = esi + 0xB8; /* 0x1100A7E4: lea ecx, [esi + 0xb8] */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100A7EA: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x20; /* 0x1100A7F0: lea ecx, [esi + 0x20] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100A7F3: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100A814); /* 0x1100A7F7: call 0x1100a814 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0xC; /* 0x1100A7FC: lea ecx, [esi + 0xc] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100A7FF: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1100A680); /* 0x1100A803: call 0x1100a680 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11004504u; /* 0x1100A808: mov dword ptr [esi], 0x11004504 */
    RECOMP_CALL(sub_1103B340); /* 0x1100A80E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A813: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A814(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A814u);

L_1100A814:
    PUSH32(esp, 4); /* 0x1100A814: push 4 */
    eax = 0x1103C33Au; /* 0x1100A816: mov eax, 0x1103c33a */
    RECOMP_CALL(sub_1103B372); /* 0x1100A81B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100A820: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100A822: mov dword ptr [ebp - 0x10], edi */
    MEM32(edi) = 0x11004040u; /* 0x1100A825: mov dword ptr [edi], 0x11004040 */
    MEM32(ebp + (-0x4)) = 4; /* 0x1100A82B: mov dword ptr [ebp - 4], 4 */
    RECOMP_CALL(sub_1100A161); /* 0x1100A832: call 0x1100a161 */
    RECOMP_FLAGS_IN();
    esi = edi + 0x80; /* 0x1100A837: lea esi, [edi + 0x80] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1100A83D: mov byte ptr [ebp - 4], 3 */
    ecx = esi; /* 0x1100A841: mov ecx, esi */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A843: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1100A848: mov ecx, esi */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A84A: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x68; /* 0x1100A84F: lea ecx, [edi + 0x68] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100A852: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A856: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x68; /* 0x1100A85B: lea ecx, [edi + 0x68] */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A85E: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x50; /* 0x1100A863: lea ecx, [edi + 0x50] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100A866: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A86A: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x50; /* 0x1100A86F: lea ecx, [edi + 0x50] */
    RECOMP_CALL(sub_1100B58D); /* 0x1100A872: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x18; /* 0x1100A877: lea ecx, [edi + 0x18] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100A87A: mov byte ptr [ebp - 4], 0 */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100A87E: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100A884: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x4; /* 0x1100A888: lea ecx, [edi + 4] */
    RECOMP_CALL(sub_1100CB19); /* 0x1100A88B: call 0x1100cb19 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100A890: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A895: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A896(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A896u);

L_1100A896:
    PUSH32(esp, 0x10u); /* 0x1100A896: push 0x10 */
    eax = 0x1103C032u; /* 0x1100A898: mov eax, 0x1103c032 */
    RECOMP_CALL(sub_1103B372); /* 0x1100A89D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100A8A2: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100A8A4: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11004098u; /* 0x1100A8A7: mov dword ptr [esi], 0x11004098 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100A8AD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_110097C8); /* 0x1100A8B1: call 0x110097c8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100A8B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A8D6; /* 0x1100A8B8: je 0x1100a8d6 */
L_1100A8BA:
    PUSH32(esp, 0x1100388Cu); /* 0x1100A8BA: push 0x1100388c */
    ecx = ebp + (-0x1C); /* 0x1100A8BF: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110690E8)); /* 0x1100A8C2: call dword ptr [0x110690e8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1104550Cu); /* 0x1100A8C8: push 0x1104550c */
    eax = ebp + (-0x1C); /* 0x1100A8CD: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1100A8D0: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100A8D1: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100A8D6:
    ecx = esi + 0x8; /* 0x1100A8D6: lea ecx, [esi + 8] */
    RECOMP_CALL(sub_1100B222); /* 0x1100A8D9: call 0x1100b222 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100A8DE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100A8E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100A8E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100A8E4u);

L_1100A8E4:
    PUSH32(esp, 0x58u); /* 0x1100A8E4: push 0x58 */
    eax = 0x1103C3B9u; /* 0x1100A8E6: mov eax, 0x1103c3b9 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1100A8EB: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100A8F0: mov esi, ecx */
    eax = MEM32(ebp + 0x8); /* 0x1100A8F2: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x64)) = esi; /* 0x1100A8F5: mov dword ptr [ebp - 0x64], esi */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1100A8F8: mov dword ptr [ebp - 0x5c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100A8FB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x4; /* 0x1100A8FD: lea ecx, [esi + 4] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100A900: mov dword ptr [ebp - 4], ebx */
    MEM32(esi) = 0x11003CBCu; /* 0x1100A903: mov dword ptr [esi], 0x11003cbc */
    RECOMP_CALL(sub_1100C6CD); /* 0x1100A909: call 0x1100c6cd */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100A90E: mov byte ptr [ebp - 4], 1 */
    edi = esi + 0x60; /* 0x1100A912: lea edi, [esi + 0x60] */
    ecx = edi; /* 0x1100A915: mov ecx, edi */
    MEM32(esi + 0x54) = ebx; /* 0x1100A917: mov dword ptr [esi + 0x54], ebx */
    MEM8(esi + 0x58) = (uint8_t)(LO8(ebx)); /* 0x1100A91A: mov byte ptr [esi + 0x58], bl */
    RECOMP_CALL(sub_1100C670); /* 0x1100A91D: call 0x1100c670 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1100A922: mov eax, edi */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100A924: mov byte ptr [ebp - 4], 2 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100A928: cdq  */
    PUSH32(esp, edx); /* 0x1100A929: push edx */
    PUSH32(esp, eax); /* 0x1100A92A: push eax */
    eax = esi; /* 0x1100A92B: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100A92D: cdq  */
    PUSH32(esp, edx); /* 0x1100A92E: push edx */
    PUSH32(esp, eax); /* 0x1100A92F: push eax */
    PUSH32(esp, ebx); /* 0x1100A930: push ebx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100A931: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100A937: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 3; /* 0x1100A93A: mov dword ptr [ebp - 4], 3 */
    ebx = esi + 0xF8; /* 0x1100A941: lea ebx, [esi + 0xf8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1100A947: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x110042DCu; /* 0x1100A949: mov dword ptr [esi], 0x110042dc */
    MEM32(ebp + (-0x60)) = ebx; /* 0x1100A94F: mov dword ptr [ebp - 0x60], ebx */
    MEM32(ebx + 0x10) = edx; /* 0x1100A952: mov dword ptr [ebx + 0x10], edx */
    eax = MEM32(ebp + (-0x5C)); /* 0x1100A955: mov eax, dword ptr [ebp - 0x5c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x1100A958: mov byte ptr [ebp - 4], 4 */
    ecx = MEM32(eax + 0x10); /* 0x1100A95C: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100A95F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100A968; /* 0x1100A961: jne 0x1100a968 */
L_1100A963:
    MEM32(ebx + 0x10) = edx; /* 0x1100A963: mov dword ptr [ebx + 0x10], edx */
    goto L_1100A977; /* 0x1100A966: jmp 0x1100a977 */
L_1100A968:
    /* cmp ecx, eax */ /* 0x1100A968: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x1100A96A: mov eax, dword ptr [ecx] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100A971; /* 0x1100A96C: jne 0x1100a971 */
L_1100A96E:
    PUSH32(esp, ebx); /* 0x1100A96E: push ebx */
    goto L_1100A972; /* 0x1100A96F: jmp 0x1100a972 */
L_1100A971:
    PUSH32(esp, edx); /* 0x1100A971: push edx */
L_1100A972:
    RECOMP_ICALL(MEM32(eax)); /* 0x1100A972: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x10) = eax; /* 0x1100A974: mov dword ptr [ebx + 0x10], eax */
L_1100A977:
    eax = ebp + (-0x28); /* 0x1100A977: lea eax, [ebp - 0x28] */
    MEM32(ebp + (-0x28)) = 0x11003C30u; /* 0x1100A97A: mov dword ptr [ebp - 0x28], 0x11003c30 */
    MEM32(ebp + (-0x24)) = esi; /* 0x1100A981: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1100A984: mov dword ptr [ebp - 0x18], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(7); /* 0x1100A987: mov byte ptr [ebp - 4], 7 */
    ecx = edi + 0x50; /* 0x1100A98B: lea ecx, [edi + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100A98E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100A990: push eax */
    MEM32(edi + 0x3C) = ebx; /* 0x1100A991: mov dword ptr [edi + 0x3c], ebx */
    MEM32(edi + 0x40) = ebx; /* 0x1100A994: mov dword ptr [edi + 0x40], ebx */
    RECOMP_CALL(sub_1100B3B0); /* 0x1100A997: call 0x1100b3b0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x44) = ebx; /* 0x1100A99C: mov dword ptr [edi + 0x44], ebx */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x1100A99F: mov byte ptr [ebp - 4], 5 */
    ecx = MEM32(ebp + (-0x18)); /* 0x1100A9A3: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x1100A9A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100A9BE; /* 0x1100A9A8: je 0x1100a9be */
L_1100A9AA:
    edx = MEM32(ecx); /* 0x1100A9AA: mov edx, dword ptr [ecx] */
    eax = ebp + (-0x28); /* 0x1100A9AC: lea eax, [ebp - 0x28] */
    /* cmp ecx, eax */ /* 0x1100A9AF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100A9B1: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1100A9B4: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100A9B7: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100A9B8: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = ebx; /* 0x1100A9BB: mov dword ptr [ebp - 0x18], ebx */
L_1100A9BE:
    MEM32(esi + 0x50) = esi; /* 0x1100A9BE: mov dword ptr [esi + 0x50], esi */
    MEM32(ebp + (-0x48)) = ebx; /* 0x1100A9C1: mov dword ptr [ebp - 0x48], ebx */
    eax = ebp + (-0x40); /* 0x1100A9C4: lea eax, [ebp - 0x40] */
    MEM32(ebp + (-0x40)) = 0x11004154u; /* 0x1100A9C7: mov dword ptr [ebp - 0x40], 0x11004154 */
    MEM32(ebp + (-0x3C)) = esi; /* 0x1100A9CE: mov dword ptr [ebp - 0x3c], esi */
    MEM32(ebp + (-0x30)) = eax; /* 0x1100A9D1: mov dword ptr [ebp - 0x30], eax */
    ecx = ebp + (-0x58); /* 0x1100A9D4: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x1100A9D7: mov byte ptr [ebp - 4], 0xa */
    eax = MEM32(edi); /* 0x1100A9DB: mov eax, dword ptr [edi] */
    PUSH32(esp, ecx); /* 0x1100A9DD: push ecx */
    ecx = ebp + (-0x40); /* 0x1100A9DE: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1100A9E1: push ecx */
    ecx = edi; /* 0x1100A9E2: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100A9E4: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x1100A9E7: mov byte ptr [ebp - 4], 8 */
    ecx = MEM32(ebp + (-0x30)); /* 0x1100A9EB: mov ecx, dword ptr [ebp - 0x30] */
    /* test ecx, ecx */ /* 0x1100A9EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AA06; /* 0x1100A9F0: je 0x1100aa06 */
L_1100A9F2:
    edx = MEM32(ecx); /* 0x1100A9F2: mov edx, dword ptr [ecx] */
    eax = ebp + (-0x40); /* 0x1100A9F4: lea eax, [ebp - 0x40] */
    /* cmp ecx, eax */ /* 0x1100A9F7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100A9F9: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1100A9FC: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100A9FF: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100AA00: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x30)) = ebx; /* 0x1100AA03: mov dword ptr [ebp - 0x30], ebx */
L_1100AA06:
    ecx = ebp + (-0x58); /* 0x1100AA06: lea ecx, [ebp - 0x58] */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x1100AA09: mov byte ptr [ebp - 4], 5 */
    RECOMP_CALL(sub_1100B58D); /* 0x1100AA0D: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x58); /* 0x1100AA12: lea ecx, [ebp - 0x58] */
    RECOMP_CALL(sub_1100B58D); /* 0x1100AA15: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100AA1A: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1100AA1C: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AA21: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AA24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AA24u);

L_1100AA24:
    PUSH32(esp, 4); /* 0x1100AA24: push 4 */
    eax = 0x1103C3F4u; /* 0x1100AA26: mov eax, 0x1103c3f4 */
    RECOMP_CALL(sub_1103B372); /* 0x1100AA2B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100AA30: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100AA32: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x110042DCu; /* 0x1100AA35: mov dword ptr [esi], 0x110042dc */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100AA3B: mov dword ptr [ebp - 4], 1 */
    ecx = esi + 0x60; /* 0x1100AA42: lea ecx, [esi + 0x60] */
    eax = MEM32(ecx); /* 0x1100AA45: mov eax, dword ptr [ecx] */
    MEM8(esi + 0x58) = (uint8_t)(1); /* 0x1100AA47: mov byte ptr [esi + 0x58], 1 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100AA4B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100AA4E: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100AA50: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100AA52: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0xF8; /* 0x1100AA55: lea ecx, [esi + 0xf8] */
    RECOMP_CALL(sub_1100A32D); /* 0x1100AA5B: call 0x1100a32d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100AA60: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100AA64: mov ecx, esi */
    RECOMP_CALL(sub_1100AB06); /* 0x1100AA66: call 0x1100ab06 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100AA6B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100AA70: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100AA71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AA71u);

L_1100AA71:
    PUSH32(esp, ebp); /* 0x1100AA71: push ebp */
    ebp = esp; /* 0x1100AA72: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100AA74: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100AA77: push esi */
    PUSH32(esp, edi); /* 0x1100AA78: push edi */
    edi = ecx; /* 0x1100AA79: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100AA7B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x1100AA7D: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1100AA80: push edi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1100AA81: push dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x1100AA84: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100AA86: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1100AA89: mov edx, eax */
    /* test edx, edx */ /* 0x1100AA8B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AA99; /* 0x1100AA8D: je 0x1100aa99 */
L_1100AA8F:
    ecx = edi + 0x60; /* 0x1100AA8F: lea ecx, [edi + 0x60] */
    eax = MEM32(ecx); /* 0x1100AA92: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1100AA94: push edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x1100AA95: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_1100AA9C; /* 0x1100AA97: jmp 0x1100aa9c */
L_1100AA99:
    PUSH32(esp, 3); /* 0x1100AA99: push 3 */
    esi = POP32_VAL(esp); /* 0x1100AA9B: pop esi */
L_1100AA9C:
    edi = POP32_VAL(esp); /* 0x1100AA9C: pop edi */
    eax = esi; /* 0x1100AA9D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AA9F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AAA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100AAA1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100AAA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AAA4u);

L_1100AAA4:
    PUSH32(esp, ebp); /* 0x1100AAA4: push ebp */
    ebp = esp; /* 0x1100AAA5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100AAA7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1100AAAA: push esi */
    PUSH32(esp, edi); /* 0x1100AAAB: push edi */
    edi = ecx; /* 0x1100AAAC: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100AAAE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x1100AAB0: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1100AAB3: push edi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1100AAB4: push dword ptr [eax + 4] */
    edx = MEM32(ecx); /* 0x1100AAB7: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100AAB9: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1100AABC: mov edx, eax */
    /* test edx, edx */ /* 0x1100AABE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AACD; /* 0x1100AAC0: je 0x1100aacd */
L_1100AAC2:
    ecx = edi + 0x60; /* 0x1100AAC2: lea ecx, [edi + 0x60] */
    eax = MEM32(ecx); /* 0x1100AAC5: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1100AAC7: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100AAC8: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_1100AAD0; /* 0x1100AACB: jmp 0x1100aad0 */
L_1100AACD:
    PUSH32(esp, 3); /* 0x1100AACD: push 3 */
    esi = POP32_VAL(esp); /* 0x1100AACF: pop esi */
L_1100AAD0:
    edi = POP32_VAL(esp); /* 0x1100AAD0: pop edi */
    eax = esi; /* 0x1100AAD1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AAD3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AAD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100AAD5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100AAD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AAD8u);

L_1100AAD8:
    PUSH32(esp, ebp); /* 0x1100AAD8: push ebp */
    ebp = esp; /* 0x1100AAD9: mov ebp, esp */
    ecx = MEM32(ecx + 0x108); /* 0x1100AADB: mov ecx, dword ptr [ecx + 0x108] */
    /* test ecx, ecx */ /* 0x1100AAE1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AB00; /* 0x1100AAE3: je 0x1100ab00 */
L_1100AAE5:
    edx = MEM32(ecx); /* 0x1100AAE5: mov edx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100AAE7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100AAE8: mov esi, dword ptr [ebp + 8] */
    eax = esi + 0x8; /* 0x1100AAEB: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1100AAEE: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100AAEF: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100AAF2: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100AAF4: mov ecx, esi */
    PUSH32(esp, 1); /* 0x1100AAF6: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100AAF8: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1100AAFB: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AAFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AAFD: ret 4 */
L_1100AB00:
    RECOMP_CALL(sub_11013989); /* 0x1100AB00: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100AB05u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100AB06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AB06u);

L_1100AB06:
    PUSH32(esp, 4); /* 0x1100AB06: push 4 */
    eax = 0x1103C42Du; /* 0x1100AB08: mov eax, 0x1103c42d */
    RECOMP_CALL(sub_1103B372); /* 0x1100AB0D: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100AB12: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100AB14: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003CBCu; /* 0x1100AB17: mov dword ptr [esi], 0x11003cbc */
    MEM32(ebp + (-0x4)) = 2; /* 0x1100AB1D: mov dword ptr [ebp - 4], 2 */
    ecx = MEM32(esi + 0x54); /* 0x1100AB24: mov ecx, dword ptr [esi + 0x54] */
    /* test ecx, ecx */ /* 0x1100AB27: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AB31; /* 0x1100AB29: je 0x1100ab31 */
L_1100AB2B:
    PUSH32(esp, ecx); /* 0x1100AB2B: push ecx */
    RECOMP_CALL(sub_1100B054); /* 0x1100AB2C: call 0x1100b054 */
    RECOMP_FLAGS_IN();
L_1100AB31:
    eax = esi; /* 0x1100AB31: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100AB33: cdq  */
    PUSH32(esp, edx); /* 0x1100AB34: push edx */
    PUSH32(esp, eax); /* 0x1100AB35: push eax */
    PUSH32(esp, 3); /* 0x1100AB36: push 3 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100AB38: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100AB3E: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100AB41: mov byte ptr [ebp - 4], 1 */
    ecx = esi + 0x60; /* 0x1100AB45: lea ecx, [esi + 0x60] */
    RECOMP_CALL(sub_1100A814); /* 0x1100AB48: call 0x1100a814 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x4; /* 0x1100AB4D: lea ecx, [esi + 4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100AB50: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1100B6B0); /* 0x1100AB54: call 0x1100b6b0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11003E58u; /* 0x1100AB59: mov dword ptr [esi], 0x11003e58 */
    RECOMP_CALL(sub_1103B340); /* 0x1100AB5F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100AB64: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100AB65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AB65u);

L_1100AB65:
    PUSH32(esp, ebp); /* 0x1100AB65: push ebp */
    ebp = esp; /* 0x1100AB66: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100AB68: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100AB6B: push esi */
    PUSH32(esp, edi); /* 0x1100AB6C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100AB6D: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100AB70: mov esi, ecx */
    /* test edi, edi */ /* 0x1100AB72: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100ABBE; /* 0x1100AB74: je 0x1100abbe */
L_1100AB76:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100AB76: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100AB85; /* 0x1100AB7A: jne 0x1100ab85 */
L_1100AB7C:
    MEM32(ebp + 0xC) = 0x110038D8u; /* 0x1100AB7C: mov dword ptr [ebp + 0xc], 0x110038d8 */
    goto L_1100ABC5; /* 0x1100AB83: jmp 0x1100abc5 */
L_1100AB85:
    /* cmp MEM8(esi + 0x58), 0 */ /* 0x1100AB85: cmp byte ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100AB90; /* 0x1100AB89: je 0x1100ab90 */
L_1100AB8B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100AB8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100AB8D: inc eax */
    _flag_k = FK_INC;
    goto L_1100ABB6; /* 0x1100AB8E: jmp 0x1100abb6 */
L_1100AB90:
    eax = MEM32(esi + 0x54); /* 0x1100AB90: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x1100AB93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100ABAB; /* 0x1100AB95: je 0x1100abab */
L_1100AB97:
    ecx = MEM32(eax + 0x10); /* 0x1100AB97: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100AB9A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100ABE7; /* 0x1100AB9C: je 0x1100abe7 */
L_1100AB9E:
    edx = MEM32(ecx); /* 0x1100AB9E: mov edx, dword ptr [ecx] */
    eax = edi + 0x8; /* 0x1100ABA0: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1100ABA3: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100ABA4: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100ABA7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AB8B; /* 0x1100ABA9: je 0x1100ab8b */
L_1100ABAB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100ABAB: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1100ABAE: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100ABB0: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1100ABB2: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1100ABB3: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
L_1100ABB6:
    edi = POP32_VAL(esp); /* 0x1100ABB6: pop edi */
    esi = POP32_VAL(esp); /* 0x1100ABB7: pop esi */
    esp = ebp; /* 0x1100ABB8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100ABBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100ABBB: ret 8 */
L_1100ABBE:
    MEM32(ebp + 0xC) = 0x110038CCu; /* 0x1100ABBE: mov dword ptr [ebp + 0xc], 0x110038cc */
L_1100ABC5:
    eax = ebp + 0xC; /* 0x1100ABC5: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1100ABC8: push eax */
    ecx = ebp + (-0xC); /* 0x1100ABC9: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100ABCC: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100ABD2: push 0x11045568 */
    eax = ebp + (-0xC); /* 0x1100ABD7: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x1100ABDA: mov dword ptr [ebp - 0xc], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100ABE1: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100ABE2: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100ABE7:
    RECOMP_CALL(sub_11013989); /* 0x1100ABE7: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100ABECu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100ABED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ABEDu);

L_1100ABED:
    PUSH32(esp, ebp); /* 0x1100ABED: push ebp */
    ebp = esp; /* 0x1100ABEE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1100ABF0: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100ABF3: push esi */
    PUSH32(esp, edi); /* 0x1100ABF4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100ABF5: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100ABF8: mov esi, ecx */
    /* test edi, edi */ /* 0x1100ABFA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AC46; /* 0x1100ABFC: je 0x1100ac46 */
L_1100ABFE:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1100ABFE: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100AC0D; /* 0x1100AC02: jne 0x1100ac0d */
L_1100AC04:
    MEM32(ebp + 0xC) = 0x110038D8u; /* 0x1100AC04: mov dword ptr [ebp + 0xc], 0x110038d8 */
    goto L_1100AC4D; /* 0x1100AC0B: jmp 0x1100ac4d */
L_1100AC0D:
    /* cmp MEM8(esi + 0x58), 0 */ /* 0x1100AC0D: cmp byte ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x58)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100AC18; /* 0x1100AC11: je 0x1100ac18 */
L_1100AC13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100AC13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100AC15: inc eax */
    _flag_k = FK_INC;
    goto L_1100AC3E; /* 0x1100AC16: jmp 0x1100ac3e */
L_1100AC18:
    eax = MEM32(esi + 0x54); /* 0x1100AC18: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x1100AC1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AC33; /* 0x1100AC1D: je 0x1100ac33 */
L_1100AC1F:
    ecx = MEM32(eax + 0x10); /* 0x1100AC1F: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x1100AC22: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AC6F; /* 0x1100AC24: je 0x1100ac6f */
L_1100AC26:
    edx = MEM32(ecx); /* 0x1100AC26: mov edx, dword ptr [ecx] */
    eax = edi + 0x8; /* 0x1100AC28: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1100AC2B: push eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100AC2C: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100AC2F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AC13; /* 0x1100AC31: je 0x1100ac13 */
L_1100AC33:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100AC33: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1100AC36: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100AC38: mov ecx, esi */
    PUSH32(esp, edi); /* 0x1100AC3A: push edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1100AC3B: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
L_1100AC3E:
    edi = POP32_VAL(esp); /* 0x1100AC3E: pop edi */
    esi = POP32_VAL(esp); /* 0x1100AC3F: pop esi */
    esp = ebp; /* 0x1100AC40: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100AC42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100AC43: ret 8 */
L_1100AC46:
    MEM32(ebp + 0xC) = 0x110038CCu; /* 0x1100AC46: mov dword ptr [ebp + 0xc], 0x110038cc */
L_1100AC4D:
    eax = ebp + 0xC; /* 0x1100AC4D: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1100AC50: push eax */
    ecx = ebp + (-0xC); /* 0x1100AC51: lea ecx, [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100AC54: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100AC5A: push 0x11045568 */
    eax = ebp + (-0xC); /* 0x1100AC5F: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x11001470u; /* 0x1100AC62: mov dword ptr [ebp - 0xc], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100AC69: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100AC6A: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100AC6F:
    RECOMP_CALL(sub_11013989); /* 0x1100AC6F: call 0x11013989 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100AC74u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100AC75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AC75u);

L_1100AC75:
    PUSH32(esp, ebp); /* 0x1100AC75: push ebp */
    ebp = esp; /* 0x1100AC76: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AC78: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100AC79: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100AC7C: mov esi, ecx */
    ecx = esi + 0x4; /* 0x1100AC7E: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B497); /* 0x1100AC81: call 0x1100b497 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100AC86: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100AC88: cdq  */
    PUSH32(esp, edx); /* 0x1100AC89: push edx */
    PUSH32(esp, eax); /* 0x1100AC8A: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1100AC8B: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100AC8E: cdq  */
    PUSH32(esp, edx); /* 0x1100AC8F: push edx */
    PUSH32(esp, eax); /* 0x1100AC90: push eax */
    PUSH32(esp, 5); /* 0x1100AC91: push 5 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100AC93: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100AC99: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1100AC9C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AC9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AC9E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100ACA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ACA1u);

L_1100ACA1:
    PUSH32(esp, ebp); /* 0x1100ACA1: push ebp */
    ebp = esp; /* 0x1100ACA2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100ACA4: push esi */
    esi = ecx; /* 0x1100ACA5: mov esi, ecx */
    eax = esi; /* 0x1100ACA7: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100ACA9: cdq  */
    PUSH32(esp, edx); /* 0x1100ACAA: push edx */
    PUSH32(esp, eax); /* 0x1100ACAB: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1100ACAC: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100ACAF: cdq  */
    PUSH32(esp, edx); /* 0x1100ACB0: push edx */
    PUSH32(esp, eax); /* 0x1100ACB1: push eax */
    PUSH32(esp, 6); /* 0x1100ACB2: push 6 */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100ACB4: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100ACBA: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = esi + 0x4; /* 0x1100ACBD: lea ecx, [esi + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100ACC0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100B4EB); /* 0x1100ACC3: call 0x1100b4eb */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1100ACC8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100ACC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100ACCA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100ACCD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ACCDu);

L_1100ACCD:
    PUSH32(esp, 0x1Cu); /* 0x1100ACCD: push 0x1c */
    eax = 0x1103C29Eu; /* 0x1100ACCF: mov eax, 0x1103c29e */
    RECOMP_CALL(sub_1103B372); /* 0x1100ACD4: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100ACD9: mov esi, ecx */
    eax = ebp + (-0x28); /* 0x1100ACDB: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1100ACDE: push eax */
    ecx = esi + 0x4; /* 0x1100ACDF: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B6EA); /* 0x1100ACE2: call 0x1100b6ea */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100ACE7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x14)); /* 0x1100ACEB: mov eax, dword ptr [ebp - 0x14] */
L_1100ACEE:
    ecx = ebp + (-0x10); /* 0x1100ACEE: lea ecx, [ebp - 0x10] */
    edx = MEM32(ebp + (-0x24)); /* 0x1100ACF1: mov edx, dword ptr [ebp - 0x24] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1100ACF4: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100ACFC; /* 0x1100ACF7: jae 0x1100acfc */
L_1100ACF9:
    ecx = edx + eax * 4; /* 0x1100ACF9: lea ecx, [edx + eax*4] */
L_1100ACFC:
    /* cmp MEM32(ecx), 0 */ /* 0x1100ACFC: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100AD1D; /* 0x1100ACFF: je 0x1100ad1d */
L_1100AD01:
    ecx = ebp + (-0x10); /* 0x1100AD01: lea ecx, [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1100AD04: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1100AD0C; /* 0x1100AD07: jae 0x1100ad0c */
L_1100AD09:
    ecx = edx + eax * 4; /* 0x1100AD09: lea ecx, [edx + eax*4] */
L_1100AD0C:
    ecx = MEM32(ecx); /* 0x1100AD0C: mov ecx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100AD0E: push esi */
    eax = MEM32(ecx); /* 0x1100AD0F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100AD11: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1100AD14: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100AD17: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = eax; /* 0x1100AD18: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    goto L_1100ACEE; /* 0x1100AD1B: jmp 0x1100acee */
L_1100AD1D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100AD1D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100AD21: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_1100B790); /* 0x1100AD24: call 0x1100b790 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100AD29: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100AD2E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100AD2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AD2Fu);

L_1100AD2F:
    PUSH32(esp, 0x30u); /* 0x1100AD2F: push 0x30 */
    eax = 0x1103C474u; /* 0x1100AD31: mov eax, 0x1103c474 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1100AD36: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100AD3B: mov edi, ecx */
    eax = MEM32(ebp + 0xC); /* 0x1100AD3D: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100AD40: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = eax; /* 0x1100AD42: mov dword ptr [ebp - 0x34], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100AD45: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x10); /* 0x1100AD47: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1100AD4A: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x8); /* 0x1100AD4D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x1100AD50: push 4 */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1100AD52: mov dword ptr [ebp - 0x38], ebx */
    edx = POP32_VAL(esp); /* 0x1100AD55: pop edx */
    MEM32(edi) = eax; /* 0x1100AD56: mov dword ptr [edi], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1100AD58: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1100AD5A: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1100AD5D: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1100AD5F: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1100AD61: push ecx */
    RECOMP_CALL(sub_110306E8); /* 0x1100AD62: call 0x110306e8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100AD67: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = eax; /* 0x1100AD69: mov dword ptr [edi + 4], eax */
    ecx = POP32_VAL(esp); /* 0x1100AD6C: pop ecx */
    /* cmp MEM32(edi), ebx */ /* 0x1100AD6D: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100ADE4; /* 0x1100AD6F: jbe 0x1100ade4 */
L_1100AD71:
    PUSH32(esp, 0x1A0u); /* 0x1100AD71: push 0x1a0 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100AD76: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AD7C: pop ecx */
    ecx = eax; /* 0x1100AD7D: mov ecx, eax */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x1100AD7F: mov dword ptr [ebp - 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100AD82: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1100AD86: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100ADC3; /* 0x1100AD88: je 0x1100adc3 */
L_1100AD8A:
    eax = ebp + (-0x2C); /* 0x1100AD8A: lea eax, [ebp - 0x2c] */
    MEM32(ebp + (-0x2C)) = 0x11004254u; /* 0x1100AD8D: mov dword ptr [ebp - 0x2c], 0x11004254 */
    MEM32(ebp + (-0x28)) = 0x110088B0u; /* 0x1100AD94: mov dword ptr [ebp - 0x28], 0x110088b0 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1100AD9B: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1100AD9E: mov eax, dword ptr [ebp - 0x34] */
    edx = ebp + (-0x2C); /* 0x1100ADA1: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x1100ADA4: push edx */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1100ADA5: push dword ptr [ebp - 0x30] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100ADA8: mov byte ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)((ebx | 1)); _flag_b = (uint32_t)((ebx | 1));
    ebx = ebx | 1; /* 0x1100ADAC: or ebx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + esi * 4); /* 0x1100ADAF: mov eax, dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1100ADB2: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = ebx; /* 0x1100ADB5: mov dword ptr [ebp - 0x38], ebx */
    PUSH32(esp, esi); /* 0x1100ADB8: push esi */
    PUSH32(esp, eax); /* 0x1100ADB9: push eax */
    RECOMP_CALL(sub_1100B7C5); /* 0x1100ADBA: call 0x1100b7c5 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1100ADBF: mov ecx, eax */
    goto L_1100ADC5; /* 0x1100ADC1: jmp 0x1100adc5 */
L_1100ADC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100ADC3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100ADC5:
    eax = MEM32(edi + 0x4); /* 0x1100ADC5: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100ADC8: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + esi * 4) = ecx; /* 0x1100ADCC: mov dword ptr [eax + esi*4], ecx */
    /* test LO8(ebx), 1 */ /* 0x1100ADCF: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100ADDF; /* 0x1100ADD2: je 0x1100addf */
L_1100ADD4:
    ecx = ebp + (-0x2C); /* 0x1100ADD4: lea ecx, [ebp - 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1100ADD7: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1100A32D); /* 0x1100ADDA: call 0x1100a32d */
    RECOMP_FLAGS_IN();
L_1100ADDF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1100ADDF: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x1100ADE0: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100AD71; /* 0x1100ADE2: jb 0x1100ad71 */
L_1100ADE4:
    eax = edi; /* 0x1100ADE4: mov eax, edi */
    RECOMP_CALL(sub_1103B354); /* 0x1100ADE6: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100ADEB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100ADEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ADEEu);

L_1100ADEE:
    PUSH32(esp, esi); /* 0x1100ADEE: push esi */
    PUSH32(esp, edi); /* 0x1100ADEF: push edi */
    edi = ecx; /* 0x1100ADF0: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100ADF2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), esi */ /* 0x1100ADF4: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1100AE0D; /* 0x1100ADF6: jbe 0x1100ae0d */
L_1100ADF8:
    eax = MEM32(edi + 0x4); /* 0x1100ADF8: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + esi * 4); /* 0x1100ADFB: mov ecx, dword ptr [eax + esi*4] */
    /* test ecx, ecx */ /* 0x1100ADFE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AE08; /* 0x1100AE00: je 0x1100ae08 */
L_1100AE02:
    eax = MEM32(ecx); /* 0x1100AE02: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100AE04: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1100AE06: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1100AE08:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1100AE08: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x1100AE09: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1100ADF8; /* 0x1100AE0B: jb 0x1100adf8 */
L_1100AE0D:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1100AE0D: push dword ptr [edi + 4] */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100AE10: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AE16: pop ecx */
    edi = POP32_VAL(esp); /* 0x1100AE17: pop edi */
    esi = POP32_VAL(esp); /* 0x1100AE18: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100AE19: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100AE1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AE1Au);

L_1100AE1A:
    PUSH32(esp, ebp); /* 0x1100AE1A: push ebp */
    ebp = esp; /* 0x1100AE1B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AE1D: push esi */
    esi = ecx; /* 0x1100AE1E: mov esi, ecx */
    RECOMP_CALL(sub_11009207); /* 0x1100AE20: call 0x11009207 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AE25: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AE33; /* 0x1100AE29: je 0x1100ae33 */
L_1100AE2B:
    PUSH32(esp, esi); /* 0x1100AE2B: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AE2C: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AE32: pop ecx */
L_1100AE33:
    eax = esi; /* 0x1100AE33: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AE35: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AE36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AE37: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AE72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AE72u);

L_1100AE72:
    PUSH32(esp, ebp); /* 0x1100AE72: push ebp */
    ebp = esp; /* 0x1100AE73: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AE75: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100AE79: push esi */
    esi = ecx; /* 0x1100AE7A: mov esi, ecx */
    MEM32(esi) = 0x11003E58u; /* 0x1100AE7C: mov dword ptr [esi], 0x11003e58 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AE8C; /* 0x1100AE82: je 0x1100ae8c */
L_1100AE84:
    PUSH32(esp, esi); /* 0x1100AE84: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AE85: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AE8B: pop ecx */
L_1100AE8C:
    eax = esi; /* 0x1100AE8C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AE8E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AE8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AE90: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AE93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AE93u);

L_1100AE93:
    PUSH32(esp, ebp); /* 0x1100AE93: push ebp */
    ebp = esp; /* 0x1100AE94: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AE96: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100AE9A: push esi */
    esi = ecx; /* 0x1100AE9B: mov esi, ecx */
    MEM32(esi) = 0x11004504u; /* 0x1100AE9D: mov dword ptr [esi], 0x11004504 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AEAD; /* 0x1100AEA3: je 0x1100aead */
L_1100AEA5:
    PUSH32(esp, esi); /* 0x1100AEA5: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AEA6: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AEAC: pop ecx */
L_1100AEAD:
    eax = esi; /* 0x1100AEAD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AEAF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AEB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AEB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AEB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AEB4u);

L_1100AEB4:
    PUSH32(esp, ebp); /* 0x1100AEB4: push ebp */
    ebp = esp; /* 0x1100AEB5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AEB7: push esi */
    esi = ecx; /* 0x1100AEB8: mov esi, ecx */
    RECOMP_CALL(sub_110093D8); /* 0x1100AEBA: call 0x110093d8 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AEBF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AECD; /* 0x1100AEC3: je 0x1100aecd */
L_1100AEC5:
    PUSH32(esp, esi); /* 0x1100AEC5: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AEC6: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AECC: pop ecx */
L_1100AECD:
    eax = esi; /* 0x1100AECD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AECF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AED0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AED1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AEF0u);

L_1100AEF0:
    PUSH32(esp, ebp); /* 0x1100AEF0: push ebp */
    ebp = esp; /* 0x1100AEF1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AEF3: push esi */
    esi = ecx; /* 0x1100AEF4: mov esi, ecx */
    RECOMP_CALL(sub_110096EA); /* 0x1100AEF6: call 0x110096ea */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AEFB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AF09; /* 0x1100AEFF: je 0x1100af09 */
L_1100AF01:
    PUSH32(esp, esi); /* 0x1100AF01: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AF02: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AF08: pop ecx */
L_1100AF09:
    eax = esi; /* 0x1100AF09: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AF0B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AF0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AF0D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AF10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AF10u);

L_1100AF10:
    PUSH32(esp, ebp); /* 0x1100AF10: push ebp */
    ebp = esp; /* 0x1100AF11: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AF13: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100AF17: push esi */
    esi = ecx; /* 0x1100AF18: mov esi, ecx */
    MEM32(esi) = 0x11004218u; /* 0x1100AF1A: mov dword ptr [esi], 0x11004218 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AF2A; /* 0x1100AF20: je 0x1100af2a */
L_1100AF22:
    PUSH32(esp, esi); /* 0x1100AF22: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AF23: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AF29: pop ecx */
L_1100AF2A:
    eax = esi; /* 0x1100AF2A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AF2C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AF2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AF2E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AF31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AF31u);

L_1100AF31:
    PUSH32(esp, ebp); /* 0x1100AF31: push ebp */
    ebp = esp; /* 0x1100AF32: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AF34: push esi */
    esi = ecx; /* 0x1100AF35: mov esi, ecx */
    RECOMP_CALL(sub_1100984E); /* 0x1100AF37: call 0x1100984e */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AF3C: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AF4A; /* 0x1100AF40: je 0x1100af4a */
L_1100AF42:
    PUSH32(esp, esi); /* 0x1100AF42: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AF43: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AF49: pop ecx */
L_1100AF4A:
    eax = esi; /* 0x1100AF4A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AF4C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AF4D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AF4E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AF51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AF51u);

L_1100AF51:
    PUSH32(esp, ebp); /* 0x1100AF51: push ebp */
    ebp = esp; /* 0x1100AF52: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AF54: push esi */
    esi = ecx; /* 0x1100AF55: mov esi, ecx */
    RECOMP_CALL(sub_11009B05); /* 0x1100AF57: call 0x11009b05 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AF5C: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AF6A; /* 0x1100AF60: je 0x1100af6a */
L_1100AF62:
    PUSH32(esp, esi); /* 0x1100AF62: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AF63: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AF69: pop ecx */
L_1100AF6A:
    eax = esi; /* 0x1100AF6A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AF6C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AF6D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AF6E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AF93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AF93u);

L_1100AF93:
    PUSH32(esp, ebp); /* 0x1100AF93: push ebp */
    ebp = esp; /* 0x1100AF94: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AF96: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100AF9A: push esi */
    esi = ecx; /* 0x1100AF9B: mov esi, ecx */
    MEM32(esi) = 0x11003FA8u; /* 0x1100AF9D: mov dword ptr [esi], 0x11003fa8 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AFAD; /* 0x1100AFA3: je 0x1100afad */
L_1100AFA5:
    PUSH32(esp, esi); /* 0x1100AFA5: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AFA6: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AFAC: pop ecx */
L_1100AFAD:
    eax = esi; /* 0x1100AFAD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AFAF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AFB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AFB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AFB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AFB4u);

L_1100AFB4:
    PUSH32(esp, ebp); /* 0x1100AFB4: push ebp */
    ebp = esp; /* 0x1100AFB5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AFB7: push esi */
    esi = ecx; /* 0x1100AFB8: mov esi, ecx */
    RECOMP_CALL(sub_11009FD3); /* 0x1100AFBA: call 0x11009fd3 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AFBF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AFCD; /* 0x1100AFC3: je 0x1100afcd */
L_1100AFC5:
    PUSH32(esp, esi); /* 0x1100AFC5: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AFC6: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AFCC: pop ecx */
L_1100AFCD:
    eax = esi; /* 0x1100AFCD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AFCF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AFD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AFD1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AFD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AFD4u);

L_1100AFD4:
    PUSH32(esp, ebp); /* 0x1100AFD4: push ebp */
    ebp = esp; /* 0x1100AFD5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AFD7: push esi */
    esi = ecx; /* 0x1100AFD8: mov esi, ecx */
    RECOMP_CALL(sub_1100A2CC); /* 0x1100AFDA: call 0x1100a2cc */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AFDF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100AFED; /* 0x1100AFE3: je 0x1100afed */
L_1100AFE5:
    PUSH32(esp, esi); /* 0x1100AFE5: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100AFE6: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100AFEC: pop ecx */
L_1100AFED:
    eax = esi; /* 0x1100AFED: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100AFEF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100AFF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100AFF1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100AFF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100AFF4u);

L_1100AFF4:
    PUSH32(esp, ebp); /* 0x1100AFF4: push ebp */
    ebp = esp; /* 0x1100AFF5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100AFF7: push esi */
    esi = ecx; /* 0x1100AFF8: mov esi, ecx */
    RECOMP_CALL(sub_1100A3F0); /* 0x1100AFFA: call 0x1100a3f0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100AFFF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B00D; /* 0x1100B003: je 0x1100b00d */
L_1100B005:
    PUSH32(esp, esi); /* 0x1100B005: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B006: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B00C: pop ecx */
L_1100B00D:
    eax = esi; /* 0x1100B00D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B00F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B010: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B011: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B014(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B014u);

L_1100B014:
    PUSH32(esp, ebp); /* 0x1100B014: push ebp */
    ebp = esp; /* 0x1100B015: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B017: push esi */
    esi = ecx; /* 0x1100B018: mov esi, ecx */
    RECOMP_CALL(sub_1100A680); /* 0x1100B01A: call 0x1100a680 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100B01F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B02D; /* 0x1100B023: je 0x1100b02d */
L_1100B025:
    PUSH32(esp, esi); /* 0x1100B025: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B026: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B02C: pop ecx */
L_1100B02D:
    eax = esi; /* 0x1100B02D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B02F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B030: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B031: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B034(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B034u);

L_1100B034:
    PUSH32(esp, ebp); /* 0x1100B034: push ebp */
    ebp = esp; /* 0x1100B035: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B037: push esi */
    esi = ecx; /* 0x1100B038: mov esi, ecx */
    RECOMP_CALL(sub_1100A6DF); /* 0x1100B03A: call 0x1100a6df */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100B03F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B04D; /* 0x1100B043: je 0x1100b04d */
L_1100B045:
    PUSH32(esp, esi); /* 0x1100B045: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B046: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B04C: pop ecx */
L_1100B04D:
    eax = esi; /* 0x1100B04D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B04F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B050: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B051: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B054(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B054u);

L_1100B054:
    PUSH32(esp, esi); /* 0x1100B054: push esi */
    esi = ecx; /* 0x1100B055: mov esi, ecx */
    ecx = MEM32(esi + 0x10); /* 0x1100B057: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x1100B05A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B070; /* 0x1100B05C: je 0x1100b070 */
L_1100B05E:
    edx = MEM32(ecx); /* 0x1100B05E: mov edx, dword ptr [ecx] */
    /* cmp ecx, esi */ /* 0x1100B060: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100B062: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1100B065: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100B068: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100B069: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1100B06C: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100B070:
    ecx = MEM32(esi + 0x10); /* 0x1100B070: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x1100B073: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B089; /* 0x1100B075: je 0x1100b089 */
L_1100B077:
    edx = MEM32(ecx); /* 0x1100B077: mov edx, dword ptr [ecx] */
    /* cmp ecx, esi */ /* 0x1100B079: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100B07B: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1100B07E: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100B081: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100B082: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1100B085: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100B089:
    PUSH32(esp, esi); /* 0x1100B089: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B08A: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B090: pop ecx */
    eax = esi; /* 0x1100B091: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B093: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B094: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B097(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B097u);

L_1100B097:
    PUSH32(esp, ebp); /* 0x1100B097: push ebp */
    ebp = esp; /* 0x1100B098: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B09A: push esi */
    esi = ecx; /* 0x1100B09B: mov esi, ecx */
    RECOMP_CALL(sub_1100A7B4); /* 0x1100B09D: call 0x1100a7b4 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100B0A2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B0B0; /* 0x1100B0A6: je 0x1100b0b0 */
L_1100B0A8:
    PUSH32(esp, esi); /* 0x1100B0A8: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B0A9: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B0AF: pop ecx */
L_1100B0B0:
    eax = esi; /* 0x1100B0B0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B0B2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B0B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B0B4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B0B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B0B7u);

L_1100B0B7:
    PUSH32(esp, ebp); /* 0x1100B0B7: push ebp */
    ebp = esp; /* 0x1100B0B8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B0BA: push esi */
    esi = ecx; /* 0x1100B0BB: mov esi, ecx */
    RECOMP_CALL(sub_1100A814); /* 0x1100B0BD: call 0x1100a814 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100B0C2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B0D0; /* 0x1100B0C6: je 0x1100b0d0 */
L_1100B0C8:
    PUSH32(esp, esi); /* 0x1100B0C8: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B0C9: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B0CF: pop ecx */
L_1100B0D0:
    eax = esi; /* 0x1100B0D0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B0D2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B0D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B0D4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B0D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B0D7u);

L_1100B0D7:
    PUSH32(esp, ebp); /* 0x1100B0D7: push ebp */
    ebp = esp; /* 0x1100B0D8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B0DA: push esi */
    esi = ecx; /* 0x1100B0DB: mov esi, ecx */
    RECOMP_CALL(sub_1100A896); /* 0x1100B0DD: call 0x1100a896 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100B0E2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B0F0; /* 0x1100B0E6: je 0x1100b0f0 */
L_1100B0E8:
    PUSH32(esp, esi); /* 0x1100B0E8: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B0E9: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B0EF: pop ecx */
L_1100B0F0:
    eax = esi; /* 0x1100B0F0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B0F2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B0F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B0F4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B0F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B0F7u);

L_1100B0F7:
    PUSH32(esp, ebp); /* 0x1100B0F7: push ebp */
    ebp = esp; /* 0x1100B0F8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B0FA: push esi */
    esi = ecx; /* 0x1100B0FB: mov esi, ecx */
    RECOMP_CALL(sub_1100AA24); /* 0x1100B0FD: call 0x1100aa24 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100B102: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B110; /* 0x1100B106: je 0x1100b110 */
L_1100B108:
    PUSH32(esp, esi); /* 0x1100B108: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B109: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B10F: pop ecx */
L_1100B110:
    eax = esi; /* 0x1100B110: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B112: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B113: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B114: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B117(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B117u);

L_1100B117:
    PUSH32(esp, ebp); /* 0x1100B117: push ebp */
    ebp = esp; /* 0x1100B118: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B11A: push esi */
    esi = ecx; /* 0x1100B11B: mov esi, ecx */
    RECOMP_CALL(sub_1100AB06); /* 0x1100B11D: call 0x1100ab06 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100B122: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B130; /* 0x1100B126: je 0x1100b130 */
L_1100B128:
    PUSH32(esp, esi); /* 0x1100B128: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100B129: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B12F: pop ecx */
L_1100B130:
    eax = esi; /* 0x1100B130: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B132: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B133: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B134: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B222(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B222u);

L_1100B222:
    PUSH32(esp, esi); /* 0x1100B222: push esi */
    esi = ecx; /* 0x1100B223: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x1100B225: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B23D; /* 0x1100B228: je 0x1100b23d */
L_1100B22A:
    PUSH32(esp, MEM32(esi)); /* 0x1100B22A: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100B22C: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100B232: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1100B234: pop ecx */
    MEM32(esi) = eax; /* 0x1100B235: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x1100B237: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x1100B23A: mov dword ptr [esi + 8], eax */
L_1100B23D:
    esi = POP32_VAL(esp); /* 0x1100B23D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B23E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B23F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B23Fu);

L_1100B23F:
    PUSH32(esp, ebp); /* 0x1100B23F: push ebp */
    ebp = esp; /* 0x1100B240: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100B242: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100B245: push esi */
    esi = ecx; /* 0x1100B246: mov esi, ecx */
    ecx = esi + 0x20; /* 0x1100B248: lea ecx, [esi + 0x20] */
    MEM8(esi + 0x140) = (uint8_t)(1); /* 0x1100B24B: mov byte ptr [esi + 0x140], 1 */
    eax = MEM32(ecx); /* 0x1100B252: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100B254: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100B257: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100B259: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1100B25B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x11069230); /* 0x1100B25E: mov eax, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1100B263: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100B267: mov dword ptr [ebp - 4], eax */
    goto L_1100B275; /* 0x1100B26A: jmp 0x1100b275 */
L_1100B26C:
    ecx = ebp + (-0x10); /* 0x1100B26C: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x1100B26F: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_1100B275:
    /* cmp MEM32(esi + 0xE0), 0 */ /* 0x1100B275: cmp dword ptr [esi + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B26C; /* 0x1100B27C: jne 0x1100b26c */
L_1100B27E:
    ecx = esi + 0xE8; /* 0x1100B27E: lea ecx, [esi + 0xe8] */
    eax = MEM32(ecx); /* 0x1100B284: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100B286: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1100B289: pop esi */
    esp = ebp; /* 0x1100B28A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100B28C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B28D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B28E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B28Eu);

L_1100B28E:
    PUSH32(esp, 0x1Cu); /* 0x1100B28E: push 0x1c */
    eax = 0x1103C23Cu; /* 0x1100B290: mov eax, 0x1103c23c */
    RECOMP_CALL(sub_1103B372); /* 0x1100B295: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100B29A: mov esi, ecx */
    eax = esi + 0x18; /* 0x1100B29C: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x1100B29F: push eax */
    ecx = ebp + (-0x28); /* 0x1100B2A0: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069224)); /* 0x1100B2A3: call dword ptr [0x11069224] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100B2A9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1100B2AB: mov dword ptr [ebp - 4], edi */
    /* cmp MEM32(esi + 0x44), edi */ /* 0x1100B2AE: cmp dword ptr [esi + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B2FE; /* 0x1100B2B1: jne 0x1100b2fe */
L_1100B2B3:
    ecx = esi + 0x38; /* 0x1100B2B3: lea ecx, [esi + 0x38] */
    /* cmp MEM32(ecx), edi */ /* 0x1100B2B6: cmp dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1100B2C6; /* 0x1100B2B8: jle 0x1100b2c6 */
L_1100B2BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100B2BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _tmp = MEM32(ecx); /* 0x1100B2BC: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
    PUSH32(esp, eax); /* 0x1100B2BE: push eax */
    ecx = esi; /* 0x1100B2BF: mov ecx, esi */
    RECOMP_CALL(sub_1100C4DC); /* 0x1100B2C1: call 0x1100c4dc */
    RECOMP_FLAGS_IN();
L_1100B2C6:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100B2C6: push dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x78), edi */ /* 0x1100B2C9: cmp dword ptr [esi + 0x78], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x78)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B2D8; /* 0x1100B2CC: jne 0x1100b2d8 */
L_1100B2CE:
    ecx = esi + 0x50; /* 0x1100B2CE: lea ecx, [esi + 0x50] */
    RECOMP_CALL(sub_1100C8D4); /* 0x1100B2D1: call 0x1100c8d4 */
    RECOMP_FLAGS_IN();
    goto L_1100B30C; /* 0x1100B2D6: jmp 0x1100b30c */
L_1100B2D8:
    ecx = esi + 0x68; /* 0x1100B2D8: lea ecx, [esi + 0x68] */
    RECOMP_CALL(sub_1100C8D4); /* 0x1100B2DB: call 0x1100c8d4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x90), edi */ /* 0x1100B2E0: cmp dword ptr [esi + 0x90], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B30C; /* 0x1100B2E6: je 0x1100b30c */
L_1100B2E8:
    ecx = MEM32(esi + 0x90); /* 0x1100B2E8: mov ecx, dword ptr [esi + 0x90] */
    /* test ecx, ecx */ /* 0x1100B2EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100B2F7; /* 0x1100B2F0: jne 0x1100b2f7 */
L_1100B2F2:
    RECOMP_CALL(sub_11013989); /* 0x1100B2F2: call 0x11013989 */
    RECOMP_FLAGS_IN();
L_1100B2F7:
    eax = MEM32(ecx); /* 0x1100B2F7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100B2F9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_1100B30C; /* 0x1100B2FC: jmp 0x1100b30c */
L_1100B2FE:
    ecx = MEM32(ebp + 0x8); /* 0x1100B2FE: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1100B301: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B30C; /* 0x1100B303: je 0x1100b30c */
L_1100B305:
    eax = MEM32(ecx); /* 0x1100B305: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100B307: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100B309: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100B30C:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100B30C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100B310: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069220)); /* 0x1100B313: call dword ptr [0x11069220] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100B319: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B31E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B321(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B321u);

L_1100B321:
    PUSH32(esp, 0x2Cu); /* 0x1100B321: push 0x2c */
    eax = 0x1103C4A2u; /* 0x1100B323: mov eax, 0x1103c4a2 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B328: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100B32D: mov esi, ecx */
    eax = esi + 0x18; /* 0x1100B32F: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x1100B332: push eax */
    ecx = ebp + (-0x34); /* 0x1100B333: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069224)); /* 0x1100B336: call dword ptr [0x11069224] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1100B33C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x38; /* 0x1100B33E: lea ebx, [esi + 0x38] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1100B341: mov dword ptr [ebp - 4], ecx */
    edi = ecx; /* 0x1100B344: mov edi, ecx */
    eax = MEM32(ebx); /* 0x1100B346: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1100B348: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0xD)) = (uint8_t)(LO8(ecx)); /* 0x1100B34B: mov byte ptr [ebp - 0xd], cl */
    /* cmp MEM32(ebp + (-0x14)), ecx */ /* 0x1100B34E: cmp dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1100B38F; /* 0x1100B351: jle 0x1100b38f */
L_1100B353:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100B353: push dword ptr [ebp - 0x14] */
    ecx = esi; /* 0x1100B356: mov ecx, esi */
    RECOMP_CALL(sub_1100C4DC); /* 0x1100B358: call 0x1100c4dc */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1100B35D: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1100B360: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x14)); /* 0x1100B362: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1100B365: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ebx), _sum = MEM32(ebx) + eax; eax = _old; MEM32(ebx) = _sum; } /* 0x1100B367: lock xadd dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x1100B36B: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1100B36E: mov eax, dword ptr [ebp - 0x18] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x1100B371: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B38F; /* 0x1100B374: je 0x1100b38f */
L_1100B376:
    /* cmp MEM8(ebp + (-0xD)), 0 */ /* 0x1100B376: cmp byte ptr [ebp - 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B38F; /* 0x1100B37A: jne 0x1100b38f */
L_1100B37C:
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x1100B37C: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebx); /* 0x1100B380: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1100B382: mov dword ptr [ebp - 0x14], eax */
    MEM8(ebp + (-0xD)) = (uint8_t)((CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100B385: setne byte ptr [ebp - 0xd] */
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1100B389: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1100B353; /* 0x1100B38D: jg 0x1100b353 */
L_1100B38F:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100B38F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100B393: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069220)); /* 0x1100B396: call dword ptr [0x11069220] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1100B39C: mov eax, edi */
    RECOMP_CALL(sub_1103B340); /* 0x1100B39E: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B3A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B3A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B3A4u);

L_1100B3A4:
    PUSH32(esp, ebp); /* 0x1100B3A4: push ebp */
    ebp = esp; /* 0x1100B3A5: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1100B3A7: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1100B3AA: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100B3AC: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0xC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100B3B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B3B0u);

L_1100B3B0:
    PUSH32(esp, ebp); /* 0x1100B3B0: push ebp */
    ebp = esp; /* 0x1100B3B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B3B3: push esi */
    PUSH32(esp, edi); /* 0x1100B3B4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1100B3B5: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100B3B8: mov esi, ecx */
    /* cmp esi, edi */ /* 0x1100B3BA: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B3DF; /* 0x1100B3BC: je 0x1100b3df */
L_1100B3BE:
    RECOMP_CALL(sub_1100B58D); /* 0x1100B3BE: call 0x1100b58d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x10); /* 0x1100B3C3: mov ecx, dword ptr [edi + 0x10] */
    /* test ecx, ecx */ /* 0x1100B3C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100B3CF; /* 0x1100B3C8: jne 0x1100b3cf */
L_1100B3CA:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ecx);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & ecx; /* 0x1100B3CA: and dword ptr [esi + 0x10], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1100B3DF; /* 0x1100B3CD: jmp 0x1100b3df */
L_1100B3CF:
    eax = MEM32(ecx); /* 0x1100B3CF: mov eax, dword ptr [ecx] */
    /* cmp ecx, edi */ /* 0x1100B3D1: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B3D8; /* 0x1100B3D3: jne 0x1100b3d8 */
L_1100B3D5:
    PUSH32(esp, esi); /* 0x1100B3D5: push esi */
    goto L_1100B3DA; /* 0x1100B3D6: jmp 0x1100b3da */
L_1100B3D8:
    PUSH32(esp, 0); /* 0x1100B3D8: push 0 */
L_1100B3DA:
    RECOMP_ICALL(MEM32(eax)); /* 0x1100B3DA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x1100B3DC: mov dword ptr [esi + 0x10], eax */
L_1100B3DF:
    edi = POP32_VAL(esp); /* 0x1100B3DF: pop edi */
    eax = esi; /* 0x1100B3E0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100B3E2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B3E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B3E4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B45D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B45Du);

L_1100B45D:
    PUSH32(esp, 4); /* 0x1100B45D: push 4 */
    eax = 0x1103C4D0u; /* 0x1100B45F: mov eax, 0x1103c4d0 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B464: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100B469: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100B46B: mov dword ptr [ebp - 0x10], esi */
    ecx = esi + 0x38; /* 0x1100B46E: lea ecx, [esi + 0x38] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100B471: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100A2CC); /* 0x1100B478: call 0x1100a2cc */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x2C; /* 0x1100B47D: lea ecx, [esi + 0x2c] */
    RECOMP_CALL(sub_1100B222); /* 0x1100B480: call 0x1100b222 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100B485: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100B489: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100B48B: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100B491: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B496: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B497(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B497u);

L_1100B497:
    PUSH32(esp, 0x1Cu); /* 0x1100B497: push 0x1c */
    eax = 0x1103C123u; /* 0x1100B499: mov eax, 0x1103c123 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B49E: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100B4A3: mov edi, ecx */
    esi = MEM32(ebp + 0x8); /* 0x1100B4A5: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1100B4A8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B4E3; /* 0x1100B4AA: je 0x1100b4e3 */
L_1100B4AC:
    PUSH32(esp, edi); /* 0x1100B4AC: push edi */
    ecx = ebp + (-0x28); /* 0x1100B4AD: lea ecx, [ebp - 0x28] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100B4B0: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100B4B6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x38; /* 0x1100B4BA: lea ecx, [edi + 0x38] */
    eax = MEM32(ecx); /* 0x1100B4BD: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1100B4BF: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1100B4C0: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) + 1; /* 0x1100B4C2: inc dword ptr [edi + 0x28] */
    _flag_k = FK_INC;
    ecx = ebp + (-0x28); /* 0x1100B4C5: lea ecx, [ebp - 0x28] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100B4C8: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100B4CC: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100B4D2: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100B4D4: mov ecx, esi */
    PUSH32(esp, MEM32(edi + 0x4C)); /* 0x1100B4D6: push dword ptr [edi + 0x4c] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1100B4D9: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1100B4DC: mov ecx, edi */
    RECOMP_CALL(sub_1100C5DC); /* 0x1100B4DE: call 0x1100c5dc */
    RECOMP_FLAGS_IN();
L_1100B4E3:
    RECOMP_CALL(sub_1103B340); /* 0x1100B4E3: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B4E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B4EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B4EBu);

L_1100B4EB:
    PUSH32(esp, 0x20u); /* 0x1100B4EB: push 0x20 */
    eax = 0x1103C4F4u; /* 0x1100B4ED: mov eax, 0x1103c4f4 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B4F2: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100B4F7: mov edi, ecx */
    eax = MEM32(edi + 0x4C); /* 0x1100B4F9: mov eax, dword ptr [edi + 0x4c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100B4FC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1100B4FE: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1100B501: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B50A; /* 0x1100B504: jne 0x1100b50a */
L_1100B506:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1100B506: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1100B56A; /* 0x1100B508: jmp 0x1100b56a */
L_1100B50A:
    PUSH32(esp, edi); /* 0x1100B50A: push edi */
    ecx = ebp + (-0x2C); /* 0x1100B50B: lea ecx, [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100B50E: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = esi; /* 0x1100B514: mov dword ptr [ebp - 4], esi */
    ecx = edi + 0x38; /* 0x1100B517: lea ecx, [edi + 0x38] */
    eax = MEM32(ecx); /* 0x1100B51A: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100B51C: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100B51F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, LO8(eax)); /* 0x1100B522: mov bl, al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1100B524: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100B537; /* 0x1100B526: jne 0x1100b537 */
L_1100B528:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100B528: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1100B52C: lea ecx, [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100B52F: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1100B506; /* 0x1100B535: jmp 0x1100b506 */
L_1100B537:
    /* cmp MEM32(edi + 0x28), esi */ /* 0x1100B537: cmp dword ptr [edi + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B541; /* 0x1100B53A: jne 0x1100b541 */
L_1100B53C:
    esi = MEM32(ebp + 0x8); /* 0x1100B53C: mov esi, dword ptr [ebp + 8] */
    goto L_1100B54D; /* 0x1100B53F: jmp 0x1100b54d */
L_1100B541:
    eax = ebp + 0x8; /* 0x1100B541: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100B544: push eax */
    ecx = edi + 0x2C; /* 0x1100B545: lea ecx, [edi + 0x2c] */
    RECOMP_CALL(sub_1100C53C); /* 0x1100B548: call 0x1100c53c */
    RECOMP_FLAGS_IN();
L_1100B54D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100B54D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x1100B551: lea ecx, [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100B554: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1100B55A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B568; /* 0x1100B55C: je 0x1100b568 */
L_1100B55E:
    eax = MEM32(esi); /* 0x1100B55E: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100B560: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1100B562: push dword ptr [ebp - 0x10] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1100B565: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_1100B568:
    SET_LO8(eax, LO8(ebx)); /* 0x1100B568: mov al, bl */
L_1100B56A:
    RECOMP_CALL(sub_1103B340); /* 0x1100B56A: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B56F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B572(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B572u);

L_1100B572:
    PUSH32(esp, ebp); /* 0x1100B572: push ebp */
    ebp = esp; /* 0x1100B573: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100B575: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100B576: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1100B57A: push ecx */
    PUSH32(esp, ecx); /* 0x1100B57B: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1100B57C: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100C6FF); /* 0x1100B57F: call 0x1100c6ff */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100B584: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1100B587: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100B589: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B58A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B58D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B58Du);

L_1100B58D:
    PUSH32(esp, esi); /* 0x1100B58D: push esi */
    esi = ecx; /* 0x1100B58E: mov esi, ecx */
    ecx = MEM32(esi + 0x10); /* 0x1100B590: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x1100B593: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B5A9; /* 0x1100B595: je 0x1100b5a9 */
L_1100B597:
    edx = MEM32(ecx); /* 0x1100B597: mov edx, dword ptr [ecx] */
    /* cmp ecx, esi */ /* 0x1100B599: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100B59B: setne al */
    eax = (uint32_t)LO8(eax); /* 0x1100B59E: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100B5A1: push eax */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100B5A2: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1100B5A5: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100B5A9:
    esi = POP32_VAL(esp); /* 0x1100B5A9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B5AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B5AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B5ABu);

L_1100B5AB:
    PUSH32(esp, 4); /* 0x1100B5AB: push 4 */
    eax = 0x1103C551u; /* 0x1100B5AD: mov eax, 0x1103c551 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B5B2: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100B5B7: mov edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1100B5B9: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100B5BC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100B5BE: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | 0xFFFFFFFFu));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | 0xFFFFFFFFu; /* 0x1100B5C1: or dword ptr [edi + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 0x11003E78u; /* 0x1100B5C5: mov dword ptr [edi], 0x11003e78 */
    MEM32(edi + 0x4) = ebx; /* 0x1100B5CB: mov dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)((MEM32(edi + 0x10) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x10) | 0xFFFFFFFFu));
    MEM32(edi + 0x10) = MEM32(edi + 0x10) | 0xFFFFFFFFu; /* 0x1100B5CE: or dword ptr [edi + 0x10], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC) = 0x11003DB4u; /* 0x1100B5D2: mov dword ptr [edi + 0xc], 0x11003db4 */
    MEM32(edi + 0x14) = ebx; /* 0x1100B5D9: mov dword ptr [edi + 0x14], ebx */
    MEM32(edi + 0x18) = ebx; /* 0x1100B5DC: mov dword ptr [edi + 0x18], ebx */
    MEM32(edi + 0x1C) = ebx; /* 0x1100B5DF: mov dword ptr [edi + 0x1c], ebx */
    ecx = edi + 0x20; /* 0x1100B5E2: lea ecx, [edi + 0x20] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100B5E5: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100C670); /* 0x1100B5E9: call 0x1100c670 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0xB8; /* 0x1100B5EE: lea ecx, [edi + 0xb8] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100B5F4: mov byte ptr [ebp - 4], 2 */
    RECOMP_ICALL(MEM32(0x1106921C)); /* 0x1100B5F8: call dword ptr [0x1106921c] */
    RECOMP_FLAGS_IN();
    eax = edi + 0x20; /* 0x1100B5FE: lea eax, [edi + 0x20] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1100B601: mov byte ptr [ebp - 4], 3 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100B605: cdq  */
    PUSH32(esp, edx); /* 0x1100B606: push edx */
    PUSH32(esp, eax); /* 0x1100B607: push eax */
    eax = edi; /* 0x1100B608: mov eax, edi */
    MEM32(edi + 0xE0) = ebx; /* 0x1100B60A: mov dword ptr [edi + 0xe0], ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1100B610: cdq  */
    PUSH32(esp, edx); /* 0x1100B611: push edx */
    PUSH32(esp, eax); /* 0x1100B612: push eax */
    PUSH32(esp, ebx); /* 0x1100B613: push ebx */
    RECOMP_ICALL(MEM32(0x1106920C)); /* 0x1100B614: call dword ptr [0x1106920c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100B61A: add esp, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = 4; /* 0x1100B61D: mov dword ptr [ebp - 4], 4 */
    MEM32(edi + 0xE8) = 0x11003E58u; /* 0x1100B624: mov dword ptr [edi + 0xe8], 0x11003e58 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x1100B62E: mov byte ptr [ebp - 4], 5 */
    ecx = edi + 0xEC; /* 0x1100B632: lea ecx, [edi + 0xec] */
    MEM32(edi) = 0x11004590u; /* 0x1100B638: mov dword ptr [edi], 0x11004590 */
    MEM32(edi + 0xE8) = 0x11003FF4u; /* 0x1100B63E: mov dword ptr [edi + 0xe8], 0x11003ff4 */
    RECOMP_CALL(sub_1100C6CD); /* 0x1100B648: call 0x1100c6cd */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x13C) = ebx; /* 0x1100B64D: mov dword ptr [edi + 0x13c], ebx */
    eax = edi; /* 0x1100B653: mov eax, edi */
    MEM8(edi + 0x140) = (uint8_t)(LO8(ebx)); /* 0x1100B655: mov byte ptr [edi + 0x140], bl */
    RECOMP_CALL(sub_1103B340); /* 0x1100B65B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B660: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B661(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B661u);

L_1100B661:
    PUSH32(esp, ebp); /* 0x1100B661: push ebp */
    ebp = esp; /* 0x1100B662: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1100B664: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100B667: push esi */
    esi = ecx; /* 0x1100B668: mov esi, ecx */
    ecx = esi + 0x20; /* 0x1100B66A: lea ecx, [esi + 0x20] */
    MEM8(esi + 0x140) = (uint8_t)(1); /* 0x1100B66D: mov byte ptr [esi + 0x140], 1 */
    eax = MEM32(ecx); /* 0x1100B674: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1100B676: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1100B679: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100B67B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1100B67D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x11069230); /* 0x1100B680: mov eax, dword ptr [0x11069230] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1100B685: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100B689: mov dword ptr [ebp - 4], eax */
    goto L_1100B697; /* 0x1100B68C: jmp 0x1100b697 */
L_1100B68E:
    ecx = ebp + (-0x10); /* 0x1100B68E: lea ecx, [ebp - 0x10] */
    RECOMP_ICALL(MEM32(0x11069234)); /* 0x1100B691: call dword ptr [0x11069234] */
    RECOMP_FLAGS_IN();
L_1100B697:
    /* cmp MEM32(esi + 0xE0), 0 */ /* 0x1100B697: cmp dword ptr [esi + 0xe0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xE0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B68E; /* 0x1100B69E: jne 0x1100b68e */
L_1100B6A0:
    ecx = esi + 0xE8; /* 0x1100B6A0: lea ecx, [esi + 0xe8] */
    eax = MEM32(ecx); /* 0x1100B6A6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100B6A8: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1100B6AB: pop esi */
    esp = ebp; /* 0x1100B6AC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100B6AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B6AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B6B0u);

L_1100B6B0:
    PUSH32(esp, 4); /* 0x1100B6B0: push 4 */
    eax = 0x1103C4D0u; /* 0x1100B6B2: mov eax, 0x1103c4d0 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B6B7: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100B6BC: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100B6BE: mov dword ptr [ebp - 0x10], esi */
    ecx = esi + 0x38; /* 0x1100B6C1: lea ecx, [esi + 0x38] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1100B6C4: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100A896); /* 0x1100B6CB: call 0x1100a896 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x2C; /* 0x1100B6D0: lea ecx, [esi + 0x2c] */
    RECOMP_CALL(sub_1100B222); /* 0x1100B6D3: call 0x1100b222 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100B6D8: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100B6DC: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x110690F0)); /* 0x1100B6DE: call dword ptr [0x110690f0] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100B6E4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B6E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B6EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B6EAu);

L_1100B6EA:
    PUSH32(esp, ebp); /* 0x1100B6EA: push ebp */
    ebp = esp; /* 0x1100B6EB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100B6ED: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100B6EE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1100B6F2: push ecx */
    PUSH32(esp, ecx); /* 0x1100B6F3: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1100B6F4: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100C7A1); /* 0x1100B6F7: call 0x1100c7a1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100B6FC: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1100B6FF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100B701: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B702: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B705(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B705u);

L_1100B705:
    PUSH32(esp, ebp); /* 0x1100B705: push ebp */
    ebp = esp; /* 0x1100B706: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B708: push esi */
    esi = ecx; /* 0x1100B709: mov esi, ecx */
    RECOMP_CALL(sub_110091DA); /* 0x1100B70B: call 0x110091da */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100B710: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = 0x11003C90u; /* 0x1100B713: mov dword ptr [esi], 0x11003c90 */
    eax = MEM32(eax); /* 0x1100B719: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x1100B71B: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x1100B71F: mov dword ptr [esi + 8], eax */
    eax = esi; /* 0x1100B722: mov eax, esi */
    MEM32(esi + 0x10) = 0; /* 0x1100B724: mov dword ptr [esi + 0x10], 0 */
    esi = POP32_VAL(esp); /* 0x1100B72B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B72C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B72D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B730u);

L_1100B730:
    PUSH32(esp, 4); /* 0x1100B730: push 4 */
    eax = 0x1103C577u; /* 0x1100B732: mov eax, 0x1103c577 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B737: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100B73C: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100B73E: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11004444u; /* 0x1100B741: mov dword ptr [esi], 0x11004444 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100B747: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x10); /* 0x1100B74B: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x1100B74E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B757; /* 0x1100B750: je 0x1100b757 */
L_1100B752:
    RECOMP_CALL(sub_1100C5DC); /* 0x1100B752: call 0x1100c5dc */
    RECOMP_FLAGS_IN();
L_1100B757:
    ecx = esi + 0x4; /* 0x1100B757: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B222); /* 0x1100B75A: call 0x1100b222 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100B75F: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B764: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B765(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B765u);

L_1100B765:
    PUSH32(esp, ebp); /* 0x1100B765: push ebp */
    ebp = esp; /* 0x1100B766: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100B768: push esi */
    esi = ecx; /* 0x1100B769: mov esi, ecx */
    RECOMP_CALL(sub_110091DA); /* 0x1100B76B: call 0x110091da */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100B770: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = 0x11004584u; /* 0x1100B773: mov dword ptr [esi], 0x11004584 */
    eax = MEM32(eax); /* 0x1100B779: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x1100B77B: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x1100B77F: mov dword ptr [esi + 8], eax */
    eax = esi; /* 0x1100B782: mov eax, esi */
    MEM32(esi + 0x10) = 0; /* 0x1100B784: mov dword ptr [esi + 0x10], 0 */
    esi = POP32_VAL(esp); /* 0x1100B78B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100B78C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100B78D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100B790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B790u);

L_1100B790:
    PUSH32(esp, 4); /* 0x1100B790: push 4 */
    eax = 0x1103C577u; /* 0x1100B792: mov eax, 0x1103c577 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B797: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100B79C: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100B79E: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x110044FCu; /* 0x1100B7A1: mov dword ptr [esi], 0x110044fc */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100B7A7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x10); /* 0x1100B7AB: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x1100B7AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B7B7; /* 0x1100B7B0: je 0x1100b7b7 */
L_1100B7B2:
    RECOMP_CALL(sub_1100C5DC); /* 0x1100B7B2: call 0x1100c5dc */
    RECOMP_FLAGS_IN();
L_1100B7B7:
    ecx = esi + 0x4; /* 0x1100B7B7: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1100B222); /* 0x1100B7BA: call 0x1100b222 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100B7BF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B7C4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100B7C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B7C5u);

L_1100B7C5:
    PUSH32(esp, 0x10u); /* 0x1100B7C5: push 0x10 */
    eax = 0x1103C5C1u; /* 0x1100B7C7: mov eax, 0x1103c5c1 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B7CC: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100B7D1: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100B7D3: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_1100C932); /* 0x1100B7D6: call 0x1100c932 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100B7DB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x140) = edi; /* 0x1100B7DD: mov dword ptr [esi + 0x140], edi */
    MEM32(esi + 0x144) = edi; /* 0x1100B7E3: mov dword ptr [esi + 0x144], edi */
    MEM32(esi + 0x148) = edi; /* 0x1100B7E9: mov dword ptr [esi + 0x148], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1100B7EF: mov dword ptr [ebp - 4], edi */
    ecx = esi + 0x154; /* 0x1100B7F2: lea ecx, [esi + 0x154] */
    MEM32(esi) = 0x11004494u; /* 0x1100B7F8: mov dword ptr [esi], 0x11004494 */
    MEM32(esi + 0xE0) = 0x11003CECu; /* 0x1100B7FE: mov dword ptr [esi + 0xe0], 0x11003cec */
    MEM32(esi + 0x150) = edi; /* 0x1100B808: mov dword ptr [esi + 0x150], edi */
    RECOMP_ICALL(MEM32(0x11069228)); /* 0x1100B80E: call dword ptr [0x11069228] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x174; /* 0x1100B814: lea ecx, [esi + 0x174] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100B81A: mov byte ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(0x1106921C)); /* 0x1100B81E: call dword ptr [0x1106921c] */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100B824: mov byte ptr [ebp - 4], 2 */
    ebx = MEM32(ebp + 0x14); /* 0x1100B828: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((MEM32(esi + 0x19C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x19C) | 0xFFFFFFFFu));
    MEM32(esi + 0x19C) = MEM32(esi + 0x19C) | 0xFFFFFFFFu; /* 0x1100B82B: or dword ptr [esi + 0x19c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x10), edi */ /* 0x1100B832: cmp dword ptr [ebx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B85F; /* 0x1100B835: je 0x1100b85f */
L_1100B837:
    PUSH32(esp, 0x18u); /* 0x1100B837: push 0x18 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100B839: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100B83F: pop ecx */
    MEM32(ebp + 0x14) = eax; /* 0x1100B840: mov dword ptr [ebp + 0x14], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1100B843: mov byte ptr [ebp - 4], 3 */
    /* test eax, eax */ /* 0x1100B847: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B855; /* 0x1100B849: je 0x1100b855 */
L_1100B84B:
    PUSH32(esp, ebx); /* 0x1100B84B: push ebx */
    ecx = eax; /* 0x1100B84C: mov ecx, eax */
    RECOMP_CALL(sub_1100C8F1); /* 0x1100B84E: call 0x1100c8f1 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100B853: mov edi, eax */
L_1100B855:
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100B855: mov byte ptr [ebp - 4], 2 */
    MEM32(esi + 0x134) = edi; /* 0x1100B859: mov dword ptr [esi + 0x134], edi */
L_1100B85F:
    edi = MEM32(ebp + 0x8); /* 0x1100B85F: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1100B862: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100B88F; /* 0x1100B864: jne 0x1100b88f */
L_1100B866:
    eax = ebp + 0x10; /* 0x1100B866: lea eax, [ebp + 0x10] */
    MEM32(ebp + 0x10) = 0x110038D8u; /* 0x1100B869: mov dword ptr [ebp + 0x10], 0x110038d8 */
    PUSH32(esp, eax); /* 0x1100B870: push eax */
    ecx = ebp + (-0x1C); /* 0x1100B871: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x110692EC)); /* 0x1100B874: call dword ptr [0x110692ec] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x11045568u); /* 0x1100B87A: push 0x11045568 */
    eax = ebp + (-0x1C); /* 0x1100B87F: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x11001470u; /* 0x1100B882: mov dword ptr [ebp - 0x1c], 0x11001470 */
    PUSH32(esp, eax); /* 0x1100B889: push eax */
    RECOMP_CALL(sub_1103B33A); /* 0x1100B88A: call 0x1103b33a */
    RECOMP_FLAGS_IN();
L_1100B88F:
    eax = MEM32(ebp + 0xC); /* 0x1100B88F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1100B892: push ecx */
    PUSH32(esp, ecx); /* 0x1100B893: push ecx */
    ecx = esi; /* 0x1100B894: mov ecx, esi */
    MEM32(esi + 0x148) = eax; /* 0x1100B896: mov dword ptr [esi + 0x148], eax */
    RECOMP_CALL(sub_1100C9DE); /* 0x1100B89C: call 0x1100c9de */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1100B8A1: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x120) = 1; /* 0x1100B8A5: mov dword ptr [esi + 0x120], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B8BB; /* 0x1100B8AF: je 0x1100b8bb */
L_1100B8B1:
    eax = MEM32(esi); /* 0x1100B8B1: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1100B8B3: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1100B8B5: push dword ptr [ebp + 0x10] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100B8B8: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100B8BB:
    eax = MEM32(edi); /* 0x1100B8BB: mov eax, dword ptr [edi] */
    ecx = esi + 0xE0; /* 0x1100B8BD: lea ecx, [esi + 0xe0] */
    PUSH32(esp, ecx); /* 0x1100B8C3: push ecx */
    ecx = edi; /* 0x1100B8C4: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100B8C6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100B8C9: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100B8CB: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1100B8D0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1100B8D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100B8D3u);

L_1100B8D3:
    PUSH32(esp, 0x54u); /* 0x1100B8D3: push 0x54 */
    eax = 0x1103C5F6u; /* 0x1100B8D5: mov eax, 0x1103c5f6 */
    RECOMP_CALL(sub_1103B372); /* 0x1100B8DA: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100B8DF: mov esi, ecx */
    eax = esi + 0x174; /* 0x1100B8E1: lea eax, [esi + 0x174] */
    PUSH32(esp, eax); /* 0x1100B8E7: push eax */
    ecx = ebp + (-0x60); /* 0x1100B8E8: lea ecx, [ebp - 0x60] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100B8EB: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100B8F1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100B8F3: mov dword ptr [ebp - 4], ebx */
    ecx = MEM32(esi + 0x140); /* 0x1100B8F6: mov ecx, dword ptr [esi + 0x140] */
    /* test ecx, ecx */ /* 0x1100B8FC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B907; /* 0x1100B8FE: je 0x1100b907 */
L_1100B900:
    eax = MEM32(ecx); /* 0x1100B900: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100B902: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100B904: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100B907:
    ecx = MEM32(esi + 0x144); /* 0x1100B907: mov ecx, dword ptr [esi + 0x144] */
    MEM32(esi + 0x140) = ebx; /* 0x1100B90D: mov dword ptr [esi + 0x140], ebx */
    /* test ecx, ecx */ /* 0x1100B913: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B91E; /* 0x1100B915: je 0x1100b91e */
L_1100B917:
    eax = MEM32(ecx); /* 0x1100B917: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100B919: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100B91B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100B91E:
    eax = esi + 0x154; /* 0x1100B91E: lea eax, [esi + 0x154] */
    MEM32(esi + 0x144) = ebx; /* 0x1100B924: mov dword ptr [esi + 0x144], ebx */
    PUSH32(esp, eax); /* 0x1100B92A: push eax */
    ecx = ebp + (-0x44); /* 0x1100B92B: lea ecx, [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x11069224)); /* 0x1100B92E: call dword ptr [0x11069224] */
    RECOMP_FLAGS_IN();
    goto L_1100B9AA; /* 0x1100B934: jmp 0x1100b9aa */
L_1100B936:
    _flag_a = (uint32_t)((MEM32(esi + 0x19C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x19C) | 0xFFFFFFFFu));
    MEM32(esi + 0x19C) = MEM32(esi + 0x19C) | 0xFFFFFFFFu; /* 0x1100B936: or dword ptr [esi + 0x19c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1100B93D: lea ecx, [ebp - 0x44] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1100B940: mov byte ptr [ebp - 4], bl */
    RECOMP_ICALL(MEM32(0x11069220)); /* 0x1100B943: call dword ptr [0x11069220] */
    RECOMP_FLAGS_IN();
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1100B949: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100B99A; /* 0x1100B94C: je 0x1100b99a */
L_1100B94E:
    eax = ebp + (-0x28); /* 0x1100B94E: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1100B951: push eax */
    ecx = esi + 0xE4; /* 0x1100B952: lea ecx, [esi + 0xe4] */
    RECOMP_CALL(sub_1100B572); /* 0x1100B958: call 0x1100b572 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1100B95D: mov byte ptr [ebp - 4], 2 */
    ecx = MEM32(ebp + (-0x14)); /* 0x1100B961: mov ecx, dword ptr [ebp - 0x14] */
    /* cmp ecx, MEM32(ebp + (-0x20)) */ /* 0x1100B964: cmp ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1100B96E; /* 0x1100B967: jb 0x1100b96e */
L_1100B969:
    ebx = ebp + (-0x10); /* 0x1100B969: lea ebx, [ebp - 0x10] */
    goto L_1100B974; /* 0x1100B96C: jmp 0x1100b974 */
L_1100B96E:
    eax = MEM32(ebp + (-0x24)); /* 0x1100B96E: mov eax, dword ptr [ebp - 0x24] */
    ebx = eax + ecx * 4; /* 0x1100B971: lea ebx, [eax + ecx*4] */
L_1100B974:
    ebx = MEM32(ebx); /* 0x1100B974: mov ebx, dword ptr [ebx] */
    /* test ebx, ebx */ /* 0x1100B976: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100B98D; /* 0x1100B978: je 0x1100b98d */
L_1100B97A:
    edx = MEM32(ebx); /* 0x1100B97A: mov edx, dword ptr [ebx] */
    eax = esi + 0xE0; /* 0x1100B97C: lea eax, [esi + 0xe0] */
    PUSH32(esp, eax); /* 0x1100B982: push eax */
    PUSH32(esp, edi); /* 0x1100B983: push edi */
    ecx = ebx; /* 0x1100B984: mov ecx, ebx */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x1100B986: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100B989: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100B9DA; /* 0x1100B98B: jne 0x1100b9da */
L_1100B98D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100B98D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x1100B98F: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1100B992: mov byte ptr [ebp - 4], bl */
    RECOMP_CALL(sub_1100B730); /* 0x1100B995: call 0x1100b730 */
    RECOMP_FLAGS_IN();
L_1100B99A:
    eax = esi + 0x154; /* 0x1100B99A: lea eax, [esi + 0x154] */
    PUSH32(esp, eax); /* 0x1100B9A0: push eax */
    ecx = ebp + (-0x44); /* 0x1100B9A1: lea ecx, [ebp - 0x44] */
    RECOMP_ICALL(MEM32(0x11069224)); /* 0x1100B9A4: call dword ptr [0x11069224] */
    RECOMP_FLAGS_IN();
L_1100B9AA:
    edi = MEM32(esi + 0x19C); /* 0x1100B9AA: mov edi, dword ptr [esi + 0x19c] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1100B9B0: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100B936; /* 0x1100B9B3: jne 0x1100b936 */
L_1100B9B5:
    ecx = ebp + (-0x44); /* 0x1100B9B5: lea ecx, [ebp - 0x44] */
    MEM32(esi + 0x150) = ebx; /* 0x1100B9B8: mov dword ptr [esi + 0x150], ebx */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1100B9BE: mov byte ptr [ebp - 4], bl */
    RECOMP_ICALL(MEM32(0x11069220)); /* 0x1100B9C1: call dword ptr [0x11069220] */
    RECOMP_FLAGS_IN();
L_1100B9C7:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100B9C7: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x60); /* 0x1100B9CB: lea ecx, [ebp - 0x60] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100B9CE: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100B9D4: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100B9D9: ret  */
L_1100B9DA:
    edx = MEM32(ebx); /* 0x1100B9DA: mov edx, dword ptr [ebx] */
    eax = esi + 0xE0; /* 0x1100B9DC: lea eax, [esi + 0xe0] */
    PUSH32(esp, eax); /* 0x1100B9E2: push eax */
    PUSH32(esp, edi); /* 0x1100B9E3: push edi */
    ecx = ebx; /* 0x1100B9E4: mov ecx, ebx */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x1100B9E6: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x150) = eax; /* 0x1100B9E9: mov dword ptr [esi + 0x150], eax */
    ecx = esi; /* 0x1100B9EF: mov ecx, esi */
    eax = MEM32(esi); /* 0x1100B9F1: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x1100B9F3: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x1100B9F5: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x1100B9F8: lea ecx, [ebp - 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1100B9FB: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1100B730); /* 0x1100B9FF: call 0x1100b730 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1100B9C7; /* 0x1100BA04: jmp 0x1100b9c7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100BA06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BA06u);

L_1100BA06:
    PUSH32(esp, ebp); /* 0x1100BA06: push ebp */
    ebp = esp; /* 0x1100BA07: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1100BA09: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100BA0C: push ebx */
    PUSH32(esp, esi); /* 0x1100BA0D: push esi */
    PUSH32(esp, edi); /* 0x1100BA0E: push edi */
    edi = ecx; /* 0x1100BA0F: mov edi, ecx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x1100BA11: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 2); /* 0x1100BA13: push 2 */
    esi = POP32_VAL(esp); /* 0x1100BA15: pop esi */
    ecx = ebp + (-0x1C); /* 0x1100BA16: lea ecx, [ebp - 0x1c] */
    eax = edi + 0x154; /* 0x1100BA19: lea eax, [edi + 0x154] */
    PUSH32(esp, eax); /* 0x1100BA1F: push eax */
    RECOMP_ICALL(MEM32(0x11069224)); /* 0x1100BA20: call dword ptr [0x11069224] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x150), 0 */ /* 0x1100BA26: cmp dword ptr [edi + 0x150], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x150)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100BA3D; /* 0x1100BA2D: je 0x1100ba3d */
L_1100BA2F:
    eax = MEM32(ebp + 0x8); /* 0x1100BA2F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x1100BA32: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    eax = MEM32(eax + 0x4); /* 0x1100BA34: mov eax, dword ptr [eax + 4] */
    MEM32(edi + 0x19C) = eax; /* 0x1100BA37: mov dword ptr [edi + 0x19c], eax */
L_1100BA3D:
    ecx = ebp + (-0x1C); /* 0x1100BA3D: lea ecx, [ebp - 0x1c] */
    RECOMP_ICALL(MEM32(0x11069220)); /* 0x1100BA40: call dword ptr [0x11069220] */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x1100BA46: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100BA78; /* 0x1100BA48: jne 0x1100ba78 */
L_1100BA4A:
    ecx = MEM32(ebp + 0xC); /* 0x1100BA4A: mov ecx, dword ptr [ebp + 0xc] */
    edx = edi + 0xE0; /* 0x1100BA4D: lea edx, [edi + 0xe0] */
    PUSH32(esp, edx); /* 0x1100BA53: push edx */
    edx = MEM32(ebp + 0x8); /* 0x1100BA54: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1100BA57: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x1100BA59: push dword ptr [edx + 4] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100BA5C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x150) = eax; /* 0x1100BA5F: mov dword ptr [edi + 0x150], eax */
    /* test eax, eax */ /* 0x1100BA65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BA75; /* 0x1100BA67: je 0x1100ba75 */
L_1100BA69:
    eax = MEM32(edi); /* 0x1100BA69: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100BA6B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1100BA6D: push esi */
    ecx = edi; /* 0x1100BA6E: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x1100BA70: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    goto L_1100BA78; /* 0x1100BA73: jmp 0x1100ba78 */
L_1100BA75:
    PUSH32(esp, 3); /* 0x1100BA75: push 3 */
    esi = POP32_VAL(esp); /* 0x1100BA77: pop esi */
L_1100BA78:
    edi = POP32_VAL(esp); /* 0x1100BA78: pop edi */
    eax = esi; /* 0x1100BA79: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100BA7B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100BA7C: pop ebx */
    esp = ebp; /* 0x1100BA7D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100BA7F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100BA80: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100BA83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BA83u);

L_1100BA83:
    PUSH32(esp, ebp); /* 0x1100BA83: push ebp */
    ebp = esp; /* 0x1100BA84: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100BA86: push esi */
    esi = ecx; /* 0x1100BA87: mov esi, ecx */
    edx = MEM32(esi + 0x144); /* 0x1100BA89: mov edx, dword ptr [esi + 0x144] */
    /* test edx, edx */ /* 0x1100BA8F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BABB; /* 0x1100BA91: je 0x1100babb */
L_1100BA93:
    eax = MEM32(ebp + 0x8); /* 0x1100BA93: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x1100BA96: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100BABB; /* 0x1100BA99: jne 0x1100babb */
L_1100BA9B:
    PUSH32(esp, 0x14u); /* 0x1100BA9B: push 0x14 */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x1100BA9D: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100BAA3: pop ecx */
    /* test eax, eax */ /* 0x1100BAA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BABB; /* 0x1100BAA6: je 0x1100babb */
L_1100BAA8:
    ecx = MEM32(esi + 0x144); /* 0x1100BAA8: mov ecx, dword ptr [esi + 0x144] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1100BAAE: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1100BAB1: push ecx */
    ecx = eax; /* 0x1100BAB2: mov ecx, eax */
    RECOMP_CALL(sub_1100B765); /* 0x1100BAB4: call 0x1100b765 */
    RECOMP_FLAGS_IN();
    goto L_1100BABD; /* 0x1100BAB9: jmp 0x1100babd */
L_1100BABB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100BABB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100BABD:
    esi = POP32_VAL(esp); /* 0x1100BABD: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100BABE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100BABF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100BAC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BAC2u);

L_1100BAC2:
    PUSH32(esp, 0x28u); /* 0x1100BAC2: push 0x28 */
    eax = 0x1103C0FFu; /* 0x1100BAC4: mov eax, 0x1103c0ff */
    RECOMP_CALL(sub_1103B372); /* 0x1100BAC9: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100BACE: mov esi, ecx */
    eax = esi + 0x174; /* 0x1100BAD0: lea eax, [esi + 0x174] */
    PUSH32(esp, eax); /* 0x1100BAD6: push eax */
    ecx = ebp + (-0x34); /* 0x1100BAD7: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069218)); /* 0x1100BADA: call dword ptr [0x11069218] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1100BAE0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1100BAE2: mov dword ptr [ebp - 4], edi */
    /* cmp MEM32(esi + 0x144), edi */ /* 0x1100BAE5: cmp dword ptr [esi + 0x144], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x144)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100BB1C; /* 0x1100BAEB: jne 0x1100bb1c */
L_1100BAED:
    eax = MEM32(esi + 0x150); /* 0x1100BAED: mov eax, dword ptr [esi + 0x150] */
    PUSH32(esp, 0x14u); /* 0x1100BAF3: push 0x14 */
    MEM32(esi + 0x140) = eax; /* 0x1100BAF5: mov dword ptr [esi + 0x140], eax */
    RECOMP_ICALL(MEM32(0x110690DC)); /* 0x1100BAFB: call dword ptr [0x110690dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100BB01: pop ecx */
    /* test eax, eax */ /* 0x1100BB02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BB16; /* 0x1100BB04: je 0x1100bb16 */
L_1100BB06:
    ecx = esi + 0x148; /* 0x1100BB06: lea ecx, [esi + 0x148] */
    PUSH32(esp, ecx); /* 0x1100BB0C: push ecx */
    ecx = eax; /* 0x1100BB0D: mov ecx, eax */
    RECOMP_CALL(sub_1100B765); /* 0x1100BB0F: call 0x1100b765 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1100BB14: mov edi, eax */
L_1100BB16:
    MEM32(esi + 0x144) = edi; /* 0x1100BB16: mov dword ptr [esi + 0x144], edi */
L_1100BB1C:
    ecx = esi + 0xC; /* 0x1100BB1C: lea ecx, [esi + 0xc] */
    eax = MEM32(ecx); /* 0x1100BB1F: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x18); /* 0x1100BB21: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x1100BB24: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1100BB25: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    goto L_1100BB55; /* 0x1100BB28: jmp 0x1100bb55 */
L_1100BB2A:
    ecx = MEM32(ebp + (-0x18)); /* 0x1100BB2A: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100BB2D: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1100BB30: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100BB32: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1100BB35: mov dword ptr [ebp - 0x10], eax */
    ecx = eax; /* 0x1100BB38: mov ecx, eax */
    PUSH32(esp, esi); /* 0x1100BB3A: push esi */
    PUSH32(esp, MEM32(esi + 0x144)); /* 0x1100BB3B: push dword ptr [esi + 0x144] */
    edx = MEM32(eax); /* 0x1100BB41: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x1100BB43: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1100BB46: mov ecx, dword ptr [ebp - 0x18] */
    edx = ebp + (-0x14); /* 0x1100BB49: lea edx, [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x1100BB4C: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x1100BB4F: push edx */
    eax = MEM32(ecx); /* 0x1100BB50: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1100BB52: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1100BB55:
    ecx = MEM32(ebp + (-0x18)); /* 0x1100BB55: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1100BB58: push dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1100BB5B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1100BB5D: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1100BB60: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x1100BB63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100BB2A; /* 0x1100BB65: jne 0x1100bb2a */
L_1100BB67:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100BB67: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x34); /* 0x1100BB6B: lea ecx, [ebp - 0x34] */
    RECOMP_ICALL(MEM32(0x11069214)); /* 0x1100BB6E: call dword ptr [0x11069214] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100BB74: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100BB79: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100BB7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BB7Cu);

L_1100BB7C:
    PUSH32(esp, 4); /* 0x1100BB7C: push 4 */
    eax = 0x1103C619u; /* 0x1100BB7E: mov eax, 0x1103c619 */
    RECOMP_CALL(sub_1103B372); /* 0x1100BB83: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100BB88: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100BB8A: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003D4Cu; /* 0x1100BB8D: mov dword ptr [esi], 0x11003d4c */
    MEM32(esi + 0xE0) = 0x11004404u; /* 0x1100BB93: mov dword ptr [esi + 0xe0], 0x11004404 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100BB9D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x140); /* 0x1100BBA1: mov ecx, dword ptr [esi + 0x140] */
    /* test ecx, ecx */ /* 0x1100BBA7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BBB2; /* 0x1100BBA9: je 0x1100bbb2 */
L_1100BBAB:
    eax = MEM32(ecx); /* 0x1100BBAB: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100BBAD: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100BBAF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100BBB2:
    ecx = MEM32(esi + 0x144); /* 0x1100BBB2: mov ecx, dword ptr [esi + 0x144] */
    /* test ecx, ecx */ /* 0x1100BBB8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BBC3; /* 0x1100BBBA: je 0x1100bbc3 */
L_1100BBBC:
    eax = MEM32(ecx); /* 0x1100BBBC: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1100BBBE: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100BBC0: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_1100BBC3:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100BBC3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100BBC7: mov ecx, esi */
    RECOMP_CALL(sub_1100BBE8); /* 0x1100BBC9: call 0x1100bbe8 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100BBCE: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100BBD3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100BBD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BBD4u);

L_1100BBD4:
    void_lift_trap(0x1100BBD4u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100BBD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BBD5u);

L_1100BBD5:
    /* cmp MEM32(ecx + 0x144), 0 */ /* 0x1100BBD5: cmp dword ptr [ecx + 0x144], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x144)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100BBE5; /* 0x1100BBDC: je 0x1100bbe5 */
L_1100BBDE:
    eax = MEM32(ecx); /* 0x1100BBDE: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x1100BBE0: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1100BBE2: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
L_1100BBE5:
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100BBE5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100BBE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100BBE8u);

L_1100BBE8:
    PUSH32(esp, 4); /* 0x1100BBE8: push 4 */
    eax = 0x1103C658u; /* 0x1100BBEA: mov eax, 0x1103c658 */
    RECOMP_CALL(sub_1103B372); /* 0x1100BBEF: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100BBF4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100BBF6: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x11003F38u; /* 0x1100BBF9: mov dword ptr [esi], 0x11003f38 */
    MEM32(esi + 0xE0) = 0x11004424u; /* 0x1100BBFF: mov dword ptr [esi + 0xe0], 0x11004424 */
    MEM32(ebp + (-0x4)) = 2; /* 0x1100BC09: mov dword ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1100C843); /* 0x1100BC10: call 0x1100c843 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x134); /* 0x1100BC15: mov edi, dword ptr [esi + 0x134] */
    /* test edi, edi */ /* 0x1100BC1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100BC2E; /* 0x1100BC1D: je 0x1100bc2e */
L_1100BC1F:
    ecx = edi; /* 0x1100BC1F: mov ecx, edi */
    RECOMP_CALL(sub_1100A32D); /* 0x1100BC21: call 0x1100a32d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1100BC26: push edi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100BC27: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100BC2D: pop ecx */
L_1100BC2E:
    ecx = esi + 0xE4; /* 0x1100BC2E: lea ecx, [esi + 0xe4] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100BC34: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1100B45D); /* 0x1100BC38: call 0x1100b45d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1100BC3D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100BC41: mov ecx, esi */
    MEM32(esi + 0xE0) = 0x11004218u; /* 0x1100BC43: mov dword ptr [esi + 0xe0], 0x11004218 */
    RECOMP_CALL(sub_1100BE76); /* 0x1100BC4D: call 0x1100be76 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1103B340); /* 0x1100BC52: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100BC57: ret  */
    RECOMP_REGS_OUT();
}
