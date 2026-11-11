#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_12149775(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149775u);

L_12149775:
    edi = edi; /* 0x12149775: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149777: push ebp */
    ebp = esp; /* 0x12149778: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214977A: push ecx */
    PUSH32(esp, ecx); /* 0x1214977B: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1214977C: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12149780: push ebx */
    PUSH32(esp, esi); /* 0x12149781: push esi */
    PUSH32(esp, edi); /* 0x12149782: push edi */
    ebx = ecx; /* 0x12149783: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214979D; /* 0x12149785: je 0x1214979d */
L_12149787:
    esi = MEM32(ebp + 0xC); /* 0x12149787: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1214978A: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214978C: pop ecx */
    edi = 0x12018324u; /* 0x1214978D: mov edi, 0x12018324 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149792: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12149794: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214979D; /* 0x12149796: je 0x1214979d */
L_12149798:
    esi = MEM32(ebp + 0xC); /* 0x12149798: mov esi, dword ptr [ebp + 0xc] */
    goto L_1214979F; /* 0x1214979B: jmp 0x1214979f */
L_1214979D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214979D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214979F:
    eax = MEM32(ebx + 0x40); /* 0x1214979F: mov eax, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x121497A2: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214980C; /* 0x121497A5: je 0x1214980c */
L_121497A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121497A7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12149864; /* 0x121497A8: jne 0x12149864 */
L_121497AE:
    PUSH32(esp, MEM32(ebx + 0x58)); /* 0x121497AE: push dword ptr [ebx + 0x58] */
    ecx = ebx; /* 0x121497B1: mov ecx, ebx */
    RECOMP_CALL(sub_12143B43); /* 0x121497B3: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x121497B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121497F9; /* 0x121497BA: je 0x121497f9 */
L_121497BC:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x121497BC: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121497D5; /* 0x121497C0: je 0x121497d5 */
L_121497C2:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121497C2: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x120113E8u); /* 0x121497C5: push 0x120113e8 */
    PUSH32(esp, ebx); /* 0x121497CA: push ebx */
    RECOMP_CALL(sub_12143315); /* 0x121497CB: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121497D0: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_121497E1; /* 0x121497D3: jmp 0x121497e1 */
L_121497D5:
    PUSH32(esp, 0x120113E4u); /* 0x121497D5: push 0x120113e4 */
    ecx = ebx; /* 0x121497DA: mov ecx, ebx */
    RECOMP_CALL(sub_121427C5); /* 0x121497DC: call 0x121427c5 */
    RECOMP_FLAGS_IN();
L_121497E1:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121497E1: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x121497E4: mov ecx, ebx */
    RECOMP_CALL(sub_12143BA5); /* 0x121497E6: call 0x12143ba5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120113E0u); /* 0x121497EB: push 0x120113e0 */
    ecx = ebx; /* 0x121497F0: mov ecx, ebx */
    RECOMP_CALL(sub_121427C5); /* 0x121497F2: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_12149864; /* 0x121497F7: jmp 0x12149864 */
L_121497F9:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121497F9: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x120113D8u); /* 0x121497FC: push 0x120113d8 */
    PUSH32(esp, ebx); /* 0x12149801: push ebx */
    RECOMP_CALL(sub_12143315); /* 0x12149802: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12149807: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_12149864; /* 0x1214980A: jmp 0x12149864 */
L_1214980C:
    ecx = ebx; /* 0x1214980C: mov ecx, ebx */
    RECOMP_CALL(sub_12146E33); /* 0x1214980E: call 0x12146e33 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x12149813: mov ecx, ebx */
    RECOMP_CALL(sub_12146DF4); /* 0x12149815: call 0x12146df4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x1214981A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1214981D: push eax */
    PUSH32(esp, 2); /* 0x1214981E: push 2 */
    eax = ebp + (-0x4); /* 0x12149820: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149823: push eax */
    ecx = ebx + 0x30; /* 0x12149824: lea ecx, [ebx + 0x30] */
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x12149827: mov dword ptr [ebp - 4], 0xa */
    RECOMP_CALL(sub_12146502); /* 0x1214982E: call 0x12146502 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12149833: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x12149836: mov ecx, ebx */
    RECOMP_CALL(sub_1214324E); /* 0x12149838: call 0x1214324e */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1214983D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214984B; /* 0x1214983F: je 0x1214984b */
L_12149841:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12149841: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x12149844: mov ecx, ebx */
    RECOMP_CALL(sub_121432AE); /* 0x12149846: call 0x121432ae */
    RECOMP_FLAGS_IN();
L_1214984B:
    eax = ebp + 0x8; /* 0x1214984B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214984E: push eax */
    PUSH32(esp, 2); /* 0x1214984F: push 2 */
    eax = ebp + 0xC; /* 0x12149851: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12149854: push eax */
    ecx = ebx + 0x30; /* 0x12149855: lea ecx, [ebx + 0x30] */
    MEM32(ebp + 0xC) = 0xBu; /* 0x12149858: mov dword ptr [ebp + 0xc], 0xb */
    RECOMP_CALL(sub_12146502); /* 0x1214985F: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_12149864:
    edi = POP32_VAL(esp); /* 0x12149864: pop edi */
    esi = POP32_VAL(esp); /* 0x12149865: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149866: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12149868: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12149869: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214986A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12149872(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149872u);

L_12149872:
    edi = edi; /* 0x12149872: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149874: push ebp */
    ebp = esp; /* 0x12149875: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12149877: push ecx */
    PUSH32(esp, edi); /* 0x12149878: push edi */
    edi = ecx; /* 0x12149879: mov edi, ecx */
    eax = MEM32(edi + 0x1C); /* 0x1214987B: mov eax, dword ptr [edi + 0x1c] */
    edx = MEM32(eax + 0x4); /* 0x1214987E: mov edx, dword ptr [eax + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x12149881: mov ecx, dword ptr [ebp + 8] */
    eax = edi + 0x8; /* 0x12149884: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x12149887: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x12149888: push dword ptr [edi + 4] */
    PUSH32(esp, edx); /* 0x1214988B: push edx */
    RECOMP_CALL(sub_12149609); /* 0x1214988C: call 0x12149609 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149891: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121498D9; /* 0x12149893: jne 0x121498d9 */
L_12149895:
    eax = MEM32(edi + 0x38); /* 0x12149895: mov eax, dword ptr [edi + 0x38] */
    ecx = MEM32(edi + 0x1C); /* 0x12149898: mov ecx, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214989B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 1); /* 0x1214989E: push 1 */
    eax = ebp + (-0x4); /* 0x121498A0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121498A3: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121498A4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214748C); /* 0x121498A7: call 0x1214748c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121498AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121498D9; /* 0x121498AE: jne 0x121498d9 */
L_121498B0:
    PUSH32(esp, esi); /* 0x121498B0: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121498B1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x24), esi */ /* 0x121498B3: cmp dword ptr [edi + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121498D0; /* 0x121498B6: jbe 0x121498d0 */
L_121498B8:
    eax = MEM32(edi + 0x30); /* 0x121498B8: mov eax, dword ptr [edi + 0x30] */
    ecx = MEM32(eax + esi * 4); /* 0x121498BB: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121498BE: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x121498C1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x121498C3: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121498C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121498D8; /* 0x121498C8: jne 0x121498d8 */
L_121498CA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121498CA: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x24) */ /* 0x121498CB: cmp esi, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121498B8; /* 0x121498CE: jb 0x121498b8 */
L_121498D0:
    ecx = MEM32(ebp + 0x8); /* 0x121498D0: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214970B); /* 0x121498D3: call 0x1214970b */
    RECOMP_FLAGS_IN();
L_121498D8:
    esi = POP32_VAL(esp); /* 0x121498D8: pop esi */
L_121498D9:
    edi = POP32_VAL(esp); /* 0x121498D9: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121498DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121498DB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121498E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121498E3u);

L_121498E3:
    edi = edi; /* 0x121498E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121498E5: push ebp */
    ebp = esp; /* 0x121498E6: mov ebp, esp */
    eax = ecx + 0x20; /* 0x121498E8: lea eax, [ecx + 0x20] */
    PUSH32(esp, eax); /* 0x121498EB: push eax */
    PUSH32(esp, MEM32(ecx + 0x1C)); /* 0x121498EC: push dword ptr [ecx + 0x1c] */
    ecx = MEM32(ebp + 0x8); /* 0x121498EF: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12149775); /* 0x121498F2: call 0x12149775 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x121498F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121498F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12149918(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149918u);

L_12149918:
    edi = edi; /* 0x12149918: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214991A: push ebp */
    ebp = esp; /* 0x1214991B: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1214991D: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x12149920: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149966; /* 0x12149922: je 0x12149966 */
L_12149924:
    PUSH32(esp, ebx); /* 0x12149924: push ebx */
    PUSH32(esp, esi); /* 0x12149925: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12149926: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12149929: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214992A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1214992C: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214992E: pop ecx */
    edi = 0x12018314u; /* 0x1214992F: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12149934: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x12149936: mov dword ptr [eax], ebx */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12149938: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12149954; /* 0x1214993A: je 0x12149954 */
L_1214993C:
    esi = MEM32(ebp + 0xC); /* 0x1214993C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1214993F: push 4 */
    ecx = POP32_VAL(esp); /* 0x12149941: pop ecx */
    edi = 0x12001B28u; /* 0x12149942: mov edi, 0x12001b28 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12149947: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12149949: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12149954; /* 0x1214994B: je 0x12149954 */
L_1214994D:
    ebx = 0x80004002u; /* 0x1214994D: mov ebx, 0x80004002 */
    goto L_1214995F; /* 0x12149952: jmp 0x1214995f */
L_12149954:
    edx = MEM32(ebp + 0x8); /* 0x12149954: mov edx, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x12149957: mov dword ptr [eax], edx */
    ecx = MEM32(edx); /* 0x12149959: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1214995B: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1214995C: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_1214995F:
    edi = POP32_VAL(esp); /* 0x1214995F: pop edi */
    esi = POP32_VAL(esp); /* 0x12149960: pop esi */
    eax = ebx; /* 0x12149961: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12149963: pop ebx */
    goto L_1214996B; /* 0x12149964: jmp 0x1214996b */
L_12149966:
    eax = 0x80004003u; /* 0x12149966: mov eax, 0x80004003 */
L_1214996B:
    ebp = POP32_VAL(esp); /* 0x1214996B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214996C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12149974(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149974u);

L_12149974:
    edi = edi; /* 0x12149974: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149976: push ebp */
    ebp = esp; /* 0x12149977: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12149979: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x1214997C: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x1214997F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12149981: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x12149982: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12149985: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12149986: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214998E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214998Eu);

L_1214998E:
    edi = edi; /* 0x1214998E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149990: push ebp */
    ebp = esp; /* 0x12149991: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12149993: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x12149996: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x12149999: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1214999B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1214999C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1214999F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121499A0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121499A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121499A8u);

L_121499A8:
    edi = edi; /* 0x121499A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121499AA: push ebp */
    ebp = esp; /* 0x121499AB: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121499AD: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121499C8; /* 0x121499B1: je 0x121499c8 */
L_121499B3:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121499B3: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x121499B6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0xC); /* 0x121499B9: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x121499BC: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001B18u); /* 0x121499BE: push 0x12001b18 */
    PUSH32(esp, eax); /* 0x121499C3: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x121499C4: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_121499CD; /* 0x121499C6: jmp 0x121499cd */
L_121499C8:
    eax = 0x88760385u; /* 0x121499C8: mov eax, 0x88760385 */
L_121499CD:
    ebp = POP32_VAL(esp); /* 0x121499CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121499CE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121499D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121499D6u);

L_121499D6:
    edi = edi; /* 0x121499D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121499D8: push ebp */
    ebp = esp; /* 0x121499D9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121499DB: push esi */
    esi = MEM32(ebp + 0x10); /* 0x121499DC: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x121499DF: push edi */
    /* test esi, esi */ /* 0x121499E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149A2B; /* 0x121499E2: je 0x12149a2b */
L_121499E4:
    eax = MEM32(ebp + 0x8); /* 0x121499E4: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x34); /* 0x121499E7: mov ecx, dword ptr [eax + 0x34] */
    /* test ecx, ecx */ /* 0x121499EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121499FF; /* 0x121499EC: jne 0x121499ff */
L_121499EE:
    /* cmp MEM32(esi), ecx */ /* 0x121499EE: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121499FB; /* 0x121499F0: jbe 0x121499fb */
L_121499F2:
    eax = MEM32(ebp + 0xC); /* 0x121499F2: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x121499F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121499FB; /* 0x121499F7: je 0x121499fb */
L_121499F9:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x121499F9: mov byte ptr [eax], cl */
L_121499FB:
    MEM32(esi) = ecx; /* 0x121499FB: mov dword ptr [esi], ecx */
    goto L_12149A27; /* 0x121499FD: jmp 0x12149a27 */
L_121499FF:
    edi = ecx; /* 0x121499FF: mov edi, ecx */
    edx = edi + 0x1; /* 0x12149A01: lea edx, [edi + 1] */
L_12149A04:
    SET_LO8(eax, MEM8(edi)); /* 0x12149A04: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12149A06: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12149A07: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149A04; /* 0x12149A09: jne 0x12149a04 */
L_12149A0B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x12149A0B: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12149A0D: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12149A0E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12149A25; /* 0x12149A12: je 0x12149a25 */
L_12149A14:
    /* cmp edi, MEM32(esi) */ /* 0x12149A14: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12149A2B; /* 0x12149A16: ja 0x12149a2b */
L_12149A18:
    PUSH32(esp, edi); /* 0x12149A18: push edi */
    PUSH32(esp, ecx); /* 0x12149A19: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12149A1A: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF440); /* 0x12149A1D: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12149A22: add esp, 0xc */
    _flag_k = FK_ADD;
L_12149A25:
    MEM32(esi) = edi; /* 0x12149A25: mov dword ptr [esi], edi */
L_12149A27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149A27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12149A30; /* 0x12149A29: jmp 0x12149a30 */
L_12149A2B:
    eax = 0x88760385u; /* 0x12149A2B: mov eax, 0x88760385 */
L_12149A30:
    edi = POP32_VAL(esp); /* 0x12149A30: pop edi */
    esi = POP32_VAL(esp); /* 0x12149A31: pop esi */
    ebp = POP32_VAL(esp); /* 0x12149A32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12149A33: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12149A3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149A3Bu);

L_12149A3B:
    edi = edi; /* 0x12149A3B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149A3D: push ebp */
    ebp = esp; /* 0x12149A3E: mov ebp, esp */
    PUSH32(esp, edi); /* 0x12149A40: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12149A41: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x12149A44: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149A58; /* 0x12149A46: je 0x12149a58 */
L_12149A48:
    PUSH32(esp, esi); /* 0x12149A48: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12149A49: mov esi, dword ptr [ebp + 8] */
    esi = esi + 0x14; /* 0x12149A4C: lea esi, [esi + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149A4F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149A50: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149A51: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149A52: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149A53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12149A55: pop esi */
    goto L_12149A5D; /* 0x12149A56: jmp 0x12149a5d */
L_12149A58:
    eax = 0x88760385u; /* 0x12149A58: mov eax, 0x88760385 */
L_12149A5D:
    edi = POP32_VAL(esp); /* 0x12149A5D: pop edi */
    ebp = POP32_VAL(esp); /* 0x12149A5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12149A5F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12149A67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149A67u);

L_12149A67:
    edi = edi; /* 0x12149A67: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149A69: push ebp */
    ebp = esp; /* 0x12149A6A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12149A6C: push ecx */
    eax = MEM32(ebp + 0x10); /* 0x12149A6D: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12149A70: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12149A73: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x12149A76: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149A79: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12149A7A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12149A7D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x12001084)); /* 0x12149A80: call dword ptr [0x12001084] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12149A86: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12149A87: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12149A8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149A8Fu);

L_12149A8F:
    edi = edi; /* 0x12149A8F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149A91: push ebp */
    ebp = esp; /* 0x12149A92: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x12149A94: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12149A97: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12149A9C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12149A9E: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x12149AA1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12149AA2: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12149AA5: push esi */
    PUSH32(esp, 0x12011408u); /* 0x12149AA6: push 0x12011408 */
    MEM32(ebp + (-0x28)) = 1; /* 0x12149AAB: mov dword ptr [ebp - 0x28], 1 */
    RECOMP_ICALL(MEM32(0x12001120)); /* 0x12149AB2: call dword ptr [0x12001120] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12149AB8: mov esi, eax */
    /* test esi, esi */ /* 0x12149ABA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149AE3; /* 0x12149ABC: je 0x12149ae3 */
L_12149ABE:
    PUSH32(esp, edi); /* 0x12149ABE: push edi */
    PUSH32(esp, 0x120113F0u); /* 0x12149ABF: push 0x120113f0 */
    PUSH32(esp, esi); /* 0x12149AC4: push esi */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x12149AC5: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12149ACB: mov edi, eax */
    /* test edi, edi */ /* 0x12149ACD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149AD7; /* 0x12149ACF: je 0x12149ad7 */
L_12149AD1:
    PUSH32(esp, ebx); /* 0x12149AD1: push ebx */
    RECOMP_ICALL(edi); /* 0x12149AD2: call edi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x28)) = eax; /* 0x12149AD4: mov dword ptr [ebp - 0x28], eax */
L_12149AD7:
    PUSH32(esp, esi); /* 0x12149AD7: push esi */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x12149AD8: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x12149ADE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12149AE0: pop edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149B38; /* 0x12149AE1: jne 0x12149b38 */
L_12149AE3:
    eax = ebp + (-0x24); /* 0x12149AE3: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x12149AE6: push eax */
    MEM32(ebp + (-0x24)) = 0x20u; /* 0x12149AE7: mov dword ptr [ebp - 0x24], 0x20 */
    RECOMP_ICALL(MEM32(0x1200114C)); /* 0x12149AEE: call dword ptr [0x1200114c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x12149AF4: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebx + 0x4) = eax; /* 0x12149AF7: mov dword ptr [ebx + 4], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x12149AFA: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebx + 0x20) = eax; /* 0x12149AFD: mov dword ptr [ebx + 0x20], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x12149B00: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebx + 0x10) = eax; /* 0x12149B03: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x12149B06: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0x30) = eax; /* 0x12149B09: mov dword ptr [ebx + 0x30], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x12149B0C: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12149B0F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x18) = eax; /* 0x12149B11: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x12149B14: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebx + 0x8) = eax; /* 0x12149B17: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x12149B1A: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx + 0x24) = ecx; /* 0x12149B1D: mov dword ptr [ebx + 0x24], ecx */
    MEM32(ebx + 0x14) = ecx; /* 0x12149B20: mov dword ptr [ebx + 0x14], ecx */
    MEM32(ebx + 0x34) = ecx; /* 0x12149B23: mov dword ptr [ebx + 0x34], ecx */
    MEM32(ebx + 0x1C) = ecx; /* 0x12149B26: mov dword ptr [ebx + 0x1c], ecx */
    MEM32(ebx + 0xC) = ecx; /* 0x12149B29: mov dword ptr [ebx + 0xc], ecx */
    MEM32(ebx + 0x28) = eax; /* 0x12149B2C: mov dword ptr [ebx + 0x28], eax */
    MEM32(ebx + 0x2C) = ecx; /* 0x12149B2F: mov dword ptr [ebx + 0x2c], ecx */
    MEM32(ebx + 0x38) = ecx; /* 0x12149B32: mov dword ptr [ebx + 0x38], ecx */
    MEM32(ebx + 0x3C) = ecx; /* 0x12149B35: mov dword ptr [ebx + 0x3c], ecx */
L_12149B38:
    ecx = MEM32(ebp + (-0x4)); /* 0x12149B38: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x28)); /* 0x12149B3B: mov eax, dword ptr [ebp - 0x28] */
    esi = POP32_VAL(esp); /* 0x12149B3E: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12149B3F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12149B41: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12149B42: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12149B47: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12149B48: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12149B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149B50u);

L_12149B50:
    edi = edi; /* 0x12149B50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149B52: push ebp */
    ebp = esp; /* 0x12149B53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12149B55: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x12149B58: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x12149B5C: push ebx */
    PUSH32(esp, edi); /* 0x12149B5D: push edi */
    ebx = ecx; /* 0x12149B5E: mov ebx, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12149BD0; /* 0x12149B60: jne 0x12149bd0 */
L_12149B62:
    eax = MEM32(ebx + 0x4); /* 0x12149B62: mov eax, dword ptr [ebx + 4] */
    edi = MEM32(eax + 0x30); /* 0x12149B65: mov edi, dword ptr [eax + 0x30] */
    PUSH32(esp, esi); /* 0x12149B68: push esi */
    eax = ebp + (-0x4); /* 0x12149B69: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149B6C: push eax */
    PUSH32(esp, edi); /* 0x12149B6D: push edi */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x12149B6E: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x4); /* 0x12149B74: mov edx, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12149B77: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12149B7A: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x40); /* 0x12149B7D: sub eax, dword ptr [edx + 0x40] */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = MEM32(edx + 0x44), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149B80: sbb ecx, dword ptr [edx + 0x44] */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebx + 0x10) = eax; /* 0x12149B83: mov dword ptr [ebx + 0x10], eax */
    MEM32(ebx + 0x14) = ecx; /* 0x12149B86: mov dword ptr [ebx + 0x14], ecx */
    ecx = MEM32(ebx + 0x8); /* 0x12149B89: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ecx); /* 0x12149B8C: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12149B8E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x10); /* 0x12149B91: sub eax, dword ptr [ebx + 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x12149B94: push 0 */
    { uint32_t _sa = edx, _sb = MEM32(ebx + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149B96: sbb edx, dword ptr [ebx + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x10)) = eax; /* 0x12149B99: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + 0x8; /* 0x12149B9C: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12149B9F: push eax */
    PUSH32(esp, 8); /* 0x12149BA0: push 8 */
    eax = ebp + (-0x10); /* 0x12149BA2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12149BA5: push eax */
    PUSH32(esp, edi); /* 0x12149BA6: push edi */
    MEM32(ebp + (-0xC)) = edx; /* 0x12149BA7: mov dword ptr [ebp - 0xc], edx */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149BAA: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12149BB0: pop esi */
    /* test eax, eax */ /* 0x12149BB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149BD0; /* 0x12149BB3: jne 0x12149bd0 */
L_12149BB5:
    PUSH32(esp, eax); /* 0x12149BB5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x12149BB6: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x12149BB9: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x12149BBC: push edi */
    RECOMP_CALL(sub_12149A67); /* 0x12149BBD: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12149BC2: push edi */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x12149BC3: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x12149BC9: mov eax, 0x8007000e */
    goto L_12149BD2; /* 0x12149BCE: jmp 0x12149bd2 */
L_12149BD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149BD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12149BD2:
    edi = POP32_VAL(esp); /* 0x12149BD2: pop edi */
    ebx = POP32_VAL(esp); /* 0x12149BD3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12149BD4: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12149BD5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12149BDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149BDDu);

L_12149BDD:
    edi = edi; /* 0x12149BDD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149BDF: push ebp */
    ebp = esp; /* 0x12149BE0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x12149BE2: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12149BE5: push ebx */
    PUSH32(esp, esi); /* 0x12149BE6: push esi */
    esi = ecx; /* 0x12149BE7: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x12149BE9: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x12149BEC: push edi */
    edi = MEM32(eax + 0x30); /* 0x12149BED: mov edi, dword ptr [eax + 0x30] */
    eax = ebp + (-0xC); /* 0x12149BF0: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12149BF3: push eax */
    PUSH32(esp, edi); /* 0x12149BF4: push edi */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x12149BF5: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x12149BFB: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = eax; /* 0x12149BFF: mov edx, eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x12149C01: mov dword ptr [ebp - 0x10], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12149D08; /* 0x12149C04: je 0x12149d08 */
L_12149C0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12149C0A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x34), ebx */ /* 0x12149C0C: cmp dword ptr [esi + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12149C18; /* 0x12149C0F: jne 0x12149c18 */
L_12149C11:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149C11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12149E1C; /* 0x12149C13: jmp 0x12149e1c */
L_12149C18:
    eax = esi; /* 0x12149C18: mov eax, esi */
    eax = MEM32(eax + 0x8); /* 0x12149C1A: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax + 0x40); /* 0x12149C1D: mov ecx, dword ptr [eax + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x44); /* 0x12149C20: add ecx, dword ptr [esi + 0x44] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x44); /* 0x12149C23: mov eax, dword ptr [eax + 0x44] */
    { uint32_t _aa = eax, _ab = MEM32(esi + 0x48), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149C26: adc eax, dword ptr [esi + 0x48] */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x12149C29: add ecx, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x12149C2C: push ebx */
    { uint32_t _aa = eax, _ab = ebx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149C2D: adc eax, ebx */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x12149C2F: push eax */
    PUSH32(esp, ecx); /* 0x12149C30: push ecx */
    PUSH32(esp, edi); /* 0x12149C31: push edi */
    RECOMP_CALL(sub_12149A67); /* 0x12149C32: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x12149C37: mov edx, dword ptr [ebp - 0x10] */
    ecx = esi; /* 0x12149C3A: mov ecx, esi */
    eax = MEM32(ecx + 0x8); /* 0x12149C3C: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + 0x40); /* 0x12149C3F: sub edx, dword ptr [eax + 0x40] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x12149C42: mov ecx, dword ptr [ebp - 0xc] */
    { uint32_t _sa = ecx, _sb = MEM32(eax + 0x44), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149C45: sbb ecx, dword ptr [eax + 0x44] */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(esi + 0x44); /* 0x12149C48: sub edx, dword ptr [esi + 0x44] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12149C4B: push ebx */
    { uint32_t _sa = ecx, _sb = MEM32(esi + 0x48), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149C4C: sbb ecx, dword ptr [esi + 0x48] */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x8); /* 0x12149C4F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12149C52: push eax */
    PUSH32(esp, 8); /* 0x12149C53: push 8 */
    eax = ebp + (-0x18); /* 0x12149C55: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x12149C58: push eax */
    PUSH32(esp, edi); /* 0x12149C59: push edi */
    MEM32(ebp + (-0x18)) = edx; /* 0x12149C5A: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x12149C5D: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149C60: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x12149C66: push 2 */
    PUSH32(esp, ebx); /* 0x12149C68: push ebx */
    PUSH32(esp, ebx); /* 0x12149C69: push ebx */
    PUSH32(esp, edi); /* 0x12149C6A: push edi */
    /* test eax, eax */ /* 0x12149C6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149C79; /* 0x12149C6D: jne 0x12149c79 */
L_12149C6F:
    RECOMP_CALL(sub_12149A67); /* 0x12149C6F: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    goto L_12149E17; /* 0x12149C74: jmp 0x12149e17 */
L_12149C79:
    RECOMP_CALL(sub_12149A67); /* 0x12149C79: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x12149C7E: mov ecx, ebx */
    MEM32(ebp + 0x8) = ecx; /* 0x12149C80: mov dword ptr [ebp + 8], ecx */
    /* cmp MEM32(esi + 0x34), ebx */ /* 0x12149C83: cmp dword ptr [esi + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12149CA7; /* 0x12149C86: jbe 0x12149ca7 */
L_12149C88:
    eax = MEM32(esi + 0x40); /* 0x12149C88: mov eax, dword ptr [esi + 0x40] */
    ecx = MEM32(eax + ecx * 4); /* 0x12149C8B: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x12149C8E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x12149C90: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12149C91: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x12149C94: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x12149C97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12149CF9; /* 0x12149C99: js 0x12149cf9 */
L_12149C9B:
    ecx = MEM32(ebp + 0x8); /* 0x12149C9B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12149C9E: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x12149C9F: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, MEM32(esi + 0x34) */ /* 0x12149CA2: cmp ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12149C88; /* 0x12149CA5: jb 0x12149c88 */
L_12149CA7:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x20)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x20)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) | 0xFFFFFFFFu; /* 0x12149CA7: or dword ptr [ebp - 0x20], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu; /* 0x12149CAB: or dword ptr [ebp - 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12149CAF: push ebx */
    eax = ebp + (-0x8); /* 0x12149CB0: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12149CB3: push eax */
    PUSH32(esp, 8); /* 0x12149CB4: push 8 */
    eax = ebp + (-0x20); /* 0x12149CB6: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x12149CB9: push eax */
    PUSH32(esp, edi); /* 0x12149CBA: push edi */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149CBB: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149CC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149DE6; /* 0x12149CC3: je 0x12149de6 */
L_12149CC9:
    ecx = ebx; /* 0x12149CC9: mov ecx, ebx */
    MEM32(ebp + 0x8) = ebx; /* 0x12149CCB: mov dword ptr [ebp + 8], ebx */
    /* cmp MEM32(esi + 0x34), ebx */ /* 0x12149CCE: cmp dword ptr [esi + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_12149C11; /* 0x12149CD1: jbe 0x12149c11 */
L_12149CD7:
    eax = MEM32(esi + 0x40); /* 0x12149CD7: mov eax, dword ptr [esi + 0x40] */
    ecx = MEM32(eax + ecx * 4); /* 0x12149CDA: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x12149CDD: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x12149CDF: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12149CE1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149CE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12149D01; /* 0x12149CE6: js 0x12149d01 */
L_12149CE8:
    ecx = MEM32(ebp + 0x8); /* 0x12149CE8: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12149CEB: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x12149CEC: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, MEM32(esi + 0x34) */ /* 0x12149CEF: cmp ecx, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12149CD7; /* 0x12149CF2: jb 0x12149cd7 */
L_12149CF4:
    RECOMP_BACKEDGE();
    goto L_12149C11; /* 0x12149CF4: jmp 0x12149c11 */
L_12149CF9:
    esi = MEM32(ebp + (-0x4)); /* 0x12149CF9: mov esi, dword ptr [ebp - 4] */
    goto L_12149DEB; /* 0x12149CFC: jmp 0x12149deb */
L_12149D01:
    esi = eax; /* 0x12149D01: mov esi, eax */
    goto L_12149DEB; /* 0x12149D03: jmp 0x12149deb */
L_12149D08:
    ecx = MEM32(esi + 0x8); /* 0x12149D08: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x40));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + 0x40); /* 0x12149D0B: sub edx, dword ptr [ecx + 0x40] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0xC)); /* 0x12149D0E: mov eax, dword ptr [ebp - 0xc] */
    { uint32_t _sa = eax, _sb = MEM32(ecx + 0x44), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149D11: sbb eax, dword ptr [ecx + 0x44] */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12149D14: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x48) = eax; /* 0x12149D16: mov dword ptr [esi + 0x48], eax */
    eax = MEM32(esi + 0x2C); /* 0x12149D19: mov eax, dword ptr [esi + 0x2c] */
    PUSH32(esp, ebx); /* 0x12149D1C: push ebx */
    MEM32(ebp + (-0x28)) = eax; /* 0x12149D1D: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x4); /* 0x12149D20: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149D23: push eax */
    PUSH32(esp, 8); /* 0x12149D24: push 8 */
    eax = esi + 0x24; /* 0x12149D26: lea eax, [esi + 0x24] */
    PUSH32(esp, eax); /* 0x12149D29: push eax */
    PUSH32(esp, edi); /* 0x12149D2A: push edi */
    MEM32(esi + 0x44) = edx; /* 0x12149D2B: mov dword ptr [esi + 0x44], edx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x12149D2E: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x12149D31: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x12149D34: mov dword ptr [ebp - 0x24], ebx */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149D37: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149D3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149E03; /* 0x12149D3F: je 0x12149e03 */
L_12149D45:
    PUSH32(esp, ebx); /* 0x12149D45: push ebx */
    eax = ebp + (-0x4); /* 0x12149D46: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149D49: push eax */
    PUSH32(esp, 8); /* 0x12149D4A: push 8 */
    eax = ebp + (-0x28); /* 0x12149D4C: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x12149D4F: push eax */
    PUSH32(esp, edi); /* 0x12149D50: push edi */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149D51: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149D57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149E03; /* 0x12149D59: je 0x12149e03 */
L_12149D5F:
    eax = MEM32(esi + 0xC); /* 0x12149D5F: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, ebx); /* 0x12149D62: push ebx */
    ecx = ebp + (-0x4); /* 0x12149D63: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x12149D66: push ecx */
    PUSH32(esp, 0x10u); /* 0x12149D67: push 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12149D69: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12149D6C: push eax */
    PUSH32(esp, edi); /* 0x12149D6D: push edi */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149D6E: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149D74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149E03; /* 0x12149D76: je 0x12149e03 */
L_12149D7C:
    PUSH32(esp, ebx); /* 0x12149D7C: push ebx */
    eax = ebp + (-0x4); /* 0x12149D7D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149D80: push eax */
    PUSH32(esp, 0x10u); /* 0x12149D81: push 0x10 */
    eax = esi + 0x10; /* 0x12149D83: lea eax, [esi + 0x10] */
    PUSH32(esp, eax); /* 0x12149D86: push eax */
    PUSH32(esp, edi); /* 0x12149D87: push edi */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149D88: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149D8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149E03; /* 0x12149D90: je 0x12149e03 */
L_12149D92:
    PUSH32(esp, ebx); /* 0x12149D92: push ebx */
    eax = ebp + (-0x4); /* 0x12149D93: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149D96: push eax */
    PUSH32(esp, 8); /* 0x12149D97: push 8 */
    eax = ebp + (-0x30); /* 0x12149D99: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x12149D9C: push eax */
    PUSH32(esp, edi); /* 0x12149D9D: push edi */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149D9E: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149DA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149E03; /* 0x12149DA6: je 0x12149e03 */
L_12149DA8:
    edx = MEM32(esi + 0x30); /* 0x12149DA8: mov edx, dword ptr [esi + 0x30] */
    /* test edx, edx */ /* 0x12149DAB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149DBF; /* 0x12149DAD: jne 0x12149dbf */
L_12149DAF:
    PUSH32(esp, ebx); /* 0x12149DAF: push ebx */
    eax = ebp + (-0x4); /* 0x12149DB0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149DB3: push eax */
    PUSH32(esp, 1); /* 0x12149DB4: push 1 */
    eax = ebp + 0xB; /* 0x12149DB6: lea eax, [ebp + 0xb] */
    MEM8(ebp + 0xB) = (uint8_t)(LO8(ebx)); /* 0x12149DB9: mov byte ptr [ebp + 0xb], bl */
    PUSH32(esp, eax); /* 0x12149DBC: push eax */
    goto L_12149DD7; /* 0x12149DBD: jmp 0x12149dd7 */
L_12149DBF:
    ecx = edx; /* 0x12149DBF: mov ecx, edx */
    esi = ecx + 0x1; /* 0x12149DC1: lea esi, [ecx + 1] */
L_12149DC4:
    SET_LO8(eax, MEM8(ecx)); /* 0x12149DC4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12149DC6: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12149DC7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149DC4; /* 0x12149DC9: jne 0x12149dc4 */
L_12149DCB:
    PUSH32(esp, ebx); /* 0x12149DCB: push ebx */
    eax = ebp + (-0x4); /* 0x12149DCC: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x12149DCF: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12149DD0: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x12149DD2: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x12149DD5: push eax */
    PUSH32(esp, edx); /* 0x12149DD6: push edx */
L_12149DD7:
    PUSH32(esp, edi); /* 0x12149DD7: push edi */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x12149DD8: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12149DDE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149C11; /* 0x12149DE0: jne 0x12149c11 */
L_12149DE6:
    esi = 0x8007000Eu; /* 0x12149DE6: mov esi, 0x8007000e */
L_12149DEB:
    PUSH32(esp, ebx); /* 0x12149DEB: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x12149DEC: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x12149DEF: push dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x12149DF2: push edi */
    RECOMP_CALL(sub_12149A67); /* 0x12149DF3: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12149DF8: push edi */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x12149DF9: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12149DFF: mov eax, esi */
    goto L_12149E1C; /* 0x12149E01: jmp 0x12149e1c */
L_12149E03:
    PUSH32(esp, ebx); /* 0x12149E03: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x12149E04: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x12149E07: push dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x12149E0A: push edi */
    RECOMP_CALL(sub_12149A67); /* 0x12149E0B: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12149E10: push edi */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x12149E11: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
L_12149E17:
    eax = 0x8007000Eu; /* 0x12149E17: mov eax, 0x8007000e */
L_12149E1C:
    edi = POP32_VAL(esp); /* 0x12149E1C: pop edi */
    esi = POP32_VAL(esp); /* 0x12149E1D: pop esi */
    ebx = POP32_VAL(esp); /* 0x12149E1E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12149E1F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12149E20: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12149E28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149E28u);

L_12149E28:
    edi = edi; /* 0x12149E28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149E2A: push ebp */
    ebp = esp; /* 0x12149E2B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12149E2D: push esi */
    PUSH32(esp, edi); /* 0x12149E2E: push edi */
    edi = ecx; /* 0x12149E2F: mov edi, ecx */
    eax = MEM32(edi + 0x30); /* 0x12149E31: mov eax, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12149E34: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x12149E36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149E78; /* 0x12149E38: je 0x12149e78 */
L_12149E3A:
    ecx = MEM32(ebp + 0x8); /* 0x12149E3A: mov ecx, dword ptr [ebp + 8] */
L_12149E3D:
    SET_LO8(edx, MEM8(eax)); /* 0x12149E3D: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x12149E3F: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12149E5D; /* 0x12149E41: jne 0x12149e5d */
L_12149E43:
    /* test LO8(edx), LO8(edx) */ /* 0x12149E43: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149E59; /* 0x12149E45: je 0x12149e59 */
L_12149E47:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x12149E47: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x12149E4A: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12149E5D; /* 0x12149E4D: jne 0x12149e5d */
L_12149E4F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12149E4F: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12149E52: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x12149E55: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149E3D; /* 0x12149E57: jne 0x12149e3d */
L_12149E59:
    eax = esi; /* 0x12149E59: mov eax, esi */
    goto L_12149E62; /* 0x12149E5B: jmp 0x12149e62 */
L_12149E5D:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149E5D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12149E5F: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_12149E62:
    /* test eax, eax */ /* 0x12149E62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149E78; /* 0x12149E64: jne 0x12149e78 */
L_12149E66:
    eax = MEM32(ebp + 0xC); /* 0x12149E66: mov eax, dword ptr [ebp + 0xc] */
    ecx = edi + (-0x4); /* 0x12149E69: lea ecx, [edi - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12149E6C: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x12149E6E: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x12149E70: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x12149E72: mov dword ptr [eax], ecx */
L_12149E74:
    SET_LO8(eax, 1); /* 0x12149E74: mov al, 1 */
    goto L_12149E9A; /* 0x12149E76: jmp 0x12149e9a */
L_12149E78:
    /* cmp MEM32(edi + 0x34), esi */ /* 0x12149E78: cmp dword ptr [edi + 0x34], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12149E98; /* 0x12149E7B: jbe 0x12149e98 */
L_12149E7D:
    eax = MEM32(edi + 0x40); /* 0x12149E7D: mov eax, dword ptr [edi + 0x40] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12149E80: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12149E83: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12149E86: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12149E89: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x12149E8B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12149E8E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149E74; /* 0x12149E90: jne 0x12149e74 */
L_12149E92:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12149E92: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x34) */ /* 0x12149E93: cmp esi, dword ptr [edi + 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12149E7D; /* 0x12149E96: jb 0x12149e7d */
L_12149E98:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x12149E98: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_12149E9A:
    edi = POP32_VAL(esp); /* 0x12149E9A: pop edi */
    esi = POP32_VAL(esp); /* 0x12149E9B: pop esi */
    ebp = POP32_VAL(esp); /* 0x12149E9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12149E9D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12149EA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149EA5u);

L_12149EA5:
    edi = edi; /* 0x12149EA5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149EA7: push ebp */
    ebp = esp; /* 0x12149EA8: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12149EAA: push ebx */
    PUSH32(esp, esi); /* 0x12149EAB: push esi */
    PUSH32(esp, edi); /* 0x12149EAC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12149EAD: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x12149EB0: mov ebx, ecx */
    PUSH32(esp, 4); /* 0x12149EB2: push 4 */
    ecx = POP32_VAL(esp); /* 0x12149EB4: pop ecx */
    esi = ebx + 0x10; /* 0x12149EB5: lea esi, [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149EB8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12149EBA: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_12149ED0; /* 0x12149EBC: jne 0x12149ed0 */
L_12149EBE:
    eax = MEM32(ebp + 0xC); /* 0x12149EBE: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebx + (-0x4); /* 0x12149EC1: lea ecx, [ebx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x12149EC4: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x12149EC6: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x12149EC8: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x12149ECA: mov dword ptr [eax], ecx */
L_12149ECC:
    SET_LO8(eax, 1); /* 0x12149ECC: mov al, 1 */
    goto L_12149EF4; /* 0x12149ECE: jmp 0x12149ef4 */
L_12149ED0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12149ED0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x34), esi */ /* 0x12149ED2: cmp dword ptr [ebx + 0x34], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x34)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12149EF2; /* 0x12149ED5: jbe 0x12149ef2 */
L_12149ED7:
    eax = MEM32(ebx + 0x40); /* 0x12149ED7: mov eax, dword ptr [ebx + 0x40] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12149EDA: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12149EDD: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12149EE0: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12149EE3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x12149EE5: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12149EE8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149ECC; /* 0x12149EEA: jne 0x12149ecc */
L_12149EEC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12149EEC: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x34) */ /* 0x12149EED: cmp esi, dword ptr [ebx + 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12149ED7; /* 0x12149EF0: jb 0x12149ed7 */
L_12149EF2:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x12149EF2: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_12149EF4:
    edi = POP32_VAL(esp); /* 0x12149EF4: pop edi */
    esi = POP32_VAL(esp); /* 0x12149EF5: pop esi */
    ebx = POP32_VAL(esp); /* 0x12149EF6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12149EF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12149EF8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12149F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149F00u);

L_12149F00:
    edi = edi; /* 0x12149F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149F02: push ebp */
    ebp = esp; /* 0x12149F03: mov ebp, esp */
    PUSH32(esp, edi); /* 0x12149F05: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12149F06: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x12149F09: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149F2B; /* 0x12149F0B: je 0x12149f2b */
L_12149F0D:
    eax = MEM32(ebp + 0x8); /* 0x12149F0D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12149F10: push esi */
    esi = MEM32(eax + 0x10); /* 0x12149F11: mov esi, dword ptr [eax + 0x10] */
    /* test esi, esi */ /* 0x12149F14: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149F23; /* 0x12149F16: je 0x12149f23 */
L_12149F18:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x12149F18: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149F1B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149F1C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149F1D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149F1E: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149F1F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12149F28; /* 0x12149F21: jmp 0x12149f28 */
L_12149F23:
    eax = 0x88760384u; /* 0x12149F23: mov eax, 0x88760384 */
L_12149F28:
    esi = POP32_VAL(esp); /* 0x12149F28: pop esi */
    goto L_12149F30; /* 0x12149F29: jmp 0x12149f30 */
L_12149F2B:
    eax = 0x88760385u; /* 0x12149F2B: mov eax, 0x88760385 */
L_12149F30:
    edi = POP32_VAL(esp); /* 0x12149F30: pop edi */
    ebp = POP32_VAL(esp); /* 0x12149F31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12149F32: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12149F3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149F3Au);

L_12149F3A:
    edi = edi; /* 0x12149F3A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149F3C: push ebp */
    ebp = esp; /* 0x12149F3D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x12149F3F: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12149F45: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12149F4A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12149F4C: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x12149F4F: push ebx */
    PUSH32(esp, esi); /* 0x12149F50: push esi */
    PUSH32(esp, edi); /* 0x12149F51: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12149F52: mov edi, dword ptr [ebp + 8] */
    /* test MEM8(edi + 0x48), 0x80u */ /* 0x12149F55: test byte ptr [edi + 0x48], 0x80 */
    _flag_a = (uint32_t)(MEM8(edi + 0x48)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149F65; /* 0x12149F59: je 0x12149f65 */
L_12149F5B:
    ebx = 0x88760384u; /* 0x12149F5B: mov ebx, 0x88760384 */
    goto L_1214A2F4; /* 0x12149F60: jmp 0x1214a2f4 */
L_12149F65:
    ebx = MEM32(0x12001088); /* 0x12149F65: mov ebx, dword ptr [0x12001088] */
    eax = ebp + (-0x48); /* 0x12149F6B: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x12149F6E: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x12149F6F: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x12149F72: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4C)) = eax; /* 0x12149F74: mov dword ptr [ebp - 0x4c], eax */
    MEM32(edi + 0x40) = eax; /* 0x12149F77: mov dword ptr [edi + 0x40], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x12149F7A: mov eax, dword ptr [ebp - 0x48] */
    MEM32(edi + 0x44) = eax; /* 0x12149F7D: mov dword ptr [edi + 0x44], eax */
    eax = ebp + (-0x5C); /* 0x12149F80: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x12149F83: push eax */
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x12149F84: push dword ptr [edi + 0x34] */
    RECOMP_ICALL(ebx); /* 0x12149F87: call ebx */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x60)) = eax; /* 0x12149F89: mov dword ptr [ebp - 0x60], eax */
    eax = ebp + (-0x44); /* 0x12149F8C: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x12149F8F: push eax */
    MEM32(ebp + (-0x44)) = 0x40u; /* 0x12149F90: mov dword ptr [ebp - 0x44], 0x40 */
    RECOMP_CALL(sub_12149A8F); /* 0x12149F97: call 0x12149a8f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x94); /* 0x12149F9C: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x12149FA2: push eax */
    RECOMP_ICALL(MEM32(0x12001128)); /* 0x12149FA3: call dword ptr [0x12001128] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x34)); /* 0x12149FA9: mov ecx, dword ptr [ebp - 0x34] */
    eax = MEM32(ebp + (-0x30)); /* 0x12149FAC: mov eax, dword ptr [ebp - 0x30] */
    if (1) _cf = (((ecx) >> 2) & 1u); /* 0x12149FAF: shrd ecx, eax, 3 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) >> (3u)) | ((uint32_t)(eax) << (32 - (3u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) >> (3u)) | ((uint32_t)(eax) << (32 - (3u)))) : (ecx));
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12149FB3: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x12149FB3: shr eax, 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12149FB6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = ecx; /* 0x12149FB8: mov dword ptr [ebp - 0x34], ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x12149FBB: mov dword ptr [ebp - 0x30], eax */
    /* cmp eax, ebx */ /* 0x12149FBE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12149FC7; /* 0x12149FC0: ja 0x12149fc7 */
L_12149FC2:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x12149FC2: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12149FD0; /* 0x12149FC5: jbe 0x12149fd0 */
L_12149FC7:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x12149FC7: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x34)) = ecx; /* 0x12149FCA: mov dword ptr [ebp - 0x34], ecx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x12149FCD: mov dword ptr [ebp - 0x30], ebx */
L_12149FD0:
    /* cmp MEM32(ebp + (-0x5C)), ebx */ /* 0x12149FD0: cmp dword ptr [ebp - 0x5c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12149FDF; /* 0x12149FD3: jg 0x12149fdf */
L_12149FD5:
    if (CMP_L(_flag_a, _flag_b)) goto L_12149FDC; /* 0x12149FD5: jl 0x12149fdc */
L_12149FD7:
    /* cmp MEM32(ebp + (-0x60)), ecx */ /* 0x12149FD7: cmp dword ptr [ebp - 0x60], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12149FDF; /* 0x12149FDA: jae 0x12149fdf */
L_12149FDC:
    ecx = MEM32(ebp + (-0x60)); /* 0x12149FDC: mov ecx, dword ptr [ebp - 0x60] */
L_12149FDF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12149FDF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x12149FE1: mov eax, ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x90)); /* 0x12149FE3: div dword ptr [ebp - 0x90] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 4); /* 0x12149FE9: push 4 */
    PUSH32(esp, 0x1000u); /* 0x12149FEB: push 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12149FF0: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x90))); /* 0x12149FF1: imul eax, dword ptr [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x12149FF8: push eax */
    PUSH32(esp, ebx); /* 0x12149FF9: push ebx */
    ebx = MEM32(0x12001130); /* 0x12149FFA: mov ebx, dword ptr [0x12001130] */
    goto L_1214A02D; /* 0x1214A000: jmp 0x1214a02d */
L_1214A002:
    eax = MEM32(ebp + (-0x58)); /* 0x1214A002: mov eax, dword ptr [ebp - 0x58] */
    /* cmp eax, MEM32(ebp + (-0x90)) */ /* 0x1214A005: cmp eax, dword ptr [ebp - 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x90)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A0AA; /* 0x1214A00B: je 0x1214a0aa */
L_1214A011:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1214A011: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1214A011: shr eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214A013: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x90)); /* 0x1214A015: div dword ptr [ebp - 0x90] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 4); /* 0x1214A01B: push 4 */
    PUSH32(esp, 0x1000u); /* 0x1214A01D: push 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214A022: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x90))); /* 0x1214A023: imul eax, dword ptr [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x1214A02A: push eax */
    PUSH32(esp, 0); /* 0x1214A02B: push 0 */
L_1214A02D:
    MEM32(ebp + (-0x58)) = eax; /* 0x1214A02D: mov dword ptr [ebp - 0x58], eax */
    RECOMP_ICALL(ebx); /* 0x1214A030: call ebx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214A032: mov esi, eax */
    /* test esi, esi */ /* 0x1214A034: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A002; /* 0x1214A036: je 0x1214a002 */
L_1214A038:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214A038: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1214A03A: mov dword ptr [ebp - 0x50], ecx */
    /* cmp MEM32(edi + 0x20), ecx */ /* 0x1214A03D: cmp dword ptr [edi + 0x20], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214A061; /* 0x1214A040: jbe 0x1214a061 */
L_1214A042:
    eax = MEM32(edi + 0x2C); /* 0x1214A042: mov eax, dword ptr [edi + 0x2c] */
    ecx = MEM32(eax + ecx * 4); /* 0x1214A045: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x1214A048: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0); /* 0x1214A04A: push 0 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1214A04C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214A04F: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1214A051: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214A0B4; /* 0x1214A053: js 0x1214a0b4 */
L_1214A055:
    ecx = MEM32(ebp + (-0x50)); /* 0x1214A055: mov ecx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A058: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1214A059: mov dword ptr [ebp - 0x50], ecx */
    /* cmp ecx, MEM32(edi + 0x20) */ /* 0x1214A05C: cmp ecx, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214A042; /* 0x1214A05F: jb 0x1214a042 */
L_1214A061:
    ebx = MEM32(0x120010DC); /* 0x1214A061: mov ebx, dword ptr [0x120010dc] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x70)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x70)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x70)) = MEM32(ebp + (-0x70)) | 0xFFFFFFFFu; /* 0x1214A067: or dword ptr [ebp - 0x70], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) | 0xFFFFFFFFu; /* 0x1214A06B: or dword ptr [ebp - 0x6c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1214A06F: push 0 */
    eax = ebp + (-0x54); /* 0x1214A071: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1214A074: push eax */
    PUSH32(esp, 8); /* 0x1214A075: push 8 */
    eax = ebp + (-0x70); /* 0x1214A077: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1214A07A: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A07B: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x1214A07E: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A080: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A0E0; /* 0x1214A082: jne 0x1214a0e0 */
L_1214A084:
    PUSH32(esp, eax); /* 0x1214A084: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1214A085: push dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1214A088: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A08B: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A08E: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A093: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214A096: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8000u); /* 0x1214A09C: push 0x8000 */
    PUSH32(esp, 0); /* 0x1214A0A1: push 0 */
L_1214A0A3:
    PUSH32(esp, esi); /* 0x1214A0A3: push esi */
    RECOMP_ICALL(MEM32(0x12001104)); /* 0x1214A0A4: call dword ptr [0x12001104] */
    RECOMP_FLAGS_IN();
L_1214A0AA:
    ebx = 0x8007000Eu; /* 0x1214A0AA: mov ebx, 0x8007000e */
    goto L_1214A2F4; /* 0x1214A0AF: jmp 0x1214a2f4 */
L_1214A0B4:
    PUSH32(esp, 0); /* 0x1214A0B4: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1214A0B6: push dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1214A0B9: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A0BC: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A0BF: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A0C4: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214A0C7: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8000u); /* 0x1214A0CD: push 0x8000 */
    PUSH32(esp, 0); /* 0x1214A0D2: push 0 */
    PUSH32(esp, esi); /* 0x1214A0D4: push esi */
    RECOMP_ICALL(MEM32(0x12001104)); /* 0x1214A0D5: call dword ptr [0x12001104] */
    RECOMP_FLAGS_IN();
    goto L_1214A2F4; /* 0x1214A0DB: jmp 0x1214a2f4 */
L_1214A0E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214A0E0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1214A0E2: mov dword ptr [ebp - 0x50], ecx */
    /* cmp MEM32(edi + 0x20), ecx */ /* 0x1214A0E5: cmp dword ptr [edi + 0x20], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214A10F; /* 0x1214A0E8: jbe 0x1214a10f */
L_1214A0EA:
    eax = MEM32(edi + 0x2C); /* 0x1214A0EA: mov eax, dword ptr [edi + 0x2c] */
    ecx = MEM32(eax + ecx * 4); /* 0x1214A0ED: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x1214A0F0: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1214A0F2: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1214A0F4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214A0F7: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1214A0F9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214A0B4; /* 0x1214A0FB: js 0x1214a0b4 */
L_1214A0FD:
    ecx = MEM32(ebp + (-0x50)); /* 0x1214A0FD: mov ecx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A100: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1214A101: mov dword ptr [ebp - 0x50], ecx */
    /* cmp ecx, MEM32(edi + 0x20) */ /* 0x1214A104: cmp ecx, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214A0EA; /* 0x1214A107: jb 0x1214a0ea */
L_1214A109:
    ebx = MEM32(0x120010DC); /* 0x1214A109: mov ebx, dword ptr [0x120010dc] */
L_1214A10F:
    eax = ebp + (-0x64); /* 0x1214A10F: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1214A112: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A113: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x1214A116: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x4C)); /* 0x1214A11C: sub eax, dword ptr [ebp - 0x4c] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x68)) = eax; /* 0x1214A11F: mov dword ptr [ebp - 0x68], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1214A122: mov eax, dword ptr [ebp - 0x48] */
    { uint32_t _sa = MEM32(ebp + (-0x64)), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1214A125: sbb dword ptr [ebp - 0x64], eax */
      MEM32(ebp + (-0x64)) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A128: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1214A12A: push eax */
    PUSH32(esp, eax); /* 0x1214A12B: push eax */
    PUSH32(esp, eax); /* 0x1214A12C: push eax */
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x1214A12D: push dword ptr [edi + 0x34] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A130: call 0x12149a67 */
    RECOMP_FLAGS_IN();
L_1214A135:
    PUSH32(esp, 0); /* 0x1214A135: push 0 */
    eax = ebp + (-0x50); /* 0x1214A137: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1214A13A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1214A13B: push dword ptr [ebp - 0x58] */
    PUSH32(esp, esi); /* 0x1214A13E: push esi */
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x1214A13F: push dword ptr [edi + 0x34] */
    RECOMP_ICALL(MEM32(0x120010EC)); /* 0x1214A142: call dword ptr [0x120010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A148: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A2BC; /* 0x1214A14A: je 0x1214a2bc */
L_1214A150:
    /* cmp MEM32(ebp + (-0x50)), 0 */ /* 0x1214A150: cmp dword ptr [ebp - 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A19A; /* 0x1214A154: je 0x1214a19a */
L_1214A156:
    PUSH32(esp, 0); /* 0x1214A156: push 0 */
    eax = ebp + (-0x54); /* 0x1214A158: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1214A15B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1214A15C: push dword ptr [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x1214A15F: push esi */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A160: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x1214A163: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A165: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A135; /* 0x1214A167: jne 0x1214a135 */
L_1214A169:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214A169: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1214A16B: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1214A16C: push dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1214A16F: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A172: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A175: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A17A: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214A17D: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1214A183: push 2 */
    PUSH32(esp, ebx); /* 0x1214A185: push ebx */
    PUSH32(esp, ebx); /* 0x1214A186: push ebx */
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x1214A187: push dword ptr [edi + 0x34] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A18A: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8000u); /* 0x1214A18F: push 0x8000 */
    PUSH32(esp, ebx); /* 0x1214A194: push ebx */
    RECOMP_BACKEDGE();
    goto L_1214A0A3; /* 0x1214A195: jmp 0x1214a0a3 */
L_1214A19A:
    PUSH32(esp, 0x8000u); /* 0x1214A19A: push 0x8000 */
    PUSH32(esp, 0); /* 0x1214A19F: push 0 */
    PUSH32(esp, esi); /* 0x1214A1A1: push esi */
    RECOMP_ICALL(MEM32(0x12001104)); /* 0x1214A1A2: call dword ptr [0x12001104] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214A1A8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1214A1AA: push esi */
    PUSH32(esp, esi); /* 0x1214A1AB: push esi */
    PUSH32(esp, 0x10u); /* 0x1214A1AC: push 0x10 */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A1AE: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A1B1: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1214A1B6: push esi */
    eax = ebp + (-0x54); /* 0x1214A1B7: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1214A1BA: push eax */
    PUSH32(esp, 8); /* 0x1214A1BB: push 8 */
    eax = edi + 0x40; /* 0x1214A1BD: lea eax, [edi + 0x40] */
    PUSH32(esp, eax); /* 0x1214A1C0: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A1C1: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x1214A1C4: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A1C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A29D; /* 0x1214A1C8: je 0x1214a29d */
L_1214A1CE:
    PUSH32(esp, esi); /* 0x1214A1CE: push esi */
    eax = ebp + (-0x54); /* 0x1214A1CF: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1214A1D2: push eax */
    PUSH32(esp, 8); /* 0x1214A1D3: push 8 */
    eax = ebp + (-0x68); /* 0x1214A1D5: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x1214A1D8: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A1D9: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x1214A1DC: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A1DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A29D; /* 0x1214A1E0: je 0x1214a29d */
L_1214A1E6:
    /* test MEM8(edi + 0x48), 2 */ /* 0x1214A1E6: test byte ptr [edi + 0x48], 2 */
    _flag_a = (uint32_t)(MEM8(edi + 0x48)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A295; /* 0x1214A1EA: je 0x1214a295 */
L_1214A1F0:
    ecx = ebp + (-0xB8); /* 0x1214A1F0: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_121475A8); /* 0x1214A1F6: call 0x121475a8 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xB8); /* 0x1214A1FB: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_12147661); /* 0x1214A201: call 0x12147661 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A206: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A237; /* 0x1214A208: jne 0x1214a237 */
L_1214A20A:
    PUSH32(esp, eax); /* 0x1214A20A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1214A20B: push dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1214A20E: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A211: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A214: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A219: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214A21C: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    ebx = 0x8007000Eu; /* 0x1214A222: mov ebx, 0x8007000e */
L_1214A227:
    ecx = ebp + (-0xB8); /* 0x1214A227: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_121475CC); /* 0x1214A22D: call 0x121475cc */
    RECOMP_FLAGS_IN();
    goto L_1214A2F4; /* 0x1214A232: jmp 0x1214a2f4 */
L_1214A237:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A237: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1214A239: push eax */
    PUSH32(esp, eax); /* 0x1214A23A: push eax */
    PUSH32(esp, eax); /* 0x1214A23B: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A23C: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A23F: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x1214A244: push dword ptr [edi + 0x38] */
    ecx = ebp + (-0xB8); /* 0x1214A247: lea ecx, [ebp - 0xb8] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A24D: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12147723); /* 0x1214A250: call 0x12147723 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214A255: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1214A257: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214A28A; /* 0x1214A259: jns 0x1214a28a */
L_1214A25B:
    PUSH32(esp, 0); /* 0x1214A25B: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1214A25D: push dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1214A260: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A263: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A266: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A26B: push dword ptr [edi + 0x30] */
    esi = MEM32(0x12001150); /* 0x1214A26E: mov esi, dword ptr [0x12001150] */
    RECOMP_ICALL(esi); /* 0x1214A274: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A276: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1214A278: push eax */
    PUSH32(esp, eax); /* 0x1214A279: push eax */
    PUSH32(esp, eax); /* 0x1214A27A: push eax */
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x1214A27B: push dword ptr [edi + 0x38] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A27E: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x1214A283: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(esi); /* 0x1214A286: call esi */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214A227; /* 0x1214A288: jmp 0x1214a227 */
L_1214A28A:
    ecx = ebp + (-0xB8); /* 0x1214A28A: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_121475CC); /* 0x1214A290: call 0x121475cc */
    RECOMP_FLAGS_IN();
L_1214A295:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214A295: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM8(edi + 0x48) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(edi + 0x48) | 0x80u)) << 24;
    MEM8(edi + 0x48) = (uint8_t)(MEM8(edi + 0x48) | 0x80u); /* 0x1214A297: or byte ptr [edi + 0x48], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1214A2F4; /* 0x1214A29B: jmp 0x1214a2f4 */
L_1214A29D:
    PUSH32(esp, esi); /* 0x1214A29D: push esi */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1214A29E: push dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1214A2A1: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A2A4: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A2A7: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A2AC: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214A2AF: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    ebx = 0x8876038Fu; /* 0x1214A2B5: mov ebx, 0x8876038f */
    goto L_1214A2F4; /* 0x1214A2BA: jmp 0x1214a2f4 */
L_1214A2BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214A2BC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1214A2BE: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1214A2BF: push dword ptr [ebp - 0x48] */
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1214A2C2: push dword ptr [ebp - 0x4c] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A2C5: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A2C8: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A2CD: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214A2D0: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1214A2D6: push 2 */
    PUSH32(esp, ebx); /* 0x1214A2D8: push ebx */
    PUSH32(esp, ebx); /* 0x1214A2D9: push ebx */
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x1214A2DA: push dword ptr [edi + 0x34] */
    RECOMP_CALL(sub_12149A67); /* 0x1214A2DD: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8000u); /* 0x1214A2E2: push 0x8000 */
    PUSH32(esp, ebx); /* 0x1214A2E7: push ebx */
    PUSH32(esp, esi); /* 0x1214A2E8: push esi */
    RECOMP_ICALL(MEM32(0x12001104)); /* 0x1214A2E9: call dword ptr [0x12001104] */
    RECOMP_FLAGS_IN();
    ebx = 0x88760395u; /* 0x1214A2EF: mov ebx, 0x88760395 */
L_1214A2F4:
    /* cmp MEM32(edi + 0x30), 0xFFFFFFFFu */ /* 0x1214A2F4: cmp dword ptr [edi + 0x30], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(0x120010F0); /* 0x1214A2F8: mov esi, dword ptr [0x120010f0] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A309; /* 0x1214A2FE: je 0x1214a309 */
L_1214A300:
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1214A300: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A303: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi + 0x30) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x30) | 0xFFFFFFFFu));
    MEM32(edi + 0x30) = MEM32(edi + 0x30) | 0xFFFFFFFFu; /* 0x1214A305: or dword ptr [edi + 0x30], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214A309:
    /* cmp MEM32(edi + 0x38), 0xFFFFFFFFu */ /* 0x1214A309: cmp dword ptr [edi + 0x38], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x38)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A318; /* 0x1214A30D: je 0x1214a318 */
L_1214A30F:
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x1214A30F: push dword ptr [edi + 0x38] */
    RECOMP_ICALL(esi); /* 0x1214A312: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi + 0x38) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x38) | 0xFFFFFFFFu));
    MEM32(edi + 0x38) = MEM32(edi + 0x38) | 0xFFFFFFFFu; /* 0x1214A314: or dword ptr [edi + 0x38], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214A318:
    /* cmp MEM32(edi + 0x34), 0xFFFFFFFFu */ /* 0x1214A318: cmp dword ptr [edi + 0x34], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A327; /* 0x1214A31C: je 0x1214a327 */
L_1214A31E:
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x1214A31E: push dword ptr [edi + 0x34] */
    RECOMP_ICALL(esi); /* 0x1214A321: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi + 0x34) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x34) | 0xFFFFFFFFu));
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | 0xFFFFFFFFu; /* 0x1214A323: or dword ptr [edi + 0x34], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214A327:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214A327: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1214A32A: pop edi */
    esi = POP32_VAL(esp); /* 0x1214A32B: pop esi */
    eax = ebx; /* 0x1214A32C: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1214A32E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214A330: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1214A331: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214A336: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214A337: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214A33F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A33Fu);

L_1214A33F:
    edi = edi; /* 0x1214A33F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A341: push ebp */
    ebp = esp; /* 0x1214A342: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1214A344: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1214A348: push esi */
    esi = ecx; /* 0x1214A349: mov esi, ecx */
    MEM32(esi) = 0x12011418u; /* 0x1214A34B: mov dword ptr [esi], 0x12011418 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A35A; /* 0x1214A351: je 0x1214a35a */
L_1214A353:
    PUSH32(esp, esi); /* 0x1214A353: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1214A354: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214A359: pop ecx */
L_1214A35A:
    eax = esi; /* 0x1214A35A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214A35C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214A35D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214A35E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214A366(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A366u);

L_1214A366:
    edi = edi; /* 0x1214A366: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A368: push ebp */
    ebp = esp; /* 0x1214A369: mov ebp, esp */
    PUSH32(esp, 0x120014BCu); /* 0x1214A36B: push 0x120014bc */
    PUSH32(esp, 0x18u); /* 0x1214A370: push 0x18 */
    RECOMP_CALL(sub_12018970); /* 0x1214A372: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1214A377: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x1214A379: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214A37A: pop ecx */
    /* test edx, edx */ /* 0x1214A37B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A39B; /* 0x1214A37D: je 0x1214a39b */
L_1214A37F:
    ecx = MEM32(ebp + 0x8); /* 0x1214A37F: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x10) = MEM32(edx + 0x10) & 0; /* 0x1214A382: and dword ptr [edx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x14) = MEM32(edx + 0x14) & 0; /* 0x1214A386: and dword ptr [edx + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x4) = ecx; /* 0x1214A38A: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1214A38D: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x1201142Cu; /* 0x1214A390: mov dword ptr [edx], 0x1201142c */
    MEM32(edx + 0x8) = ecx; /* 0x1214A396: mov dword ptr [edx + 8], ecx */
    goto L_1214A39D; /* 0x1214A399: jmp 0x1214a39d */
L_1214A39B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214A39B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214A39D:
    eax = MEM32(ebp + 0x10); /* 0x1214A39D: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = edx; /* 0x1214A3A0: mov dword ptr [eax], edx */
    /* test edx, edx */ /* 0x1214A3A2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A3AD; /* 0x1214A3A4: jne 0x1214a3ad */
L_1214A3A6:
    eax = 0x8007000Eu; /* 0x1214A3A6: mov eax, 0x8007000e */
    goto L_1214A3AF; /* 0x1214A3AB: jmp 0x1214a3af */
L_1214A3AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A3AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214A3AF:
    ebp = POP32_VAL(esp); /* 0x1214A3AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214A3B0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214A3B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A3B8u);

L_1214A3B8:
    edi = edi; /* 0x1214A3B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A3BA: push ebp */
    ebp = esp; /* 0x1214A3BB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214A3BD: push ecx */
    PUSH32(esp, ecx); /* 0x1214A3BE: push ecx */
    PUSH32(esp, ebx); /* 0x1214A3BF: push ebx */
    PUSH32(esp, esi); /* 0x1214A3C0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214A3C1: mov esi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x1214A3C4: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x1214A3C6: push edi */
    ecx = esi; /* 0x1214A3C7: mov ecx, esi */
    RECOMP_CALL(sub_12146B31); /* 0x1214A3C9: call 0x12146b31 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0xC); /* 0x1214A3CE: mov edi, dword ptr [esi + 0xc] */
    edx = eax; /* 0x1214A3D1: mov edx, eax */
    eax = MEM32(esi); /* 0x1214A3D3: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214A3D5: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1214A3D8: mov dword ptr [ebp - 8], edi */
    /* test edx, edx */ /* 0x1214A3DB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A3E9; /* 0x1214A3DD: jne 0x1214a3e9 */
L_1214A3DF:
    eax = 0x80004005u; /* 0x1214A3DF: mov eax, 0x80004005 */
    goto L_1214A509; /* 0x1214A3E4: jmp 0x1214a509 */
L_1214A3E9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1214A3E9: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1214A3ED: mov ecx, edx */
    esi = ecx + 0x1; /* 0x1214A3EF: lea esi, [ecx + 1] */
L_1214A3F2:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214A3F2: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A3F4: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214A3F5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A3F2; /* 0x1214A3F7: jne 0x1214a3f2 */
L_1214A3F9:
    PUSH32(esp, 0); /* 0x1214A3F9: push 0 */
    eax = ebp + 0x8; /* 0x1214A3FB: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214A3FE: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1214A3FF: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1214A401: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1214A404: push eax */
    PUSH32(esp, edx); /* 0x1214A405: push edx */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A406: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x1214A409: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A40F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A41D; /* 0x1214A411: jne 0x1214a41d */
L_1214A413:
    eax = 0x8007000Eu; /* 0x1214A413: mov eax, 0x8007000e */
    goto L_1214A509; /* 0x1214A418: jmp 0x1214a509 */
L_1214A41D:
    edx = MEM32(ebp + (-0x4)); /* 0x1214A41D: mov edx, dword ptr [ebp - 4] */
    ecx = edx; /* 0x1214A420: mov ecx, edx */
    esi = ecx + 0x1; /* 0x1214A422: lea esi, [ecx + 1] */
L_1214A425:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214A425: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A427: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214A428: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A425; /* 0x1214A42A: jne 0x1214a425 */
L_1214A42C:
    PUSH32(esp, 0); /* 0x1214A42C: push 0 */
    eax = ebp + 0x8; /* 0x1214A42E: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214A431: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1214A432: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1214A434: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1214A437: push eax */
    PUSH32(esp, edx); /* 0x1214A438: push edx */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A439: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x1214A43C: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A442: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A413; /* 0x1214A444: je 0x1214a413 */
L_1214A446:
    /* test edi, edi */ /* 0x1214A446: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A4E5; /* 0x1214A448: je 0x1214a4e5 */
L_1214A44E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214A44E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), esi */ /* 0x1214A450: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214A4E5; /* 0x1214A452: jbe 0x1214a4e5 */
L_1214A458:
    eax = MEM32(edi + 0xC); /* 0x1214A458: mov eax, dword ptr [edi + 0xc] */
    edi = MEM32(eax + esi * 4); /* 0x1214A45B: mov edi, dword ptr [eax + esi*4] */
    /* cmp MEM32(edi), 0 */ /* 0x1214A45E: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A488; /* 0x1214A461: je 0x1214a488 */
L_1214A463:
    PUSH32(esp, 0); /* 0x1214A463: push 0 */
    eax = ebp + 0x8; /* 0x1214A465: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214A468: push eax */
    PUSH32(esp, 1); /* 0x1214A469: push 1 */
    PUSH32(esp, 0x120111D8u); /* 0x1214A46B: push 0x120111d8 */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A470: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x1214A473: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A479: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A413; /* 0x1214A47B: je 0x1214a413 */
L_1214A47D:
    PUSH32(esp, 0); /* 0x1214A47D: push 0 */
    eax = ebp + 0x8; /* 0x1214A47F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214A482: push eax */
    PUSH32(esp, 4); /* 0x1214A483: push 4 */
    PUSH32(esp, edi); /* 0x1214A485: push edi */
    goto L_1214A4C8; /* 0x1214A486: jmp 0x1214a4c8 */
L_1214A488:
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x1214A488: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A4D9; /* 0x1214A48C: je 0x1214a4d9 */
L_1214A48E:
    PUSH32(esp, 0); /* 0x1214A48E: push 0 */
    eax = ebp + 0x8; /* 0x1214A490: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214A493: push eax */
    PUSH32(esp, 1); /* 0x1214A494: push 1 */
    PUSH32(esp, 0x120111D9u); /* 0x1214A496: push 0x120111d9 */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A49B: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x1214A49E: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A4A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A413; /* 0x1214A4A6: je 0x1214a413 */
L_1214A4AC:
    ecx = MEM32(edi + 0x4); /* 0x1214A4AC: mov ecx, dword ptr [edi + 4] */
    edx = ecx + 0x1; /* 0x1214A4AF: lea edx, [ecx + 1] */
L_1214A4B2:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214A4B2: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A4B4: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214A4B5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A4B2; /* 0x1214A4B7: jne 0x1214a4b2 */
L_1214A4B9:
    PUSH32(esp, 0); /* 0x1214A4B9: push 0 */
    eax = ebp + 0x8; /* 0x1214A4BB: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214A4BE: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214A4BF: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1214A4C1: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1214A4C4: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1214A4C5: push dword ptr [edi + 4] */
L_1214A4C8:
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A4C8: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x1214A4CB: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A4D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A413; /* 0x1214A4D3: je 0x1214a413 */
L_1214A4D9:
    edi = MEM32(ebp + (-0x8)); /* 0x1214A4D9: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214A4DC: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x1214A4DD: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214A458; /* 0x1214A4DF: jb 0x1214a458 */
L_1214A4E5:
    PUSH32(esp, 0); /* 0x1214A4E5: push 0 */
    eax = ebp + 0x8; /* 0x1214A4E7: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214A4EA: push eax */
    PUSH32(esp, 1); /* 0x1214A4EB: push 1 */
    PUSH32(esp, 0x120111DAu); /* 0x1214A4ED: push 0x120111da */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A4F2: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x1214A4F5: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1214A4FB: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1214A4FD: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x1214A4FF: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x1214A504: add eax, 0x8007000e */
    _flag_k = FK_ADD;
L_1214A509:
    edi = POP32_VAL(esp); /* 0x1214A509: pop edi */
    esi = POP32_VAL(esp); /* 0x1214A50A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214A50B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214A50C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214A50D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214A515(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A515u);

L_1214A515:
    edi = edi; /* 0x1214A515: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A517: push ebp */
    ebp = esp; /* 0x1214A518: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214A51A: push esi */
    PUSH32(esp, edi); /* 0x1214A51B: push edi */
    edi = ecx; /* 0x1214A51C: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214A51E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x20), esi */ /* 0x1214A520: cmp dword ptr [edi + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214A540; /* 0x1214A523: jbe 0x1214a540 */
L_1214A525:
    eax = MEM32(edi + 0x2C); /* 0x1214A525: mov eax, dword ptr [edi + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214A528: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x1214A52B: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214A52E: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1214A531: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1214A533: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1214A536: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A548; /* 0x1214A538: jne 0x1214a548 */
L_1214A53A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214A53A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x20) */ /* 0x1214A53B: cmp esi, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214A525; /* 0x1214A53E: jb 0x1214a525 */
L_1214A540:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1214A540: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1214A542:
    edi = POP32_VAL(esp); /* 0x1214A542: pop edi */
    esi = POP32_VAL(esp); /* 0x1214A543: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214A544: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214A545: ret 8 */
L_1214A548:
    SET_LO8(eax, 1); /* 0x1214A548: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1214A542; /* 0x1214A54A: jmp 0x1214a542 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214A551(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A551u);

L_1214A551:
    edi = edi; /* 0x1214A551: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A553: push ebp */
    ebp = esp; /* 0x1214A554: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214A556: push esi */
    PUSH32(esp, edi); /* 0x1214A557: push edi */
    edi = ecx; /* 0x1214A558: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214A55A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x20), esi */ /* 0x1214A55C: cmp dword ptr [edi + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214A57C; /* 0x1214A55F: jbe 0x1214a57c */
L_1214A561:
    eax = MEM32(edi + 0x2C); /* 0x1214A561: mov eax, dword ptr [edi + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214A564: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x1214A567: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214A56A: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1214A56D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1214A56F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1214A572: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A584; /* 0x1214A574: jne 0x1214a584 */
L_1214A576:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214A576: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x20) */ /* 0x1214A577: cmp esi, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214A561; /* 0x1214A57A: jb 0x1214a561 */
L_1214A57C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1214A57C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1214A57E:
    edi = POP32_VAL(esp); /* 0x1214A57E: pop edi */
    esi = POP32_VAL(esp); /* 0x1214A57F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214A580: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214A581: ret 8 */
L_1214A584:
    SET_LO8(eax, 1); /* 0x1214A584: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1214A57E; /* 0x1214A586: jmp 0x1214a57e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214A58D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A58Du);

L_1214A58D:
    edi = edi; /* 0x1214A58D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A58F: push ebp */
    ebp = esp; /* 0x1214A590: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1214A592: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1214A593: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebx + 0xC); /* 0x1214A596: mov edx, dword ptr [ebx + 0xc] */
    /* test MEM8(edx + 0x48), 0x80u */ /* 0x1214A599: test byte ptr [edx + 0x48], 0x80 */
    _flag_a = (uint32_t)(MEM8(edx + 0x48)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A5A6; /* 0x1214A59D: je 0x1214a5a6 */
L_1214A59F:
    eax = 0x88760384u; /* 0x1214A59F: mov eax, 0x88760384 */
    goto L_1214A5EC; /* 0x1214A5A4: jmp 0x1214a5ec */
L_1214A5A6:
    ecx = MEM32(ebp + 0xC); /* 0x1214A5A6: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x1214A5A9: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1214A5AC: push esi */
    /* test ecx, ecx */ /* 0x1214A5AD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A5B6; /* 0x1214A5AF: je 0x1214a5b6 */
L_1214A5B1:
    /* cmp MEM8(ecx), 0 */ /* 0x1214A5B1: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214A5D2; /* 0x1214A5B4: jne 0x1214a5d2 */
L_1214A5B6:
    /* test eax, eax */ /* 0x1214A5B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A5E6; /* 0x1214A5B8: je 0x1214a5e6 */
L_1214A5BA:
    PUSH32(esp, edi); /* 0x1214A5BA: push edi */
    PUSH32(esp, 4); /* 0x1214A5BB: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214A5BD: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214A5BE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x8); /* 0x1214A5C0: mov ebx, dword ptr [ebp + 8] */
    edi = 0x12018324u; /* 0x1214A5C3: mov edi, 0x12018324 */
    esi = eax; /* 0x1214A5C8: mov esi, eax */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214A5CA: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    edi = POP32_VAL(esp); /* 0x1214A5CC: pop edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214A5E6; /* 0x1214A5CD: je 0x1214a5e6 */
L_1214A5CF:
    ecx = MEM32(ebp + 0xC); /* 0x1214A5CF: mov ecx, dword ptr [ebp + 0xc] */
L_1214A5D2:
    /* test eax, eax */ /* 0x1214A5D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A5F1; /* 0x1214A5D4: je 0x1214a5f1 */
L_1214A5D6:
    ecx = ebp + 0x8; /* 0x1214A5D6: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1214A5D9: push ecx */
    PUSH32(esp, eax); /* 0x1214A5DA: push eax */
    ecx = edx; /* 0x1214A5DB: mov ecx, edx */
    RECOMP_CALL(sub_1214A551); /* 0x1214A5DD: call 0x1214a551 */
    RECOMP_FLAGS_IN();
L_1214A5E2:
    /* test LO8(eax), LO8(eax) */ /* 0x1214A5E2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A5FF; /* 0x1214A5E4: jne 0x1214a5ff */
L_1214A5E6:
    eax = 0x88760385u; /* 0x1214A5E6: mov eax, 0x88760385 */
L_1214A5EB:
    esi = POP32_VAL(esp); /* 0x1214A5EB: pop esi */
L_1214A5EC:
    ebx = POP32_VAL(esp); /* 0x1214A5EC: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214A5ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214A5EE: ret 0xc */
L_1214A5F1:
    eax = ebp + 0x8; /* 0x1214A5F1: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214A5F4: push eax */
    PUSH32(esp, ecx); /* 0x1214A5F5: push ecx */
    ecx = edx; /* 0x1214A5F6: mov ecx, edx */
    RECOMP_CALL(sub_1214A515); /* 0x1214A5F8: call 0x1214a515 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214A5E2; /* 0x1214A5FD: jmp 0x1214a5e2 */
L_1214A5FF:
    eax = ebp + 0xC; /* 0x1214A5FF: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1214A602: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214A603: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1214A606: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_1214A366); /* 0x1214A609: call 0x1214a366 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A60E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214A5EB; /* 0x1214A610: js 0x1214a5eb */
L_1214A612:
    esi = MEM32(ebp + 0xC); /* 0x1214A612: mov esi, dword ptr [ebp + 0xc] */
    eax = ebp + 0xC; /* 0x1214A615: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1214A618: push eax */
    ecx = ebx + 0x38; /* 0x1214A619: lea ecx, [ebx + 0x38] */
    MEM32(ebp + 0xC) = esi; /* 0x1214A61C: mov dword ptr [ebp + 0xc], esi */
    RECOMP_CALL(sub_1214AE6F); /* 0x1214A61F: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A624: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A62C; /* 0x1214A626: je 0x1214a62c */
L_1214A628:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A628: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1214A5EB; /* 0x1214A62A: jmp 0x1214a5eb */
L_1214A62C:
    /* test esi, esi */ /* 0x1214A62C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A638; /* 0x1214A62E: je 0x1214a638 */
L_1214A630:
    eax = MEM32(esi); /* 0x1214A630: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1214A632: push 1 */
    ecx = esi; /* 0x1214A634: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1214A636: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1214A638:
    eax = 0x8007000Eu; /* 0x1214A638: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1214A5EB; /* 0x1214A63D: jmp 0x1214a5eb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214A644(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A644u);

L_1214A644:
    edi = edi; /* 0x1214A644: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A646: push ebp */
    ebp = esp; /* 0x1214A647: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1214A649: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = 0x12011418u; /* 0x1214A64C: mov dword ptr [ecx + 4], 0x12011418 */
    MEM32(ecx + 0xC) = eax; /* 0x1214A653: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0x14); /* 0x1214A656: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x10) = eax; /* 0x1214A659: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(ebp + 0x18); /* 0x1214A65C: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1214A65F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1214A660: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1214A663: push edi */
    MEM32(ecx) = 0x12011454u; /* 0x1214A664: mov dword ptr [ecx], 0x12011454 */
    MEM32(ecx + 0x4) = 0x12011440u; /* 0x1214A66A: mov dword ptr [ecx + 4], 0x12011440 */
    MEM32(ecx + 0x8) = 1; /* 0x1214A671: mov dword ptr [ecx + 8], 1 */
    edi = ecx + 0x14; /* 0x1214A678: lea edi, [ecx + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214A67B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214A67C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214A67D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214A67E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ecx + 0x28) = eax; /* 0x1214A67F: mov dword ptr [ecx + 0x28], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1214A682: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ecx + 0x2C) = eax; /* 0x1214A685: mov dword ptr [ecx + 0x2c], eax */
    eax = MEM32(ebp + 0x20); /* 0x1214A688: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ecx + 0x30) = eax; /* 0x1214A68B: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(ebp + 0xC); /* 0x1214A68E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x34) = eax; /* 0x1214A691: mov dword ptr [ecx + 0x34], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A694: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x38) = eax; /* 0x1214A696: mov dword ptr [ecx + 0x38], eax */
    MEM32(ecx + 0x3C) = eax; /* 0x1214A699: mov dword ptr [ecx + 0x3c], eax */
    MEM32(ecx + 0x44) = eax; /* 0x1214A69C: mov dword ptr [ecx + 0x44], eax */
    MEM32(ecx + 0x40) = 0xAu; /* 0x1214A69F: mov dword ptr [ecx + 0x40], 0xa */
    edi = POP32_VAL(esp); /* 0x1214A6A6: pop edi */
    MEM32(ecx + 0x48) = eax; /* 0x1214A6A7: mov dword ptr [ecx + 0x48], eax */
    MEM32(ecx + 0x4C) = eax; /* 0x1214A6AA: mov dword ptr [ecx + 0x4c], eax */
    eax = ecx; /* 0x1214A6AD: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x1214A6AF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214A6B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1214A6B1: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1214A6C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A6C6u);

L_1214A6C6:
    edi = edi; /* 0x1214A6C6: mov edi, edi */
    PUSH32(esp, esi); /* 0x1214A6C8: push esi */
    esi = ecx; /* 0x1214A6C9: mov esi, ecx */
    /* cmp MEM32(esi + 0x34), 0 */ /* 0x1214A6CB: cmp dword ptr [esi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x12011454u; /* 0x1214A6CF: mov dword ptr [esi], 0x12011454 */
    MEM32(esi + 0x4) = 0x12011440u; /* 0x1214A6D5: mov dword ptr [esi + 4], 0x12011440 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A6E7; /* 0x1214A6DC: je 0x1214a6e7 */
L_1214A6DE:
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1214A6DE: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_121BF586); /* 0x1214A6E1: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214A6E6: pop ecx */
L_1214A6E7:
    ecx = esi + 0x38; /* 0x1214A6E7: lea ecx, [esi + 0x38] */
    RECOMP_CALL(sub_121436A4); /* 0x1214A6EA: call 0x121436a4 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = 0x12011418u; /* 0x1214A6EF: mov dword ptr [esi + 4], 0x12011418 */
    esi = POP32_VAL(esp); /* 0x1214A6F6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214A6F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214A6FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A6FDu);

L_1214A6FD:
    edi = edi; /* 0x1214A6FD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A6FF: push ebp */
    ebp = esp; /* 0x1214A700: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214A702: push ecx */
    PUSH32(esp, esi); /* 0x1214A703: push esi */
    PUSH32(esp, edi); /* 0x1214A704: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214A705: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x1214A707: mov esi, edi */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1214A709: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214A746; /* 0x1214A70C: je 0x1214a746 */
L_1214A70E:
    ecx = MEM32(ebp + 0xC); /* 0x1214A70E: mov ecx, dword ptr [ebp + 0xc] */
    edx = ecx + 0x1; /* 0x1214A711: lea edx, [ecx + 1] */
L_1214A714:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214A714: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A716: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214A717: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A714; /* 0x1214A719: jne 0x1214a714 */
L_1214A71B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214A71B: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1214A71D: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1214A720: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214A721: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_121BF524); /* 0x1214A724: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214A729: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1214A72B: pop ecx */
    /* test esi, esi */ /* 0x1214A72C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A737; /* 0x1214A72E: jne 0x1214a737 */
L_1214A730:
    eax = 0x8007000Eu; /* 0x1214A730: mov eax, 0x8007000e */
    goto L_1214A78C; /* 0x1214A735: jmp 0x1214a78c */
L_1214A737:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1214A737: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214A73A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1214A73D: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x1214A73E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214A743: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214A746:
    PUSH32(esp, 0x120014BCu); /* 0x1214A746: push 0x120014bc */
    PUSH32(esp, 0x50u); /* 0x1214A74B: push 0x50 */
    RECOMP_CALL(sub_12018970); /* 0x1214A74D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214A752: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214A753: pop ecx */
    /* test eax, eax */ /* 0x1214A754: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A774; /* 0x1214A756: je 0x1214a774 */
L_1214A758:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1214A758: push dword ptr [ebp + 0x20] */
    ecx = eax; /* 0x1214A75B: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1214A75D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1214A760: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1214A763: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1214A766: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1214A769: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214A76A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214A644); /* 0x1214A76D: call 0x1214a644 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1214A772: mov edi, eax */
L_1214A774:
    eax = MEM32(ebp + 0x24); /* 0x1214A774: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax) = edi; /* 0x1214A777: mov dword ptr [eax], edi */
    /* test edi, edi */ /* 0x1214A779: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A78A; /* 0x1214A77B: jne 0x1214a78a */
L_1214A77D:
    /* test esi, esi */ /* 0x1214A77D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A730; /* 0x1214A77F: je 0x1214a730 */
L_1214A781:
    PUSH32(esp, esi); /* 0x1214A781: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x1214A782: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214A787: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1214A730; /* 0x1214A788: jmp 0x1214a730 */
L_1214A78A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A78A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214A78C:
    edi = POP32_VAL(esp); /* 0x1214A78C: pop edi */
    esi = POP32_VAL(esp); /* 0x1214A78D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214A78E: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1214A78F: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1214A797(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A797u);

L_1214A797:
    edi = edi; /* 0x1214A797: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A799: push ebp */
    ebp = esp; /* 0x1214A79A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1214A79C: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214A79F: push ebx */
    PUSH32(esp, esi); /* 0x1214A7A0: push esi */
    esi = MEM32(0x120010DC); /* 0x1214A7A1: mov esi, dword ptr [0x120010dc] */
    PUSH32(esp, edi); /* 0x1214A7A7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1214A7A8: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A7AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1214A7AD: push eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1214A7AE: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214A7B1: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x1214A7B4: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A7B7: push eax */
    PUSH32(esp, 0x10u); /* 0x1214A7B8: push 0x10 */
    eax = edi + 0x8; /* 0x1214A7BA: lea eax, [edi + 8] */
    ebx = ecx; /* 0x1214A7BD: mov ebx, ecx */
    PUSH32(esp, eax); /* 0x1214A7BF: push eax */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A7C0: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A7C3: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A7C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A7D3; /* 0x1214A7C7: jne 0x1214a7d3 */
L_1214A7C9:
    eax = 0x8007000Eu; /* 0x1214A7C9: mov eax, 0x8007000e */
    goto L_1214A98A; /* 0x1214A7CE: jmp 0x1214a98a */
L_1214A7D3:
    ecx = MEM32(edi + 0x4); /* 0x1214A7D3: mov ecx, dword ptr [edi + 4] */
    edx = ecx + 0x1; /* 0x1214A7D6: lea edx, [ecx + 1] */
L_1214A7D9:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214A7D9: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A7DB: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214A7DC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A7D9; /* 0x1214A7DE: jne 0x1214a7d9 */
L_1214A7E0:
    PUSH32(esp, 0); /* 0x1214A7E0: push 0 */
    eax = ebp + (-0x4); /* 0x1214A7E2: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A7E5: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214A7E6: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1214A7E8: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1214A7EB: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1214A7EC: push dword ptr [edi + 4] */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A7EF: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A7F2: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A7F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A7C9; /* 0x1214A7F6: je 0x1214a7c9 */
L_1214A7F8:
    eax = MEM32(edi + 0x1C); /* 0x1214A7F8: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214A7FB: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1214A7FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A84D; /* 0x1214A800: je 0x1214a84d */
L_1214A802:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1214A802: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), 0 */ /* 0x1214A806: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214A84D; /* 0x1214A809: jbe 0x1214a84d */
L_1214A80B:
    PUSH32(esp, 0); /* 0x1214A80B: push 0 */
    eax = ebp + (-0x4); /* 0x1214A80D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A810: push eax */
    PUSH32(esp, 1); /* 0x1214A811: push 1 */
    PUSH32(esp, 0x120111D8u); /* 0x1214A813: push 0x120111d8 */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A818: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A81B: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A81D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A7C9; /* 0x1214A81F: je 0x1214a7c9 */
L_1214A821:
    eax = MEM32(ebp + (-0x8)); /* 0x1214A821: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0xC); /* 0x1214A824: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1214A827: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x1214A82A: push dword ptr [eax + ecx*4] */
    ecx = ebx; /* 0x1214A82D: mov ecx, ebx */
    RECOMP_CALL(sub_1214A3B8); /* 0x1214A82F: call 0x1214a3b8 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1214A834: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x1214A837: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214A98A; /* 0x1214A839: js 0x1214a98a */
L_1214A83F:
    ecx = MEM32(ebp + 0x8); /* 0x1214A83F: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x1214A842: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A845: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x1214A846: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, MEM32(eax) */ /* 0x1214A849: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214A80B; /* 0x1214A84B: jb 0x1214a80b */
L_1214A84D:
    PUSH32(esp, 0); /* 0x1214A84D: push 0 */
    eax = ebp + (-0x4); /* 0x1214A84F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A852: push eax */
    PUSH32(esp, 1); /* 0x1214A853: push 1 */
    PUSH32(esp, 0x120111DAu); /* 0x1214A855: push 0x120111da */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A85A: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A85D: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A85F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A7C9; /* 0x1214A861: je 0x1214a7c9 */
L_1214A867:
    /* cmp MEM32(edi + 0x24), 0 */ /* 0x1214A867: cmp dword ptr [edi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214A88C; /* 0x1214A86B: jne 0x1214a88c */
L_1214A86D:
    PUSH32(esp, 0); /* 0x1214A86D: push 0 */
    eax = ebp + (-0x4); /* 0x1214A86F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A872: push eax */
    PUSH32(esp, 1); /* 0x1214A873: push 1 */
    PUSH32(esp, 0x120111DBu); /* 0x1214A875: push 0x120111db */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A87A: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A87D: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A87F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A987; /* 0x1214A881: jne 0x1214a987 */
L_1214A887:
    RECOMP_BACKEDGE();
    goto L_1214A7C9; /* 0x1214A887: jmp 0x1214a7c9 */
L_1214A88C:
    eax = MEM32(edi + 0x20); /* 0x1214A88C: mov eax, dword ptr [edi + 0x20] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1214A88F: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x1214A892: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A96C; /* 0x1214A894: je 0x1214a96c */
L_1214A89A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214A89A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214A89C: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM32(eax), ecx */ /* 0x1214A89F: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214A96C; /* 0x1214A8A1: jbe 0x1214a96c */
L_1214A8A7:
    eax = MEM32(eax + 0xC); /* 0x1214A8A7: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x1214A8AA: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + 0x8) = eax; /* 0x1214A8AD: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214A8B0: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 4); /* 0x1214A8B3: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214A8B5: pop ecx */
    esi = eax; /* 0x1214A8B6: mov esi, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1214A8B8: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214A8BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1214A8BD: push eax */
    eax = ebp + (-0x4); /* 0x1214A8BE: lea eax, [ebp - 4] */
    edi = 0x12018324u; /* 0x1214A8C1: mov edi, 0x12018324 */
    PUSH32(esp, eax); /* 0x1214A8C6: push eax */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214A8C7: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    esi = MEM32(0x120010DC); /* 0x1214A8C9: mov esi, dword ptr [0x120010dc] */
    PUSH32(esp, 1); /* 0x1214A8CF: push 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214A91D; /* 0x1214A8D1: je 0x1214a91d */
L_1214A8D3:
    PUSH32(esp, 0x120111D8u); /* 0x1214A8D3: push 0x120111d8 */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A8D8: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A8DB: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A8DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A7C9; /* 0x1214A8DF: je 0x1214a7c9 */
L_1214A8E5:
    eax = MEM32(ebp + 0x8); /* 0x1214A8E5: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1214A8E8: mov edx, dword ptr [eax] */
    ecx = edx; /* 0x1214A8EA: mov ecx, edx */
    edi = ecx + 0x1; /* 0x1214A8EC: lea edi, [ecx + 1] */
L_1214A8EF:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214A8EF: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A8F1: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214A8F2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A8EF; /* 0x1214A8F4: jne 0x1214a8ef */
L_1214A8F6:
    PUSH32(esp, 0); /* 0x1214A8F6: push 0 */
    eax = ebp + (-0x4); /* 0x1214A8F8: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A8FB: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1214A8FC: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1214A8FE: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1214A901: push eax */
    PUSH32(esp, edx); /* 0x1214A902: push edx */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A903: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A906: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A908: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A7C9; /* 0x1214A90A: je 0x1214a7c9 */
L_1214A910:
    PUSH32(esp, 0); /* 0x1214A910: push 0 */
    eax = ebp + (-0x4); /* 0x1214A912: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A915: push eax */
    PUSH32(esp, 0x10u); /* 0x1214A916: push 0x10 */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1214A918: push dword ptr [ebp - 0x10] */
    goto L_1214A94D; /* 0x1214A91B: jmp 0x1214a94d */
L_1214A91D:
    PUSH32(esp, 0x120111D9u); /* 0x1214A91D: push 0x120111d9 */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A922: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A925: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A927: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A7C9; /* 0x1214A929: je 0x1214a7c9 */
L_1214A92F:
    eax = MEM32(ebp + 0x8); /* 0x1214A92F: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1214A932: mov edx, dword ptr [eax] */
    ecx = edx; /* 0x1214A934: mov ecx, edx */
    edi = ecx + 0x1; /* 0x1214A936: lea edi, [ecx + 1] */
L_1214A939:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214A939: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A93B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214A93C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214A939; /* 0x1214A93E: jne 0x1214a939 */
L_1214A940:
    PUSH32(esp, 0); /* 0x1214A940: push 0 */
    eax = ebp + (-0x4); /* 0x1214A942: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A945: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1214A946: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1214A948: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1214A94B: push eax */
    PUSH32(esp, edx); /* 0x1214A94C: push edx */
L_1214A94D:
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A94D: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A950: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A952: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A7C9; /* 0x1214A954: je 0x1214a7c9 */
L_1214A95A:
    ecx = MEM32(ebp + (-0x8)); /* 0x1214A95A: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x14)); /* 0x1214A95D: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214A960: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214A961: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, MEM32(eax) */ /* 0x1214A964: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214A8A7; /* 0x1214A966: jb 0x1214a8a7 */
L_1214A96C:
    PUSH32(esp, 0); /* 0x1214A96C: push 0 */
    eax = ebp + (-0x4); /* 0x1214A96E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214A971: push eax */
    PUSH32(esp, 1); /* 0x1214A972: push 1 */
    PUSH32(esp, 0x120111DAu); /* 0x1214A974: push 0x120111da */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1214A979: push dword ptr [ebx + 0x30] */
    RECOMP_ICALL(esi); /* 0x1214A97C: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214A97E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x8007000Eu; /* 0x1214A980: mov eax, 0x8007000e */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A98A; /* 0x1214A985: je 0x1214a98a */
L_1214A987:
    eax = MEM32(ebp + (-0xC)); /* 0x1214A987: mov eax, dword ptr [ebp - 0xc] */
L_1214A98A:
    edi = POP32_VAL(esp); /* 0x1214A98A: pop edi */
    esi = POP32_VAL(esp); /* 0x1214A98B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214A98C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214A98D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214A98E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214A996(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A996u);

L_1214A996:
    edi = edi; /* 0x1214A996: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A998: push ebp */
    ebp = esp; /* 0x1214A999: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214A99B: push esi */
    esi = ecx; /* 0x1214A99C: mov esi, ecx */
    RECOMP_CALL(sub_1214A6C6); /* 0x1214A99E: call 0x1214a6c6 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1214A9A3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214A9B0; /* 0x1214A9A7: je 0x1214a9b0 */
L_1214A9A9:
    PUSH32(esp, esi); /* 0x1214A9A9: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1214A9AA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214A9AF: pop ecx */
L_1214A9B0:
    eax = esi; /* 0x1214A9B0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214A9B2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214A9B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214A9B4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214A9BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214A9BCu);

L_1214A9BC:
    edi = edi; /* 0x1214A9BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214A9BE: push ebp */
    ebp = esp; /* 0x1214A9BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1214A9C1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214A9C4: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214A9C5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x10; /* 0x1214A9C7: lea eax, [ecx + 0x10] */
    edx = ebx; /* 0x1214A9CA: mov edx, ebx */
    PUSH32(esp, esi); /* 0x1214A9CC: push esi */
    PUSH32(esp, edi); /* 0x1214A9CD: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214A9CE: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214A9D1: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(eax), edx */ /* 0x1214A9D4: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214AA03; /* 0x1214A9D6: jbe 0x1214aa03 */
L_1214A9D8:
    esi = MEM32(ebp + 0x8); /* 0x1214A9D8: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x1C); /* 0x1214A9DB: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1214A9DE: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = esi; /* 0x1214A9E1: mov dword ptr [ebp - 0xc], esi */
L_1214A9E4:
    edi = MEM32(eax); /* 0x1214A9E4: mov edi, dword ptr [eax] */
    PUSH32(esp, 4); /* 0x1214A9E6: push 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1214A9E8: add edi, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1214A9EB: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214A9EC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214A9EE: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214AA33; /* 0x1214A9F0: je 0x1214aa33 */
L_1214A9F2:
    ecx = MEM32(ebp + (-0x8)); /* 0x1214A9F2: mov ecx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0xC)); /* 0x1214A9F5: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214A9F8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214A9F9: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ecx) */ /* 0x1214A9FC: cmp edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214A9E4; /* 0x1214A9FE: jb 0x1214a9e4 */
L_1214AA00:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214AA00: mov ecx, dword ptr [ebp - 4] */
L_1214AA03:
    edi = MEM32(ebp + 0x8); /* 0x1214AA03: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x1C); /* 0x1214AA06: mov esi, dword ptr [edi + 0x1c] */
    /* test esi, esi */ /* 0x1214AA09: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AA37; /* 0x1214AA0B: je 0x1214aa37 */
L_1214AA0D:
    /* cmp MEM32(esi), ebx */ /* 0x1214AA0D: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214AA37; /* 0x1214AA0F: jbe 0x1214aa37 */
L_1214AA11:
    eax = MEM32(esi + 0xC); /* 0x1214AA11: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + ebx * 4); /* 0x1214AA14: mov eax, dword ptr [eax + ebx*4] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1214AA17: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214AA29; /* 0x1214AA1B: je 0x1214aa29 */
L_1214AA1D:
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1214AA1D: push dword ptr [eax + 8] */
    RECOMP_CALL(sub_1214A9BC); /* 0x1214AA20: call 0x1214a9bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AA25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214AA54; /* 0x1214AA27: js 0x1214aa54 */
L_1214AA29:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214AA29: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi) */ /* 0x1214AA2A: cmp ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214AA37; /* 0x1214AA2C: jae 0x1214aa37 */
L_1214AA2E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214AA2E: mov ecx, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1214AA11; /* 0x1214AA31: jmp 0x1214aa11 */
L_1214AA33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214AA33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214AA54; /* 0x1214AA35: jmp 0x1214aa54 */
L_1214AA37:
    ecx = MEM32(ebp + (-0x8)); /* 0x1214AA37: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1214AA3A: push edi */
    RECOMP_CALL(sub_12146E72); /* 0x1214AA3B: call 0x12146e72 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AA40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214AA4B; /* 0x1214AA42: jne 0x1214aa4b */
L_1214AA44:
    eax = 0x8007000Eu; /* 0x1214AA44: mov eax, 0x8007000e */
    goto L_1214AA54; /* 0x1214AA49: jmp 0x1214aa54 */
L_1214AA4B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214AA4B: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1214AA4E: push edi */
    RECOMP_CALL(sub_1214A797); /* 0x1214AA4F: call 0x1214a797 */
    RECOMP_FLAGS_IN();
L_1214AA54:
    edi = POP32_VAL(esp); /* 0x1214AA54: pop edi */
    esi = POP32_VAL(esp); /* 0x1214AA55: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214AA56: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214AA57: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214AA58: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214AA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214AA60u);

L_1214AA60:
    edi = edi; /* 0x1214AA60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214AA62: push ebp */
    ebp = esp; /* 0x1214AA63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1214AA65: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214AA68: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214AA69: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x1214AA6B: mov edx, ecx */
    eax = ebx; /* 0x1214AA6D: mov eax, ebx */
    PUSH32(esp, esi); /* 0x1214AA6F: push esi */
    PUSH32(esp, edi); /* 0x1214AA70: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1214AA71: mov dword ptr [ebp - 4], edx */
    /* cmp MEM32(edx + 0x10), eax */ /* 0x1214AA74: cmp dword ptr [edx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214AAA5; /* 0x1214AA77: jbe 0x1214aaa5 */
L_1214AA79:
    ecx = MEM32(edx + 0x1C); /* 0x1214AA79: mov ecx, dword ptr [edx + 0x1c] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214AA7C: mov dword ptr [ebp - 8], ecx */
L_1214AA7F:
    esi = MEM32(ecx); /* 0x1214AA7F: mov esi, dword ptr [ecx] */
    MEM32(ebp + (-0xC)) = esi; /* 0x1214AA81: mov dword ptr [ebp - 0xc], esi */
    PUSH32(esp, 4); /* 0x1214AA84: push 4 */
    edi = esi + 0x8; /* 0x1214AA86: lea edi, [esi + 8] */
    esi = MEM32(ebp + 0x8); /* 0x1214AA89: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214AA8C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x4)); /* 0x1214AA8E: mov edx, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1214AA91: pop ecx */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214AA92: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214AAED; /* 0x1214AA94: je 0x1214aaed */
L_1214AA96:
    ecx = MEM32(ebp + (-0x8)); /* 0x1214AA96: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214AA99: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214AA9A: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214AA9D: mov dword ptr [ebp - 8], ecx */
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x1214AAA0: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214AA7F; /* 0x1214AAA3: jb 0x1214aa7f */
L_1214AAA5:
    eax = MEM32(edx + 0x8); /* 0x1214AAA5: mov eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1214AAA8: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1214AAAB: mov dword ptr [ebp - 0xc], eax */
    /* cmp MEM32(eax), ebx */ /* 0x1214AAAE: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214AAE1; /* 0x1214AAB0: jbe 0x1214aae1 */
L_1214AAB2:
    eax = MEM32(eax + 0xC); /* 0x1214AAB2: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(eax + ebx * 4); /* 0x1214AAB5: mov eax, dword ptr [eax + ebx*4] */
    esi = MEM32(ebp + 0x8); /* 0x1214AAB8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x1214AABB: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214AABD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x4)); /* 0x1214AABF: mov edx, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1214AAC2: pop ecx */
    edi = eax + 0x8; /* 0x1214AAC3: lea edi, [eax + 8] */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214AAC6: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214AAC8: mov dword ptr [ebp - 8], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1214AAD9; /* 0x1214AACB: jne 0x1214aad9 */
L_1214AACD:
    PUSH32(esp, eax); /* 0x1214AACD: push eax */
    ecx = edx; /* 0x1214AACE: mov ecx, edx */
    RECOMP_CALL(sub_1214A9BC); /* 0x1214AAD0: call 0x1214a9bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AAD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214AAF9; /* 0x1214AAD7: jns 0x1214aaf9 */
L_1214AAD9:
    eax = MEM32(ebp + (-0xC)); /* 0x1214AAD9: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214AADC: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(eax) */ /* 0x1214AADD: cmp ebx, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214AAB2; /* 0x1214AADF: jb 0x1214aab2 */
L_1214AAE1:
    eax = 0x88760386u; /* 0x1214AAE1: mov eax, 0x88760386 */
L_1214AAE6:
    edi = POP32_VAL(esp); /* 0x1214AAE6: pop edi */
    esi = POP32_VAL(esp); /* 0x1214AAE7: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214AAE8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214AAE9: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214AAEA: ret 8 */
L_1214AAED:
    ecx = MEM32(ebp + (-0xC)); /* 0x1214AAED: mov ecx, dword ptr [ebp - 0xc] */
L_1214AAF0:
    eax = MEM32(ebp + 0xC); /* 0x1214AAF0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x1214AAF3: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214AAF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1214AAE6; /* 0x1214AAF7: jmp 0x1214aae6 */
L_1214AAF9:
    ecx = MEM32(ebp + (-0x8)); /* 0x1214AAF9: mov ecx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_1214AAF0; /* 0x1214AAFC: jmp 0x1214aaf0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214AB03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214AB03u);

L_1214AB03:
    edi = edi; /* 0x1214AB03: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214AB05: push ebp */
    ebp = esp; /* 0x1214AB06: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1214AB08: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214AB0B: push ebx */
    PUSH32(esp, esi); /* 0x1214AB0C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214AB0D: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0xC); /* 0x1214AB10: mov ecx, dword ptr [esi + 0xc] */
    /* test MEM8(ecx + 0x48), 0x80u */ /* 0x1214AB13: test byte ptr [ecx + 0x48], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x48)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1214AB17: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AB24; /* 0x1214AB18: je 0x1214ab24 */
L_1214AB1A:
    eax = 0x88760384u; /* 0x1214AB1A: mov eax, 0x88760384 */
    goto L_1214AC54; /* 0x1214AB1F: jmp 0x1214ac54 */
L_1214AB24:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1214AB24: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214AC4F; /* 0x1214AB28: je 0x1214ac4f */
L_1214AB2E:
    eax = ebp + (-0x8); /* 0x1214AB2E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1214AB31: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214AB32: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1214AA60); /* 0x1214AB35: call 0x1214aa60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AB3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214AC54; /* 0x1214AB3C: js 0x1214ac54 */
L_1214AB42:
    eax = MEM32(esi + 0xC); /* 0x1214AB42: mov eax, dword ptr [esi + 0xc] */
    ebx = MEM32(eax + 0x34); /* 0x1214AB45: mov ebx, dword ptr [eax + 0x34] */
    eax = ebp + (-0x10); /* 0x1214AB48: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1214AB4B: push eax */
    PUSH32(esp, ebx); /* 0x1214AB4C: push ebx */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x1214AB4D: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x1214AB53: mov edx, dword ptr [ebp + 0x18] */
    ecx = eax; /* 0x1214AB56: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214AB58: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x1214AB5A: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1214AB5D: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x1214AB60: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214ABA8; /* 0x1214AB62: je 0x1214aba8 */
L_1214AB64:
    ecx = MEM32(ebp + 0x1C); /* 0x1214AB64: mov ecx, dword ptr [ebp + 0x1c] */
L_1214AB67:
    /* cmp edx, 0x7FFFFFFFu */ /* 0x1214AB67: cmp edx, 0x7fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214AB79; /* 0x1214AB6D: jbe 0x1214ab79 */
L_1214AB6F:
    eax = 0x7FFFFFFFu; /* 0x1214AB6F: mov eax, 0x7fffffff */
    MEM32(ebp + 0xC) = eax; /* 0x1214AB74: mov dword ptr [ebp + 0xc], eax */
    goto L_1214AB7E; /* 0x1214AB77: jmp 0x1214ab7e */
L_1214AB79:
    eax = edx; /* 0x1214AB79: mov eax, edx */
    MEM32(ebp + 0xC) = edx; /* 0x1214AB7B: mov dword ptr [ebp + 0xc], edx */
L_1214AB7E:
    PUSH32(esp, edi); /* 0x1214AB7E: push edi */
    edx = ebp + (-0xC); /* 0x1214AB7F: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1214AB82: push edx */
    PUSH32(esp, eax); /* 0x1214AB83: push eax */
    PUSH32(esp, ecx); /* 0x1214AB84: push ecx */
    PUSH32(esp, ebx); /* 0x1214AB85: push ebx */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x1214AB86: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AB8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214ABEC; /* 0x1214AB8E: je 0x1214abec */
L_1214AB90:
    eax = MEM32(ebp + 0xC); /* 0x1214AB90: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x1C); /* 0x1214AB93: mov ecx, dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + (-0x4)); /* 0x1214AB96: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1214AB99: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1214AB9B: sub edx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x1C) = ecx; /* 0x1214AB9D: mov dword ptr [ebp + 0x1c], ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1214ABA0: mov dword ptr [ebp - 4], edx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1214AB67; /* 0x1214ABA3: jne 0x1214ab67 */
L_1214ABA5:
    ecx = MEM32(ebp + (-0x14)); /* 0x1214ABA5: mov ecx, dword ptr [ebp - 0x14] */
L_1214ABA8:
    eax = MEM32(ebp + 0x14); /* 0x1214ABA8: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1214ABAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214ABB4; /* 0x1214ABAD: jne 0x1214abb4 */
L_1214ABAF:
    eax = 0x12018324u; /* 0x1214ABAF: mov eax, 0x12018324 */
L_1214ABB4:
    edx = ebp + 0x1C; /* 0x1214ABB4: lea edx, [ebp + 0x1c] */
    PUSH32(esp, edx); /* 0x1214ABB7: push edx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1214ABB8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1214ABBB: push dword ptr [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1214ABBE: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1214ABBF: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1214ABC2: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1214ABC3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1214ABC6: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1214A6FD); /* 0x1214ABC9: call 0x1214a6fd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214ABCE: mov esi, eax */
    /* test esi, esi */ /* 0x1214ABD0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214ABF3; /* 0x1214ABD2: jns 0x1214abf3 */
L_1214ABD4:
    PUSH32(esp, edi); /* 0x1214ABD4: push edi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1214ABD5: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1214ABD8: push dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1214ABDB: push ebx */
    RECOMP_CALL(sub_12149A67); /* 0x1214ABDC: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1214ABE1: push ebx */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214ABE2: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1214ABE8: mov eax, esi */
    goto L_1214AC54; /* 0x1214ABEA: jmp 0x1214ac54 */
L_1214ABEC:
    esi = 0x8007000Eu; /* 0x1214ABEC: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1214ABD4; /* 0x1214ABF1: jmp 0x1214abd4 */
L_1214ABF3:
    esi = MEM32(ebp + 0x1C); /* 0x1214ABF3: mov esi, dword ptr [ebp + 0x1c] */
    /* test esi, esi */ /* 0x1214ABF6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AC02; /* 0x1214ABF8: je 0x1214ac02 */
L_1214ABFA:
    eax = esi + 0x4; /* 0x1214ABFA: lea eax, [esi + 4] */
    MEM32(ebp + 0x1C) = eax; /* 0x1214ABFD: mov dword ptr [ebp + 0x1c], eax */
    goto L_1214AC05; /* 0x1214AC00: jmp 0x1214ac05 */
L_1214AC02:
    MEM32(ebp + 0x1C) = edi; /* 0x1214AC02: mov dword ptr [ebp + 0x1c], edi */
L_1214AC05:
    ecx = MEM32(ebp + 0x8); /* 0x1214AC05: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + 0x1C; /* 0x1214AC08: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x1214AC0B: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x1214AC0C: add ecx, 0x38 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1214AE6F); /* 0x1214AC0F: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AC14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AC25; /* 0x1214AC16: je 0x1214ac25 */
L_1214AC18:
    eax = MEM32(ebp + 0x20); /* 0x1214AC18: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = esi; /* 0x1214AC1B: mov dword ptr [eax], esi */
    eax = MEM32(esi); /* 0x1214AC1D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1214AC1F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1214AC20: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_1214AC4B; /* 0x1214AC23: jmp 0x1214ac4b */
L_1214AC25:
    PUSH32(esp, edi); /* 0x1214AC25: push edi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1214AC26: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1214AC29: push dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1214AC2C: push ebx */
    RECOMP_CALL(sub_12149A67); /* 0x1214AC2D: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1214AC32: push ebx */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214AC33: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1214AC39: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AC46; /* 0x1214AC3B: je 0x1214ac46 */
L_1214AC3D:
    ecx = esi + 0x4; /* 0x1214AC3D: lea ecx, [esi + 4] */
    eax = MEM32(ecx); /* 0x1214AC40: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1214AC42: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1214AC44: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1214AC46:
    edi = 0x8007000Eu; /* 0x1214AC46: mov edi, 0x8007000e */
L_1214AC4B:
    eax = edi; /* 0x1214AC4B: mov eax, edi */
    goto L_1214AC54; /* 0x1214AC4D: jmp 0x1214ac54 */
L_1214AC4F:
    eax = 0x88760385u; /* 0x1214AC4F: mov eax, 0x88760385 */
L_1214AC54:
    edi = POP32_VAL(esp); /* 0x1214AC54: pop edi */
    esi = POP32_VAL(esp); /* 0x1214AC55: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214AC56: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214AC57: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1214AC58: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1214AC60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214AC60u);

L_1214AC60:
    edi = edi; /* 0x1214AC60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214AC62: push ebp */
    ebp = esp; /* 0x1214AC63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1214AC65: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214AC68: push ebx */
    PUSH32(esp, esi); /* 0x1214AC69: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214AC6A: mov esi, dword ptr [ebp + 8] */
    /* test MEM8(esi + 0x48), 0x80u */ /* 0x1214AC6D: test byte ptr [esi + 0x48], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi + 0x48)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1214AC71: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AC7E; /* 0x1214AC72: je 0x1214ac7e */
L_1214AC74:
    eax = 0x88760384u; /* 0x1214AC74: mov eax, 0x88760384 */
    goto L_1214AD9F; /* 0x1214AC79: jmp 0x1214ad9f */
L_1214AC7E:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1214AC7E: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214AD9A; /* 0x1214AC82: je 0x1214ad9a */
L_1214AC88:
    eax = ebp + (-0x4); /* 0x1214AC88: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214AC8B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214AC8C: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1214AC8F: mov ecx, esi */
    RECOMP_CALL(sub_1214AA60); /* 0x1214AC91: call 0x1214aa60 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AC96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214AD9F; /* 0x1214AC98: js 0x1214ad9f */
L_1214AC9E:
    eax = ebp + (-0x8); /* 0x1214AC9E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1214ACA1: push eax */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1214ACA2: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x12001088)); /* 0x1214ACA5: call dword ptr [0x12001088] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1214ACAB: mov ecx, eax */
    eax = MEM32(ebp + 0x18); /* 0x1214ACAD: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214ACB0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1214ACB2: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1214ACB5: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x1214ACB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214ACF0; /* 0x1214ACBA: je 0x1214acf0 */
L_1214ACBC:
    edi = 0x7FFFFFFFu; /* 0x1214ACBC: mov edi, 0x7fffffff */
    /* cmp eax, 0x7FFFFFFFu */ /* 0x1214ACC1: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214ACCA; /* 0x1214ACC6: ja 0x1214acca */
L_1214ACC8:
    edi = eax; /* 0x1214ACC8: mov edi, eax */
L_1214ACCA:
    PUSH32(esp, ebx); /* 0x1214ACCA: push ebx */
    eax = ebp + 0xC; /* 0x1214ACCB: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1214ACCE: push eax */
    PUSH32(esp, edi); /* 0x1214ACCF: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1214ACD0: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1214ACD3: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x120010DC)); /* 0x1214ACD6: call dword ptr [0x120010dc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214ACDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AD36; /* 0x1214ACDE: je 0x1214ad36 */
L_1214ACE0:
    eax = MEM32(ebp + 0x8); /* 0x1214ACE0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + edi; /* 0x1214ACE3: add dword ptr [ebp + 0x1c], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1214ACE6: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1214ACE8: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1214ACBC; /* 0x1214ACEB: jne 0x1214acbc */
L_1214ACED:
    ecx = MEM32(ebp + (-0xC)); /* 0x1214ACED: mov ecx, dword ptr [ebp - 0xc] */
L_1214ACF0:
    eax = MEM32(ebp + 0x14); /* 0x1214ACF0: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1214ACF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214ACFC; /* 0x1214ACF5: jne 0x1214acfc */
L_1214ACF7:
    eax = 0x12018324u; /* 0x1214ACF7: mov eax, 0x12018324 */
L_1214ACFC:
    edx = ebp + 0x1C; /* 0x1214ACFC: lea edx, [ebp + 0x1c] */
    PUSH32(esp, edx); /* 0x1214ACFF: push edx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1214AD00: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1214AD03: push dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1214AD06: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1214AD07: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214AD0A: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1214AD0B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1214AD0E: push esi */
    RECOMP_CALL(sub_1214A6FD); /* 0x1214AD0F: call 0x1214a6fd */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1214AD14: mov edi, eax */
    /* test edi, edi */ /* 0x1214AD16: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214AD3D; /* 0x1214AD18: jns 0x1214ad3d */
L_1214AD1A:
    PUSH32(esp, ebx); /* 0x1214AD1A: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1214AD1B: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1214AD1E: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1214AD21: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_12149A67); /* 0x1214AD24: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1214AD29: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214AD2C: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1214AD32: mov eax, edi */
    goto L_1214AD9F; /* 0x1214AD34: jmp 0x1214ad9f */
L_1214AD36:
    edi = 0x8007000Eu; /* 0x1214AD36: mov edi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_1214AD1A; /* 0x1214AD3B: jmp 0x1214ad1a */
L_1214AD3D:
    edi = MEM32(ebp + 0x1C); /* 0x1214AD3D: mov edi, dword ptr [ebp + 0x1c] */
    /* test edi, edi */ /* 0x1214AD40: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AD4C; /* 0x1214AD42: je 0x1214ad4c */
L_1214AD44:
    eax = edi + 0x4; /* 0x1214AD44: lea eax, [edi + 4] */
    MEM32(ebp + 0x1C) = eax; /* 0x1214AD47: mov dword ptr [ebp + 0x1c], eax */
    goto L_1214AD4F; /* 0x1214AD4A: jmp 0x1214ad4f */
L_1214AD4C:
    MEM32(ebp + 0x1C) = ebx; /* 0x1214AD4C: mov dword ptr [ebp + 0x1c], ebx */
L_1214AD4F:
    eax = ebp + 0x1C; /* 0x1214AD4F: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x1214AD52: push eax */
    ecx = esi + 0x20; /* 0x1214AD53: lea ecx, [esi + 0x20] */
    RECOMP_CALL(sub_1214AE6F); /* 0x1214AD56: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AD5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AD6C; /* 0x1214AD5D: je 0x1214ad6c */
L_1214AD5F:
    eax = MEM32(ebp + 0x20); /* 0x1214AD5F: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = edi; /* 0x1214AD62: mov dword ptr [eax], edi */
    eax = MEM32(edi); /* 0x1214AD64: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1214AD66: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1214AD67: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_1214AD96; /* 0x1214AD6A: jmp 0x1214ad96 */
L_1214AD6C:
    PUSH32(esp, ebx); /* 0x1214AD6C: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1214AD6D: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1214AD70: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1214AD73: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_12149A67); /* 0x1214AD76: call 0x12149a67 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1214AD7B: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x12001150)); /* 0x1214AD7E: call dword ptr [0x12001150] */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1214AD84: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AD91; /* 0x1214AD86: je 0x1214ad91 */
L_1214AD88:
    ecx = edi + 0x4; /* 0x1214AD88: lea ecx, [edi + 4] */
    eax = MEM32(ecx); /* 0x1214AD8B: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1214AD8D: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1214AD8F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1214AD91:
    ebx = 0x8007000Eu; /* 0x1214AD91: mov ebx, 0x8007000e */
L_1214AD96:
    eax = ebx; /* 0x1214AD96: mov eax, ebx */
    goto L_1214AD9F; /* 0x1214AD98: jmp 0x1214ad9f */
L_1214AD9A:
    eax = 0x88760385u; /* 0x1214AD9A: mov eax, 0x88760385 */
L_1214AD9F:
    edi = POP32_VAL(esp); /* 0x1214AD9F: pop edi */
    esi = POP32_VAL(esp); /* 0x1214ADA0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214ADA1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214ADA2: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1214ADA3: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1214ADAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214ADABu);

L_1214ADAB:
    MEM32(0x121D78BC) = 1; /* 0x1214ADAB: mov dword ptr [0x121d78bc], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214ADB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214ADBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214ADBBu);

    goto L_1214ADBB;
L_1214697C:
    edi = edi; /* 0x1214697C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214697E: push ebp */
    ebp = esp; /* 0x1214697F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12146981: push esi */
    PUSH32(esp, edi); /* 0x12146982: push edi */
    edi = ecx; /* 0x12146983: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12146985: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), esi */ /* 0x12146987: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121469B4; /* 0x12146989: jbe 0x121469b4 */
L_1214698B:
    eax = MEM32(edi + 0xC); /* 0x1214698B: mov eax, dword ptr [edi + 0xc] */
    eax = MEM32(eax + esi * 4); /* 0x1214698E: mov eax, dword ptr [eax + esi*4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12146991: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12146993: push dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12146996: push -1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x12146998: push dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1214699B: push 1 */
    PUSH32(esp, 0x409u); /* 0x1214699D: push 0x409 */
    RECOMP_ICALL(MEM32(0x120010AC)); /* 0x121469A2: call dword ptr [0x120010ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x121469A8: push 2 */
    ecx = POP32_VAL(esp); /* 0x121469AA: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121469AB: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121469BC; /* 0x121469AD: je 0x121469bc */
L_121469AF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121469AF: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi) */ /* 0x121469B0: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214698B; /* 0x121469B2: jb 0x1214698b */
L_121469B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121469B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121469B6:
    edi = POP32_VAL(esp); /* 0x121469B6: pop edi */
    esi = POP32_VAL(esp); /* 0x121469B7: pop esi */
    ebp = POP32_VAL(esp); /* 0x121469B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121469B9: ret 8 */
L_121469BC:
    edx = MEM32(ebp + 0xC); /* 0x121469BC: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x121469BF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121469CB; /* 0x121469C1: je 0x121469cb */
L_121469C3:
    ecx = MEM32(edi + 0xC); /* 0x121469C3: mov ecx, dword ptr [edi + 0xc] */
    ecx = MEM32(ecx + esi * 4); /* 0x121469C6: mov ecx, dword ptr [ecx + esi*4] */
    MEM32(edx) = ecx; /* 0x121469C9: mov dword ptr [edx], ecx */
L_121469CB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121469CB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121469CD: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_121469B6; /* 0x121469CE: jmp 0x121469b6 */
L_1214ADBB:
    edi = edi; /* 0x1214ADBB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214ADBD: push ebp */
    ebp = esp; /* 0x1214ADBE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214ADC0: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214ADC1: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x1214ADC4: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214ADC6: push dword ptr [ebp + 8] */
    ecx = esi + 0x10; /* 0x1214ADC9: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_1214697C); /* 0x1214ADCC: call 0x1214697c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214ADD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214ADDD; /* 0x1214ADD3: je 0x1214addd */
L_1214ADD5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214ADD5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214ADD7: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1214ADD8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214ADD9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214ADDA: ret 8 */
L_1214ADDD:
    ecx = MEM32(esi + 0x8); /* 0x1214ADDD: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1214ADE0: add ecx, 8 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1214ADE3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214ADE4: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1214697C; /* 0x1214ADE5: jmp 0x1214697c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214ADEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214ADEFu);

    goto L_1214ADEF;
L_121469D5:
    edi = edi; /* 0x121469D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121469D7: push ebp */
    ebp = esp; /* 0x121469D8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121469DA: push ecx */
    PUSH32(esp, ecx); /* 0x121469DB: push ecx */
    edx = MEM32(ecx); /* 0x121469DC: mov edx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x121469DE: push ebx */
    PUSH32(esp, esi); /* 0x121469DF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121469E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121469E2: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x121469E3: mov dword ptr [ebp - 4], edx */
    /* test edx, edx */ /* 0x121469E6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146A0E; /* 0x121469E8: je 0x12146a0e */
L_121469EA:
    ecx = MEM32(ecx + 0xC); /* 0x121469EA: mov ecx, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x121469ED: mov dword ptr [ebp - 8], ecx */
    ebx = ecx; /* 0x121469F0: mov ebx, ecx */
L_121469F2:
    esi = MEM32(ebx); /* 0x121469F2: mov esi, dword ptr [ebx] */
    edi = MEM32(ebp + 0x8); /* 0x121469F4: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x121469F7: push 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x121469F9: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121469FC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x4)); /* 0x121469FE: mov edx, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x12146A01: pop ecx */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12146A02: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12146A17; /* 0x12146A04: je 0x12146a17 */
L_12146A06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12146A06: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12146A07: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, edx */ /* 0x12146A0A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121469F2; /* 0x12146A0C: jb 0x121469f2 */
L_12146A0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146A0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12146A10:
    edi = POP32_VAL(esp); /* 0x12146A10: pop edi */
    esi = POP32_VAL(esp); /* 0x12146A11: pop esi */
    ebx = POP32_VAL(esp); /* 0x12146A12: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12146A13: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12146A14: ret 8 */
L_12146A17:
    ecx = MEM32(ebp + 0xC); /* 0x12146A17: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x12146A1A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12146A26; /* 0x12146A1C: je 0x12146a26 */
L_12146A1E:
    edx = MEM32(ebp + (-0x8)); /* 0x12146A1E: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(edx + eax * 4); /* 0x12146A21: mov eax, dword ptr [edx + eax*4] */
    MEM32(ecx) = eax; /* 0x12146A24: mov dword ptr [ecx], eax */
L_12146A26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12146A26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12146A28: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_12146A10; /* 0x12146A29: jmp 0x12146a10 */
L_1214ADEF:
    edi = edi; /* 0x1214ADEF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214ADF1: push ebp */
    ebp = esp; /* 0x1214ADF2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214ADF4: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214ADF5: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x1214ADF8: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214ADFA: push dword ptr [ebp + 8] */
    ecx = esi + 0x10; /* 0x1214ADFD: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_121469D5); /* 0x1214AE00: call 0x121469d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AE05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AE11; /* 0x1214AE07: je 0x1214ae11 */
L_1214AE09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214AE09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214AE0B: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x1214AE0C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214AE0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214AE0E: ret 8 */
L_1214AE11:
    ecx = MEM32(esi + 0x8); /* 0x1214AE11: mov ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1214AE14: add ecx, 8 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1214AE17: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214AE18: pop ebp */
    RECOMP_BACKEDGE();
    goto L_121469D5; /* 0x1214AE19: jmp 0x121469d5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214AE23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214AE23u);

L_1214AE23:
    edi = edi; /* 0x1214AE23: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214AE25: push ebp */
    ebp = esp; /* 0x1214AE26: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214AE28: push ecx */
    ecx = MEM32(ecx + 0xC); /* 0x1214AE29: mov ecx, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx); /* 0x1214AE2C: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x1); /* 0x1214AE2E: lea edx, [ebp - 1] */
    PUSH32(esp, edx); /* 0x1214AE31: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1214AE32: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AE35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214AE3E; /* 0x1214AE37: jne 0x1214ae3e */
L_1214AE39:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1214AE39: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214AE3C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214AE3D: ret  */
L_1214AE3E:
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x1214AE3E: movzx eax, byte ptr [ebp - 1] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214AE42: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214AE43: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214AE49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214AE49u);

L_1214AE49:
    edi = edi; /* 0x1214AE49: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214AE4B: push ebp */
    ebp = esp; /* 0x1214AE4C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214AE4E: push ecx */
    ecx = MEM32(ecx + 0xC); /* 0x1214AE4F: mov ecx, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx); /* 0x1214AE52: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x1214AE54: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1214AE57: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1214AE58: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214AE5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214AE64; /* 0x1214AE5D: jne 0x1214ae64 */
L_1214AE5F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1214AE5F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214AE62: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214AE63: ret  */
L_1214AE64:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x1214AE64: movzx eax, word ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214AE68: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214AE69: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214AE6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214AE6Fu);

L_1214AE6F:
    edi = edi; /* 0x1214AE6F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214AE71: push ebp */
    ebp = esp; /* 0x1214AE72: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214AE74: push esi */
    esi = ecx; /* 0x1214AE75: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1214AE77: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(esi), eax */ /* 0x1214AE7A: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214AEA1; /* 0x1214AE7C: jne 0x1214aea1 */
L_1214AE7E:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x1214AE7E: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214AE86; /* 0x1214AE81: ja 0x1214ae86 */
L_1214AE83:
    eax = MEM32(esi + 0x8); /* 0x1214AE83: mov eax, dword ptr [esi + 8] */
L_1214AE86:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x1214AE86: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x4); /* 0x1214AE89: mov eax, dword ptr [esi + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1214AE8C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1214AE8C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1214AE8F: push eax */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1214AE90: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_121BF5B6); /* 0x1214AE93: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214AE98: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214AE99: pop ecx */
    /* test eax, eax */ /* 0x1214AE9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AEB2; /* 0x1214AE9C: je 0x1214aeb2 */
L_1214AE9E:
    MEM32(esi + 0xC) = eax; /* 0x1214AE9E: mov dword ptr [esi + 0xc], eax */
L_1214AEA1:
    eax = MEM32(ebp + 0x8); /* 0x1214AEA1: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1214AEA4: mov eax, dword ptr [eax] */
    edx = MEM32(esi); /* 0x1214AEA6: mov edx, dword ptr [esi] */
    ecx = MEM32(esi + 0xC); /* 0x1214AEA8: mov ecx, dword ptr [esi + 0xc] */
    MEM32(ecx + edx * 4) = eax; /* 0x1214AEAB: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1214AEAE: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x1214AEB0: mov eax, dword ptr [esi] */
L_1214AEB2:
    esi = POP32_VAL(esp); /* 0x1214AEB2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214AEB3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214AEB4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214AEBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214AEBCu);

L_1214AEBC:
    edi = edi; /* 0x1214AEBC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214AEBE: push ebp */
    ebp = esp; /* 0x1214AEBF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1214AEC1: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214AEC4: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1214AEC9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1214AECB: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1214AECE: push ebx */
    PUSH32(esp, esi); /* 0x1214AECF: push esi */
    PUSH32(esp, edi); /* 0x1214AED0: push edi */
    edi = 0xFFu; /* 0x1214AED1: mov edi, 0xff */
    esi = 0x121EB3B0u; /* 0x1214AED6: mov esi, 0x121eb3b0 */
    goto L_1214AEF5; /* 0x1214AEDB: jmp 0x1214aef5 */
L_1214AEDD:
    /* cmp ebx, 0x3Eu */ /* 0x1214AEDD: cmp ebx, 0x3e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214AF07; /* 0x1214AEE0: je 0x1214af07 */
L_1214AEE2:
    /* cmp ebx, 0x2Du */ /* 0x1214AEE2: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214AEF2; /* 0x1214AEE5: je 0x1214aef2 */
L_1214AEE7:
    PUSH32(esp, ebx); /* 0x1214AEE7: push ebx */
    RECOMP_CALL(sub_121BF99A); /* 0x1214AEE8: call 0x121bf99a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214AEED: pop ecx */
    /* test eax, eax */ /* 0x1214AEEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214AF07; /* 0x1214AEF0: je 0x1214af07 */
L_1214AEF2:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1214AEF2: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214AEF4: inc esi */
    _flag_k = FK_INC;
L_1214AEF5:
    ecx = MEM32(0x121ED910); /* 0x1214AEF5: mov ecx, dword ptr [0x121ed910] */
    RECOMP_CALL(sub_1214AE23); /* 0x1214AEFB: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214AF00: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1214AF02: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214AEDD; /* 0x1214AF05: jne 0x1214aedd */
L_1214AF07:
    MEM8(esi) = (uint8_t)(0); /* 0x1214AF07: mov byte ptr [esi], 0 */
    /* cmp ebx, 0x3Eu */ /* 0x1214AF0A: cmp ebx, 0x3e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214AFB4; /* 0x1214AF0D: jne 0x1214afb4 */
L_1214AF13:
    esi = 0x121EB3B0u; /* 0x1214AF13: mov esi, 0x121eb3b0 */
    ecx = esi; /* 0x1214AF18: mov ecx, esi */
    edx = ecx + 0x1; /* 0x1214AF1A: lea edx, [ecx + 1] */
L_1214AF1D:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214AF1D: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214AF1F: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214AF20: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214AF1D; /* 0x1214AF22: jne 0x1214af1d */
L_1214AF24:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214AF24: sub ecx, edx */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x24u */ /* 0x1214AF26: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214AFB4; /* 0x1214AF29: jne 0x1214afb4 */
L_1214AF2F:
    eax = ebp + (-0x8); /* 0x1214AF2F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1214AF32: push eax */
    eax = ebp + (-0xC); /* 0x1214AF33: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1214AF36: push eax */
    eax = ebp + (-0x10); /* 0x1214AF37: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1214AF3A: push eax */
    eax = ebp + (-0x14); /* 0x1214AF3B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1214AF3E: push eax */
    eax = ebp + (-0x18); /* 0x1214AF3F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1214AF42: push eax */
    eax = ebp + (-0x1C); /* 0x1214AF43: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1214AF46: push eax */
    eax = ebp + (-0x20); /* 0x1214AF47: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1214AF4A: push eax */
    eax = ebp + (-0x24); /* 0x1214AF4B: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1214AF4E: push eax */
    PUSH32(esp, 0x121ED8DEu); /* 0x1214AF4F: push 0x121ed8de */
    PUSH32(esp, 0x121ED8DCu); /* 0x1214AF54: push 0x121ed8dc */
    PUSH32(esp, 0x121ED8D8u); /* 0x1214AF59: push 0x121ed8d8 */
    PUSH32(esp, 0x120114A8u); /* 0x1214AF5E: push 0x120114a8 */
    PUSH32(esp, esi); /* 0x1214AF63: push esi */
    RECOMP_CALL(sub_121BF63C); /* 0x1214AF64: call 0x121bf63c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x1214AF69: add esp, 0x34 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xBu */ /* 0x1214AF6C: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214AFB4; /* 0x1214AF6F: jne 0x1214afb4 */
L_1214AF71:
    SET_LO8(eax, MEM8(ebp + (-0x24))); /* 0x1214AF71: mov al, byte ptr [ebp - 0x24] */
    MEM8(0x121ED8E0) = (uint8_t)(LO8(eax)); /* 0x1214AF74: mov byte ptr [0x121ed8e0], al */
    SET_LO8(eax, MEM8(ebp + (-0x20))); /* 0x1214AF79: mov al, byte ptr [ebp - 0x20] */
    MEM8(0x121ED8E1) = (uint8_t)(LO8(eax)); /* 0x1214AF7C: mov byte ptr [0x121ed8e1], al */
    SET_LO8(eax, MEM8(ebp + (-0x1C))); /* 0x1214AF81: mov al, byte ptr [ebp - 0x1c] */
    MEM8(0x121ED8E2) = (uint8_t)(LO8(eax)); /* 0x1214AF84: mov byte ptr [0x121ed8e2], al */
    SET_LO8(eax, MEM8(ebp + (-0x18))); /* 0x1214AF89: mov al, byte ptr [ebp - 0x18] */
    MEM8(0x121ED8E3) = (uint8_t)(LO8(eax)); /* 0x1214AF8C: mov byte ptr [0x121ed8e3], al */
    SET_LO8(eax, MEM8(ebp + (-0x14))); /* 0x1214AF91: mov al, byte ptr [ebp - 0x14] */
    MEM8(0x121ED8E4) = (uint8_t)(LO8(eax)); /* 0x1214AF94: mov byte ptr [0x121ed8e4], al */
    SET_LO8(eax, MEM8(ebp + (-0x10))); /* 0x1214AF99: mov al, byte ptr [ebp - 0x10] */
    MEM8(0x121ED8E5) = (uint8_t)(LO8(eax)); /* 0x1214AF9C: mov byte ptr [0x121ed8e5], al */
    SET_LO8(eax, MEM8(ebp + (-0xC))); /* 0x1214AFA1: mov al, byte ptr [ebp - 0xc] */
    MEM8(0x121ED8E6) = (uint8_t)(LO8(eax)); /* 0x1214AFA4: mov byte ptr [0x121ed8e6], al */
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x1214AFA9: mov al, byte ptr [ebp - 8] */
    PUSH32(esp, 5); /* 0x1214AFAC: push 5 */
    MEM8(0x121ED8E7) = (uint8_t)(LO8(eax)); /* 0x1214AFAE: mov byte ptr [0x121ed8e7], al */
    edi = POP32_VAL(esp); /* 0x1214AFB3: pop edi */
L_1214AFB4:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214AFB4: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1214AFB7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1214AFB9: pop edi */
    esi = POP32_VAL(esp); /* 0x1214AFBA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1214AFBB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214AFBD: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1214AFBE: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214AFC3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214AFC4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214AFCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214AFCAu);

L_1214AFCA:
    ecx = MEM32(0x121ED910); /* 0x1214AFCA: mov ecx, dword ptr [0x121ed910] */
    _flag_a = (uint32_t)(MEM32(0x121ED920)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED920) = MEM32(0x121ED920) & 0; /* 0x1214AFD0: and dword ptr [0x121ed920], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1214AFD7: push ebx */
    PUSH32(esp, esi); /* 0x1214AFD8: push esi */
    PUSH32(esp, edi); /* 0x1214AFD9: push edi */
    RECOMP_CALL(sub_1214AE23); /* 0x1214AFDA: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1214AFDF: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214B125; /* 0x1214AFE2: jmp 0x1214b125 */
L_1214AFE7:
    /* cmp ebx, 0x22u */ /* 0x1214AFE7: cmp ebx, 0x22 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B138; /* 0x1214AFEA: je 0x1214b138 */
L_1214AFF0:
    /* cmp ebx, 0x5Cu */ /* 0x1214AFF0: cmp ebx, 0x5c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B102; /* 0x1214AFF3: jne 0x1214b102 */
L_1214AFF9:
    ecx = MEM32(0x121ED910); /* 0x1214AFF9: mov ecx, dword ptr [0x121ed910] */
    RECOMP_CALL(sub_1214AE23); /* 0x1214AFFF: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214B004: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x1214B006: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B12F; /* 0x1214B008: je 0x1214b12f */
L_1214B00E:
    /* cmp ebx, 0x6Eu */ /* 0x1214B00E: cmp ebx, 0x6e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B017; /* 0x1214B011: jne 0x1214b017 */
L_1214B013:
    PUSH32(esp, 0xAu); /* 0x1214B013: push 0xa */
    goto L_1214B04B; /* 0x1214B015: jmp 0x1214b04b */
L_1214B017:
    /* cmp ebx, 0x74u */ /* 0x1214B017: cmp ebx, 0x74 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B020; /* 0x1214B01A: jne 0x1214b020 */
L_1214B01C:
    PUSH32(esp, 9); /* 0x1214B01C: push 9 */
    goto L_1214B04B; /* 0x1214B01E: jmp 0x1214b04b */
L_1214B020:
    /* cmp ebx, 0x76u */ /* 0x1214B020: cmp ebx, 0x76 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x76u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B029; /* 0x1214B023: jne 0x1214b029 */
L_1214B025:
    PUSH32(esp, 0xBu); /* 0x1214B025: push 0xb */
    goto L_1214B04B; /* 0x1214B027: jmp 0x1214b04b */
L_1214B029:
    /* cmp ebx, 0x62u */ /* 0x1214B029: cmp ebx, 0x62 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x62u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B032; /* 0x1214B02C: jne 0x1214b032 */
L_1214B02E:
    PUSH32(esp, 8); /* 0x1214B02E: push 8 */
    goto L_1214B04B; /* 0x1214B030: jmp 0x1214b04b */
L_1214B032:
    /* cmp ebx, 0x72u */ /* 0x1214B032: cmp ebx, 0x72 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x72u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B03B; /* 0x1214B035: jne 0x1214b03b */
L_1214B037:
    PUSH32(esp, 0xDu); /* 0x1214B037: push 0xd */
    goto L_1214B04B; /* 0x1214B039: jmp 0x1214b04b */
L_1214B03B:
    /* cmp ebx, 0x66u */ /* 0x1214B03B: cmp ebx, 0x66 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B044; /* 0x1214B03E: jne 0x1214b044 */
L_1214B040:
    PUSH32(esp, 0xCu); /* 0x1214B040: push 0xc */
    goto L_1214B04B; /* 0x1214B042: jmp 0x1214b04b */
L_1214B044:
    /* cmp ebx, 0x65u */ /* 0x1214B044: cmp ebx, 0x65 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B051; /* 0x1214B047: jne 0x1214b051 */
L_1214B049:
    PUSH32(esp, 0x1Bu); /* 0x1214B049: push 0x1b */
L_1214B04B:
    ebx = POP32_VAL(esp); /* 0x1214B04B: pop ebx */
    goto L_1214B102; /* 0x1214B04C: jmp 0x1214b102 */
L_1214B051:
    /* cmp ebx, 0x30u */ /* 0x1214B051: cmp ebx, 0x30 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B102; /* 0x1214B054: jne 0x1214b102 */
L_1214B05A:
    ecx = MEM32(0x121ED910); /* 0x1214B05A: mov ecx, dword ptr [0x121ed910] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214B060: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1214AE23); /* 0x1214B062: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214B067: mov esi, eax */
    /* cmp esi, edi */ /* 0x1214B069: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0DB; /* 0x1214B06B: je 0x1214b0db */
L_1214B06D:
    PUSH32(esp, esi); /* 0x1214B06D: push esi */
    RECOMP_CALL(sub_121BF624); /* 0x1214B06E: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B073: pop ecx */
    /* test eax, eax */ /* 0x1214B074: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B0DB; /* 0x1214B076: je 0x1214b0db */
L_1214B078:
    /* cmp esi, 0x38u */ /* 0x1214B078: cmp esi, 0x38 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0DB; /* 0x1214B07B: je 0x1214b0db */
L_1214B07D:
    /* cmp esi, 0x39u */ /* 0x1214B07D: cmp esi, 0x39 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0DB; /* 0x1214B080: je 0x1214b0db */
L_1214B082:
    ecx = MEM32(0x121ED910); /* 0x1214B082: mov ecx, dword ptr [0x121ed910] */
    ebx = esi + (-0x30); /* 0x1214B088: lea ebx, [esi - 0x30] */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B08B: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214B090: mov esi, eax */
    /* cmp esi, edi */ /* 0x1214B092: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0E8; /* 0x1214B094: je 0x1214b0e8 */
L_1214B096:
    PUSH32(esp, esi); /* 0x1214B096: push esi */
    RECOMP_CALL(sub_121BF624); /* 0x1214B097: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B09C: pop ecx */
    /* test eax, eax */ /* 0x1214B09D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B0E8; /* 0x1214B09F: je 0x1214b0e8 */
L_1214B0A1:
    /* cmp esi, 0x38u */ /* 0x1214B0A1: cmp esi, 0x38 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0E8; /* 0x1214B0A4: je 0x1214b0e8 */
L_1214B0A6:
    /* cmp esi, 0x39u */ /* 0x1214B0A6: cmp esi, 0x39 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0E8; /* 0x1214B0A9: je 0x1214b0e8 */
L_1214B0AB:
    ecx = MEM32(0x121ED910); /* 0x1214B0AB: mov ecx, dword ptr [0x121ed910] */
    ebx = esi + ebx * 8 + (-0x30); /* 0x1214B0B1: lea ebx, [esi + ebx*8 - 0x30] */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B0B5: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214B0BA: mov esi, eax */
    /* cmp esi, edi */ /* 0x1214B0BC: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0F5; /* 0x1214B0BE: je 0x1214b0f5 */
L_1214B0C0:
    PUSH32(esp, esi); /* 0x1214B0C0: push esi */
    RECOMP_CALL(sub_121BF624); /* 0x1214B0C1: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B0C6: pop ecx */
    /* test eax, eax */ /* 0x1214B0C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B0F5; /* 0x1214B0C9: je 0x1214b0f5 */
L_1214B0CB:
    /* cmp esi, 0x38u */ /* 0x1214B0CB: cmp esi, 0x38 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0F5; /* 0x1214B0CE: je 0x1214b0f5 */
L_1214B0D0:
    /* cmp esi, 0x39u */ /* 0x1214B0D0: cmp esi, 0x39 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B0F5; /* 0x1214B0D3: je 0x1214b0f5 */
L_1214B0D5:
    ebx = esi + ebx * 8 + (-0x30); /* 0x1214B0D5: lea ebx, [esi + ebx*8 - 0x30] */
    goto L_1214B102; /* 0x1214B0D9: jmp 0x1214b102 */
L_1214B0DB:
    eax = MEM32(0x121ED910); /* 0x1214B0DB: mov eax, dword ptr [0x121ed910] */
    ecx = MEM32(eax + 0xC); /* 0x1214B0E0: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x1214B0E3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214B0E5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1214B0E8:
    eax = MEM32(0x121ED910); /* 0x1214B0E8: mov eax, dword ptr [0x121ed910] */
    ecx = MEM32(eax + 0xC); /* 0x1214B0ED: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x1214B0F0: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214B0F2: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1214B0F5:
    eax = MEM32(0x121ED910); /* 0x1214B0F5: mov eax, dword ptr [0x121ed910] */
    ecx = MEM32(eax + 0xC); /* 0x1214B0FA: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x1214B0FD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214B0FF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1214B102:
    eax = MEM32(0x121ED920); /* 0x1214B102: mov eax, dword ptr [0x121ed920] */
    /* cmp eax, 0x1FFu */ /* 0x1214B107: cmp eax, 0x1ff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214B11A; /* 0x1214B10C: jge 0x1214b11a */
L_1214B10E:
    MEM8(eax + 0x121EB3B0) = (uint8_t)(LO8(ebx)); /* 0x1214B10E: mov byte ptr [eax + 0x121eb3b0], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214B114: inc eax */
    _flag_k = FK_INC;
    MEM32(0x121ED920) = eax; /* 0x1214B115: mov dword ptr [0x121ed920], eax */
L_1214B11A:
    ecx = MEM32(0x121ED910); /* 0x1214B11A: mov ecx, dword ptr [0x121ed910] */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B120: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
L_1214B125:
    ebx = eax; /* 0x1214B125: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x1214B127: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214AFE7; /* 0x1214B129: jne 0x1214afe7 */
L_1214B12F:
    eax = 0xFFu; /* 0x1214B12F: mov eax, 0xff */
L_1214B134:
    edi = POP32_VAL(esp); /* 0x1214B134: pop edi */
    esi = POP32_VAL(esp); /* 0x1214B135: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214B136: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214B137: ret  */
L_1214B138:
    eax = MEM32(0x121ED920); /* 0x1214B138: mov eax, dword ptr [0x121ed920] */
    edi = 0x121EB3B0u; /* 0x1214B13D: mov edi, 0x121eb3b0 */
    MEM8(eax + 0x121EB3B0) = (uint8_t)(0); /* 0x1214B142: mov byte ptr [eax + 0x121eb3b0], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214B149: inc eax */
    _flag_k = FK_INC;
    ecx = edi; /* 0x1214B14A: mov ecx, edi */
    MEM32(0x121ED920) = eax; /* 0x1214B14C: mov dword ptr [0x121ed920], eax */
    edx = ecx + 0x1; /* 0x1214B151: lea edx, [ecx + 1] */
L_1214B154:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214B154: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214B156: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214B157: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B154; /* 0x1214B159: jne 0x1214b154 */
L_1214B15B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214B15B: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + 0x1; /* 0x1214B15D: lea esi, [ecx + 1] */
    PUSH32(esp, esi); /* 0x1214B160: push esi */
    RECOMP_CALL(sub_121BF524); /* 0x1214B161: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B166: pop ecx */
    MEM32(0x121ED8D8) = eax; /* 0x1214B167: mov dword ptr [0x121ed8d8], eax */
    /* test eax, eax */ /* 0x1214B16C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B12F; /* 0x1214B16E: je 0x1214b12f */
L_1214B170:
    PUSH32(esp, esi); /* 0x1214B170: push esi */
    PUSH32(esp, edi); /* 0x1214B171: push edi */
    PUSH32(esp, eax); /* 0x1214B172: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1214B173: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214B178: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x1214B17B: push 2 */
    eax = POP32_VAL(esp); /* 0x1214B17D: pop eax */
    RECOMP_BACKEDGE();
    goto L_1214B134; /* 0x1214B17E: jmp 0x1214b134 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214B185(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B185u);

L_1214B185:
    edi = edi; /* 0x1214B185: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B187: push ebp */
    ebp = esp; /* 0x1214B188: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x1214B18A: mov al, byte ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1214B18D: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214B18E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1214B190: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214B191: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x1214B192: push edi */
    edi = ecx; /* 0x1214B193: mov edi, ecx */
    MEM8(0x121EB3B0) = (uint8_t)(LO8(eax)); /* 0x1214B195: mov byte ptr [0x121eb3b0], al */
    MEM32(0x121ED920) = ecx; /* 0x1214B19A: mov dword ptr [0x121ed920], ecx */
    goto L_1214B1CF; /* 0x1214B1A0: jmp 0x1214b1cf */
L_1214B1A2:
    PUSH32(esp, ebx); /* 0x1214B1A2: push ebx */
    RECOMP_CALL(sub_121BF71C); /* 0x1214B1A3: call 0x121bf71c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B1A8: pop ecx */
    /* test eax, eax */ /* 0x1214B1A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B1B7; /* 0x1214B1AB: jne 0x1214b1b7 */
L_1214B1AD:
    /* cmp ebx, 0x5Fu */ /* 0x1214B1AD: cmp ebx, 0x5f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B1B7; /* 0x1214B1B0: je 0x1214b1b7 */
L_1214B1B2:
    /* cmp ebx, 0x2Du */ /* 0x1214B1B2: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B1E1; /* 0x1214B1B5: jne 0x1214b1e1 */
L_1214B1B7:
    eax = MEM32(0x121ED920); /* 0x1214B1B7: mov eax, dword ptr [0x121ed920] */
    /* cmp eax, 0x1FFu */ /* 0x1214B1BC: cmp eax, 0x1ff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214B1CF; /* 0x1214B1C1: jge 0x1214b1cf */
L_1214B1C3:
    MEM8(eax + 0x121EB3B0) = (uint8_t)(LO8(ebx)); /* 0x1214B1C3: mov byte ptr [eax + 0x121eb3b0], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214B1C9: inc eax */
    _flag_k = FK_INC;
    MEM32(0x121ED920) = eax; /* 0x1214B1CA: mov dword ptr [0x121ed920], eax */
L_1214B1CF:
    ecx = MEM32(0x121ED910); /* 0x1214B1CF: mov ecx, dword ptr [0x121ed910] */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B1D5: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214B1DA: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1214B1DC: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B1A2; /* 0x1214B1DF: jne 0x1214b1a2 */
L_1214B1E1:
    eax = MEM32(0x121ED920); /* 0x1214B1E1: mov eax, dword ptr [0x121ed920] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214B1E6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax + 0x121EB3B0) = (uint8_t)(LO8(ecx)); /* 0x1214B1E8: mov byte ptr [eax + 0x121eb3b0], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214B1EE: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x1214B1EF: mov dword ptr [ebp + 8], ecx */
    MEM32(0x121ED920) = eax; /* 0x1214B1F2: mov dword ptr [0x121ed920], eax */
    esi = 0x121D8364u; /* 0x1214B1F7: mov esi, 0x121d8364 */
L_1214B1FC:
    /* cmp esi, 0x121D83E4u */ /* 0x1214B1FC: cmp esi, 0x121d83e4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x121D83E4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214B236; /* 0x1214B202: jge 0x1214b236 */
L_1214B204:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214B204: push -1 */
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x1214B206: push dword ptr [esi - 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214B209: push -1 */
    PUSH32(esp, 0x121EB3B0u); /* 0x1214B20B: push 0x121eb3b0 */
    PUSH32(esp, 1); /* 0x1214B210: push 1 */
    PUSH32(esp, 0x409u); /* 0x1214B212: push 0x409 */
    RECOMP_ICALL(MEM32(0x120010AC)); /* 0x1214B217: call dword ptr [0x120010ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1214B21D: push 2 */
    ecx = POP32_VAL(esp); /* 0x1214B21F: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1214B220: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1214B22C; /* 0x1214B222: jne 0x1214b22c */
L_1214B224:
    edi = MEM32(esi); /* 0x1214B224: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214B226: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x1214B227: mov dword ptr [ebp + 8], ecx */
    goto L_1214B22F; /* 0x1214B22A: jmp 0x1214b22f */
L_1214B22C:
    ecx = MEM32(ebp + 0x8); /* 0x1214B22C: mov ecx, dword ptr [ebp + 8] */
L_1214B22F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1214B22F: add esi, 8 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1214B232: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B1FC; /* 0x1214B234: je 0x1214b1fc */
L_1214B236:
    /* cmp edi, 0x37u */ /* 0x1214B236: cmp edi, 0x37 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B275; /* 0x1214B239: je 0x1214b275 */
L_1214B23B:
    ecx = 0x121EB3B0u; /* 0x1214B23B: mov ecx, 0x121eb3b0 */
    edx = ecx + 0x1; /* 0x1214B240: lea edx, [ecx + 1] */
L_1214B243:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214B243: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214B245: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214B246: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B243; /* 0x1214B248: jne 0x1214b243 */
L_1214B24A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214B24A: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + 0x1; /* 0x1214B24C: lea esi, [ecx + 1] */
    PUSH32(esp, esi); /* 0x1214B24F: push esi */
    RECOMP_CALL(sub_121BF524); /* 0x1214B250: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B255: pop ecx */
    MEM32(0x121ED8D8) = eax; /* 0x1214B256: mov dword ptr [0x121ed8d8], eax */
    /* test eax, eax */ /* 0x1214B25B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B266; /* 0x1214B25D: jne 0x1214b266 */
L_1214B25F:
    eax = 0xFFu; /* 0x1214B25F: mov eax, 0xff */
    goto L_1214B2A1; /* 0x1214B264: jmp 0x1214b2a1 */
L_1214B266:
    PUSH32(esp, esi); /* 0x1214B266: push esi */
    PUSH32(esp, 0x121EB3B0u); /* 0x1214B267: push 0x121eb3b0 */
    PUSH32(esp, eax); /* 0x1214B26C: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1214B26D: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214B272: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214B275:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1214B275: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B294; /* 0x1214B278: je 0x1214b294 */
L_1214B27A:
    PUSH32(esp, ebx); /* 0x1214B27A: push ebx */
    RECOMP_CALL(sub_121BF630); /* 0x1214B27B: call 0x121bf630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B280: pop ecx */
    /* test eax, eax */ /* 0x1214B281: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B294; /* 0x1214B283: jne 0x1214b294 */
L_1214B285:
    eax = MEM32(0x121ED910); /* 0x1214B285: mov eax, dword ptr [0x121ed910] */
    ecx = MEM32(eax + 0xC); /* 0x1214B28A: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x1214B28D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214B28F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_1214B29F; /* 0x1214B292: jmp 0x1214b29f */
L_1214B294:
    /* cmp ebx, 0xAu */ /* 0x1214B294: cmp ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B29F; /* 0x1214B297: jne 0x1214b29f */
L_1214B299:
    _flag_a = (uint32_t)(MEM32(0x121D78BC)); _flag_b = (uint32_t)(1);
    MEM32(0x121D78BC) = MEM32(0x121D78BC) + 1; /* 0x1214B299: inc dword ptr [0x121d78bc] */
    _flag_k = FK_INC;
L_1214B29F:
    eax = edi; /* 0x1214B29F: mov eax, edi */
L_1214B2A1:
    edi = POP32_VAL(esp); /* 0x1214B2A1: pop edi */
    esi = POP32_VAL(esp); /* 0x1214B2A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214B2A3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214B2A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214B2A5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214B2AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B2ADu);

L_1214B2AD:
    edi = edi; /* 0x1214B2AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B2AF: push ebp */
    ebp = esp; /* 0x1214B2B0: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1214B2B2: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1214B2B3: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1214B2B6: push esi */
    PUSH32(esp, edi); /* 0x1214B2B7: push edi */
    PUSH32(esp, 3); /* 0x1214B2B8: push 3 */
    edi = POP32_VAL(esp); /* 0x1214B2BA: pop edi */
    esi = 0x121EB3B0u; /* 0x1214B2BB: mov esi, 0x121eb3b0 */
    /* cmp ebx, 0x2Du */ /* 0x1214B2C0: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B2CA; /* 0x1214B2C3: je 0x1214b2ca */
L_1214B2C5:
    /* cmp ebx, 0x2Bu */ /* 0x1214B2C5: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B2F2; /* 0x1214B2C8: jne 0x1214b2f2 */
L_1214B2CA:
    MEM8(0x121EB3B0) = (uint8_t)(LO8(ebx)); /* 0x1214B2CA: mov byte ptr [0x121eb3b0], bl */
    esi = 0x121EB3B1u; /* 0x1214B2D0: mov esi, 0x121eb3b1 */
    goto L_1214B2E5; /* 0x1214B2D5: jmp 0x1214b2e5 */
L_1214B2D7:
    PUSH32(esp, ebx); /* 0x1214B2D7: push ebx */
    RECOMP_CALL(sub_121BF624); /* 0x1214B2D8: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B2DD: pop ecx */
    /* test eax, eax */ /* 0x1214B2DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B2F7; /* 0x1214B2E0: je 0x1214b2f7 */
L_1214B2E2:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1214B2E2: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214B2E4: inc esi */
    _flag_k = FK_INC;
L_1214B2E5:
    ecx = MEM32(0x121ED910); /* 0x1214B2E5: mov ecx, dword ptr [0x121ed910] */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B2EB: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214B2F0: mov ebx, eax */
L_1214B2F2:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1214B2F2: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B2D7; /* 0x1214B2F5: jne 0x1214b2d7 */
L_1214B2F7:
    /* cmp ebx, 0x2Eu */ /* 0x1214B2F7: cmp ebx, 0x2e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B376; /* 0x1214B2FA: jne 0x1214b376 */
L_1214B2FC:
    ecx = MEM32(0x121ED910); /* 0x1214B2FC: mov ecx, dword ptr [0x121ed910] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1214B302: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214B304: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1214AE23); /* 0x1214B305: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1214B30A: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214B328; /* 0x1214B30D: jmp 0x1214b328 */
L_1214B30F:
    PUSH32(esp, ebx); /* 0x1214B30F: push ebx */
    RECOMP_CALL(sub_121BF624); /* 0x1214B310: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B315: pop ecx */
    /* test eax, eax */ /* 0x1214B316: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B32E; /* 0x1214B318: je 0x1214b32e */
L_1214B31A:
    ecx = MEM32(0x121ED910); /* 0x1214B31A: mov ecx, dword ptr [0x121ed910] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1214B320: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214B322: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1214AE23); /* 0x1214B323: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
L_1214B328:
    ebx = eax; /* 0x1214B328: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x1214B32A: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B30F; /* 0x1214B32C: jne 0x1214b30f */
L_1214B32E:
    /* cmp ebx, 0x65u */ /* 0x1214B32E: cmp ebx, 0x65 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B338; /* 0x1214B331: je 0x1214b338 */
L_1214B333:
    /* cmp ebx, 0x45u */ /* 0x1214B333: cmp ebx, 0x45 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B373; /* 0x1214B336: jne 0x1214b373 */
L_1214B338:
    ecx = MEM32(0x121ED910); /* 0x1214B338: mov ecx, dword ptr [0x121ed910] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1214B33E: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214B340: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1214AE23); /* 0x1214B341: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214B346: mov ebx, eax */
    /* cmp ebx, 0x2Bu */ /* 0x1214B348: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B35F; /* 0x1214B34B: je 0x1214b35f */
L_1214B34D:
    /* cmp ebx, 0x2Du */ /* 0x1214B34D: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B36F; /* 0x1214B350: jne 0x1214b36f */
L_1214B352:
    goto L_1214B35F; /* 0x1214B352: jmp 0x1214b35f */
L_1214B354:
    PUSH32(esp, ebx); /* 0x1214B354: push ebx */
    RECOMP_CALL(sub_121BF624); /* 0x1214B355: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B35A: pop ecx */
    /* test eax, eax */ /* 0x1214B35B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B373; /* 0x1214B35D: je 0x1214b373 */
L_1214B35F:
    ecx = MEM32(0x121ED910); /* 0x1214B35F: mov ecx, dword ptr [0x121ed910] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1214B365: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214B367: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1214AE23); /* 0x1214B368: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1214B36D: mov ebx, eax */
L_1214B36F:
    /* cmp ebx, edi */ /* 0x1214B36F: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B354; /* 0x1214B371: jne 0x1214b354 */
L_1214B373:
    PUSH32(esp, 4); /* 0x1214B373: push 4 */
    edi = POP32_VAL(esp); /* 0x1214B375: pop edi */
L_1214B376:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x1214B376: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B388; /* 0x1214B379: je 0x1214b388 */
L_1214B37B:
    eax = MEM32(0x121ED910); /* 0x1214B37B: mov eax, dword ptr [0x121ed910] */
    ecx = MEM32(eax + 0xC); /* 0x1214B380: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x1214B383: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214B385: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1214B388:
    MEM8(esi) = (uint8_t)(0); /* 0x1214B388: mov byte ptr [esi], 0 */
    /* cmp edi, 4 */ /* 0x1214B38B: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B3A2; /* 0x1214B38E: jne 0x1214b3a2 */
L_1214B390:
    PUSH32(esp, 0x121EB3B0u); /* 0x1214B390: push 0x121eb3b0 */
    RECOMP_CALL(sub_121BF9B2); /* 0x1214B395: call 0x121bf9b2 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121ED8D8) = _v; } /* 0x1214B39A: fstp dword ptr [0x121ed8d8] */
    goto L_1214B3B6; /* 0x1214B3A0: jmp 0x1214b3b6 */
L_1214B3A2:
    /* cmp edi, 3 */ /* 0x1214B3A2: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B3B7; /* 0x1214B3A5: jne 0x1214b3b7 */
L_1214B3A7:
    PUSH32(esp, 0x121EB3B0u); /* 0x1214B3A7: push 0x121eb3b0 */
    RECOMP_CALL(sub_121BF9A6); /* 0x1214B3AC: call 0x121bf9a6 */
    RECOMP_FLAGS_IN();
    MEM32(0x121ED8D8) = eax; /* 0x1214B3B1: mov dword ptr [0x121ed8d8], eax */
L_1214B3B6:
    ecx = POP32_VAL(esp); /* 0x1214B3B6: pop ecx */
L_1214B3B7:
    eax = edi; /* 0x1214B3B7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1214B3B9: pop edi */
    esi = POP32_VAL(esp); /* 0x1214B3BA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214B3BB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214B3BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214B3BD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214B3C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B3C5u);

L_1214B3C5:
    edi = edi; /* 0x1214B3C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B3C7: push ebp */
    ebp = esp; /* 0x1214B3C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1214B3CA: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214B3CD: push ebx */
    PUSH32(esp, esi); /* 0x1214B3CE: push esi */
    PUSH32(esp, edi); /* 0x1214B3CF: push edi */
    edi = eax; /* 0x1214B3D0: mov edi, eax */
    ecx = edi; /* 0x1214B3D2: mov ecx, edi */
    RECOMP_CALL(sub_1214AE49); /* 0x1214B3D4: call 0x1214ae49 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214B3D9: mov esi, eax */
    /* cmp esi, 0xFu */ /* 0x1214B3DB: cmp esi, 0xf */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214B65E; /* 0x1214B3DE: jg 0x1214b65e */
L_1214B3E4:
    /* cmp esi, 0xAu */ /* 0x1214B3E4: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214B649; /* 0x1214B3E7: jge 0x1214b649 */
L_1214B3ED:
    eax = esi + 0x1; /* 0x1214B3ED: lea eax, [esi + 1] */
    /* cmp eax, 8 */ /* 0x1214B3F0: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214B644; /* 0x1214B3F3: ja 0x1214b644 */
L_1214B3F9:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1214B6C9)); goto _ljump; }
L_1214B400:
    ecx = MEM32(edi + 0xC); /* 0x1214B400: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B403: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x1214B405: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1214B408: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1214B409: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B40C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B41A; /* 0x1214B40E: jne 0x1214b41a */
L_1214B410:
    eax = 0xFFu; /* 0x1214B410: mov eax, 0xff */
    goto L_1214B64B; /* 0x1214B415: jmp 0x1214b64b */
L_1214B41A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214B41A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x121EB3B0u; /* 0x1214B41C: mov eax, 0x121eb3b0 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214B421: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1214B424: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214B44E; /* 0x1214B427: jbe 0x1214b44e */
L_1214B429:
    ecx = edi; /* 0x1214B429: mov ecx, edi */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B42B: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1214B430: mov ecx, eax */
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x1214B432: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B435: je 0x1214b410 */
L_1214B437:
    eax = MEM32(ebp + (-0x8)); /* 0x1214B437: mov eax, dword ptr [ebp - 8] */
    /* cmp ebx, 0x1FFu */ /* 0x1214B43A: cmp ebx, 0x1ff */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214B448; /* 0x1214B440: jae 0x1214b448 */
L_1214B442:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1214B442: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214B444: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1214B445: mov dword ptr [ebp - 8], eax */
L_1214B448:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214B448: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x1214B449: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214B429; /* 0x1214B44C: jb 0x1214b429 */
L_1214B44E:
    ebx = 0x121EB3B0u; /* 0x1214B44E: mov ebx, 0x121eb3b0 */
    ecx = ebx; /* 0x1214B453: mov ecx, ebx */
    MEM8(eax) = (uint8_t)(0); /* 0x1214B455: mov byte ptr [eax], 0 */
    edx = ecx + 0x1; /* 0x1214B458: lea edx, [ecx + 1] */
L_1214B45B:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214B45B: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214B45D: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214B45E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B45B; /* 0x1214B460: jne 0x1214b45b */
L_1214B462:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214B462: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = ecx + 0x1; /* 0x1214B464: lea edi, [ecx + 1] */
    PUSH32(esp, edi); /* 0x1214B467: push edi */
    RECOMP_CALL(sub_121BF524); /* 0x1214B468: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B46D: pop ecx */
    MEM32(0x121ED8D8) = eax; /* 0x1214B46E: mov dword ptr [0x121ed8d8], eax */
    /* test eax, eax */ /* 0x1214B473: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B644; /* 0x1214B475: je 0x1214b644 */
L_1214B47B:
    PUSH32(esp, edi); /* 0x1214B47B: push edi */
    PUSH32(esp, ebx); /* 0x1214B47C: push ebx */
    goto L_1214B6BE; /* 0x1214B47D: jmp 0x1214b6be */
L_1214B482:
    ecx = MEM32(edi + 0xC); /* 0x1214B482: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B485: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x1214B487: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1214B48A: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1214B48B: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B48E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B490: je 0x1214b410 */
L_1214B496:
    ebx = MEM32(ebp + (-0x4)); /* 0x1214B496: mov ebx, dword ptr [ebp - 4] */
    /* test ebx, ebx */ /* 0x1214B499: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B49B: je 0x1214b410 */
L_1214B4A1:
    eax = ebx; /* 0x1214B4A1: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1214B4A3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1214B4A3: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1214B4A6: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x1214B4A7: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B4AC: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1214B4AD: mov dword ptr [ebp - 0xc], eax */
    /* test eax, eax */ /* 0x1214B4B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B4B2: je 0x1214b410 */
L_1214B4B8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1214B4B8: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1214B4BC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B4ED; /* 0x1214B4BE: je 0x1214b4ed */
L_1214B4C0:
    ecx = MEM32(edi + 0xC); /* 0x1214B4C0: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B4C3: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x10); /* 0x1214B4C5: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1214B4C8: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1214B4C9: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B4CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B4CE: je 0x1214b410 */
L_1214B4D4:
    ecx = MEM32(ebp + (-0x8)); /* 0x1214B4D4: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x1214B4D7: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x1214B4DA: mov edx, dword ptr [ebp - 0xc] */
    MEM32(edx + ecx * 4) = eax; /* 0x1214B4DD: mov dword ptr [edx + ecx*4], eax */
    ebx = MEM32(ebp + (-0x4)); /* 0x1214B4E0: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214B4E3: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214B4E4: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, ebx */ /* 0x1214B4E7: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214B4C0; /* 0x1214B4E9: jb 0x1214b4c0 */
L_1214B4EB:
    eax = edx; /* 0x1214B4EB: mov eax, edx */
L_1214B4ED:
    MEM32(0x121ED8DC) = eax; /* 0x1214B4ED: mov dword ptr [0x121ed8dc], eax */
    MEM32(0x121ED8D8) = ebx; /* 0x1214B4F2: mov dword ptr [0x121ed8d8], ebx */
    goto L_1214B649; /* 0x1214B4F8: jmp 0x1214b649 */
L_1214B4FD:
    ecx = MEM32(edi + 0xC); /* 0x1214B4FD: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B500: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x1214B502: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1214B505: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1214B506: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B509: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B50B: je 0x1214b410 */
L_1214B511:
    ebx = MEM32(ebp + (-0x4)); /* 0x1214B511: mov ebx, dword ptr [ebp - 4] */
    /* test ebx, ebx */ /* 0x1214B514: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B516: je 0x1214b410 */
L_1214B51C:
    eax = ebx; /* 0x1214B51C: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1214B51E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1214B51E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1214B521: push eax */
    RECOMP_CALL(sub_121BF524); /* 0x1214B522: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B527: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214B528: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x1214B52B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B52D: je 0x1214b410 */
L_1214B533:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1214B533: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x24), 4 */ /* 0x1214B537: cmp dword ptr [edi + 0x24], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B56E; /* 0x1214B53B: jne 0x1214b56e */
L_1214B53D:
    /* test ebx, ebx */ /* 0x1214B53D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B4ED; /* 0x1214B53F: je 0x1214b4ed */
L_1214B541:
    ecx = MEM32(edi + 0xC); /* 0x1214B541: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B544: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x10); /* 0x1214B546: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1214B549: push edx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1214B54A: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B54D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B54F: je 0x1214b410 */
L_1214B555:
    eax = MEM32(ebp + (-0xC)); /* 0x1214B555: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1214B558: fld dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1214B55B: mov ecx, dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x1214B55E: fstp dword ptr [ecx + eax*4] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1214B561: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214B564: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = eax; /* 0x1214B565: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, ebx */ /* 0x1214B568: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214B541; /* 0x1214B56A: jb 0x1214b541 */
L_1214B56C:
    goto L_1214B5A1; /* 0x1214B56C: jmp 0x1214b5a1 */
L_1214B56E:
    /* test ebx, ebx */ /* 0x1214B56E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B4ED; /* 0x1214B570: je 0x1214b4ed */
L_1214B576:
    ecx = MEM32(edi + 0xC); /* 0x1214B576: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B579: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x14); /* 0x1214B57B: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1214B57E: push edx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1214B57F: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B582: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B584: je 0x1214b410 */
L_1214B58A:
    eax = MEM32(ebp + (-0xC)); /* 0x1214B58A: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x1214B58D: fld qword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1214B590: mov ecx, dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x1214B593: fstp dword ptr [ecx + eax*4] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1214B596: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214B599: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = eax; /* 0x1214B59A: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, ebx */ /* 0x1214B59D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214B576; /* 0x1214B59F: jb 0x1214b576 */
L_1214B5A1:
    eax = ecx; /* 0x1214B5A1: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_1214B4ED; /* 0x1214B5A3: jmp 0x1214b4ed */
L_1214B5A8:
    ecx = MEM32(edi + 0xC); /* 0x1214B5A8: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B5AB: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x10); /* 0x1214B5AD: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1214B5B0: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1214B5B1: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B5B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B5B6: je 0x1214b410 */
L_1214B5BC:
    eax = MEM32(ebp + (-0x10)); /* 0x1214B5BC: mov eax, dword ptr [ebp - 0x10] */
    MEM32(0x121ED8D8) = eax; /* 0x1214B5BF: mov dword ptr [0x121ed8d8], eax */
    goto L_1214B649; /* 0x1214B5C4: jmp 0x1214b649 */
L_1214B5C9:
    /* cmp MEM32(edi + 0x24), 4 */ /* 0x1214B5C9: cmp dword ptr [edi + 0x24], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0xC); /* 0x1214B5CD: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B5D0: mov eax, dword ptr [ecx] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B5E8; /* 0x1214B5D2: jne 0x1214b5e8 */
L_1214B5D4:
    edx = ebp + (-0x10); /* 0x1214B5D4: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1214B5D7: push edx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1214B5D8: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B5DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B5DD: je 0x1214b410 */
L_1214B5E3:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1214B5E3: fld dword ptr [ebp - 0x10] */
    goto L_1214B5FA; /* 0x1214B5E6: jmp 0x1214b5fa */
L_1214B5E8:
    edx = ebp + (-0x14); /* 0x1214B5E8: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1214B5EB: push edx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1214B5EC: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214B5EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B410; /* 0x1214B5F1: je 0x1214b410 */
L_1214B5F7:
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x1214B5F7: fld qword ptr [ebp - 0x14] */
L_1214B5FA:
    { float _v = (float)fp_pop(); *(float*)ADDR(0x121ED8D8) = _v; } /* 0x1214B5FA: fstp dword ptr [0x121ed8d8] */
    goto L_1214B649; /* 0x1214B600: jmp 0x1214b649 */
L_1214B602:
    ecx = MEM32(edi + 0xC); /* 0x1214B602: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x1214B605: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x121ED8D8u); /* 0x1214B607: push 0x121ed8d8 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1214B60C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1214B60F: mov ecx, edi */
    RECOMP_CALL(sub_1214AE49); /* 0x1214B611: call 0x1214ae49 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1214B616: mov ecx, edi */
    MEM16(0x121ED8DC) = (uint16_t)(LO16(eax)); /* 0x1214B618: mov word ptr [0x121ed8dc], ax */
    RECOMP_CALL(sub_1214AE49); /* 0x1214B61E: call 0x1214ae49 */
    RECOMP_FLAGS_IN();
    MEM16(0x121ED8DE) = (uint16_t)(LO16(eax)); /* 0x1214B623: mov word ptr [0x121ed8de], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214B629: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214B62B:
    ecx = MEM32(edi + 0xC); /* 0x1214B62B: mov ecx, dword ptr [edi + 0xc] */
    edx = MEM32(ecx); /* 0x1214B62E: mov edx, dword ptr [ecx] */
    eax = ebx + 0x121ED8E0; /* 0x1214B630: lea eax, [ebx + 0x121ed8e0] */
    PUSH32(esp, eax); /* 0x1214B636: push eax */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x1214B637: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214B63A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 8 */ /* 0x1214B63B: cmp ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214B62B; /* 0x1214B63E: jl 0x1214b62b */
L_1214B640:
    /* test eax, eax */ /* 0x1214B640: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B649; /* 0x1214B642: jne 0x1214b649 */
L_1214B644:
    esi = 0xFFu; /* 0x1214B644: mov esi, 0xff */
L_1214B649:
    eax = esi; /* 0x1214B649: mov eax, esi */
L_1214B64B:
    edi = POP32_VAL(esp); /* 0x1214B64B: pop edi */
    esi = POP32_VAL(esp); /* 0x1214B64C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214B64D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214B64E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214B64F: ret  */
L_1214B650:
    MEM32(0x121ED918) = 1; /* 0x1214B650: mov dword ptr [0x121ed918], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214B65A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1214B649; /* 0x1214B65C: jmp 0x1214b649 */
L_1214B65E:
    /* cmp esi, 0x36u */ /* 0x1214B65E: cmp esi, 0x36 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1214B644; /* 0x1214B661: jg 0x1214b644 */
L_1214B663:
    /* cmp esi, 0x31u */ /* 0x1214B663: cmp esi, 0x31 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214B681; /* 0x1214B666: jge 0x1214b681 */
L_1214B668:
    /* cmp esi, 0x12u */ /* 0x1214B668: cmp esi, 0x12 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214B644; /* 0x1214B66B: jl 0x1214b644 */
L_1214B66D:
    /* cmp esi, 0x14u */ /* 0x1214B66D: cmp esi, 0x14 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214B649; /* 0x1214B670: jle 0x1214b649 */
L_1214B672:
    /* cmp esi, 0x1Fu */ /* 0x1214B672: cmp esi, 0x1f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B681; /* 0x1214B675: je 0x1214b681 */
L_1214B677:
    /* cmp esi, 0x27u */ /* 0x1214B677: cmp esi, 0x27 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x27u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214B644; /* 0x1214B67A: jle 0x1214b644 */
L_1214B67C:
    /* cmp esi, 0x2Fu */ /* 0x1214B67C: cmp esi, 0x2f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1214B644; /* 0x1214B67F: jg 0x1214b644 */
L_1214B681:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214B681: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214B683:
    /* cmp esi, MEM32(eax * 8 + 0x121D8364) */ /* 0x1214B683: cmp esi, dword ptr [eax*8 + 0x121d8364] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax * 8 + 0x121D8364));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B694; /* 0x1214B68A: je 0x1214b694 */
L_1214B68C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214B68C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x10u */ /* 0x1214B68D: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214B683; /* 0x1214B690: jb 0x1214b683 */
L_1214B692:
    RECOMP_BACKEDGE();
    goto L_1214B649; /* 0x1214B692: jmp 0x1214b649 */
L_1214B694:
    edi = MEM32(eax * 8 + 0x121D8360); /* 0x1214B694: mov edi, dword ptr [eax*8 + 0x121d8360] */
    ecx = edi; /* 0x1214B69B: mov ecx, edi */
    edx = ecx + 0x1; /* 0x1214B69D: lea edx, [ecx + 1] */
L_1214B6A0:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214B6A0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214B6A2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214B6A3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B6A0; /* 0x1214B6A5: jne 0x1214b6a0 */
L_1214B6A7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214B6A7: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x1214B6A9: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x1214B6AC: push ebx */
    RECOMP_CALL(sub_121BF524); /* 0x1214B6AD: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B6B2: pop ecx */
    MEM32(0x121ED8D8) = eax; /* 0x1214B6B3: mov dword ptr [0x121ed8d8], eax */
    /* test eax, eax */ /* 0x1214B6B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B644; /* 0x1214B6BA: je 0x1214b644 */
L_1214B6BC:
    PUSH32(esp, ebx); /* 0x1214B6BC: push ebx */
    PUSH32(esp, edi); /* 0x1214B6BD: push edi */
L_1214B6BE:
    PUSH32(esp, eax); /* 0x1214B6BE: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1214B6BF: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214B6C4: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1214B649; /* 0x1214B6C7: jmp 0x1214b649 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1214B400u: goto L_1214B400;
      case 0x1214B482u: goto L_1214B482;
      case 0x1214B4FDu: goto L_1214B4FD;
      case 0x1214B5A8u: goto L_1214B5A8;
      case 0x1214B5C9u: goto L_1214B5C9;
      case 0x1214B602u: goto L_1214B602;
      case 0x1214B644u: goto L_1214B644;
      case 0x1214B650u: goto L_1214B650;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1214B6F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B6F2u);

L_1214B6F2:
    edi = edi; /* 0x1214B6F2: mov edi, edi */
    PUSH32(esp, esi); /* 0x1214B6F4: push esi */
    PUSH32(esp, edi); /* 0x1214B6F5: push edi */
    PUSH32(esp, 0xAu); /* 0x1214B6F6: push 0xa */
    edi = POP32_VAL(esp); /* 0x1214B6F8: pop edi */
L_1214B6F9:
    ecx = ebx; /* 0x1214B6F9: mov ecx, ebx */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B6FB: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214B700: mov esi, eax */
    /* cmp esi, edi */ /* 0x1214B702: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B70E; /* 0x1214B704: jne 0x1214b70e */
L_1214B706:
    _flag_a = (uint32_t)(MEM32(0x121D78BC)); _flag_b = (uint32_t)(1);
    MEM32(0x121D78BC) = MEM32(0x121D78BC) + 1; /* 0x1214B706: inc dword ptr [0x121d78bc] */
    _flag_k = FK_INC;
    goto L_1214B763; /* 0x1214B70C: jmp 0x1214b763 */
L_1214B70E:
    /* cmp esi, 0x23u */ /* 0x1214B70E: cmp esi, 0x23 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B727; /* 0x1214B711: jne 0x1214b727 */
L_1214B713:
    ecx = ebx; /* 0x1214B713: mov ecx, ebx */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B715: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214B71A: mov esi, eax */
    /* cmp esi, edi */ /* 0x1214B71C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B749; /* 0x1214B71E: je 0x1214b749 */
L_1214B720:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1214B720: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B713; /* 0x1214B723: jne 0x1214b713 */
L_1214B725:
    goto L_1214B749; /* 0x1214B725: jmp 0x1214b749 */
L_1214B727:
    /* cmp esi, 0x2Fu */ /* 0x1214B727: cmp esi, 0x2f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B75E; /* 0x1214B72A: jne 0x1214b75e */
L_1214B72C:
    ecx = ebx; /* 0x1214B72C: mov ecx, ebx */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B72E: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1214B733: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B751; /* 0x1214B735: jne 0x1214b751 */
L_1214B737:
    ecx = ebx; /* 0x1214B737: mov ecx, ebx */
    RECOMP_CALL(sub_1214AE23); /* 0x1214B739: call 0x1214ae23 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214B73E: mov esi, eax */
    /* cmp esi, edi */ /* 0x1214B740: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B749; /* 0x1214B742: je 0x1214b749 */
L_1214B744:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1214B744: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B737; /* 0x1214B747: jne 0x1214b737 */
L_1214B749:
    _flag_a = (uint32_t)(MEM32(0x121D78BC)); _flag_b = (uint32_t)(1);
    MEM32(0x121D78BC) = MEM32(0x121D78BC) + 1; /* 0x1214B749: inc dword ptr [0x121d78bc] */
    _flag_k = FK_INC;
    goto L_1214B75E; /* 0x1214B74F: jmp 0x1214b75e */
L_1214B751:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1214B751: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B763; /* 0x1214B754: je 0x1214b763 */
L_1214B756:
    ecx = MEM32(ebx + 0xC); /* 0x1214B756: mov ecx, dword ptr [ebx + 0xc] */
    eax = MEM32(ecx); /* 0x1214B759: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214B75B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1214B75E:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1214B75E: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B76E; /* 0x1214B761: je 0x1214b76e */
L_1214B763:
    PUSH32(esp, esi); /* 0x1214B763: push esi */
    RECOMP_CALL(sub_121BF630); /* 0x1214B764: call 0x121bf630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B769: pop ecx */
    /* test eax, eax */ /* 0x1214B76A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B6F9; /* 0x1214B76C: jne 0x1214b6f9 */
L_1214B76E:
    /* cmp esi, 0x7Bu */ /* 0x1214B76E: cmp esi, 0x7b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B82F; /* 0x1214B771: je 0x1214b82f */
L_1214B777:
    /* cmp esi, 0x7Du */ /* 0x1214B777: cmp esi, 0x7d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B780; /* 0x1214B77A: jne 0x1214b780 */
L_1214B77C:
    PUSH32(esp, 0xBu); /* 0x1214B77C: push 0xb */
    goto L_1214B7BD; /* 0x1214B77E: jmp 0x1214b7bd */
L_1214B780:
    /* cmp esi, 0x28u */ /* 0x1214B780: cmp esi, 0x28 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B789; /* 0x1214B783: jne 0x1214b789 */
L_1214B785:
    PUSH32(esp, 0xCu); /* 0x1214B785: push 0xc */
    goto L_1214B7BD; /* 0x1214B787: jmp 0x1214b7bd */
L_1214B789:
    /* cmp esi, 0x29u */ /* 0x1214B789: cmp esi, 0x29 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B792; /* 0x1214B78C: jne 0x1214b792 */
L_1214B78E:
    PUSH32(esp, 0xDu); /* 0x1214B78E: push 0xd */
    goto L_1214B7BD; /* 0x1214B790: jmp 0x1214b7bd */
L_1214B792:
    /* cmp esi, 0x5Bu */ /* 0x1214B792: cmp esi, 0x5b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B79B; /* 0x1214B795: jne 0x1214b79b */
L_1214B797:
    PUSH32(esp, 0xEu); /* 0x1214B797: push 0xe */
    goto L_1214B7BD; /* 0x1214B799: jmp 0x1214b7bd */
L_1214B79B:
    /* cmp esi, 0x5Du */ /* 0x1214B79B: cmp esi, 0x5d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B7A4; /* 0x1214B79E: jne 0x1214b7a4 */
L_1214B7A0:
    PUSH32(esp, 0xFu); /* 0x1214B7A0: push 0xf */
    goto L_1214B7BD; /* 0x1214B7A2: jmp 0x1214b7bd */
L_1214B7A4:
    /* cmp esi, 0x2Eu */ /* 0x1214B7A4: cmp esi, 0x2e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B7AD; /* 0x1214B7A7: jne 0x1214b7ad */
L_1214B7A9:
    PUSH32(esp, 0x12u); /* 0x1214B7A9: push 0x12 */
    goto L_1214B7BD; /* 0x1214B7AB: jmp 0x1214b7bd */
L_1214B7AD:
    /* cmp esi, 0x2Cu */ /* 0x1214B7AD: cmp esi, 0x2c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B7B6; /* 0x1214B7B0: jne 0x1214b7b6 */
L_1214B7B2:
    PUSH32(esp, 0x13u); /* 0x1214B7B2: push 0x13 */
    goto L_1214B7BD; /* 0x1214B7B4: jmp 0x1214b7bd */
L_1214B7B6:
    /* cmp esi, 0x3Bu */ /* 0x1214B7B6: cmp esi, 0x3b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B7C0; /* 0x1214B7B9: jne 0x1214b7c0 */
L_1214B7BB:
    PUSH32(esp, 0x14u); /* 0x1214B7BB: push 0x14 */
L_1214B7BD:
    edi = POP32_VAL(esp); /* 0x1214B7BD: pop edi */
    goto L_1214B82F; /* 0x1214B7BE: jmp 0x1214b82f */
L_1214B7C0:
    /* cmp esi, 0x22u */ /* 0x1214B7C0: cmp esi, 0x22 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B7CC; /* 0x1214B7C3: jne 0x1214b7cc */
L_1214B7C5:
    RECOMP_CALL(sub_1214AFCA); /* 0x1214B7C5: call 0x1214afca */
    RECOMP_FLAGS_IN();
    goto L_1214B82D; /* 0x1214B7CA: jmp 0x1214b82d */
L_1214B7CC:
    /* cmp esi, 0x3Cu */ /* 0x1214B7CC: cmp esi, 0x3c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B7D8; /* 0x1214B7CF: jne 0x1214b7d8 */
L_1214B7D1:
    RECOMP_CALL(sub_1214AEBC); /* 0x1214B7D1: call 0x1214aebc */
    RECOMP_FLAGS_IN();
    goto L_1214B82D; /* 0x1214B7D6: jmp 0x1214b82d */
L_1214B7D8:
    PUSH32(esp, esi); /* 0x1214B7D8: push esi */
    RECOMP_CALL(sub_121BF9BE); /* 0x1214B7D9: call 0x121bf9be */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B7DE: pop ecx */
    /* test eax, eax */ /* 0x1214B7DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B827; /* 0x1214B7E1: jne 0x1214b827 */
L_1214B7E3:
    /* cmp esi, 0x5Fu */ /* 0x1214B7E3: cmp esi, 0x5f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B827; /* 0x1214B7E6: je 0x1214b827 */
L_1214B7E8:
    PUSH32(esp, esi); /* 0x1214B7E8: push esi */
    RECOMP_CALL(sub_121BF624); /* 0x1214B7E9: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B7EE: pop ecx */
    /* test eax, eax */ /* 0x1214B7EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214B81F; /* 0x1214B7F1: jne 0x1214b81f */
L_1214B7F3:
    /* cmp esi, 0x2Du */ /* 0x1214B7F3: cmp esi, 0x2d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B81F; /* 0x1214B7F6: je 0x1214b81f */
L_1214B7F8:
    /* cmp esi, 0x2Bu */ /* 0x1214B7F8: cmp esi, 0x2b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B81F; /* 0x1214B7FB: je 0x1214b81f */
L_1214B7FD:
    /* cmp esi, 0xFEu */ /* 0x1214B7FD: cmp esi, 0xfe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B80C; /* 0x1214B803: jne 0x1214b80c */
L_1214B805:
    edi = 0xFFu; /* 0x1214B805: mov edi, 0xff */
    goto L_1214B82F; /* 0x1214B80A: jmp 0x1214b82f */
L_1214B80C:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1214B80C: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B805; /* 0x1214B80F: jne 0x1214b805 */
L_1214B811:
    MEM32(0x121ED918) = 1; /* 0x1214B811: mov dword ptr [0x121ed918], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214B81B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214B82F; /* 0x1214B81D: jmp 0x1214b82f */
L_1214B81F:
    PUSH32(esp, esi); /* 0x1214B81F: push esi */
    RECOMP_CALL(sub_1214B2AD); /* 0x1214B820: call 0x1214b2ad */
    RECOMP_FLAGS_IN();
    goto L_1214B82D; /* 0x1214B825: jmp 0x1214b82d */
L_1214B827:
    PUSH32(esp, esi); /* 0x1214B827: push esi */
    RECOMP_CALL(sub_1214B185); /* 0x1214B828: call 0x1214b185 */
    RECOMP_FLAGS_IN();
L_1214B82D:
    edi = eax; /* 0x1214B82D: mov edi, eax */
L_1214B82F:
    eax = edi; /* 0x1214B82F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1214B831: pop edi */
    esi = POP32_VAL(esp); /* 0x1214B832: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214B833: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214B839(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B839u);

L_1214B839:
    edi = edi; /* 0x1214B839: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B83B: push ebp */
    ebp = esp; /* 0x1214B83C: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1214B83E: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1214B841: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B84C; /* 0x1214B843: je 0x1214b84c */
L_1214B845:
    eax = MEM32(ecx); /* 0x1214B845: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1214B847: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214B849: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1214B84C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214B84C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1214B84E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214B84F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214B857(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B857u);

L_1214B857:
    edi = edi; /* 0x1214B857: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B859: push ebp */
    ebp = esp; /* 0x1214B85A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1214B85C: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x4); /* 0x1214B85F: mov edx, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x1214B862: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x4) = eax; /* 0x1214B864: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x1214B867: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = 0xAu; /* 0x1214B86A: mov dword ptr [ecx + 0xc], 0xa */
    MEM32(ecx + 0x10) = edx; /* 0x1214B871: mov dword ptr [ecx + 0x10], edx */
    MEM32(ecx) = 0x120114D0u; /* 0x1214B874: mov dword ptr [ecx], 0x120114d0 */
    eax = ecx; /* 0x1214B87A: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1214B87C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214B87D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214B885(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B885u);

L_1214B885:
    edi = edi; /* 0x1214B885: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B887: push ebp */
    ebp = esp; /* 0x1214B888: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1214B88A: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x4); /* 0x1214B88D: mov edx, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x1214B890: mov eax, dword ptr [eax] */
    MEM32(ecx + 0x4) = eax; /* 0x1214B892: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x1214B895: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = 0xFAu; /* 0x1214B898: mov dword ptr [ecx + 0xc], 0xfa */
    MEM32(ecx + 0x10) = edx; /* 0x1214B89F: mov dword ptr [ecx + 0x10], edx */
    MEM32(ecx) = 0x120114D0u; /* 0x1214B8A2: mov dword ptr [ecx], 0x120114d0 */
    eax = ecx; /* 0x1214B8A8: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1214B8AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214B8AB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214B8B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B8B3u);

L_1214B8B3:
    edi = edi; /* 0x1214B8B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B8B5: push ebp */
    ebp = esp; /* 0x1214B8B6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214B8B8: push esi */
    esi = ecx; /* 0x1214B8B9: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1214B8BB: push dword ptr [esi + 0x10] */
    MEM32(esi) = 0x120114D0u; /* 0x1214B8BE: mov dword ptr [esi], 0x120114d0 */
    RECOMP_CALL(sub_121BF586); /* 0x1214B8C4: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1214B8C9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x1214B8CD: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B8D7; /* 0x1214B8CE: je 0x1214b8d7 */
L_1214B8D0:
    PUSH32(esp, esi); /* 0x1214B8D0: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1214B8D1: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B8D6: pop ecx */
L_1214B8D7:
    eax = esi; /* 0x1214B8D7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214B8D9: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214B8DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214B8DB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214B8E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B8E3u);

L_1214B8E3:
    edi = edi; /* 0x1214B8E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B8E5: push ebp */
    ebp = esp; /* 0x1214B8E6: mov ebp, esp */
    eax = MEM32(ecx + 0x4); /* 0x1214B8E8: mov eax, dword ptr [ecx + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1214B8EB: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1214B8EB: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1214B8EE: push eax */
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x1214B8EF: push dword ptr [ecx + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1214B8F2: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12148729); /* 0x1214B8F5: call 0x12148729 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1214B8FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214B8FB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214B903(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B903u);

L_1214B903:
    /* cmp MEM32(0x121ED91C), 0 */ /* 0x1214B903: cmp dword ptr [0x121ed91c], 0 */
    _flag_a = (uint32_t)(MEM32(0x121ED91C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214B919; /* 0x1214B90A: je 0x1214b919 */
L_1214B90C:
    _flag_a = (uint32_t)(MEM32(0x121ED91C)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED91C) = MEM32(0x121ED91C) & 0; /* 0x1214B90C: and dword ptr [0x121ed91c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFu; /* 0x1214B913: mov eax, 0xff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214B918: ret  */
L_1214B919:
    PUSH32(esp, ebx); /* 0x1214B919: push ebx */
    ebx = MEM32(0x121ED910); /* 0x1214B91A: mov ebx, dword ptr [0x121ed910] */
    /* cmp MEM32(ebx + 0x20), 0 */ /* 0x1214B920: cmp dword ptr [ebx + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B92F; /* 0x1214B924: jne 0x1214b92f */
L_1214B926:
    eax = ebx; /* 0x1214B926: mov eax, ebx */
    RECOMP_CALL(sub_1214B3C5); /* 0x1214B928: call 0x1214b3c5 */
    RECOMP_FLAGS_IN();
    goto L_1214B941; /* 0x1214B92D: jmp 0x1214b941 */
L_1214B92F:
    /* cmp MEM32(ebx + 0x20), 1 */ /* 0x1214B92F: cmp dword ptr [ebx + 0x20], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B93C; /* 0x1214B933: jne 0x1214b93c */
L_1214B935:
    RECOMP_CALL(sub_1214B6F2); /* 0x1214B935: call 0x1214b6f2 */
    RECOMP_FLAGS_IN();
    goto L_1214B941; /* 0x1214B93A: jmp 0x1214b941 */
L_1214B93C:
    eax = 0xFFu; /* 0x1214B93C: mov eax, 0xff */
L_1214B941:
    ebx = POP32_VAL(esp); /* 0x1214B941: pop ebx */
    /* cmp eax, 0x37u */ /* 0x1214B942: cmp eax, 0x37 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B953; /* 0x1214B945: jne 0x1214b953 */
L_1214B947:
    MEM32(0x121ED918) = 1; /* 0x1214B947: mov dword ptr [0x121ed918], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214B951: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214B953:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214B953: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214B959(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B959u);

L_1214B959:
    edi = edi; /* 0x1214B959: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B95B: push ebp */
    ebp = esp; /* 0x1214B95C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214B95E: push esi */
    PUSH32(esp, edi); /* 0x1214B95F: push edi */
    esi = ecx; /* 0x1214B960: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214B962: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x2C), edi */ /* 0x1214B964: cmp dword ptr [esi + 0x2c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214B995; /* 0x1214B967: jne 0x1214b995 */
L_1214B969:
    PUSH32(esp, 0x120014BCu); /* 0x1214B969: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x1214B96E: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x1214B970: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214B975: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214B976: pop ecx */
    /* test eax, eax */ /* 0x1214B977: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B98C; /* 0x1214B979: je 0x1214b98c */
L_1214B97B:
    MEM32(eax) = edi; /* 0x1214B97B: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x1214B97D: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = 0x64u; /* 0x1214B980: mov dword ptr [eax + 8], 0x64 */
    MEM32(eax + 0xC) = edi; /* 0x1214B987: mov dword ptr [eax + 0xc], edi */
    goto L_1214B98E; /* 0x1214B98A: jmp 0x1214b98e */
L_1214B98C:
    eax = edi; /* 0x1214B98C: mov eax, edi */
L_1214B98E:
    MEM32(esi + 0x2C) = eax; /* 0x1214B98E: mov dword ptr [esi + 0x2c], eax */
    /* test eax, eax */ /* 0x1214B991: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214B9A1; /* 0x1214B993: je 0x1214b9a1 */
L_1214B995:
    ecx = MEM32(esi + 0x2C); /* 0x1214B995: mov ecx, dword ptr [esi + 0x2c] */
    eax = ebp + 0x8; /* 0x1214B998: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214B99B: push eax */
    RECOMP_CALL(sub_1214AE6F); /* 0x1214B99C: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
L_1214B9A1:
    edi = POP32_VAL(esp); /* 0x1214B9A1: pop edi */
    esi = POP32_VAL(esp); /* 0x1214B9A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214B9A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214B9A4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214B9AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214B9ACu);

L_1214B9AC:
    edi = edi; /* 0x1214B9AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214B9AE: push ebp */
    ebp = esp; /* 0x1214B9AF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1214B9B1: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(0x121ED908)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED908) = MEM32(0x121ED908) & 0; /* 0x1214B9B4: and dword ptr [0x121ed908], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x121ED904)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED904) = MEM32(0x121ED904) & 0; /* 0x1214B9BB: and dword ptr [0x121ed904], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1214B9C2: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214B9C3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1214B9C5: push esi */
    ebx = 0x121EB5B0u; /* 0x1214B9C6: mov ebx, 0x121eb5b0 */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1214B9CB: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM16(0x121ED4F0)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    MEM16(0x121ED4F0) = (uint16_t)(MEM16(0x121ED4F0) & LO16(eax)); /* 0x1214B9CE: and word ptr [0x121ed4f0], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, edi); /* 0x1214B9D5: push edi */
    MEM32(0x121ED8FC) = 0x121ED4F0u; /* 0x1214B9D6: mov dword ptr [0x121ed8fc], 0x121ed4f0 */
    MEM32(0x121ED8F8) = ebx; /* 0x1214B9E0: mov dword ptr [0x121ed8f8], ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214B9E6: mov dword ptr [ebp - 4], eax */
L_1214B9E9:
    MEM32(0x121ED900) = ecx; /* 0x1214B9E9: mov dword ptr [0x121ed900], ecx */
L_1214B9EF:
    edx = (int32_t)(int16_t)MEM16(eax * 2 + 0x121D7970); /* 0x1214B9EF: movsx edx, word ptr [eax*2 + 0x121d7970] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1214B9F7: mov dword ptr [ebp - 0xc], edx */
    /* test edx, edx */ /* 0x1214B9FA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BADE; /* 0x1214B9FC: jne 0x1214bade */
L_1214BA02:
    /* test ecx, ecx */ /* 0x1214BA02: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214BA28; /* 0x1214BA04: jns 0x1214ba28 */
L_1214BA06:
    RECOMP_CALL(sub_1214B903); /* 0x1214BA06: call 0x1214b903 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x121ED8F8); /* 0x1214BA0B: mov ebx, dword ptr [0x121ed8f8] */
    ecx = eax; /* 0x1214BA11: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1214BA13: mov eax, dword ptr [ebp - 4] */
    MEM32(0x121ED900) = ecx; /* 0x1214BA16: mov dword ptr [0x121ed900], ecx */
    /* test ecx, ecx */ /* 0x1214BA1C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214BA28; /* 0x1214BA1E: jns 0x1214ba28 */
L_1214BA20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214BA20: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x121ED900) = ecx; /* 0x1214BA22: mov dword ptr [0x121ed900], ecx */
L_1214BA28:
    edx = (int32_t)(int16_t)MEM16(eax * 2 + 0x121D7AC8); /* 0x1214BA28: movsx edx, word ptr [eax*2 + 0x121d7ac8] */
    /* test edx, edx */ /* 0x1214BA30: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BAB1; /* 0x1214BA32: je 0x1214bab1 */
L_1214BA34:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1214BA34: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, 0x18Eu */ /* 0x1214BA36: cmp edx, 0x18e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214BAB1; /* 0x1214BA3C: ja 0x1214bab1 */
L_1214BA3E:
    eax = (int32_t)(int16_t)MEM16(edx * 2 + 0x121D8040); /* 0x1214BA3E: movsx eax, word ptr [edx*2 + 0x121d8040] */
    /* cmp eax, ecx */ /* 0x1214BA46: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214BAAE; /* 0x1214BA48: jne 0x1214baae */
L_1214BA4A:
    eax = MEM32(0x121ED8FC); /* 0x1214BA4A: mov eax, dword ptr [0x121ed8fc] */
    /* cmp eax, 0x121ED8D6u */ /* 0x1214BA4F: cmp eax, 0x121ed8d6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x121ED8D6u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214C5AA; /* 0x1214BA54: jae 0x1214c5aa */
L_1214BA5A:
    ecx = (int32_t)(int16_t)MEM16(edx * 2 + 0x121D7D20); /* 0x1214BA5A: movsx ecx, word ptr [edx*2 + 0x121d7d20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1214BA62: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(0x121ED8FC) = eax; /* 0x1214BA65: mov dword ptr [0x121ed8fc], eax */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1214BA6A: mov word ptr [eax], cx */
    edi = MEM32(0x121ED8F8); /* 0x1214BA6D: mov edi, dword ptr [0x121ed8f8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1214BA73: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(0x121ED8F8) = edi; /* 0x1214BA76: mov dword ptr [0x121ed8f8], edi */
    esi = 0x121ED8D8u; /* 0x1214BA7C: mov esi, 0x121ed8d8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BA81: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BA82: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BA83: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214BA84: mov dword ptr [ebp - 4], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BA87: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1214BA88: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x121ED904), 0 */ /* 0x1214BA8B: cmp dword ptr [0x121ed904], 0 */
    _flag_a = (uint32_t)(MEM32(0x121ED904)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x121ED900) = ecx; /* 0x1214BA92: mov dword ptr [0x121ed900], ecx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214BAA0; /* 0x1214BA98: jle 0x1214baa0 */
L_1214BA9A:
    _flag_a = (uint32_t)(MEM32(0x121ED904)); _flag_b = (uint32_t)(1);
    MEM32(0x121ED904) = MEM32(0x121ED904) - 1; /* 0x1214BA9A: dec dword ptr [0x121ed904] */
    _flag_k = FK_DEC;
L_1214BAA0:
    ebx = MEM32(0x121ED8F8); /* 0x1214BAA0: mov ebx, dword ptr [0x121ed8f8] */
    eax = MEM32(ebp + (-0x4)); /* 0x1214BAA6: mov eax, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1214B9EF; /* 0x1214BAA9: jmp 0x1214b9ef */
L_1214BAAE:
    eax = MEM32(ebp + (-0x4)); /* 0x1214BAAE: mov eax, dword ptr [ebp - 4] */
L_1214BAB1:
    edx = (int32_t)(int16_t)MEM16(eax * 2 + 0x121D7BC8); /* 0x1214BAB1: movsx edx, word ptr [eax*2 + 0x121d7bc8] */
    /* test edx, edx */ /* 0x1214BAB9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BB17; /* 0x1214BABB: je 0x1214bb17 */
L_1214BABD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1214BABD: add edx, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, 0x18Eu */ /* 0x1214BABF: cmp edx, 0x18e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214BB17; /* 0x1214BAC5: ja 0x1214bb17 */
L_1214BAC7:
    eax = (int32_t)(int16_t)MEM16(edx * 2 + 0x121D8040); /* 0x1214BAC7: movsx eax, word ptr [edx*2 + 0x121d8040] */
    /* cmp eax, ecx */ /* 0x1214BACF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214BB14; /* 0x1214BAD1: jne 0x1214bb14 */
L_1214BAD3:
    edx = (int32_t)(int16_t)MEM16(edx * 2 + 0x121D7D20); /* 0x1214BAD3: movsx edx, word ptr [edx*2 + 0x121d7d20] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1214BADB: mov dword ptr [ebp - 0xc], edx */
L_1214BADE:
    eax = (int32_t)(int16_t)MEM16(edx * 2 + 0x121D78C0); /* 0x1214BADE: movsx eax, word ptr [edx*2 + 0x121d78c0] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1214BAE6: mov dword ptr [ebp - 0x1c], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1214BAE9: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1214BAE9: shl eax, 4 */
    esi = ebx; /* 0x1214BAEC: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1214BAEE: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x10u); /* 0x1214BAF0: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1214BAF2: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1214BAF3: add esi, ecx */
    _flag_k = FK_ADD;
    edi = 0x121ED8E8u; /* 0x1214BAF5: mov edi, 0x121ed8e8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BAFA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BAFB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BAFC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1214BAFD: mov dword ptr [ebp - 0x20], eax */
    eax = edx + (-0x5); /* 0x1214BB00: lea eax, [edx - 5] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BB03: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp eax, 0x49u */ /* 0x1214BB04: cmp eax, 0x49 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214C4AD; /* 0x1214BB07: ja 0x1214c4ad */
L_1214BB0D:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1214C5B4)); goto _ljump; }
L_1214BB14:
    eax = MEM32(ebp + (-0x4)); /* 0x1214BB14: mov eax, dword ptr [ebp - 4] */
L_1214BB17:
    /* cmp MEM32(0x121ED904), 0 */ /* 0x1214BB17: cmp dword ptr [0x121ed904], 0 */
    _flag_a = (uint32_t)(MEM32(0x121ED904)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214BB26; /* 0x1214BB1E: jne 0x1214bb26 */
L_1214BB20:
    _flag_a = (uint32_t)(MEM32(0x121ED908)); _flag_b = (uint32_t)(1);
    MEM32(0x121ED908) = MEM32(0x121ED908) + 1; /* 0x1214BB20: inc dword ptr [0x121ed908] */
    _flag_k = FK_INC;
L_1214BB26:
    /* cmp MEM32(0x121ED904), 3 */ /* 0x1214BB26: cmp dword ptr [0x121ed904], 3 */
    _flag_a = (uint32_t)(MEM32(0x121ED904)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214BBD6; /* 0x1214BB2D: jge 0x1214bbd6 */
L_1214BB33:
    MEM32(0x121ED904) = 3; /* 0x1214BB33: mov dword ptr [0x121ed904], 3 */
L_1214BB3D:
    eax = MEM32(0x121ED8FC); /* 0x1214BB3D: mov eax, dword ptr [0x121ed8fc] */
    eax = (int32_t)(int16_t)MEM16(eax); /* 0x1214BB42: movsx eax, word ptr [eax] */
    ecx = (int32_t)(int16_t)MEM16(eax * 2 + 0x121D7AC8); /* 0x1214BB45: movsx ecx, word ptr [eax*2 + 0x121d7ac8] */
    /* test ecx, ecx */ /* 0x1214BB4D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BB6B; /* 0x1214BB4F: je 0x1214bb6b */
L_1214BB51:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x100u; /* 0x1214BB51: add ecx, 0x100 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x18Eu */ /* 0x1214BB57: cmp ecx, 0x18e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214BB6B; /* 0x1214BB5D: ja 0x1214bb6b */
L_1214BB5F:
    /* cmp MEM16(ecx * 2 + 0x121D8040), 0x100u */ /* 0x1214BB5F: cmp word ptr [ecx*2 + 0x121d8040], 0x100 */
    _flag_a = (uint32_t)(MEM16(ecx * 2 + 0x121D8040)) << 16; _flag_b = (uint32_t)(0x100u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214BB8D; /* 0x1214BB69: je 0x1214bb8d */
L_1214BB6B:
    eax = MEM32(0x121ED8FC); /* 0x1214BB6B: mov eax, dword ptr [0x121ed8fc] */
    /* cmp eax, 0x121ED4F0u */ /* 0x1214BB70: cmp eax, 0x121ed4f0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x121ED4F0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214C5AA; /* 0x1214BB75: jbe 0x1214c5aa */
L_1214BB7B:
    _flag_a = (uint32_t)(MEM32(0x121ED8FC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x121ED8FC) = MEM32(0x121ED8FC) - 2; /* 0x1214BB7B: sub dword ptr [0x121ed8fc], 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x10u; /* 0x1214BB82: sub ebx, 0x10 */
    _flag_k = FK_CMP;
    MEM32(0x121ED8F8) = ebx; /* 0x1214BB85: mov dword ptr [0x121ed8f8], ebx */
    RECOMP_BACKEDGE();
    goto L_1214BB3D; /* 0x1214BB8B: jmp 0x1214bb3d */
L_1214BB8D:
    eax = MEM32(0x121ED8FC); /* 0x1214BB8D: mov eax, dword ptr [0x121ed8fc] */
    /* cmp eax, 0x121ED8D6u */ /* 0x1214BB92: cmp eax, 0x121ed8d6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x121ED8D6u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214C5AA; /* 0x1214BB97: jae 0x1214c5aa */
L_1214BB9D:
    ecx = (int32_t)(int16_t)MEM16(ecx * 2 + 0x121D7D20); /* 0x1214BB9D: movsx ecx, word ptr [ecx*2 + 0x121d7d20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1214BBA5: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(0x121ED8FC) = eax; /* 0x1214BBA8: mov dword ptr [0x121ed8fc], eax */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1214BBAD: mov word ptr [eax], cx */
    edi = MEM32(0x121ED8F8); /* 0x1214BBB0: mov edi, dword ptr [0x121ed8f8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1214BBB6: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(0x121ED8F8) = edi; /* 0x1214BBB9: mov dword ptr [0x121ed8f8], edi */
    esi = 0x121ED8D8u; /* 0x1214BBBF: mov esi, 0x121ed8d8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BBC4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BBC5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BBC6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214BBC7: mov dword ptr [ebp - 4], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214BBCA: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(0x121ED900); /* 0x1214BBCB: mov ecx, dword ptr [0x121ed900] */
    RECOMP_BACKEDGE();
    goto L_1214BAA0; /* 0x1214BBD1: jmp 0x1214baa0 */
L_1214BBD6:
    /* test ecx, ecx */ /* 0x1214BBD6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C5AA; /* 0x1214BBD8: je 0x1214c5aa */
L_1214BBDE:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1214BBDE: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1214B9E9; /* 0x1214BBE1: jmp 0x1214b9e9 */
L_1214BBE6:
    ecx = MEM32(0x121ED910); /* 0x1214BBE6: mov ecx, dword ptr [0x121ed910] */
    eax = ebp + (-0x10); /* 0x1214BBEC: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1214BBEF: push eax */
    PUSH32(esp, MEM32(ebx + (-0x50))); /* 0x1214BBF0: push dword ptr [ebx - 0x50] */
    RECOMP_CALL(sub_1214ADBB); /* 0x1214BBF3: call 0x1214adbb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214BBF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BC21; /* 0x1214BBFA: jne 0x1214bc21 */
L_1214BBFC:
    eax = MEM32(0x121ED8F8); /* 0x1214BBFC: mov eax, dword ptr [0x121ed8f8] */
    esi = MEM32(eax + (-0x10)); /* 0x1214BC01: mov esi, dword ptr [eax - 0x10] */
    /* test esi, esi */ /* 0x1214BC04: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BC1B; /* 0x1214BC06: je 0x1214bc1b */
L_1214BC08:
    ecx = esi; /* 0x1214BC08: mov ecx, esi */
    RECOMP_CALL(sub_12148D74); /* 0x1214BC0A: call 0x12148d74 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1214BC0F: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1214BC10: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214BC15: mov eax, dword ptr [0x121ed8f8] */
    ecx = POP32_VAL(esp); /* 0x1214BC1A: pop ecx */
L_1214BC1B:
    _flag_a = (uint32_t)(MEM32(eax + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(eax + (-0x10)) = MEM32(eax + (-0x10)) & 0; /* 0x1214BC1B: and dword ptr [eax - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214BC5D; /* 0x1214BC1F: jmp 0x1214bc5d */
L_1214BC21:
    ecx = MEM32(0x121ED8F8); /* 0x1214BC21: mov ecx, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(ecx + (-0x10))); /* 0x1214BC27: push dword ptr [ecx - 0x10] */
    eax = ecx + (-0x20); /* 0x1214BC2A: lea eax, [ecx - 0x20] */
    PUSH32(esp, eax); /* 0x1214BC2D: push eax */
    PUSH32(esp, MEM32(ecx + (-0x40))); /* 0x1214BC2E: push dword ptr [ecx - 0x40] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1214BC31: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(0x121ED910)); /* 0x1214BC34: push dword ptr [0x121ed910] */
    RECOMP_CALL(sub_12149532); /* 0x1214BC3A: call 0x12149532 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214BC3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BC53; /* 0x1214BC41: je 0x1214bc53 */
L_1214BC43:
    ecx = MEM32(0x121ED910); /* 0x1214BC43: mov ecx, dword ptr [0x121ed910] */
    PUSH32(esp, eax); /* 0x1214BC49: push eax */
    RECOMP_CALL(sub_1214B959); /* 0x1214BC4A: call 0x1214b959 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214BC4F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BC5D; /* 0x1214BC51: jne 0x1214bc5d */
L_1214BC53:
    MEM32(0x121ED91C) = 1; /* 0x1214BC53: mov dword ptr [0x121ed91c], 1 */
L_1214BC5D:
    eax = MEM32(0x121ED8F8); /* 0x1214BC5D: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x50))); /* 0x1214BC62: push dword ptr [eax - 0x50] */
    RECOMP_CALL(sub_121BF586); /* 0x1214BC65: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214BC6A: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x1214BC6F: push dword ptr [eax - 0x40] */
    RECOMP_CALL(sub_121BF586); /* 0x1214BC72: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    MEM32(0x121ED914) = 1; /* 0x1214BC77: mov dword ptr [0x121ed914], 1 */
L_1214BC81:
    ecx = POP32_VAL(esp); /* 0x1214BC81: pop ecx */
L_1214BC82:
    ecx = POP32_VAL(esp); /* 0x1214BC82: pop ecx */
L_1214BC83:
    ebx = MEM32(0x121ED8F8); /* 0x1214BC83: mov ebx, dword ptr [0x121ed8f8] */
    goto L_1214C4AD; /* 0x1214BC89: jmp 0x1214c4ad */
L_1214BC8E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214BC8E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + (-0x40)), edi */ /* 0x1214BC90: cmp dword ptr [ebx - 0x40], edi */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x40))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214BCD5; /* 0x1214BC93: je 0x1214bcd5 */
L_1214BC95:
    eax = MEM32(ebx + (-0x40)); /* 0x1214BC95: mov eax, dword ptr [ebx - 0x40] */
    ecx = eax; /* 0x1214BC98: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214BC9A: mov dword ptr [ebp - 4], eax */
    edx = ecx + 0x1; /* 0x1214BC9D: lea edx, [ecx + 1] */
L_1214BCA0:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214BCA0: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214BCA2: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214BCA3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BCA0; /* 0x1214BCA5: jne 0x1214bca0 */
L_1214BCA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214BCA7: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + 0x1; /* 0x1214BCA9: lea esi, [ecx + 1] */
    PUSH32(esp, esi); /* 0x1214BCAC: push esi */
    RECOMP_CALL(sub_121BF524); /* 0x1214BCAD: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1214BCB2: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1214BCB4: pop ecx */
    /* test edi, edi */ /* 0x1214BCB5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BCC8; /* 0x1214BCB7: jne 0x1214bcc8 */
L_1214BCB9:
    MEM32(0x121ED91C) = 1; /* 0x1214BCB9: mov dword ptr [0x121ed91c], 1 */
    goto L_1214BD51; /* 0x1214BCC3: jmp 0x1214bd51 */
L_1214BCC8:
    PUSH32(esp, esi); /* 0x1214BCC8: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1214BCC9: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1214BCCC: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x1214BCCD: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214BCD2: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214BCD5:
    PUSH32(esp, 0x120014BCu); /* 0x1214BCD5: push 0x120014bc */
    PUSH32(esp, 0x34u); /* 0x1214BCDA: push 0x34 */
    RECOMP_CALL(sub_12018970); /* 0x1214BCDC: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214BCE1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214BCE2: pop ecx */
    /* test eax, eax */ /* 0x1214BCE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BD00; /* 0x1214BCE5: je 0x1214bd00 */
L_1214BCE7:
    ecx = MEM32(0x121ED8F8); /* 0x1214BCE7: mov ecx, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(ecx + (-0x10))); /* 0x1214BCED: push dword ptr [ecx - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x1214BCF0: add ecx, -0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1214BCF3: push ecx */
    PUSH32(esp, edi); /* 0x1214BCF4: push edi */
    ecx = eax; /* 0x1214BCF5: mov ecx, eax */
    RECOMP_CALL(sub_12146BA5); /* 0x1214BCF7: call 0x12146ba5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214BCFC: mov esi, eax */
    goto L_1214BD02; /* 0x1214BCFE: jmp 0x1214bd02 */
L_1214BD00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214BD00: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214BD02:
    /* test esi, esi */ /* 0x1214BD02: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BD1D; /* 0x1214BD04: jne 0x1214bd1d */
L_1214BD06:
    MEM32(0x121ED91C) = 1; /* 0x1214BD06: mov dword ptr [0x121ed91c], 1 */
    /* test edi, edi */ /* 0x1214BD10: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BD4B; /* 0x1214BD12: je 0x1214bd4b */
L_1214BD14:
    PUSH32(esp, edi); /* 0x1214BD14: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x1214BD15: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214BD1A: pop ecx */
    goto L_1214BD4B; /* 0x1214BD1B: jmp 0x1214bd4b */
L_1214BD1D:
    ecx = MEM32(0x121ED910); /* 0x1214BD1D: mov ecx, dword ptr [0x121ed910] */
    ecx = ecx + 0x10; /* 0x1214BD23: lea ecx, [ecx + 0x10] */
    PUSH32(esp, esi); /* 0x1214BD26: push esi */
    RECOMP_CALL(sub_12146E72); /* 0x1214BD27: call 0x12146e72 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214BD2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BD3A; /* 0x1214BD2E: jne 0x1214bd3a */
L_1214BD30:
    MEM32(0x121ED91C) = 1; /* 0x1214BD30: mov dword ptr [0x121ed91c], 1 */
L_1214BD3A:
    eax = MEM32(esi + 0x18); /* 0x1214BD3A: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214BD3D: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x18) = eax; /* 0x1214BD3E: mov dword ptr [esi + 0x18], eax */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214BD4B; /* 0x1214BD41: jne 0x1214bd4b */
L_1214BD43:
    eax = MEM32(esi); /* 0x1214BD43: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1214BD45: push 1 */
    ecx = esi; /* 0x1214BD47: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1214BD49: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1214BD4B:
    ebx = MEM32(0x121ED8F8); /* 0x1214BD4B: mov ebx, dword ptr [0x121ed8f8] */
L_1214BD51:
    PUSH32(esp, MEM32(ebx + (-0x50))); /* 0x1214BD51: push dword ptr [ebx - 0x50] */
    RECOMP_CALL(sub_121BF586); /* 0x1214BD54: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214BD59: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x1214BD5E: push dword ptr [eax - 0x40] */
    RECOMP_CALL(sub_121BF586); /* 0x1214BD61: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214BD66: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x1214BD6B: push dword ptr [eax - 0x10] */
    RECOMP_CALL(sub_121BF388); /* 0x1214BD6E: call 0x121bf388 */
    RECOMP_FLAGS_IN();
L_1214BD73:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214BD73: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1214BC83; /* 0x1214BD76: jmp 0x1214bc83 */
L_1214BD7B:
    _flag_a = (uint32_t)(MEM32(0x121ED8E8)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED8E8) = MEM32(0x121ED8E8) & 0; /* 0x1214BD7B: and dword ptr [0x121ed8e8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214C4AD; /* 0x1214BD82: jmp 0x1214c4ad */
L_1214BD87:
    PUSH32(esp, 0x120014BCu); /* 0x1214BD87: push 0x120014bc */
    PUSH32(esp, ecx); /* 0x1214BD8C: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1214BD8D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214BD92: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214BD93: pop ecx */
    /* test eax, eax */ /* 0x1214BD94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BDAC; /* 0x1214BD96: je 0x1214bdac */
L_1214BD98:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1214BD98: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1214BD9B: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x1214BD9F: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = 0xAu; /* 0x1214BDA3: mov dword ptr [eax + 8], 0xa */
    goto L_1214BDAE; /* 0x1214BDAA: jmp 0x1214bdae */
L_1214BDAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214BDAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214BDAE:
    ebx = MEM32(0x121ED8F8); /* 0x1214BDAE: mov ebx, dword ptr [0x121ed8f8] */
    MEM32(0x121ED8E8) = eax; /* 0x1214BDB4: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214BDB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BDCC; /* 0x1214BDBB: jne 0x1214bdcc */
L_1214BDBD:
    MEM32(0x121ED91C) = 1; /* 0x1214BDBD: mov dword ptr [0x121ed91c], 1 */
    goto L_1214C4AD; /* 0x1214BDC7: jmp 0x1214c4ad */
L_1214BDCC:
    /* cmp MEM32(ebx), 0 */ /* 0x1214BDCC: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214C4AD; /* 0x1214BDCF: je 0x1214c4ad */
L_1214BDD5:
    ecx = eax; /* 0x1214BDD5: mov ecx, eax */
L_1214BDD7:
    PUSH32(esp, ebx); /* 0x1214BDD7: push ebx */
    RECOMP_CALL(sub_1214AE6F); /* 0x1214BDD8: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
L_1214BDDD:
    /* test eax, eax */ /* 0x1214BDDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_1214BDDF:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1214BC83; /* 0x1214BDDF: jne 0x1214bc83 */
L_1214BDE5:
    MEM32(0x121ED91C) = 1; /* 0x1214BDE5: mov dword ptr [0x121ed91c], 1 */
    RECOMP_BACKEDGE();
    goto L_1214BC83; /* 0x1214BDEF: jmp 0x1214bc83 */
L_1214BDF4:
    ecx = MEM32(ebx + (-0x10)); /* 0x1214BDF4: mov ecx, dword ptr [ebx - 0x10] */
    MEM32(0x121ED8E8) = ecx; /* 0x1214BDF7: mov dword ptr [0x121ed8e8], ecx */
    /* cmp MEM32(ebx), 0 */ /* 0x1214BDFD: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214C4AD; /* 0x1214BE00: je 0x1214c4ad */
L_1214BE06:
    RECOMP_BACKEDGE();
    goto L_1214BDD7; /* 0x1214BE06: jmp 0x1214bdd7 */
L_1214BE08:
    eax = MEM32(ebx); /* 0x1214BE08: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x1214BE0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BD7B; /* 0x1214BE0C: je 0x1214bd7b */
L_1214BE12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214BE12: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_1214BEB9; /* 0x1214BE15: jmp 0x1214beb9 */
L_1214BE1A:
    ecx = MEM32(0x121ED910); /* 0x1214BE1A: mov ecx, dword ptr [0x121ed910] */
    eax = ebp + (-0x14); /* 0x1214BE20: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1214BE23: push eax */
    PUSH32(esp, MEM32(ebx + (-0x50))); /* 0x1214BE24: push dword ptr [ebx - 0x50] */
    RECOMP_CALL(sub_1214ADBB); /* 0x1214BE27: call 0x1214adbb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214BE2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BE5C; /* 0x1214BE2E: jne 0x1214be5c */
L_1214BE30:
    eax = MEM32(0x121ED8F8); /* 0x1214BE30: mov eax, dword ptr [0x121ed8f8] */
    esi = MEM32(eax + (-0x10)); /* 0x1214BE35: mov esi, dword ptr [eax - 0x10] */
    /* test esi, esi */ /* 0x1214BE38: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BE4F; /* 0x1214BE3A: je 0x1214be4f */
L_1214BE3C:
    ecx = esi; /* 0x1214BE3C: mov ecx, esi */
    RECOMP_CALL(sub_12148D74); /* 0x1214BE3E: call 0x12148d74 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1214BE43: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1214BE44: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214BE49: mov eax, dword ptr [0x121ed8f8] */
    ecx = POP32_VAL(esp); /* 0x1214BE4E: pop ecx */
L_1214BE4F:
    _flag_a = (uint32_t)(MEM32(eax + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(eax + (-0x10)) = MEM32(eax + (-0x10)) & 0; /* 0x1214BE4F: and dword ptr [eax - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x121ED8E8)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED8E8) = MEM32(0x121ED8E8) & 0; /* 0x1214BE53: and dword ptr [0x121ed8e8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214BE98; /* 0x1214BE5A: jmp 0x1214be98 */
L_1214BE5C:
    ecx = MEM32(0x121ED8F8); /* 0x1214BE5C: mov ecx, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(ecx + (-0x10))); /* 0x1214BE62: push dword ptr [ecx - 0x10] */
    eax = ecx + (-0x20); /* 0x1214BE65: lea eax, [ecx - 0x20] */
    PUSH32(esp, eax); /* 0x1214BE68: push eax */
    PUSH32(esp, MEM32(ecx + (-0x40))); /* 0x1214BE69: push dword ptr [ecx - 0x40] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1214BE6C: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(0x121ED910)); /* 0x1214BE6F: push dword ptr [0x121ed910] */
    RECOMP_CALL(sub_12149532); /* 0x1214BE75: call 0x12149532 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214BE7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BE83; /* 0x1214BE7C: je 0x1214be83 */
L_1214BE7E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214BE7E: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_1214BE85; /* 0x1214BE81: jmp 0x1214be85 */
L_1214BE83:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214BE83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214BE85:
    MEM32(0x121ED8E8) = eax; /* 0x1214BE85: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214BE8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214BE98; /* 0x1214BE8C: jne 0x1214be98 */
L_1214BE8E:
    MEM32(0x121ED91C) = 1; /* 0x1214BE8E: mov dword ptr [0x121ed91c], 1 */
L_1214BE98:
    eax = MEM32(0x121ED8F8); /* 0x1214BE98: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x50))); /* 0x1214BE9D: push dword ptr [eax - 0x50] */
    RECOMP_CALL(sub_121BF586); /* 0x1214BEA0: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214BEA5: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x1214BEAA: push dword ptr [eax - 0x40] */
L_1214BEAD:
    RECOMP_CALL(sub_121BF586); /* 0x1214BEAD: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BC81; /* 0x1214BEB2: jmp 0x1214bc81 */
L_1214BEB7:
    eax = MEM32(ebx); /* 0x1214BEB7: mov eax, dword ptr [ebx] */
L_1214BEB9:
    MEM32(0x121ED8E8) = eax; /* 0x1214BEB9: mov dword ptr [0x121ed8e8], eax */
    goto L_1214C4AD; /* 0x1214BEBE: jmp 0x1214c4ad */
L_1214BEC3:
    _flag_a = (uint32_t)(MEM32(0x121ED8E8)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED8E8) = MEM32(0x121ED8E8) & 0; /* 0x1214BEC3: and dword ptr [0x121ed8e8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebx + (-0x40))); /* 0x1214BECA: push dword ptr [ebx - 0x40] */
    MEM32(0x121ED91C) = 1; /* 0x1214BECD: mov dword ptr [0x121ed91c], 1 */
    RECOMP_CALL(sub_121BF586); /* 0x1214BED7: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214BEDC: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x1214BEE1: push dword ptr [eax - 0x30] */
    RECOMP_BACKEDGE();
    goto L_1214BEAD; /* 0x1214BEE4: jmp 0x1214bead */
L_1214BEE6:
    PUSH32(esp, 0x120014BCu); /* 0x1214BEE6: push 0x120014bc */
    PUSH32(esp, 0xCu); /* 0x1214BEEB: push 0xc */
    RECOMP_CALL(sub_12018970); /* 0x1214BEED: call 0x12018970 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214BEF2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1214BEF4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214BEF5: pop ecx */
    /* test esi, esi */ /* 0x1214BEF6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BF19; /* 0x1214BEF8: je 0x1214bf19 */
L_1214BEFA:
    eax = MEM32(0x121ED8F8); /* 0x1214BEFA: mov eax, dword ptr [0x121ed8f8] */
    edx = MEM32(eax + (-0x10)); /* 0x1214BEFF: mov edx, dword ptr [eax - 0x10] */
    ecx = MEM32(eax + (-0x10)); /* 0x1214BF02: mov ecx, dword ptr [eax - 0x10] */
    eax = MEM32(eax + (-0x30)); /* 0x1214BF05: mov eax, dword ptr [eax - 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1214BF08: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1214BF0A: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    edx = edx & 2; /* 0x1214BF0C: and edx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1214BF0F: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = ecx; /* 0x1214BF11: mov dword ptr [esi + 4], ecx */
    MEM32(esi + 0x8) = edx; /* 0x1214BF14: mov dword ptr [esi + 8], edx */
    goto L_1214BF1B; /* 0x1214BF17: jmp 0x1214bf1b */
L_1214BF19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214BF19: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214BF1B:
    MEM32(0x121ED8E8) = esi; /* 0x1214BF1B: mov dword ptr [0x121ed8e8], esi */
    /* test esi, esi */ /* 0x1214BF21: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1214BDDF; /* 0x1214BF23: jmp 0x1214bddf */
L_1214BF28:
    PUSH32(esp, 0x120014BCu); /* 0x1214BF28: push 0x120014bc */
    PUSH32(esp, 0xCu); /* 0x1214BF2D: push 0xc */
    RECOMP_CALL(sub_12018970); /* 0x1214BF2F: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214BF34: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214BF35: pop ecx */
    /* test eax, eax */ /* 0x1214BF36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BF51; /* 0x1214BF38: je 0x1214bf51 */
L_1214BF3A:
    ecx = MEM32(0x121ED8F8); /* 0x1214BF3A: mov ecx, dword ptr [0x121ed8f8] */
    ecx = MEM32(ecx); /* 0x1214BF40: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1214BF42: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1214BF46: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = 1; /* 0x1214BF48: mov dword ptr [eax + 8], 1 */
    goto L_1214BF53; /* 0x1214BF4F: jmp 0x1214bf53 */
L_1214BF51:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214BF51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214BF53:
    MEM32(0x121ED8E8) = eax; /* 0x1214BF53: mov dword ptr [0x121ed8e8], eax */
    RECOMP_BACKEDGE();
    goto L_1214BDDD; /* 0x1214BF58: jmp 0x1214bddd */
L_1214BF5D:
    PUSH32(esp, 0x120014BCu); /* 0x1214BF5D: push 0x120014bc */
    PUSH32(esp, ecx); /* 0x1214BF62: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1214BF63: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214BF68: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214BF69: pop ecx */
    /* test eax, eax */ /* 0x1214BF6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BF82; /* 0x1214BF6C: je 0x1214bf82 */
L_1214BF6E:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1214BF6E: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1214BF71: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x1214BF75: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = 0xAu; /* 0x1214BF79: mov dword ptr [eax + 8], 0xa */
    goto L_1214BF84; /* 0x1214BF80: jmp 0x1214bf84 */
L_1214BF82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214BF82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214BF84:
    ebx = MEM32(0x121ED8F8); /* 0x1214BF84: mov ebx, dword ptr [0x121ed8f8] */
    MEM32(0x121ED8E8) = eax; /* 0x1214BF8A: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214BF8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BDBD; /* 0x1214BF91: je 0x1214bdbd */
L_1214BF97:
    /* cmp MEM32(ebx), 0 */ /* 0x1214BF97: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214C4AD; /* 0x1214BF9A: je 0x1214c4ad */
L_1214BFA0:
    ecx = eax; /* 0x1214BFA0: mov ecx, eax */
L_1214BFA2:
    PUSH32(esp, ebx); /* 0x1214BFA2: push ebx */
    RECOMP_CALL(sub_1214AE6F); /* 0x1214BFA3: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BDDD; /* 0x1214BFA8: jmp 0x1214bddd */
L_1214BFAD:
    ecx = MEM32(ebx + (-0x10)); /* 0x1214BFAD: mov ecx, dword ptr [ebx - 0x10] */
    MEM32(0x121ED8E8) = ecx; /* 0x1214BFB0: mov dword ptr [0x121ed8e8], ecx */
    /* cmp MEM32(ebx), 0 */ /* 0x1214BFB6: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214C4AD; /* 0x1214BFB9: je 0x1214c4ad */
L_1214BFBF:
    RECOMP_BACKEDGE();
    goto L_1214BFA2; /* 0x1214BFBF: jmp 0x1214bfa2 */
L_1214BFC1:
    PUSH32(esp, 0x120014BCu); /* 0x1214BFC1: push 0x120014bc */
    PUSH32(esp, ecx); /* 0x1214BFC6: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1214BFC7: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214BFCC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214BFCD: pop ecx */
    /* test eax, eax */ /* 0x1214BFCE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BFE5; /* 0x1214BFD0: je 0x1214bfe5 */
L_1214BFD2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214BFD2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x1214BFD4: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = esi; /* 0x1214BFD6: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = 5; /* 0x1214BFD9: mov dword ptr [eax + 8], 5 */
    MEM32(eax + 0xC) = esi; /* 0x1214BFE0: mov dword ptr [eax + 0xc], esi */
    goto L_1214BFE7; /* 0x1214BFE3: jmp 0x1214bfe7 */
L_1214BFE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214BFE5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214BFE7:
    MEM32(0x121ED8E8) = eax; /* 0x1214BFE7: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214BFEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BDE5; /* 0x1214BFEE: je 0x1214bde5 */
L_1214BFF4:
    PUSH32(esp, MEM32(0x121ED8F8)); /* 0x1214BFF4: push dword ptr [0x121ed8f8] */
    ecx = eax; /* 0x1214BFFA: mov ecx, eax */
L_1214BFFC:
    RECOMP_CALL(sub_1214AE6F); /* 0x1214BFFC: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BDDD; /* 0x1214C001: jmp 0x1214bddd */
L_1214C006:
    ecx = MEM32(ebx + (-0x10)); /* 0x1214C006: mov ecx, dword ptr [ebx - 0x10] */
    MEM32(0x121ED8E8) = ecx; /* 0x1214C009: mov dword ptr [0x121ed8e8], ecx */
    PUSH32(esp, ebx); /* 0x1214C00F: push ebx */
    RECOMP_BACKEDGE();
    goto L_1214BFFC; /* 0x1214C010: jmp 0x1214bffc */
L_1214C012:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1214C012: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + (-0x20)), 0 */ /* 0x1214C016: cmp dword ptr [ebx - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214C0B8; /* 0x1214C01A: je 0x1214c0b8 */
L_1214C020:
    eax = ebx + (-0x10); /* 0x1214C020: lea eax, [ebx - 0x10] */
    PUSH32(esp, 4); /* 0x1214C023: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214C025: pop ecx */
    edi = 0x12018324u; /* 0x1214C026: mov edi, 0x12018324 */
    esi = eax; /* 0x1214C02B: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214C02D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214C02F: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214C04D; /* 0x1214C031: je 0x1214c04d */
L_1214C033:
    ecx = ebp + (-0x8); /* 0x1214C033: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1214C036: push ecx */
    ecx = MEM32(0x121ED910); /* 0x1214C037: mov ecx, dword ptr [0x121ed910] */
    PUSH32(esp, eax); /* 0x1214C03D: push eax */
    RECOMP_CALL(sub_1214ADEF); /* 0x1214C03E: call 0x1214adef */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x121ED8F8); /* 0x1214C043: mov ebx, dword ptr [0x121ed8f8] */
    esi = eax; /* 0x1214C049: mov esi, eax */
    goto L_1214C050; /* 0x1214C04B: jmp 0x1214c050 */
L_1214C04D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214C04D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214C04F: inc esi */
    _flag_k = FK_INC;
L_1214C050:
    /* test esi, esi */ /* 0x1214C050: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C089; /* 0x1214C052: je 0x1214c089 */
L_1214C054:
    ecx = MEM32(0x121ED910); /* 0x1214C054: mov ecx, dword ptr [0x121ed910] */
    eax = ebp + (-0x8); /* 0x1214C05A: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1214C05D: push eax */
    PUSH32(esp, MEM32(ebx + (-0x20))); /* 0x1214C05E: push dword ptr [ebx - 0x20] */
    RECOMP_CALL(sub_1214ADBB); /* 0x1214C061: call 0x1214adbb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1214C066: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C083; /* 0x1214C068: je 0x1214c083 */
L_1214C06A:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1214C06A: push dword ptr [ebp - 8] */
L_1214C06D:
    RECOMP_CALL(sub_121468D3); /* 0x1214C06D: call 0x121468d3 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(0x121ED8F8); /* 0x1214C072: mov ebx, dword ptr [0x121ed8f8] */
    MEM32(0x121ED8E8) = eax; /* 0x1214C078: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C07D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C0C9; /* 0x1214C07F: jne 0x1214c0c9 */
L_1214C081:
    goto L_1214C0BF; /* 0x1214C081: jmp 0x1214c0bf */
L_1214C083:
    ebx = MEM32(0x121ED8F8); /* 0x1214C083: mov ebx, dword ptr [0x121ed8f8] */
L_1214C089:
    /* cmp MEM32(ebx + (-0x20)), 0 */ /* 0x1214C089: cmp dword ptr [ebx - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214C0B8; /* 0x1214C08D: je 0x1214c0b8 */
L_1214C08F:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214C08F: push -1 */
    PUSH32(esp, 0x120111DCu); /* 0x1214C091: push 0x120111dc */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214C096: push -1 */
    PUSH32(esp, MEM32(ebx + (-0x20))); /* 0x1214C098: push dword ptr [ebx - 0x20] */
    PUSH32(esp, 1); /* 0x1214C09B: push 1 */
    PUSH32(esp, 0x409u); /* 0x1214C09D: push 0x409 */
    RECOMP_ICALL(MEM32(0x120010AC)); /* 0x1214C0A2: call dword ptr [0x120010ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1214C0A8: push 2 */
    ecx = POP32_VAL(esp); /* 0x1214C0AA: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1214C0AB: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1214C0B2; /* 0x1214C0AD: jne 0x1214c0b2 */
L_1214C0AF:
    PUSH32(esp, ecx); /* 0x1214C0AF: push ecx */
    RECOMP_BACKEDGE();
    goto L_1214C06D; /* 0x1214C0B0: jmp 0x1214c06d */
L_1214C0B2:
    ebx = MEM32(0x121ED8F8); /* 0x1214C0B2: mov ebx, dword ptr [0x121ed8f8] */
L_1214C0B8:
    _flag_a = (uint32_t)(MEM32(0x121ED8E8)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED8E8) = MEM32(0x121ED8E8) & 0; /* 0x1214C0B8: and dword ptr [0x121ed8e8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214C0BF:
    MEM32(0x121ED91C) = 1; /* 0x1214C0BF: mov dword ptr [0x121ed91c], 1 */
L_1214C0C9:
    PUSH32(esp, MEM32(ebx + (-0x20))); /* 0x1214C0C9: push dword ptr [ebx - 0x20] */
L_1214C0CC:
    RECOMP_CALL(sub_121BF586); /* 0x1214C0CC: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BC82; /* 0x1214C0D1: jmp 0x1214bc82 */
L_1214C0D6:
    PUSH32(esp, 0); /* 0x1214C0D6: push 0 */
    RECOMP_CALL(sub_121468D3); /* 0x1214C0D8: call 0x121468d3 */
    RECOMP_FLAGS_IN();
    MEM32(0x121ED8E8) = eax; /* 0x1214C0DD: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C0E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C0F0; /* 0x1214C0E4: jne 0x1214c0f0 */
L_1214C0E6:
    MEM32(0x121ED91C) = 1; /* 0x1214C0E6: mov dword ptr [0x121ed91c], 1 */
L_1214C0F0:
    eax = MEM32(0x121ED8F8); /* 0x1214C0F0: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x1214C0F5: push dword ptr [eax - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1214C0CC; /* 0x1214C0F8: jmp 0x1214c0cc */
L_1214C0FA:
    eax = MEM32(0x121ED910); /* 0x1214C0FA: mov eax, dword ptr [0x121ed910] */
    PUSH32(esp, MEM32(ebx + (-0x10))); /* 0x1214C0FF: push dword ptr [ebx - 0x10] */
    ecx = MEM32(eax + 0x8); /* 0x1214C102: mov ecx, dword ptr [eax + 8] */
    edx = eax + 0x10; /* 0x1214C105: lea edx, [eax + 0x10] */
    eax = ecx + 0x8; /* 0x1214C108: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1214C10B: push eax */
    PUSH32(esp, edx); /* 0x1214C10C: push edx */
    PUSH32(esp, MEM32(ebx + (-0x20))); /* 0x1214C10D: push dword ptr [ebx - 0x20] */
    PUSH32(esp, MEM32(ebx + (-0x30))); /* 0x1214C110: push dword ptr [ebx - 0x30] */
    RECOMP_CALL(sub_12146A30); /* 0x1214C113: call 0x12146a30 */
    RECOMP_FLAGS_IN();
    MEM32(0x121ED8E8) = eax; /* 0x1214C118: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C11D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x121ED8F8); /* 0x1214C11F: mov eax, dword ptr [0x121ed8f8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C15B; /* 0x1214C124: jne 0x1214c15b */
L_1214C126:
    esi = MEM32(eax + (-0x30)); /* 0x1214C126: mov esi, dword ptr [eax - 0x30] */
    PUSH32(esp, 0xBu); /* 0x1214C129: push 0xb */
    edi = 0x120114E8u; /* 0x1214C12B: mov edi, 0x120114e8 */
    ecx = POP32_VAL(esp); /* 0x1214C130: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214C131: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214C133: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214C141; /* 0x1214C135: je 0x1214c141 */
L_1214C137:
    MEM32(0x121ED91C) = 1; /* 0x1214C137: mov dword ptr [0x121ed91c], 1 */
L_1214C141:
    esi = MEM32(eax + (-0x10)); /* 0x1214C141: mov esi, dword ptr [eax - 0x10] */
    /* test esi, esi */ /* 0x1214C144: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C15B; /* 0x1214C146: je 0x1214c15b */
L_1214C148:
    ecx = esi; /* 0x1214C148: mov ecx, esi */
    RECOMP_CALL(sub_121437CE); /* 0x1214C14A: call 0x121437ce */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1214C14F: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x1214C150: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214C155: mov eax, dword ptr [0x121ed8f8] */
    ecx = POP32_VAL(esp); /* 0x1214C15A: pop ecx */
L_1214C15B:
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x1214C15B: push dword ptr [eax - 0x40] */
    RECOMP_CALL(sub_121BF586); /* 0x1214C15E: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214C163: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x1214C168: push dword ptr [eax - 0x30] */
    RECOMP_CALL(sub_121BF586); /* 0x1214C16B: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214C170: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x20))); /* 0x1214C175: push dword ptr [eax - 0x20] */
    RECOMP_CALL(sub_121BF586); /* 0x1214C178: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BD73; /* 0x1214C17D: jmp 0x1214bd73 */
L_1214C182:
    PUSH32(esp, 0x120014BCu); /* 0x1214C182: push 0x120014bc */
    PUSH32(esp, ecx); /* 0x1214C187: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x1214C188: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C18D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214C18E: pop ecx */
    /* test eax, eax */ /* 0x1214C18F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C1A6; /* 0x1214C191: je 0x1214c1a6 */
L_1214C193:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214C193: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x1214C195: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = esi; /* 0x1214C197: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = 2; /* 0x1214C19A: mov dword ptr [eax + 8], 2 */
    MEM32(eax + 0xC) = esi; /* 0x1214C1A1: mov dword ptr [eax + 0xc], esi */
    goto L_1214C1A8; /* 0x1214C1A4: jmp 0x1214c1a8 */
L_1214C1A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C1A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214C1A8:
    MEM32(0x121ED8E8) = eax; /* 0x1214C1A8: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C1AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BDE5; /* 0x1214C1AF: je 0x1214bde5 */
L_1214C1B5:
    PUSH32(esp, MEM32(0x121ED8F8)); /* 0x1214C1B5: push dword ptr [0x121ed8f8] */
    ecx = eax; /* 0x1214C1BB: mov ecx, eax */
L_1214C1BD:
    RECOMP_CALL(sub_1214AE6F); /* 0x1214C1BD: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BDDD; /* 0x1214C1C2: jmp 0x1214bddd */
L_1214C1C7:
    ecx = MEM32(ebx + (-0x10)); /* 0x1214C1C7: mov ecx, dword ptr [ebx - 0x10] */
    MEM32(0x121ED8E8) = ecx; /* 0x1214C1CA: mov dword ptr [0x121ed8e8], ecx */
    PUSH32(esp, ebx); /* 0x1214C1D0: push ebx */
    RECOMP_BACKEDGE();
    goto L_1214C1BD; /* 0x1214C1D1: jmp 0x1214c1bd */
L_1214C1D3:
    eax = MEM32(ebx + (-0x10)); /* 0x1214C1D3: mov eax, dword ptr [ebx - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1214BEB9; /* 0x1214C1D6: jmp 0x1214beb9 */
L_1214C1DB:
    PUSH32(esp, 0x120014BCu); /* 0x1214C1DB: push 0x120014bc */
    PUSH32(esp, 8); /* 0x1214C1E0: push 8 */
    RECOMP_CALL(sub_12018970); /* 0x1214C1E2: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C1E7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214C1E8: pop ecx */
    /* test eax, eax */ /* 0x1214C1E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BF51; /* 0x1214C1EB: je 0x1214bf51 */
L_1214C1F1:
    ecx = MEM32(0x121ED8F8); /* 0x1214C1F1: mov ecx, dword ptr [0x121ed8f8] */
    ecx = MEM32(ecx); /* 0x1214C1F7: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1214C1F9: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1214C1FD: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_1214BF53; /* 0x1214C1FF: jmp 0x1214bf53 */
L_1214C204:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214C204: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), esi */ /* 0x1214C206: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214C246; /* 0x1214C208: je 0x1214c246 */
L_1214C20A:
    eax = MEM32(ebx); /* 0x1214C20A: mov eax, dword ptr [ebx] */
    ecx = eax; /* 0x1214C20C: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214C20E: mov dword ptr [ebp - 4], eax */
    edx = ecx + 0x1; /* 0x1214C211: lea edx, [ecx + 1] */
L_1214C214:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214C214: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214C216: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214C217: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C214; /* 0x1214C219: jne 0x1214c214 */
L_1214C21B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214C21B: sub ecx, edx */
    _flag_k = FK_CMP;
    edi = ecx + 0x1; /* 0x1214C21D: lea edi, [ecx + 1] */
    PUSH32(esp, edi); /* 0x1214C220: push edi */
    RECOMP_CALL(sub_121BF524); /* 0x1214C221: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214C226: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1214C228: pop ecx */
    /* test esi, esi */ /* 0x1214C229: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C239; /* 0x1214C22B: jne 0x1214c239 */
L_1214C22D:
    MEM32(0x121ED91C) = 1; /* 0x1214C22D: mov dword ptr [0x121ed91c], 1 */
    goto L_1214C286; /* 0x1214C237: jmp 0x1214c286 */
L_1214C239:
    PUSH32(esp, edi); /* 0x1214C239: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1214C23A: push dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x1214C23D: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x1214C23E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214C243: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214C246:
    PUSH32(esp, 0x120014BCu); /* 0x1214C246: push 0x120014bc */
    PUSH32(esp, 8); /* 0x1214C24B: push 8 */
    RECOMP_CALL(sub_12018970); /* 0x1214C24D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C252: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214C253: pop ecx */
    /* test eax, eax */ /* 0x1214C254: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C260; /* 0x1214C256: je 0x1214c260 */
L_1214C258:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1214C258: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = esi; /* 0x1214C25B: mov dword ptr [eax + 4], esi */
    goto L_1214C262; /* 0x1214C25E: jmp 0x1214c262 */
L_1214C260:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C260: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214C262:
    MEM32(0x121ED8E8) = eax; /* 0x1214C262: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C267: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C280; /* 0x1214C269: jne 0x1214c280 */
L_1214C26B:
    MEM32(0x121ED91C) = 1; /* 0x1214C26B: mov dword ptr [0x121ed91c], 1 */
    /* test esi, esi */ /* 0x1214C275: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C280; /* 0x1214C277: je 0x1214c280 */
L_1214C279:
    PUSH32(esp, esi); /* 0x1214C279: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x1214C27A: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C27F: pop ecx */
L_1214C280:
    ebx = MEM32(0x121ED8F8); /* 0x1214C280: mov ebx, dword ptr [0x121ed8f8] */
L_1214C286:
    PUSH32(esp, MEM32(ebx)); /* 0x1214C286: push dword ptr [ebx] */
    RECOMP_BACKEDGE();
    goto L_1214C0CC; /* 0x1214C288: jmp 0x1214c0cc */
L_1214C28D:
    eax = MEM32(0x121ED910); /* 0x1214C28D: mov eax, dword ptr [0x121ed910] */
    ecx = MEM32(eax + 0x8); /* 0x1214C292: mov ecx, dword ptr [eax + 8] */
    PUSH32(esp, 0); /* 0x1214C295: push 0 */
    edx = eax + 0x10; /* 0x1214C297: lea edx, [eax + 0x10] */
    eax = ecx + 0x8; /* 0x1214C29A: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1214C29D: push eax */
    PUSH32(esp, edx); /* 0x1214C29E: push edx */
    PUSH32(esp, MEM32(ebx + (-0x10))); /* 0x1214C29F: push dword ptr [ebx - 0x10] */
    PUSH32(esp, MEM32(ebx + (-0x20))); /* 0x1214C2A2: push dword ptr [ebx - 0x20] */
    RECOMP_CALL(sub_12146A30); /* 0x1214C2A5: call 0x12146a30 */
    RECOMP_FLAGS_IN();
    MEM32(0x121ED8E8) = eax; /* 0x1214C2AA: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C2AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C2BD; /* 0x1214C2B1: jne 0x1214c2bd */
L_1214C2B3:
    MEM32(0x121ED91C) = 1; /* 0x1214C2B3: mov dword ptr [0x121ed91c], 1 */
L_1214C2BD:
    eax = MEM32(0x121ED8F8); /* 0x1214C2BD: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x20))); /* 0x1214C2C2: push dword ptr [eax - 0x20] */
    RECOMP_CALL(sub_121BF586); /* 0x1214C2C5: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x121ED8F8); /* 0x1214C2CA: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x1214C2CF: push dword ptr [eax - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1214BEAD; /* 0x1214C2D2: jmp 0x1214bead */
L_1214C2D7:
    /* cmp MEM32(ebx + (-0x30)), 0 */ /* 0x1214C2D7: cmp dword ptr [ebx - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214C2F2; /* 0x1214C2DB: jne 0x1214c2f2 */
L_1214C2DD:
    PUSH32(esp, 4); /* 0x1214C2DD: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214C2DF: pop ecx */
    edi = 0x12018324u; /* 0x1214C2E0: mov edi, 0x12018324 */
    esi = ebx + (-0x20); /* 0x1214C2E5: lea esi, [ebx - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C2E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214C2EA: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214BDBD; /* 0x1214C2EC: je 0x1214bdbd */
L_1214C2F2:
    eax = ebp + (-0x18); /* 0x1214C2F2: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1214C2F5: push eax */
    PUSH32(esp, MEM32(0x121ED910)); /* 0x1214C2F6: push dword ptr [0x121ed910] */
    eax = ebx + (-0x20); /* 0x1214C2FC: lea eax, [ebx - 0x20] */
    PUSH32(esp, eax); /* 0x1214C2FF: push eax */
    PUSH32(esp, MEM32(ebx + (-0x30))); /* 0x1214C300: push dword ptr [ebx - 0x30] */
    RECOMP_CALL(sub_121492E5); /* 0x1214C303: call 0x121492e5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214C308: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214C31F; /* 0x1214C30A: jns 0x1214c31f */
L_1214C30C:
    _flag_a = (uint32_t)(MEM32(0x121ED8E8)); _flag_b = (uint32_t)(0);
    MEM32(0x121ED8E8) = MEM32(0x121ED8E8) & 0; /* 0x1214C30C: and dword ptr [0x121ed8e8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x121ED91C) = 1; /* 0x1214C313: mov dword ptr [0x121ed91c], 1 */
    goto L_1214C327; /* 0x1214C31D: jmp 0x1214c327 */
L_1214C31F:
    eax = MEM32(ebp + (-0x18)); /* 0x1214C31F: mov eax, dword ptr [ebp - 0x18] */
    MEM32(0x121ED8E8) = eax; /* 0x1214C322: mov dword ptr [0x121ed8e8], eax */
L_1214C327:
    eax = MEM32(0x121ED8F8); /* 0x1214C327: mov eax, dword ptr [0x121ed8f8] */
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x1214C32C: push dword ptr [eax - 0x30] */
    RECOMP_BACKEDGE();
    goto L_1214C0CC; /* 0x1214C32F: jmp 0x1214c0cc */
L_1214C334:
    PUSH32(esp, 0x120014BCu); /* 0x1214C334: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x1214C339: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x1214C33B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C340: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214C341: pop ecx */
    /* test eax, eax */ /* 0x1214C342: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BF51; /* 0x1214C344: je 0x1214bf51 */
L_1214C34A:
    PUSH32(esp, MEM32(0x121ED8F8)); /* 0x1214C34A: push dword ptr [0x121ed8f8] */
    ecx = eax; /* 0x1214C350: mov ecx, eax */
    RECOMP_CALL(sub_1214B857); /* 0x1214C352: call 0x1214b857 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BF53; /* 0x1214C357: jmp 0x1214bf53 */
L_1214C35C:
    PUSH32(esp, 0x120014BCu); /* 0x1214C35C: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x1214C361: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x1214C363: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C368: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214C369: pop ecx */
    /* test eax, eax */ /* 0x1214C36A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C388; /* 0x1214C36C: je 0x1214c388 */
L_1214C36E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214C36E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = esi; /* 0x1214C370: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = esi; /* 0x1214C373: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = 0xAu; /* 0x1214C376: mov dword ptr [eax + 0xc], 0xa */
    MEM32(eax + 0x10) = esi; /* 0x1214C37D: mov dword ptr [eax + 0x10], esi */
    MEM32(eax) = 0x120114D0u; /* 0x1214C380: mov dword ptr [eax], 0x120114d0 */
    goto L_1214C38A; /* 0x1214C386: jmp 0x1214c38a */
L_1214C388:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C388: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214C38A:
    MEM32(0x121ED8E8) = eax; /* 0x1214C38A: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C38F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BDE5; /* 0x1214C391: je 0x1214bde5 */
L_1214C397:
    PUSH32(esp, MEM32(0x121ED8F8)); /* 0x1214C397: push dword ptr [0x121ed8f8] */
    ecx = eax + 0x4; /* 0x1214C39D: lea ecx, [eax + 4] */
L_1214C3A0:
    RECOMP_CALL(sub_1214AE6F); /* 0x1214C3A0: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BDDD; /* 0x1214C3A5: jmp 0x1214bddd */
L_1214C3AA:
    ecx = MEM32(ebx + (-0x20)); /* 0x1214C3AA: mov ecx, dword ptr [ebx - 0x20] */
    MEM32(0x121ED8E8) = ecx; /* 0x1214C3AD: mov dword ptr [0x121ed8e8], ecx */
    PUSH32(esp, ebx); /* 0x1214C3B3: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214C3B4: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1214C3A0; /* 0x1214C3B7: jmp 0x1214c3a0 */
L_1214C3B9:
    PUSH32(esp, 0x120014BCu); /* 0x1214C3B9: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x1214C3BE: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x1214C3C0: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C3C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214C3C6: pop ecx */
    /* test eax, eax */ /* 0x1214C3C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BF51; /* 0x1214C3C9: je 0x1214bf51 */
L_1214C3CF:
    PUSH32(esp, MEM32(0x121ED8F8)); /* 0x1214C3CF: push dword ptr [0x121ed8f8] */
    ecx = eax; /* 0x1214C3D5: mov ecx, eax */
    RECOMP_CALL(sub_1214B885); /* 0x1214C3D7: call 0x1214b885 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BF53; /* 0x1214C3DC: jmp 0x1214bf53 */
L_1214C3E1:
    PUSH32(esp, 0x120014BCu); /* 0x1214C3E1: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x1214C3E6: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x1214C3E8: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C3ED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214C3EE: pop ecx */
    /* test eax, eax */ /* 0x1214C3EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C40D; /* 0x1214C3F1: je 0x1214c40d */
L_1214C3F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214C3F3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x1214C3F5: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x1214C3F8: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = 0xFAu; /* 0x1214C3FB: mov dword ptr [eax + 0xc], 0xfa */
    MEM32(eax + 0x10) = ecx; /* 0x1214C402: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax) = 0x120114D0u; /* 0x1214C405: mov dword ptr [eax], 0x120114d0 */
    goto L_1214C40F; /* 0x1214C40B: jmp 0x1214c40f */
L_1214C40D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C40D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214C40F:
    MEM32(0x121ED8E8) = eax; /* 0x1214C40F: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C414: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BDE5; /* 0x1214C416: je 0x1214bde5 */
L_1214C41C:
    PUSH32(esp, MEM32(0x121ED8F8)); /* 0x1214C41C: push dword ptr [0x121ed8f8] */
    ecx = eax + 0x4; /* 0x1214C422: lea ecx, [eax + 4] */
L_1214C425:
    RECOMP_CALL(sub_12146886); /* 0x1214C425: call 0x12146886 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BDDD; /* 0x1214C42A: jmp 0x1214bddd */
L_1214C42F:
    ecx = MEM32(ebx + (-0x20)); /* 0x1214C42F: mov ecx, dword ptr [ebx - 0x20] */
    MEM32(0x121ED8E8) = ecx; /* 0x1214C432: mov dword ptr [0x121ed8e8], ecx */
    PUSH32(esp, ebx); /* 0x1214C438: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214C439: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1214C425; /* 0x1214C43C: jmp 0x1214c425 */
L_1214C43E:
    PUSH32(esp, 0x120014BCu); /* 0x1214C43E: push 0x120014bc */
    PUSH32(esp, 0x14u); /* 0x1214C443: push 0x14 */
    RECOMP_CALL(sub_12018970); /* 0x1214C445: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214C44A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214C44B: pop ecx */
    /* test eax, eax */ /* 0x1214C44C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C46A; /* 0x1214C44E: je 0x1214c46a */
L_1214C450:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214C450: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x1214C452: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x1214C455: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = 0xAu; /* 0x1214C458: mov dword ptr [eax + 0xc], 0xa */
    MEM32(eax + 0x10) = ecx; /* 0x1214C45F: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax) = 0x120114DCu; /* 0x1214C462: mov dword ptr [eax], 0x120114dc */
    goto L_1214C46C; /* 0x1214C468: jmp 0x1214c46c */
L_1214C46A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C46A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214C46C:
    MEM32(0x121ED8E8) = eax; /* 0x1214C46C: mov dword ptr [0x121ed8e8], eax */
    /* test eax, eax */ /* 0x1214C471: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214BDE5; /* 0x1214C473: je 0x1214bde5 */
L_1214C479:
    PUSH32(esp, MEM32(0x121ED8F8)); /* 0x1214C479: push dword ptr [0x121ed8f8] */
    ecx = eax + 0x4; /* 0x1214C47F: lea ecx, [eax + 4] */
L_1214C482:
    RECOMP_CALL(sub_1214AE6F); /* 0x1214C482: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1214BDDD; /* 0x1214C487: jmp 0x1214bddd */
L_1214C48C:
    ecx = MEM32(ebx + (-0x20)); /* 0x1214C48C: mov ecx, dword ptr [ebx - 0x20] */
    MEM32(0x121ED8E8) = ecx; /* 0x1214C48F: mov dword ptr [0x121ed8e8], ecx */
    PUSH32(esp, ebx); /* 0x1214C495: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214C496: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1214C482; /* 0x1214C499: jmp 0x1214c482 */
L_1214C49B:
    esi = 0x12018324u; /* 0x1214C49B: mov esi, 0x12018324 */
    goto L_1214C4A4; /* 0x1214C4A0: jmp 0x1214c4a4 */
L_1214C4A2:
    esi = ebx; /* 0x1214C4A2: mov esi, ebx */
L_1214C4A4:
    edi = 0x121ED8E8u; /* 0x1214C4A4: mov edi, 0x121ed8e8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C4A9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C4AA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C4AB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C4AC: movsd dword ptr es:[edi], dword ptr [esi] */
L_1214C4AD:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1214C4AD: mov ecx, dword ptr [ebp - 0x1c] */
    eax = MEM32(0x121ED8FC); /* 0x1214C4B0: mov eax, dword ptr [0x121ed8fc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x20)); /* 0x1214C4B5: sub ebx, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1214C4B8: neg ecx */
    _flag_k = FK_CMP;
    edx = eax + ecx * 2; /* 0x1214C4BA: lea edx, [eax + ecx*2] */
    eax = MEM32(ebp + (-0xC)); /* 0x1214C4BD: mov eax, dword ptr [ebp - 0xc] */
    esi = (int32_t)(int16_t)MEM16(eax * 2 + 0x121D7810); /* 0x1214C4C0: movsx esi, word ptr [eax*2 + 0x121d7810] */
    MEM32(0x121ED8FC) = edx; /* 0x1214C4C8: mov dword ptr [0x121ed8fc], edx */
    edi = (int32_t)(int16_t)MEM16(edx); /* 0x1214C4CE: movsx edi, word ptr [edx] */
    MEM32(0x121ED8F8) = ebx; /* 0x1214C4D1: mov dword ptr [0x121ed8f8], ebx */
    /* test edi, edi */ /* 0x1214C4D7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C536; /* 0x1214C4D9: jne 0x1214c536 */
L_1214C4DB:
    /* test esi, esi */ /* 0x1214C4DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C536; /* 0x1214C4DD: jne 0x1214c536 */
L_1214C4DF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1214C4DF: add edx, 2 */
    _flag_k = FK_ADD;
    MEM32(0x121ED8FC) = edx; /* 0x1214C4E2: mov dword ptr [0x121ed8fc], edx */
    PUSH32(esp, 0x10u); /* 0x1214C4E8: push 0x10 */
    eax = POP32_VAL(esp); /* 0x1214C4EA: pop eax */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1214C4EB: mov word ptr [edx], ax */
    edi = MEM32(0x121ED8F8); /* 0x1214C4EE: mov edi, dword ptr [0x121ed8f8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1214C4F4: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(0x121ED8F8) = edi; /* 0x1214C4F6: mov dword ptr [0x121ed8f8], edi */
    esi = 0x121ED8E8u; /* 0x1214C4FC: mov esi, 0x121ed8e8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C501: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C502: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C503: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C504: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(0x121ED900); /* 0x1214C505: mov ecx, dword ptr [0x121ed900] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214C50B: mov dword ptr [ebp - 4], eax */
    /* test ecx, ecx */ /* 0x1214C50E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214C530; /* 0x1214C510: jns 0x1214c530 */
L_1214C512:
    RECOMP_CALL(sub_1214B903); /* 0x1214C512: call 0x1214b903 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1214C517: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1214C519: mov eax, dword ptr [ebp - 4] */
    MEM32(0x121ED900) = ecx; /* 0x1214C51C: mov dword ptr [0x121ed900], ecx */
    /* test ecx, ecx */ /* 0x1214C522: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214C530; /* 0x1214C524: jns 0x1214c530 */
L_1214C526:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214C526: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x121ED900) = ecx; /* 0x1214C528: mov dword ptr [0x121ed900], ecx */
    /* test ecx, ecx */ /* 0x1214C52E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
L_1214C530:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1214C59F; /* 0x1214C530: jne 0x1214c59f */
L_1214C532:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C532: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214C5AD; /* 0x1214C534: jmp 0x1214c5ad */
L_1214C536:
    ecx = (int32_t)(int16_t)MEM16(esi * 2 + 0x121D7CC8); /* 0x1214C536: movsx ecx, word ptr [esi*2 + 0x121d7cc8] */
    /* test ecx, ecx */ /* 0x1214C53E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C562; /* 0x1214C540: je 0x1214c562 */
L_1214C542:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1214C542: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x18Eu */ /* 0x1214C544: cmp ecx, 0x18e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214C562; /* 0x1214C54A: ja 0x1214c562 */
L_1214C54C:
    eax = (int32_t)(int16_t)MEM16(ecx * 2 + 0x121D8040); /* 0x1214C54C: movsx eax, word ptr [ecx*2 + 0x121d8040] */
    /* cmp eax, edi */ /* 0x1214C554: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214C562; /* 0x1214C556: jne 0x1214c562 */
L_1214C558:
    eax = (int32_t)(int16_t)MEM16(ecx * 2 + 0x121D7D20); /* 0x1214C558: movsx eax, word ptr [ecx*2 + 0x121d7d20] */
    goto L_1214C56A; /* 0x1214C560: jmp 0x1214c56a */
L_1214C562:
    eax = (int32_t)(int16_t)MEM16(esi * 2 + 0x121D7A70); /* 0x1214C562: movsx eax, word ptr [esi*2 + 0x121d7a70] */
L_1214C56A:
    MEM32(ebp + (-0x4)) = eax; /* 0x1214C56A: mov dword ptr [ebp - 4], eax */
    /* cmp edx, 0x121ED8D6u */ /* 0x1214C56D: cmp edx, 0x121ed8d6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x121ED8D6u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214C5AA; /* 0x1214C573: jae 0x1214c5aa */
L_1214C575:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1214C575: add edx, 2 */
    _flag_k = FK_ADD;
    MEM32(0x121ED8FC) = edx; /* 0x1214C578: mov dword ptr [0x121ed8fc], edx */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1214C57E: mov word ptr [edx], ax */
    edi = MEM32(0x121ED8F8); /* 0x1214C581: mov edi, dword ptr [0x121ed8f8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1214C587: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(0x121ED8F8) = edi; /* 0x1214C58A: mov dword ptr [0x121ed8f8], edi */
    esi = 0x121ED8E8u; /* 0x1214C590: mov esi, 0x121ed8e8 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C595: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C596: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C597: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214C598: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(0x121ED900); /* 0x1214C599: mov ecx, dword ptr [0x121ed900] */
L_1214C59F:
    ebx = MEM32(0x121ED8F8); /* 0x1214C59F: mov ebx, dword ptr [0x121ed8f8] */
    RECOMP_BACKEDGE();
    goto L_1214B9EF; /* 0x1214C5A5: jmp 0x1214b9ef */
L_1214C5AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C5AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214C5AC: inc eax */
    _flag_k = FK_INC;
L_1214C5AD:
    edi = POP32_VAL(esp); /* 0x1214C5AD: pop edi */
    esi = POP32_VAL(esp); /* 0x1214C5AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214C5AF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214C5B0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214C5B1: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1214BBE6u: goto L_1214BBE6;
      case 0x1214BC8Eu: goto L_1214BC8E;
      case 0x1214BD7Bu: goto L_1214BD7B;
      case 0x1214BD87u: goto L_1214BD87;
      case 0x1214BDF4u: goto L_1214BDF4;
      case 0x1214BE08u: goto L_1214BE08;
      case 0x1214BE1Au: goto L_1214BE1A;
      case 0x1214BEB7u: goto L_1214BEB7;
      case 0x1214BEC3u: goto L_1214BEC3;
      case 0x1214BEE6u: goto L_1214BEE6;
      case 0x1214BF28u: goto L_1214BF28;
      case 0x1214BF5Du: goto L_1214BF5D;
      case 0x1214BFADu: goto L_1214BFAD;
      case 0x1214BFC1u: goto L_1214BFC1;
      case 0x1214C006u: goto L_1214C006;
      case 0x1214C012u: goto L_1214C012;
      case 0x1214C0D6u: goto L_1214C0D6;
      case 0x1214C0FAu: goto L_1214C0FA;
      case 0x1214C182u: goto L_1214C182;
      case 0x1214C1C7u: goto L_1214C1C7;
      case 0x1214C1D3u: goto L_1214C1D3;
      case 0x1214C1DBu: goto L_1214C1DB;
      case 0x1214C204u: goto L_1214C204;
      case 0x1214C28Du: goto L_1214C28D;
      case 0x1214C2D7u: goto L_1214C2D7;
      case 0x1214C334u: goto L_1214C334;
      case 0x1214C35Cu: goto L_1214C35C;
      case 0x1214C3AAu: goto L_1214C3AA;
      case 0x1214C3B9u: goto L_1214C3B9;
      case 0x1214C3E1u: goto L_1214C3E1;
      case 0x1214C42Fu: goto L_1214C42F;
      case 0x1214C43Eu: goto L_1214C43E;
      case 0x1214C48Cu: goto L_1214C48C;
      case 0x1214C49Bu: goto L_1214C49B;
      case 0x1214C4A2u: goto L_1214C4A2;
      case 0x1214C4ADu: goto L_1214C4AD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1214C6E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214C6E1u);

L_1214C6E1:
    edi = edi; /* 0x1214C6E1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214C6E3: push ebp */
    ebp = esp; /* 0x1214C6E4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1214C6E6: mov eax, dword ptr [ebp + 8] */
    MEM32(0x121ED910) = eax; /* 0x1214C6E9: mov dword ptr [0x121ed910], eax */
    RECOMP_CALL(sub_1214B9AC); /* 0x1214C6EE: call 0x1214b9ac */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1214C6F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214C6F4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214C6FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214C6FCu);

L_1214C6FC:
    edi = edi; /* 0x1214C6FC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214C6FE: push ebp */
    ebp = esp; /* 0x1214C6FF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1214C701: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1214C704: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1214C705: mov esi, dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1214C708: mov ecx, esi */
    /* test eax, eax */ /* 0x1214C70A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C73E; /* 0x1214C70C: je 0x1214c73e */
L_1214C70E:
    PUSH32(esp, ebx); /* 0x1214C70E: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1214C70F: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1214C712: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1214C713: mov edi, dword ptr [ebp + 0xc] */
L_1214C716:
    /* cmp eax, edi */ /* 0x1214C716: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214C721; /* 0x1214C718: ja 0x1214c721 */
L_1214C71A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214C71A: dec ecx */
    _flag_k = FK_DEC;
    MEM8(ecx + ebx) = (uint8_t)(0x2Eu); /* 0x1214C71B: mov byte ptr [ecx + ebx], 0x2e */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214C71F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214C721:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214C721: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = 0xAu; /* 0x1214C723: mov dword ptr [ebp + 0x14], 0xa */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x14); /* 0x1214C72A: div dword ptr [ebp + 0x14] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214C72D: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x1214C72E: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ecx + ebx) = (uint8_t)(LO8(edx)); /* 0x1214C731: mov byte ptr [ecx + ebx], dl */
    /* test eax, eax */ /* 0x1214C734: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C716; /* 0x1214C736: jne 0x1214c716 */
L_1214C738:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1214C738: sub esi, ecx */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1214C73A: pop edi */
    eax = esi; /* 0x1214C73B: mov eax, esi */
    ebx = POP32_VAL(esp); /* 0x1214C73D: pop ebx */
L_1214C73E:
    esi = POP32_VAL(esp); /* 0x1214C73E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214C73F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1214C740: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1214C748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214C748u);

L_1214C748:
    edi = edi; /* 0x1214C748: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214C74A: push ebp */
    ebp = esp; /* 0x1214C74B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1214C74D: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214C750: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1214C755: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1214C757: mov dword ptr [ebp - 4], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1214C75A: fld dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1214C75D: push ebx */
    fp_push(_st[0]); /* 0x1214C75E: fld st(0) */
    PUSH32(esp, esi); /* 0x1214C760: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1214C761: mov esi, dword ptr [ebp + 0xc] */
    _st[0] = fabs(_st[0]); /* 0x1214C764: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1214C766: fstp dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x1214C769: push edi */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1214C76A: fld dword ptr [ebp - 0x20] */
    MEM8(ebp + (-0x19)) = (uint8_t)(1); /* 0x1214C76D: mov byte ptr [ebp - 0x19], 1 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1214C771: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x1214C774: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1214C776: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1214C778: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1214C77A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214C783; /* 0x1214C77D: je 0x1214c783 */
L_1214C77F:
    MEM8(ebp + (-0x19)) = (uint8_t)(0); /* 0x1214C77F: mov byte ptr [ebp - 0x19], 0 */
L_1214C783:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1214C783: fld dword ptr [ebp - 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12011520)); /* 0x1214C786: fcom qword ptr [0x12011520] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1214C78C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1214C78E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1214C7D8; /* 0x1214C791: jp 0x1214c7d8 */
L_1214C793:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1214C793: fstp st(1) */
    _st[0] *= *(double*)ADDR(0x12011518); /* 0x1214C795: fmul qword ptr [0x12011518] */
    RECOMP_CALL(sub_121BF2F7); /* 0x1214C79B: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x1214C7A0: push 0xa */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214C7A2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214C7A4: pop ebx */
    ecx = eax; /* 0x1214C7A5: mov ecx, eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1214C7A7: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, 5 */ /* 0x1214C7A9: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214C7B4; /* 0x1214C7AC: jb 0x1214c7b4 */
L_1214C7AE:
    eax = ebx; /* 0x1214C7AE: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1214C7B0: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1214C7B2: add ecx, eax */
    _flag_k = FK_ADD;
L_1214C7B4:
    eax = 0x30303030u; /* 0x1214C7B4: mov eax, 0x30303030 */
    edi = ebp + (-0xC); /* 0x1214C7B9: lea edi, [ebp - 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1214C7BC: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1214C7BD: stosd dword ptr es:[edi], eax */
    PUSH32(esp, 0x14u); /* 0x1214C7BE: push 0x14 */
    eax = ebp + (-0x18); /* 0x1214C7C0: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1214C7C3: push eax */
    eax = ecx; /* 0x1214C7C4: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214C7C6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1214C7C8: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0); /* 0x1214C7CA: push 0 */
    MEM8(ebp + (-0xB)) = (uint8_t)(0x2Eu); /* 0x1214C7CC: mov byte ptr [ebp - 0xb], 0x2e */
    PUSH32(esp, eax); /* 0x1214C7D0: push eax */
    RECOMP_CALL(sub_1214C6FC); /* 0x1214C7D1: call 0x1214c6fc */
    RECOMP_FLAGS_IN();
    goto L_1214C7F7; /* 0x1214C7D6: jmp 0x1214c7f7 */
L_1214C7D8:
    fp_push(1.0); /* 0x1214C7D8: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1214C7DA: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1214C7DC: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1214C7DE: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C7FF; /* 0x1214C7E1: jne 0x1214c7ff */
L_1214C7E3:
    eax = 0x30303030u; /* 0x1214C7E3: mov eax, 0x30303030 */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1214C7E8: fstp st(1) */
    edi = ebp + (-0xC); /* 0x1214C7EA: lea edi, [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1214C7ED: fstp st(0) */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1214C7EF: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1214C7F0: stosd dword ptr es:[edi], eax */
    MEM16(ebp + (-0xC)) = (uint16_t)(0x2E31u); /* 0x1214C7F1: mov word ptr [ebp - 0xc], 0x2e31 */
L_1214C7F7:
    PUSH32(esp, 8); /* 0x1214C7F7: push 8 */
    edi = POP32_VAL(esp); /* 0x1214C7F9: pop edi */
    goto L_1214C8FE; /* 0x1214C7FA: jmp 0x1214c8fe */
L_1214C7FF:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12011510)); /* 0x1214C7FF: fcom qword ptr [0x12011510] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1214C805: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1214C807: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1214C866; /* 0x1214C80A: jp 0x1214c866 */
L_1214C80C:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1214C80C: fstp st(1) */
    fp_push(_st[0]); /* 0x1214C80E: fld st(0) */
    fp_push(*(double*)ADDR(0x12011518)); /* 0x1214C810: fld qword ptr [0x12011518] */
    _st[1] *= _st[0]; /* 0x1214C816: fmul st(1), st(0) */
    fp_xch(1); /* 0x1214C818: fxch st(1) */
    RECOMP_CALL(sub_121BF2F7); /* 0x1214C81A: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x1214C81F: push 0xa */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214C821: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214C823: pop ebx */
    edi = eax; /* 0x1214C824: mov edi, eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1214C826: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, 5 */ /* 0x1214C828: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214C84D; /* 0x1214C82B: jb 0x1214c84d */
L_1214C82D:
    eax = ebx; /* 0x1214C82D: mov eax, ebx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1214C82F: fstp st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1214C831: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1214C833: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edi; /* 0x1214C835: mov dword ptr [ebp - 0x20], edi */
    fp_push((double)(int32_t)MEM32(ebp + (-0x20))); /* 0x1214C838: fild dword ptr [ebp - 0x20] */
L_1214C83B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_1214C843; /* 0x1214C83B: jns 0x1214c843 */
L_1214C83D:
    _st[0] += (double)*(float*)ADDR(0x120014D0); /* 0x1214C83D: fadd dword ptr [0x120014d0] */
L_1214C843:
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1214C843: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1214C845: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1214C848: fld dword ptr [ebp - 0x20] */
    goto L_1214C84F; /* 0x1214C84B: jmp 0x1214c84f */
L_1214C84D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1214C84D: fstp st(0) */
L_1214C84F:
    eax = ebp + (-0x18); /* 0x1214C84F: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x14u); /* 0x1214C852: push 0x14 */
    PUSH32(esp, eax); /* 0x1214C854: push eax */
    RECOMP_CALL(sub_121BF2F7); /* 0x1214C855: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1214C85A: push eax */
    eax = edi; /* 0x1214C85B: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214C85D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1214C85F: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    goto L_1214C8F6; /* 0x1214C861: jmp 0x1214c8f6 */
L_1214C866:
    fp_push(*(float*)&MEM32(0x12011508)); /* 0x1214C866: fld dword ptr [0x12011508] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1214C86C: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1214C86E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1214C870: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C8A6; /* 0x1214C873: jne 0x1214c8a6 */
L_1214C875:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1214C875: fstp st(1) */
    fp_push(_st[0]); /* 0x1214C877: fld st(0) */
    fp_push(*(double*)ADDR(0x12011500)); /* 0x1214C879: fld qword ptr [0x12011500] */
    _st[1] *= _st[0]; /* 0x1214C87F: fmul st(1), st(0) */
    fp_xch(1); /* 0x1214C881: fxch st(1) */
    RECOMP_CALL(sub_121BF2F7); /* 0x1214C883: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x1214C888: push 0xa */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214C88A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214C88C: pop ebx */
    edi = eax; /* 0x1214C88D: mov edi, eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1214C88F: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, 5 */ /* 0x1214C891: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214C84D; /* 0x1214C894: jb 0x1214c84d */
L_1214C896:
    eax = ebx; /* 0x1214C896: mov eax, ebx */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1214C898: fstp st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1214C89A: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1214C89C: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edi; /* 0x1214C89E: mov dword ptr [ebp - 0x20], edi */
    fp_push((double)(int32_t)MEM32(ebp + (-0x20))); /* 0x1214C8A1: fild dword ptr [ebp - 0x20] */
    RECOMP_BACKEDGE();
    goto L_1214C83B; /* 0x1214C8A4: jmp 0x1214c83b */
L_1214C8A6:
    fp_push(*(float*)&MEM32(0x120080F0)); /* 0x1214C8A6: fld dword ptr [0x120080f0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1214C8AC: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1214C8AE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1214C8B0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C8CC; /* 0x1214C8B3: jne 0x1214c8cc */
L_1214C8B5:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1214C8B5: fstp st(1) */
    eax = ebp + (-0x18); /* 0x1214C8B7: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x14u); /* 0x1214C8BA: push 0x14 */
    fp_push(_st[0]); /* 0x1214C8BC: fld st(0) */
    PUSH32(esp, eax); /* 0x1214C8BE: push eax */
    RECOMP_CALL(sub_121BF2F7); /* 0x1214C8BF: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12005458); /* 0x1214C8C4: fmul qword ptr [0x12005458] */
    goto L_1214C8F0; /* 0x1214C8CA: jmp 0x1214c8f0 */
L_1214C8CC:
    fp_push(*(float*)&MEM32(0x120114F8)); /* 0x1214C8CC: fld dword ptr [0x120114f8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1214C8D2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1214C8D4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1214C8D6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C92E; /* 0x1214C8D9: jne 0x1214c92e */
L_1214C8DB:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1214C8DB: fstp st(1) */
    eax = ebp + (-0x18); /* 0x1214C8DD: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x14u); /* 0x1214C8E0: push 0x14 */
    fp_push(_st[0]); /* 0x1214C8E2: fld st(0) */
    PUSH32(esp, eax); /* 0x1214C8E4: push eax */
    RECOMP_CALL(sub_121BF2F7); /* 0x1214C8E5: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(0x12001EB8); /* 0x1214C8EA: fmul qword ptr [0x12001eb8] */
L_1214C8F0:
    PUSH32(esp, eax); /* 0x1214C8F0: push eax */
    RECOMP_CALL(sub_121BF2F7); /* 0x1214C8F1: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
L_1214C8F6:
    PUSH32(esp, eax); /* 0x1214C8F6: push eax */
    RECOMP_CALL(sub_1214C6FC); /* 0x1214C8F7: call 0x1214c6fc */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1214C8FC: mov edi, eax */
L_1214C8FE:
    eax = ebp + (-0x4); /* 0x1214C8FE: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1214C901: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + (-0x19)), 0 */ /* 0x1214C903: cmp byte ptr [ebp - 0x19], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x19))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x1214C907: push edi */
    PUSH32(esp, eax); /* 0x1214C908: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214C91D; /* 0x1214C909: je 0x1214c91d */
L_1214C90B:
    eax = esi + 0x1; /* 0x1214C90B: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x1214C90E: push eax */
    MEM8(esi) = (uint8_t)(0x2Du); /* 0x1214C90F: mov byte ptr [esi], 0x2d */
    RECOMP_CALL(sub_121BF440); /* 0x1214C912: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214C917: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214C91A: inc edi */
    _flag_k = FK_INC;
    goto L_1214C926; /* 0x1214C91B: jmp 0x1214c926 */
L_1214C91D:
    PUSH32(esp, esi); /* 0x1214C91D: push esi */
    RECOMP_CALL(sub_121BF440); /* 0x1214C91E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214C923: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214C926:
    MEM8(esi + edi) = (uint8_t)(0); /* 0x1214C926: mov byte ptr [esi + edi], 0 */
    eax = edi; /* 0x1214C92A: mov eax, edi */
    goto L_1214C953; /* 0x1214C92C: jmp 0x1214c953 */
L_1214C92E:
    PUSH32(esp, ecx); /* 0x1214C92E: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1214C92F: fstp st(0) */
    PUSH32(esp, ecx); /* 0x1214C931: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1214C932: fstp qword ptr [esp] */
    PUSH32(esp, 0x120114F4u); /* 0x1214C935: push 0x120114f4 */
    PUSH32(esp, 0x14u); /* 0x1214C93A: push 0x14 */
    PUSH32(esp, esi); /* 0x1214C93C: push esi */
    RECOMP_CALL(sub_12050FC5); /* 0x1214C93D: call 0x12050fc5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1214C942: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi + 0x1; /* 0x1214C945: lea eax, [esi + 1] */
L_1214C948:
    SET_LO8(ecx, MEM8(esi)); /* 0x1214C948: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214C94A: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1214C94B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214C948; /* 0x1214C94D: jne 0x1214c948 */
L_1214C94F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1214C94F: sub esi, eax */
    _flag_k = FK_CMP;
    eax = esi; /* 0x1214C951: mov eax, esi */
L_1214C953:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214C953: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1214C956: pop edi */
    esi = POP32_VAL(esp); /* 0x1214C957: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1214C958: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214C95A: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1214C95B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214C960: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214C961: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214C969(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214C969u);

L_1214C969:
    edi = edi; /* 0x1214C969: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214C96B: push ebp */
    ebp = esp; /* 0x1214C96C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214C96E: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214C96F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1214C971: push edi */
    edi = esi; /* 0x1214C972: mov edi, esi */
L_1214C974:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214C974: push -1 */
    PUSH32(esp, MEM32(edi + 0x12011530)); /* 0x1214C976: push dword ptr [edi + 0x12011530] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214C97C: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214C97E: push dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x1214C981: push 1 */
    PUSH32(esp, 0x409u); /* 0x1214C983: push 0x409 */
    RECOMP_ICALL(MEM32(0x120010AC)); /* 0x1214C988: call dword ptr [0x120010ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1214C98E: push 2 */
    ecx = POP32_VAL(esp); /* 0x1214C990: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1214C991: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214C9A5; /* 0x1214C993: je 0x1214c9a5 */
L_1214C995:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x1214C995: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214C998: inc esi */
    _flag_k = FK_INC;
    /* cmp edi, 0x9Cu */ /* 0x1214C999: cmp edi, 0x9c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x9Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214C974; /* 0x1214C99F: jb 0x1214c974 */
L_1214C9A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214C9A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214C9B0; /* 0x1214C9A3: jmp 0x1214c9b0 */
L_1214C9A5:
    esi = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x1214C9A5: imul esi, esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x12011530u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x12011530u; /* 0x1214C9A8: add esi, 0x12011530 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1214C9AE: mov eax, esi */
L_1214C9B0:
    edi = POP32_VAL(esp); /* 0x1214C9B0: pop edi */
    esi = POP32_VAL(esp); /* 0x1214C9B1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214C9B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214C9B3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214C9BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214C9BBu);

L_1214C9BB:
    edi = edi; /* 0x1214C9BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214C9BD: push ebp */
    ebp = esp; /* 0x1214C9BE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214C9C0: push esi */
    PUSH32(esp, edi); /* 0x1214C9C1: push edi */
    edi = 0x2F74u; /* 0x1214C9C2: mov edi, 0x2f74 */
    PUSH32(esp, edi); /* 0x1214C9C7: push edi */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1214C9C8: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214C9CB: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1214C9CD: pop ecx */
    /* test esi, esi */ /* 0x1214C9CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214CA8D; /* 0x1214C9D0: je 0x1214ca8d */
L_1214C9D6:
    PUSH32(esp, edi); /* 0x1214C9D6: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214C9D7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1214C9D9: push edi */
    PUSH32(esp, esi); /* 0x1214C9DA: push esi */
    RECOMP_CALL(sub_121BF434); /* 0x1214C9DB: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = esi + 0xB8; /* 0x1214C9E0: lea eax, [esi + 0xb8] */
    MEM32(esi + 0x64) = eax; /* 0x1214C9E6: mov dword ptr [esi + 0x64], eax */
    eax = esi + 0xAA0; /* 0x1214C9E9: lea eax, [esi + 0xaa0] */
    MEM32(esi + 0x68) = eax; /* 0x1214C9EF: mov dword ptr [esi + 0x68], eax */
    eax = esi + 0x9AC; /* 0x1214C9F2: lea eax, [esi + 0x9ac] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214C9F8: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x80) = eax; /* 0x1214C9FB: mov dword ptr [esi + 0x80], eax */
    eax = esi + 0xF20; /* 0x1214CA01: lea eax, [esi + 0xf20] */
    PUSH32(esp, 0xFu); /* 0x1214CA07: push 0xf */
    ecx = POP32_VAL(esp); /* 0x1214CA09: pop ecx */
    MEM32(esi + 0x84) = eax; /* 0x1214CA0A: mov dword ptr [esi + 0x84], eax */
    eax = esi + 0xF98; /* 0x1214CA10: lea eax, [esi + 0xf98] */
    MEM32(esi + 0x6C) = 0x120115D0u; /* 0x1214CA16: mov dword ptr [esi + 0x6c], 0x120115d0 */
    MEM32(esi + 0x70) = 0x101u; /* 0x1214CA1D: mov dword ptr [esi + 0x70], 0x101 */
    MEM32(esi + 0x74) = 0x11Eu; /* 0x1214CA24: mov dword ptr [esi + 0x74], 0x11e */
    MEM32(esi + 0x78) = ecx; /* 0x1214CA2B: mov dword ptr [esi + 0x78], ecx */
    MEM32(esi + 0x7C) = edi; /* 0x1214CA2E: mov dword ptr [esi + 0x7c], edi */
    MEM32(esi + 0x88) = 0x12011658u; /* 0x1214CA31: mov dword ptr [esi + 0x88], 0x12011658 */
    MEM32(esi + 0x8C) = edi; /* 0x1214CA3B: mov dword ptr [esi + 0x8c], edi */
    MEM32(esi + 0x90) = 0x1Eu; /* 0x1214CA41: mov dword ptr [esi + 0x90], 0x1e */
    MEM32(esi + 0x94) = ecx; /* 0x1214CA4B: mov dword ptr [esi + 0x94], ecx */
    MEM32(esi + 0x98) = edi; /* 0x1214CA51: mov dword ptr [esi + 0x98], edi */
    MEM32(esi + 0x9C) = eax; /* 0x1214CA57: mov dword ptr [esi + 0x9c], eax */
    MEM32(esi + 0xA0) = edi; /* 0x1214CA5D: mov dword ptr [esi + 0xa0], edi */
    MEM32(esi + 0xA4) = 0x120116D0u; /* 0x1214CA63: mov dword ptr [esi + 0xa4], 0x120116d0 */
    MEM32(esi + 0xA8) = edi; /* 0x1214CA6D: mov dword ptr [esi + 0xa8], edi */
    MEM32(esi + 0xAC) = 0x13u; /* 0x1214CA73: mov dword ptr [esi + 0xac], 0x13 */
    MEM32(esi + 0xB0) = 7; /* 0x1214CA7D: mov dword ptr [esi + 0xb0], 7 */
    MEM32(esi + 0xB4) = edi; /* 0x1214CA87: mov dword ptr [esi + 0xb4], edi */
L_1214CA8D:
    edi = POP32_VAL(esp); /* 0x1214CA8D: pop edi */
    eax = esi; /* 0x1214CA8E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214CA90: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214CA91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214CA92: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214CA9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214CA9Au);

L_1214CA9A:
    edi = edi; /* 0x1214CA9A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214CA9C: push ebp */
    ebp = esp; /* 0x1214CA9D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214CA9F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x1214CAA2: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214CAA5: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1214CAA6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214CAA7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214CAAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214CAAFu);

L_1214CAAF:
    edi = edi; /* 0x1214CAAF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214CAB1: push ebp */
    ebp = esp; /* 0x1214CAB2: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1214CAB4: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1214CAB7: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x1214CABA: mov edx, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x1214CABD: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = edx; /* 0x1214CABF: mov dword ptr [eax + 8], edx */
    /* test ecx, ecx */ /* 0x1214CAC2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214CACE; /* 0x1214CAC4: je 0x1214cace */
L_1214CAC6:
    /* test edx, edx */ /* 0x1214CAC6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214CACE; /* 0x1214CAC8: je 0x1214cace */
L_1214CACA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214CACA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214CAD1; /* 0x1214CACC: jmp 0x1214cad1 */
L_1214CACE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1214CACE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214CAD1:
    ebp = POP32_VAL(esp); /* 0x1214CAD1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214CAD2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214CADA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214CADAu);

L_1214CADA:
    edi = edi; /* 0x1214CADA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214CADC: push ebp */
    ebp = esp; /* 0x1214CADD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214CADF: push ecx */
    ecx = MEM32(esi + 0x38); /* 0x1214CAE0: mov ecx, dword ptr [esi + 0x38] */
    PUSH32(esp, ebx); /* 0x1214CAE3: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1214CAE4: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1214CAE7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1214CAE8: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x10u); /* 0x1214CAEB: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1214CAED: pop edx */
    eax = edx; /* 0x1214CAEE: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1214CAF0: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x1214CAF2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214CB8C; /* 0x1214CAF4: jle 0x1214cb8c */
L_1214CAFA:
    SET_LO16(eax, LO16(edi)); /* 0x1214CAFA: mov ax, di */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(eax)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214CAFD: shl ax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) << ((LO8(ecx)) & 31)); /* 0x1214CAFD: shl ax, cl */
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CB00: movzx ecx, word ptr [esi + 0xc] */
    _flag_a = (uint32_t)((MEM16(esi + 0x34) | LO16(eax))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x34) | LO16(eax))) << 16;
    MEM16(esi + 0x34) = (uint16_t)(MEM16(esi + 0x34) | LO16(eax)); /* 0x1214CB04: or word ptr [esi + 0x34], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(esi + 0x10); /* 0x1214CB08: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1214CB0B: add eax, -2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214CB0E: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, eax */ /* 0x1214CB11: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214CB34; /* 0x1214CB13: jae 0x1214cb34 */
L_1214CB15:
    ecx = MEM32(esi + 0x4); /* 0x1214CB15: mov ecx, dword ptr [esi + 4] */
    SET_LO8(eax, MEM8(esi + 0x34)); /* 0x1214CB18: mov al, byte ptr [esi + 0x34] */
    edx = MEM32(ebp + (-0x4)); /* 0x1214CB1B: mov edx, dword ptr [ebp - 4] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x1214CB1E: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CB21: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    edx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CB25: movzx edx, word ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x1214CB29: mov ecx, dword ptr [esi + 4] */
    SET_LO8(eax, MEM8(esi + 0x35)); /* 0x1214CB2C: mov al, byte ptr [esi + 0x35] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x1214CB2F: mov byte ptr [edx + ecx], al */
    goto L_1214CB70; /* 0x1214CB32: jmp 0x1214cb70 */
L_1214CB34:
    /* cmp ecx, MEM32(esi + 0x10) */ /* 0x1214CB34: cmp ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CB42; /* 0x1214CB37: jb 0x1214cb42 */
L_1214CB39:
    MEM32(esi + 0x30) = 1; /* 0x1214CB39: mov dword ptr [esi + 0x30], 1 */
    goto L_1214CB55; /* 0x1214CB40: jmp 0x1214cb55 */
L_1214CB42:
    edi = MEM32(ebp + (-0x4)); /* 0x1214CB42: mov edi, dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x4); /* 0x1214CB45: mov ecx, dword ptr [esi + 4] */
    SET_LO8(eax, MEM8(esi + 0x34)); /* 0x1214CB48: mov al, byte ptr [esi + 0x34] */
    MEM8(edi + ecx) = (uint8_t)(LO8(eax)); /* 0x1214CB4B: mov byte ptr [edi + ecx], al */
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CB4E: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    edi = MEM32(ebp + 0x8); /* 0x1214CB52: mov edi, dword ptr [ebp + 8] */
L_1214CB55:
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CB55: movzx ecx, word ptr [esi + 0xc] */
    /* cmp ecx, MEM32(esi + 0x10) */ /* 0x1214CB59: cmp ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CB67; /* 0x1214CB5C: jb 0x1214cb67 */
L_1214CB5E:
    MEM32(esi + 0x30) = 1; /* 0x1214CB5E: mov dword ptr [esi + 0x30], 1 */
    goto L_1214CB77; /* 0x1214CB65: jmp 0x1214cb77 */
L_1214CB67:
    edx = MEM32(esi + 0x4); /* 0x1214CB67: mov edx, dword ptr [esi + 4] */
    SET_LO8(eax, MEM8(esi + 0x35)); /* 0x1214CB6A: mov al, byte ptr [esi + 0x35] */
    MEM8(ecx + edx) = (uint8_t)(LO8(eax)); /* 0x1214CB6D: mov byte ptr [ecx + edx], al */
L_1214CB70:
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CB70: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    PUSH32(esp, 0x10u); /* 0x1214CB74: push 0x10 */
    edx = POP32_VAL(esp); /* 0x1214CB76: pop edx */
L_1214CB77:
    eax = MEM32(esi + 0x38); /* 0x1214CB77: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1214CB7A: sub edx, eax */
    _flag_k = FK_CMP;
    ecx = edx; /* 0x1214CB7C: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edi) >> 31) & 1u)); /* 0x1214CB7E: sar edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> ((LO8(ecx)) & 31));
    ecx = ebx; /* 0x1214CB80: mov ecx, ebx */
    eax = eax + ecx + (-0x10); /* 0x1214CB82: lea eax, [eax + ecx - 0x10] */
    MEM16(esi + 0x34) = (uint16_t)(LO16(edi)); /* 0x1214CB86: mov word ptr [esi + 0x34], di */
    goto L_1214CB96; /* 0x1214CB8A: jmp 0x1214cb96 */
L_1214CB8C:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 16 ? (((LO16(edi)) >> (16 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214CB8C: shl di, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) << ((LO8(ecx)) & 31))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) << ((LO8(ecx)) & 31)); /* 0x1214CB8C: shl di, cl */
    eax = ecx + ebx; /* 0x1214CB8F: lea eax, [ecx + ebx] */
    _flag_a = (uint32_t)((MEM16(esi + 0x34) | LO16(edi))) << 16; _flag_b = (uint32_t)((MEM16(esi + 0x34) | LO16(edi))) << 16;
    MEM16(esi + 0x34) = (uint16_t)(MEM16(esi + 0x34) | LO16(edi)); /* 0x1214CB92: or word ptr [esi + 0x34], di */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1214CB96:
    edi = POP32_VAL(esp); /* 0x1214CB96: pop edi */
    MEM32(esi + 0x38) = eax; /* 0x1214CB97: mov dword ptr [esi + 0x38], eax */
    ebx = POP32_VAL(esp); /* 0x1214CB9A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214CB9B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214CB9C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214CBA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214CBA4u);

L_1214CBA4:
    /* cmp MEM32(esi + 0x38), 8 */ /* 0x1214CBA4: cmp dword ptr [esi + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214CBA8: push ebx */
    PUSH32(esp, edi); /* 0x1214CBA9: push edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214CBFD; /* 0x1214CBAA: jle 0x1214cbfd */
L_1214CBAC:
    ecx = MEM32(esi + 0x10); /* 0x1214CBAC: mov ecx, dword ptr [esi + 0x10] */
    edx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CBAF: movzx edx, word ptr [esi + 0xc] */
    eax = ecx + (-0x2); /* 0x1214CBB3: lea eax, [ecx - 2] */
    /* cmp edx, eax */ /* 0x1214CBB6: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214CBD6; /* 0x1214CBB8: jae 0x1214cbd6 */
L_1214CBBA:
    ecx = MEM32(esi + 0x4); /* 0x1214CBBA: mov ecx, dword ptr [esi + 4] */
    SET_LO8(eax, MEM8(esi + 0x34)); /* 0x1214CBBD: mov al, byte ptr [esi + 0x34] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x1214CBC0: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CBC3: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    edx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CBC7: movzx edx, word ptr [esi + 0xc] */
L_1214CBCB:
    ecx = MEM32(esi + 0x4); /* 0x1214CBCB: mov ecx, dword ptr [esi + 4] */
    SET_LO8(eax, MEM8(esi + 0x35)); /* 0x1214CBCE: mov al, byte ptr [esi + 0x35] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x1214CBD1: mov byte ptr [edx + ecx], al */
    goto L_1214CC1E; /* 0x1214CBD4: jmp 0x1214cc1e */
L_1214CBD6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214CBD6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214CBD8: inc ebx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x1214CBD9: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CBE2; /* 0x1214CBDB: jb 0x1214cbe2 */
L_1214CBDD:
    MEM32(esi + 0x30) = ebx; /* 0x1214CBDD: mov dword ptr [esi + 0x30], ebx */
    goto L_1214CBEF; /* 0x1214CBE0: jmp 0x1214cbef */
L_1214CBE2:
    ecx = MEM32(esi + 0x4); /* 0x1214CBE2: mov ecx, dword ptr [esi + 4] */
    SET_LO8(eax, MEM8(esi + 0x34)); /* 0x1214CBE5: mov al, byte ptr [esi + 0x34] */
    MEM8(edx + ecx) = (uint8_t)(LO8(eax)); /* 0x1214CBE8: mov byte ptr [edx + ecx], al */
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CBEB: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_1214CBEF:
    edx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CBEF: movzx edx, word ptr [esi + 0xc] */
    /* cmp edx, MEM32(esi + 0x10) */ /* 0x1214CBF3: cmp edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CBCB; /* 0x1214CBF6: jb 0x1214cbcb */
L_1214CBF8:
    MEM32(esi + 0x30) = ebx; /* 0x1214CBF8: mov dword ptr [esi + 0x30], ebx */
    goto L_1214CC22; /* 0x1214CBFB: jmp 0x1214cc22 */
L_1214CBFD:
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x1214CBFD: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214CC22; /* 0x1214CC01: jle 0x1214cc22 */
L_1214CC03:
    edi = (uint32_t)MEM16(esi + 0xC); /* 0x1214CC03: movzx edi, word ptr [esi + 0xc] */
    /* cmp edi, MEM32(esi + 0x10) */ /* 0x1214CC07: cmp edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CC15; /* 0x1214CC0A: jb 0x1214cc15 */
L_1214CC0C:
    MEM32(esi + 0x30) = 1; /* 0x1214CC0C: mov dword ptr [esi + 0x30], 1 */
    goto L_1214CC22; /* 0x1214CC13: jmp 0x1214cc22 */
L_1214CC15:
    ecx = MEM32(esi + 0x4); /* 0x1214CC15: mov ecx, dword ptr [esi + 4] */
    SET_LO8(eax, MEM8(esi + 0x34)); /* 0x1214CC18: mov al, byte ptr [esi + 0x34] */
    MEM8(edi + ecx) = (uint8_t)(LO8(eax)); /* 0x1214CC1B: mov byte ptr [edi + ecx], al */
L_1214CC1E:
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CC1E: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_1214CC22:
    _flag_a = (uint32_t)(MEM16(esi + 0x34)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(esi + 0x34) = (uint16_t)(MEM16(esi + 0x34) & 0); /* 0x1214CC22: and word ptr [esi + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0; /* 0x1214CC27: and dword ptr [esi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1214CC2B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1214CC2C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214CC2D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214CC33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214CC33u);

L_1214CC33:
    edi = edi; /* 0x1214CC33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214CC35: push ebp */
    ebp = esp; /* 0x1214CC36: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1214CC38: push ebx */
    PUSH32(esp, esi); /* 0x1214CC39: push esi */
    PUSH32(esp, edi); /* 0x1214CC3A: push edi */
    esi = ecx; /* 0x1214CC3B: mov esi, ecx */
    ebx = eax; /* 0x1214CC3D: mov ebx, eax */
    RECOMP_CALL(sub_1214CBA4); /* 0x1214CC3F: call 0x1214cba4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1214CC44: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214CCD2; /* 0x1214CC48: je 0x1214ccd2 */
L_1214CC4E:
    edx = MEM32(esi + 0x10); /* 0x1214CC4E: mov edx, dword ptr [esi + 0x10] */
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CC51: movzx ecx, word ptr [esi + 0xc] */
    eax = edx + (-0x2); /* 0x1214CC55: lea eax, [edx - 2] */
    /* cmp ecx, eax */ /* 0x1214CC58: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214CC77; /* 0x1214CC5A: jae 0x1214cc77 */
L_1214CC5C:
    eax = MEM32(esi + 0x4); /* 0x1214CC5C: mov eax, dword ptr [esi + 4] */
    MEM8(ecx + eax) = (uint8_t)(LO8(ebx)); /* 0x1214CC5F: mov byte ptr [ecx + eax], bl */
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CC62: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CC66: movzx ecx, word ptr [esi + 0xc] */
    eax = MEM32(esi + 0x4); /* 0x1214CC6A: mov eax, dword ptr [esi + 4] */
    edx = ebx; /* 0x1214CC6D: mov edx, ebx */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x1214CC6F: shr edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 8u; /* 0x1214CC6F: shr edx, 8 */
    MEM8(ecx + eax) = (uint8_t)(LO8(edx)); /* 0x1214CC72: mov byte ptr [ecx + eax], dl */
    goto L_1214CCA2; /* 0x1214CC75: jmp 0x1214cca2 */
L_1214CC77:
    /* cmp ecx, edx */ /* 0x1214CC77: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CC84; /* 0x1214CC79: jb 0x1214cc84 */
L_1214CC7B:
    MEM32(esi + 0x30) = 1; /* 0x1214CC7B: mov dword ptr [esi + 0x30], 1 */
    goto L_1214CC8E; /* 0x1214CC82: jmp 0x1214cc8e */
L_1214CC84:
    eax = MEM32(esi + 0x4); /* 0x1214CC84: mov eax, dword ptr [esi + 4] */
    MEM8(ecx + eax) = (uint8_t)(LO8(ebx)); /* 0x1214CC87: mov byte ptr [ecx + eax], bl */
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CC8A: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_1214CC8E:
    edx = (uint32_t)MEM16(esi + 0xC); /* 0x1214CC8E: movzx edx, word ptr [esi + 0xc] */
    /* cmp edx, MEM32(esi + 0x10) */ /* 0x1214CC92: cmp edx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214CCB7; /* 0x1214CC95: jae 0x1214ccb7 */
L_1214CC97:
    eax = MEM32(esi + 0x4); /* 0x1214CC97: mov eax, dword ptr [esi + 4] */
    ecx = ebx; /* 0x1214CC9A: mov ecx, ebx */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x1214CC9C: shr ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 8u; /* 0x1214CC9C: shr ecx, 8 */
    MEM8(edx + eax) = (uint8_t)(LO8(ecx)); /* 0x1214CC9F: mov byte ptr [edx + eax], cl */
L_1214CCA2:
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CCA2: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_1214CCD2; /* 0x1214CCA6: jmp 0x1214ccd2 */
L_1214CCA8:
    edi = (uint32_t)MEM16(esi + 0xC); /* 0x1214CCA8: movzx edi, word ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFu; /* 0x1214CCAC: add ebx, 0xffff */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x10) */ /* 0x1214CCB2: cmp edi, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CCC0; /* 0x1214CCB5: jb 0x1214ccc0 */
L_1214CCB7:
    MEM32(esi + 0x30) = 1; /* 0x1214CCB7: mov dword ptr [esi + 0x30], 1 */
    goto L_1214CCD2; /* 0x1214CCBE: jmp 0x1214ccd2 */
L_1214CCC0:
    eax = MEM32(ebp + 0x8); /* 0x1214CCC0: mov eax, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(eax)); /* 0x1214CCC3: mov al, byte ptr [eax] */
    ecx = MEM32(esi + 0x4); /* 0x1214CCC5: mov ecx, dword ptr [esi + 4] */
    MEM8(edi + ecx) = (uint8_t)(LO8(eax)); /* 0x1214CCC8: mov byte ptr [edi + ecx], al */
    _flag_a = (uint32_t)(MEM16(esi + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0xC) = (uint16_t)(MEM16(esi + 0xC) + 1); /* 0x1214CCCB: inc word ptr [esi + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1214CCCF: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
L_1214CCD2:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1214CCD2: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214CCA8; /* 0x1214CCD5: jne 0x1214cca8 */
L_1214CCD7:
    edi = POP32_VAL(esp); /* 0x1214CCD7: pop edi */
    esi = POP32_VAL(esp); /* 0x1214CCD8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214CCD9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214CCDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214CCDB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214CCE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214CCE3u);

L_1214CCE3:
    ecx = eax + 0xB8; /* 0x1214CCE3: lea ecx, [eax + 0xb8] */
    edx = 0x11Eu; /* 0x1214CCE9: mov edx, 0x11e */
L_1214CCEE:
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) & 0); /* 0x1214CCEE: and word ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214CCF2: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214CCF5: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214CCEE; /* 0x1214CCF6: jne 0x1214ccee */
L_1214CCF8:
    PUSH32(esp, 0x1Eu); /* 0x1214CCF8: push 0x1e */
    ecx = eax + 0x9AC; /* 0x1214CCFA: lea ecx, [eax + 0x9ac] */
    edx = POP32_VAL(esp); /* 0x1214CD00: pop edx */
L_1214CD01:
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) & 0); /* 0x1214CD01: and word ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214CD05: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214CD08: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214CD01; /* 0x1214CD09: jne 0x1214cd01 */
L_1214CD0B:
    PUSH32(esp, 0x13u); /* 0x1214CD0B: push 0x13 */
    ecx = eax + 0xF98; /* 0x1214CD0D: lea ecx, [eax + 0xf98] */
    edx = POP32_VAL(esp); /* 0x1214CD13: pop edx */
L_1214CD14:
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) & 0); /* 0x1214CD14: and word ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214CD18: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214CD1B: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214CD14; /* 0x1214CD1C: jne 0x1214cd14 */
L_1214CD1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214CD1E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM16(eax + 0x54)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    MEM16(eax + 0x54) = (uint16_t)(MEM16(eax + 0x54) & LO16(ecx)); /* 0x1214CD20: and word ptr [eax + 0x54], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM16(eax + 0x52)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    MEM16(eax + 0x52) = (uint16_t)(MEM16(eax + 0x52) & LO16(ecx)); /* 0x1214CD24: and word ptr [eax + 0x52], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM16(eax + 0x50)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    MEM16(eax + 0x50) = (uint16_t)(MEM16(eax + 0x50) & LO16(ecx)); /* 0x1214CD28: and word ptr [eax + 0x50], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(eax + 0x4B8) = (uint16_t)(1); /* 0x1214CD2C: mov word ptr [eax + 0x4b8], 1 */
    MEM32(eax + 0x5C) = ecx; /* 0x1214CD35: mov dword ptr [eax + 0x5c], ecx */
    MEM32(eax + 0x58) = ecx; /* 0x1214CD38: mov dword ptr [eax + 0x58], ecx */
    MEM16(eax + 0x56) = (uint16_t)(0x100u); /* 0x1214CD3B: mov word ptr [eax + 0x56], 0x100 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214CD41: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214CD47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214CD47u);

L_1214CD47:
    edi = edi; /* 0x1214CD47: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214CD49: push ebp */
    ebp = esp; /* 0x1214CD4A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214CD4C: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1214CD4D: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1214CD50: push ebx */
    PUSH32(esp, esi); /* 0x1214CD51: push esi */
    esi = eax; /* 0x1214CD52: mov esi, eax */
    eax = MEM32(ecx + 0x48); /* 0x1214CD54: mov eax, dword ptr [ecx + 0x48] */
    ebx = MEM32(ecx + esi * 4 + 0x1054); /* 0x1214CD57: mov ebx, dword ptr [ecx + esi*4 + 0x1054] */
    edx = esi + esi; /* 0x1214CD5E: lea edx, [esi + esi] */
    /* cmp edx, eax */ /* 0x1214CD61: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214CDF8; /* 0x1214CD63: jg 0x1214cdf8 */
L_1214CD69:
    PUSH32(esp, edi); /* 0x1214CD69: push edi */
L_1214CD6A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_GE, _cf)) goto L_1214CDAE; /* 0x1214CD6A: jge 0x1214cdae */
L_1214CD6C:
    eax = MEM32(ecx + edx * 4 + 0x1058); /* 0x1214CD6C: mov eax, dword ptr [ecx + edx*4 + 0x1058] */
    edi = MEM32(ecx + edx * 4 + 0x1054); /* 0x1214CD73: mov edi, dword ptr [ecx + edx*4 + 0x1054] */
    ecx = MEM32(ebp + 0xC); /* 0x1214CD7A: mov ecx, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(ecx + eax * 4); /* 0x1214CD7D: movzx eax, word ptr [ecx + eax*4] */
    edi = (uint32_t)MEM16(ecx + edi * 4); /* 0x1214CD81: movzx edi, word ptr [ecx + edi*4] */
    ecx = MEM32(ebp + 0x8); /* 0x1214CD85: mov ecx, dword ptr [ebp + 8] */
    /* cmp LO16(eax), LO16(edi) */ /* 0x1214CD88: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CDAD; /* 0x1214CD8B: jb 0x1214cdad */
L_1214CD8D:
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214CDAE; /* 0x1214CD8D: jne 0x1214cdae */
L_1214CD8F:
    eax = MEM32(ecx + edx * 4 + 0x1058); /* 0x1214CD8F: mov eax, dword ptr [ecx + edx*4 + 0x1058] */
    SET_LO8(eax, MEM8(eax + ecx + 0x1948)); /* 0x1214CD96: mov al, byte ptr [eax + ecx + 0x1948] */
    edi = MEM32(ecx + edx * 4 + 0x1054); /* 0x1214CD9D: mov edi, dword ptr [ecx + edx*4 + 0x1054] */
    /* cmp LO8(eax), MEM8(edi + ecx + 0x1948) */ /* 0x1214CDA4: cmp al, byte ptr [edi + ecx + 0x1948] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi + ecx + 0x1948)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1214CDAE; /* 0x1214CDAB: ja 0x1214cdae */
L_1214CDAD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214CDAD: inc edx */
    _flag_k = FK_INC;
L_1214CDAE:
    edi = MEM32(ecx + edx * 4 + 0x1054); /* 0x1214CDAE: mov edi, dword ptr [ecx + edx*4 + 0x1054] */
    ecx = MEM32(ebp + 0xC); /* 0x1214CDB5: mov ecx, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(ecx + ebx * 4); /* 0x1214CDB8: movzx eax, word ptr [ecx + ebx*4] */
    ecx = (uint32_t)MEM16(ecx + edi * 4); /* 0x1214CDBC: movzx ecx, word ptr [ecx + edi*4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214CDC0: mov dword ptr [ebp - 4], ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1214CDC3: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(ebp + 0x8); /* 0x1214CDC6: mov ecx, dword ptr [ebp + 8] */
    if (CMP_B(_flag_a, _flag_b)) goto L_1214CDF7; /* 0x1214CDC9: jb 0x1214cdf7 */
L_1214CDCB:
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1214CDCB: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214CDE1; /* 0x1214CDCF: jne 0x1214cde1 */
L_1214CDD1:
    SET_LO8(eax, MEM8(ebx + ecx + 0x1948)); /* 0x1214CDD1: mov al, byte ptr [ebx + ecx + 0x1948] */
    /* cmp LO8(eax), MEM8(edi + ecx + 0x1948) */ /* 0x1214CDD8: cmp al, byte ptr [edi + ecx + 0x1948] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi + ecx + 0x1948)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214CDF7; /* 0x1214CDDF: jbe 0x1214cdf7 */
L_1214CDE1:
    MEM32(ecx + esi * 4 + 0x1054) = edi; /* 0x1214CDE1: mov dword ptr [ecx + esi*4 + 0x1054], edi */
    eax = MEM32(ecx + 0x48); /* 0x1214CDE8: mov eax, dword ptr [ecx + 0x48] */
    esi = edx; /* 0x1214CDEB: mov esi, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1214CDED: add edx, edx */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x1214CDEF: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214CD6A; /* 0x1214CDF1: jle 0x1214cd6a */
L_1214CDF7:
    edi = POP32_VAL(esp); /* 0x1214CDF7: pop edi */
L_1214CDF8:
    MEM32(ecx + esi * 4 + 0x1054) = ebx; /* 0x1214CDF8: mov dword ptr [ecx + esi*4 + 0x1054], ebx */
    esi = POP32_VAL(esp); /* 0x1214CDFF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214CE00: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214CE01: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214CE02: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214CE0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214CE0Au);

L_1214CE0A:
    edi = edi; /* 0x1214CE0A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214CE0C: push ebp */
    ebp = esp; /* 0x1214CE0D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1214CE0F: sub esp, 0x30 */
    _flag_k = FK_CMP;
    ecx = MEM32(eax); /* 0x1214CE12: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214CE14: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(eax + 0x8); /* 0x1214CE17: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1214CE1A: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1214CE1E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1214CE1F: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1214CE22: mov dword ptr [ebp - 0x2c], ecx */
    ecx = MEM32(eax + 0xC); /* 0x1214CE25: mov ecx, dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x1214CE28: push esi */
    esi = MEM32(eax + 0x14); /* 0x1214CE29: mov esi, dword ptr [eax + 0x14] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x1214CE2C: mov dword ptr [ebp - 0x28], ecx */
    ecx = MEM32(eax + 0x18); /* 0x1214CE2F: mov ecx, dword ptr [eax + 0x18] */
    eax = MEM32(eax + 0x4); /* 0x1214CE32: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1214CE35: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214CE38: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)LO16(eax); /* 0x1214CE3A: movzx edx, ax */
    PUSH32(esp, edi); /* 0x1214CE3D: push edi */
    eax = edx; /* 0x1214CE3E: mov eax, edx */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x1214CE40: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x1214CE40: shl edx, 0x10 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1214CE43: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x4)); /* 0x1214CE45: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1214CE48: mov dword ptr [ebp - 0x1c], ecx */
    PUSH32(esp, 8); /* 0x1214CE4B: push 8 */
    edi = ebx + 0x1034; /* 0x1214CE4D: lea edi, [ebx + 0x1034] */
    ecx = POP32_VAL(esp); /* 0x1214CE53: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214CE54: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebx + 0x4C); /* 0x1214CE56: mov eax, dword ptr [ebx + 0x4c] */
    eax = MEM32(ebx + eax * 4 + 0x1054); /* 0x1214CE59: mov eax, dword ptr [ebx + eax*4 + 0x1054] */
    _flag_a = (uint32_t)(MEM16(edx + eax * 4 + 0x2)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + eax * 4 + 0x2) = (uint16_t)(MEM16(edx + eax * 4 + 0x2) & 0); /* 0x1214CE60: and word ptr [edx + eax*4 + 2], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(ebx + 0x4C); /* 0x1214CE66: mov eax, dword ptr [ebx + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214CE69: inc eax */
    _flag_k = FK_INC;
    edi = 0x23Du; /* 0x1214CE6A: mov edi, 0x23d */
    MEM32(ebp + (-0x14)) = esi; /* 0x1214CE6F: mov dword ptr [ebp - 0x14], esi */
    /* cmp eax, edi */ /* 0x1214CE72: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214CFFB; /* 0x1214CE74: jge 0x1214cffb */
L_1214CE7A:
    ecx = ebx + eax * 4 + 0x1054; /* 0x1214CE7A: lea ecx, [ebx + eax*4 + 0x1054] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1214CE81: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1214CE83: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1214CE85: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1214CE88: mov dword ptr [ebp - 0x18], eax */
    goto L_1214CE90; /* 0x1214CE8B: jmp 0x1214ce90 */
L_1214CE8D:
    edx = MEM32(ebp + (-0x4)); /* 0x1214CE8D: mov edx, dword ptr [ebp - 4] */
L_1214CE90:
    ecx = MEM32(ecx); /* 0x1214CE90: mov ecx, dword ptr [ecx] */
    eax = ecx; /* 0x1214CE92: mov eax, ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1214CE94: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1214CE94: shl eax, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214CE97: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)MEM16(eax + edx + 0x2); /* 0x1214CE9A: movzx eax, word ptr [eax + edx + 2] */
    edx = (uint32_t)MEM16(edx + eax * 4 + 0x2); /* 0x1214CE9F: movzx edx, word ptr [edx + eax*4 + 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214CEA4: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x1214CEA5: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214CEAE; /* 0x1214CEA7: jle 0x1214ceae */
L_1214CEA9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1214CEA9: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    edx = esi; /* 0x1214CEAC: mov edx, esi */
L_1214CEAE:
    esi = MEM32(ebp + (-0x4)); /* 0x1214CEAE: mov esi, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x1214CEB1: mov eax, dword ptr [ebp - 8] */
    MEM16(eax + esi + 0x2) = (uint16_t)(LO16(edx)); /* 0x1214CEB4: mov word ptr [eax + esi + 2], dx */
    esi = MEM32(ebp + (-0x14)); /* 0x1214CEB9: mov esi, dword ptr [ebp - 0x14] */
    /* cmp ecx, MEM32(ebp + (-0x1C)) */ /* 0x1214CEBC: cmp ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214CF19; /* 0x1214CEBF: jg 0x1214cf19 */
L_1214CEC1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1214CEC1: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + edx * 2 + 0x1034; /* 0x1214CEC5: lea eax, [ebx + edx*2 + 0x1034] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) + 1); /* 0x1214CECC: inc word ptr [eax] */
    _flag_k = FK_NARROW(FK_INC, 16);
    eax = MEM32(ebp + (-0x28)); /* 0x1214CECF: mov eax, dword ptr [ebp - 0x28] */
    /* cmp ecx, eax */ /* 0x1214CED2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1214CEE1; /* 0x1214CED4: jl 0x1214cee1 */
L_1214CED6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1214CED6: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x2C)); /* 0x1214CED8: mov eax, dword ptr [ebp - 0x2c] */
    eax = MEM32(eax + ecx * 4); /* 0x1214CEDB: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1214CEDE: mov dword ptr [ebp - 0xc], eax */
L_1214CEE1:
    eax = MEM32(ebp + (-0x8)); /* 0x1214CEE1: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1214CEE4: mov ecx, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(eax + ecx); /* 0x1214CEE7: movzx eax, word ptr [eax + ecx] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1214CEEB: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1214CEEE: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1214CEF1: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x30)); /* 0x1214CEF3: mov edx, dword ptr [ebp - 0x30] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1214CEF6: imul eax, edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) + eax; /* 0x1214CEF9: add dword ptr [ebx + 0x58], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1214CEFC: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214CF19; /* 0x1214CF00: je 0x1214cf19 */
L_1214CF02:
    esi = MEM32(ebp + (-0x20)); /* 0x1214CF02: mov esi, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x8)); /* 0x1214CF05: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM16(eax + esi + 0x2); /* 0x1214CF08: movzx eax, word ptr [eax + esi + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x1214CF0D: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x14)); /* 0x1214CF10: mov esi, dword ptr [ebp - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1214CF13: imul eax, edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x5C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x5C) = MEM32(ebx + 0x5C) + eax; /* 0x1214CF16: add dword ptr [ebx + 0x5c], eax */
    _flag_k = FK_ADD;
L_1214CF19:
    ecx = MEM32(ebp + (-0x24)); /* 0x1214CF19: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214CF1C: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214CF1F: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1214CF20: mov dword ptr [ebp - 0x24], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214CE8D; /* 0x1214CF23: jne 0x1214ce8d */
L_1214CF29:
    edi = MEM32(ebp + (-0x10)); /* 0x1214CF29: mov edi, dword ptr [ebp - 0x10] */
    /* test edi, edi */ /* 0x1214CF2C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214CFFB; /* 0x1214CF2E: je 0x1214cffb */
L_1214CF34:
    eax = esi + (-0x1); /* 0x1214CF34: lea eax, [esi - 1] */
    edx = ebx + esi * 2 + 0x1034; /* 0x1214CF37: lea edx, [ebx + esi*2 + 0x1034] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1214CF3E: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x20)) = edx; /* 0x1214CF41: mov dword ptr [ebp - 0x20], edx */
    esi = eax; /* 0x1214CF44: mov esi, eax */
L_1214CF46:
    ecx = esi; /* 0x1214CF46: mov ecx, esi */
    eax = ebx + ecx * 2 + 0x1034; /* 0x1214CF48: lea eax, [ebx + ecx*2 + 0x1034] */
    goto L_1214CF55; /* 0x1214CF4F: jmp 0x1214cf55 */
L_1214CF51:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214CF51: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1214CF52: sub eax, 2 */
    _flag_k = FK_CMP;
L_1214CF55:
    /* cmp MEM16(eax), 0 */ /* 0x1214CF55: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214CF51; /* 0x1214CF59: je 0x1214cf51 */
L_1214CF5B:
    eax = ebx + ecx * 2 + 0x1034; /* 0x1214CF5B: lea eax, [ebx + ecx*2 + 0x1034] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) - 1); /* 0x1214CF62: dec word ptr [eax] */
    _flag_k = FK_NARROW(FK_DEC, 16);
    eax = ebx + ecx * 2 + 0x1036; /* 0x1214CF65: lea eax, [ebx + ecx*2 + 0x1036] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(eax) = (uint16_t)(MEM16(eax) + 2); /* 0x1214CF6C: add word ptr [eax], 2 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx) = (uint16_t)(MEM16(edx) - 1); /* 0x1214CF70: dec word ptr [edx] */
    _flag_k = FK_NARROW(FK_DEC, 16);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1214CF73: sub edi, 2 */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x1214CF76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214CF46; /* 0x1214CF78: jg 0x1214cf46 */
L_1214CF7A:
    esi = MEM32(ebp + (-0x14)); /* 0x1214CF7A: mov esi, dword ptr [ebp - 0x14] */
    /* test esi, esi */ /* 0x1214CF7D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214CFFB; /* 0x1214CF7F: je 0x1214cffb */
L_1214CF81:
    edi = (uint32_t)MEM16(edx); /* 0x1214CF81: movzx edi, word ptr [edx] */
    /* test edi, edi */ /* 0x1214CF84: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214CFF2; /* 0x1214CF86: je 0x1214cff2 */
L_1214CF88:
    ecx = MEM32(ebp + (-0x18)); /* 0x1214CF88: mov ecx, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1214CF8B: mov edx, dword ptr [ebp - 0x1c] */
    eax = ebx + ecx * 4 + 0x1054; /* 0x1214CF8E: lea eax, [ebx + ecx*4 + 0x1054] */
L_1214CF95:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1214CF95: sub eax, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1214CF98: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(eax); /* 0x1214CF9B: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214CF9D: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1214CF9E: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1214CFA1: mov dword ptr [ebp - 0x24], eax */
    /* cmp eax, edx */ /* 0x1214CFA4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214CFE8; /* 0x1214CFA6: jg 0x1214cfe8 */
L_1214CFA8:
    edx = MEM32(ebp + (-0x4)); /* 0x1214CFA8: mov edx, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(edx + eax * 4 + 0x2); /* 0x1214CFAB: movzx eax, word ptr [edx + eax*4 + 2] */
    edx = (uint32_t)LO16(esi); /* 0x1214CFB0: movzx edx, si */
    MEM32(ebp + (-0x30)) = edx; /* 0x1214CFB3: mov dword ptr [ebp - 0x30], edx */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1214CFB6: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214CFE4; /* 0x1214CFB9: je 0x1214cfe4 */
L_1214CFBB:
    edx = ebx + 0x58; /* 0x1214CFBB: lea edx, [ebx + 0x58] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1214CFBE: mov ebx, dword ptr [ebp - 4] */
    ecx = esi; /* 0x1214CFC1: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1214CFC3: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x24)); /* 0x1214CFC5: mov eax, dword ptr [ebp - 0x24] */
    eax = (uint32_t)MEM16(ebx + eax * 4); /* 0x1214CFC8: movzx eax, word ptr [ebx + eax*4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1214CFCC: imul ecx, eax */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + ecx; /* 0x1214CFCF: add dword ptr [edx], ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x30)); /* 0x1214CFD1: mov ecx, dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x24)); /* 0x1214CFD4: mov eax, dword ptr [ebp - 0x24] */
    edx = ebx; /* 0x1214CFD7: mov edx, ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1214CFD9: mov ebx, dword ptr [ebp + 8] */
    MEM16(edx + eax * 4 + 0x2) = (uint16_t)(LO16(ecx)); /* 0x1214CFDC: mov word ptr [edx + eax*4 + 2], cx */
    ecx = MEM32(ebp + (-0x18)); /* 0x1214CFE1: mov ecx, dword ptr [ebp - 0x18] */
L_1214CFE4:
    edx = MEM32(ebp + (-0x1C)); /* 0x1214CFE4: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214CFE7: dec edi */
    _flag_k = FK_DEC;
L_1214CFE8:
    eax = MEM32(ebp + (-0x2C)); /* 0x1214CFE8: mov eax, dword ptr [ebp - 0x2c] */
    /* test edi, edi */ /* 0x1214CFEB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214CF95; /* 0x1214CFED: jne 0x1214cf95 */
L_1214CFEF:
    edx = MEM32(ebp + (-0x20)); /* 0x1214CFEF: mov edx, dword ptr [ebp - 0x20] */
L_1214CFF2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 2; /* 0x1214CFF2: sub edx, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214CFF5: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = edx; /* 0x1214CFF6: mov dword ptr [ebp - 0x20], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214CF81; /* 0x1214CFF9: jne 0x1214cf81 */
L_1214CFFB:
    edi = POP32_VAL(esp); /* 0x1214CFFB: pop edi */
    esi = POP32_VAL(esp); /* 0x1214CFFC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214CFFD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214CFFE: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214CFFF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214D007(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D007u);

L_1214D007:
    edi = edi; /* 0x1214D007: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D009: push ebp */
    ebp = esp; /* 0x1214D00A: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1214D00C: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1214D00F: sub esp, 0x20 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214D012: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1214D014: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214D015: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D017: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1034u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1034u; /* 0x1214D018: add edx, 0x1034 */
    _flag_k = FK_ADD;
L_1214D01E:
    SET_LO16(eax, MEM16(edx)); /* 0x1214D01E: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(esi)); /* 0x1214D021: add ax, si */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(eax)); /* 0x1214D024: add ax, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    esi = (uint32_t)LO16(eax); /* 0x1214D027: movzx esi, ax */
    MEM16(ebp + ecx * 2 + (-0x20)) = (uint16_t)(LO16(esi)); /* 0x1214D02A: mov word ptr [ebp + ecx*2 - 0x20], si */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D02F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1214D030: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFu */ /* 0x1214D033: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214D01E; /* 0x1214D036: jle 0x1214d01e */
L_1214D038:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214D038: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1214D03A: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1214D076; /* 0x1214D03D: jl 0x1214d076 */
L_1214D03F:
    PUSH32(esp, edi); /* 0x1214D03F: push edi */
L_1214D040:
    esi = (uint32_t)MEM16(ebx + ecx * 4 + 0x2); /* 0x1214D040: movzx esi, word ptr [ebx + ecx*4 + 2] */
    /* test esi, esi */ /* 0x1214D045: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214D06F; /* 0x1214D047: je 0x1214d06f */
L_1214D049:
    eax = (uint32_t)MEM16(ebp + esi * 2 + (-0x20)); /* 0x1214D049: movzx eax, word ptr [ebp + esi*2 - 0x20] */
    edi = eax; /* 0x1214D04E: mov edi, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214D050: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + esi * 2 + (-0x20)) = (uint16_t)(LO16(eax)); /* 0x1214D051: mov word ptr [ebp + esi*2 - 0x20], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214D056: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D058:
    eax = edi; /* 0x1214D058: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1214D05A: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1214D05D: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1214D05F: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1214D061: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214D063: dec esi */
    _flag_k = FK_DEC;
    /* test esi, esi */ /* 0x1214D064: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214D058; /* 0x1214D066: jg 0x1214d058 */
L_1214D068:
    if (1u) _cf = (((LO16(edx)) >> 0) & 1u); /* 0x1214D068: shr dx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edx) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edx, LO16(edx) >> 1u); /* 0x1214D068: shr dx, 1 */
    MEM16(ebx + ecx * 4) = (uint16_t)(LO16(edx)); /* 0x1214D06B: mov word ptr [ebx + ecx*4], dx */
L_1214D06F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D06F: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1214D070: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214D040; /* 0x1214D073: jle 0x1214d040 */
L_1214D075:
    edi = POP32_VAL(esp); /* 0x1214D075: pop edi */
L_1214D076:
    esi = POP32_VAL(esp); /* 0x1214D076: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214D077: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214D078: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214D080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D080u);

L_1214D080:
    edi = edi; /* 0x1214D080: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D082: push ebp */
    ebp = esp; /* 0x1214D083: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1214D085: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1214D088: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x1214D08B: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(eax); /* 0x1214D08E: mov edx, dword ptr [eax] */
    eax = MEM32(eax + 0x10); /* 0x1214D090: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, ebx); /* 0x1214D093: push ebx */
    ebx = edi + 0x48; /* 0x1214D094: lea ebx, [edi + 0x48] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1214D097: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1214D09A: push esi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1214D09B: mov dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1214D09E: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214D0A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x1214D0A3: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1214D0A6: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1214D0A9: mov dword ptr [ebp - 4], esi */
    MEM32(edi + 0x4C) = 0x23Du; /* 0x1214D0AC: mov dword ptr [edi + 0x4c], 0x23d */
    /* test eax, eax */ /* 0x1214D0B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214D130; /* 0x1214D0B5: jle 0x1214d130 */
L_1214D0B7:
    /* cmp MEM16(edx + ecx * 4), 0 */ /* 0x1214D0B7: cmp word ptr [edx + ecx*4], 0 */
    _flag_a = (uint32_t)(MEM16(edx + ecx * 4)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D0D8; /* 0x1214D0BC: je 0x1214d0d8 */
L_1214D0BE:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1214D0BE: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    eax = MEM32(ebx); /* 0x1214D0C0: mov eax, dword ptr [ebx] */
    MEM32(edi + eax * 4 + 0x1054) = ecx; /* 0x1214D0C2: mov dword ptr [edi + eax*4 + 0x1054], ecx */
    eax = MEM32(ebp + (-0xC)); /* 0x1214D0C9: mov eax, dword ptr [ebp - 0xc] */
    esi = ecx; /* 0x1214D0CC: mov esi, ecx */
    MEM8(ecx + edi + 0x1948) = (uint8_t)(0); /* 0x1214D0CE: mov byte ptr [ecx + edi + 0x1948], 0 */
    goto L_1214D0DE; /* 0x1214D0D6: jmp 0x1214d0de */
L_1214D0D8:
    _flag_a = (uint32_t)(MEM16(edx + ecx * 4 + 0x2)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + ecx * 4 + 0x2) = (uint16_t)(MEM16(edx + ecx * 4 + 0x2) & 0); /* 0x1214D0D8: and word ptr [edx + ecx*4 + 2], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_1214D0DE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D0DE: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x1214D0DF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214D0B7; /* 0x1214D0E1: jl 0x1214d0b7 */
L_1214D0E3:
    MEM32(ebp + (-0x4)) = esi; /* 0x1214D0E3: mov dword ptr [ebp - 4], esi */
    goto L_1214D130; /* 0x1214D0E6: jmp 0x1214d130 */
L_1214D0E8:
    /* cmp esi, 2 */ /* 0x1214D0E8: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D0F8; /* 0x1214D0EB: jge 0x1214d0f8 */
L_1214D0ED:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214D0ED: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1214D0EE: mov dword ptr [ebp - 4], esi */
    ecx = esi; /* 0x1214D0F1: mov ecx, esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x1214D0F3: mov dword ptr [ebp - 0x10], esi */
    goto L_1214D0FD; /* 0x1214D0F6: jmp 0x1214d0fd */
L_1214D0F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214D0F8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1214D0FA: mov dword ptr [ebp - 0x10], ecx */
L_1214D0FD:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x1214D0FD: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    eax = MEM32(ebx); /* 0x1214D0FF: mov eax, dword ptr [ebx] */
    MEM32(edi + eax * 4 + 0x1054) = ecx; /* 0x1214D101: mov dword ptr [edi + eax*4 + 0x1054], ecx */
    MEM16(edx + ecx * 4) = (uint16_t)(1); /* 0x1214D108: mov word ptr [edx + ecx*4], 1 */
    MEM8(edi + ecx + 0x1948) = (uint8_t)(0); /* 0x1214D10E: mov byte ptr [edi + ecx + 0x1948], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x58) = MEM32(edi + 0x58) - 1; /* 0x1214D116: dec dword ptr [edi + 0x58] */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1214D119: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D130; /* 0x1214D11D: je 0x1214d130 */
L_1214D11F:
    esi = MEM32(ebp + (-0x14)); /* 0x1214D11F: mov esi, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x10)); /* 0x1214D122: mov eax, dword ptr [ebp - 0x10] */
    eax = (uint32_t)MEM16(esi + eax * 4 + 0x2); /* 0x1214D125: movzx eax, word ptr [esi + eax*4 + 2] */
    _flag_a = (uint32_t)(MEM32(edi + 0x5C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0x5C) = MEM32(edi + 0x5C) - eax; /* 0x1214D12A: sub dword ptr [edi + 0x5c], eax */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x4)); /* 0x1214D12D: mov esi, dword ptr [ebp - 4] */
L_1214D130:
    /* cmp MEM32(ebx), 2 */ /* 0x1214D130: cmp dword ptr [ebx], 2 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214D0E8; /* 0x1214D133: jl 0x1214d0e8 */
L_1214D135:
    eax = MEM32(ebp + 0x8); /* 0x1214D135: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x18) = esi; /* 0x1214D138: mov dword ptr [eax + 0x18], esi */
    eax = MEM32(ebx); /* 0x1214D13B: mov eax, dword ptr [ebx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1214D13D: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1214D13E: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x1214D140: mov esi, eax */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1214D142: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    /* cmp esi, 1 */ /* 0x1214D144: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1214D15E; /* 0x1214D147: jl 0x1214d15e */
L_1214D149:
    ebx = MEM32(ebp + (-0x8)); /* 0x1214D149: mov ebx, dword ptr [ebp - 8] */
L_1214D14C:
    PUSH32(esp, ebx); /* 0x1214D14C: push ebx */
    PUSH32(esp, edi); /* 0x1214D14D: push edi */
    eax = esi; /* 0x1214D14E: mov eax, esi */
    RECOMP_CALL(sub_1214CD47); /* 0x1214D150: call 0x1214cd47 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214D155: dec esi */
    _flag_k = FK_DEC;
    /* cmp esi, 1 */ /* 0x1214D156: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D14C; /* 0x1214D159: jge 0x1214d14c */
L_1214D15B:
    ebx = edi + 0x48; /* 0x1214D15B: lea ebx, [edi + 0x48] */
L_1214D15E:
    ecx = MEM32(ebx); /* 0x1214D15E: mov ecx, dword ptr [ebx] */
    eax = MEM32(edi + ecx * 4 + 0x1054); /* 0x1214D160: mov eax, dword ptr [edi + ecx*4 + 0x1054] */
    esi = MEM32(edi + 0x1058); /* 0x1214D167: mov esi, dword ptr [edi + 0x1058] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1214D16D: push dword ptr [ebp - 8] */
    MEM32(edi + 0x1058) = eax; /* 0x1214D170: mov dword ptr [edi + 0x1058], eax */
    eax = ecx + (-0x1); /* 0x1214D176: lea eax, [ecx - 1] */
    MEM32(ebx) = eax; /* 0x1214D179: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214D17B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1214D17D: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214D17E: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1214CD47); /* 0x1214D17F: call 0x1214cd47 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4C) = MEM32(edi + 0x4C) - 1; /* 0x1214D184: dec dword ptr [edi + 0x4c] */
    _flag_k = FK_DEC;
    edx = MEM32(edi + 0x1058); /* 0x1214D187: mov edx, dword ptr [edi + 0x1058] */
    eax = MEM32(edi + 0x4C); /* 0x1214D18D: mov eax, dword ptr [edi + 0x4c] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1214D190: mov ecx, dword ptr [ebp - 8] */
    MEM32(edi + eax * 4 + 0x1054) = esi; /* 0x1214D193: mov dword ptr [edi + eax*4 + 0x1054], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4C) = MEM32(edi + 0x4C) - 1; /* 0x1214D19A: dec dword ptr [edi + 0x4c] */
    _flag_k = FK_DEC;
    eax = MEM32(edi + 0x4C); /* 0x1214D19D: mov eax, dword ptr [edi + 0x4c] */
    MEM32(edi + eax * 4 + 0x1054) = edx; /* 0x1214D1A0: mov dword ptr [edi + eax*4 + 0x1054], edx */
    eax = ecx + esi * 4; /* 0x1214D1A7: lea eax, [ecx + esi*4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1214D1AA: mov dword ptr [ebp - 0x10], eax */
    SET_LO16(eax, MEM16(ecx + edx * 4)); /* 0x1214D1AD: mov ax, word ptr [ecx + edx*4] */
    MEM32(ebp + (-0x14)) = edx; /* 0x1214D1B1: mov dword ptr [ebp - 0x14], edx */
    edx = ecx + esi * 4; /* 0x1214D1B4: lea edx, [ecx + esi*4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(edx)); /* 0x1214D1B7: add ax, word ptr [edx] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    edx = MEM32(ebp + (-0xC)); /* 0x1214D1BA: mov edx, dword ptr [ebp - 0xc] */
    MEM16(ecx + edx * 4) = (uint16_t)(LO16(eax)); /* 0x1214D1BD: mov word ptr [ecx + edx*4], ax */
    SET_LO8(eax, MEM8(edi + esi + 0x1948)); /* 0x1214D1C1: mov al, byte ptr [edi + esi + 0x1948] */
    esi = MEM32(ebp + (-0x14)); /* 0x1214D1C8: mov esi, dword ptr [ebp - 0x14] */
    SET_HI8(eax, MEM8(edi + esi + 0x1948)); /* 0x1214D1CB: mov ah, byte ptr [edi + esi + 0x1948] */
    /* cmp LO8(eax), HI8(eax) */ /* 0x1214D1D2: cmp al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1214D1DB; /* 0x1214D1D4: jb 0x1214d1db */
L_1214D1D6:
    eax = (uint32_t)LO8(eax); /* 0x1214D1D6: movzx eax, al */
    goto L_1214D1DE; /* 0x1214D1D9: jmp 0x1214d1de */
L_1214D1DB:
    eax = (uint32_t)HI8(eax); /* 0x1214D1DB: movzx eax, ah */
L_1214D1DE:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x1214D1DE: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(edi + edx + 0x1948) = (uint8_t)(LO8(eax)); /* 0x1214D1E0: mov byte ptr [edi + edx + 0x1948], al */
    eax = (uint32_t)LO16(edx); /* 0x1214D1E7: movzx eax, dx */
    MEM16(ecx + esi * 4 + 0x2) = (uint16_t)(LO16(eax)); /* 0x1214D1EA: mov word ptr [ecx + esi*4 + 2], ax */
    esi = MEM32(ebp + (-0x10)); /* 0x1214D1EF: mov esi, dword ptr [ebp - 0x10] */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1214D1F2: mov word ptr [esi + 2], ax */
    MEM32(edi + 0x1058) = edx; /* 0x1214D1F6: mov dword ptr [edi + 0x1058], edx */
    PUSH32(esp, ecx); /* 0x1214D1FC: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214D1FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214D1FF: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x1214D200: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214D201: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = edx; /* 0x1214D202: mov dword ptr [ebp - 0xc], edx */
    RECOMP_CALL(sub_1214CD47); /* 0x1214D205: call 0x1214cd47 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), 2 */ /* 0x1214D20A: cmp dword ptr [ebx], 2 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D15E; /* 0x1214D20D: jge 0x1214d15e */
L_1214D213:
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4C) = MEM32(edi + 0x4C) - 1; /* 0x1214D213: dec dword ptr [edi + 0x4c] */
    _flag_k = FK_DEC;
    edx = MEM32(edi + 0x4C); /* 0x1214D216: mov edx, dword ptr [edi + 0x4c] */
    ecx = MEM32(edi + 0x1058); /* 0x1214D219: mov ecx, dword ptr [edi + 0x1058] */
    eax = MEM32(ebp + 0x8); /* 0x1214D21F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1214D222: push edi */
    MEM32(edi + edx * 4 + 0x1054) = ecx; /* 0x1214D223: mov dword ptr [edi + edx*4 + 0x1054], ecx */
    RECOMP_CALL(sub_1214CE0A); /* 0x1214D22A: call 0x1214ce0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1214D22F: push dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1214D232: mov ebx, dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1214D235: push edi */
    RECOMP_CALL(sub_1214D007); /* 0x1214D236: call 0x1214d007 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1214D23B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214D23C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214D23D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214D23E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214D246(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D246u);

L_1214D246:
    edi = edi; /* 0x1214D246: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D248: push ebp */
    ebp = esp; /* 0x1214D249: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1214D24B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x1214D24E: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1214D252: push ebx */
    PUSH32(esp, esi); /* 0x1214D253: push esi */
    ebx = eax; /* 0x1214D254: mov ebx, eax */
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x1214D256: movzx eax, word ptr [ebx + 2] */
    PUSH32(esp, 7); /* 0x1214D25A: push 7 */
    edx = POP32_VAL(esp); /* 0x1214D25C: pop edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214D25D: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214D260: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1214D262: push 4 */
    eax = POP32_VAL(esp); /* 0x1214D264: pop eax */
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x1214D265: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D272; /* 0x1214D268: jne 0x1214d272 */
L_1214D26A:
    PUSH32(esp, 3); /* 0x1214D26A: push 3 */
    edx = 0x8Au; /* 0x1214D26C: mov edx, 0x8a */
    eax = POP32_VAL(esp); /* 0x1214D271: pop eax */
L_1214D272:
    _flag_a = (uint32_t)((MEM16(ebx + ecx * 4 + 0x6) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(ebx + ecx * 4 + 0x6) | 0xFFFFu)) << 16;
    MEM16(ebx + ecx * 4 + 0x6) = (uint16_t)(MEM16(ebx + ecx * 4 + 0x6) | 0xFFFFu); /* 0x1214D272: or word ptr [ebx + ecx*4 + 6], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test ecx, ecx */ /* 0x1214D279: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214D30A; /* 0x1214D27B: js 0x1214d30a */
L_1214D281:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 6; /* 0x1214D281: add ebx, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D284: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1214D285: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x1214D288: mov ebx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1214D28B: mov dword ptr [ebp - 0x10], ecx */
L_1214D28E:
    ecx = ebx; /* 0x1214D28E: mov ecx, ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x1214D290: mov ebx, dword ptr [ebp - 4] */
    ebx = (uint32_t)MEM16(ebx); /* 0x1214D293: movzx ebx, word ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214D296: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edx */ /* 0x1214D297: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D29F; /* 0x1214D299: jge 0x1214d29f */
L_1214D29B:
    /* cmp ecx, ebx */ /* 0x1214D29B: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D301; /* 0x1214D29D: je 0x1214d301 */
L_1214D29F:
    /* cmp esi, eax */ /* 0x1214D29F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D2AF; /* 0x1214D2A1: jge 0x1214d2af */
L_1214D2A3:
    eax = edi + ecx * 4 + 0xF98; /* 0x1214D2A3: lea eax, [edi + ecx*4 + 0xf98] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(eax) = (uint16_t)(MEM16(eax) + LO16(esi)); /* 0x1214D2AA: add word ptr [eax], si */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_1214D2E0; /* 0x1214D2AD: jmp 0x1214d2e0 */
L_1214D2AF:
    /* test ecx, ecx */ /* 0x1214D2AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214D2CB; /* 0x1214D2B1: je 0x1214d2cb */
L_1214D2B3:
    /* cmp ecx, MEM32(ebp + (-0xC)) */ /* 0x1214D2B3: cmp ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D2C2; /* 0x1214D2B6: je 0x1214d2c2 */
L_1214D2B8:
    eax = edi + ecx * 4 + 0xF98; /* 0x1214D2B8: lea eax, [edi + ecx*4 + 0xf98] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) + 1); /* 0x1214D2BF: inc word ptr [eax] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_1214D2C2:
    _flag_a = (uint32_t)(MEM16(edi + 0xFD8)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi + 0xFD8) = (uint16_t)(MEM16(edi + 0xFD8) + 1); /* 0x1214D2C2: inc word ptr [edi + 0xfd8] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_1214D2E0; /* 0x1214D2C9: jmp 0x1214d2e0 */
L_1214D2CB:
    /* cmp esi, 0xAu */ /* 0x1214D2CB: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214D2D9; /* 0x1214D2CE: jg 0x1214d2d9 */
L_1214D2D0:
    _flag_a = (uint32_t)(MEM16(edi + 0xFDC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi + 0xFDC) = (uint16_t)(MEM16(edi + 0xFDC) + 1); /* 0x1214D2D0: inc word ptr [edi + 0xfdc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_1214D2E0; /* 0x1214D2D7: jmp 0x1214d2e0 */
L_1214D2D9:
    _flag_a = (uint32_t)(MEM16(edi + 0xFE0)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edi + 0xFE0) = (uint16_t)(MEM16(edi + 0xFE0) + 1); /* 0x1214D2D9: inc word ptr [edi + 0xfe0] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_1214D2E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214D2E0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1214D2E2: mov dword ptr [ebp - 0xc], ecx */
    /* test ebx, ebx */ /* 0x1214D2E5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D2F2; /* 0x1214D2E7: jne 0x1214d2f2 */
L_1214D2E9:
    edx = 0x8Au; /* 0x1214D2E9: mov edx, 0x8a */
L_1214D2EE:
    PUSH32(esp, 3); /* 0x1214D2EE: push 3 */
    goto L_1214D300; /* 0x1214D2F0: jmp 0x1214d300 */
L_1214D2F2:
    /* cmp ecx, ebx */ /* 0x1214D2F2: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D2FB; /* 0x1214D2F4: jne 0x1214d2fb */
L_1214D2F6:
    PUSH32(esp, 6); /* 0x1214D2F6: push 6 */
    edx = POP32_VAL(esp); /* 0x1214D2F8: pop edx */
    RECOMP_BACKEDGE();
    goto L_1214D2EE; /* 0x1214D2F9: jmp 0x1214d2ee */
L_1214D2FB:
    PUSH32(esp, 7); /* 0x1214D2FB: push 7 */
    edx = POP32_VAL(esp); /* 0x1214D2FD: pop edx */
    PUSH32(esp, 4); /* 0x1214D2FE: push 4 */
L_1214D300:
    eax = POP32_VAL(esp); /* 0x1214D300: pop eax */
L_1214D301:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x1214D301: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x1214D305: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214D28E; /* 0x1214D308: jne 0x1214d28e */
L_1214D30A:
    esi = POP32_VAL(esp); /* 0x1214D30A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214D30B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214D30C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214D30D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214D313(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D313u);

L_1214D313:
    edi = edi; /* 0x1214D313: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D315: push ebp */
    ebp = esp; /* 0x1214D316: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1214D318: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x1214D31B: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1214D31F: push ebx */
    PUSH32(esp, esi); /* 0x1214D320: push esi */
    PUSH32(esp, edi); /* 0x1214D321: push edi */
    edi = eax; /* 0x1214D322: mov edi, eax */
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x1214D324: movzx eax, word ptr [edi + 2] */
    PUSH32(esp, 7); /* 0x1214D328: push 7 */
    esi = ecx; /* 0x1214D32A: mov esi, ecx */
    ecx = POP32_VAL(esp); /* 0x1214D32C: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214D32D: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214D330: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1214D332: push 4 */
    eax = POP32_VAL(esp); /* 0x1214D334: pop eax */
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1214D335: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D342; /* 0x1214D338: jne 0x1214d342 */
L_1214D33A:
    PUSH32(esp, 3); /* 0x1214D33A: push 3 */
    ecx = 0x8Au; /* 0x1214D33C: mov ecx, 0x8a */
    eax = POP32_VAL(esp); /* 0x1214D341: pop eax */
L_1214D342:
    /* test edx, edx */ /* 0x1214D342: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214D43B; /* 0x1214D344: js 0x1214d43b */
L_1214D34A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 6; /* 0x1214D34A: add edi, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214D34D: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = edx; /* 0x1214D34E: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x1214D351: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1214D354: mov dword ptr [ebp - 8], edi */
L_1214D357:
    edi = edx; /* 0x1214D357: mov edi, edx */
    edx = MEM32(ebp + (-0x8)); /* 0x1214D359: mov edx, dword ptr [ebp - 8] */
    edx = (uint32_t)MEM16(edx); /* 0x1214D35C: movzx edx, word ptr [edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214D35F: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edx; /* 0x1214D360: mov dword ptr [ebp - 4], edx */
    /* cmp ebx, ecx */ /* 0x1214D363: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D36F; /* 0x1214D365: jge 0x1214d36f */
L_1214D367:
    /* cmp edi, edx */ /* 0x1214D367: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D42E; /* 0x1214D369: je 0x1214d42e */
L_1214D36F:
    /* cmp ebx, eax */ /* 0x1214D36F: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D38F; /* 0x1214D371: jge 0x1214d38f */
L_1214D373:
    eax = (uint32_t)MEM16(esi + edi * 4 + 0xF9A); /* 0x1214D373: movzx eax, word ptr [esi + edi*4 + 0xf9a] */
    PUSH32(esp, eax); /* 0x1214D37B: push eax */
    eax = (uint32_t)MEM16(esi + edi * 4 + 0xF98); /* 0x1214D37C: movzx eax, word ptr [esi + edi*4 + 0xf98] */
    PUSH32(esp, eax); /* 0x1214D384: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D385: call 0x1214cada */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1214D38A: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214D373; /* 0x1214D38B: jne 0x1214d373 */
L_1214D38D:
    goto L_1214D40A; /* 0x1214D38D: jmp 0x1214d40a */
L_1214D38F:
    /* test edi, edi */ /* 0x1214D38F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214D3CC; /* 0x1214D391: je 0x1214d3cc */
L_1214D393:
    /* cmp edi, MEM32(ebp + (-0xC)) */ /* 0x1214D393: cmp edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D3B0; /* 0x1214D396: je 0x1214d3b0 */
L_1214D398:
    eax = (uint32_t)MEM16(esi + edi * 4 + 0xF9A); /* 0x1214D398: movzx eax, word ptr [esi + edi*4 + 0xf9a] */
    PUSH32(esp, eax); /* 0x1214D3A0: push eax */
    eax = (uint32_t)MEM16(esi + edi * 4 + 0xF98); /* 0x1214D3A1: movzx eax, word ptr [esi + edi*4 + 0xf98] */
    PUSH32(esp, eax); /* 0x1214D3A9: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D3AA: call 0x1214cada */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1214D3AF: dec ebx */
    _flag_k = FK_DEC;
L_1214D3B0:
    eax = (uint32_t)MEM16(esi + 0xFDA); /* 0x1214D3B0: movzx eax, word ptr [esi + 0xfda] */
    PUSH32(esp, eax); /* 0x1214D3B7: push eax */
    eax = (uint32_t)MEM16(esi + 0xFD8); /* 0x1214D3B8: movzx eax, word ptr [esi + 0xfd8] */
    PUSH32(esp, eax); /* 0x1214D3BF: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D3C0: call 0x1214cada */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x1214D3C5: push 2 */
L_1214D3C7:
    eax = ebx + (-0x3); /* 0x1214D3C7: lea eax, [ebx - 3] */
    goto L_1214D404; /* 0x1214D3CA: jmp 0x1214d404 */
L_1214D3CC:
    /* cmp ebx, 0xAu */ /* 0x1214D3CC: cmp ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214D3EA; /* 0x1214D3CF: jg 0x1214d3ea */
L_1214D3D1:
    eax = (uint32_t)MEM16(esi + 0xFDE); /* 0x1214D3D1: movzx eax, word ptr [esi + 0xfde] */
    PUSH32(esp, eax); /* 0x1214D3D8: push eax */
    eax = (uint32_t)MEM16(esi + 0xFDC); /* 0x1214D3D9: movzx eax, word ptr [esi + 0xfdc] */
    PUSH32(esp, eax); /* 0x1214D3E0: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D3E1: call 0x1214cada */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 3); /* 0x1214D3E6: push 3 */
    RECOMP_BACKEDGE();
    goto L_1214D3C7; /* 0x1214D3E8: jmp 0x1214d3c7 */
L_1214D3EA:
    eax = (uint32_t)MEM16(esi + 0xFE2); /* 0x1214D3EA: movzx eax, word ptr [esi + 0xfe2] */
    PUSH32(esp, eax); /* 0x1214D3F1: push eax */
    eax = (uint32_t)MEM16(esi + 0xFE0); /* 0x1214D3F2: movzx eax, word ptr [esi + 0xfe0] */
    PUSH32(esp, eax); /* 0x1214D3F9: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D3FA: call 0x1214cada */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x1214D3FF: push 7 */
    eax = ebx + (-0xB); /* 0x1214D401: lea eax, [ebx - 0xb] */
L_1214D404:
    PUSH32(esp, eax); /* 0x1214D404: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D405: call 0x1214cada */
    RECOMP_FLAGS_IN();
L_1214D40A:
    edx = MEM32(ebp + (-0x4)); /* 0x1214D40A: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214D40D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edi; /* 0x1214D40F: mov dword ptr [ebp - 0xc], edi */
    /* test edx, edx */ /* 0x1214D412: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D41F; /* 0x1214D414: jne 0x1214d41f */
L_1214D416:
    ecx = 0x8Au; /* 0x1214D416: mov ecx, 0x8a */
L_1214D41B:
    PUSH32(esp, 3); /* 0x1214D41B: push 3 */
    goto L_1214D42D; /* 0x1214D41D: jmp 0x1214d42d */
L_1214D41F:
    /* cmp edi, edx */ /* 0x1214D41F: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D428; /* 0x1214D421: jne 0x1214d428 */
L_1214D423:
    PUSH32(esp, 6); /* 0x1214D423: push 6 */
    ecx = POP32_VAL(esp); /* 0x1214D425: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1214D41B; /* 0x1214D426: jmp 0x1214d41b */
L_1214D428:
    PUSH32(esp, 7); /* 0x1214D428: push 7 */
    ecx = POP32_VAL(esp); /* 0x1214D42A: pop ecx */
    PUSH32(esp, 4); /* 0x1214D42B: push 4 */
L_1214D42D:
    eax = POP32_VAL(esp); /* 0x1214D42D: pop eax */
L_1214D42E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x1214D42E: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x1214D432: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214D357; /* 0x1214D435: jne 0x1214d357 */
L_1214D43B:
    edi = POP32_VAL(esp); /* 0x1214D43B: pop edi */
    esi = POP32_VAL(esp); /* 0x1214D43C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214D43D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214D43E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214D43F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214D445(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D445u);

L_1214D445:
    edi = edi; /* 0x1214D445: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D447: push ebp */
    ebp = esp; /* 0x1214D448: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214D44A: push esi */
    esi = eax; /* 0x1214D44B: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x1214D44D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1214D450: push edi */
    PUSH32(esp, 5); /* 0x1214D451: push 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFEFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFEFFu; /* 0x1214D453: add eax, 0xfffffeff */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1214D458: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D459: call 0x1214cada */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1214D45E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214D461: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 5); /* 0x1214D462: push 5 */
    PUSH32(esp, eax); /* 0x1214D464: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x1214D465: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D468: call 0x1214cada */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x1214D46D: push 4 */
    eax = ebx + (-0x4); /* 0x1214D46F: lea eax, [ebx - 4] */
    PUSH32(esp, eax); /* 0x1214D472: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D473: call 0x1214cada */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214D478: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1214D47A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214D49A; /* 0x1214D47C: jle 0x1214d49a */
L_1214D47E:
    eax = (uint32_t)MEM8(edi + 0x12011644); /* 0x1214D47E: movzx eax, byte ptr [edi + 0x12011644] */
    eax = (uint32_t)MEM16(esi + eax * 4 + 0xF9A); /* 0x1214D485: movzx eax, word ptr [esi + eax*4 + 0xf9a] */
    PUSH32(esp, 3); /* 0x1214D48D: push 3 */
    PUSH32(esp, eax); /* 0x1214D48F: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D490: call 0x1214cada */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214D495: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ebx */ /* 0x1214D496: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214D47E; /* 0x1214D498: jl 0x1214d47e */
L_1214D49A:
    edx = MEM32(ebp + 0x8); /* 0x1214D49A: mov edx, dword ptr [ebp + 8] */
    edx = edx + (-0x1); /* 0x1214D49D: lea edx, [edx - 1] */
    eax = esi + 0xB8; /* 0x1214D4A0: lea eax, [esi + 0xb8] */
    ecx = esi; /* 0x1214D4A6: mov ecx, esi */
    RECOMP_CALL(sub_1214D313); /* 0x1214D4A8: call 0x1214d313 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x1214D4AD: mov edx, dword ptr [ebp + 0xc] */
    eax = esi + 0x9AC; /* 0x1214D4B0: lea eax, [esi + 0x9ac] */
    ecx = esi; /* 0x1214D4B6: mov ecx, esi */
    RECOMP_CALL(sub_1214D313); /* 0x1214D4B8: call 0x1214d313 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1214D4BD: pop edi */
    esi = POP32_VAL(esp); /* 0x1214D4BE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214D4BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214D4C0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214D4C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D4C8u);

L_1214D4C8:
    edi = edi; /* 0x1214D4C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D4CA: push ebp */
    ebp = esp; /* 0x1214D4CB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214D4CD: push ecx */
    PUSH32(esp, ebx); /* 0x1214D4CE: push ebx */
    PUSH32(esp, esi); /* 0x1214D4CF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214D4D0: mov esi, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(esi + 0x50); /* 0x1214D4D3: movzx ecx, word ptr [esi + 0x50] */
    PUSH32(esp, edi); /* 0x1214D4D7: push edi */
    edi = eax; /* 0x1214D4D8: mov edi, eax */
    eax = MEM32(esi); /* 0x1214D4DA: mov eax, dword ptr [esi] */
    MEM8(ecx + eax) = (uint8_t)(LO8(edx)); /* 0x1214D4DC: mov byte ptr [ecx + eax], dl */
    _flag_a = (uint32_t)(MEM16(esi + 0x50)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x50) = (uint16_t)(MEM16(esi + 0x50) + 1); /* 0x1214D4DF: inc word ptr [esi + 0x50] */
    _flag_k = FK_NARROW(FK_INC, 16);
    /* test edi, edi */ /* 0x1214D4E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D4F3; /* 0x1214D4E5: jne 0x1214d4f3 */
L_1214D4E7:
    eax = esi + edx * 4 + 0xB8; /* 0x1214D4E7: lea eax, [esi + edx*4 + 0xb8] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) + 1); /* 0x1214D4EE: inc word ptr [eax] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_1214D544; /* 0x1214D4F1: jmp 0x1214d544 */
L_1214D4F3:
    eax = (uint32_t)MEM8(esi + edx + 0x1B85); /* 0x1214D4F3: movzx eax, byte ptr [esi + edx + 0x1b85] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214D4FB: dec edi */
    _flag_k = FK_DEC;
    eax = esi + eax * 4 + 0x4BC; /* 0x1214D4FC: lea eax, [esi + eax*4 + 0x4bc] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) + 1); /* 0x1214D503: inc word ptr [eax] */
    _flag_k = FK_NARROW(FK_INC, 16);
    /* cmp edi, 0x100u */ /* 0x1214D506: cmp edi, 0x100 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D518; /* 0x1214D50C: jge 0x1214d518 */
L_1214D50E:
    eax = (uint32_t)MEM8(esi + edi + 0x1C85); /* 0x1214D50E: movzx eax, byte ptr [esi + edi + 0x1c85] */
    goto L_1214D525; /* 0x1214D516: jmp 0x1214d525 */
L_1214D518:
    eax = edi; /* 0x1214D518: mov eax, edi */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x1214D51A: sar eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 7u);
    eax = (uint32_t)MEM8(eax + esi + 0x1D85); /* 0x1214D51D: movzx eax, byte ptr [eax + esi + 0x1d85] */
L_1214D525:
    eax = esi + eax * 4 + 0x9AC; /* 0x1214D525: lea eax, [esi + eax*4 + 0x9ac] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) + 1); /* 0x1214D52C: inc word ptr [eax] */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (uint32_t)MEM16(esi + 0x52); /* 0x1214D52F: movzx ecx, word ptr [esi + 0x52] */
    eax = MEM32(esi + 0x8); /* 0x1214D533: mov eax, dword ptr [esi + 8] */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(edi)); /* 0x1214D536: mov word ptr [eax + ecx*2], di */
    SET_LO8(eax, MEM8(esi + 0x57)); /* 0x1214D53A: mov al, byte ptr [esi + 0x57] */
    _flag_a = (uint32_t)(MEM16(esi + 0x52)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x52) = (uint16_t)(MEM16(esi + 0x52) + 1); /* 0x1214D53D: inc word ptr [esi + 0x52] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)((MEM8(esi + 0x56) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x56) | LO8(eax))) << 24;
    MEM8(esi + 0x56) = (uint8_t)(MEM8(esi + 0x56) | LO8(eax)); /* 0x1214D541: or byte ptr [esi + 0x56], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1214D544:
    if (1u) _cf = (((MEM8(esi + 0x57)) >> 7) & 1u); /* 0x1214D544: shl byte ptr [esi + 0x57], 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(esi + 0x57) << 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(esi + 0x57) = (uint8_t)(MEM8(esi + 0x57) << 1u); /* 0x1214D544: shl byte ptr [esi + 0x57], 1 */
    /* test MEM8(esi + 0x50), 7 */ /* 0x1214D547: test byte ptr [esi + 0x50], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0x50)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D565; /* 0x1214D54B: jne 0x1214d565 */
L_1214D54D:
    ecx = (uint32_t)MEM16(esi + 0x54); /* 0x1214D54D: movzx ecx, word ptr [esi + 0x54] */
    SET_LO8(eax, MEM8(esi + 0x56)); /* 0x1214D551: mov al, byte ptr [esi + 0x56] */
    MEM8(ecx + esi + 0x1F74) = (uint8_t)(LO8(eax)); /* 0x1214D554: mov byte ptr [ecx + esi + 0x1f74], al */
    _flag_a = (uint32_t)(MEM16(esi + 0x54)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x54) = (uint16_t)(MEM16(esi + 0x54) + 1); /* 0x1214D55B: inc word ptr [esi + 0x54] */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(esi + 0x56) = (uint16_t)(0x100u); /* 0x1214D55F: mov word ptr [esi + 0x56], 0x100 */
L_1214D565:
    edi = (uint32_t)MEM16(esi + 0x50); /* 0x1214D565: movzx edi, word ptr [esi + 0x50] */
    /* test edi, 0xFFFu */ /* 0x1214D569: test edi, 0xfff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D5C8; /* 0x1214D56F: jne 0x1214d5c8 */
L_1214D571:
    ebx = (uint32_t)MEM16(esi + 0x44); /* 0x1214D571: movzx ebx, word ptr [esi + 0x44] */
    edx = edi; /* 0x1214D575: mov edx, edi */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x1214D577: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x1214D577: shl edx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(esi + 0x3C); /* 0x1214D57A: sub ebx, dword ptr [esi + 0x3c] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1214D57D: mov dword ptr [ebp - 4], ebx */
    ebx = esi + 0x9AC; /* 0x1214D580: lea ebx, [esi + 0x9ac] */
    esi = 0x12011658u; /* 0x1214D586: mov esi, 0x12011658 */
L_1214D58B:
    ecx = MEM32(esi); /* 0x1214D58B: mov ecx, dword ptr [esi] */
    eax = (uint32_t)MEM16(ebx); /* 0x1214D58D: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 5; /* 0x1214D590: add ecx, 5 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1214D593: imul ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1214D596: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1214D599: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1214D59B: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x120116D0u */ /* 0x1214D59E: cmp esi, 0x120116d0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x120116D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214D58B; /* 0x1214D5A4: jl 0x1214d58b */
L_1214D5A6:
    esi = MEM32(ebp + 0x8); /* 0x1214D5A6: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1214D5A9: mov ebx, dword ptr [ebp - 4] */
    SET_LO16(eax, LO16(edi)); /* 0x1214D5AC: mov ax, di */
    if (1u) _cf = (((LO16(eax)) >> 0) & 1u); /* 0x1214D5AF: shr ax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(eax) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, LO16(eax) >> 1u); /* 0x1214D5AF: shr ax, 1 */
    /* cmp MEM16(esi + 0x52), LO16(eax) */ /* 0x1214D5B2: cmp word ptr [esi + 0x52], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x52)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214D5C8; /* 0x1214D5B6: jae 0x1214d5c8 */
L_1214D5B8:
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x1214D5B8: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x1214D5B8: shr edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFFFFFEu);
    edx = edx & 0x3FFFFFFEu; /* 0x1214D5BB: and edx, 0x3ffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ebx = ebx & 0xFFFFFFFEu; /* 0x1214D5C1: and ebx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ebx */ /* 0x1214D5C4: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214D5DB; /* 0x1214D5C6: jb 0x1214d5db */
L_1214D5C8:
    /* cmp LO16(edi), 0x7FFFu */ /* 0x1214D5C8: cmp di, 0x7fff */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D5DB; /* 0x1214D5CD: je 0x1214d5db */
L_1214D5CF:
    /* cmp MEM16(esi + 0x52), 0x8000u */ /* 0x1214D5CF: cmp word ptr [esi + 0x52], 0x8000 */
    _flag_a = (uint32_t)(MEM16(esi + 0x52)) << 16; _flag_b = (uint32_t)(0x8000u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D5DB; /* 0x1214D5D5: je 0x1214d5db */
L_1214D5D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214D5D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214D5DE; /* 0x1214D5D9: jmp 0x1214d5de */
L_1214D5DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214D5DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214D5DD: inc eax */
    _flag_k = FK_INC;
L_1214D5DE:
    edi = POP32_VAL(esp); /* 0x1214D5DE: pop edi */
    esi = POP32_VAL(esp); /* 0x1214D5DF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214D5E0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214D5E1: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214D5E2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214D5EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D5EAu);

L_1214D5EA:
    edi = edi; /* 0x1214D5EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D5EC: push ebp */
    ebp = esp; /* 0x1214D5ED: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1214D5EF: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214D5F2: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214D5F3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1214D5F5: push esi */
    esi = eax; /* 0x1214D5F6: mov esi, eax */
    ecx = ebx; /* 0x1214D5F8: mov ecx, ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1214D5FA: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1214D5FD: mov dword ptr [ebp - 0x10], ecx */
    SET_LO8(edx, LO8(ebx)); /* 0x1214D600: mov dl, bl */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1214D602: mov byte ptr [ebp - 1], bl */
    /* cmp MEM16(esi + 0x50), LO16(ebx) */ /* 0x1214D605: cmp word ptr [esi + 0x50], bx */
    _flag_a = (uint32_t)(MEM16(esi + 0x50)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D709; /* 0x1214D609: je 0x1214d709 */
L_1214D60F:
    PUSH32(esp, edi); /* 0x1214D60F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1214D610: mov edi, dword ptr [ebp + 8] */
L_1214D613:
    /* test LO8(ebx), 7 */ /* 0x1214D613: test bl, 7 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D629; /* 0x1214D616: jne 0x1214d629 */
L_1214D618:
    eax = (uint32_t)LO16(ecx); /* 0x1214D618: movzx eax, cx */
    SET_LO8(edx, MEM8(eax + esi + 0x1F74)); /* 0x1214D61B: mov dl, byte ptr [eax + esi + 0x1f74] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D622: inc ecx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x1214D623: mov byte ptr [ebp - 1], dl */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1214D626: mov dword ptr [ebp - 0x10], ecx */
L_1214D629:
    eax = MEM32(esi); /* 0x1214D629: mov eax, dword ptr [esi] */
    ecx = (uint32_t)LO16(ebx); /* 0x1214D62B: movzx ecx, bx */
    ecx = (uint32_t)MEM8(ecx + eax); /* 0x1214D62E: movzx ecx, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214D632: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1214D633: mov dword ptr [ebp - 0xc], ecx */
    /* test LO8(edx), 1 */ /* 0x1214D636: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D650; /* 0x1214D639: jne 0x1214d650 */
L_1214D63B:
    eax = (uint32_t)MEM16(edi + ecx * 4 + 0x2); /* 0x1214D63B: movzx eax, word ptr [edi + ecx*4 + 2] */
    PUSH32(esp, eax); /* 0x1214D640: push eax */
    eax = (uint32_t)MEM16(edi + ecx * 4); /* 0x1214D641: movzx eax, word ptr [edi + ecx*4] */
    PUSH32(esp, eax); /* 0x1214D645: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D646: call 0x1214cada */
    RECOMP_FLAGS_IN();
    goto L_1214D6F3; /* 0x1214D64B: jmp 0x1214d6f3 */
L_1214D650:
    edi = (uint32_t)MEM8(ecx + esi + 0x1B85); /* 0x1214D650: movzx edi, byte ptr [ecx + esi + 0x1b85] */
    ecx = MEM32(ebp + 0x8); /* 0x1214D658: mov ecx, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(ecx + edi * 4 + 0x406); /* 0x1214D65B: movzx eax, word ptr [ecx + edi*4 + 0x406] */
    PUSH32(esp, eax); /* 0x1214D663: push eax */
    eax = (uint32_t)MEM16(ecx + edi * 4 + 0x404); /* 0x1214D664: movzx eax, word ptr [ecx + edi*4 + 0x404] */
    PUSH32(esp, eax); /* 0x1214D66C: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D66D: call 0x1214cada */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi * 4 + 0x120115D0); /* 0x1214D672: mov eax, dword ptr [edi*4 + 0x120115d0] */
    /* test eax, eax */ /* 0x1214D679: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214D68E; /* 0x1214D67B: je 0x1214d68e */
L_1214D67D:
    PUSH32(esp, eax); /* 0x1214D67D: push eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1214D67E: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + edi * 4 + 0x1E88));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + edi * 4 + 0x1E88); /* 0x1214D681: sub eax, dword ptr [esi + edi*4 + 0x1e88] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1214D688: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D689: call 0x1214cada */
    RECOMP_FLAGS_IN();
L_1214D68E:
    edx = MEM32(ebp + (-0x8)); /* 0x1214D68E: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(esi + 0x8); /* 0x1214D691: mov eax, dword ptr [esi + 8] */
    ecx = (uint32_t)LO16(edx); /* 0x1214D694: movzx ecx, dx */
    edi = (uint32_t)MEM16(eax + ecx * 2); /* 0x1214D697: movzx edi, word ptr [eax + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214D69B: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1214D69C: mov dword ptr [ebp - 8], edx */
    /* cmp edi, 0x100u */ /* 0x1214D69F: cmp edi, 0x100 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214D6B1; /* 0x1214D6A5: jge 0x1214d6b1 */
L_1214D6A7:
    ecx = (uint32_t)MEM8(edi + esi + 0x1C85); /* 0x1214D6A7: movzx ecx, byte ptr [edi + esi + 0x1c85] */
    goto L_1214D6BE; /* 0x1214D6AF: jmp 0x1214d6be */
L_1214D6B1:
    eax = edi; /* 0x1214D6B1: mov eax, edi */
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x1214D6B3: sar eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 7u);
    ecx = (uint32_t)MEM8(eax + esi + 0x1D85); /* 0x1214D6B6: movzx ecx, byte ptr [eax + esi + 0x1d85] */
L_1214D6BE:
    edx = MEM32(ebp + 0xC); /* 0x1214D6BE: mov edx, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(edx + ecx * 4 + 0x2); /* 0x1214D6C1: movzx eax, word ptr [edx + ecx*4 + 2] */
    PUSH32(esp, eax); /* 0x1214D6C6: push eax */
    eax = (uint32_t)MEM16(edx + ecx * 4); /* 0x1214D6C7: movzx eax, word ptr [edx + ecx*4] */
    PUSH32(esp, eax); /* 0x1214D6CB: push eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1214D6CC: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D6CF: call 0x1214cada */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1214D6D4: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax * 4 + 0x12011658); /* 0x1214D6D7: mov ecx, dword ptr [eax*4 + 0x12011658] */
    /* test ecx, ecx */ /* 0x1214D6DE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214D6F0; /* 0x1214D6E0: je 0x1214d6f0 */
L_1214D6E2:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + eax * 4 + 0x1EFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(esi + eax * 4 + 0x1EFC); /* 0x1214D6E2: sub edi, dword ptr [esi + eax*4 + 0x1efc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1214D6E9: push ecx */
    PUSH32(esp, edi); /* 0x1214D6EA: push edi */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D6EB: call 0x1214cada */
    RECOMP_FLAGS_IN();
L_1214D6F0:
    edi = MEM32(ebp + 0x8); /* 0x1214D6F0: mov edi, dword ptr [ebp + 8] */
L_1214D6F3:
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x1214D6F3: mov dl, byte ptr [ebp - 1] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1214D6F6: mov ecx, dword ptr [ebp - 0x10] */
    if (1u) _cf = (((LO8(edx)) >> 0) & 1u); /* 0x1214D6F9: shr dl, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(edx) >> 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(edx, LO8(edx) >> 1u); /* 0x1214D6F9: shr dl, 1 */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x1214D6FB: mov byte ptr [ebp - 1], dl */
    /* cmp LO16(ebx), MEM16(esi + 0x50) */ /* 0x1214D6FE: cmp bx, word ptr [esi + 0x50] */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x50)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214D613; /* 0x1214D702: jb 0x1214d613 */
L_1214D708:
    edi = POP32_VAL(esp); /* 0x1214D708: pop edi */
L_1214D709:
    ecx = MEM32(ebp + 0x8); /* 0x1214D709: mov ecx, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(ecx + 0x402); /* 0x1214D70C: movzx eax, word ptr [ecx + 0x402] */
    PUSH32(esp, eax); /* 0x1214D713: push eax */
    eax = (uint32_t)MEM16(ecx + 0x400); /* 0x1214D714: movzx eax, word ptr [ecx + 0x400] */
    PUSH32(esp, eax); /* 0x1214D71B: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214D71C: call 0x1214cada */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1214D721: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214D722: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214D723: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214D724: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214D72C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D72Cu);

L_1214D72C:
    edi = edi; /* 0x1214D72C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D72E: push ebp */
    ebp = esp; /* 0x1214D72F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214D731: push ecx */
    PUSH32(esp, ecx); /* 0x1214D732: push ecx */
    PUSH32(esp, ebx); /* 0x1214D733: push ebx */
    PUSH32(esp, esi); /* 0x1214D734: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214D735: mov esi, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(esi + 0x44); /* 0x1214D738: movzx eax, word ptr [esi + 0x44] */
    PUSH32(esp, edi); /* 0x1214D73C: push edi */
    /* cmp LO16(eax), 0x7EFAu */ /* 0x1214D73D: cmp ax, 0x7efa */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x7EFAu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214D74D; /* 0x1214D741: jbe 0x1214d74d */
L_1214D743:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF8106u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFF8106u; /* 0x1214D743: add eax, 0xffff8106 */
    _flag_k = FK_ADD;
    ebx = (uint32_t)LO16(eax); /* 0x1214D748: movzx ebx, ax */
    goto L_1214D74F; /* 0x1214D74B: jmp 0x1214d74f */
L_1214D74D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214D74D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D74F:
    eax = MEM32(esi + 0x1C); /* 0x1214D74F: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1214D752: mov dword ptr [ebp - 4], ebx */
    ebx = (uint32_t)MEM16(ebp + 0xC); /* 0x1214D755: movzx ebx, word ptr [ebp + 0xc] */
    ecx = (uint32_t)MEM8(eax + ebx); /* 0x1214D759: movzx ecx, byte ptr [eax + ebx] */
    eax = MEM32(esi + 0x20); /* 0x1214D75D: mov eax, dword ptr [esi + 0x20] */
    MEM32(esi + 0x28) = ecx; /* 0x1214D760: mov dword ptr [esi + 0x28], ecx */
    edx = (uint32_t)MEM16(eax + ecx * 2); /* 0x1214D763: movzx edx, word ptr [eax + ecx*2] */
    SET_LO16(esi, MEM16(ebp + 0xC)); /* 0x1214D767: mov si, word ptr [ebp + 0xc] */
    MEM16(eax + ecx * 2) = (uint16_t)(LO16(esi)); /* 0x1214D76B: mov word ptr [eax + ecx*2], si */
    esi = MEM32(ebp + 0x8); /* 0x1214D76F: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x14); /* 0x1214D772: mov eax, dword ptr [esi + 0x14] */
    ecx = ebx; /* 0x1214D775: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    ecx = ecx & 0x7FFFu; /* 0x1214D777: and ecx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1214D77D: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM16(ecx + eax) = (uint16_t)(LO16(edx)); /* 0x1214D77F: mov word ptr [ecx + eax], dx */
    eax = MEM32(esi + 0x1C); /* 0x1214D783: mov eax, dword ptr [esi + 0x1c] */
    edi = 0x1000u; /* 0x1214D786: mov edi, 0x1000 */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1214D78B: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + 0xC) = ecx; /* 0x1214D78E: mov dword ptr [ebp + 0xc], ecx */
    /* test LO16(edx), LO16(edx) */ /* 0x1214D791: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214D7D6; /* 0x1214D794: je 0x1214d7d6 */
L_1214D796:
    esi = MEM32(ebp + (-0x8)); /* 0x1214D796: mov esi, dword ptr [ebp - 8] */
    SET_LO8(ebx, MEM8(eax + esi + 0x1)); /* 0x1214D799: mov bl, byte ptr [eax + esi + 1] */
    esi = MEM32(ebp + 0x8); /* 0x1214D79D: mov esi, dword ptr [ebp + 8] */
    ecx = (uint32_t)LO16(edx); /* 0x1214D7A0: movzx ecx, dx */
    /* cmp LO8(ebx), MEM8(ecx + eax + 0x1) */ /* 0x1214D7A3: cmp bl, byte ptr [ecx + eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(ebp + (-0x4)); /* 0x1214D7A7: mov ebx, dword ptr [ebp - 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D7D3; /* 0x1214D7AA: je 0x1214d7d3 */
L_1214D7AC:
    eax = MEM32(esi + 0x14); /* 0x1214D7AC: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    ecx = ecx & 0x7FFFu; /* 0x1214D7AF: and ecx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)MEM16(eax + ecx * 2); /* 0x1214D7B5: movzx edx, word ptr [eax + ecx*2] */
    /* cmp LO16(edx), LO16(ebx) */ /* 0x1214D7B9: cmp dx, bx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214D7C9; /* 0x1214D7BC: jbe 0x1214d7c9 */
L_1214D7BE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFu; /* 0x1214D7BE: add edi, 0xffff */
    _flag_k = FK_ADD;
    /* test LO16(edi), LO16(edi) */ /* 0x1214D7C4: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D7CB; /* 0x1214D7C7: jne 0x1214d7cb */
L_1214D7C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214D7C9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D7CB:
    eax = MEM32(esi + 0x1C); /* 0x1214D7CB: mov eax, dword ptr [esi + 0x1c] */
    /* test LO16(edx), LO16(edx) */ /* 0x1214D7CE: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D796; /* 0x1214D7D1: jne 0x1214d796 */
L_1214D7D3:
    ecx = MEM32(ebp + 0xC); /* 0x1214D7D3: mov ecx, dword ptr [ebp + 0xc] */
L_1214D7D6:
    eax = MEM32(esi + 0x18); /* 0x1214D7D6: mov eax, dword ptr [esi + 0x18] */
    MEM16(ecx + eax) = (uint16_t)(LO16(edx)); /* 0x1214D7D9: mov word ptr [ecx + eax], dx */
    goto L_1214D814; /* 0x1214D7DD: jmp 0x1214d814 */
L_1214D7DF:
    esi = MEM32(ebp + (-0x8)); /* 0x1214D7DF: mov esi, dword ptr [ebp - 8] */
    SET_LO8(ebx, MEM8(eax + esi + 0x2)); /* 0x1214D7E2: mov bl, byte ptr [eax + esi + 2] */
    esi = MEM32(ebp + 0x8); /* 0x1214D7E6: mov esi, dword ptr [ebp + 8] */
    ecx = (uint32_t)LO16(edx); /* 0x1214D7E9: movzx ecx, dx */
    /* cmp LO8(ebx), MEM8(ecx + eax + 0x2) */ /* 0x1214D7EC: cmp bl, byte ptr [ecx + eax + 2] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + eax + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(ebp + (-0x4)); /* 0x1214D7F0: mov ebx, dword ptr [ebp - 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214D81C; /* 0x1214D7F3: je 0x1214d81c */
L_1214D7F5:
    eax = MEM32(esi + 0x18); /* 0x1214D7F5: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    ecx = ecx & 0x7FFFu; /* 0x1214D7F8: and ecx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)MEM16(eax + ecx * 2); /* 0x1214D7FE: movzx edx, word ptr [eax + ecx*2] */
    /* cmp LO16(edx), LO16(ebx) */ /* 0x1214D802: cmp dx, bx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214D812; /* 0x1214D805: jbe 0x1214d812 */
L_1214D807:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFu; /* 0x1214D807: add edi, 0xffff */
    _flag_k = FK_ADD;
    /* test LO16(edi), LO16(edi) */ /* 0x1214D80D: test di, di */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D814; /* 0x1214D810: jne 0x1214d814 */
L_1214D812:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214D812: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D814:
    eax = MEM32(esi + 0x1C); /* 0x1214D814: mov eax, dword ptr [esi + 0x1c] */
    /* test LO16(edx), LO16(edx) */ /* 0x1214D817: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D7DF; /* 0x1214D81A: jne 0x1214d7df */
L_1214D81C:
    eax = MEM32(esi + 0x24); /* 0x1214D81C: mov eax, dword ptr [esi + 0x24] */
    ecx = MEM32(ebp + 0xC); /* 0x1214D81F: mov ecx, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x1214D822: pop edi */
    MEM16(ecx + eax) = (uint16_t)(LO16(edx)); /* 0x1214D823: mov word ptr [ecx + eax], dx */
    eax = MEM32(ebp + 0x10); /* 0x1214D827: mov eax, dword ptr [ebp + 0x10] */
    esi = POP32_VAL(esp); /* 0x1214D82A: pop esi */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x1214D82B: mov word ptr [eax], dx */
    ebx = POP32_VAL(esp); /* 0x1214D82E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214D82F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214D830: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214D838(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D838u);

L_1214D838:
    edi = edi; /* 0x1214D838: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1214D83A: push ebx */
    PUSH32(esp, esi); /* 0x1214D83B: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214D83C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x100u; /* 0x1214D83E: mov edx, 0x100 */
    ebx = 0x8000u; /* 0x1214D843: mov ebx, 0x8000 */
L_1214D848:
    esi = MEM32(edi + 0x20); /* 0x1214D848: mov esi, dword ptr [edi + 0x20] */
    ecx = (uint32_t)MEM16(esi + eax); /* 0x1214D84B: movzx ecx, word ptr [esi + eax] */
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x1214D84F: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1214D858; /* 0x1214D852: jb 0x1214d858 */
L_1214D854:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1214D854: sub ecx, ebx */
    _flag_k = FK_CMP;
    goto L_1214D85A; /* 0x1214D856: jmp 0x1214d85a */
L_1214D858:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214D858: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D85A:
    MEM16(esi + eax) = (uint16_t)(LO16(ecx)); /* 0x1214D85A: mov word ptr [esi + eax], cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1214D85E: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214D861: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214D848; /* 0x1214D862: jne 0x1214d848 */
L_1214D864:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214D864: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x1214D866: mov esi, ebx */
L_1214D868:
    edx = MEM32(edi + 0x24); /* 0x1214D868: mov edx, dword ptr [edi + 0x24] */
    eax = (uint32_t)MEM16(edx + ecx); /* 0x1214D86B: movzx eax, word ptr [edx + ecx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1214D86F: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1214D878; /* 0x1214D872: jb 0x1214d878 */
L_1214D874:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1214D874: sub eax, ebx */
    _flag_k = FK_CMP;
    goto L_1214D87A; /* 0x1214D876: jmp 0x1214d87a */
L_1214D878:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214D878: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D87A:
    MEM16(edx + ecx) = (uint16_t)(LO16(eax)); /* 0x1214D87A: mov word ptr [edx + ecx], ax */
    edx = MEM32(edi + 0x14); /* 0x1214D87E: mov edx, dword ptr [edi + 0x14] */
    eax = (uint32_t)MEM16(ecx + edx); /* 0x1214D881: movzx eax, word ptr [ecx + edx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1214D885: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1214D88E; /* 0x1214D888: jb 0x1214d88e */
L_1214D88A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1214D88A: sub eax, ebx */
    _flag_k = FK_CMP;
    goto L_1214D890; /* 0x1214D88C: jmp 0x1214d890 */
L_1214D88E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214D88E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D890:
    MEM16(ecx + edx) = (uint16_t)(LO16(eax)); /* 0x1214D890: mov word ptr [ecx + edx], ax */
    edx = MEM32(edi + 0x18); /* 0x1214D894: mov edx, dword ptr [edi + 0x18] */
    eax = (uint32_t)MEM16(edx + ecx); /* 0x1214D897: movzx eax, word ptr [edx + ecx] */
    /* cmp LO16(eax), LO16(ebx) */ /* 0x1214D89B: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_1214D8A4; /* 0x1214D89E: jb 0x1214d8a4 */
L_1214D8A0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1214D8A0: sub eax, ebx */
    _flag_k = FK_CMP;
    goto L_1214D8A6; /* 0x1214D8A2: jmp 0x1214d8a6 */
L_1214D8A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214D8A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D8A6:
    MEM16(edx + ecx) = (uint16_t)(LO16(eax)); /* 0x1214D8A6: mov word ptr [edx + ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1214D8AA: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1214D8AD: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214D868; /* 0x1214D8AE: jne 0x1214d868 */
L_1214D8B0:
    esi = POP32_VAL(esp); /* 0x1214D8B0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214D8B1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214D8B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214D8B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214D8B8u);

L_1214D8B8:
    edi = edi; /* 0x1214D8B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214D8BA: push ebp */
    ebp = esp; /* 0x1214D8BB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1214D8BD: sub esp, 0x14 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x1214D8C0: mov edx, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(edx + 0x44); /* 0x1214D8C3: movzx ecx, word ptr [edx + 0x44] */
    PUSH32(esp, ebx); /* 0x1214D8C7: push ebx */
    PUSH32(esp, esi); /* 0x1214D8C8: push esi */
    esi = MEM32(edx + 0x1C); /* 0x1214D8C9: mov esi, dword ptr [edx + 0x1c] */
    MEM32(ebp + (-0x10)) = esi; /* 0x1214D8CC: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1214D8CF: add esi, ecx */
    _flag_k = FK_ADD;
    eax = esi + 0x102; /* 0x1214D8D1: lea eax, [esi + 0x102] */
    PUSH32(esp, edi); /* 0x1214D8D7: push edi */
    edi = MEM32(edx + 0x40); /* 0x1214D8D8: mov edi, dword ptr [edx + 0x40] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1214D8DB: mov dword ptr [ebp - 0x14], eax */
    SET_LO8(eax, MEM8(edi + esi + (-0x1))); /* 0x1214D8DE: mov al, byte ptr [edi + esi - 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1214D8E2: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(edi + esi)); /* 0x1214D8E5: mov al, byte ptr [edi + esi] */
    ebx = 0x1000u; /* 0x1214D8E8: mov ebx, 0x1000 */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1214D8ED: mov byte ptr [ebp - 2], al */
    /* cmp LO16(ecx), 0x7EFAu */ /* 0x1214D8F0: cmp cx, 0x7efa */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x7EFAu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214D905; /* 0x1214D8F5: jbe 0x1214d905 */
L_1214D8F7:
    eax = ecx + (-0x7EFA); /* 0x1214D8F7: lea eax, [ecx - 0x7efa] */
    eax = (uint32_t)LO16(eax); /* 0x1214D8FD: movzx eax, ax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1214D900: mov dword ptr [ebp - 0xc], eax */
    goto L_1214D909; /* 0x1214D903: jmp 0x1214d909 */
L_1214D905:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1214D905: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214D909:
    /* cmp edi, 0x102u */ /* 0x1214D909: cmp edi, 0x102 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1214D916; /* 0x1214D90F: jl 0x1214d916 */
L_1214D911:
    ebx = 0x400u; /* 0x1214D911: mov ebx, 0x400 */
L_1214D916:
    eax = MEM32(ebp + 0xC); /* 0x1214D916: mov eax, dword ptr [ebp + 0xc] */
L_1214D919:
    ecx = (uint32_t)LO16(eax); /* 0x1214D919: movzx ecx, ax */
    eax = MEM32(ebp + (-0x10)); /* 0x1214D91C: mov eax, dword ptr [ebp - 0x10] */
    edx = ecx + eax; /* 0x1214D91F: lea edx, [ecx + eax] */
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x1214D922: mov al, byte ptr [ebp - 2] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214D925: mov dword ptr [ebp - 8], ecx */
    /* cmp MEM8(edx + edi), LO8(eax) */ /* 0x1214D928: cmp byte ptr [edx + edi], al */
    _flag_a = (uint32_t)(MEM8(edx + edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9DF; /* 0x1214D92B: jne 0x1214d9df */
L_1214D931:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x1214D931: mov al, byte ptr [ebp - 1] */
    /* cmp MEM8(edx + edi + (-0x1)), LO8(eax) */ /* 0x1214D934: cmp byte ptr [edx + edi - 1], al */
    _flag_a = (uint32_t)(MEM8(edx + edi + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9DF; /* 0x1214D938: jne 0x1214d9df */
L_1214D93E:
    SET_LO8(eax, MEM8(edx)); /* 0x1214D93E: mov al, byte ptr [edx] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x1214D940: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9DF; /* 0x1214D942: jne 0x1214d9df */
L_1214D948:
    SET_LO8(eax, MEM8(edx + 0x1)); /* 0x1214D948: mov al, byte ptr [edx + 1] */
    /* cmp LO8(eax), MEM8(esi + 0x1) */ /* 0x1214D94B: cmp al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9DF; /* 0x1214D94E: jne 0x1214d9df */
L_1214D954:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1214D954: add edx, 2 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(edx)); /* 0x1214D957: mov al, byte ptr [edx] */
    ecx = esi + 0x2; /* 0x1214D959: lea ecx, [esi + 2] */
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1214D95C: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9DC; /* 0x1214D95E: jne 0x1214d9dc */
L_1214D960:
    esi = MEM32(ebp + (-0x14)); /* 0x1214D960: mov esi, dword ptr [ebp - 0x14] */
L_1214D963:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D963: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x1214D964: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx + 0x1) */ /* 0x1214D966: cmp al, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9A9; /* 0x1214D969: jne 0x1214d9a9 */
L_1214D96B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D96B: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x1214D96C: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx + 0x2) */ /* 0x1214D96E: cmp al, byte ptr [edx + 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9A9; /* 0x1214D971: jne 0x1214d9a9 */
L_1214D973:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D973: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x1214D974: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx + 0x3) */ /* 0x1214D976: cmp al, byte ptr [edx + 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9A9; /* 0x1214D979: jne 0x1214d9a9 */
L_1214D97B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D97B: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x1214D97C: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx + 0x4) */ /* 0x1214D97E: cmp al, byte ptr [edx + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x4)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9A9; /* 0x1214D981: jne 0x1214d9a9 */
L_1214D983:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D983: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x1214D984: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx + 0x5) */ /* 0x1214D986: cmp al, byte ptr [edx + 5] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x5)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9A9; /* 0x1214D989: jne 0x1214d9a9 */
L_1214D98B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D98B: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x1214D98C: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx + 0x6) */ /* 0x1214D98E: cmp al, byte ptr [edx + 6] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x6)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9A9; /* 0x1214D991: jne 0x1214d9a9 */
L_1214D993:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D993: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x1214D994: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx + 0x7) */ /* 0x1214D996: cmp al, byte ptr [edx + 7] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x7)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9A9; /* 0x1214D999: jne 0x1214d9a9 */
L_1214D99B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214D99B: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x1214D99C: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1214D99E: add edx, 8 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x1214D9A1: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214D9A9; /* 0x1214D9A3: jne 0x1214d9a9 */
L_1214D9A5:
    /* cmp ecx, esi */ /* 0x1214D9A5: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214D963; /* 0x1214D9A7: jb 0x1214d963 */
L_1214D9A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1214D9A9: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x102u; /* 0x1214D9AB: add ecx, 0x102 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFEFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFEFEu; /* 0x1214D9B1: add esi, 0xfffffefe */
    _flag_k = FK_ADD;
    /* cmp ecx, edi */ /* 0x1214D9B7: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214D9DC; /* 0x1214D9B9: jle 0x1214d9dc */
L_1214D9BB:
    eax = MEM32(ebp + 0xC); /* 0x1214D9BB: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1214D9BE: mov edx, dword ptr [ebp + 8] */
    MEM16(edx + 0x46) = (uint16_t)(LO16(eax)); /* 0x1214D9C1: mov word ptr [edx + 0x46], ax */
    edi = ecx; /* 0x1214D9C5: mov edi, ecx */
    /* cmp ecx, 0x102u */ /* 0x1214D9C7: cmp ecx, 0x102 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214DA07; /* 0x1214D9CD: jge 0x1214da07 */
L_1214D9CF:
    SET_LO8(eax, MEM8(ecx + esi + (-0x1))); /* 0x1214D9CF: mov al, byte ptr [ecx + esi - 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1214D9D3: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(ecx + esi)); /* 0x1214D9D6: mov al, byte ptr [ecx + esi] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x1214D9D9: mov byte ptr [ebp - 2], al */
L_1214D9DC:
    ecx = MEM32(ebp + (-0x8)); /* 0x1214D9DC: mov ecx, dword ptr [ebp - 8] */
L_1214D9DF:
    eax = MEM32(ebp + 0x8); /* 0x1214D9DF: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x24); /* 0x1214D9E2: mov eax, dword ptr [eax + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    ecx = ecx & 0x7FFFu; /* 0x1214D9E5: and ecx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM16(eax + ecx * 2); /* 0x1214D9EB: movzx eax, word ptr [eax + ecx*2] */
    MEM32(ebp + 0xC) = eax; /* 0x1214D9EF: mov dword ptr [ebp + 0xc], eax */
    /* cmp LO16(eax), MEM16(ebp + (-0xC)) */ /* 0x1214D9F2: cmp ax, word ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0xC))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214DA07; /* 0x1214D9F6: jbe 0x1214da07 */
L_1214D9F8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFu; /* 0x1214D9F8: add ebx, 0xffff */
    _flag_k = FK_ADD;
    /* test LO16(ebx), LO16(ebx) */ /* 0x1214D9FE: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214D919; /* 0x1214DA01: jne 0x1214d919 */
L_1214DA07:
    eax = edi; /* 0x1214DA07: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1214DA09: pop edi */
    esi = POP32_VAL(esp); /* 0x1214DA0A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214DA0B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214DA0C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214DA0D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214DA15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214DA15u);

L_1214DA15:
    edi = edi; /* 0x1214DA15: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214DA17: push ebp */
    ebp = esp; /* 0x1214DA18: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214DA1A: push ecx */
    PUSH32(esp, ecx); /* 0x1214DA1B: push ecx */
    PUSH32(esp, esi); /* 0x1214DA1C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214DA1D: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x60)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x60) = MEM32(esi + 0x60) & 0; /* 0x1214DA20: and dword ptr [esi + 0x60], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(esi + 0xF22), 0 */ /* 0x1214DA24: cmp word ptr [esi + 0xf22], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0xF22)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214DC10; /* 0x1214DA2C: jne 0x1214dc10 */
L_1214DA32:
    PUSH32(esp, ebx); /* 0x1214DA32: push ebx */
    PUSH32(esp, edi); /* 0x1214DA33: push edi */
    eax = esi + 0x1E88; /* 0x1214DA34: lea eax, [esi + 0x1e88] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214DA3A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214DA3C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x120115D0u; /* 0x1214DA3E: mov edx, 0x120115d0 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214DA43: mov dword ptr [ebp - 8], eax */
L_1214DA46:
    MEM32(eax) = edi; /* 0x1214DA46: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214DA48: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DA4A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214DA4C: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(edx); /* 0x1214DA4F: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DA51: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214DA52: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214DA52: shl eax, cl */
    /* test eax, eax */ /* 0x1214DA54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214DA6F; /* 0x1214DA56: jle 0x1214da6f */
L_1214DA58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DA58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + edi + 0x1B85) = (uint8_t)(LO8(ebx)); /* 0x1214DA5A: mov byte ptr [esi + edi + 0x1b85], bl */
    ecx = MEM32(edx); /* 0x1214DA61: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DA63: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214DA64: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214DA64: shl eax, cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214DA66: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1214DA67: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1214DA6A: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214DA58; /* 0x1214DA6D: jl 0x1214da58 */
L_1214DA6F:
    eax = MEM32(ebp + (-0x8)); /* 0x1214DA6F: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214DA72: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1214DA75: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214DA78: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1214DA79: mov dword ptr [ebp - 8], eax */
    /* cmp edx, 0x12011640u */ /* 0x1214DA7C: cmp edx, 0x12011640 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x12011640u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214DA46; /* 0x1214DA82: jl 0x1214da46 */
L_1214DA84:
    MEM8(edi + esi + 0x1B84) = (uint8_t)(LO8(ebx)); /* 0x1214DA84: mov byte ptr [edi + esi + 0x1b84], bl */
    eax = esi + 0x1EFC; /* 0x1214DA8B: lea eax, [esi + 0x1efc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214DA91: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214DA93: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x12011658u; /* 0x1214DA95: mov ebx, 0x12011658 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214DA9A: mov dword ptr [ebp - 8], eax */
L_1214DA9D:
    MEM32(eax) = edi; /* 0x1214DA9D: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214DA9F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DAA1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214DAA3: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebx); /* 0x1214DAA6: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DAA8: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214DAA9: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214DAA9: shl eax, cl */
    /* test eax, eax */ /* 0x1214DAAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214DAC6; /* 0x1214DAAD: jle 0x1214dac6 */
L_1214DAAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DAAF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + edi + 0x1C85) = (uint8_t)(LO8(edx)); /* 0x1214DAB1: mov byte ptr [esi + edi + 0x1c85], dl */
    ecx = MEM32(ebx); /* 0x1214DAB8: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DABA: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214DABB: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214DABB: shl eax, cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214DABD: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1214DABE: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1214DAC1: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214DAAF; /* 0x1214DAC4: jl 0x1214daaf */
L_1214DAC6:
    eax = MEM32(ebp + (-0x8)); /* 0x1214DAC6: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214DAC9: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1214DACC: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214DACF: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1214DAD0: mov dword ptr [ebp - 8], eax */
    /* cmp ebx, 0x12011698u */ /* 0x1214DAD3: cmp ebx, 0x12011698 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x12011698u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214DA9D; /* 0x1214DAD9: jl 0x1214da9d */
L_1214DADB:
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x1214DADB: sar edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 7u);
    /* cmp edx, 0x1Eu */ /* 0x1214DADE: cmp edx, 0x1e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214DB3D; /* 0x1214DAE1: jge 0x1214db3d */
L_1214DAE3:
    ecx = esi + edx * 4 + 0x1EFC; /* 0x1214DAE3: lea ecx, [esi + edx*4 + 0x1efc] */
    ebx = edx * 4 + 0x12011658; /* 0x1214DAEA: lea ebx, [edx*4 + 0x12011658] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214DAF1: mov dword ptr [ebp - 8], ecx */
L_1214DAF4:
    eax = edi; /* 0x1214DAF4: mov eax, edi */
    if (7u) _cf = (((eax) >> 25) & 1u); /* 0x1214DAF6: shl eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack((eax << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 7u; /* 0x1214DAF6: shl eax, 7 */
    MEM32(ecx) = eax; /* 0x1214DAF9: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214DAFB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214DAFD: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebx); /* 0x1214DB00: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DB02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 7; /* 0x1214DB04: sub ecx, 7 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DB07: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214DB08: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214DB08: shl eax, cl */
    /* test eax, eax */ /* 0x1214DB0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214DB28; /* 0x1214DB0C: jle 0x1214db28 */
L_1214DB0E:
    MEM8(esi + edi + 0x1D85) = (uint8_t)(LO8(edx)); /* 0x1214DB0E: mov byte ptr [esi + edi + 0x1d85], dl */
    ecx = MEM32(ebx); /* 0x1214DB15: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DB17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 7; /* 0x1214DB19: sub ecx, 7 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DB1C: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214DB1D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214DB1D: shl eax, cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214DB1F: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1214DB20: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1214DB23: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214DB0E; /* 0x1214DB26: jl 0x1214db0e */
L_1214DB28:
    ecx = MEM32(ebp + (-0x8)); /* 0x1214DB28: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214DB2B: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1214DB2E: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214DB31: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214DB32: mov dword ptr [ebp - 8], ecx */
    /* cmp ebx, 0x120116D0u */ /* 0x1214DB35: cmp ebx, 0x120116d0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x120116D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214DAF4; /* 0x1214DB3B: jl 0x1214daf4 */
L_1214DB3D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DB3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)LO16(eax); /* 0x1214DB3F: movzx edx, ax */
    PUSH32(esp, 8); /* 0x1214DB42: push 8 */
    eax = edx; /* 0x1214DB44: mov eax, edx */
    ecx = POP32_VAL(esp); /* 0x1214DB46: pop ecx */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x1214DB47: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x1214DB47: shl edx, 0x10 */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x1214DB4A: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x1034; /* 0x1214DB4C: lea edi, [esi + 0x1034] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214DB52: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, 4); /* 0x1214DB54: push 4 */
    eax = esi + 0xAA2; /* 0x1214DB56: lea eax, [esi + 0xaa2] */
    ecx = 0x90u; /* 0x1214DB5C: mov ecx, 0x90 */
    ebx = POP32_VAL(esp); /* 0x1214DB61: pop ebx */
L_1214DB62:
    MEM16(eax) = (uint16_t)(8); /* 0x1214DB62: mov word ptr [eax], 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1214DB67: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM16(esi + 0x1044)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x1044) = (uint16_t)(MEM16(esi + 0x1044) + 1); /* 0x1214DB69: inc word ptr [esi + 0x1044] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214DB70: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214DB62; /* 0x1214DB71: jne 0x1214db62 */
L_1214DB73:
    PUSH32(esp, 0x70u); /* 0x1214DB73: push 0x70 */
    eax = esi + 0xCE2; /* 0x1214DB75: lea eax, [esi + 0xce2] */
    edi = POP32_VAL(esp); /* 0x1214DB7B: pop edi */
L_1214DB7C:
    MEM16(eax) = (uint16_t)(9); /* 0x1214DB7C: mov word ptr [eax], 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1214DB81: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM16(esi + 0x1046)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x1046) = (uint16_t)(MEM16(esi + 0x1046) + 1); /* 0x1214DB83: inc word ptr [esi + 0x1046] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214DB8A: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214DB7C; /* 0x1214DB8B: jne 0x1214db7c */
L_1214DB8D:
    PUSH32(esp, 0x18u); /* 0x1214DB8D: push 0x18 */
    eax = esi + 0xEA2; /* 0x1214DB8F: lea eax, [esi + 0xea2] */
    edi = POP32_VAL(esp); /* 0x1214DB95: pop edi */
L_1214DB96:
    MEM16(eax) = (uint16_t)(7); /* 0x1214DB96: mov word ptr [eax], 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1214DB9B: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM16(esi + 0x1042)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x1042) = (uint16_t)(MEM16(esi + 0x1042) + 1); /* 0x1214DB9D: inc word ptr [esi + 0x1042] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1214DBA4: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214DB96; /* 0x1214DBA5: jne 0x1214db96 */
L_1214DBA7:
    PUSH32(esp, 8); /* 0x1214DBA7: push 8 */
    eax = esi + 0xF02; /* 0x1214DBA9: lea eax, [esi + 0xf02] */
    ecx = POP32_VAL(esp); /* 0x1214DBAF: pop ecx */
L_1214DBB0:
    MEM16(eax) = (uint16_t)(8); /* 0x1214DBB0: mov word ptr [eax], 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1214DBB5: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM16(esi + 0x1044)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x1044) = (uint16_t)(MEM16(esi + 0x1044) + 1); /* 0x1214DBB7: inc word ptr [esi + 0x1044] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214DBBE: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214DBB0; /* 0x1214DBBF: jne 0x1214dbb0 */
L_1214DBC1:
    PUSH32(esp, 0x11Fu); /* 0x1214DBC1: push 0x11f */
    ebx = esi + 0xAA0; /* 0x1214DBC6: lea ebx, [esi + 0xaa0] */
    PUSH32(esp, esi); /* 0x1214DBCC: push esi */
    RECOMP_CALL(sub_1214D007); /* 0x1214DBCD: call 0x1214d007 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214DBD2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0xF20; /* 0x1214DBD4: lea edi, [esi + 0xf20] */
L_1214DBDA:
    PUSH32(esp, 5); /* 0x1214DBDA: push 5 */
    MEM16(edi + 0x2) = (uint16_t)(5); /* 0x1214DBDC: mov word ptr [edi + 2], 5 */
    ebx = POP32_VAL(esp); /* 0x1214DBE2: pop ebx */
    esi = edx; /* 0x1214DBE3: mov esi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214DBE5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214DBE7:
    eax = esi; /* 0x1214DBE7: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1214DBE9: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1214DBEC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1214DBEE: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1214DBF0: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1214DBF2: dec ebx */
    _flag_k = FK_DEC;
    /* test ebx, ebx */ /* 0x1214DBF3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214DBE7; /* 0x1214DBF5: jg 0x1214dbe7 */
L_1214DBF7:
    if (1u) _cf = (((LO16(ecx)) >> 0) & 1u); /* 0x1214DBF7: shr cx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(ecx) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(ecx, LO16(ecx) >> 1u); /* 0x1214DBF7: shr cx, 1 */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1214DBFA: mov word ptr [edi], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214DBFD: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1214DBFE: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x1Eu */ /* 0x1214DC01: cmp edx, 0x1e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1214DBDA; /* 0x1214DC04: jl 0x1214dbda */
L_1214DC06:
    eax = MEM32(ebp + 0x8); /* 0x1214DC06: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214CCE3); /* 0x1214DC09: call 0x1214cce3 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1214DC0E: pop edi */
    ebx = POP32_VAL(esp); /* 0x1214DC0F: pop ebx */
L_1214DC10:
    esi = POP32_VAL(esp); /* 0x1214DC10: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214DC11: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214DC12: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214DC1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214DC1Au);

L_1214DC1A:
    edi = edi; /* 0x1214DC1A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214DC1C: push ebp */
    ebp = esp; /* 0x1214DC1D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1214DC1F: push ebx */
    PUSH32(esp, esi); /* 0x1214DC20: push esi */
    PUSH32(esp, edi); /* 0x1214DC21: push edi */
    edi = eax; /* 0x1214DC22: mov edi, eax */
    ecx = (uint32_t)MEM16(edi + 0x54); /* 0x1214DC24: movzx ecx, word ptr [edi + 0x54] */
    SET_LO8(eax, MEM8(edi + 0x56)); /* 0x1214DC28: mov al, byte ptr [edi + 0x56] */
    MEM8(ecx + edi + 0x1F74) = (uint8_t)(LO8(eax)); /* 0x1214DC2B: mov byte ptr [ecx + edi + 0x1f74], al */
    eax = edi + 0x64; /* 0x1214DC32: lea eax, [edi + 0x64] */
    PUSH32(esp, eax); /* 0x1214DC35: push eax */
    RECOMP_CALL(sub_1214D080); /* 0x1214DC36: call 0x1214d080 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x80; /* 0x1214DC3B: lea eax, [edi + 0x80] */
    PUSH32(esp, eax); /* 0x1214DC41: push eax */
    RECOMP_CALL(sub_1214D080); /* 0x1214DC42: call 0x1214d080 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x7C); /* 0x1214DC47: mov ecx, dword ptr [edi + 0x7c] */
    eax = edi + 0xB8; /* 0x1214DC4A: lea eax, [edi + 0xb8] */
    RECOMP_CALL(sub_1214D246); /* 0x1214DC50: call 0x1214d246 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x98); /* 0x1214DC55: mov ecx, dword ptr [edi + 0x98] */
    eax = edi + 0x9AC; /* 0x1214DC5B: lea eax, [edi + 0x9ac] */
    RECOMP_CALL(sub_1214D246); /* 0x1214DC61: call 0x1214d246 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x9C; /* 0x1214DC66: lea eax, [edi + 0x9c] */
    PUSH32(esp, eax); /* 0x1214DC6C: push eax */
    RECOMP_CALL(sub_1214D080); /* 0x1214DC6D: call 0x1214d080 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12u); /* 0x1214DC72: push 0x12 */
    ebx = POP32_VAL(esp); /* 0x1214DC74: pop ebx */
    PUSH32(esp, 3); /* 0x1214DC75: push 3 */
    esi = POP32_VAL(esp); /* 0x1214DC77: pop esi */
L_1214DC78:
    eax = (uint32_t)MEM8(ebx + 0x12011644); /* 0x1214DC78: movzx eax, byte ptr [ebx + 0x12011644] */
    /* cmp MEM16(edi + eax * 4 + 0xF9A), 0 */ /* 0x1214DC7F: cmp word ptr [edi + eax*4 + 0xf9a], 0 */
    _flag_a = (uint32_t)(MEM16(edi + eax * 4 + 0xF9A)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214DC8F; /* 0x1214DC88: jne 0x1214dc8f */
L_1214DC8A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1214DC8A: dec ebx */
    _flag_k = FK_DEC;
    /* cmp ebx, esi */ /* 0x1214DC8B: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214DC78; /* 0x1214DC8D: jge 0x1214dc78 */
L_1214DC8F:
    eax = ebx; /* 0x1214DC8F: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x1214DC91: imul eax, eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x11u; /* 0x1214DC94: add eax, 0x11 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0x58)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x58) = MEM32(edi + 0x58) + eax; /* 0x1214DC97: add dword ptr [edi + 0x58], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x58); /* 0x1214DC9A: mov ecx, dword ptr [edi + 0x58] */
    eax = MEM32(edi + 0x5C); /* 0x1214DC9D: mov eax, dword ptr [edi + 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xAu; /* 0x1214DCA0: add eax, 0xa */
    _flag_k = FK_ADD;
    ecx = ecx + 0xA; /* 0x1214DCA3: lea ecx, [ecx + 0xa] */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x1214DCA6: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x1214DCA6: shr ecx, 3 */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1214DCA9: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1214DCA9: shr eax, 3 */
    /* cmp eax, ecx */ /* 0x1214DCAC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214DCB2; /* 0x1214DCAE: ja 0x1214dcb2 */
L_1214DCB0:
    ecx = eax; /* 0x1214DCB0: mov ecx, eax */
L_1214DCB2:
    edx = MEM32(ebp + 0xC); /* 0x1214DCB2: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1214DCB5: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, ecx */ /* 0x1214DCB8: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214DCF0; /* 0x1214DCBA: ja 0x1214dcf0 */
L_1214DCBC:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1214DCBC: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214DCF0; /* 0x1214DCC0: je 0x1214dcf0 */
L_1214DCC2:
    eax = MEM32(ebp + 0x10); /* 0x1214DCC2: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1214DCC5: push esi */
    PUSH32(esp, eax); /* 0x1214DCC6: push eax */
    esi = edi; /* 0x1214DCC7: mov esi, edi */
    RECOMP_CALL(sub_1214CADA); /* 0x1214DCC9: call 0x1214cada */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1214DCCE: mov eax, dword ptr [ebp + 0xc] */
    ebx = edi + 0x60; /* 0x1214DCD1: lea ebx, [edi + 0x60] */
    ecx = MEM32(ebx); /* 0x1214DCD4: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xAu; /* 0x1214DCD6: add ecx, 0xa */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x1214DCD9: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx + eax * 8 + 0x10; /* 0x1214DCDC: lea ecx, [ecx + eax*8 + 0x10] */
    PUSH32(esp, 1); /* 0x1214DCE0: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214DCE2: push dword ptr [ebp + 8] */
    MEM32(ebx) = ecx; /* 0x1214DCE5: mov dword ptr [ebx], ecx */
    ecx = edi; /* 0x1214DCE7: mov ecx, edi */
    RECOMP_CALL(sub_1214CC33); /* 0x1214DCE9: call 0x1214cc33 */
    RECOMP_FLAGS_IN();
    goto L_1214DD5B; /* 0x1214DCEE: jmp 0x1214dd5b */
L_1214DCF0:
    PUSH32(esp, esi); /* 0x1214DCF0: push esi */
    /* cmp eax, ecx */ /* 0x1214DCF1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1214DCF3: mov eax, dword ptr [ebp + 0x10] */
    esi = edi; /* 0x1214DCF6: mov esi, edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214DD1D; /* 0x1214DCF8: jne 0x1214dd1d */
L_1214DCFA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1214DCFA: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1214DCFD: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214DCFE: call 0x1214cada */
    RECOMP_FLAGS_IN();
    eax = edi + 0xF20; /* 0x1214DD03: lea eax, [edi + 0xf20] */
    PUSH32(esp, eax); /* 0x1214DD09: push eax */
    eax = edi + 0xAA0; /* 0x1214DD0A: lea eax, [edi + 0xaa0] */
    PUSH32(esp, eax); /* 0x1214DD10: push eax */
    eax = edi; /* 0x1214DD11: mov eax, edi */
    RECOMP_CALL(sub_1214D5EA); /* 0x1214DD13: call 0x1214d5ea */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x5C); /* 0x1214DD18: mov eax, dword ptr [edi + 0x5c] */
    goto L_1214DD53; /* 0x1214DD1B: jmp 0x1214dd53 */
L_1214DD1D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214DD1D: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1214DD20: push eax */
    RECOMP_CALL(sub_1214CADA); /* 0x1214DD21: call 0x1214cada */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x98); /* 0x1214DD26: mov eax, dword ptr [edi + 0x98] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1214DD2C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DD2D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1214DD2E: push eax */
    eax = MEM32(edi + 0x7C); /* 0x1214DD2F: mov eax, dword ptr [edi + 0x7c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DD32: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1214DD33: push eax */
    eax = edi; /* 0x1214DD34: mov eax, edi */
    RECOMP_CALL(sub_1214D445); /* 0x1214DD36: call 0x1214d445 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x9AC; /* 0x1214DD3B: lea eax, [edi + 0x9ac] */
    PUSH32(esp, eax); /* 0x1214DD41: push eax */
    eax = edi + 0xB8; /* 0x1214DD42: lea eax, [edi + 0xb8] */
    PUSH32(esp, eax); /* 0x1214DD48: push eax */
    eax = edi; /* 0x1214DD49: mov eax, edi */
    RECOMP_CALL(sub_1214D5EA); /* 0x1214DD4B: call 0x1214d5ea */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x58); /* 0x1214DD50: mov eax, dword ptr [edi + 0x58] */
L_1214DD53:
    ebx = edi + 0x60; /* 0x1214DD53: lea ebx, [edi + 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x1214DD56: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x1214DD59: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
L_1214DD5B:
    eax = edi; /* 0x1214DD5B: mov eax, edi */
    RECOMP_CALL(sub_1214CCE3); /* 0x1214DD5D: call 0x1214cce3 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1214DD62: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214DD72; /* 0x1214DD66: je 0x1214dd72 */
L_1214DD68:
    esi = edi; /* 0x1214DD68: mov esi, edi */
    RECOMP_CALL(sub_1214CBA4); /* 0x1214DD6A: call 0x1214cba4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 7; /* 0x1214DD6F: add dword ptr [ebx], 7 */
    _flag_k = FK_ADD;
L_1214DD72:
    eax = MEM32(ebx); /* 0x1214DD72: mov eax, dword ptr [ebx] */
    edi = POP32_VAL(esp); /* 0x1214DD74: pop edi */
    esi = POP32_VAL(esp); /* 0x1214DD75: pop esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1214DD76: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1214DD76: shr eax, 3 */
    ebx = POP32_VAL(esp); /* 0x1214DD79: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214DD7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214DD7B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214DD83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214DD83u);

L_1214DD83:
    edi = edi; /* 0x1214DD83: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214DD85: push ebp */
    ebp = esp; /* 0x1214DD86: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1214DD88: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1214DD8B: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214DD8C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + 0x2C; /* 0x1214DD8E: lea edx, [esi + 0x2c] */
    PUSH32(esp, edi); /* 0x1214DD91: push edi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1214DD92: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = 2; /* 0x1214DD95: mov dword ptr [ebp - 4], 2 */
    edi = 0x00010000u; /* 0x1214DD9C: mov edi, 0x10000 */
    /* cmp MEM32(edx), ebx */ /* 0x1214DDA1: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214DF20; /* 0x1214DDA3: je 0x1214df20 */
L_1214DDA9:
    ecx = esi + 0x40; /* 0x1214DDA9: lea ecx, [esi + 0x40] */
L_1214DDAC:
    /* cmp MEM32(edx), 1 */ /* 0x1214DDAC: cmp dword ptr [edx], 1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214DDC8; /* 0x1214DDAF: jle 0x1214ddc8 */
L_1214DDB1:
    eax = ebp + (-0xC); /* 0x1214DDB1: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1214DDB4: push eax */
    eax = (uint32_t)MEM16(esi + 0x44); /* 0x1214DDB5: movzx eax, word ptr [esi + 0x44] */
    PUSH32(esp, eax); /* 0x1214DDB9: push eax */
    PUSH32(esp, esi); /* 0x1214DDBA: push esi */
    RECOMP_CALL(sub_1214D72C); /* 0x1214DDBB: call 0x1214d72c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1214DDC0: mov eax, dword ptr [ebp - 0xc] */
    edx = esi + 0x2C; /* 0x1214DDC3: lea edx, [esi + 0x2c] */
    goto L_1214DDCF; /* 0x1214DDC6: jmp 0x1214ddcf */
L_1214DDC8:
    eax = ebx; /* 0x1214DDC8: mov eax, ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1214DDCA: mov dword ptr [ebp - 0xc], eax */
    MEM32(ecx) = ebx; /* 0x1214DDCD: mov dword ptr [ecx], ebx */
L_1214DDCF:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214DDCF: mov ecx, dword ptr [ebp - 4] */
    MEM32(esi + 0x40) = ecx; /* 0x1214DDD2: mov dword ptr [esi + 0x40], ecx */
    ecx = (uint32_t)MEM16(esi + 0x46); /* 0x1214DDD5: movzx ecx, word ptr [esi + 0x46] */
    PUSH32(esp, 2); /* 0x1214DDD9: push 2 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1214DDDB: mov dword ptr [ebp - 0x10], ecx */
    ecx = POP32_VAL(esp); /* 0x1214DDDE: pop ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214DDDF: mov dword ptr [ebp - 4], ecx */
    /* test LO16(eax), LO16(eax) */ /* 0x1214DDE2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214DE44; /* 0x1214DDE5: je 0x1214de44 */
L_1214DDE7:
    /* cmp MEM32(esi + 0x40), 0x20u */ /* 0x1214DDE7: cmp dword ptr [esi + 0x40], 0x20 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1214DE44; /* 0x1214DDEB: jge 0x1214de44 */
L_1214DDED:
    ecx = (uint32_t)MEM16(esi + 0x44); /* 0x1214DDED: movzx ecx, word ptr [esi + 0x44] */
    eax = (uint32_t)LO16(eax); /* 0x1214DDF1: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1214DDF4: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x7EFAu */ /* 0x1214DDF6: cmp ecx, 0x7efa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7EFAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214DE41; /* 0x1214DDFC: jg 0x1214de41 */
L_1214DDFE:
    /* cmp MEM16(esi + 0x44), 0xFFFDu */ /* 0x1214DDFE: cmp word ptr [esi + 0x44], 0xfffd */
    _flag_a = (uint32_t)(MEM16(esi + 0x44)) << 16; _flag_b = (uint32_t)(0xFFFDu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214DE41; /* 0x1214DE04: jae 0x1214de41 */
L_1214DE06:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1214DE06: push dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x1214DE09: push esi */
    RECOMP_CALL(sub_1214D8B8); /* 0x1214DE0A: call 0x1214d8b8 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1214DE0F: mov ecx, eax */
    edx = esi + 0x2C; /* 0x1214DE11: lea edx, [esi + 0x2c] */
    eax = MEM32(edx); /* 0x1214DE14: mov eax, dword ptr [edx] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214DE16: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, eax */ /* 0x1214DE19: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214DE22; /* 0x1214DE1B: jle 0x1214de22 */
L_1214DE1D:
    ecx = eax; /* 0x1214DE1D: mov ecx, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1214DE1F: mov dword ptr [ebp - 4], eax */
L_1214DE22:
    /* cmp ecx, 3 */ /* 0x1214DE22: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214DE44; /* 0x1214DE25: jne 0x1214de44 */
L_1214DE27:
    eax = (uint32_t)MEM16(esi + 0x46); /* 0x1214DE27: movzx eax, word ptr [esi + 0x46] */
    ecx = (uint32_t)MEM16(esi + 0x44); /* 0x1214DE2B: movzx ecx, word ptr [esi + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1214DE2F: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x1000u */ /* 0x1214DE31: cmp ecx, 0x1000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214DE41; /* 0x1214DE37: jle 0x1214de41 */
L_1214DE39:
    PUSH32(esp, 2); /* 0x1214DE39: push 2 */
    ecx = POP32_VAL(esp); /* 0x1214DE3B: pop ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214DE3C: mov dword ptr [ebp - 4], ecx */
    goto L_1214DE44; /* 0x1214DE3F: jmp 0x1214de44 */
L_1214DE41:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214DE41: mov ecx, dword ptr [ebp - 4] */
L_1214DE44:
    eax = MEM32(esi + 0x40); /* 0x1214DE44: mov eax, dword ptr [esi + 0x40] */
    /* cmp eax, 3 */ /* 0x1214DE47: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1214DF4A; /* 0x1214DE4A: jl 0x1214df4a */
L_1214DE50:
    /* cmp ecx, eax */ /* 0x1214DE50: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214DF4A; /* 0x1214DE52: jg 0x1214df4a */
L_1214DE58:
    ecx = (uint32_t)MEM16(esi + 0x44); /* 0x1214DE58: movzx ecx, word ptr [esi + 0x44] */
    edx = eax + (-0x3); /* 0x1214DE5C: lea edx, [eax - 3] */
    eax = MEM32(ebp + (-0x10)); /* 0x1214DE5F: mov eax, dword ptr [ebp - 0x10] */
    eax = (uint32_t)LO16(eax); /* 0x1214DE62: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1214DE65: sub ecx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1214DE67: push esi */
    eax = ecx + (-0x1); /* 0x1214DE68: lea eax, [ecx - 1] */
    RECOMP_CALL(sub_1214D4C8); /* 0x1214DE6B: call 0x1214d4c8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x40); /* 0x1214DE70: mov ecx, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1214DE73: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DE76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DE78: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1214DE79: sub eax, ecx */
    _flag_k = FK_CMP;
    edx = esi + 0x2C; /* 0x1214DE7B: lea edx, [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x1214DE7E: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    eax = ecx + (-0x2); /* 0x1214DE80: lea eax, [ecx - 2] */
    ecx = esi + 0x40; /* 0x1214DE83: lea ecx, [esi + 0x40] */
    MEM32(ecx) = eax; /* 0x1214DE86: mov dword ptr [ecx], eax */
L_1214DE88:
    _flag_a = (uint32_t)(MEM16(esi + 0x44)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x44) = (uint16_t)(MEM16(esi + 0x44) + 1); /* 0x1214DE88: inc word ptr [esi + 0x44] */
    _flag_k = FK_NARROW(FK_INC, 16);
    /* cmp MEM32(edx), 1 */ /* 0x1214DE8C: cmp dword ptr [edx], 1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM16(esi + 0x44); /* 0x1214DE8F: movzx eax, word ptr [esi + 0x44] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214DEA6; /* 0x1214DE93: jle 0x1214dea6 */
L_1214DE95:
    ecx = ebp + (-0xC); /* 0x1214DE95: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x1214DE98: push ecx */
    PUSH32(esp, eax); /* 0x1214DE99: push eax */
    PUSH32(esp, esi); /* 0x1214DE9A: push esi */
    RECOMP_CALL(sub_1214D72C); /* 0x1214DE9B: call 0x1214d72c */
    RECOMP_FLAGS_IN();
    edx = esi + 0x2C; /* 0x1214DEA0: lea edx, [esi + 0x2c] */
    ecx = esi + 0x40; /* 0x1214DEA3: lea ecx, [esi + 0x40] */
L_1214DEA6:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x1214DEA6: dec dword ptr [ecx] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214DE88; /* 0x1214DEA8: jne 0x1214de88 */
L_1214DEAA:
    _flag_a = (uint32_t)(MEM16(esi + 0x44)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x44) = (uint16_t)(MEM16(esi + 0x44) + 1); /* 0x1214DEAA: inc word ptr [esi + 0x44] */
    _flag_k = FK_NARROW(FK_INC, 16);
    eax = ebx; /* 0x1214DEAE: mov eax, ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1214DEB0: mov dword ptr [ebp - 8], eax */
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x1214DEB3: mov ax, word ptr [esi + 0x44] */
    MEM32(ebp + (-0x4)) = 2; /* 0x1214DEB7: mov dword ptr [ebp - 4], 2 */
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x1214DEBE: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214DEFA; /* 0x1214DEC1: je 0x1214defa */
L_1214DEC3:
    ecx = MEM32(esi + 0x3C); /* 0x1214DEC3: mov ecx, dword ptr [esi + 0x3c] */
    /* test LO16(eax), LO16(eax) */ /* 0x1214DEC6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214DECF; /* 0x1214DEC9: jne 0x1214decf */
L_1214DECB:
    eax = edi; /* 0x1214DECB: mov eax, edi */
    goto L_1214DED2; /* 0x1214DECD: jmp 0x1214ded2 */
L_1214DECF:
    eax = (uint32_t)LO16(eax); /* 0x1214DECF: movzx eax, ax */
L_1214DED2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1214DED2: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x1214DED4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214DEE1; /* 0x1214DED6: js 0x1214dee1 */
L_1214DED8:
    ecx = (uint32_t)MEM16(esi + 0x3C); /* 0x1214DED8: movzx ecx, word ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x1C); /* 0x1214DEDC: add ecx, dword ptr [esi + 0x1c] */
    _flag_k = FK_ADD;
    goto L_1214DEE3; /* 0x1214DEDF: jmp 0x1214dee3 */
L_1214DEE1:
    ecx = ebx; /* 0x1214DEE1: mov ecx, ebx */
L_1214DEE3:
    PUSH32(esp, ebx); /* 0x1214DEE3: push ebx */
    PUSH32(esp, eax); /* 0x1214DEE4: push eax */
    PUSH32(esp, ecx); /* 0x1214DEE5: push ecx */
    eax = esi; /* 0x1214DEE6: mov eax, esi */
    RECOMP_CALL(sub_1214DC1A); /* 0x1214DEE8: call 0x1214dc1a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi + 0x44); /* 0x1214DEED: movzx eax, word ptr [esi + 0x44] */
    MEM32(esi + 0x3C) = eax; /* 0x1214DEF1: mov dword ptr [esi + 0x3c], eax */
    edx = esi + 0x2C; /* 0x1214DEF4: lea edx, [esi + 0x2c] */
    ecx = esi + 0x40; /* 0x1214DEF7: lea ecx, [esi + 0x40] */
L_1214DEFA:
    eax = ebx; /* 0x1214DEFA: mov eax, ebx */
L_1214DEFC:
    /* cmp MEM32(edx), ebx */ /* 0x1214DEFC: cmp dword ptr [edx], ebx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214DDAC; /* 0x1214DEFE: jne 0x1214ddac */
L_1214DF04:
    /* test eax, eax */ /* 0x1214DF04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214DF20; /* 0x1214DF06: je 0x1214df20 */
L_1214DF08:
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x1214DF08: mov ax, word ptr [esi + 0x44] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x1214DF0C: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    ecx = (uint32_t)LO16(eax); /* 0x1214DF0E: movzx ecx, ax */
    eax = MEM32(esi + 0x1C); /* 0x1214DF11: mov eax, dword ptr [esi + 0x1c] */
    edx = (uint32_t)MEM8(ecx + eax); /* 0x1214DF14: movzx edx, byte ptr [ecx + eax] */
    PUSH32(esp, esi); /* 0x1214DF18: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DF19: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1214D4C8); /* 0x1214DF1B: call 0x1214d4c8 */
    RECOMP_FLAGS_IN();
L_1214DF20:
    ecx = (uint32_t)MEM16(esi + 0x44); /* 0x1214DF20: movzx ecx, word ptr [esi + 0x44] */
    eax = MEM32(esi + 0x3C); /* 0x1214DF24: mov eax, dword ptr [esi + 0x3c] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1214DF27: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214DF2E; /* 0x1214DF2A: je 0x1214df2e */
L_1214DF2C:
    edi = ecx; /* 0x1214DF2C: mov edi, ecx */
L_1214DF2E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1214DF2E: sub edi, eax */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1214DF30: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214DF3B; /* 0x1214DF32: js 0x1214df3b */
L_1214DF34:
    ebx = (uint32_t)MEM16(esi + 0x3C); /* 0x1214DF34: movzx ebx, word ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi + 0x1C); /* 0x1214DF38: add ebx, dword ptr [esi + 0x1c] */
    _flag_k = FK_ADD;
L_1214DF3B:
    PUSH32(esp, 1); /* 0x1214DF3B: push 1 */
    PUSH32(esp, edi); /* 0x1214DF3D: push edi */
    PUSH32(esp, ebx); /* 0x1214DF3E: push ebx */
    eax = esi; /* 0x1214DF3F: mov eax, esi */
    RECOMP_CALL(sub_1214DC1A); /* 0x1214DF41: call 0x1214dc1a */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1214DF46: pop edi */
    ebx = POP32_VAL(esp); /* 0x1214DF47: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214DF48: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214DF49: ret  */
L_1214DF4A:
    eax = MEM32(ebp + (-0x8)); /* 0x1214DF4A: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1214DF4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214DFB1; /* 0x1214DF4F: je 0x1214dfb1 */
L_1214DF51:
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x1214DF51: mov ax, word ptr [esi + 0x44] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x1214DF55: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    ecx = (uint32_t)LO16(eax); /* 0x1214DF57: movzx ecx, ax */
    eax = MEM32(esi + 0x1C); /* 0x1214DF5A: mov eax, dword ptr [esi + 0x1c] */
    edx = (uint32_t)MEM8(ecx + eax); /* 0x1214DF5D: movzx edx, byte ptr [ecx + eax] */
    PUSH32(esp, esi); /* 0x1214DF61: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DF62: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1214D4C8); /* 0x1214DF64: call 0x1214d4c8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214DF69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214DF9D; /* 0x1214DF6B: je 0x1214df9d */
L_1214DF6D:
    eax = (uint32_t)MEM16(esi + 0x44); /* 0x1214DF6D: movzx eax, word ptr [esi + 0x44] */
    ecx = MEM32(esi + 0x3C); /* 0x1214DF71: mov ecx, dword ptr [esi + 0x3c] */
    /* test LO16(eax), LO16(eax) */ /* 0x1214DF74: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214DF7B; /* 0x1214DF77: jne 0x1214df7b */
L_1214DF79:
    eax = edi; /* 0x1214DF79: mov eax, edi */
L_1214DF7B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1214DF7B: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x1214DF7D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214DF8A; /* 0x1214DF7F: js 0x1214df8a */
L_1214DF81:
    ecx = (uint32_t)MEM16(esi + 0x3C); /* 0x1214DF81: movzx ecx, word ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x1C); /* 0x1214DF85: add ecx, dword ptr [esi + 0x1c] */
    _flag_k = FK_ADD;
    goto L_1214DF8C; /* 0x1214DF88: jmp 0x1214df8c */
L_1214DF8A:
    ecx = ebx; /* 0x1214DF8A: mov ecx, ebx */
L_1214DF8C:
    PUSH32(esp, ebx); /* 0x1214DF8C: push ebx */
    PUSH32(esp, eax); /* 0x1214DF8D: push eax */
    PUSH32(esp, ecx); /* 0x1214DF8E: push ecx */
    eax = esi; /* 0x1214DF8F: mov eax, esi */
    RECOMP_CALL(sub_1214DC1A); /* 0x1214DF91: call 0x1214dc1a */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi + 0x44); /* 0x1214DF96: movzx eax, word ptr [esi + 0x44] */
    MEM32(esi + 0x3C) = eax; /* 0x1214DF9A: mov dword ptr [esi + 0x3c], eax */
L_1214DF9D:
    _flag_a = (uint32_t)(MEM16(esi + 0x44)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x44) = (uint16_t)(MEM16(esi + 0x44) + 1); /* 0x1214DF9D: inc word ptr [esi + 0x44] */
    _flag_k = FK_NARROW(FK_INC, 16);
    eax = MEM32(ebp + (-0x8)); /* 0x1214DFA1: mov eax, dword ptr [ebp - 8] */
    edx = esi + 0x2C; /* 0x1214DFA4: lea edx, [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x1214DFA7: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    ecx = esi + 0x40; /* 0x1214DFA9: lea ecx, [esi + 0x40] */
    RECOMP_BACKEDGE();
    goto L_1214DEFC; /* 0x1214DFAC: jmp 0x1214defc */
L_1214DFB1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214DFB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214DFB3: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(esi + 0x44)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x44) = (uint16_t)(MEM16(esi + 0x44) + 1); /* 0x1214DFB4: inc word ptr [esi + 0x44] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x1214DFB8: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1214DFBA: mov dword ptr [ebp - 8], eax */
    ecx = esi + 0x40; /* 0x1214DFBD: lea ecx, [esi + 0x40] */
    RECOMP_BACKEDGE();
    goto L_1214DEFC; /* 0x1214DFC0: jmp 0x1214defc */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214DFCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214DFCAu);

L_1214DFCA:
    edi = edi; /* 0x1214DFCA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214DFCC: push ebp */
    ebp = esp; /* 0x1214DFCD: mov ebp, esp */
    eax = MEM32(ebp + 0x1C); /* 0x1214DFCF: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x1214DFD2: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1214DFD5: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x2C)); /* 0x1214DFD6: mov bl, byte ptr [ebp + 0x2c] */
    PUSH32(esp, esi); /* 0x1214DFD9: push esi */
    PUSH32(esp, edi); /* 0x1214DFDA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1214DFDB: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM16(edi + 0xC)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edi + 0xC) = (uint16_t)(MEM16(edi + 0xC) & 0); /* 0x1214DFDE: and word ptr [edi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(edi + 0x20) = eax; /* 0x1214DFE3: mov dword ptr [edi + 0x20], eax */
    eax = MEM32(ebp + 0x20); /* 0x1214DFE6: mov eax, dword ptr [ebp + 0x20] */
    MEM32(edi + 0x24) = eax; /* 0x1214DFE9: mov dword ptr [edi + 0x24], eax */
    eax = MEM32(ebp + 0x24); /* 0x1214DFEC: mov eax, dword ptr [ebp + 0x24] */
    MEM32(edi + 0x14) = eax; /* 0x1214DFEF: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + 0x28); /* 0x1214DFF2: mov eax, dword ptr [ebp + 0x28] */
    MEM32(edi + 0x18) = eax; /* 0x1214DFF5: mov dword ptr [edi + 0x18], eax */
    eax = MEM32(ebp + 0x14); /* 0x1214DFF8: mov eax, dword ptr [ebp + 0x14] */
    MEM32(edi + 0x4) = eax; /* 0x1214DFFB: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + 0x18); /* 0x1214DFFE: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edi + 0x10) = eax; /* 0x1214E001: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0x10); /* 0x1214E004: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214E007: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1C) = ecx; /* 0x1214E009: mov dword ptr [edi + 0x1c], ecx */
    MEM32(edi + 0x2C) = eax; /* 0x1214E00C: mov dword ptr [edi + 0x2c], eax */
    MEM32(edi + 0x30) = esi; /* 0x1214E00F: mov dword ptr [edi + 0x30], esi */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1214E012: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214E02B; /* 0x1214E014: jne 0x1214e02b */
L_1214E016:
    PUSH32(esp, 0x8000u); /* 0x1214E016: push 0x8000 */
    PUSH32(esp, ecx); /* 0x1214E01B: push ecx */
    eax = ecx + 0x8000; /* 0x1214E01C: lea eax, [ecx + 0x8000] */
    PUSH32(esp, eax); /* 0x1214E022: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1214E023: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214E028: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214E02B:
    _flag_a = (uint32_t)(MEM16(edi + 0x34)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    MEM16(edi + 0x34) = (uint16_t)(MEM16(edi + 0x34) & LO16(esi)); /* 0x1214E02B: and word ptr [edi + 0x34], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, edi); /* 0x1214E02F: push edi */
    MEM32(edi + 0x38) = esi; /* 0x1214E030: mov dword ptr [edi + 0x38], esi */
    RECOMP_CALL(sub_1214DA15); /* 0x1214E033: call 0x1214da15 */
    RECOMP_FLAGS_IN();
    MEM16(edi + 0x44) = (uint16_t)(0x8000u); /* 0x1214E038: mov word ptr [edi + 0x44], 0x8000 */
    MEM32(edi + 0x3C) = 0x8000u; /* 0x1214E03E: mov dword ptr [edi + 0x3c], 0x8000 */
    MEM32(edi + 0x28) = esi; /* 0x1214E045: mov dword ptr [edi + 0x28], esi */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1214E048: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214E053; /* 0x1214E04A: je 0x1214e053 */
L_1214E04C:
    RECOMP_CALL(sub_1214D838); /* 0x1214E04C: call 0x1214d838 */
    RECOMP_FLAGS_IN();
    goto L_1214E066; /* 0x1214E051: jmp 0x1214e066 */
L_1214E053:
    ecx = 0x100u; /* 0x1214E053: mov ecx, 0x100 */
L_1214E058:
    eax = MEM32(edi + 0x20); /* 0x1214E058: mov eax, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(MEM16(esi + eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(esi + eax) = (uint16_t)(MEM16(esi + eax) & 0); /* 0x1214E05B: and word ptr [esi + eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1214E060: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214E063: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214E058; /* 0x1214E064: jne 0x1214e058 */
L_1214E066:
    PUSH32(esp, 8); /* 0x1214E066: push 8 */
    PUSH32(esp, 0x43u); /* 0x1214E068: push 0x43 */
    esi = edi; /* 0x1214E06A: mov esi, edi */
    RECOMP_CALL(sub_1214CADA); /* 0x1214E06C: call 0x1214cada */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x1214E071: push 8 */
    PUSH32(esp, 0x4Bu); /* 0x1214E073: push 0x4b */
    RECOMP_CALL(sub_1214CADA); /* 0x1214E075: call 0x1214cada */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1214DD83); /* 0x1214E07A: call 0x1214dd83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1214E07F: add eax, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)LO16(eax); /* 0x1214E082: movzx ecx, ax */
    eax = MEM32(ebp + 0x30); /* 0x1214E085: mov eax, dword ptr [ebp + 0x30] */
    MEM32(eax) = ecx; /* 0x1214E088: mov dword ptr [eax], ecx */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1214E08A: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214E0A6; /* 0x1214E08C: je 0x1214e0a6 */
L_1214E08E:
    ecx = MEM32(edi + 0x1C); /* 0x1214E08E: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, 0x8000u); /* 0x1214E091: push 0x8000 */
    eax = ecx + 0x8000; /* 0x1214E096: lea eax, [ecx + 0x8000] */
    PUSH32(esp, eax); /* 0x1214E09C: push eax */
    PUSH32(esp, ecx); /* 0x1214E09D: push ecx */
    RECOMP_CALL(sub_121BF440); /* 0x1214E09E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214E0A3: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214E0A6:
    eax = MEM32(edi + 0x30); /* 0x1214E0A6: mov eax, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1214E0A9: neg eax */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1214E0AB: pop edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1214E0AC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x1214E0AE: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1214E0AF: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214E0B2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214E0B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x1214E0B4: ret 0x2c */
    RECOMP_REGS_OUT();
}

void sub_1214E0BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214E0BCu);

L_1214E0BC:
    edi = edi; /* 0x1214E0BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214E0BE: push ebp */
    ebp = esp; /* 0x1214E0BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x598u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x598u; /* 0x1214E0C1: sub esp, 0x598 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214E0C7: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1214E0CC: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1214E0CE: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x1214E0D1: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x544))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x544)) = MEM32(ebp + (-0x544)) & 0; /* 0x1214E0D4: and dword ptr [ebp - 0x544], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1214E0DB: push ebx */
    PUSH32(esp, esi); /* 0x1214E0DC: push esi */
    PUSH32(esp, edi); /* 0x1214E0DD: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x1214E0DE: mov edi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0x44u); /* 0x1214E0E1: push 0x44 */
    MEM32(ebp + (-0x558)) = eax; /* 0x1214E0E3: mov dword ptr [ebp - 0x558], eax */
    eax = ebp + (-0x48); /* 0x1214E0E9: lea eax, [ebp - 0x48] */
    esi = edx; /* 0x1214E0EC: mov esi, edx */
    PUSH32(esp, 0); /* 0x1214E0EE: push 0 */
    PUSH32(esp, eax); /* 0x1214E0F0: push eax */
    ebx = ecx; /* 0x1214E0F1: mov ebx, ecx */
    MEM32(ebp + (-0x550)) = esi; /* 0x1214E0F3: mov dword ptr [ebp - 0x550], esi */
    RECOMP_CALL(sub_121BF434); /* 0x1214E0F9: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214E0FE: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x1214E101: mov ecx, ebx */
    edx = esi; /* 0x1214E103: mov edx, esi */
L_1214E105:
    eax = MEM32(ecx); /* 0x1214E105: mov eax, dword ptr [ecx] */
    eax = ebp + eax * 4 + (-0x48); /* 0x1214E107: lea eax, [ebp + eax*4 - 0x48] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1214E10B: inc dword ptr [eax] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214E10D: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214E110: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214E105; /* 0x1214E111: jne 0x1214e105 */
L_1214E113:
    /* cmp MEM32(ebp + (-0x48)), esi */ /* 0x1214E113: cmp dword ptr [ebp - 0x48], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E121; /* 0x1214E116: jne 0x1214e121 */
L_1214E118:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    MEM32(edi) = MEM32(edi) & edx; /* 0x1214E118: and dword ptr [edi], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E11A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214E597; /* 0x1214E11C: jmp 0x1214e597 */
L_1214E121:
    esi = MEM32(edi); /* 0x1214E121: mov esi, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214E123: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1214E125: push 0x10 */
    ecx = edx + 0x1; /* 0x1214E127: lea ecx, [edx + 1] */
    MEM32(ebp + (-0x518)) = esi; /* 0x1214E12A: mov dword ptr [ebp - 0x518], esi */
    edx = POP32_VAL(esp); /* 0x1214E130: pop edx */
L_1214E131:
    /* cmp MEM32(ebp + ecx * 4 + (-0x48)), 0 */ /* 0x1214E131: cmp dword ptr [ebp + ecx*4 - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E13D; /* 0x1214E136: jne 0x1214e13d */
L_1214E138:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214E138: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x1214E139: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214E131; /* 0x1214E13B: jbe 0x1214e131 */
L_1214E13D:
    MEM32(ebp + (-0x510)) = ecx; /* 0x1214E13D: mov dword ptr [ebp - 0x510], ecx */
    /* cmp esi, ecx */ /* 0x1214E143: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E14F; /* 0x1214E145: jae 0x1214e14f */
L_1214E147:
    esi = ecx; /* 0x1214E147: mov esi, ecx */
    MEM32(ebp + (-0x518)) = esi; /* 0x1214E149: mov dword ptr [ebp - 0x518], esi */
L_1214E14F:
    /* cmp MEM32(ebp + edx * 4 + (-0x48)), 0 */ /* 0x1214E14F: cmp dword ptr [ebp + edx*4 - 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + edx * 4 + (-0x48))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E159; /* 0x1214E154: jne 0x1214e159 */
L_1214E156:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214E156: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214E14F; /* 0x1214E157: jne 0x1214e14f */
L_1214E159:
    MEM32(ebp + (-0x53C)) = edx; /* 0x1214E159: mov dword ptr [ebp - 0x53c], edx */
    /* cmp esi, edx */ /* 0x1214E15F: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214E16B; /* 0x1214E161: jbe 0x1214e16b */
L_1214E163:
    esi = edx; /* 0x1214E163: mov esi, edx */
    MEM32(ebp + (-0x518)) = esi; /* 0x1214E165: mov dword ptr [ebp - 0x518], esi */
L_1214E16B:
    MEM32(edi) = esi; /* 0x1214E16B: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214E16D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214E16F: inc esi */
    _flag_k = FK_INC;
    edi = esi; /* 0x1214E170: mov edi, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E172: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x1214E172: shl edi, cl */
    goto L_1214E183; /* 0x1214E174: jmp 0x1214e183 */
L_1214E176:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + ecx * 4 + (-0x48)); /* 0x1214E176: sub edi, dword ptr [ebp + ecx*4 - 0x48] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1214E299; /* 0x1214E17A: js 0x1214e299 */
L_1214E180:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214E180: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1214E181: add edi, edi */
    _flag_k = FK_ADD;
L_1214E183:
    /* cmp ecx, edx */ /* 0x1214E183: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E176; /* 0x1214E185: jb 0x1214e176 */
L_1214E187:
    eax = MEM32(ebp + edx * 4 + (-0x48)); /* 0x1214E187: mov eax, dword ptr [ebp + edx*4 - 0x48] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1214E18B: sub edi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x554)) = edi; /* 0x1214E18D: mov dword ptr [ebp - 0x554], edi */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_1214E299; /* 0x1214E193: js 0x1214e299 */
L_1214E199:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1214E199: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214E19B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x88)) = MEM32(ebp + (-0x88)) & ecx; /* 0x1214E19D: and dword ptr [ebp - 0x88], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214E1A3: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + edx * 4 + (-0x44)) = eax; /* 0x1214E1A4: mov dword ptr [ebp + edx*4 - 0x44], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214E1BD; /* 0x1214E1A8: je 0x1214e1bd */
L_1214E1AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E1AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E1AC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + eax + (-0x44)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + eax + (-0x44)); /* 0x1214E1AC: add ecx, dword ptr [ebp + eax - 0x44] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214E1B0: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214E1B3: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + eax + (-0x88)) = ecx; /* 0x1214E1B4: mov dword ptr [ebp + eax - 0x88], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214E1AC; /* 0x1214E1BB: jne 0x1214e1ac */
L_1214E1BD:
    eax = MEM32(ebp + (-0x550)); /* 0x1214E1BD: mov eax, dword ptr [ebp - 0x550] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214E1C3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E1C5:
    edx = MEM32(ebx); /* 0x1214E1C5: mov edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1214E1C7: add ebx, 4 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1214E1CA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214E1EA; /* 0x1214E1CC: je 0x1214e1ea */
L_1214E1CE:
    eax = MEM32(ebp + edx * 4 + (-0x8C)); /* 0x1214E1CE: mov eax, dword ptr [ebp + edx*4 - 0x8c] */
    MEM32(ebp + eax * 4 + (-0x50C)) = ecx; /* 0x1214E1D5: mov dword ptr [ebp + eax*4 - 0x50c], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214E1DC: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + edx * 4 + (-0x8C)) = eax; /* 0x1214E1DD: mov dword ptr [ebp + edx*4 - 0x8c], eax */
    eax = MEM32(ebp + (-0x550)); /* 0x1214E1E4: mov eax, dword ptr [ebp - 0x550] */
L_1214E1EA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214E1EA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x1214E1EB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E1C5; /* 0x1214E1ED: jb 0x1214e1c5 */
L_1214E1EF:
    ebx = MEM32(ebp + (-0x518)); /* 0x1214E1EF: mov ebx, dword ptr [ebp - 0x518] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x514)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x514)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x514)) = MEM32(ebp + (-0x514)) | 0xFFFFFFFFu; /* 0x1214E1F5: or dword ptr [ebp - 0x514], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1214E1FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x1214E1FE: mov edx, ecx */
    MEM32(ebp + (-0x8C)) = ecx; /* 0x1214E200: mov dword ptr [ebp - 0x8c], ecx */
    MEM32(ebp + (-0x598)) = ecx; /* 0x1214E206: mov dword ptr [ebp - 0x598], ecx */
    MEM32(ebp + (-0x534)) = ecx; /* 0x1214E20C: mov dword ptr [ebp - 0x534], ecx */
    MEM32(ebp + (-0x548)) = ecx; /* 0x1214E212: mov dword ptr [ebp - 0x548], ecx */
    ecx = MEM32(ebp + (-0x510)); /* 0x1214E218: mov ecx, dword ptr [ebp - 0x510] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x1214E21E: neg ebx */
    _flag_k = FK_CMP;
    eax = ebp + (-0x50C); /* 0x1214E220: lea eax, [ebp - 0x50c] */
    MEM32(ebp + (-0x51C)) = edx; /* 0x1214E226: mov dword ptr [ebp - 0x51c], edx */
    MEM32(ebp + (-0x530)) = eax; /* 0x1214E22C: mov dword ptr [ebp - 0x530], eax */
    MEM32(ebp + (-0x520)) = ebx; /* 0x1214E232: mov dword ptr [ebp - 0x520], ebx */
    /* cmp ecx, MEM32(ebp + (-0x53C)) */ /* 0x1214E238: cmp ecx, dword ptr [ebp - 0x53c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x53C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214E587; /* 0x1214E23E: jg 0x1214e587 */
L_1214E244:
    eax = ebp + ecx * 4 + (-0x48); /* 0x1214E244: lea eax, [ebp + ecx*4 - 0x48] */
    MEM32(ebp + (-0x538)) = eax; /* 0x1214E248: mov dword ptr [ebp - 0x538], eax */
L_1214E24E:
    eax = MEM32(eax); /* 0x1214E24E: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x52C)) = eax; /* 0x1214E250: mov dword ptr [ebp - 0x52c], eax */
    /* test eax, eax */ /* 0x1214E256: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x518)); /* 0x1214E258: mov eax, dword ptr [ebp - 0x518] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214E55F; /* 0x1214E25E: je 0x1214e55f */
L_1214E264:
    ecx = MEM32(ebp + (-0x52C)); /* 0x1214E264: mov ecx, dword ptr [ebp - 0x52c] */
L_1214E26A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214E26A: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x52C)) = ecx; /* 0x1214E26B: mov dword ptr [ebp - 0x52c], ecx */
    ecx = ebx + eax; /* 0x1214E271: lea ecx, [ebx + eax] */
    /* cmp MEM32(ebp + (-0x510)), ecx */ /* 0x1214E274: cmp dword ptr [ebp - 0x510], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x510))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1214E3DB; /* 0x1214E27A: jle 0x1214e3db */
L_1214E280:
    edx = MEM32(ebp + (-0x52C)); /* 0x1214E280: mov edx, dword ptr [ebp - 0x52c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E286: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1214E287: sub ebx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x54C)) = edx; /* 0x1214E289: mov dword ptr [ebp - 0x54c], edx */
    edx = MEM32(ebp + (-0x514)); /* 0x1214E28F: mov edx, dword ptr [ebp - 0x514] */
    esi = ebx; /* 0x1214E295: mov esi, ebx */
    goto L_1214E2A7; /* 0x1214E297: jmp 0x1214e2a7 */
L_1214E299:
    PUSH32(esp, 2); /* 0x1214E299: push 2 */
L_1214E29B:
    eax = POP32_VAL(esp); /* 0x1214E29B: pop eax */
    goto L_1214E597; /* 0x1214E29C: jmp 0x1214e597 */
L_1214E2A1:
    esi = MEM32(ebp + (-0x540)); /* 0x1214E2A1: mov esi, dword ptr [ebp - 0x540] */
L_1214E2A7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E2A7: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1214E2A8: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x514)) = edx; /* 0x1214E2AA: mov dword ptr [ebp - 0x514], edx */
    edx = MEM32(ebp + (-0x53C)); /* 0x1214E2B0: mov edx, dword ptr [ebp - 0x53c] */
    MEM32(ebp + (-0x540)) = esi; /* 0x1214E2B6: mov dword ptr [ebp - 0x540], esi */
    esi = (uint32_t)LO16(edx); /* 0x1214E2BC: movzx esi, dx */
    ebx = ecx; /* 0x1214E2BF: mov ebx, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1214E2C1: sub esi, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x520)) = ebx; /* 0x1214E2C3: mov dword ptr [ebp - 0x520], ebx */
    /* cmp esi, eax */ /* 0x1214E2C9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214E2D0; /* 0x1214E2CB: jbe 0x1214e2d0 */
L_1214E2CD:
    esi = (uint32_t)LO16(eax); /* 0x1214E2CD: movzx esi, ax */
L_1214E2D0:
    ecx = MEM32(ebp + (-0x510)); /* 0x1214E2D0: mov ecx, dword ptr [ebp - 0x510] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214E2D6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1214E2D8: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E2DA: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E2DB: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x1214E2DB: shl edx, cl */
    /* cmp edx, MEM32(ebp + (-0x54C)) */ /* 0x1214E2DD: cmp edx, dword ptr [ebp - 0x54c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x54C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214E308; /* 0x1214E2E3: jbe 0x1214e308 */
L_1214E2E5:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1214E2E5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x52C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x52C)); /* 0x1214E2E8: sub eax, dword ptr [ebp - 0x52c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1214E2EE: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x538)); /* 0x1214E2F0: mov eax, dword ptr [ebp - 0x538] */
    goto L_1214E303; /* 0x1214E2F6: jmp 0x1214e303 */
L_1214E2F8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1214E2F8: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214E2FA: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax) */ /* 0x1214E2FD: cmp edx, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214E308; /* 0x1214E2FF: jbe 0x1214e308 */
L_1214E301:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax); /* 0x1214E301: sub edx, dword ptr [eax] */
    _flag_k = FK_CMP;
L_1214E303:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214E303: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x1214E304: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E2F8; /* 0x1214E306: jb 0x1214e2f8 */
L_1214E308:
    ebx = MEM32(ebp + (-0x544)); /* 0x1214E308: mov ebx, dword ptr [ebp - 0x544] */
    eax = MEM32(ebp + (-0x558)); /* 0x1214E30E: mov eax, dword ptr [ebp - 0x558] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214E314: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214E316: inc esi */
    _flag_k = FK_INC;
    ebx = eax + ebx * 8; /* 0x1214E317: lea ebx, [eax + ebx*8] */
    edx = esi; /* 0x1214E31A: mov edx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E31C: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x1214E31C: shl edx, cl */
    MEM32(ebp + (-0x534)) = ebx; /* 0x1214E31E: mov dword ptr [ebp - 0x534], ebx */
    ebx = MEM32(ebp + (-0x544)); /* 0x1214E324: mov ebx, dword ptr [ebp - 0x544] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1214E32A: add ebx, edx */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + 0x18) */ /* 0x1214E32C: cmp ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x544)) = ebx; /* 0x1214E32F: mov dword ptr [ebp - 0x544], ebx */
    ebx = MEM32(ebp + (-0x520)); /* 0x1214E335: mov ebx, dword ptr [ebp - 0x520] */
    MEM32(ebp + (-0x548)) = edx; /* 0x1214E33B: mov dword ptr [ebp - 0x548], edx */
    if (CMP_A(_flag_a, _flag_b)) goto L_1214E580; /* 0x1214E341: ja 0x1214e580 */
L_1214E347:
    edx = MEM32(ebp + (-0x514)); /* 0x1214E347: mov edx, dword ptr [ebp - 0x514] */
    eax = MEM32(ebp + (-0x534)); /* 0x1214E34D: mov eax, dword ptr [ebp - 0x534] */
    MEM32(ebp + edx * 4 + (-0x598)) = eax; /* 0x1214E353: mov dword ptr [ebp + edx*4 - 0x598], eax */
    eax = MEM32(ebp + (-0x518)); /* 0x1214E35A: mov eax, dword ptr [ebp - 0x518] */
    /* test edx, edx */ /* 0x1214E360: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214E3C6; /* 0x1214E362: je 0x1214e3c6 */
L_1214E364:
    edx = MEM32(ebp + (-0x51C)); /* 0x1214E364: mov edx, dword ptr [ebp - 0x51c] */
    ebx = MEM32(ebp + (-0x514)); /* 0x1214E36A: mov ebx, dword ptr [ebp - 0x514] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x10u); /* 0x1214E370: add cl, 0x10 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x528)) = (uint8_t)(LO8(ecx)); /* 0x1214E373: mov byte ptr [ebp - 0x528], cl */
    ecx = MEM32(ebp + (-0x540)); /* 0x1214E379: mov ecx, dword ptr [ebp - 0x540] */
    MEM32(ebp + ebx * 4 + (-0x8C)) = edx; /* 0x1214E37F: mov dword ptr [ebp + ebx*4 - 0x8c], edx */
    ebx = MEM32(ebp + (-0x534)); /* 0x1214E386: mov ebx, dword ptr [ebp - 0x534] */
    MEM8(ebp + (-0x527)) = (uint8_t)(LO8(eax)); /* 0x1214E38C: mov byte ptr [ebp - 0x527], al */
    eax = MEM32(ebp + (-0x514)); /* 0x1214E392: mov eax, dword ptr [ebp - 0x514] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214E398: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x1214E398: shr edx, cl */
    ecx = MEM32(ebp + eax * 4 + (-0x59C)); /* 0x1214E39A: mov ecx, dword ptr [ebp + eax*4 - 0x59c] */
    eax = MEM32(ebp + (-0x528)); /* 0x1214E3A1: mov eax, dword ptr [ebp - 0x528] */
    MEM32(ebp + (-0x524)) = ebx; /* 0x1214E3A7: mov dword ptr [ebp - 0x524], ebx */
    MEM32(ecx + edx * 8) = eax; /* 0x1214E3AD: mov dword ptr [ecx + edx*8], eax */
    eax = MEM32(ebp + (-0x518)); /* 0x1214E3B0: mov eax, dword ptr [ebp - 0x518] */
    MEM32(ecx + edx * 8 + 0x4) = ebx; /* 0x1214E3B6: mov dword ptr [ecx + edx*8 + 4], ebx */
    ebx = MEM32(ebp + (-0x520)); /* 0x1214E3BA: mov ebx, dword ptr [ebp - 0x520] */
    edx = MEM32(ebp + (-0x514)); /* 0x1214E3C0: mov edx, dword ptr [ebp - 0x514] */
L_1214E3C6:
    ecx = ebx + eax; /* 0x1214E3C6: lea ecx, [ebx + eax] */
    /* cmp MEM32(ebp + (-0x510)), ecx */ /* 0x1214E3C9: cmp dword ptr [ebp - 0x510], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x510))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1214E2A1; /* 0x1214E3CF: jg 0x1214e2a1 */
L_1214E3D5:
    edx = MEM32(ebp + (-0x51C)); /* 0x1214E3D5: mov edx, dword ptr [ebp - 0x51c] */
L_1214E3DB:
    SET_LO8(eax, MEM8(ebp + (-0x510))); /* 0x1214E3DB: mov al, byte ptr [ebp - 0x510] */
    ecx = MEM32(ebp + (-0x530)); /* 0x1214E3E1: mov ecx, dword ptr [ebp - 0x530] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - LO8(ebx)); /* 0x1214E3E7: sub al, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x527)) = (uint8_t)(LO8(eax)); /* 0x1214E3E9: mov byte ptr [ebp - 0x527], al */
    eax = MEM32(ebp + (-0x550)); /* 0x1214E3EF: mov eax, dword ptr [ebp - 0x550] */
    eax = ebp + eax * 4 + (-0x50C); /* 0x1214E3F5: lea eax, [ebp + eax*4 - 0x50c] */
    /* cmp ecx, eax */ /* 0x1214E3FC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E409; /* 0x1214E3FE: jb 0x1214e409 */
L_1214E400:
    MEM8(ebp + (-0x528)) = (uint8_t)(0x63u); /* 0x1214E400: mov byte ptr [ebp - 0x528], 0x63 */
    goto L_1214E45B; /* 0x1214E407: jmp 0x1214e45b */
L_1214E409:
    ecx = MEM32(ecx); /* 0x1214E409: mov ecx, dword ptr [ecx] */
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1214E40B: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E435; /* 0x1214E40E: jae 0x1214e435 */
L_1214E410:
    /* cmp ecx, 0x100u */ /* 0x1214E410: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x530)); /* 0x1214E416: mov ecx, dword ptr [ebp - 0x530] */
    SET_LO8(eax, (CMP_B(_flag_a, _flag_b)) ? 1 : 0); /* 0x1214E41C: setb al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xFu); /* 0x1214E41F: add al, 0xf */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x528)) = (uint8_t)(LO8(eax)); /* 0x1214E421: mov byte ptr [ebp - 0x528], al */
    SET_LO16(eax, MEM16(ecx)); /* 0x1214E427: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1214E42A: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x530)) = ecx; /* 0x1214E42D: mov dword ptr [ebp - 0x530], ecx */
    goto L_1214E454; /* 0x1214E433: jmp 0x1214e454 */
L_1214E435:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x8); /* 0x1214E435: sub ecx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1214E438: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1214E43B: add ecx, ecx */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + eax)); /* 0x1214E43D: mov al, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x530))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x530)) = MEM32(ebp + (-0x530)) + 4; /* 0x1214E440: add dword ptr [ebp - 0x530], 4 */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x528)) = (uint8_t)(LO8(eax)); /* 0x1214E447: mov byte ptr [ebp - 0x528], al */
    eax = MEM32(ebp + 0xC); /* 0x1214E44D: mov eax, dword ptr [ebp + 0xc] */
    SET_LO16(eax, MEM16(ecx + eax)); /* 0x1214E450: mov ax, word ptr [ecx + eax] */
L_1214E454:
    MEM16(ebp + (-0x524)) = (uint16_t)(LO16(eax)); /* 0x1214E454: mov word ptr [ebp - 0x524], ax */
L_1214E45B:
    ecx = MEM32(ebp + (-0x510)); /* 0x1214E45B: mov ecx, dword ptr [ebp - 0x510] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x1214E461: sub ecx, ebx */
    _flag_k = FK_CMP;
    eax = esi; /* 0x1214E463: mov eax, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E465: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E465: shl eax, cl */
    ecx = ebx; /* 0x1214E467: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214E469: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x1214E469: shr edx, cl */
    MEM32(ebp + (-0x54C)) = eax; /* 0x1214E46B: mov dword ptr [ebp - 0x54c], eax */
    /* cmp edx, MEM32(ebp + (-0x548)) */ /* 0x1214E471: cmp edx, dword ptr [ebp - 0x548] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x548)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E4C3; /* 0x1214E477: jae 0x1214e4c3 */
L_1214E479:
    ecx = MEM32(ebp + (-0x54C)); /* 0x1214E479: mov ecx, dword ptr [ebp - 0x54c] */
    ebx = MEM32(ebp + (-0x528)); /* 0x1214E47F: mov ebx, dword ptr [ebp - 0x528] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1214E485: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1214E485: shl eax, 3 */
    MEM32(ebp + (-0x540)) = eax; /* 0x1214E488: mov dword ptr [ebp - 0x540], eax */
    eax = MEM32(ebp + (-0x534)); /* 0x1214E48E: mov eax, dword ptr [ebp - 0x534] */
    edi = MEM32(ebp + (-0x540)); /* 0x1214E494: mov edi, dword ptr [ebp - 0x540] */
    esi = eax + edx * 8; /* 0x1214E49A: lea esi, [eax + edx*8] */
L_1214E49D:
    eax = MEM32(ebp + (-0x524)); /* 0x1214E49D: mov eax, dword ptr [ebp - 0x524] */
    MEM32(esi) = ebx; /* 0x1214E4A3: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = eax; /* 0x1214E4A5: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1214E4A8: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1214E4AA: add esi, edi */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + (-0x548)) */ /* 0x1214E4AC: cmp edx, dword ptr [ebp - 0x548] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x548)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E49D; /* 0x1214E4B2: jb 0x1214e49d */
L_1214E4B4:
    ebx = MEM32(ebp + (-0x520)); /* 0x1214E4B4: mov ebx, dword ptr [ebp - 0x520] */
    edi = MEM32(ebp + (-0x554)); /* 0x1214E4BA: mov edi, dword ptr [ebp - 0x554] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214E4C0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214E4C2: inc esi */
    _flag_k = FK_INC;
L_1214E4C3:
    ecx = MEM32(ebp + (-0x510)); /* 0x1214E4C3: mov ecx, dword ptr [ebp - 0x510] */
    edx = MEM32(ebp + (-0x51C)); /* 0x1214E4C9: mov edx, dword ptr [ebp - 0x51c] */
    ecx = ecx + (-0x1); /* 0x1214E4CF: lea ecx, [ecx - 1] */
    eax = esi; /* 0x1214E4D2: mov eax, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E4D4: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E4D4: shl eax, cl */
    goto L_1214E4DC; /* 0x1214E4D6: jmp 0x1214e4dc */
L_1214E4D8:
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x1214E4D8: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1214E4DA: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1214E4DA: shr eax, 1 */
L_1214E4DC:
    /* test edx, eax */ /* 0x1214E4DC: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214E4D8; /* 0x1214E4DE: jne 0x1214e4d8 */
L_1214E4E0:
    _flag_a = (uint32_t)((edx ^ eax)); _flag_b = (uint32_t)((edx ^ eax));
    edx = edx ^ eax; /* 0x1214E4E0: xor edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1214E4E2: mov ecx, ebx */
    eax = esi; /* 0x1214E4E4: mov eax, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E4E6: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E4E6: shl eax, cl */
    ecx = MEM32(ebp + (-0x514)); /* 0x1214E4E8: mov ecx, dword ptr [ebp - 0x514] */
    MEM32(ebp + (-0x51C)) = edx; /* 0x1214E4EE: mov dword ptr [ebp - 0x51c], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214E4F4: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x1214E4F5: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + ecx * 4 + (-0x8C)) */ /* 0x1214E4F7: cmp eax, dword ptr [ebp + ecx*4 - 0x8c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x8C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214E545; /* 0x1214E4FE: je 0x1214e545 */
L_1214E500:
    esi = MEM32(ebp + (-0x518)); /* 0x1214E500: mov esi, dword ptr [ebp - 0x518] */
    edi = MEM32(ebp + (-0x51C)); /* 0x1214E506: mov edi, dword ptr [ebp - 0x51c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214E50C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E50E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214E50E: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1214E50F: sub ebx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x514)) = ecx; /* 0x1214E511: mov dword ptr [ebp - 0x514], ecx */
    ecx = ebx; /* 0x1214E517: mov ecx, ebx */
    eax = edx + 0x1; /* 0x1214E519: lea eax, [edx + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E51C: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E51C: shl eax, cl */
    ecx = MEM32(ebp + (-0x514)); /* 0x1214E51E: mov ecx, dword ptr [ebp - 0x514] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214E524: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1214E525: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + ecx * 4 + (-0x8C)) */ /* 0x1214E527: cmp eax, dword ptr [ebp + ecx*4 - 0x8c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x8C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E50E; /* 0x1214E52E: jne 0x1214e50e */
L_1214E530:
    edi = MEM32(ebp + (-0x554)); /* 0x1214E530: mov edi, dword ptr [ebp - 0x554] */
    edx = MEM32(ebp + (-0x51C)); /* 0x1214E536: mov edx, dword ptr [ebp - 0x51c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214E53C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x520)) = ebx; /* 0x1214E53E: mov dword ptr [ebp - 0x520], ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214E544: inc esi */
    _flag_k = FK_INC;
L_1214E545:
    ecx = MEM32(ebp + (-0x52C)); /* 0x1214E545: mov ecx, dword ptr [ebp - 0x52c] */
    eax = MEM32(ebp + (-0x518)); /* 0x1214E54B: mov eax, dword ptr [ebp - 0x518] */
    /* test ecx, ecx */ /* 0x1214E551: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214E26A; /* 0x1214E553: jne 0x1214e26a */
L_1214E559:
    ecx = MEM32(ebp + (-0x510)); /* 0x1214E559: mov ecx, dword ptr [ebp - 0x510] */
L_1214E55F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x538))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x538)) = MEM32(ebp + (-0x538)) + 4; /* 0x1214E55F: add dword ptr [ebp - 0x538], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214E566: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x510)) = ecx; /* 0x1214E567: mov dword ptr [ebp - 0x510], ecx */
    /* cmp ecx, MEM32(ebp + (-0x53C)) */ /* 0x1214E56D: cmp ecx, dword ptr [ebp - 0x53c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x53C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214E587; /* 0x1214E573: jg 0x1214e587 */
L_1214E575:
    eax = MEM32(ebp + (-0x538)); /* 0x1214E575: mov eax, dword ptr [ebp - 0x538] */
    RECOMP_BACKEDGE();
    goto L_1214E24E; /* 0x1214E57B: jmp 0x1214e24e */
L_1214E580:
    PUSH32(esp, 3); /* 0x1214E580: push 3 */
    RECOMP_BACKEDGE();
    goto L_1214E29B; /* 0x1214E582: jmp 0x1214e29b */
L_1214E587:
    /* test edi, edi */ /* 0x1214E587: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214E593; /* 0x1214E589: je 0x1214e593 */
L_1214E58B:
    /* cmp MEM32(ebp + (-0x53C)), esi */ /* 0x1214E58B: cmp dword ptr [ebp - 0x53c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x53C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E595; /* 0x1214E591: jne 0x1214e595 */
L_1214E593:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1214E593: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E595:
    eax = esi; /* 0x1214E595: mov eax, esi */
L_1214E597:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214E597: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1214E59A: pop edi */
    esi = POP32_VAL(esp); /* 0x1214E59B: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1214E59C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214E59E: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1214E59F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214E5A4: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1214E5A5: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1214E5AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214E5ADu);

L_1214E5AD:
    edi = edi; /* 0x1214E5AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214E5AF: push ebp */
    ebp = esp; /* 0x1214E5B0: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1214E5B2: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1214E5B5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x1214E5B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1214E5C4; /* 0x1214E5BA: jg 0x1214e5c4 */
L_1214E5BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E5BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214E5BE: inc eax */
    _flag_k = FK_INC;
    goto L_1214E969; /* 0x1214E5BF: jmp 0x1214e969 */
L_1214E5C4:
    /* cmp MEM16(ebp + 0x18), 0 */ /* 0x1214E5C4: cmp word ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + 0x18)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = (uint32_t)MEM16(ecx * 2 + 0x121D8524); /* 0x1214E5C9: movzx eax, word ptr [ecx*2 + 0x121d8524] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1214E5D1: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x14); /* 0x1214E5D4: mov eax, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(eax * 2 + 0x121D8524); /* 0x1214E5D7: movzx eax, word ptr [eax*2 + 0x121d8524] */
    PUSH32(esp, ebx); /* 0x1214E5DF: push ebx */
    ebx = MEM32(esi + 0x28); /* 0x1214E5E0: mov ebx, dword ptr [esi + 0x28] */
    PUSH32(esp, edi); /* 0x1214E5E3: push edi */
    edi = MEM32(esi + 0x24); /* 0x1214E5E4: mov edi, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1214E5E7: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1214E5EA: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1214E5ED: mov dword ptr [ebp - 0x14], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214E604; /* 0x1214E5F0: je 0x1214e604 */
L_1214E5F2:
    /* cmp MEM16(esi + 0x48), 0 */ /* 0x1214E5F2: cmp word ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x48)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214E604; /* 0x1214E5F7: je 0x1214e604 */
L_1214E5F9:
    edx = MEM32(esi + 0x4C); /* 0x1214E5F9: mov edx, dword ptr [esi + 0x4c] */
    eax = MEM32(esi + 0x50); /* 0x1214E5FC: mov eax, dword ptr [esi + 0x50] */
    goto L_1214E8E6; /* 0x1214E5FF: jmp 0x1214e8e6 */
L_1214E604:
    /* cmp ebx, ecx */ /* 0x1214E604: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E639; /* 0x1214E606: jae 0x1214e639 */
L_1214E608:
    edx = MEM32(esi + 0x18); /* 0x1214E608: mov edx, dword ptr [esi + 0x18] */
L_1214E60B:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214E60B: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E61D; /* 0x1214E60E: jae 0x1214e61d */
L_1214E610:
    eax = MEM32(esi + 0x8); /* 0x1214E610: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214E613: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E617: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214E618: mov dword ptr [esi + 0x18], edx */
    goto L_1214E628; /* 0x1214E61B: jmp 0x1214e628 */
L_1214E61D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214E626; /* 0x1214E61D: je 0x1214e626 */
L_1214E61F:
    MEM32(esi + 0x4) = 1; /* 0x1214E61F: mov dword ptr [esi + 4], 1 */
L_1214E626:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E626: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E628:
    eax = (uint32_t)LO8(eax); /* 0x1214E628: movzx eax, al */
    ecx = ebx; /* 0x1214E62B: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E62D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E62D: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214E62F: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214E632: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x1214E634: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E60B; /* 0x1214E637: jb 0x1214e60b */
L_1214E639:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214E639: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E964; /* 0x1214E63D: jne 0x1214e964 */
L_1214E643:
    eax = MEM32(ebp + (-0x10)); /* 0x1214E643: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1214E646: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1214E649: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + eax * 8; /* 0x1214E64B: lea eax, [ecx + eax*8] */
    goto L_1214E6BC; /* 0x1214E64E: jmp 0x1214e6bc */
L_1214E650:
    /* cmp edx, 0x63u */ /* 0x1214E650: cmp edx, 0x63 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214E964; /* 0x1214E653: je 0x1214e964 */
L_1214E659:
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x1214E659: movzx ecx, byte ptr [eax + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214E65D: shr edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> ((LO8(ecx)) & 31); /* 0x1214E65D: shr edi, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1214E65F: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x10u; /* 0x1214E661: sub edx, 0x10 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1214E664: mov dword ptr [ebp - 4], edi */
    /* cmp ebx, edx */ /* 0x1214E667: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E6A2; /* 0x1214E669: jae 0x1214e6a2 */
L_1214E66B:
    edi = MEM32(esi + 0x18); /* 0x1214E66B: mov edi, dword ptr [esi + 0x18] */
L_1214E66E:
    /* cmp edi, MEM32(esi + 0x14) */ /* 0x1214E66E: cmp edi, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E680; /* 0x1214E671: jae 0x1214e680 */
L_1214E673:
    eax = MEM32(esi + 0x8); /* 0x1214E673: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edi); /* 0x1214E676: movzx eax, byte ptr [eax + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214E67A: inc edi */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edi; /* 0x1214E67B: mov dword ptr [esi + 0x18], edi */
    goto L_1214E68B; /* 0x1214E67E: jmp 0x1214e68b */
L_1214E680:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214E689; /* 0x1214E680: je 0x1214e689 */
L_1214E682:
    MEM32(esi + 0x4) = 1; /* 0x1214E682: mov dword ptr [esi + 4], 1 */
L_1214E689:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E689: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E68B:
    eax = (uint32_t)LO8(eax); /* 0x1214E68B: movzx eax, al */
    ecx = ebx; /* 0x1214E68E: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E690: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E690: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214E692: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | eax; /* 0x1214E695: or dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edx */ /* 0x1214E698: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E66E; /* 0x1214E69A: jb 0x1214e66e */
L_1214E69C:
    eax = MEM32(ebp + 0x18); /* 0x1214E69C: mov eax, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + (-0x4)); /* 0x1214E69F: mov edi, dword ptr [ebp - 4] */
L_1214E6A2:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214E6A2: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E964; /* 0x1214E6A6: jne 0x1214e964 */
L_1214E6AC:
    ecx = (uint32_t)MEM16(edx * 2 + 0x121D8524); /* 0x1214E6AC: movzx ecx, word ptr [edx*2 + 0x121d8524] */
    eax = MEM32(eax + 0x4); /* 0x1214E6B4: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1214E6B7: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 8; /* 0x1214E6B9: lea eax, [eax + ecx*8] */
L_1214E6BC:
    edx = (uint32_t)MEM8(eax); /* 0x1214E6BC: movzx edx, byte ptr [eax] */
    MEM32(ebp + 0x18) = eax; /* 0x1214E6BF: mov dword ptr [ebp + 0x18], eax */
    /* cmp edx, 0x10u */ /* 0x1214E6C2: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1214E650; /* 0x1214E6C5: ja 0x1214e650 */
L_1214E6C7:
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x1214E6C7: movzx ecx, byte ptr [eax + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214E6CB: shr edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> ((LO8(ecx)) & 31); /* 0x1214E6CB: shr edi, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1214E6CD: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1214E6CF: mov dword ptr [ebp - 4], edi */
    /* cmp edx, 0x10u */ /* 0x1214E6D2: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E70D; /* 0x1214E6D5: jne 0x1214e70d */
L_1214E6D7:
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x1214E6D7: mov al, byte ptr [eax + 4] */
    ecx = MEM32(esi + 0xC); /* 0x1214E6DA: mov ecx, dword ptr [esi + 0xc] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1214E6DD: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x1214E6DF: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1; /* 0x1214E6E2: dec dword ptr [esi + 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214E91E; /* 0x1214E6E5: jne 0x1214e91e */
L_1214E6EB:
    eax = MEM32(ebp + 0x8); /* 0x1214E6EB: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM16(esi + 0x48)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(esi + 0x48) = (uint16_t)(MEM16(esi + 0x48) & 0); /* 0x1214E6EE: and word ptr [esi + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(esi + 0x38) = eax; /* 0x1214E6F3: mov dword ptr [esi + 0x38], eax */
    eax = MEM32(ebp + 0xC); /* 0x1214E6F6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x3C) = eax; /* 0x1214E6F9: mov dword ptr [esi + 0x3c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1214E6FC: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x40) = eax; /* 0x1214E6FF: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ebp + 0x14); /* 0x1214E702: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x44) = eax; /* 0x1214E705: mov dword ptr [esi + 0x44], eax */
    goto L_1214E953; /* 0x1214E708: jmp 0x1214e953 */
L_1214E70D:
    /* cmp edx, 0xFu */ /* 0x1214E70D: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214E95A; /* 0x1214E710: je 0x1214e95a */
L_1214E716:
    /* cmp ebx, edx */ /* 0x1214E716: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E751; /* 0x1214E718: jae 0x1214e751 */
L_1214E71A:
    edi = MEM32(esi + 0x18); /* 0x1214E71A: mov edi, dword ptr [esi + 0x18] */
L_1214E71D:
    /* cmp edi, MEM32(esi + 0x14) */ /* 0x1214E71D: cmp edi, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E72F; /* 0x1214E720: jae 0x1214e72f */
L_1214E722:
    eax = MEM32(esi + 0x8); /* 0x1214E722: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edi); /* 0x1214E725: movzx eax, byte ptr [eax + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214E729: inc edi */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edi; /* 0x1214E72A: mov dword ptr [esi + 0x18], edi */
    goto L_1214E73A; /* 0x1214E72D: jmp 0x1214e73a */
L_1214E72F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214E738; /* 0x1214E72F: je 0x1214e738 */
L_1214E731:
    MEM32(esi + 0x4) = 1; /* 0x1214E731: mov dword ptr [esi + 4], 1 */
L_1214E738:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E738: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E73A:
    eax = (uint32_t)LO8(eax); /* 0x1214E73A: movzx eax, al */
    ecx = ebx; /* 0x1214E73D: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E73F: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E73F: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214E741: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | eax; /* 0x1214E744: or dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edx */ /* 0x1214E747: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E71D; /* 0x1214E749: jb 0x1214e71d */
L_1214E74B:
    eax = MEM32(ebp + 0x18); /* 0x1214E74B: mov eax, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + (-0x4)); /* 0x1214E74E: mov edi, dword ptr [ebp - 4] */
L_1214E751:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214E751: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E964; /* 0x1214E755: jne 0x1214e964 */
L_1214E75B:
    ecx = (uint32_t)MEM16(edx * 2 + 0x121D8524); /* 0x1214E75B: movzx ecx, word ptr [edx*2 + 0x121d8524] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x1214E763: movzx eax, word ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1214E767: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1214E769: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x14); /* 0x1214E76B: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1214E76E: mov dword ptr [ebp - 8], ecx */
    ecx = edx; /* 0x1214E771: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214E773: shr edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> ((LO8(ecx)) & 31); /* 0x1214E773: shr edi, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x1214E775: sub ebx, edx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1214E777: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214E964; /* 0x1214E779: jle 0x1214e964 */
L_1214E77F:
    /* cmp ebx, eax */ /* 0x1214E77F: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E7B4; /* 0x1214E781: jae 0x1214e7b4 */
L_1214E783:
    edx = MEM32(esi + 0x18); /* 0x1214E783: mov edx, dword ptr [esi + 0x18] */
L_1214E786:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214E786: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E798; /* 0x1214E789: jae 0x1214e798 */
L_1214E78B:
    eax = MEM32(esi + 0x8); /* 0x1214E78B: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214E78E: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E792: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214E793: mov dword ptr [esi + 0x18], edx */
    goto L_1214E7A3; /* 0x1214E796: jmp 0x1214e7a3 */
L_1214E798:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214E7A1; /* 0x1214E798: je 0x1214e7a1 */
L_1214E79A:
    MEM32(esi + 0x4) = 1; /* 0x1214E79A: mov dword ptr [esi + 4], 1 */
L_1214E7A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E7A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E7A3:
    eax = (uint32_t)LO8(eax); /* 0x1214E7A3: movzx eax, al */
    ecx = ebx; /* 0x1214E7A6: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E7A8: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E7A8: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214E7AA: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214E7AD: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, MEM32(ebp + 0x14) */ /* 0x1214E7AF: cmp ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E786; /* 0x1214E7B2: jb 0x1214e786 */
L_1214E7B4:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214E7B4: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E964; /* 0x1214E7B8: jne 0x1214e964 */
L_1214E7BE:
    eax = MEM32(ebp + (-0x14)); /* 0x1214E7BE: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + 0xC); /* 0x1214E7C1: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1214E7C4: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + eax * 8; /* 0x1214E7C6: lea eax, [ecx + eax*8] */
    goto L_1214E840; /* 0x1214E7C9: jmp 0x1214e840 */
L_1214E7CB:
    /* cmp edx, 0x63u */ /* 0x1214E7CB: cmp edx, 0x63 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214E964; /* 0x1214E7CE: je 0x1214e964 */
L_1214E7D4:
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x1214E7D4: movzx ecx, byte ptr [eax + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214E7D8: shr edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> ((LO8(ecx)) & 31); /* 0x1214E7D8: shr edi, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x10u; /* 0x1214E7DA: sub edx, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1214E7DD: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = edx; /* 0x1214E7DF: mov dword ptr [ebp + 0x18], edx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1214E7E2: mov dword ptr [ebp - 4], edi */
    /* cmp ebx, edx */ /* 0x1214E7E5: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E826; /* 0x1214E7E7: jae 0x1214e826 */
L_1214E7E9:
    edx = MEM32(esi + 0x18); /* 0x1214E7E9: mov edx, dword ptr [esi + 0x18] */
    edi = MEM32(ebp + 0x18); /* 0x1214E7EC: mov edi, dword ptr [ebp + 0x18] */
L_1214E7EF:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214E7EF: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E801; /* 0x1214E7F2: jae 0x1214e801 */
L_1214E7F4:
    eax = MEM32(esi + 0x8); /* 0x1214E7F4: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214E7F7: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E7FB: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214E7FC: mov dword ptr [esi + 0x18], edx */
    goto L_1214E80C; /* 0x1214E7FF: jmp 0x1214e80c */
L_1214E801:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214E80A; /* 0x1214E801: je 0x1214e80a */
L_1214E803:
    MEM32(esi + 0x4) = 1; /* 0x1214E803: mov dword ptr [esi + 4], 1 */
L_1214E80A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E80A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E80C:
    eax = (uint32_t)LO8(eax); /* 0x1214E80C: movzx eax, al */
    ecx = ebx; /* 0x1214E80F: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E811: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E811: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214E813: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | eax; /* 0x1214E816: or dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1214E819: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E7EF; /* 0x1214E81B: jb 0x1214e7ef */
L_1214E81D:
    edx = MEM32(ebp + 0x18); /* 0x1214E81D: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + (-0xC)); /* 0x1214E820: mov eax, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x4)); /* 0x1214E823: mov edi, dword ptr [ebp - 4] */
L_1214E826:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214E826: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E964; /* 0x1214E82A: jne 0x1214e964 */
L_1214E830:
    ecx = (uint32_t)MEM16(edx * 2 + 0x121D8524); /* 0x1214E830: movzx ecx, word ptr [edx*2 + 0x121d8524] */
    eax = MEM32(eax + 0x4); /* 0x1214E838: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x1214E83B: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 8; /* 0x1214E83D: lea eax, [eax + ecx*8] */
L_1214E840:
    edx = (uint32_t)MEM8(eax); /* 0x1214E840: movzx edx, byte ptr [eax] */
    MEM32(ebp + 0x18) = edx; /* 0x1214E843: mov dword ptr [ebp + 0x18], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1214E846: mov dword ptr [ebp - 0xc], eax */
    /* cmp edx, 0x10u */ /* 0x1214E849: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1214E7CB; /* 0x1214E84C: ja 0x1214e7cb */
L_1214E852:
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x1214E852: movzx ecx, byte ptr [eax + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214E856: shr edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> ((LO8(ecx)) & 31); /* 0x1214E856: shr edi, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1214E858: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1214E85A: mov dword ptr [ebp - 4], edi */
    /* cmp ebx, edx */ /* 0x1214E85D: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E8A2; /* 0x1214E85F: jae 0x1214e8a2 */
L_1214E861:
    edx = MEM32(esi + 0x18); /* 0x1214E861: mov edx, dword ptr [esi + 0x18] */
    edi = MEM32(ebp + 0x18); /* 0x1214E864: mov edi, dword ptr [ebp + 0x18] */
L_1214E867:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214E867: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E879; /* 0x1214E86A: jae 0x1214e879 */
L_1214E86C:
    eax = MEM32(esi + 0x8); /* 0x1214E86C: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214E86F: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E873: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214E874: mov dword ptr [esi + 0x18], edx */
    goto L_1214E884; /* 0x1214E877: jmp 0x1214e884 */
L_1214E879:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214E882; /* 0x1214E879: je 0x1214e882 */
L_1214E87B:
    MEM32(esi + 0x4) = 1; /* 0x1214E87B: mov dword ptr [esi + 4], 1 */
L_1214E882:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E882: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E884:
    eax = (uint32_t)LO8(eax); /* 0x1214E884: movzx eax, al */
    ecx = ebx; /* 0x1214E887: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E889: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E889: shl eax, cl */
    ecx = MEM32(ebp + (-0x4)); /* 0x1214E88B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214E88E: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1214E891: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214E893: mov dword ptr [ebp - 4], ecx */
    /* cmp ebx, edi */ /* 0x1214E896: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E867; /* 0x1214E898: jb 0x1214e867 */
L_1214E89A:
    edx = MEM32(ebp + 0x18); /* 0x1214E89A: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + (-0xC)); /* 0x1214E89D: mov eax, dword ptr [ebp - 0xc] */
    goto L_1214E8A5; /* 0x1214E8A0: jmp 0x1214e8a5 */
L_1214E8A2:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214E8A2: mov ecx, dword ptr [ebp - 4] */
L_1214E8A5:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214E8A5: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E964; /* 0x1214E8A9: jne 0x1214e964 */
L_1214E8AF:
    edi = (uint32_t)MEM16(edx * 2 + 0x121D8524); /* 0x1214E8AF: movzx edi, word ptr [edx*2 + 0x121d8524] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x1214E8B7: movzx eax, word ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    edi = edi & ecx; /* 0x1214E8BB: and edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1214E8BD: add edi, eax */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x1214E8BF: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214E8C1: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x1214E8C1: shr dword ptr [ebp - 4], cl */
    ecx = MEM32(ebp + 0x10); /* 0x1214E8C4: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x1214E8C7: sub ebx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0xC); /* 0x1214E8C9: mov edx, dword ptr [esi + 0xc] */
    eax = edx; /* 0x1214E8CC: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0x10); /* 0x1214E8CE: sub eax, dword ptr [esi + 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1214E8D1: sub edx, edi */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x1214E8D3: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x8)); /* 0x1214E8D5: mov eax, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x1214E8D8: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1214E8DB: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214E8E6; /* 0x1214E8DE: jbe 0x1214e8e6 */
L_1214E8E0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x8000u; /* 0x1214E8E0: add edx, 0x8000 */
    _flag_k = FK_ADD;
L_1214E8E6:
    /* test eax, eax */ /* 0x1214E8E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214E604; /* 0x1214E8E8: je 0x1214e604 */
L_1214E8EE:
    ecx = MEM32(esi + 0xC); /* 0x1214E8EE: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214E8F1: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1214E8F2: mov dword ptr [ebp - 8], eax */
    SET_LO8(eax, MEM8(edx)); /* 0x1214E8F5: mov al, byte ptr [edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1214E8F7: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1; /* 0x1214E8F9: inc dword ptr [esi + 0xc] */
    _flag_k = FK_INC;
    ecx = MEM32(esi + 0x10); /* 0x1214E8FC: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E8FF: inc edx */
    _flag_k = FK_INC;
    eax = ecx + 0x8000; /* 0x1214E900: lea eax, [ecx + 0x8000] */
    /* cmp edx, eax */ /* 0x1214E906: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214E90C; /* 0x1214E908: jne 0x1214e90c */
L_1214E90A:
    edx = ecx; /* 0x1214E90A: mov edx, ecx */
L_1214E90C:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1; /* 0x1214E90C: dec dword ptr [esi + 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214E926; /* 0x1214E90F: je 0x1214e926 */
L_1214E911:
    eax = MEM32(ebp + (-0x8)); /* 0x1214E911: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1214E914: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214E8EE; /* 0x1214E916: jne 0x1214e8ee */
L_1214E918:
    ebx = MEM32(ebp + (-0xC)); /* 0x1214E918: mov ebx, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x4)); /* 0x1214E91B: mov edi, dword ptr [ebp - 4] */
L_1214E91E:
    ecx = MEM32(ebp + 0x10); /* 0x1214E91E: mov ecx, dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_1214E604; /* 0x1214E921: jmp 0x1214e604 */
L_1214E926:
    eax = MEM32(ebp + 0x8); /* 0x1214E926: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1214E929: mov ebx, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x4)); /* 0x1214E92C: mov edi, dword ptr [ebp - 4] */
    MEM32(esi + 0x38) = eax; /* 0x1214E92F: mov dword ptr [esi + 0x38], eax */
    eax = MEM32(ebp + 0xC); /* 0x1214E932: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x3C) = eax; /* 0x1214E935: mov dword ptr [esi + 0x3c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1214E938: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x40) = eax; /* 0x1214E93B: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ebp + 0x14); /* 0x1214E93E: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x44) = eax; /* 0x1214E941: mov dword ptr [esi + 0x44], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1214E944: mov eax, dword ptr [ebp - 8] */
    MEM16(esi + 0x48) = (uint16_t)(1); /* 0x1214E947: mov word ptr [esi + 0x48], 1 */
    MEM32(esi + 0x4C) = edx; /* 0x1214E94D: mov dword ptr [esi + 0x4c], edx */
    MEM32(esi + 0x50) = eax; /* 0x1214E950: mov dword ptr [esi + 0x50], eax */
L_1214E953:
    MEM32(esi + 0x2C) = 2; /* 0x1214E953: mov dword ptr [esi + 0x2c], 2 */
L_1214E95A:
    MEM32(esi + 0x24) = edi; /* 0x1214E95A: mov dword ptr [esi + 0x24], edi */
    MEM32(esi + 0x28) = ebx; /* 0x1214E95D: mov dword ptr [esi + 0x28], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E960: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214E967; /* 0x1214E962: jmp 0x1214e967 */
L_1214E964:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E964: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214E966: inc eax */
    _flag_k = FK_INC;
L_1214E967:
    edi = POP32_VAL(esp); /* 0x1214E967: pop edi */
    ebx = POP32_VAL(esp); /* 0x1214E968: pop ebx */
L_1214E969:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214E969: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1214E96A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1214E972(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214E972u);

L_1214E972:
    edi = edi; /* 0x1214E972: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214E974: push ebp */
    ebp = esp; /* 0x1214E975: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x514u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x514u; /* 0x1214E977: sub esp, 0x514 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214E97D: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1214E982: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1214E984: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1214E987: push ebx */
    PUSH32(esp, esi); /* 0x1214E988: push esi */
    esi = ecx; /* 0x1214E989: mov esi, ecx */
    ebx = MEM32(esi + 0x28); /* 0x1214E98B: mov ebx, dword ptr [esi + 0x28] */
    PUSH32(esp, edi); /* 0x1214E98E: push edi */
    edi = MEM32(esi + 0x24); /* 0x1214E98F: mov edi, dword ptr [esi + 0x24] */
    /* cmp ebx, 5 */ /* 0x1214E992: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E9C8; /* 0x1214E995: jae 0x1214e9c8 */
L_1214E997:
    edx = MEM32(esi + 0x18); /* 0x1214E997: mov edx, dword ptr [esi + 0x18] */
L_1214E99A:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214E99A: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E9AC; /* 0x1214E99D: jae 0x1214e9ac */
L_1214E99F:
    eax = MEM32(esi + 0x8); /* 0x1214E99F: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214E9A2: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E9A6: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214E9A7: mov dword ptr [esi + 0x18], edx */
    goto L_1214E9B7; /* 0x1214E9AA: jmp 0x1214e9b7 */
L_1214E9AC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214E9B5; /* 0x1214E9AC: je 0x1214e9b5 */
L_1214E9AE:
    MEM32(esi + 0x4) = 1; /* 0x1214E9AE: mov dword ptr [esi + 4], 1 */
L_1214E9B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214E9B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214E9B7:
    eax = (uint32_t)LO8(eax); /* 0x1214E9B7: movzx eax, al */
    ecx = ebx; /* 0x1214E9BA: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214E9BC: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214E9BC: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214E9BE: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214E9C1: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 5 */ /* 0x1214E9C3: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E99A; /* 0x1214E9C6: jb 0x1214e99a */
L_1214E9C8:
    eax = edi; /* 0x1214E9C8: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1214E9CA: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x101u; /* 0x1214E9CD: add eax, 0x101 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 5; /* 0x1214E9D2: sub ebx, 5 */
    _flag_k = FK_CMP;
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x1214E9D5: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x1214E9D5: shr edi, 5 */
    MEM32(ebp + (-0x4F8)) = eax; /* 0x1214E9D8: mov dword ptr [ebp - 0x4f8], eax */
    /* cmp ebx, 5 */ /* 0x1214E9DE: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EA14; /* 0x1214E9E1: jae 0x1214ea14 */
L_1214E9E3:
    edx = MEM32(esi + 0x18); /* 0x1214E9E3: mov edx, dword ptr [esi + 0x18] */
L_1214E9E6:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214E9E6: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214E9F8; /* 0x1214E9E9: jae 0x1214e9f8 */
L_1214E9EB:
    eax = MEM32(esi + 0x8); /* 0x1214E9EB: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214E9EE: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214E9F2: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214E9F3: mov dword ptr [esi + 0x18], edx */
    goto L_1214EA03; /* 0x1214E9F6: jmp 0x1214ea03 */
L_1214E9F8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214EA01; /* 0x1214E9F8: je 0x1214ea01 */
L_1214E9FA:
    MEM32(esi + 0x4) = 1; /* 0x1214E9FA: mov dword ptr [esi + 4], 1 */
L_1214EA01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214EA01: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214EA03:
    eax = (uint32_t)LO8(eax); /* 0x1214EA03: movzx eax, al */
    ecx = ebx; /* 0x1214EA06: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214EA08: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214EA08: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214EA0A: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214EA0D: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 5 */ /* 0x1214EA0F: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214E9E6; /* 0x1214EA12: jb 0x1214e9e6 */
L_1214EA14:
    edx = edi; /* 0x1214EA14: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x1214EA16: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214EA19: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 5; /* 0x1214EA1A: sub ebx, 5 */
    _flag_k = FK_CMP;
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x1214EA1D: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x1214EA1D: shr edi, 5 */
    MEM32(ebp + (-0x510)) = edx; /* 0x1214EA20: mov dword ptr [ebp - 0x510], edx */
    /* cmp ebx, 4 */ /* 0x1214EA26: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EA62; /* 0x1214EA29: jae 0x1214ea62 */
L_1214EA2B:
    edx = MEM32(esi + 0x18); /* 0x1214EA2B: mov edx, dword ptr [esi + 0x18] */
L_1214EA2E:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214EA2E: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EA40; /* 0x1214EA31: jae 0x1214ea40 */
L_1214EA33:
    eax = MEM32(esi + 0x8); /* 0x1214EA33: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214EA36: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214EA3A: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214EA3B: mov dword ptr [esi + 0x18], edx */
    goto L_1214EA4B; /* 0x1214EA3E: jmp 0x1214ea4b */
L_1214EA40:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214EA49; /* 0x1214EA40: je 0x1214ea49 */
L_1214EA42:
    MEM32(esi + 0x4) = 1; /* 0x1214EA42: mov dword ptr [esi + 4], 1 */
L_1214EA49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214EA49: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214EA4B:
    eax = (uint32_t)LO8(eax); /* 0x1214EA4B: movzx eax, al */
    ecx = ebx; /* 0x1214EA4E: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214EA50: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214EA50: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214EA52: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214EA55: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 4 */ /* 0x1214EA57: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214EA2E; /* 0x1214EA5A: jb 0x1214ea2e */
L_1214EA5C:
    edx = MEM32(ebp + (-0x510)); /* 0x1214EA5C: mov edx, dword ptr [ebp - 0x510] */
L_1214EA62:
    eax = edi; /* 0x1214EA62: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1214EA64: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1214EA67: add eax, 4 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x1214EA6A: shr edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 4u; /* 0x1214EA6A: shr edi, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x1214EA6D: sub ebx, 4 */
    _flag_k = FK_CMP;
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214EA70: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x508)) = eax; /* 0x1214EA74: mov dword ptr [ebp - 0x508], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214EE6B; /* 0x1214EA7A: jne 0x1214ee6b */
L_1214EA80:
    /* cmp MEM32(ebp + (-0x4F8)), 0x11Eu */ /* 0x1214EA80: cmp dword ptr [ebp - 0x4f8], 0x11e */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4F8))); _flag_b = (uint32_t)(0x11Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214EE6B; /* 0x1214EA8A: ja 0x1214ee6b */
L_1214EA90:
    /* cmp edx, 0x1Eu */ /* 0x1214EA90: cmp edx, 0x1e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214EE6B; /* 0x1214EA93: ja 0x1214ee6b */
L_1214EA99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214EA99: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x500)) = edx; /* 0x1214EA9B: mov dword ptr [ebp - 0x500], edx */
    /* test eax, eax */ /* 0x1214EAA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214EB0B; /* 0x1214EAA3: je 0x1214eb0b */
L_1214EAA5:
    /* cmp ebx, 3 */ /* 0x1214EAA5: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EAE1; /* 0x1214EAA8: jae 0x1214eae1 */
L_1214EAAA:
    edx = MEM32(esi + 0x18); /* 0x1214EAAA: mov edx, dword ptr [esi + 0x18] */
L_1214EAAD:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214EAAD: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EABF; /* 0x1214EAB0: jae 0x1214eabf */
L_1214EAB2:
    eax = MEM32(esi + 0x8); /* 0x1214EAB2: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214EAB5: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214EAB9: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214EABA: mov dword ptr [esi + 0x18], edx */
    goto L_1214EACA; /* 0x1214EABD: jmp 0x1214eaca */
L_1214EABF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214EAC8; /* 0x1214EABF: je 0x1214eac8 */
L_1214EAC1:
    MEM32(esi + 0x4) = 1; /* 0x1214EAC1: mov dword ptr [esi + 4], 1 */
L_1214EAC8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214EAC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214EACA:
    eax = (uint32_t)LO8(eax); /* 0x1214EACA: movzx eax, al */
    ecx = ebx; /* 0x1214EACD: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214EACF: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214EACF: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214EAD1: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214EAD4: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 3 */ /* 0x1214EAD6: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214EAAD; /* 0x1214EAD9: jb 0x1214eaad */
L_1214EADB:
    edx = MEM32(ebp + (-0x500)); /* 0x1214EADB: mov edx, dword ptr [ebp - 0x500] */
L_1214EAE1:
    eax = MEM32(edx * 4 + 0x121D83E0); /* 0x1214EAE1: mov eax, dword ptr [edx*4 + 0x121d83e0] */
    ecx = edi; /* 0x1214EAE8: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1214EAEA: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edi) >> 2) & 1u); /* 0x1214EAED: shr edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 3u; /* 0x1214EAED: shr edi, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 3; /* 0x1214EAF0: sub ebx, 3 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214EAF3: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + eax * 4 + (-0x4F4)) = ecx; /* 0x1214EAF4: mov dword ptr [ebp + eax*4 - 0x4f4], ecx */
    MEM32(ebp + (-0x500)) = edx; /* 0x1214EAFB: mov dword ptr [ebp - 0x500], edx */
    /* cmp edx, MEM32(ebp + (-0x508)) */ /* 0x1214EB01: cmp edx, dword ptr [ebp - 0x508] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x508)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214EAA5; /* 0x1214EB07: jb 0x1214eaa5 */
L_1214EB09:
    goto L_1214EB1B; /* 0x1214EB09: jmp 0x1214eb1b */
L_1214EB0B:
    eax = MEM32(edx * 4 + 0x121D83E0); /* 0x1214EB0B: mov eax, dword ptr [edx*4 + 0x121d83e0] */
    _flag_a = (uint32_t)(MEM32(ebp + eax * 4 + (-0x4F4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + eax * 4 + (-0x4F4)) = MEM32(ebp + eax * 4 + (-0x4F4)) & 0; /* 0x1214EB12: and dword ptr [ebp + eax*4 - 0x4f4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214EB1A: inc edx */
    _flag_k = FK_INC;
L_1214EB1B:
    /* cmp edx, 0x13u */ /* 0x1214EB1B: cmp edx, 0x13 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214EB0B; /* 0x1214EB1E: jb 0x1214eb0b */
L_1214EB20:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214EB20: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214EE6B; /* 0x1214EB24: jne 0x1214ee6b */
L_1214EB2A:
    ecx = ebp + (-0x504); /* 0x1214EB2A: lea ecx, [ebp - 0x504] */
    PUSH32(esp, ecx); /* 0x1214EB30: push ecx */
    PUSH32(esp, 0x320u); /* 0x1214EB31: push 0x320 */
    eax = esi + 0x54; /* 0x1214EB36: lea eax, [esi + 0x54] */
    PUSH32(esp, eax); /* 0x1214EB39: push eax */
    PUSH32(esp, 0); /* 0x1214EB3A: push 0 */
    PUSH32(esp, 0); /* 0x1214EB3C: push 0 */
    PUSH32(esp, 0x13u); /* 0x1214EB3E: push 0x13 */
    PUSH32(esp, 0x13u); /* 0x1214EB40: push 0x13 */
    edx = POP32_VAL(esp); /* 0x1214EB42: pop edx */
    ecx = ebp + (-0x4F4); /* 0x1214EB43: lea ecx, [ebp - 0x4f4] */
    MEM32(ebp + (-0x504)) = 7; /* 0x1214EB49: mov dword ptr [ebp - 0x504], 7 */
    RECOMP_CALL(sub_1214E0BC); /* 0x1214EB53: call 0x1214e0bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214EB58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214EE6E; /* 0x1214EB5A: jne 0x1214ee6e */
L_1214EB60:
    edx = MEM32(ebp + (-0x504)); /* 0x1214EB60: mov edx, dword ptr [ebp - 0x504] */
    /* test edx, edx */ /* 0x1214EB66: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1214EE6B; /* 0x1214EB68: jle 0x1214ee6b */
L_1214EB6E:
    edx = (uint32_t)MEM16(edx * 2 + 0x121D8524); /* 0x1214EB6E: movzx edx, word ptr [edx*2 + 0x121d8524] */
    eax = MEM32(ebp + (-0x4F8)); /* 0x1214EB76: mov eax, dword ptr [ebp - 0x4f8] */
    ecx = MEM32(ebp + (-0x510)); /* 0x1214EB7C: mov ecx, dword ptr [ebp - 0x510] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x508))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x508)) = MEM32(ebp + (-0x508)) & 0; /* 0x1214EB82: and dword ptr [ebp - 0x508], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1214EB89: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x514)) = edx; /* 0x1214EB8B: mov dword ptr [ebp - 0x514], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214EB91: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x500)) = ecx; /* 0x1214EB93: mov dword ptr [ebp - 0x500], ecx */
    MEM32(ebp + (-0x4FC)) = edx; /* 0x1214EB99: mov dword ptr [ebp - 0x4fc], edx */
    /* test ecx, ecx */ /* 0x1214EB9F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214EDC6; /* 0x1214EBA1: je 0x1214edc6 */
L_1214EBA7:
    /* cmp ebx, MEM32(ebp + (-0x504)) */ /* 0x1214EBA7: cmp ebx, dword ptr [ebp - 0x504] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x504)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EBE9; /* 0x1214EBAD: jae 0x1214ebe9 */
L_1214EBAF:
    edx = MEM32(esi + 0x18); /* 0x1214EBAF: mov edx, dword ptr [esi + 0x18] */
L_1214EBB2:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214EBB2: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EBC4; /* 0x1214EBB5: jae 0x1214ebc4 */
L_1214EBB7:
    eax = MEM32(esi + 0x8); /* 0x1214EBB7: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214EBBA: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214EBBE: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214EBBF: mov dword ptr [esi + 0x18], edx */
    goto L_1214EBCF; /* 0x1214EBC2: jmp 0x1214ebcf */
L_1214EBC4:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214EBCD; /* 0x1214EBC4: je 0x1214ebcd */
L_1214EBC6:
    MEM32(esi + 0x4) = 1; /* 0x1214EBC6: mov dword ptr [esi + 4], 1 */
L_1214EBCD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214EBCD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214EBCF:
    eax = (uint32_t)LO8(eax); /* 0x1214EBCF: movzx eax, al */
    ecx = ebx; /* 0x1214EBD2: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214EBD4: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214EBD4: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214EBD6: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214EBD9: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, MEM32(ebp + (-0x504)) */ /* 0x1214EBDB: cmp ebx, dword ptr [ebp - 0x504] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x504)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214EBB2; /* 0x1214EBE1: jb 0x1214ebb2 */
L_1214EBE3:
    edx = MEM32(ebp + (-0x4FC)); /* 0x1214EBE3: mov edx, dword ptr [ebp - 0x4fc] */
L_1214EBE9:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214EBE9: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214EDC0; /* 0x1214EBED: jne 0x1214edc0 */
L_1214EBF3:
    eax = MEM32(ebp + (-0x514)); /* 0x1214EBF3: mov eax, dword ptr [ebp - 0x514] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1214EBF9: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM8(esi + eax * 8 + 0x55); /* 0x1214EBFB: movzx ecx, byte ptr [esi + eax*8 + 0x55] */
    eax = (uint32_t)MEM16(esi + eax * 8 + 0x58); /* 0x1214EC00: movzx eax, word ptr [esi + eax*8 + 0x58] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214EC05: shr edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> ((LO8(ecx)) & 31); /* 0x1214EC05: shr edi, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1214EC07: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50C)) = edi; /* 0x1214EC09: mov dword ptr [ebp - 0x50c], edi */
    /* cmp eax, 0x10u */ /* 0x1214EC0F: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EC27; /* 0x1214EC12: jae 0x1214ec27 */
L_1214EC14:
    MEM32(ebp + edx * 4 + (-0x4F4)) = eax; /* 0x1214EC14: mov dword ptr [ebp + edx*4 - 0x4f4], eax */
    MEM32(ebp + (-0x508)) = eax; /* 0x1214EC1B: mov dword ptr [ebp - 0x508], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214EC21: inc edx */
    _flag_k = FK_INC;
    goto L_1214ECAD; /* 0x1214EC22: jmp 0x1214ecad */
L_1214EC27:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1214ECB8; /* 0x1214EC27: jne 0x1214ecb8 */
L_1214EC2D:
    /* cmp ebx, 2 */ /* 0x1214EC2D: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EC63; /* 0x1214EC30: jae 0x1214ec63 */
L_1214EC32:
    edx = MEM32(esi + 0x18); /* 0x1214EC32: mov edx, dword ptr [esi + 0x18] */
L_1214EC35:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214EC35: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EC47; /* 0x1214EC38: jae 0x1214ec47 */
L_1214EC3A:
    eax = MEM32(esi + 0x8); /* 0x1214EC3A: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214EC3D: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214EC41: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214EC42: mov dword ptr [esi + 0x18], edx */
    goto L_1214EC52; /* 0x1214EC45: jmp 0x1214ec52 */
L_1214EC47:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214EC50; /* 0x1214EC47: je 0x1214ec50 */
L_1214EC49:
    MEM32(esi + 0x4) = 1; /* 0x1214EC49: mov dword ptr [esi + 4], 1 */
L_1214EC50:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214EC50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214EC52:
    eax = (uint32_t)LO8(eax); /* 0x1214EC52: movzx eax, al */
    ecx = ebx; /* 0x1214EC55: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214EC57: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214EC57: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214EC59: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214EC5C: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 2 */ /* 0x1214EC5E: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214EC35; /* 0x1214EC61: jb 0x1214ec35 */
L_1214EC63:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214EC63: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214EDC0; /* 0x1214EC67: jne 0x1214edc0 */
L_1214EC6D:
    eax = MEM32(ebp + (-0x4FC)); /* 0x1214EC6D: mov eax, dword ptr [ebp - 0x4fc] */
    ecx = edi; /* 0x1214EC73: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1214EC75: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1214EC78: add ecx, 3 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x1214EC7B: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x1214EC7B: shr edi, 2 */
    edx = eax + ecx; /* 0x1214EC7E: lea edx, [eax + ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 2; /* 0x1214EC81: sub ebx, 2 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50C)) = edi; /* 0x1214EC84: mov dword ptr [ebp - 0x50c], edi */
    /* cmp edx, MEM32(ebp + (-0x500)) */ /* 0x1214EC8A: cmp edx, dword ptr [ebp - 0x500] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x500)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214EDB9; /* 0x1214EC90: ja 0x1214edb9 */
L_1214EC96:
    /* test ecx, ecx */ /* 0x1214EC96: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214EDA0; /* 0x1214EC98: je 0x1214eda0 */
L_1214EC9E:
    edi = ebp + eax * 4 + (-0x4F4); /* 0x1214EC9E: lea edi, [ebp + eax*4 - 0x4f4] */
    eax = MEM32(ebp + (-0x508)); /* 0x1214ECA5: mov eax, dword ptr [ebp - 0x508] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214ECAB: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1214ECAD:
    MEM32(ebp + (-0x4FC)) = edx; /* 0x1214ECAD: mov dword ptr [ebp - 0x4fc], edx */
    goto L_1214EDA6; /* 0x1214ECB3: jmp 0x1214eda6 */
L_1214ECB8:
    /* cmp eax, 0x11u */ /* 0x1214ECB8: cmp eax, 0x11 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214ED51; /* 0x1214ECBB: jne 0x1214ed51 */
L_1214ECC1:
    /* cmp ebx, 3 */ /* 0x1214ECC1: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214ECF7; /* 0x1214ECC4: jae 0x1214ecf7 */
L_1214ECC6:
    edx = MEM32(esi + 0x18); /* 0x1214ECC6: mov edx, dword ptr [esi + 0x18] */
L_1214ECC9:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214ECC9: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214ECDB; /* 0x1214ECCC: jae 0x1214ecdb */
L_1214ECCE:
    eax = MEM32(esi + 0x8); /* 0x1214ECCE: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214ECD1: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214ECD5: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214ECD6: mov dword ptr [esi + 0x18], edx */
    goto L_1214ECE6; /* 0x1214ECD9: jmp 0x1214ece6 */
L_1214ECDB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214ECE4; /* 0x1214ECDB: je 0x1214ece4 */
L_1214ECDD:
    MEM32(esi + 0x4) = 1; /* 0x1214ECDD: mov dword ptr [esi + 4], 1 */
L_1214ECE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214ECE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214ECE6:
    eax = (uint32_t)LO8(eax); /* 0x1214ECE6: movzx eax, al */
    ecx = ebx; /* 0x1214ECE9: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214ECEB: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214ECEB: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214ECED: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214ECF0: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 3 */ /* 0x1214ECF2: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214ECC9; /* 0x1214ECF5: jb 0x1214ecc9 */
L_1214ECF7:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214ECF7: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214EDC0; /* 0x1214ECFB: jne 0x1214edc0 */
L_1214ED01:
    ecx = edi; /* 0x1214ED01: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1214ED03: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1214ED06: add ecx, 3 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edi) >> 2) & 1u); /* 0x1214ED09: shr edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 3u; /* 0x1214ED09: shr edi, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 3; /* 0x1214ED0C: sub ebx, 3 */
    _flag_k = FK_CMP;
L_1214ED0F:
    eax = MEM32(ebp + (-0x4FC)); /* 0x1214ED0F: mov eax, dword ptr [ebp - 0x4fc] */
    edx = eax + ecx; /* 0x1214ED15: lea edx, [eax + ecx] */
    MEM32(ebp + (-0x50C)) = edi; /* 0x1214ED18: mov dword ptr [ebp - 0x50c], edi */
    /* cmp edx, MEM32(ebp + (-0x500)) */ /* 0x1214ED1E: cmp edx, dword ptr [ebp - 0x500] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x500)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214EDB9; /* 0x1214ED24: ja 0x1214edb9 */
L_1214ED2A:
    /* test ecx, ecx */ /* 0x1214ED2A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214ED41; /* 0x1214ED2C: je 0x1214ed41 */
L_1214ED2E:
    edi = ebp + eax * 4 + (-0x4F4); /* 0x1214ED2E: lea edi, [ebp + eax*4 - 0x4f4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214ED35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214ED37: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    MEM32(ebp + (-0x4FC)) = edx; /* 0x1214ED39: mov dword ptr [ebp - 0x4fc], edx */
    goto L_1214ED47; /* 0x1214ED3F: jmp 0x1214ed47 */
L_1214ED41:
    edx = MEM32(ebp + (-0x4FC)); /* 0x1214ED41: mov edx, dword ptr [ebp - 0x4fc] */
L_1214ED47:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214ED47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x508)) = eax; /* 0x1214ED49: mov dword ptr [ebp - 0x508], eax */
    goto L_1214EDA6; /* 0x1214ED4F: jmp 0x1214eda6 */
L_1214ED51:
    /* cmp ebx, 7 */ /* 0x1214ED51: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214ED87; /* 0x1214ED54: jae 0x1214ed87 */
L_1214ED56:
    edx = MEM32(esi + 0x18); /* 0x1214ED56: mov edx, dword ptr [esi + 0x18] */
L_1214ED59:
    /* cmp edx, MEM32(esi + 0x14) */ /* 0x1214ED59: cmp edx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214ED6B; /* 0x1214ED5C: jae 0x1214ed6b */
L_1214ED5E:
    eax = MEM32(esi + 0x8); /* 0x1214ED5E: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edx); /* 0x1214ED61: movzx eax, byte ptr [eax + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1214ED65: inc edx */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edx; /* 0x1214ED66: mov dword ptr [esi + 0x18], edx */
    goto L_1214ED76; /* 0x1214ED69: jmp 0x1214ed76 */
L_1214ED6B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214ED74; /* 0x1214ED6B: je 0x1214ed74 */
L_1214ED6D:
    MEM32(esi + 0x4) = 1; /* 0x1214ED6D: mov dword ptr [esi + 4], 1 */
L_1214ED74:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214ED74: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214ED76:
    eax = (uint32_t)LO8(eax); /* 0x1214ED76: movzx eax, al */
    ecx = ebx; /* 0x1214ED79: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214ED7B: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214ED7B: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214ED7D: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x1214ED80: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 7 */ /* 0x1214ED82: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214ED59; /* 0x1214ED85: jb 0x1214ed59 */
L_1214ED87:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214ED87: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214EDC0; /* 0x1214ED8B: jne 0x1214edc0 */
L_1214ED8D:
    ecx = edi; /* 0x1214ED8D: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    ecx = ecx & 0x7Fu; /* 0x1214ED8F: and ecx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xBu; /* 0x1214ED92: add ecx, 0xb */
    _flag_k = FK_ADD;
    if (7u) _cf = (((edi) >> 6) & 1u); /* 0x1214ED95: shr edi, 7 */
    if (7u) { _flag_a = recomp_flags_pack((edi >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 7u; /* 0x1214ED95: shr edi, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 7; /* 0x1214ED98: sub ebx, 7 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1214ED0F; /* 0x1214ED9B: jmp 0x1214ed0f */
L_1214EDA0:
    edx = MEM32(ebp + (-0x4FC)); /* 0x1214EDA0: mov edx, dword ptr [ebp - 0x4fc] */
L_1214EDA6:
    edi = MEM32(ebp + (-0x50C)); /* 0x1214EDA6: mov edi, dword ptr [ebp - 0x50c] */
    /* cmp edx, MEM32(ebp + (-0x500)) */ /* 0x1214EDAC: cmp edx, dword ptr [ebp - 0x500] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x500)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EDC0; /* 0x1214EDB2: jae 0x1214edc0 */
L_1214EDB4:
    RECOMP_BACKEDGE();
    goto L_1214EBA7; /* 0x1214EDB4: jmp 0x1214eba7 */
L_1214EDB9:
    MEM32(esi + 0x4) = 2; /* 0x1214EDB9: mov dword ptr [esi + 4], 2 */
L_1214EDC0:
    eax = MEM32(ebp + (-0x4F8)); /* 0x1214EDC0: mov eax, dword ptr [ebp - 0x4f8] */
L_1214EDC6:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1214EDC6: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214EE6B; /* 0x1214EDCA: jne 0x1214ee6b */
L_1214EDD0:
    ecx = ebp + (-0x504); /* 0x1214EDD0: lea ecx, [ebp - 0x504] */
    PUSH32(esp, ecx); /* 0x1214EDD6: push ecx */
    PUSH32(esp, 0x320u); /* 0x1214EDD7: push 0x320 */
    MEM32(esi + 0x28) = ebx; /* 0x1214EDDC: mov dword ptr [esi + 0x28], ebx */
    ebx = esi + 0x54; /* 0x1214EDDF: lea ebx, [esi + 0x54] */
    PUSH32(esp, ebx); /* 0x1214EDE2: push ebx */
    PUSH32(esp, 0x121D846Cu); /* 0x1214EDE3: push 0x121d846c */
    PUSH32(esp, 0x121D842Cu); /* 0x1214EDE8: push 0x121d842c */
    PUSH32(esp, 0x101u); /* 0x1214EDED: push 0x101 */
    edx = eax; /* 0x1214EDF2: mov edx, eax */
    ecx = ebp + (-0x4F4); /* 0x1214EDF4: lea ecx, [ebp - 0x4f4] */
    MEM32(esi + 0x24) = edi; /* 0x1214EDFA: mov dword ptr [esi + 0x24], edi */
    MEM32(ebp + (-0x504)) = 9; /* 0x1214EDFD: mov dword ptr [ebp - 0x504], 9 */
    RECOMP_CALL(sub_1214E0BC); /* 0x1214EE07: call 0x1214e0bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214EE0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214EE6E; /* 0x1214EE0E: jne 0x1214ee6e */
L_1214EE10:
    ecx = MEM32(ebp + (-0x4F8)); /* 0x1214EE10: mov ecx, dword ptr [ebp - 0x4f8] */
    edx = MEM32(ebp + (-0x510)); /* 0x1214EE16: mov edx, dword ptr [ebp - 0x510] */
    eax = ebp + (-0x500); /* 0x1214EE1C: lea eax, [ebp - 0x500] */
    PUSH32(esp, eax); /* 0x1214EE22: push eax */
    PUSH32(esp, 0x96u); /* 0x1214EE23: push 0x96 */
    edi = esi + 0x1954; /* 0x1214EE28: lea edi, [esi + 0x1954] */
    PUSH32(esp, edi); /* 0x1214EE2E: push edi */
    PUSH32(esp, 0x121D84E8u); /* 0x1214EE2F: push 0x121d84e8 */
    PUSH32(esp, 0x121D84ACu); /* 0x1214EE34: push 0x121d84ac */
    PUSH32(esp, 0); /* 0x1214EE39: push 0 */
    ecx = ebp + ecx * 4 + (-0x4F4); /* 0x1214EE3B: lea ecx, [ebp + ecx*4 - 0x4f4] */
    MEM32(ebp + (-0x500)) = 6; /* 0x1214EE42: mov dword ptr [ebp - 0x500], 6 */
    RECOMP_CALL(sub_1214E0BC); /* 0x1214EE4C: call 0x1214e0bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214EE51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214EE6E; /* 0x1214EE53: jne 0x1214ee6e */
L_1214EE55:
    PUSH32(esp, eax); /* 0x1214EE55: push eax */
    PUSH32(esp, MEM32(ebp + (-0x500))); /* 0x1214EE56: push dword ptr [ebp - 0x500] */
    PUSH32(esp, MEM32(ebp + (-0x504))); /* 0x1214EE5C: push dword ptr [ebp - 0x504] */
    PUSH32(esp, edi); /* 0x1214EE62: push edi */
    PUSH32(esp, ebx); /* 0x1214EE63: push ebx */
    RECOMP_CALL(sub_1214E5AD); /* 0x1214EE64: call 0x1214e5ad */
    RECOMP_FLAGS_IN();
    goto L_1214EE6E; /* 0x1214EE69: jmp 0x1214ee6e */
L_1214EE6B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214EE6B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214EE6D: inc eax */
    _flag_k = FK_INC;
L_1214EE6E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214EE6E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1214EE71: pop edi */
    esi = POP32_VAL(esp); /* 0x1214EE72: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1214EE73: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1214EE75: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1214EE76: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214EE7B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214EE7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214EE82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214EE82u);

L_1214EE82:
    edi = edi; /* 0x1214EE82: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214EE84: push ebp */
    ebp = esp; /* 0x1214EE85: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x488u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x488u; /* 0x1214EE87: sub esp, 0x488 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214EE8D: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1214EE92: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1214EE94: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x1214EE97: push edi */
    PUSH32(esp, 8); /* 0x1214EE98: push 8 */
    eax = POP32_VAL(esp); /* 0x1214EE9A: pop eax */
    PUSH32(esp, 0x70u); /* 0x1214EE9B: push 0x70 */
    ecx = 0x90u; /* 0x1214EE9D: mov ecx, 0x90 */
    edi = ebp + (-0x484); /* 0x1214EEA2: lea edi, [ebp - 0x484] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214EEA8: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = POP32_VAL(esp); /* 0x1214EEAA: pop ecx */
    PUSH32(esp, 9); /* 0x1214EEAB: push 9 */
    edx = POP32_VAL(esp); /* 0x1214EEAD: pop edx */
    PUSH32(esp, 0x18u); /* 0x1214EEAE: push 0x18 */
    eax = edx; /* 0x1214EEB0: mov eax, edx */
    edi = ebp + (-0x244); /* 0x1214EEB2: lea edi, [ebp - 0x244] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214EEB8: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = POP32_VAL(esp); /* 0x1214EEBA: pop ecx */
    PUSH32(esp, 7); /* 0x1214EEBB: push 7 */
    eax = POP32_VAL(esp); /* 0x1214EEBD: pop eax */
    PUSH32(esp, 8); /* 0x1214EEBE: push 8 */
    edi = ebp + (-0x84); /* 0x1214EEC0: lea edi, [ebp - 0x84] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214EEC6: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = POP32_VAL(esp); /* 0x1214EEC8: pop ecx */
    PUSH32(esp, ecx); /* 0x1214EEC9: push ecx */
    eax = POP32_VAL(esp); /* 0x1214EECA: pop eax */
    edi = ebp + (-0x24); /* 0x1214EECB: lea edi, [ebp - 0x24] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214EECE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = ebp + (-0x488); /* 0x1214EED0: lea eax, [ebp - 0x488] */
    PUSH32(esp, eax); /* 0x1214EED6: push eax */
    PUSH32(esp, 0x208u); /* 0x1214EED7: push 0x208 */
    PUSH32(esp, 0x121EDA28u); /* 0x1214EEDC: push 0x121eda28 */
    PUSH32(esp, 0x121D846Cu); /* 0x1214EEE1: push 0x121d846c */
    PUSH32(esp, 0x121D842Cu); /* 0x1214EEE6: push 0x121d842c */
    MEM32(ebp + (-0x488)) = edx; /* 0x1214EEEB: mov dword ptr [ebp - 0x488], edx */
    PUSH32(esp, 0x101u); /* 0x1214EEF1: push 0x101 */
    edx = 0x120u; /* 0x1214EEF6: mov edx, 0x120 */
    ecx = ebp + (-0x484); /* 0x1214EEFB: lea ecx, [ebp - 0x484] */
    RECOMP_CALL(sub_1214E0BC); /* 0x1214EF01: call 0x1214e0bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214EF06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214EF4C; /* 0x1214EF08: jne 0x1214ef4c */
L_1214EF0A:
    PUSH32(esp, 0x1Eu); /* 0x1214EF0A: push 0x1e */
    edx = POP32_VAL(esp); /* 0x1214EF0C: pop edx */
    PUSH32(esp, 5); /* 0x1214EF0D: push 5 */
    eax = POP32_VAL(esp); /* 0x1214EF0F: pop eax */
    ecx = edx; /* 0x1214EF10: mov ecx, edx */
    edi = ebp + (-0x484); /* 0x1214EF12: lea edi, [ebp - 0x484] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1214EF18: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    MEM32(ebp + (-0x488)) = eax; /* 0x1214EF1A: mov dword ptr [ebp - 0x488], eax */
    eax = ebp + (-0x488); /* 0x1214EF20: lea eax, [ebp - 0x488] */
    PUSH32(esp, eax); /* 0x1214EF26: push eax */
    PUSH32(esp, 0x20u); /* 0x1214EF27: push 0x20 */
    PUSH32(esp, 0x121ED928u); /* 0x1214EF29: push 0x121ed928 */
    PUSH32(esp, 0x121D84E8u); /* 0x1214EF2E: push 0x121d84e8 */
    PUSH32(esp, 0x121D84ACu); /* 0x1214EF33: push 0x121d84ac */
    PUSH32(esp, 0); /* 0x1214EF38: push 0 */
    ecx = ebp + (-0x484); /* 0x1214EF3A: lea ecx, [ebp - 0x484] */
    RECOMP_CALL(sub_1214E0BC); /* 0x1214EF40: call 0x1214e0bc */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x1214EF45: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1214EF4C; /* 0x1214EF48: jg 0x1214ef4c */
L_1214EF4A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214EF4A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214EF4C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1214EF4C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1214EF4F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1214EF51: pop edi */
    RECOMP_CALL(sub_121BECF5); /* 0x1214EF52: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214EF57: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214EF58: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214EF5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214EF5Eu);

L_1214EF5E:
    edi = edi; /* 0x1214EF5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214EF60: push ebp */
    ebp = esp; /* 0x1214EF61: mov ebp, esp */
    /* cmp MEM16(ebp + 0x8), 0 */ /* 0x1214EF63: cmp word ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, ebx); /* 0x1214EF68: push ebx */
    PUSH32(esp, esi); /* 0x1214EF69: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214EF78; /* 0x1214EF6A: je 0x1214ef78 */
L_1214EF6C:
    ecx = MEM32(edi + 0x34); /* 0x1214EF6C: mov ecx, dword ptr [edi + 0x34] */
    ebx = MEM32(edi + 0x30); /* 0x1214EF6F: mov ebx, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) & 0; /* 0x1214EF72: and dword ptr [edi + 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214EFE0; /* 0x1214EF76: jmp 0x1214efe0 */
L_1214EF78:
    edx = MEM32(edi + 0x28); /* 0x1214EF78: mov edx, dword ptr [edi + 0x28] */
    ebx = MEM32(edi + 0x24); /* 0x1214EF7B: mov ebx, dword ptr [edi + 0x24] */
    ecx = edx; /* 0x1214EF7E: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1214EF80: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1214EF83: sub edx, ecx */
    _flag_k = FK_CMP;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1214EF85: shr ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> ((LO8(ecx)) & 31); /* 0x1214EF85: shr ebx, cl */
    /* cmp edx, 0x10u */ /* 0x1214EF87: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EFBD; /* 0x1214EF8A: jae 0x1214efbd */
L_1214EF8C:
    esi = MEM32(edi + 0x18); /* 0x1214EF8C: mov esi, dword ptr [edi + 0x18] */
L_1214EF8F:
    /* cmp esi, MEM32(edi + 0x14) */ /* 0x1214EF8F: cmp esi, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214EFA1; /* 0x1214EF92: jae 0x1214efa1 */
L_1214EF94:
    eax = MEM32(edi + 0x8); /* 0x1214EF94: mov eax, dword ptr [edi + 8] */
    eax = (uint32_t)MEM8(eax + esi); /* 0x1214EF97: movzx eax, byte ptr [eax + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1214EF9B: inc esi */
    _flag_k = FK_INC;
    MEM32(edi + 0x18) = esi; /* 0x1214EF9C: mov dword ptr [edi + 0x18], esi */
    goto L_1214EFAC; /* 0x1214EF9F: jmp 0x1214efac */
L_1214EFA1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214EFAA; /* 0x1214EFA1: je 0x1214efaa */
L_1214EFA3:
    MEM32(edi + 0x4) = 1; /* 0x1214EFA3: mov dword ptr [edi + 4], 1 */
L_1214EFAA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214EFAA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214EFAC:
    eax = (uint32_t)LO8(eax); /* 0x1214EFAC: movzx eax, al */
    ecx = edx; /* 0x1214EFAF: mov ecx, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214EFB1: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214EFB1: shl eax, cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1214EFB3: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x1214EFB6: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0x10u */ /* 0x1214EFB8: cmp edx, 0x10 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214EF8F; /* 0x1214EFBB: jb 0x1214ef8f */
L_1214EFBD:
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x1214EFBD: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = (uint32_t)LO16(ebx); /* 0x1214EFC1: movzx ebx, bx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F02E; /* 0x1214EFC4: jne 0x1214f02e */
L_1214EFC6:
    eax = edx + (-0x10); /* 0x1214EFC6: lea eax, [edx - 0x10] */
    /* test eax, eax */ /* 0x1214EFC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214F02E; /* 0x1214EFCB: jne 0x1214f02e */
L_1214EFCD:
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(eax);
    MEM32(edi + 0x28) = MEM32(edi + 0x28) & eax; /* 0x1214EFCD: and dword ptr [edi + 0x28], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(eax);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) & eax; /* 0x1214EFD0: and dword ptr [edi + 0x24], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x18); /* 0x1214EFD3: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(edi + 0x8); /* 0x1214EFD6: mov ecx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1214EFD9: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1214EFDB: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x1214EFDD: mov dword ptr [edi + 0x18], eax */
L_1214EFE0:
    eax = MEM32(edi + 0x1C); /* 0x1214EFE0: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ebp + 0x8) = ecx; /* 0x1214EFE3: mov dword ptr [ebp + 8], ecx */
    /* cmp ebx, eax */ /* 0x1214EFE6: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214F001; /* 0x1214EFE8: ja 0x1214f001 */
L_1214EFEA:
    PUSH32(esp, ebx); /* 0x1214EFEA: push ebx */
    PUSH32(esp, ecx); /* 0x1214EFEB: push ecx */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x1214EFEC: push dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1214EFEF: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(edi + 0x1C) = eax; /* 0x1214EFF1: mov dword ptr [edi + 0x1c], eax */
    RECOMP_CALL(sub_121BF440); /* 0x1214EFF4: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214EFF9: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + ebx; /* 0x1214EFFC: add dword ptr [edi + 0xc], ebx */
    _flag_k = FK_ADD;
    goto L_1214F02A; /* 0x1214EFFF: jmp 0x1214f02a */
L_1214F001:
    PUSH32(esp, eax); /* 0x1214F001: push eax */
    PUSH32(esp, ecx); /* 0x1214F002: push ecx */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x1214F003: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_121BF440); /* 0x1214F006: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x1C); /* 0x1214F00B: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + eax; /* 0x1214F00E: add dword ptr [edi + 0xc], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1214F011: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1214F013: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214F016: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) & 0; /* 0x1214F019: and dword ptr [edi + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x2C) = 1; /* 0x1214F01D: mov dword ptr [edi + 0x2c], 1 */
    MEM32(edi + 0x30) = ebx; /* 0x1214F024: mov dword ptr [edi + 0x30], ebx */
    MEM32(edi + 0x34) = eax; /* 0x1214F027: mov dword ptr [edi + 0x34], eax */
L_1214F02A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F02A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214F031; /* 0x1214F02C: jmp 0x1214f031 */
L_1214F02E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F02E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214F030: inc eax */
    _flag_k = FK_INC;
L_1214F031:
    esi = POP32_VAL(esp); /* 0x1214F031: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214F032: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214F033: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F034: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214F03C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F03Cu);

L_1214F03C:
    edi = edi; /* 0x1214F03C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F03E: push ebp */
    ebp = esp; /* 0x1214F03F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1214F041: push ecx */
    PUSH32(esp, ebx); /* 0x1214F042: push ebx */
    PUSH32(esp, esi); /* 0x1214F043: push esi */
    esi = eax; /* 0x1214F044: mov esi, eax */
    ebx = MEM32(esi + 0x28); /* 0x1214F046: mov ebx, dword ptr [esi + 0x28] */
    edx = MEM32(esi + 0x24); /* 0x1214F049: mov edx, dword ptr [esi + 0x24] */
    PUSH32(esp, edi); /* 0x1214F04C: push edi */
    /* cmp ebx, 1 */ /* 0x1214F04D: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214F083; /* 0x1214F050: jae 0x1214f083 */
L_1214F052:
    edi = MEM32(esi + 0x18); /* 0x1214F052: mov edi, dword ptr [esi + 0x18] */
L_1214F055:
    /* cmp edi, MEM32(esi + 0x14) */ /* 0x1214F055: cmp edi, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214F067; /* 0x1214F058: jae 0x1214f067 */
L_1214F05A:
    eax = MEM32(esi + 0x8); /* 0x1214F05A: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + edi); /* 0x1214F05D: movzx eax, byte ptr [eax + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214F061: inc edi */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edi; /* 0x1214F062: mov dword ptr [esi + 0x18], edi */
    goto L_1214F072; /* 0x1214F065: jmp 0x1214f072 */
L_1214F067:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214F070; /* 0x1214F067: je 0x1214f070 */
L_1214F069:
    MEM32(esi + 0x4) = 1; /* 0x1214F069: mov dword ptr [esi + 4], 1 */
L_1214F070:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F070: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214F072:
    eax = (uint32_t)LO8(eax); /* 0x1214F072: movzx eax, al */
    ecx = ebx; /* 0x1214F075: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214F077: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214F077: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214F079: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1214F07C: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 1 */ /* 0x1214F07E: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214F055; /* 0x1214F081: jb 0x1214f055 */
L_1214F083:
    eax = edx; /* 0x1214F083: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1214F085: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1214F088: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1214F088: shr edx, 1 */
    PUSH32(esp, 2); /* 0x1214F08A: push 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1214F08C: dec ebx */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x1214F08D: pop edi */
    MEM32(esi) = eax; /* 0x1214F08E: mov dword ptr [esi], eax */
    /* cmp ebx, edi */ /* 0x1214F090: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214F0CD; /* 0x1214F092: jae 0x1214f0cd */
L_1214F094:
    ecx = MEM32(esi + 0x18); /* 0x1214F094: mov ecx, dword ptr [esi + 0x18] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214F097: mov dword ptr [ebp - 4], ecx */
L_1214F09A:
    /* cmp ecx, MEM32(esi + 0x14) */ /* 0x1214F09A: cmp ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214F0AF; /* 0x1214F09D: jae 0x1214f0af */
L_1214F09F:
    eax = MEM32(esi + 0x8); /* 0x1214F09F: mov eax, dword ptr [esi + 8] */
    eax = (uint32_t)MEM8(eax + ecx); /* 0x1214F0A2: movzx eax, byte ptr [eax + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214F0A6: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1214F0A7: mov dword ptr [ebp - 4], ecx */
    MEM32(esi + 0x18) = ecx; /* 0x1214F0AA: mov dword ptr [esi + 0x18], ecx */
    goto L_1214F0BA; /* 0x1214F0AD: jmp 0x1214f0ba */
L_1214F0AF:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214F0B8; /* 0x1214F0AF: je 0x1214f0b8 */
L_1214F0B1:
    MEM32(esi + 0x4) = 1; /* 0x1214F0B1: mov dword ptr [esi + 4], 1 */
L_1214F0B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F0B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214F0BA:
    eax = (uint32_t)LO8(eax); /* 0x1214F0BA: movzx eax, al */
    ecx = ebx; /* 0x1214F0BD: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1214F0BF: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1214F0BF: shl eax, cl */
    ecx = MEM32(ebp + (-0x4)); /* 0x1214F0C1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1214F0C4: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1214F0C7: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1214F0C9: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214F09A; /* 0x1214F0CB: jb 0x1214f09a */
L_1214F0CD:
    ecx = edx; /* 0x1214F0CD: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1214F0CF: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1214F0CF: shr ecx, 2 */
    MEM32(esi + 0x24) = ecx; /* 0x1214F0D2: mov dword ptr [esi + 0x24], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F0D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx + (-0x2); /* 0x1214F0D7: lea ecx, [ebx - 2] */
    MEM32(esi + 0x28) = ecx; /* 0x1214F0DA: mov dword ptr [esi + 0x28], ecx */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x1214F0DD: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F0E5; /* 0x1214F0E0: je 0x1214f0e5 */
L_1214F0E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214F0E2: inc eax */
    _flag_k = FK_INC;
    goto L_1214F11D; /* 0x1214F0E3: jmp 0x1214f11d */
L_1214F0E5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1214F0E5: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1214F0E8: sub edx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F111; /* 0x1214F0EA: je 0x1214f111 */
L_1214F0EC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214F0EC: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F0FB; /* 0x1214F0ED: je 0x1214f0fb */
L_1214F0EF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1214F0EF: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214F11B; /* 0x1214F0F0: jne 0x1214f11b */
L_1214F0F2:
    ecx = esi; /* 0x1214F0F2: mov ecx, esi */
    RECOMP_CALL(sub_1214E972); /* 0x1214F0F4: call 0x1214e972 */
    RECOMP_FLAGS_IN();
    goto L_1214F119; /* 0x1214F0F9: jmp 0x1214f119 */
L_1214F0FB:
    PUSH32(esp, eax); /* 0x1214F0FB: push eax */
    PUSH32(esp, 5); /* 0x1214F0FC: push 5 */
    PUSH32(esp, 9); /* 0x1214F0FE: push 9 */
    PUSH32(esp, 0x121ED928u); /* 0x1214F100: push 0x121ed928 */
    PUSH32(esp, 0x121EDA28u); /* 0x1214F105: push 0x121eda28 */
    RECOMP_CALL(sub_1214E5AD); /* 0x1214F10A: call 0x1214e5ad */
    RECOMP_FLAGS_IN();
    goto L_1214F119; /* 0x1214F10F: jmp 0x1214f119 */
L_1214F111:
    PUSH32(esp, eax); /* 0x1214F111: push eax */
    edi = esi; /* 0x1214F112: mov edi, esi */
    RECOMP_CALL(sub_1214EF5E); /* 0x1214F114: call 0x1214ef5e */
    RECOMP_FLAGS_IN();
L_1214F119:
    edi = eax; /* 0x1214F119: mov edi, eax */
L_1214F11B:
    eax = edi; /* 0x1214F11B: mov eax, edi */
L_1214F11D:
    edi = POP32_VAL(esp); /* 0x1214F11D: pop edi */
    esi = POP32_VAL(esp); /* 0x1214F11E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214F11F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214F120: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214F121: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214F127(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F127u);

L_1214F127:
    edi = edi; /* 0x1214F127: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F129: push ebp */
    ebp = esp; /* 0x1214F12A: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1214F12C: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM8(eax), 0x43u */ /* 0x1214F12F: cmp byte ptr [eax], 0x43 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F172; /* 0x1214F132: jne 0x1214f172 */
L_1214F134:
    /* cmp MEM8(eax + 0x1), 0x4Bu */ /* 0x1214F134: cmp byte ptr [eax + 1], 0x4b */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0x4Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F172; /* 0x1214F138: jne 0x1214f172 */
L_1214F13A:
    ecx = MEM32(ebp + 0x8); /* 0x1214F13A: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1214F13D: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x8) = eax; /* 0x1214F140: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x1214F143: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1214F146: add eax, -2 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x14) = eax; /* 0x1214F149: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(ebp + 0x14); /* 0x1214F14C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214F14F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xC) = eax; /* 0x1214F151: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x1214F154: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(ebp + 0x18); /* 0x1214F157: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0x20) = eax; /* 0x1214F15A: mov dword ptr [ecx + 0x20], eax */
    MEM32(ecx + 0x18) = edx; /* 0x1214F15D: mov dword ptr [ecx + 0x18], edx */
    MEM32(ecx + 0x28) = edx; /* 0x1214F160: mov dword ptr [ecx + 0x28], edx */
    MEM32(ecx + 0x24) = edx; /* 0x1214F163: mov dword ptr [ecx + 0x24], edx */
    MEM32(ecx) = edx; /* 0x1214F166: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x4) = edx; /* 0x1214F168: mov dword ptr [ecx + 4], edx */
    MEM32(ecx + 0x2C) = edx; /* 0x1214F16B: mov dword ptr [ecx + 0x2c], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F16E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214F175; /* 0x1214F170: jmp 0x1214f175 */
L_1214F172:
    PUSH32(esp, 3); /* 0x1214F172: push 3 */
    eax = POP32_VAL(esp); /* 0x1214F174: pop eax */
L_1214F175:
    ebp = POP32_VAL(esp); /* 0x1214F175: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1214F176: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1214F17E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F17Eu);

L_1214F17E:
    edi = edi; /* 0x1214F17E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F180: push ebp */
    ebp = esp; /* 0x1214F181: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1214F183: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx); /* 0x1214F186: mov eax, dword ptr [edx] */
    PUSH32(esp, ebx); /* 0x1214F188: push ebx */
    PUSH32(esp, esi); /* 0x1214F189: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214F18A: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x20); /* 0x1214F18D: mov ecx, dword ptr [esi + 0x20] */
    PUSH32(esp, edi); /* 0x1214F190: push edi */
    MEM32(esi + 0x1C) = eax; /* 0x1214F191: mov dword ptr [esi + 0x1c], eax */
    /* cmp eax, ecx */ /* 0x1214F194: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214F19B; /* 0x1214F196: jbe 0x1214f19b */
L_1214F198:
    MEM32(esi + 0x1C) = ecx; /* 0x1214F198: mov dword ptr [esi + 0x1c], ecx */
L_1214F19B:
    edi = MEM32(esi + 0x1C); /* 0x1214F19B: mov edi, dword ptr [esi + 0x1c] */
    MEM32(ebp + 0x8) = edi; /* 0x1214F19E: mov dword ptr [ebp + 8], edi */
    /* test edi, edi */ /* 0x1214F1A1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214F1FB; /* 0x1214F1A3: je 0x1214f1fb */
L_1214F1A5:
    eax = MEM32(esi + 0x2C); /* 0x1214F1A5: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1214F1A8: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F1F6; /* 0x1214F1AB: je 0x1214f1f6 */
L_1214F1AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214F1AD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F1D5; /* 0x1214F1AE: je 0x1214f1d5 */
L_1214F1B0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214F1B0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F1C0; /* 0x1214F1B1: je 0x1214f1c0 */
L_1214F1B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214F1B3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F1BB; /* 0x1214F1B4: je 0x1214f1bb */
L_1214F1B6:
    PUSH32(esp, 3); /* 0x1214F1B6: push 3 */
    eax = POP32_VAL(esp); /* 0x1214F1B8: pop eax */
    goto L_1214F209; /* 0x1214F1B9: jmp 0x1214f209 */
L_1214F1BB:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x1214F1BB: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214F207; /* 0x1214F1BE: jmp 0x1214f207 */
L_1214F1C0:
    PUSH32(esp, 1); /* 0x1214F1C0: push 1 */
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x1214F1C2: push dword ptr [esi + 0x44] */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x1214F1C5: push dword ptr [esi + 0x40] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x1214F1C8: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x1214F1CB: push dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_1214E5AD); /* 0x1214F1CE: call 0x1214e5ad */
    RECOMP_FLAGS_IN();
    goto L_1214F1F6; /* 0x1214F1D3: jmp 0x1214f1f6 */
L_1214F1D5:
    PUSH32(esp, 1); /* 0x1214F1D5: push 1 */
    edi = esi; /* 0x1214F1D7: mov edi, esi */
    RECOMP_CALL(sub_1214EF5E); /* 0x1214F1D9: call 0x1214ef5e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1214F1DE: mov edi, dword ptr [ebp + 8] */
    goto L_1214F1F6; /* 0x1214F1E1: jmp 0x1214f1f6 */
L_1214F1E3:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x1214F1E3: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214F1FB; /* 0x1214F1E7: jbe 0x1214f1fb */
L_1214F1E9:
    eax = esi; /* 0x1214F1E9: mov eax, esi */
    RECOMP_CALL(sub_1214F03C); /* 0x1214F1EB: call 0x1214f03c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1214F1F0: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1214F1F2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214F210; /* 0x1214F1F4: jne 0x1214f210 */
L_1214F1F6:
    /* cmp MEM32(esi), 0 */ /* 0x1214F1F6: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F1E3; /* 0x1214F1F9: je 0x1214f1e3 */
L_1214F1FB:
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x1C)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(edi, LO16(edi) - MEM16(esi + 0x1C)); /* 0x1214F1FB: sub di, word ptr [esi + 0x1c] */
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(ebp + 0xC); /* 0x1214F1FF: mov ecx, dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO16(edi); /* 0x1214F202: movzx eax, di */
    MEM32(ecx) = eax; /* 0x1214F205: mov dword ptr [ecx], eax */
L_1214F207:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F207: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214F209:
    edi = POP32_VAL(esp); /* 0x1214F209: pop edi */
    esi = POP32_VAL(esp); /* 0x1214F20A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214F20B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214F20C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214F20D: ret 8 */
L_1214F210:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F210: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 3 */ /* 0x1214F212: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1214F215: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1214F218: add eax, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1214F209; /* 0x1214F21B: jmp 0x1214f209 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214F222(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F222u);

L_1214F222:
    edi = edi; /* 0x1214F222: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F224: push ebp */
    ebp = esp; /* 0x1214F225: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214F227: push esi */
    PUSH32(esp, edi); /* 0x1214F228: push edi */
    edi = 0x1E04u; /* 0x1214F229: mov edi, 0x1e04 */
    PUSH32(esp, edi); /* 0x1214F22E: push edi */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x1214F22F: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1214F232: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1214F234: pop ecx */
    /* test esi, esi */ /* 0x1214F235: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214F25D; /* 0x1214F237: je 0x1214f25d */
L_1214F239:
    PUSH32(esp, edi); /* 0x1214F239: push edi */
    PUSH32(esp, 0); /* 0x1214F23A: push 0 */
    PUSH32(esp, esi); /* 0x1214F23C: push esi */
    RECOMP_CALL(sub_121BF434); /* 0x1214F23D: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214F242: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(0x121EEA68), 0 */ /* 0x1214F245: cmp dword ptr [0x121eea68], 0 */
    _flag_a = (uint32_t)(MEM32(0x121EEA68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F25D; /* 0x1214F24C: jne 0x1214f25d */
L_1214F24E:
    RECOMP_CALL(sub_1214EE82); /* 0x1214F24E: call 0x1214ee82 */
    RECOMP_FLAGS_IN();
    MEM32(0x121EEA68) = 1; /* 0x1214F253: mov dword ptr [0x121eea68], 1 */
L_1214F25D:
    edi = POP32_VAL(esp); /* 0x1214F25D: pop edi */
    eax = esi; /* 0x1214F25E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214F260: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F261: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F262: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214F26A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F26Au);

L_1214F26A:
    edi = edi; /* 0x1214F26A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F26C: push ebp */
    ebp = esp; /* 0x1214F26D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1214F26F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1; /* 0x1214F272: inc dword ptr [eax + 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x18); /* 0x1214F275: mov eax, dword ptr [eax + 0x18] */
    ebp = POP32_VAL(esp); /* 0x1214F278: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F279: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214F281(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F281u);

L_1214F281:
    edi = edi; /* 0x1214F281: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F283: push ebp */
    ebp = esp; /* 0x1214F284: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1214F286: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) - 1; /* 0x1214F289: dec dword ptr [ecx + 0x18] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x1214F28C: push esi */
    esi = MEM32(ecx + 0x18); /* 0x1214F28D: mov esi, dword ptr [ecx + 0x18] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214F299; /* 0x1214F290: jne 0x1214f299 */
L_1214F292:
    edx = MEM32(ecx); /* 0x1214F292: mov edx, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1214F294: push 1 */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1214F296: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_1214F299:
    eax = esi; /* 0x1214F299: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214F29B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F29C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F29D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214F2A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F2A5u);

L_1214F2A5:
    edi = edi; /* 0x1214F2A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F2A7: push ebp */
    ebp = esp; /* 0x1214F2A8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214F2AA: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1214F2AB: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1214F2AE: push edi */
    /* test esi, esi */ /* 0x1214F2AF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214F2FE; /* 0x1214F2B1: je 0x1214f2fe */
L_1214F2B3:
    eax = MEM32(ebp + 0x8); /* 0x1214F2B3: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x1214F2B6: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x1214F2B9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214F2D2; /* 0x1214F2BB: jne 0x1214f2d2 */
L_1214F2BD:
    /* cmp MEM32(esi), ecx */ /* 0x1214F2BD: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1214F2CA; /* 0x1214F2BF: jbe 0x1214f2ca */
L_1214F2C1:
    eax = MEM32(ebp + 0xC); /* 0x1214F2C1: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1214F2C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214F2CA; /* 0x1214F2C6: je 0x1214f2ca */
L_1214F2C8:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1214F2C8: mov byte ptr [eax], cl */
L_1214F2CA:
    MEM32(esi) = 1; /* 0x1214F2CA: mov dword ptr [esi], 1 */
    goto L_1214F2FA; /* 0x1214F2D0: jmp 0x1214f2fa */
L_1214F2D2:
    edi = ecx; /* 0x1214F2D2: mov edi, ecx */
    edx = edi + 0x1; /* 0x1214F2D4: lea edx, [edi + 1] */
L_1214F2D7:
    SET_LO8(eax, MEM8(edi)); /* 0x1214F2D7: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214F2D9: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1214F2DA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214F2D7; /* 0x1214F2DC: jne 0x1214f2d7 */
L_1214F2DE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1214F2DE: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214F2E0: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1214F2E1: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F2F8; /* 0x1214F2E5: je 0x1214f2f8 */
L_1214F2E7:
    /* cmp edi, MEM32(esi) */ /* 0x1214F2E7: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214F2FE; /* 0x1214F2E9: ja 0x1214f2fe */
L_1214F2EB:
    PUSH32(esp, edi); /* 0x1214F2EB: push edi */
    PUSH32(esp, ecx); /* 0x1214F2EC: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214F2ED: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF440); /* 0x1214F2F0: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214F2F5: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214F2F8:
    MEM32(esi) = edi; /* 0x1214F2F8: mov dword ptr [esi], edi */
L_1214F2FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F2FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214F303; /* 0x1214F2FC: jmp 0x1214f303 */
L_1214F2FE:
    eax = 0x88760385u; /* 0x1214F2FE: mov eax, 0x88760385 */
L_1214F303:
    edi = POP32_VAL(esp); /* 0x1214F303: pop edi */
    esi = POP32_VAL(esp); /* 0x1214F304: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F305: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214F306: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214F30E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F30Eu);

L_1214F30E:
    edi = edi; /* 0x1214F30E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F310: push ebp */
    ebp = esp; /* 0x1214F311: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1214F313: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1214F314: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1214F317: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214F32B; /* 0x1214F319: je 0x1214f32b */
L_1214F31B:
    PUSH32(esp, esi); /* 0x1214F31B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214F31C: mov esi, dword ptr [ebp + 8] */
    esi = esi + 0x8; /* 0x1214F31F: lea esi, [esi + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214F322: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214F323: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214F324: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214F325: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F326: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1214F328: pop esi */
    goto L_1214F330; /* 0x1214F329: jmp 0x1214f330 */
L_1214F32B:
    eax = 0x88760385u; /* 0x1214F32B: mov eax, 0x88760385 */
L_1214F330:
    edi = POP32_VAL(esp); /* 0x1214F330: pop edi */
    ebp = POP32_VAL(esp); /* 0x1214F331: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214F332: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214F33A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F33Au);

L_1214F33A:
    edi = edi; /* 0x1214F33A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F33C: push ebp */
    ebp = esp; /* 0x1214F33D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214F33F: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214F340: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1214F343: mov esi, ecx */
    eax = MEM32(esi); /* 0x1214F345: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1214F347: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214F34A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214F359; /* 0x1214F34C: je 0x1214f359 */
L_1214F34E:
    ecx = MEM32(ebp + 0x8); /* 0x1214F34E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1214F351: push esi */
    RECOMP_CALL(sub_12148A4D); /* 0x1214F352: call 0x12148a4d */
    RECOMP_FLAGS_IN();
    goto L_1214F35E; /* 0x1214F357: jmp 0x1214f35e */
L_1214F359:
    eax = 0x88760384u; /* 0x1214F359: mov eax, 0x88760384 */
L_1214F35E:
    esi = POP32_VAL(esp); /* 0x1214F35E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F35F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F360: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214F370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F370u);

L_1214F370:
    edi = edi; /* 0x1214F370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F372: push ebp */
    ebp = esp; /* 0x1214F373: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1214F375: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1214F378: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1214F379: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1214F37C: push esi */
    PUSH32(esp, edi); /* 0x1214F37D: push edi */
    MEM32(ebx + 0x4) = 0; /* 0x1214F37E: mov dword ptr [ebx + 4], 0 */
    /* cmp ecx, 0x3Eu */ /* 0x1214F385: cmp ecx, 0x3e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F3A8; /* 0x1214F388: je 0x1214f3a8 */
L_1214F38A:
    eax = MEM32(ebx); /* 0x1214F38A: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0xCu; /* 0x1214F38C: mov dword ptr [eax + 0x14], 0xc */
    eax = MEM32(ebx); /* 0x1214F393: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = 0x3Eu; /* 0x1214F395: mov dword ptr [eax + 0x18], 0x3e */
    eax = MEM32(ebx); /* 0x1214F39C: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x1C) = ecx; /* 0x1214F39E: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(ebx); /* 0x1214F3A1: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x1214F3A3: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1214F3A5: push ebx */
    RECOMP_ICALL(eax); /* 0x1214F3A6: call eax */
    RECOMP_FLAGS_IN();
L_1214F3A8:
    ecx = MEM32(ebp + 0x10); /* 0x1214F3A8: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, 0x1D8u */ /* 0x1214F3AB: cmp ecx, 0x1d8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F3D1; /* 0x1214F3B1: je 0x1214f3d1 */
L_1214F3B3:
    eax = MEM32(ebx); /* 0x1214F3B3: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x15u; /* 0x1214F3B5: mov dword ptr [eax + 0x14], 0x15 */
    eax = MEM32(ebx); /* 0x1214F3BC: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = 0x1D8u; /* 0x1214F3BE: mov dword ptr [eax + 0x18], 0x1d8 */
    eax = MEM32(ebx); /* 0x1214F3C5: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x1C) = ecx; /* 0x1214F3C7: mov dword ptr [eax + 0x1c], ecx */
    eax = MEM32(ebx); /* 0x1214F3CA: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x1214F3CC: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1214F3CE: push ebx */
    RECOMP_ICALL(eax); /* 0x1214F3CF: call eax */
    RECOMP_FLAGS_IN();
L_1214F3D1:
    edi = MEM32(ebx); /* 0x1214F3D1: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0xC); /* 0x1214F3D3: mov esi, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0x1D8u); /* 0x1214F3D6: push 0x1d8 */
    PUSH32(esp, 0); /* 0x1214F3DB: push 0 */
    PUSH32(esp, ebx); /* 0x1214F3DD: push ebx */
    RECOMP_CALL(sub_121BF434); /* 0x1214F3DE: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214F3E3: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1214F3E6: push ebx */
    MEM32(ebx) = edi; /* 0x1214F3E7: mov dword ptr [ebx], edi */
    MEM32(ebx + 0xC) = esi; /* 0x1214F3E9: mov dword ptr [ebx + 0xc], esi */
    MEM32(ebx + 0x10) = 1; /* 0x1214F3EC: mov dword ptr [ebx + 0x10], 1 */
    RECOMP_CALL(sub_12153760); /* 0x1214F3F3: call 0x12153760 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x8) = 0; /* 0x1214F3F8: mov dword ptr [ebx + 8], 0 */
    MEM32(ebx + 0x18) = 0; /* 0x1214F3FF: mov dword ptr [ebx + 0x18], 0 */
    MEM32(ebx + 0xA8) = 0; /* 0x1214F406: mov dword ptr [ebx + 0xa8], 0 */
    MEM32(ebx + 0xAC) = 0; /* 0x1214F410: mov dword ptr [ebx + 0xac], 0 */
    MEM32(ebx + 0xB0) = 0; /* 0x1214F41A: mov dword ptr [ebx + 0xb0], 0 */
    MEM32(ebx + 0xB4) = 0; /* 0x1214F424: mov dword ptr [ebx + 0xb4], 0 */
    MEM32(ebx + 0xB8) = 0; /* 0x1214F42E: mov dword ptr [ebx + 0xb8], 0 */
    MEM32(ebx + 0xC8) = 0; /* 0x1214F438: mov dword ptr [ebx + 0xc8], 0 */
    MEM32(ebx + 0xBC) = 0; /* 0x1214F442: mov dword ptr [ebx + 0xbc], 0 */
    MEM32(ebx + 0xCC) = 0; /* 0x1214F44C: mov dword ptr [ebx + 0xcc], 0 */
    MEM32(ebx + 0xC0) = 0; /* 0x1214F456: mov dword ptr [ebx + 0xc0], 0 */
    MEM32(ebx + 0xD0) = 0; /* 0x1214F460: mov dword ptr [ebx + 0xd0], 0 */
    MEM32(ebx + 0xC4) = 0; /* 0x1214F46A: mov dword ptr [ebx + 0xc4], 0 */
    MEM32(ebx + 0xD4) = 0; /* 0x1214F474: mov dword ptr [ebx + 0xd4], 0 */
    PUSH32(esp, ebx); /* 0x1214F47E: push ebx */
    MEM32(ebx + 0x134) = 0; /* 0x1214F47F: mov dword ptr [ebx + 0x134], 0 */
    RECOMP_CALL(sub_12151530); /* 0x1214F489: call 0x12151530 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1214F48E: push ebx */
    RECOMP_CALL(sub_12152A60); /* 0x1214F48F: call 0x12152a60 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1214F494: pop edi */
    esi = POP32_VAL(esp); /* 0x1214F495: pop esi */
    MEM32(ebx + 0x14) = 0xC8u; /* 0x1214F496: mov dword ptr [ebx + 0x14], 0xc8 */
    ebx = POP32_VAL(esp); /* 0x1214F49D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214F49E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214F49F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214F4B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F4B0u);

L_1214F4B0:
    eax = MEM32(esi + 0x24); /* 0x1214F4B0: mov eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214F4B3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F607; /* 0x1214F4B4: je 0x1214f607 */
L_1214F4BA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1214F4BA: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F534; /* 0x1214F4BD: je 0x1214f534 */
L_1214F4BF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214F4BF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F4D5; /* 0x1214F4C0: je 0x1214f4d5 */
L_1214F4C2:
    MEM32(esi + 0x28) = 0; /* 0x1214F4C2: mov dword ptr [esi + 0x28], 0 */
    MEM32(esi + 0x2C) = 0; /* 0x1214F4C9: mov dword ptr [esi + 0x2c], 0 */
    goto L_1214F615; /* 0x1214F4D0: jmp 0x1214f615 */
L_1214F4D5:
    /* cmp MEM32(esi + 0x128), 0 */ /* 0x1214F4D5: cmp dword ptr [esi + 0x128], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x128)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F521; /* 0x1214F4DC: je 0x1214f521 */
L_1214F4DE:
    eax = (uint32_t)MEM8(esi + 0x12C); /* 0x1214F4DE: movzx eax, byte ptr [esi + 0x12c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1214F4E5: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F521; /* 0x1214F4E8: je 0x1214f521 */
L_1214F4EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x1214F4EA: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F50E; /* 0x1214F4ED: je 0x1214f50e */
L_1214F4EF:
    eax = MEM32(esi); /* 0x1214F4EF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x72u; /* 0x1214F4F1: mov dword ptr [eax + 0x14], 0x72 */
    ecx = (uint32_t)MEM8(esi + 0x12C); /* 0x1214F4F8: movzx ecx, byte ptr [esi + 0x12c] */
    eax = MEM32(esi); /* 0x1214F4FF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x1214F501: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x1214F504: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1214F506: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214F509: push -1 */
    PUSH32(esp, esi); /* 0x1214F50B: push esi */
    RECOMP_ICALL(eax); /* 0x1214F50C: call eax */
    RECOMP_FLAGS_IN();
L_1214F50E:
    MEM32(esi + 0x28) = 5; /* 0x1214F50E: mov dword ptr [esi + 0x28], 5 */
    MEM32(esi + 0x2C) = 4; /* 0x1214F515: mov dword ptr [esi + 0x2c], 4 */
    goto L_1214F615; /* 0x1214F51C: jmp 0x1214f615 */
L_1214F521:
    MEM32(esi + 0x28) = 4; /* 0x1214F521: mov dword ptr [esi + 0x28], 4 */
    MEM32(esi + 0x2C) = 4; /* 0x1214F528: mov dword ptr [esi + 0x2c], 4 */
    goto L_1214F615; /* 0x1214F52F: jmp 0x1214f615 */
L_1214F534:
    /* cmp MEM32(esi + 0x11C), 0 */ /* 0x1214F534: cmp dword ptr [esi + 0x11c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x11C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F574; /* 0x1214F53B: jne 0x1214f574 */
L_1214F53D:
    /* cmp MEM32(esi + 0x128), 0 */ /* 0x1214F53D: cmp dword ptr [esi + 0x128], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x128)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F597; /* 0x1214F544: je 0x1214f597 */
L_1214F546:
    eax = (uint32_t)MEM8(esi + 0x12C); /* 0x1214F546: movzx eax, byte ptr [esi + 0x12c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1214F54D: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F587; /* 0x1214F550: je 0x1214f587 */
L_1214F552:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214F552: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F574; /* 0x1214F553: je 0x1214f574 */
L_1214F555:
    eax = MEM32(esi); /* 0x1214F555: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x72u; /* 0x1214F557: mov dword ptr [eax + 0x14], 0x72 */
    ecx = (uint32_t)MEM8(esi + 0x12C); /* 0x1214F55E: movzx ecx, byte ptr [esi + 0x12c] */
    eax = MEM32(esi); /* 0x1214F565: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x1214F567: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x1214F56A: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1214F56C: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214F56F: push -1 */
    PUSH32(esp, esi); /* 0x1214F571: push esi */
    RECOMP_ICALL(eax); /* 0x1214F572: call eax */
    RECOMP_FLAGS_IN();
L_1214F574:
    MEM32(esi + 0x28) = 3; /* 0x1214F574: mov dword ptr [esi + 0x28], 3 */
    MEM32(esi + 0x2C) = 2; /* 0x1214F57B: mov dword ptr [esi + 0x2c], 2 */
    goto L_1214F615; /* 0x1214F582: jmp 0x1214f615 */
L_1214F587:
    MEM32(esi + 0x28) = 2; /* 0x1214F587: mov dword ptr [esi + 0x28], 2 */
    MEM32(esi + 0x2C) = 2; /* 0x1214F58E: mov dword ptr [esi + 0x2c], 2 */
    goto L_1214F615; /* 0x1214F595: jmp 0x1214f615 */
L_1214F597:
    eax = MEM32(esi + 0xDC); /* 0x1214F597: mov eax, dword ptr [esi + 0xdc] */
    ecx = MEM32(eax + 0x54); /* 0x1214F59D: mov ecx, dword ptr [eax + 0x54] */
    edx = MEM32(eax + 0xA8); /* 0x1214F5A0: mov edx, dword ptr [eax + 0xa8] */
    PUSH32(esp, edi); /* 0x1214F5A6: push edi */
    edi = MEM32(eax); /* 0x1214F5A7: mov edi, dword ptr [eax] */
    /* cmp edi, 1 */ /* 0x1214F5A9: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F5E7; /* 0x1214F5AC: jne 0x1214f5e7 */
L_1214F5AE:
    /* cmp ecx, 2 */ /* 0x1214F5AE: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F5B8; /* 0x1214F5B1: jne 0x1214f5b8 */
L_1214F5B3:
    /* cmp edx, 3 */ /* 0x1214F5B3: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F5D6; /* 0x1214F5B6: je 0x1214f5d6 */
L_1214F5B8:
    eax = MEM32(esi); /* 0x1214F5B8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = edi; /* 0x1214F5BA: mov dword ptr [eax + 0x18], edi */
    MEM32(eax + 0x1C) = ecx; /* 0x1214F5BD: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = edx; /* 0x1214F5C0: mov dword ptr [eax + 0x20], edx */
    eax = MEM32(esi); /* 0x1214F5C3: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x6Fu; /* 0x1214F5C5: mov dword ptr [eax + 0x14], 0x6f */
    eax = MEM32(esi); /* 0x1214F5CC: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1214F5CE: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 1); /* 0x1214F5D1: push 1 */
    PUSH32(esp, esi); /* 0x1214F5D3: push esi */
    RECOMP_ICALL(eax); /* 0x1214F5D4: call eax */
    RECOMP_FLAGS_IN();
L_1214F5D6:
    MEM32(esi + 0x28) = 3; /* 0x1214F5D6: mov dword ptr [esi + 0x28], 3 */
    edi = POP32_VAL(esp); /* 0x1214F5DD: pop edi */
    MEM32(esi + 0x2C) = 2; /* 0x1214F5DE: mov dword ptr [esi + 0x2c], 2 */
    goto L_1214F615; /* 0x1214F5E5: jmp 0x1214f615 */
L_1214F5E7:
    /* cmp edi, 0x52u */ /* 0x1214F5E7: cmp edi, 0x52 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F5B8; /* 0x1214F5EA: jne 0x1214f5b8 */
L_1214F5EC:
    /* cmp ecx, 0x47u */ /* 0x1214F5EC: cmp ecx, 0x47 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x47u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F5B8; /* 0x1214F5EF: jne 0x1214f5b8 */
L_1214F5F1:
    /* cmp edx, 0x42u */ /* 0x1214F5F1: cmp edx, 0x42 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x42u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F5B8; /* 0x1214F5F4: jne 0x1214f5b8 */
L_1214F5F6:
    MEM32(esi + 0x28) = 2; /* 0x1214F5F6: mov dword ptr [esi + 0x28], 2 */
    edi = POP32_VAL(esp); /* 0x1214F5FD: pop edi */
    MEM32(esi + 0x2C) = 2; /* 0x1214F5FE: mov dword ptr [esi + 0x2c], 2 */
    goto L_1214F615; /* 0x1214F605: jmp 0x1214f615 */
L_1214F607:
    MEM32(esi + 0x28) = 1; /* 0x1214F607: mov dword ptr [esi + 0x28], 1 */
    MEM32(esi + 0x2C) = 1; /* 0x1214F60E: mov dword ptr [esi + 0x2c], 1 */
L_1214F615:
    fp_push(1.0); /* 0x1214F615: fld1  */
    MEM32(esi + 0x30) = 1; /* 0x1214F617: mov dword ptr [esi + 0x30], 1 */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x38) = _v; } /* 0x1214F61E: fstp qword ptr [esi + 0x38] */
    MEM32(esi + 0x34) = 1; /* 0x1214F621: mov dword ptr [esi + 0x34], 1 */
    MEM32(esi + 0x40) = 0; /* 0x1214F628: mov dword ptr [esi + 0x40], 0 */
    MEM32(esi + 0x44) = 0; /* 0x1214F62F: mov dword ptr [esi + 0x44], 0 */
    MEM32(esi + 0x48) = 0; /* 0x1214F636: mov dword ptr [esi + 0x48], 0 */
    MEM32(esi + 0x4C) = 1; /* 0x1214F63D: mov dword ptr [esi + 0x4c], 1 */
    MEM32(esi + 0x50) = 1; /* 0x1214F644: mov dword ptr [esi + 0x50], 1 */
    MEM32(esi + 0x54) = 0; /* 0x1214F64B: mov dword ptr [esi + 0x54], 0 */
    MEM32(esi + 0x58) = 2; /* 0x1214F652: mov dword ptr [esi + 0x58], 2 */
    MEM32(esi + 0x5C) = 0; /* 0x1214F659: mov dword ptr [esi + 0x5c], 0 */
    MEM32(esi + 0x60) = 0x100u; /* 0x1214F660: mov dword ptr [esi + 0x60], 0x100 */
    MEM32(esi + 0x88) = 0; /* 0x1214F667: mov dword ptr [esi + 0x88], 0 */
    MEM32(esi + 0x64) = 0; /* 0x1214F671: mov dword ptr [esi + 0x64], 0 */
    MEM32(esi + 0x68) = 0; /* 0x1214F678: mov dword ptr [esi + 0x68], 0 */
    MEM32(esi + 0x6C) = 0; /* 0x1214F67F: mov dword ptr [esi + 0x6c], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214F686: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214F690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F690u);

L_1214F690:
    edi = edi; /* 0x1214F690: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F692: push ebp */
    ebp = esp; /* 0x1214F693: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214F695: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214F696: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x14); /* 0x1214F699: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF38u; /* 0x1214F69C: add eax, 0xffffff38 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xAu */ /* 0x1214F6A1: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1214F711; /* 0x1214F6A4: ja 0x1214f711 */
L_1214F6A6:
    eax = (uint32_t)MEM8(eax + 0x1214F744); /* 0x1214F6A6: movzx eax, byte ptr [eax + 0x1214f744] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1214F730)); goto _ljump; }
L_1214F6B4:
    eax = MEM32(esi + 0x1B8); /* 0x1214F6B4: mov eax, dword ptr [esi + 0x1b8] */
    eax = MEM32(eax + 0x4); /* 0x1214F6BA: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x1214F6BD: push esi */
    RECOMP_ICALL(eax); /* 0x1214F6BE: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x1214F6C0: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0x8); /* 0x1214F6C3: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x1214F6C6: push esi */
    RECOMP_ICALL(eax); /* 0x1214F6C7: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 0xC9u; /* 0x1214F6C9: mov dword ptr [esi + 0x14], 0xc9 */
L_1214F6D0:
    eax = MEM32(esi + 0x1B8); /* 0x1214F6D0: mov eax, dword ptr [esi + 0x1b8] */
    eax = MEM32(eax); /* 0x1214F6D6: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1214F6D8: push edi */
    PUSH32(esp, esi); /* 0x1214F6D9: push esi */
    RECOMP_ICALL(eax); /* 0x1214F6DA: call eax */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1214F6DC: mov edi, eax */
    /* cmp edi, 1 */ /* 0x1214F6DE: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F6EF; /* 0x1214F6E1: jne 0x1214f6ef */
L_1214F6E3:
    RECOMP_CALL(sub_1214F4B0); /* 0x1214F6E3: call 0x1214f4b0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 0xCAu; /* 0x1214F6E8: mov dword ptr [esi + 0x14], 0xca */
L_1214F6EF:
    eax = edi; /* 0x1214F6EF: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1214F6F1: pop edi */
    esi = POP32_VAL(esp); /* 0x1214F6F2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F6F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F6F4: ret 4 */
L_1214F6F7:
    eax = 1; /* 0x1214F6F7: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x1214F6FC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F6FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F6FE: ret 4 */
L_1214F701:
    eax = MEM32(esi + 0x1B8); /* 0x1214F701: mov eax, dword ptr [esi + 0x1b8] */
    eax = MEM32(eax); /* 0x1214F707: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F709: push esi */
    RECOMP_ICALL(eax); /* 0x1214F70A: call eax */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1214F70C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F70D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F70E: ret 4 */
L_1214F711:
    ecx = MEM32(esi); /* 0x1214F711: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x14) = 0x14u; /* 0x1214F713: mov dword ptr [ecx + 0x14], 0x14 */
    ecx = MEM32(esi + 0x14); /* 0x1214F71A: mov ecx, dword ptr [esi + 0x14] */
    edx = MEM32(esi); /* 0x1214F71D: mov edx, dword ptr [esi] */
    MEM32(edx + 0x18) = ecx; /* 0x1214F71F: mov dword ptr [edx + 0x18], ecx */
    ecx = MEM32(esi); /* 0x1214F722: mov ecx, dword ptr [esi] */
    ecx = MEM32(ecx); /* 0x1214F724: mov ecx, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1214F726: push esi */
    RECOMP_ICALL(ecx); /* 0x1214F727: call ecx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F729: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1214F72B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F72C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F72D: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1214F6B4u: goto L_1214F6B4;
      case 0x1214F6D0u: goto L_1214F6D0;
      case 0x1214F6F7u: goto L_1214F6F7;
      case 0x1214F701u: goto L_1214F701;
      case 0x1214F711u: goto L_1214F711;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1214F760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F760u);

L_1214F760:
    edi = edi; /* 0x1214F760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F762: push ebp */
    ebp = esp; /* 0x1214F763: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214F765: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214F766: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x14); /* 0x1214F769: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 0xCDu */ /* 0x1214F76C: cmp eax, 0xcd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F77A; /* 0x1214F771: je 0x1214f77a */
L_1214F773:
    /* cmp eax, 0xCEu */ /* 0x1214F773: cmp eax, 0xce */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F7B0; /* 0x1214F778: jne 0x1214f7b0 */
L_1214F77A:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x1214F77A: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F7B0; /* 0x1214F77E: jne 0x1214f7b0 */
L_1214F780:
    eax = MEM32(esi + 0x8C); /* 0x1214F780: mov eax, dword ptr [esi + 0x8c] */
    /* cmp eax, MEM32(esi + 0x74) */ /* 0x1214F786: cmp eax, dword ptr [esi + 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214F79B; /* 0x1214F789: jae 0x1214f79b */
L_1214F78B:
    eax = MEM32(esi); /* 0x1214F78B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x43u; /* 0x1214F78D: mov dword ptr [eax + 0x14], 0x43 */
    eax = MEM32(esi); /* 0x1214F794: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214F796: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F798: push esi */
    RECOMP_ICALL(eax); /* 0x1214F799: call eax */
    RECOMP_FLAGS_IN();
L_1214F79B:
    eax = MEM32(esi + 0x1A8); /* 0x1214F79B: mov eax, dword ptr [esi + 0x1a8] */
    eax = MEM32(eax + 0x4); /* 0x1214F7A1: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x1214F7A4: push esi */
    RECOMP_ICALL(eax); /* 0x1214F7A5: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 0xD2u; /* 0x1214F7A7: mov dword ptr [esi + 0x14], 0xd2 */
    goto L_1214F7DF; /* 0x1214F7AE: jmp 0x1214f7df */
L_1214F7B0:
    /* cmp eax, 0xCFu */ /* 0x1214F7B0: cmp eax, 0xcf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F7C0; /* 0x1214F7B5: jne 0x1214f7c0 */
L_1214F7B7:
    MEM32(esi + 0x14) = 0xD2u; /* 0x1214F7B7: mov dword ptr [esi + 0x14], 0xd2 */
    goto L_1214F7DF; /* 0x1214F7BE: jmp 0x1214f7df */
L_1214F7C0:
    /* cmp eax, 0xD2u */ /* 0x1214F7C0: cmp eax, 0xd2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD2u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F7DF; /* 0x1214F7C5: je 0x1214f7df */
L_1214F7C7:
    eax = MEM32(esi); /* 0x1214F7C7: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x1214F7C9: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x1214F7D0: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x1214F7D3: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x1214F7D5: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x1214F7D8: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214F7DA: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F7DC: push esi */
    RECOMP_ICALL(eax); /* 0x1214F7DD: call eax */
    RECOMP_FLAGS_IN();
L_1214F7DF:
    eax = MEM32(esi + 0x1B8); /* 0x1214F7DF: mov eax, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1214F7E5: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F80B; /* 0x1214F7E9: jne 0x1214f80b */
L_1214F7EB:
    goto L_1214F7F0; /* 0x1214F7EB: jmp 0x1214f7f0 */
L_1214F7F0:
    eax = MEM32(esi + 0x1B8); /* 0x1214F7F0: mov eax, dword ptr [esi + 0x1b8] */
    eax = MEM32(eax); /* 0x1214F7F6: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F7F8: push esi */
    RECOMP_ICALL(eax); /* 0x1214F7F9: call eax */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214F7FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214F824; /* 0x1214F7FD: je 0x1214f824 */
L_1214F7FF:
    eax = MEM32(esi + 0x1B8); /* 0x1214F7FF: mov eax, dword ptr [esi + 0x1b8] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1214F805: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F7F0; /* 0x1214F809: je 0x1214f7f0 */
L_1214F80B:
    eax = MEM32(esi + 0x18); /* 0x1214F80B: mov eax, dword ptr [esi + 0x18] */
    eax = MEM32(eax + 0x18); /* 0x1214F80E: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x1214F811: push esi */
    RECOMP_ICALL(eax); /* 0x1214F812: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1214F814: push esi */
    RECOMP_CALL(sub_12153840); /* 0x1214F815: call 0x12153840 */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x1214F81A: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x1214F81F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F820: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F821: ret 4 */
L_1214F824:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F824: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1214F826: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F827: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214F828: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214F830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F830u);

L_1214F830:
    edi = edi; /* 0x1214F830: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F832: push ebp */
    ebp = esp; /* 0x1214F833: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214F835: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214F836: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x14); /* 0x1214F839: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 0xC8u */ /* 0x1214F83C: cmp eax, 0xc8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F862; /* 0x1214F841: je 0x1214f862 */
L_1214F843:
    /* cmp eax, 0xC9u */ /* 0x1214F843: cmp eax, 0xc9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC9u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F862; /* 0x1214F848: je 0x1214f862 */
L_1214F84A:
    eax = MEM32(esi); /* 0x1214F84A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x1214F84C: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x1214F853: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x1214F856: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x1214F858: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x1214F85B: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214F85D: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F85F: push esi */
    RECOMP_ICALL(eax); /* 0x1214F860: call eax */
    RECOMP_FLAGS_IN();
L_1214F862:
    PUSH32(esp, esi); /* 0x1214F862: push esi */
    RECOMP_CALL(sub_1214F690); /* 0x1214F863: call 0x1214f690 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1214F868: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214F86A: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1214F895; /* 0x1214F86B: je 0x1214f895 */
L_1214F86D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1214F86D: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214F89A; /* 0x1214F86E: jne 0x1214f89a */
L_1214F870:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1214F870: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F885; /* 0x1214F873: je 0x1214f885 */
L_1214F875:
    eax = MEM32(esi); /* 0x1214F875: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x33u; /* 0x1214F877: mov dword ptr [eax + 0x14], 0x33 */
    eax = MEM32(esi); /* 0x1214F87E: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214F880: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F882: push esi */
    RECOMP_ICALL(eax); /* 0x1214F883: call eax */
    RECOMP_FLAGS_IN();
L_1214F885:
    PUSH32(esp, esi); /* 0x1214F885: push esi */
    RECOMP_CALL(sub_12153840); /* 0x1214F886: call 0x12153840 */
    RECOMP_FLAGS_IN();
    eax = 2; /* 0x1214F88B: mov eax, 2 */
    esi = POP32_VAL(esp); /* 0x1214F890: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F891: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214F892: ret 8 */
L_1214F895:
    eax = 1; /* 0x1214F895: mov eax, 1 */
L_1214F89A:
    esi = POP32_VAL(esp); /* 0x1214F89A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F89B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214F89C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214F8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F8B0u);

L_1214F8B0:
    /* cmp MEM32(esi + 0x14), 0xCCu */ /* 0x1214F8B0: cmp dword ptr [esi + 0x14], 0xcc */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F8D5; /* 0x1214F8B7: je 0x1214f8d5 */
L_1214F8B9:
    eax = MEM32(esi + 0x1A8); /* 0x1214F8B9: mov eax, dword ptr [esi + 0x1a8] */
    eax = MEM32(eax); /* 0x1214F8BF: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F8C1: push esi */
    RECOMP_ICALL(eax); /* 0x1214F8C2: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8C) = 0; /* 0x1214F8C4: mov dword ptr [esi + 0x8c], 0 */
    MEM32(esi + 0x14) = 0xCCu; /* 0x1214F8CE: mov dword ptr [esi + 0x14], 0xcc */
L_1214F8D5:
    eax = MEM32(esi + 0x1A8); /* 0x1214F8D5: mov eax, dword ptr [esi + 0x1a8] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1214F8DB: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F8FD; /* 0x1214F8DF: je 0x1214f8fd */
L_1214F8E1:
    eax = MEM32(esi); /* 0x1214F8E1: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x30u; /* 0x1214F8E3: mov dword ptr [eax + 0x14], 0x30 */
    eax = MEM32(esi); /* 0x1214F8EA: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214F8EC: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F8EE: push esi */
    RECOMP_ICALL(eax); /* 0x1214F8EF: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1A8); /* 0x1214F8F1: mov eax, dword ptr [esi + 0x1a8] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x1214F8F7: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214F8E1; /* 0x1214F8FB: jne 0x1214f8e1 */
L_1214F8FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F8FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x44), eax */ /* 0x1214F8FF: cmp dword ptr [esi + 0x44], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1214F902: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCDu; /* 0x1214F905: add eax, 0xcd */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x1214F90A: mov dword ptr [esi + 0x14], eax */
    eax = 1; /* 0x1214F90D: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214F912: ret  */
    RECOMP_REGS_OUT();
}

void sub_1214F920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214F920u);

L_1214F920:
    edi = edi; /* 0x1214F920: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214F922: push ebp */
    ebp = esp; /* 0x1214F923: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1214F925: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1214F926: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0xCDu */ /* 0x1214F929: cmp dword ptr [esi + 0x14], 0xcd */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0xCDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1214F930: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214F94B; /* 0x1214F931: je 0x1214f94b */
L_1214F933:
    eax = MEM32(esi); /* 0x1214F933: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x1214F935: mov dword ptr [eax + 0x14], 0x14 */
    eax = MEM32(esi + 0x14); /* 0x1214F93C: mov eax, dword ptr [esi + 0x14] */
    ecx = MEM32(esi); /* 0x1214F93F: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x1214F941: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x1214F944: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1214F946: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F948: push esi */
    RECOMP_ICALL(eax); /* 0x1214F949: call eax */
    RECOMP_FLAGS_IN();
L_1214F94B:
    eax = MEM32(esi + 0x8C); /* 0x1214F94B: mov eax, dword ptr [esi + 0x8c] */
    /* cmp eax, MEM32(esi + 0x74) */ /* 0x1214F951: cmp eax, dword ptr [esi + 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1214F971; /* 0x1214F954: jb 0x1214f971 */
L_1214F956:
    eax = MEM32(esi); /* 0x1214F956: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x7Bu; /* 0x1214F958: mov dword ptr [eax + 0x14], 0x7b */
    eax = MEM32(esi); /* 0x1214F95F: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1214F961: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1214F964: push -1 */
    PUSH32(esp, esi); /* 0x1214F966: push esi */
    RECOMP_ICALL(eax); /* 0x1214F967: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1214F969: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214F96A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1214F96C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F96D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214F96E: ret 0xc */
L_1214F971:
    ecx = MEM32(esi + 0x8); /* 0x1214F971: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x1214F974: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214F98C; /* 0x1214F976: je 0x1214f98c */
L_1214F978:
    MEM32(ecx + 0x4) = eax; /* 0x1214F978: mov dword ptr [ecx + 4], eax */
    eax = MEM32(esi + 0x74); /* 0x1214F97B: mov eax, dword ptr [esi + 0x74] */
    ecx = MEM32(esi + 0x8); /* 0x1214F97E: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x1214F981: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x8); /* 0x1214F984: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax); /* 0x1214F987: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1214F989: push esi */
    RECOMP_ICALL(eax); /* 0x1214F98A: call eax */
    RECOMP_FLAGS_IN();
L_1214F98C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1214F98C: push dword ptr [ebp + 0x10] */
    eax = MEM32(esi + 0x1AC); /* 0x1214F98F: mov eax, dword ptr [esi + 0x1ac] */
    ecx = ebp + 0x8; /* 0x1214F995: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1214F998: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214F999: push dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x8) = 0; /* 0x1214F99C: mov dword ptr [ebp + 8], 0 */
    eax = MEM32(eax + 0x4); /* 0x1214F9A3: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x1214F9A6: push esi */
    RECOMP_ICALL(eax); /* 0x1214F9A7: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1214F9A9: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x8C) = MEM32(esi + 0x8C) + eax; /* 0x1214F9AC: add dword ptr [esi + 0x8c], eax */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1214F9B2: pop edi */
    esi = POP32_VAL(esp); /* 0x1214F9B3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214F9B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214F9B5: ret 0xc */
    RECOMP_REGS_OUT();
}
