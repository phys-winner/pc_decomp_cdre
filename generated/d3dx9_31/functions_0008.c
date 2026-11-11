#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1704D22D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D22Du);

L_1704D22D:
    edi = edi; /* 0x1704D22D: mov edi, edi */
    PUSH32(esp, esi); /* 0x1704D22F: push esi */
    esi = ecx; /* 0x1704D230: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1704D232: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1704D235: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1704D23A: push dword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1704D23D: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x1704D241: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1704D246: push dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1704D249: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x1704D24D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x1704D252: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1704D256: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1704D259: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704D25A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704D260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D260u);

L_1704D260:
    edi = edi; /* 0x1704D260: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D262: push ebp */
    ebp = esp; /* 0x1704D263: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1704D265: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1704D268: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1704D26B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1704D26C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1704D26F: push edi */
    PUSH32(esp, 4); /* 0x1704D270: push 4 */
    ecx = POP32_VAL(esp); /* 0x1704D272: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1704D273: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704D278: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1704D27A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1704D28F; /* 0x1704D27C: je 0x1704d28f */
L_1704D27E:
    esi = MEM32(ebp + 0xC); /* 0x1704D27E: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1704D281: push 4 */
    ecx = POP32_VAL(esp); /* 0x1704D283: pop ecx */
    edi = 0x17001B90u; /* 0x1704D284: mov edi, 0x17001b90 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704D289: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1704D28B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1704D29E; /* 0x1704D28D: jne 0x1704d29e */
L_1704D28F:
    ecx = MEM32(ebp + 0x8); /* 0x1704D28F: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1704D292: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x1704D294: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1704D296: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1704D297: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D29A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704D2A3; /* 0x1704D29C: jmp 0x1704d2a3 */
L_1704D29E:
    eax = 0x80004002u; /* 0x1704D29E: mov eax, 0x80004002 */
L_1704D2A3:
    edi = POP32_VAL(esp); /* 0x1704D2A3: pop edi */
    esi = POP32_VAL(esp); /* 0x1704D2A4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704D2A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704D2A6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704D2AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D2AEu);

L_1704D2AE:
    edi = edi; /* 0x1704D2AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D2B0: push ebp */
    ebp = esp; /* 0x1704D2B1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D2B3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x234u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x234u; /* 0x1704D2B6: add eax, 0x234 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1704D2BB: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(eax); /* 0x1704D2BD: mov eax, dword ptr [eax] */
    ebp = POP32_VAL(esp); /* 0x1704D2BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704D2C0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704D2C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D2C8u);

L_1704D2C8:
    edi = edi; /* 0x1704D2C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D2CA: push ebp */
    ebp = esp; /* 0x1704D2CB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x144u; /* 0x1704D2CD: sub esp, 0x144 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1704D2D3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1704D2D6: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1704D2D7: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1704D2DA: push edi */
    edx = ebp + 0xC; /* 0x1704D2DB: lea edx, [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704D2DE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1704D2E0: push edx */
    MEM32(ebx) = edi; /* 0x1704D2E1: mov dword ptr [ebx], edi */
    ecx = MEM32(eax); /* 0x1704D2E3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704D2E5: push eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x1704D2E6: mov dword ptr [ebp - 4], edi */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1704D2E9: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1704D2EC: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1704D2EF: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x144); /* 0x1704D2F1: lea edx, [ebp - 0x144] */
    PUSH32(esp, edx); /* 0x1704D2F7: push edx */
    PUSH32(esp, eax); /* 0x1704D2F8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1704D2F9: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1704D2FC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1704D3BD; /* 0x1704D2FE: jl 0x1704d3bd */
L_1704D304:
    eax = MEM32(ebp + 0xC); /* 0x1704D304: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1704D307: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1704D309: push esi */
    esi = MEM32(ebp + (-0x9C)); /* 0x1704D30A: mov esi, dword ptr [ebp - 0x9c] */
    edx = ebp + (-0x14); /* 0x1704D310: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1704D313: push edx */
    PUSH32(esp, eax); /* 0x1704D314: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1704D315: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704D318: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704D3BC; /* 0x1704D31A: jl 0x1704d3bc */
L_1704D320:
    /* test MEM8(ebp + (-0x8)), 0x50u */ /* 0x1704D320: test byte ptr [ebp - 8], 0x50 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0x50u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D335; /* 0x1704D324: je 0x1704d335 */
L_1704D326:
    /* cmp esi, 2 */ /* 0x1704D326: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704D381; /* 0x1704D329: jae 0x1704d381 */
L_1704D32B:
    eax = 0x88760B57u; /* 0x1704D32B: mov eax, 0x88760b57 */
    goto L_1704D3BC; /* 0x1704D330: jmp 0x1704d3bc */
L_1704D335:
    /* test MEM8(ebp + (-0x8)), 0x80u */ /* 0x1704D335: test byte ptr [ebp - 8], 0x80 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D381; /* 0x1704D339: je 0x1704d381 */
L_1704D33B:
    eax = MEM32(ebp + 0xC); /* 0x1704D33B: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1704D33E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704D340: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x138)); /* 0x1704D341: call dword ptr [ecx + 0x138] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1704D347: mov edi, eax */
    eax = MEM32(ebp + 0xC); /* 0x1704D349: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1704D34C: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1704D34E: push 0 */
    PUSH32(esp, eax); /* 0x1704D350: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x134)); /* 0x1704D351: call dword ptr [ecx + 0x134] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1704D357: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1704D35A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x144); /* 0x1704D35C: lea edx, [ebp - 0x144] */
    PUSH32(esp, edx); /* 0x1704D362: push edx */
    PUSH32(esp, eax); /* 0x1704D363: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1704D364: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704D367: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704D3BC; /* 0x1704D369: jl 0x1704d3bc */
L_1704D36B:
    eax = MEM32(ebp + 0xC); /* 0x1704D36B: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1704D36E: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + (-0x9C)); /* 0x1704D370: mov esi, dword ptr [ebp - 0x9c] */
    PUSH32(esp, edi); /* 0x1704D376: push edi */
    PUSH32(esp, eax); /* 0x1704D377: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x134)); /* 0x1704D378: call dword ptr [ecx + 0x134] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704D37E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704D380: inc edi */
    _flag_k = FK_INC;
L_1704D381:
    /* cmp MEM32(ebp + (-0x98)), 0 */ /* 0x1704D381: cmp dword ptr [ebp - 0x98], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x98))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D393; /* 0x1704D388: jne 0x1704d393 */
L_1704D38A:
    /* cmp MEM32(ebp + (-0x80)), 0xFFFE0101u */ /* 0x1704D38A: cmp dword ptr [ebp - 0x80], 0xfffe0101 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0xFFFE0101u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D39A; /* 0x1704D391: jb 0x1704d39a */
L_1704D393:
    MEM32(ebp + (-0x4)) = 1; /* 0x1704D393: mov dword ptr [ebp - 4], 1 */
L_1704D39A:
    eax = MEM32(ebp + 0x10); /* 0x1704D39A: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1704D39D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = esi; /* 0x1704D39F: mov dword ptr [ebx], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D3A5; /* 0x1704D3A1: je 0x1704d3a5 */
L_1704D3A3:
    MEM32(eax) = edi; /* 0x1704D3A3: mov dword ptr [eax], edi */
L_1704D3A5:
    eax = MEM32(ebp + 0x14); /* 0x1704D3A5: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1704D3A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D3B1; /* 0x1704D3AA: je 0x1704d3b1 */
L_1704D3AC:
    ecx = MEM32(ebp + (-0x4)); /* 0x1704D3AC: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x1704D3AF: mov dword ptr [eax], ecx */
L_1704D3B1:
    eax = MEM32(ebp + 0xC); /* 0x1704D3B1: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1704D3B4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704D3B6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704D3B7: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D3BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704D3BC:
    esi = POP32_VAL(esp); /* 0x1704D3BC: pop esi */
L_1704D3BD:
    edi = POP32_VAL(esp); /* 0x1704D3BD: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704D3BE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704D3BF: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704D3C0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704D3C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D3C8u);

L_1704D3C8:
    edi = edi; /* 0x1704D3C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D3CA: push ebp */
    ebp = esp; /* 0x1704D3CB: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1704D3CD: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1704D3CE: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1704D3D1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D3E0; /* 0x1704D3D3: je 0x1704d3e0 */
L_1704D3D5:
    eax = MEM32(ebp + 0xC); /* 0x1704D3D5: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704D3D8: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x1704D3DB: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D3E7; /* 0x1704D3DE: jb 0x1704d3e7 */
L_1704D3E0:
    eax = 0x8876086Cu; /* 0x1704D3E0: mov eax, 0x8876086c */
    goto L_1704D421; /* 0x1704D3E5: jmp 0x1704d421 */
L_1704D3E7:
    eax = eax + eax * 4; /* 0x1704D3E7: lea eax, [eax + eax*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704D3EA: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704D3EA: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x1704D3ED: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x1704D3F0: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(eax); /* 0x1704D3F3: mov edx, dword ptr [eax] */
    /* cmp ecx, edx */ /* 0x1704D3F5: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704D3F7: push esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704D408; /* 0x1704D3F8: jae 0x1704d408 */
L_1704D3FA:
    esi = MEM32(eax + 0x4); /* 0x1704D3FA: mov esi, dword ptr [eax + 4] */
    /* cmp MEM32(esi + ecx * 4), ecx */ /* 0x1704D3FD: cmp dword ptr [esi + ecx*4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + ecx * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D408; /* 0x1704D400: jne 0x1704d408 */
L_1704D402:
    MEM32(edi) = ecx; /* 0x1704D402: mov dword ptr [edi], ecx */
L_1704D404:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D404: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704D420; /* 0x1704D406: jmp 0x1704d420 */
L_1704D408:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704D408: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1704D40A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D41D; /* 0x1704D40C: jbe 0x1704d41d */
L_1704D40E:
    eax = MEM32(eax + 0x4); /* 0x1704D40E: mov eax, dword ptr [eax + 4] */
L_1704D411:
    /* cmp MEM32(eax), ecx */ /* 0x1704D411: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D426; /* 0x1704D413: je 0x1704d426 */
L_1704D415:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704D415: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704D416: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, edx */ /* 0x1704D419: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D411; /* 0x1704D41B: jb 0x1704d411 */
L_1704D41D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D41D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704D41F: inc eax */
    _flag_k = FK_INC;
L_1704D420:
    esi = POP32_VAL(esp); /* 0x1704D420: pop esi */
L_1704D421:
    edi = POP32_VAL(esp); /* 0x1704D421: pop edi */
    ebp = POP32_VAL(esp); /* 0x1704D422: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704D423: ret 0x10 */
L_1704D426:
    MEM32(edi) = esi; /* 0x1704D426: mov dword ptr [edi], esi */
    RECOMP_BACKEDGE();
    goto L_1704D404; /* 0x1704D428: jmp 0x1704d404 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704D42F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D42Fu);

L_1704D42F:
    edi = edi; /* 0x1704D42F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D431: push ebp */
    ebp = esp; /* 0x1704D432: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704D434: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704D437: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x1704D43A: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704D44F; /* 0x1704D43D: jae 0x1704d44f */
L_1704D43F:
    eax = eax + eax * 4; /* 0x1704D43F: lea eax, [eax + eax*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704D442: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704D442: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x1704D445: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x1704D448: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(eax) */ /* 0x1704D44B: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D456; /* 0x1704D44D: jb 0x1704d456 */
L_1704D44F:
    eax = 0x8876086Cu; /* 0x1704D44F: mov eax, 0x8876086c */
    goto L_1704D461; /* 0x1704D454: jmp 0x1704d461 */
L_1704D456:
    eax = MEM32(eax + 0x8); /* 0x1704D456: mov eax, dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1704D459: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx * 4) = _v; } /* 0x1704D45C: fstp dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D45F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704D461:
    ebp = POP32_VAL(esp); /* 0x1704D461: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704D462: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704D46A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D46Au);

L_1704D46A:
    edi = edi; /* 0x1704D46A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D46C: push ebp */
    ebp = esp; /* 0x1704D46D: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x1704D46F: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x1704D472: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D47D; /* 0x1704D474: jne 0x1704d47d */
L_1704D476:
    eax = 0x8876086Cu; /* 0x1704D476: mov eax, 0x8876086c */
    goto L_1704D4C4; /* 0x1704D47B: jmp 0x1704d4c4 */
L_1704D47D:
    PUSH32(esp, esi); /* 0x1704D47D: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1704D47E: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x1704D481: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D48C; /* 0x1704D483: jne 0x1704d48c */
L_1704D485:
    eax = 0x8876086Cu; /* 0x1704D485: mov eax, 0x8876086c */
    goto L_1704D4C3; /* 0x1704D48A: jmp 0x1704d4c3 */
L_1704D48C:
    eax = MEM32(ebp + 0xC); /* 0x1704D48C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704D48F: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x1704D492: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704D485; /* 0x1704D495: jae 0x1704d485 */
L_1704D497:
    eax = eax + eax * 4; /* 0x1704D497: lea eax, [eax + eax*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704D49A: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704D49A: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x4); /* 0x1704D49D: add eax, dword ptr [ecx + 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x1704D4A0: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), ecx */ /* 0x1704D4A3: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D485; /* 0x1704D4A5: jb 0x1704d485 */
L_1704D4A7:
    PUSH32(esp, edi); /* 0x1704D4A7: push edi */
    edi = MEM32(eax + 0x8); /* 0x1704D4A8: mov edi, dword ptr [eax + 8] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704D4AB: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704D4AB: shl ecx, 2 */
    fp_push(*(float*)&MEM32(ecx + edi)); /* 0x1704D4AE: fld dword ptr [ecx + edi] */
    edi = POP32_VAL(esp); /* 0x1704D4B1: pop edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1704D4B2: fstp dword ptr [esi] */
    /* cmp MEM32(edx), 0 */ /* 0x1704D4B4: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D4C1; /* 0x1704D4B7: je 0x1704d4c1 */
L_1704D4B9:
    eax = MEM32(eax + 0x4); /* 0x1704D4B9: mov eax, dword ptr [eax + 4] */
    eax = MEM32(ecx + eax); /* 0x1704D4BC: mov eax, dword ptr [ecx + eax] */
    MEM32(edx) = eax; /* 0x1704D4BF: mov dword ptr [edx], eax */
L_1704D4C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D4C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704D4C3:
    esi = POP32_VAL(esp); /* 0x1704D4C3: pop esi */
L_1704D4C4:
    ebp = POP32_VAL(esp); /* 0x1704D4C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704D4C5: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704D4CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D4CDu);

L_1704D4CD:
    edi = edi; /* 0x1704D4CD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D4CF: push ebp */
    ebp = esp; /* 0x1704D4D0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1704D4D2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704D4D3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1704D4D5: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D4DF; /* 0x1704D4D8: je 0x1704d4df */
L_1704D4DA:
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x1704D4DA: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D4E9; /* 0x1704D4DD: jne 0x1704d4e9 */
L_1704D4DF:
    eax = 0x8876086Cu; /* 0x1704D4DF: mov eax, 0x8876086c */
    goto L_1704D5B4; /* 0x1704D4E4: jmp 0x1704d5b4 */
L_1704D4E9:
    eax = MEM32(ebp + 0x8); /* 0x1704D4E9: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1704D4EC: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1704D4ED: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, MEM32(eax + 0x8) */ /* 0x1704D4F0: cmp ebx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D4FF; /* 0x1704D4F3: jb 0x1704d4ff */
L_1704D4F5:
    eax = 0x8876086Cu; /* 0x1704D4F5: mov eax, 0x8876086c */
    goto L_1704D5B3; /* 0x1704D4FA: jmp 0x1704d5b3 */
L_1704D4FF:
    ebx = ebx + ebx * 4; /* 0x1704D4FF: lea ebx, [ebx + ebx*4] */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x1704D502: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x1704D502: shl ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + 0x4); /* 0x1704D505: add ebx, dword ptr [eax + 4] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), esi */ /* 0x1704D508: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D520; /* 0x1704D50A: je 0x1704d520 */
L_1704D50C:
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1704D50C: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1704D50F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1704D514: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1704D517: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704D51C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1704D51D: pop ecx */
    MEM32(ebx) = esi; /* 0x1704D51E: mov dword ptr [ebx], esi */
L_1704D520:
    esi = MEM32(ebp + 0x10); /* 0x1704D520: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1704D523: push edi */
    edi = esi; /* 0x1704D524: mov edi, esi */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1704D526: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1704D526: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1704D529: push edi */
    MEM32(ebp + 0xC) = edi; /* 0x1704D52A: mov dword ptr [ebp + 0xc], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704D52D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704D532: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704D534: pop ecx */
    MEM32(ebx + 0x4) = eax; /* 0x1704D535: mov dword ptr [ebx + 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D541; /* 0x1704D538: jne 0x1704d541 */
L_1704D53A:
    eax = 0x8007000Eu; /* 0x1704D53A: mov eax, 0x8007000e */
    goto L_1704D5B2; /* 0x1704D53F: jmp 0x1704d5b2 */
L_1704D541:
    PUSH32(esp, edi); /* 0x1704D541: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704D542: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704D547: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704D549: pop ecx */
    MEM32(ebx + 0x8) = eax; /* 0x1704D54A: mov dword ptr [ebx + 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D55E; /* 0x1704D54D: jne 0x1704d55e */
L_1704D54F:
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1704D54F: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1704D552: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x1704D557: mov eax, 0x8007000e */
    goto L_1704D5B1; /* 0x1704D55C: jmp 0x1704d5b1 */
L_1704D55E:
    ecx = edi; /* 0x1704D55E: mov ecx, edi */
    edi = MEM32(ebx + 0x4); /* 0x1704D560: mov edi, dword ptr [ebx + 4] */
    eax = ecx; /* 0x1704D563: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704D565: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704D565: shr ecx, 2 */
    MEM32(ebx) = esi; /* 0x1704D568: mov dword ptr [ebx], esi */
    esi = MEM32(ebp + 0x14); /* 0x1704D56A: mov esi, dword ptr [ebp + 0x14] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704D56D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704D56F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704D571: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704D574: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x1704D576: mov ecx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebx + 0x8); /* 0x1704D579: mov edi, dword ptr [ebx + 8] */
    esi = MEM32(ebp + 0x18); /* 0x1704D57C: mov esi, dword ptr [ebp + 0x18] */
    eax = ecx; /* 0x1704D57F: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704D581: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704D581: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704D584: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704D586: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704D588: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704D58B: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x1704D58D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1704D590: push dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704D593: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x230) = edi; /* 0x1704D595: mov dword ptr [esi + 0x230], edi */
    RECOMP_CALL(sub_1721B010); /* 0x1704D59B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1704D5A0: push dword ptr [esi + 0x18] */
    MEM32(esi + 0x14) = edi; /* 0x1704D5A3: mov dword ptr [esi + 0x14], edi */
    RECOMP_CALL(sub_1721B010); /* 0x1704D5A6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704D5AB: pop ecx */
    MEM32(esi + 0x18) = edi; /* 0x1704D5AC: mov dword ptr [esi + 0x18], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D5AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704D5B1:
    ecx = POP32_VAL(esp); /* 0x1704D5B1: pop ecx */
L_1704D5B2:
    edi = POP32_VAL(esp); /* 0x1704D5B2: pop edi */
L_1704D5B3:
    ebx = POP32_VAL(esp); /* 0x1704D5B3: pop ebx */
L_1704D5B4:
    esi = POP32_VAL(esp); /* 0x1704D5B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704D5B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704D5B6: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704D5BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D5BEu);

L_1704D5BE:
    edi = edi; /* 0x1704D5BE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D5C0: push ebp */
    ebp = esp; /* 0x1704D5C1: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D5C3: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x1C); /* 0x1704D5C6: mov eax, dword ptr [eax + 0x1c] */
    ebp = POP32_VAL(esp); /* 0x1704D5C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704D5CA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704D5D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D5D2u);

L_1704D5D2:
    edi = edi; /* 0x1704D5D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D5D4: push ebp */
    ebp = esp; /* 0x1704D5D5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D5D7: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x20); /* 0x1704D5DA: mov eax, dword ptr [eax + 0x20] */
    ebp = POP32_VAL(esp); /* 0x1704D5DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704D5DE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704D5E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D5E6u);

L_1704D5E6:
    edi = edi; /* 0x1704D5E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D5E8: push ebp */
    ebp = esp; /* 0x1704D5E9: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1704D5EB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1704D5EC: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1704D5EF: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1704D5F0: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, MEM32(ebx + 0x8) */ /* 0x1704D5F3: cmp edi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704D5FE; /* 0x1704D5F6: jae 0x1704d5fe */
L_1704D5F8:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1704D5F8: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D605; /* 0x1704D5FC: jne 0x1704d605 */
L_1704D5FE:
    eax = 0x8876086Cu; /* 0x1704D5FE: mov eax, 0x8876086c */
    goto L_1704D66C; /* 0x1704D603: jmp 0x1704d66c */
L_1704D605:
    eax = MEM32(ebx + 0x4); /* 0x1704D605: mov eax, dword ptr [ebx + 4] */
    edi = edi + edi * 4; /* 0x1704D608: lea edi, [edi + edi*4] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1704D60B: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1704D60B: shl edi, 4 */
    eax = MEM32(eax + edi + 0xC); /* 0x1704D60E: mov eax, dword ptr [eax + edi + 0xc] */
    /* test eax, eax */ /* 0x1704D612: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D61D; /* 0x1704D614: je 0x1704d61d */
L_1704D616:
    PUSH32(esp, eax); /* 0x1704D616: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1704D617: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704D61C: pop ecx */
L_1704D61D:
    eax = MEM32(ebp + 0x10); /* 0x1704D61D: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1704D620: push esi */
    esi = eax + 0x1; /* 0x1704D621: lea esi, [eax + 1] */
L_1704D624:
    SET_LO8(ecx, MEM8(eax)); /* 0x1704D624: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704D626: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1704D627: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D624; /* 0x1704D629: jne 0x1704d624 */
L_1704D62B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1704D62B: sub eax, esi */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x1704D62D: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x1704D630: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704D631: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704D636: pop ecx */
    ecx = MEM32(ebx + 0x4); /* 0x1704D637: mov ecx, dword ptr [ebx + 4] */
    MEM32(ecx + edi + 0xC) = eax; /* 0x1704D63A: mov dword ptr [ecx + edi + 0xc], eax */
    eax = MEM32(ebx + 0x4); /* 0x1704D63E: mov eax, dword ptr [ebx + 4] */
    /* cmp MEM32(eax + edi + 0xC), 0 */ /* 0x1704D641: cmp dword ptr [eax + edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704D64F; /* 0x1704D646: jne 0x1704d64f */
L_1704D648:
    eax = 0x8007000Eu; /* 0x1704D648: mov eax, 0x8007000e */
    goto L_1704D66B; /* 0x1704D64D: jmp 0x1704d66b */
L_1704D64F:
    eax = MEM32(ebx + 0x4); /* 0x1704D64F: mov eax, dword ptr [ebx + 4] */
    edi = MEM32(eax + edi + 0xC); /* 0x1704D652: mov edi, dword ptr [eax + edi + 0xc] */
    ecx = esi; /* 0x1704D656: mov ecx, esi */
    esi = MEM32(ebp + 0x10); /* 0x1704D658: mov esi, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x1704D65B: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704D65D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704D65D: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704D660: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704D662: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704D664: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704D667: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D669: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704D66B:
    esi = POP32_VAL(esp); /* 0x1704D66B: pop esi */
L_1704D66C:
    edi = POP32_VAL(esp); /* 0x1704D66C: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704D66D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704D66E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704D66F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704D677(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D677u);

L_1704D677:
    edi = edi; /* 0x1704D677: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D679: push ebp */
    ebp = esp; /* 0x1704D67A: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704D67C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704D67F: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x1704D682: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D68B; /* 0x1704D685: jb 0x1704d68b */
L_1704D687:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D687: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704D698; /* 0x1704D689: jmp 0x1704d698 */
L_1704D68B:
    ecx = MEM32(ecx + 0x4); /* 0x1704D68B: mov ecx, dword ptr [ecx + 4] */
    eax = eax + eax * 4; /* 0x1704D68E: lea eax, [eax + eax*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704D691: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704D691: shl eax, 4 */
    eax = MEM32(eax + ecx + 0xC); /* 0x1704D694: mov eax, dword ptr [eax + ecx + 0xc] */
L_1704D698:
    ebp = POP32_VAL(esp); /* 0x1704D698: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704D699: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704D6A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D6A1u);

L_1704D6A1:
    edi = edi; /* 0x1704D6A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D6A3: push ebp */
    ebp = esp; /* 0x1704D6A4: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704D6A6: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704D6A9: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x1704D6AC: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D6B8; /* 0x1704D6AF: jb 0x1704d6b8 */
L_1704D6B1:
    eax = 0x8876086Cu; /* 0x1704D6B1: mov eax, 0x8876086c */
    goto L_1704D6DE; /* 0x1704D6B6: jmp 0x1704d6de */
L_1704D6B8:
    PUSH32(esp, esi); /* 0x1704D6B8: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1704D6B9: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1704D6BC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D6C7; /* 0x1704D6BE: jne 0x1704d6c7 */
L_1704D6C0:
    eax = 0x8876086Cu; /* 0x1704D6C0: mov eax, 0x8876086c */
    goto L_1704D6DD; /* 0x1704D6C5: jmp 0x1704d6dd */
L_1704D6C7:
    ecx = MEM32(ecx + 0x4); /* 0x1704D6C7: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, edi); /* 0x1704D6CA: push edi */
    eax = eax + eax * 4; /* 0x1704D6CB: lea eax, [eax + eax*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704D6CE: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704D6CE: shl eax, 4 */
    edi = eax + ecx + 0x10; /* 0x1704D6D1: lea edi, [eax + ecx + 0x10] */
    PUSH32(esp, 0x10u); /* 0x1704D6D5: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1704D6D7: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704D6D8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D6DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1704D6DC: pop edi */
L_1704D6DD:
    esi = POP32_VAL(esp); /* 0x1704D6DD: pop esi */
L_1704D6DE:
    ebp = POP32_VAL(esp); /* 0x1704D6DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704D6DF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704D6E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D6E7u);

L_1704D6E7:
    edi = edi; /* 0x1704D6E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D6E9: push ebp */
    ebp = esp; /* 0x1704D6EA: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704D6EC: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704D6EF: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x1704D6F2: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D6FB; /* 0x1704D6F5: jb 0x1704d6fb */
L_1704D6F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D6F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704D708; /* 0x1704D6F9: jmp 0x1704d708 */
L_1704D6FB:
    ecx = MEM32(ecx + 0x4); /* 0x1704D6FB: mov ecx, dword ptr [ecx + 4] */
    eax = eax + eax * 4; /* 0x1704D6FE: lea eax, [eax + eax*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704D701: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704D701: shl eax, 4 */
    eax = eax + ecx + 0x10; /* 0x1704D704: lea eax, [eax + ecx + 0x10] */
L_1704D708:
    ebp = POP32_VAL(esp); /* 0x1704D708: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704D709: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704D711(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D711u);

L_1704D711:
    edi = edi; /* 0x1704D711: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D713: push ebp */
    ebp = esp; /* 0x1704D714: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D716: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704D719: fld dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x230)); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(eax + 0x230) = MEM32(eax + 0x230) & 0xFFFFFFFBu; /* 0x1704D71C: and dword ptr [eax + 0x230], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x238) = _v; } /* 0x1704D723: fstp dword ptr [eax + 0x238] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D729: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1704D72B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704D72C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704D734(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D734u);

L_1704D734:
    edi = edi; /* 0x1704D734: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D736: push ebp */
    ebp = esp; /* 0x1704D737: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704D739: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x238)); /* 0x1704D73C: fld dword ptr [eax + 0x238] */
    ebp = POP32_VAL(esp); /* 0x1704D742: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704D743: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704D74B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D74Bu);

L_1704D74B:
    edi = edi; /* 0x1704D74B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D74D: push ebp */
    ebp = esp; /* 0x1704D74E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1704D750: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704D753: push esi */
    esi = ecx; /* 0x1704D754: mov esi, ecx */
    /* test MEM8(esi + 0x230), 2 */ /* 0x1704D756: test byte ptr [esi + 0x230], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x230)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704D766; /* 0x1704D75D: je 0x1704d766 */
L_1704D75F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D75F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704D988; /* 0x1704D761: jmp 0x1704d988 */
L_1704D766:
    eax = MEM32(esi); /* 0x1704D766: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1704D768: push ebx */
    PUSH32(esp, edi); /* 0x1704D769: push edi */
    edi = esi + 0xC; /* 0x1704D76A: lea edi, [esi + 0xc] */
    PUSH32(esp, edi); /* 0x1704D76D: push edi */
    PUSH32(esp, esi); /* 0x1704D76E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1704D76F: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704D772: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1704D774: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1704D986; /* 0x1704D776: jl 0x1704d986 */
L_1704D77C:
    eax = MEM32(esi + 0x14); /* 0x1704D77C: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, ebx */ /* 0x1704D77F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D78D; /* 0x1704D781: je 0x1704d78d */
L_1704D783:
    PUSH32(esp, eax); /* 0x1704D783: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1704D784: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704D789: pop ecx */
    MEM32(esi + 0x14) = ebx; /* 0x1704D78A: mov dword ptr [esi + 0x14], ebx */
L_1704D78D:
    eax = MEM32(esi + 0x18); /* 0x1704D78D: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, ebx */ /* 0x1704D790: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D79E; /* 0x1704D792: je 0x1704d79e */
L_1704D794:
    PUSH32(esp, eax); /* 0x1704D794: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1704D795: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704D79A: pop ecx */
    MEM32(esi + 0x18) = ebx; /* 0x1704D79B: mov dword ptr [esi + 0x18], ebx */
L_1704D79E:
    eax = MEM32(esi + 0x1C); /* 0x1704D79E: mov eax, dword ptr [esi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi)); /* 0x1704D7A1: imul eax, dword ptr [edi] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704D7A4: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704D7A4: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704D7A7: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704D7A8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = eax; /* 0x1704D7AD: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(esi + 0x1C); /* 0x1704D7B0: mov eax, dword ptr [esi + 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi)); /* 0x1704D7B3: imul eax, dword ptr [edi] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704D7B6: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704D7B6: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704D7B9: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704D7BA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704D7BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1704D7C0: pop ecx */
    ecx = MEM32(esi + 0x14); /* 0x1704D7C1: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, ebx */ /* 0x1704D7C4: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x18) = eax; /* 0x1704D7C6: mov dword ptr [esi + 0x18], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D96B; /* 0x1704D7C9: je 0x1704d96b */
L_1704D7CF:
    /* cmp eax, ebx */ /* 0x1704D7CF: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704D96B; /* 0x1704D7D1: je 0x1704d96b */
L_1704D7D7:
    ecx = MEM32(esi + 0x1C); /* 0x1704D7D7: mov ecx, dword ptr [esi + 0x1c] */
    edi = MEM32(esi + 0x10); /* 0x1704D7DA: mov edi, dword ptr [esi + 0x10] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704D7DD: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704D7DD: shl ecx, 2 */
    edx = ecx; /* 0x1704D7E0: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704D7E2: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704D7E2: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D7E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704D7E7: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704D7E9: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704D7EB: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704D7EE: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x1704D7F0: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1704D7F3: mov dword ptr [ebp - 4], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704D871; /* 0x1704D7F6: jbe 0x1704d871 */
L_1704D7F8:
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704D7F8: mov dword ptr [ebp - 0xc], ebx */
L_1704D7FB:
    eax = MEM32(esi + 0x4); /* 0x1704D7FB: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x1704D7FE: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ebx; /* 0x1704D801: mov dword ptr [ebp - 8], ebx */
    /* cmp MEM32(eax), ebx */ /* 0x1704D804: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704D862; /* 0x1704D806: jbe 0x1704d862 */
L_1704D808:
    ecx = MEM32(eax + 0x4); /* 0x1704D808: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x1704D80B: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(ecx + edx * 4); /* 0x1704D80E: mov ecx, dword ptr [ecx + edx*4] */
    ebx = MEM32(esi + 0xC); /* 0x1704D811: mov ebx, dword ptr [esi + 0xc] */
    edi = MEM32(esi + 0x10); /* 0x1704D814: mov edi, dword ptr [esi + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x1704D817: imul ebx, ecx */
    edx = ecx; /* 0x1704D81A: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1704D81C: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1704D81C: shl edx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edx + edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(edx + edi); /* 0x1704D81F: add ebx, dword ptr [edx + edi] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x1704D822: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = edx; /* 0x1704D825: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(esi + 0x14); /* 0x1704D828: mov edx, dword ptr [esi + 0x14] */
    MEM32(edx + ebx * 4) = edi; /* 0x1704D82B: mov dword ptr [edx + ebx*4], edi */
    ebx = MEM32(esi + 0xC); /* 0x1704D82E: mov ebx, dword ptr [esi + 0xc] */
    edi = MEM32(esi + 0x10); /* 0x1704D831: mov edi, dword ptr [esi + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x1704D834: imul ebx, ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x1704D837: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ecx + edi); /* 0x1704D83A: add ebx, dword ptr [ecx + edi] */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x8); /* 0x1704D83D: mov edx, dword ptr [eax + 8] */
    edi = MEM32(ebp + (-0x8)); /* 0x1704D840: mov edi, dword ptr [ebp - 8] */
    ecx = MEM32(esi + 0x18); /* 0x1704D843: mov ecx, dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(edx + edi * 4)); /* 0x1704D846: fld dword ptr [edx + edi*4] */
    edx = MEM32(ebp + (-0x10)); /* 0x1704D849: mov edx, dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + ebx * 4) = _v; } /* 0x1704D84C: fstp dword ptr [ecx + ebx*4] */
    ecx = MEM32(esi + 0x10); /* 0x1704D84F: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1704D852: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1704D854: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1704D856: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x8)); /* 0x1704D859: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, MEM32(eax) */ /* 0x1704D85C: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D808; /* 0x1704D85E: jb 0x1704d808 */
L_1704D860:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704D860: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704D862:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704D862: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1704D865: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0x50u; /* 0x1704D868: add dword ptr [ebp - 0xc], 0x50 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x1704D86C: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D7FB; /* 0x1704D86F: jb 0x1704d7fb */
L_1704D871:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x1704D871: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1704D875: mov dword ptr [ebp - 4], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704D960; /* 0x1704D878: jbe 0x1704d960 */
L_1704D87E:
    eax = MEM32(esi + 0xC); /* 0x1704D87E: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(esi + 0x14); /* 0x1704D881: mov edx, dword ptr [esi + 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1704D884: imul eax, ebx */
    ecx = MEM32(esi + 0x18); /* 0x1704D887: mov ecx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1704D88A: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704D88E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704D88E: shl eax, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1704D891: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1704D893: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x1704D895: mov dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - ecx; /* 0x1704D898: sub dword ptr [ebp - 0xc], ecx */
    _flag_k = FK_CMP;
    edi = ecx; /* 0x1704D89B: mov edi, ecx */
L_1704D89D:
    eax = MEM32(esi + 0x10); /* 0x1704D89D: mov eax, dword ptr [esi + 0x10] */
    eax = MEM32(eax + ebx * 4); /* 0x1704D8A0: mov eax, dword ptr [eax + ebx*4] */
    /* cmp eax, 4 */ /* 0x1704D8A3: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edi; /* 0x1704D8A6: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1704D8A9: mov dword ptr [ebp - 0x18], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704D8B1; /* 0x1704D8AC: jbe 0x1704d8b1 */
L_1704D8AE:
    PUSH32(esp, 4); /* 0x1704D8AE: push 4 */
    eax = POP32_VAL(esp); /* 0x1704D8B0: pop eax */
L_1704D8B1:
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1704D8B1: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704D926; /* 0x1704D8B4: jae 0x1704d926 */
L_1704D8B6:
    eax = MEM32(ebp + (-0x8)); /* 0x1704D8B6: mov eax, dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x1704D8B9: fldz  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1704D8BB: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1704D8BF: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1704D8C2: mov eax, dword ptr [ebp - 0x18] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1704D8C5: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704D8EE; /* 0x1704D8C8: jae 0x1704d8ee */
L_1704D8CA:
    eax = MEM32(esi + 0x10); /* 0x1704D8CA: mov eax, dword ptr [esi + 0x10] */
    eax = MEM32(eax + ebx * 4); /* 0x1704D8CD: mov eax, dword ptr [eax + ebx*4] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x1704D8D0: mov ebx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1704D8D3: mov dword ptr [ebp - 0x18], eax */
L_1704D8D6:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + ebx * 4)); /* 0x1704D8D6: fcom dword ptr [ecx + ebx*4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704D8D9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704D8DB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704D8E8; /* 0x1704D8DE: jp 0x1704d8e8 */
L_1704D8E0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704D8E0: fstp st(0) */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1704D8E2: mov dword ptr [ebp - 0x10], ebx */
    fp_push(*(float*)&MEM32(ecx + ebx * 4)); /* 0x1704D8E5: fld dword ptr [ecx + ebx*4] */
L_1704D8E8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1704D8E8: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x18)) */ /* 0x1704D8E9: cmp ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D8D6; /* 0x1704D8EC: jb 0x1704d8d6 */
L_1704D8EE:
    eax = MEM32(ebp + (-0xC)); /* 0x1704D8EE: mov eax, dword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704D8F1: fstp st(0) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1704D8F3: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x1704D8F5: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1704D8F7: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1704D8FA: mov eax, dword ptr [ebp - 0x10] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704D8FD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704D8FD: shl eax, 2 */
    ebx = MEM32(eax + edx); /* 0x1704D900: mov ebx, dword ptr [eax + edx] */
    MEM32(edi) = ebx; /* 0x1704D903: mov dword ptr [edi], ebx */
    edi = MEM32(ebp + (-0x1C)); /* 0x1704D905: mov edi, dword ptr [ebp - 0x1c] */
    MEM32(eax + edx) = edi; /* 0x1704D908: mov dword ptr [eax + edx], edi */
    edi = MEM32(ebp + (-0x14)); /* 0x1704D90B: mov edi, dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1704D90E: fld dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704D910: add eax, ecx */
    _flag_k = FK_ADD;
    ebx = MEM32(eax); /* 0x1704D912: mov ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1704D914: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    MEM32(edi) = ebx; /* 0x1704D917: mov dword ptr [edi], ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704D919: fstp dword ptr [eax] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1704D91B: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1704D91E: add edi, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1704D89D; /* 0x1704D921: jmp 0x1704d89d */
L_1704D926:
    eax = MEM32(esi + 0x10); /* 0x1704D926: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(eax + ebx * 4); /* 0x1704D929: mov ecx, dword ptr [eax + ebx*4] */
    eax = esi + 0xC; /* 0x1704D92C: lea eax, [esi + 0xc] */
    goto L_1704D94F; /* 0x1704D92F: jmp 0x1704d94f */
L_1704D931:
    edx = MEM32(eax); /* 0x1704D931: mov edx, dword ptr [eax] */
    fp_push(0.0); /* 0x1704D933: fldz  */
    edi = MEM32(esi + 0x14); /* 0x1704D935: mov edi, dword ptr [esi + 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx); /* 0x1704D938: imul edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1704D93B: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + edx * 4)); _flag_b = (uint32_t)(0);
    MEM32(edi + edx * 4) = MEM32(edi + edx * 4) & 0; /* 0x1704D93D: and dword ptr [edi + edx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax); /* 0x1704D941: mov edx, dword ptr [eax] */
    edi = MEM32(esi + 0x18); /* 0x1704D943: mov edi, dword ptr [esi + 0x18] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx); /* 0x1704D946: imul edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1704D949: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704D94B: inc ecx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + edx * 4) = _v; } /* 0x1704D94C: fstp dword ptr [edi + edx*4] */
L_1704D94F:
    /* cmp ecx, MEM32(eax) */ /* 0x1704D94F: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D931; /* 0x1704D951: jb 0x1704d931 */
L_1704D953:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1704D953: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0x1C) */ /* 0x1704D954: cmp ebx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1704D957: mov dword ptr [ebp - 4], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D87E; /* 0x1704D95A: jb 0x1704d87e */
L_1704D960:
    _flag_a = (uint32_t)((MEM32(esi + 0x230) | 2)); _flag_b = (uint32_t)((MEM32(esi + 0x230) | 2));
    MEM32(esi + 0x230) = MEM32(esi + 0x230) | 2; /* 0x1704D960: or dword ptr [esi + 0x230], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704D967: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704D986; /* 0x1704D969: jmp 0x1704d986 */
L_1704D96B:
    PUSH32(esp, ecx); /* 0x1704D96B: push ecx */
    RECOMP_CALL(sub_1721B010); /* 0x1704D96C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1704D971: push dword ptr [esi + 0x18] */
    MEM32(esi + 0x14) = ebx; /* 0x1704D974: mov dword ptr [esi + 0x14], ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1704D977: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704D97C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1704D97D: pop ecx */
    MEM32(esi + 0x18) = ebx; /* 0x1704D97E: mov dword ptr [esi + 0x18], ebx */
    eax = 0x8007000Eu; /* 0x1704D981: mov eax, 0x8007000e */
L_1704D986:
    edi = POP32_VAL(esp); /* 0x1704D986: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704D987: pop ebx */
L_1704D988:
    esi = POP32_VAL(esp); /* 0x1704D988: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704D989: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704D98A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704D990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704D990u);

L_1704D990:
    edi = edi; /* 0x1704D990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704D992: push ebp */
    ebp = esp; /* 0x1704D993: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1704D995: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704D998: push esi */
    esi = ecx; /* 0x1704D999: mov esi, ecx */
    /* test MEM8(esi + 0x230), 2 */ /* 0x1704D99B: test byte ptr [esi + 0x230], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x230)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704D9B1; /* 0x1704D9A2: jne 0x1704d9b1 */
L_1704D9A4:
    RECOMP_CALL(sub_1704D74B); /* 0x1704D9A4: call 0x1704d74b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704D9A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DB0E; /* 0x1704D9AB: jne 0x1704db0e */
L_1704D9B1:
    eax = MEM32(esi + 0x1C); /* 0x1704D9B1: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, ebx); /* 0x1704D9B4: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704D9B5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1704D9B7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704D9B9: push edi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1704D9BA: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1704D9BD: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704D9C0: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DB0A; /* 0x1704D9C3: jbe 0x1704db0a */
L_1704D9C9:
    ecx = MEM32(esi + 0x10); /* 0x1704D9C9: mov ecx, dword ptr [esi + 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x1704D9CC: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx + ebx * 4), edi */ /* 0x1704D9CF: cmp dword ptr [ecx + ebx*4], edi */
    _flag_a = (uint32_t)(MEM32(ecx + ebx * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DA77; /* 0x1704D9D2: jbe 0x1704da77 */
L_1704D9D8:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1704D9D8: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704DA1F; /* 0x1704D9DC: jne 0x1704da1f */
L_1704D9DE:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1704D9DE: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704DA27; /* 0x1704D9E2: je 0x1704da27 */
L_1704D9E4:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704D9E4: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704D9E4: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704D9E7: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704D9E8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1704D9ED: mov edi, eax */
    /* test edi, edi */ /* 0x1704D9EF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704D9F1: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1704D9F2: mov dword ptr [ebp - 4], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704DAAA; /* 0x1704D9F5: je 0x1704daaa */
L_1704D9FB:
    eax = MEM32(ebp + 0x8); /* 0x1704D9FB: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1704D9FE: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1704DA00: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704DA01: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1704DA04: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x54)); /* 0x1704DA05: call dword ptr [ecx + 0x54] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1704DA08: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1704DA0A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DAB1; /* 0x1704DA0C: jne 0x1704dab1 */
L_1704DA12:
    edi = MEM32(ebp + 0xC); /* 0x1704DA12: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1704DA15: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = 1; /* 0x1704DA18: mov dword ptr [ebp - 8], 1 */
L_1704DA1F:
    eax = MEM32(ebp + (-0x4)); /* 0x1704DA1F: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(eax + ebx * 4); /* 0x1704DA22: mov edx, dword ptr [eax + ebx*4] */
    goto L_1704DA29; /* 0x1704DA25: jmp 0x1704da29 */
L_1704DA27:
    edx = ebx; /* 0x1704DA27: mov edx, ebx */
L_1704DA29:
    eax = MEM32(esi + 0xC); /* 0x1704DA29: mov eax, dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x1704DA2C: fldz  */
    ecx = MEM32(esi + 0x18); /* 0x1704DA2E: mov ecx, dword ptr [esi + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1704DA31: imul eax, edx */
    ecx = ecx + eax * 4; /* 0x1704DA34: lea ecx, [ecx + eax*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DA37: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1704DA39: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704DA49; /* 0x1704DA3B: jbe 0x1704da49 */
L_1704DA3D:
    fp_push(_st[0]); /* 0x1704DA3D: fld st(0) */
    _st[0] += (double)*(float*)ADDR(ecx + eax * 4); /* 0x1704DA3F: fadd dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704DA42: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1704DA43: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1704DA45: fstp st(1) */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DA3D; /* 0x1704DA47: jb 0x1704da3d */
L_1704DA49:
    _st[0] = *(double*)ADDR(0x17001D88) / _st[0]; /* 0x1704DA49: fdivr qword ptr [0x17001d88] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DA4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1704DA51: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704DA62; /* 0x1704DA53: jbe 0x1704da62 */
L_1704DA55:
    fp_push(*(float*)&MEM32(ecx + eax * 4)); /* 0x1704DA55: fld dword ptr [ecx + eax*4] */
    _st[0] *= _st[1]; /* 0x1704DA58: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x1704DA5A: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704DA5D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1704DA5E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DA55; /* 0x1704DA60: jb 0x1704da55 */
L_1704DA62:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704DA62: fstp st(0) */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1704DA64: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1704DA64: shl edx, 2 */
    goto L_1704DA6F; /* 0x1704DA67: jmp 0x1704da6f */
L_1704DA69:
    fp_push(0.0); /* 0x1704DA69: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x1704DA6B: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704DA6E: inc eax */
    _flag_k = FK_INC;
L_1704DA6F:
    edi = MEM32(esi + 0x10); /* 0x1704DA6F: mov edi, dword ptr [esi + 0x10] */
    /* cmp eax, MEM32(edx + edi) */ /* 0x1704DA72: cmp eax, dword ptr [edx + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DA69; /* 0x1704DA75: jb 0x1704da69 */
L_1704DA77:
    eax = MEM32(esi + 0x1C); /* 0x1704DA77: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1704DA7A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x1704DA7B: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704DA7D: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704D9C9; /* 0x1704DA80: jb 0x1704d9c9 */
L_1704DA86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704DA86: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x1704DA88: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704DB0A; /* 0x1704DA8B: je 0x1704db0a */
L_1704DA8D:
    /* cmp eax, edi */ /* 0x1704DA8D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DB01; /* 0x1704DA8F: jbe 0x1704db01 */
L_1704DA91:
    eax = MEM32(esi + 0x10); /* 0x1704DA91: mov eax, dword ptr [esi + 0x10] */
L_1704DA94:
    ecx = MEM32(ebp + (-0x4)); /* 0x1704DA94: mov ecx, dword ptr [ebp - 4] */
    ebx = ecx + edi * 4; /* 0x1704DA97: lea ebx, [ecx + edi*4] */
    /* cmp MEM32(ebx), edi */ /* 0x1704DA9A: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ebx; /* 0x1704DA9C: mov dword ptr [ebp + 0x10], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704DAFB; /* 0x1704DA9F: je 0x1704dafb */
L_1704DAA1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704DAA1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + edi * 4), edx */ /* 0x1704DAA3: cmp dword ptr [eax + edi*4], edx */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DAFB; /* 0x1704DAA6: jbe 0x1704dafb */
L_1704DAA8:
    goto L_1704DABF; /* 0x1704DAA8: jmp 0x1704dabf */
L_1704DAAA:
    eax = 0x8007000Eu; /* 0x1704DAAA: mov eax, 0x8007000e */
    goto L_1704DB0C; /* 0x1704DAAF: jmp 0x1704db0c */
L_1704DAB1:
    PUSH32(esp, edi); /* 0x1704DAB1: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1704DAB2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704DAB7: pop ecx */
    eax = ebx; /* 0x1704DAB8: mov eax, ebx */
    goto L_1704DB0C; /* 0x1704DABA: jmp 0x1704db0c */
L_1704DABC:
    ebx = MEM32(ebp + 0x10); /* 0x1704DABC: mov ebx, dword ptr [ebp + 0x10] */
L_1704DABF:
    ebx = MEM32(ebx); /* 0x1704DABF: mov ebx, dword ptr [ebx] */
    eax = MEM32(esi + 0xC); /* 0x1704DAC1: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x14); /* 0x1704DAC4: mov ecx, dword ptr [esi + 0x14] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x1704DAC7: imul ebx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1704DACA: imul eax, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1704DACD: add ebx, edx */
    _flag_k = FK_ADD;
    ebx = MEM32(ecx + ebx * 4); /* 0x1704DACF: mov ebx, dword ptr [ecx + ebx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1704DAD2: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + eax * 4) = ebx; /* 0x1704DAD4: mov dword ptr [ecx + eax*4], ebx */
    eax = MEM32(esi + 0xC); /* 0x1704DAD7: mov eax, dword ptr [esi + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x1704DADA: mov ebx, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebx); /* 0x1704DADD: mov ebx, dword ptr [ebx] */
    ecx = MEM32(esi + 0x18); /* 0x1704DADF: mov ecx, dword ptr [esi + 0x18] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x1704DAE2: imul ebx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1704DAE5: imul eax, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1704DAE8: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1704DAEA: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704DAEC: inc edx */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ecx + ebx * 4)); /* 0x1704DAED: fld dword ptr [ecx + ebx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x1704DAF0: fstp dword ptr [ecx + eax*4] */
    eax = MEM32(esi + 0x10); /* 0x1704DAF3: mov eax, dword ptr [esi + 0x10] */
    /* cmp edx, MEM32(eax + edi * 4) */ /* 0x1704DAF6: cmp edx, dword ptr [eax + edi*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + edi * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DABC; /* 0x1704DAF9: jb 0x1704dabc */
L_1704DAFB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704DAFB: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x1C) */ /* 0x1704DAFC: cmp edi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DA94; /* 0x1704DAFF: jb 0x1704da94 */
L_1704DB01:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704DB01: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1704DB04: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704DB09: pop ecx */
L_1704DB0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DB0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704DB0C:
    edi = POP32_VAL(esp); /* 0x1704DB0C: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704DB0D: pop ebx */
L_1704DB0E:
    esi = POP32_VAL(esp); /* 0x1704DB0E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704DB0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704DB10: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704DB18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704DB18u);

L_1704DB18:
    edi = edi; /* 0x1704DB18: mov edi, edi */
    PUSH32(esp, edi); /* 0x1704DB1A: push edi */
    edx = ecx; /* 0x1704DB1B: mov edx, ecx */
    PUSH32(esp, 8); /* 0x1704DB1D: push 8 */
    ecx = POP32_VAL(esp); /* 0x1704DB1F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DB20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx + 0x4; /* 0x1704DB22: lea edi, [edx + 4] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704DB25: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = edx; /* 0x1704DB27: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x1704DB29: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704DB2A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704DB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704DB30u);

L_1704DB30:
    edi = edi; /* 0x1704DB30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704DB32: push ebp */
    ebp = esp; /* 0x1704DB33: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704DB35: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704DB38: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x1704DB3B: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704DB4E; /* 0x1704DB3E: jae 0x1704db4e */
L_1704DB40:
    ecx = MEM32(ecx + 0x4); /* 0x1704DB40: mov ecx, dword ptr [ecx + 4] */
    eax = eax + eax * 4; /* 0x1704DB43: lea eax, [eax + eax*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704DB46: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704DB46: shl eax, 4 */
    eax = MEM32(eax + ecx); /* 0x1704DB49: mov eax, dword ptr [eax + ecx] */
    goto L_1704DB50; /* 0x1704DB4C: jmp 0x1704db50 */
L_1704DB4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DB4E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704DB50:
    ebp = POP32_VAL(esp); /* 0x1704DB50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704DB51: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704DB59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704DB59u);

L_1704DB59:
    edi = edi; /* 0x1704DB59: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704DB5B: push ebp */
    ebp = esp; /* 0x1704DB5C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704DB5E: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1704DB61: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1704DB62: mov ebx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x1704DB65: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DB71; /* 0x1704DB68: jb 0x1704db71 */
L_1704DB6A:
    eax = 0x8876086Cu; /* 0x1704DB6A: mov eax, 0x8876086c */
    goto L_1704DBC5; /* 0x1704DB6F: jmp 0x1704dbc5 */
L_1704DB71:
    PUSH32(esp, edi); /* 0x1704DB71: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1704DB72: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1704DB75: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DB80; /* 0x1704DB77: jne 0x1704db80 */
L_1704DB79:
    eax = 0x8876086Cu; /* 0x1704DB79: mov eax, 0x8876086c */
    goto L_1704DBC4; /* 0x1704DB7E: jmp 0x1704dbc4 */
L_1704DB80:
    ecx = MEM32(ebx + 0x4); /* 0x1704DB80: mov ecx, dword ptr [ebx + 4] */
    eax = eax + eax * 4; /* 0x1704DB83: lea eax, [eax + eax*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1704DB86: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1704DB86: shl eax, 4 */
    edx = ecx + eax; /* 0x1704DB89: lea edx, [ecx + eax] */
    ecx = MEM32(edx); /* 0x1704DB8C: mov ecx, dword ptr [edx] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704DB8E: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704DB8E: shl ecx, 2 */
    PUSH32(esp, esi); /* 0x1704DB91: push esi */
    esi = MEM32(edx + 0x4); /* 0x1704DB92: mov esi, dword ptr [edx + 4] */
    edx = ecx; /* 0x1704DB95: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704DB97: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704DB97: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704DB9A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1704DB9C: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704DB9E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704DBA1: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebx + 0x4); /* 0x1704DBA3: mov ecx, dword ptr [ebx + 4] */
    edi = MEM32(ebp + 0x14); /* 0x1704DBA6: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704DBA9: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax); /* 0x1704DBAB: mov ecx, dword ptr [eax] */
    esi = MEM32(eax + 0x8); /* 0x1704DBAD: mov esi, dword ptr [eax + 8] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704DBB0: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704DBB0: shl ecx, 2 */
    eax = ecx; /* 0x1704DBB3: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704DBB5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704DBB5: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704DBB8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704DBBA: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704DBBC: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704DBBF: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DBC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704DBC3: pop esi */
L_1704DBC4:
    edi = POP32_VAL(esp); /* 0x1704DBC4: pop edi */
L_1704DBC5:
    ebx = POP32_VAL(esp); /* 0x1704DBC5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704DBC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704DBC7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704DBCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704DBCFu);

L_1704DBCF:
    edi = edi; /* 0x1704DBCF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704DBD1: push ebp */
    ebp = esp; /* 0x1704DBD2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704DBD4: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x1704DBD5: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1704DBD8: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704DBD9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM8(edx + 0x230), 1 */ /* 0x1704DBDB: test byte ptr [edx + 0x230], 1 */
    _flag_a = (uint32_t)(MEM8(edx + 0x230)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DC61; /* 0x1704DBE2: jne 0x1704dc61 */
L_1704DBE4:
    ecx = MEM32(edx + 0x1C); /* 0x1704DBE4: mov ecx, dword ptr [edx + 0x1c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704DBE7: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704DBE7: shl ecx, 2 */
    PUSH32(esp, ebx); /* 0x1704DBEA: push ebx */
    ebx = ecx; /* 0x1704DBEB: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704DBED: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704DBED: shr ecx, 2 */
    PUSH32(esp, edi); /* 0x1704DBF0: push edi */
    edi = MEM32(edx + 0x10); /* 0x1704DBF1: mov edi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DBF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xC) = esi; /* 0x1704DBF6: mov dword ptr [edx + 0xc], esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704DBF9: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = ebx; /* 0x1704DBFB: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704DBFD: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704DC00: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    /* cmp MEM32(edx + 0x8), esi */ /* 0x1704DC02: cmp dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x1704DC05: mov dword ptr [ebp - 4], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DC58; /* 0x1704DC08: jbe 0x1704dc58 */
L_1704DC0A:
    MEM32(ebp + 0x8) = esi; /* 0x1704DC0A: mov dword ptr [ebp + 8], esi */
L_1704DC0D:
    eax = MEM32(edx + 0x4); /* 0x1704DC0D: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1704DC10: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax), esi */ /* 0x1704DC13: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DC49; /* 0x1704DC15: jbe 0x1704dc49 */
L_1704DC17:
    ecx = MEM32(edx + 0x10); /* 0x1704DC17: mov ecx, dword ptr [edx + 0x10] */
L_1704DC1A:
    edi = MEM32(eax + 0x4); /* 0x1704DC1A: mov edi, dword ptr [eax + 4] */
    edi = MEM32(edi + esi * 4); /* 0x1704DC1D: mov edi, dword ptr [edi + esi*4] */
    ecx = ecx + edi * 4; /* 0x1704DC20: lea ecx, [ecx + edi*4] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1704DC23: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    edi = MEM32(eax + 0x4); /* 0x1704DC25: mov edi, dword ptr [eax + 4] */
    ecx = MEM32(edx + 0x10); /* 0x1704DC28: mov ecx, dword ptr [edx + 0x10] */
    edi = MEM32(edi + esi * 4); /* 0x1704DC2B: mov edi, dword ptr [edi + esi*4] */
    edi = MEM32(ecx + edi * 4); /* 0x1704DC2E: mov edi, dword ptr [ecx + edi*4] */
    /* cmp edi, MEM32(edx + 0xC) */ /* 0x1704DC31: cmp edi, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DC42; /* 0x1704DC34: jbe 0x1704dc42 */
L_1704DC36:
    edi = MEM32(eax + 0x4); /* 0x1704DC36: mov edi, dword ptr [eax + 4] */
    edi = MEM32(edi + esi * 4); /* 0x1704DC39: mov edi, dword ptr [edi + esi*4] */
    edi = MEM32(ecx + edi * 4); /* 0x1704DC3C: mov edi, dword ptr [ecx + edi*4] */
    MEM32(edx + 0xC) = edi; /* 0x1704DC3F: mov dword ptr [edx + 0xc], edi */
L_1704DC42:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704DC42: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(eax) */ /* 0x1704DC43: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DC1A; /* 0x1704DC45: jb 0x1704dc1a */
L_1704DC47:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704DC47: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704DC49:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704DC49: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1704DC4C: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x50u; /* 0x1704DC4F: add dword ptr [ebp + 8], 0x50 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x1704DC53: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DC0D; /* 0x1704DC56: jb 0x1704dc0d */
L_1704DC58:
    _flag_a = (uint32_t)((MEM32(edx + 0x230) | 1)); _flag_b = (uint32_t)((MEM32(edx + 0x230) | 1));
    MEM32(edx + 0x230) = MEM32(edx + 0x230) | 1; /* 0x1704DC58: or dword ptr [edx + 0x230], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1704DC5F: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704DC60: pop ebx */
L_1704DC61:
    eax = MEM32(ebp + 0xC); /* 0x1704DC61: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, esi */ /* 0x1704DC64: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1704DC66: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704DC6E; /* 0x1704DC67: je 0x1704dc6e */
L_1704DC69:
    ecx = MEM32(edx + 0xC); /* 0x1704DC69: mov ecx, dword ptr [edx + 0xc] */
    MEM32(eax) = ecx; /* 0x1704DC6C: mov dword ptr [eax], ecx */
L_1704DC6E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DC6E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704DC70: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704DC71: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704DC79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704DC79u);

L_1704DC79:
    edi = edi; /* 0x1704DC79: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704DC7B: push ebp */
    ebp = esp; /* 0x1704DC7C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1704DC7E: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704DC81: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1704DC82: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1704DC85: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DC93; /* 0x1704DC87: jne 0x1704dc93 */
L_1704DC89:
    eax = 0x8876086Cu; /* 0x1704DC89: mov eax, 0x8876086c */
    goto L_1704DDAC; /* 0x1704DC8E: jmp 0x1704ddac */
L_1704DC93:
    PUSH32(esp, esi); /* 0x1704DC93: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704DC94: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x1704DC97: mov ecx, esi */
    RECOMP_CALL(sub_1704D74B); /* 0x1704DC99: call 0x1704d74b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704DC9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DDAB; /* 0x1704DCA0: jne 0x1704ddab */
L_1704DCA6:
    eax = MEM32(esi + 0xC); /* 0x1704DCA6: mov eax, dword ptr [esi + 0xc] */
    eax = eax + eax * 2; /* 0x1704DCA9: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704DCAC: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704DCAC: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704DCAF: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704DCB0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704DCB5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704DCB7: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1704DCB8: mov dword ptr [ebp + 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DCC7; /* 0x1704DCBB: jne 0x1704dcc7 */
L_1704DCBD:
    eax = 0x8007000Eu; /* 0x1704DCBD: mov eax, 0x8007000e */
    goto L_1704DDAB; /* 0x1704DCC2: jmp 0x1704ddab */
L_1704DCC7:
    PUSH32(esp, edi); /* 0x1704DCC7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704DCC8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & edi; /* 0x1704DCCA: and dword ptr [ebp - 0x10], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1704DCCD: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edi; /* 0x1704DCD0: mov dword ptr [ebp - 0x14], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DD96; /* 0x1704DCD3: jbe 0x1704dd96 */
L_1704DCD9:
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704DCD9: mov dword ptr [ebp - 0xc], ebx */
L_1704DCDC:
    eax = MEM32(esi + 0xC); /* 0x1704DCDC: mov eax, dword ptr [esi + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1704DCDF: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1704DCE2: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + eax * 2; /* 0x1704DCE6: lea ecx, [eax + eax*2] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704DCE9: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704DCE9: shl ecx, 2 */
    edx = ecx; /* 0x1704DCEC: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704DCEE: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704DCEE: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704DCF1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704DCF4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704DCF6: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704DCF8: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1704DCFB: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704DCFF: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0xC)); /* 0x1704DD01: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704DD04: mov dword ptr [ebp - 4], eax */
L_1704DD07:
    eax = MEM32(ebp + (-0x4)); /* 0x1704DD07: mov eax, dword ptr [ebp - 4] */
    ecx = (uint32_t)MEM16(eax); /* 0x1704DD0A: movzx ecx, word ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x1C) */ /* 0x1704DD0D: cmp ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704DDB1; /* 0x1704DD10: jae 0x1704ddb1 */
L_1704DD16:
    eax = MEM32(esi + 0x10); /* 0x1704DD16: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704DD19: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + ecx * 4), edi */ /* 0x1704DD1B: cmp dword ptr [eax + ecx*4], edi */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DD68; /* 0x1704DD1E: jbe 0x1704dd68 */
L_1704DD20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DD20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704DD22: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704DD46; /* 0x1704DD25: jae 0x1704dd46 */
L_1704DD27:
    edx = MEM32(esi + 0xC); /* 0x1704DD27: mov edx, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x14); /* 0x1704DD2A: mov ebx, dword ptr [esi + 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x1704DD2D: imul edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1704DD30: add edx, edi */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + edx * 4); /* 0x1704DD32: mov edx, dword ptr [ebx + edx*4] */
L_1704DD35:
    ebx = MEM32(ebp + 0x8); /* 0x1704DD35: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + eax * 4), edx */ /* 0x1704DD38: cmp dword ptr [ebx + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704DD43; /* 0x1704DD3B: je 0x1704dd43 */
L_1704DD3D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704DD3D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704DD3E: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DD35; /* 0x1704DD41: jb 0x1704dd35 */
L_1704DD43:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704DD43: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1704DD46:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1704DD5F; /* 0x1704DD46: jne 0x1704dd5f */
L_1704DD48:
    edx = MEM32(esi + 0xC); /* 0x1704DD48: mov edx, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x14); /* 0x1704DD4B: mov ebx, dword ptr [esi + 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x1704DD4E: imul edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1704DD51: add edx, edi */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + edx * 4); /* 0x1704DD53: mov edx, dword ptr [ebx + edx*4] */
    ebx = MEM32(ebp + 0x8); /* 0x1704DD56: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1704DD59: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    MEM32(ebx + eax * 4) = edx; /* 0x1704DD5C: mov dword ptr [ebx + eax*4], edx */
L_1704DD5F:
    eax = MEM32(esi + 0x10); /* 0x1704DD5F: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704DD62: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax + ecx * 4) */ /* 0x1704DD63: cmp edi, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + ecx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DD20; /* 0x1704DD66: jb 0x1704dd20 */
L_1704DD68:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1704DD68: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 2; /* 0x1704DD6B: add dword ptr [ebp - 4], 2 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), 3 */ /* 0x1704DD6F: cmp dword ptr [ebp - 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DD07; /* 0x1704DD73: jb 0x1704dd07 */
L_1704DD75:
    edi = MEM32(ebp + (-0x14)); /* 0x1704DD75: mov edi, dword ptr [ebp - 0x14] */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1704DD78: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DD83; /* 0x1704DD7B: jbe 0x1704dd83 */
L_1704DD7D:
    edi = MEM32(ebp + 0xC); /* 0x1704DD7D: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = edi; /* 0x1704DD80: mov dword ptr [ebp - 0x14], edi */
L_1704DD83:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1704DD83: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1704DD86: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 6; /* 0x1704DD89: add dword ptr [ebp - 0xc], 6 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1704DD8D: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DCDC; /* 0x1704DD90: jb 0x1704dcdc */
L_1704DD96:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704DD96: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1704DD99: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x1704DD9E: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1704DDA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704DDA3: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704DDA8; /* 0x1704DDA4: je 0x1704dda8 */
L_1704DDA6:
    MEM32(eax) = edi; /* 0x1704DDA6: mov dword ptr [eax], edi */
L_1704DDA8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DDA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704DDAA:
    edi = POP32_VAL(esp); /* 0x1704DDAA: pop edi */
L_1704DDAB:
    esi = POP32_VAL(esp); /* 0x1704DDAB: pop esi */
L_1704DDAC:
    ebx = POP32_VAL(esp); /* 0x1704DDAC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704DDAD: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704DDAE: ret 0x10 */
L_1704DDB1:
    eax = 0x8876086Cu; /* 0x1704DDB1: mov eax, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1704DDAA; /* 0x1704DDB6: jmp 0x1704ddaa */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704DDBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704DDBDu);

L_1704DDBD:
    edi = edi; /* 0x1704DDBD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704DDBF: push ebp */
    ebp = esp; /* 0x1704DDC0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1704DDC2: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704DDC5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1704DDC6: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1704DDC9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DDD7; /* 0x1704DDCB: jne 0x1704ddd7 */
L_1704DDCD:
    eax = 0x8876086Cu; /* 0x1704DDCD: mov eax, 0x8876086c */
    goto L_1704DEEF; /* 0x1704DDD2: jmp 0x1704deef */
L_1704DDD7:
    PUSH32(esp, esi); /* 0x1704DDD7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704DDD8: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x1704DDDB: mov ecx, esi */
    RECOMP_CALL(sub_1704D74B); /* 0x1704DDDD: call 0x1704d74b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704DDE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DEEE; /* 0x1704DDE4: jne 0x1704deee */
L_1704DDEA:
    eax = MEM32(esi + 0xC); /* 0x1704DDEA: mov eax, dword ptr [esi + 0xc] */
    eax = eax + eax * 2; /* 0x1704DDED: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704DDF0: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704DDF0: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704DDF3: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704DDF4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704DDF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704DDFB: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1704DDFC: mov dword ptr [ebp + 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704DE0B; /* 0x1704DDFF: jne 0x1704de0b */
L_1704DE01:
    eax = 0x8007000Eu; /* 0x1704DE01: mov eax, 0x8007000e */
    goto L_1704DEEE; /* 0x1704DE06: jmp 0x1704deee */
L_1704DE0B:
    PUSH32(esp, edi); /* 0x1704DE0B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704DE0C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & edi; /* 0x1704DE0E: and dword ptr [ebp - 0x10], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1704DE11: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edi; /* 0x1704DE14: mov dword ptr [ebp - 0x14], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DED9; /* 0x1704DE17: jbe 0x1704ded9 */
L_1704DE1D:
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704DE1D: mov dword ptr [ebp - 0xc], ebx */
L_1704DE20:
    eax = MEM32(esi + 0xC); /* 0x1704DE20: mov eax, dword ptr [esi + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1704DE23: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1704DE26: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + eax * 2; /* 0x1704DE2A: lea ecx, [eax + eax*2] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704DE2D: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704DE2D: shl ecx, 2 */
    edx = ecx; /* 0x1704DE30: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704DE32: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704DE32: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704DE35: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704DE38: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704DE3A: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704DE3C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1704DE3F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704DE43: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0xC)); /* 0x1704DE45: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704DE48: mov dword ptr [ebp - 4], eax */
L_1704DE4B:
    eax = MEM32(ebp + (-0x4)); /* 0x1704DE4B: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1704DE4E: mov ecx, dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x1C) */ /* 0x1704DE50: cmp ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704DEF4; /* 0x1704DE53: jae 0x1704def4 */
L_1704DE59:
    eax = MEM32(esi + 0x10); /* 0x1704DE59: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704DE5C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + ecx * 4), edi */ /* 0x1704DE5E: cmp dword ptr [eax + ecx*4], edi */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DEAB; /* 0x1704DE61: jbe 0x1704deab */
L_1704DE63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DE63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704DE65: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704DE89; /* 0x1704DE68: jae 0x1704de89 */
L_1704DE6A:
    edx = MEM32(esi + 0xC); /* 0x1704DE6A: mov edx, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x14); /* 0x1704DE6D: mov ebx, dword ptr [esi + 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x1704DE70: imul edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1704DE73: add edx, edi */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + edx * 4); /* 0x1704DE75: mov edx, dword ptr [ebx + edx*4] */
L_1704DE78:
    ebx = MEM32(ebp + 0x8); /* 0x1704DE78: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + eax * 4), edx */ /* 0x1704DE7B: cmp dword ptr [ebx + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704DE86; /* 0x1704DE7E: je 0x1704de86 */
L_1704DE80:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704DE80: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704DE81: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DE78; /* 0x1704DE84: jb 0x1704de78 */
L_1704DE86:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704DE86: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1704DE89:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1704DEA2; /* 0x1704DE89: jne 0x1704dea2 */
L_1704DE8B:
    edx = MEM32(esi + 0xC); /* 0x1704DE8B: mov edx, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x14); /* 0x1704DE8E: mov ebx, dword ptr [esi + 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x1704DE91: imul edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1704DE94: add edx, edi */
    _flag_k = FK_ADD;
    edx = MEM32(ebx + edx * 4); /* 0x1704DE96: mov edx, dword ptr [ebx + edx*4] */
    ebx = MEM32(ebp + 0x8); /* 0x1704DE99: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1704DE9C: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    MEM32(ebx + eax * 4) = edx; /* 0x1704DE9F: mov dword ptr [ebx + eax*4], edx */
L_1704DEA2:
    eax = MEM32(esi + 0x10); /* 0x1704DEA2: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704DEA5: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax + ecx * 4) */ /* 0x1704DEA6: cmp edi, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + ecx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DE63; /* 0x1704DEA9: jb 0x1704de63 */
L_1704DEAB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1704DEAB: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x1704DEAE: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), 3 */ /* 0x1704DEB2: cmp dword ptr [ebp - 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DE4B; /* 0x1704DEB6: jb 0x1704de4b */
L_1704DEB8:
    edi = MEM32(ebp + (-0x14)); /* 0x1704DEB8: mov edi, dword ptr [ebp - 0x14] */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1704DEBB: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DEC6; /* 0x1704DEBE: jbe 0x1704dec6 */
L_1704DEC0:
    edi = MEM32(ebp + 0xC); /* 0x1704DEC0: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = edi; /* 0x1704DEC3: mov dword ptr [ebp - 0x14], edi */
L_1704DEC6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1704DEC6: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1704DEC9: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0xCu; /* 0x1704DECC: add dword ptr [ebp - 0xc], 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1704DED0: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704DE20; /* 0x1704DED3: jb 0x1704de20 */
L_1704DED9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704DED9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1704DEDC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x1704DEE1: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1704DEE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704DEE6: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704DEEB; /* 0x1704DEE7: je 0x1704deeb */
L_1704DEE9:
    MEM32(eax) = edi; /* 0x1704DEE9: mov dword ptr [eax], edi */
L_1704DEEB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DEEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704DEED:
    edi = POP32_VAL(esp); /* 0x1704DEED: pop edi */
L_1704DEEE:
    esi = POP32_VAL(esp); /* 0x1704DEEE: pop esi */
L_1704DEEF:
    ebx = POP32_VAL(esp); /* 0x1704DEEF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704DEF0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704DEF1: ret 0x10 */
L_1704DEF4:
    eax = 0x8876086Cu; /* 0x1704DEF4: mov eax, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1704DEED; /* 0x1704DEF9: jmp 0x1704deed */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704DF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704DF00u);

L_1704DF00:
    edi = edi; /* 0x1704DF00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704DF02: push ebp */
    ebp = esp; /* 0x1704DF03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1704DF05: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704DF08: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1704DF09: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1704DF0C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704DF5B; /* 0x1704DF0E: je 0x1704df5b */
L_1704DF10:
    eax = MEM32(esi); /* 0x1704DF10: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x14); /* 0x1704DF12: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1704DF15: push ecx */
    PUSH32(esp, esi); /* 0x1704DF16: push esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1704DF17: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1704DF1A: mov eax, dword ptr [esi] */
    PUSH32(esp, 0x10u); /* 0x1704DF1C: push 0x10 */
    ecx = ebp + 0xC; /* 0x1704DF1E: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1704DF21: push ecx */
    PUSH32(esp, 0); /* 0x1704DF22: push 0 */
    PUSH32(esp, 0); /* 0x1704DF24: push 0 */
    PUSH32(esp, esi); /* 0x1704DF26: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1704DF27: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704DF2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704DF7A; /* 0x1704DF2C: jl 0x1704df7a */
L_1704DF2E:
    /* cmp MEM32(ebp + (-0x14)), 0x65u */ /* 0x1704DF2E: cmp dword ptr [ebp - 0x14], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x1704DF32: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx + ecx * 2; /* 0x1704DF35: lea eax, [ecx + ecx*2] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704DF53; /* 0x1704DF38: jne 0x1704df53 */
L_1704DF3A:
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x1704DF3A: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x1704DF3A: shl eax, 1 */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x1704DF3C: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704DF5B; /* 0x1704DF3F: ja 0x1704df5b */
L_1704DF41:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704DF41: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x1704DF44: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1704DF47: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1704DF49: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704DF4A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1704DF4D: push eax */
    RECOMP_ICALL(MEM32(edx + 0x70)); /* 0x1704DF4E: call dword ptr [edx + 0x70] */
    RECOMP_FLAGS_IN();
    goto L_1704DF72; /* 0x1704DF51: jmp 0x1704df72 */
L_1704DF53:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704DF53: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704DF53: shl eax, 2 */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x1704DF56: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704DF62; /* 0x1704DF59: jbe 0x1704df62 */
L_1704DF5B:
    eax = 0x8876086Cu; /* 0x1704DF5B: mov eax, 0x8876086c */
    goto L_1704DF7A; /* 0x1704DF60: jmp 0x1704df7a */
L_1704DF62:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704DF62: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x1704DF65: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1704DF68: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1704DF6A: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704DF6B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1704DF6E: push eax */
    RECOMP_ICALL(MEM32(edx + 0x74)); /* 0x1704DF6F: call dword ptr [edx + 0x74] */
    RECOMP_FLAGS_IN();
L_1704DF72:
    eax = MEM32(esi); /* 0x1704DF72: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704DF74: push esi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1704DF75: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704DF78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704DF7A:
    esi = POP32_VAL(esp); /* 0x1704DF7A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704DF7B: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704DF7C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704DF84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704DF84u);

L_1704DF84:
    edi = edi; /* 0x1704DF84: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704DF86: push ebp */
    ebp = esp; /* 0x1704DF87: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1704DF89: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1704DF8C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704DF8F: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704DF92: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1704DF94: fsub dword ptr [ecx] */
    edx = MEM32(ebp + 0x18); /* 0x1704DF96: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1704DF99: push esi */
    PUSH32(esp, edi); /* 0x1704DF9A: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704DF9B: fstp dword ptr [ebp - 0xc] */
    esi = ebp + (-0x18); /* 0x1704DF9E: lea esi, [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704DFA1: fld dword ptr [eax + 4] */
    edi = ebp + (-0x24); /* 0x1704DFA4: lea edi, [ebp - 0x24] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704DFA7: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704DFAA: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704DFAD: fld dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x10); /* 0x1704DFB0: mov eax, dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1704DFB3: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704DFB6: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704DFB9: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1704DFBB: fsub dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704DFBD: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704DFC0: fsub dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704DFC3: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1704DFC6: fsub dword ptr [ecx + 8] */
    fp_push(_st[0]); /* 0x1704DFC9: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704DFCB: fmul dword ptr [edx + 4] */
    fp_push(_st[2]); /* 0x1704DFCE: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704DFD0: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704DFD3: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1704DFD5: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[2]); /* 0x1704DFD8: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704DFDA: fmul dword ptr [edx + 8] */
    fp_push(_st[1]); /* 0x1704DFDD: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704DFDF: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704DFE1: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704DFE3: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[1]); /* 0x1704DFE6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704DFE8: fmul dword ptr [edx] */
    fp_push(_st[3]); /* 0x1704DFEA: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704DFEC: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704DFEF: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704DFF1: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704DFF4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704DFF5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704DFF6: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1704DFF7: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704DFFA: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1704DFFD: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704E000: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E003: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1704E005: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1704E008: fmul dword ptr [ebp - 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E00B: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x1704E00D: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E013: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704E015: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E038; /* 0x1704E018: jne 0x1704e038 */
L_1704E01A:
    eax = MEM32(ebp + 0x14); /* 0x1704E01A: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704E01D: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1704E01F: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1704E021: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704E024: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704E027: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1704E02A: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704E02D: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1704E030: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1704E033: fstp dword ptr [ebp - 0x28] */
    goto L_1704E06B; /* 0x1704E036: jmp 0x1704e06b */
L_1704E038:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x1704E038: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E03E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704E040: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704E115; /* 0x1704E043: jp 0x1704e115 */
L_1704E049:
    eax = MEM32(ebp + 0x14); /* 0x1704E049: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704E04C: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1704E04E: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1704E050: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704E053: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1704E056: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1704E059: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704E05C: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1704E05F: fsub dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1704E062: fstp dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x1704E065: fld st(0) */
    _st[0] = -_st[0]; /* 0x1704E067: fchs  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1704E069: fstp st(1) */
L_1704E06B:
    esi = ebp + (-0x30); /* 0x1704E06B: lea esi, [ebp - 0x30] */
    fp_push(1.0); /* 0x1704E06E: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1704E070: fdivrp st(1) */
    edi = ebp + (-0x18); /* 0x1704E072: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E075: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E076: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E077: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x30); /* 0x1704E078: lea esi, [ebp - 0x30] */
    edi = ebp + (-0xC); /* 0x1704E07B: lea edi, [ebp - 0xc] */
    eax = MEM32(ebp + 0x1C); /* 0x1704E07E: mov eax, dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1704E081: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704E084: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1704E087: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704E08A: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704E08D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1704E08F: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1704E092: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704E095: fmul dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704E098: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1704E09B: fmul dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704E09E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1704E0A0: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704E0A3: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704E0A6: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1704E0A9: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704E0AC: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704E0AF: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1704E0B1: fstp dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E0B4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E0B5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E0B6: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1704E0B7: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704E0BA: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704E0BD: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704E0C0: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E0C3: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1704E0C5: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704E0C8: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E0CA: faddp st(1) */
    _st[0] *= _st[1]; /* 0x1704E0CC: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1704E0CE: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1704E0D1: fmul dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1704E0D4: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1704E0D7: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E0DA: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704E0DC: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1704E0DF: fmul dword ptr [ebp - 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E0E2: faddp st(1) */
    _st[0] *= _st[2]; /* 0x1704E0E4: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704E0E6: fstp dword ptr [eax] */
    eax = MEM32(ebp + 0x20); /* 0x1704E0E8: mov eax, dword ptr [ebp + 0x20] */
    fp_push(_st[0]); /* 0x1704E0EB: fld st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704E0ED: fstp dword ptr [eax] */
    eax = MEM32(ebp + 0x24); /* 0x1704E0EF: mov eax, dword ptr [ebp + 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E0F2: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704E0F4: fld dword ptr [ebp - 4] */
    _st[0] *= _st[2]; /* 0x1704E0F7: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1704E0F9: fld dword ptr [ebp - 8] */
    _st[0] *= _st[4]; /* 0x1704E0FC: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E0FE: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1704E100: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[5]; /* 0x1704E103: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E105: faddp st(1) */
    _st[0] *= _st[1]; /* 0x1704E107: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704E109: fstp dword ptr [eax] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E10B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E10D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E10F: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E111: fstp st(0) */
    goto L_1704E124; /* 0x1704E113: jmp 0x1704e124 */
L_1704E115:
    eax = MEM32(ebp + 0x24); /* 0x1704E115: mov eax, dword ptr [ebp + 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E118: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E11A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E11C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E11E: fstp st(0) */
    fp_push(0.0); /* 0x1704E120: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704E122: fstp dword ptr [eax] */
L_1704E124:
    edi = POP32_VAL(esp); /* 0x1704E124: pop edi */
    esi = POP32_VAL(esp); /* 0x1704E125: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704E126: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1704E127: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1704E12F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E12Fu);

L_1704E12F:
    edi = edi; /* 0x1704E12F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E131: push ebp */
    ebp = esp; /* 0x1704E132: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1704E134: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704E135: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1704E138: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704E13A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704E13B: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704E13E: push dword ptr [ebp + 0x18] */
    /* test LO8(eax), 1 */ /* 0x1704E141: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704E143: push dword ptr [ebp + 0x14] */
    eax = MEM32(esi); /* 0x1704E146: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704E148: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704E14B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1704E14E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x9C)); /* 0x1704E14F: call dword ptr [eax + 0x9c] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1704E155: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704E156: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704E157: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704E15F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E15Fu);

L_1704E15F:
    edi = edi; /* 0x1704E15F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E161: push ebp */
    ebp = esp; /* 0x1704E162: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1704E164: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704E167: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704E16B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1704E16C: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1704E16F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1704E171: push esi */
    PUSH32(esp, edi); /* 0x1704E172: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E273; /* 0x1704E173: je 0x1704e273 */
L_1704E179:
    eax = MEM32(ebp + 0x14); /* 0x1704E179: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1704E17C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E273; /* 0x1704E17E: je 0x1704e273 */
L_1704E184:
    ecx = MEM32(ebp + 0x18); /* 0x1704E184: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x1704E187: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E273; /* 0x1704E189: je 0x1704e273 */
L_1704E18F:
    edx = MEM32(ebp + 0xC); /* 0x1704E18F: mov edx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x1704E192: fldz  */
    /* test edx, edx */ /* 0x1704E194: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704E196: fstp dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x1704E199: fldz  */
    esi = ebp + (-0x14); /* 0x1704E19B: lea esi, [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704E19E: fstp dword ptr [ebp - 0x10] */
    edi = eax; /* 0x1704E1A1: mov edi, eax */
    fp_push(0.0); /* 0x1704E1A3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704E1A5: fstp dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E1A8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E1A9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E1AA: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E1B9; /* 0x1704E1AB: jne 0x1704e1b9 */
L_1704E1AD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edx; /* 0x1704E1AD: and dword ptr [ebp - 4], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(1.0); /* 0x1704E1B0: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704E1B2: fstp dword ptr [ecx] */
    goto L_1704E27A; /* 0x1704E1B4: jmp 0x1704e27a */
L_1704E1B9:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_BE, _cf)) goto L_1704E1DE; /* 0x1704E1B9: jbe 0x1704e1de */
L_1704E1BB:
    ecx = ebx + 0x8; /* 0x1704E1BB: lea ecx, [ebx + 8] */
    esi = edx; /* 0x1704E1BE: mov esi, edx */
L_1704E1C0:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x1704E1C0: fld dword ptr [ecx - 8] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1704E1C3: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704E1C5: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x1704E1C7: fld dword ptr [ecx - 4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x1704E1CA: fadd dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1704E1CD: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704E1D0: fld dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x1704E1D2: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1704E1D5: dec esi */
    _flag_k = FK_DEC;
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x1704E1D6: fadd dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1704E1D9: fstp dword ptr [eax + 8] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704E1C0; /* 0x1704E1DC: jne 0x1704e1c0 */
L_1704E1DE:
    /* test edx, edx */ /* 0x1704E1DE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x1704E1E0: mov dword ptr [ebp + 8], edx */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1704E1E3: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1704E1EE; /* 0x1704E1E6: jge 0x1704e1ee */
L_1704E1E8:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1704E1E8: fadd dword ptr [0x1700142c] */
L_1704E1EE:
    /* test edx, edx */ /* 0x1704E1EE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1704E1F0: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x1704E1F6: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704E1F8: fmul dword ptr [eax] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1704E1FA: fst dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704E1FD: fstp dword ptr [eax] */
    fp_push(_st[0]); /* 0x1704E1FF: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704E201: fmul dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x14) = _v; } /* 0x1704E204: fst dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1704E207: fstp dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1704E20A: fmul dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1704E20D: fst dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1704E210: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x1704E213: fldz  */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E26A; /* 0x1704E215: jbe 0x1704e26a */
L_1704E217:
    ecx = ebx + 0x8; /* 0x1704E217: lea ecx, [ebx + 8] */
L_1704E21A:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x1704E21A: fld dword ptr [ecx - 8] */
    esi = ebp + (-0x20); /* 0x1704E21D: lea esi, [ebp - 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x1704E220: fsub dword ptr [ebp + 8] */
    edi = ebp + (-0x14); /* 0x1704E223: lea edi, [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1704E226: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x1704E229: fld dword ptr [ecx - 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x1704E22C: fsub dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1704E22F: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704E232: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x1704E234: fsub dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1704E237: fstp dword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E23A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E23B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E23C: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1704E23D: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704E240: fmul dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1704E243: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1704E246: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E249: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1704E24B: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1704E24E: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704E251: faddp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704E253: fst dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704E256: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E258: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704E25A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E264; /* 0x1704E25D: jne 0x1704e264 */
L_1704E25F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E25F: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1704E261: fld dword ptr [ebp - 8] */
L_1704E264:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x10); /* 0x1704E264: add ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1704E267: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704E21A; /* 0x1704E268: jne 0x1704e21a */
L_1704E26A:
    _st[0] = sqrt(_st[0]); /* 0x1704E26A: fsqrt  */
    eax = MEM32(ebp + 0x18); /* 0x1704E26C: mov eax, dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704E26F: fstp dword ptr [eax] */
    goto L_1704E27A; /* 0x1704E271: jmp 0x1704e27a */
L_1704E273:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1704E273: mov dword ptr [ebp - 4], 0x8876086c */
L_1704E27A:
    eax = MEM32(ebp + (-0x4)); /* 0x1704E27A: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704E27D: pop edi */
    esi = POP32_VAL(esp); /* 0x1704E27E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704E27F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704E280: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704E281: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704E289(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E289u);

L_1704E289:
    edi = edi; /* 0x1704E289: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E28B: push ebp */
    ebp = esp; /* 0x1704E28C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1704E28E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1704E291: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704E294: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1704E298: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704E29A: push ebx */
    PUSH32(esp, esi); /* 0x1704E29B: push esi */
    PUSH32(esp, edi); /* 0x1704E29C: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E38A; /* 0x1704E29D: je 0x1704e38a */
L_1704E2A3:
    ebx = MEM32(ebp + 0x14); /* 0x1704E2A3: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x1704E2A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E38A; /* 0x1704E2A8: je 0x1704e38a */
L_1704E2AE:
    edx = MEM32(ebp + 0x18); /* 0x1704E2AE: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x1704E2B1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E38A; /* 0x1704E2B3: je 0x1704e38a */
L_1704E2B9:
    eax = MEM32(ebp + 0xC); /* 0x1704E2B9: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1704E2BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1704E2BE: mov edi, ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E2F6; /* 0x1704E2C0: jne 0x1704e2f6 */
L_1704E2C2:
    fp_push(0.0); /* 0x1704E2C2: fldz  */
    esi = ebp + (-0x10); /* 0x1704E2C4: lea esi, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704E2C7: fstp dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x1704E2CA: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x1704E2CD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704E2CF: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x1704E2D2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704E2D4: fstp dword ptr [ebp - 8] */
    fp_push(0.0); /* 0x1704E2D7: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2D9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2DA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2DB: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704E2DC: fstp dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x1704E2DF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704E2E1: fstp dword ptr [ebp - 0xc] */
    esi = ebp + (-0x10); /* 0x1704E2E4: lea esi, [ebp - 0x10] */
    fp_push(0.0); /* 0x1704E2E7: fldz  */
    edi = edx; /* 0x1704E2E9: mov edi, edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704E2EB: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2EE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2EF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2F0: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1704E391; /* 0x1704E2F1: jmp 0x1704e391 */
L_1704E2F6:
    esi = ecx; /* 0x1704E2F6: mov esi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2F8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2F9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2FA: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ecx; /* 0x1704E2FB: mov esi, ecx */
    edi = edx; /* 0x1704E2FD: mov edi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E2FF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E300: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704E301: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x1704E302: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1704E305: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1704E307: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704E391; /* 0x1704E30A: jbe 0x1704e391 */
L_1704E310:
    edi = eax + (-0x1); /* 0x1704E310: lea edi, [eax - 1] */
L_1704E313:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704E313: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx)); /* 0x1704E315: fcomp dword ptr [ebx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E317: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704E319: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704E324; /* 0x1704E31C: jp 0x1704e324 */
L_1704E31E:
    eax = MEM32(ecx); /* 0x1704E31E: mov eax, dword ptr [ecx] */
    MEM32(ebx) = eax; /* 0x1704E320: mov dword ptr [ebx], eax */
    goto L_1704E333; /* 0x1704E322: jmp 0x1704e333 */
L_1704E324:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704E324: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx)); /* 0x1704E326: fcomp dword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E328: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704E32A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E333; /* 0x1704E32D: jne 0x1704e333 */
L_1704E32F:
    eax = MEM32(ecx); /* 0x1704E32F: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x1704E331: mov dword ptr [edx], eax */
L_1704E333:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704E333: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x4)); /* 0x1704E336: fcomp dword ptr [ebx + 4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E339: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704E33B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704E348; /* 0x1704E33E: jp 0x1704e348 */
L_1704E340:
    eax = MEM32(ecx + 0x4); /* 0x1704E340: mov eax, dword ptr [ecx + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x1704E343: mov dword ptr [ebx + 4], eax */
    goto L_1704E35B; /* 0x1704E346: jmp 0x1704e35b */
L_1704E348:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704E348: fld dword ptr [ecx + 4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx + 0x4)); /* 0x1704E34B: fcomp dword ptr [edx + 4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E34E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704E350: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E35B; /* 0x1704E353: jne 0x1704e35b */
L_1704E355:
    eax = MEM32(ecx + 0x4); /* 0x1704E355: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1704E358: mov dword ptr [edx + 4], eax */
L_1704E35B:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704E35B: fld dword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x8)); /* 0x1704E35E: fcomp dword ptr [ebx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E361: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704E363: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704E370; /* 0x1704E366: jp 0x1704e370 */
L_1704E368:
    eax = MEM32(ecx + 0x8); /* 0x1704E368: mov eax, dword ptr [ecx + 8] */
    MEM32(ebx + 0x8) = eax; /* 0x1704E36B: mov dword ptr [ebx + 8], eax */
    goto L_1704E383; /* 0x1704E36E: jmp 0x1704e383 */
L_1704E370:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704E370: fld dword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx + 0x8)); /* 0x1704E373: fcomp dword ptr [edx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E376: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704E378: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E383; /* 0x1704E37B: jne 0x1704e383 */
L_1704E37D:
    eax = MEM32(ecx + 0x8); /* 0x1704E37D: mov eax, dword ptr [ecx + 8] */
    MEM32(edx + 0x8) = eax; /* 0x1704E380: mov dword ptr [edx + 8], eax */
L_1704E383:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1704E383: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1704E385: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704E313; /* 0x1704E386: jne 0x1704e313 */
L_1704E388:
    goto L_1704E391; /* 0x1704E388: jmp 0x1704e391 */
L_1704E38A:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1704E38A: mov dword ptr [ebp - 4], 0x8876086c */
L_1704E391:
    eax = MEM32(ebp + (-0x4)); /* 0x1704E391: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704E394: pop edi */
    esi = POP32_VAL(esp); /* 0x1704E395: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704E396: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704E397: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704E398: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704E3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E3A0u);

L_1704E3A0:
    edi = edi; /* 0x1704E3A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E3A2: push ebp */
    ebp = esp; /* 0x1704E3A3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1704E3A5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1704E3A6: mov ebx, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x1704E3A9: mov ecx, ebx */
    PUSH32(esp, 2); /* 0x1704E3AB: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400Eu);
    ecx = ecx & 0x400Eu; /* 0x1704E3AD: and ecx, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = POP32_VAL(esp); /* 0x1704E3B3: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E3B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1704E3B6: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E3E6; /* 0x1704E3B8: je 0x1704e3e6 */
L_1704E3BA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1704E3BA: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E3E2; /* 0x1704E3BC: je 0x1704e3e2 */
L_1704E3BE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1704E3BE: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E3E2; /* 0x1704E3C0: je 0x1704e3e2 */
L_1704E3C2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1704E3C2: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E3DE; /* 0x1704E3C4: je 0x1704e3de */
L_1704E3C6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1704E3C6: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E3DA; /* 0x1704E3C8: je 0x1704e3da */
L_1704E3CA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1704E3CA: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E3D6; /* 0x1704E3CC: je 0x1704e3d6 */
L_1704E3CE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1704E3CE: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1704E3E9; /* 0x1704E3D0: jne 0x1704e3e9 */
L_1704E3D2:
    PUSH32(esp, 0x20u); /* 0x1704E3D2: push 0x20 */
    goto L_1704E3E8; /* 0x1704E3D4: jmp 0x1704e3e8 */
L_1704E3D6:
    PUSH32(esp, 0x1Cu); /* 0x1704E3D6: push 0x1c */
    goto L_1704E3E8; /* 0x1704E3D8: jmp 0x1704e3e8 */
L_1704E3DA:
    PUSH32(esp, 0x18u); /* 0x1704E3DA: push 0x18 */
    goto L_1704E3E8; /* 0x1704E3DC: jmp 0x1704e3e8 */
L_1704E3DE:
    PUSH32(esp, 0x14u); /* 0x1704E3DE: push 0x14 */
    goto L_1704E3E8; /* 0x1704E3E0: jmp 0x1704e3e8 */
L_1704E3E2:
    PUSH32(esp, 0x10u); /* 0x1704E3E2: push 0x10 */
    goto L_1704E3E8; /* 0x1704E3E4: jmp 0x1704e3e8 */
L_1704E3E6:
    PUSH32(esp, 0xCu); /* 0x1704E3E6: push 0xc */
L_1704E3E8:
    eax = POP32_VAL(esp); /* 0x1704E3E8: pop eax */
L_1704E3E9:
    /* test LO8(ebx), 0x10u */ /* 0x1704E3E9: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E3F1; /* 0x1704E3EC: je 0x1704e3f1 */
L_1704E3EE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1704E3EE: add eax, 0xc */
    _flag_k = FK_ADD;
L_1704E3F1:
    /* test LO8(ebx), 0x20u */ /* 0x1704E3F1: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E3F9; /* 0x1704E3F4: je 0x1704e3f9 */
L_1704E3F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704E3F6: add eax, 4 */
    _flag_k = FK_ADD;
L_1704E3F9:
    /* test LO8(ebx), 0x40u */ /* 0x1704E3F9: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E401; /* 0x1704E3FC: je 0x1704e401 */
L_1704E3FE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704E3FE: add eax, 4 */
    _flag_k = FK_ADD;
L_1704E401:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1704E401: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1704E408; /* 0x1704E403: jns 0x1704e408 */
L_1704E405:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704E405: add eax, 4 */
    _flag_k = FK_ADD;
L_1704E408:
    ecx = ebx; /* 0x1704E408: mov ecx, ebx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x1704E40A: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x1704E40A: shr ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x1704E40D: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x1704E410: shr ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 16u; /* 0x1704E410: shr ebx, 0x10 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1704E446; /* 0x1704E413: je 0x1704e446 */
L_1704E415:
    /* test ecx, ecx */ /* 0x1704E415: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E449; /* 0x1704E417: jbe 0x1704e449 */
L_1704E419:
    edx = ebx; /* 0x1704E419: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1704E41B: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0; /* 0x1704E41E: sub edx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E43B; /* 0x1704E421: je 0x1704e43b */
L_1704E423:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1704E423: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E436; /* 0x1704E424: je 0x1704e436 */
L_1704E426:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1704E426: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E431; /* 0x1704E427: je 0x1704e431 */
L_1704E429:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1704E429: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704E43E; /* 0x1704E42A: jne 0x1704e43e */
L_1704E42C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704E42C: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_1704E43E; /* 0x1704E42F: jmp 0x1704e43e */
L_1704E431:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1704E431: add eax, 0x10 */
    _flag_k = FK_ADD;
    goto L_1704E43E; /* 0x1704E434: jmp 0x1704e43e */
L_1704E436:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1704E436: add eax, 0xc */
    _flag_k = FK_ADD;
    goto L_1704E43E; /* 0x1704E439: jmp 0x1704e43e */
L_1704E43B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E43B: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E43E:
    if (2u) _cf = (((ebx) >> 1) & 1u); /* 0x1704E43E: shr ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 2u; /* 0x1704E43E: shr ebx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1704E441: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704E419; /* 0x1704E442: jne 0x1704e419 */
L_1704E444:
    goto L_1704E449; /* 0x1704E444: jmp 0x1704e449 */
L_1704E446:
    eax = eax + ecx * 8; /* 0x1704E446: lea eax, [eax + ecx*8] */
L_1704E449:
    ebx = POP32_VAL(esp); /* 0x1704E449: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704E44A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704E44B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704E453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E453u);

L_1704E453:
    edi = edi; /* 0x1704E453: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E455: push ebp */
    ebp = esp; /* 0x1704E456: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704E458: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) & 0); /* 0x1704E45B: and word ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(ebp + 0x14); /* 0x1704E45F: mov ecx, dword ptr [ebp + 0x14] */
    SET_LO16(edx, (uint32_t)MEM8(ecx)); /* 0x1704E462: movzx dx, byte ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1704E466: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0xC)); /* 0x1704E467: mov bl, byte ptr [ebp + 0xc] */
    MEM8(eax + 0x6) = (uint8_t)(LO8(ebx)); /* 0x1704E46A: mov byte ptr [eax + 6], bl */
    SET_LO8(ebx, MEM8(ebp + 0x18)); /* 0x1704E46D: mov bl, byte ptr [ebp + 0x18] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(edx)); /* 0x1704E470: mov word ptr [eax + 2], dx */
    edx = MEM32(ebp + 0x10); /* 0x1704E474: mov edx, dword ptr [ebp + 0x10] */
    MEM8(eax + 0x7) = (uint8_t)(LO8(ebx)); /* 0x1704E477: mov byte ptr [eax + 7], bl */
    MEM8(eax + 0x4) = (uint8_t)(LO8(edx)); /* 0x1704E47A: mov byte ptr [eax + 4], dl */
    MEM8(eax + 0x5) = (uint8_t)(0); /* 0x1704E47D: mov byte ptr [eax + 5], 0 */
    eax = (uint32_t)MEM8(edx + 0x17005980); /* 0x1704E481: movzx eax, byte ptr [edx + 0x17005980] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x1704E488: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1704E48A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704E48B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704E48C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1704E494(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E494u);

L_1704E494:
    edi = edi; /* 0x1704E494: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E496: push ebp */
    ebp = esp; /* 0x1704E497: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1704E499: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E49C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1704E49E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E4E0; /* 0x1704E4A0: je 0x1704e4e0 */
L_1704E4A2:
    SET_LO16(edx, MEM16(ecx)); /* 0x1704E4A2: mov dx, word ptr [ecx] */
    /* cmp LO16(edx), 0xFFu */ /* 0x1704E4A5: cmp dx, 0xff */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E4E0; /* 0x1704E4AA: je 0x1704e4e0 */
L_1704E4AC:
    PUSH32(esp, esi); /* 0x1704E4AC: push esi */
L_1704E4AD:
    edx = (uint32_t)LO16(edx); /* 0x1704E4AD: movzx edx, dx */
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x1704E4B0: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E4D2; /* 0x1704E4B3: jne 0x1704e4d2 */
L_1704E4B5:
    /* cmp MEM8(ecx + 0x5), 4 */ /* 0x1704E4B5: cmp byte ptr [ecx + 5], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x5)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E4D2; /* 0x1704E4B9: je 0x1704e4d2 */
L_1704E4BB:
    edx = (uint32_t)MEM8(ecx + 0x4); /* 0x1704E4BB: movzx edx, byte ptr [ecx + 4] */
    edx = (uint32_t)MEM8(edx + 0x17005980); /* 0x1704E4BF: movzx edx, byte ptr [edx + 0x17005980] */
    esi = (uint32_t)MEM16(ecx + 0x2); /* 0x1704E4C6: movzx esi, word ptr [ecx + 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1704E4CA: add edx, esi */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x1704E4CC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704E4D2; /* 0x1704E4CE: jae 0x1704e4d2 */
L_1704E4D0:
    eax = edx; /* 0x1704E4D0: mov eax, edx */
L_1704E4D2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1704E4D2: add ecx, 8 */
    _flag_k = FK_ADD;
    SET_LO16(edx, MEM16(ecx)); /* 0x1704E4D5: mov dx, word ptr [ecx] */
    /* cmp LO16(edx), 0xFFu */ /* 0x1704E4D8: cmp dx, 0xff */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E4AD; /* 0x1704E4DD: jne 0x1704e4ad */
L_1704E4DF:
    esi = POP32_VAL(esp); /* 0x1704E4DF: pop esi */
L_1704E4E0:
    ebp = POP32_VAL(esp); /* 0x1704E4E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704E4E1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704E4E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E4E9u);

L_1704E4E9:
    edi = edi; /* 0x1704E4E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E4EB: push ebp */
    ebp = esp; /* 0x1704E4EC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704E4EE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1704E4F1: push ebx */
    PUSH32(esp, esi); /* 0x1704E4F2: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704E4F3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax)); /* 0x1704E4F5: mov cx, word ptr [eax] */
    PUSH32(esp, edi); /* 0x1704E4F8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704E4F9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704E4FB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), 0xFFu */ /* 0x1704E4FD: cmp cx, 0xff */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E572; /* 0x1704E502: je 0x1704e572 */
L_1704E504:
    edx = ecx; /* 0x1704E504: mov edx, ecx */
    ecx = eax + 0x6; /* 0x1704E506: lea ecx, [eax + 6] */
L_1704E509:
    /* test LO16(edx), LO16(edx) */ /* 0x1704E509: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E6DB; /* 0x1704E50C: jne 0x1704e6db */
L_1704E512:
    SET_LO8(ebx, MEM8(ecx + (-0x2))); /* 0x1704E512: mov bl, byte ptr [ecx - 2] */
    /* cmp LO8(ebx), 7 */ /* 0x1704E515: cmp bl, 7 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1704E6DB; /* 0x1704E518: ja 0x1704e6db */
L_1704E51E:
    edx = (uint32_t)MEM16(ecx + (-0x4)); /* 0x1704E51E: movzx edx, word ptr [ecx - 4] */
    /* cmp esi, edx */ /* 0x1704E522: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6DB; /* 0x1704E524: jne 0x1704e6db */
L_1704E52A:
    /* cmp MEM8(ecx + (-0x1)), 5 */ /* 0x1704E52A: cmp byte ptr [ecx - 1], 5 */
    _flag_a = (uint32_t)(MEM8(ecx + (-0x1))) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1704E6DB; /* 0x1704E52E: ja 0x1704e6db */
L_1704E534:
    SET_LO8(edx, MEM8(ecx)); /* 0x1704E534: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), 5 */ /* 0x1704E536: cmp dl, 5 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704E549; /* 0x1704E539: jbe 0x1704e549 */
L_1704E53B:
    /* cmp LO8(edx), 9 */ /* 0x1704E53B: cmp dl, 9 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E549; /* 0x1704E53E: je 0x1704e549 */
L_1704E540:
    /* cmp LO8(edx), 0xAu */ /* 0x1704E540: cmp dl, 0xa */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6DB; /* 0x1704E543: jne 0x1704e6db */
L_1704E549:
    /* cmp LO8(edx), 0xAu */ /* 0x1704E549: cmp dl, 0xa */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E558; /* 0x1704E54C: jne 0x1704e558 */
L_1704E54E:
    /* cmp MEM8(ecx + 0x1), 1 */ /* 0x1704E54E: cmp byte ptr [ecx + 1], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1704E6DB; /* 0x1704E552: ja 0x1704e6db */
L_1704E558:
    edx = (uint32_t)LO8(ebx); /* 0x1704E558: movzx edx, bl */
    edx = (uint32_t)MEM8(edx + 0x17005980); /* 0x1704E55B: movzx edx, byte ptr [edx + 0x17005980] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1704E562: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1704E565: add esi, edx */
    _flag_k = FK_ADD;
    SET_LO16(edx, MEM16(ecx + (-0x6))); /* 0x1704E567: mov dx, word ptr [ecx - 6] */
    /* cmp LO16(edx), 0xFFu */ /* 0x1704E56B: cmp dx, 0xff */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E509; /* 0x1704E570: jne 0x1704e509 */
L_1704E572:
    SET_LO8(ecx, MEM8(eax + 0x6)); /* 0x1704E572: mov cl, byte ptr [eax + 6] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1704E575: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 4); /* 0x1704E577: push 4 */
    ebx = POP32_VAL(esp); /* 0x1704E579: pop ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E600; /* 0x1704E57A: jne 0x1704e600 */
L_1704E580:
    /* cmp MEM8(eax + 0x4), 2 */ /* 0x1704E580: cmp byte ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E610; /* 0x1704E584: jne 0x1704e610 */
L_1704E58A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E58A: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704E58D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(eax + 0x6), 1 */ /* 0x1704E58F: cmp byte ptr [eax + 6], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E5A4; /* 0x1704E593: jne 0x1704e5a4 */
L_1704E595:
    SET_LO8(edx, MEM8(eax + 0x4)); /* 0x1704E595: mov dl, byte ptr [eax + 4] */
    /* cmp LO8(edx), 3 */ /* 0x1704E598: cmp dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1704E5A4; /* 0x1704E59B: ja 0x1704e5a4 */
L_1704E59D:
    ecx = (uint32_t)LO8(edx); /* 0x1704E59D: movzx ecx, dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704E5A0: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E5A1: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E5A4:
    /* cmp MEM8(eax + 0x6), 2 */ /* 0x1704E5A4: cmp byte ptr [eax + 6], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E5CE; /* 0x1704E5A8: jne 0x1704e5ce */
L_1704E5AA:
    /* cmp MEM8(eax + 0x4), 5 */ /* 0x1704E5AA: cmp byte ptr [eax + 4], 5 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E5B9; /* 0x1704E5AE: jne 0x1704e5b9 */
L_1704E5B0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704E5B0: inc ecx */
    _flag_k = FK_INC;
    edi = 0x1000u; /* 0x1704E5B1: mov edi, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E5B6: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E5B9:
    /* cmp MEM8(eax + 0x6), 2 */ /* 0x1704E5B9: cmp byte ptr [eax + 6], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E5CE; /* 0x1704E5BD: jne 0x1704e5ce */
L_1704E5BF:
    /* cmp MEM8(eax + 0x4), LO8(ebx) */ /* 0x1704E5BF: cmp byte ptr [eax + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E5CE; /* 0x1704E5C2: jne 0x1704e5ce */
L_1704E5C4:
    _flag_a = (uint32_t)((edi | 0x8000u)); _flag_b = (uint32_t)((edi | 0x8000u));
    edi = edi | 0x8000u; /* 0x1704E5C4: or edi, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704E5CA: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E5CB: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E5CE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x1704E5CE: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E5FB; /* 0x1704E5D1: je 0x1704e5fb */
L_1704E5D3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1704E5D3: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E5F6; /* 0x1704E5D4: je 0x1704e5f6 */
L_1704E5D6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1704E5D6: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E5F1; /* 0x1704E5D7: je 0x1704e5f1 */
L_1704E5D9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1704E5D9: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E5EC; /* 0x1704E5DA: je 0x1704e5ec */
L_1704E5DC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1704E5DC: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1704E5E7; /* 0x1704E5DD: je 0x1704e5e7 */
L_1704E5DF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1704E5DF: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704E610; /* 0x1704E5E0: jne 0x1704e610 */
L_1704E5E2:
    _flag_a = (uint32_t)((edi | 0xEu)); _flag_b = (uint32_t)((edi | 0xEu));
    edi = edi | 0xEu; /* 0x1704E5E2: or edi, 0xe */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704E610; /* 0x1704E5E5: jmp 0x1704e610 */
L_1704E5E7:
    _flag_a = (uint32_t)((edi | 0xCu)); _flag_b = (uint32_t)((edi | 0xCu));
    edi = edi | 0xCu; /* 0x1704E5E7: or edi, 0xc */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704E610; /* 0x1704E5EA: jmp 0x1704e610 */
L_1704E5EC:
    _flag_a = (uint32_t)((edi | 0xAu)); _flag_b = (uint32_t)((edi | 0xAu));
    edi = edi | 0xAu; /* 0x1704E5EC: or edi, 0xa */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704E610; /* 0x1704E5EF: jmp 0x1704e610 */
L_1704E5F1:
    _flag_a = (uint32_t)((edi | 8)); _flag_b = (uint32_t)((edi | 8));
    edi = edi | 8; /* 0x1704E5F1: or edi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704E610; /* 0x1704E5F4: jmp 0x1704e610 */
L_1704E5F6:
    _flag_a = (uint32_t)((edi | 6)); _flag_b = (uint32_t)((edi | 6));
    edi = edi | 6; /* 0x1704E5F6: or edi, 6 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704E610; /* 0x1704E5F9: jmp 0x1704e610 */
L_1704E5FB:
    _flag_a = (uint32_t)((edi | 2)); _flag_b = (uint32_t)((edi | 2));
    edi = edi | 2; /* 0x1704E5FB: or edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704E610; /* 0x1704E5FE: jmp 0x1704e610 */
L_1704E600:
    /* cmp LO8(ecx), 9 */ /* 0x1704E600: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E610; /* 0x1704E603: jne 0x1704e610 */
L_1704E605:
    /* cmp MEM8(eax + 0x4), 3 */ /* 0x1704E605: cmp byte ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E610; /* 0x1704E609: jne 0x1704e610 */
L_1704E60B:
    edi = ebx; /* 0x1704E60B: mov edi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E60D: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E610:
    /* cmp MEM8(eax + 0x6), 3 */ /* 0x1704E610: cmp byte ptr [eax + 6], 3 */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, 0x10u); /* 0x1704E614: push 0x10 */
    esi = POP32_VAL(esp); /* 0x1704E616: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E624; /* 0x1704E617: jne 0x1704e624 */
L_1704E619:
    /* cmp MEM8(eax + 0x4), 2 */ /* 0x1704E619: cmp byte ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E624; /* 0x1704E61D: jne 0x1704e624 */
L_1704E61F:
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x1704E61F: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E621: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E624:
    /* cmp MEM8(eax + 0x6), LO8(ebx) */ /* 0x1704E624: cmp byte ptr [eax + 6], bl */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E635; /* 0x1704E627: jne 0x1704e635 */
L_1704E629:
    /* cmp MEM8(eax + 0x4), 0 */ /* 0x1704E629: cmp byte ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E635; /* 0x1704E62D: jne 0x1704e635 */
L_1704E62F:
    _flag_a = (uint32_t)((edi | 0x20u)); _flag_b = (uint32_t)((edi | 0x20u));
    edi = edi | 0x20u; /* 0x1704E62F: or edi, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E632: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E635:
    /* cmp MEM8(eax + 0x6), 0xAu */ /* 0x1704E635: cmp byte ptr [eax + 6], 0xa */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E666; /* 0x1704E639: jne 0x1704e666 */
L_1704E63B:
    /* cmp MEM8(eax + 0x7), 0 */ /* 0x1704E63B: cmp byte ptr [eax + 7], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x7)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E64C; /* 0x1704E63F: jne 0x1704e64c */
L_1704E641:
    /* cmp MEM8(eax + 0x4), LO8(ebx) */ /* 0x1704E641: cmp byte ptr [eax + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E64C; /* 0x1704E644: jne 0x1704e64c */
L_1704E646:
    _flag_a = (uint32_t)((edi | 0x40u)); _flag_b = (uint32_t)((edi | 0x40u));
    edi = edi | 0x40u; /* 0x1704E646: or edi, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E649: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E64C:
    /* cmp MEM8(eax + 0x6), 0xAu */ /* 0x1704E64C: cmp byte ptr [eax + 6], 0xa */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E666; /* 0x1704E650: jne 0x1704e666 */
L_1704E652:
    /* cmp MEM8(eax + 0x7), 1 */ /* 0x1704E652: cmp byte ptr [eax + 7], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x7)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E666; /* 0x1704E656: jne 0x1704e666 */
L_1704E658:
    /* cmp MEM8(eax + 0x4), LO8(ebx) */ /* 0x1704E658: cmp byte ptr [eax + 4], bl */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E666; /* 0x1704E65B: jne 0x1704e666 */
L_1704E65D:
    _flag_a = (uint32_t)((edi | 0x80u)); _flag_b = (uint32_t)((edi | 0x80u));
    edi = edi | 0x80u; /* 0x1704E65D: or edi, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E663: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E666:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704E666: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704E668:
    SET_LO8(ecx, MEM8(eax + 0x6)); /* 0x1704E668: mov cl, byte ptr [eax + 6] */
    /* cmp LO8(ecx), 5 */ /* 0x1704E66B: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6D4; /* 0x1704E66E: jne 0x1704e6d4 */
L_1704E670:
    /* cmp MEM8(eax + 0x4), 0 */ /* 0x1704E670: cmp byte ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E682; /* 0x1704E674: jne 0x1704e682 */
L_1704E676:
    ebx = (uint32_t)MEM8(eax + 0x7); /* 0x1704E676: movzx ebx, byte ptr [eax + 7] */
    /* cmp ebx, edx */ /* 0x1704E67A: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E682; /* 0x1704E67C: jne 0x1704e682 */
L_1704E67E:
    PUSH32(esp, 3); /* 0x1704E67E: push 3 */
    goto L_1704E6C2; /* 0x1704E680: jmp 0x1704e6c2 */
L_1704E682:
    /* cmp LO8(ecx), 5 */ /* 0x1704E682: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6D4; /* 0x1704E685: jne 0x1704e6d4 */
L_1704E687:
    /* cmp MEM8(eax + 0x4), 1 */ /* 0x1704E687: cmp byte ptr [eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E695; /* 0x1704E68B: jne 0x1704e695 */
L_1704E68D:
    ebx = (uint32_t)MEM8(eax + 0x7); /* 0x1704E68D: movzx ebx, byte ptr [eax + 7] */
    /* cmp ebx, edx */ /* 0x1704E691: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E6C9; /* 0x1704E693: je 0x1704e6c9 */
L_1704E695:
    /* cmp LO8(ecx), 5 */ /* 0x1704E695: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6D4; /* 0x1704E698: jne 0x1704e6d4 */
L_1704E69A:
    /* cmp MEM8(eax + 0x4), 2 */ /* 0x1704E69A: cmp byte ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6AD; /* 0x1704E69E: jne 0x1704e6ad */
L_1704E6A0:
    ebx = (uint32_t)MEM8(eax + 0x7); /* 0x1704E6A0: movzx ebx, byte ptr [eax + 7] */
    /* cmp ebx, edx */ /* 0x1704E6A4: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6AD; /* 0x1704E6A6: jne 0x1704e6ad */
L_1704E6A8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704E6A8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1704E6AA: inc ebx */
    _flag_k = FK_INC;
    goto L_1704E6C3; /* 0x1704E6AB: jmp 0x1704e6c3 */
L_1704E6AD:
    /* cmp LO8(ecx), 5 */ /* 0x1704E6AD: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6D4; /* 0x1704E6B0: jne 0x1704e6d4 */
L_1704E6B2:
    /* cmp MEM8(eax + 0x4), 3 */ /* 0x1704E6B2: cmp byte ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6D4; /* 0x1704E6B6: jne 0x1704e6d4 */
L_1704E6B8:
    ecx = (uint32_t)MEM8(eax + 0x7); /* 0x1704E6B8: movzx ecx, byte ptr [eax + 7] */
    /* cmp ecx, edx */ /* 0x1704E6BC: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E6D4; /* 0x1704E6BE: jne 0x1704e6d4 */
L_1704E6C0:
    PUSH32(esp, 2); /* 0x1704E6C0: push 2 */
L_1704E6C2:
    ebx = POP32_VAL(esp); /* 0x1704E6C2: pop ebx */
L_1704E6C3:
    ecx = esi; /* 0x1704E6C3: mov ecx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1704E6C5: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x1704E6C5: shl ebx, cl */
    _flag_a = (uint32_t)((edi | ebx)); _flag_b = (uint32_t)((edi | ebx));
    edi = edi | ebx; /* 0x1704E6C7: or edi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704E6C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E6C9: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704E6CC: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704E6CD: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704E6CE: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x20u */ /* 0x1704E6CF: cmp esi, 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704E668; /* 0x1704E6D2: jb 0x1704e668 */
L_1704E6D4:
    /* cmp MEM16(eax), 0xFFu */ /* 0x1704E6D4: cmp word ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E6E2; /* 0x1704E6D9: je 0x1704e6e2 */
L_1704E6DB:
    eax = 0x8876086Cu; /* 0x1704E6DB: mov eax, 0x8876086c */
    goto L_1704E6EE; /* 0x1704E6E0: jmp 0x1704e6ee */
L_1704E6E2:
    eax = MEM32(ebp + 0xC); /* 0x1704E6E2: mov eax, dword ptr [ebp + 0xc] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x1704E6E5: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x1704E6E5: shl edx, 8 */
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x1704E6E8: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edx; /* 0x1704E6EA: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E6EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704E6EE:
    edi = POP32_VAL(esp); /* 0x1704E6EE: pop edi */
    esi = POP32_VAL(esp); /* 0x1704E6EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704E6F0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704E6F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704E6F2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704E6FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E6FAu);

L_1704E6FA:
    edi = edi; /* 0x1704E6FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E6FC: push ebp */
    ebp = esp; /* 0x1704E6FD: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1704E6FF: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704E701: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704E704: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1704E4E9); /* 0x1704E707: call 0x1704e4e9 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704E70C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704E70D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704E715(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E715u);

L_1704E715:
    edi = edi; /* 0x1704E715: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E717: push ebp */
    ebp = esp; /* 0x1704E718: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704E71A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1704E71D: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + 0xC); /* 0x1704E71F: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x1704E722: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    ebp = POP32_VAL(esp); /* 0x1704E724: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704E725: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704E72B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E72Bu);

L_1704E72B:
    edi = edi; /* 0x1704E72B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E72D: push ebp */
    ebp = esp; /* 0x1704E72E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704E730: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704E731: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E733: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1704E735: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704E738: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1704E739: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1704E73C: mov dword ptr [ebp - 4], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704E77A; /* 0x1704E73F: jbe 0x1704e77a */
L_1704E741:
    MEM32(esi + eax * 4) = eax; /* 0x1704E741: mov dword ptr [esi + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704E744: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704E745: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704E741; /* 0x1704E748: jb 0x1704e741 */
L_1704E74A:
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1704E74A: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704E77A; /* 0x1704E74D: jbe 0x1704e77a */
L_1704E74F:
    PUSH32(esp, ebx); /* 0x1704E74F: push ebx */
    PUSH32(esp, edi); /* 0x1704E750: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1704E751: mov edi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x1704E754: mov ecx, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x1704E756: sub edi, esi */
    _flag_k = FK_CMP;
L_1704E758:
    eax = MEM32(edi + ecx); /* 0x1704E758: mov eax, dword ptr [edi + ecx] */
    /* cmp eax, edx */ /* 0x1704E75B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E76F; /* 0x1704E75D: je 0x1704e76f */
L_1704E75F:
    eax = esi + eax * 4; /* 0x1704E75F: lea eax, [esi + eax*4] */
    ebx = MEM32(eax); /* 0x1704E762: mov ebx, dword ptr [eax] */
    MEM32(ecx) = ebx; /* 0x1704E764: mov dword ptr [ecx], ebx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1704E766: mov dword ptr [ebp - 4], 1 */
    MEM32(eax) = edx; /* 0x1704E76D: mov dword ptr [eax], edx */
L_1704E76F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704E76F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704E770: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x1704E773: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704E758; /* 0x1704E776: jb 0x1704e758 */
L_1704E778:
    edi = POP32_VAL(esp); /* 0x1704E778: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704E779: pop ebx */
L_1704E77A:
    ecx = MEM32(ebp + 0x10); /* 0x1704E77A: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E77D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1704E77F: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1704E782: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704E783: sete al */
    MEM32(ecx) = eax; /* 0x1704E786: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E788: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704E78A: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704E78B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704E793(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E793u);

L_1704E793:
    edi = edi; /* 0x1704E793: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E795: push ebp */
    ebp = esp; /* 0x1704E796: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704E798: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1704E79B: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E7C2; /* 0x1704E79E: je 0x1704e7c2 */
L_1704E7A0:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704E7A0: fld dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x10); /* 0x1704E7A3: fsub dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x1704E7A6: fcom dword ptr [ebp + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E7A9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704E7AB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704E7C7; /* 0x1704E7AE: jp 0x1704e7c7 */
L_1704E7B0:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1704E7B0: fld dword ptr [ebp + 8] */
    _st[0] = -_st[0]; /* 0x1704E7B3: fchs  */
    fp_push(_st[1]); /* 0x1704E7B5: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704E7B7: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704E7B9: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E7BB: fstp st(0) */
    /* test HI8(eax), 1 */ /* 0x1704E7BD: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E7C9; /* 0x1704E7C0: jne 0x1704e7c9 */
L_1704E7C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E7C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704E7C4: inc eax */
    _flag_k = FK_INC;
    goto L_1704E7CB; /* 0x1704E7C5: jmp 0x1704e7cb */
L_1704E7C7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704E7C7: fstp st(0) */
L_1704E7C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E7C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704E7CB:
    ebp = POP32_VAL(esp); /* 0x1704E7CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704E7CC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704E7D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E7D4u);

L_1704E7D4:
    edi = edi; /* 0x1704E7D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E7D6: push ebp */
    ebp = esp; /* 0x1704E7D7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704E7D9: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1704E7DA: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704E7DD: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax), 0xFFu */ /* 0x1704E7E1: cmp word ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, ebx); /* 0x1704E7E6: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1704E7E7: mov ebx, dword ptr [ebp + 0x14] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E880; /* 0x1704E7EA: je 0x1704e880 */
L_1704E7F0:
    PUSH32(esp, esi); /* 0x1704E7F0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704E7F1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1704E7F4: push edi */
    ecx = eax + 0x7; /* 0x1704E7F5: lea ecx, [eax + 7] */
    eax = MEM32(ebp + 0x10); /* 0x1704E7F8: mov eax, dword ptr [ebp + 0x10] */
    edi = ebx; /* 0x1704E7FB: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1704E7FD: sub edi, eax */
    _flag_k = FK_CMP;
L_1704E7FF:
    /* cmp MEM8(ecx + (-0x2)), 0 */ /* 0x1704E7FF: cmp byte ptr [ecx - 2], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + (-0x2))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E873; /* 0x1704E803: jne 0x1704e873 */
L_1704E805:
    edx = ecx + (-0x7); /* 0x1704E805: lea edx, [ecx - 7] */
    MEM32(edi + eax) = edx; /* 0x1704E808: mov dword ptr [edi + eax], edx */
    edx = (uint32_t)MEM8(ecx + (-0x1)); /* 0x1704E80B: movzx edx, byte ptr [ecx - 1] */
    /* cmp edx, 0xAu */ /* 0x1704E80F: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704E86D; /* 0x1704E812: ja 0x1704e86d */
L_1704E814:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1704E88C)); goto _ljump; }
L_1704E81B:
    edx = MEM32(esi); /* 0x1704E81B: mov edx, dword ptr [esi] */
    goto L_1704E86B; /* 0x1704E81D: jmp 0x1704e86b */
L_1704E81F:
    edx = MEM32(esi + 0x4); /* 0x1704E81F: mov edx, dword ptr [esi + 4] */
    goto L_1704E86B; /* 0x1704E822: jmp 0x1704e86b */
L_1704E824:
    fp_push(0.0); /* 0x1704E824: fldz  */
    goto L_1704E85A; /* 0x1704E826: jmp 0x1704e85a */
L_1704E828:
    edx = MEM32(esi + 0x8); /* 0x1704E828: mov edx, dword ptr [esi + 8] */
    goto L_1704E86B; /* 0x1704E82B: jmp 0x1704e86b */
L_1704E82D:
    edx = MEM32(esi + 0xC); /* 0x1704E82D: mov edx, dword ptr [esi + 0xc] */
    goto L_1704E86B; /* 0x1704E830: jmp 0x1704e86b */
L_1704E832:
    SET_LO8(edx, MEM8(ecx)); /* 0x1704E832: mov dl, byte ptr [ecx] */
    /* test LO8(edx), LO8(edx) */ /* 0x1704E834: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704E83D; /* 0x1704E836: jne 0x1704e83d */
L_1704E838:
    edx = MEM32(esi + 0x14); /* 0x1704E838: mov edx, dword ptr [esi + 0x14] */
    goto L_1704E86B; /* 0x1704E83B: jmp 0x1704e86b */
L_1704E83D:
    /* cmp LO8(edx), 1 */ /* 0x1704E83D: cmp dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E86D; /* 0x1704E840: jne 0x1704e86d */
L_1704E842:
    edx = MEM32(esi + 0x10); /* 0x1704E842: mov edx, dword ptr [esi + 0x10] */
    goto L_1704E86B; /* 0x1704E845: jmp 0x1704e86b */
L_1704E847:
    SET_LO8(edx, MEM8(ecx)); /* 0x1704E847: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), 7 */ /* 0x1704E849: cmp dl, 7 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704E853; /* 0x1704E84C: jbe 0x1704e853 */
L_1704E84E:
    PUSH32(esp, 7); /* 0x1704E84E: push 7 */
    edx = POP32_VAL(esp); /* 0x1704E850: pop edx */
    goto L_1704E856; /* 0x1704E851: jmp 0x1704e856 */
L_1704E853:
    edx = (uint32_t)LO8(edx); /* 0x1704E853: movzx edx, dl */
L_1704E856:
    fp_push(*(float*)&MEM32(esi + edx * 4 + 0x18)); /* 0x1704E856: fld dword ptr [esi + edx*4 + 0x18] */
L_1704E85A:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704E85A: fstp dword ptr [eax] */
    goto L_1704E86D; /* 0x1704E85C: jmp 0x1704e86d */
L_1704E85E:
    edx = MEM32(esi + 0x38); /* 0x1704E85E: mov edx, dword ptr [esi + 0x38] */
    goto L_1704E86B; /* 0x1704E861: jmp 0x1704e86b */
L_1704E863:
    edx = MEM32(esi + 0x3C); /* 0x1704E863: mov edx, dword ptr [esi + 0x3c] */
    goto L_1704E86B; /* 0x1704E866: jmp 0x1704e86b */
L_1704E868:
    edx = MEM32(esi + 0x40); /* 0x1704E868: mov edx, dword ptr [esi + 0x40] */
L_1704E86B:
    MEM32(eax) = edx; /* 0x1704E86B: mov dword ptr [eax], edx */
L_1704E86D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704E86D: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1704E870: add eax, 4 */
    _flag_k = FK_ADD;
L_1704E873:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1704E873: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx + (-0x7)), 0xFFu */ /* 0x1704E876: cmp word ptr [ecx - 7], 0xff */
    _flag_a = (uint32_t)(MEM16(ecx + (-0x7))) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E7FF; /* 0x1704E87C: jne 0x1704e7ff */
L_1704E87E:
    edi = POP32_VAL(esp); /* 0x1704E87E: pop edi */
    esi = POP32_VAL(esp); /* 0x1704E87F: pop esi */
L_1704E880:
    eax = MEM32(ebp + (-0x4)); /* 0x1704E880: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + eax * 4) = MEM32(ebx + eax * 4) & 0; /* 0x1704E883: and dword ptr [ebx + eax*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704E887: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704E888: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704E889: ret 0x10 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1704E81Bu: goto L_1704E81B;
      case 0x1704E81Fu: goto L_1704E81F;
      case 0x1704E824u: goto L_1704E824;
      case 0x1704E828u: goto L_1704E828;
      case 0x1704E82Du: goto L_1704E82D;
      case 0x1704E832u: goto L_1704E832;
      case 0x1704E847u: goto L_1704E847;
      case 0x1704E85Eu: goto L_1704E85E;
      case 0x1704E863u: goto L_1704E863;
      case 0x1704E868u: goto L_1704E868;
      case 0x1704E86Du: goto L_1704E86D;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704E8BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E8BDu);

L_1704E8BD:
    edi = edi; /* 0x1704E8BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E8BF: push ebp */
    ebp = esp; /* 0x1704E8C0: mov ebp, esp */
    eax = ecx; /* 0x1704E8C2: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x1704E8C4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1704E8C5: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1704E8C8: push esi */
    edx = ebx; /* 0x1704E8C9: mov edx, ebx */
    PUSH32(esp, edi); /* 0x1704E8CB: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704E8CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400Eu);
    edx = edx & 0x400Eu; /* 0x1704E8CE: and edx, 0x400e */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704E8D4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 2 */ /* 0x1704E8D6: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = eax + 0x18; /* 0x1704E8D9: lea esi, [eax + 0x18] */
    MEM32(eax) = ebx; /* 0x1704E8DC: mov dword ptr [eax], ebx */
    MEM32(eax + 0x8) = edi; /* 0x1704E8DE: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x1704E8E1: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = edi; /* 0x1704E8E4: mov dword ptr [eax + 0x10], edi */
    MEM32(eax + 0x14) = edi; /* 0x1704E8E7: mov dword ptr [eax + 0x14], edi */
    MEM32(eax + 0x38) = edi; /* 0x1704E8EA: mov dword ptr [eax + 0x38], edi */
    MEM32(eax + 0x3C) = edi; /* 0x1704E8ED: mov dword ptr [eax + 0x3c], edi */
    MEM32(esi) = edi; /* 0x1704E8F0: mov dword ptr [esi], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E8F9; /* 0x1704E8F2: jne 0x1704e8f9 */
L_1704E8F4:
    PUSH32(esp, 0xCu); /* 0x1704E8F4: push 0xc */
L_1704E8F6:
    ecx = POP32_VAL(esp); /* 0x1704E8F6: pop ecx */
    goto L_1704E916; /* 0x1704E8F7: jmp 0x1704e916 */
L_1704E8F9:
    /* cmp edx, 4 */ /* 0x1704E8F9: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E902; /* 0x1704E8FC: jne 0x1704e902 */
L_1704E8FE:
    PUSH32(esp, 0x10u); /* 0x1704E8FE: push 0x10 */
    RECOMP_BACKEDGE();
    goto L_1704E8F6; /* 0x1704E900: jmp 0x1704e8f6 */
L_1704E902:
    /* cmp edx, 6 */ /* 0x1704E902: cmp edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704E916; /* 0x1704E905: jb 0x1704e916 */
L_1704E907:
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1704E907: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1704E907: shr edx, 1 */
    ecx = edx + (-0x2); /* 0x1704E909: lea ecx, [edx - 2] */
    MEM32(eax + 0x38) = ecx; /* 0x1704E90C: mov dword ptr [eax + 0x38], ecx */
    ecx = ecx * 4 + 0xC; /* 0x1704E90F: lea ecx, [ecx*4 + 0xc] */
L_1704E916:
    /* test LO8(ebx), 0x10u */ /* 0x1704E916: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E921; /* 0x1704E919: je 0x1704e921 */
L_1704E91B:
    MEM32(eax + 0x8) = ecx; /* 0x1704E91B: mov dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1704E91E: add ecx, 0xc */
    _flag_k = FK_ADD;
L_1704E921:
    /* test LO8(ebx), 0x20u */ /* 0x1704E921: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E92C; /* 0x1704E924: je 0x1704e92c */
L_1704E926:
    MEM32(eax + 0xC) = ecx; /* 0x1704E926: mov dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704E929: add ecx, 4 */
    _flag_k = FK_ADD;
L_1704E92C:
    /* test LO8(ebx), 0x40u */ /* 0x1704E92C: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E937; /* 0x1704E92F: je 0x1704e937 */
L_1704E931:
    MEM32(eax + 0x10) = ecx; /* 0x1704E931: mov dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704E934: add ecx, 4 */
    _flag_k = FK_ADD;
L_1704E937:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1704E937: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1704E941; /* 0x1704E939: jns 0x1704e941 */
L_1704E93B:
    MEM32(eax + 0x14) = ecx; /* 0x1704E93B: mov dword ptr [eax + 0x14], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704E93E: add ecx, 4 */
    _flag_k = FK_ADD;
L_1704E941:
    /* test HI8(ebx), 0xFu */ /* 0x1704E941: test bh, 0xf */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704E983; /* 0x1704E944: je 0x1704e983 */
L_1704E946:
    edx = ebx; /* 0x1704E946: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x1704E948: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x1704E948: shr edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x1704E94B: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 8 */ /* 0x1704E94E: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = ecx; /* 0x1704E951: mov dword ptr [esi], ecx */
    MEM32(eax + 0x3C) = edx; /* 0x1704E953: mov dword ptr [eax + 0x3c], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704E95F; /* 0x1704E956: jbe 0x1704e95f */
L_1704E958:
    MEM32(eax + 0x3C) = 8; /* 0x1704E958: mov dword ptr [eax + 0x3c], 8 */
L_1704E95F:
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x1704E95F: shr ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 16u; /* 0x1704E95F: shr ebx, 0x10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704E962: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x3C), edi */ /* 0x1704E964: cmp dword ptr [eax + 0x3c], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704E983; /* 0x1704E967: jbe 0x1704e983 */
L_1704E969:
    edi = ebx; /* 0x1704E969: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    edi = edi & 3; /* 0x1704E96B: and edi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x1704E96E: mov dword ptr [esi], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi * 4 + 0x17005970));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi * 4 + 0x17005970); /* 0x1704E970: add ecx, dword ptr [edi*4 + 0x17005970] */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ebx) >> 1) & 1u); /* 0x1704E977: shr ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 2u; /* 0x1704E977: shr ebx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704E97A: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1704E97B: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0x3C) */ /* 0x1704E97E: cmp edx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704E969; /* 0x1704E981: jb 0x1704e969 */
L_1704E983:
    edi = POP32_VAL(esp); /* 0x1704E983: pop edi */
    esi = POP32_VAL(esp); /* 0x1704E984: pop esi */
    MEM32(eax + 0x4) = ecx; /* 0x1704E985: mov dword ptr [eax + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x1704E988: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704E989: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704E98A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704E992(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E992u);

L_1704E992:
    edi = edi; /* 0x1704E992: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E994: push ebp */
    ebp = esp; /* 0x1704E995: mov ebp, esp */
    eax = ecx; /* 0x1704E997: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1704E999: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x3C) */ /* 0x1704E99C: cmp ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704E9B5; /* 0x1704E99F: jae 0x1704e9b5 */
L_1704E9A1:
    eax = MEM32(eax); /* 0x1704E9A1: mov eax, dword ptr [eax] */
    ecx = ecx + ecx + 0x10; /* 0x1704E9A3: lea ecx, [ecx + ecx + 0x10] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1704E9A7: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x1704E9A7: shr eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1704E9A9: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax * 4 + 0x17005970); /* 0x1704E9AC: mov eax, dword ptr [eax*4 + 0x17005970] */
    goto L_1704E9B7; /* 0x1704E9B3: jmp 0x1704e9b7 */
L_1704E9B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E9B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704E9B7:
    ebp = POP32_VAL(esp); /* 0x1704E9B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704E9B8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704E9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E9C0u);

L_1704E9C0:
    edi = edi; /* 0x1704E9C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E9C2: push ebp */
    ebp = esp; /* 0x1704E9C3: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1704E9C5: mov eax, dword ptr [ecx] */
    goto L_1704E9DE; /* 0x1704E9C7: jmp 0x1704e9de */
L_1704E9C9:
    ecx = (uint32_t)MEM8(eax + 0x6); /* 0x1704E9C9: movzx ecx, byte ptr [eax + 6] */
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1704E9CD: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E9DB; /* 0x1704E9D0: jne 0x1704e9db */
L_1704E9D2:
    ecx = (uint32_t)MEM8(eax + 0x7); /* 0x1704E9D2: movzx ecx, byte ptr [eax + 7] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1704E9D6: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704E9E7; /* 0x1704E9D9: je 0x1704e9e7 */
L_1704E9DB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704E9DB: add eax, 8 */
    _flag_k = FK_ADD;
L_1704E9DE:
    /* cmp MEM16(eax), 0xFFu */ /* 0x1704E9DE: cmp word ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704E9C9; /* 0x1704E9E3: jne 0x1704e9c9 */
L_1704E9E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704E9E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704E9E7:
    ebp = POP32_VAL(esp); /* 0x1704E9E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704E9E8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704E9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704E9F0u);

L_1704E9F0:
    edi = edi; /* 0x1704E9F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704E9F2: push ebp */
    ebp = esp; /* 0x1704E9F3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704E9F5: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1704E9F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704EA41; /* 0x1704E9FA: je 0x1704ea41 */
L_1704E9FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704E9FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax)); /* 0x1704E9FE: mov cx, word ptr [eax] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x1704EA01: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO16(ecx), 0xFFu */ /* 0x1704EA03: cmp cx, 0xff */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EA3A; /* 0x1704EA08: je 0x1704ea3a */
L_1704EA0A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1704EA0A: add eax, 2 */
    _flag_k = FK_ADD;
L_1704EA0D:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1704EA0D: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704EA41; /* 0x1704EA10: jne 0x1704ea41 */
L_1704EA12:
    /* cmp MEM8(eax + 0x3), LO8(ecx) */ /* 0x1704EA12: cmp byte ptr [eax + 3], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0x3)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EA2C; /* 0x1704EA15: je 0x1704ea2c */
L_1704EA17:
    SET_LO16(ecx, (uint32_t)LO8(edx)); /* 0x1704EA17: movzx cx, dl */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x1704EA1B: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1704EA41; /* 0x1704EA1E: jb 0x1704ea41 */
L_1704EA20:
    ecx = (uint32_t)MEM8(eax + 0x2); /* 0x1704EA20: movzx ecx, byte ptr [eax + 2] */
    SET_LO8(edx, MEM8(ecx + 0x17005980)); /* 0x1704EA24: mov dl, byte ptr [ecx + 0x17005980] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1704EA2A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1704EA2C:
    SET_LO16(ecx, MEM16(eax + 0x6)); /* 0x1704EA2C: mov cx, word ptr [eax + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704EA30: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp LO16(ecx), 0xFFu */ /* 0x1704EA33: cmp cx, 0xff */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EA0D; /* 0x1704EA38: jne 0x1704ea0d */
L_1704EA3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704EA3A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704EA3C: inc eax */
    _flag_k = FK_INC;
L_1704EA3D:
    ebp = POP32_VAL(esp); /* 0x1704EA3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704EA3E: ret 8 */
L_1704EA41:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704EA41: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1704EA3D; /* 0x1704EA43: jmp 0x1704ea3d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1704EA4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EA4Au);

L_1704EA4A:
    edi = edi; /* 0x1704EA4A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EA4C: push ebp */
    ebp = esp; /* 0x1704EA4D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1704EA4F: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704EA52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704EA5A; /* 0x1704EA54: jmp 0x1704ea5a */
L_1704EA56:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1704EA56: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704EA59: inc eax */
    _flag_k = FK_INC;
L_1704EA5A:
    /* cmp MEM16(ecx), 0xFFu */ /* 0x1704EA5A: cmp word ptr [ecx], 0xff */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EA56; /* 0x1704EA5F: jne 0x1704ea56 */
L_1704EA61:
    ebp = POP32_VAL(esp); /* 0x1704EA61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704EA62: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704EA6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EA6Au);

L_1704EA6A:
    edi = edi; /* 0x1704EA6A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EA6C: push ebp */
    ebp = esp; /* 0x1704EA6D: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1704EA6F: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + edx * 4 + 0x48); /* 0x1704EA72: mov eax, dword ptr [ecx + edx*4 + 0x48] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x1704EA76: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4 + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + edx * 4 + 0x8); /* 0x1704EA7A: add eax, dword ptr [ecx + edx*4 + 8] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1704EA7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704EA7F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704EA87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EA87u);

L_1704EA87:
    edi = edi; /* 0x1704EA87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EA89: push ebp */
    ebp = esp; /* 0x1704EA8A: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1704EA8C: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x248); /* 0x1704EA8F: mov eax, dword ptr [ecx + 0x248] */
    ecx = MEM32(eax); /* 0x1704EA95: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)((edx | 0x800u)); _flag_b = (uint32_t)((edx | 0x800u));
    edx = edx | 0x800u; /* 0x1704EA97: or edx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1704EA9D: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704EA9E: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1704EAA1: push 0 */
    PUSH32(esp, 0); /* 0x1704EAA3: push 0 */
    PUSH32(esp, eax); /* 0x1704EAA5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1704EAA6: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704EAA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704EAAA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704EAB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EAB2u);

L_1704EAB2:
    edi = edi; /* 0x1704EAB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EAB4: push ebp */
    ebp = esp; /* 0x1704EAB5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1704EAB7: push esi */
    PUSH32(esp, 0); /* 0x1704EAB8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704EABA: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1704EABD: mov esi, ecx */
    PUSH32(esp, 0); /* 0x1704EABF: push 0 */
    RECOMP_CALL(sub_170B7D6A); /* 0x1704EAC1: call 0x170b7d6a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1704EAC6: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704EAC8: push dword ptr [ebp + 0xc] */
    ecx = esi + 0xC4; /* 0x1704EACB: lea ecx, [esi + 0xc4] */
    PUSH32(esp, 0); /* 0x1704EAD1: push 0 */
    RECOMP_CALL(sub_170B7D6A); /* 0x1704EAD3: call 0x170b7d6a */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1704EAD8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704EAD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704EADA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704EAE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EAE2u);

L_1704EAE2:
    edi = edi; /* 0x1704EAE2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EAE4: push ebp */
    ebp = esp; /* 0x1704EAE5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1704EAE7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704EAEA: push ebx */
    PUSH32(esp, esi); /* 0x1704EAEB: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704EAEC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1704EAEE: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704EAF1: push edi */
    esi = ecx; /* 0x1704EAF2: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EB1C; /* 0x1704EAF4: je 0x1704eb1c */
L_1704EAF6:
    edi = MEM32(esi + 0x10C); /* 0x1704EAF6: mov edi, dword ptr [esi + 0x10c] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0xC)); /* 0x1704EAFC: imul edi, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x184); /* 0x1704EB00: mov ecx, dword ptr [esi + 0x184] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xCC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0xCC); /* 0x1704EB06: add edi, dword ptr [esi + 0xcc] */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1704EB0C: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704EB0E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704EB0E: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704EB11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704EB13: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704EB15: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704EB17: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704EB1A: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_1704EB1C:
    /* cmp MEM32(esi + 0x188), ebx */ /* 0x1704EB1C: cmp dword ptr [esi + 0x188], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x188)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704EB93; /* 0x1704EB22: jbe 0x1704eb93 */
L_1704EB24:
    edi = esi + 0x18C; /* 0x1704EB24: lea edi, [esi + 0x18c] */
L_1704EB2A:
    PUSH32(esp, 4); /* 0x1704EB2A: push 4 */
    eax = ebp + (-0x10); /* 0x1704EB2C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1704EB2F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704EB30: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1704EB33: mov ecx, esi */
    PUSH32(esp, MEM32(edi)); /* 0x1704EB35: push dword ptr [edi] */
    RECOMP_CALL(sub_170B7D9D); /* 0x1704EB37: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1704EB3C: mov eax, dword ptr [edi] */
    /* cmp MEM8(eax + 0x6), 1 */ /* 0x1704EB3E: cmp byte ptr [eax + 6], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x6)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EB6D; /* 0x1704EB42: jne 0x1704eb6d */
L_1704EB44:
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x1704EB44: mov al, byte ptr [eax + 4] */
    /* cmp LO8(eax), 2 */ /* 0x1704EB47: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1704EB6D; /* 0x1704EB49: ja 0x1704eb6d */
L_1704EB4B:
    eax = (uint32_t)LO8(eax); /* 0x1704EB4B: movzx eax, al */
    fp_push(0.0); /* 0x1704EB4E: fldz  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704EB50: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0); /* 0x1704EB51: push 0 */
    ecx = POP32_VAL(esp); /* 0x1704EB53: pop ecx */
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1704EB63; /* 0x1704EB54: je 0x1704eb63 */
L_1704EB56:
    fp_push(_st[0]); /* 0x1704EB56: fld st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704EB58: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x1704EB59: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(ebp + ecx * 4 + (-0x14)); /* 0x1704EB5B: fadd dword ptr [ebp + ecx*4 - 0x14] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1704EB5F: fstp st(1) */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704EB56; /* 0x1704EB61: jb 0x1704eb56 */
L_1704EB63:
    fp_push(1.0); /* 0x1704EB63: fld1  */
    _st[0] -= _st[1]; /* 0x1704EB65: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x10)) = _v; } /* 0x1704EB67: fstp dword ptr [ebp + eax*4 - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704EB6B: fstp st(0) */
L_1704EB6D:
    PUSH32(esp, 4); /* 0x1704EB6D: push 4 */
    eax = ebp + (-0x10); /* 0x1704EB6F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1704EB72: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704EB73: push dword ptr [ebp + 0xc] */
    ecx = esi + 0xC4; /* 0x1704EB76: lea ecx, [esi + 0xc4] */
    PUSH32(esp, MEM32(edi + 0x104)); /* 0x1704EB7C: push dword ptr [edi + 0x104] */
    RECOMP_CALL(sub_170B81B2); /* 0x1704EB82: call 0x170b81b2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1704EB87: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1704EB88: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x188) */ /* 0x1704EB8B: cmp ebx, dword ptr [esi + 0x188] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x188));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704EB2A; /* 0x1704EB91: jb 0x1704eb2a */
L_1704EB93:
    edi = POP32_VAL(esp); /* 0x1704EB93: pop edi */
    esi = POP32_VAL(esp); /* 0x1704EB94: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704EB95: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704EB96: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704EB97: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704EB9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EB9Fu);

L_1704EB9F:
    edi = edi; /* 0x1704EB9F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EBA1: push ebp */
    ebp = esp; /* 0x1704EBA2: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704EBA4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1704EBA7: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1704EBAA: push esi */
    esi = 0xFFu; /* 0x1704EBAB: mov esi, 0xff */
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1704EBB0: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EC03; /* 0x1704EBB3: je 0x1704ec03 */
L_1704EBB5:
    PUSH32(esp, edi); /* 0x1704EBB5: push edi */
    edi = ecx; /* 0x1704EBB6: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1704EBB8: sub edi, eax */
    _flag_k = FK_CMP;
L_1704EBBA:
    SET_LO16(edx, MEM16(ecx)); /* 0x1704EBBA: mov dx, word ptr [ecx] */
    /* cmp LO16(edx), LO16(esi) */ /* 0x1704EBBD: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EBFD; /* 0x1704EBC0: je 0x1704ebfd */
L_1704EBC2:
    /* cmp LO16(edx), MEM16(eax) */ /* 0x1704EBC2: cmp dx, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EBD2; /* 0x1704EBC5: je 0x1704ebd2 */
L_1704EBC7:
    SET_LO16(edx, MEM16(edi + eax + 0x2)); /* 0x1704EBC7: mov dx, word ptr [edi + eax + 2] */
    /* cmp LO16(edx), MEM16(eax + 0x2) */ /* 0x1704EBCC: cmp dx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(eax + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EBFD; /* 0x1704EBD0: jne 0x1704ebfd */
L_1704EBD2:
    SET_LO8(edx, MEM8(ecx + 0x4)); /* 0x1704EBD2: mov dl, byte ptr [ecx + 4] */
    /* cmp LO8(edx), MEM8(eax + 0x4) */ /* 0x1704EBD5: cmp dl, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x4)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EBFD; /* 0x1704EBD8: jne 0x1704ebfd */
L_1704EBDA:
    SET_LO8(edx, MEM8(ecx + 0x5)); /* 0x1704EBDA: mov dl, byte ptr [ecx + 5] */
    /* cmp LO8(edx), MEM8(eax + 0x5) */ /* 0x1704EBDD: cmp dl, byte ptr [eax + 5] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x5)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EBFD; /* 0x1704EBE0: jne 0x1704ebfd */
L_1704EBE2:
    SET_LO8(edx, MEM8(ecx + 0x6)); /* 0x1704EBE2: mov dl, byte ptr [ecx + 6] */
    /* cmp LO8(edx), MEM8(eax + 0x6) */ /* 0x1704EBE5: cmp dl, byte ptr [eax + 6] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x6)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EBFD; /* 0x1704EBE8: jne 0x1704ebfd */
L_1704EBEA:
    SET_LO8(edx, MEM8(ecx + 0x7)); /* 0x1704EBEA: mov dl, byte ptr [ecx + 7] */
    /* cmp LO8(edx), MEM8(eax + 0x7) */ /* 0x1704EBED: cmp dl, byte ptr [eax + 7] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x7)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EBFD; /* 0x1704EBF0: jne 0x1704ebfd */
L_1704EBF2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704EBF2: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1704EBF5: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1704EBF8: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EBBA; /* 0x1704EBFB: jne 0x1704ebba */
L_1704EBFD:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1704EBFD: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edi = POP32_VAL(esp); /* 0x1704EC00: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EC0D; /* 0x1704EC01: jne 0x1704ec0d */
L_1704EC03:
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1704EC03: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EC0D; /* 0x1704EC06: jne 0x1704ec0d */
L_1704EC08:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704EC08: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704EC0A: inc eax */
    _flag_k = FK_INC;
    goto L_1704EC0F; /* 0x1704EC0B: jmp 0x1704ec0f */
L_1704EC0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704EC0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704EC0F:
    esi = POP32_VAL(esp); /* 0x1704EC0F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704EC10: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704EC11: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704EC19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EC19u);

L_1704EC19:
    edi = edi; /* 0x1704EC19: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EC1B: push ebp */
    ebp = esp; /* 0x1704EC1C: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704EC1E: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704EC21: mov ecx, dword ptr [ebp + 8] */
L_1704EC24:
    edx = MEM32(eax); /* 0x1704EC24: mov edx, dword ptr [eax] */
    /* cmp LO16(edx), 0xFFu */ /* 0x1704EC26: cmp dx, 0xff */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ecx) = edx; /* 0x1704EC2B: mov dword ptr [ecx], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EC3D; /* 0x1704EC2D: je 0x1704ec3d */
L_1704EC2F:
    edx = MEM32(eax + 0x4); /* 0x1704EC2F: mov edx, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = edx; /* 0x1704EC32: mov dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704EC35: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1704EC38: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1704EC24; /* 0x1704EC3B: jmp 0x1704ec24 */
L_1704EC3D:
    eax = MEM32(eax + 0x4); /* 0x1704EC3D: mov eax, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1704EC40: mov dword ptr [ecx + 4], eax */
    ebp = POP32_VAL(esp); /* 0x1704EC43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704EC44: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704EC4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EC4Cu);

L_1704EC4C:
    edi = edi; /* 0x1704EC4C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EC4E: push ebp */
    ebp = esp; /* 0x1704EC4F: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1704EC51: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1704EC54: push esi */
    esi = 0xFFu; /* 0x1704EC55: mov esi, 0xff */
    goto L_1704EC6F; /* 0x1704EC5A: jmp 0x1704ec6f */
L_1704EC5C:
    SET_LO8(ecx, MEM8(eax + 0x6)); /* 0x1704EC5C: mov cl, byte ptr [eax + 6] */
    /* cmp LO8(ecx), MEM8(ebp + 0x8) */ /* 0x1704EC5F: cmp cl, byte ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0x8)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EC6C; /* 0x1704EC62: jne 0x1704ec6c */
L_1704EC64:
    SET_LO8(ecx, MEM8(eax + 0x7)); /* 0x1704EC64: mov cl, byte ptr [eax + 7] */
    /* cmp LO8(ecx), MEM8(ebp + 0xC) */ /* 0x1704EC67: cmp cl, byte ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0xC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EC74; /* 0x1704EC6A: je 0x1704ec74 */
L_1704EC6C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704EC6C: add eax, 8 */
    _flag_k = FK_ADD;
L_1704EC6F:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1704EC6F: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EC5C; /* 0x1704EC72: jne 0x1704ec5c */
L_1704EC74:
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1704EC74: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704ECB6; /* 0x1704EC77: je 0x1704ecb6 */
L_1704EC79:
    ecx = (uint32_t)MEM8(eax + 0x4); /* 0x1704EC79: movzx ecx, byte ptr [eax + 4] */
    SET_LO8(edx, MEM8(ecx + 0x17005980)); /* 0x1704EC7D: mov dl, byte ptr [ecx + 0x17005980] */
    ecx = eax; /* 0x1704EC83: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704EC85: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1704EC88: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704ECAC; /* 0x1704EC8B: je 0x1704ecac */
L_1704EC8D:
    SET_LO16(edx, (uint32_t)LO8(edx)); /* 0x1704EC8D: movzx dx, dl */
    PUSH32(esp, ebx); /* 0x1704EC91: push ebx */
L_1704EC92:
    ebx = MEM32(eax); /* 0x1704EC92: mov ebx, dword ptr [eax] */
    MEM32(ecx) = ebx; /* 0x1704EC94: mov dword ptr [ecx], ebx */
    ebx = MEM32(eax + 0x4); /* 0x1704EC96: mov ebx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM16(ecx + 0x2)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM16(ecx + 0x2) = (uint16_t)(MEM16(ecx + 0x2) - LO16(edx)); /* 0x1704EC99: sub word ptr [ecx + 2], dx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ecx + 0x4) = ebx; /* 0x1704EC9D: mov dword ptr [ecx + 4], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704ECA0: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1704ECA3: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1704ECA6: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704EC92; /* 0x1704ECA9: jne 0x1704ec92 */
L_1704ECAB:
    ebx = POP32_VAL(esp); /* 0x1704ECAB: pop ebx */
L_1704ECAC:
    edx = MEM32(eax); /* 0x1704ECAC: mov edx, dword ptr [eax] */
    MEM32(ecx) = edx; /* 0x1704ECAE: mov dword ptr [ecx], edx */
    eax = MEM32(eax + 0x4); /* 0x1704ECB0: mov eax, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1704ECB3: mov dword ptr [ecx + 4], eax */
L_1704ECB6:
    esi = POP32_VAL(esp); /* 0x1704ECB6: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704ECB7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704ECB8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704ECC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704ECC0u);

L_1704ECC0:
    edi = edi; /* 0x1704ECC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704ECC2: push ebp */
    ebp = esp; /* 0x1704ECC3: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1704ECC5: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1704ECC8: push esi */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x1704ECC9: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1704ECCB: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704ECCC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0xFFu; /* 0x1704ECCE: mov edx, 0xff */
    goto L_1704ECE8; /* 0x1704ECD3: jmp 0x1704ece8 */
L_1704ECD5:
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x1704ECD5: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704ECED; /* 0x1704ECD8: jae 0x1704eced */
L_1704ECDA:
    edi = (uint32_t)MEM8(eax + 0x4); /* 0x1704ECDA: movzx edi, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x17005980)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(edi + 0x17005980)); /* 0x1704ECDE: add cl, byte ptr [edi + 0x17005980] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704ECE4: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704ECE7: inc esi */
    _flag_k = FK_INC;
L_1704ECE8:
    /* cmp MEM16(eax), LO16(edx) */ /* 0x1704ECE8: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704ECD5; /* 0x1704ECEB: jne 0x1704ecd5 */
L_1704ECED:
    /* cmp MEM16(eax), LO16(edx) */ /* 0x1704ECED: cmp word ptr [eax], dx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704ED0C; /* 0x1704ECF0: jne 0x1704ed0c */
L_1704ECF2:
    edx = MEM32(eax); /* 0x1704ECF2: mov edx, dword ptr [eax] */
    MEM32(eax + 0x8) = edx; /* 0x1704ECF4: mov dword ptr [eax + 8], edx */
    edx = MEM32(eax + 0x4); /* 0x1704ECF7: mov edx, dword ptr [eax + 4] */
    MEM32(eax + 0xC) = edx; /* 0x1704ECFA: mov dword ptr [eax + 0xc], edx */
    edx = MEM32(ebp + 0xC); /* 0x1704ECFD: mov edx, dword ptr [ebp + 0xc] */
    esi = MEM32(edx); /* 0x1704ED00: mov esi, dword ptr [edx] */
    MEM32(eax) = esi; /* 0x1704ED02: mov dword ptr [eax], esi */
    edx = MEM32(edx + 0x4); /* 0x1704ED04: mov edx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = edx; /* 0x1704ED07: mov dword ptr [eax + 4], edx */
    goto L_1704ED6E; /* 0x1704ED0A: jmp 0x1704ed6e */
L_1704ED0C:
    edx = MEM32(ebp + 0xC); /* 0x1704ED0C: mov edx, dword ptr [ebp + 0xc] */
    esi = (uint32_t)MEM8(edx + 0x4); /* 0x1704ED0F: movzx esi, byte ptr [edx + 4] */
    edi = MEM32(eax + 0x4); /* 0x1704ED13: mov edi, dword ptr [eax + 4] */
    MEM8(ebp + 0x13) = (uint8_t)(LO8(ecx)); /* 0x1704ED16: mov byte ptr [ebp + 0x13], cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x17005980)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(esi + 0x17005980)); /* 0x1704ED19: add cl, byte ptr [esi + 0x17005980] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esi = MEM32(eax); /* 0x1704ED1F: mov esi, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1704ED21: push ebx */
    ebx = MEM32(edx); /* 0x1704ED22: mov ebx, dword ptr [edx] */
    MEM32(eax) = ebx; /* 0x1704ED24: mov dword ptr [eax], ebx */
    edx = MEM32(edx + 0x4); /* 0x1704ED26: mov edx, dword ptr [edx + 4] */
    MEM32(eax + 0x4) = edx; /* 0x1704ED29: mov dword ptr [eax + 4], edx */
    SET_LO16(edx, (uint32_t)MEM8(ebp + 0x13)); /* 0x1704ED2C: movzx dx, byte ptr [ebp + 0x13] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(edx)); /* 0x1704ED31: mov word ptr [eax + 2], dx */
    goto L_1704ED53; /* 0x1704ED35: jmp 0x1704ed53 */
L_1704ED37:
    ebx = MEM32(eax + 0x4); /* 0x1704ED37: mov ebx, dword ptr [eax + 4] */
    esi = edx; /* 0x1704ED3A: mov esi, edx */
    SET_LO16(edx, (uint32_t)LO8(ecx)); /* 0x1704ED3C: movzx dx, cl */
    MEM32(eax + 0x4) = edi; /* 0x1704ED40: mov dword ptr [eax + 4], edi */
    MEM16(eax + 0x2) = (uint16_t)(LO16(edx)); /* 0x1704ED43: mov word ptr [eax + 2], dx */
    edx = (uint32_t)MEM8(eax + 0x4); /* 0x1704ED47: movzx edx, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x17005980)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(edx + 0x17005980)); /* 0x1704ED4B: add cl, byte ptr [edx + 0x17005980] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    edi = ebx; /* 0x1704ED51: mov edi, ebx */
L_1704ED53:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1704ED53: add eax, 8 */
    _flag_k = FK_ADD;
    edx = MEM32(eax); /* 0x1704ED56: mov edx, dword ptr [eax] */
    /* cmp LO16(edx), 0xFFu */ /* 0x1704ED58: cmp dx, 0xff */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(eax) = esi; /* 0x1704ED5D: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704ED37; /* 0x1704ED5F: jne 0x1704ed37 */
L_1704ED61:
    MEM32(eax + 0x8) = edx; /* 0x1704ED61: mov dword ptr [eax + 8], edx */
    edx = MEM32(eax + 0x4); /* 0x1704ED64: mov edx, dword ptr [eax + 4] */
    MEM32(eax + 0xC) = edx; /* 0x1704ED67: mov dword ptr [eax + 0xc], edx */
    MEM32(eax + 0x4) = edi; /* 0x1704ED6A: mov dword ptr [eax + 4], edi */
    ebx = POP32_VAL(esp); /* 0x1704ED6D: pop ebx */
L_1704ED6E:
    SET_LO16(ecx, (uint32_t)LO8(ecx)); /* 0x1704ED6E: movzx cx, cl */
    edi = POP32_VAL(esp); /* 0x1704ED72: pop edi */
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x1704ED73: mov word ptr [eax + 2], cx */
    esi = POP32_VAL(esp); /* 0x1704ED77: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704ED78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704ED79: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704ED81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704ED81u);

L_1704ED81:
    edi = edi; /* 0x1704ED81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704ED83: push ebp */
    ebp = esp; /* 0x1704ED84: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704ED86: push ecx */
    PUSH32(esp, ecx); /* 0x1704ED87: push ecx */
    PUSH32(esp, ebx); /* 0x1704ED88: push ebx */
    PUSH32(esp, esi); /* 0x1704ED89: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1704ED8A: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1704ED8D: push edi */
    PUSH32(esp, esi); /* 0x1704ED8E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704ED8F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704ED91: push edi */
    PUSH32(esp, 1); /* 0x1704ED92: push 1 */
    RECOMP_CALL(sub_1704EC4C); /* 0x1704ED94: call 0x1704ec4c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1704ED99: push esi */
    PUSH32(esp, edi); /* 0x1704ED9A: push edi */
    PUSH32(esp, 2); /* 0x1704ED9B: push 2 */
    RECOMP_CALL(sub_1704EC4C); /* 0x1704ED9D: call 0x1704ec4c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1704EDA2: push esi */
    RECOMP_CALL(sub_1704EA4A); /* 0x1704EDA3: call 0x1704ea4a */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x1704EDA8: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704EDAB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1704EDAD: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704EDAF: setne cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704EDB2: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704EDB4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1704EDB6: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704EDB9: setne cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1704EDBC: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, 0x41u */ /* 0x1704EDBE: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704EDCA; /* 0x1704EDC1: jb 0x1704edca */
L_1704EDC3:
    eax = 0x8876086Cu; /* 0x1704EDC3: mov eax, 0x8876086c */
    goto L_1704EE16; /* 0x1704EDC8: jmp 0x1704ee16 */
L_1704EDCA:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1704EDCA: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EDEF; /* 0x1704EDCD: je 0x1704edef */
L_1704EDCF:
    PUSH32(esp, esi); /* 0x1704EDCF: push esi */
    eax = ebp + (-0x8); /* 0x1704EDD0: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1704EDD3: push eax */
    PUSH32(esp, 1); /* 0x1704EDD4: push 1 */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(edi)); /* 0x1704EDD6: mov word ptr [ebp - 8], di */
    MEM8(ebp + (-0x3)) = (uint8_t)(0); /* 0x1704EDDA: mov byte ptr [ebp - 3], 0 */
    MEM8(ebp + (-0x2)) = (uint8_t)(2); /* 0x1704EDDE: mov byte ptr [ebp - 2], 2 */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1704EDE2: mov byte ptr [ebp - 1], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x1704EDE6: mov byte ptr [ebp - 4], 5 */
    RECOMP_CALL(sub_1704ECC0); /* 0x1704EDEA: call 0x1704ecc0 */
    RECOMP_FLAGS_IN();
L_1704EDEF:
    /* cmp ebx, edi */ /* 0x1704EDEF: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE14; /* 0x1704EDF1: je 0x1704ee14 */
L_1704EDF3:
    PUSH32(esp, esi); /* 0x1704EDF3: push esi */
    eax = ebp + (-0x8); /* 0x1704EDF4: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1704EDF7: push eax */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) - 1); /* 0x1704EDF8: dec bl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    PUSH32(esp, 1); /* 0x1704EDFA: push 1 */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(edi)); /* 0x1704EDFC: mov word ptr [ebp - 8], di */
    MEM8(ebp + (-0x3)) = (uint8_t)(0); /* 0x1704EE00: mov byte ptr [ebp - 3], 0 */
    MEM8(ebp + (-0x2)) = (uint8_t)(1); /* 0x1704EE04: mov byte ptr [ebp - 2], 1 */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1704EE08: mov byte ptr [ebp - 1], 0 */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1704EE0C: mov byte ptr [ebp - 4], bl */
    RECOMP_CALL(sub_1704ECC0); /* 0x1704EE0F: call 0x1704ecc0 */
    RECOMP_FLAGS_IN();
L_1704EE14:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704EE14: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704EE16:
    edi = POP32_VAL(esp); /* 0x1704EE16: pop edi */
    esi = POP32_VAL(esp); /* 0x1704EE17: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704EE18: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704EE19: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704EE1A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704EE22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EE22u);

L_1704EE22:
    edi = edi; /* 0x1704EE22: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704EE24: push ebx */
    PUSH32(esp, esi); /* 0x1704EE25: push esi */
    esi = ecx; /* 0x1704EE26: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x1704EE28: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704EE2B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1704EE2D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704EE2F: push edi */
    MEM32(esi) = 0x170059A0u; /* 0x1704EE30: mov dword ptr [esi], 0x170059a0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE41; /* 0x1704EE36: je 0x1704ee41 */
L_1704EE38:
    ecx = MEM32(eax); /* 0x1704EE38: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE3A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE3B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = ebx; /* 0x1704EE3E: mov dword ptr [esi + 8], ebx */
L_1704EE41:
    edi = esi + 0x22C; /* 0x1704EE41: lea edi, [esi + 0x22c] */
    eax = MEM32(edi); /* 0x1704EE47: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704EE49: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE55; /* 0x1704EE4B: je 0x1704ee55 */
L_1704EE4D:
    ecx = MEM32(eax); /* 0x1704EE4D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE4F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE50: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704EE53: mov dword ptr [edi], ebx */
L_1704EE55:
    edi = esi + 0x230; /* 0x1704EE55: lea edi, [esi + 0x230] */
    eax = MEM32(edi); /* 0x1704EE5B: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704EE5D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE69; /* 0x1704EE5F: je 0x1704ee69 */
L_1704EE61:
    ecx = MEM32(eax); /* 0x1704EE61: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE63: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE64: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704EE67: mov dword ptr [edi], ebx */
L_1704EE69:
    edi = esi + 0x234; /* 0x1704EE69: lea edi, [esi + 0x234] */
    eax = MEM32(edi); /* 0x1704EE6F: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704EE71: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE7D; /* 0x1704EE73: je 0x1704ee7d */
L_1704EE75:
    ecx = MEM32(eax); /* 0x1704EE75: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE77: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE78: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704EE7B: mov dword ptr [edi], ebx */
L_1704EE7D:
    edi = esi + 0x248; /* 0x1704EE7D: lea edi, [esi + 0x248] */
    eax = MEM32(edi); /* 0x1704EE83: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704EE85: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704EE91; /* 0x1704EE87: je 0x1704ee91 */
L_1704EE89:
    ecx = MEM32(eax); /* 0x1704EE89: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EE8B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704EE8C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704EE8F: mov dword ptr [edi], ebx */
L_1704EE91:
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x1704EE91: push dword ptr [esi + 0x250] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EE97: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x1704EE9C: push dword ptr [esi + 0x254] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EEA2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x1704EEA7: push dword ptr [esi + 0x258] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EEAD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1704EEB2: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EEB8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x244)); /* 0x1704EEBD: push dword ptr [esi + 0x244] */
    RECOMP_CALL(sub_1721B010); /* 0x1704EEC3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1704EEC8: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1704EECB: pop edi */
    esi = POP32_VAL(esp); /* 0x1704EECC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704EECD: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704EECE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704EED4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EED4u);

L_1704EED4:
    edi = edi; /* 0x1704EED4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EED6: push ebp */
    ebp = esp; /* 0x1704EED7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704EED9: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x270); /* 0x1704EEDC: mov ecx, dword ptr [eax + 0x270] */
    /* test ecx, ecx */ /* 0x1704EEE2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704EEEE; /* 0x1704EEE4: je 0x1704eeee */
L_1704EEE6:
    eax = MEM32(ecx); /* 0x1704EEE6: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1704EEE8: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1704EEE9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_1704EEF7; /* 0x1704EEEC: jmp 0x1704eef7 */
L_1704EEEE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x26Cu; /* 0x1704EEEE: add eax, 0x26c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1704EEF3: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(eax); /* 0x1704EEF5: mov eax, dword ptr [eax] */
L_1704EEF7:
    ebp = POP32_VAL(esp); /* 0x1704EEF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704EEF8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704EF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EF00u);

L_1704EF00:
    edi = edi; /* 0x1704EF00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EF02: push ebp */
    ebp = esp; /* 0x1704EF03: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1704EF05: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1704EF06: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1704EF09: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704EF14; /* 0x1704EF0B: jne 0x1704ef14 */
L_1704EF0D:
    eax = 0x8876086Cu; /* 0x1704EF0D: mov eax, 0x8876086c */
    goto L_1704EF2D; /* 0x1704EF12: jmp 0x1704ef2d */
L_1704EF14:
    PUSH32(esp, esi); /* 0x1704EF14: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704EF15: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x230u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x230u; /* 0x1704EF18: add esi, 0x230 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1704EF1E: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x1704EF20: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704EF22: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1704EF23: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1704EF26: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1704EF28: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704EF2A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704EF2C: pop esi */
L_1704EF2D:
    edi = POP32_VAL(esp); /* 0x1704EF2D: pop edi */
    ebp = POP32_VAL(esp); /* 0x1704EF2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704EF2F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704EF37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EF37u);

L_1704EF37:
    edi = edi; /* 0x1704EF37: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EF39: push ebp */
    ebp = esp; /* 0x1704EF3A: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1704EF3C: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1704EF3F: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x234); /* 0x1704EF42: mov eax, dword ptr [eax + 0x234] */
    ecx = MEM32(eax); /* 0x1704EF48: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)((edx | 0x800u)); _flag_b = (uint32_t)((edx | 0x800u));
    edx = edx | 0x800u; /* 0x1704EF4A: or edx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1704EF50: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704EF51: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1704EF54: push 0 */
    PUSH32(esp, 0); /* 0x1704EF56: push 0 */
    PUSH32(esp, eax); /* 0x1704EF58: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1704EF59: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704EF5C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704EF5D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704EF65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EF65u);

L_1704EF65:
    edi = edi; /* 0x1704EF65: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EF67: push ebp */
    ebp = esp; /* 0x1704EF68: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1704EF6A: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1704EF6D: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x248); /* 0x1704EF70: mov eax, dword ptr [eax + 0x248] */
    ecx = MEM32(eax); /* 0x1704EF76: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)((edx | 0x800u)); _flag_b = (uint32_t)((edx | 0x800u));
    edx = edx | 0x800u; /* 0x1704EF78: or edx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1704EF7E: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704EF7F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x1704EF82: push 0 */
    PUSH32(esp, 0); /* 0x1704EF84: push 0 */
    PUSH32(esp, eax); /* 0x1704EF86: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1704EF87: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704EF8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704EF8B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704EF93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EF93u);

L_1704EF93:
    edi = edi; /* 0x1704EF93: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EF95: push ebp */
    ebp = esp; /* 0x1704EF96: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704EF98: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x264); /* 0x1704EF9B: mov eax, dword ptr [eax + 0x264] */
    ebp = POP32_VAL(esp); /* 0x1704EFA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704EFA2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704EFAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EFAAu);

L_1704EFAA:
    edi = edi; /* 0x1704EFAA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EFAC: push ebp */
    ebp = esp; /* 0x1704EFAD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704EFAF: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x23C); /* 0x1704EFB2: mov eax, dword ptr [eax + 0x23c] */
    ebp = POP32_VAL(esp); /* 0x1704EFB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704EFB9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704EFC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EFC1u);

L_1704EFC1:
    edi = edi; /* 0x1704EFC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EFC3: push ebp */
    ebp = esp; /* 0x1704EFC4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704EFC6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1704EFC9: mov eax, dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x1704EFCC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704EFCD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704EFD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EFD5u);

L_1704EFD5:
    edi = edi; /* 0x1704EFD5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EFD7: push ebp */
    ebp = esp; /* 0x1704EFD8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704EFDA: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x238); /* 0x1704EFDD: mov eax, dword ptr [eax + 0x238] */
    ebp = POP32_VAL(esp); /* 0x1704EFE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704EFE4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704EFEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704EFECu);

L_1704EFEC:
    edi = edi; /* 0x1704EFEC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704EFEE: push ebp */
    ebp = esp; /* 0x1704EFEF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704EFF1: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x214); /* 0x1704EFF4: mov eax, dword ptr [eax + 0x214] */
    ebp = POP32_VAL(esp); /* 0x1704EFFA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704EFFB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704F003(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F003u);

L_1704F003:
    edi = edi; /* 0x1704F003: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F005: push ebp */
    ebp = esp; /* 0x1704F006: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1704F008: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1704F00B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704F016; /* 0x1704F00D: jne 0x1704f016 */
L_1704F00F:
    eax = 0x8876086Cu; /* 0x1704F00F: mov eax, 0x8876086c */
    goto L_1704F02C; /* 0x1704F014: jmp 0x1704f02c */
L_1704F016:
    eax = MEM32(ebp + 0x8); /* 0x1704F016: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x234u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x234u; /* 0x1704F019: add eax, 0x234 */
    _flag_k = FK_ADD;
    edx = MEM32(eax); /* 0x1704F01E: mov edx, dword ptr [eax] */
    MEM32(ecx) = edx; /* 0x1704F020: mov dword ptr [ecx], edx */
    eax = MEM32(eax); /* 0x1704F022: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1704F024: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F026: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1704F027: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F02A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704F02C:
    ebp = POP32_VAL(esp); /* 0x1704F02C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704F02D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704F035(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F035u);

L_1704F035:
    edi = edi; /* 0x1704F035: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F037: push ebp */
    ebp = esp; /* 0x1704F038: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1704F03A: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1704F03D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1704F03F: mov eax, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F04C; /* 0x1704F042: je 0x1704f04c */
L_1704F044:
    edx = MEM32(eax + 0x260); /* 0x1704F044: mov edx, dword ptr [eax + 0x260] */
    MEM32(ecx) = edx; /* 0x1704F04A: mov dword ptr [ecx], edx */
L_1704F04C:
    PUSH32(esp, edi); /* 0x1704F04C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1704F04D: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1704F050: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F07A; /* 0x1704F052: je 0x1704f07a */
L_1704F054:
    PUSH32(esp, esi); /* 0x1704F054: push esi */
    esi = MEM32(eax + 0x25C); /* 0x1704F055: mov esi, dword ptr [eax + 0x25c] */
    /* test esi, esi */ /* 0x1704F05B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F079; /* 0x1704F05D: je 0x1704f079 */
L_1704F05F:
    eax = MEM32(eax + 0x260); /* 0x1704F05F: mov eax, dword ptr [eax + 0x260] */
    ecx = eax + eax * 4; /* 0x1704F065: lea ecx, [eax + eax*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704F068: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704F068: shl ecx, 2 */
    eax = ecx; /* 0x1704F06B: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F06D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F06D: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704F070: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704F072: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F074: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704F077: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_1704F079:
    esi = POP32_VAL(esp); /* 0x1704F079: pop esi */
L_1704F07A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F07A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1704F07C: pop edi */
    ebp = POP32_VAL(esp); /* 0x1704F07D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704F07E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704F086(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F086u);

L_1704F086:
    edi = edi; /* 0x1704F086: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F088: push ebp */
    ebp = esp; /* 0x1704F089: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704F08B: push ecx */
    PUSH32(esp, ebx); /* 0x1704F08C: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1704F08D: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1704F090: push esi */
    PUSH32(esp, edi); /* 0x1704F091: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704F092: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1704F094: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1704F096: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F0C3; /* 0x1704F099: jne 0x1704f0c3 */
L_1704F09B:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1704F09B: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F0AC; /* 0x1704F09E: je 0x1704f0ac */
L_1704F0A0:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1704F0A0: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_1704F13D; /* 0x1704F0A7: jmp 0x1704f13d */
L_1704F0AC:
    esi = MEM32(ebp + 0x8); /* 0x1704F0AC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1704F0AF: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F0B5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704F0BA: pop ecx */
    MEM32(esi + 0x260) = edi; /* 0x1704F0BB: mov dword ptr [esi + 0x260], edi */
    goto L_1704F13D; /* 0x1704F0C1: jmp 0x1704f13d */
L_1704F0C3:
    eax = MEM32(ebp + 0x8); /* 0x1704F0C3: mov eax, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(eax + 0x260) */ /* 0x1704F0C6: cmp ebx, dword ptr [eax + 0x260] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x260));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704F0F3; /* 0x1704F0CC: jae 0x1704f0f3 */
L_1704F0CE:
    edi = MEM32(eax + 0x25C); /* 0x1704F0CE: mov edi, dword ptr [eax + 0x25c] */
    esi = MEM32(ebp + 0xC); /* 0x1704F0D4: mov esi, dword ptr [ebp + 0xc] */
    ecx = ebx + ebx * 4; /* 0x1704F0D7: lea ecx, [ebx + ebx*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704F0DA: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704F0DA: shl ecx, 2 */
    edx = ecx; /* 0x1704F0DD: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F0DF: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F0DF: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704F0E2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1704F0E4: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F0E6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704F0E9: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(eax + 0x260) = ebx; /* 0x1704F0EB: mov dword ptr [eax + 0x260], ebx */
    goto L_1704F13D; /* 0x1704F0F1: jmp 0x1704f13d */
L_1704F0F3:
    PUSH32(esp, MEM32(eax + 0x25C)); /* 0x1704F0F3: push dword ptr [eax + 0x25c] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F0F9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    esi = ebx + ebx * 4; /* 0x1704F0FE: lea esi, [ebx + ebx*4] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1704F101: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1704F101: shl esi, 2 */
    PUSH32(esp, esi); /* 0x1704F104: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704F105: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1704F10A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x1704F10C: mov edx, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1704F10F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1704F110: pop ecx */
    MEM32(edx + 0x25C) = eax; /* 0x1704F111: mov dword ptr [edx + 0x25c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F122; /* 0x1704F117: jne 0x1704f122 */
L_1704F119:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1704F119: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1704F13D; /* 0x1704F120: jmp 0x1704f13d */
L_1704F122:
    ecx = esi; /* 0x1704F122: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x1704F124: mov esi, dword ptr [ebp + 0xc] */
    edi = eax; /* 0x1704F127: mov edi, eax */
    eax = ecx; /* 0x1704F129: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F12B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F12B: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704F12E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704F130: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F132: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704F135: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM32(edx + 0x260) = ebx; /* 0x1704F137: mov dword ptr [edx + 0x260], ebx */
L_1704F13D:
    eax = MEM32(ebp + (-0x4)); /* 0x1704F13D: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704F140: pop edi */
    esi = POP32_VAL(esp); /* 0x1704F141: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704F142: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704F143: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704F144: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704F14C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F14Cu);

L_1704F14C:
    edi = edi; /* 0x1704F14C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F14E: push ebp */
    ebp = esp; /* 0x1704F14F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1704F151: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704F154: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F155: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704F157: push edi */
    edi = ecx; /* 0x1704F158: mov edi, ecx */
    /* cmp MEM32(edi + 0x264), ebx */ /* 0x1704F15A: cmp dword ptr [edi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = edi; /* 0x1704F160: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1704F163: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1704F166: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704F169: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F184; /* 0x1704F16C: jne 0x1704f184 */
L_1704F16E:
    eax = MEM32(ebp + 0xC); /* 0x1704F16E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ebx; /* 0x1704F171: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0x8); /* 0x1704F173: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x1704F176: mov dword ptr [eax], ebx */
    MEM32(ebp + (-0x14)) = 0x80004005u; /* 0x1704F178: mov dword ptr [ebp - 0x14], 0x80004005 */
    goto L_1704F286; /* 0x1704F17F: jmp 0x1704f286 */
L_1704F184:
    PUSH32(esp, esi); /* 0x1704F184: push esi */
    PUSH32(esp, 0x28u); /* 0x1704F185: push 0x28 */
    MEM32(ebp + (-0x20)) = 0xAu; /* 0x1704F187: mov dword ptr [ebp - 0x20], 0xa */
    RECOMP_CALL(sub_1721B01C); /* 0x1704F18E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704F193: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1704F195: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1704F197: pop ecx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1704F198: mov dword ptr [ebp - 0xc], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F1A9; /* 0x1704F19B: jne 0x1704f1a9 */
L_1704F19D:
    MEM32(ebp + (-0x14)) = 0x8007000Eu; /* 0x1704F19D: mov dword ptr [ebp - 0x14], 0x8007000e */
    goto L_1704F285; /* 0x1704F1A4: jmp 0x1704f285 */
L_1704F1A9:
    /* cmp MEM32(edi + 0x264), ebx */ /* 0x1704F1A9: cmp dword ptr [edi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1704F1AF: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1704F1B2: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704F275; /* 0x1704F1B5: jbe 0x1704f275 */
L_1704F1BB:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1704F1BB: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1704F1BE: mov dword ptr [ebp - 0x18], ebx */
L_1704F1C1:
    eax = MEM32(edi + 0x24C); /* 0x1704F1C1: mov eax, dword ptr [edi + 0x24c] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1704F1C7: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp MEM16(ecx + eax), 0xFFFFu */ /* 0x1704F1CA: cmp word ptr [ecx + eax], 0xffff */
    _flag_a = (uint32_t)(MEM16(ecx + eax)) << 16; _flag_b = (uint32_t)(0xFFFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F25F; /* 0x1704F1D0: je 0x1704f25f */
L_1704F1D6:
    eax = MEM32(edi + 0x254); /* 0x1704F1D6: mov eax, dword ptr [edi + 0x254] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1704F1DC: mov ecx, dword ptr [ebp - 0x10] */
    ebx = MEM32(eax + ecx * 4); /* 0x1704F1DF: mov ebx, dword ptr [eax + ecx*4] */
    /* cmp ebx, MEM32(ebp + (-0x1C)) */ /* 0x1704F1E2: cmp ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F1ED; /* 0x1704F1E5: jne 0x1704f1ed */
L_1704F1E7:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1704F1E7: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F25D; /* 0x1704F1EB: jne 0x1704f25d */
L_1704F1ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F1ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1704F1EF: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1704F1F2: mov dword ptr [ebp - 0x1c], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704F202; /* 0x1704F1F5: jbe 0x1704f202 */
L_1704F1F7:
    /* cmp MEM32(esi + eax * 4), ebx */ /* 0x1704F1F7: cmp dword ptr [esi + eax*4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F202; /* 0x1704F1FA: je 0x1704f202 */
L_1704F1FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704F1FC: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1704F1FD: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F1F7; /* 0x1704F200: jb 0x1704f1f7 */
L_1704F202:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1704F202: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F25D; /* 0x1704F205: jne 0x1704f25d */
L_1704F207:
    eax = MEM32(ebp + (-0x20)); /* 0x1704F207: mov eax, dword ptr [ebp - 0x20] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1704F20A: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F250; /* 0x1704F20D: jne 0x1704f250 */
L_1704F20F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1704F20F: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1704F211: mov dword ptr [ebp - 0x20], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704F214: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704F214: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704F217: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704F218: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704F21D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704F21F: pop ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1704F220: mov dword ptr [ebp - 0x24], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F19D; /* 0x1704F223: je 0x1704f19d */
L_1704F229:
    ecx = MEM32(ebp + (-0x4)); /* 0x1704F229: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704F22C: push dword ptr [ebp - 0xc] */
    edi = eax; /* 0x1704F22F: mov edi, eax */
    eax = ecx; /* 0x1704F231: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F233: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F233: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704F236: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704F238: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F23A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704F23D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F23F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1704F244: mov eax, dword ptr [ebp - 0x24] */
    edi = MEM32(ebp + (-0x28)); /* 0x1704F247: mov edi, dword ptr [ebp - 0x28] */
    ecx = POP32_VAL(esp); /* 0x1704F24A: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1704F24B: mov dword ptr [ebp - 0xc], eax */
    esi = eax; /* 0x1704F24E: mov esi, eax */
L_1704F250:
    eax = MEM32(ebp + (-0x4)); /* 0x1704F250: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1704F253: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x1704F256: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    MEM32(eax + esi) = ebx; /* 0x1704F25A: mov dword ptr [eax + esi], ebx */
L_1704F25D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F25D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704F25F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1704F25F: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1704F262: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 6; /* 0x1704F265: add dword ptr [ebp - 0x18], 6 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0x264) */ /* 0x1704F269: cmp eax, dword ptr [edi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F1C1; /* 0x1704F26F: jb 0x1704f1c1 */
L_1704F275:
    eax = MEM32(ebp + 0x8); /* 0x1704F275: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1704F278: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = esi; /* 0x1704F27B: mov dword ptr [eax], esi */
    eax = MEM32(ebp + 0xC); /* 0x1704F27D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1704F280: mov dword ptr [eax], ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704F282: mov dword ptr [ebp - 0xc], ebx */
L_1704F285:
    esi = POP32_VAL(esp); /* 0x1704F285: pop esi */
L_1704F286:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704F286: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F289: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1704F28E: mov eax, dword ptr [ebp - 0x14] */
    ecx = POP32_VAL(esp); /* 0x1704F291: pop ecx */
    edi = POP32_VAL(esp); /* 0x1704F292: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704F293: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704F294: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704F295: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704F29D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F29Du);

L_1704F29D:
    edi = edi; /* 0x1704F29D: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704F29F: push ebx */
    PUSH32(esp, esi); /* 0x1704F2A0: push esi */
    esi = ecx; /* 0x1704F2A1: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x1704F2A3: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F2A6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1704F2A8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1704F2AA: push edi */
    MEM32(esi) = 0x17005A18u; /* 0x1704F2AB: mov dword ptr [esi], 0x17005a18 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F2BC; /* 0x1704F2B1: je 0x1704f2bc */
L_1704F2B3:
    ecx = MEM32(eax); /* 0x1704F2B3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F2B5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F2B6: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = ebx; /* 0x1704F2B9: mov dword ptr [esi + 8], ebx */
L_1704F2BC:
    edi = esi + 0x22C; /* 0x1704F2BC: lea edi, [esi + 0x22c] */
    eax = MEM32(edi); /* 0x1704F2C2: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704F2C4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F2D0; /* 0x1704F2C6: je 0x1704f2d0 */
L_1704F2C8:
    ecx = MEM32(eax); /* 0x1704F2C8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F2CA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F2CB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704F2CE: mov dword ptr [edi], ebx */
L_1704F2D0:
    edi = esi + 0x230; /* 0x1704F2D0: lea edi, [esi + 0x230] */
    eax = MEM32(edi); /* 0x1704F2D6: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704F2D8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F2E4; /* 0x1704F2DA: je 0x1704f2e4 */
L_1704F2DC:
    ecx = MEM32(eax); /* 0x1704F2DC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F2DE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F2DF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704F2E2: mov dword ptr [edi], ebx */
L_1704F2E4:
    edi = esi + 0x234; /* 0x1704F2E4: lea edi, [esi + 0x234] */
    eax = MEM32(edi); /* 0x1704F2EA: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704F2EC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F2F8; /* 0x1704F2EE: je 0x1704f2f8 */
L_1704F2F0:
    ecx = MEM32(eax); /* 0x1704F2F0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F2F2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F2F3: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704F2F6: mov dword ptr [edi], ebx */
L_1704F2F8:
    edi = esi + 0x248; /* 0x1704F2F8: lea edi, [esi + 0x248] */
    eax = MEM32(edi); /* 0x1704F2FE: mov eax, dword ptr [edi] */
    /* cmp eax, ebx */ /* 0x1704F300: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F30C; /* 0x1704F302: je 0x1704f30c */
L_1704F304:
    ecx = MEM32(eax); /* 0x1704F304: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F306: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F307: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = ebx; /* 0x1704F30A: mov dword ptr [edi], ebx */
L_1704F30C:
    PUSH32(esp, MEM32(esi + 0x250)); /* 0x1704F30C: push dword ptr [esi + 0x250] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F312: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x254)); /* 0x1704F317: push dword ptr [esi + 0x254] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F31D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x258)); /* 0x1704F322: push dword ptr [esi + 0x258] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F328: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x25C)); /* 0x1704F32D: push dword ptr [esi + 0x25c] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F333: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x244)); /* 0x1704F338: push dword ptr [esi + 0x244] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F33E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1704F343: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1704F346: pop edi */
    esi = POP32_VAL(esp); /* 0x1704F347: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704F348: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1704F349: ret  */
    RECOMP_REGS_OUT();
}

void sub_1704F34F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F34Fu);

L_1704F34F:
    edi = edi; /* 0x1704F34F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F351: push ebp */
    ebp = esp; /* 0x1704F352: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704F354: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x234); /* 0x1704F357: mov eax, dword ptr [eax + 0x234] */
    ecx = MEM32(eax); /* 0x1704F35D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F35F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1704F360: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704F363: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704F364: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704F36C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F36Cu);

L_1704F36C:
    edi = edi; /* 0x1704F36C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F36E: push ebp */
    ebp = esp; /* 0x1704F36F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704F371: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x248); /* 0x1704F374: mov eax, dword ptr [eax + 0x248] */
    ecx = MEM32(eax); /* 0x1704F37A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F37C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1704F37D: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704F380: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704F381: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704F389(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F389u);

L_1704F389:
    edi = edi; /* 0x1704F389: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F38B: push ebp */
    ebp = esp; /* 0x1704F38C: mov ebp, esp */
    /* test MEM8(ebp + 0xC), 0x10u */ /* 0x1704F38E: test byte ptr [ebp + 0xc], 0x10 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1704F392: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704F393: mov esi, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704F3B9; /* 0x1704F396: jne 0x1704f3b9 */
L_1704F398:
    PUSH32(esp, edi); /* 0x1704F398: push edi */
    edi = esi + 0x25C; /* 0x1704F399: lea edi, [esi + 0x25c] */
    PUSH32(esp, MEM32(edi)); /* 0x1704F39F: push dword ptr [edi] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F3A1: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1704F3A6: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x260)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x260) = MEM32(esi + 0x260) & 0; /* 0x1704F3A9: and dword ptr [esi + 0x260], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x218)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(esi + 0x218) = MEM32(esi + 0x218) & 0xFFFFFFEFu; /* 0x1704F3B0: and dword ptr [esi + 0x218], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704F3B7: pop ecx */
    edi = POP32_VAL(esp); /* 0x1704F3B8: pop edi */
L_1704F3B9:
    eax = MEM32(esi + 0x254); /* 0x1704F3B9: mov eax, dword ptr [esi + 0x254] */
    ecx = MEM32(ebp + 0x10); /* 0x1704F3BF: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x1704F3C2: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F3C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1704F3C6: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704F3C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704F3C8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704F3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F3D0u);

L_1704F3D0:
    edi = edi; /* 0x1704F3D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F3D2: push ebp */
    ebp = esp; /* 0x1704F3D3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1704F3D5: mov edx, dword ptr [ebp + 8] */
    eax = edx + 0x270; /* 0x1704F3D8: lea eax, [edx + 0x270] */
    /* cmp MEM32(eax), 0 */ /* 0x1704F3DE: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F3F2; /* 0x1704F3E1: je 0x1704f3f2 */
L_1704F3E3:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704F3E3: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x1704F3E6: mov eax, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704F3E8: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1704F3EB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F3ED: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1704F3EE: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_1704F442; /* 0x1704F3F0: jmp 0x1704f442 */
L_1704F3F2:
    eax = MEM32(ebp + 0x10); /* 0x1704F3F2: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1704F3F5: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704F3F8: push ebx */
    PUSH32(esp, esi); /* 0x1704F3F9: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1704F3FA: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1704F3FD: push edi */
    PUSH32(esp, 4); /* 0x1704F3FE: push 4 */
    ecx = POP32_VAL(esp); /* 0x1704F400: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1704F401: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F406: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1704F408: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1704F42E; /* 0x1704F40A: je 0x1704f42e */
L_1704F40C:
    esi = MEM32(ebp + 0xC); /* 0x1704F40C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1704F40F: push 4 */
    ecx = POP32_VAL(esp); /* 0x1704F411: pop ecx */
    edi = 0x17001BD0u; /* 0x1704F412: mov edi, 0x17001bd0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F417: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1704F419: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1704F42E; /* 0x1704F41B: je 0x1704f42e */
L_1704F41D:
    esi = MEM32(ebp + 0xC); /* 0x1704F41D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1704F420: push 4 */
    ecx = POP32_VAL(esp); /* 0x1704F422: pop ecx */
    edi = 0x17001BC0u; /* 0x1704F423: mov edi, 0x17001bc0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F428: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1704F42A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1704F43A; /* 0x1704F42C: jne 0x1704f43a */
L_1704F42E:
    MEM32(eax) = edx; /* 0x1704F42E: mov dword ptr [eax], edx */
    eax = MEM32(edx); /* 0x1704F430: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1704F432: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1704F433: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F436: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704F43F; /* 0x1704F438: jmp 0x1704f43f */
L_1704F43A:
    eax = 0x80004002u; /* 0x1704F43A: mov eax, 0x80004002 */
L_1704F43F:
    edi = POP32_VAL(esp); /* 0x1704F43F: pop edi */
    esi = POP32_VAL(esp); /* 0x1704F440: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704F441: pop ebx */
L_1704F442:
    ebp = POP32_VAL(esp); /* 0x1704F442: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704F443: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704F44B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F44Bu);

L_1704F44B:
    edi = edi; /* 0x1704F44B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F44D: push ebp */
    ebp = esp; /* 0x1704F44E: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1704F450: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F45D; /* 0x1704F454: jne 0x1704f45d */
L_1704F456:
    eax = 0x8876086Cu; /* 0x1704F456: mov eax, 0x8876086c */
    goto L_1704F46E; /* 0x1704F45B: jmp 0x1704f46e */
L_1704F45D:
    eax = MEM32(ebp + 0x8); /* 0x1704F45D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1704F460: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1704F463: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704F464: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1704EC19); /* 0x1704F467: call 0x1704ec19 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F46C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704F46E:
    ebp = POP32_VAL(esp); /* 0x1704F46E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704F46F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704F477(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F477u);

L_1704F477:
    edi = edi; /* 0x1704F477: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F479: push ebp */
    ebp = esp; /* 0x1704F47A: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1704F47C: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1704F47F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704F48A; /* 0x1704F481: jne 0x1704f48a */
L_1704F483:
    eax = 0x8876086Cu; /* 0x1704F483: mov eax, 0x8876086c */
    goto L_1704F4A0; /* 0x1704F488: jmp 0x1704f4a0 */
L_1704F48A:
    eax = MEM32(ebp + 0x8); /* 0x1704F48A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x248u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x248u; /* 0x1704F48D: add eax, 0x248 */
    _flag_k = FK_ADD;
    edx = MEM32(eax); /* 0x1704F492: mov edx, dword ptr [eax] */
    MEM32(ecx) = edx; /* 0x1704F494: mov dword ptr [ecx], edx */
    eax = MEM32(eax); /* 0x1704F496: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1704F498: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F49A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1704F49B: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F49E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704F4A0:
    ebp = POP32_VAL(esp); /* 0x1704F4A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704F4A1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704F4A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F4A9u);

L_1704F4A9:
    edi = edi; /* 0x1704F4A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F4AB: push ebp */
    ebp = esp; /* 0x1704F4AC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1704F4AE: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1704F4AF: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1704F4B2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704F4B3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704F4B5: push edi */
    PUSH32(esp, ebx); /* 0x1704F4B6: push ebx */
    RECOMP_CALL(sub_1704E9F0); /* 0x1704F4B7: call 0x1704e9f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704F4BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704F4C7; /* 0x1704F4BE: jne 0x1704f4c7 */
L_1704F4C0:
    eax = 0x8876086Cu; /* 0x1704F4C0: mov eax, 0x8876086c */
    goto L_1704F530; /* 0x1704F4C5: jmp 0x1704f530 */
L_1704F4C7:
    PUSH32(esp, esi); /* 0x1704F4C7: push esi */
    PUSH32(esp, edi); /* 0x1704F4C8: push edi */
    PUSH32(esp, ebx); /* 0x1704F4C9: push ebx */
    RECOMP_CALL(sub_1704E494); /* 0x1704F4CA: call 0x1704e494 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1704F4CF: mov esi, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x238) */ /* 0x1704F4D2: cmp eax, dword ptr [esi + 0x238] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x238));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F4E1; /* 0x1704F4D8: je 0x1704f4e1 */
L_1704F4DA:
    eax = 0x8876086Cu; /* 0x1704F4DA: mov eax, 0x8876086c */
    goto L_1704F52F; /* 0x1704F4DF: jmp 0x1704f52f */
L_1704F4E1:
    PUSH32(esp, 1); /* 0x1704F4E1: push 1 */
    RECOMP_CALL(sub_1702BB20); /* 0x1704F4E3: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x230); /* 0x1704F4E8: mov eax, dword ptr [esi + 0x230] */
    ecx = MEM32(eax); /* 0x1704F4EE: mov ecx, dword ptr [eax] */
    edx = ebp + 0xC; /* 0x1704F4F0: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x1704F4F3: push edx */
    PUSH32(esp, ebx); /* 0x1704F4F4: push ebx */
    PUSH32(esp, eax); /* 0x1704F4F5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x158)); /* 0x1704F4F6: call dword ptr [ecx + 0x158] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1704F4FC: push edi */
    MEM32(ebp + 0x8) = eax; /* 0x1704F4FD: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1702BB20); /* 0x1704F500: call 0x1702bb20 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1704F505: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1704F50D; /* 0x1704F508: jge 0x1704f50d */
L_1704F50A:
    MEM32(ebp + 0xC) = edi; /* 0x1704F50A: mov dword ptr [ebp + 0xc], edi */
L_1704F50D:
    PUSH32(esp, ebx); /* 0x1704F50D: push ebx */
    eax = esi + 0xC; /* 0x1704F50E: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x1704F511: push eax */
    RECOMP_CALL(sub_1704EC19); /* 0x1704F512: call 0x1704ec19 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x1704F517: mov eax, dword ptr [esi + 8] */
    /* cmp eax, edi */ /* 0x1704F51A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F527; /* 0x1704F51C: je 0x1704f527 */
L_1704F51E:
    ecx = MEM32(eax); /* 0x1704F51E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704F520: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704F521: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = edi; /* 0x1704F524: mov dword ptr [esi + 8], edi */
L_1704F527:
    eax = MEM32(ebp + 0xC); /* 0x1704F527: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x8) = eax; /* 0x1704F52A: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F52D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704F52F:
    esi = POP32_VAL(esp); /* 0x1704F52F: pop esi */
L_1704F530:
    edi = POP32_VAL(esp); /* 0x1704F530: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704F531: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1704F532: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704F533: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704F53B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F53Bu);

L_1704F53B:
    edi = edi; /* 0x1704F53B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F53D: push ebp */
    ebp = esp; /* 0x1704F53E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1704F540: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704F543: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F544: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704F546: push edi */
    edi = ecx; /* 0x1704F547: mov edi, ecx */
    /* cmp MEM32(edi + 0x264), ebx */ /* 0x1704F549: cmp dword ptr [edi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = edi; /* 0x1704F54F: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1704F552: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1704F555: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704F558: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F573; /* 0x1704F55B: jne 0x1704f573 */
L_1704F55D:
    eax = MEM32(ebp + 0xC); /* 0x1704F55D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ebx; /* 0x1704F560: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + 0x8); /* 0x1704F562: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ebx; /* 0x1704F565: mov dword ptr [eax], ebx */
    MEM32(ebp + (-0x14)) = 0x80004005u; /* 0x1704F567: mov dword ptr [ebp - 0x14], 0x80004005 */
    goto L_1704F673; /* 0x1704F56E: jmp 0x1704f673 */
L_1704F573:
    PUSH32(esp, esi); /* 0x1704F573: push esi */
    PUSH32(esp, 0x28u); /* 0x1704F574: push 0x28 */
    MEM32(ebp + (-0x20)) = 0xAu; /* 0x1704F576: mov dword ptr [ebp - 0x20], 0xa */
    RECOMP_CALL(sub_1721B01C); /* 0x1704F57D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704F582: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1704F584: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1704F586: pop ecx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1704F587: mov dword ptr [ebp - 0xc], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F598; /* 0x1704F58A: jne 0x1704f598 */
L_1704F58C:
    MEM32(ebp + (-0x14)) = 0x8007000Eu; /* 0x1704F58C: mov dword ptr [ebp - 0x14], 0x8007000e */
    goto L_1704F672; /* 0x1704F593: jmp 0x1704f672 */
L_1704F598:
    /* cmp MEM32(edi + 0x264), ebx */ /* 0x1704F598: cmp dword ptr [edi + 0x264], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x264)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1704F59E: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1704F5A1: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704F662; /* 0x1704F5A4: jbe 0x1704f662 */
L_1704F5AA:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1704F5AA: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1704F5AD: mov dword ptr [ebp - 0x18], ebx */
L_1704F5B0:
    eax = MEM32(edi + 0x24C); /* 0x1704F5B0: mov eax, dword ptr [edi + 0x24c] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1704F5B6: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp MEM32(ecx + eax), 0xFFFFFFFFu */ /* 0x1704F5B9: cmp dword ptr [ecx + eax], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F64C; /* 0x1704F5BD: je 0x1704f64c */
L_1704F5C3:
    eax = MEM32(edi + 0x254); /* 0x1704F5C3: mov eax, dword ptr [edi + 0x254] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1704F5C9: mov ecx, dword ptr [ebp - 0x10] */
    ebx = MEM32(eax + ecx * 4); /* 0x1704F5CC: mov ebx, dword ptr [eax + ecx*4] */
    /* cmp ebx, MEM32(ebp + (-0x1C)) */ /* 0x1704F5CF: cmp ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F5DA; /* 0x1704F5D2: jne 0x1704f5da */
L_1704F5D4:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1704F5D4: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F64A; /* 0x1704F5D8: jne 0x1704f64a */
L_1704F5DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F5DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1704F5DC: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1704F5DF: mov dword ptr [ebp - 0x1c], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704F5EF; /* 0x1704F5E2: jbe 0x1704f5ef */
L_1704F5E4:
    /* cmp MEM32(esi + eax * 4), ebx */ /* 0x1704F5E4: cmp dword ptr [esi + eax*4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + eax * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F5EF; /* 0x1704F5E7: je 0x1704f5ef */
L_1704F5E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704F5E9: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1704F5EA: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F5E4; /* 0x1704F5ED: jb 0x1704f5e4 */
L_1704F5EF:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1704F5EF: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F64A; /* 0x1704F5F2: jne 0x1704f64a */
L_1704F5F4:
    eax = MEM32(ebp + (-0x20)); /* 0x1704F5F4: mov eax, dword ptr [ebp - 0x20] */
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1704F5F7: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F63D; /* 0x1704F5FA: jne 0x1704f63d */
L_1704F5FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1704F5FC: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1704F5FE: mov dword ptr [ebp - 0x20], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1704F601: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1704F601: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1704F604: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704F605: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704F60A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704F60C: pop ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1704F60D: mov dword ptr [ebp - 0x24], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F58C; /* 0x1704F610: je 0x1704f58c */
L_1704F616:
    ecx = MEM32(ebp + (-0x4)); /* 0x1704F616: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704F619: push dword ptr [ebp - 0xc] */
    edi = eax; /* 0x1704F61C: mov edi, eax */
    eax = ecx; /* 0x1704F61E: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F620: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F620: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704F623: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1704F625: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F627: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704F62A: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F62C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1704F631: mov eax, dword ptr [ebp - 0x24] */
    edi = MEM32(ebp + (-0x28)); /* 0x1704F634: mov edi, dword ptr [ebp - 0x28] */
    ecx = POP32_VAL(esp); /* 0x1704F637: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1704F638: mov dword ptr [ebp - 0xc], eax */
    esi = eax; /* 0x1704F63B: mov esi, eax */
L_1704F63D:
    eax = MEM32(ebp + (-0x4)); /* 0x1704F63D: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1704F640: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x1704F643: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    MEM32(eax + esi) = ebx; /* 0x1704F647: mov dword ptr [eax + esi], ebx */
L_1704F64A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F64A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704F64C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1704F64C: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1704F64F: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 0xCu; /* 0x1704F652: add dword ptr [ebp - 0x18], 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edi + 0x264) */ /* 0x1704F656: cmp eax, dword ptr [edi + 0x264] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x264));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F5B0; /* 0x1704F65C: jb 0x1704f5b0 */
L_1704F662:
    eax = MEM32(ebp + 0x8); /* 0x1704F662: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1704F665: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = esi; /* 0x1704F668: mov dword ptr [eax], esi */
    eax = MEM32(ebp + 0xC); /* 0x1704F66A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1704F66D: mov dword ptr [eax], ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704F66F: mov dword ptr [ebp - 0xc], ebx */
L_1704F672:
    esi = POP32_VAL(esp); /* 0x1704F672: pop esi */
L_1704F673:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1704F673: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1704F676: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1704F67B: mov eax, dword ptr [ebp - 0x14] */
    ecx = POP32_VAL(esp); /* 0x1704F67E: pop ecx */
    edi = POP32_VAL(esp); /* 0x1704F67F: pop edi */
    ebx = POP32_VAL(esp); /* 0x1704F680: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704F681: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704F682: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704F68A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F68Au);

L_1704F68A:
    edi = edi; /* 0x1704F68A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F68C: push ebp */
    ebp = esp; /* 0x1704F68D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704F68F: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x1704F690: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x10); /* 0x1704F693: mov ecx, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704F696: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704F69A: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1704F69B: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1704F69E: push esi */
    esi = ecx; /* 0x1704F69F: mov esi, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F6A1: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F6A1: shr ecx, 2 */
    PUSH32(esp, edi); /* 0x1704F6A4: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F6A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1704F6A7: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704F6A9: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = esi; /* 0x1704F6AB: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F6AD: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704F6B0: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    esi = MEM32(edx + 0xC); /* 0x1704F6B2: mov esi, dword ptr [edx + 0xc] */
    ecx = MEM32(edx + 0x10); /* 0x1704F6B5: mov ecx, dword ptr [edx + 0x10] */
    eax = MEM32(edx + 0x4); /* 0x1704F6B8: mov eax, dword ptr [edx + 4] */
    edx = MEM32(edx + 0x8); /* 0x1704F6BB: mov edx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1704F6BE: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1704F6C0: add edx, eax */
    _flag_k = FK_ADD;
    edi = edx + edx * 2; /* 0x1704F6C2: lea edi, [edx + edx*2] */
    edx = MEM32(ebp + 0x8); /* 0x1704F6C5: mov edx, dword ptr [ebp + 8] */
    eax = eax + eax * 2; /* 0x1704F6C8: lea eax, [eax + eax*2] */
    edi = edx + edi * 2; /* 0x1704F6CB: lea edi, [edx + edi*2] */
    edx = edx + eax * 2; /* 0x1704F6CE: lea edx, [edx + eax*2] */
    goto L_1704F6E6; /* 0x1704F6D1: jmp 0x1704f6e6 */
L_1704F6D3:
    eax = (uint32_t)MEM16(edx); /* 0x1704F6D3: movzx eax, word ptr [edx] */
    /* cmp eax, esi */ /* 0x1704F6D6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F6EC; /* 0x1704F6D8: jb 0x1704f6ec */
L_1704F6DA:
    /* cmp eax, ecx */ /* 0x1704F6DA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704F6EC; /* 0x1704F6DC: ja 0x1704f6ec */
L_1704F6DE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1704F6DE: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704F6E0: inc edx */
    _flag_k = FK_INC;
    MEM8(eax + ebx) = (uint8_t)(1); /* 0x1704F6E1: mov byte ptr [eax + ebx], 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704F6E5: inc edx */
    _flag_k = FK_INC;
L_1704F6E6:
    /* cmp edx, edi */ /* 0x1704F6E6: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F6D3; /* 0x1704F6E8: jb 0x1704f6d3 */
L_1704F6EA:
    goto L_1704F6F3; /* 0x1704F6EA: jmp 0x1704f6f3 */
L_1704F6EC:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x1704F6EC: mov dword ptr [ebp - 4], 0x80004005 */
L_1704F6F3:
    eax = MEM32(ebp + (-0x4)); /* 0x1704F6F3: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704F6F6: pop edi */
    esi = POP32_VAL(esp); /* 0x1704F6F7: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704F6F8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704F6F9: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704F6FA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704F702(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F702u);

L_1704F702:
    edi = edi; /* 0x1704F702: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F704: push ebp */
    ebp = esp; /* 0x1704F705: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704F707: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x1704F708: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x10); /* 0x1704F70B: mov ecx, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704F70E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704F712: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1704F713: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1704F716: push esi */
    esi = ecx; /* 0x1704F717: mov esi, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F719: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F719: shr ecx, 2 */
    PUSH32(esp, edi); /* 0x1704F71C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F71D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1704F71F: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704F721: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = esi; /* 0x1704F723: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F725: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704F728: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    esi = MEM32(edx + 0xC); /* 0x1704F72A: mov esi, dword ptr [edx + 0xc] */
    ecx = MEM32(edx + 0x10); /* 0x1704F72D: mov ecx, dword ptr [edx + 0x10] */
    eax = MEM32(edx + 0x4); /* 0x1704F730: mov eax, dword ptr [edx + 4] */
    edx = MEM32(edx + 0x8); /* 0x1704F733: mov edx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1704F736: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1704F738: add edx, eax */
    _flag_k = FK_ADD;
    edi = edx + edx * 2; /* 0x1704F73A: lea edi, [edx + edx*2] */
    edx = MEM32(ebp + 0x8); /* 0x1704F73D: mov edx, dword ptr [ebp + 8] */
    eax = eax + eax * 2; /* 0x1704F740: lea eax, [eax + eax*2] */
    edi = edx + edi * 4; /* 0x1704F743: lea edi, [edx + edi*4] */
    edx = edx + eax * 4; /* 0x1704F746: lea edx, [edx + eax*4] */
    goto L_1704F75E; /* 0x1704F749: jmp 0x1704f75e */
L_1704F74B:
    eax = MEM32(edx); /* 0x1704F74B: mov eax, dword ptr [edx] */
    /* cmp eax, esi */ /* 0x1704F74D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F764; /* 0x1704F74F: jb 0x1704f764 */
L_1704F751:
    /* cmp eax, ecx */ /* 0x1704F751: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1704F764; /* 0x1704F753: ja 0x1704f764 */
L_1704F755:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1704F755: sub eax, esi */
    _flag_k = FK_CMP;
    MEM8(eax + ebx) = (uint8_t)(1); /* 0x1704F757: mov byte ptr [eax + ebx], 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1704F75B: add edx, 4 */
    _flag_k = FK_ADD;
L_1704F75E:
    /* cmp edx, edi */ /* 0x1704F75E: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F74B; /* 0x1704F760: jb 0x1704f74b */
L_1704F762:
    goto L_1704F76B; /* 0x1704F762: jmp 0x1704f76b */
L_1704F764:
    MEM32(ebp + (-0x4)) = 0x80004005u; /* 0x1704F764: mov dword ptr [ebp - 4], 0x80004005 */
L_1704F76B:
    eax = MEM32(ebp + (-0x4)); /* 0x1704F76B: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1704F76E: pop edi */
    esi = POP32_VAL(esp); /* 0x1704F76F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704F770: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704F771: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704F772: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704F77A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F77Au);

L_1704F77A:
    edi = edi; /* 0x1704F77A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F77C: push ebp */
    ebp = esp; /* 0x1704F77D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1704F77F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x1704F782: mov ecx, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704F785: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704F785: shl ecx, 2 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1704F788: mov dword ptr [ebp - 0x10], ecx */
    PUSH32(esp, ebx); /* 0x1704F78B: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x1704F78C: mov ebx, dword ptr [ebp + 0x18] */
    edx = ecx; /* 0x1704F78F: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F791: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F791: shr ecx, 2 */
    PUSH32(esp, esi); /* 0x1704F794: push esi */
    PUSH32(esp, edi); /* 0x1704F795: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F796: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1704F798: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704F79A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704F79C: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F79E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704F7A1: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704F7A3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704F7A5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1704F7A7: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ecx; /* 0x1704F7AA: mov dword ptr [ebp + 0x10], ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1704F7AD: mov dword ptr [ebp - 4], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704F86A; /* 0x1704F7B0: jbe 0x1704f86a */
L_1704F7B6:
    edx = MEM32(ebp + 0x8); /* 0x1704F7B6: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x24); /* 0x1704F7B9: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1704F7BC: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + 0x20); /* 0x1704F7BF: mov edx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1704F7C2: sub edx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = eax; /* 0x1704F7C4: mov dword ptr [ebp + 0x18], eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x1704F7C7: mov dword ptr [ebp - 0xc], edx */
L_1704F7CA:
    edx = MEM32(ebp + (-0x8)); /* 0x1704F7CA: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704F7CD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = 3; /* 0x1704F7CF: mov dword ptr [ebp + 8], 3 */
L_1704F7D6:
    eax = (uint32_t)MEM16(edx); /* 0x1704F7D6: movzx eax, word ptr [edx] */
    eax = ebx + eax * 4; /* 0x1704F7D9: lea eax, [ebx + eax*4] */
    /* cmp MEM32(eax), 0 */ /* 0x1704F7DC: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F7E8; /* 0x1704F7DF: jne 0x1704f7e8 */
L_1704F7E1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704F7E1: inc edi */
    _flag_k = FK_INC;
    MEM32(eax) = 1; /* 0x1704F7E2: mov dword ptr [eax], 1 */
L_1704F7E8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704F7E8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704F7E9: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x1704F7EA: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704F7D6; /* 0x1704F7ED: jne 0x1704f7d6 */
L_1704F7EF:
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x1704F7EF: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F7FC; /* 0x1704F7F2: je 0x1704f7fc */
L_1704F7F4:
    eax = edi + esi; /* 0x1704F7F4: lea eax, [edi + esi] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1704F7F7: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704F838; /* 0x1704F7FA: jbe 0x1704f838 */
L_1704F7FC:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1704F7FC: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F80B; /* 0x1704F800: je 0x1704f80b */
L_1704F802:
    eax = MEM32(ebp + (-0xC)); /* 0x1704F802: mov eax, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + 0x18); /* 0x1704F805: mov edx, dword ptr [ebp + 0x18] */
    MEM32(eax + edx) = ecx; /* 0x1704F808: mov dword ptr [eax + edx], ecx */
L_1704F80B:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x1704F80B: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F816; /* 0x1704F80F: je 0x1704f816 */
L_1704F811:
    eax = MEM32(ebp + 0x18); /* 0x1704F811: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x1704F814: mov dword ptr [eax], esi */
L_1704F816:
    ecx = MEM32(ebp + (-0x10)); /* 0x1704F816: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4; /* 0x1704F819: add dword ptr [ebp + 0x18], 4 */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1704F81D: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F81F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F81F: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F822: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1704F824: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704F826: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704F828: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F82A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1704F82D: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704F830: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704F832: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704F834: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1704F7CA; /* 0x1704F836: jmp 0x1704f7ca */
L_1704F838:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704F838: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704F839: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    esi = eax; /* 0x1704F83C: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1704F83E: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704F841: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x1704F844: mov dword ptr [ebp - 8], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F7CA; /* 0x1704F847: jb 0x1704f7ca */
L_1704F849:
    /* test ecx, ecx */ /* 0x1704F849: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F86A; /* 0x1704F84B: jbe 0x1704f86a */
L_1704F84D:
    eax = MEM32(ebp + 0x20); /* 0x1704F84D: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x1704F850: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F85A; /* 0x1704F852: je 0x1704f85a */
L_1704F854:
    edx = MEM32(ebp + 0x10); /* 0x1704F854: mov edx, dword ptr [ebp + 0x10] */
    MEM32(eax + edx * 4) = ecx; /* 0x1704F857: mov dword ptr [eax + edx*4], ecx */
L_1704F85A:
    eax = MEM32(ebp + 0x24); /* 0x1704F85A: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x1704F85D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F867; /* 0x1704F85F: je 0x1704f867 */
L_1704F861:
    ecx = MEM32(ebp + 0x10); /* 0x1704F861: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + ecx * 4) = esi; /* 0x1704F864: mov dword ptr [eax + ecx*4], esi */
L_1704F867:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1704F867: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
L_1704F86A:
    eax = MEM32(ebp + 0x1C); /* 0x1704F86A: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x10); /* 0x1704F86D: mov ecx, dword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x1704F870: pop edi */
    esi = POP32_VAL(esp); /* 0x1704F871: pop esi */
    MEM32(eax) = ecx; /* 0x1704F872: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F874: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704F876: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704F877: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1704F878: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1704F880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F880u);

L_1704F880:
    edi = edi; /* 0x1704F880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F882: push ebp */
    ebp = esp; /* 0x1704F883: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1704F885: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x1704F888: mov ecx, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704F88B: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704F88B: shl ecx, 2 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1704F88E: mov dword ptr [ebp - 0x10], ecx */
    PUSH32(esp, ebx); /* 0x1704F891: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x1704F892: mov ebx, dword ptr [ebp + 0x18] */
    edx = ecx; /* 0x1704F895: mov edx, ecx */
    PUSH32(esp, esi); /* 0x1704F897: push esi */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F898: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F898: shr ecx, 2 */
    PUSH32(esp, edi); /* 0x1704F89B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F89C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1704F89E: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704F8A0: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704F8A2: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704F8A4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F8A6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704F8A9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1704F8AB: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704F8AE: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    MEM32(ebp + 0x10) = edx; /* 0x1704F8B0: mov dword ptr [ebp + 0x10], edx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1704F8B3: mov dword ptr [ebp - 4], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704F970; /* 0x1704F8B6: jbe 0x1704f970 */
L_1704F8BC:
    ecx = MEM32(ebp + 0x8); /* 0x1704F8BC: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x24); /* 0x1704F8BF: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1704F8C2: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + 0x20); /* 0x1704F8C5: mov ecx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1704F8C8: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = eax; /* 0x1704F8CA: mov dword ptr [ebp + 0x18], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1704F8CD: mov dword ptr [ebp - 0xc], ecx */
L_1704F8D0:
    ecx = MEM32(ebp + (-0x8)); /* 0x1704F8D0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704F8D3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = 3; /* 0x1704F8D5: mov dword ptr [ebp + 8], 3 */
L_1704F8DC:
    eax = MEM32(ecx); /* 0x1704F8DC: mov eax, dword ptr [ecx] */
    eax = ebx + eax * 4; /* 0x1704F8DE: lea eax, [ebx + eax*4] */
    /* cmp MEM32(eax), 0 */ /* 0x1704F8E1: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704F8ED; /* 0x1704F8E4: jne 0x1704f8ed */
L_1704F8E6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704F8E6: inc edi */
    _flag_k = FK_INC;
    MEM32(eax) = 1; /* 0x1704F8E7: mov dword ptr [eax], 1 */
L_1704F8ED:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1704F8ED: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x1704F8F0: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704F8DC; /* 0x1704F8F3: jne 0x1704f8dc */
L_1704F8F5:
    /* cmp edx, MEM32(ebp + 0x14) */ /* 0x1704F8F5: cmp edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F902; /* 0x1704F8F8: je 0x1704f902 */
L_1704F8FA:
    eax = edi + esi; /* 0x1704F8FA: lea eax, [edi + esi] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1704F8FD: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704F93E; /* 0x1704F900: jbe 0x1704f93e */
L_1704F902:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1704F902: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F911; /* 0x1704F906: je 0x1704f911 */
L_1704F908:
    eax = MEM32(ebp + (-0xC)); /* 0x1704F908: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x1704F90B: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(eax + ecx) = edx; /* 0x1704F90E: mov dword ptr [eax + ecx], edx */
L_1704F911:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x1704F911: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704F91C; /* 0x1704F915: je 0x1704f91c */
L_1704F917:
    eax = MEM32(ebp + 0x18); /* 0x1704F917: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x1704F91A: mov dword ptr [eax], esi */
L_1704F91C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1704F91C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4; /* 0x1704F91F: add dword ptr [ebp + 0x18], 4 */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x1704F923: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704F925: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704F925: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F928: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x1704F92A: mov edi, ebx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704F92C: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1704F92E: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704F930: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1704F933: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704F936: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704F938: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704F93A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1704F8D0; /* 0x1704F93C: jmp 0x1704f8d0 */
L_1704F93E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704F93E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704F93F: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    esi = eax; /* 0x1704F942: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1704F944: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704F947: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1704F94A: mov dword ptr [ebp - 8], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704F8D0; /* 0x1704F94D: jb 0x1704f8d0 */
L_1704F94F:
    /* test edx, edx */ /* 0x1704F94F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F970; /* 0x1704F951: jbe 0x1704f970 */
L_1704F953:
    eax = MEM32(ebp + 0x20); /* 0x1704F953: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x1704F956: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F960; /* 0x1704F958: je 0x1704f960 */
L_1704F95A:
    ecx = MEM32(ebp + 0x10); /* 0x1704F95A: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + ecx * 4) = edx; /* 0x1704F95D: mov dword ptr [eax + ecx*4], edx */
L_1704F960:
    eax = MEM32(ebp + 0x24); /* 0x1704F960: mov eax, dword ptr [ebp + 0x24] */
    /* test eax, eax */ /* 0x1704F963: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704F96D; /* 0x1704F965: je 0x1704f96d */
L_1704F967:
    ecx = MEM32(ebp + 0x10); /* 0x1704F967: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + ecx * 4) = esi; /* 0x1704F96A: mov dword ptr [eax + ecx*4], esi */
L_1704F96D:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1704F96D: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
L_1704F970:
    eax = MEM32(ebp + 0x1C); /* 0x1704F970: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x10); /* 0x1704F973: mov ecx, dword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x1704F976: pop edi */
    esi = POP32_VAL(esp); /* 0x1704F977: pop esi */
    MEM32(eax) = ecx; /* 0x1704F978: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704F97A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704F97C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704F97D: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1704F97E: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1704F986(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704F986u);

L_1704F986:
    edi = edi; /* 0x1704F986: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704F988: push ebp */
    ebp = esp; /* 0x1704F989: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1704F98B: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704F98E: push ebx */
    PUSH32(esp, esi); /* 0x1704F98F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704F990: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1704F993: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704F995: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1704F997: push esi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1704F998: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704F99B: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1704F99E: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704F9A1: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x1704F9A4: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x1704F9A6: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = ebp + (-0x8); /* 0x1704F9A8: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1704F9AB: push ecx */
    PUSH32(esp, ebx); /* 0x1704F9AC: push ebx */
    PUSH32(esp, esi); /* 0x1704F9AD: push esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1704F9AE: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1704F9B0: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704F9B3: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704F9B4: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = eax; /* 0x1704F9B5: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(esi); /* 0x1704F9B8: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1704F9BA: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1704F9BD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1704F9BF: mov dword ptr [ebp - 0x14], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704FADA; /* 0x1704F9C2: jl 0x1704fada */
L_1704F9C8:
    eax = MEM32(esi); /* 0x1704F9C8: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xC); /* 0x1704F9CA: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1704F9CD: push ecx */
    PUSH32(esp, ebx); /* 0x1704F9CE: push ebx */
    PUSH32(esp, esi); /* 0x1704F9CF: push esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1704F9D0: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1704F9D3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1704F9D5: mov dword ptr [ebp - 0x14], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704FADA; /* 0x1704F9D8: jl 0x1704fada */
L_1704F9DE:
    eax = MEM32(esi); /* 0x1704F9DE: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x10); /* 0x1704F9E0: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1704F9E3: push ecx */
    PUSH32(esp, ebx); /* 0x1704F9E4: push ebx */
    PUSH32(esp, esi); /* 0x1704F9E5: push esi */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x1704F9E6: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1704F9E9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1704F9EB: mov dword ptr [ebp - 0x14], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704FADA; /* 0x1704F9EE: jl 0x1704fada */
L_1704F9F4:
    edx = MEM32(ebp + 0x20); /* 0x1704F9F4: mov edx, dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x24); /* 0x1704F9F7: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x18); /* 0x1704F9FA: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1704F9FD: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1704F9FF: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, edi); /* 0x1704FA02: push edi */
    edi = MEM32(ebp + 0x2C); /* 0x1704FA03: mov edi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704FA06: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + (-0x1C)) */ /* 0x1704FA09: cmp edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704FA0C: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0x8)); /* 0x1704FA0E: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1704FA11: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + 0x20) = eax; /* 0x1704FA14: mov dword ptr [ebp + 0x20], eax */
    MEM32(ebp + 0x18) = edx; /* 0x1704FA17: mov dword ptr [ebp + 0x18], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704FAD9; /* 0x1704FA1A: jae 0x1704fad9 */
L_1704FA20:
    ecx = MEM32(ebp + 0xC); /* 0x1704FA20: mov ecx, dword ptr [ebp + 0xc] */
    eax = edx + edx * 2; /* 0x1704FA23: lea eax, [edx + edx*2] */
    ecx = ecx + eax * 2; /* 0x1704FA26: lea ecx, [ecx + eax*2] */
    MEM32(ebp + 0xC) = ebx; /* 0x1704FA29: mov dword ptr [ebp + 0xc], ebx */
L_1704FA2C:
    edx = MEM32(ebp + 0x18); /* 0x1704FA2C: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1704FA2F: mov eax, dword ptr [ebp + 0x1c] */
    eax = MEM32(eax + edx * 4); /* 0x1704FA32: mov eax, dword ptr [eax + edx*4] */
    edx = MEM32(ebp + (-0x10)); /* 0x1704FA35: mov edx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x1704FA38: mov edi, dword ptr [ebp + 0xc] */
    MEM32(edi + edx) = eax; /* 0x1704FA3B: mov dword ptr [edi + edx], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1704FA3E: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x30)); /* 0x1704FA41: imul eax, dword ptr [ebp + 0x30] */
    MEM32(ebp + 0x24) = ecx; /* 0x1704FA45: mov dword ptr [ebp + 0x24], ecx */
    MEM32(ebp + (-0x18)) = 3; /* 0x1704FA48: mov dword ptr [ebp - 0x18], 3 */
L_1704FA4F:
    ecx = MEM32(ebp + 0x24); /* 0x1704FA4F: mov ecx, dword ptr [ebp + 0x24] */
    edx = (uint32_t)MEM16(ecx); /* 0x1704FA52: movzx edx, word ptr [ecx] */
    ecx = MEM32(ebp + 0x2C); /* 0x1704FA55: mov ecx, dword ptr [ebp + 0x2c] */
    ecx = ecx + edx * 4; /* 0x1704FA58: lea ecx, [ecx + edx*4] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1704FA5B: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(ecx); /* 0x1704FA5E: mov ecx, dword ptr [ecx] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704FA60: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FAA5; /* 0x1704FA63: jne 0x1704faa5 */
L_1704FA65:
    ecx = MEM32(ebp + 0x30); /* 0x1704FA65: mov ecx, dword ptr [ebp + 0x30] */
    edi = MEM32(ebp + (-0xC)); /* 0x1704FA68: mov edi, dword ptr [ebp - 0xc] */
    esi = edx; /* 0x1704FA6B: mov esi, edx */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x1704FA6D: imul esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x1704FA70: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    ebx = ecx; /* 0x1704FA73: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704FA75: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704FA75: shr ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1704FA78: add edi, eax */
    _flag_k = FK_ADD;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704FA7A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x1704FA7C: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704FA7E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704FA81: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x34); /* 0x1704FA83: mov ecx, dword ptr [ebp + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704FA86: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x1704FA88: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FA92; /* 0x1704FA8A: je 0x1704fa92 */
L_1704FA8C:
    esi = MEM32(ebp + (-0x4)); /* 0x1704FA8C: mov esi, dword ptr [ebp - 4] */
    MEM32(ecx + esi * 4) = edx; /* 0x1704FA8F: mov dword ptr [ecx + esi*4], edx */
L_1704FA92:
    ecx = MEM32(ebp + (-0x4)); /* 0x1704FA92: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x20)); /* 0x1704FA95: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704FA98: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x30); /* 0x1704FA9B: add eax, dword ptr [ebp + 0x30] */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x1704FA9E: mov esi, ecx */
    MEM32(edx) = esi; /* 0x1704FAA0: mov dword ptr [edx], esi */
    esi = MEM32(ebp + 0x8); /* 0x1704FAA2: mov esi, dword ptr [ebp + 8] */
L_1704FAA5:
    edx = MEM32(ebp + (-0x24)); /* 0x1704FAA5: mov edx, dword ptr [ebp - 0x24] */
    /* cmp edx, 2 */ /* 0x1704FAA8: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x20); /* 0x1704FAAB: mov edi, dword ptr [ebp + 0x20] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FAB5; /* 0x1704FAAE: jne 0x1704fab5 */
L_1704FAB0:
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1704FAB0: mov word ptr [edi], cx */
    goto L_1704FAB7; /* 0x1704FAB3: jmp 0x1704fab7 */
L_1704FAB5:
    MEM32(edi) = ecx; /* 0x1704FAB5: mov dword ptr [edi], ecx */
L_1704FAB7:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + edx; /* 0x1704FAB7: add dword ptr [ebp + 0x20], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 2; /* 0x1704FABA: add dword ptr [ebp + 0x24], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x1704FABE: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704FA4F; /* 0x1704FAC1: jne 0x1704fa4f */
L_1704FAC3:
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x1704FAC3: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x18); /* 0x1704FAC6: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4; /* 0x1704FAC9: add dword ptr [ebp + 0xc], 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x1704FACD: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x24); /* 0x1704FAD0: mov ecx, dword ptr [ebp + 0x24] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704FA2C; /* 0x1704FAD3: jb 0x1704fa2c */
L_1704FAD9:
    edi = POP32_VAL(esp); /* 0x1704FAD9: pop edi */
L_1704FADA:
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x1704FADA: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FAE5; /* 0x1704FADD: je 0x1704fae5 */
L_1704FADF:
    eax = MEM32(esi); /* 0x1704FADF: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704FAE1: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1704FAE2: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1704FAE5:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1704FAE5: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FAF0; /* 0x1704FAE8: je 0x1704faf0 */
L_1704FAEA:
    eax = MEM32(esi); /* 0x1704FAEA: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704FAEC: push esi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x1704FAED: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_1704FAF0:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x1704FAF0: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FAFB; /* 0x1704FAF3: je 0x1704fafb */
L_1704FAF5:
    eax = MEM32(esi); /* 0x1704FAF5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704FAF7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x1704FAF8: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
L_1704FAFB:
    eax = MEM32(ebp + (-0x14)); /* 0x1704FAFB: mov eax, dword ptr [ebp - 0x14] */
    esi = POP32_VAL(esp); /* 0x1704FAFE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704FAFF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704FB00: leave  */
    RECOMP_FLAGS_OUT(); esp += 52; { RECOMP_REGS_OUT(); return; } /* 0x1704FB01: ret 0x30 */
    RECOMP_REGS_OUT();
}

void sub_1704FB09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FB09u);

L_1704FB09:
    edi = edi; /* 0x1704FB09: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FB0B: push ebp */
    ebp = esp; /* 0x1704FB0C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1704FB0E: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704FB11: push ebx */
    PUSH32(esp, esi); /* 0x1704FB12: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704FB13: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1704FB16: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704FB18: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1704FB1A: push esi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1704FB1B: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1704FB1E: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1704FB21: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1704FB24: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x1704FB27: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (LO8(eax)) != 0;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax))); /* 0x1704FB29: neg al */
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = ebp + (-0x8); /* 0x1704FB2B: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1704FB2E: push ecx */
    PUSH32(esp, ebx); /* 0x1704FB2F: push ebx */
    PUSH32(esp, esi); /* 0x1704FB30: push esi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1704FB31: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1704FB33: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704FB36: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704FB37: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x24)) = eax; /* 0x1704FB38: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(esi); /* 0x1704FB3B: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1704FB3D: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1704FB40: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1704FB42: mov dword ptr [ebp - 0x14], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704FC5C; /* 0x1704FB45: jl 0x1704fc5c */
L_1704FB4B:
    eax = MEM32(esi); /* 0x1704FB4B: mov eax, dword ptr [esi] */
    ecx = ebp + (-0xC); /* 0x1704FB4D: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1704FB50: push ecx */
    PUSH32(esp, ebx); /* 0x1704FB51: push ebx */
    PUSH32(esp, esi); /* 0x1704FB52: push esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1704FB53: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1704FB56: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1704FB58: mov dword ptr [ebp - 0x14], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704FC5C; /* 0x1704FB5B: jl 0x1704fc5c */
L_1704FB61:
    eax = MEM32(esi); /* 0x1704FB61: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x10); /* 0x1704FB63: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1704FB66: push ecx */
    PUSH32(esp, ebx); /* 0x1704FB67: push ebx */
    PUSH32(esp, esi); /* 0x1704FB68: push esi */
    RECOMP_ICALL(MEM32(eax + 0x60)); /* 0x1704FB69: call dword ptr [eax + 0x60] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1704FB6C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1704FB6E: mov dword ptr [ebp - 0x14], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1704FC5C; /* 0x1704FB71: jl 0x1704fc5c */
L_1704FB77:
    edx = MEM32(ebp + 0x20); /* 0x1704FB77: mov edx, dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x24); /* 0x1704FB7A: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x18); /* 0x1704FB7D: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1704FB80: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1704FB82: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, edi); /* 0x1704FB85: push edi */
    edi = MEM32(ebp + 0x2C); /* 0x1704FB86: mov edi, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704FB89: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + (-0x1C)) */ /* 0x1704FB8C: cmp edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704FB8F: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0x8)); /* 0x1704FB91: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1704FB94: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + 0x20) = eax; /* 0x1704FB97: mov dword ptr [ebp + 0x20], eax */
    MEM32(ebp + 0x18) = edx; /* 0x1704FB9A: mov dword ptr [ebp + 0x18], edx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1704FC5B; /* 0x1704FB9D: jae 0x1704fc5b */
L_1704FBA3:
    ecx = MEM32(ebp + 0xC); /* 0x1704FBA3: mov ecx, dword ptr [ebp + 0xc] */
    eax = edx + edx * 2; /* 0x1704FBA6: lea eax, [edx + edx*2] */
    ecx = ecx + eax * 4; /* 0x1704FBA9: lea ecx, [ecx + eax*4] */
    MEM32(ebp + 0xC) = ebx; /* 0x1704FBAC: mov dword ptr [ebp + 0xc], ebx */
L_1704FBAF:
    edx = MEM32(ebp + 0x18); /* 0x1704FBAF: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1704FBB2: mov eax, dword ptr [ebp + 0x1c] */
    eax = MEM32(eax + edx * 4); /* 0x1704FBB5: mov eax, dword ptr [eax + edx*4] */
    edx = MEM32(ebp + (-0x10)); /* 0x1704FBB8: mov edx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x1704FBBB: mov edi, dword ptr [ebp + 0xc] */
    MEM32(edi + edx) = eax; /* 0x1704FBBE: mov dword ptr [edi + edx], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1704FBC1: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x30)); /* 0x1704FBC4: imul eax, dword ptr [ebp + 0x30] */
    MEM32(ebp + 0x24) = ecx; /* 0x1704FBC8: mov dword ptr [ebp + 0x24], ecx */
    MEM32(ebp + (-0x18)) = 3; /* 0x1704FBCB: mov dword ptr [ebp - 0x18], 3 */
L_1704FBD2:
    ecx = MEM32(ebp + 0x24); /* 0x1704FBD2: mov ecx, dword ptr [ebp + 0x24] */
    edx = MEM32(ecx); /* 0x1704FBD5: mov edx, dword ptr [ecx] */
    ecx = MEM32(ebp + 0x2C); /* 0x1704FBD7: mov ecx, dword ptr [ebp + 0x2c] */
    ecx = ecx + edx * 4; /* 0x1704FBDA: lea ecx, [ecx + edx*4] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1704FBDD: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(ecx); /* 0x1704FBE0: mov ecx, dword ptr [ecx] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704FBE2: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FC27; /* 0x1704FBE5: jne 0x1704fc27 */
L_1704FBE7:
    ecx = MEM32(ebp + 0x30); /* 0x1704FBE7: mov ecx, dword ptr [ebp + 0x30] */
    edi = MEM32(ebp + (-0xC)); /* 0x1704FBEA: mov edi, dword ptr [ebp - 0xc] */
    esi = edx; /* 0x1704FBED: mov esi, edx */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x1704FBEF: imul esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x14); /* 0x1704FBF2: add esi, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    ebx = ecx; /* 0x1704FBF5: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704FBF7: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704FBF7: shr ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1704FBFA: add edi, eax */
    _flag_k = FK_ADD;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1704FBFC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x1704FBFE: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704FC00: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1704FC03: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x34); /* 0x1704FC05: mov ecx, dword ptr [ebp + 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1704FC08: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x1704FC0A: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FC14; /* 0x1704FC0C: je 0x1704fc14 */
L_1704FC0E:
    esi = MEM32(ebp + (-0x4)); /* 0x1704FC0E: mov esi, dword ptr [ebp - 4] */
    MEM32(ecx + esi * 4) = edx; /* 0x1704FC11: mov dword ptr [ecx + esi*4], edx */
L_1704FC14:
    ecx = MEM32(ebp + (-0x4)); /* 0x1704FC14: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x20)); /* 0x1704FC17: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1704FC1A: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x30); /* 0x1704FC1D: add eax, dword ptr [ebp + 0x30] */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x1704FC20: mov esi, ecx */
    MEM32(edx) = esi; /* 0x1704FC22: mov dword ptr [edx], esi */
    esi = MEM32(ebp + 0x8); /* 0x1704FC24: mov esi, dword ptr [ebp + 8] */
L_1704FC27:
    edx = MEM32(ebp + (-0x24)); /* 0x1704FC27: mov edx, dword ptr [ebp - 0x24] */
    /* cmp edx, 2 */ /* 0x1704FC2A: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x20); /* 0x1704FC2D: mov edi, dword ptr [ebp + 0x20] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FC37; /* 0x1704FC30: jne 0x1704fc37 */
L_1704FC32:
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1704FC32: mov word ptr [edi], cx */
    goto L_1704FC39; /* 0x1704FC35: jmp 0x1704fc39 */
L_1704FC37:
    MEM32(edi) = ecx; /* 0x1704FC37: mov dword ptr [edi], ecx */
L_1704FC39:
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + edx; /* 0x1704FC39: add dword ptr [ebp + 0x20], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 4; /* 0x1704FC3C: add dword ptr [ebp + 0x24], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x1704FC40: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704FBD2; /* 0x1704FC43: jne 0x1704fbd2 */
L_1704FC45:
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x1704FC45: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x18); /* 0x1704FC48: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4; /* 0x1704FC4B: add dword ptr [ebp + 0xc], 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x1704FC4F: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x24); /* 0x1704FC52: mov ecx, dword ptr [ebp + 0x24] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704FBAF; /* 0x1704FC55: jb 0x1704fbaf */
L_1704FC5B:
    edi = POP32_VAL(esp); /* 0x1704FC5B: pop edi */
L_1704FC5C:
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x1704FC5C: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FC67; /* 0x1704FC5F: je 0x1704fc67 */
L_1704FC61:
    eax = MEM32(esi); /* 0x1704FC61: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704FC63: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1704FC64: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
L_1704FC67:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1704FC67: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FC72; /* 0x1704FC6A: je 0x1704fc72 */
L_1704FC6C:
    eax = MEM32(esi); /* 0x1704FC6C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704FC6E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x1704FC6F: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
L_1704FC72:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x1704FC72: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FC7D; /* 0x1704FC75: je 0x1704fc7d */
L_1704FC77:
    eax = MEM32(esi); /* 0x1704FC77: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704FC79: push esi */
    RECOMP_ICALL(MEM32(eax + 0x64)); /* 0x1704FC7A: call dword ptr [eax + 0x64] */
    RECOMP_FLAGS_IN();
L_1704FC7D:
    eax = MEM32(ebp + (-0x14)); /* 0x1704FC7D: mov eax, dword ptr [ebp - 0x14] */
    esi = POP32_VAL(esp); /* 0x1704FC80: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704FC81: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704FC82: leave  */
    RECOMP_FLAGS_OUT(); esp += 52; { RECOMP_REGS_OUT(); return; } /* 0x1704FC83: ret 0x30 */
    RECOMP_REGS_OUT();
}

void sub_1704FC8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FC8Bu);

L_1704FC8B:
    edi = edi; /* 0x1704FC8B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FC8D: push ebp */
    ebp = esp; /* 0x1704FC8E: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1704FC90: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704FC94: push esi */
    PUSH32(esp, edi); /* 0x1704FC95: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FD4E; /* 0x1704FC96: je 0x1704fd4e */
L_1704FC9C:
    esi = MEM32(ebp + 0xC); /* 0x1704FC9C: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1704FC9F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FD4E; /* 0x1704FCA1: je 0x1704fd4e */
L_1704FCA7:
    eax = MEM32(ebp + 0x10); /* 0x1704FCA7: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1704FCAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FD4E; /* 0x1704FCAC: je 0x1704fd4e */
L_1704FCB2:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1704FCB2: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FD4E; /* 0x1704FCB6: je 0x1704fd4e */
L_1704FCBC:
    edi = eax; /* 0x1704FCBC: mov edi, eax */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1704FCBE: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1704FCBE: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1704FCC1: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704FCC2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1704FCC7: mov edx, eax */
    /* test edx, edx */ /* 0x1704FCC9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704FCCB: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704FCD5; /* 0x1704FCCC: jne 0x1704fcd5 */
L_1704FCCE:
    eax = 0x8007000Eu; /* 0x1704FCCE: mov eax, 0x8007000e */
    goto L_1704FD53; /* 0x1704FCD3: jmp 0x1704fd53 */
L_1704FCD5:
    ecx = edi; /* 0x1704FCD5: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x1704FCD7: push ebx */
    ebx = ecx; /* 0x1704FCD8: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704FCDA: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704FCDA: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704FCDD: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x1704FCE0: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704FCE2: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = ebx; /* 0x1704FCE4: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704FCE6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704FCE9: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    esi = esi + esi * 2; /* 0x1704FCEB: lea esi, [esi + esi*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704FCEE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704FCF0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1704FCF2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FD0D; /* 0x1704FCF4: jbe 0x1704fd0d */
L_1704FCF6:
    eax = MEM32(ebp + 0x8); /* 0x1704FCF6: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1704FCF9: movzx eax, word ptr [eax + ecx*2] */
    eax = edx + eax * 4; /* 0x1704FCFD: lea eax, [edx + eax*4] */
    /* cmp MEM32(eax), 0xFFFFFFFFu */ /* 0x1704FD00: cmp dword ptr [eax], -1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FD08; /* 0x1704FD03: jne 0x1704fd08 */
L_1704FD05:
    MEM32(eax) = edi; /* 0x1704FD05: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704FD07: inc edi */
    _flag_k = FK_INC;
L_1704FD08:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704FD08: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x1704FD09: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704FCF6; /* 0x1704FD0B: jb 0x1704fcf6 */
L_1704FD0D:
    esi = MEM32(ebp + 0x10); /* 0x1704FD0D: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x14); /* 0x1704FD10: mov edi, dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1704FD13: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704FD15: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704FD15: shl ecx, 2 */
    ebx = ecx; /* 0x1704FD18: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704FD1A: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704FD1A: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704FD1D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704FD20: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = ebx; /* 0x1704FD22: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704FD24: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704FD27: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FD29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1704FD2B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704FD2D: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FD43; /* 0x1704FD2E: jbe 0x1704fd43 */
L_1704FD30:
    ecx = MEM32(edx + eax * 4); /* 0x1704FD30: mov ecx, dword ptr [edx + eax*4] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704FD33: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FD3E; /* 0x1704FD36: je 0x1704fd3e */
L_1704FD38:
    edi = MEM32(ebp + 0x14); /* 0x1704FD38: mov edi, dword ptr [ebp + 0x14] */
    MEM32(edi + ecx * 4) = eax; /* 0x1704FD3B: mov dword ptr [edi + ecx*4], eax */
L_1704FD3E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704FD3E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1704FD3F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704FD30; /* 0x1704FD41: jb 0x1704fd30 */
L_1704FD43:
    PUSH32(esp, edx); /* 0x1704FD43: push edx */
    RECOMP_CALL(sub_1721B010); /* 0x1704FD44: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704FD49: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FD4A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704FD53; /* 0x1704FD4C: jmp 0x1704fd53 */
L_1704FD4E:
    eax = 0x8876086Cu; /* 0x1704FD4E: mov eax, 0x8876086c */
L_1704FD53:
    edi = POP32_VAL(esp); /* 0x1704FD53: pop edi */
    esi = POP32_VAL(esp); /* 0x1704FD54: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704FD55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704FD56: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704FD5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FD5Eu);

L_1704FD5E:
    edi = edi; /* 0x1704FD5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FD60: push ebp */
    ebp = esp; /* 0x1704FD61: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1704FD63: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1704FD67: push esi */
    PUSH32(esp, edi); /* 0x1704FD68: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FE20; /* 0x1704FD69: je 0x1704fe20 */
L_1704FD6F:
    esi = MEM32(ebp + 0xC); /* 0x1704FD6F: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1704FD72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FE20; /* 0x1704FD74: je 0x1704fe20 */
L_1704FD7A:
    eax = MEM32(ebp + 0x10); /* 0x1704FD7A: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1704FD7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FE20; /* 0x1704FD7F: je 0x1704fe20 */
L_1704FD85:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1704FD85: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FE20; /* 0x1704FD89: je 0x1704fe20 */
L_1704FD8F:
    edi = eax; /* 0x1704FD8F: mov edi, eax */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1704FD91: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1704FD91: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1704FD94: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1704FD95: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1704FD9A: mov edx, eax */
    /* test edx, edx */ /* 0x1704FD9C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704FD9E: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704FDA8; /* 0x1704FD9F: jne 0x1704fda8 */
L_1704FDA1:
    eax = 0x8007000Eu; /* 0x1704FDA1: mov eax, 0x8007000e */
    goto L_1704FE25; /* 0x1704FDA6: jmp 0x1704fe25 */
L_1704FDA8:
    ecx = edi; /* 0x1704FDA8: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x1704FDAA: push ebx */
    ebx = ecx; /* 0x1704FDAB: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704FDAD: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704FDAD: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704FDB0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x1704FDB3: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704FDB5: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = ebx; /* 0x1704FDB7: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704FDB9: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704FDBC: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    esi = esi + esi * 2; /* 0x1704FDBE: lea esi, [esi + esi*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1704FDC1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704FDC3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1704FDC5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FDDF; /* 0x1704FDC7: jbe 0x1704fddf */
L_1704FDC9:
    eax = MEM32(ebp + 0x8); /* 0x1704FDC9: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + ecx * 4); /* 0x1704FDCC: mov eax, dword ptr [eax + ecx*4] */
    eax = edx + eax * 4; /* 0x1704FDCF: lea eax, [edx + eax*4] */
    /* cmp MEM32(eax), 0xFFFFFFFFu */ /* 0x1704FDD2: cmp dword ptr [eax], -1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FDDA; /* 0x1704FDD5: jne 0x1704fdda */
L_1704FDD7:
    MEM32(eax) = edi; /* 0x1704FDD7: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1704FDD9: inc edi */
    _flag_k = FK_INC;
L_1704FDDA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704FDDA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x1704FDDB: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704FDC9; /* 0x1704FDDD: jb 0x1704fdc9 */
L_1704FDDF:
    esi = MEM32(ebp + 0x10); /* 0x1704FDDF: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x14); /* 0x1704FDE2: mov edi, dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1704FDE5: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1704FDE7: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1704FDE7: shl ecx, 2 */
    ebx = ecx; /* 0x1704FDEA: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1704FDEC: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1704FDEC: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1704FDEF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1704FDF2: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = ebx; /* 0x1704FDF4: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1704FDF6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1704FDF9: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FDFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1704FDFD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1704FDFF: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FE15; /* 0x1704FE00: jbe 0x1704fe15 */
L_1704FE02:
    ecx = MEM32(edx + eax * 4); /* 0x1704FE02: mov ecx, dword ptr [edx + eax*4] */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1704FE05: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FE10; /* 0x1704FE08: je 0x1704fe10 */
L_1704FE0A:
    edi = MEM32(ebp + 0x14); /* 0x1704FE0A: mov edi, dword ptr [ebp + 0x14] */
    MEM32(edi + ecx * 4) = eax; /* 0x1704FE0D: mov dword ptr [edi + ecx*4], eax */
L_1704FE10:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704FE10: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1704FE11: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704FE02; /* 0x1704FE13: jb 0x1704fe02 */
L_1704FE15:
    PUSH32(esp, edx); /* 0x1704FE15: push edx */
    RECOMP_CALL(sub_1721B010); /* 0x1704FE16: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704FE1B: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FE1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704FE25; /* 0x1704FE1E: jmp 0x1704fe25 */
L_1704FE20:
    eax = 0x8876086Cu; /* 0x1704FE20: mov eax, 0x8876086c */
L_1704FE25:
    edi = POP32_VAL(esp); /* 0x1704FE25: pop edi */
    esi = POP32_VAL(esp); /* 0x1704FE26: pop esi */
    ebp = POP32_VAL(esp); /* 0x1704FE27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704FE28: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704FE30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FE30u);

L_1704FE30:
    edi = edi; /* 0x1704FE30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FE32: push ebp */
    ebp = esp; /* 0x1704FE33: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1704FE35: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x234); /* 0x1704FE38: mov eax, dword ptr [ecx + 0x234] */
    ecx = MEM32(eax); /* 0x1704FE3E: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)((edx | 0x800u)); _flag_b = (uint32_t)((edx | 0x800u));
    edx = edx | 0x800u; /* 0x1704FE40: or edx, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1704FE46: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704FE47: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1704FE4A: push 0 */
    PUSH32(esp, 0); /* 0x1704FE4C: push 0 */
    PUSH32(esp, eax); /* 0x1704FE4E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1704FE4F: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704FE52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704FE53: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704FE5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FE5Bu);

L_1704FE5B:
    edi = edi; /* 0x1704FE5B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FE5D: push ebp */
    ebp = esp; /* 0x1704FE5E: mov ebp, esp */
    eax = ecx; /* 0x1704FE60: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1704FE62: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM16(eax) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax) | 0xFFFFu)) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) | 0xFFFFu); /* 0x1704FE65: or word ptr [eax], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((MEM16(eax + 0x2) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x2) | 0xFFFFu)) << 16;
    MEM16(eax + 0x2) = (uint16_t)(MEM16(eax + 0x2) | 0xFFFFu); /* 0x1704FE6A: or word ptr [eax + 2], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)((MEM16(eax + 0x4) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x4) | 0xFFFFu)) << 16;
    MEM16(eax + 0x4) = (uint16_t)(MEM16(eax + 0x4) | 0xFFFFu); /* 0x1704FE70: or word ptr [eax + 4], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(eax + 0xC) = ecx; /* 0x1704FE76: mov dword ptr [eax + 0xc], ecx */
    MEM8(eax + 0x10) = (uint8_t)(0); /* 0x1704FE79: mov byte ptr [eax + 0x10], 0 */
    MEM8(eax + 0x11) = (uint8_t)(0); /* 0x1704FE7D: mov byte ptr [eax + 0x11], 0 */
    ebp = POP32_VAL(esp); /* 0x1704FE81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704FE82: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704FE8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FE8Au);

L_1704FE8A:
    edi = edi; /* 0x1704FE8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FE8C: push ebp */
    ebp = esp; /* 0x1704FE8D: mov ebp, esp */
    eax = ecx; /* 0x1704FE8F: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1704FE91: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1704FE94: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x4) | 0xFFFFFFFFu));
    MEM32(eax + 0x4) = MEM32(eax + 0x4) | 0xFFFFFFFFu; /* 0x1704FE97: or dword ptr [eax + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 0xFFFFFFFFu; /* 0x1704FE9B: or dword ptr [eax + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x14) = ecx; /* 0x1704FE9F: mov dword ptr [eax + 0x14], ecx */
    MEM8(eax + 0x18) = (uint8_t)(0); /* 0x1704FEA2: mov byte ptr [eax + 0x18], 0 */
    MEM8(eax + 0x19) = (uint8_t)(0); /* 0x1704FEA6: mov byte ptr [eax + 0x19], 0 */
    ebp = POP32_VAL(esp); /* 0x1704FEAA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704FEAB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1704FEB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FEB3u);

L_1704FEB3:
    edi = edi; /* 0x1704FEB3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FEB5: push ebp */
    ebp = esp; /* 0x1704FEB6: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704FEB8: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(eax); /* 0x1704FEBB: movzx ecx, word ptr [eax] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1704FEBE: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FEC7; /* 0x1704FEC1: jne 0x1704fec7 */
L_1704FEC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FEC3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704FEE5; /* 0x1704FEC5: jmp 0x1704fee5 */
L_1704FEC7:
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x1704FEC7: movzx ecx, word ptr [eax + 2] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1704FECB: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FED5; /* 0x1704FECE: jne 0x1704fed5 */
L_1704FED0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FED0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704FED2: inc eax */
    _flag_k = FK_INC;
    goto L_1704FEE5; /* 0x1704FED3: jmp 0x1704fee5 */
L_1704FED5:
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x1704FED5: movzx eax, word ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1704FED9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1704FEDB: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704FEDE: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704FEE1: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1704FEE2: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x1704FEE3: mov eax, ecx */
L_1704FEE5:
    ebp = POP32_VAL(esp); /* 0x1704FEE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704FEE6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704FEEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FEEEu);

L_1704FEEE:
    edi = edi; /* 0x1704FEEE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FEF0: push ebp */
    ebp = esp; /* 0x1704FEF1: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1704FEF3: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1704FEF6: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx), eax */ /* 0x1704FEF9: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FF01; /* 0x1704FEFB: jne 0x1704ff01 */
L_1704FEFD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FEFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704FF17; /* 0x1704FEFF: jmp 0x1704ff17 */
L_1704FF01:
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x1704FF01: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704FF0B; /* 0x1704FF04: jne 0x1704ff0b */
L_1704FF06:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FF06: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704FF08: inc eax */
    _flag_k = FK_INC;
    goto L_1704FF17; /* 0x1704FF09: jmp 0x1704ff17 */
L_1704FF0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704FF0B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x8), eax */ /* 0x1704FF0D: cmp dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1704FF10: setne dl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704FF13: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1704FF14: inc edx */
    _flag_k = FK_INC;
    eax = edx; /* 0x1704FF15: mov eax, edx */
L_1704FF17:
    ebp = POP32_VAL(esp); /* 0x1704FF17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704FF18: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704FF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FF20u);

L_1704FF20:
    edi = edi; /* 0x1704FF20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FF22: push ebp */
    ebp = esp; /* 0x1704FF23: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704FF25: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1704FF26: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1704FF29: push ebx */
    PUSH32(esp, esi); /* 0x1704FF2A: push esi */
    PUSH32(esp, edi); /* 0x1704FF2B: push edi */
    edi = MEM32(eax); /* 0x1704FF2C: mov edi, dword ptr [eax] */
    /* test edi, edi */ /* 0x1704FF2E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1704FF30: mov dword ptr [ebp - 4], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704FF6E; /* 0x1704FF33: jne 0x1704ff6e */
L_1704FF35:
    esi = MEM32(ebp + 0xC); /* 0x1704FF35: mov esi, dword ptr [ebp + 0xc] */
    eax = esi + esi * 2; /* 0x1704FF38: lea eax, [esi + esi*2] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x1704FF3B: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x1704FF3B: shl eax, 1 */
    PUSH32(esp, eax); /* 0x1704FF3D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704FF3E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1704FF43: mov edi, eax */
    /* test edi, edi */ /* 0x1704FF45: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704FF47: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FF5D; /* 0x1704FF48: je 0x1704ff5d */
L_1704FF4A:
    PUSH32(esp, 0x1706E47Eu); /* 0x1704FF4A: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1704FF4F: push esi */
    PUSH32(esp, 6); /* 0x1704FF50: push 6 */
    PUSH32(esp, edi); /* 0x1704FF52: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1704FF53: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x1704FF58: mov dword ptr [ebp - 4], edi */
    goto L_1704FF61; /* 0x1704FF5B: jmp 0x1704ff61 */
L_1704FF5D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1704FF5D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704FF61:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1704FF61: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704FFA8; /* 0x1704FF65: je 0x1704ffa8 */
L_1704FF67:
    eax = MEM32(ebp + 0x14); /* 0x1704FF67: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = esi; /* 0x1704FF6A: mov dword ptr [eax], esi */
    goto L_1704FFD9; /* 0x1704FF6C: jmp 0x1704ffd9 */
L_1704FF6E:
    ebx = MEM32(ebp + 0xC); /* 0x1704FF6E: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x14); /* 0x1704FF71: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ebx, MEM32(eax) */ /* 0x1704FF74: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704FFD9; /* 0x1704FF76: jbe 0x1704ffd9 */
L_1704FF78:
    eax = ebx + ebx * 2; /* 0x1704FF78: lea eax, [ebx + ebx*2] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x1704FF7B: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x1704FF7B: shl eax, 1 */
    PUSH32(esp, eax); /* 0x1704FF7D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1704FF7E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704FF83: mov esi, eax */
    /* test esi, esi */ /* 0x1704FF85: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704FF87: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FF9D; /* 0x1704FF88: je 0x1704ff9d */
L_1704FF8A:
    PUSH32(esp, 0x1706E47Eu); /* 0x1704FF8A: push 0x1706e47e */
    PUSH32(esp, ebx); /* 0x1704FF8F: push ebx */
    PUSH32(esp, 6); /* 0x1704FF90: push 6 */
    PUSH32(esp, esi); /* 0x1704FF92: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x1704FF93: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = esi; /* 0x1704FF98: mov dword ptr [ebp + 0xc], esi */
    goto L_1704FFA1; /* 0x1704FF9B: jmp 0x1704ffa1 */
L_1704FF9D:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1704FF9D: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704FFA1:
    eax = MEM32(ebp + 0xC); /* 0x1704FFA1: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1704FFA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704FFAC; /* 0x1704FFA6: jne 0x1704ffac */
L_1704FFA8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FFA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704FFE4; /* 0x1704FFAA: jmp 0x1704ffe4 */
L_1704FFAC:
    edx = MEM32(ebp + 0x10); /* 0x1704FFAC: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x1704FFAF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704FFC5; /* 0x1704FFB1: jbe 0x1704ffc5 */
L_1704FFB3:
    ecx = edi; /* 0x1704FFB3: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1704FFB5: sub ecx, eax */
    _flag_k = FK_CMP;
L_1704FFB7:
    esi = ecx + eax; /* 0x1704FFB7: lea esi, [ecx + eax] */
    edi = eax; /* 0x1704FFBA: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704FFBC: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x1704FFBD: add eax, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1704FFC0: dec edx */
    _flag_k = FK_DEC;
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x1704FFC1: movsw word ptr es:[edi], word ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704FFB7; /* 0x1704FFC3: jne 0x1704ffb7 */
L_1704FFC5:
    eax = MEM32(ebp + 0x14); /* 0x1704FFC5: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1704FFC8: push dword ptr [ebp - 4] */
    MEM32(eax) = ebx; /* 0x1704FFCB: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1704FFCD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1704FFD2: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1704FFD5: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1704FFD6: mov dword ptr [ebp - 4], eax */
L_1704FFD9:
    eax = MEM32(ebp + (-0x4)); /* 0x1704FFD9: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1704FFDC: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1704FFDF: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704FFE1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704FFE3: inc eax */
    _flag_k = FK_INC;
L_1704FFE4:
    edi = POP32_VAL(esp); /* 0x1704FFE4: pop edi */
    esi = POP32_VAL(esp); /* 0x1704FFE5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704FFE6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704FFE7: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704FFE8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704FFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704FFF0u);

L_1704FFF0:
    edi = edi; /* 0x1704FFF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704FFF2: push ebp */
    ebp = esp; /* 0x1704FFF3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704FFF5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1704FFF8: push ebx */
    PUSH32(esp, esi); /* 0x1704FFF9: push esi */
    esi = MEM32(eax); /* 0x1704FFFA: mov esi, dword ptr [eax] */
    /* test esi, esi */ /* 0x1704FFFC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1704FFFE: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705001B; /* 0x1704FFFF: jne 0x1705001b */
L_17050001:
    edi = MEM32(ebp + 0xC); /* 0x17050001: mov edi, dword ptr [ebp + 0xc] */
    eax = edi + edi; /* 0x17050004: lea eax, [edi + edi] */
    PUSH32(esp, eax); /* 0x17050007: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050008: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705000D: mov esi, eax */
    /* test esi, esi */ /* 0x1705000F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17050011: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17050035; /* 0x17050012: je 0x17050035 */
L_17050014:
    eax = MEM32(ebp + 0x14); /* 0x17050014: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edi; /* 0x17050017: mov dword ptr [eax], edi */
    goto L_17050065; /* 0x17050019: jmp 0x17050065 */
L_1705001B:
    ebx = MEM32(ebp + 0xC); /* 0x1705001B: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x14); /* 0x1705001E: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ebx, MEM32(eax) */ /* 0x17050021: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17050065; /* 0x17050023: jbe 0x17050065 */
L_17050025:
    eax = ebx + ebx; /* 0x17050025: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x17050028: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050029: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705002E: mov edi, eax */
    /* test edi, edi */ /* 0x17050030: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17050032: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17050039; /* 0x17050033: jne 0x17050039 */
L_17050035:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17050035: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1705006D; /* 0x17050037: jmp 0x1705006d */
L_17050039:
    edx = MEM32(ebp + 0x10); /* 0x17050039: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x1705003C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17050057; /* 0x1705003E: jbe 0x17050057 */
L_17050040:
    ecx = esi; /* 0x17050040: mov ecx, esi */
    eax = edi; /* 0x17050042: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x17050044: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edx; /* 0x17050046: mov dword ptr [ebp + 0xc], edx */
L_17050049:
    SET_LO16(edx, MEM16(ecx + eax)); /* 0x17050049: mov dx, word ptr [ecx + eax] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x1705004D: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17050050: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17050051: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x17050052: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17050049; /* 0x17050055: jne 0x17050049 */
L_17050057:
    eax = MEM32(ebp + 0x14); /* 0x17050057: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1705005A: push esi */
    MEM32(eax) = ebx; /* 0x1705005B: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1705005D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17050062: pop ecx */
    esi = edi; /* 0x17050063: mov esi, edi */
L_17050065:
    eax = MEM32(ebp + 0x8); /* 0x17050065: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x17050068: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705006A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705006C: inc eax */
    _flag_k = FK_INC;
L_1705006D:
    edi = POP32_VAL(esp); /* 0x1705006D: pop edi */
    esi = POP32_VAL(esp); /* 0x1705006E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1705006F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17050070: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17050071: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17050079(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17050079u);

L_17050079:
    edi = edi; /* 0x17050079: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705007B: push ebp */
    ebp = esp; /* 0x1705007C: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705007E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17050080:
    ecx = MEM32(ebp + 0x8); /* 0x17050080: mov ecx, dword ptr [ebp + 8] */
    SET_LO16(ecx, MEM16(ecx + eax * 2)); /* 0x17050083: mov cx, word ptr [ecx + eax*2] */
    /* cmp LO16(ecx), MEM16(ebp + 0xC) */ /* 0x17050087: cmp cx, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050093; /* 0x1705008B: je 0x17050093 */
L_1705008D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705008D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x1705008E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17050080; /* 0x17050091: jb 0x17050080 */
L_17050093:
    ebp = POP32_VAL(esp); /* 0x17050093: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17050094: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705009C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705009Cu);

L_1705009C:
    edi = edi; /* 0x1705009C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705009E: push ebp */
    ebp = esp; /* 0x1705009F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170500A1: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x170500A2: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x170500A5: push ebx */
    PUSH32(esp, esi); /* 0x170500A6: push esi */
    PUSH32(esp, edi); /* 0x170500A7: push edi */
    edi = MEM32(eax); /* 0x170500A8: mov edi, dword ptr [eax] */
    /* test edi, edi */ /* 0x170500AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x170500AC: mov dword ptr [ebp - 4], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170500EB; /* 0x170500AF: jne 0x170500eb */
L_170500B1:
    esi = MEM32(ebp + 0xC); /* 0x170500B1: mov esi, dword ptr [ebp + 0xc] */
    eax = esi + esi * 2; /* 0x170500B4: lea eax, [esi + esi*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170500B7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170500B7: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170500BA: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170500BB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170500C0: mov edi, eax */
    /* test edi, edi */ /* 0x170500C2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170500C4: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170500DA; /* 0x170500C5: je 0x170500da */
L_170500C7:
    PUSH32(esp, 0x1706E47Eu); /* 0x170500C7: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x170500CC: push esi */
    PUSH32(esp, 0xCu); /* 0x170500CD: push 0xc */
    PUSH32(esp, edi); /* 0x170500CF: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x170500D0: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x170500D5: mov dword ptr [ebp - 4], edi */
    goto L_170500DE; /* 0x170500D8: jmp 0x170500de */
L_170500DA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170500DA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_170500DE:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x170500DE: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050126; /* 0x170500E2: je 0x17050126 */
L_170500E4:
    eax = MEM32(ebp + 0x14); /* 0x170500E4: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = esi; /* 0x170500E7: mov dword ptr [eax], esi */
    goto L_17050157; /* 0x170500E9: jmp 0x17050157 */
L_170500EB:
    ebx = MEM32(ebp + 0xC); /* 0x170500EB: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x14); /* 0x170500EE: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ebx, MEM32(eax) */ /* 0x170500F1: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17050157; /* 0x170500F3: jbe 0x17050157 */
L_170500F5:
    eax = ebx + ebx * 2; /* 0x170500F5: lea eax, [ebx + ebx*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170500F8: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170500F8: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170500FB: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170500FC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17050101: mov esi, eax */
    /* test esi, esi */ /* 0x17050103: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17050105: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1705011B; /* 0x17050106: je 0x1705011b */
L_17050108:
    PUSH32(esp, 0x1706E47Eu); /* 0x17050108: push 0x1706e47e */
    PUSH32(esp, ebx); /* 0x1705010D: push ebx */
    PUSH32(esp, 0xCu); /* 0x1705010E: push 0xc */
    PUSH32(esp, esi); /* 0x17050110: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x17050111: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = esi; /* 0x17050116: mov dword ptr [ebp + 0xc], esi */
    goto L_1705011F; /* 0x17050119: jmp 0x1705011f */
L_1705011B:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1705011B: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1705011F:
    eax = MEM32(ebp + 0xC); /* 0x1705011F: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17050122: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705012A; /* 0x17050124: jne 0x1705012a */
L_17050126:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17050126: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17050162; /* 0x17050128: jmp 0x17050162 */
L_1705012A:
    edx = MEM32(ebp + 0x10); /* 0x1705012A: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x1705012D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17050143; /* 0x1705012F: jbe 0x17050143 */
L_17050131:
    ecx = edi; /* 0x17050131: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x17050133: sub ecx, eax */
    _flag_k = FK_CMP;
L_17050135:
    esi = ecx + eax; /* 0x17050135: lea esi, [ecx + eax] */
    edi = eax; /* 0x17050138: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1705013A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1705013B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1705013C: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1705013F: dec edx */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17050140: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17050135; /* 0x17050141: jne 0x17050135 */
L_17050143:
    eax = MEM32(ebp + 0x14); /* 0x17050143: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17050146: push dword ptr [ebp - 4] */
    MEM32(eax) = ebx; /* 0x17050149: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1705014B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x17050150: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x17050153: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x17050154: mov dword ptr [ebp - 4], eax */
L_17050157:
    eax = MEM32(ebp + (-0x4)); /* 0x17050157: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1705015A: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1705015D: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1705015F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17050161: inc eax */
    _flag_k = FK_INC;
L_17050162:
    edi = POP32_VAL(esp); /* 0x17050162: pop edi */
    esi = POP32_VAL(esp); /* 0x17050163: pop esi */
    ebx = POP32_VAL(esp); /* 0x17050164: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17050165: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17050166: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1705016E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705016Eu);

L_1705016E:
    edi = edi; /* 0x1705016E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17050170: push ebp */
    ebp = esp; /* 0x17050171: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17050173: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x17050176: push ebx */
    PUSH32(esp, esi); /* 0x17050177: push esi */
    esi = MEM32(eax); /* 0x17050178: mov esi, dword ptr [eax] */
    /* test esi, esi */ /* 0x1705017A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1705017C: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705019B; /* 0x1705017D: jne 0x1705019b */
L_1705017F:
    edi = MEM32(ebp + 0xC); /* 0x1705017F: mov edi, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x17050182: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17050184: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17050184: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17050187: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050188: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1705018D: mov esi, eax */
    /* test esi, esi */ /* 0x1705018F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17050191: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170501B7; /* 0x17050192: je 0x170501b7 */
L_17050194:
    eax = MEM32(ebp + 0x14); /* 0x17050194: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = edi; /* 0x17050197: mov dword ptr [eax], edi */
    goto L_170501E6; /* 0x17050199: jmp 0x170501e6 */
L_1705019B:
    ebx = MEM32(ebp + 0xC); /* 0x1705019B: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x14); /* 0x1705019E: mov eax, dword ptr [ebp + 0x14] */
    /* cmp ebx, MEM32(eax) */ /* 0x170501A1: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170501E6; /* 0x170501A3: jbe 0x170501e6 */
L_170501A5:
    eax = ebx; /* 0x170501A5: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170501A7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170501A7: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170501AA: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170501AB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170501B0: mov edi, eax */
    /* test edi, edi */ /* 0x170501B2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170501B4: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170501BB; /* 0x170501B5: jne 0x170501bb */
L_170501B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170501B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170501EE; /* 0x170501B9: jmp 0x170501ee */
L_170501BB:
    edx = MEM32(ebp + 0x10); /* 0x170501BB: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x170501BE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170501D8; /* 0x170501C0: jbe 0x170501d8 */
L_170501C2:
    ecx = esi; /* 0x170501C2: mov ecx, esi */
    eax = edi; /* 0x170501C4: mov eax, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x170501C6: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edx; /* 0x170501C8: mov dword ptr [ebp + 0xc], edx */
L_170501CB:
    edx = MEM32(ecx + eax); /* 0x170501CB: mov edx, dword ptr [ecx + eax] */
    MEM32(eax) = edx; /* 0x170501CE: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170501D0: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x170501D3: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170501CB; /* 0x170501D6: jne 0x170501cb */
L_170501D8:
    eax = MEM32(ebp + 0x14); /* 0x170501D8: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x170501DB: push esi */
    MEM32(eax) = ebx; /* 0x170501DC: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1721B010); /* 0x170501DE: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170501E3: pop ecx */
    esi = edi; /* 0x170501E4: mov esi, edi */
L_170501E6:
    eax = MEM32(ebp + 0x8); /* 0x170501E6: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x170501E9: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170501EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170501ED: inc eax */
    _flag_k = FK_INC;
L_170501EE:
    edi = POP32_VAL(esp); /* 0x170501EE: pop edi */
    esi = POP32_VAL(esp); /* 0x170501EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x170501F0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170501F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170501F2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170501FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170501FAu);

L_170501FA:
    edi = edi; /* 0x170501FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170501FC: push ebp */
    ebp = esp; /* 0x170501FD: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170501FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17050201:
    ecx = MEM32(ebp + 0x8); /* 0x17050201: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + eax * 4); /* 0x17050204: mov ecx, dword ptr [ecx + eax*4] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x17050207: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050212; /* 0x1705020A: je 0x17050212 */
L_1705020C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705020C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 3 */ /* 0x1705020D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17050201; /* 0x17050210: jb 0x17050201 */
L_17050212:
    ebp = POP32_VAL(esp); /* 0x17050212: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17050213: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1705021B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705021Bu);

L_1705021B:
    edi = edi; /* 0x1705021B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705021D: push ebp */
    ebp = esp; /* 0x1705021E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17050220: push ecx */
    PUSH32(esp, ecx); /* 0x17050221: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17050222: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17050226: push esi */
    esi = ecx; /* 0x17050227: mov esi, ecx */
    PUSH32(esp, edi); /* 0x17050229: push edi */
    edi = MEM32(esi + 0x308); /* 0x1705022A: mov edi, dword ptr [esi + 0x308] */
    eax = edi; /* 0x17050230: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17050232: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17050232: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17050235: push eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x17050236: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x17050239: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1705023E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17050240: pop ecx */
    MEM32(esi + 0x354) = eax; /* 0x17050241: mov dword ptr [esi + 0x354], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705025E; /* 0x17050247: jne 0x1705025e */
L_17050249:
    PUSH32(esp, eax); /* 0x17050249: push eax */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1705024A: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_1721B010); /* 0x17050251: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17050256: pop ecx */
L_17050257:
    eax = MEM32(ebp + (-0x4)); /* 0x17050257: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1705025A: pop edi */
    esi = POP32_VAL(esp); /* 0x1705025B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1705025C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1705025D: ret  */
L_1705025E:
    _flag_a = (uint32_t)(MEM32(esi + 0x368)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x368) = MEM32(esi + 0x368) & 0; /* 0x1705025E: and dword ptr [esi + 0x368], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17050265: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17050267: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17050279; /* 0x17050269: jbe 0x17050279 */
L_1705026B:
    ecx = MEM32(esi + 0x354); /* 0x1705026B: mov ecx, dword ptr [esi + 0x354] */
    MEM32(ecx + eax * 4) = eax; /* 0x17050271: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17050274: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x17050275: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705026B; /* 0x17050277: jb 0x1705026b */
L_17050279:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17050279: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1705027B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17050257; /* 0x1705027D: jbe 0x17050257 */
L_1705027F:
    eax = MEM32(esi + 0x310); /* 0x1705027F: mov eax, dword ptr [esi + 0x310] */
    eax = MEM32(eax + edx * 4); /* 0x17050285: mov eax, dword ptr [eax + edx*4] */
    /* cmp eax, edx */ /* 0x17050288: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17050294; /* 0x1705028A: jne 0x17050294 */
L_1705028C:
    _flag_a = (uint32_t)(MEM32(esi + 0x368)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x368) = MEM32(esi + 0x368) + 1; /* 0x1705028C: inc dword ptr [esi + 0x368] */
    _flag_k = FK_INC;
    goto L_170502AF; /* 0x17050292: jmp 0x170502af */
L_17050294:
    ecx = MEM32(esi + 0x354); /* 0x17050294: mov ecx, dword ptr [esi + 0x354] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705029A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705029A: shl eax, 2 */
    edi = MEM32(eax + ecx); /* 0x1705029D: mov edi, dword ptr [eax + ecx] */
    MEM32(ecx + edx * 4) = edi; /* 0x170502A0: mov dword ptr [ecx + edx*4], edi */
    ecx = MEM32(esi + 0x354); /* 0x170502A3: mov ecx, dword ptr [esi + 0x354] */
    edi = MEM32(ebp + (-0x8)); /* 0x170502A9: mov edi, dword ptr [ebp - 8] */
    MEM32(eax + ecx) = edx; /* 0x170502AC: mov dword ptr [eax + ecx], edx */
L_170502AF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x170502AF: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x170502B0: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705027F; /* 0x170502B2: jb 0x1705027f */
L_170502B4:
    RECOMP_BACKEDGE();
    goto L_17050257; /* 0x170502B4: jmp 0x17050257 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170502BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170502BBu);

L_170502BB:
    edi = edi; /* 0x170502BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170502BD: push ebp */
    ebp = esp; /* 0x170502BE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170502C0: push ecx */
    PUSH32(esp, ebx); /* 0x170502C1: push ebx */
    PUSH32(esp, esi); /* 0x170502C2: push esi */
    esi = ecx; /* 0x170502C3: mov esi, ecx */
    eax = MEM32(esi + 0x368); /* 0x170502C5: mov eax, dword ptr [esi + 0x368] */
    ecx = eax + (-0x1); /* 0x170502CB: lea ecx, [eax - 1] */
    MEM32(esi + 0x398) = eax; /* 0x170502CE: mov dword ptr [esi + 0x398], eax */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x170502D4: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x170502D4: shl eax, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170502D7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x170502D9: push eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x170502DA: mov dword ptr [ebp - 4], ebx */
    MEM32(esi + 0x39C) = ecx; /* 0x170502DD: mov dword ptr [esi + 0x39c], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x170502E3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170502E8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170502EA: pop ecx */
    MEM32(esi + 0x390) = eax; /* 0x170502EB: mov dword ptr [esi + 0x390], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170502FF; /* 0x170502F1: jne 0x170502ff */
L_170502F3:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170502F3: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_17050493; /* 0x170502FA: jmp 0x17050493 */
L_170502FF:
    PUSH32(esp, edi); /* 0x170502FF: push edi */
    PUSH32(esp, MEM32(esi + 0x398)); /* 0x17050300: push dword ptr [esi + 0x398] */
    RECOMP_CALL(sub_1721B01C); /* 0x17050306: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705030B: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1705030D: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705030F: pop ecx */
    MEM32(esi + 0x394) = edi; /* 0x17050310: mov dword ptr [esi + 0x394], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705048B; /* 0x17050316: je 0x1705048b */
L_1705031C:
    ecx = MEM32(esi + 0x398); /* 0x1705031C: mov ecx, dword ptr [esi + 0x398] */
    edx = ecx; /* 0x17050322: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17050324: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17050324: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17050327: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17050329: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705032B: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705032D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x17050330: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(esi + 0x330); /* 0x17050332: mov eax, dword ptr [esi + 0x330] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17050338: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17050338: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705033B: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705033C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17050341: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17050343: pop ecx */
    MEM32(esi + 0x3A0) = eax; /* 0x17050344: mov dword ptr [esi + 0x3a0], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705048B; /* 0x1705034A: je 0x1705048b */
L_17050350:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17050350: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x330), ebx */ /* 0x17050352: cmp dword ptr [esi + 0x330], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x330)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705036D; /* 0x17050358: jbe 0x1705036d */
L_1705035A:
    ecx = MEM32(esi + 0x3A0); /* 0x1705035A: mov ecx, dword ptr [esi + 0x3a0] */
    _flag_a = (uint32_t)((MEM32(ecx + eax * 4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + eax * 4) | 0xFFFFFFFFu));
    MEM32(ecx + eax * 4) = MEM32(ecx + eax * 4) | 0xFFFFFFFFu; /* 0x17050360: or dword ptr [ecx + eax*4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17050364: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x330) */ /* 0x17050365: cmp eax, dword ptr [esi + 0x330] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x330));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1705035A; /* 0x1705036B: jb 0x1705035a */
L_1705036D:
    eax = MEM32(esi + 0x330); /* 0x1705036D: mov eax, dword ptr [esi + 0x330] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17050373: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17050373: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17050376: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050377: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1705037C: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1705037E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17050380: pop ecx */
    MEM32(esi + 0x3A4) = edi; /* 0x17050381: mov dword ptr [esi + 0x3a4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705048B; /* 0x17050387: je 0x1705048b */
L_1705038D:
    ecx = MEM32(esi + 0x330); /* 0x1705038D: mov ecx, dword ptr [esi + 0x330] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17050393: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17050393: shl ecx, 2 */
    edx = ecx; /* 0x17050396: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17050398: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17050398: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1705039B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705039E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x170503A0: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170503A2: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x170503A5: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(esi + 0xC8); /* 0x170503A7: mov eax, dword ptr [esi + 0xc8] */
    edi = esi + 0x308; /* 0x170503AD: lea edi, [esi + 0x308] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi)); /* 0x170503B3: imul eax, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x170503B6: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170503B7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3A8) = eax; /* 0x170503BC: mov dword ptr [esi + 0x3a8], eax */
    eax = MEM32(edi); /* 0x170503C2: mov eax, dword ptr [edi] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170503C4: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170503C4: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170503C7: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170503C8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3AC) = eax; /* 0x170503CD: mov dword ptr [esi + 0x3ac], eax */
    eax = MEM32(esi + 0x32C); /* 0x170503D3: mov eax, dword ptr [esi + 0x32c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170503D9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170503D9: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170503DC: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170503DD: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3B4) = eax; /* 0x170503E2: mov dword ptr [esi + 0x3b4], eax */
    eax = MEM32(esi + 0x32C); /* 0x170503E8: mov eax, dword ptr [esi + 0x32c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170503EE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170503EE: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170503F1: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170503F2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3B0) = eax; /* 0x170503F7: mov dword ptr [esi + 0x3b0], eax */
    eax = MEM32(esi + 0x330); /* 0x170503FD: mov eax, dword ptr [esi + 0x330] */
    ecx = eax + (-0x1); /* 0x17050403: lea ecx, [eax - 1] */
    MEM32(esi + 0x3C4) = eax; /* 0x17050406: mov dword ptr [esi + 0x3c4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1705040C: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1705040E: push eax */
    MEM32(esi + 0x3C8) = ecx; /* 0x1705040F: mov dword ptr [esi + 0x3c8], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17050415: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1705041A: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x3A8), ebx */ /* 0x1705041D: cmp dword ptr [esi + 0x3a8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3A8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x3C0) = eax; /* 0x17050423: mov dword ptr [esi + 0x3c0], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705048B; /* 0x17050429: je 0x1705048b */
L_1705042B:
    /* cmp MEM32(esi + 0x3AC), ebx */ /* 0x1705042B: cmp dword ptr [esi + 0x3ac], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3AC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705048B; /* 0x17050431: je 0x1705048b */
L_17050433:
    /* cmp eax, ebx */ /* 0x17050433: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705048B; /* 0x17050435: je 0x1705048b */
L_17050437:
    /* cmp MEM32(esi + 0x3B4), ebx */ /* 0x17050437: cmp dword ptr [esi + 0x3b4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3B4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705048B; /* 0x1705043D: je 0x1705048b */
L_1705043F:
    /* cmp MEM32(esi + 0x3B0), ebx */ /* 0x1705043F: cmp dword ptr [esi + 0x3b0], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3B0)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705048B; /* 0x17050445: je 0x1705048b */
L_17050447:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17050447: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x32C), ebx */ /* 0x17050449: cmp dword ptr [esi + 0x32c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x32C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17050492; /* 0x1705044F: jbe 0x17050492 */
L_17050451:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17050451: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17050453:
    eax = MEM32(esi + 0x3B8); /* 0x17050453: mov eax, dword ptr [esi + 0x3b8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17050459: add eax, edx */
    _flag_k = FK_ADD;
    edi = MEM32(eax + 0x10); /* 0x1705045B: mov edi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0xC); /* 0x1705045E: add edi, dword ptr [eax + 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x3B0); /* 0x17050461: mov eax, dword ptr [esi + 0x3b0] */
    MEM32(eax + ecx * 4) = edi; /* 0x17050467: mov dword ptr [eax + ecx*4], edi */
    eax = MEM32(esi + 0x3B0); /* 0x1705046A: mov eax, dword ptr [esi + 0x3b0] */
    eax = MEM32(eax + ecx * 4); /* 0x17050470: mov eax, dword ptr [eax + ecx*4] */
    edi = MEM32(esi + 0x3B4); /* 0x17050473: mov edi, dword ptr [esi + 0x3b4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17050479: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi + ecx * 4) = eax; /* 0x1705047A: mov dword ptr [edi + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1705047D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1705047E: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x32C) */ /* 0x17050481: cmp ecx, dword ptr [esi + 0x32c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x32C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17050453; /* 0x17050487: jb 0x17050453 */
L_17050489:
    goto L_17050492; /* 0x17050489: jmp 0x17050492 */
L_1705048B:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1705048B: mov dword ptr [ebp - 4], 0x8007000e */
L_17050492:
    edi = POP32_VAL(esp); /* 0x17050492: pop edi */
L_17050493:
    eax = MEM32(ebp + (-0x4)); /* 0x17050493: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x17050496: pop esi */
    ebx = POP32_VAL(esp); /* 0x17050497: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17050498: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17050499: ret  */
    RECOMP_REGS_OUT();
}

void sub_1705049F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705049Fu);

L_1705049F:
    edi = edi; /* 0x1705049F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170504A1: push ebp */
    ebp = esp; /* 0x170504A2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170504A4: push ecx */
    PUSH32(esp, ecx); /* 0x170504A5: push ecx */
    PUSH32(esp, ebx); /* 0x170504A6: push ebx */
    PUSH32(esp, esi); /* 0x170504A7: push esi */
    esi = ecx; /* 0x170504A8: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170504AA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(esi + 0x308)); /* 0x170504AC: mov bx, word ptr [esi + 0x308] */
    eax = (uint32_t)LO16(ebx); /* 0x170504B3: movzx eax, bx */
    PUSH32(esp, edi); /* 0x170504B6: push edi */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x170504B7: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x170504B7: shl eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170504B9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x170504BB: push eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x170504BC: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x170504BF: mov dword ptr [ebp - 8], ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x170504C2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x170504C7: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170504C9: pop ecx */
    MEM32(esi + 0x354) = eax; /* 0x170504CA: mov dword ptr [esi + 0x354], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170504E8; /* 0x170504D0: jne 0x170504e8 */
L_170504D2:
    PUSH32(esp, edi); /* 0x170504D2: push edi */
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x170504D3: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_CALL(sub_1721B010); /* 0x170504DA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170504DF: pop ecx */
L_170504E0:
    eax = MEM32(ebp + (-0x4)); /* 0x170504E0: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x170504E3: pop edi */
    esi = POP32_VAL(esp); /* 0x170504E4: pop esi */
    ebx = POP32_VAL(esp); /* 0x170504E5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170504E6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170504E7: ret  */
L_170504E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170504E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ebx), LO16(edi) */ /* 0x170504EA: cmp bx, di */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(esi + 0x368) = edi; /* 0x170504ED: mov dword ptr [esi + 0x368], edi */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_170504E0; /* 0x170504F3: jbe 0x170504e0 */
L_170504F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170504F5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170504F7:
    edx = MEM32(esi + 0x354); /* 0x170504F7: mov edx, dword ptr [esi + 0x354] */
    MEM16(ecx + edx) = (uint16_t)(LO16(eax)); /* 0x170504FD: mov word ptr [ecx + edx], ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17050501: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17050502: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17050503: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x17050504: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170504F7; /* 0x17050507: jb 0x170504f7 */
L_17050509:
    /* cmp LO16(ebx), LO16(edi) */ /* 0x17050509: cmp bx, di */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_170504E0; /* 0x1705050C: jbe 0x170504e0 */
L_1705050E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1705050E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17050510:
    eax = MEM32(esi + 0x310); /* 0x17050510: mov eax, dword ptr [esi + 0x310] */
    SET_LO16(eax, MEM16(edx + eax)); /* 0x17050516: mov ax, word ptr [edx + eax] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1705051A: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17050527; /* 0x1705051D: jne 0x17050527 */
L_1705051F:
    _flag_a = (uint32_t)(MEM32(esi + 0x368)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x368) = MEM32(esi + 0x368) + 1; /* 0x1705051F: inc dword ptr [esi + 0x368] */
    _flag_k = FK_INC;
    goto L_17050547; /* 0x17050525: jmp 0x17050547 */
L_17050527:
    ecx = MEM32(esi + 0x354); /* 0x17050527: mov ecx, dword ptr [esi + 0x354] */
    eax = (uint32_t)LO16(eax); /* 0x1705052D: movzx eax, ax */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17050530: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17050530: shl eax, 1 */
    SET_LO16(ebx, MEM16(eax + ecx)); /* 0x17050532: mov bx, word ptr [eax + ecx] */
    MEM16(edx + ecx) = (uint16_t)(LO16(ebx)); /* 0x17050536: mov word ptr [edx + ecx], bx */
    ecx = MEM32(esi + 0x354); /* 0x1705053A: mov ecx, dword ptr [esi + 0x354] */
    ebx = MEM32(ebp + (-0x8)); /* 0x17050540: mov ebx, dword ptr [ebp - 8] */
    MEM16(eax + ecx) = (uint16_t)(LO16(edi)); /* 0x17050543: mov word ptr [eax + ecx], di */
L_17050547:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17050547: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17050548: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17050549: inc edx */
    _flag_k = FK_INC;
    /* cmp LO16(edi), LO16(ebx) */ /* 0x1705054A: cmp di, bx */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17050510; /* 0x1705054D: jb 0x17050510 */
L_1705054F:
    RECOMP_BACKEDGE();
    goto L_170504E0; /* 0x1705054F: jmp 0x170504e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17050556(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17050556u);

L_17050556:
    edi = edi; /* 0x17050556: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17050558: push ebp */
    ebp = esp; /* 0x17050559: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1705055B: push ecx */
    PUSH32(esp, ebx); /* 0x1705055C: push ebx */
    PUSH32(esp, esi); /* 0x1705055D: push esi */
    esi = ecx; /* 0x1705055E: mov esi, ecx */
    eax = MEM32(esi + 0x368); /* 0x17050560: mov eax, dword ptr [esi + 0x368] */
    ecx = eax + (-0x1); /* 0x17050566: lea ecx, [eax - 1] */
    MEM32(esi + 0x398) = eax; /* 0x17050569: mov dword ptr [esi + 0x398], eax */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1705056F: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1705056F: shl eax, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17050572: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x17050574: push eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x17050575: mov dword ptr [ebp - 4], ebx */
    MEM32(esi + 0x39C) = ecx; /* 0x17050578: mov dword ptr [esi + 0x39c], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1705057E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17050583: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17050585: pop ecx */
    MEM32(esi + 0x390) = eax; /* 0x17050586: mov dword ptr [esi + 0x390], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1705059A; /* 0x1705058C: jne 0x1705059a */
L_1705058E:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1705058E: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_1705072F; /* 0x17050595: jmp 0x1705072f */
L_1705059A:
    PUSH32(esp, edi); /* 0x1705059A: push edi */
    PUSH32(esp, MEM32(esi + 0x398)); /* 0x1705059B: push dword ptr [esi + 0x398] */
    RECOMP_CALL(sub_1721B01C); /* 0x170505A1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x170505A6: mov edi, eax */
    /* cmp edi, ebx */ /* 0x170505A8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170505AA: pop ecx */
    MEM32(esi + 0x394) = edi; /* 0x170505AB: mov dword ptr [esi + 0x394], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050727; /* 0x170505B1: je 0x17050727 */
L_170505B7:
    ecx = MEM32(esi + 0x398); /* 0x170505B7: mov ecx, dword ptr [esi + 0x398] */
    edx = ecx; /* 0x170505BD: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170505BF: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170505BF: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170505C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x170505C4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x170505C6: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170505C8: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x170505CB: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(esi + 0x330); /* 0x170505CD: mov eax, dword ptr [esi + 0x330] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170505D3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170505D3: shl eax, 2 */
    PUSH32(esp, eax); /* 0x170505D6: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x170505D7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170505DC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x170505DE: pop ecx */
    MEM32(esi + 0x3A0) = eax; /* 0x170505DF: mov dword ptr [esi + 0x3a0], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050727; /* 0x170505E5: je 0x17050727 */
L_170505EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170505EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x330), ebx */ /* 0x170505ED: cmp dword ptr [esi + 0x330], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x330)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705060B; /* 0x170505F3: jbe 0x1705060b */
L_170505F5:
    ecx = MEM32(esi + 0x3A0); /* 0x170505F5: mov ecx, dword ptr [esi + 0x3a0] */
    MEM32(ecx + eax * 4) = 0xFFFFu; /* 0x170505FB: mov dword ptr [ecx + eax*4], 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17050602: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x330) */ /* 0x17050603: cmp eax, dword ptr [esi + 0x330] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x330));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170505F5; /* 0x17050609: jb 0x170505f5 */
L_1705060B:
    eax = MEM32(esi + 0x330); /* 0x1705060B: mov eax, dword ptr [esi + 0x330] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17050611: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17050611: shl eax, 1 */
    PUSH32(esp, eax); /* 0x17050613: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050614: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17050619: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1705061B: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1705061D: pop ecx */
    MEM32(esi + 0x3A4) = edi; /* 0x1705061E: mov dword ptr [esi + 0x3a4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050727; /* 0x17050624: je 0x17050727 */
L_1705062A:
    ecx = MEM32(esi + 0x330); /* 0x1705062A: mov ecx, dword ptr [esi + 0x330] */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x17050630: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x17050630: shl ecx, 1 */
    edx = ecx; /* 0x17050632: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17050634: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17050634: shr ecx, 2 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x17050637: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1705063A: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1705063C: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1705063E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x17050641: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(esi + 0xC8); /* 0x17050643: mov eax, dword ptr [esi + 0xc8] */
    edi = esi + 0x308; /* 0x17050649: lea edi, [esi + 0x308] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi)); /* 0x1705064F: imul eax, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x17050652: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050653: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3A8) = eax; /* 0x17050658: mov dword ptr [esi + 0x3a8], eax */
    eax = MEM32(edi); /* 0x1705065E: mov eax, dword ptr [edi] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17050660: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17050660: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17050663: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050664: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3AC) = eax; /* 0x17050669: mov dword ptr [esi + 0x3ac], eax */
    eax = MEM32(esi + 0x32C); /* 0x1705066F: mov eax, dword ptr [esi + 0x32c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17050675: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17050675: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17050678: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050679: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3B4) = eax; /* 0x1705067E: mov dword ptr [esi + 0x3b4], eax */
    eax = MEM32(esi + 0x32C); /* 0x17050684: mov eax, dword ptr [esi + 0x32c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705068A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705068A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705068D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1705068E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3B0) = eax; /* 0x17050693: mov dword ptr [esi + 0x3b0], eax */
    eax = MEM32(esi + 0x330); /* 0x17050699: mov eax, dword ptr [esi + 0x330] */
    ecx = eax + (-0x1); /* 0x1705069F: lea ecx, [eax - 1] */
    MEM32(esi + 0x3C4) = eax; /* 0x170506A2: mov dword ptr [esi + 0x3c4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x170506A8: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x170506AA: push eax */
    MEM32(esi + 0x3C8) = ecx; /* 0x170506AB: mov dword ptr [esi + 0x3c8], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x170506B1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x170506B6: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x3A8), ebx */ /* 0x170506B9: cmp dword ptr [esi + 0x3a8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3A8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x3C0) = eax; /* 0x170506BF: mov dword ptr [esi + 0x3c0], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050727; /* 0x170506C5: je 0x17050727 */
L_170506C7:
    /* cmp MEM32(esi + 0x3AC), ebx */ /* 0x170506C7: cmp dword ptr [esi + 0x3ac], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3AC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050727; /* 0x170506CD: je 0x17050727 */
L_170506CF:
    /* cmp eax, ebx */ /* 0x170506CF: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050727; /* 0x170506D1: je 0x17050727 */
L_170506D3:
    /* cmp MEM32(esi + 0x3B4), ebx */ /* 0x170506D3: cmp dword ptr [esi + 0x3b4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3B4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050727; /* 0x170506D9: je 0x17050727 */
L_170506DB:
    /* cmp MEM32(esi + 0x3B0), ebx */ /* 0x170506DB: cmp dword ptr [esi + 0x3b0], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3B0)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050727; /* 0x170506E1: je 0x17050727 */
L_170506E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170506E3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x32C), ebx */ /* 0x170506E5: cmp dword ptr [esi + 0x32c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x32C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705072E; /* 0x170506EB: jbe 0x1705072e */
L_170506ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170506ED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170506EF:
    eax = MEM32(esi + 0x3B8); /* 0x170506EF: mov eax, dword ptr [esi + 0x3b8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x170506F5: add eax, edx */
    _flag_k = FK_ADD;
    edi = MEM32(eax + 0x10); /* 0x170506F7: mov edi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(eax + 0xC); /* 0x170506FA: add edi, dword ptr [eax + 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x3B0); /* 0x170506FD: mov eax, dword ptr [esi + 0x3b0] */
    MEM32(eax + ecx * 4) = edi; /* 0x17050703: mov dword ptr [eax + ecx*4], edi */
    eax = MEM32(esi + 0x3B0); /* 0x17050706: mov eax, dword ptr [esi + 0x3b0] */
    eax = MEM32(eax + ecx * 4); /* 0x1705070C: mov eax, dword ptr [eax + ecx*4] */
    edi = MEM32(esi + 0x3B4); /* 0x1705070F: mov edi, dword ptr [esi + 0x3b4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17050715: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi + ecx * 4) = eax; /* 0x17050716: mov dword ptr [edi + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17050719: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1705071A: add edx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x32C) */ /* 0x1705071D: cmp ecx, dword ptr [esi + 0x32c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x32C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170506EF; /* 0x17050723: jb 0x170506ef */
L_17050725:
    goto L_1705072E; /* 0x17050725: jmp 0x1705072e */
L_17050727:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x17050727: mov dword ptr [ebp - 4], 0x8007000e */
L_1705072E:
    edi = POP32_VAL(esp); /* 0x1705072E: pop edi */
L_1705072F:
    eax = MEM32(ebp + (-0x4)); /* 0x1705072F: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x17050732: pop esi */
    ebx = POP32_VAL(esp); /* 0x17050733: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17050734: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17050735: ret  */
    RECOMP_REGS_OUT();
}

void sub_1705073B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1705073Bu);

L_1705073B:
    edi = edi; /* 0x1705073B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1705073D: push ebp */
    ebp = esp; /* 0x1705073E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17050740: push ecx */
    PUSH32(esp, ecx); /* 0x17050741: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17050742: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17050746: push ebx */
    ebx = ecx; /* 0x17050747: mov ebx, ecx */
    eax = MEM32(ebx + 0x308); /* 0x17050749: mov eax, dword ptr [ebx + 0x308] */
    PUSH32(esp, esi); /* 0x1705074F: push esi */
    esi = MEM32(ebp + 0x14); /* 0x17050750: mov esi, dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17050753: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17050753: shl eax, 2 */
    PUSH32(esp, edi); /* 0x17050756: push edi */
    PUSH32(esp, eax); /* 0x17050757: push eax */
    MEM32(ebx + 0x450) = esi; /* 0x17050758: mov dword ptr [ebx + 0x450], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1705075E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x448) = eax; /* 0x17050763: mov dword ptr [ebx + 0x448], eax */
    eax = esi; /* 0x17050769: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1705076B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1705076B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1705076E: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1705076F: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17050772: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x448); /* 0x17050777: mov edi, dword ptr [ebx + 0x448] */
    /* test edi, edi */ /* 0x1705077D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1705077F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17050780: pop ecx */
    MEM32(ebx + 0x44C) = eax; /* 0x17050781: mov dword ptr [ebx + 0x44c], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17050AD3; /* 0x17050787: je 0x17050ad3 */
L_1705078D:
    /* test eax, eax */ /* 0x1705078D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17050AD3; /* 0x1705078F: je 0x17050ad3 */
L_17050795:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17050795: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170507BA; /* 0x17050799: je 0x170507ba */
L_1705079B:
    ecx = MEM32(ebx + 0x308); /* 0x1705079B: mov ecx, dword ptr [ebx + 0x308] */
    esi = MEM32(ebp + 0xC); /* 0x170507A1: mov esi, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x170507A4: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x170507A4: shl ecx, 2 */
    eax = ecx; /* 0x170507A7: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170507A9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170507A9: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170507AC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170507AE: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170507B0: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170507B3: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x14); /* 0x170507B5: mov esi, dword ptr [ebp + 0x14] */
    goto L_170507D8; /* 0x170507B8: jmp 0x170507d8 */
L_170507BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170507BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x308), eax */ /* 0x170507BC: cmp dword ptr [ebx + 0x308], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x308)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170507D8; /* 0x170507C2: jbe 0x170507d8 */
L_170507C4:
    ecx = MEM32(ebx + 0x448); /* 0x170507C4: mov ecx, dword ptr [ebx + 0x448] */
    fp_push(1.0); /* 0x170507CA: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x170507CC: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170507CF: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebx + 0x308) */ /* 0x170507D0: cmp eax, dword ptr [ebx + 0x308] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x308));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170507C4; /* 0x170507D6: jb 0x170507c4 */
L_170507D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170507D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x170507DA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170507FB; /* 0x170507DD: je 0x170507fb */
L_170507DF:
    ecx = MEM32(ebp + (-0x8)); /* 0x170507DF: mov ecx, dword ptr [ebp - 8] */
    edi = MEM32(ebx + 0x44C); /* 0x170507E2: mov edi, dword ptr [ebx + 0x44c] */
    esi = MEM32(ebp + 0x10); /* 0x170507E8: mov esi, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x170507EB: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x170507ED: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x170507ED: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170507F0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x170507F2: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x170507F4: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x170507F7: rep movsb byte ptr es:[edi], byte ptr [esi] */
    goto L_1705080F; /* 0x170507F9: jmp 0x1705080f */
L_170507FB:
    /* cmp esi, eax */ /* 0x170507FB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1705080F; /* 0x170507FD: jbe 0x1705080f */
L_170507FF:
    ecx = MEM32(ebx + 0x44C); /* 0x170507FF: mov ecx, dword ptr [ebx + 0x44c] */
    fp_push(1.0); /* 0x17050805: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x17050807: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1705080A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1705080B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170507FF; /* 0x1705080D: jb 0x170507ff */
L_1705080F:
    esi = MEM32(ebp + 0x8); /* 0x1705080F: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x17050812: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFu); /* 0x17050814: push 0xf */
    edx = ebx + 0x3D0; /* 0x17050816: lea edx, [ebx + 0x3d0] */
    ecx = POP32_VAL(esp); /* 0x1705081C: pop ecx */
    edi = edx; /* 0x1705081D: mov edi, edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17050825; /* 0x1705081F: je 0x17050825 */
L_17050821:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17050821: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1705083D; /* 0x17050823: jmp 0x1705083d */
L_17050825:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17050825: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(1.0); /* 0x17050827: fld1  */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17050829: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1705082B: fstp dword ptr [edx] */
    fp_push(1.0); /* 0x1705082D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x3D8) = _v; } /* 0x1705082F: fstp dword ptr [ebx + 0x3d8] */
    fp_push(1.0); /* 0x17050835: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x3D4) = _v; } /* 0x17050837: fstp dword ptr [ebx + 0x3d4] */
L_1705083D:
    /* cmp MEM32(ebx + 0x9C), 0 */ /* 0x1705083D: cmp dword ptr [ebx + 0x9c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x9C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebx + 0x348)); /* 0x17050844: fld dword ptr [ebx + 0x348] */
    _st[0] *= (double)*(float*)ADDR(0x17005A94); /* 0x1705084A: fmul dword ptr [0x17005a94] */
    PUSH32(esp, 0xFu); /* 0x17050850: push 0xf */
    edi = ebx + 0x40C; /* 0x17050852: lea edi, [ebx + 0x40c] */
    ecx = POP32_VAL(esp); /* 0x17050858: pop ecx */
    fp_push(_st[0]); /* 0x17050859: fld st(0) */
    esi = edx; /* 0x1705085B: mov esi, edx */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3D8); /* 0x1705085D: fmul dword ptr [ebx + 0x3d8] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17050863: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17050865: fst dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x3D8) = _v; } /* 0x17050868: fstp dword ptr [ebx + 0x3d8] */
    fp_push(_st[0]); /* 0x1705086E: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x404); /* 0x17050870: fmul dword ptr [ebx + 0x404] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x404) = _v; } /* 0x17050876: fstp dword ptr [ebx + 0x404] */
    eax = ebx + 0x3E4; /* 0x1705087C: lea eax, [ebx + 0x3e4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x408); /* 0x17050882: fmul dword ptr [ebx + 0x408] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x408) = _v; } /* 0x17050888: fstp dword ptr [ebx + 0x408] */
    fp_push(*(float*)&MEM32(ebx + 0x348)); /* 0x1705088E: fld dword ptr [ebx + 0x348] */
    _st[0] *= (double)*(float*)ADDR(0x17005A90); /* 0x17050894: fmul dword ptr [0x17005a90] */
    fp_push(_st[0]); /* 0x1705089A: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3DC); /* 0x1705089C: fmul dword ptr [ebx + 0x3dc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x3DC) = _v; } /* 0x170508A2: fstp dword ptr [ebx + 0x3dc] */
    fp_push(_st[0]); /* 0x170508A8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3E0); /* 0x170508AA: fmul dword ptr [ebx + 0x3e0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x3E0) = _v; } /* 0x170508B0: fstp dword ptr [ebx + 0x3e0] */
    fp_push(_st[0]); /* 0x170508B6: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170508B8: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170508BA: fstp dword ptr [eax] */
    eax = ebx + 0x3E8; /* 0x170508BC: lea eax, [ebx + 0x3e8] */
    fp_push(_st[0]); /* 0x170508C2: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170508C4: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170508C6: fstp dword ptr [eax] */
    eax = ebx + 0x3EC; /* 0x170508C8: lea eax, [ebx + 0x3ec] */
    fp_push(_st[0]); /* 0x170508CE: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170508D0: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170508D2: fstp dword ptr [eax] */
    eax = ebx + 0x3F0; /* 0x170508D4: lea eax, [ebx + 0x3f0] */
    fp_push(_st[0]); /* 0x170508DA: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170508DC: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170508DE: fstp dword ptr [eax] */
    eax = ebx + 0x3F4; /* 0x170508E0: lea eax, [ebx + 0x3f4] */
    fp_push(_st[0]); /* 0x170508E6: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170508E8: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170508EA: fstp dword ptr [eax] */
    eax = ebx + 0x3F8; /* 0x170508EC: lea eax, [ebx + 0x3f8] */
    fp_push(_st[0]); /* 0x170508F2: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170508F4: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170508F6: fstp dword ptr [eax] */
    eax = ebx + 0x3FC; /* 0x170508F8: lea eax, [ebx + 0x3fc] */
    fp_push(_st[0]); /* 0x170508FE: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17050900: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17050902: fstp dword ptr [eax] */
    eax = ebx + 0x400; /* 0x17050904: lea eax, [ebx + 0x400] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1705090A: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1705090C: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1705090E: fld dword ptr [0x17001430] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1705092C; /* 0x17050914: je 0x1705092c */
L_17050916:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17050916: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17050919: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1705091B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1705091D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1705092C; /* 0x17050920: jne 0x1705092c */
L_17050922:
    MEM32(ebx + 0x454) = 1; /* 0x17050922: mov dword ptr [ebx + 0x454], 1 */
L_1705092C:
    ecx = ebx + 0xD8; /* 0x1705092C: lea ecx, [ebx + 0xd8] */
    /* cmp MEM16(ecx), 0xFFu */ /* 0x17050932: cmp word ptr [ecx], 0xff */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050AC7; /* 0x17050937: je 0x17050ac7 */
L_1705093D:
    PUSH32(esp, 7); /* 0x1705093D: push 7 */
    edx = POP32_VAL(esp); /* 0x1705093F: pop edx */
L_17050940:
    /* cmp MEM8(ecx + 0x5), 0 */ /* 0x17050940: cmp byte ptr [ecx + 5], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x5)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17050AB9; /* 0x17050944: jne 0x17050ab9 */
L_1705094A:
    eax = (uint32_t)MEM8(ecx + 0x6); /* 0x1705094A: movzx eax, byte ptr [ecx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x1705094E: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17050A80; /* 0x17050951: je 0x17050a80 */
L_17050957:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17050957: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17050958: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17050A2D; /* 0x17050959: je 0x17050a2d */
L_1705095F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1705095F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17050A02; /* 0x17050960: je 0x17050a02 */
L_17050966:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17050966: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_170509D7; /* 0x17050967: je 0x170509d7 */
L_17050969:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x17050969: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_17050AB9; /* 0x1705096C: jne 0x17050ab9 */
L_17050972:
    SET_LO8(eax, MEM8(ecx + 0x7)); /* 0x17050972: mov al, byte ptr [ecx + 7] */
    /* cmp LO8(eax), 1 */ /* 0x17050975: cmp al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_170509A4; /* 0x17050977: jne 0x170509a4 */
L_17050979:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x3E0)); /* 0x17050979: fcom dword ptr [ebx + 0x3e0] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1705097F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17050981: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17050AB9; /* 0x17050984: jp 0x17050ab9 */
L_1705098A:
    eax = ebx + 0x660; /* 0x1705098A: lea eax, [ebx + 0x660] */
    esi = MEM32(eax); /* 0x17050990: mov esi, dword ptr [eax] */
    MEM32(ebx + esi * 4 + 0x458) = ecx; /* 0x17050992: mov dword ptr [ebx + esi*4 + 0x458], ecx */
    fp_push(*(float*)&MEM32(ebx + 0x3E0)); /* 0x17050999: fld dword ptr [ebx + 0x3e0] */
    goto L_17050AAE; /* 0x1705099F: jmp 0x17050aae */
L_170509A4:
    /* test LO8(eax), LO8(eax) */ /* 0x170509A4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17050AB9; /* 0x170509A6: jne 0x17050ab9 */
L_170509AC:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x3DC)); /* 0x170509AC: fcom dword ptr [ebx + 0x3dc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170509B2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170509B4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17050AB9; /* 0x170509B7: jp 0x17050ab9 */
L_170509BD:
    eax = ebx + 0x660; /* 0x170509BD: lea eax, [ebx + 0x660] */
    esi = MEM32(eax); /* 0x170509C3: mov esi, dword ptr [eax] */
    MEM32(ebx + esi * 4 + 0x458) = ecx; /* 0x170509C5: mov dword ptr [ebx + esi*4 + 0x458], ecx */
    fp_push(*(float*)&MEM32(ebx + 0x3DC)); /* 0x170509CC: fld dword ptr [ebx + 0x3dc] */
    goto L_17050AAE; /* 0x170509D2: jmp 0x17050aae */
L_170509D7:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x408)); /* 0x170509D7: fcom dword ptr [ebx + 0x408] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170509DD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170509DF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17050AB9; /* 0x170509E2: jp 0x17050ab9 */
L_170509E8:
    eax = ebx + 0x660; /* 0x170509E8: lea eax, [ebx + 0x660] */
    esi = MEM32(eax); /* 0x170509EE: mov esi, dword ptr [eax] */
    MEM32(ebx + esi * 4 + 0x458) = ecx; /* 0x170509F0: mov dword ptr [ebx + esi*4 + 0x458], ecx */
    fp_push(*(float*)&MEM32(ebx + 0x408)); /* 0x170509F7: fld dword ptr [ebx + 0x408] */
    goto L_17050AAE; /* 0x170509FD: jmp 0x17050aae */
L_17050A02:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x404)); /* 0x17050A02: fcom dword ptr [ebx + 0x404] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17050A08: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17050A0A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17050AB9; /* 0x17050A0D: jp 0x17050ab9 */
L_17050A13:
    eax = ebx + 0x660; /* 0x17050A13: lea eax, [ebx + 0x660] */
    esi = MEM32(eax); /* 0x17050A19: mov esi, dword ptr [eax] */
    MEM32(ebx + esi * 4 + 0x458) = ecx; /* 0x17050A1B: mov dword ptr [ebx + esi*4 + 0x458], ecx */
    fp_push(*(float*)&MEM32(ebx + 0x404)); /* 0x17050A22: fld dword ptr [ebx + 0x404] */
    goto L_17050AAE; /* 0x17050A28: jmp 0x17050aae */
L_17050A2D:
    SET_LO8(eax, MEM8(ecx + 0x7)); /* 0x17050A2D: mov al, byte ptr [ecx + 7] */
    /* cmp LO8(eax), LO8(edx) */ /* 0x17050A30: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_17050A38; /* 0x17050A32: jbe 0x17050a38 */
L_17050A34:
    eax = edx; /* 0x17050A34: mov eax, edx */
    goto L_17050A3B; /* 0x17050A36: jmp 0x17050a3b */
L_17050A38:
    eax = (uint32_t)LO8(eax); /* 0x17050A38: movzx eax, al */
L_17050A3B:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + eax * 4 + 0x3E4)); /* 0x17050A3B: fcom dword ptr [ebx + eax*4 + 0x3e4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17050A42: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17050A44: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17050AB9; /* 0x17050A47: jp 0x17050ab9 */
L_17050A49:
    eax = MEM32(ebx + 0x660); /* 0x17050A49: mov eax, dword ptr [ebx + 0x660] */
    MEM32(ebx + eax * 4 + 0x458) = ecx; /* 0x17050A4F: mov dword ptr [ebx + eax*4 + 0x458], ecx */
    SET_LO8(eax, MEM8(ecx + 0x7)); /* 0x17050A56: mov al, byte ptr [ecx + 7] */
    /* cmp LO8(eax), LO8(edx) */ /* 0x17050A59: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_17050A61; /* 0x17050A5B: jbe 0x17050a61 */
L_17050A5D:
    eax = edx; /* 0x17050A5D: mov eax, edx */
    goto L_17050A64; /* 0x17050A5F: jmp 0x17050a64 */
L_17050A61:
    eax = (uint32_t)LO8(eax); /* 0x17050A61: movzx eax, al */
L_17050A64:
    esi = MEM32(ebx + 0x660); /* 0x17050A64: mov esi, dword ptr [ebx + 0x660] */
    fp_push(*(float*)&MEM32(ebx + eax * 4 + 0x3E4)); /* 0x17050A6A: fld dword ptr [ebx + eax*4 + 0x3e4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + esi * 4 + 0x55C) = _v; } /* 0x17050A71: fstp dword ptr [ebx + esi*4 + 0x55c] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x660)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x660) = MEM32(ebx + 0x660) + 1; /* 0x17050A78: inc dword ptr [ebx + 0x660] */
    _flag_k = FK_INC;
    goto L_17050AB9; /* 0x17050A7E: jmp 0x17050ab9 */
L_17050A80:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x3D8)); /* 0x17050A80: fcom dword ptr [ebx + 0x3d8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17050A86: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17050A88: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17050AB9; /* 0x17050A8B: jp 0x17050ab9 */
L_17050A8D:
    /* cmp MEM8(ecx + 0x7), 0 */ /* 0x17050A8D: cmp byte ptr [ecx + 7], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x7)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17050A99; /* 0x17050A91: jne 0x17050a99 */
L_17050A93:
    /* cmp MEM8(ecx + 0x4), 2 */ /* 0x17050A93: cmp byte ptr [ecx + 4], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17050AB9; /* 0x17050A97: je 0x17050ab9 */
L_17050A99:
    eax = ebx + 0x660; /* 0x17050A99: lea eax, [ebx + 0x660] */
    esi = MEM32(eax); /* 0x17050A9F: mov esi, dword ptr [eax] */
    MEM32(ebx + esi * 4 + 0x458) = ecx; /* 0x17050AA1: mov dword ptr [ebx + esi*4 + 0x458], ecx */
    fp_push(*(float*)&MEM32(ebx + 0x3D8)); /* 0x17050AA8: fld dword ptr [ebx + 0x3d8] */
L_17050AAE:
    esi = MEM32(eax); /* 0x17050AAE: mov esi, dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + esi * 4 + 0x55C) = _v; } /* 0x17050AB0: fstp dword ptr [ebx + esi*4 + 0x55c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x17050AB7: inc dword ptr [eax] */
    _flag_k = FK_INC;
L_17050AB9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x17050AB9: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), 0xFFu */ /* 0x17050ABC: cmp word ptr [ecx], 0xff */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17050940; /* 0x17050AC1: jne 0x17050940 */
L_17050AC7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17050AC7: fstp st(0) */
L_17050AC9:
    eax = MEM32(ebp + (-0x4)); /* 0x17050AC9: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17050ACC: pop edi */
    esi = POP32_VAL(esp); /* 0x17050ACD: pop esi */
    ebx = POP32_VAL(esp); /* 0x17050ACE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17050ACF: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17050AD0: ret 0x14 */
L_17050AD3:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x17050AD3: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_17050AC9; /* 0x17050ADA: jmp 0x17050ac9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17050AE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17050AE1u);

L_17050AE1:
    edi = edi; /* 0x17050AE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17050AE3: push ebp */
    ebp = esp; /* 0x17050AE4: mov ebp, esp */
    eax = ecx; /* 0x17050AE6: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x17050AE8: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0; /* 0x17050AEB: and dword ptr [eax + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0; /* 0x17050AEF: and dword ptr [eax + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x17050AF3: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17050AF5: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x4) = ecx; /* 0x17050AF8: mov dword ptr [eax + 4], ecx */
    SET_LO16(ecx, MEM16(ebp + 0x10)); /* 0x17050AFB: mov cx, word ptr [ebp + 0x10] */
    MEM16(eax + 0x18) = (uint16_t)(LO16(ecx)); /* 0x17050AFF: mov word ptr [eax + 0x18], cx */
    ebp = POP32_VAL(esp); /* 0x17050B03: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17050B04: ret 0xc */
    RECOMP_REGS_OUT();
}
