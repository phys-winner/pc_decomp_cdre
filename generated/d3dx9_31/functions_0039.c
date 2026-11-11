#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171A7F3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7F3Cu);

L_171A7F3C:
    edi = edi; /* 0x171A7F3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7F3E: push ebp */
    ebp = esp; /* 0x171A7F3F: mov ebp, esp */
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x171A7F41: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171A7F45: push ebx */
    PUSH32(esp, esi); /* 0x171A7F46: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A7FEA; /* 0x171A7F47: je 0x171a7fea */
L_171A7F4D:
    ebx = MEM32(ebp + 0xC); /* 0x171A7F4D: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171A7F50: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A7FEA; /* 0x171A7F52: je 0x171a7fea */
L_171A7F58:
    esi = MEM32(ebp + 0x14); /* 0x171A7F58: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, 0xFFFFFFFCu */ /* 0x171A7F5B: test esi, 0xfffffffc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7FEA; /* 0x171A7F61: jne 0x171a7fea */
L_171A7F67:
    /* test MEM32(ebp + 0x10), 0xFFFFFFFEu */ /* 0x171A7F67: test dword ptr [ebp + 0x10], 0xfffffffe */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A7FEA; /* 0x171A7F6E: jne 0x171a7fea */
L_171A7F70:
    PUSH32(esp, edi); /* 0x171A7F70: push edi */
    edi = 0x17250EFCu; /* 0x171A7F71: mov edi, 0x17250efc */
    PUSH32(esp, edi); /* 0x171A7F76: push edi */
    RECOMP_ICALL(MEM32(0x170010D8)); /* 0x171A7F77: call dword ptr [0x170010d8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x171A7F7D: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171A7F80: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x171A7F82: mov dword ptr [eax], ecx */
    eax = esi; /* 0x171A7F84: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFDu);
    eax = eax & 0xFFFFFFFDu; /* 0x171A7F86: and eax, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x171A7F89: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A7FAF; /* 0x171A7F8C: jbe 0x171a7faf */
L_171A7F8E:
    /* cmp eax, 4 */ /* 0x171A7F8E: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7FD9; /* 0x171A7F91: jne 0x171a7fd9 */
L_171A7F93:
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x171A7F93: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x171A7F96: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A7F99: push eax */
    PUSH32(esp, esi); /* 0x171A7F9A: push esi */
    PUSH32(esp, ebx); /* 0x171A7F9B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7F9C: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7FA8; /* 0x171A7F9F: jne 0x171a7fa8 */
L_171A7FA1:
    RECOMP_CALL(sub_171A6D66); /* 0x171A7FA1: call 0x171a6d66 */
    RECOMP_FLAGS_IN();
    goto L_171A7FC9; /* 0x171A7FA6: jmp 0x171a7fc9 */
L_171A7FA8:
    RECOMP_CALL(sub_171A6FDF); /* 0x171A7FA8: call 0x171a6fdf */
    RECOMP_FLAGS_IN();
    goto L_171A7FC9; /* 0x171A7FAD: jmp 0x171a7fc9 */
L_171A7FAF:
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x171A7FAF: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + 0x8; /* 0x171A7FB2: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A7FB5: push eax */
    PUSH32(esp, esi); /* 0x171A7FB6: push esi */
    PUSH32(esp, ebx); /* 0x171A7FB7: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A7FB8: push dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A7FC4; /* 0x171A7FBB: jne 0x171a7fc4 */
L_171A7FBD:
    RECOMP_CALL(sub_171A788E); /* 0x171A7FBD: call 0x171a788e */
    RECOMP_FLAGS_IN();
    goto L_171A7FC9; /* 0x171A7FC2: jmp 0x171a7fc9 */
L_171A7FC4:
    RECOMP_CALL(sub_171A7984); /* 0x171A7FC4: call 0x171a7984 */
    RECOMP_FLAGS_IN();
L_171A7FC9:
    esi = eax; /* 0x171A7FC9: mov esi, eax */
    /* test esi, esi */ /* 0x171A7FCB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A7FDE; /* 0x171A7FCD: jl 0x171a7fde */
L_171A7FCF:
    eax = MEM32(ebp + 0x8); /* 0x171A7FCF: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x18); /* 0x171A7FD2: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ecx) = eax; /* 0x171A7FD5: mov dword ptr [ecx], eax */
    goto L_171A7FDE; /* 0x171A7FD7: jmp 0x171a7fde */
L_171A7FD9:
    esi = 0x88760385u; /* 0x171A7FD9: mov esi, 0x88760385 */
L_171A7FDE:
    PUSH32(esp, edi); /* 0x171A7FDE: push edi */
    RECOMP_ICALL(MEM32(0x170010C0)); /* 0x171A7FDF: call dword ptr [0x170010c0] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A7FE5: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x171A7FE7: pop edi */
    goto L_171A7FEF; /* 0x171A7FE8: jmp 0x171a7fef */
L_171A7FEA:
    eax = 0x88760385u; /* 0x171A7FEA: mov eax, 0x88760385 */
L_171A7FEF:
    esi = POP32_VAL(esp); /* 0x171A7FEF: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A7FF0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A7FF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A7FF2: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A7FFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A7FFAu);

L_171A7FFA:
    edi = edi; /* 0x171A7FFA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A7FFC: push ebp */
    ebp = esp; /* 0x171A7FFD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A7FFF: push ecx */
    PUSH32(esp, ebx); /* 0x171A8000: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171A8001: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM8(ebx + 0x5D), 0 */ /* 0x171A8004: cmp byte ptr [ebx + 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x5D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8014; /* 0x171A8008: je 0x171a8014 */
L_171A800A:
    eax = 0x88760384u; /* 0x171A800A: mov eax, 0x88760384 */
    goto L_171A80D5; /* 0x171A800F: jmp 0x171a80d5 */
L_171A8014:
    PUSH32(esp, esi); /* 0x171A8014: push esi */
    PUSH32(esp, edi); /* 0x171A8015: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A8016: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x40), 1 */ /* 0x171A8018: cmp dword ptr [ebx + 0x40], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x171A801C: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + 0x8) = edi; /* 0x171A801F: mov dword ptr [ebp + 8], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A805A; /* 0x171A8022: jne 0x171a805a */
L_171A8024:
    PUSH32(esp, edi); /* 0x171A8024: push edi */
    PUSH32(esp, 4); /* 0x171A8025: push 4 */
    RECOMP_CALL(sub_1721B23C); /* 0x171A8027: call 0x1721b23c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171A802C: push eax */
    RECOMP_CALL(sub_1721B230); /* 0x171A802D: call 0x1721b230 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A8032: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A8034: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x171A8037: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x171A8039: mov dword ptr [ebp + 8], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A804C; /* 0x171A803C: je 0x171a804c */
L_171A803E:
    PUSH32(esp, 2); /* 0x171A803E: push 2 */
    edi = 0x17005F4Cu; /* 0x171A8040: mov edi, 0x17005f4c */
    ecx = POP32_VAL(esp); /* 0x171A8045: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A8046: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A8048: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A805A; /* 0x171A804A: je 0x171a805a */
L_171A804C:
    PUSH32(esp, 0x17005F4Cu); /* 0x171A804C: push 0x17005f4c */
    PUSH32(esp, 4); /* 0x171A8051: push 4 */
    RECOMP_CALL(sub_1721B23C); /* 0x171A8053: call 0x1721b23c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A8058: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8059: pop ecx */
L_171A805A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A805A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A805C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0xC), edi */ /* 0x171A805E: cmp dword ptr [ebx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A807D; /* 0x171A8061: jbe 0x171a807d */
L_171A8063:
    eax = MEM32(ebx + 0x18); /* 0x171A8063: mov eax, dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x171A8066: push dword ptr [eax + esi*4] */
    ecx = ebx; /* 0x171A8069: mov ecx, ebx */
    RECOMP_CALL(sub_171A7AE3); /* 0x171A806B: call 0x171a7ae3 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A8070: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171A8072: mov dword ptr [ebp - 4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171A80D3; /* 0x171A8075: jl 0x171a80d3 */
L_171A8077:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A8077: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0xC) */ /* 0x171A8078: cmp esi, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A8063; /* 0x171A807B: jb 0x171a8063 */
L_171A807D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A807D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x1C), edi */ /* 0x171A807F: cmp dword ptr [ebx + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A809D; /* 0x171A8082: jbe 0x171a809d */
L_171A8084:
    eax = MEM32(ebx + 0x28); /* 0x171A8084: mov eax, dword ptr [ebx + 0x28] */
    ecx = MEM32(eax + esi * 4); /* 0x171A8087: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ecx); /* 0x171A808A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x171A808C: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x171A808D: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A8090: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171A8092: mov dword ptr [ebp - 4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171A80D3; /* 0x171A8095: jl 0x171a80d3 */
L_171A8097:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A8097: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x1C) */ /* 0x171A8098: cmp esi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A8084; /* 0x171A809B: jb 0x171a8084 */
L_171A809D:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x171A809D: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A80C8; /* 0x171A80A0: je 0x171a80c8 */
L_171A80A2:
    esi = MEM32(ebp + 0x8); /* 0x171A80A2: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x171A80A5: push 2 */
    edi = 0x17005F4Cu; /* 0x171A80A7: mov edi, 0x17005f4c */
    ecx = POP32_VAL(esp); /* 0x171A80AC: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A80AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A80AF: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A80BF; /* 0x171A80B1: je 0x171a80bf */
L_171A80B3:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A80B3: push dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x171A80B6: push 4 */
    RECOMP_CALL(sub_1721B23C); /* 0x171A80B8: call 0x1721b23c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A80BD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A80BE: pop ecx */
L_171A80BF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A80BF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B224); /* 0x171A80C2: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A80C7: pop ecx */
L_171A80C8:
    eax = MEM32(ebp + (-0x4)); /* 0x171A80C8: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171A80CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A80D3; /* 0x171A80CD: jl 0x171a80d3 */
L_171A80CF:
    MEM8(ebx + 0x5D) = (uint8_t)(1); /* 0x171A80CF: mov byte ptr [ebx + 0x5d], 1 */
L_171A80D3:
    edi = POP32_VAL(esp); /* 0x171A80D3: pop edi */
    esi = POP32_VAL(esp); /* 0x171A80D4: pop esi */
L_171A80D5:
    ebx = POP32_VAL(esp); /* 0x171A80D5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A80D6: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A80D7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A80DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A80DFu);

L_171A80DF:
    edi = edi; /* 0x171A80DF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A80E1: push ebp */
    ebp = esp; /* 0x171A80E2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A80E4: push esi */
    esi = ecx; /* 0x171A80E5: mov esi, ecx */
    RECOMP_CALL(sub_171A8105); /* 0x171A80E7: call 0x171a8105 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A80EC: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A80F9; /* 0x171A80F0: je 0x171a80f9 */
L_171A80F2:
    PUSH32(esp, esi); /* 0x171A80F2: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A80F3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A80F8: pop ecx */
L_171A80F9:
    eax = esi; /* 0x171A80F9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A80FB: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A80FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A80FD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A8105(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8105u);

    goto L_171A8105;
L_171A56C6:
    edi = edi; /* 0x171A56C6: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A56C8: push esi */
    PUSH32(esp, edi); /* 0x171A56C9: push edi */
    esi = ecx; /* 0x171A56CA: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A56CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), edi */ /* 0x171A56CE: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D1: je 0x171a56e7 */
L_171A56D3:
    /* cmp MEM32(esi), edi */ /* 0x171A56D3: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D5: jbe 0x171a56e7 */
L_171A56D7:
    eax = MEM32(esi + 0xC); /* 0x171A56D7: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A56DA: mov ecx, dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_171A52D2); /* 0x171A56DD: call 0x171a52d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A56E2: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A56E3: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A56D7; /* 0x171A56E5: jb 0x171a56d7 */
L_171A56E7:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A56E7: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A56EA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A56EF: pop ecx */
    edi = POP32_VAL(esp); /* 0x171A56F0: pop edi */
    esi = POP32_VAL(esp); /* 0x171A56F1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A56F2: ret  */
L_171A8105:
    edi = edi; /* 0x171A8105: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A8107: push esi */
    esi = ecx; /* 0x171A8108: mov esi, ecx */
    PUSH32(esp, edi); /* 0x171A810A: push edi */
    edi = MEM32(esi + 0x2C); /* 0x171A810B: mov edi, dword ptr [esi + 0x2c] */
    /* test edi, edi */ /* 0x171A810E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x1702383Cu; /* 0x171A8110: mov dword ptr [esi], 0x1702383c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8126; /* 0x171A8116: je 0x171a8126 */
L_171A8118:
    ecx = edi; /* 0x171A8118: mov ecx, edi */
    RECOMP_CALL(sub_171A814B); /* 0x171A811A: call 0x171a814b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A811F: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x171A8120: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A8125: pop ecx */
L_171A8126:
    ecx = MEM32(esi + 0xC); /* 0x171A8126: mov ecx, dword ptr [esi + 0xc] */
    /* test ecx, ecx */ /* 0x171A8129: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8133; /* 0x171A812B: je 0x171a8133 */
L_171A812D:
    eax = MEM32(ecx); /* 0x171A812D: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171A812F: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171A8131: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171A8133:
    eax = MEM32(esi + 0x8); /* 0x171A8133: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x171A8136: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A8138: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171A8139: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171A813C: pop edi */
    ecx = esi + 0x10; /* 0x171A813D: lea ecx, [esi + 0x10] */
    esi = POP32_VAL(esp); /* 0x171A8140: pop esi */
    RECOMP_BACKEDGE();
    goto L_171A56C6; /* 0x171A8141: jmp 0x171a56c6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A814B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A814Bu);

L_171A814B:
    edi = edi; /* 0x171A814B: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A814D: push esi */
    esi = ecx; /* 0x171A814E: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A8150: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A817C; /* 0x171A8154: je 0x171a817c */
L_171A8156:
    PUSH32(esp, edi); /* 0x171A8156: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A8157: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x171A8159: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A817B; /* 0x171A815B: jbe 0x171a817b */
L_171A815D:
    eax = MEM32(esi + 0xC); /* 0x171A815D: mov eax, dword ptr [esi + 0xc] */
    /* cmp MEM32(eax + edi * 4), 0 */ /* 0x171A8160: cmp dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8176; /* 0x171A8164: je 0x171a8176 */
L_171A8166:
    eax = MEM32(eax + edi * 4); /* 0x171A8166: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(eax); /* 0x171A8169: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A816B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171A816C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x171A816F: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0; /* 0x171A8172: and dword ptr [eax + edi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A8176:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A8176: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A8177: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A815D; /* 0x171A8179: jb 0x171a815d */
L_171A817B:
    edi = POP32_VAL(esp); /* 0x171A817B: pop edi */
L_171A817C:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A817C: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A817F: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A8184: pop ecx */
    esi = POP32_VAL(esp); /* 0x171A8185: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A8186: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A818C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A818Cu);

L_171A818C:
    edi = edi; /* 0x171A818C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A818E: push ebp */
    ebp = esp; /* 0x171A818F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A8191: push esi */
    esi = ecx; /* 0x171A8192: mov esi, ecx */
    RECOMP_CALL(sub_171A81B2); /* 0x171A8194: call 0x171a81b2 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A8199: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A81A6; /* 0x171A819D: je 0x171a81a6 */
L_171A819F:
    PUSH32(esp, esi); /* 0x171A819F: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A81A0: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A81A5: pop ecx */
L_171A81A6:
    eax = esi; /* 0x171A81A6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A81A8: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A81A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A81AA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A81B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A81B2u);

    goto L_171A81B2;
L_171A56C6:
    edi = edi; /* 0x171A56C6: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A56C8: push esi */
    PUSH32(esp, edi); /* 0x171A56C9: push edi */
    esi = ecx; /* 0x171A56CA: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A56CC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), edi */ /* 0x171A56CE: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D1: je 0x171a56e7 */
L_171A56D3:
    /* cmp MEM32(esi), edi */ /* 0x171A56D3: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A56E7; /* 0x171A56D5: jbe 0x171a56e7 */
L_171A56D7:
    eax = MEM32(esi + 0xC); /* 0x171A56D7: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A56DA: mov ecx, dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_171A52D2); /* 0x171A56DD: call 0x171a52d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A56E2: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A56E3: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A56D7; /* 0x171A56E5: jb 0x171a56d7 */
L_171A56E7:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A56E7: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A56EA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A56EF: pop ecx */
    edi = POP32_VAL(esp); /* 0x171A56F0: pop edi */
    esi = POP32_VAL(esp); /* 0x171A56F1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A56F2: ret  */
L_171A81B2:
    edi = edi; /* 0x171A81B2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x171A81B4: push ebx */
    PUSH32(esp, esi); /* 0x171A81B5: push esi */
    esi = ecx; /* 0x171A81B6: mov esi, ecx */
    PUSH32(esp, edi); /* 0x171A81B8: push edi */
    MEM32(esi) = 0x170238C4u; /* 0x171A81B9: mov dword ptr [esi], 0x170238c4 */
    RECOMP_CALL(sub_171A82BB); /* 0x171A81BF: call 0x171a82bb */
    RECOMP_FLAGS_IN();
    ebx = esi + 0x30; /* 0x171A81C4: lea ebx, [esi + 0x30] */
    ecx = ebx; /* 0x171A81C7: mov ecx, ebx */
    RECOMP_CALL(sub_171A8CD3); /* 0x171A81C9: call 0x171a8cd3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x171A81CE: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A81D1: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x48); /* 0x171A81D7: mov edi, dword ptr [esi + 0x48] */
    /* test edi, edi */ /* 0x171A81DA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A81EE; /* 0x171A81DC: je 0x171a81ee */
L_171A81DE:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171A81DE: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A81E1: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A81E6: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x171A81E7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A81EC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A81ED: pop ecx */
L_171A81EE:
    edi = MEM32(esi + 0x4C); /* 0x171A81EE: mov edi, dword ptr [esi + 0x4c] */
    /* test edi, edi */ /* 0x171A81F1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8205; /* 0x171A81F3: je 0x171a8205 */
L_171A81F5:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171A81F5: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A81F8: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A81FD: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x171A81FE: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A8203: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8204: pop ecx */
L_171A8205:
    eax = MEM32(esi + 0x50); /* 0x171A8205: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A8208: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171A820A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A824F; /* 0x171A820C: je 0x171a824f */
L_171A820E:
    /* cmp MEM32(eax), edi */ /* 0x171A820E: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A8238; /* 0x171A8210: jbe 0x171a8238 */
L_171A8212:
    eax = MEM32(esi + 0x50); /* 0x171A8212: mov eax, dword ptr [esi + 0x50] */
    eax = MEM32(eax + 0xC); /* 0x171A8215: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x171A8218: push dword ptr [eax + edi*4] */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x171A821B: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x50); /* 0x171A8221: mov eax, dword ptr [esi + 0x50] */
    eax = MEM32(eax + 0xC); /* 0x171A8224: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x171A8227: push dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_1721B224); /* 0x171A822A: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x50); /* 0x171A822F: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A8232: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax) */ /* 0x171A8233: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A8235: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A8212; /* 0x171A8236: jb 0x171a8212 */
L_171A8238:
    edi = MEM32(esi + 0x50); /* 0x171A8238: mov edi, dword ptr [esi + 0x50] */
    /* test edi, edi */ /* 0x171A823B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A824F; /* 0x171A823D: je 0x171a824f */
L_171A823F:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171A823F: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A8242: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A8247: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x171A8248: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A824D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A824E: pop ecx */
L_171A824F:
    edi = MEM32(esi + 0x54); /* 0x171A824F: mov edi, dword ptr [esi + 0x54] */
    /* test edi, edi */ /* 0x171A8252: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8266; /* 0x171A8254: je 0x171a8266 */
L_171A8256:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171A8256: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A8259: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A825E: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x171A825F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A8264: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8265: pop ecx */
L_171A8266:
    /* cmp MEM8(esi + 0x5C), 0 */ /* 0x171A8266: cmp byte ptr [esi + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x5C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A827C; /* 0x171A826A: je 0x171a827c */
L_171A826C:
    /* cmp MEM32(esi + 0x44), 1 */ /* 0x171A826C: cmp dword ptr [esi + 0x44], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A828A; /* 0x171A8270: jne 0x171a828a */
L_171A8272:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x171A8272: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_171AA1F0); /* 0x171A8275: call 0x171aa1f0 */
    RECOMP_FLAGS_IN();
    goto L_171A828A; /* 0x171A827A: jmp 0x171a828a */
L_171A827C:
    /* cmp MEM32(esi + 0x44), 1 */ /* 0x171A827C: cmp dword ptr [esi + 0x44], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A828A; /* 0x171A8280: jne 0x171a828a */
L_171A8282:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x171A8282: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_171AA09C); /* 0x171A8285: call 0x171aa09c */
    RECOMP_FLAGS_IN();
L_171A828A:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x171A828A: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_1721B010); /* 0x171A828D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x171A8292: mov eax, dword ptr [esi + 8] */
    ecx = POP32_VAL(esp); /* 0x171A8295: pop ecx */
    ecx = MEM32(eax); /* 0x171A8296: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171A8298: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171A8299: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x171A829C: mov ecx, ebx */
    RECOMP_CALL(sub_171A8DAF); /* 0x171A829E: call 0x171a8daf */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x1C; /* 0x171A82A3: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_171A607D); /* 0x171A82A6: call 0x171a607d */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171A82AB: pop edi */
    ecx = esi + 0xC; /* 0x171A82AC: lea ecx, [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x171A82AF: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A82B0: pop ebx */
    RECOMP_BACKEDGE();
    goto L_171A56C6; /* 0x171A82B1: jmp 0x171a56c6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A82BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A82BBu);

L_171A82BB:
    edi = edi; /* 0x171A82BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A82BD: push ebp */
    ebp = esp; /* 0x171A82BE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x171A82C0: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A82C6: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171A82CB: push ebx */
    PUSH32(esp, esi); /* 0x171A82CC: push esi */
    esi = ecx; /* 0x171A82CD: mov esi, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A82CF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x50); /* 0x171A82D2: mov eax, dword ptr [esi + 0x50] */
    PUSH32(esp, edi); /* 0x171A82D5: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A82D6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171A82D8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A845B; /* 0x171A82DA: je 0x171a845b */
L_171A82E0:
    /* cmp MEM32(eax), edi */ /* 0x171A82E0: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A845B; /* 0x171A82E2: je 0x171a845b */
L_171A82E8:
    eax = MEM32(esi + 0x54); /* 0x171A82E8: mov eax, dword ptr [esi + 0x54] */
    /* cmp eax, edi */ /* 0x171A82EB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A845B; /* 0x171A82ED: je 0x171a845b */
L_171A82F3:
    /* cmp MEM32(eax), edi */ /* 0x171A82F3: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A845B; /* 0x171A82F5: je 0x171a845b */
L_171A82FB:
    eax = MEM32(esi + 0x40); /* 0x171A82FB: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171A82FE: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A831B; /* 0x171A8300: je 0x171a831b */
L_171A8302:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A8302: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A8324; /* 0x171A8303: jne 0x171a8324 */
L_171A8305:
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x171A8305: push dword ptr [esi + 0x58] */
    RECOMP_CALL(sub_171A64F6); /* 0x171A8308: call 0x171a64f6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x170239E8u); /* 0x171A830D: push 0x170239e8 */
    ecx = esi; /* 0x171A8312: mov ecx, esi */
    RECOMP_CALL(sub_171A5334); /* 0x171A8314: call 0x171a5334 */
    RECOMP_FLAGS_IN();
    goto L_171A8324; /* 0x171A8319: jmp 0x171a8324 */
L_171A831B:
    PUSH32(esp, 0x37u); /* 0x171A831B: push 0x37 */
    ecx = esi; /* 0x171A831D: mov ecx, esi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A831F: call 0x171a53ad */
    RECOMP_FLAGS_IN();
L_171A8324:
    PUSH32(esp, 1); /* 0x171A8324: push 1 */
    PUSH32(esp, edi); /* 0x171A8326: push edi */
    PUSH32(esp, edi); /* 0x171A8327: push edi */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x171A8328: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x170010CC)); /* 0x171A832B: call dword ptr [0x170010cc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A8331: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8C)) = eax; /* 0x171A8334: mov dword ptr [ebp - 0x8c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A846A; /* 0x171A833A: je 0x171a846a */
L_171A8340:
    eax = MEM32(esi + 0x50); /* 0x171A8340: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(eax), edi */ /* 0x171A8343: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x88)) = edi; /* 0x171A8345: mov dword ptr [ebp - 0x88], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A845B; /* 0x171A834B: jbe 0x171a845b */
L_171A8351:
    eax = MEM32(esi + 0x54); /* 0x171A8351: mov eax, dword ptr [esi + 0x54] */
    ebx = MEM32(ebp + (-0x88)); /* 0x171A8354: mov ebx, dword ptr [ebp - 0x88] */
    eax = MEM32(eax + 0xC); /* 0x171A835A: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, edi); /* 0x171A835D: push edi */
    PUSH32(esp, edi); /* 0x171A835E: push edi */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x171A835F: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x171A835F: shl ebx, 2 */
    PUSH32(esp, MEM32(eax + ebx)); /* 0x171A8362: push dword ptr [eax + ebx] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x171A8365: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x170010CC)); /* 0x171A8368: call dword ptr [0x170010cc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A836E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A846A; /* 0x171A8371: je 0x171a846a */
L_171A8377:
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x171A8377: push dword ptr [ebp - 0x8c] */
    ecx = esi; /* 0x171A837D: mov ecx, esi */
    RECOMP_CALL(sub_171A911A); /* 0x171A837F: call 0x171a911a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A8384: push edi */
    ecx = esi; /* 0x171A8385: mov ecx, esi */
    RECOMP_CALL(sub_171A911A); /* 0x171A8387: call 0x171a911a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A838C: push edi */
    PUSH32(esp, edi); /* 0x171A838D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8C))); /* 0x171A838E: push dword ptr [ebp - 0x8c] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x171A8394: push dword ptr [esi + 0x3c] */
    RECOMP_ICALL(MEM32(0x170010CC)); /* 0x171A8397: call dword ptr [0x170010cc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A839D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A846A; /* 0x171A83A0: je 0x171a846a */
L_171A83A6:
    eax = MEM32(esi + 0x50); /* 0x171A83A6: mov eax, dword ptr [esi + 0x50] */
    eax = MEM32(eax + 0xC); /* 0x171A83A9: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, edi); /* 0x171A83AC: push edi */
    PUSH32(esp, 0x08000080u); /* 0x171A83AD: push 0x8000080 */
    PUSH32(esp, 3); /* 0x171A83B2: push 3 */
    PUSH32(esp, edi); /* 0x171A83B4: push edi */
    PUSH32(esp, edi); /* 0x171A83B5: push edi */
    PUSH32(esp, 0x80000000u); /* 0x171A83B6: push 0x80000000 */
    PUSH32(esp, MEM32(eax + ebx)); /* 0x171A83BB: push dword ptr [eax + ebx] */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x171A83BE: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A83C4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x94)) = eax; /* 0x171A83C7: mov dword ptr [ebp - 0x94], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A846A; /* 0x171A83CD: je 0x171a846a */
L_171A83D3:
    PUSH32(esp, edi); /* 0x171A83D3: push edi */
    ecx = ebp + (-0x90); /* 0x171A83D4: lea ecx, [ebp - 0x90] */
    PUSH32(esp, ecx); /* 0x171A83DA: push ecx */
    PUSH32(esp, 0x80u); /* 0x171A83DB: push 0x80 */
    ecx = ebp + (-0x84); /* 0x171A83E0: lea ecx, [ebp - 0x84] */
    PUSH32(esp, ecx); /* 0x171A83E6: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A83E7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171A83E9: push eax */
    goto L_171A8428; /* 0x171A83EA: jmp 0x171a8428 */
L_171A83EC:
    /* cmp MEM32(ebp + (-0x90)), edi */ /* 0x171A83EC: cmp dword ptr [ebp - 0x90], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8432; /* 0x171A83F2: je 0x171a8432 */
L_171A83F4:
    eax = ebp + (-0x84); /* 0x171A83F4: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x171A83FA: push eax */
    PUSH32(esp, MEM32(ebp + (-0x90))); /* 0x171A83FB: push dword ptr [ebp - 0x90] */
    ecx = esi; /* 0x171A8401: mov ecx, esi */
    RECOMP_CALL(sub_171A538A); /* 0x171A8403: call 0x171a538a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x90)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x90)); /* 0x171A8408: add ebx, dword ptr [ebp - 0x90] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171A840E: push edi */
    eax = ebp + (-0x90); /* 0x171A840F: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x171A8415: push eax */
    PUSH32(esp, 0x80u); /* 0x171A8416: push 0x80 */
    eax = ebp + (-0x84); /* 0x171A841B: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x171A8421: push eax */
    PUSH32(esp, MEM32(ebp + (-0x94))); /* 0x171A8422: push dword ptr [ebp - 0x94] */
L_171A8428:
    RECOMP_ICALL(MEM32(0x170010F4)); /* 0x171A8428: call dword ptr [0x170010f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A842E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A83EC; /* 0x171A8430: jne 0x171a83ec */
L_171A8432:
    PUSH32(esp, MEM32(ebp + (-0x94))); /* 0x171A8432: push dword ptr [ebp - 0x94] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A8438: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8C)) = MEM32(ebp + (-0x8C)) + ebx; /* 0x171A843E: add dword ptr [ebp - 0x8c], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x88)) = MEM32(ebp + (-0x88)) + 1; /* 0x171A8444: inc dword ptr [ebp - 0x88] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x50); /* 0x171A844A: mov eax, dword ptr [esi + 0x50] */
    ecx = MEM32(ebp + (-0x88)); /* 0x171A844D: mov ecx, dword ptr [ebp - 0x88] */
    /* cmp ecx, MEM32(eax) */ /* 0x171A8453: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A8351; /* 0x171A8455: jb 0x171a8351 */
L_171A845B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A845B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A845D:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A845D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A8460: pop edi */
    esi = POP32_VAL(esp); /* 0x171A8461: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A8462: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A8463: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A8468: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A8469: ret  */
L_171A846A:
    eax = 0x8876038Fu; /* 0x171A846A: mov eax, 0x8876038f */
    RECOMP_BACKEDGE();
    goto L_171A845D; /* 0x171A846F: jmp 0x171a845d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A8476(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8476u);

L_171A8476:
    edi = edi; /* 0x171A8476: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8478: push ebp */
    ebp = esp; /* 0x171A8479: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x171A847B: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A847E: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171A8483: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171A8484: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171A8487: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171A8488: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A848B: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x14); /* 0x171A848E: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171A8491: push eax */
    PUSH32(esp, ebx); /* 0x171A8492: push ebx */
    PUSH32(esp, edi); /* 0x171A8493: push edi */
    MEM32(ebp + (-0x24)) = ecx; /* 0x171A8494: mov dword ptr [ebp - 0x24], ecx */
    RECOMP_CALL(sub_171A556B); /* 0x171A8497: call 0x171a556b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A849C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A84AF; /* 0x171A849E: je 0x171a84af */
L_171A84A0:
    eax = ebp + (-0x28); /* 0x171A84A0: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x171A84A3: push eax */
    PUSH32(esp, ebx); /* 0x171A84A4: push ebx */
    PUSH32(esp, edi); /* 0x171A84A5: push edi */
    RECOMP_CALL(sub_171A542F); /* 0x171A84A6: call 0x171a542f */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A84AB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A84B9; /* 0x171A84AD: jne 0x171a84b9 */
L_171A84AF:
    eax = 0x8876038Fu; /* 0x171A84AF: mov eax, 0x8876038f */
    goto L_171A86ED; /* 0x171A84B4: jmp 0x171a86ed */
L_171A84B9:
    PUSH32(esp, esi); /* 0x171A84B9: push esi */
    PUSH32(esp, 0x10u); /* 0x171A84BA: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A84BC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A84C1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x171A84C3: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A84C5: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A84DC; /* 0x171A84C6: je 0x171a84dc */
L_171A84C8:
    MEM32(eax) = esi; /* 0x171A84C8: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = esi; /* 0x171A84CA: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = 0xAu; /* 0x171A84CD: mov dword ptr [eax + 8], 0xa */
    MEM32(eax + 0xC) = esi; /* 0x171A84D4: mov dword ptr [eax + 0xc], esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171A84D7: mov dword ptr [ebp - 0x1c], eax */
    goto L_171A84DF; /* 0x171A84DA: jmp 0x171a84df */
L_171A84DC:
    MEM32(ebp + (-0x1C)) = esi; /* 0x171A84DC: mov dword ptr [ebp - 0x1c], esi */
L_171A84DF:
    /* cmp MEM32(ebp + (-0x1C)), esi */ /* 0x171A84DF: cmp dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A850F; /* 0x171A84E2: jne 0x171a850f */
L_171A84E4:
    eax = 0x8007000Eu; /* 0x171A84E4: mov eax, 0x8007000e */
    goto L_171A86EC; /* 0x171A84E9: jmp 0x171a86ec */
L_171A84EE:
    /* cmp MEM8(ebp + (-0x15)), 2 */ /* 0x171A84EE: cmp byte ptr [ebp - 0x15], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x15))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8528; /* 0x171A84F2: je 0x171a8528 */
L_171A84F4:
    /* cmp MEM8(ebp + (-0x15)), 0 */ /* 0x171A84F4: cmp byte ptr [ebp - 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x15))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A851E; /* 0x171A84F8: jne 0x171a851e */
L_171A84FA:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x171A84FA: push dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x24)); /* 0x171A84FD: mov ecx, dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x171A8500: push ebx */
    PUSH32(esp, edi); /* 0x171A8501: push edi */
    RECOMP_CALL(sub_171A7CC7); /* 0x171A8502: call 0x171a7cc7 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171A8507: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171A86DE; /* 0x171A8509: jl 0x171a86de */
L_171A850F:
    eax = ebp + (-0x15); /* 0x171A850F: lea eax, [ebp - 0x15] */
    PUSH32(esp, eax); /* 0x171A8512: push eax */
    PUSH32(esp, ebx); /* 0x171A8513: push ebx */
    PUSH32(esp, edi); /* 0x171A8514: push edi */
    RECOMP_CALL(sub_171A559C); /* 0x171A8515: call 0x171a559c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A851A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A84EE; /* 0x171A851C: jne 0x171a84ee */
L_171A851E:
    esi = 0x8876038Fu; /* 0x171A851E: mov esi, 0x8876038f */
    goto L_171A86E0; /* 0x171A8523: jmp 0x171a86e0 */
L_171A8528:
    eax = ebp + (-0x15); /* 0x171A8528: lea eax, [ebp - 0x15] */
    PUSH32(esp, eax); /* 0x171A852B: push eax */
    PUSH32(esp, ebx); /* 0x171A852C: push ebx */
    PUSH32(esp, edi); /* 0x171A852D: push edi */
    RECOMP_CALL(sub_171A559C); /* 0x171A852E: call 0x171a559c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A8533: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A851E; /* 0x171A8535: je 0x171a851e */
L_171A8537:
    /* cmp MEM8(ebp + (-0x15)), 3 */ /* 0x171A8537: cmp byte ptr [ebp - 0x15], 3 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x15))) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A85A4; /* 0x171A853B: je 0x171a85a4 */
L_171A853D:
    PUSH32(esp, 0x10u); /* 0x171A853D: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A853F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A8544: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171A8545: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171A8547: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A855E; /* 0x171A8549: je 0x171a855e */
L_171A854B:
    MEM32(eax) = ecx; /* 0x171A854B: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x171A854D: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = 5; /* 0x171A8550: mov dword ptr [eax + 8], 5 */
    MEM32(eax + 0xC) = ecx; /* 0x171A8557: mov dword ptr [eax + 0xc], ecx */
    esi = eax; /* 0x171A855A: mov esi, eax */
    goto L_171A8560; /* 0x171A855C: jmp 0x171a8560 */
L_171A855E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A855E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A8560:
    /* cmp esi, ecx */ /* 0x171A8560: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A859E; /* 0x171A8562: jne 0x171a859e */
L_171A8564:
    esi = 0x8007000Eu; /* 0x171A8564: mov esi, 0x8007000e */
    goto L_171A86E0; /* 0x171A8569: jmp 0x171a86e0 */
L_171A856E:
    /* cmp MEM8(ebp + (-0x15)), 0 */ /* 0x171A856E: cmp byte ptr [ebp - 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x15))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8578; /* 0x171A8572: jne 0x171a8578 */
L_171A8574:
    PUSH32(esp, 1); /* 0x171A8574: push 1 */
    goto L_171A8580; /* 0x171A8576: jmp 0x171a8580 */
L_171A8578:
    /* cmp MEM8(ebp + (-0x15)), 1 */ /* 0x171A8578: cmp byte ptr [ebp - 0x15], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x15))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A85EC; /* 0x171A857C: jne 0x171a85ec */
L_171A857E:
    PUSH32(esp, 0); /* 0x171A857E: push 0 */
L_171A8580:
    ecx = MEM32(ebp + (-0x24)); /* 0x171A8580: mov ecx, dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x171A8583: push esi */
    PUSH32(esp, ebx); /* 0x171A8584: push ebx */
    PUSH32(esp, edi); /* 0x171A8585: push edi */
    RECOMP_CALL(sub_171A5F20); /* 0x171A8586: call 0x171a5f20 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A858B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A85CB; /* 0x171A858D: jl 0x171a85cb */
L_171A858F:
    eax = ebp + (-0x15); /* 0x171A858F: lea eax, [ebp - 0x15] */
    PUSH32(esp, eax); /* 0x171A8592: push eax */
    PUSH32(esp, ebx); /* 0x171A8593: push ebx */
    PUSH32(esp, edi); /* 0x171A8594: push edi */
    RECOMP_CALL(sub_171A559C); /* 0x171A8595: call 0x171a559c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171A859A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A85CF; /* 0x171A859C: je 0x171a85cf */
L_171A859E:
    /* cmp MEM8(ebp + (-0x15)), 2 */ /* 0x171A859E: cmp byte ptr [ebp - 0x15], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x15))) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A856E; /* 0x171A85A2: jne 0x171a856e */
L_171A85A4:
    PUSH32(esp, 0xCu); /* 0x171A85A4: push 0xc */
    RECOMP_CALL(sub_1721B01C); /* 0x171A85A6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A85AB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171A85AD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A85AF: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A860B; /* 0x171A85B0: je 0x171a860b */
L_171A85B2:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171A85B2: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(eax) = ecx; /* 0x171A85B5: mov dword ptr [eax], ecx */
    ecx = esi; /* 0x171A85B7: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x171A85B9: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171A85BB: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x171A85BD: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = esi; /* 0x171A85C0: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = ecx; /* 0x171A85C3: mov dword ptr [eax + 8], ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x171A85C6: mov dword ptr [ebp - 0x20], eax */
    goto L_171A860E; /* 0x171A85C9: jmp 0x171a860e */
L_171A85CB:
    edi = eax; /* 0x171A85CB: mov edi, eax */
    goto L_171A85F1; /* 0x171A85CD: jmp 0x171a85f1 */
L_171A85CF:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171A85CF: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x171A85D2: push 1 */
    RECOMP_CALL(sub_171A75B4); /* 0x171A85D4: call 0x171a75b4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x171A85D9: push 1 */
    ecx = esi; /* 0x171A85DB: mov ecx, esi */
    RECOMP_CALL(sub_171A75DA); /* 0x171A85DD: call 0x171a75da */
    RECOMP_FLAGS_IN();
    eax = 0x8876038Fu; /* 0x171A85E2: mov eax, 0x8876038f */
    goto L_171A86EC; /* 0x171A85E7: jmp 0x171a86ec */
L_171A85EC:
    edi = 0x8876038Fu; /* 0x171A85EC: mov edi, 0x8876038f */
L_171A85F1:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171A85F1: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x171A85F4: push 1 */
    RECOMP_CALL(sub_171A75B4); /* 0x171A85F6: call 0x171a75b4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x171A85FB: push 1 */
    ecx = esi; /* 0x171A85FD: mov ecx, esi */
    RECOMP_CALL(sub_171A75DA); /* 0x171A85FF: call 0x171a75da */
    RECOMP_FLAGS_IN();
L_171A8604:
    eax = edi; /* 0x171A8604: mov eax, edi */
    goto L_171A86EC; /* 0x171A8606: jmp 0x171a86ec */
L_171A860B:
    MEM32(ebp + (-0x20)) = ebx; /* 0x171A860B: mov dword ptr [ebp - 0x20], ebx */
L_171A860E:
    /* cmp MEM32(ebp + (-0x20)), ebx */ /* 0x171A860E: cmp dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8633; /* 0x171A8611: jne 0x171a8633 */
L_171A8613:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171A8613: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x171A8616: push 1 */
    RECOMP_CALL(sub_171A75B4); /* 0x171A8618: call 0x171a75b4 */
    RECOMP_FLAGS_IN();
    /* cmp esi, ebx */ /* 0x171A861D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A84E4; /* 0x171A861F: je 0x171a84e4 */
L_171A8625:
    PUSH32(esp, 1); /* 0x171A8625: push 1 */
    ecx = esi; /* 0x171A8627: mov ecx, esi */
    RECOMP_CALL(sub_171A75DA); /* 0x171A8629: call 0x171a75da */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171A84E4; /* 0x171A862E: jmp 0x171a84e4 */
L_171A8633:
    /* cmp MEM32(ebp + (-0x28)), 0 */ /* 0x171A8633: cmp dword ptr [ebp - 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8677; /* 0x171A8637: je 0x171a8677 */
L_171A8639:
    eax = MEM32(ebp + (-0x28)); /* 0x171A8639: mov eax, dword ptr [ebp - 0x28] */
    edx = eax + 0x1; /* 0x171A863C: lea edx, [eax + 1] */
L_171A863F:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A863F: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A8641: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171A8642: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A863F; /* 0x171A8644: jne 0x171a863f */
L_171A8646:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A8646: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171A8648: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171A864B: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171A864C: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A8651: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171A8653: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8655: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A8662; /* 0x171A8656: jne 0x171a8662 */
L_171A8658:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171A8658: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x171A865B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    goto L_171A86B3; /* 0x171A8660: jmp 0x171a86b3 */
L_171A8662:
    ecx = esi; /* 0x171A8662: mov ecx, esi */
    esi = MEM32(ebp + (-0x28)); /* 0x171A8664: mov esi, dword ptr [ebp - 0x28] */
    eax = ecx; /* 0x171A8667: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A8669: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A8669: shr ecx, 2 */
    edi = ebx; /* 0x171A866C: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A866E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171A8670: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A8672: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A8675: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171A8677:
    PUSH32(esp, 0x34u); /* 0x171A8677: push 0x34 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A8679: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A867E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8680: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8696; /* 0x171A8681: je 0x171a8696 */
L_171A8683:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171A8683: push dword ptr [ebp - 0x20] */
    ecx = ebp + (-0x14); /* 0x171A8686: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x171A8689: push ecx */
    PUSH32(esp, ebx); /* 0x171A868A: push ebx */
    ecx = eax; /* 0x171A868B: mov ecx, eax */
    RECOMP_CALL(sub_171A9466); /* 0x171A868D: call 0x171a9466 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A8692: mov esi, eax */
    goto L_171A8698; /* 0x171A8694: jmp 0x171a8698 */
L_171A8696:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A8696: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A8698:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171A8698: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x171A869B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x171A86A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A86A2: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A86B9; /* 0x171A86A3: jne 0x171a86b9 */
L_171A86A5:
    /* test ebx, ebx */ /* 0x171A86A5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A84E4; /* 0x171A86A7: je 0x171a84e4 */
L_171A86AD:
    PUSH32(esp, ebx); /* 0x171A86AD: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171A86AE: call 0x1721b224 */
    RECOMP_FLAGS_IN();
L_171A86B3:
    ecx = POP32_VAL(esp); /* 0x171A86B3: pop ecx */
    RECOMP_BACKEDGE();
    goto L_171A84E4; /* 0x171A86B4: jmp 0x171a84e4 */
L_171A86B9:
    ecx = MEM32(ebp + (-0x24)); /* 0x171A86B9: mov ecx, dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x171A86BC: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x171A86BD: add ecx, 0x34 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A96E9); /* 0x171A86C0: call 0x171a96e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A86C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A86D0; /* 0x171A86C7: jne 0x171a86d0 */
L_171A86C9:
    edi = 0x8007000Eu; /* 0x171A86C9: mov edi, 0x8007000e */
    goto L_171A86D2; /* 0x171A86CE: jmp 0x171a86d2 */
L_171A86D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A86D0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A86D2:
    ecx = esi; /* 0x171A86D2: mov ecx, esi */
    RECOMP_CALL(sub_171A52D2); /* 0x171A86D4: call 0x171a52d2 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171A8604; /* 0x171A86D9: jmp 0x171a8604 */
L_171A86DE:
    esi = eax; /* 0x171A86DE: mov esi, eax */
L_171A86E0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171A86E0: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x171A86E3: push 1 */
    RECOMP_CALL(sub_171A75B4); /* 0x171A86E5: call 0x171a75b4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A86EA: mov eax, esi */
L_171A86EC:
    esi = POP32_VAL(esp); /* 0x171A86EC: pop esi */
L_171A86ED:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A86ED: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A86F0: pop edi */
    ebx = POP32_VAL(esp); /* 0x171A86F1: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A86F2: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A86F7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A86F8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A8700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8700u);

L_171A8700:
    edi = edi; /* 0x171A8700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8702: push ebp */
    ebp = esp; /* 0x171A8703: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A8705: push ecx */
    PUSH32(esp, esi); /* 0x171A8706: push esi */
    PUSH32(esp, edi); /* 0x171A8707: push edi */
    edi = ecx; /* 0x171A8708: mov edi, ecx */
    eax = MEM32(edi + 0x18); /* 0x171A870A: mov eax, dword ptr [edi + 0x18] */
    esi = MEM32(eax + 0x10); /* 0x171A870D: mov esi, dword ptr [eax + 0x10] */
    ecx = eax + 0x20; /* 0x171A8710: lea ecx, [eax + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171A8713: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x171A8715: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171A8717: mov dword ptr [ebp - 4], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A8731; /* 0x171A871A: jae 0x171a8731 */
L_171A871C:
    PUSH32(esp, esi); /* 0x171A871C: push esi */
    eax = ebp + (-0x4); /* 0x171A871D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171A8720: push eax */
    ecx = edi; /* 0x171A8721: mov ecx, edi */
    RECOMP_CALL(sub_171A8476); /* 0x171A8723: call 0x171a8476 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8728: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A8733; /* 0x171A872A: jl 0x171a8733 */
L_171A872C:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x171A872C: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A871C; /* 0x171A872F: jb 0x171a871c */
L_171A8731:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A8731: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A8733:
    edi = POP32_VAL(esp); /* 0x171A8733: pop edi */
    esi = POP32_VAL(esp); /* 0x171A8734: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A8735: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A8736: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A873C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A873Cu);

L_171A873C:
    edi = edi; /* 0x171A873C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A873E: push ebp */
    ebp = esp; /* 0x171A873F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A8741: push esi */
    PUSH32(esp, 0x54u); /* 0x171A8742: push 0x54 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A8744: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8749: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A874B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8762; /* 0x171A874C: je 0x171a8762 */
L_171A874E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A874E: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x171A8751: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8753: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A8756: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_171A738F); /* 0x171A8759: call 0x171a738f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A875E: mov esi, eax */
    goto L_171A8764; /* 0x171A8760: jmp 0x171a8764 */
L_171A8762:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A8762: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A8764:
    /* test esi, esi */ /* 0x171A8764: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A876F; /* 0x171A8766: jne 0x171a876f */
L_171A8768:
    eax = 0x8007000Eu; /* 0x171A8768: mov eax, 0x8007000e */
    goto L_171A87A9; /* 0x171A876D: jmp 0x171a87a9 */
L_171A876F:
    PUSH32(esp, edi); /* 0x171A876F: push edi */
    ecx = esi; /* 0x171A8770: mov ecx, esi */
    RECOMP_CALL(sub_171A7404); /* 0x171A8772: call 0x171a7404 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A8777: mov edi, eax */
    /* test edi, edi */ /* 0x171A8779: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A8787; /* 0x171A877B: jge 0x171a8787 */
L_171A877D:
    eax = MEM32(esi); /* 0x171A877D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A877F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171A8780: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171A8783: mov eax, edi */
    goto L_171A87A8; /* 0x171A8785: jmp 0x171a87a8 */
L_171A8787:
    ecx = esi; /* 0x171A8787: mov ecx, esi */
    RECOMP_CALL(sub_171A8700); /* 0x171A8789: call 0x171a8700 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A878E: mov edi, eax */
    /* test edi, edi */ /* 0x171A8790: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A877D; /* 0x171A8792: jl 0x171a877d */
L_171A8794:
    ecx = esi; /* 0x171A8794: mov ecx, esi */
    RECOMP_CALL(sub_171A7F16); /* 0x171A8796: call 0x171a7f16 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A879B: mov edi, eax */
    /* test edi, edi */ /* 0x171A879D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A877D; /* 0x171A879F: jl 0x171a877d */
L_171A87A1:
    eax = MEM32(ebp + 0x14); /* 0x171A87A1: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = esi; /* 0x171A87A4: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A87A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A87A8:
    edi = POP32_VAL(esp); /* 0x171A87A8: pop edi */
L_171A87A9:
    esi = POP32_VAL(esp); /* 0x171A87A9: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A87AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A87AB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A87B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A87B3u);

L_171A87B3:
    edi = edi; /* 0x171A87B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A87B5: push ebp */
    ebp = esp; /* 0x171A87B6: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171A87B8: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A87B9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A87BC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A87BF: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17001094)); /* 0x171A87C2: call dword ptr [0x17001094] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A87C8: mov edi, eax */
    /* test edi, edi */ /* 0x171A87CA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A87D8; /* 0x171A87CC: jne 0x171a87d8 */
L_171A87CE:
    eax = 0x8876038Au; /* 0x171A87CE: mov eax, 0x8876038a */
    goto L_171A8883; /* 0x171A87D3: jmp 0x171a8883 */
L_171A87D8:
    PUSH32(esp, edi); /* 0x171A87D8: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A87D9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17001098)); /* 0x171A87DC: call dword ptr [0x17001098] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A87E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A87F0; /* 0x171A87E4: jne 0x171a87f0 */
L_171A87E6:
    eax = 0x8876038Bu; /* 0x171A87E6: mov eax, 0x8876038b */
    goto L_171A8883; /* 0x171A87EB: jmp 0x171a8883 */
L_171A87F0:
    PUSH32(esp, ebx); /* 0x171A87F0: push ebx */
    PUSH32(esp, esi); /* 0x171A87F1: push esi */
    PUSH32(esp, eax); /* 0x171A87F2: push eax */
    RECOMP_ICALL(MEM32(0x1700109C)); /* 0x171A87F3: call dword ptr [0x1700109c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171A87F9: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A87FA: push dword ptr [ebp + 8] */
    esi = eax; /* 0x171A87FD: mov esi, eax */
    RECOMP_ICALL(MEM32(0x170010A0)); /* 0x171A87FF: call dword ptr [0x170010a0] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x171A8805: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x171A8807: mov ebx, eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8873; /* 0x171A8809: je 0x171a8873 */
L_171A880B:
    /* test ebx, ebx */ /* 0x171A880B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8873; /* 0x171A880D: je 0x171a8873 */
L_171A880F:
    PUSH32(esp, 0x54u); /* 0x171A880F: push 0x54 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A8811: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8816: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8818: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A882C; /* 0x171A8819: je 0x171a882c */
L_171A881B:
    PUSH32(esp, ebx); /* 0x171A881B: push ebx */
    PUSH32(esp, esi); /* 0x171A881C: push esi */
    PUSH32(esp, edi); /* 0x171A881D: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171A881E: push dword ptr [ebp + 0x14] */
    ecx = eax; /* 0x171A8821: mov ecx, eax */
    RECOMP_CALL(sub_171A7317); /* 0x171A8823: call 0x171a7317 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A8828: mov esi, eax */
    goto L_171A882E; /* 0x171A882A: jmp 0x171a882e */
L_171A882C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A882C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A882E:
    /* test esi, esi */ /* 0x171A882E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A8839; /* 0x171A8830: jne 0x171a8839 */
L_171A8832:
    esi = 0x8007000Eu; /* 0x171A8832: mov esi, 0x8007000e */
    goto L_171A8878; /* 0x171A8837: jmp 0x171a8878 */
L_171A8839:
    ecx = esi; /* 0x171A8839: mov ecx, esi */
    RECOMP_CALL(sub_171A7404); /* 0x171A883B: call 0x171a7404 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A8840: mov edi, eax */
    /* test edi, edi */ /* 0x171A8842: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A8860; /* 0x171A8844: jl 0x171a8860 */
L_171A8846:
    ecx = esi; /* 0x171A8846: mov ecx, esi */
    RECOMP_CALL(sub_171A8700); /* 0x171A8848: call 0x171a8700 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A884D: mov edi, eax */
    /* test edi, edi */ /* 0x171A884F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A8860; /* 0x171A8851: jl 0x171a8860 */
L_171A8853:
    ecx = esi; /* 0x171A8853: mov ecx, esi */
    RECOMP_CALL(sub_171A7F16); /* 0x171A8855: call 0x171a7f16 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A885A: mov edi, eax */
    /* test edi, edi */ /* 0x171A885C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A886A; /* 0x171A885E: jge 0x171a886a */
L_171A8860:
    eax = MEM32(esi); /* 0x171A8860: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A8862: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171A8863: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171A8866: mov eax, edi */
    goto L_171A8881; /* 0x171A8868: jmp 0x171a8881 */
L_171A886A:
    eax = MEM32(ebp + 0x18); /* 0x171A886A: mov eax, dword ptr [ebp + 0x18] */
    MEM32(eax) = esi; /* 0x171A886D: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A886F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A8881; /* 0x171A8871: jmp 0x171a8881 */
L_171A8873:
    esi = 0x8876038Bu; /* 0x171A8873: mov esi, 0x8876038b */
L_171A8878:
    PUSH32(esp, edi); /* 0x171A8878: push edi */
    RECOMP_ICALL(MEM32(0x170010A4)); /* 0x171A8879: call dword ptr [0x170010a4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A887F: mov eax, esi */
L_171A8881:
    esi = POP32_VAL(esp); /* 0x171A8881: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A8882: pop ebx */
L_171A8883:
    edi = POP32_VAL(esp); /* 0x171A8883: pop edi */
    ebp = POP32_VAL(esp); /* 0x171A8884: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A8885: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A888D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A888Du);

L_171A888D:
    edi = edi; /* 0x171A888D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A888F: push ebp */
    ebp = esp; /* 0x171A8890: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171A8892: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A8895: push esi */
    PUSH32(esp, edi); /* 0x171A8896: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A8897: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A8899: push edi */
    PUSH32(esp, edi); /* 0x171A889A: push edi */
    PUSH32(esp, 3); /* 0x171A889B: push 3 */
    PUSH32(esp, edi); /* 0x171A889D: push edi */
    PUSH32(esp, 1); /* 0x171A889E: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x171A88A0: push 0x80000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A88A5: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x171A88A8: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A88AE: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171A88B0: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x171A88B3: mov dword ptr [ebp - 4], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A88C2; /* 0x171A88B6: jne 0x171a88c2 */
L_171A88B8:
    eax = 0x88760389u; /* 0x171A88B8: mov eax, 0x88760389 */
    goto L_171A899C; /* 0x171A88BD: jmp 0x171a899c */
L_171A88C2:
    PUSH32(esp, ebx); /* 0x171A88C2: push ebx */
    eax = ebp + (-0x8); /* 0x171A88C3: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171A88C6: push eax */
    PUSH32(esp, esi); /* 0x171A88C7: push esi */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171A88C8: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A88CE: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x171A88D1: mov dword ptr [ebp - 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A88DD; /* 0x171A88D4: jne 0x171a88dd */
L_171A88D6:
    esi = 0x8876038Fu; /* 0x171A88D6: mov esi, 0x8876038f */
    goto L_171A8956; /* 0x171A88DB: jmp 0x171a8956 */
L_171A88DD:
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x171A88DD: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171A88E9; /* 0x171A88E0: jg 0x171a88e9 */
L_171A88E2:
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171A88D6; /* 0x171A88E2: jl 0x171a88d6 */
L_171A88E4:
    /* cmp eax, 0x20u */ /* 0x171A88E4: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A88D6; /* 0x171A88E7: jb 0x171a88d6 */
L_171A88E9:
    PUSH32(esp, edi); /* 0x171A88E9: push edi */
    PUSH32(esp, edi); /* 0x171A88EA: push edi */
    PUSH32(esp, edi); /* 0x171A88EB: push edi */
    PUSH32(esp, 2); /* 0x171A88EC: push 2 */
    PUSH32(esp, edi); /* 0x171A88EE: push edi */
    PUSH32(esp, esi); /* 0x171A88EF: push esi */
    RECOMP_ICALL(MEM32(0x17001088)); /* 0x171A88F0: call dword ptr [0x17001088] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A88F6: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x171A88F8: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A88D6; /* 0x171A88FB: je 0x171a88d6 */
L_171A88FD:
    PUSH32(esp, edi); /* 0x171A88FD: push edi */
    PUSH32(esp, edi); /* 0x171A88FE: push edi */
    PUSH32(esp, edi); /* 0x171A88FF: push edi */
    PUSH32(esp, 4); /* 0x171A8900: push 4 */
    PUSH32(esp, ebx); /* 0x171A8902: push ebx */
    RECOMP_ICALL(MEM32(0x1700108C)); /* 0x171A8903: call dword ptr [0x1700108c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A8909: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171A890B: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8917; /* 0x171A890E: jne 0x171a8917 */
L_171A8910:
    esi = 0x8876038Fu; /* 0x171A8910: mov esi, 0x8876038f */
    goto L_171A894F; /* 0x171A8915: jmp 0x171a894f */
L_171A8917:
    PUSH32(esp, 0x54u); /* 0x171A8917: push 0x54 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A8919: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A891E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A8920: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A893B; /* 0x171A8921: je 0x171a893b */
L_171A8923:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171A8923: push dword ptr [ebp - 0xc] */
    ecx = eax; /* 0x171A8926: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8928: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171A892B: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171A892C: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A892F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171A729E); /* 0x171A8932: call 0x171a729e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A8937: mov esi, eax */
    goto L_171A893D; /* 0x171A8939: jmp 0x171a893d */
L_171A893B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A893B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A893D:
    /* cmp esi, edi */ /* 0x171A893D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8963; /* 0x171A893F: jne 0x171a8963 */
L_171A8941:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8941: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17001090)); /* 0x171A8944: call dword ptr [0x17001090] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x171A894A: mov esi, 0x8007000e */
L_171A894F:
    PUSH32(esp, ebx); /* 0x171A894F: push ebx */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A8950: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_171A8956:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171A8956: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A8959: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A895F: mov eax, esi */
    goto L_171A899B; /* 0x171A8961: jmp 0x171a899b */
L_171A8963:
    ecx = esi; /* 0x171A8963: mov ecx, esi */
    RECOMP_CALL(sub_171A7404); /* 0x171A8965: call 0x171a7404 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A896A: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171A896C: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171A897A; /* 0x171A896E: jge 0x171a897a */
L_171A8970:
    eax = MEM32(esi); /* 0x171A8970: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A8972: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171A8973: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x171A8976: mov eax, ebx */
    goto L_171A899B; /* 0x171A8978: jmp 0x171a899b */
L_171A897A:
    ecx = esi; /* 0x171A897A: mov ecx, esi */
    RECOMP_CALL(sub_171A8700); /* 0x171A897C: call 0x171a8700 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A8981: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171A8983: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171A8970; /* 0x171A8985: jl 0x171a8970 */
L_171A8987:
    ecx = esi; /* 0x171A8987: mov ecx, esi */
    RECOMP_CALL(sub_171A7F16); /* 0x171A8989: call 0x171a7f16 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A898E: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171A8990: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171A8970; /* 0x171A8992: jl 0x171a8970 */
L_171A8994:
    eax = MEM32(ebp + 0x10); /* 0x171A8994: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = esi; /* 0x171A8997: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A8999: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A899B:
    ebx = POP32_VAL(esp); /* 0x171A899B: pop ebx */
L_171A899C:
    edi = POP32_VAL(esp); /* 0x171A899C: pop edi */
    esi = POP32_VAL(esp); /* 0x171A899D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A899E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A899F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A89A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A89A7u);

L_171A89A7:
    edi = edi; /* 0x171A89A7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A89A9: push ebp */
    ebp = esp; /* 0x171A89AA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x120u; /* 0x171A89AC: sub esp, 0x120 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A89B2: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171A89B7: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171A89B8: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171A89BB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A89BC: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171A89BF: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171A89C0: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A89C3: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x114)) = edi; /* 0x171A89C6: mov dword ptr [ebp - 0x114], edi */
    MEM32(ebp + (-0x120)) = ebx; /* 0x171A89CC: mov dword ptr [ebp - 0x120], ebx */
    RECOMP_CALL(sub_1702B1FB); /* 0x171A89D2: call 0x1702b1fb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A89D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A8A07; /* 0x171A89D9: jne 0x171a8a07 */
L_171A89DB:
    PUSH32(esp, 0x104u); /* 0x171A89DB: push 0x104 */
    eax = ebp + (-0x108); /* 0x171A89E0: lea eax, [ebp - 0x108] */
    PUSH32(esp, esi); /* 0x171A89E6: push esi */
    PUSH32(esp, eax); /* 0x171A89E7: push eax */
    RECOMP_CALL(sub_1721B550); /* 0x171A89E8: call 0x1721b550 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A89ED: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171A89F0: push ebx */
    PUSH32(esp, edi); /* 0x171A89F1: push edi */
    eax = ebp + (-0x108); /* 0x171A89F2: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171A89F8: push eax */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x171A89F9: mov byte ptr [ebp - 5], 0 */
    RECOMP_CALL(sub_171A888D); /* 0x171A89FD: call 0x171a888d */
    RECOMP_FLAGS_IN();
    goto L_171A8B2F; /* 0x171A8A02: jmp 0x171a8b2f */
L_171A8A07:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A8A07: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A8A09: push edi */
    PUSH32(esp, edi); /* 0x171A8A0A: push edi */
    PUSH32(esp, 3); /* 0x171A8A0B: push 3 */
    PUSH32(esp, edi); /* 0x171A8A0D: push edi */
    PUSH32(esp, 1); /* 0x171A8A0E: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x171A8A10: push 0x80000000 */
    PUSH32(esp, esi); /* 0x171A8A15: push esi */
    RECOMP_ICALL(MEM32(0x170010AC)); /* 0x171A8A16: call dword ptr [0x170010ac] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A8A1C: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171A8A1E: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10C)) = esi; /* 0x171A8A21: mov dword ptr [ebp - 0x10c], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8A33; /* 0x171A8A27: jne 0x171a8a33 */
L_171A8A29:
    eax = 0x88760389u; /* 0x171A8A29: mov eax, 0x88760389 */
    goto L_171A8B2F; /* 0x171A8A2E: jmp 0x171a8b2f */
L_171A8A33:
    eax = ebp + (-0x118); /* 0x171A8A33: lea eax, [ebp - 0x118] */
    PUSH32(esp, eax); /* 0x171A8A39: push eax */
    PUSH32(esp, esi); /* 0x171A8A3A: push esi */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171A8A3B: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A8A41: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x11C)) = eax; /* 0x171A8A44: mov dword ptr [ebp - 0x11c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8A56; /* 0x171A8A4A: jne 0x171a8a56 */
L_171A8A4C:
    esi = 0x8876038Fu; /* 0x171A8A4C: mov esi, 0x8876038f */
    goto L_171A8AE4; /* 0x171A8A51: jmp 0x171a8ae4 */
L_171A8A56:
    /* cmp MEM32(ebp + (-0x118)), edi */ /* 0x171A8A56: cmp dword ptr [ebp - 0x118], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171A8A65; /* 0x171A8A5C: jg 0x171a8a65 */
L_171A8A5E:
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171A8A4C; /* 0x171A8A5E: jl 0x171a8a4c */
L_171A8A60:
    /* cmp eax, 0x20u */ /* 0x171A8A60: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A8A4C; /* 0x171A8A63: jb 0x171a8a4c */
L_171A8A65:
    PUSH32(esp, edi); /* 0x171A8A65: push edi */
    PUSH32(esp, edi); /* 0x171A8A66: push edi */
    PUSH32(esp, edi); /* 0x171A8A67: push edi */
    PUSH32(esp, 2); /* 0x171A8A68: push 2 */
    PUSH32(esp, edi); /* 0x171A8A6A: push edi */
    PUSH32(esp, esi); /* 0x171A8A6B: push esi */
    RECOMP_ICALL(MEM32(0x17001088)); /* 0x171A8A6C: call dword ptr [0x17001088] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A8A72: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x171A8A74: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8A4C; /* 0x171A8A77: je 0x171a8a4c */
L_171A8A79:
    PUSH32(esp, edi); /* 0x171A8A79: push edi */
    PUSH32(esp, edi); /* 0x171A8A7A: push edi */
    PUSH32(esp, edi); /* 0x171A8A7B: push edi */
    PUSH32(esp, 4); /* 0x171A8A7C: push 4 */
    PUSH32(esp, ebx); /* 0x171A8A7E: push ebx */
    RECOMP_ICALL(MEM32(0x1700108C)); /* 0x171A8A7F: call dword ptr [0x1700108c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A8A85: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x110)) = eax; /* 0x171A8A87: mov dword ptr [ebp - 0x110], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8A96; /* 0x171A8A8D: jne 0x171a8a96 */
L_171A8A8F:
    esi = 0x8876038Fu; /* 0x171A8A8F: mov esi, 0x8876038f */
    goto L_171A8ADD; /* 0x171A8A94: jmp 0x171a8add */
L_171A8A96:
    PUSH32(esp, 0x54u); /* 0x171A8A96: push 0x54 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A8A98: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A8A9D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A8A9F: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8AC6; /* 0x171A8AA0: je 0x171a8ac6 */
L_171A8AA2:
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x171A8AA2: push dword ptr [ebp - 0x11c] */
    ecx = eax; /* 0x171A8AA8: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x171A8AAA: push dword ptr [ebp - 0x110] */
    PUSH32(esp, ebx); /* 0x171A8AB0: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x171A8AB1: push dword ptr [ebp - 0x10c] */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x171A8AB7: push dword ptr [ebp - 0x114] */
    RECOMP_CALL(sub_171A729E); /* 0x171A8ABD: call 0x171a729e */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A8AC2: mov esi, eax */
    goto L_171A8AC8; /* 0x171A8AC4: jmp 0x171a8ac8 */
L_171A8AC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A8AC6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A8AC8:
    /* cmp esi, edi */ /* 0x171A8AC8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8AF4; /* 0x171A8ACA: jne 0x171a8af4 */
L_171A8ACC:
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x171A8ACC: push dword ptr [ebp - 0x110] */
    RECOMP_ICALL(MEM32(0x17001090)); /* 0x171A8AD2: call dword ptr [0x17001090] */
    RECOMP_FLAGS_IN();
    esi = 0x8007000Eu; /* 0x171A8AD8: mov esi, 0x8007000e */
L_171A8ADD:
    PUSH32(esp, ebx); /* 0x171A8ADD: push ebx */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A8ADE: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
L_171A8AE4:
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x171A8AE4: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x171A8AEA: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A8AF0: mov eax, esi */
    goto L_171A8B2F; /* 0x171A8AF2: jmp 0x171a8b2f */
L_171A8AF4:
    ecx = esi; /* 0x171A8AF4: mov ecx, esi */
    RECOMP_CALL(sub_171A7404); /* 0x171A8AF6: call 0x171a7404 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A8AFB: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171A8AFD: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171A8B1B; /* 0x171A8AFF: jl 0x171a8b1b */
L_171A8B01:
    ecx = esi; /* 0x171A8B01: mov ecx, esi */
    RECOMP_CALL(sub_171A8700); /* 0x171A8B03: call 0x171a8700 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A8B08: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171A8B0A: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171A8B1B; /* 0x171A8B0C: jl 0x171a8b1b */
L_171A8B0E:
    ecx = esi; /* 0x171A8B0E: mov ecx, esi */
    RECOMP_CALL(sub_171A7F16); /* 0x171A8B10: call 0x171a7f16 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A8B15: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171A8B17: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171A8B25; /* 0x171A8B19: jge 0x171a8b25 */
L_171A8B1B:
    eax = MEM32(esi); /* 0x171A8B1B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A8B1D: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171A8B1E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x171A8B21: mov eax, ebx */
    goto L_171A8B2F; /* 0x171A8B23: jmp 0x171a8b2f */
L_171A8B25:
    eax = MEM32(ebp + (-0x120)); /* 0x171A8B25: mov eax, dword ptr [ebp - 0x120] */
    MEM32(eax) = esi; /* 0x171A8B2B: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A8B2D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A8B2F:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A8B2F: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A8B32: pop edi */
    esi = POP32_VAL(esp); /* 0x171A8B33: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A8B34: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A8B35: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A8B3A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A8B3B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A8B43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8B43u);

L_171A8B43:
    edi = edi; /* 0x171A8B43: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8B45: push ebp */
    ebp = esp; /* 0x171A8B46: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A8B48: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x171A8B49: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x171A8B4C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A8B4E: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8C81; /* 0x171A8B4F: je 0x171a8c81 */
L_171A8B55:
    esi = MEM32(ebp + 0xC); /* 0x171A8B55: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x171A8B58: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8C81; /* 0x171A8B5A: je 0x171a8c81 */
L_171A8B60:
    PUSH32(esp, edi); /* 0x171A8B60: push edi */
    PUSH32(esp, 0x17250EFCu); /* 0x171A8B61: push 0x17250efc */
    RECOMP_ICALL(MEM32(0x170010D8)); /* 0x171A8B66: call dword ptr [0x170010d8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x171A8B6C: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_171AD5D7); /* 0x171A8B6F: call 0x171ad5d7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x171A8B74: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171A8B77: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A8C17; /* 0x171A8B7A: je 0x171a8c17 */
L_171A8B80:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A8B80: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A8BF5; /* 0x171A8B81: je 0x171a8bf5 */
L_171A8B83:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A8B83: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A8BC1; /* 0x171A8B84: je 0x171a8bc1 */
L_171A8B86:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A8B86: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A8B93; /* 0x171A8B87: je 0x171a8b93 */
L_171A8B89:
    edi = 0x80070057u; /* 0x171A8B89: mov edi, 0x80070057 */
    goto L_171A8C71; /* 0x171A8B8E: jmp 0x171a8c71 */
L_171A8B93:
    eax = ebp + 0x14; /* 0x171A8B93: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x171A8B96: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8B97: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171A8B9A: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x171A8B9D: push dword ptr [esi] */
    RECOMP_CALL(sub_171A873C); /* 0x171A8B9F: call 0x171a873c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A8BA4: mov edi, eax */
    /* test edi, edi */ /* 0x171A8BA6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A8C68; /* 0x171A8BA8: jge 0x171a8c68 */
L_171A8BAE:
    eax = ebp + 0x8; /* 0x171A8BAE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A8BB1: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8BB2: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171A8BB5: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x171A8BB8: push dword ptr [esi] */
    RECOMP_CALL(sub_171A5869); /* 0x171A8BBA: call 0x171a5869 */
    RECOMP_FLAGS_IN();
    goto L_171A8C37; /* 0x171A8BBF: jmp 0x171a8c37 */
L_171A8BC1:
    eax = ebp + 0x14; /* 0x171A8BC1: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x171A8BC4: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8BC5: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x171A8BC8: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171A8BCB: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x171A8BCE: push dword ptr [esi] */
    RECOMP_CALL(sub_171A87B3); /* 0x171A8BD0: call 0x171a87b3 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A8BD5: mov edi, eax */
    /* test edi, edi */ /* 0x171A8BD7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A8C68; /* 0x171A8BD9: jge 0x171a8c68 */
L_171A8BDF:
    eax = ebp + 0x8; /* 0x171A8BDF: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A8BE2: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8BE3: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x171A8BE6: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171A8BE9: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x171A8BEC: push dword ptr [esi] */
    RECOMP_CALL(sub_171A58E6); /* 0x171A8BEE: call 0x171a58e6 */
    RECOMP_FLAGS_IN();
    goto L_171A8C37; /* 0x171A8BF3: jmp 0x171a8c37 */
L_171A8BF5:
    eax = ebp + 0x14; /* 0x171A8BF5: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x171A8BF8: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8BF9: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171A8BFC: push esi */
    RECOMP_CALL(sub_171A89A7); /* 0x171A8BFD: call 0x171a89a7 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A8C02: mov edi, eax */
    /* test edi, edi */ /* 0x171A8C04: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A8C68; /* 0x171A8C06: jge 0x171a8c68 */
L_171A8C08:
    eax = ebp + 0x8; /* 0x171A8C08: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A8C0B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8C0C: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171A8C0F: push esi */
    RECOMP_CALL(sub_171A5AC1); /* 0x171A8C10: call 0x171a5ac1 */
    RECOMP_FLAGS_IN();
    goto L_171A8C37; /* 0x171A8C15: jmp 0x171a8c37 */
L_171A8C17:
    eax = ebp + 0x14; /* 0x171A8C17: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x171A8C1A: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8C1B: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171A8C1E: push esi */
    RECOMP_CALL(sub_171A888D); /* 0x171A8C1F: call 0x171a888d */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A8C24: mov edi, eax */
    /* test edi, edi */ /* 0x171A8C26: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A8C68; /* 0x171A8C28: jge 0x171a8c68 */
L_171A8C2A:
    eax = ebp + 0x8; /* 0x171A8C2A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A8C2D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A8C2E: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171A8C31: push esi */
    RECOMP_CALL(sub_171A59C1); /* 0x171A8C32: call 0x171a59c1 */
    RECOMP_FLAGS_IN();
L_171A8C37:
    edi = eax; /* 0x171A8C37: mov edi, eax */
    /* test edi, edi */ /* 0x171A8C39: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A8C71; /* 0x171A8C3B: jl 0x171a8c71 */
L_171A8C3D:
    esi = MEM32(ebp + 0x8); /* 0x171A8C3D: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x171A8C40: mov ecx, esi */
    RECOMP_CALL(sub_171A5740); /* 0x171A8C42: call 0x171a5740 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A8C47: mov edi, eax */
    /* test edi, edi */ /* 0x171A8C49: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A8C60; /* 0x171A8C4B: jl 0x171a8c60 */
L_171A8C4D:
    PUSH32(esp, esi); /* 0x171A8C4D: push esi */
    RECOMP_CALL(sub_171AEE41); /* 0x171A8C4E: call 0x171aee41 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8C53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8C5C; /* 0x171A8C55: je 0x171a8c5c */
L_171A8C57:
    edi = 0x88760390u; /* 0x171A8C57: mov edi, 0x88760390 */
L_171A8C5C:
    /* test edi, edi */ /* 0x171A8C5C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171A8C6F; /* 0x171A8C5E: jge 0x171a8c6f */
L_171A8C60:
    eax = MEM32(esi); /* 0x171A8C60: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171A8C62: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171A8C63: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_171A8C71; /* 0x171A8C66: jmp 0x171a8c71 */
L_171A8C68:
    eax = MEM32(ebp + 0x14); /* 0x171A8C68: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebx) = eax; /* 0x171A8C6B: mov dword ptr [ebx], eax */
    goto L_171A8C71; /* 0x171A8C6D: jmp 0x171a8c71 */
L_171A8C6F:
    MEM32(ebx) = esi; /* 0x171A8C6F: mov dword ptr [ebx], esi */
L_171A8C71:
    PUSH32(esp, 0x17250EFCu); /* 0x171A8C71: push 0x17250efc */
    RECOMP_ICALL(MEM32(0x170010C0)); /* 0x171A8C76: call dword ptr [0x170010c0] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171A8C7C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x171A8C7E: pop edi */
    goto L_171A8C86; /* 0x171A8C7F: jmp 0x171a8c86 */
L_171A8C81:
    eax = 0x88760385u; /* 0x171A8C81: mov eax, 0x88760385 */
L_171A8C86:
    esi = POP32_VAL(esp); /* 0x171A8C86: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A8C87: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A8C88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A8C89: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A8C91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8C91u);

L_171A8C91:
    eax = ecx; /* 0x171A8C91: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171A8C93: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x171A8C96: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A8C9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A8CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8CA0u);

L_171A8CA0:
    edi = edi; /* 0x171A8CA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8CA2: push ebp */
    ebp = esp; /* 0x171A8CA3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A8CA5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171A8CA8: push esi */
    esi = ecx; /* 0x171A8CA9: mov esi, ecx */
    PUSH32(esp, 0x00010000u); /* 0x171A8CAB: push 0x10000 */
    MEM32(esi) = eax; /* 0x171A8CB0: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x171A8CB2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x171A8CB7: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171A8CBA: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171A8CBC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = POP32_VAL(esp); /* 0x171A8CBE: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x171A8CBF: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x171A8CC4: add eax, 0x8007000e */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x171A8CC9: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A8CCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A8CCB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A8CD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8CD3u);

L_171A8CD3:
    edi = edi; /* 0x171A8CD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8CD5: push ebp */
    ebp = esp; /* 0x171A8CD6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A8CD8: push ecx */
    PUSH32(esp, ebx); /* 0x171A8CD9: push ebx */
    PUSH32(esp, esi); /* 0x171A8CDA: push esi */
    esi = ecx; /* 0x171A8CDB: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x171A8CDD: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171A8CE0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8D15; /* 0x171A8CE2: je 0x171a8d15 */
L_171A8CE4:
    /* cmp MEM32(esi), 0 */ /* 0x171A8CE4: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8D15; /* 0x171A8CE7: je 0x171a8d15 */
L_171A8CE9:
    ebx = eax; /* 0x171A8CE9: mov ebx, eax */
    goto L_171A8D0B; /* 0x171A8CEB: jmp 0x171a8d0b */
L_171A8CED:
    PUSH32(esp, 0); /* 0x171A8CED: push 0 */
    eax = ebp + (-0x4); /* 0x171A8CEF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171A8CF2: push eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x171A8CF3: push dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x171A8CF6: push ebx */
    PUSH32(esp, MEM32(esi)); /* 0x171A8CF7: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x171A8CF9: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8CFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8D15; /* 0x171A8D01: je 0x171a8d15 */
L_171A8D03:
    eax = MEM32(ebp + (-0x4)); /* 0x171A8D03: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x171A8D06: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) - eax; /* 0x171A8D08: sub dword ptr [esi + 8], eax */
    _flag_k = FK_CMP;
L_171A8D0B:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x171A8D0B: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_171A8CED; /* 0x171A8D0F: jg 0x171a8ced */
L_171A8D11:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A8D11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A8D1A; /* 0x171A8D13: jmp 0x171a8d1a */
L_171A8D15:
    eax = 0x80004005u; /* 0x171A8D15: mov eax, 0x80004005 */
L_171A8D1A:
    esi = POP32_VAL(esp); /* 0x171A8D1A: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A8D1B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A8D1C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A8D1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A8D23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8D23u);

L_171A8D23:
    edi = edi; /* 0x171A8D23: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8D25: push ebp */
    ebp = esp; /* 0x171A8D26: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A8D28: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171A8D2B: push ebx */
    ebx = ecx; /* 0x171A8D2C: mov ebx, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171A8D2E: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x171A8D31: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A8D34: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A8D36: push esi */
    MEM32(ecx) = eax; /* 0x171A8D37: mov dword ptr [ecx], eax */
    /* cmp MEM32(ebx), eax */ /* 0x171A8D39: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171A8D3B: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8D9E; /* 0x171A8D3C: je 0x171a8d9e */
L_171A8D3E:
    /* cmp MEM32(ebx + 0x4), eax */ /* 0x171A8D3E: cmp dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A8D9E; /* 0x171A8D41: je 0x171a8d9e */
L_171A8D43:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x171A8D43: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A8D9A; /* 0x171A8D46: jbe 0x171a8d9a */
L_171A8D48:
    edx = MEM32(ebx + 0x8); /* 0x171A8D48: mov edx, dword ptr [ebx + 8] */
    eax = 0x00010000u; /* 0x171A8D4B: mov eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A8D50: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x171A8D52: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171A8D5A; /* 0x171A8D55: jae 0x171a8d5a */
L_171A8D57:
    eax = MEM32(ebp + 0xC); /* 0x171A8D57: mov eax, dword ptr [ebp + 0xc] */
L_171A8D5A:
    edi = MEM32(ebx + 0x4); /* 0x171A8D5A: mov edi, dword ptr [ebx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x171A8D5D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x171A8D60: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax; /* 0x171A8D63: sub dword ptr [ebp + 0xc], eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171A8D66: add edi, edx */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x171A8D68: mov ecx, eax */
    edx = ecx; /* 0x171A8D6A: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A8D6C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A8D6C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A8D6F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171A8D71: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A8D73: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A8D76: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) + eax; /* 0x171A8D78: add dword ptr [ebx + 8], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x171A8D7B: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x171A8D7E: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx + 0x8), 0x00010000u */ /* 0x171A8D80: cmp dword ptr [ebx + 8], 0x10000 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0x00010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A8D94; /* 0x171A8D87: jne 0x171a8d94 */
L_171A8D89:
    ecx = ebx; /* 0x171A8D89: mov ecx, ebx */
    RECOMP_CALL(sub_171A8CD3); /* 0x171A8D8B: call 0x171a8cd3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8D90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A8DA3; /* 0x171A8D92: jl 0x171a8da3 */
L_171A8D94:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171A8D94: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171A8D48; /* 0x171A8D98: ja 0x171a8d48 */
L_171A8D9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A8D9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A8DA3; /* 0x171A8D9C: jmp 0x171a8da3 */
L_171A8D9E:
    eax = 0x80004005u; /* 0x171A8D9E: mov eax, 0x80004005 */
L_171A8DA3:
    edi = POP32_VAL(esp); /* 0x171A8DA3: pop edi */
    esi = POP32_VAL(esp); /* 0x171A8DA4: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A8DA5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A8DA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A8DA7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A8DAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8DAFu);

L_171A8DAF:
    edi = edi; /* 0x171A8DAF: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A8DB1: push esi */
    esi = ecx; /* 0x171A8DB2: mov esi, ecx */
    RECOMP_CALL(sub_171A8CD3); /* 0x171A8DB4: call 0x171a8cd3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171A8DB9: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x171A8DBC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A8DC1: pop ecx */
    esi = POP32_VAL(esp); /* 0x171A8DC2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A8DC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A8DC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8DC9u);

L_171A8DC9:
    edi = edi; /* 0x171A8DC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8DCB: push ebp */
    ebp = esp; /* 0x171A8DCC: mov ebp, esp */
    eax = ecx; /* 0x171A8DCE: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A8DD0: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x171A8DD3: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171A8DD5: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x4) = ecx; /* 0x171A8DD8: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171A8DDB: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x8) = ecx; /* 0x171A8DDE: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171A8DE1: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0xC) = ecx; /* 0x171A8DE4: mov dword ptr [eax + 0xc], ecx */
    ebp = POP32_VAL(esp); /* 0x171A8DE7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A8DE8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A8DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8DF0u);

L_171A8DF0:
    edi = edi; /* 0x171A8DF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8DF2: push ebp */
    ebp = esp; /* 0x171A8DF3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171A8DF5: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171A8DF8: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171A8DFB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A8DFF: push esi */
    esi = MEM32(eax); /* 0x171A8E00: mov esi, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x171A8E02: push edi */
    edi = ecx; /* 0x171A8E03: mov edi, ecx */
    ecx = MEM32(edi + 0x8); /* 0x171A8E05: mov ecx, dword ptr [edi + 8] */
    /* test ecx, ecx */ /* 0x171A8E08: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x171A8E0A: mov dword ptr [ebp - 8], esi */
    MEM32(edi + 0x10) = esi; /* 0x171A8E0D: mov dword ptr [edi + 0x10], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8E26; /* 0x171A8E10: je 0x171a8e26 */
L_171A8E12:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171A8E12: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A8E15: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A8E18: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171A8E1B: push eax */
    RECOMP_CALL(sub_171A98A2); /* 0x171A8E1C: call 0x171a98a2 */
    RECOMP_FLAGS_IN();
    goto L_171A8FB1; /* 0x171A8E21: jmp 0x171a8fb1 */
L_171A8E26:
    eax = MEM32(edi + 0x4); /* 0x171A8E26: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171A8E29: mov eax, dword ptr [eax + 8] */
    edx = MEM32(ebp + 0x10); /* 0x171A8E2C: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171A8E2F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171A8E30: mov ebx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx); /* 0x171A8E33: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171A8E35: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx) */ /* 0x171A8E37: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A8E45; /* 0x171A8E39: jbe 0x171a8e45 */
L_171A8E3B:
    eax = 0x8007000Eu; /* 0x171A8E3B: mov eax, 0x8007000e */
    goto L_171A8FB0; /* 0x171A8E40: jmp 0x171a8fb0 */
L_171A8E45:
    edx = MEM32(edi + 0x4); /* 0x171A8E45: mov edx, dword ptr [edi + 4] */
    edx = MEM32(edx + 0x4); /* 0x171A8E48: mov edx, dword ptr [edx + 4] */
    /* cmp edx, 8 */ /* 0x171A8E4B: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A8F96; /* 0x171A8E4E: ja 0x171a8f96 */
L_171A8E54:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x171A8FB7)); goto _ljump; }
L_171A8E5B:
    PUSH32(esp, eax); /* 0x171A8E5B: push eax */
    eax = MEM32(ebp + 0x14); /* 0x171A8E5C: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x171A8E5F: push dword ptr [eax] */
    RECOMP_CALL(sub_1721B260); /* 0x171A8E61: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8E66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8E68: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8E69: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8E3B; /* 0x171A8E6A: je 0x171a8e3b */
L_171A8E6C:
    ecx = MEM32(ebp + 0x14); /* 0x171A8E6C: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x171A8E6F: mov dword ptr [ecx], eax */
    ecx = MEM32(ebx); /* 0x171A8E71: mov ecx, dword ptr [ebx] */
    edx = MEM32(esi); /* 0x171A8E73: mov edx, dword ptr [esi] */
    MEM32(eax + ecx) = edx; /* 0x171A8E75: mov dword ptr [eax + ecx], edx */
    goto L_171A8F9D; /* 0x171A8E78: jmp 0x171a8f9d */
L_171A8E7D:
    PUSH32(esp, eax); /* 0x171A8E7D: push eax */
    eax = MEM32(ebp + 0x14); /* 0x171A8E7E: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x171A8E81: push dword ptr [eax] */
    RECOMP_CALL(sub_1721B260); /* 0x171A8E83: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8E88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8E8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8E8B: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8E3B; /* 0x171A8E8C: je 0x171a8e3b */
L_171A8E8E:
    ecx = MEM32(ebp + 0x14); /* 0x171A8E8E: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x171A8E91: mov dword ptr [ecx], eax */
    SET_LO16(ecx, MEM16(esi)); /* 0x171A8E93: mov cx, word ptr [esi] */
    edx = MEM32(ebx); /* 0x171A8E96: mov edx, dword ptr [ebx] */
    MEM16(eax + edx) = (uint16_t)(LO16(ecx)); /* 0x171A8E98: mov word ptr [eax + edx], cx */
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x171A8E9C: mov word ptr [esi], cx */
    goto L_171A8F9D; /* 0x171A8E9F: jmp 0x171a8f9d */
L_171A8EA4:
    PUSH32(esp, eax); /* 0x171A8EA4: push eax */
    eax = MEM32(ebp + 0x14); /* 0x171A8EA5: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x171A8EA8: push dword ptr [eax] */
    RECOMP_CALL(sub_1721B260); /* 0x171A8EAA: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8EAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8EB1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8EB2: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8E3B; /* 0x171A8EB3: je 0x171a8e3b */
L_171A8EB5:
    ecx = MEM32(ebp + 0x14); /* 0x171A8EB5: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x171A8EB8: mov dword ptr [ecx], eax */
    SET_LO8(ecx, MEM8(esi)); /* 0x171A8EBA: mov cl, byte ptr [esi] */
    edx = MEM32(ebx); /* 0x171A8EBC: mov edx, dword ptr [ebx] */
    MEM8(eax + edx) = (uint8_t)(LO8(ecx)); /* 0x171A8EBE: mov byte ptr [eax + edx], cl */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x171A8EC1: mov byte ptr [esi], cl */
    goto L_171A8F9D; /* 0x171A8EC3: jmp 0x171a8f9d */
L_171A8EC8:
    PUSH32(esp, eax); /* 0x171A8EC8: push eax */
    eax = MEM32(ebp + 0x14); /* 0x171A8EC9: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x171A8ECC: push dword ptr [eax] */
    RECOMP_CALL(sub_1721B260); /* 0x171A8ECE: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8ED3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8ED5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8ED6: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8E3B; /* 0x171A8ED7: je 0x171a8e3b */
L_171A8EDD:
    ecx = MEM32(ebp + 0x14); /* 0x171A8EDD: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x171A8EE0: mov dword ptr [ecx], eax */
    fp_push(*(float*)&MEM32(esi)); /* 0x171A8EE2: fld dword ptr [esi] */
    ecx = MEM32(ebx); /* 0x171A8EE4: mov ecx, dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx) = _v; } /* 0x171A8EE6: fstp dword ptr [eax + ecx] */
    goto L_171A8F9D; /* 0x171A8EE9: jmp 0x171a8f9d */
L_171A8EEE:
    PUSH32(esp, eax); /* 0x171A8EEE: push eax */
    eax = MEM32(ebp + 0x14); /* 0x171A8EEF: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax)); /* 0x171A8EF2: push dword ptr [eax] */
    RECOMP_CALL(sub_1721B260); /* 0x171A8EF4: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8EF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8EFB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8EFC: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8E3B; /* 0x171A8EFD: je 0x171a8e3b */
L_171A8F03:
    ecx = MEM32(ebp + 0x14); /* 0x171A8F03: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ecx) = eax; /* 0x171A8F06: mov dword ptr [ecx], eax */
    fp_push(*(float*)&MEM32(esi)); /* 0x171A8F08: fld dword ptr [esi] */
    ecx = MEM32(ebx); /* 0x171A8F0A: mov ecx, dword ptr [ebx] */
    { double _v = fp_pop(); *(double*)ADDR(eax + ecx) = _v; } /* 0x171A8F0C: fstp qword ptr [eax + ecx] */
    eax = MEM32(ebp + 0x8); /* 0x171A8F0F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171A8F12: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x171A8F15: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x4); /* 0x171A8F17: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171A8F1A: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x171A8F1D: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x171A8F1F: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + 4; /* 0x171A8F22: add dword ptr [eax], 4 */
    _flag_k = FK_ADD;
    goto L_171A8FAD; /* 0x171A8F25: jmp 0x171a8fad */
L_171A8F2A:
    eax = MEM32(esi); /* 0x171A8F2A: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x171A8F2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x171A8F2E: mov dword ptr [ebp + 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A8F3A; /* 0x171A8F31: jne 0x171a8f3a */
L_171A8F33:
    eax = 0x80004005u; /* 0x171A8F33: mov eax, 0x80004005 */
    goto L_171A8FB0; /* 0x171A8F38: jmp 0x171a8fb0 */
L_171A8F3A:
    esi = eax + 0x1; /* 0x171A8F3A: lea esi, [eax + 1] */
L_171A8F3D:
    SET_LO8(edx, MEM8(eax)); /* 0x171A8F3D: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A8F3F: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171A8F40: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A8F3D; /* 0x171A8F42: jne 0x171a8f3d */
L_171A8F44:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171A8F44: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x14); /* 0x171A8F46: mov esi, dword ptr [ebp + 0x14] */
    edi = eax + 0x1; /* 0x171A8F49: lea edi, [eax + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171A8F4C: add ecx, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x171A8F4E: push ecx */
    PUSH32(esp, MEM32(esi)); /* 0x171A8F4F: push dword ptr [esi] */
    MEM32(ebp + (-0xC)) = edi; /* 0x171A8F51: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_1721B260); /* 0x171A8F54: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A8F59: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A8F5B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A8F5C: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A8E3B; /* 0x171A8F5D: je 0x171a8e3b */
L_171A8F63:
    MEM32(esi) = eax; /* 0x171A8F63: mov dword ptr [esi], eax */
    esi = MEM32(ebp + 0xC); /* 0x171A8F65: mov esi, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x171A8F68: mov ecx, edi */
    edi = MEM32(ebx); /* 0x171A8F6A: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171A8F6C: add edi, eax */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x171A8F6E: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A8F70: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A8F70: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A8F73: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171A8F75: mov ecx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x171A8F77: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A8F7A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A8F7D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x171A8F7F: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A8F82: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x171A8F85: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x171A8F87: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x171A8F8A: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    ecx = eax + (-0x4); /* 0x171A8F8C: lea ecx, [eax - 4] */
    eax = MEM32(ebp + 0x10); /* 0x171A8F8F: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ecx; /* 0x171A8F92: add dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    goto L_171A8FAD; /* 0x171A8F94: jmp 0x171a8fad */
L_171A8F96:
    MEM32(ebp + (-0x4)) = 0x88760388u; /* 0x171A8F96: mov dword ptr [ebp - 4], 0x88760388 */
L_171A8F9D:
    eax = MEM32(ebp + 0x8); /* 0x171A8F9D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171A8FA0: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x171A8FA3: mov dword ptr [eax], esi */
    eax = MEM32(edi + 0x4); /* 0x171A8FA5: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171A8FA8: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x171A8FAB: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
L_171A8FAD:
    eax = MEM32(ebp + (-0x4)); /* 0x171A8FAD: mov eax, dword ptr [ebp - 4] */
L_171A8FB0:
    ebx = POP32_VAL(esp); /* 0x171A8FB0: pop ebx */
L_171A8FB1:
    edi = POP32_VAL(esp); /* 0x171A8FB1: pop edi */
    esi = POP32_VAL(esp); /* 0x171A8FB2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A8FB3: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A8FB4: ret 0x10 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171A8E5Bu: goto L_171A8E5B;
      case 0x171A8E7Du: goto L_171A8E7D;
      case 0x171A8EA4u: goto L_171A8EA4;
      case 0x171A8EC8u: goto L_171A8EC8;
      case 0x171A8EEEu: goto L_171A8EEE;
      case 0x171A8F2Au: goto L_171A8F2A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171A8FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A8FE0u);

L_171A8FE0:
    edi = edi; /* 0x171A8FE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A8FE2: push ebp */
    ebp = esp; /* 0x171A8FE3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x171A8FE5: mov edx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x171A8FE8: mov eax, ecx */
    ecx = MEM32(edx); /* 0x171A8FEA: mov ecx, dword ptr [edx] */
    MEM32(eax + 0x10) = ecx; /* 0x171A8FEC: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(eax + 0x8); /* 0x171A8FEF: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x171A8FF2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9004; /* 0x171A8FF4: je 0x171a9004 */
L_171A8FF6:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A8FF6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A8FF9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x171A8FFC: push edx */
    RECOMP_CALL(sub_171A984C); /* 0x171A8FFD: call 0x171a984c */
    RECOMP_FLAGS_IN();
    goto L_171A9021; /* 0x171A9002: jmp 0x171a9021 */
L_171A9004:
    eax = MEM32(eax + 0x4); /* 0x171A9004: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(ebp + 0xC); /* 0x171A9007: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x171A900A: mov eax, dword ptr [eax + 8] */
    edx = MEM32(ecx); /* 0x171A900D: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171A900F: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x171A9011: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A901D; /* 0x171A9014: jbe 0x171a901d */
L_171A9016:
    eax = 0x8007000Eu; /* 0x171A9016: mov eax, 0x8007000e */
    goto L_171A9021; /* 0x171A901B: jmp 0x171a9021 */
L_171A901D:
    MEM32(ecx) = eax; /* 0x171A901D: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A901F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A9021:
    ebp = POP32_VAL(esp); /* 0x171A9021: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A9022: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A902A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A902Au);

L_171A902A:
    edi = edi; /* 0x171A902A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A902C: push ebp */
    ebp = esp; /* 0x171A902D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A902F: push esi */
    esi = ecx; /* 0x171A9030: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x171A9032: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(esi), eax */ /* 0x171A9035: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A905D; /* 0x171A9037: jne 0x171a905d */
L_171A9039:
    ecx = MEM32(esi + 0x8); /* 0x171A9039: mov ecx, dword ptr [esi + 8] */
    /* cmp eax, ecx */ /* 0x171A903C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A9042; /* 0x171A903E: ja 0x171a9042 */
L_171A9040:
    eax = ecx; /* 0x171A9040: mov eax, ecx */
L_171A9042:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x171A9042: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x4); /* 0x171A9045: mov eax, dword ptr [esi + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171A9048: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171A9048: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171A904B: push eax */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A904C: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B260); /* 0x171A904F: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9054: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A9056: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A9057: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A906E; /* 0x171A9058: je 0x171a906e */
L_171A905A:
    MEM32(esi + 0xC) = eax; /* 0x171A905A: mov dword ptr [esi + 0xc], eax */
L_171A905D:
    eax = MEM32(esi); /* 0x171A905D: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + 0x8); /* 0x171A905F: mov edx, dword ptr [ebp + 8] */
    edx = MEM32(edx); /* 0x171A9062: mov edx, dword ptr [edx] */
    ecx = MEM32(esi + 0xC); /* 0x171A9064: mov ecx, dword ptr [esi + 0xc] */
    MEM32(ecx + eax * 4) = edx; /* 0x171A9067: mov dword ptr [ecx + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x171A906A: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x171A906C: mov eax, dword ptr [esi] */
L_171A906E:
    esi = POP32_VAL(esp); /* 0x171A906E: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A906F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A9070: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A9078(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9078u);

L_171A9078:
    edi = edi; /* 0x171A9078: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A907A: push ebp */
    ebp = esp; /* 0x171A907B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171A907D: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A9080: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x171A9085: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A9086: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 0xAu); /* 0x171A9089: push 0xa */
    eax = ebp + (-0x18); /* 0x171A908B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171A908E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A908F: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x171A9092: mov esi, ecx */
    RECOMP_CALL(sub_1721B5A8); /* 0x171A9094: call 0x1721b5a8 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x18); /* 0x171A9099: lea eax, [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A909C: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax + 0x1; /* 0x171A909F: lea ecx, [eax + 1] */
L_171A90A2:
    SET_LO8(edx, MEM8(eax)); /* 0x171A90A2: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A90A4: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171A90A5: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A90A2; /* 0x171A90A7: jne 0x171a90a2 */
L_171A90A9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171A90A9: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x1C); /* 0x171A90AB: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x171A90AE: push ecx */
    PUSH32(esp, eax); /* 0x171A90AF: push eax */
    eax = ebp + (-0x18); /* 0x171A90B0: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171A90B3: push eax */
    ecx = esi + 0x30; /* 0x171A90B4: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_171A8D23); /* 0x171A90B7: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171A90BC: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x171A90BF: mov eax, dword ptr [ebp - 0x1c] */
    esi = POP32_VAL(esp); /* 0x171A90C2: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x171A90C3: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A90C8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A90C9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A90D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A90D1u);

L_171A90D1:
    edi = edi; /* 0x171A90D1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A90D3: push ebp */
    ebp = esp; /* 0x171A90D4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x171A90D6: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A90D9: mov eax, dword ptr [0x1723c894] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171A90DE: fld dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A90E1: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x171A90E4: push esi */
    eax = ebp + (-0x24); /* 0x171A90E5: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171A90E8: push eax */
    PUSH32(esp, ecx); /* 0x171A90E9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x171A90EA: fstp dword ptr [esp] */
    esi = ecx; /* 0x171A90ED: mov esi, ecx */
    RECOMP_CALL(sub_171AEEA0); /* 0x171A90EF: call 0x171aeea0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x28); /* 0x171A90F4: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x171A90F7: push ecx */
    PUSH32(esp, eax); /* 0x171A90F8: push eax */
    eax = ebp + (-0x24); /* 0x171A90F9: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171A90FC: push eax */
    ecx = esi + 0x30; /* 0x171A90FD: lea ecx, [esi + 0x30] */
    RECOMP_CALL(sub_171A8D23); /* 0x171A9100: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171A9105: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x171A9108: mov eax, dword ptr [ebp - 0x28] */
    esi = POP32_VAL(esp); /* 0x171A910B: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x171A910C: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A9111: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A9112: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A911A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A911Au);

L_171A911A:
    edi = edi; /* 0x171A911A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A911C: push ebp */
    ebp = esp; /* 0x171A911D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A911F: push ecx */
    eax = ebp + (-0x4); /* 0x171A9120: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171A9123: push eax */
    PUSH32(esp, 4); /* 0x171A9124: push 4 */
    eax = ebp + 0x8; /* 0x171A9126: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A9129: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x171A912A: add ecx, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A8D23); /* 0x171A912D: call 0x171a8d23 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171A9132: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A9135: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A9136: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A913E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A913Eu);

L_171A913E:
    edi = edi; /* 0x171A913E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9140: push ebp */
    ebp = esp; /* 0x171A9141: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A9143: push esi */
    esi = ecx; /* 0x171A9144: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x171A9146: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(esi), eax */ /* 0x171A9149: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A9171; /* 0x171A914B: jne 0x171a9171 */
L_171A914D:
    ecx = MEM32(esi + 0x8); /* 0x171A914D: mov ecx, dword ptr [esi + 8] */
    /* cmp eax, ecx */ /* 0x171A9150: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A9156; /* 0x171A9152: ja 0x171a9156 */
L_171A9154:
    eax = ecx; /* 0x171A9154: mov eax, ecx */
L_171A9156:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x171A9156: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x4); /* 0x171A9159: mov eax, dword ptr [esi + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171A915C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171A915C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171A915F: push eax */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A9160: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B260); /* 0x171A9163: call 0x1721b260 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9168: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A916A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171A916B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9182; /* 0x171A916C: je 0x171a9182 */
L_171A916E:
    MEM32(esi + 0xC) = eax; /* 0x171A916E: mov dword ptr [esi + 0xc], eax */
L_171A9171:
    eax = MEM32(esi); /* 0x171A9171: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + 0x8); /* 0x171A9173: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edx)); /* 0x171A9176: fld dword ptr [edx] */
    ecx = MEM32(esi + 0xC); /* 0x171A9178: mov ecx, dword ptr [esi + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x171A917B: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x171A917E: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x171A9180: mov eax, dword ptr [esi] */
L_171A9182:
    esi = POP32_VAL(esp); /* 0x171A9182: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A9183: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A9184: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A918C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A918Cu);

L_171A918C:
    edi = edi; /* 0x171A918C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A918E: push ebp */
    ebp = esp; /* 0x171A918F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171A9191: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A9194: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171A9199: push ebx */
    PUSH32(esp, esi); /* 0x171A919A: push esi */
    PUSH32(esp, edi); /* 0x171A919B: push edi */
    esi = 0x1700B4A4u; /* 0x171A919C: mov esi, 0x1700b4a4 */
    edi = ebp + (-0x14); /* 0x171A91A1: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A91A4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A91A5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A91A6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A91A7: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x171A91AA: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x171A91AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = 0x17023A00u; /* 0x171A91AF: mov dword ptr [ebp - 0x18], 0x17023a00 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A91B6: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A91C9; /* 0x171A91B7: je 0x171a91c9 */
L_171A91B9:
    ecx = MEM32(eax + 0x4); /* 0x171A91B9: mov ecx, dword ptr [eax + 4] */
    esi = eax + 0x8; /* 0x171A91BC: lea esi, [eax + 8] */
    edi = ebp + (-0x14); /* 0x171A91BF: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A91C2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A91C3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A91C4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x171A91C5: mov dword ptr [ebp - 0x18], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A91C8: movsd dword ptr es:[edi], dword ptr [esi] */
L_171A91C9:
    eax = MEM32(ebp + (-0x18)); /* 0x171A91C9: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A91CC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171A91CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9203; /* 0x171A91D0: je 0x171a9203 */
L_171A91D2:
    edx = eax + 0x1; /* 0x171A91D2: lea edx, [eax + 1] */
L_171A91D5:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A91D5: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A91D7: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171A91D8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A91D5; /* 0x171A91DA: jne 0x171a91d5 */
L_171A91DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A91DC: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171A91DE: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171A91E1: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171A91E2: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171A91E7: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171A91E9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A91EB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9232; /* 0x171A91EC: je 0x171a9232 */
L_171A91EE:
    ecx = esi; /* 0x171A91EE: mov ecx, esi */
    esi = MEM32(ebp + (-0x18)); /* 0x171A91F0: mov esi, dword ptr [ebp - 0x18] */
    eax = ecx; /* 0x171A91F3: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A91F5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A91F5: shr ecx, 2 */
    edi = ebx; /* 0x171A91F8: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A91FA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171A91FC: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A91FE: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A9201: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171A9203:
    PUSH32(esp, 0x14u); /* 0x171A9203: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A9205: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A920A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A920C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A921F; /* 0x171A920D: je 0x171a921f */
L_171A920F:
    edi = eax + 0x4; /* 0x171A920F: lea edi, [eax + 4] */
    esi = ebp + (-0x14); /* 0x171A9212: lea esi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A9215: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A9216: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A9217: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A9218: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(eax) = ebx; /* 0x171A9219: mov dword ptr [eax], ebx */
    esi = eax; /* 0x171A921B: mov esi, eax */
    goto L_171A9221; /* 0x171A921D: jmp 0x171a9221 */
L_171A921F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A921F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A9221:
    /* test esi, esi */ /* 0x171A9221: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9230; /* 0x171A9223: jne 0x171a9230 */
L_171A9225:
    /* test ebx, ebx */ /* 0x171A9225: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9230; /* 0x171A9227: je 0x171a9230 */
L_171A9229:
    PUSH32(esp, ebx); /* 0x171A9229: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171A922A: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A922F: pop ecx */
L_171A9230:
    eax = esi; /* 0x171A9230: mov eax, esi */
L_171A9232:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A9232: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171A9235: pop edi */
    esi = POP32_VAL(esp); /* 0x171A9236: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A9237: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171A9238: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A923D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A923E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A9246(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9246u);

L_171A9246:
    edi = edi; /* 0x171A9246: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9248: push ebp */
    ebp = esp; /* 0x171A9249: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A924B: push esi */
    PUSH32(esp, edi); /* 0x171A924C: push edi */
    esi = ecx; /* 0x171A924D: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A924F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x171A9251: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A927F; /* 0x171A9253: jbe 0x171a927f */
L_171A9255:
    eax = MEM32(esi + 0xC); /* 0x171A9255: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + edi * 4); /* 0x171A9258: mov eax, dword ptr [eax + edi*4] */
    eax = MEM32(eax + 0x4); /* 0x171A925B: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171A925E: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A9260: push dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171A9263: push -1 */
    PUSH32(esp, eax); /* 0x171A9265: push eax */
    PUSH32(esp, 1); /* 0x171A9266: push 1 */
    PUSH32(esp, 0x409u); /* 0x171A9268: push 0x409 */
    RECOMP_ICALL(MEM32(0x170010A8)); /* 0x171A926D: call dword ptr [0x170010a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171A9273: push 2 */
    ecx = POP32_VAL(esp); /* 0x171A9275: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171A9276: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A9287; /* 0x171A9278: je 0x171a9287 */
L_171A927A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A927A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171A927B: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A9255; /* 0x171A927D: jb 0x171a9255 */
L_171A927F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A927F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A9281:
    edi = POP32_VAL(esp); /* 0x171A9281: pop edi */
    esi = POP32_VAL(esp); /* 0x171A9282: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A9283: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A9284: ret 8 */
L_171A9287:
    eax = MEM32(ebp + 0xC); /* 0x171A9287: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171A928A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9296; /* 0x171A928C: je 0x171a9296 */
L_171A928E:
    ecx = MEM32(esi + 0xC); /* 0x171A928E: mov ecx, dword ptr [esi + 0xc] */
    ecx = MEM32(ecx + edi * 4); /* 0x171A9291: mov ecx, dword ptr [ecx + edi*4] */
    MEM32(eax) = ecx; /* 0x171A9294: mov dword ptr [eax], ecx */
L_171A9296:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9296: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A9298: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_171A9281; /* 0x171A9299: jmp 0x171a9281 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A92A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A92A0u);

L_171A92A0:
    edi = edi; /* 0x171A92A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A92A2: push ebp */
    ebp = esp; /* 0x171A92A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A92A5: push ecx */
    PUSH32(esp, ecx); /* 0x171A92A6: push ecx */
    edx = MEM32(ecx); /* 0x171A92A7: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171A92A9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171A92AD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171A92AF: push ebx */
    PUSH32(esp, esi); /* 0x171A92B0: push esi */
    PUSH32(esp, edi); /* 0x171A92B1: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A92D6; /* 0x171A92B2: jbe 0x171a92d6 */
L_171A92B4:
    eax = MEM32(ecx + 0xC); /* 0x171A92B4: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171A92B7: mov dword ptr [ebp - 8], eax */
L_171A92BA:
    esi = MEM32(eax); /* 0x171A92BA: mov esi, dword ptr [eax] */
    edi = MEM32(ebp + 0x8); /* 0x171A92BC: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x171A92BF: push 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171A92C1: add esi, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x171A92C4: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A92C5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171A92C7: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171A92DF; /* 0x171A92C9: je 0x171a92df */
L_171A92CB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171A92CB: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A92CE: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x171A92D1: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A92BA; /* 0x171A92D4: jb 0x171a92ba */
L_171A92D6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A92D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A92D8:
    edi = POP32_VAL(esp); /* 0x171A92D8: pop edi */
    esi = POP32_VAL(esp); /* 0x171A92D9: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A92DA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A92DB: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A92DC: ret 8 */
L_171A92DF:
    eax = MEM32(ebp + 0xC); /* 0x171A92DF: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171A92E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A92F1; /* 0x171A92E4: je 0x171a92f1 */
L_171A92E6:
    ecx = MEM32(ebp + (-0x8)); /* 0x171A92E6: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x171A92E9: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ecx + edx * 4); /* 0x171A92EC: mov ecx, dword ptr [ecx + edx*4] */
    MEM32(eax) = ecx; /* 0x171A92EF: mov dword ptr [eax], ecx */
L_171A92F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A92F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A92F3: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_171A92D8; /* 0x171A92F4: jmp 0x171a92d8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A92FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A92FBu);

L_171A92FB:
    edi = edi; /* 0x171A92FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A92FD: push ebp */
    ebp = esp; /* 0x171A92FE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A9300: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x171A9301: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171A9304: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A9305: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171A9307: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A9309: push esi */
    PUSH32(esp, edi); /* 0x171A930A: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171A930B: mov dword ptr [ebp - 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9342; /* 0x171A930E: je 0x171a9342 */
L_171A9310:
    edx = eax + 0x1; /* 0x171A9310: lea edx, [eax + 1] */
L_171A9313:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A9313: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A9315: inc eax */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x171A9316: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A9313; /* 0x171A9318: jne 0x171a9313 */
L_171A931A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A931A: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171A931C: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171A931F: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171A9320: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A9325: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171A9327: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A9329: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x171A932A: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9393; /* 0x171A932D: je 0x171a9393 */
L_171A932F:
    ecx = esi; /* 0x171A932F: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x171A9331: mov esi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x171A9334: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171A9336: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171A9336: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171A9339: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171A933B: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171A933D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171A9340: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171A9342:
    esi = MEM32(ebp + 0x18); /* 0x171A9342: mov esi, dword ptr [ebp + 0x18] */
    /* cmp esi, ebx */ /* 0x171A9345: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9368; /* 0x171A9347: je 0x171a9368 */
L_171A9349:
    edx = MEM32(esi); /* 0x171A9349: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A934B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ebx */ /* 0x171A934D: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171A9368; /* 0x171A934F: jle 0x171a9368 */
L_171A9351:
    ecx = MEM32(esi + 0xC); /* 0x171A9351: mov ecx, dword ptr [esi + 0xc] */
L_171A9354:
    eax = MEM32(ecx); /* 0x171A9354: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x171A9356: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A9360; /* 0x171A9359: jne 0x171a9360 */
L_171A935B:
    /* cmp MEM32(eax), 1 */ /* 0x171A935B: cmp dword ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171A9393; /* 0x171A935E: jb 0x171a9393 */
L_171A9360:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A9360: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171A9361: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, edx */ /* 0x171A9364: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171A9354; /* 0x171A9366: jl 0x171a9354 */
L_171A9368:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A9368: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171AF0B1); /* 0x171A936B: call 0x171af0b1 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171A9370: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171A9372: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9397; /* 0x171A9374: je 0x171a9397 */
L_171A9376:
    PUSH32(esp, 0x14u); /* 0x171A9376: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A9378: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171A937D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A937F: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A93D0; /* 0x171A9380: je 0x171a93d0 */
L_171A9382:
    PUSH32(esp, esi); /* 0x171A9382: push esi */
    PUSH32(esp, ebx); /* 0x171A9383: push ebx */
    PUSH32(esp, edi); /* 0x171A9384: push edi */
L_171A9385:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171A9385: push dword ptr [ebp - 4] */
    ecx = eax; /* 0x171A9388: mov ecx, eax */
    RECOMP_CALL(sub_171A8DC9); /* 0x171A938A: call 0x171a8dc9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171A938F: mov esi, eax */
    goto L_171A93D2; /* 0x171A9391: jmp 0x171a93d2 */
L_171A9393:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9393: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A93E6; /* 0x171A9395: jmp 0x171a93e6 */
L_171A9397:
    ecx = MEM32(ebp + 0x10); /* 0x171A9397: mov ecx, dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x171A939A: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171A939D: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A939E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A9246); /* 0x171A93A1: call 0x171a9246 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A93A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A93BD; /* 0x171A93A8: jne 0x171a93bd */
L_171A93AA:
    ecx = MEM32(ebp + 0x14); /* 0x171A93AA: mov ecx, dword ptr [ebp + 0x14] */
    eax = ebp + 0xC; /* 0x171A93AD: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171A93B0: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A93B1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A9246); /* 0x171A93B4: call 0x171a9246 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A93B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A93D0; /* 0x171A93BB: je 0x171a93d0 */
L_171A93BD:
    PUSH32(esp, 0x14u); /* 0x171A93BD: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A93BF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171A93C4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A93C6: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A93D0; /* 0x171A93C7: je 0x171a93d0 */
L_171A93C9:
    PUSH32(esp, esi); /* 0x171A93C9: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A93CA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171A93CD: push ebx */
    RECOMP_BACKEDGE();
    goto L_171A9385; /* 0x171A93CE: jmp 0x171a9385 */
L_171A93D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A93D0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A93D2:
    /* cmp esi, ebx */ /* 0x171A93D2: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A93E4; /* 0x171A93D4: jne 0x171a93e4 */
L_171A93D6:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x171A93D6: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A93E4; /* 0x171A93D9: je 0x171a93e4 */
L_171A93DB:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171A93DB: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B224); /* 0x171A93DE: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A93E3: pop ecx */
L_171A93E4:
    eax = esi; /* 0x171A93E4: mov eax, esi */
L_171A93E6:
    edi = POP32_VAL(esp); /* 0x171A93E6: pop edi */
    esi = POP32_VAL(esp); /* 0x171A93E7: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A93E8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A93E9: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A93EA: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A93F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A93F2u);

L_171A93F2:
    eax = MEM32(ecx + 0x4); /* 0x171A93F2: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x171A93F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A93FC; /* 0x171A93F7: je 0x171a93fc */
L_171A93F9:
    eax = MEM32(eax); /* 0x171A93F9: mov eax, dword ptr [eax] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A93FB: ret  */
L_171A93FC:
    ecx = MEM32(ecx + 0x8); /* 0x171A93FC: mov ecx, dword ptr [ecx + 8] */
    /* test ecx, ecx */ /* 0x171A93FF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9407; /* 0x171A9401: je 0x171a9407 */
L_171A9403:
    eax = MEM32(ecx + 0x4); /* 0x171A9403: mov eax, dword ptr [ecx + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9406: ret  */
L_171A9407:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9407: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9409: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A940F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A940Fu);

L_171A940F:
    eax = MEM32(ecx + 0x4); /* 0x171A940F: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x171A9412: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9429; /* 0x171A9414: je 0x171a9429 */
L_171A9416:
    /* cmp MEM32(eax + 0x4), 8 */ /* 0x171A9416: cmp dword ptr [eax + 4], 8 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9425; /* 0x171A941A: je 0x171a9425 */
L_171A941C:
    /* cmp MEM32(eax + 0x8), 4 */ /* 0x171A941C: cmp dword ptr [eax + 8], 4 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A9425; /* 0x171A9420: jne 0x171a9425 */
L_171A9422:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9422: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9424: ret  */
L_171A9425:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9425: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A9427: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9428: ret  */
L_171A9429:
    eax = MEM32(ecx + 0x8); /* 0x171A9429: mov eax, dword ptr [ecx + 8] */
    eax = MEM32(eax + 0x28); /* 0x171A942C: mov eax, dword ptr [eax + 0x28] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A942F: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A9435(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9435u);

L_171A9435:
    eax = MEM32(ecx + 0xC); /* 0x171A9435: mov eax, dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x171A9438: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A943A: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9458; /* 0x171A943B: je 0x171a9458 */
L_171A943D:
    ecx = MEM32(eax); /* 0x171A943D: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171A943F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171A9441: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9458; /* 0x171A9443: jbe 0x171a9458 */
L_171A9445:
    eax = MEM32(eax + 0xC); /* 0x171A9445: mov eax, dword ptr [eax + 0xc] */
L_171A9448:
    esi = MEM32(eax); /* 0x171A9448: mov esi, dword ptr [eax] */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x171A944A: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A945D; /* 0x171A944E: jne 0x171a945d */
L_171A9450:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171A9450: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171A9451: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, ecx */ /* 0x171A9454: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A9448; /* 0x171A9456: jb 0x171a9448 */
L_171A9458:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9458: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A945A: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x171A945B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A945C: ret  */
L_171A945D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A945D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171A945F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9460: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A9466(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9466u);

L_171A9466:
    edi = edi; /* 0x171A9466: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9468: push ebp */
    ebp = esp; /* 0x171A9469: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171A946B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171A946E: push ebx */
    ebx = ecx; /* 0x171A946F: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x171A9471: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171A9472: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171A9475: push edi */
    MEM32(ebx + 0x4) = eax; /* 0x171A9476: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x171A9479: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx) = 0x17023A08u; /* 0x171A947C: mov dword ptr [ebx], 0x17023a08 */
    edi = ebx + 0x8; /* 0x171A9482: lea edi, [ebx + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A9485: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A9486: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A9487: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171A9488: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171A9489: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A948B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebx + 0x18) = ecx; /* 0x171A948C: mov dword ptr [ebx + 0x18], ecx */
    edx = MEM32(eax); /* 0x171A948F: mov edx, dword ptr [eax] */
    MEM32(ebx + 0x1C) = edx; /* 0x171A9491: mov dword ptr [ebx + 0x1c], edx */
    edx = MEM32(eax + 0x4); /* 0x171A9494: mov edx, dword ptr [eax + 4] */
    esi = MEM32(ebx + 0x1C); /* 0x171A9497: mov esi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A949A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x171A949C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x20) = edx; /* 0x171A949E: mov dword ptr [ebx + 0x20], edx */
    eax = MEM32(eax + 0x8); /* 0x171A94A1: mov eax, dword ptr [eax + 8] */
    MEM32(ebx + 0x24) = eax; /* 0x171A94A4: mov dword ptr [ebx + 0x24], eax */
    MEM32(ebx + 0x28) = edi; /* 0x171A94A7: mov dword ptr [ebx + 0x28], edi */
    MEM32(ebx + 0x2C) = ecx; /* 0x171A94AA: mov dword ptr [ebx + 0x2c], ecx */
    MEM32(ebx + 0x30) = edi; /* 0x171A94AD: mov dword ptr [ebx + 0x30], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A94DA; /* 0x171A94B0: je 0x171a94da */
L_171A94B2:
    /* cmp MEM32(esi), edi */ /* 0x171A94B2: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A94DA; /* 0x171A94B4: jbe 0x171a94da */
L_171A94B6:
    eax = MEM32(esi + 0xC); /* 0x171A94B6: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A94B9: mov ecx, dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_171A940F); /* 0x171A94BC: call 0x171a940f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebx + 0x28) | eax)); _flag_b = (uint32_t)((MEM32(ebx + 0x28) | eax));
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) | eax; /* 0x171A94C1: or dword ptr [ebx + 0x28], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0xC); /* 0x171A94C4: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171A94C7: mov ecx, dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_171A9435); /* 0x171A94CA: call 0x171a9435 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(eax);
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) & eax; /* 0x171A94CF: and dword ptr [ebx + 0x2c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x1C); /* 0x171A94D2: mov eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A94D5: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax) */ /* 0x171A94D6: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A94B6; /* 0x171A94D8: jb 0x171a94b6 */
L_171A94DA:
    edi = POP32_VAL(esp); /* 0x171A94DA: pop edi */
    esi = POP32_VAL(esp); /* 0x171A94DB: pop esi */
    eax = ebx; /* 0x171A94DC: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171A94DE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A94DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A94E0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A94E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A94E8u);

L_171A94E8:
    edi = edi; /* 0x171A94E8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A94EA: push ebp */
    ebp = esp; /* 0x171A94EB: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A94ED: push ebx */
    PUSH32(esp, esi); /* 0x171A94EE: push esi */
    ebx = ecx; /* 0x171A94EF: mov ebx, ecx */
    eax = MEM32(ebx + 0x1C); /* 0x171A94F1: mov eax, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x171A94F4: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A94F5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), edi */ /* 0x171A94F7: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A952C; /* 0x171A94F9: jbe 0x171a952c */
L_171A94FB:
    eax = MEM32(eax + 0xC); /* 0x171A94FB: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(eax + edi * 4); /* 0x171A94FE: mov esi, dword ptr [eax + edi*4] */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x171A9501: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A952C; /* 0x171A9504: je 0x171a952c */
L_171A9506:
    eax = MEM32(esi); /* 0x171A9506: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171A9508: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A950A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171A950D: push -1 */
    PUSH32(esp, eax); /* 0x171A950F: push eax */
    PUSH32(esp, 1); /* 0x171A9510: push 1 */
    PUSH32(esp, 0x409u); /* 0x171A9512: push 0x409 */
    RECOMP_ICALL(MEM32(0x170010A8)); /* 0x171A9517: call dword ptr [0x170010a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171A951D: push 2 */
    ecx = POP32_VAL(esp); /* 0x171A951F: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171A9520: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A9538; /* 0x171A9522: je 0x171a9538 */
L_171A9524:
    eax = MEM32(ebx + 0x1C); /* 0x171A9524: mov eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A9527: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax) */ /* 0x171A9528: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A94FB; /* 0x171A952A: jb 0x171a94fb */
L_171A952C:
    eax = 0x88760392u; /* 0x171A952C: mov eax, 0x88760392 */
L_171A9531:
    edi = POP32_VAL(esp); /* 0x171A9531: pop edi */
    esi = POP32_VAL(esp); /* 0x171A9532: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A9533: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A9534: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A9535: ret 0xc */
L_171A9538:
    eax = MEM32(esi + 0x4); /* 0x171A9538: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171A953B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A952C; /* 0x171A953D: je 0x171a952c */
L_171A953F:
    eax = MEM32(eax + 0x4); /* 0x171A953F: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x171A9542: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A956E; /* 0x171A9544: je 0x171a956e */
L_171A9546:
    /* cmp eax, 1 */ /* 0x171A9546: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A955F; /* 0x171A9549: je 0x171a955f */
L_171A954B:
    /* cmp eax, 3 */ /* 0x171A954B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171A952C; /* 0x171A954E: jle 0x171a952c */
L_171A9550:
    /* cmp eax, 5 */ /* 0x171A9550: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171A9566; /* 0x171A9553: jle 0x171a9566 */
L_171A9555:
    /* cmp eax, 6 */ /* 0x171A9555: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A956E; /* 0x171A9558: je 0x171a956e */
L_171A955A:
    /* cmp eax, 7 */ /* 0x171A955A: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A952C; /* 0x171A955D: jne 0x171a952c */
L_171A955F:
    eax = MEM32(esi + 0x10); /* 0x171A955F: mov eax, dword ptr [esi + 0x10] */
    eax = MEM32(eax); /* 0x171A9562: mov eax, dword ptr [eax] */
    goto L_171A9574; /* 0x171A9564: jmp 0x171a9574 */
L_171A9566:
    eax = MEM32(esi + 0x10); /* 0x171A9566: mov eax, dword ptr [esi + 0x10] */
    eax = (uint32_t)MEM8(eax); /* 0x171A9569: movzx eax, byte ptr [eax] */
    goto L_171A9574; /* 0x171A956C: jmp 0x171a9574 */
L_171A956E:
    eax = MEM32(esi + 0x10); /* 0x171A956E: mov eax, dword ptr [esi + 0x10] */
    eax = (uint32_t)MEM16(eax); /* 0x171A9571: movzx eax, word ptr [eax] */
L_171A9574:
    ecx = MEM32(ebp + 0x10); /* 0x171A9574: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x171A9577: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9579: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171A9531; /* 0x171A957B: jmp 0x171a9531 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A9582(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9582u);

L_171A9582:
    edi = edi; /* 0x171A9582: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9584: push ebp */
    ebp = esp; /* 0x171A9585: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A9587: push esi */
    esi = ecx; /* 0x171A9588: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x171A958A: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B224); /* 0x171A958D: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A9592: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x171A9596: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A95A0; /* 0x171A9597: je 0x171a95a0 */
L_171A9599:
    PUSH32(esp, esi); /* 0x171A9599: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A959A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A959F: pop ecx */
L_171A95A0:
    eax = esi; /* 0x171A95A0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A95A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A95A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A95A4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A95AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A95ACu);

L_171A95AC:
    edi = edi; /* 0x171A95AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A95AE: push ebp */
    ebp = esp; /* 0x171A95AF: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A95B1: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171A95B2: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171A95B5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A95B7: push edi */
    edi = ecx; /* 0x171A95B8: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A95DF; /* 0x171A95BA: jbe 0x171a95df */
L_171A95BC:
    PUSH32(esp, esi); /* 0x171A95BC: push esi */
    PUSH32(esp, 6); /* 0x171A95BD: push 6 */
    RECOMP_CALL(sub_171A53AD); /* 0x171A95BF: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171A95C4: push ebx */
    ecx = edi; /* 0x171A95C5: mov ecx, edi */
    RECOMP_CALL(sub_171A911A); /* 0x171A95C7: call 0x171a911a */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x171A95CC: mov esi, dword ptr [ebp + 8] */
L_171A95CF:
    PUSH32(esp, MEM32(esi)); /* 0x171A95CF: push dword ptr [esi] */
    ecx = edi; /* 0x171A95D1: mov ecx, edi */
    RECOMP_CALL(sub_171A911A); /* 0x171A95D3: call 0x171a911a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171A95D8: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171A95DB: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A95CF; /* 0x171A95DC: jne 0x171a95cf */
L_171A95DE:
    esi = POP32_VAL(esp); /* 0x171A95DE: pop esi */
L_171A95DF:
    edi = POP32_VAL(esp); /* 0x171A95DF: pop edi */
    ebx = POP32_VAL(esp); /* 0x171A95E0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A95E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A95E2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A95EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A95EAu);

L_171A95EA:
    edi = edi; /* 0x171A95EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A95EC: push ebp */
    ebp = esp; /* 0x171A95ED: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171A95EF: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171A95F0: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x171A95F3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A95F5: push edi */
    edi = ecx; /* 0x171A95F6: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9621; /* 0x171A95F8: jbe 0x171a9621 */
L_171A95FA:
    PUSH32(esp, esi); /* 0x171A95FA: push esi */
    PUSH32(esp, 7); /* 0x171A95FB: push 7 */
    RECOMP_CALL(sub_171A53AD); /* 0x171A95FD: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171A9602: push ebx */
    ecx = edi; /* 0x171A9603: mov ecx, edi */
    RECOMP_CALL(sub_171A911A); /* 0x171A9605: call 0x171a911a */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x171A960A: mov esi, dword ptr [ebp + 8] */
L_171A960D:
    fp_push(*(float*)&MEM32(esi)); /* 0x171A960D: fld dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x171A960F: push ecx */
    ecx = edi; /* 0x171A9610: mov ecx, edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x171A9612: fstp dword ptr [esp] */
    RECOMP_CALL(sub_171A911A); /* 0x171A9615: call 0x171a911a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171A961A: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171A961D: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A960D; /* 0x171A961E: jne 0x171a960d */
L_171A9620:
    esi = POP32_VAL(esp); /* 0x171A9620: pop esi */
L_171A9621:
    edi = POP32_VAL(esp); /* 0x171A9621: pop edi */
    ebx = POP32_VAL(esp); /* 0x171A9622: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171A9623: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A9624: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171A962C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A962Cu);

L_171A962C:
    edi = edi; /* 0x171A962C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A962E: push ebp */
    ebp = esp; /* 0x171A962F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A9631: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A9632: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x171A9634: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171A9637: push edi */
    edi = ecx; /* 0x171A9638: mov edi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A964D; /* 0x171A963A: je 0x171a964d */
L_171A963C:
    eax = MEM32(ebp + 0x8); /* 0x171A963C: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x171A963F: lea edx, [eax + 1] */
L_171A9642:
    SET_LO8(ecx, MEM8(eax)); /* 0x171A9642: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171A9644: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171A9645: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9642; /* 0x171A9647: jne 0x171a9642 */
L_171A9649:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171A9649: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x171A964B: mov esi, eax */
L_171A964D:
    PUSH32(esp, 2); /* 0x171A964D: push 2 */
    ecx = edi; /* 0x171A964F: mov ecx, edi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A9651: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171A9656: push esi */
    ecx = edi; /* 0x171A9657: mov ecx, edi */
    RECOMP_CALL(sub_171A911A); /* 0x171A9659: call 0x171a911a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A965E: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x171A9661: mov ecx, edi */
    PUSH32(esp, esi); /* 0x171A9663: push esi */
    RECOMP_CALL(sub_171A538A); /* 0x171A9664: call 0x171a538a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14u); /* 0x171A9669: push 0x14 */
    ecx = edi; /* 0x171A966B: mov ecx, edi */
    RECOMP_CALL(sub_171A53AD); /* 0x171A966D: call 0x171a53ad */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171A9672: pop edi */
    esi = POP32_VAL(esp); /* 0x171A9673: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A9674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A9675: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A967D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A967Du);

L_171A967D:
    edi = edi; /* 0x171A967D: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A967F: push esi */
    esi = ecx; /* 0x171A9680: mov esi, ecx */
    eax = MEM32(esi + 0x4C); /* 0x171A9682: mov eax, dword ptr [esi + 0x4c] */
    /* test eax, eax */ /* 0x171A9685: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A96AC; /* 0x171A9687: je 0x171a96ac */
L_171A9689:
    ecx = MEM32(eax); /* 0x171A9689: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x171A968B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A96AC; /* 0x171A968D: je 0x171a96ac */
L_171A968F:
    PUSH32(esp, ecx); /* 0x171A968F: push ecx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171A9690: push dword ptr [eax + 0xc] */
    ecx = esi; /* 0x171A9693: mov ecx, esi */
    RECOMP_CALL(sub_171A95EA); /* 0x171A9695: call 0x171a95ea */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4C); /* 0x171A969A: mov ecx, dword ptr [esi + 0x4c] */
    /* test ecx, ecx */ /* 0x171A969D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A96A8; /* 0x171A969F: je 0x171a96a8 */
L_171A96A1:
    PUSH32(esp, 1); /* 0x171A96A1: push 1 */
    RECOMP_CALL(sub_171A9582); /* 0x171A96A3: call 0x171a9582 */
    RECOMP_FLAGS_IN();
L_171A96A8:
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) & 0; /* 0x171A96A8: and dword ptr [esi + 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A96AC:
    esi = POP32_VAL(esp); /* 0x171A96AC: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A96AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A96B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A96B3u);

L_171A96B3:
    edi = edi; /* 0x171A96B3: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A96B5: push esi */
    esi = ecx; /* 0x171A96B6: mov esi, ecx */
    eax = MEM32(esi + 0x48); /* 0x171A96B8: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x171A96BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A96E2; /* 0x171A96BD: je 0x171a96e2 */
L_171A96BF:
    ecx = MEM32(eax); /* 0x171A96BF: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x171A96C1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A96E2; /* 0x171A96C3: je 0x171a96e2 */
L_171A96C5:
    PUSH32(esp, ecx); /* 0x171A96C5: push ecx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171A96C6: push dword ptr [eax + 0xc] */
    ecx = esi; /* 0x171A96C9: mov ecx, esi */
    RECOMP_CALL(sub_171A95AC); /* 0x171A96CB: call 0x171a95ac */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x48); /* 0x171A96D0: mov ecx, dword ptr [esi + 0x48] */
    /* test ecx, ecx */ /* 0x171A96D3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A96DE; /* 0x171A96D5: je 0x171a96de */
L_171A96D7:
    PUSH32(esp, 1); /* 0x171A96D7: push 1 */
    RECOMP_CALL(sub_171A9582); /* 0x171A96D9: call 0x171a9582 */
    RECOMP_FLAGS_IN();
L_171A96DE:
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x48) = MEM32(esi + 0x48) & 0; /* 0x171A96DE: and dword ptr [esi + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A96E2:
    esi = POP32_VAL(esp); /* 0x171A96E2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A96E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A96E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A96E9u);

L_171A96E9:
    edi = edi; /* 0x171A96E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A96EB: push ebp */
    ebp = esp; /* 0x171A96EC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A96EE: push esi */
    PUSH32(esp, edi); /* 0x171A96EF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171A96F0: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x171A96F3: push 0 */
    eax = edi + 0x8; /* 0x171A96F5: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x171A96F8: push eax */
    esi = ecx; /* 0x171A96F9: mov esi, ecx */
    RECOMP_CALL(sub_171A92A0); /* 0x171A96FB: call 0x171a92a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9700: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9708; /* 0x171A9702: je 0x171a9708 */
L_171A9704:
    eax = MEM32(esi); /* 0x171A9704: mov eax, dword ptr [esi] */
    goto L_171A971A; /* 0x171A9706: jmp 0x171a971a */
L_171A9708:
    eax = ebp + 0x8; /* 0x171A9708: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A970B: push eax */
    ecx = esi; /* 0x171A970C: mov ecx, esi */
    RECOMP_CALL(sub_171A902A); /* 0x171A970E: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9713: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A971A; /* 0x171A9715: je 0x171a971a */
L_171A9717:
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x18) = MEM32(edi + 0x18) + 1; /* 0x171A9717: inc dword ptr [edi + 0x18] */
    _flag_k = FK_INC;
L_171A971A:
    edi = POP32_VAL(esp); /* 0x171A971A: pop edi */
    esi = POP32_VAL(esp); /* 0x171A971B: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A971C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A971D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A9725(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9725u);

L_171A9725:
    edi = edi; /* 0x171A9725: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9727: push ebp */
    ebp = esp; /* 0x171A9728: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A972A: push ecx */
    PUSH32(esp, ebx); /* 0x171A972B: push ebx */
    PUSH32(esp, esi); /* 0x171A972C: push esi */
    esi = ecx; /* 0x171A972D: mov esi, ecx */
    eax = MEM32(esi + 0xC); /* 0x171A972F: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171A9732: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A9734: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A9735: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171A9737: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM32(eax), edi */ /* 0x171A9738: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A9776; /* 0x171A973A: jbe 0x171a9776 */
L_171A973C:
    eax = MEM32(eax + 0xC); /* 0x171A973C: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + edi * 4); /* 0x171A973F: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(eax); /* 0x171A9742: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x171A9744: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A974F; /* 0x171A9746: je 0x171a974f */
L_171A9748:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x171A9748: imul ecx, ebx */
    ebx = ecx; /* 0x171A974B: mov ebx, ecx */
    goto L_171A976E; /* 0x171A974D: jmp 0x171a976e */
L_171A974F:
    eax = MEM32(eax + 0x4); /* 0x171A974F: mov eax, dword ptr [eax + 4] */
    /* test eax, eax */ /* 0x171A9752: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9784; /* 0x171A9754: je 0x171a9784 */
L_171A9756:
    ecx = ebp + (-0x4); /* 0x171A9756: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x171A9759: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A975A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A975D: push eax */
    PUSH32(esp, esi); /* 0x171A975E: push esi */
    RECOMP_CALL(sub_171A94E8); /* 0x171A975F: call 0x171a94e8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9764: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A977D; /* 0x171A9766: jl 0x171a977d */
L_171A9768:
    eax = MEM32(ebp + (-0x4)); /* 0x171A9768: mov eax, dword ptr [ebp - 4] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x171A976B: imul ebx, eax */
L_171A976E:
    eax = MEM32(esi + 0xC); /* 0x171A976E: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A9771: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax) */ /* 0x171A9772: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A973C; /* 0x171A9774: jb 0x171a973c */
L_171A9776:
    eax = MEM32(ebp + 0xC); /* 0x171A9776: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ebx; /* 0x171A9779: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A977B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A977D:
    edi = POP32_VAL(esp); /* 0x171A977D: pop edi */
    esi = POP32_VAL(esp); /* 0x171A977E: pop esi */
    ebx = POP32_VAL(esp); /* 0x171A977F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A9780: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A9781: ret 8 */
L_171A9784:
    eax = 0x88760391u; /* 0x171A9784: mov eax, 0x88760391 */
    RECOMP_BACKEDGE();
    goto L_171A977D; /* 0x171A9789: jmp 0x171a977d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171A9790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9790u);

L_171A9790:
    edi = edi; /* 0x171A9790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9792: push ebp */
    ebp = esp; /* 0x171A9793: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A9795: push esi */
    esi = ecx; /* 0x171A9796: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A9798: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A97AE; /* 0x171A979C: jne 0x171a97ae */
L_171A979E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A979E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A97A1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A97A4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A8FE0); /* 0x171A97A7: call 0x171a8fe0 */
    RECOMP_FLAGS_IN();
    goto L_171A97E1; /* 0x171A97AC: jmp 0x171a97e1 */
L_171A97AE:
    eax = ebp + 0x14; /* 0x171A97AE: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x171A97B1: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171A97B2: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_171A9725); /* 0x171A97B5: call 0x171a9725 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A97BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A97E1; /* 0x171A97BC: jl 0x171a97e1 */
L_171A97BE:
    PUSH32(esp, edi); /* 0x171A97BE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A97BF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x171A97C1: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A97E0; /* 0x171A97C4: jbe 0x171a97e0 */
L_171A97C6:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A97C6: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x171A97C9: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A97CB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A97CE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A8FE0); /* 0x171A97D1: call 0x171a8fe0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A97D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A97E0; /* 0x171A97D8: jl 0x171a97e0 */
L_171A97DA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A97DA: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0x14) */ /* 0x171A97DB: cmp edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A97C6; /* 0x171A97DE: jb 0x171a97c6 */
L_171A97E0:
    edi = POP32_VAL(esp); /* 0x171A97E0: pop edi */
L_171A97E1:
    esi = POP32_VAL(esp); /* 0x171A97E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A97E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A97E3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A97EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A97EBu);

L_171A97EB:
    edi = edi; /* 0x171A97EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A97ED: push ebp */
    ebp = esp; /* 0x171A97EE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A97F0: push esi */
    esi = ecx; /* 0x171A97F1: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x171A97F3: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A980C; /* 0x171A97F7: jne 0x171a980c */
L_171A97F9:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171A97F9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A97FC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A97FF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A9802: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A8DF0); /* 0x171A9805: call 0x171a8df0 */
    RECOMP_FLAGS_IN();
    goto L_171A9842; /* 0x171A980A: jmp 0x171a9842 */
L_171A980C:
    eax = ebp + 0x18; /* 0x171A980C: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x171A980F: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171A9810: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_171A9725); /* 0x171A9813: call 0x171a9725 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9818: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A9842; /* 0x171A981A: jl 0x171a9842 */
L_171A981C:
    PUSH32(esp, edi); /* 0x171A981C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A981D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x171A981F: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A9841; /* 0x171A9822: jbe 0x171a9841 */
L_171A9824:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171A9824: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x171A9827: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A9829: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A982C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A982F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A8DF0); /* 0x171A9832: call 0x171a8df0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9837: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A9841; /* 0x171A9839: jl 0x171a9841 */
L_171A983B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171A983B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0x18) */ /* 0x171A983C: cmp edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A9824; /* 0x171A983F: jb 0x171a9824 */
L_171A9841:
    edi = POP32_VAL(esp); /* 0x171A9841: pop edi */
L_171A9842:
    esi = POP32_VAL(esp); /* 0x171A9842: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A9843: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171A9844: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171A984C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A984Cu);

L_171A984C:
    edi = edi; /* 0x171A984C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A984E: push ebp */
    ebp = esp; /* 0x171A984F: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171A9851: push edi */
    edi = ecx; /* 0x171A9852: mov edi, ecx */
    ecx = MEM32(edi + 0x1C); /* 0x171A9854: mov ecx, dword ptr [edi + 0x1c] */
    /* test ecx, ecx */ /* 0x171A9857: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9869; /* 0x171A9859: je 0x171a9869 */
L_171A985B:
    /* cmp MEM32(edi + 0x2C), 0 */ /* 0x171A985B: cmp dword ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A986D; /* 0x171A985F: jne 0x171a986d */
L_171A9861:
    eax = MEM32(ebp + 0x10); /* 0x171A9861: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x171A9864: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x171A9867: mov dword ptr [ecx], eax */
L_171A9869:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9869: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A9898; /* 0x171A986B: jmp 0x171a9898 */
L_171A986D:
    PUSH32(esp, esi); /* 0x171A986D: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A986E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9870: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), esi */ /* 0x171A9872: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A9897; /* 0x171A9874: jbe 0x171a9897 */
L_171A9876:
    eax = MEM32(ecx + 0xC); /* 0x171A9876: mov eax, dword ptr [ecx + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x171A9879: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, edi); /* 0x171A987C: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A987D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A9880: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A9883: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A9790); /* 0x171A9886: call 0x171a9790 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A988B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9897; /* 0x171A988D: jne 0x171a9897 */
L_171A988F:
    ecx = MEM32(edi + 0x1C); /* 0x171A988F: mov ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A9892: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ecx) */ /* 0x171A9893: cmp esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A9876; /* 0x171A9895: jb 0x171a9876 */
L_171A9897:
    esi = POP32_VAL(esp); /* 0x171A9897: pop esi */
L_171A9898:
    edi = POP32_VAL(esp); /* 0x171A9898: pop edi */
    ebp = POP32_VAL(esp); /* 0x171A9899: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A989A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A98A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A98A2u);

L_171A98A2:
    edi = edi; /* 0x171A98A2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A98A4: push ebp */
    ebp = esp; /* 0x171A98A5: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171A98A7: push edi */
    edi = ecx; /* 0x171A98A8: mov edi, ecx */
    ecx = MEM32(edi + 0x1C); /* 0x171A98AA: mov ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A98AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171A98AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A98DF; /* 0x171A98B1: je 0x171a98df */
L_171A98B3:
    PUSH32(esp, esi); /* 0x171A98B3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A98B4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), esi */ /* 0x171A98B6: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171A98DE; /* 0x171A98B8: jbe 0x171a98de */
L_171A98BA:
    eax = MEM32(ecx + 0xC); /* 0x171A98BA: mov eax, dword ptr [ecx + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x171A98BD: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, edi); /* 0x171A98C0: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171A98C1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A98C4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A98C7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A98CA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A97EB); /* 0x171A98CD: call 0x171a97eb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A98D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A98DE; /* 0x171A98D4: jne 0x171a98de */
L_171A98D6:
    ecx = MEM32(edi + 0x1C); /* 0x171A98D6: mov ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A98D9: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ecx) */ /* 0x171A98DA: cmp esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A98BA; /* 0x171A98DC: jb 0x171a98ba */
L_171A98DE:
    esi = POP32_VAL(esp); /* 0x171A98DE: pop esi */
L_171A98DF:
    edi = POP32_VAL(esp); /* 0x171A98DF: pop edi */
    ebp = POP32_VAL(esp); /* 0x171A98E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A98E1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A98E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A98E9u);

L_171A98E9:
    edi = edi; /* 0x171A98E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A98EB: push ebp */
    ebp = esp; /* 0x171A98EC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A98EE: push esi */
    esi = ecx; /* 0x171A98EF: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x171A98F1: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, edi); /* 0x171A98F4: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A98F5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171A98F7: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A9908; /* 0x171A98F9: je 0x171a9908 */
L_171A98FB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A98FB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A994D; /* 0x171A98FC: jne 0x171a994d */
L_171A98FE:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A98FE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A9078); /* 0x171A9901: call 0x171a9078 */
    RECOMP_FLAGS_IN();
    goto L_171A994D; /* 0x171A9906: jmp 0x171a994d */
L_171A9908:
    ecx = esi; /* 0x171A9908: mov ecx, esi */
    RECOMP_CALL(sub_171A967D); /* 0x171A990A: call 0x171a967d */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x48), edi */ /* 0x171A990F: cmp dword ptr [esi + 0x48], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A9941; /* 0x171A9912: jne 0x171a9941 */
L_171A9914:
    PUSH32(esp, 0x10u); /* 0x171A9914: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A9916: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A991B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A991D: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9931; /* 0x171A991E: je 0x171a9931 */
L_171A9920:
    MEM32(eax) = edi; /* 0x171A9920: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x171A9922: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = 0xAu; /* 0x171A9925: mov dword ptr [eax + 8], 0xa */
    MEM32(eax + 0xC) = edi; /* 0x171A992C: mov dword ptr [eax + 0xc], edi */
    goto L_171A9933; /* 0x171A992F: jmp 0x171a9933 */
L_171A9931:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9931: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A9933:
    /* cmp eax, edi */ /* 0x171A9933: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x48) = eax; /* 0x171A9935: mov dword ptr [esi + 0x48], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A9941; /* 0x171A9938: jne 0x171a9941 */
L_171A993A:
    eax = 0x8007000Eu; /* 0x171A993A: mov eax, 0x8007000e */
    goto L_171A994F; /* 0x171A993F: jmp 0x171a994f */
L_171A9941:
    ecx = MEM32(esi + 0x48); /* 0x171A9941: mov ecx, dword ptr [esi + 0x48] */
    eax = ebp + 0x8; /* 0x171A9944: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A9947: push eax */
    RECOMP_CALL(sub_171A902A); /* 0x171A9948: call 0x171a902a */
    RECOMP_FLAGS_IN();
L_171A994D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A994D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A994F:
    edi = POP32_VAL(esp); /* 0x171A994F: pop edi */
    esi = POP32_VAL(esp); /* 0x171A9950: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A9951: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A9952: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A995A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A995Au);

L_171A995A:
    edi = edi; /* 0x171A995A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A995C: push ebp */
    ebp = esp; /* 0x171A995D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A995F: push esi */
    esi = ecx; /* 0x171A9960: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x171A9962: mov eax, dword ptr [esi + 0x40] */
    PUSH32(esp, edi); /* 0x171A9965: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A9966: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171A9968: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A997D; /* 0x171A996A: je 0x171a997d */
L_171A996C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A996C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A99C2; /* 0x171A996D: jne 0x171a99c2 */
L_171A996F:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171A996F: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171A9972: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x171A9973: fstp dword ptr [esp] */
    RECOMP_CALL(sub_171A90D1); /* 0x171A9976: call 0x171a90d1 */
    RECOMP_FLAGS_IN();
    goto L_171A99C2; /* 0x171A997B: jmp 0x171a99c2 */
L_171A997D:
    ecx = esi; /* 0x171A997D: mov ecx, esi */
    RECOMP_CALL(sub_171A96B3); /* 0x171A997F: call 0x171a96b3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x4C), edi */ /* 0x171A9984: cmp dword ptr [esi + 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A99B6; /* 0x171A9987: jne 0x171a99b6 */
L_171A9989:
    PUSH32(esp, 0x10u); /* 0x171A9989: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x171A998B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171A9990: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171A9992: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A99A6; /* 0x171A9993: je 0x171a99a6 */
L_171A9995:
    MEM32(eax) = edi; /* 0x171A9995: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x171A9997: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = 0xFAu; /* 0x171A999A: mov dword ptr [eax + 8], 0xfa */
    MEM32(eax + 0xC) = edi; /* 0x171A99A1: mov dword ptr [eax + 0xc], edi */
    goto L_171A99A8; /* 0x171A99A4: jmp 0x171a99a8 */
L_171A99A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A99A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A99A8:
    /* cmp eax, edi */ /* 0x171A99A8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x4C) = eax; /* 0x171A99AA: mov dword ptr [esi + 0x4c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A99B6; /* 0x171A99AD: jne 0x171a99b6 */
L_171A99AF:
    eax = 0x8007000Eu; /* 0x171A99AF: mov eax, 0x8007000e */
    goto L_171A99C4; /* 0x171A99B4: jmp 0x171a99c4 */
L_171A99B6:
    ecx = MEM32(esi + 0x4C); /* 0x171A99B6: mov ecx, dword ptr [esi + 0x4c] */
    eax = ebp + 0x8; /* 0x171A99B9: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A99BC: push eax */
    RECOMP_CALL(sub_171A913E); /* 0x171A99BD: call 0x171a913e */
    RECOMP_FLAGS_IN();
L_171A99C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A99C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171A99C4:
    edi = POP32_VAL(esp); /* 0x171A99C4: pop edi */
    esi = POP32_VAL(esp); /* 0x171A99C5: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A99C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A99C7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A99CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A99CFu);

L_171A99CF:
    edi = edi; /* 0x171A99CF: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A99D1: push esi */
    esi = ecx; /* 0x171A99D2: mov esi, ecx */
    eax = MEM32(esi); /* 0x171A99D4: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x171A99D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A99E1; /* 0x171A99D8: je 0x171a99e1 */
L_171A99DA:
    PUSH32(esp, eax); /* 0x171A99DA: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A99DB: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A99E0: pop ecx */
L_171A99E1:
    ecx = MEM32(esi + 0xC); /* 0x171A99E1: mov ecx, dword ptr [esi + 0xc] */
    /* test ecx, ecx */ /* 0x171A99E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171A99E6: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A99F0; /* 0x171A99E7: je 0x171a99f0 */
L_171A99E9:
    PUSH32(esp, 1); /* 0x171A99E9: push 1 */
    RECOMP_CALL(sub_171A7600); /* 0x171A99EB: call 0x171a7600 */
    RECOMP_FLAGS_IN();
L_171A99F0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A99F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A99F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A99F6u);

L_171A99F6:
    edi = edi; /* 0x171A99F6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A99F8: push ebp */
    ebp = esp; /* 0x171A99F9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A99FB: push ecx */
    PUSH32(esp, edi); /* 0x171A99FC: push edi */
    edi = ecx; /* 0x171A99FD: mov edi, ecx */
    eax = MEM32(edi + 0x40); /* 0x171A99FF: mov eax, dword ptr [edi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171A9A02: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171A9AE9; /* 0x171A9A05: je 0x171a9ae9 */
L_171A9A0B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A9A0B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A9B01; /* 0x171A9A0C: jne 0x171a9b01 */
L_171A9A12:
    PUSH32(esp, esi); /* 0x171A9A12: push esi */
    eax = ebp + (-0x2); /* 0x171A9A13: lea eax, [ebp - 2] */
    PUSH32(esp, eax); /* 0x171A9A16: push eax */
    PUSH32(esp, 1); /* 0x171A9A17: push 1 */
    MEM8(ebp + (-0x2)) = (uint8_t)(0x22u); /* 0x171A9A19: mov byte ptr [ebp - 2], 0x22 */
    MEM8(ebp + (-0x1)) = (uint8_t)(0x5Cu); /* 0x171A9A1D: mov byte ptr [ebp - 1], 0x5c */
    RECOMP_CALL(sub_171A538A); /* 0x171A9A21: call 0x171a538a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171A9A26: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax), 0 */ /* 0x171A9A29: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = eax; /* 0x171A9A2C: mov esi, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9AD9; /* 0x171A9A2E: je 0x171a9ad9 */
L_171A9A34:
    SET_LO8(ecx, MEM8(esi)); /* 0x171A9A34: mov cl, byte ptr [esi] */
    /* cmp LO8(ecx), 0x22u */ /* 0x171A9A36: cmp cl, 0x22 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9AA0; /* 0x171A9A39: je 0x171a9aa0 */
L_171A9A3B:
    /* cmp LO8(ecx), 0x27u */ /* 0x171A9A3B: cmp cl, 0x27 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9AA0; /* 0x171A9A3E: je 0x171a9aa0 */
L_171A9A40:
    /* cmp LO8(ecx), 0x5Cu */ /* 0x171A9A40: cmp cl, 0x5c */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9AA0; /* 0x171A9A43: je 0x171a9aa0 */
L_171A9A45:
    /* cmp LO8(ecx), 0x1Eu */ /* 0x171A9A45: cmp cl, 0x1e */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x1Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_171A9A4F; /* 0x171A9A48: jl 0x171a9a4f */
L_171A9A4A:
    /* cmp LO8(ecx), 0x7Eu */ /* 0x171A9A4A: cmp cl, 0x7e */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_171A9AC0; /* 0x171A9A4D: jle 0x171a9ac0 */
L_171A9A4F:
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x171A9A4F: movsx ecx, cl */
    /* cmp ecx, 0x80u */ /* 0x171A9A52: cmp ecx, 0x80 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171A9A62; /* 0x171A9A58: jl 0x171a9a62 */
L_171A9A5A:
    /* cmp ecx, 0xFEu */ /* 0x171A9A5A: cmp ecx, 0xfe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171A9AC0; /* 0x171A9A60: jle 0x171a9ac0 */
L_171A9A62:
    /* cmp esi, eax */ /* 0x171A9A62: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9A73; /* 0x171A9A64: je 0x171a9a73 */
L_171A9A66:
    ecx = esi; /* 0x171A9A66: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171A9A68: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x171A9A6A: push eax */
    PUSH32(esp, ecx); /* 0x171A9A6B: push ecx */
    ecx = edi; /* 0x171A9A6C: mov ecx, edi */
    RECOMP_CALL(sub_171A538A); /* 0x171A9A6E: call 0x171a538a */
    RECOMP_FLAGS_IN();
L_171A9A73:
    eax = (uint32_t)MEM8(esi); /* 0x171A9A73: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x171A9A76: push eax */
    PUSH32(esp, 0x17023A0Cu); /* 0x171A9A77: push 0x17023a0c */
    PUSH32(esp, edi); /* 0x171A9A7C: push edi */
    RECOMP_CALL(sub_171A5DE5); /* 0x171A9A7D: call 0x171a5de5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171A9A82: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0x1); /* 0x171A9A85: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x171A9A88: push eax */
    PUSH32(esp, 1); /* 0x171A9A89: push 1 */
    ecx = edi; /* 0x171A9A8B: mov ecx, edi */
    RECOMP_CALL(sub_171A538A); /* 0x171A9A8D: call 0x171a538a */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x1; /* 0x171A9A92: lea ecx, [esi + 1] */
    /* cmp MEM8(ecx), 0 */ /* 0x171A9A95: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi; /* 0x171A9A98: mov eax, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9AC0; /* 0x171A9A9A: je 0x171a9ac0 */
L_171A9A9C:
    esi = ecx; /* 0x171A9A9C: mov esi, ecx */
    goto L_171A9AC0; /* 0x171A9A9E: jmp 0x171a9ac0 */
L_171A9AA0:
    /* cmp esi, eax */ /* 0x171A9AA0: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9AB1; /* 0x171A9AA2: je 0x171a9ab1 */
L_171A9AA4:
    ecx = esi; /* 0x171A9AA4: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171A9AA6: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x171A9AA8: push eax */
    PUSH32(esp, ecx); /* 0x171A9AA9: push ecx */
    ecx = edi; /* 0x171A9AAA: mov ecx, edi */
    RECOMP_CALL(sub_171A538A); /* 0x171A9AAC: call 0x171a538a */
    RECOMP_FLAGS_IN();
L_171A9AB1:
    eax = ebp + (-0x1); /* 0x171A9AB1: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x171A9AB4: push eax */
    PUSH32(esp, 1); /* 0x171A9AB5: push 1 */
    ecx = edi; /* 0x171A9AB7: mov ecx, edi */
    RECOMP_CALL(sub_171A538A); /* 0x171A9AB9: call 0x171a538a */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171A9ABE: mov eax, esi */
L_171A9AC0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A9AC0: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x171A9AC1: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A9A34; /* 0x171A9AC4: jne 0x171a9a34 */
L_171A9ACA:
    /* cmp esi, eax */ /* 0x171A9ACA: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9AD9; /* 0x171A9ACC: je 0x171a9ad9 */
L_171A9ACE:
    PUSH32(esp, eax); /* 0x171A9ACE: push eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x171A9ACF: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171A9AD1: push esi */
    ecx = edi; /* 0x171A9AD2: mov ecx, edi */
    RECOMP_CALL(sub_171A538A); /* 0x171A9AD4: call 0x171a538a */
    RECOMP_FLAGS_IN();
L_171A9AD9:
    eax = ebp + (-0x2); /* 0x171A9AD9: lea eax, [ebp - 2] */
    PUSH32(esp, eax); /* 0x171A9ADC: push eax */
    PUSH32(esp, 1); /* 0x171A9ADD: push 1 */
    ecx = edi; /* 0x171A9ADF: mov ecx, edi */
    RECOMP_CALL(sub_171A538A); /* 0x171A9AE1: call 0x171a538a */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171A9AE6: pop esi */
    goto L_171A9B01; /* 0x171A9AE7: jmp 0x171a9b01 */
L_171A9AE9:
    ecx = edi; /* 0x171A9AE9: mov ecx, edi */
    RECOMP_CALL(sub_171A96B3); /* 0x171A9AEB: call 0x171a96b3 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x171A9AF0: mov ecx, edi */
    RECOMP_CALL(sub_171A967D); /* 0x171A9AF2: call 0x171a967d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A9AF7: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x171A9AFA: mov ecx, edi */
    RECOMP_CALL(sub_171A962C); /* 0x171A9AFC: call 0x171a962c */
    RECOMP_FLAGS_IN();
L_171A9B01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9B01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x171A9B03: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A9B04: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A9B05: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A9B0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9B0Du);

L_171A9B0D:
    edi = edi; /* 0x171A9B0D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9B0F: push ebp */
    ebp = esp; /* 0x171A9B10: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x171A9B12: mov edx, dword ptr [ecx + 8] */
    /* test edx, edx */ /* 0x171A9B15: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171A9B17: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171A9B18: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x171A9B1B: mov eax, dword ptr [esi] */
    MEM32(ebp + 0xC) = eax; /* 0x171A9B1D: mov dword ptr [ebp + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x171A9B20: mov dword ptr [ecx + 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9B3A; /* 0x171A9B23: je 0x171a9b3a */
L_171A9B25:
    PUSH32(esp, 0); /* 0x171A9B25: push 0 */
    eax = ebp + 0xC; /* 0x171A9B27: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171A9B2A: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A9B2B: push dword ptr [ebp + 8] */
    ecx = edx; /* 0x171A9B2E: mov ecx, edx */
    RECOMP_CALL(sub_171A9C99); /* 0x171A9B30: call 0x171a9c99 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171A9B35: mov ecx, dword ptr [ebp + 0xc] */
    goto L_171A9B60; /* 0x171A9B38: jmp 0x171a9b60 */
L_171A9B3A:
    ecx = MEM32(ecx + 0x4); /* 0x171A9B3A: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + 0x4); /* 0x171A9B3D: mov ecx, dword ptr [ecx + 4] */
    /* cmp ecx, 8 */ /* 0x171A9B40: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A9BD6; /* 0x171A9B43: ja 0x171a9bd6 */
L_171A9B49:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x171A9BE0)); goto _ljump; }
L_171A9B50:
    PUSH32(esp, MEM32(eax)); /* 0x171A9B50: push dword ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x171A9B52: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A98E9); /* 0x171A9B55: call 0x171a98e9 */
    RECOMP_FLAGS_IN();
L_171A9B5A:
    ecx = MEM32(ebp + 0xC); /* 0x171A9B5A: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171A9B5D: add ecx, 4 */
    _flag_k = FK_ADD;
L_171A9B60:
    MEM32(esi) = ecx; /* 0x171A9B60: mov dword ptr [esi], ecx */
    goto L_171A9BDB; /* 0x171A9B62: jmp 0x171a9bdb */
L_171A9B64:
    eax = (uint32_t)MEM16(eax); /* 0x171A9B64: movzx eax, word ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x171A9B67: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A9B6A: push eax */
    RECOMP_CALL(sub_171A98E9); /* 0x171A9B6B: call 0x171a98e9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171A9B70: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171A9B73: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_171A9B60; /* 0x171A9B76: jmp 0x171a9b60 */
L_171A9B78:
    eax = (uint32_t)MEM8(eax); /* 0x171A9B78: movzx eax, byte ptr [eax] */
    ecx = MEM32(ebp + 0x8); /* 0x171A9B7B: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x171A9B7E: push eax */
    RECOMP_CALL(sub_171A98E9); /* 0x171A9B7F: call 0x171a98e9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171A9B84: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A9B87: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_171A9B60; /* 0x171A9B88: jmp 0x171a9b60 */
L_171A9B8A:
    fp_push(*(float*)&MEM32(eax)); /* 0x171A9B8A: fld dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x171A9B8C: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A9B8D: mov ecx, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x171A9B90: fstp dword ptr [esp] */
    RECOMP_CALL(sub_171A995A); /* 0x171A9B93: call 0x171a995a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171A9B5A; /* 0x171A9B98: jmp 0x171a9b5a */
L_171A9B9A:
    fp_push(*(double*)ADDR(eax)); /* 0x171A9B9A: fld qword ptr [eax] */
    PUSH32(esp, ecx); /* 0x171A9B9C: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171A9B9D: mov ecx, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x171A9BA0: fstp dword ptr [esp] */
    RECOMP_CALL(sub_171A995A); /* 0x171A9BA3: call 0x171a995a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171A9BA8: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171A9BAB: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_171A9B60; /* 0x171A9BAE: jmp 0x171a9b60 */
L_171A9BB0:
    ecx = MEM32(ebp + 0x8); /* 0x171A9BB0: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171A9BB3: push ebx */
    PUSH32(esp, edi); /* 0x171A9BB4: push edi */
    PUSH32(esp, eax); /* 0x171A9BB5: push eax */
    RECOMP_CALL(sub_171A99F6); /* 0x171A9BB6: call 0x171a99f6 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x171A9BBB: mov edi, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x171A9BBE: mov ecx, edi */
    edx = ecx + 0x1; /* 0x171A9BC0: lea edx, [ecx + 1] */
L_171A9BC3:
    SET_LO8(ebx, MEM8(ecx)); /* 0x171A9BC3: mov bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171A9BC5: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x171A9BC6: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9BC3; /* 0x171A9BC8: jne 0x171a9bc3 */
L_171A9BCA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x171A9BCA: sub ecx, edx */
    _flag_k = FK_CMP;
    ecx = ecx + edi + 0x1; /* 0x171A9BCC: lea ecx, [ecx + edi + 1] */
    edi = POP32_VAL(esp); /* 0x171A9BD0: pop edi */
    MEM32(esi) = ecx; /* 0x171A9BD1: mov dword ptr [esi], ecx */
    ebx = POP32_VAL(esp); /* 0x171A9BD3: pop ebx */
    goto L_171A9BDB; /* 0x171A9BD4: jmp 0x171a9bdb */
L_171A9BD6:
    eax = 0x88760388u; /* 0x171A9BD6: mov eax, 0x88760388 */
L_171A9BDB:
    esi = POP32_VAL(esp); /* 0x171A9BDB: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A9BDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171A9BDD: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171A9B50u: goto L_171A9B50;
      case 0x171A9B64u: goto L_171A9B64;
      case 0x171A9B78u: goto L_171A9B78;
      case 0x171A9B8Au: goto L_171A9B8A;
      case 0x171A9B9Au: goto L_171A9B9A;
      case 0x171A9BB0u: goto L_171A9BB0;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171A9C09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9C09u);

L_171A9C09:
    edi = edi; /* 0x171A9C09: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9C0B: push ebp */
    ebp = esp; /* 0x171A9C0C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A9C0E: push ecx */
    PUSH32(esp, edi); /* 0x171A9C0F: push edi */
    edi = ecx; /* 0x171A9C10: mov edi, ecx */
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x171A9C12: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171A9C25; /* 0x171A9C16: jne 0x171a9c25 */
L_171A9C18:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A9C18: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171A9C1B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171A9B0D); /* 0x171A9C1E: call 0x171a9b0d */
    RECOMP_FLAGS_IN();
    goto L_171A9C8F; /* 0x171A9C23: jmp 0x171a9c8f */
L_171A9C25:
    eax = ebp + (-0x4); /* 0x171A9C25: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171A9C28: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171A9C29: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_171A9725); /* 0x171A9C2C: call 0x171a9725 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9C31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171A9C8F; /* 0x171A9C33: jl 0x171a9c8f */
L_171A9C35:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x171A9C35: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171A9C39: push ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x171A9C3A: mov ebx, dword ptr [ebp - 4] */
    /* test ebx, ebx */ /* 0x171A9C3D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9C8E; /* 0x171A9C3F: jbe 0x171a9c8e */
L_171A9C41:
    PUSH32(esp, esi); /* 0x171A9C41: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A9C42: mov esi, dword ptr [ebp + 8] */
L_171A9C45:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A9C45: push dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x171A9C48: mov ecx, edi */
    PUSH32(esp, esi); /* 0x171A9C4A: push esi */
    RECOMP_CALL(sub_171A9B0D); /* 0x171A9C4B: call 0x171a9b0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9C50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9C8D; /* 0x171A9C52: jne 0x171a9c8d */
L_171A9C54:
    ecx = ebx + (-0x1); /* 0x171A9C54: lea ecx, [ebx - 1] */
    /* cmp MEM32(ebp + 0x14), ecx */ /* 0x171A9C57: cmp dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9C85; /* 0x171A9C5A: je 0x171a9c85 */
L_171A9C5C:
    eax = MEM32(esi + 0x40); /* 0x171A9C5C: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A9C5F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A9C71; /* 0x171A9C60: jne 0x171a9c71 */
L_171A9C62:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9C62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(0x17023738)); /* 0x171A9C64: mov al, byte ptr [0x17023738] */
    ecx = esi; /* 0x171A9C69: mov ecx, esi */
    PUSH32(esp, eax); /* 0x171A9C6B: push eax */
    RECOMP_CALL(sub_171A5366); /* 0x171A9C6C: call 0x171a5366 */
    RECOMP_FLAGS_IN();
L_171A9C71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9C71: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x171A9C73: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9C85; /* 0x171A9C76: je 0x171a9c85 */
L_171A9C78:
    PUSH32(esp, 2); /* 0x171A9C78: push 2 */
    ecx = esi; /* 0x171A9C7A: mov ecx, esi */
    RECOMP_CALL(sub_171A68CE); /* 0x171A9C7C: call 0x171a68ce */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9C81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9C8D; /* 0x171A9C83: jne 0x171a9c8d */
L_171A9C85:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x171A9C85: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x171A9C88: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A9C45; /* 0x171A9C8B: jb 0x171a9c45 */
L_171A9C8D:
    esi = POP32_VAL(esp); /* 0x171A9C8D: pop esi */
L_171A9C8E:
    ebx = POP32_VAL(esp); /* 0x171A9C8E: pop ebx */
L_171A9C8F:
    edi = POP32_VAL(esp); /* 0x171A9C8F: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A9C90: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171A9C91: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171A9C99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9C99u);

L_171A9C99:
    edi = edi; /* 0x171A9C99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9C9B: push ebp */
    ebp = esp; /* 0x171A9C9C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171A9C9E: push ecx */
    PUSH32(esp, edi); /* 0x171A9C9F: push edi */
    edi = ecx; /* 0x171A9CA0: mov edi, ecx */
    ecx = MEM32(edi + 0x1C); /* 0x171A9CA2: mov ecx, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9CA5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171A9CA7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9D0E; /* 0x171A9CA9: je 0x171a9d0e */
L_171A9CAB:
    ecx = MEM32(ecx); /* 0x171A9CAB: mov ecx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x171A9CAD: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171A9CAE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171A9CB0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171A9CB2: mov dword ptr [ebp - 4], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9D0D; /* 0x171A9CB5: jbe 0x171a9d0d */
L_171A9CB7:
    PUSH32(esp, ebx); /* 0x171A9CB7: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171A9CB8: mov ebx, dword ptr [ebp + 8] */
L_171A9CBB:
    eax = MEM32(edi + 0x1C); /* 0x171A9CBB: mov eax, dword ptr [edi + 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x171A9CBE: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x171A9CC1: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, edi); /* 0x171A9CC4: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171A9CC5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171A9CC8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171A9CCB: push ebx */
    RECOMP_CALL(sub_171A9C09); /* 0x171A9CCC: call 0x171a9c09 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9CD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9D0C; /* 0x171A9CD3: jne 0x171a9d0c */
L_171A9CD5:
    eax = MEM32(ebx + 0x40); /* 0x171A9CD5: mov eax, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171A9CD8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171A9CEA; /* 0x171A9CD9: jne 0x171a9cea */
L_171A9CDB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9CDB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(0x17023739)); /* 0x171A9CDD: mov al, byte ptr [0x17023739] */
    ecx = ebx; /* 0x171A9CE2: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x171A9CE4: push eax */
    RECOMP_CALL(sub_171A5366); /* 0x171A9CE5: call 0x171a5366 */
    RECOMP_FLAGS_IN();
L_171A9CEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9CEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x171A9CEC: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9D06; /* 0x171A9CEF: je 0x171a9d06 */
L_171A9CF1:
    ecx = MEM32(ebp + (-0x4)); /* 0x171A9CF1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171A9CF4: dec ecx */
    _flag_k = FK_DEC;
    /* cmp esi, ecx */ /* 0x171A9CF5: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9D06; /* 0x171A9CF7: je 0x171a9d06 */
L_171A9CF9:
    PUSH32(esp, 2); /* 0x171A9CF9: push 2 */
    ecx = ebx; /* 0x171A9CFB: mov ecx, ebx */
    RECOMP_CALL(sub_171A68CE); /* 0x171A9CFD: call 0x171a68ce */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9D02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9D0C; /* 0x171A9D04: jne 0x171a9d0c */
L_171A9D06:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171A9D06: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x171A9D07: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171A9CBB; /* 0x171A9D0A: jb 0x171a9cbb */
L_171A9D0C:
    ebx = POP32_VAL(esp); /* 0x171A9D0C: pop ebx */
L_171A9D0D:
    esi = POP32_VAL(esp); /* 0x171A9D0D: pop esi */
L_171A9D0E:
    edi = POP32_VAL(esp); /* 0x171A9D0E: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171A9D0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171A9D10: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171A9D18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9D18u);

L_171A9D18:
    edi = edi; /* 0x171A9D18: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A9D1A: push esi */
    esi = ecx; /* 0x171A9D1B: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x171A9D1D: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171A9D20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x17023A08u; /* 0x171A9D22: mov dword ptr [esi], 0x17023a08 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9D31; /* 0x171A9D28: je 0x171a9d31 */
L_171A9D2A:
    PUSH32(esp, eax); /* 0x171A9D2A: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9D2B: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9D30: pop ecx */
L_171A9D31:
    ecx = MEM32(esi + 0x1C); /* 0x171A9D31: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x171A9D34: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9D3F; /* 0x171A9D36: je 0x171a9d3f */
L_171A9D38:
    PUSH32(esp, 1); /* 0x171A9D38: push 1 */
    RECOMP_CALL(sub_171A75B4); /* 0x171A9D3A: call 0x171a75b4 */
    RECOMP_FLAGS_IN();
L_171A9D3F:
    ecx = MEM32(esi + 0x20); /* 0x171A9D3F: mov ecx, dword ptr [esi + 0x20] */
    /* test ecx, ecx */ /* 0x171A9D42: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171A9D44: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9D4E; /* 0x171A9D45: je 0x171a9d4e */
L_171A9D47:
    PUSH32(esp, 1); /* 0x171A9D47: push 1 */
    RECOMP_CALL(sub_171A75DA); /* 0x171A9D49: call 0x171a75da */
    RECOMP_FLAGS_IN();
L_171A9D4E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9D4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A9D54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9D54u);

L_171A9D54:
    edi = edi; /* 0x171A9D54: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9D56: push ebp */
    ebp = esp; /* 0x171A9D57: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171A9D59: push esi */
    esi = ecx; /* 0x171A9D5A: mov esi, ecx */
    RECOMP_CALL(sub_171A9D18); /* 0x171A9D5C: call 0x171a9d18 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171A9D61: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9D6E; /* 0x171A9D65: je 0x171a9d6e */
L_171A9D67:
    PUSH32(esp, esi); /* 0x171A9D67: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171A9D68: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9D6D: pop ecx */
L_171A9D6E:
    eax = esi; /* 0x171A9D6E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171A9D70: pop esi */
    ebp = POP32_VAL(esp); /* 0x171A9D71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171A9D72: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171A9D7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9D7Au);

L_171A9D7A:
    edi = edi; /* 0x171A9D7A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9D7C: push ebp */
    ebp = esp; /* 0x171A9D7D: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x171A9D7F: pop ebp */
    goto L_1721B254; /* 0x171A9D80: jmp 0x1721b254 */
L_1721B254:
    { _itail_tgt = (uint32_t)(MEM32(0x17001268)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171A9D8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9D8Au);

L_171A9D8A:
    edi = edi; /* 0x171A9D8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9D8C: push ebp */
    ebp = esp; /* 0x171A9D8D: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x171A9D8F: pop ebp */
    goto L_1721B224; /* 0x171A9D90: jmp 0x1721b224 */
L_1721B224:
    { _itail_tgt = (uint32_t)(MEM32(0x17001278)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171A9D9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9D9Au);

L_171A9D9A:
    eax = ecx; /* 0x171A9D9A: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171A9D9C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x171A9D9E: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x171A9DA0: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x171A9DA3: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x171A9DA6: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x171A9DA9: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x171A9DAC: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171A9DAF: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x171A9DB2: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x171A9DB5: mov dword ptr [eax + 0x20], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9DB8: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A9DBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9DBEu);

L_171A9DBE:
    edi = edi; /* 0x171A9DBE: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A9DC0: push esi */
    esi = ecx; /* 0x171A9DC1: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x171A9DC3: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171A9DC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9DD1; /* 0x171A9DC8: je 0x171a9dd1 */
L_171A9DCA:
    PUSH32(esp, eax); /* 0x171A9DCA: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9DCB: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9DD0: pop ecx */
L_171A9DD1:
    eax = MEM32(esi + 0x8); /* 0x171A9DD1: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x171A9DD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9DDF; /* 0x171A9DD6: je 0x171a9ddf */
L_171A9DD8:
    PUSH32(esp, eax); /* 0x171A9DD8: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9DD9: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9DDE: pop ecx */
L_171A9DDF:
    eax = MEM32(esi + 0xC); /* 0x171A9DDF: mov eax, dword ptr [esi + 0xc] */
    /* test eax, eax */ /* 0x171A9DE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9DED; /* 0x171A9DE4: je 0x171a9ded */
L_171A9DE6:
    PUSH32(esp, eax); /* 0x171A9DE6: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9DE7: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9DEC: pop ecx */
L_171A9DED:
    eax = MEM32(esi + 0x10); /* 0x171A9DED: mov eax, dword ptr [esi + 0x10] */
    /* test eax, eax */ /* 0x171A9DF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9DFB; /* 0x171A9DF2: je 0x171a9dfb */
L_171A9DF4:
    PUSH32(esp, eax); /* 0x171A9DF4: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9DF5: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9DFA: pop ecx */
L_171A9DFB:
    eax = MEM32(esi + 0x14); /* 0x171A9DFB: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x171A9DFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E09; /* 0x171A9E00: je 0x171a9e09 */
L_171A9E02:
    PUSH32(esp, eax); /* 0x171A9E02: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9E03: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9E08: pop ecx */
L_171A9E09:
    eax = MEM32(esi + 0x18); /* 0x171A9E09: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x171A9E0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E17; /* 0x171A9E0E: je 0x171a9e17 */
L_171A9E10:
    PUSH32(esp, eax); /* 0x171A9E10: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9E11: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9E16: pop ecx */
L_171A9E17:
    eax = MEM32(esi + 0x1C); /* 0x171A9E17: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x171A9E1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E25; /* 0x171A9E1C: je 0x171a9e25 */
L_171A9E1E:
    PUSH32(esp, eax); /* 0x171A9E1E: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9E1F: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9E24: pop ecx */
L_171A9E25:
    eax = MEM32(esi + 0x20); /* 0x171A9E25: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x171A9E28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E33; /* 0x171A9E2A: je 0x171a9e33 */
L_171A9E2C:
    PUSH32(esp, eax); /* 0x171A9E2C: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171A9E2D: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9E32: pop ecx */
L_171A9E33:
    esi = MEM32(esi); /* 0x171A9E33: mov esi, dword ptr [esi] */
    /* test esi, esi */ /* 0x171A9E35: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E44; /* 0x171A9E37: je 0x171a9e44 */
L_171A9E39:
    PUSH32(esp, 0x171A9D8Au); /* 0x171A9E39: push 0x171a9d8a */
    PUSH32(esp, esi); /* 0x171A9E3E: push esi */
    RECOMP_CALL(sub_171B155C); /* 0x171A9E3F: call 0x171b155c */
    RECOMP_FLAGS_IN();
L_171A9E44:
    esi = POP32_VAL(esp); /* 0x171A9E44: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9E45: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A9E4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9E4Bu);

L_171A9E4B:
    edi = edi; /* 0x171A9E4B: mov edi, edi */
    PUSH32(esp, esi); /* 0x171A9E4D: push esi */
    PUSH32(esp, 0x171A9D7Au); /* 0x171A9E4E: push 0x171a9d7a */
    esi = ecx; /* 0x171A9E53: mov esi, ecx */
    RECOMP_CALL(sub_171AF102); /* 0x171A9E55: call 0x171af102 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9E5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x171A9E5C: mov dword ptr [esi], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9E62; /* 0x171A9E5E: jne 0x171a9e62 */
L_171A9E60:
    esi = POP32_VAL(esp); /* 0x171A9E60: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9E61: ret  */
L_171A9E62:
    PUSH32(esp, edi); /* 0x171A9E62: push edi */
    edi = 0x8000u; /* 0x171A9E63: mov edi, 0x8000 */
    PUSH32(esp, edi); /* 0x171A9E68: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171A9E69: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9E6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A9E70: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x171A9E71: mov dword ptr [esi + 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9E7D; /* 0x171A9E74: jne 0x171a9e7d */
L_171A9E76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171A9E76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171A9F00; /* 0x171A9E78: jmp 0x171a9f00 */
L_171A9E7D:
    PUSH32(esp, edi); /* 0x171A9E7D: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171A9E7E: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9E83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A9E85: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x171A9E86: mov dword ptr [esi + 8], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E76; /* 0x171A9E89: je 0x171a9e76 */
L_171A9E8B:
    PUSH32(esp, eax); /* 0x171A9E8B: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171A9E8C: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x171A9E8F: push dword ptr [esi] */
    RECOMP_CALL(sub_171AF1E0); /* 0x171A9E91: call 0x171af1e0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9E96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9E76; /* 0x171A9E98: jne 0x171a9e76 */
L_171A9E9A:
    edi = 0x00010000u; /* 0x171A9E9A: mov edi, 0x10000 */
    PUSH32(esp, edi); /* 0x171A9E9F: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171A9EA0: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9EA5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A9EA7: pop ecx */
    MEM32(esi + 0xC) = eax; /* 0x171A9EA8: mov dword ptr [esi + 0xc], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E76; /* 0x171A9EAB: je 0x171a9e76 */
L_171A9EAD:
    PUSH32(esp, 0x8008u); /* 0x171A9EAD: push 0x8008 */
    RECOMP_CALL(sub_1721B254); /* 0x171A9EB2: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9EB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A9EB9: pop ecx */
    MEM32(esi + 0x10) = eax; /* 0x171A9EBA: mov dword ptr [esi + 0x10], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E76; /* 0x171A9EBD: je 0x171a9e76 */
L_171A9EBF:
    PUSH32(esp, 0x200u); /* 0x171A9EBF: push 0x200 */
    RECOMP_CALL(sub_1721B254); /* 0x171A9EC4: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9EC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A9ECB: pop ecx */
    MEM32(esi + 0x14) = eax; /* 0x171A9ECC: mov dword ptr [esi + 0x14], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E76; /* 0x171A9ECF: je 0x171a9e76 */
L_171A9ED1:
    PUSH32(esp, edi); /* 0x171A9ED1: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171A9ED2: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9ED7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A9ED9: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x171A9EDA: mov dword ptr [esi + 0x18], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E76; /* 0x171A9EDD: je 0x171a9e76 */
L_171A9EDF:
    PUSH32(esp, edi); /* 0x171A9EDF: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171A9EE0: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9EE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171A9EE7: pop ecx */
    MEM32(esi + 0x1C) = eax; /* 0x171A9EE8: mov dword ptr [esi + 0x1c], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171A9E76; /* 0x171A9EEB: je 0x171a9e76 */
L_171A9EED:
    PUSH32(esp, edi); /* 0x171A9EED: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171A9EEE: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171A9EF3: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171A9EF4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171A9EF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171A9EF8: setne cl */
    MEM32(esi + 0x20) = eax; /* 0x171A9EFB: mov dword ptr [esi + 0x20], eax */
    eax = ecx; /* 0x171A9EFE: mov eax, ecx */
L_171A9F00:
    edi = POP32_VAL(esp); /* 0x171A9F00: pop edi */
    esi = POP32_VAL(esp); /* 0x171A9F01: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171A9F02: ret  */
    RECOMP_REGS_OUT();
}

void sub_171A9F08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171A9F08u);

L_171A9F08:
    edi = edi; /* 0x171A9F08: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171A9F0A: push ebp */
    ebp = esp; /* 0x171A9F0B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x171A9F0D: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171A9F10: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171A9F15: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x171A9F18: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171A9F1B: push ebx */
    ebx = ecx; /* 0x171A9F1C: mov ebx, ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x171A9F1E: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebx + 0xC); /* 0x171A9F21: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x171A9F24: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171A9F25: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x171A9F28: mov dword ptr [ebp - 0x30], eax */
    eax = ebp + (-0x38); /* 0x171A9F2B: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x171A9F2E: push eax */
    PUSH32(esp, esi); /* 0x171A9F2F: push esi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x171A9F30: mov dword ptr [ebp - 0x2c], esi */
    MEM8(ebp + (-0x28)) = (uint8_t)(0); /* 0x171A9F33: mov byte ptr [ebp - 0x28], 0 */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171A9F37: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x171A9F3D: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = eax; /* 0x171A9F41: mov dword ptr [ebp - 0x3c], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171A9F4D; /* 0x171A9F44: jl 0x171a9f4d */
L_171A9F46:
    if (CMP_G(_flag_a, _flag_b)) goto L_171A9F77; /* 0x171A9F46: jg 0x171a9f77 */
L_171A9F48:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171A9F48: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171A9F77; /* 0x171A9F4B: ja 0x171a9f77 */
L_171A9F4D:
    PUSH32(esp, 0); /* 0x171A9F4D: push 0 */
    MEM32(ebp + (-0x34)) = eax; /* 0x171A9F4F: mov dword ptr [ebp - 0x34], eax */
    eax = ebp + (-0x18); /* 0x171A9F52: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171A9F55: push eax */
    PUSH32(esp, 0x10u); /* 0x171A9F56: push 0x10 */
    eax = ebp + (-0x14); /* 0x171A9F58: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171A9F5B: push eax */
    PUSH32(esp, esi); /* 0x171A9F5C: push esi */
    RECOMP_ICALL(MEM32(0x170010F4)); /* 0x171A9F5D: call dword ptr [0x170010f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9F63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9F71; /* 0x171A9F65: jne 0x171a9f71 */
L_171A9F67:
    eax = 0x8876038Fu; /* 0x171A9F67: mov eax, 0x8876038f */
    goto L_171AA07E; /* 0x171A9F6C: jmp 0x171aa07e */
L_171A9F71:
    /* cmp MEM32(ebp + (-0x18)), 0x10u */ /* 0x171A9F71: cmp dword ptr [ebp - 0x18], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171A9F7F; /* 0x171A9F75: je 0x171a9f7f */
L_171A9F77:
    PUSH32(esp, 0xEu); /* 0x171A9F77: push 0xe */
    eax = POP32_VAL(esp); /* 0x171A9F79: pop eax */
    goto L_171AA07E; /* 0x171A9F7A: jmp 0x171aa07e */
L_171A9F7F:
    PUSH32(esp, edi); /* 0x171A9F7F: push edi */
    esi = 0x17023A10u; /* 0x171A9F80: mov esi, 0x17023a10 */
    edi = ebp + (-0xB); /* 0x171A9F85: lea edi, [ebp - 0xb] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x171A9F88: movsw word ptr es:[edi], word ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x171A9F8A: movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(0x170010E4); /* 0x171A9F8B: mov esi, dword ptr [0x170010e4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171A9F91: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171A9F93: push edi */
    eax = ebp + (-0x1C); /* 0x171A9F94: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171A9F97: push eax */
    PUSH32(esp, 0x10u); /* 0x171A9F98: push 0x10 */
    eax = ebp + (-0x14); /* 0x171A9F9A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171A9F9D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171A9F9E: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(esi); /* 0x171A9FA1: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9FA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA078; /* 0x171A9FA5: je 0x171aa078 */
L_171A9FAB:
    PUSH32(esp, edi); /* 0x171A9FAB: push edi */
    eax = ebp + (-0x1C); /* 0x171A9FAC: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171A9FAF: push eax */
    PUSH32(esp, 4); /* 0x171A9FB0: push 4 */
    eax = ebp + (-0x34); /* 0x171A9FB2: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x171A9FB5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171A9FB6: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(esi); /* 0x171A9FB9: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171A9FBB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA078; /* 0x171A9FBD: je 0x171aa078 */
L_171A9FC3:
    PUSH32(esp, edi); /* 0x171A9FC3: push edi */
    eax = ebp + (-0x18); /* 0x171A9FC4: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171A9FC7: push eax */
    edi = 0x8000u; /* 0x171A9FC8: mov edi, 0x8000 */
    PUSH32(esp, edi); /* 0x171A9FCD: push edi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x171A9FCE: push dword ptr [ebp - 0x30] */
    goto L_171AA067; /* 0x171A9FD1: jmp 0x171aa067 */
L_171A9FD6:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x171A9FD6: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA08C; /* 0x171A9FDA: je 0x171aa08c */
L_171A9FE0:
    eax = ebp + (-0x24); /* 0x171A9FE0: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171A9FE3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x171A9FE4: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x171A9FE7: push dword ptr [ebx + 0x20] */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x171A9FEA: push dword ptr [ebx + 0x1c] */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x171A9FED: push dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x171A9FF0: push dword ptr [ebx + 0x14] */
    PUSH32(esp, 0x8008u); /* 0x171A9FF3: push 0x8008 */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x171A9FF8: push dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171A9FFB: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x171A9FFE: push dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebx)); /* 0x171AA001: push dword ptr [ebx] */
    RECOMP_CALL(sub_171B05BB); /* 0x171AA003: call 0x171b05bb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA008: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA090; /* 0x171AA00A: jne 0x171aa090 */
L_171AA010:
    PUSH32(esp, eax); /* 0x171AA010: push eax */
    eax = ebp + (-0x1C); /* 0x171AA011: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171AA014: push eax */
    PUSH32(esp, 2); /* 0x171AA015: push 2 */
    eax = ebp + (-0x18); /* 0x171AA017: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171AA01A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171AA01B: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(esi); /* 0x171AA01E: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA020: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA078; /* 0x171AA022: je 0x171aa078 */
L_171AA024:
    PUSH32(esp, 0); /* 0x171AA024: push 0 */
    eax = ebp + (-0x1C); /* 0x171AA026: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171AA029: push eax */
    PUSH32(esp, 2); /* 0x171AA02A: push 2 */
    eax = ebp + (-0x24); /* 0x171AA02C: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171AA02F: push eax */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171AA030: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(esi); /* 0x171AA033: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA035: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA078; /* 0x171AA037: je 0x171aa078 */
L_171AA039:
    PUSH32(esp, 0); /* 0x171AA039: push 0 */
    eax = ebp + (-0x1C); /* 0x171AA03B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171AA03E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x171AA03F: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x171AA042: push dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171AA045: push dword ptr [ebp - 0x20] */
    RECOMP_ICALL(esi); /* 0x171AA048: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA04A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA078; /* 0x171AA04C: je 0x171aa078 */
L_171AA04E:
    eax = MEM32(ebp + (-0x1C)); /* 0x171AA04E: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x171AA051: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA090; /* 0x171AA054: jne 0x171aa090 */
L_171AA056:
    eax = MEM32(ebx + 0xC); /* 0x171AA056: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0); /* 0x171AA059: push 0 */
    ecx = ebp + (-0x18); /* 0x171AA05B: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x171AA05E: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171AA05F: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171AA061: push edi */
    MEM8(ebp + (-0x28)) = (uint8_t)(1); /* 0x171AA062: mov byte ptr [ebp - 0x28], 1 */
    PUSH32(esp, eax); /* 0x171AA066: push eax */
L_171AA067:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x171AA067: push dword ptr [ebp - 0x2c] */
    RECOMP_ICALL(MEM32(0x170010F4)); /* 0x171AA06A: call dword ptr [0x170010f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA070: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171A9FD6; /* 0x171AA072: jne 0x171a9fd6 */
L_171AA078:
    eax = 0x8876038Fu; /* 0x171AA078: mov eax, 0x8876038f */
L_171AA07D:
    edi = POP32_VAL(esp); /* 0x171AA07D: pop edi */
L_171AA07E:
    ecx = MEM32(ebp + (-0x4)); /* 0x171AA07E: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x171AA081: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AA082: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171AA083: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AA088: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AA089: ret 8 */
L_171AA08C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA08C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171AA07D; /* 0x171AA08E: jmp 0x171aa07d */
L_171AA090:
    eax = 0x8007000Eu; /* 0x171AA090: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171AA07D; /* 0x171AA095: jmp 0x171aa07d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AA09C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA09Cu);

L_171AA09C:
    edi = edi; /* 0x171AA09C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA09E: push ebp */
    ebp = esp; /* 0x171AA09F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x138u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x138u; /* 0x171AA0A1: sub esp, 0x138 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171AA0A7: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171AA0AC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171AA0AD: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171AA0B0: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171AA0B1: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x108); /* 0x171AA0B4: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171AA0BA: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AA0BB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171AA0BD: push edi */
    PUSH32(esp, 0x17023A14u); /* 0x171AA0BE: push 0x17023a14 */
    PUSH32(esp, 0x17007F64u); /* 0x171AA0C3: push 0x17007f64 */
    MEM32(ebp + (-0x110)) = ebx; /* 0x171AA0C8: mov dword ptr [ebp - 0x110], ebx */
    RECOMP_ICALL(MEM32(0x170010EC)); /* 0x171AA0CE: call dword ptr [0x170010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA0D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA0E2; /* 0x171AA0D6: jne 0x171aa0e2 */
L_171AA0D8:
    eax = 0x88760387u; /* 0x171AA0D8: mov eax, 0x88760387 */
    goto L_171AA1DD; /* 0x171AA0DD: jmp 0x171aa1dd */
L_171AA0E2:
    PUSH32(esp, esi); /* 0x171AA0E2: push esi */
    esi = MEM32(0x170010F0); /* 0x171AA0E3: mov esi, dword ptr [0x170010f0] */
    PUSH32(esp, edi); /* 0x171AA0E9: push edi */
    PUSH32(esp, 0x80u); /* 0x171AA0EA: push 0x80 */
    PUSH32(esp, 2); /* 0x171AA0EF: push 2 */
    PUSH32(esp, edi); /* 0x171AA0F1: push edi */
    PUSH32(esp, edi); /* 0x171AA0F2: push edi */
    PUSH32(esp, 0x40000000u); /* 0x171AA0F3: push 0x40000000 */
    eax = ebp + (-0x108); /* 0x171AA0F8: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171AA0FE: push eax */
    RECOMP_ICALL(esi); /* 0x171AA0FF: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171AA101: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x114)) = eax; /* 0x171AA104: mov dword ptr [ebp - 0x114], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA116; /* 0x171AA10A: jne 0x171aa116 */
L_171AA10C:
    eax = 0x8876038Fu; /* 0x171AA10C: mov eax, 0x8876038f */
    goto L_171AA1DC; /* 0x171AA111: jmp 0x171aa1dc */
L_171AA116:
    PUSH32(esp, edi); /* 0x171AA116: push edi */
    PUSH32(esp, edi); /* 0x171AA117: push edi */
    PUSH32(esp, 3); /* 0x171AA118: push 3 */
    PUSH32(esp, edi); /* 0x171AA11A: push edi */
    PUSH32(esp, 1); /* 0x171AA11B: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x171AA11D: push 0x80000000 */
    PUSH32(esp, ebx); /* 0x171AA122: push ebx */
    RECOMP_ICALL(esi); /* 0x171AA123: call esi */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x170010F8); /* 0x171AA125: mov ebx, dword ptr [0x170010f8] */
    esi = eax; /* 0x171AA12B: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171AA12D: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA13E; /* 0x171AA130: jne 0x171aa13e */
L_171AA132:
    MEM32(ebp + (-0x10C)) = 0x8876038Fu; /* 0x171AA132: mov dword ptr [ebp - 0x10c], 0x8876038f */
    goto L_171AA18A; /* 0x171AA13C: jmp 0x171aa18a */
L_171AA13E:
    ecx = ebp + (-0x138); /* 0x171AA13E: lea ecx, [ebp - 0x138] */
    RECOMP_CALL(sub_171A9D9A); /* 0x171AA144: call 0x171a9d9a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x138); /* 0x171AA149: lea ecx, [ebp - 0x138] */
    RECOMP_CALL(sub_171A9E4B); /* 0x171AA14F: call 0x171a9e4b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA154: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA164; /* 0x171AA156: jne 0x171aa164 */
L_171AA158:
    MEM32(ebp + (-0x10C)) = 0x8007000Eu; /* 0x171AA158: mov dword ptr [ebp - 0x10c], 0x8007000e */
    goto L_171AA17C; /* 0x171AA162: jmp 0x171aa17c */
L_171AA164:
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x171AA164: push dword ptr [ebp - 0x114] */
    ecx = ebp + (-0x138); /* 0x171AA16A: lea ecx, [ebp - 0x138] */
    PUSH32(esp, esi); /* 0x171AA170: push esi */
    RECOMP_CALL(sub_171A9F08); /* 0x171AA171: call 0x171a9f08 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10C)) = eax; /* 0x171AA176: mov dword ptr [ebp - 0x10c], eax */
L_171AA17C:
    PUSH32(esp, esi); /* 0x171AA17C: push esi */
    RECOMP_ICALL(ebx); /* 0x171AA17D: call ebx */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x138); /* 0x171AA17F: lea ecx, [ebp - 0x138] */
    RECOMP_CALL(sub_171A9DBE); /* 0x171AA185: call 0x171a9dbe */
    RECOMP_FLAGS_IN();
L_171AA18A:
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x171AA18A: push dword ptr [ebp - 0x114] */
    RECOMP_ICALL(ebx); /* 0x171AA190: call ebx */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x10C)), edi */ /* 0x171AA192: cmp dword ptr [ebp - 0x10c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AA1A9; /* 0x171AA198: jge 0x171aa1a9 */
L_171AA19A:
    eax = ebp + (-0x108); /* 0x171AA19A: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171AA1A0: push eax */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x171AA1A1: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
    goto L_171AA1D6; /* 0x171AA1A7: jmp 0x171aa1d6 */
L_171AA1A9:
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x171AA1A9: push dword ptr [ebp - 0x110] */
    RECOMP_ICALL(MEM32(0x170010FC)); /* 0x171AA1AF: call dword ptr [0x170010fc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x171AA1B5: push dword ptr [ebp - 0x110] */
    eax = ebp + (-0x108); /* 0x171AA1BB: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x171AA1C1: push eax */
    RECOMP_ICALL(MEM32(0x1700112C)); /* 0x171AA1C2: call dword ptr [0x1700112c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA1C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA1D6; /* 0x171AA1CA: jne 0x171aa1d6 */
L_171AA1CC:
    MEM32(ebp + (-0x10C)) = 0x8876038Fu; /* 0x171AA1CC: mov dword ptr [ebp - 0x10c], 0x8876038f */
L_171AA1D6:
    eax = MEM32(ebp + (-0x10C)); /* 0x171AA1D6: mov eax, dword ptr [ebp - 0x10c] */
L_171AA1DC:
    esi = POP32_VAL(esp); /* 0x171AA1DC: pop esi */
L_171AA1DD:
    ecx = MEM32(ebp + (-0x4)); /* 0x171AA1DD: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171AA1E0: pop edi */
    ebx = POP32_VAL(esp); /* 0x171AA1E1: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171AA1E2: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AA1E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA1E8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA1F0u);

L_171AA1F0:
    edi = edi; /* 0x171AA1F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA1F2: push ebp */
    ebp = esp; /* 0x171AA1F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x23Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x23Cu; /* 0x171AA1F5: sub esp, 0x23c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171AA1FB: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171AA200: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171AA201: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171AA204: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171AA205: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x20C); /* 0x171AA208: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x171AA20E: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AA20F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171AA211: push edi */
    PUSH32(esp, 0x17023A1Cu); /* 0x171AA212: push 0x17023a1c */
    PUSH32(esp, 0x17023A18u); /* 0x171AA217: push 0x17023a18 */
    MEM32(ebp + (-0x214)) = ebx; /* 0x171AA21C: mov dword ptr [ebp - 0x214], ebx */
    RECOMP_ICALL(MEM32(0x17001134)); /* 0x171AA222: call dword ptr [0x17001134] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA228: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA236; /* 0x171AA22A: jne 0x171aa236 */
L_171AA22C:
    eax = 0x88760387u; /* 0x171AA22C: mov eax, 0x88760387 */
    goto L_171AA331; /* 0x171AA231: jmp 0x171aa331 */
L_171AA236:
    PUSH32(esp, esi); /* 0x171AA236: push esi */
    esi = MEM32(0x170010AC); /* 0x171AA237: mov esi, dword ptr [0x170010ac] */
    PUSH32(esp, edi); /* 0x171AA23D: push edi */
    PUSH32(esp, 0x80u); /* 0x171AA23E: push 0x80 */
    PUSH32(esp, 2); /* 0x171AA243: push 2 */
    PUSH32(esp, edi); /* 0x171AA245: push edi */
    PUSH32(esp, edi); /* 0x171AA246: push edi */
    PUSH32(esp, 0x40000000u); /* 0x171AA247: push 0x40000000 */
    eax = ebp + (-0x20C); /* 0x171AA24C: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x171AA252: push eax */
    RECOMP_ICALL(esi); /* 0x171AA253: call esi */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171AA255: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x218)) = eax; /* 0x171AA258: mov dword ptr [ebp - 0x218], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA26A; /* 0x171AA25E: jne 0x171aa26a */
L_171AA260:
    eax = 0x8876038Fu; /* 0x171AA260: mov eax, 0x8876038f */
    goto L_171AA330; /* 0x171AA265: jmp 0x171aa330 */
L_171AA26A:
    PUSH32(esp, edi); /* 0x171AA26A: push edi */
    PUSH32(esp, edi); /* 0x171AA26B: push edi */
    PUSH32(esp, 3); /* 0x171AA26C: push 3 */
    PUSH32(esp, edi); /* 0x171AA26E: push edi */
    PUSH32(esp, 1); /* 0x171AA26F: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x171AA271: push 0x80000000 */
    PUSH32(esp, ebx); /* 0x171AA276: push ebx */
    RECOMP_ICALL(esi); /* 0x171AA277: call esi */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x170010F8); /* 0x171AA279: mov ebx, dword ptr [0x170010f8] */
    esi = eax; /* 0x171AA27F: mov esi, eax */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171AA281: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA292; /* 0x171AA284: jne 0x171aa292 */
L_171AA286:
    MEM32(ebp + (-0x210)) = 0x8876038Fu; /* 0x171AA286: mov dword ptr [ebp - 0x210], 0x8876038f */
    goto L_171AA2DE; /* 0x171AA290: jmp 0x171aa2de */
L_171AA292:
    ecx = ebp + (-0x23C); /* 0x171AA292: lea ecx, [ebp - 0x23c] */
    RECOMP_CALL(sub_171A9D9A); /* 0x171AA298: call 0x171a9d9a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x23C); /* 0x171AA29D: lea ecx, [ebp - 0x23c] */
    RECOMP_CALL(sub_171A9E4B); /* 0x171AA2A3: call 0x171a9e4b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA2A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA2B8; /* 0x171AA2AA: jne 0x171aa2b8 */
L_171AA2AC:
    MEM32(ebp + (-0x210)) = 0x8007000Eu; /* 0x171AA2AC: mov dword ptr [ebp - 0x210], 0x8007000e */
    goto L_171AA2D0; /* 0x171AA2B6: jmp 0x171aa2d0 */
L_171AA2B8:
    PUSH32(esp, MEM32(ebp + (-0x218))); /* 0x171AA2B8: push dword ptr [ebp - 0x218] */
    ecx = ebp + (-0x23C); /* 0x171AA2BE: lea ecx, [ebp - 0x23c] */
    PUSH32(esp, esi); /* 0x171AA2C4: push esi */
    RECOMP_CALL(sub_171A9F08); /* 0x171AA2C5: call 0x171a9f08 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x210)) = eax; /* 0x171AA2CA: mov dword ptr [ebp - 0x210], eax */
L_171AA2D0:
    PUSH32(esp, esi); /* 0x171AA2D0: push esi */
    RECOMP_ICALL(ebx); /* 0x171AA2D1: call ebx */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x23C); /* 0x171AA2D3: lea ecx, [ebp - 0x23c] */
    RECOMP_CALL(sub_171A9DBE); /* 0x171AA2D9: call 0x171a9dbe */
    RECOMP_FLAGS_IN();
L_171AA2DE:
    PUSH32(esp, MEM32(ebp + (-0x218))); /* 0x171AA2DE: push dword ptr [ebp - 0x218] */
    RECOMP_ICALL(ebx); /* 0x171AA2E4: call ebx */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x210)), edi */ /* 0x171AA2E6: cmp dword ptr [ebp - 0x210], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x210))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AA2FD; /* 0x171AA2EC: jge 0x171aa2fd */
L_171AA2EE:
    eax = ebp + (-0x20C); /* 0x171AA2EE: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x171AA2F4: push eax */
    RECOMP_ICALL(MEM32(0x17001080)); /* 0x171AA2F5: call dword ptr [0x17001080] */
    RECOMP_FLAGS_IN();
    goto L_171AA32A; /* 0x171AA2FB: jmp 0x171aa32a */
L_171AA2FD:
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x171AA2FD: push dword ptr [ebp - 0x214] */
    RECOMP_ICALL(MEM32(0x17001080)); /* 0x171AA303: call dword ptr [0x17001080] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x171AA309: push dword ptr [ebp - 0x214] */
    eax = ebp + (-0x20C); /* 0x171AA30F: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x171AA315: push eax */
    RECOMP_ICALL(MEM32(0x17001130)); /* 0x171AA316: call dword ptr [0x17001130] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA31C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA32A; /* 0x171AA31E: jne 0x171aa32a */
L_171AA320:
    MEM32(ebp + (-0x210)) = 0x8876038Fu; /* 0x171AA320: mov dword ptr [ebp - 0x210], 0x8876038f */
L_171AA32A:
    eax = MEM32(ebp + (-0x210)); /* 0x171AA32A: mov eax, dword ptr [ebp - 0x210] */
L_171AA330:
    esi = POP32_VAL(esp); /* 0x171AA330: pop esi */
L_171AA331:
    ecx = MEM32(ebp + (-0x4)); /* 0x171AA331: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171AA334: pop edi */
    ebx = POP32_VAL(esp); /* 0x171AA335: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171AA336: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AA33B: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA33C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA344(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA344u);

L_171AA344:
    eax = ecx; /* 0x171AA344: mov eax, ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171AA346: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x171AA349: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AA34D: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AA353(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA353u);

L_171AA353:
    edi = edi; /* 0x171AA353: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AA355: push esi */
    esi = ecx; /* 0x171AA356: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x171AA358: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171AA35B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA366; /* 0x171AA35D: je 0x171aa366 */
L_171AA35F:
    PUSH32(esp, eax); /* 0x171AA35F: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171AA360: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA365: pop ecx */
L_171AA366:
    esi = MEM32(esi); /* 0x171AA366: mov esi, dword ptr [esi] */
    /* test esi, esi */ /* 0x171AA368: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA377; /* 0x171AA36A: je 0x171aa377 */
L_171AA36C:
    PUSH32(esp, 0x171A9D8Au); /* 0x171AA36C: push 0x171a9d8a */
    PUSH32(esp, esi); /* 0x171AA371: push esi */
    RECOMP_CALL(sub_171B155C); /* 0x171AA372: call 0x171b155c */
    RECOMP_FLAGS_IN();
L_171AA377:
    esi = POP32_VAL(esp); /* 0x171AA377: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AA378: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AA37E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA37Eu);

L_171AA37E:
    edi = edi; /* 0x171AA37E: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AA380: push esi */
    PUSH32(esp, 0x8000u); /* 0x171AA381: push 0x8000 */
    esi = ecx; /* 0x171AA386: mov esi, ecx */
    RECOMP_CALL(sub_1721B254); /* 0x171AA388: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA38D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AA38F: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x171AA390: mov dword ptr [esi + 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA397; /* 0x171AA393: jne 0x171aa397 */
L_171AA395:
    esi = POP32_VAL(esp); /* 0x171AA395: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AA396: ret  */
L_171AA397:
    PUSH32(esp, 0x171A9D7Au); /* 0x171AA397: push 0x171a9d7a */
    RECOMP_CALL(sub_171B1517); /* 0x171AA39C: call 0x171b1517 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AA3A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171AA3A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171AA3A5: setne cl */
    MEM32(esi) = eax; /* 0x171AA3A8: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x171AA3AA: pop esi */
    eax = ecx; /* 0x171AA3AB: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AA3AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AA3B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA3B3u);

L_171AA3B3:
    edi = edi; /* 0x171AA3B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA3B5: push ebp */
    ebp = esp; /* 0x171AA3B6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AA3B8: push ecx */
    PUSH32(esp, ecx); /* 0x171AA3B9: push ecx */
    PUSH32(esp, ebx); /* 0x171AA3BA: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171AA3BB: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x10); /* 0x171AA3BE: mov eax, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171AA3C1: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171AA3C4: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x171AA3C7: push eax */
    MEM32(ecx) = eax; /* 0x171AA3C8: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_1721B254); /* 0x171AA3CA: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA3CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AA3D1: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171AA3D2: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x171AA3D5: mov dword ptr [ecx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA3E3; /* 0x171AA3D7: jne 0x171aa3e3 */
L_171AA3D9:
    eax = 0x8007000Eu; /* 0x171AA3D9: mov eax, 0x8007000e */
    goto L_171AA4A8; /* 0x171AA3DE: jmp 0x171aa4a8 */
L_171AA3E3:
    PUSH32(esp, esi); /* 0x171AA3E3: push esi */
    PUSH32(esp, edi); /* 0x171AA3E4: push edi */
    esi = ebx; /* 0x171AA3E5: mov esi, ebx */
    edi = eax; /* 0x171AA3E7: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AA3E9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AA3EA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AA3EB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AA3EC: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(eax + 0x8); /* 0x171AA3ED: mov ecx, dword ptr [eax + 8] */
    /* cmp ecx, 0x70697A62u */ /* 0x171AA3F0: cmp ecx, 0x70697a62 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70697A62u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA401; /* 0x171AA3F6: jne 0x171aa401 */
L_171AA3F8:
    MEM32(eax + 0x8) = 0x206E6962u; /* 0x171AA3F8: mov dword ptr [eax + 8], 0x206e6962 */
    goto L_171AA410; /* 0x171AA3FF: jmp 0x171aa410 */
L_171AA401:
    /* cmp ecx, 0x70697A74u */ /* 0x171AA401: cmp ecx, 0x70697a74 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70697A74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA410; /* 0x171AA407: jne 0x171aa410 */
L_171AA409:
    MEM32(eax + 0x8) = 0x20747874u; /* 0x171AA409: mov dword ptr [eax + 8], 0x20747874 */
L_171AA410:
    ecx = MEM32(ebp + 0x8); /* 0x171AA410: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x171AA413: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171AA417: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = eax; /* 0x171AA41A: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(ebp + 0xC); /* 0x171AA41D: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171AA420: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x171AA422: add ebx, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171AA425: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x171AA427: mov dword ptr [ebp - 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AA4A3; /* 0x171AA42A: jae 0x171aa4a3 */
L_171AA42C:
    esi = MEM32(ebp + (-0x4)); /* 0x171AA42C: mov esi, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x171AA42F: movzx eax, word ptr [ebx + 2] */
    PUSH32(esp, 0x8000u); /* 0x171AA433: push 0x8000 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171AA438: push dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x171AA43B: push eax */
    eax = ebx + 0x4; /* 0x171AA43C: lea eax, [ebx + 4] */
    PUSH32(esp, eax); /* 0x171AA43F: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x171AA440: push dword ptr [esi] */
    RECOMP_CALL(sub_171B1423); /* 0x171AA442: call 0x171b1423 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA447: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA491; /* 0x171AA449: jne 0x171aa491 */
L_171AA44B:
    eax = (uint32_t)MEM16(ebx); /* 0x171AA44B: movzx eax, word ptr [ebx] */
    MEM32(ebp + 0xC) = eax; /* 0x171AA44E: mov dword ptr [ebp + 0xc], eax */
    eax = ebp + 0xC; /* 0x171AA451: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171AA454: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x171AA455: push dword ptr [esi] */
    RECOMP_CALL(sub_171B147A); /* 0x171AA457: call 0x171b147a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA45C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AA491; /* 0x171AA45E: jne 0x171aa491 */
L_171AA460:
    ecx = (uint32_t)MEM16(ebx); /* 0x171AA460: movzx ecx, word ptr [ebx] */
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x171AA463: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA491; /* 0x171AA466: jne 0x171aa491 */
L_171AA468:
    esi = MEM32(esi + 0x4); /* 0x171AA468: mov esi, dword ptr [esi + 4] */
    edi = MEM32(ebp + 0x14); /* 0x171AA46B: mov edi, dword ptr [ebp + 0x14] */
    eax = ecx; /* 0x171AA46E: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AA470: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AA470: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AA473: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171AA475: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AA477: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AA47A: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = (uint32_t)MEM16(ebx); /* 0x171AA47C: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + eax; /* 0x171AA47F: add dword ptr [ebp + 0x14], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x171AA482: movzx eax, word ptr [ebx + 2] */
    ebx = ebx + eax + 0x4; /* 0x171AA486: lea ebx, [ebx + eax + 4] */
    /* cmp ebx, MEM32(ebp + (-0x8)) */ /* 0x171AA48A: cmp ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AA42C; /* 0x171AA48D: jb 0x171aa42c */
L_171AA48F:
    goto L_171AA4A3; /* 0x171AA48F: jmp 0x171aa4a3 */
L_171AA491:
    eax = MEM32(ebp + 0x10); /* 0x171AA491: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax)); /* 0x171AA494: push dword ptr [eax] */
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x171AA496: mov dword ptr [ebp + 8], 0x80004005 */
    RECOMP_CALL(sub_1721B224); /* 0x171AA49D: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA4A2: pop ecx */
L_171AA4A3:
    eax = MEM32(ebp + 0x8); /* 0x171AA4A3: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x171AA4A6: pop edi */
    esi = POP32_VAL(esp); /* 0x171AA4A7: pop esi */
L_171AA4A8:
    ebx = POP32_VAL(esp); /* 0x171AA4A8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AA4A9: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171AA4AA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171AA4B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA4B2u);

L_171AA4B2:
    edi = edi; /* 0x171AA4B2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA4B4: push ebp */
    ebp = esp; /* 0x171AA4B5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171AA4B7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171AA4BA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AA4BB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14); /* 0x171AA4BD: lea ecx, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = esi; /* 0x171AA4C0: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x171AA4C3: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_171AA37E); /* 0x171AA4C6: call 0x171aa37e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AA4CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA52F; /* 0x171AA4CD: je 0x171aa52f */
L_171AA4CF:
    ecx = MEM32(ebp + 0x8); /* 0x171AA4CF: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171AA4D2: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x171AA4D4: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x171AA4D7: push edx */
    edx = ebp + (-0x8); /* 0x171AA4D8: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x171AA4DB: push edx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x171AA4DC: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171AA4DF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AA4E7; /* 0x171AA4E1: jge 0x171aa4e7 */
L_171AA4E3:
    esi = eax; /* 0x171AA4E3: mov esi, eax */
    goto L_171AA534; /* 0x171AA4E5: jmp 0x171aa534 */
L_171AA4E7:
    /* cmp MEM32(ebp + (-0x4)), 0xFFFFFFFFu */ /* 0x171AA4E7: cmp dword ptr [ebp - 4], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AA52F; /* 0x171AA4EB: ja 0x171aa52f */
L_171AA4ED:
    eax = ebp + 0x8; /* 0x171AA4ED: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171AA4F0: push eax */
    eax = ebp + (-0xC); /* 0x171AA4F1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AA4F4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AA4F5: push dword ptr [ebp - 4] */
    ecx = ebp + (-0x14); /* 0x171AA4F8: lea ecx, [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AA4FB: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171AA3B3); /* 0x171AA4FE: call 0x171aa3b3 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171AA503: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171AA4E3; /* 0x171AA505: jl 0x171aa4e3 */
L_171AA507:
    PUSH32(esp, 0x18u); /* 0x171AA507: push 0x18 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AA509: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171AA50E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171AA510: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA524; /* 0x171AA511: je 0x171aa524 */
L_171AA513:
    PUSH32(esp, 1); /* 0x171AA513: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AA515: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x171AA518: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AA51A: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_171AA6B8); /* 0x171AA51D: call 0x171aa6b8 */
    RECOMP_FLAGS_IN();
    goto L_171AA526; /* 0x171AA522: jmp 0x171aa526 */
L_171AA524:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA524: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AA526:
    /* cmp eax, esi */ /* 0x171AA526: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x171AA528: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x171AA52B: mov dword ptr [ecx], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA534; /* 0x171AA52D: jne 0x171aa534 */
L_171AA52F:
    esi = 0x8007000Eu; /* 0x171AA52F: mov esi, 0x8007000e */
L_171AA534:
    ecx = ebp + (-0x14); /* 0x171AA534: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_171AA353); /* 0x171AA537: call 0x171aa353 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171AA53C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AA53E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AA53F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AA540: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AA548(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA548u);

L_171AA548:
    edi = edi; /* 0x171AA548: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA54A: push ebp */
    ebp = esp; /* 0x171AA54B: mov ebp, esp */
    eax = MEM32(ecx + 0x10); /* 0x171AA54D: mov eax, dword ptr [ecx + 0x10] */
    edx = eax + 0x1; /* 0x171AA550: lea edx, [eax + 1] */
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x171AA553: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AA567; /* 0x171AA556: ja 0x171aa567 */
L_171AA558:
    SET_LO8(eax, MEM8(eax)); /* 0x171AA558: mov al, byte ptr [eax] */
    edx = MEM32(ebp + 0x8); /* 0x171AA55A: mov edx, dword ptr [ebp + 8] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x171AA55D: mov byte ptr [edx], al */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 1; /* 0x171AA55F: inc dword ptr [ecx + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA562: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AA564: inc eax */
    _flag_k = FK_INC;
    goto L_171AA569; /* 0x171AA565: jmp 0x171aa569 */
L_171AA567:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA567: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AA569:
    ebp = POP32_VAL(esp); /* 0x171AA569: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA56A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA572(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA572u);

L_171AA572:
    edi = edi; /* 0x171AA572: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA574: push ebp */
    ebp = esp; /* 0x171AA575: mov ebp, esp */
    eax = MEM32(ecx + 0x10); /* 0x171AA577: mov eax, dword ptr [ecx + 0x10] */
    edx = eax + 0x2; /* 0x171AA57A: lea edx, [eax + 2] */
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x171AA57D: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AA594; /* 0x171AA580: ja 0x171aa594 */
L_171AA582:
    SET_LO16(eax, MEM16(eax)); /* 0x171AA582: mov ax, word ptr [eax] */
    edx = MEM32(ebp + 0x8); /* 0x171AA585: mov edx, dword ptr [ebp + 8] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x171AA588: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 2; /* 0x171AA58B: add dword ptr [ecx + 0x10], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA58F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AA591: inc eax */
    _flag_k = FK_INC;
    goto L_171AA596; /* 0x171AA592: jmp 0x171aa596 */
L_171AA594:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA594: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AA596:
    ebp = POP32_VAL(esp); /* 0x171AA596: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA597: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA59F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA59Fu);

L_171AA59F:
    edi = edi; /* 0x171AA59F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA5A1: push ebp */
    ebp = esp; /* 0x171AA5A2: mov ebp, esp */
    eax = MEM32(ecx + 0x10); /* 0x171AA5A4: mov eax, dword ptr [ecx + 0x10] */
    edx = eax + 0x4; /* 0x171AA5A7: lea edx, [eax + 4] */
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x171AA5AA: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AA5BF; /* 0x171AA5AD: ja 0x171aa5bf */
L_171AA5AF:
    eax = MEM32(eax); /* 0x171AA5AF: mov eax, dword ptr [eax] */
    edx = MEM32(ebp + 0x8); /* 0x171AA5B1: mov edx, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AA5B4: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 4; /* 0x171AA5B6: add dword ptr [ecx + 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA5BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AA5BC: inc eax */
    _flag_k = FK_INC;
    goto L_171AA5C1; /* 0x171AA5BD: jmp 0x171aa5c1 */
L_171AA5BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA5BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AA5C1:
    ebp = POP32_VAL(esp); /* 0x171AA5C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA5C2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA5CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA5CAu);

L_171AA5CA:
    edi = edi; /* 0x171AA5CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA5CC: push ebp */
    ebp = esp; /* 0x171AA5CD: mov ebp, esp */
    eax = MEM32(ecx + 0x10); /* 0x171AA5CF: mov eax, dword ptr [ecx + 0x10] */
    edx = eax + 0x4; /* 0x171AA5D2: lea edx, [eax + 4] */
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x171AA5D5: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AA5EA; /* 0x171AA5D8: ja 0x171aa5ea */
L_171AA5DA:
    fp_push(*(float*)&MEM32(eax)); /* 0x171AA5DA: fld dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x171AA5DC: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171AA5DF: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 4; /* 0x171AA5E1: add dword ptr [ecx + 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA5E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AA5E7: inc eax */
    _flag_k = FK_INC;
    goto L_171AA5EC; /* 0x171AA5E8: jmp 0x171aa5ec */
L_171AA5EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA5EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AA5EC:
    ebp = POP32_VAL(esp); /* 0x171AA5EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA5ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA5F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA5F5u);

L_171AA5F5:
    edi = edi; /* 0x171AA5F5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA5F7: push ebp */
    ebp = esp; /* 0x171AA5F8: mov ebp, esp */
    eax = MEM32(ecx + 0x10); /* 0x171AA5FA: mov eax, dword ptr [ecx + 0x10] */
    edx = eax + 0x8; /* 0x171AA5FD: lea edx, [eax + 8] */
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x171AA600: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AA615; /* 0x171AA603: ja 0x171aa615 */
L_171AA605:
    fp_push(*(double*)ADDR(eax)); /* 0x171AA605: fld qword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x171AA607: mov eax, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x171AA60A: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 8; /* 0x171AA60C: add dword ptr [ecx + 0x10], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA610: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AA612: inc eax */
    _flag_k = FK_INC;
    goto L_171AA617; /* 0x171AA613: jmp 0x171aa617 */
L_171AA615:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA615: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AA617:
    ebp = POP32_VAL(esp); /* 0x171AA617: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA618: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA620u);

L_171AA620:
    edi = edi; /* 0x171AA620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA622: push ebp */
    ebp = esp; /* 0x171AA623: mov ebp, esp */
    edx = ecx; /* 0x171AA625: mov edx, ecx */
    eax = MEM32(edx + 0x8); /* 0x171AA627: mov eax, dword ptr [edx + 8] */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x171AA62A: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AA636; /* 0x171AA62D: jb 0x171aa636 */
L_171AA62F:
    eax = 0x88760394u; /* 0x171AA62F: mov eax, 0x88760394 */
    goto L_171AA668; /* 0x171AA634: jmp 0x171aa668 */
L_171AA636:
    ecx = eax; /* 0x171AA636: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x171AA638: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x171AA63B: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, ecx */ /* 0x171AA63E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AA644; /* 0x171AA640: jbe 0x171aa644 */
L_171AA642:
    eax = ecx; /* 0x171AA642: mov eax, ecx */
L_171AA644:
    PUSH32(esp, esi); /* 0x171AA644: push esi */
    esi = MEM32(edx + 0x4); /* 0x171AA645: mov esi, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x171AA648: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171AA64B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171AA64C: mov edi, dword ptr [ebp + 8] */
    ecx = eax; /* 0x171AA64F: mov ecx, eax */
    edx = ecx; /* 0x171AA651: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AA653: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AA653: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AA656: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171AA658: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AA65A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AA65D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x14); /* 0x171AA65F: mov ecx, dword ptr [ebp + 0x14] */
    edi = POP32_VAL(esp); /* 0x171AA662: pop edi */
    MEM32(ecx) = eax; /* 0x171AA663: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA665: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AA667: pop esi */
L_171AA668:
    ebp = POP32_VAL(esp); /* 0x171AA668: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171AA669: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171AA671(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA671u);

L_171AA671:
    edi = edi; /* 0x171AA671: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA673: push ebp */
    ebp = esp; /* 0x171AA674: mov ebp, esp */
    eax = MEM32(ecx + 0x4); /* 0x171AA676: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(ebp + 0x8); /* 0x171AA679: mov edx, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AA67C: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x8); /* 0x171AA67E: mov eax, dword ptr [ecx + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x171AA681: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x171AA684: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA686: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x171AA688: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AA689: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AA691(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA691u);

L_171AA691:
    edi = edi; /* 0x171AA691: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA693: push ebp */
    ebp = esp; /* 0x171AA694: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AA696: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x171AA69A: push esi */
    esi = ecx; /* 0x171AA69B: mov esi, ecx */
    MEM32(esi) = 0x17023A24u; /* 0x171AA69D: mov dword ptr [esi], 0x17023a24 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA6AC; /* 0x171AA6A3: je 0x171aa6ac */
L_171AA6A5:
    PUSH32(esp, esi); /* 0x171AA6A5: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AA6A6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA6AB: pop ecx */
L_171AA6AC:
    eax = esi; /* 0x171AA6AC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AA6AE: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AA6AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA6B0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA6B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA6B8u);

L_171AA6B8:
    edi = edi; /* 0x171AA6B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA6BA: push ebp */
    ebp = esp; /* 0x171AA6BB: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x171AA6BD: mov edx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x171AA6C0: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171AA6C2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171AA6C5: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171AA6C6: mov esi, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x171AA6C9: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x171AA6CC: mov dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171AA6CF: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(eax + 0x14) = esi; /* 0x171AA6D1: mov dword ptr [eax + 0x14], esi */
    MEM32(eax) = 0x17023A48u; /* 0x171AA6D4: mov dword ptr [eax], 0x17023a48 */
    MEM32(eax + 0x8) = edx; /* 0x171AA6DA: mov dword ptr [eax + 8], edx */
    MEM32(eax + 0xC) = ecx; /* 0x171AA6DD: mov dword ptr [eax + 0xc], ecx */
    esi = POP32_VAL(esp); /* 0x171AA6E0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AA6E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AA6E2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AA6EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA6EAu);

L_171AA6EA:
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x171AA6EA: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AA6ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AA6F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA6F3u);

L_171AA6F3:
    edi = edi; /* 0x171AA6F3: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AA6F5: push esi */
    esi = ecx; /* 0x171AA6F6: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x171AA6F8: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x17023A48u; /* 0x171AA6FC: mov dword ptr [esi], 0x17023a48 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA70D; /* 0x171AA702: je 0x171aa70d */
L_171AA704:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171AA704: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B224); /* 0x171AA707: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA70C: pop ecx */
L_171AA70D:
    MEM32(esi) = 0x17023A24u; /* 0x171AA70D: mov dword ptr [esi], 0x17023a24 */
    esi = POP32_VAL(esp); /* 0x171AA713: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AA714: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AA71A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA71Au);

L_171AA71A:
    edi = edi; /* 0x171AA71A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA71C: push ebp */
    ebp = esp; /* 0x171AA71D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AA71F: push esi */
    PUSH32(esp, 0); /* 0x171AA720: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AA722: push dword ptr [ebp + 0x10] */
    esi = ecx; /* 0x171AA725: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AA727: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171AA6B8); /* 0x171AA72A: call 0x171aa6b8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171AA72F: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x18) = eax; /* 0x171AA732: mov dword ptr [esi + 0x18], eax */
    MEM32(esi) = 0x17023A6Cu; /* 0x171AA735: mov dword ptr [esi], 0x17023a6c */
    eax = esi; /* 0x171AA73B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AA73D: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AA73E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AA73F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AA747(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA747u);

    goto L_171AA747;
L_171AA6F3:
    edi = edi; /* 0x171AA6F3: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AA6F5: push esi */
    esi = ecx; /* 0x171AA6F6: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x171AA6F8: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x17023A48u; /* 0x171AA6FC: mov dword ptr [esi], 0x17023a48 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA70D; /* 0x171AA702: je 0x171aa70d */
L_171AA704:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171AA704: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B224); /* 0x171AA707: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA70C: pop ecx */
L_171AA70D:
    MEM32(esi) = 0x17023A24u; /* 0x171AA70D: mov dword ptr [esi], 0x17023a24 */
    esi = POP32_VAL(esp); /* 0x171AA713: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AA714: ret  */
L_171AA747:
    edi = edi; /* 0x171AA747: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AA749: push esi */
    esi = ecx; /* 0x171AA74A: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x171AA74C: push dword ptr [esi + 0x18] */
    MEM32(esi) = 0x17023A6Cu; /* 0x171AA74F: mov dword ptr [esi], 0x17023a6c */
    RECOMP_ICALL(MEM32(0x170010A4)); /* 0x171AA755: call dword ptr [0x170010a4] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x171AA75B: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x171AA75D: pop esi */
    RECOMP_BACKEDGE();
    goto L_171AA6F3; /* 0x171AA75E: jmp 0x171aa6f3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AA768(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA768u);

L_171AA768:
    edi = edi; /* 0x171AA768: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA76A: push ebp */
    ebp = esp; /* 0x171AA76B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AA76D: push esi */
    PUSH32(esp, edi); /* 0x171AA76E: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171AA76F: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x171AA772: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171AA774: push dword ptr [ebp + 0x14] */
    esi = ecx; /* 0x171AA777: mov esi, ecx */
    PUSH32(esp, edi); /* 0x171AA779: push edi */
    RECOMP_CALL(sub_171AA6B8); /* 0x171AA77A: call 0x171aa6b8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171AA77F: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x18) = eax; /* 0x171AA782: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0xC); /* 0x171AA785: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x20) = edi; /* 0x171AA788: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x1C) = eax; /* 0x171AA78B: mov dword ptr [esi + 0x1c], eax */
    edi = POP32_VAL(esp); /* 0x171AA78E: pop edi */
    MEM32(esi) = 0x17023A90u; /* 0x171AA78F: mov dword ptr [esi], 0x17023a90 */
    eax = esi; /* 0x171AA795: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AA797: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AA798: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171AA799: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171AA7A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA7A1u);

    goto L_171AA7A1;
L_171AA6F3:
    edi = edi; /* 0x171AA6F3: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AA6F5: push esi */
    esi = ecx; /* 0x171AA6F6: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x171AA6F8: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x17023A48u; /* 0x171AA6FC: mov dword ptr [esi], 0x17023a48 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA70D; /* 0x171AA702: je 0x171aa70d */
L_171AA704:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171AA704: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B224); /* 0x171AA707: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA70C: pop ecx */
L_171AA70D:
    MEM32(esi) = 0x17023A24u; /* 0x171AA70D: mov dword ptr [esi], 0x17023a24 */
    esi = POP32_VAL(esp); /* 0x171AA713: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AA714: ret  */
L_171AA7A1:
    edi = edi; /* 0x171AA7A1: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AA7A3: push esi */
    esi = ecx; /* 0x171AA7A4: mov esi, ecx */
    PUSH32(esp, edi); /* 0x171AA7A6: push edi */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x171AA7A7: push dword ptr [esi + 0x20] */
    MEM32(esi) = 0x17023A90u; /* 0x171AA7AA: mov dword ptr [esi], 0x17023a90 */
    RECOMP_ICALL(MEM32(0x17001090)); /* 0x171AA7B0: call dword ptr [0x17001090] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x171AA7B6: push dword ptr [esi + 0x1c] */
    edi = MEM32(0x170010F8); /* 0x171AA7B9: mov edi, dword ptr [0x170010f8] */
    RECOMP_ICALL(edi); /* 0x171AA7BF: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x171AA7C1: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(edi); /* 0x171AA7C4: call edi */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171AA7C6: pop edi */
    ecx = esi; /* 0x171AA7C7: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x171AA7C9: pop esi */
    RECOMP_BACKEDGE();
    goto L_171AA6F3; /* 0x171AA7CA: jmp 0x171aa6f3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AA7D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA7D4u);

L_171AA7D4:
    edi = edi; /* 0x171AA7D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA7D6: push ebp */
    ebp = esp; /* 0x171AA7D7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AA7D9: push esi */
    esi = ecx; /* 0x171AA7DA: mov esi, ecx */
    RECOMP_CALL(sub_171AA6F3); /* 0x171AA7DC: call 0x171aa6f3 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AA7E1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA7EE; /* 0x171AA7E5: je 0x171aa7ee */
L_171AA7E7:
    PUSH32(esp, esi); /* 0x171AA7E7: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AA7E8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA7ED: pop ecx */
L_171AA7EE:
    eax = esi; /* 0x171AA7EE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AA7F0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AA7F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA7F2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA7FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA7FAu);

L_171AA7FA:
    edi = edi; /* 0x171AA7FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA7FC: push ebp */
    ebp = esp; /* 0x171AA7FD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AA7FF: push esi */
    esi = ecx; /* 0x171AA800: mov esi, ecx */
    RECOMP_CALL(sub_171AA747); /* 0x171AA802: call 0x171aa747 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AA807: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA814; /* 0x171AA80B: je 0x171aa814 */
L_171AA80D:
    PUSH32(esp, esi); /* 0x171AA80D: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AA80E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA813: pop ecx */
L_171AA814:
    eax = esi; /* 0x171AA814: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AA816: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AA817: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA818: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA820u);

L_171AA820:
    edi = edi; /* 0x171AA820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA822: push ebp */
    ebp = esp; /* 0x171AA823: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AA825: push esi */
    esi = ecx; /* 0x171AA826: mov esi, ecx */
    RECOMP_CALL(sub_171AA7A1); /* 0x171AA828: call 0x171aa7a1 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AA82D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA83A; /* 0x171AA831: je 0x171aa83a */
L_171AA833:
    PUSH32(esp, esi); /* 0x171AA833: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AA834: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AA839: pop ecx */
L_171AA83A:
    eax = esi; /* 0x171AA83A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AA83C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AA83D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA83E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA846(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA846u);

L_171AA846:
    edi = edi; /* 0x171AA846: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA848: push ebp */
    ebp = esp; /* 0x171AA849: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AA84B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AA84E: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x171AA851: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AA853: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AA854: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AA857: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA858: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA860u);

L_171AA860:
    edi = edi; /* 0x171AA860: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA862: push ebp */
    ebp = esp; /* 0x171AA863: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AA865: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AA868: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x171AA86B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AA86D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171AA86E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AA871: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AA872: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AA87A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA87Au);

L_171AA87A:
    edi = edi; /* 0x171AA87A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA87C: push ebp */
    ebp = esp; /* 0x171AA87D: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171AA87F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA89A; /* 0x171AA883: je 0x171aa89a */
L_171AA885:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AA885: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x171AA888: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AA88B: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x171AA88E: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001C10u); /* 0x171AA890: push 0x17001c10 */
    PUSH32(esp, eax); /* 0x171AA895: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171AA896: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_171AA89F; /* 0x171AA898: jmp 0x171aa89f */
L_171AA89A:
    eax = 0x88760385u; /* 0x171AA89A: mov eax, 0x88760385 */
L_171AA89F:
    ebp = POP32_VAL(esp); /* 0x171AA89F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AA8A0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AA8A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA8A8u);

L_171AA8A8:
    edi = edi; /* 0x171AA8A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA8AA: push ebp */
    ebp = esp; /* 0x171AA8AB: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171AA8AD: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171AA8B0: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AA8B1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ebx */ /* 0x171AA8B3: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171AA8B5: push esi */
    PUSH32(esp, edi); /* 0x171AA8B6: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA8FD; /* 0x171AA8B7: je 0x171aa8fd */
L_171AA8B9:
    eax = MEM32(ebp + 0x8); /* 0x171AA8B9: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x8); /* 0x171AA8BC: mov esi, dword ptr [eax + 8] */
    ecx = MEM32(eax + 0xC); /* 0x171AA8BF: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x171AA8C2: add esi, 0x38 */
    _flag_k = FK_ADD;
    /* cmp ecx, 1 */ /* 0x171AA8C5: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AA8DB; /* 0x171AA8C8: jne 0x171aa8db */
L_171AA8CA:
    /* cmp MEM32(edx), ebx */ /* 0x171AA8CA: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AA8D7; /* 0x171AA8CC: jbe 0x171aa8d7 */
L_171AA8CE:
    eax = MEM32(ebp + 0xC); /* 0x171AA8CE: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, ebx */ /* 0x171AA8D1: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA8D7; /* 0x171AA8D3: je 0x171aa8d7 */
L_171AA8D5:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x171AA8D5: mov byte ptr [eax], bl */
L_171AA8D7:
    MEM32(edx) = ebx; /* 0x171AA8D7: mov dword ptr [edx], ebx */
    goto L_171AA8F9; /* 0x171AA8D9: jmp 0x171aa8f9 */
L_171AA8DB:
    edi = MEM32(ebp + 0xC); /* 0x171AA8DB: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, ebx */ /* 0x171AA8DE: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AA8F4; /* 0x171AA8E0: je 0x171aa8f4 */
L_171AA8E2:
    /* cmp ecx, MEM32(edx) */ /* 0x171AA8E2: cmp ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AA8FD; /* 0x171AA8E4: ja 0x171aa8fd */
L_171AA8E6:
    ebx = ecx; /* 0x171AA8E6: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AA8E8: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AA8E8: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AA8EB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x171AA8ED: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AA8EF: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AA8F2: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171AA8F4:
    eax = MEM32(eax + 0xC); /* 0x171AA8F4: mov eax, dword ptr [eax + 0xc] */
    MEM32(edx) = eax; /* 0x171AA8F7: mov dword ptr [edx], eax */
L_171AA8F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA8F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AA902; /* 0x171AA8FB: jmp 0x171aa902 */
L_171AA8FD:
    eax = 0x88760385u; /* 0x171AA8FD: mov eax, 0x88760385 */
L_171AA902:
    edi = POP32_VAL(esp); /* 0x171AA902: pop edi */
    esi = POP32_VAL(esp); /* 0x171AA903: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AA904: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AA905: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AA906: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AA90E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA90Eu);

L_171AA90E:
    edi = edi; /* 0x171AA90E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA910: push ebp */
    ebp = esp; /* 0x171AA911: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171AA913: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171AA914: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171AA917: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA92E; /* 0x171AA919: je 0x171aa92e */
L_171AA91B:
    eax = MEM32(ebp + 0x8); /* 0x171AA91B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171AA91E: push esi */
    esi = MEM32(eax + 0x8); /* 0x171AA91F: mov esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x171AA922: add esi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AA925: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AA926: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AA927: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AA928: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA929: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AA92B: pop esi */
    goto L_171AA933; /* 0x171AA92C: jmp 0x171aa933 */
L_171AA92E:
    eax = 0x88760385u; /* 0x171AA92E: mov eax, 0x88760385 */
L_171AA933:
    edi = POP32_VAL(esp); /* 0x171AA933: pop edi */
    ebp = POP32_VAL(esp); /* 0x171AA934: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AA935: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AA93D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA93Du);

L_171AA93D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171AA93D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AA93F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AA947(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA947u);

L_171AA947:
    edi = edi; /* 0x171AA947: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA949: push ebp */
    ebp = esp; /* 0x171AA94A: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171AA94C: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x171AA94F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AA992; /* 0x171AA951: je 0x171aa992 */
L_171AA953:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x171AA953: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AA956: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171AA957: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171AA95A: push edi */
    PUSH32(esp, 4); /* 0x171AA95B: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AA95D: pop ecx */
    edi = 0x1702AA2Cu; /* 0x171AA95E: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA963: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AA965: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AA981; /* 0x171AA967: je 0x171aa981 */
L_171AA969:
    esi = MEM32(ebp + 0xC); /* 0x171AA969: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x171AA96C: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AA96E: pop ecx */
    edi = 0x17001C00u; /* 0x171AA96F: mov edi, 0x17001c00 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA974: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AA976: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AA981; /* 0x171AA978: je 0x171aa981 */
L_171AA97A:
    eax = 0x80004002u; /* 0x171AA97A: mov eax, 0x80004002 */
    goto L_171AA98E; /* 0x171AA97F: jmp 0x171aa98e */
L_171AA981:
    eax = MEM32(ebp + 0x8); /* 0x171AA981: mov eax, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171AA984: mov dword ptr [edx], eax */
    ecx = MEM32(eax); /* 0x171AA986: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AA988: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171AA989: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AA98C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AA98E:
    edi = POP32_VAL(esp); /* 0x171AA98E: pop edi */
    esi = POP32_VAL(esp); /* 0x171AA98F: pop esi */
    goto L_171AA997; /* 0x171AA990: jmp 0x171aa997 */
L_171AA992:
    eax = 0x80004003u; /* 0x171AA992: mov eax, 0x80004003 */
L_171AA997:
    ebp = POP32_VAL(esp); /* 0x171AA997: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AA998: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AA9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA9A0u);

L_171AA9A0:
    edi = edi; /* 0x171AA9A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA9A2: push ebp */
    ebp = esp; /* 0x171AA9A3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AA9A5: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AA9A8: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AA9AB: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AA9AE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AA9B0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x171AA9B1: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AA9B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AA9B5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AA9BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA9BDu);

L_171AA9BD:
    edi = edi; /* 0x171AA9BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA9BF: push ebp */
    ebp = esp; /* 0x171AA9C0: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AA9C2: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AA9C5: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AA9C8: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AA9CB: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AA9CE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AA9D0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x171AA9D1: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AA9D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AA9D5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AA9DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA9DDu);

L_171AA9DD:
    edi = edi; /* 0x171AA9DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA9DF: push ebp */
    ebp = esp; /* 0x171AA9E0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AA9E2: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AA9E5: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AA9E8: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AA9EB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AA9ED: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x171AA9EE: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AA9F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AA9F2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AA9FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AA9FAu);

L_171AA9FA:
    edi = edi; /* 0x171AA9FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AA9FC: push ebp */
    ebp = esp; /* 0x171AA9FD: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AA9FF: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171AAA02: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x171AAA05: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AAA08: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171AAA0B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171AAA0D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x171AAA0E: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AAA11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AAA12: ret 0xc */
    RECOMP_REGS_OUT();
}
