#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1215E320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215E320u);

L_1215E320:
    edi = edi; /* 0x1215E320: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215E322: push ebp */
    ebp = esp; /* 0x1215E323: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1215E325: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1215E328: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1215E32D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1215E32F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1215E332: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215E333: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x174); /* 0x1215E336: mov eax, dword ptr [esi + 0x174] */
    PUSH32(esp, edi); /* 0x1215E33C: push edi */
    edi = eax; /* 0x1215E33D: mov edi, eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x1215E33F: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_1215DA50); /* 0x1215E342: call 0x1215da50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1215E347: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x144), edx */ /* 0x1215E349: cmp dword ptr [esi + 0x144], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x144)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = 0; /* 0x1215E34F: mov dword ptr [ebp - 0x14], 0 */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1215E356: sete dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1215E359: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = 0; /* 0x1215E35B: mov dword ptr [ebp - 0x10], 0 */
    MEM32(ebp + (-0xC)) = 0; /* 0x1215E362: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = 0; /* 0x1215E369: mov dword ptr [ebp - 8], 0 */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1215E370: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x24)) = edx; /* 0x1215E373: mov dword ptr [ebp - 0x24], edx */
    /* cmp MEM32(esi + 0xFC), ecx */ /* 0x1215E376: cmp dword ptr [esi + 0xfc], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0xFC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215E3F2; /* 0x1215E37C: jle 0x1215e3f2 */
L_1215E37E:
    eax = esi + 0x100; /* 0x1215E37E: lea eax, [esi + 0x100] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1215E384: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, ebx); /* 0x1215E387: push ebx */
L_1215E388:
    edi = MEM32(eax); /* 0x1215E388: mov edi, dword ptr [eax] */
    /* test edx, edx */ /* 0x1215E38A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215E39C; /* 0x1215E38C: je 0x1215e39c */
L_1215E38E:
    /* cmp MEM32(esi + 0x14C), 0 */ /* 0x1215E38E: cmp dword ptr [esi + 0x14c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E3DF; /* 0x1215E395: jne 0x1215e3df */
L_1215E397:
    edi = MEM32(edi + 0x14); /* 0x1215E397: mov edi, dword ptr [edi + 0x14] */
    goto L_1215E39F; /* 0x1215E39A: jmp 0x1215e39f */
L_1215E39C:
    edi = MEM32(edi + 0x18); /* 0x1215E39C: mov edi, dword ptr [edi + 0x18] */
L_1215E39F:
    /* cmp MEM32(ebp + edi * 4 + (-0x14)), 0 */ /* 0x1215E39F: cmp dword ptr [ebp + edi*4 - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + edi * 4 + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E3DF; /* 0x1215E3A4: jne 0x1215e3df */
L_1215E3A6:
    ebx = esi + edi * 4 + 0x58; /* 0x1215E3A6: lea ebx, [esi + edi*4 + 0x58] */
    /* test edx, edx */ /* 0x1215E3AA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215E3B2; /* 0x1215E3AC: jne 0x1215e3b2 */
L_1215E3AE:
    ebx = esi + edi * 4 + 0x68; /* 0x1215E3AE: lea ebx, [esi + edi*4 + 0x68] */
L_1215E3B2:
    /* cmp MEM32(ebx), 0 */ /* 0x1215E3B2: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E3BF; /* 0x1215E3B5: jne 0x1215e3bf */
L_1215E3B7:
    PUSH32(esp, esi); /* 0x1215E3B7: push esi */
    RECOMP_CALL(sub_121538F0); /* 0x1215E3B8: call 0x121538f0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x1215E3BD: mov dword ptr [ebx], eax */
L_1215E3BF:
    eax = MEM32(ebp + (-0x20)); /* 0x1215E3BF: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(eax + edi * 4 + 0x5C)); /* 0x1215E3C2: push dword ptr [eax + edi*4 + 0x5c] */
    PUSH32(esp, MEM32(ebx)); /* 0x1215E3C6: push dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x1215E3C8: push esi */
    RECOMP_CALL(sub_1215CED0); /* 0x1215E3C9: call 0x1215ced0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1215E3CE: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1215E3D1: mov ecx, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x24)); /* 0x1215E3D4: mov edx, dword ptr [ebp - 0x24] */
    MEM32(ebp + edi * 4 + (-0x14)) = 1; /* 0x1215E3D7: mov dword ptr [ebp + edi*4 - 0x14], 1 */
L_1215E3DF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215E3DF: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1215E3E0: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1215E3E3: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1215E3E6: mov dword ptr [ebp - 0x18], eax */
    /* cmp ecx, MEM32(esi + 0xFC) */ /* 0x1215E3E9: cmp ecx, dword ptr [esi + 0xfc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E388; /* 0x1215E3EF: jl 0x1215e388 */
L_1215E3F1:
    ebx = POP32_VAL(esp); /* 0x1215E3F1: pop ebx */
L_1215E3F2:
    ecx = MEM32(ebp + (-0x4)); /* 0x1215E3F2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1215E3F5: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1215E3F6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1215E3F8: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x1215E3F9: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1215E3FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215E400: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215E401: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1215E410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215E410u);

L_1215E410:
    edi = edi; /* 0x1215E410: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215E412: push ebp */
    ebp = esp; /* 0x1215E413: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1215E415: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1215E418: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1215E419: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1215E41C: push esi */
    esi = MEM32(ebx + 0x174); /* 0x1215E41D: mov esi, dword ptr [ebx + 0x174] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1215E423: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1215E425: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1215E426: mov edi, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x20) = ebx; /* 0x1215E429: mov dword ptr [esi + 0x20], ebx */
    MEM32(esi + 0xC) = edi; /* 0x1215E42C: mov dword ptr [esi + 0xc], edi */
    /* cmp MEM32(ebx + 0x144), ecx */ /* 0x1215E42F: cmp dword ptr [ebx + 0x144], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x144)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1215E435: sete cl */
    /* cmp MEM32(ebx + 0x14C), 0 */ /* 0x1215E438: cmp dword ptr [ebx + 0x14c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x1215E43F: mov dword ptr [ebp + 8], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E45A; /* 0x1215E442: jne 0x1215e45a */
L_1215E444:
    /* test ecx, ecx */ /* 0x1215E444: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215E451; /* 0x1215E446: je 0x1215e451 */
L_1215E448:
    MEM32(esi + 0x4) = 0x1215DC10u; /* 0x1215E448: mov dword ptr [esi + 4], 0x1215dc10 */
    goto L_1215E489; /* 0x1215E44F: jmp 0x1215e489 */
L_1215E451:
    MEM32(esi + 0x4) = 0x1215DD70u; /* 0x1215E451: mov dword ptr [esi + 4], 0x1215dd70 */
    goto L_1215E489; /* 0x1215E458: jmp 0x1215e489 */
L_1215E45A:
    /* test ecx, ecx */ /* 0x1215E45A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215E467; /* 0x1215E45C: je 0x1215e467 */
L_1215E45E:
    MEM32(esi + 0x4) = 0x1215DF60u; /* 0x1215E45E: mov dword ptr [esi + 4], 0x1215df60 */
    goto L_1215E489; /* 0x1215E465: jmp 0x1215e489 */
L_1215E467:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x1215E467: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x4) = 0x1215E020u; /* 0x1215E46B: mov dword ptr [esi + 4], 0x1215e020 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E489; /* 0x1215E472: jne 0x1215e489 */
L_1215E474:
    eax = MEM32(ebx + 0x4); /* 0x1215E474: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax); /* 0x1215E477: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x3E8u); /* 0x1215E479: push 0x3e8 */
    PUSH32(esp, 1); /* 0x1215E47E: push 1 */
    PUSH32(esp, ebx); /* 0x1215E480: push ebx */
    RECOMP_ICALL(eax); /* 0x1215E481: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1215E483: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x40) = eax; /* 0x1215E486: mov dword ptr [esi + 0x40], eax */
L_1215E489:
    /* test edi, edi */ /* 0x1215E489: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215E496; /* 0x1215E48B: je 0x1215e496 */
L_1215E48D:
    MEM32(esi + 0x8) = 0x1215E320u; /* 0x1215E48D: mov dword ptr [esi + 8], 0x1215e320 */
    goto L_1215E49D; /* 0x1215E494: jmp 0x1215e49d */
L_1215E496:
    MEM32(esi + 0x8) = 0x1215E2C0u; /* 0x1215E496: mov dword ptr [esi + 8], 0x1215e2c0 */
L_1215E49D:
    /* cmp MEM32(ebx + 0xFC), 0 */ /* 0x1215E49D: cmp dword ptr [ebx + 0xfc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xFC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = 0; /* 0x1215E4A4: mov dword ptr [ebp - 0xc], 0 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215E568; /* 0x1215E4AB: jle 0x1215e568 */
L_1215E4B1:
    eax = esi + 0x24; /* 0x1215E4B1: lea eax, [esi + 0x24] */
    edx = ebx + 0x100; /* 0x1215E4B4: lea edx, [ebx + 0x100] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1215E4BA: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x1215E4BD: mov dword ptr [ebp - 4], edx */
L_1215E4C0:
    edi = MEM32(edx); /* 0x1215E4C0: mov edi, dword ptr [edx] */
    MEM32(eax) = 0; /* 0x1215E4C2: mov dword ptr [eax], 0 */
    /* test ecx, ecx */ /* 0x1215E4C8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215E4DA; /* 0x1215E4CA: je 0x1215e4da */
L_1215E4CC:
    /* cmp MEM32(ebx + 0x14C), 0 */ /* 0x1215E4CC: cmp dword ptr [ebx + 0x14c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E549; /* 0x1215E4D3: jne 0x1215e549 */
L_1215E4D5:
    edi = MEM32(edi + 0x14); /* 0x1215E4D5: mov edi, dword ptr [edi + 0x14] */
    goto L_1215E4E0; /* 0x1215E4D8: jmp 0x1215e4e0 */
L_1215E4DA:
    edi = MEM32(edi + 0x18); /* 0x1215E4DA: mov edi, dword ptr [edi + 0x18] */
    MEM32(esi + 0x34) = edi; /* 0x1215E4DD: mov dword ptr [esi + 0x34], edi */
L_1215E4E0:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1215E4E0: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215E533; /* 0x1215E4E4: je 0x1215e533 */
L_1215E4E6:
    /* test edi, edi */ /* 0x1215E4E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215E4EF; /* 0x1215E4E8: js 0x1215e4ef */
L_1215E4EA:
    /* cmp edi, 4 */ /* 0x1215E4EA: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E504; /* 0x1215E4ED: jl 0x1215e504 */
L_1215E4EF:
    eax = MEM32(ebx); /* 0x1215E4EF: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x32u; /* 0x1215E4F1: mov dword ptr [eax + 0x14], 0x32 */
    eax = MEM32(ebx); /* 0x1215E4F8: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = edi; /* 0x1215E4FA: mov dword ptr [eax + 0x18], edi */
    eax = MEM32(ebx); /* 0x1215E4FD: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x1215E4FF: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1215E501: push ebx */
    RECOMP_ICALL(eax); /* 0x1215E502: call eax */
    RECOMP_FLAGS_IN();
L_1215E504:
    /* cmp MEM32(esi + edi * 4 + 0x5C), 0 */ /* 0x1215E504: cmp dword ptr [esi + edi*4 + 0x5c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + edi * 4 + 0x5C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E51E; /* 0x1215E509: jne 0x1215e51e */
L_1215E50B:
    eax = MEM32(ebx + 0x4); /* 0x1215E50B: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax); /* 0x1215E50E: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x404u); /* 0x1215E510: push 0x404 */
    PUSH32(esp, 1); /* 0x1215E515: push 1 */
    PUSH32(esp, ebx); /* 0x1215E517: push ebx */
    RECOMP_ICALL(eax); /* 0x1215E518: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + edi * 4 + 0x5C) = eax; /* 0x1215E51A: mov dword ptr [esi + edi*4 + 0x5c], eax */
L_1215E51E:
    PUSH32(esp, 0x404u); /* 0x1215E51E: push 0x404 */
    PUSH32(esp, 0); /* 0x1215E523: push 0 */
    PUSH32(esp, MEM32(esi + edi * 4 + 0x5C)); /* 0x1215E525: push dword ptr [esi + edi*4 + 0x5c] */
    RECOMP_CALL(sub_121BF434); /* 0x1215E529: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1215E52E: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1215E540; /* 0x1215E531: jmp 0x1215e540 */
L_1215E533:
    eax = esi + edi * 4 + 0x4C; /* 0x1215E533: lea eax, [esi + edi*4 + 0x4c] */
    PUSH32(esp, eax); /* 0x1215E537: push eax */
    PUSH32(esp, edi); /* 0x1215E538: push edi */
    PUSH32(esp, ecx); /* 0x1215E539: push ecx */
    PUSH32(esp, ebx); /* 0x1215E53A: push ebx */
    RECOMP_CALL(sub_1215C510); /* 0x1215E53B: call 0x1215c510 */
    RECOMP_FLAGS_IN();
L_1215E540:
    edx = MEM32(ebp + (-0x4)); /* 0x1215E540: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x1215E543: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0x8); /* 0x1215E546: mov ecx, dword ptr [ebp + 8] */
L_1215E549:
    edi = MEM32(ebp + (-0xC)); /* 0x1215E549: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1215E54C: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1215E54D: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1215E550: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edi; /* 0x1215E553: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x1215E556: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1215E559: mov dword ptr [ebp - 8], eax */
    /* cmp edi, MEM32(ebx + 0xFC) */ /* 0x1215E55C: cmp edi, dword ptr [ebx + 0xfc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E4C0; /* 0x1215E562: jl 0x1215e4c0 */
L_1215E568:
    MEM32(esi + 0x38) = 0; /* 0x1215E568: mov dword ptr [esi + 0x38], 0 */
    MEM32(esi + 0x3C) = 0; /* 0x1215E56F: mov dword ptr [esi + 0x3c], 0 */
    MEM32(esi + 0x18) = 0; /* 0x1215E576: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x1C) = 0; /* 0x1215E57D: mov dword ptr [esi + 0x1c], 0 */
    eax = MEM32(ebx + 0xC8); /* 0x1215E584: mov eax, dword ptr [ebx + 0xc8] */
    edi = POP32_VAL(esp); /* 0x1215E58A: pop edi */
    MEM32(esi + 0x44) = eax; /* 0x1215E58B: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = 0; /* 0x1215E58E: mov dword ptr [esi + 0x48], 0 */
    esi = POP32_VAL(esp); /* 0x1215E595: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215E596: pop ebx */
    esp = ebp; /* 0x1215E597: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215E599: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215E59A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1215E5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215E5B0u);

L_1215E5B0:
    edi = edi; /* 0x1215E5B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215E5B2: push ebp */
    ebp = esp; /* 0x1215E5B3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1215E5B5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215E5B6: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x1215E5B9: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x1215E5BC: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x6Cu); /* 0x1215E5BE: push 0x6c */
    PUSH32(esp, 1); /* 0x1215E5C0: push 1 */
    PUSH32(esp, esi); /* 0x1215E5C2: push esi */
    RECOMP_ICALL(eax); /* 0x1215E5C3: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x174) = eax; /* 0x1215E5C5: mov dword ptr [esi + 0x174], eax */
    MEM32(eax) = 0x1215E410u; /* 0x1215E5CB: mov dword ptr [eax], 0x1215e410 */
    MEM32(eax + 0x4C) = 0; /* 0x1215E5D1: mov dword ptr [eax + 0x4c], 0 */
    MEM32(eax + 0x5C) = 0; /* 0x1215E5D8: mov dword ptr [eax + 0x5c], 0 */
    MEM32(eax + 0x50) = 0; /* 0x1215E5DF: mov dword ptr [eax + 0x50], 0 */
    MEM32(eax + 0x60) = 0; /* 0x1215E5E6: mov dword ptr [eax + 0x60], 0 */
    MEM32(eax + 0x54) = 0; /* 0x1215E5ED: mov dword ptr [eax + 0x54], 0 */
    MEM32(eax + 0x64) = 0; /* 0x1215E5F4: mov dword ptr [eax + 0x64], 0 */
    MEM32(eax + 0x58) = 0; /* 0x1215E5FB: mov dword ptr [eax + 0x58], 0 */
    MEM32(eax + 0x68) = 0; /* 0x1215E602: mov dword ptr [eax + 0x68], 0 */
    MEM32(eax + 0x40) = 0; /* 0x1215E609: mov dword ptr [eax + 0x40], 0 */
    esi = POP32_VAL(esp); /* 0x1215E610: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215E611: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215E612: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1215E620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215E620u);

L_1215E620:
    edi = edi; /* 0x1215E620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215E622: push ebp */
    ebp = esp; /* 0x1215E623: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1215E625: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1215E628: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1215E629: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi + 0x3C), 0 */ /* 0x1215E62C: cmp dword ptr [edi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0x170); /* 0x1215E630: mov ecx, dword ptr [edi + 0x170] */
    eax = MEM32(edi + 0x44); /* 0x1215E636: mov eax, dword ptr [edi + 0x44] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1215E639: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = 0; /* 0x1215E63C: mov dword ptr [ebp - 0xc], 0 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215E837; /* 0x1215E643: jle 0x1215e837 */
L_1215E649:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1215E649: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1215E64C: push ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1215E64D: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, esi); /* 0x1215E650: push esi */
L_1215E651:
    esi = MEM32(eax); /* 0x1215E651: mov esi, dword ptr [eax] */
    /* cmp esi, 3 */ /* 0x1215E653: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1215E65F; /* 0x1215E656: ja 0x1215e65f */
L_1215E658:
    /* cmp MEM32(edi + esi * 4 + 0x48), 0 */ /* 0x1215E658: cmp dword ptr [edi + esi*4 + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(edi + esi * 4 + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E677; /* 0x1215E65D: jne 0x1215e677 */
L_1215E65F:
    eax = MEM32(edi); /* 0x1215E65F: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x34u; /* 0x1215E661: mov dword ptr [eax + 0x14], 0x34 */
    eax = MEM32(edi); /* 0x1215E668: mov eax, dword ptr [edi] */
    MEM32(eax + 0x18) = esi; /* 0x1215E66A: mov dword ptr [eax + 0x18], esi */
    eax = MEM32(edi); /* 0x1215E66D: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x1215E66F: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1215E671: push edi */
    RECOMP_ICALL(eax); /* 0x1215E672: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1215E674: mov ecx, dword ptr [ebp - 4] */
L_1215E677:
    eax = MEM32(edi + 0xC4); /* 0x1215E677: mov eax, dword ptr [edi + 0xc4] */
    ebx = MEM32(edi + esi * 4 + 0x48); /* 0x1215E67D: mov ebx, dword ptr [edi + esi*4 + 0x48] */
    /* cmp eax, 6 */ /* 0x1215E681: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1215E809; /* 0x1215E684: ja 0x1215e809 */
L_1215E68A:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1215E840)); goto _ljump; }
L_1215E691:
    /* cmp MEM32(ecx + esi * 4 + 0xC), 0 */ /* 0x1215E691: cmp dword ptr [ecx + esi*4 + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + esi * 4 + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E6AE; /* 0x1215E696: jne 0x1215e6ae */
L_1215E698:
    eax = MEM32(edi + 0x4); /* 0x1215E698: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax); /* 0x1215E69B: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x80u); /* 0x1215E69D: push 0x80 */
    PUSH32(esp, 1); /* 0x1215E6A2: push 1 */
    PUSH32(esp, edi); /* 0x1215E6A4: push edi */
    RECOMP_ICALL(eax); /* 0x1215E6A5: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1215E6A7: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + esi * 4 + 0xC) = eax; /* 0x1215E6AA: mov dword ptr [ecx + esi*4 + 0xc], eax */
L_1215E6AE:
    ecx = MEM32(ecx + esi * 4 + 0xC); /* 0x1215E6AE: mov ecx, dword ptr [ecx + esi*4 + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1215E6B2: sub ebx, ecx */
    _flag_k = FK_CMP;
    edx = 0x40u; /* 0x1215E6B4: mov edx, 0x40 */
    esp = esp; /* 0x1215E6B9: lea esp, [esp] */
L_1215E6C0:
    SET_LO16(eax, MEM16(ebx + ecx)); /* 0x1215E6C0: mov ax, word ptr [ebx + ecx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(eax)); /* 0x1215E6C4: add ax, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(eax)); /* 0x1215E6C7: add ax, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(eax)); /* 0x1215E6CA: add ax, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1215E6CD: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1215E6D0: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1215E6D3: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215E6C0; /* 0x1215E6D4: jne 0x1215e6c0 */
L_1215E6D6:
    goto L_1215E819; /* 0x1215E6D6: jmp 0x1215e819 */
L_1215E6DB:
    /* cmp MEM32(ecx + esi * 4 + 0xC), 0 */ /* 0x1215E6DB: cmp dword ptr [ecx + esi*4 + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + esi * 4 + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E6F8; /* 0x1215E6E0: jne 0x1215e6f8 */
L_1215E6E2:
    eax = MEM32(edi + 0x4); /* 0x1215E6E2: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax); /* 0x1215E6E5: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x80u); /* 0x1215E6E7: push 0x80 */
    PUSH32(esp, 1); /* 0x1215E6EC: push 1 */
    PUSH32(esp, edi); /* 0x1215E6EE: push edi */
    RECOMP_ICALL(eax); /* 0x1215E6EF: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1215E6F1: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + esi * 4 + 0xC) = eax; /* 0x1215E6F4: mov dword ptr [ecx + esi*4 + 0xc], eax */
L_1215E6F8:
    eax = MEM32(ecx + esi * 4 + 0xC); /* 0x1215E6F8: mov eax, dword ptr [ecx + esi*4 + 0xc] */
    esi = ebx + 0x6; /* 0x1215E6FC: lea esi, [ebx + 6] */
    edx = eax + 0x2; /* 0x1215E6FF: lea edx, [eax + 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1215E702: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1215E704: neg eax */
    _flag_k = FK_CMP;
    edi = 0x12013288u; /* 0x1215E706: mov edi, 0x12013288 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1215E70B: mov dword ptr [ebp - 8], eax */
    edi = edi; /* 0x1215E70E: mov edi, edi */
L_1215E710:
    eax = (int32_t)(int16_t)MEM16(edi); /* 0x1215E710: movsx eax, word ptr [edi] */
    ecx = (uint32_t)MEM16(esi + (-0x6)); /* 0x1215E713: movzx ecx, word ptr [esi - 6] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1215E717: imul ecx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1215E71A: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x400u; /* 0x1215E71D: add ecx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x1215E723: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM16(edx + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x1215E726: mov word ptr [edx - 2], cx */
    ecx = (int32_t)(int16_t)MEM16(edx + eax + 0x12013288); /* 0x1215E72A: movsx ecx, word ptr [edx + eax + 0x12013288] */
    eax = (uint32_t)MEM16(edx + ebx); /* 0x1215E732: movzx eax, word ptr [edx + ebx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1215E736: imul ecx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1215E739: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x400u; /* 0x1215E73C: add ecx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x1215E742: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x1215E745: mov word ptr [edx], cx */
    ecx = (int32_t)(int16_t)MEM16(edx + eax + 0x1201328A); /* 0x1215E748: movsx ecx, word ptr [edx + eax + 0x1201328a] */
    eax = (uint32_t)MEM16(esi + (-0x2)); /* 0x1215E750: movzx eax, word ptr [esi - 2] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1215E754: imul ecx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1215E757: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x400u; /* 0x1215E75A: add ecx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x1215E760: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM16(edx + 0x2) = (uint16_t)(LO16(ecx)); /* 0x1215E763: mov word ptr [edx + 2], cx */
    ecx = (int32_t)(int16_t)MEM16(edx + eax + 0x1201328C); /* 0x1215E767: movsx ecx, word ptr [edx + eax + 0x1201328c] */
    eax = (uint32_t)MEM16(esi); /* 0x1215E76F: movzx eax, word ptr [esi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1215E772: imul ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x400u; /* 0x1215E775: add ecx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x1215E77B: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM16(edx + 0x4) = (uint16_t)(LO16(ecx)); /* 0x1215E77E: mov word ptr [edx + 4], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1215E782: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1215E785: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1215E788: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp edi, 0x12013308u */ /* 0x1215E78B: cmp edi, 0x12013308 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x12013308u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E710; /* 0x1215E791: jl 0x1215e710 */
L_1215E797:
    edi = MEM32(ebp + 0x8); /* 0x1215E797: mov edi, dword ptr [ebp + 8] */
    goto L_1215E819; /* 0x1215E79A: jmp 0x1215e819 */
L_1215E79C:
    /* cmp MEM32(ecx + esi * 4 + 0x20), 0 */ /* 0x1215E79C: cmp dword ptr [ecx + esi*4 + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + esi * 4 + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215E7B9; /* 0x1215E7A1: jne 0x1215e7b9 */
L_1215E7A3:
    eax = MEM32(edi + 0x4); /* 0x1215E7A3: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax); /* 0x1215E7A6: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x100u); /* 0x1215E7A8: push 0x100 */
    PUSH32(esp, 1); /* 0x1215E7AD: push 1 */
    PUSH32(esp, edi); /* 0x1215E7AF: push edi */
    RECOMP_ICALL(eax); /* 0x1215E7B0: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1215E7B2: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + esi * 4 + 0x20) = eax; /* 0x1215E7B5: mov dword ptr [ecx + esi*4 + 0x20], eax */
L_1215E7B9:
    edi = MEM32(ecx + esi * 4 + 0x20); /* 0x1215E7B9: mov edi, dword ptr [ecx + esi*4 + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1215E7BD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x12013248u; /* 0x1215E7BF: mov edx, 0x12013248 */
L_1215E7C4:
    ecx = 0x12013248u; /* 0x1215E7C4: mov ecx, 0x12013248 */
    esp = esp; /* 0x1215E7C9: lea esp, [esp] */
L_1215E7D0:
    eax = (uint32_t)MEM16(ebx + esi * 2); /* 0x1215E7D0: movzx eax, word ptr [ebx + esi*2] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1215E7D4: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1215E7D7: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215E7DA: inc esi */
    _flag_k = FK_INC;
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x1215E7DB: fild dword ptr [ebp - 8] */
    _st[0] *= *(double*)ADDR(edx); /* 0x1215E7DE: fmul qword ptr [edx] */
    _st[0] *= *(double*)ADDR(ecx + (-0x8)); /* 0x1215E7E0: fmul qword ptr [ecx - 8] */
    _st[0] *= *(double*)ADDR(0x12005C50); /* 0x1215E7E3: fmul qword ptr [0x12005c50] */
    fp_push(1.0); /* 0x1215E7E9: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1215E7EB: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + esi * 4 + (-0x4)) = _v; } /* 0x1215E7ED: fstp dword ptr [edi + esi*4 - 4] */
    /* cmp ecx, 0x12013288u */ /* 0x1215E7F1: cmp ecx, 0x12013288 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x12013288u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E7D0; /* 0x1215E7F7: jl 0x1215e7d0 */
L_1215E7F9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x1215E7F9: add edx, 8 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x12013288u */ /* 0x1215E7FC: cmp edx, 0x12013288 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x12013288u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E7C4; /* 0x1215E802: jl 0x1215e7c4 */
L_1215E804:
    edi = MEM32(ebp + 0x8); /* 0x1215E804: mov edi, dword ptr [ebp + 8] */
    goto L_1215E819; /* 0x1215E807: jmp 0x1215e819 */
L_1215E809:
    eax = MEM32(edi); /* 0x1215E809: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x30u; /* 0x1215E80B: mov dword ptr [eax + 0x14], 0x30 */
    eax = MEM32(edi); /* 0x1215E812: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x1215E814: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1215E816: push edi */
    RECOMP_ICALL(eax); /* 0x1215E817: call eax */
    RECOMP_FLAGS_IN();
L_1215E819:
    ecx = MEM32(ebp + (-0xC)); /* 0x1215E819: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x10)); /* 0x1215E81C: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215E81F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x54u; /* 0x1215E820: add eax, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(edi + 0x3C) */ /* 0x1215E823: cmp ecx, dword ptr [edi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1215E826: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1215E829: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1215E82C: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E651; /* 0x1215E82F: jl 0x1215e651 */
L_1215E835:
    esi = POP32_VAL(esp); /* 0x1215E835: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215E836: pop ebx */
L_1215E837:
    edi = POP32_VAL(esp); /* 0x1215E837: pop edi */
    esp = ebp; /* 0x1215E838: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215E83A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215E83B: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1215E691u: goto L_1215E691;
      case 0x1215E6DBu: goto L_1215E6DB;
      case 0x1215E79Cu: goto L_1215E79C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1215E870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215E870u);

L_1215E870:
    edi = edi; /* 0x1215E870: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215E872: push ebp */
    ebp = esp; /* 0x1215E873: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x1215E875: sub esp, 0x94 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1215E87B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1215E880: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1215E882: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1215E885: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1215E889: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x170); /* 0x1215E88C: mov ecx, dword ptr [eax + 0x170] */
    eax = MEM32(ecx + 0x8); /* 0x1215E892: mov eax, dword ptr [ecx + 8] */
    MEM32(ebp + (-0x8C)) = eax; /* 0x1215E895: mov dword ptr [ebp - 0x8c], eax */
    eax = MEM32(ebp + 0xC); /* 0x1215E89B: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x10); /* 0x1215E89E: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, ebx); /* 0x1215E8A1: push ebx */
    ebx = MEM32(ecx + eax * 4 + 0xC); /* 0x1215E8A2: mov ebx, dword ptr [ecx + eax*4 + 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x1215E8A6: mov ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x10); /* 0x1215E8A9: mov eax, dword ptr [ebp + 0x10] */
    eax = eax + ecx * 4; /* 0x1215E8AC: lea eax, [eax + ecx*4] */
    PUSH32(esp, edi); /* 0x1215E8AF: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1215E8B0: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x90)) = ebx; /* 0x1215E8B3: mov dword ptr [ebp - 0x90], ebx */
    MEM32(ebp + (-0x94)) = eax; /* 0x1215E8B9: mov dword ptr [ebp - 0x94], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1215EA30; /* 0x1215E8BF: jbe 0x1215ea30 */
L_1215E8C5:
    eax = ebp + (-0x84); /* 0x1215E8C5: lea eax, [ebp - 0x84] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1215E8CB: sub edi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x88)) = edi; /* 0x1215E8CD: mov dword ptr [ebp - 0x88], edi */
    PUSH32(esp, esi); /* 0x1215E8D3: push esi */
    goto L_1215E8E0; /* 0x1215E8D4: jmp 0x1215e8e0 */
L_1215E8E0:
    ebx = MEM32(ebp + 0x1C); /* 0x1215E8E0: mov ebx, dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + (-0x94)); /* 0x1215E8E3: mov edi, dword ptr [ebp - 0x94] */
    edx = ebp + (-0x84); /* 0x1215E8E9: lea edx, [ebp - 0x84] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1215E8EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1215E8F1:
    ecx = MEM32(edi + esi * 4); /* 0x1215E8F1: mov ecx, dword ptr [edi + esi*4] */
    eax = (uint32_t)MEM8(ecx + ebx); /* 0x1215E8F4: movzx eax, byte ptr [ecx + ebx] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF80u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF80u); /* 0x1215E8F8: add ax, -0x80 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1215E8FC: mov word ptr [edx], ax */
    eax = (uint32_t)MEM8(ecx + ebx + 0x1); /* 0x1215E8FF: movzx eax, byte ptr [ecx + ebx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1215E904: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF80u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF80u); /* 0x1215E906: add ax, -0x80 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(edx + 0x2) = (uint16_t)(LO16(eax)); /* 0x1215E90A: mov word ptr [edx + 2], ax */
    eax = (uint32_t)MEM8(ecx + 0x2); /* 0x1215E90E: movzx eax, byte ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF80u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF80u); /* 0x1215E912: add ax, -0x80 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(edx + 0x4) = (uint16_t)(LO16(eax)); /* 0x1215E916: mov word ptr [edx + 4], ax */
    eax = (uint32_t)MEM8(ecx + 0x3); /* 0x1215E91A: movzx eax, byte ptr [ecx + 3] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF80u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF80u); /* 0x1215E91E: add ax, -0x80 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(edx + 0x6) = (uint16_t)(LO16(eax)); /* 0x1215E922: mov word ptr [edx + 6], ax */
    eax = (uint32_t)MEM8(ecx + 0x4); /* 0x1215E926: movzx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF80u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF80u); /* 0x1215E92A: add ax, -0x80 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(edx + 0x8) = (uint16_t)(LO16(eax)); /* 0x1215E92E: mov word ptr [edx + 8], ax */
    eax = (uint32_t)MEM8(ecx + 0x5); /* 0x1215E932: movzx eax, byte ptr [ecx + 5] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF80u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF80u); /* 0x1215E936: add ax, -0x80 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(edx + 0xA) = (uint16_t)(LO16(eax)); /* 0x1215E93A: mov word ptr [edx + 0xa], ax */
    eax = (uint32_t)MEM8(ecx + 0x6); /* 0x1215E93E: movzx eax, byte ptr [ecx + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 6; /* 0x1215E942: add ecx, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF80u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF80u); /* 0x1215E945: add ax, -0x80 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(edx + 0xC) = (uint16_t)(LO16(eax)); /* 0x1215E949: mov word ptr [edx + 0xc], ax */
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x1215E94D: movzx eax, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFFFF80u) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + 0xFFFFFF80u); /* 0x1215E951: add ax, -0x80 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(edx + 0xE) = (uint16_t)(LO16(eax)); /* 0x1215E955: mov word ptr [edx + 0xe], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215E959: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1215E95A: add edx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp esi, 8 */ /* 0x1215E95D: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E8F1; /* 0x1215E960: jl 0x1215e8f1 */
L_1215E962:
    eax = ebp + (-0x84); /* 0x1215E962: lea eax, [ebp - 0x84] */
    PUSH32(esp, eax); /* 0x1215E968: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x8C))); /* 0x1215E969: call dword ptr [ebp - 0x8c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x88)); /* 0x1215E96F: mov edi, dword ptr [ebp - 0x88] */
    ebx = MEM32(ebp + (-0x90)); /* 0x1215E975: mov ebx, dword ptr [ebp - 0x90] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1215E97B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x1215E97D: lea ecx, [ecx] */
L_1215E980:
    eax = (uint32_t)MEM16(ebp + esi * 2 + (-0x84)); /* 0x1215E980: movzx eax, word ptr [ebp + esi*2 - 0x84] */
    edx = (uint32_t)MEM16(ebx + esi * 2); /* 0x1215E988: movzx edx, word ptr [ebx + esi*2] */
    SET_LO16(ecx, LO16(eax)); /* 0x1215E98C: mov cx, ax */
    MEM32(ebp + (-0x88)) = eax; /* 0x1215E98F: mov dword ptr [ebp - 0x88], eax */
    SET_LO16(eax, LO16(edx)); /* 0x1215E995: mov ax, dx */
    if (1u) _cf = (((LO16(eax)) >> 0) & 1u); /* 0x1215E998: sar ax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)(((uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 1u))) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(eax, (uint32_t)((int32_t)(int32_t)(int16_t)(LO16(eax)) >> 1u));
    /* test LO16(ecx), LO16(ecx) */ /* 0x1215E99B: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1215E9D7; /* 0x1215E99E: jns 0x1215e9d7 */
L_1215E9A0:
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - LO16(ecx)); /* 0x1215E9A0: sub ax, cx */
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = (uint32_t)LO16(eax); /* 0x1215E9A3: movzx eax, ax */
    MEM32(ebp + (-0x88)) = eax; /* 0x1215E9A6: mov dword ptr [ebp - 0x88], eax */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1215E9AC: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E9C8; /* 0x1215E9AF: jl 0x1215e9c8 */
L_1215E9B1:
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x1215E9B1: cwde  */
    ecx = (int32_t)(int16_t)LO16(edx); /* 0x1215E9B2: movsx ecx, dx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215E9B5: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1215E9B6: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)LO16(eax); /* 0x1215E9B8: movzx eax, ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1215E9BB: neg eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x1215E9BD: movzx eax, ax */
    MEM32(ebp + (-0x88)) = eax; /* 0x1215E9C0: mov dword ptr [ebp - 0x88], eax */
    goto L_1215E9FD; /* 0x1215E9C6: jmp 0x1215e9fd */
L_1215E9C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215E9C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1215E9CA: neg eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(eax); /* 0x1215E9CC: movzx eax, ax */
    MEM32(ebp + (-0x88)) = eax; /* 0x1215E9CF: mov dword ptr [ebp - 0x88], eax */
    goto L_1215E9FD; /* 0x1215E9D5: jmp 0x1215e9fd */
L_1215E9D7:
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + LO16(eax)); /* 0x1215E9D7: add cx, ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    /* cmp LO16(ecx), LO16(edx) */ /* 0x1215E9DA: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E9F3; /* 0x1215E9DD: jl 0x1215e9f3 */
L_1215E9DF:
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x1215E9DF: movsx eax, cx */
    ecx = (int32_t)(int16_t)LO16(edx); /* 0x1215E9E2: movsx ecx, dx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215E9E5: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1215E9E6: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)LO16(eax); /* 0x1215E9E8: movzx eax, ax */
    MEM32(ebp + (-0x88)) = eax; /* 0x1215E9EB: mov dword ptr [ebp - 0x88], eax */
    goto L_1215E9FD; /* 0x1215E9F1: jmp 0x1215e9fd */
L_1215E9F3:
    MEM32(ebp + (-0x88)) = 0; /* 0x1215E9F3: mov dword ptr [ebp - 0x88], 0 */
L_1215E9FD:
    SET_LO16(eax, MEM16(ebp + (-0x88))); /* 0x1215E9FD: mov ax, word ptr [ebp - 0x88] */
    ecx = edi + esi * 2; /* 0x1215EA04: lea ecx, [edi + esi*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215EA07: inc esi */
    _flag_k = FK_INC;
    MEM16(ebp + ecx + (-0x84)) = (uint16_t)(LO16(eax)); /* 0x1215EA08: mov word ptr [ebp + ecx - 0x84], ax */
    /* cmp esi, 0x40u */ /* 0x1215EA10: cmp esi, 0x40 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215E980; /* 0x1215EA13: jl 0x1215e980 */
L_1215EA19:
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 8; /* 0x1215EA19: add dword ptr [ebp + 0x1c], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0xFFFFFF80u; /* 0x1215EA1D: sub edi, -0x80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) - 1; /* 0x1215EA20: dec dword ptr [ebp + 0x20] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x88)) = edi; /* 0x1215EA23: mov dword ptr [ebp - 0x88], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215E8E0; /* 0x1215EA29: jne 0x1215e8e0 */
L_1215EA2F:
    esi = POP32_VAL(esp); /* 0x1215EA2F: pop esi */
L_1215EA30:
    ecx = MEM32(ebp + (-0x4)); /* 0x1215EA30: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1215EA33: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1215EA34: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1215EA36: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1215EA37: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1215EA3C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215EA3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1215EA3F: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1215EA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215EA50u);

L_1215EA50:
    edi = edi; /* 0x1215EA50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215EA52: push ebp */
    ebp = esp; /* 0x1215EA53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x118u; /* 0x1215EA55: sub esp, 0x118 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1215EA5B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1215EA60: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1215EA62: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1215EA65: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1215EA69: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x170); /* 0x1215EA6C: mov ecx, dword ptr [eax + 0x170] */
    eax = MEM32(ecx + 0x1C); /* 0x1215EA72: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(ebp + (-0x110)) = eax; /* 0x1215EA75: mov dword ptr [ebp - 0x110], eax */
    eax = MEM32(ebp + 0xC); /* 0x1215EA7B: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x10); /* 0x1215EA7E: mov eax, dword ptr [eax + 0x10] */
    eax = MEM32(ecx + eax * 4 + 0x20); /* 0x1215EA81: mov eax, dword ptr [ecx + eax*4 + 0x20] */
    ecx = MEM32(ebp + 0x18); /* 0x1215EA85: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x114)) = eax; /* 0x1215EA88: mov dword ptr [ebp - 0x114], eax */
    eax = MEM32(ebp + 0x10); /* 0x1215EA8E: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1215EA91: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1215EA92: mov edi, dword ptr [ebp + 0x14] */
    eax = eax + ecx * 4; /* 0x1215EA95: lea eax, [eax + ecx*4] */
    MEM32(ebp + (-0x10C)) = edi; /* 0x1215EA98: mov dword ptr [ebp - 0x10c], edi */
    MEM32(ebp + (-0x118)) = eax; /* 0x1215EA9E: mov dword ptr [ebp - 0x118], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1215EBEC; /* 0x1215EAA4: jbe 0x1215ebec */
L_1215EAAA:
    PUSH32(esp, ebx); /* 0x1215EAAA: push ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x1215EAAB: mov ebx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x1215EAAE: push esi */
    /* nop */ /* 0x1215EAAF: nop  */
L_1215EAB0:
    edi = MEM32(ebp + (-0x118)); /* 0x1215EAB0: mov edi, dword ptr [ebp - 0x118] */
    edx = ebp + (-0x104); /* 0x1215EAB6: lea edx, [ebp - 0x104] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1215EABC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edi; /* 0x1215EABE: mov edi, edi */
L_1215EAC0:
    ecx = MEM32(edi + esi * 4); /* 0x1215EAC0: mov ecx, dword ptr [edi + esi*4] */
    eax = (uint32_t)MEM8(ecx + ebx); /* 0x1215EAC3: movzx eax, byte ptr [ecx + ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1215EAC7: add eax, -0x80 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1215EACA: add ecx, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x1215EACC: mov dword ptr [ebp - 0x108], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215EAD2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x1215EAD3: add edx, 0x20 */
    _flag_k = FK_ADD;
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1215EAD6: fild dword ptr [ebp - 0x108] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x20)) = _v; } /* 0x1215EADC: fstp dword ptr [edx - 0x20] */
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x1215EADF: movzx eax, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1215EAE3: add eax, -0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x1215EAE6: mov dword ptr [ebp - 0x108], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1215EAEC: fild dword ptr [ebp - 0x108] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x1C)) = _v; } /* 0x1215EAF2: fstp dword ptr [edx - 0x1c] */
    eax = (uint32_t)MEM8(ecx + 0x2); /* 0x1215EAF5: movzx eax, byte ptr [ecx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1215EAF9: add eax, -0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x1215EAFC: mov dword ptr [ebp - 0x108], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1215EB02: fild dword ptr [ebp - 0x108] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x18)) = _v; } /* 0x1215EB08: fstp dword ptr [edx - 0x18] */
    eax = (uint32_t)MEM8(ecx + 0x3); /* 0x1215EB0B: movzx eax, byte ptr [ecx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1215EB0F: add eax, -0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x1215EB12: mov dword ptr [ebp - 0x108], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1215EB18: fild dword ptr [ebp - 0x108] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x14)) = _v; } /* 0x1215EB1E: fstp dword ptr [edx - 0x14] */
    eax = (uint32_t)MEM8(ecx + 0x4); /* 0x1215EB21: movzx eax, byte ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1215EB25: add eax, -0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x1215EB28: mov dword ptr [ebp - 0x108], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1215EB2E: fild dword ptr [ebp - 0x108] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x10)) = _v; } /* 0x1215EB34: fstp dword ptr [edx - 0x10] */
    eax = (uint32_t)MEM8(ecx + 0x5); /* 0x1215EB37: movzx eax, byte ptr [ecx + 5] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1215EB3B: add eax, -0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x1215EB3E: mov dword ptr [ebp - 0x108], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1215EB44: fild dword ptr [ebp - 0x108] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0xC)) = _v; } /* 0x1215EB4A: fstp dword ptr [edx - 0xc] */
    eax = (uint32_t)MEM8(ecx + 0x6); /* 0x1215EB4D: movzx eax, byte ptr [ecx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1215EB51: add eax, -0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x1215EB54: mov dword ptr [ebp - 0x108], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1215EB5A: fild dword ptr [ebp - 0x108] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x8)) = _v; } /* 0x1215EB60: fstp dword ptr [edx - 8] */
    eax = (uint32_t)MEM8(ecx + 0x7); /* 0x1215EB63: movzx eax, byte ptr [ecx + 7] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFF80u; /* 0x1215EB67: add eax, -0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x1215EB6A: mov dword ptr [ebp - 0x108], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1215EB70: fild dword ptr [ebp - 0x108] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x4)) = _v; } /* 0x1215EB76: fstp dword ptr [edx - 4] */
    /* cmp esi, 8 */ /* 0x1215EB79: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215EAC0; /* 0x1215EB7C: jl 0x1215eac0 */
L_1215EB82:
    eax = ebp + (-0x104); /* 0x1215EB82: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x1215EB88: push eax */
    RECOMP_ICALL(MEM32(ebp + (-0x110))); /* 0x1215EB89: call dword ptr [ebp - 0x110] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x10C)); /* 0x1215EB8F: mov edi, dword ptr [ebp - 0x10c] */
    ebx = MEM32(ebp + (-0x114)); /* 0x1215EB95: mov ebx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1215EB9B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x1215EB9D: lea ecx, [ecx] */
L_1215EBA0:
    fp_push(*(float*)&MEM32(ebx + esi * 4)); /* 0x1215EBA0: fld dword ptr [ebx + esi*4] */
    _st[0] *= (double)*(float*)ADDR(ebp + esi * 4 + (-0x104)); /* 0x1215EBA3: fmul dword ptr [ebp + esi*4 - 0x104] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x108)) = _v; } /* 0x1215EBAA: fstp dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebp + (-0x108))); /* 0x1215EBB0: fld dword ptr [ebp - 0x108] */
    _st[0] += *(double*)ADDR(0x12013308); /* 0x1215EBB6: fadd qword ptr [0x12013308] */
    RECOMP_CALL(sub_121BF371); /* 0x1215EBBC: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x4000u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(eax, LO16(eax) - 0x4000u); /* 0x1215EBC1: sub ax, 0x4000 */
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(edi + esi * 2) = (uint16_t)(LO16(eax)); /* 0x1215EBC5: mov word ptr [edi + esi*2], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215EBC9: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x40u */ /* 0x1215EBCA: cmp esi, 0x40 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215EBA0; /* 0x1215EBCD: jl 0x1215eba0 */
L_1215EBCF:
    ebx = MEM32(ebp + 0x1C); /* 0x1215EBCF: mov ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0xFFFFFF80u; /* 0x1215EBD2: sub edi, -0x80 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1215EBD5: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) - 1; /* 0x1215EBD8: dec dword ptr [ebp + 0x20] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10C)) = edi; /* 0x1215EBDB: mov dword ptr [ebp - 0x10c], edi */
    MEM32(ebp + 0x1C) = ebx; /* 0x1215EBE1: mov dword ptr [ebp + 0x1c], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215EAB0; /* 0x1215EBE4: jne 0x1215eab0 */
L_1215EBEA:
    esi = POP32_VAL(esp); /* 0x1215EBEA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215EBEB: pop ebx */
L_1215EBEC:
    ecx = MEM32(ebp + (-0x4)); /* 0x1215EBEC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1215EBEF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1215EBF1: pop edi */
    RECOMP_CALL(sub_121BECF5); /* 0x1215EBF2: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1215EBF7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215EBF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1215EBFA: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1215EC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215EC10u);

L_1215EC10:
    edi = edi; /* 0x1215EC10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215EC12: push ebp */
    ebp = esp; /* 0x1215EC13: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1215EC15: push esi */
    PUSH32(esp, edi); /* 0x1215EC16: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1215EC17: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x4); /* 0x1215EC1A: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax); /* 0x1215EC1D: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x30u); /* 0x1215EC1F: push 0x30 */
    PUSH32(esp, 1); /* 0x1215EC21: push 1 */
    PUSH32(esp, edi); /* 0x1215EC23: push edi */
    RECOMP_ICALL(eax); /* 0x1215EC24: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1215EC26: mov esi, eax */
    MEM32(edi + 0x170) = esi; /* 0x1215EC28: mov dword ptr [edi + 0x170], esi */
    MEM32(esi) = 0x1215E620u; /* 0x1215EC2E: mov dword ptr [esi], 0x1215e620 */
    eax = MEM32(edi + 0xC4); /* 0x1215EC34: mov eax, dword ptr [edi + 0xc4] */
    /* cmp eax, 6 */ /* 0x1215EC3A: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1215EC76; /* 0x1215EC3D: ja 0x1215ec76 */
L_1215EC3F:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1215ECC4)); goto _ljump; }
L_1215EC46:
    MEM32(esi + 0x4) = 0x1215E870u; /* 0x1215EC46: mov dword ptr [esi + 4], 0x1215e870 */
    MEM32(esi + 0x8) = 0x12164090u; /* 0x1215EC4D: mov dword ptr [esi + 8], 0x12164090 */
    goto L_1215EC86; /* 0x1215EC54: jmp 0x1215ec86 */
L_1215EC56:
    MEM32(esi + 0x4) = 0x1215E870u; /* 0x1215EC56: mov dword ptr [esi + 4], 0x1215e870 */
    MEM32(esi + 0x8) = 0x12163DD0u; /* 0x1215EC5D: mov dword ptr [esi + 8], 0x12163dd0 */
    goto L_1215EC86; /* 0x1215EC64: jmp 0x1215ec86 */
L_1215EC66:
    MEM32(esi + 0x4) = 0x1215EA50u; /* 0x1215EC66: mov dword ptr [esi + 4], 0x1215ea50 */
    MEM32(esi + 0x1C) = 0x12163AE0u; /* 0x1215EC6D: mov dword ptr [esi + 0x1c], 0x12163ae0 */
    goto L_1215EC86; /* 0x1215EC74: jmp 0x1215ec86 */
L_1215EC76:
    eax = MEM32(edi); /* 0x1215EC76: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x30u; /* 0x1215EC78: mov dword ptr [eax + 0x14], 0x30 */
    eax = MEM32(edi); /* 0x1215EC7F: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x1215EC81: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1215EC83: push edi */
    RECOMP_ICALL(eax); /* 0x1215EC84: call eax */
    RECOMP_FLAGS_IN();
L_1215EC86:
    edi = POP32_VAL(esp); /* 0x1215EC86: pop edi */
    MEM32(esi + 0xC) = 0; /* 0x1215EC87: mov dword ptr [esi + 0xc], 0 */
    MEM32(esi + 0x20) = 0; /* 0x1215EC8E: mov dword ptr [esi + 0x20], 0 */
    MEM32(esi + 0x10) = 0; /* 0x1215EC95: mov dword ptr [esi + 0x10], 0 */
    MEM32(esi + 0x24) = 0; /* 0x1215EC9C: mov dword ptr [esi + 0x24], 0 */
    MEM32(esi + 0x14) = 0; /* 0x1215ECA3: mov dword ptr [esi + 0x14], 0 */
    MEM32(esi + 0x28) = 0; /* 0x1215ECAA: mov dword ptr [esi + 0x28], 0 */
    MEM32(esi + 0x18) = 0; /* 0x1215ECB1: mov dword ptr [esi + 0x18], 0 */
    MEM32(esi + 0x2C) = 0; /* 0x1215ECB8: mov dword ptr [esi + 0x2c], 0 */
    esi = POP32_VAL(esp); /* 0x1215ECBF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215ECC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215ECC1: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1215EC46u: goto L_1215EC46;
      case 0x1215EC56u: goto L_1215EC56;
      case 0x1215EC66u: goto L_1215EC66;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1215ECF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215ECF0u);

L_1215ECF0:
    edi = edi; /* 0x1215ECF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215ECF2: push ebp */
    ebp = esp; /* 0x1215ECF3: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1215ECF5: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1215ECF9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215ECFA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1215ECFD: push edi */
    edi = MEM32(esi + 0x15C); /* 0x1215ECFE: mov edi, dword ptr [esi + 0x15c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215ED16; /* 0x1215ED04: je 0x1215ed16 */
L_1215ED06:
    eax = MEM32(esi); /* 0x1215ED06: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 4; /* 0x1215ED08: mov dword ptr [eax + 0x14], 4 */
    eax = MEM32(esi); /* 0x1215ED0F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215ED11: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215ED13: push esi */
    RECOMP_ICALL(eax); /* 0x1215ED14: call eax */
    RECOMP_FLAGS_IN();
L_1215ED16:
    eax = MEM32(esi + 0x20); /* 0x1215ED16: mov eax, dword ptr [esi + 0x20] */
    MEM32(edi + 0x30) = eax; /* 0x1215ED19: mov dword ptr [edi + 0x30], eax */
    MEM32(edi + 0x34) = 0; /* 0x1215ED1C: mov dword ptr [edi + 0x34], 0 */
    MEM32(edi + 0x38) = 0; /* 0x1215ED23: mov dword ptr [edi + 0x38], 0 */
    eax = MEM32(esi + 0xF4); /* 0x1215ED2A: mov eax, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215ED30: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x3C) = eax; /* 0x1215ED32: mov dword ptr [edi + 0x3c], eax */
    edi = POP32_VAL(esp); /* 0x1215ED35: pop edi */
    esi = POP32_VAL(esp); /* 0x1215ED36: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215ED37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215ED38: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1215ED40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215ED40u);

L_1215ED40:
    edi = edi; /* 0x1215ED40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215ED42: push ebp */
    ebp = esp; /* 0x1215ED43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1215ED45: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x14); /* 0x1215ED48: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1215ED4B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1215ED4C: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x15C); /* 0x1215ED4F: mov eax, dword ptr [ebx + 0x15c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1215ED55: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1215ED58: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax), ecx */ /* 0x1215ED5B: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1215EF11; /* 0x1215ED5D: jae 0x1215ef11 */
L_1215ED63:
    PUSH32(esp, esi); /* 0x1215ED63: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x1215ED64: mov esi, dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x1215ED67: push edi */
    edi = MEM32(ebp + 0x20); /* 0x1215ED68: mov edi, dword ptr [ebp + 0x20] */
    goto L_1215ED70; /* 0x1215ED6B: jmp 0x1215ed70 */
L_1215ED70:
    /* cmp MEM32(esi), edi */ /* 0x1215ED70: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1215EF0F; /* 0x1215ED72: jae 0x1215ef0f */
L_1215ED78:
    edx = MEM32(eax); /* 0x1215ED78: mov edx, dword ptr [eax] */
    esi = MEM32(ebx + 0xF4); /* 0x1215ED7A: mov esi, dword ptr [ebx + 0xf4] */
    eax = ecx; /* 0x1215ED80: mov eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1215ED82: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ecx + 0x34); /* 0x1215ED85: sub esi, dword ptr [ecx + 0x34] */
    _flag_k = FK_CMP;
    edi = ecx + 0x34; /* 0x1215ED88: lea edi, [ecx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1215ED8B: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1215ED8D: mov dword ptr [ebp - 0x1c], edi */
    /* cmp esi, eax */ /* 0x1215ED90: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1215ED96; /* 0x1215ED92: jb 0x1215ed96 */
L_1215ED94:
    esi = eax; /* 0x1215ED94: mov esi, eax */
L_1215ED96:
    PUSH32(esp, esi); /* 0x1215ED96: push esi */
    PUSH32(esp, MEM32(edi)); /* 0x1215ED97: push dword ptr [edi] */
    eax = ecx + 0x8; /* 0x1215ED99: lea eax, [ecx + 8] */
    ecx = MEM32(ebx + 0x168); /* 0x1215ED9C: mov ecx, dword ptr [ebx + 0x168] */
    PUSH32(esp, eax); /* 0x1215EDA2: push eax */
    eax = MEM32(ebp + 0xC); /* 0x1215EDA3: mov eax, dword ptr [ebp + 0xc] */
    eax = eax + edx * 4; /* 0x1215EDA6: lea eax, [eax + edx*4] */
    PUSH32(esp, eax); /* 0x1215EDA9: push eax */
    eax = MEM32(ecx + 0x4); /* 0x1215EDAA: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, ebx); /* 0x1215EDAD: push ebx */
    RECOMP_ICALL(eax); /* 0x1215EDAE: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1215EDB0: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + esi; /* 0x1215EDB3: add dword ptr [eax], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + esi; /* 0x1215EDB5: add dword ptr [edi], esi */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x1215EDB7: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(edx + 0x30)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edx + 0x30) = MEM32(edx + 0x30) - esi; /* 0x1215EDBA: sub dword ptr [edx + 0x30], esi */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x1215EDBD: mov eax, dword ptr [edi] */
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1215EE43; /* 0x1215EDBF: jne 0x1215ee43 */
L_1215EDC5:
    /* cmp eax, MEM32(ebx + 0xF4) */ /* 0x1215EDC5: cmp eax, dword ptr [ebx + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1215EE43; /* 0x1215EDCB: jge 0x1215ee43 */
L_1215EDCD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1215EDCD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x1215EDCF: mov dword ptr [ebp - 8], edx */
    /* cmp MEM32(ebx + 0x3C), edx */ /* 0x1215EDD2: cmp dword ptr [ebx + 0x3c], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215EE38; /* 0x1215EDD5: jle 0x1215ee38 */
L_1215EDD7:
    ecx = MEM32(ebp + (-0x4)); /* 0x1215EDD7: mov ecx, dword ptr [ebp - 4] */
    eax = ecx + 0x8; /* 0x1215EDDA: lea eax, [ecx + 8] */
    edi = eax; /* 0x1215EDDD: mov edi, eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1215EDDF: mov dword ptr [ebp - 0xc], eax */
L_1215EDE2:
    eax = MEM32(ebx + 0xF4); /* 0x1215EDE2: mov eax, dword ptr [ebx + 0xf4] */
    esi = MEM32(ecx + 0x34); /* 0x1215EDE8: mov esi, dword ptr [ecx + 0x34] */
    ecx = MEM32(ebx + 0x1C); /* 0x1215EDEB: mov ecx, dword ptr [ebx + 0x1c] */
    edi = MEM32(edi); /* 0x1215EDEE: mov edi, dword ptr [edi] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1215EDF0: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1215EDF3: mov dword ptr [ebp - 0x18], ecx */
    /* cmp esi, eax */ /* 0x1215EDF6: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1215EE20; /* 0x1215EDF8: jge 0x1215ee20 */
L_1215EDFA:
    ebx = MEM32(ebp + (-0x10)); /* 0x1215EDFA: mov ebx, dword ptr [ebp - 0x10] */
    eax = esi + (-0x1); /* 0x1215EDFD: lea eax, [esi - 1] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1215EE00: mov dword ptr [ebp - 0x14], eax */
L_1215EE03:
    PUSH32(esp, ecx); /* 0x1215EE03: push ecx */
    PUSH32(esp, 1); /* 0x1215EE04: push 1 */
    PUSH32(esp, esi); /* 0x1215EE06: push esi */
    PUSH32(esp, edi); /* 0x1215EE07: push edi */
    PUSH32(esp, eax); /* 0x1215EE08: push eax */
    PUSH32(esp, edi); /* 0x1215EE09: push edi */
    RECOMP_CALL(sub_121540D0); /* 0x1215EE0A: call 0x121540d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1215EE0F: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1215EE12: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215EE15: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x1215EE16: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215EE03; /* 0x1215EE18: jl 0x1215ee03 */
L_1215EE1A:
    ebx = MEM32(ebp + 0x8); /* 0x1215EE1A: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x8)); /* 0x1215EE1D: mov edx, dword ptr [ebp - 8] */
L_1215EE20:
    edi = MEM32(ebp + (-0xC)); /* 0x1215EE20: mov edi, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1215EE23: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1215EE26: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1215EE27: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x1215EE2A: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0xC)) = edi; /* 0x1215EE2D: mov dword ptr [ebp - 0xc], edi */
    /* cmp edx, MEM32(ebx + 0x3C) */ /* 0x1215EE30: cmp edx, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215EDE2; /* 0x1215EE33: jl 0x1215ede2 */
L_1215EE35:
    edi = MEM32(ebp + (-0x1C)); /* 0x1215EE35: mov edi, dword ptr [ebp - 0x1c] */
L_1215EE38:
    eax = MEM32(ebx + 0xF4); /* 0x1215EE38: mov eax, dword ptr [ebx + 0xf4] */
    edx = MEM32(ebp + (-0x4)); /* 0x1215EE3E: mov edx, dword ptr [ebp - 4] */
    MEM32(edi) = eax; /* 0x1215EE41: mov dword ptr [edi], eax */
L_1215EE43:
    eax = MEM32(edi); /* 0x1215EE43: mov eax, dword ptr [edi] */
    esi = MEM32(ebp + 0x1C); /* 0x1215EE45: mov esi, dword ptr [ebp + 0x1c] */
    /* cmp eax, MEM32(ebx + 0xF4) */ /* 0x1215EE48: cmp eax, dword ptr [ebx + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215EE6F; /* 0x1215EE4E: jne 0x1215ee6f */
L_1215EE50:
    PUSH32(esp, MEM32(esi)); /* 0x1215EE50: push dword ptr [esi] */
    eax = MEM32(ebx + 0x16C); /* 0x1215EE52: mov eax, dword ptr [ebx + 0x16c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1215EE58: push dword ptr [ebp + 0x18] */
    eax = MEM32(eax + 0x4); /* 0x1215EE5B: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0); /* 0x1215EE5E: push 0 */
    ecx = edx + 0x8; /* 0x1215EE60: lea ecx, [edx + 8] */
    PUSH32(esp, ecx); /* 0x1215EE63: push ecx */
    PUSH32(esp, ebx); /* 0x1215EE64: push ebx */
    RECOMP_ICALL(eax); /* 0x1215EE65: call eax */
    RECOMP_FLAGS_IN();
    MEM32(edi) = 0; /* 0x1215EE67: mov dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1215EE6D: inc dword ptr [esi] */
    _flag_k = FK_INC;
L_1215EE6F:
    eax = MEM32(ebp + (-0x4)); /* 0x1215EE6F: mov eax, dword ptr [ebp - 4] */
    /* cmp MEM32(eax + 0x30), 0 */ /* 0x1215EE72: cmp dword ptr [eax + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x20); /* 0x1215EE76: mov edi, dword ptr [ebp + 0x20] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215EE7F; /* 0x1215EE79: jne 0x1215ee7f */
L_1215EE7B:
    /* cmp MEM32(esi), edi */ /* 0x1215EE7B: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1215EE96; /* 0x1215EE7D: jb 0x1215ee96 */
L_1215EE7F:
    eax = MEM32(ebp + 0x10); /* 0x1215EE7F: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x14); /* 0x1215EE82: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax), ecx */ /* 0x1215EE85: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1215ED70; /* 0x1215EE87: jb 0x1215ed70 */
L_1215EE8D:
    edi = POP32_VAL(esp); /* 0x1215EE8D: pop edi */
    esi = POP32_VAL(esp); /* 0x1215EE8E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215EE8F: pop ebx */
    esp = ebp; /* 0x1215EE90: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215EE92: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1215EE93: ret 0x1c */
L_1215EE96:
    edx = MEM32(ebx + 0x44); /* 0x1215EE96: mov edx, dword ptr [ebx + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1215EE99: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ecx; /* 0x1215EE9B: mov dword ptr [ebp + 0x10], ecx */
    /* cmp MEM32(ebx + 0x3C), ecx */ /* 0x1215EE9E: cmp dword ptr [ebx + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215EF0D; /* 0x1215EEA1: jle 0x1215ef0d */
L_1215EEA3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x1215EEA3: add edx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = edx; /* 0x1215EEA6: mov dword ptr [ebp + 0x14], edx */
    esp = esp; /* 0x1215EEA9: lea esp, [esp] */
L_1215EEB0:
    eax = MEM32(edx); /* 0x1215EEB0: mov eax, dword ptr [edx] */
    esi = MEM32(esi); /* 0x1215EEB2: mov esi, dword ptr [esi] */
    ebx = eax; /* 0x1215EEB4: mov ebx, eax */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x1215EEB6: imul esi, eax */
    eax = MEM32(edx + 0x10); /* 0x1215EEB9: mov eax, dword ptr [edx + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x1215EEBC: imul ebx, edi */
    edi = MEM32(ebp + 0x18); /* 0x1215EEBF: mov edi, dword ptr [ebp + 0x18] */
    edi = MEM32(edi + ecx * 4); /* 0x1215EEC2: mov edi, dword ptr [edi + ecx*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215EEC5: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215EEC7: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215EEC9: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x1215EECB: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, ebx */ /* 0x1215EECE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1215EEF5; /* 0x1215EED0: jge 0x1215eef5 */
L_1215EED2:
    ecx = esi + (-0x1); /* 0x1215EED2: lea ecx, [esi - 1] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1215EED5: mov dword ptr [ebp - 0x1c], ecx */
L_1215EED8:
    PUSH32(esp, eax); /* 0x1215EED8: push eax */
    PUSH32(esp, 1); /* 0x1215EED9: push 1 */
    PUSH32(esp, esi); /* 0x1215EEDB: push esi */
    PUSH32(esp, edi); /* 0x1215EEDC: push edi */
    PUSH32(esp, ecx); /* 0x1215EEDD: push ecx */
    PUSH32(esp, edi); /* 0x1215EEDE: push edi */
    RECOMP_CALL(sub_121540D0); /* 0x1215EEDF: call 0x121540d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1215EEE4: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1215EEE7: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215EEEA: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x1215EEEB: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215EED8; /* 0x1215EEED: jl 0x1215eed8 */
L_1215EEEF:
    ecx = MEM32(ebp + 0x10); /* 0x1215EEEF: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x14); /* 0x1215EEF2: mov edx, dword ptr [ebp + 0x14] */
L_1215EEF5:
    eax = MEM32(ebp + 0x8); /* 0x1215EEF5: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x1C); /* 0x1215EEF8: mov esi, dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0x20); /* 0x1215EEFB: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215EEFE: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x54u; /* 0x1215EEFF: add edx, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ecx; /* 0x1215EF02: mov dword ptr [ebp + 0x10], ecx */
    MEM32(ebp + 0x14) = edx; /* 0x1215EF05: mov dword ptr [ebp + 0x14], edx */
    /* cmp ecx, MEM32(eax + 0x3C) */ /* 0x1215EF08: cmp ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215EEB0; /* 0x1215EF0B: jl 0x1215eeb0 */
L_1215EF0D:
    MEM32(esi) = edi; /* 0x1215EF0D: mov dword ptr [esi], edi */
L_1215EF0F:
    edi = POP32_VAL(esp); /* 0x1215EF0F: pop edi */
    esi = POP32_VAL(esp); /* 0x1215EF10: pop esi */
L_1215EF11:
    ebx = POP32_VAL(esp); /* 0x1215EF11: pop ebx */
    esp = ebp; /* 0x1215EF12: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215EF14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1215EF15: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1215EF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215EF20u);

L_1215EF20:
    edi = edi; /* 0x1215EF20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215EF22: push ebp */
    ebp = esp; /* 0x1215EF23: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1215EF25: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x20); /* 0x1215EF28: mov ecx, dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x1215EF2B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1215EF2C: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0xF4); /* 0x1215EF2F: mov eax, dword ptr [ebx + 0xf4] */
    eax = eax + eax * 2; /* 0x1215EF35: lea eax, [eax + eax*2] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1215EF38: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1215EF3B: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x1215EF3E: push esi */
    esi = MEM32(ebx + 0x15C); /* 0x1215EF3F: mov esi, dword ptr [ebx + 0x15c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x1215EF45: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(eax), ecx */ /* 0x1215EF48: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1215F106; /* 0x1215EF4A: jae 0x1215f106 */
L_1215EF50:
    ecx = MEM32(ebp + 0x14); /* 0x1215EF50: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1215EF53: push edi */
L_1215EF54:
    eax = MEM32(ebp + 0x10); /* 0x1215EF54: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x1215EF57: mov eax, dword ptr [eax] */
    /* cmp eax, ecx */ /* 0x1215EF59: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1215F01E; /* 0x1215EF5B: jae 0x1215f01e */
L_1215EF61:
    edi = MEM32(esi + 0x3C); /* 0x1215EF61: mov edi, dword ptr [esi + 0x3c] */
    edx = esi + 0x34; /* 0x1215EF64: lea edx, [esi + 0x34] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1215EF67: mov dword ptr [ebp - 8], edx */
    edx = MEM32(edx); /* 0x1215EF6A: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1215EF6C: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1215EF6E: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edi; /* 0x1215EF70: mov dword ptr [ebp - 0x14], edi */
    /* cmp edi, ecx */ /* 0x1215EF73: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1215EF7C; /* 0x1215EF75: jb 0x1215ef7c */
L_1215EF77:
    edi = ecx; /* 0x1215EF77: mov edi, ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1215EF79: mov dword ptr [ebp - 0x14], ecx */
L_1215EF7C:
    ecx = MEM32(ebx + 0x168); /* 0x1215EF7C: mov ecx, dword ptr [ebx + 0x168] */
    PUSH32(esp, edi); /* 0x1215EF82: push edi */
    PUSH32(esp, edx); /* 0x1215EF83: push edx */
    edx = MEM32(ebp + 0xC); /* 0x1215EF84: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1215EF87: add esi, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1215EF8A: push esi */
    eax = edx + eax * 4; /* 0x1215EF8B: lea eax, [edx + eax*4] */
    PUSH32(esp, eax); /* 0x1215EF8E: push eax */
    eax = MEM32(ecx + 0x4); /* 0x1215EF8F: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, ebx); /* 0x1215EF92: push ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1215EF93: mov dword ptr [ebp - 0xc], esi */
    RECOMP_ICALL(eax); /* 0x1215EF96: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1215EF98: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(edx + 0x30); /* 0x1215EF9B: mov eax, dword ptr [edx + 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x30u; /* 0x1215EF9E: add edx, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edx; /* 0x1215EFA1: mov dword ptr [ebp - 0x18], edx */
    /* cmp eax, MEM32(ebx + 0x20) */ /* 0x1215EFA4: cmp eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215F00B; /* 0x1215EFA7: jne 0x1215f00b */
L_1215EFA9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1215EFA9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1215EFAB: mov dword ptr [ebp - 0x10], ecx */
    /* cmp MEM32(ebx + 0x3C), ecx */ /* 0x1215EFAE: cmp dword ptr [ebx + 0x3c], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215F00B; /* 0x1215EFB1: jle 0x1215f00b */
L_1215EFB3:
    eax = MEM32(ebx + 0xF4); /* 0x1215EFB3: mov eax, dword ptr [ebx + 0xf4] */
    esp = esp; /* 0x1215EFB9: lea esp, [esp] */
L_1215EFC0:
    edi = 1; /* 0x1215EFC0: mov edi, 1 */
    /* cmp eax, edi */ /* 0x1215EFC5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215EFF6; /* 0x1215EFC7: jl 0x1215eff6 */
L_1215EFC9:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x1215EFC9: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = esp; /* 0x1215EFCC: lea esp, [esp] */
L_1215EFD0:
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1215EFD0: push dword ptr [ebx + 0x1c] */
    eax = MEM32(ebp + (-0xC)); /* 0x1215EFD3: mov eax, dword ptr [ebp - 0xc] */
    eax = MEM32(eax); /* 0x1215EFD6: mov eax, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x1215EFD8: push 1 */
    PUSH32(esp, esi); /* 0x1215EFDA: push esi */
    PUSH32(esp, eax); /* 0x1215EFDB: push eax */
    PUSH32(esp, 0); /* 0x1215EFDC: push 0 */
    PUSH32(esp, eax); /* 0x1215EFDE: push eax */
    RECOMP_CALL(sub_121540D0); /* 0x1215EFDF: call 0x121540d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xF4); /* 0x1215EFE4: mov eax, dword ptr [ebx + 0xf4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1215EFEA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1215EFEB: dec esi */
    _flag_k = FK_DEC;
    /* cmp edi, eax */ /* 0x1215EFEC: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215EFD0; /* 0x1215EFEE: jle 0x1215efd0 */
L_1215EFF0:
    esi = MEM32(ebp + (-0xC)); /* 0x1215EFF0: mov esi, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1215EFF3: mov ecx, dword ptr [ebp - 0x10] */
L_1215EFF6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215EFF6: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1215EFF7: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1215EFFA: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1215EFFD: mov dword ptr [ebp - 0xc], esi */
    /* cmp ecx, MEM32(ebx + 0x3C) */ /* 0x1215F000: cmp ecx, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215EFC0; /* 0x1215F003: jl 0x1215efc0 */
L_1215F005:
    edi = MEM32(ebp + (-0x14)); /* 0x1215F005: mov edi, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0x18)); /* 0x1215F008: mov edx, dword ptr [ebp - 0x18] */
L_1215F00B:
    eax = MEM32(ebp + 0x10); /* 0x1215F00B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edi; /* 0x1215F00E: add dword ptr [eax], edi */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x1215F010: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edi; /* 0x1215F013: add dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edx) = MEM32(edx) - edi; /* 0x1215F015: sub dword ptr [edx], edi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x4)); /* 0x1215F017: mov esi, dword ptr [ebp - 4] */
    edi = eax; /* 0x1215F01A: mov edi, eax */
    goto L_1215F09A; /* 0x1215F01C: jmp 0x1215f09a */
L_1215F01E:
    /* cmp MEM32(esi + 0x30), 0 */ /* 0x1215F01E: cmp dword ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215F105; /* 0x1215F022: jne 0x1215f105 */
L_1215F028:
    eax = MEM32(esi + 0x34); /* 0x1215F028: mov eax, dword ptr [esi + 0x34] */
    edi = esi + 0x34; /* 0x1215F02B: lea edi, [esi + 0x34] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1215F02E: mov dword ptr [ebp - 8], edi */
    /* cmp eax, MEM32(esi + 0x3C) */ /* 0x1215F031: cmp eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1215F09A; /* 0x1215F034: jge 0x1215f09a */
L_1215F036:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215F036: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1215F038: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(ebx + 0x3C), eax */ /* 0x1215F03B: cmp dword ptr [ebx + 0x3c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215F095; /* 0x1215F03E: jle 0x1215f095 */
L_1215F040:
    edx = esi + 0x8; /* 0x1215F040: lea edx, [esi + 8] */
    MEM32(ebp + (-0x10)) = edx; /* 0x1215F043: mov dword ptr [ebp - 0x10], edx */
L_1215F046:
    ebx = MEM32(esi + 0x3C); /* 0x1215F046: mov ebx, dword ptr [esi + 0x3c] */
    esi = MEM32(edi); /* 0x1215F049: mov esi, dword ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x1215F04B: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x1C); /* 0x1215F04E: mov ecx, dword ptr [ecx + 0x1c] */
    edi = MEM32(edx); /* 0x1215F051: mov edi, dword ptr [edx] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1215F053: mov dword ptr [ebp - 0xc], ecx */
    /* cmp esi, ebx */ /* 0x1215F056: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1215F07D; /* 0x1215F058: jge 0x1215f07d */
L_1215F05A:
    eax = esi + (-0x1); /* 0x1215F05A: lea eax, [esi - 1] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1215F05D: mov dword ptr [ebp - 0x18], eax */
L_1215F060:
    PUSH32(esp, ecx); /* 0x1215F060: push ecx */
    PUSH32(esp, 1); /* 0x1215F061: push 1 */
    PUSH32(esp, esi); /* 0x1215F063: push esi */
    PUSH32(esp, edi); /* 0x1215F064: push edi */
    PUSH32(esp, eax); /* 0x1215F065: push eax */
    PUSH32(esp, edi); /* 0x1215F066: push edi */
    RECOMP_CALL(sub_121540D0); /* 0x1215F067: call 0x121540d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1215F06C: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1215F06F: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215F072: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x1215F073: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F060; /* 0x1215F075: jl 0x1215f060 */
L_1215F077:
    eax = MEM32(ebp + (-0x14)); /* 0x1215F077: mov eax, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0x10)); /* 0x1215F07A: mov edx, dword ptr [ebp - 0x10] */
L_1215F07D:
    ebx = MEM32(ebp + 0x8); /* 0x1215F07D: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x8)); /* 0x1215F080: mov edi, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x4)); /* 0x1215F083: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215F086: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1215F087: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x1215F08A: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x1215F08D: mov dword ptr [ebp - 0x10], edx */
    /* cmp eax, MEM32(ebx + 0x3C) */ /* 0x1215F090: cmp eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F046; /* 0x1215F093: jl 0x1215f046 */
L_1215F095:
    eax = MEM32(esi + 0x3C); /* 0x1215F095: mov eax, dword ptr [esi + 0x3c] */
    MEM32(edi) = eax; /* 0x1215F098: mov dword ptr [edi], eax */
L_1215F09A:
    eax = MEM32(edi); /* 0x1215F09A: mov eax, dword ptr [edi] */
    /* cmp eax, MEM32(esi + 0x3C) */ /* 0x1215F09C: cmp eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215F0F4; /* 0x1215F09F: jne 0x1215f0f4 */
L_1215F0A1:
    eax = MEM32(ebp + 0x1C); /* 0x1215F0A1: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(eax)); /* 0x1215F0A4: push dword ptr [eax] */
    eax = MEM32(ebp + (-0x4)); /* 0x1215F0A6: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1215F0A9: push dword ptr [ebp + 0x18] */
    ecx = MEM32(ebx + 0x16C); /* 0x1215F0AC: mov ecx, dword ptr [ebx + 0x16c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x1215F0B2: push dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1215F0B5: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1215F0B8: push eax */
    eax = MEM32(ecx + 0x4); /* 0x1215F0B9: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, ebx); /* 0x1215F0BC: push ebx */
    RECOMP_ICALL(eax); /* 0x1215F0BD: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x1C); /* 0x1215F0BF: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1215F0C2: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = MEM32(ebx + 0xF4); /* 0x1215F0C4: mov eax, dword ptr [ebx + 0xf4] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1215F0CA: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) + eax; /* 0x1215F0CD: add dword ptr [esi + 0x38], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x38), edx */ /* 0x1215F0D0: cmp dword ptr [esi + 0x38], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F0DC; /* 0x1215F0D3: jl 0x1215f0dc */
L_1215F0D5:
    MEM32(esi + 0x38) = 0; /* 0x1215F0D5: mov dword ptr [esi + 0x38], 0 */
L_1215F0DC:
    /* cmp MEM32(edi), edx */ /* 0x1215F0DC: cmp dword ptr [edi], edx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F0E6; /* 0x1215F0DE: jl 0x1215f0e6 */
L_1215F0E0:
    MEM32(edi) = 0; /* 0x1215F0E0: mov dword ptr [edi], 0 */
L_1215F0E6:
    eax = MEM32(ebx + 0xF4); /* 0x1215F0E6: mov eax, dword ptr [ebx + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x1215F0EC: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x4)); /* 0x1215F0EE: mov esi, dword ptr [ebp - 4] */
    MEM32(esi + 0x3C) = eax; /* 0x1215F0F1: mov dword ptr [esi + 0x3c], eax */
L_1215F0F4:
    ecx = MEM32(ebp + 0x20); /* 0x1215F0F4: mov ecx, dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x1C); /* 0x1215F0F7: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp MEM32(eax), ecx */ /* 0x1215F0FA: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x14); /* 0x1215F0FC: mov ecx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1215EF54; /* 0x1215F0FF: jb 0x1215ef54 */
L_1215F105:
    edi = POP32_VAL(esp); /* 0x1215F105: pop edi */
L_1215F106:
    esi = POP32_VAL(esp); /* 0x1215F106: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215F107: pop ebx */
    esp = ebp; /* 0x1215F108: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215F10A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1215F10B: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1215F120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F120u);

L_1215F120:
    edi = edi; /* 0x1215F120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F122: push ebp */
    ebp = esp; /* 0x1215F123: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1215F125: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1215F128: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1215F129: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x15C); /* 0x1215F12C: mov eax, dword ptr [ebx + 0x15c] */
    ecx = MEM32(ebx + 0x4); /* 0x1215F132: mov ecx, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1215F135: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx + 0x3C); /* 0x1215F138: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, esi); /* 0x1215F13B: push esi */
    esi = MEM32(ebx + 0xF4); /* 0x1215F13C: mov esi, dword ptr [ebx + 0xf4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x1215F142: imul eax, esi */
    eax = eax + eax * 4; /* 0x1215F145: lea eax, [eax + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F148: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1215F14A: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F14B: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1215F14D: push eax */
    eax = MEM32(ecx); /* 0x1215F14E: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1215F150: push 1 */
    PUSH32(esp, ebx); /* 0x1215F152: push ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1215F153: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(eax); /* 0x1215F156: call eax */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0x3C), 0 */ /* 0x1215F158: cmp dword ptr [ebx + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = eax; /* 0x1215F15C: mov edi, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1215F15E: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx + 0x44); /* 0x1215F161: mov eax, dword ptr [ebx + 0x44] */
    MEM32(ebp + (-0xC)) = 0; /* 0x1215F164: mov dword ptr [ebp - 0xc], 0 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215F23B; /* 0x1215F16B: jle 0x1215f23b */
L_1215F171:
    ecx = esi + esi * 2; /* 0x1215F171: lea ecx, [esi + esi*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F174: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F176: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1215F178: mov dword ptr [ebp - 0x18], ecx */
    ecx = esi + esi * 4; /* 0x1215F17B: lea ecx, [esi + esi*4] */
    edx = esi + esi * 2; /* 0x1215F17E: lea edx, [esi + esi*2] */
    esi = eax + 0x8; /* 0x1215F181: lea esi, [eax + 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x1215F184: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F187: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F189: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1215F18B: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = edx; /* 0x1215F18E: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1215F191: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1215F194: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x1215F197: mov dword ptr [ebp - 0x10], eax */
    ebx = ebx; /* 0x1215F19A: lea ebx, [ebx] */
L_1215F1A0:
    eax = MEM32(esi + 0x14); /* 0x1215F1A0: mov eax, dword ptr [esi + 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0xF0)); /* 0x1215F1A3: imul eax, dword ptr [ebx + 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F1AA: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F1AC: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x1215F1AE: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F1AF: add eax, eax */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215F1B1: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(esi); /* 0x1215F1B2: idiv dword ptr [esi] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebx + 0x4); /* 0x1215F1B4: mov ecx, dword ptr [ebx + 4] */
    PUSH32(esp, eax); /* 0x1215F1B7: push eax */
    eax = MEM32(ecx + 0x8); /* 0x1215F1B8: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, 1); /* 0x1215F1BB: push 1 */
    PUSH32(esp, ebx); /* 0x1215F1BD: push ebx */
    RECOMP_ICALL(eax); /* 0x1215F1BE: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1215F1C0: push dword ptr [ebp - 0x18] */
    esi = eax; /* 0x1215F1C3: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1215F1C5: mov eax, dword ptr [ebp - 4] */
    eax = edi + eax * 4; /* 0x1215F1C8: lea eax, [edi + eax*4] */
    PUSH32(esp, esi); /* 0x1215F1CB: push esi */
    PUSH32(esp, eax); /* 0x1215F1CC: push eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1215F1CD: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_121BF440); /* 0x1215F1D0: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1215F1D5: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1215F1D8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1215F1DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215F20B; /* 0x1215F1DD: jle 0x1215f20b */
L_1215F1DF:
    ecx = eax; /* 0x1215F1DF: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1215F1E1: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1215F1E1: shl ecx, 4 */
    ebx = edi; /* 0x1215F1E4: mov ebx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1215F1E6: add ecx, edi */
    _flag_k = FK_ADD;
    edx = esi + eax * 8; /* 0x1215F1E8: lea edx, [esi + eax*8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1215F1EB: sub ebx, esi */
    _flag_k = FK_CMP;
    edi = eax; /* 0x1215F1ED: mov edi, eax */
    /* nop */ /* 0x1215F1EF: nop  */
L_1215F1F0:
    eax = MEM32(edx); /* 0x1215F1F0: mov eax, dword ptr [edx] */
    MEM32(ebx + esi) = eax; /* 0x1215F1F2: mov dword ptr [ebx + esi], eax */
    eax = MEM32(esi); /* 0x1215F1F5: mov eax, dword ptr [esi] */
    MEM32(ecx) = eax; /* 0x1215F1F7: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1215F1F9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1215F1FC: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1215F1FF: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1215F202: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215F1F0; /* 0x1215F203: jne 0x1215f1f0 */
L_1215F205:
    ebx = MEM32(ebp + 0x8); /* 0x1215F205: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x8)); /* 0x1215F208: mov edi, dword ptr [ebp - 8] */
L_1215F20B:
    ecx = MEM32(ebp + (-0x10)); /* 0x1215F20B: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x1C)); /* 0x1215F20E: mov eax, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + (-0x14)); /* 0x1215F211: mov esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x20)); /* 0x1215F214: add edi, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x24)); /* 0x1215F217: mov edx, dword ptr [ebp - 0x24] */
    MEM32(ecx) = eax; /* 0x1215F21A: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1215F21C: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215F21F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1215F220: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x54u; /* 0x1215F223: add esi, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edi; /* 0x1215F226: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x1215F229: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1215F22C: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1215F22F: mov dword ptr [ebp - 0x14], esi */
    /* cmp eax, MEM32(ebx + 0x3C) */ /* 0x1215F232: cmp eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F1A0; /* 0x1215F235: jl 0x1215f1a0 */
L_1215F23B:
    edi = POP32_VAL(esp); /* 0x1215F23B: pop edi */
    esi = POP32_VAL(esp); /* 0x1215F23C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215F23D: pop ebx */
    esp = ebp; /* 0x1215F23E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215F240: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215F241: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1215F250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F250u);

L_1215F250:
    edi = edi; /* 0x1215F250: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F252: push ebp */
    ebp = esp; /* 0x1215F253: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1215F255: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1215F259: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215F25A: mov esi, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215F26F; /* 0x1215F25D: je 0x1215f26f */
L_1215F25F:
    eax = MEM32(esi); /* 0x1215F25F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 4; /* 0x1215F261: mov dword ptr [eax + 0x14], 4 */
    eax = MEM32(esi); /* 0x1215F268: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215F26A: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215F26C: push esi */
    RECOMP_ICALL(eax); /* 0x1215F26D: call eax */
    RECOMP_FLAGS_IN();
L_1215F26F:
    eax = MEM32(esi + 0x4); /* 0x1215F26F: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x1215F272: mov eax, dword ptr [eax] */
    PUSH32(esp, 0x40u); /* 0x1215F274: push 0x40 */
    PUSH32(esp, 1); /* 0x1215F276: push 1 */
    PUSH32(esp, esi); /* 0x1215F278: push esi */
    RECOMP_ICALL(eax); /* 0x1215F279: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x15C) = eax; /* 0x1215F27B: mov dword ptr [esi + 0x15c], eax */
    MEM32(eax) = 0x1215ECF0u; /* 0x1215F281: mov dword ptr [eax], 0x1215ecf0 */
    ecx = MEM32(esi + 0x16C); /* 0x1215F287: mov ecx, dword ptr [esi + 0x16c] */
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x1215F28D: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215F2A5; /* 0x1215F291: je 0x1215f2a5 */
L_1215F293:
    PUSH32(esp, esi); /* 0x1215F293: push esi */
    MEM32(eax + 0x4) = 0x1215EF20u; /* 0x1215F294: mov dword ptr [eax + 4], 0x1215ef20 */
    RECOMP_CALL(sub_1215F120); /* 0x1215F29B: call 0x1215f120 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1215F2A0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215F2A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215F2A2: ret 8 */
L_1215F2A5:
    PUSH32(esp, ebx); /* 0x1215F2A5: push ebx */
    PUSH32(esp, edi); /* 0x1215F2A6: push edi */
    MEM32(eax + 0x4) = 0x1215ED40u; /* 0x1215F2A7: mov dword ptr [eax + 4], 0x1215ed40 */
    ebx = MEM32(esi + 0x44); /* 0x1215F2AE: mov ebx, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215F2B1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x3C), edi */ /* 0x1215F2B3: cmp dword ptr [esi + 0x3c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215F302; /* 0x1215F2B6: jle 0x1215f302 */
L_1215F2B8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1215F2B8: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1215F2BB: add eax, 8 */
    _flag_k = FK_ADD;
    edx = esi + 0xF0; /* 0x1215F2BE: lea edx, [esi + 0xf0] */
    MEM32(ebp + 0xC) = eax; /* 0x1215F2C4: mov dword ptr [ebp + 0xc], eax */
L_1215F2C7:
    eax = MEM32(ebx + 0x14); /* 0x1215F2C7: mov eax, dword ptr [ebx + 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edx)); /* 0x1215F2CA: imul eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F2CD: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F2CF: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F2D1: add eax, eax */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215F2D3: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebx); /* 0x1215F2D4: idiv dword ptr [ebx] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, MEM32(esi + 0xF4)); /* 0x1215F2D6: push dword ptr [esi + 0xf4] */
    ecx = MEM32(esi + 0x4); /* 0x1215F2DC: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x1215F2DF: push eax */
    eax = MEM32(ecx + 0x8); /* 0x1215F2E0: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, 1); /* 0x1215F2E3: push 1 */
    PUSH32(esp, esi); /* 0x1215F2E5: push esi */
    RECOMP_ICALL(eax); /* 0x1215F2E6: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1215F2E8: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x1215F2EB: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1215F2ED: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1215F2EE: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x1215F2F1: add ebx, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x1215F2F4: mov dword ptr [ebp + 0xc], ecx */
    edx = esi + 0xF0; /* 0x1215F2F7: lea edx, [esi + 0xf0] */
    /* cmp edi, MEM32(esi + 0x3C) */ /* 0x1215F2FD: cmp edi, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F2C7; /* 0x1215F300: jl 0x1215f2c7 */
L_1215F302:
    edi = POP32_VAL(esp); /* 0x1215F302: pop edi */
    ebx = POP32_VAL(esp); /* 0x1215F303: pop ebx */
    esi = POP32_VAL(esp); /* 0x1215F304: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215F305: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215F306: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1215F310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F310u);

L_1215F310:
    edi = edi; /* 0x1215F310: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F312: push ebp */
    ebp = esp; /* 0x1215F313: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1215F315: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1215F316: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1215F319: push esi */
    esi = ecx; /* 0x1215F31A: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1215F31C: sub esi, eax */
    _flag_k = FK_CMP;
    /* test esi, esi */ /* 0x1215F31E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215F354; /* 0x1215F320: jle 0x1215f354 */
L_1215F322:
    PUSH32(esp, edi); /* 0x1215F322: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215F323: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1215F325: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215F353; /* 0x1215F327: jle 0x1215f353 */
L_1215F329:
    esp = esp; /* 0x1215F329: lea esp, [esp] */
L_1215F330:
    ecx = MEM32(ebp + 0x8); /* 0x1215F330: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + edi * 4); /* 0x1215F333: mov ecx, dword ptr [ecx + edi*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F336: add ecx, eax */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ecx + (-0x1))); /* 0x1215F338: mov al, byte ptr [ecx - 1] */
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(eax)); /* 0x1215F33B: mov byte ptr [ebp - 4], al */
    PUSH32(esp, esi); /* 0x1215F33E: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1215F33F: push dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1215F342: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x1215F343: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1215F348: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1215F34B: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1215F34C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x1215F34F: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F330; /* 0x1215F351: jl 0x1215f330 */
L_1215F353:
    edi = POP32_VAL(esp); /* 0x1215F353: pop edi */
L_1215F354:
    esi = POP32_VAL(esp); /* 0x1215F354: pop esi */
    esp = ebp; /* 0x1215F355: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215F357: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215F358: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1215F360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F360u);

L_1215F360:
    edi = edi; /* 0x1215F360: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F362: push ebp */
    ebp = esp; /* 0x1215F363: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1215F365: push ebx */
    PUSH32(esp, esi); /* 0x1215F366: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215F367: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x16C); /* 0x1215F36A: mov ecx, dword ptr [esi + 0x16c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1215F370: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1215F372: push edi */
    edi = MEM32(esi + 0x44); /* 0x1215F373: mov edi, dword ptr [esi + 0x44] */
    /* cmp MEM32(esi + 0x3C), ebx */ /* 0x1215F376: cmp dword ptr [esi + 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215F3CC; /* 0x1215F379: jle 0x1215f3cc */
L_1215F37B:
    eax = MEM32(ebp + 0x10); /* 0x1215F37B: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1215F37E: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F381: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F383: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x1215F385: mov dword ptr [ebp + 0x10], eax */
    eax = ecx + 0xC; /* 0x1215F388: lea eax, [ecx + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x1215F38B: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + 0x14); /* 0x1215F38E: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1215F391: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = eax; /* 0x1215F393: mov dword ptr [ebp + 0x14], eax */
L_1215F396:
    ecx = MEM32(edi + 0xC); /* 0x1215F396: mov ecx, dword ptr [edi + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x18)); /* 0x1215F399: imul ecx, dword ptr [ebp + 0x18] */
    eax = MEM32(eax + edx); /* 0x1215F39D: mov eax, dword ptr [eax + edx] */
    eax = eax + ecx * 4; /* 0x1215F3A0: lea eax, [eax + ecx*4] */
    PUSH32(esp, eax); /* 0x1215F3A3: push eax */
    eax = MEM32(edx); /* 0x1215F3A4: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x1215F3A6: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1215F3A9: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1215F3AA: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1215F3AD: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1215F3AF: push edi */
    PUSH32(esp, esi); /* 0x1215F3B0: push esi */
    RECOMP_ICALL(eax); /* 0x1215F3B1: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x1215F3B3: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x1215F3B6: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x14); /* 0x1215F3BA: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215F3BD: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1215F3BE: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x1215F3C1: add edi, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x1215F3C4: mov dword ptr [ebp + 0xc], edx */
    /* cmp ebx, MEM32(esi + 0x3C) */ /* 0x1215F3C7: cmp ebx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F396; /* 0x1215F3CA: jl 0x1215f396 */
L_1215F3CC:
    edi = POP32_VAL(esp); /* 0x1215F3CC: pop edi */
    esi = POP32_VAL(esp); /* 0x1215F3CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215F3CE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1215F3CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1215F3D0: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1215F3E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F3E0u);

L_1215F3E0:
    edi = edi; /* 0x1215F3E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F3E2: push ebp */
    ebp = esp; /* 0x1215F3E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1215F3E5: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1215F3E8: push ebx */
    PUSH32(esp, esi); /* 0x1215F3E9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215F3EA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1215F3ED: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1215F3EE: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x1C); /* 0x1215F3F1: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F3F4: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F3F6: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F3F8: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1215F3FA: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + 0xF0); /* 0x1215F3FD: mov eax, dword ptr [esi + 0xf0] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215F403: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(edi + 0x8); /* 0x1215F404: idiv dword ptr [edi + 8] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebx = MEM32(esi + 0xF4); /* 0x1215F407: mov ebx, dword ptr [esi + 0xf4] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1215F40D: push dword ptr [esi + 0x1c] */
    esi = MEM32(ebp + 0x10); /* 0x1215F410: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1215F413: push esi */
    ecx = eax; /* 0x1215F414: mov ecx, eax */
    eax = ebx; /* 0x1215F416: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215F418: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(edi + 0xC); /* 0x1215F419: idiv dword ptr [edi + 0xc] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + 0x8) = ecx; /* 0x1215F41C: mov dword ptr [ebp + 8], ecx */
    edi = eax; /* 0x1215F41F: mov edi, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1215F421: imul eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x8))); /* 0x1215F424: imul ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1215F428: mov dword ptr [ebp - 0x2c], eax */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215F42B: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1215F42C: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1215F42E: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    MEM32(ebp + (-0x24)) = edi; /* 0x1215F430: mov dword ptr [ebp - 0x24], edi */
    MEM32(ebp + (-0x28)) = eax; /* 0x1215F433: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_1215F310); /* 0x1215F436: call 0x1215f310 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1215F43B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215F43E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1215F440: mov dword ptr [ebp - 0x1c], eax */
    /* cmp MEM32(ecx + 0xC), eax */ /* 0x1215F443: cmp dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215F521; /* 0x1215F446: jle 0x1215f521 */
L_1215F44C:
    edx = MEM32(ebp + (-0x8)); /* 0x1215F44C: mov edx, dword ptr [ebp - 8] */
    /* nop */ /* 0x1215F44F: nop  */
L_1215F450:
    ecx = MEM32(ebp + 0x14); /* 0x1215F450: mov ecx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ecx + eax * 4); /* 0x1215F453: mov ecx, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215F456: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x1215F458: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1215F45B: mov dword ptr [ebp - 4], eax */
    /* test edx, edx */ /* 0x1215F45E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215F502; /* 0x1215F460: je 0x1215f502 */
L_1215F466:
    MEM32(ebp + (-0x18)) = edx; /* 0x1215F466: mov dword ptr [ebp - 0x18], edx */
    esp = esp; /* 0x1215F469: lea esp, [esp] */
L_1215F470:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1215F470: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1215F472: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1215F4DD; /* 0x1215F474: jle 0x1215f4dd */
L_1215F476:
    edx = esi; /* 0x1215F476: mov edx, esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x1215F478: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1215F47B: mov dword ptr [ebp - 0x10], edi */
    edi = edi; /* 0x1215F47E: mov edi, edi */
L_1215F480:
    ecx = MEM32(edx); /* 0x1215F480: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F482: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1215F484: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215F486: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215F488: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x1215F48A: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F4B7; /* 0x1215F48E: jl 0x1215f4b7 */
L_1215F490:
    edx = MEM32(ebp + 0x8); /* 0x1215F490: mov edx, dword ptr [ebp + 8] */
    edx = edx + (-0x2); /* 0x1215F493: lea edx, [edx - 2] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1215F496: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x1215F496: shr edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1215F498: inc edx */
    _flag_k = FK_INC;
    eax = edx + edx; /* 0x1215F499: lea eax, [edx + edx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1215F49C: mov dword ptr [ebp - 0x20], eax */
    /* nop */ /* 0x1215F49F: nop  */
L_1215F4A0:
    eax = (uint32_t)MEM8(ecx); /* 0x1215F4A0: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1215F4A3: add esi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x1215F4A5: movzx eax, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1215F4A9: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1215F4AB: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1215F4AE: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215F4A0; /* 0x1215F4AF: jne 0x1215f4a0 */
L_1215F4B1:
    edx = MEM32(ebp + (-0xC)); /* 0x1215F4B1: mov edx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x20)); /* 0x1215F4B4: mov eax, dword ptr [ebp - 0x20] */
L_1215F4B7:
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1215F4B7: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1215F4C1; /* 0x1215F4BA: jge 0x1215f4c1 */
L_1215F4BC:
    eax = (uint32_t)MEM8(ecx); /* 0x1215F4BC: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1215F4BF: add ebx, eax */
    _flag_k = FK_ADD;
L_1215F4C1:
    eax = edi + esi; /* 0x1215F4C1: lea eax, [edi + esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1215F4C4: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1215F4C6: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1215F4C9: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x1215F4CC: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = edx; /* 0x1215F4CF: mov dword ptr [ebp - 0xc], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215F480; /* 0x1215F4D2: jne 0x1215f480 */
L_1215F4D4:
    ecx = MEM32(ebp + (-0x14)); /* 0x1215F4D4: mov ecx, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x24)); /* 0x1215F4D7: mov edi, dword ptr [ebp - 0x24] */
    esi = MEM32(ebp + 0x10); /* 0x1215F4DA: mov esi, dword ptr [ebp + 0x10] */
L_1215F4DD:
    eax = MEM32(ebp + (-0x28)); /* 0x1215F4DD: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1215F4E0: add eax, ebx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215F4E2: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x2C)); /* 0x1215F4E3: idiv dword ptr [ebp - 0x2c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215F4E6: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = ecx; /* 0x1215F4E7: mov dword ptr [ebp - 0x14], ecx */
    MEM8(ecx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1215F4EA: mov byte ptr [ecx - 1], al */
    eax = MEM32(ebp + (-0x4)); /* 0x1215F4ED: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1215F4F0: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x1215F4F3: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1215F4F6: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215F470; /* 0x1215F4F9: jne 0x1215f470 */
L_1215F4FF:
    edx = MEM32(ebp + (-0x8)); /* 0x1215F4FF: mov edx, dword ptr [ebp - 8] */
L_1215F502:
    ecx = MEM32(ebp + 0xC); /* 0x1215F502: mov ecx, dword ptr [ebp + 0xc] */
    eax = edi * 4; /* 0x1215F505: lea eax, [edi*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1215F50C: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1C)); /* 0x1215F50E: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215F511: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = esi; /* 0x1215F512: mov dword ptr [ebp + 0x10], esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1215F515: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x1215F518: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F450; /* 0x1215F51B: jl 0x1215f450 */
L_1215F521:
    edi = POP32_VAL(esp); /* 0x1215F521: pop edi */
    esi = POP32_VAL(esp); /* 0x1215F522: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215F523: pop ebx */
    esp = ebp; /* 0x1215F524: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215F526: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215F527: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1215F530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F530u);

L_1215F530:
    edi = edi; /* 0x1215F530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F532: push ebp */
    ebp = esp; /* 0x1215F533: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1215F535: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1215F536: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1215F539: push dword ptr [ebx + 0x1c] */
    PUSH32(esp, MEM32(ebx + 0xF4)); /* 0x1215F53C: push dword ptr [ebx + 0xf4] */
    PUSH32(esp, 0); /* 0x1215F542: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1215F544: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x1215F547: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1215F549: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_121540D0); /* 0x1215F54C: call 0x121540d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1215F551: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x1C); /* 0x1215F554: mov ecx, dword ptr [eax + 0x1c] */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1215F557: push dword ptr [ebx + 0x1c] */
    ebx = MEM32(ebx + 0xF4); /* 0x1215F55A: mov ebx, dword ptr [ebx + 0xf4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1215F560: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F563: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F565: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F567: add ecx, ecx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1215F310); /* 0x1215F569: call 0x1215f310 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x1215F56E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1215F56F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215F570: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1215F580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F580u);

L_1215F580:
    edi = edi; /* 0x1215F580: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F582: push ebp */
    ebp = esp; /* 0x1215F583: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1215F585: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1215F588: push ebx */
    ebx = eax; /* 0x1215F589: mov ebx, eax */
    PUSH32(esp, esi); /* 0x1215F58B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215F58C: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x1C); /* 0x1215F58F: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1215F592: push dword ptr [ebx + 0x1c] */
    ebx = MEM32(ebx + 0xF4); /* 0x1215F595: mov ebx, dword ptr [ebx + 0xf4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1215F59B: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F59E: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F5A0: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215F5A2: add eax, eax */
    _flag_k = FK_ADD;
    ecx = eax + eax; /* 0x1215F5A4: lea ecx, [eax + eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1215F5A7: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1215F310); /* 0x1215F5AA: call 0x1215f310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215F5AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1215F5B1: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(esi + 0xC), eax */ /* 0x1215F5B4: cmp dword ptr [esi + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215F60D; /* 0x1215F5B7: jle 0x1215f60d */
L_1215F5B9:
    edx = MEM32(ebp + 0x10); /* 0x1215F5B9: mov edx, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0xC); /* 0x1215F5BC: mov ebx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1215F5BF: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x1215F5C2: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x1215F5C4: mov dword ptr [ebp + 0x10], edx */
    PUSH32(esp, edi); /* 0x1215F5C7: push edi */
L_1215F5C8:
    esi = MEM32(edx + ebx); /* 0x1215F5C8: mov esi, dword ptr [edx + ebx] */
    edx = MEM32(ebx); /* 0x1215F5CB: mov edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215F5CD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1215F5CF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215F5F7; /* 0x1215F5D1: je 0x1215f5f7 */
L_1215F5D3:
    ebx = ecx; /* 0x1215F5D3: mov ebx, ecx */
L_1215F5D5:
    eax = (uint32_t)MEM8(edx + 0x1); /* 0x1215F5D5: movzx eax, byte ptr [edx + 1] */
    ecx = (uint32_t)MEM8(edx); /* 0x1215F5D9: movzx ecx, byte ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1215F5DC: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F5DE: add ecx, eax */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1215F5E0: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1215F5E2: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215F5E4: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((edi ^ 1)); _flag_b = (uint32_t)((edi ^ 1));
    edi = edi ^ 1; /* 0x1215F5E5: xor edi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1215F5E8: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1215F5EB: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215F5D5; /* 0x1215F5EC: jne 0x1215f5d5 */
L_1215F5EE:
    ebx = MEM32(ebp + 0xC); /* 0x1215F5EE: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x1215F5F1: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1215F5F4: mov ecx, dword ptr [ebp - 4] */
L_1215F5F7:
    edx = MEM32(ebp + 0x8); /* 0x1215F5F7: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215F5FA: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1215F5FB: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0xC) */ /* 0x1215F5FE: cmp eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x1215F601: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1215F604: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + 0xC) = ebx; /* 0x1215F607: mov dword ptr [ebp + 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F5C8; /* 0x1215F60A: jl 0x1215f5c8 */
L_1215F60C:
    edi = POP32_VAL(esp); /* 0x1215F60C: pop edi */
L_1215F60D:
    esi = POP32_VAL(esp); /* 0x1215F60D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215F60E: pop ebx */
    esp = ebp; /* 0x1215F60F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215F611: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1215F612: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1215F620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F620u);

L_1215F620:
    edi = edi; /* 0x1215F620: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F622: push ebp */
    ebp = esp; /* 0x1215F623: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1215F625: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1215F628: push ebx */
    ebx = ecx; /* 0x1215F629: mov ebx, ecx */
    ecx = MEM32(eax + 0x1C); /* 0x1215F62B: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x1215F62E: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x1215F631: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F632: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1215F634: push edi */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1215F635: push dword ptr [ebx + 0x1c] */
    ebx = MEM32(ebx + 0xF4); /* 0x1215F638: mov ebx, dword ptr [ebx + 0xf4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1215F63E: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F641: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F643: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1215F645: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F648: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1215F64A: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1215F310); /* 0x1215F64D: call 0x1215f310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215F652: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[7] = MEM64(0x12013320); /* 0x1215F654: movq mm7, qword ptr [0x12013320] */
    _mm[6] = MEM64(0x12013318); /* 0x1215F65B: movq mm6, qword ptr [0x12013318] */
L_1215F662:
    _mm[0] = MEM64(0x12013310); /* 0x1215F662: movq mm0, qword ptr [0x12013310] */
    edx = MEM32(ebp + (-0x8)); /* 0x1215F669: mov edx, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + 0xC); /* 0x1215F66C: mov ebx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebx + eax * 4); /* 0x1215F66F: mov esi, dword ptr [ebx + eax*4] */
    ebx = MEM32(ebp + 0x8); /* 0x1215F672: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebx + eax * 4); /* 0x1215F675: mov edi, dword ptr [ebx + eax*4] */
L_1215F678:
    _mm[1] = MEM64(edi); /* 0x1215F678: movq mm1, qword ptr [edi] */
    _mm[3] = MEM64(edi + 0x8); /* 0x1215F67B: movq mm3, qword ptr [edi + 8] */
    _mm[2] = _mm[1]; /* 0x1215F67F: movq mm2, mm1 */
    _mm[1] = mmx_psrlw(_mm[1], 8); /* 0x1215F682: psrlw mm1, 8 */
    _mm[4] = _mm[3]; /* 0x1215F686: movq mm4, mm3 */
    _mm[3] = mmx_psrlw(_mm[3], 8); /* 0x1215F689: psrlw mm3, 8 */
    _mm[2] = (_mm[2] & _mm[7]); /* 0x1215F68D: pand mm2, mm7 */
    _mm[4] = (_mm[4] & _mm[7]); /* 0x1215F690: pand mm4, mm7 */
    _mm[1] = mmx_paddw(_mm[1], _mm[2]); /* 0x1215F693: paddw mm1, mm2 */
    _mm[3] = mmx_paddw(_mm[3], _mm[4]); /* 0x1215F696: paddw mm3, mm4 */
    _mm[1] = mmx_paddw(_mm[1], _mm[0]); /* 0x1215F699: paddw mm1, mm0 */
    _mm[3] = mmx_paddw(_mm[3], _mm[0]); /* 0x1215F69C: paddw mm3, mm0 */
    _mm[1] = mmx_psrlw(_mm[1], 1); /* 0x1215F69F: psrlw mm1, 1 */
    _mm[3] = mmx_psrlw(_mm[3], 1); /* 0x1215F6A3: psrlw mm3, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x1215F6A7: sub edx, 8 */
    _flag_k = FK_CMP;
    _mm[1] = mmx_packuswb(_mm[1], _mm[3]); /* 0x1215F6AA: packuswb mm1, mm3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1215F6AD: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM64(esi) = _mm[1]; /* 0x1215F6B0: movq qword ptr [esi], mm1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1215F6B3: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp edx, 8 */ /* 0x1215F6B6: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1215F678; /* 0x1215F6B9: jge 0x1215f678 */
L_1215F6BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215F6BB: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x1215F6BC: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F662; /* 0x1215F6BF: jl 0x1215f662 */
L_1215F6C1:
    /* emms */ /* 0x1215F6C1: emms  */
    edi = POP32_VAL(esp); /* 0x1215F6C3: pop edi */
    esi = POP32_VAL(esp); /* 0x1215F6C4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215F6C5: pop ebx */
    esp = ebp; /* 0x1215F6C6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215F6C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215F6C9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1215F6E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F6E0u);

L_1215F6E0:
    edi = edi; /* 0x1215F6E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F6E2: push ebp */
    ebp = esp; /* 0x1215F6E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1215F6E5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1215F6E8: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x1C); /* 0x1215F6EB: mov ecx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, ebx); /* 0x1215F6EE: push ebx */
    PUSH32(esp, esi); /* 0x1215F6EF: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F6F0: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1215F6F2: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1215F6F3: mov edi, dword ptr [ebp + 0xc] */
    ebx = eax; /* 0x1215F6F6: mov ebx, eax */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1215F6F8: push dword ptr [ebx + 0x1c] */
    ebx = MEM32(ebx + 0xF4); /* 0x1215F6FB: mov ebx, dword ptr [ebx + 0xf4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F701: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F703: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1215F705: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F708: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1215F70A: push edi */
    RECOMP_CALL(sub_1215F310); /* 0x1215F70B: call 0x1215f310 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1215F710: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1215F713: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = esi; /* 0x1215F715: mov dword ptr [ebp - 0xc], esi */
    /* cmp MEM32(eax + 0xC), esi */ /* 0x1215F718: cmp dword ptr [eax + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215F798; /* 0x1215F71B: jle 0x1215f798 */
L_1215F71D:
    ecx = ecx; /* 0x1215F71D: lea ecx, [ecx] */
L_1215F720:
    eax = MEM32(ebp + 0x10); /* 0x1215F720: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + esi * 4); /* 0x1215F723: mov eax, dword ptr [eax + esi*4] */
    ebx = MEM32(edi); /* 0x1215F726: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1215F728: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(edi + 0x4); /* 0x1215F72B: mov eax, dword ptr [edi + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1215F72E: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1215F731: mov eax, dword ptr [ebp - 0x10] */
    ecx = 1; /* 0x1215F734: mov ecx, 1 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1215F739: mov dword ptr [ebp - 4], ecx */
    /* test eax, eax */ /* 0x1215F73C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215F786; /* 0x1215F73E: je 0x1215f786 */
L_1215F740:
    edi = MEM32(ebp + (-0x14)); /* 0x1215F740: mov edi, dword ptr [ebp - 0x14] */
    esi = MEM32(ebp + (-0x18)); /* 0x1215F743: mov esi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1215F746: mov dword ptr [ebp - 8], eax */
    esp = esp; /* 0x1215F749: lea esp, [esp] */
L_1215F750:
    eax = (uint32_t)MEM8(ebx + 0x1); /* 0x1215F750: movzx eax, byte ptr [ebx + 1] */
    edx = (uint32_t)MEM8(edi + 0x1); /* 0x1215F754: movzx edx, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215F758: add edx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edi); /* 0x1215F75A: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1215F75D: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM8(ebx); /* 0x1215F75F: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1215F762: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F764: add ecx, eax */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1215F766: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1215F769: mov byte ptr [esi], cl */
    ecx = MEM32(ebp + (-0x4)); /* 0x1215F76B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ 3)); _flag_b = (uint32_t)((ecx ^ 3));
    ecx = ecx ^ 3; /* 0x1215F76E: xor ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215F771: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1215F772: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1215F775: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1215F778: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1215F77B: mov dword ptr [ebp - 4], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215F750; /* 0x1215F77E: jne 0x1215f750 */
L_1215F780:
    esi = MEM32(ebp + (-0xC)); /* 0x1215F780: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + 0xC); /* 0x1215F783: mov edi, dword ptr [ebp + 0xc] */
L_1215F786:
    eax = MEM32(ebp + 0x8); /* 0x1215F786: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215F789: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1215F78A: add edi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edi; /* 0x1215F78D: mov dword ptr [ebp + 0xc], edi */
    MEM32(ebp + (-0xC)) = esi; /* 0x1215F790: mov dword ptr [ebp - 0xc], esi */
    /* cmp esi, MEM32(eax + 0xC) */ /* 0x1215F793: cmp esi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F720; /* 0x1215F796: jl 0x1215f720 */
L_1215F798:
    edi = POP32_VAL(esp); /* 0x1215F798: pop edi */
    esi = POP32_VAL(esp); /* 0x1215F799: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215F79A: pop ebx */
    esp = ebp; /* 0x1215F79B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215F79D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1215F79E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1215F7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F7B0u);

L_1215F7B0:
    edi = edi; /* 0x1215F7B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F7B2: push ebp */
    ebp = esp; /* 0x1215F7B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1215F7B5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1215F7B8: push ebx */
    ebx = ecx; /* 0x1215F7B9: mov ebx, ecx */
    ecx = MEM32(eax + 0x1C); /* 0x1215F7BB: mov ecx, dword ptr [eax + 0x1c] */
    eax = MEM32(eax + 0xC); /* 0x1215F7BE: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x1215F7C1: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F7C2: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1215F7C4: push edi */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1215F7C5: push dword ptr [ebx + 0x1c] */
    ebx = MEM32(ebx + 0xF4); /* 0x1215F7C8: mov ebx, dword ptr [ebx + 0xf4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1215F7CE: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F7D1: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F7D3: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1215F7D5: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F7D8: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1215F7DA: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1215F310); /* 0x1215F7DD: call 0x1215f310 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215F7E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[7] = MEM64(0x12013320); /* 0x1215F7E4: movq mm7, qword ptr [0x12013320] */
L_1215F7EB:
    edx = MEM32(ebp + (-0x8)); /* 0x1215F7EB: mov edx, dword ptr [ebp - 8] */
    _mm[0] = MEM64(0x12013328); /* 0x1215F7EE: movq mm0, qword ptr [0x12013328] */
    ebx = MEM32(ebp + 0xC); /* 0x1215F7F5: mov ebx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebx + eax * 4); /* 0x1215F7F8: mov esi, dword ptr [ebx + eax*4] */
    ebx = MEM32(ebp + 0x8); /* 0x1215F7FB: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebx + eax * 4); /* 0x1215F7FE: mov edi, dword ptr [ebx + eax*4] */
    PUSH32(esp, eax); /* 0x1215F801: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215F802: inc eax */
    _flag_k = FK_INC;
    ebx = MEM32(ebx + eax * 4); /* 0x1215F803: mov ebx, dword ptr [ebx + eax*4] */
L_1215F806:
    _mm[1] = MEM64(edi); /* 0x1215F806: movq mm1, qword ptr [edi] */
    _mm[3] = MEM64(ebx); /* 0x1215F809: movq mm3, qword ptr [ebx] */
    _mm[2] = _mm[1]; /* 0x1215F80C: movq mm2, mm1 */
    _mm[4] = _mm[3]; /* 0x1215F80F: movq mm4, mm3 */
    _mm[1] = mmx_psrlw(_mm[1], 8); /* 0x1215F812: psrlw mm1, 8 */
    _mm[3] = mmx_psrlw(_mm[3], 8); /* 0x1215F816: psrlw mm3, 8 */
    _mm[2] = (_mm[2] & _mm[7]); /* 0x1215F81A: pand mm2, mm7 */
    _mm[4] = (_mm[4] & _mm[7]); /* 0x1215F81D: pand mm4, mm7 */
    _mm[1] = mmx_paddw(_mm[1], _mm[2]); /* 0x1215F820: paddw mm1, mm2 */
    _mm[5] = MEM64(edi + 0x8); /* 0x1215F823: movq mm5, qword ptr [edi + 8] */
    _mm[4] = mmx_paddw(_mm[4], _mm[3]); /* 0x1215F827: paddw mm4, mm3 */
    _mm[3] = MEM64(ebx + 0x8); /* 0x1215F82A: movq mm3, qword ptr [ebx + 8] */
    _mm[1] = mmx_paddw(_mm[1], _mm[4]); /* 0x1215F82E: paddw mm1, mm4 */
    _mm[6] = _mm[5]; /* 0x1215F831: movq mm6, mm5 */
    _mm[5] = mmx_psrlw(_mm[5], 8); /* 0x1215F834: psrlw mm5, 8 */
    _mm[4] = _mm[3]; /* 0x1215F838: movq mm4, mm3 */
    _mm[3] = mmx_psrlw(_mm[3], 8); /* 0x1215F83B: psrlw mm3, 8 */
    _mm[6] = (_mm[6] & _mm[7]); /* 0x1215F83F: pand mm6, mm7 */
    _mm[4] = (_mm[4] & _mm[7]); /* 0x1215F842: pand mm4, mm7 */
    _mm[5] = mmx_paddw(_mm[5], _mm[6]); /* 0x1215F845: paddw mm5, mm6 */
    _mm[3] = mmx_paddw(_mm[3], _mm[4]); /* 0x1215F848: paddw mm3, mm4 */
    _mm[5] = mmx_paddw(_mm[5], _mm[3]); /* 0x1215F84B: paddw mm5, mm3 */
    _mm[1] = mmx_paddw(_mm[1], _mm[0]); /* 0x1215F84E: paddw mm1, mm0 */
    _mm[1] = mmx_psrlw(_mm[1], 2); /* 0x1215F851: psrlw mm1, 2 */
    _mm[5] = mmx_paddw(_mm[5], _mm[0]); /* 0x1215F855: paddw mm5, mm0 */
    _mm[5] = mmx_psrlw(_mm[5], 2); /* 0x1215F858: psrlw mm5, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1215F85C: add edi, 0x10 */
    _flag_k = FK_ADD;
    _mm[1] = mmx_packuswb(_mm[1], _mm[5]); /* 0x1215F85F: packuswb mm1, mm5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x1215F862: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x1215F865: sub edx, 8 */
    _flag_k = FK_CMP;
    MEM64(esi) = _mm[1]; /* 0x1215F868: movq qword ptr [esi], mm1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1215F86B: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp edx, 8 */ /* 0x1215F86E: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1215F806; /* 0x1215F871: jge 0x1215f806 */
L_1215F873:
    eax = POP32_VAL(esp); /* 0x1215F873: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215F874: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x1215F875: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F7EB; /* 0x1215F878: jl 0x1215f7eb */
L_1215F87E:
    /* emms */ /* 0x1215F87E: emms  */
    edi = POP32_VAL(esp); /* 0x1215F880: pop edi */
    esi = POP32_VAL(esp); /* 0x1215F881: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215F882: pop ebx */
    esp = ebp; /* 0x1215F883: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215F885: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1215F886: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1215F890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215F890u);

L_1215F890:
    edi = edi; /* 0x1215F890: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215F892: push ebp */
    ebp = esp; /* 0x1215F893: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1215F895: sub esp, 0x28 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x1215F898: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0x1C); /* 0x1215F89B: mov ecx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, ebx); /* 0x1215F89E: push ebx */
    PUSH32(esp, esi); /* 0x1215F89F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215F8A0: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(esi + 0xF4); /* 0x1215F8A3: mov ebx, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F8A9: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1215F8AB: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1215F8AC: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1215F8AF: push dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F8B2: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F8B4: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x1215F8B6: add edi, -4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1215F8B9: mov dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1215F8BC: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1215F8BE: add ebx, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1215F8C1: push edi */
    MEM32(ebp + (-0x20)) = edi; /* 0x1215F8C2: mov dword ptr [ebp - 0x20], edi */
    RECOMP_CALL(sub_1215F310); /* 0x1215F8C5: call 0x1215f310 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC0); /* 0x1215F8CA: mov ecx, dword ptr [esi + 0xc0] */
    eax = ecx + ecx * 4; /* 0x1215F8D0: lea eax, [ecx + ecx*4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1215F8D3: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1215F8D3: shl eax, 4 */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1215F8D6: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1215F8D6: shl ecx, 4 */
    edx = 0x4000u; /* 0x1215F8D9: mov edx, 0x4000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1215F8DE: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1215F8E0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1215F8E3: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1215F8E6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edx; /* 0x1215F8E8: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1215F8EB: mov dword ptr [ebp - 0x24], ecx */
    /* cmp MEM32(eax + 0xC), ecx */ /* 0x1215F8EE: cmp dword ptr [eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215FB1E; /* 0x1215F8F1: jle 0x1215fb1e */
L_1215F8F7:
    eax = MEM32(ebp + (-0x1C)); /* 0x1215F8F7: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1215F8FA: add eax, -2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x1215F8FD: mov dword ptr [ebp - 0x28], eax */
L_1215F900:
    esi = MEM32(edi + 0x8); /* 0x1215F900: mov esi, dword ptr [edi + 8] */
    eax = MEM32(ebp + 0x14); /* 0x1215F903: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(eax + ecx * 4); /* 0x1215F906: mov ecx, dword ptr [eax + ecx*4] */
    edx = MEM32(edi); /* 0x1215F909: mov edx, dword ptr [edi] */
    ebx = MEM32(edi + 0x4); /* 0x1215F90B: mov ebx, dword ptr [edi + 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1215F90E: mov dword ptr [ebp - 0xc], ecx */
    eax = edi + 0x8; /* 0x1215F911: lea eax, [edi + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1215F914: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(edi + 0xC); /* 0x1215F917: mov eax, dword ptr [edi + 0xc] */
    edi = (uint32_t)MEM8(eax); /* 0x1215F91A: movzx edi, byte ptr [eax] */
    ecx = eax + 0x2; /* 0x1215F91D: lea ecx, [eax + 2] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1215F920: mov dword ptr [ebp - 4], ecx */
    ecx = edx + 0x2; /* 0x1215F923: lea ecx, [edx + 2] */
    MEM32(ebp + 0x8) = ecx; /* 0x1215F926: mov dword ptr [ebp + 8], ecx */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x1215F929: movzx ecx, byte ptr [eax + 1] */
    eax = (uint32_t)MEM8(edx + 0x1); /* 0x1215F92D: movzx eax, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F931: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1215F933: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = esi; /* 0x1215F936: mov dword ptr [ebp + 0x10], esi */
    esi = ebx + 0x2; /* 0x1215F939: lea esi, [ebx + 2] */
    ebx = (uint32_t)MEM8(ebx); /* 0x1215F93C: movzx ebx, byte ptr [ebx] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1215F93F: mov dword ptr [ebp - 8], esi */
    esi = (uint32_t)MEM8(edx); /* 0x1215F942: movzx esi, byte ptr [edx] */
    edx = MEM32(ebp + 0x10); /* 0x1215F945: mov edx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM8(edx); /* 0x1215F948: movzx eax, byte ptr [edx] */
    edx = MEM32(ebp + (-0x8)); /* 0x1215F94B: mov edx, dword ptr [ebp - 8] */
    edx = (uint32_t)MEM8(edx); /* 0x1215F94E: movzx edx, byte ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1215F951: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1215F953: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215F955: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1215F957: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + (-0x18)); /* 0x1215F95A: mov ebx, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebx); /* 0x1215F95D: mov ecx, dword ptr [ebx] */
    eax = (uint32_t)MEM8(ecx); /* 0x1215F95F: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215F962: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1215F964: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(eax); /* 0x1215F967: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1215F96A: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1215F96C: add edx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x4)); /* 0x1215F96E: mov esi, dword ptr [ebp - 4] */
    esi = (uint32_t)MEM8(esi); /* 0x1215F971: movzx esi, byte ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1215F974: add edx, edi */
    _flag_k = FK_ADD;
    eax = eax + edx * 2; /* 0x1215F976: lea eax, [eax + edx*2] */
    edx = MEM32(ebp + (-0x20)); /* 0x1215F979: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1215F97C: add esi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x1215F97E: movzx eax, byte ptr [ecx + 1] */
    ecx = MEM32(edx + 0x4); /* 0x1215F982: mov ecx, dword ptr [edx + 4] */
    ecx = (uint32_t)MEM8(ecx + 0x1); /* 0x1215F985: movzx ecx, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x1215F989: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    edx = MEM32(ebx); /* 0x1215F98C: mov edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F98E: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edx); /* 0x1215F990: movzx eax, byte ptr [edx] */
    edx = MEM32(ebp + (-0x8)); /* 0x1215F993: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F996: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x14))); /* 0x1215F998: imul ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1215F99C: add esi, edi */
    _flag_k = FK_ADD;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x10))); /* 0x1215F99E: imul esi, dword ptr [ebp - 0x10] */
    eax = esi + ecx + 0x8000; /* 0x1215F9A2: lea eax, [esi + ecx + 0x8000] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1215F9A9: mov ecx, dword ptr [ebp - 0xc] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1215F9AC: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1215F9AF: mov byte ptr [ecx], al */
    eax = MEM32(ebp + (-0x28)); /* 0x1215F9B1: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215F9B4: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1215F9B5: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1215F9B8: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1215F9BB: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x1215F9BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215FA86; /* 0x1215F9C0: je 0x1215fa86 */
L_1215F9C6:
    ebx = ecx + 0x2; /* 0x1215F9C6: lea ebx, [ecx + 2] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1215F9C9: mov ecx, dword ptr [ebp - 4] */
    eax = ecx + 0x2; /* 0x1215F9CC: lea eax, [ecx + 2] */
    ecx = (uint32_t)MEM8(ecx + 0x1); /* 0x1215F9CF: movzx ecx, byte ptr [ecx + 1] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1215F9D3: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0x8); /* 0x1215F9D6: mov eax, dword ptr [ebp + 8] */
    edi = eax + 0x2; /* 0x1215F9D9: lea edi, [eax + 2] */
    eax = (uint32_t)MEM8(eax + 0x1); /* 0x1215F9DC: movzx eax, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F9E0: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x1215F9E2: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM8(eax + (-0x1)); /* 0x1215F9E5: movzx eax, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F9E9: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edx + (-0x1)); /* 0x1215F9EB: movzx eax, byte ptr [edx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F9EF: add ecx, eax */
    _flag_k = FK_ADD;
    esi = edx + 0x2; /* 0x1215F9F1: lea esi, [edx + 2] */
    edx = MEM32(ebp + (-0x4)); /* 0x1215F9F4: mov edx, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM8(edx); /* 0x1215F9F7: movzx eax, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F9FA: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ebx); /* 0x1215F9FC: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215F9FF: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1215FA01: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(eax); /* 0x1215FA04: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215FA07: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(esi); /* 0x1215FA09: movzx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215FA0C: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edx + (-0x1)); /* 0x1215FA0E: movzx eax, byte ptr [edx - 1] */
    edx = eax + ecx * 2; /* 0x1215FA12: lea edx, [eax + ecx*2] */
    eax = MEM32(ebp + 0x8); /* 0x1215FA15: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(eax + (-0x1)); /* 0x1215FA18: movzx eax, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215FA1C: add edx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edi); /* 0x1215FA1E: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215FA21: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1C)); /* 0x1215FA23: mov eax, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)MEM8(eax); /* 0x1215FA26: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215FA29: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x1215FA2B: mov eax, dword ptr [ebp + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x10))); /* 0x1215FA2E: imul edx, dword ptr [ebp - 0x10] */
    ecx = (uint32_t)MEM8(eax + 0x1); /* 0x1215FA32: movzx ecx, byte ptr [eax + 1] */
    eax = MEM32(ebp + (-0x8)); /* 0x1215FA36: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM8(eax + 0x1); /* 0x1215FA39: movzx eax, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215FA3D: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x1215FA3F: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM8(eax); /* 0x1215FA42: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215FA45: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x1215FA47: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM8(eax); /* 0x1215FA4A: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215FA4D: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x14))); /* 0x1215FA4F: imul ecx, dword ptr [ebp - 0x14] */
    eax = edx + ecx + 0x8000; /* 0x1215FA53: lea eax, [edx + ecx + 0x8000] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1215FA5A: mov ecx, dword ptr [ebp - 0xc] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1215FA5D: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1215FA60: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215FA62: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) - 1; /* 0x1215FA63: dec dword ptr [ebp - 0x20] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1215FA66: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebx; /* 0x1215FA69: mov ecx, ebx */
    ebx = MEM32(ebp + (-0x1C)); /* 0x1215FA6B: mov ebx, dword ptr [ebp - 0x1c] */
    edx = esi; /* 0x1215FA6E: mov edx, esi */
    eax = edi; /* 0x1215FA70: mov eax, edi */
    MEM32(ebp + (-0x8)) = edx; /* 0x1215FA72: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + 0x10) = ecx; /* 0x1215FA75: mov dword ptr [ebp + 0x10], ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1215FA78: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1215FA7B: mov dword ptr [ebp - 4], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215F9C6; /* 0x1215FA7E: jne 0x1215f9c6 */
L_1215FA84:
    goto L_1215FA8C; /* 0x1215FA84: jmp 0x1215fa8c */
L_1215FA86:
    eax = MEM32(ebp + 0x8); /* 0x1215FA86: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1215FA89: mov ebx, dword ptr [ebp - 4] */
L_1215FA8C:
    esi = (uint32_t)MEM8(eax + 0x1); /* 0x1215FA8C: movzx esi, byte ptr [eax + 1] */
    eax = (uint32_t)MEM8(edx + (-0x1)); /* 0x1215FA90: movzx eax, byte ptr [edx - 1] */
    ecx = (uint32_t)MEM8(ecx + (-0x1)); /* 0x1215FA94: movzx ecx, byte ptr [ecx - 1] */
    edi = (uint32_t)MEM8(ebx + 0x1); /* 0x1215FA98: movzx edi, byte ptr [ebx + 1] */
    ebx = (uint32_t)MEM8(edx + 0x1); /* 0x1215FA9C: movzx ebx, byte ptr [edx + 1] */
    edx = MEM32(ebp + 0x8); /* 0x1215FAA0: mov edx, dword ptr [ebp + 8] */
    edx = (uint32_t)MEM8(edx); /* 0x1215FAA3: movzx edx, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215FAA6: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1215FAA8: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM8(eax); /* 0x1215FAAB: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1215FAAE: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1215FAB0: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x1215FAB2: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215FAB5: add edx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x1215FAB7: movzx eax, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215FABB: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1215FABD: mov eax, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM8(eax + (-0x1)); /* 0x1215FAC0: movzx eax, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1215FAC4: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1215FAC6: add edx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x1215FAC8: mov esi, dword ptr [ebp + 8] */
    esi = (uint32_t)MEM8(esi + (-0x1)); /* 0x1215FACB: movzx esi, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1215FACF: add edx, edi */
    _flag_k = FK_ADD;
    eax = eax + edx * 2; /* 0x1215FAD1: lea eax, [eax + edx*2] */
    edx = MEM32(ebp + (-0x8)); /* 0x1215FAD4: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1215FAD7: add esi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(ecx); /* 0x1215FAD9: movzx eax, byte ptr [ecx] */
    ecx = (uint32_t)MEM8(edx); /* 0x1215FADC: movzx ecx, byte ptr [edx] */
    edx = MEM32(ebp + 0x10); /* 0x1215FADF: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1215FAE2: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215FAE4: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edx + 0x1); /* 0x1215FAE6: movzx eax, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1215FAEA: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x14))); /* 0x1215FAEC: imul ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1215FAF0: add esi, edi */
    _flag_k = FK_ADD;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x10))); /* 0x1215FAF2: imul esi, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x18)); /* 0x1215FAF6: mov edi, dword ptr [ebp - 0x18] */
    eax = esi + ecx + 0x8000; /* 0x1215FAF9: lea eax, [esi + ecx + 0x8000] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1215FB00: mov ecx, dword ptr [ebp - 0xc] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1215FB03: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1215FB06: mov byte ptr [ecx], al */
    ecx = MEM32(ebp + (-0x24)); /* 0x1215FB08: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ebp + 0xC); /* 0x1215FB0B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1215FB0E: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = edi; /* 0x1215FB0F: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1215FB12: mov dword ptr [ebp - 0x24], ecx */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x1215FB15: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215F900; /* 0x1215FB18: jl 0x1215f900 */
L_1215FB1E:
    edi = POP32_VAL(esp); /* 0x1215FB1E: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FB1F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215FB20: pop ebx */
    esp = ebp; /* 0x1215FB21: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215FB23: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215FB24: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1215FB30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215FB30u);

L_1215FB30:
    edi = edi; /* 0x1215FB30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215FB32: push ebp */
    ebp = esp; /* 0x1215FB33: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1215FB35: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1215FB38: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1215FB3B: push ebx */
    PUSH32(esp, esi); /* 0x1215FB3C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215FB3D: mov esi, dword ptr [ebp + 8] */
    ebx = MEM32(esi + 0xF4); /* 0x1215FB40: mov ebx, dword ptr [esi + 0xf4] */
    PUSH32(esp, edi); /* 0x1215FB46: push edi */
    edi = MEM32(eax + 0x1C); /* 0x1215FB47: mov edi, dword ptr [eax + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1215FB4A: push dword ptr [esi + 0x1c] */
    eax = MEM32(ebp + 0x10); /* 0x1215FB4D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1215FB50: add edi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1215FB52: add edi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x1215FB54: add eax, -4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edi; /* 0x1215FB57: add edi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1215FB59: add ebx, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1215FB5C: push eax */
    ecx = edi; /* 0x1215FB5D: mov ecx, edi */
    RECOMP_CALL(sub_1215F310); /* 0x1215FB5F: call 0x1215f310 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xC0); /* 0x1215FB64: mov ecx, dword ptr [esi + 0xc0] */
    eax = 0x80u; /* 0x1215FB6A: mov eax, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1215FB6F: sub eax, ecx */
    _flag_k = FK_CMP;
    if (9u) _cf = (((eax) >> 23) & 1u); /* 0x1215FB71: shl eax, 9 */
    if (9u) { _flag_a = recomp_flags_pack((eax << 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 9u; /* 0x1215FB71: shl eax, 9 */
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x1215FB74: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x1215FB74: shl ecx, 6 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1215FB77: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1215FB7A: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1215FB7D: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1215FB80: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1215FB82: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(ecx + 0xC), eax */ /* 0x1215FB85: cmp dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215FC86; /* 0x1215FB88: jle 0x1215fc86 */
L_1215FB8E:
    ecx = edi + (-0x2); /* 0x1215FB8E: lea ecx, [edi - 2] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1215FB91: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1215FB94: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1215FB97: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1215FB9A: mov dword ptr [ebp - 0x18], ecx */
    ecx = ecx; /* 0x1215FB9D: lea ecx, [ecx] */
L_1215FBA0:
    edx = MEM32(ebp + 0x14); /* 0x1215FBA0: mov edx, dword ptr [ebp + 0x14] */
    ebx = MEM32(edx + eax * 4); /* 0x1215FBA3: mov ebx, dword ptr [edx + eax*4] */
    eax = MEM32(ecx); /* 0x1215FBA6: mov eax, dword ptr [ecx] */
    edi = MEM32(ecx + (-0x4)); /* 0x1215FBA8: mov edi, dword ptr [ecx - 4] */
    esi = MEM32(ecx + (-0x8)); /* 0x1215FBAB: mov esi, dword ptr [ecx - 8] */
    ecx = (uint32_t)MEM8(edi); /* 0x1215FBAE: movzx ecx, byte ptr [edi] */
    edx = (uint32_t)MEM8(esi); /* 0x1215FBB1: movzx edx, byte ptr [esi] */
    MEM32(ebp + 0x10) = eax; /* 0x1215FBB4: mov dword ptr [ebp + 0x10], eax */
    eax = (uint32_t)MEM8(eax); /* 0x1215FBB7: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1215FBBA: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1215FBBC: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x1215FBBE: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215FBC1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x1215FBC2: mov dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215FBC5: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = esi; /* 0x1215FBC6: mov dword ptr [ebp + 8], esi */
    esi = (uint32_t)MEM8(eax); /* 0x1215FBC9: movzx esi, byte ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x1215FBCC: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM8(eax); /* 0x1215FBCF: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1215FBD2: add esi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edi + 0x1); /* 0x1215FBD4: movzx eax, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1215FBD8: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1215FBDA: inc edi */
    _flag_k = FK_INC;
    eax = edx + edx; /* 0x1215FBDB: lea eax, [edx + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1215FBDE: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0xC))); /* 0x1215FBE0: imul ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1215FBE4: add eax, esi */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8))); /* 0x1215FBE6: imul eax, dword ptr [ebp - 8] */
    eax = eax + ecx + 0x8000; /* 0x1215FBEA: lea eax, [eax + ecx + 0x8000] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1215FBF1: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x1215FBF4: mov byte ptr [ebx], al */
    eax = MEM32(ebp + (-0x1C)); /* 0x1215FBF6: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215FBF9: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1215FBFA: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x1215FBFD: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x1215FC00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215FC4C; /* 0x1215FC02: je 0x1215fc4c */
L_1215FC04:
    eax = MEM32(ebp + 0x8); /* 0x1215FC04: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(ebp + 0x10); /* 0x1215FC07: mov esi, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)MEM8(edi); /* 0x1215FC0A: movzx ecx, byte ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215FC0D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1215FC0E: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x1215FC0F: mov dword ptr [ebp + 8], eax */
    eax = (uint32_t)MEM8(eax); /* 0x1215FC12: movzx eax, byte ptr [eax] */
    MEM32(ebp + 0x10) = esi; /* 0x1215FC15: mov dword ptr [ebp + 0x10], esi */
    esi = (uint32_t)MEM8(esi); /* 0x1215FC18: movzx esi, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1215FC1B: add esi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM8(edi + 0x1); /* 0x1215FC1D: movzx eax, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1215FC21: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1215FC22: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0xC))); /* 0x1215FC24: imul ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1215FC28: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1215FC2A: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x4)); /* 0x1215FC2C: add edx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1215FC2F: inc ebx */
    _flag_k = FK_INC;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + (-0x8))); /* 0x1215FC30: imul edx, dword ptr [ebp - 8] */
    eax = edx + ecx + 0x8000; /* 0x1215FC34: lea eax, [edx + ecx + 0x8000] */
    edx = MEM32(ebp + (-0x4)); /* 0x1215FC3B: mov edx, dword ptr [ebp - 4] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1215FC3E: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x1215FC41: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    MEM8(ebx + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x1215FC44: mov byte ptr [ebx - 1], al */
    MEM32(ebp + (-0x4)) = esi; /* 0x1215FC47: mov dword ptr [ebp - 4], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1215FC04; /* 0x1215FC4A: jne 0x1215fc04 */
L_1215FC4C:
    ecx = (uint32_t)MEM8(edi); /* 0x1215FC4C: movzx ecx, byte ptr [edi] */
    eax = esi + esi; /* 0x1215FC4F: lea eax, [esi + esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1215FC52: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0xC))); /* 0x1215FC54: imul ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1215FC58: add eax, edx */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x8))); /* 0x1215FC5A: imul eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0xC); /* 0x1215FC5E: mov edx, dword ptr [ebp + 0xc] */
    eax = eax + ecx + 0x8000; /* 0x1215FC61: lea eax, [eax + ecx + 0x8000] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1215FC68: mov ecx, dword ptr [ebp - 0x18] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1215FC6B: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x1215FC6E: mov byte ptr [ebx], al */
    eax = MEM32(ebp + (-0x14)); /* 0x1215FC70: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215FC73: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1215FC74: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x1215FC77: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1215FC7A: mov dword ptr [ebp - 0x18], ecx */
    /* cmp eax, MEM32(edx + 0xC) */ /* 0x1215FC7D: cmp eax, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215FBA0; /* 0x1215FC80: jl 0x1215fba0 */
L_1215FC86:
    edi = POP32_VAL(esp); /* 0x1215FC86: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FC87: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215FC88: pop ebx */
    esp = ebp; /* 0x1215FC89: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215FC8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215FC8C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1215FCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215FCA0u);

L_1215FCA0:
    edi = edi; /* 0x1215FCA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215FCA2: push ebp */
    ebp = esp; /* 0x1215FCA3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1215FCA5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215FCA6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1215FCA9: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1215FCAA: mov edi, dword ptr [ebp + 0x10] */
    /* test MEM8(edi), 7 */ /* 0x1215FCAD: test byte ptr [edi], 7 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215FCD9; /* 0x1215FCB0: je 0x1215fcd9 */
L_1215FCB2:
    eax = MEM32(esi); /* 0x1215FCB2: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 2; /* 0x1215FCB4: mov dword ptr [eax + 0x14], 2 */
    eax = MEM32(esi); /* 0x1215FCBB: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1215FCBD: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1215FCC0: push -1 */
    PUSH32(esp, esi); /* 0x1215FCC2: push esi */
    RECOMP_ICALL(eax); /* 0x1215FCC3: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1215FCC5: push dword ptr [ebp + 0x14] */
    eax = esi; /* 0x1215FCC8: mov eax, esi */
    PUSH32(esp, edi); /* 0x1215FCCA: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1215FCCB: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1215F580); /* 0x1215FCCE: call 0x1215f580 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1215FCD3: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FCD4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215FCD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215FCD6: ret 0x10 */
L_1215FCD9:
    eax = MEM32(esi + 0xC4); /* 0x1215FCD9: mov eax, dword ptr [esi + 0xc4] */
    /* cmp eax, 5 */ /* 0x1215FCDF: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215FCFD; /* 0x1215FCE2: je 0x1215fcfd */
L_1215FCE4:
    /* cmp eax, 6 */ /* 0x1215FCE4: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215FCFD; /* 0x1215FCE7: je 0x1215fcfd */
L_1215FCE9:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1215FCE9: push dword ptr [ebp + 0x14] */
    eax = esi; /* 0x1215FCEC: mov eax, esi */
    PUSH32(esp, edi); /* 0x1215FCEE: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1215FCEF: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1215F580); /* 0x1215FCF2: call 0x1215f580 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1215FCF7: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FCF8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215FCF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215FCFA: ret 0x10 */
L_1215FCFD:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1215FCFD: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1215FD00: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1215FD03: push edi */
    ecx = esi; /* 0x1215FD04: mov ecx, esi */
    RECOMP_CALL(sub_1215F620); /* 0x1215FD06: call 0x1215f620 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1215FD0B: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FD0C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215FD0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215FD0E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1215FD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215FD20u);

L_1215FD20:
    edi = edi; /* 0x1215FD20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215FD22: push ebp */
    ebp = esp; /* 0x1215FD23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1215FD25: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215FD26: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1215FD29: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1215FD2A: mov edi, dword ptr [ebp + 0x10] */
    /* test MEM8(edi), 7 */ /* 0x1215FD2D: test byte ptr [edi], 7 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1215FD59; /* 0x1215FD30: je 0x1215fd59 */
L_1215FD32:
    eax = MEM32(esi); /* 0x1215FD32: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 2; /* 0x1215FD34: mov dword ptr [eax + 0x14], 2 */
    eax = MEM32(esi); /* 0x1215FD3B: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1215FD3D: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1215FD40: push -1 */
    PUSH32(esp, esi); /* 0x1215FD42: push esi */
    RECOMP_ICALL(eax); /* 0x1215FD43: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1215FD45: push dword ptr [ebp + 0x14] */
    eax = esi; /* 0x1215FD48: mov eax, esi */
    PUSH32(esp, edi); /* 0x1215FD4A: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1215FD4B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1215F6E0); /* 0x1215FD4E: call 0x1215f6e0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1215FD53: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FD54: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215FD55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215FD56: ret 0x10 */
L_1215FD59:
    eax = MEM32(esi + 0xC4); /* 0x1215FD59: mov eax, dword ptr [esi + 0xc4] */
    /* cmp eax, 5 */ /* 0x1215FD5F: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215FD7D; /* 0x1215FD62: je 0x1215fd7d */
L_1215FD64:
    /* cmp eax, 6 */ /* 0x1215FD64: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215FD7D; /* 0x1215FD67: je 0x1215fd7d */
L_1215FD69:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1215FD69: push dword ptr [ebp + 0x14] */
    eax = esi; /* 0x1215FD6C: mov eax, esi */
    PUSH32(esp, edi); /* 0x1215FD6E: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1215FD6F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1215F6E0); /* 0x1215FD72: call 0x1215f6e0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1215FD77: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FD78: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215FD79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215FD7A: ret 0x10 */
L_1215FD7D:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1215FD7D: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1215FD80: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1215FD83: push edi */
    ecx = esi; /* 0x1215FD84: mov ecx, esi */
    RECOMP_CALL(sub_1215F7B0); /* 0x1215FD86: call 0x1215f7b0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1215FD8B: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FD8C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1215FD8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1215FD8E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1215FDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215FDA0u);

L_1215FDA0:
    edi = edi; /* 0x1215FDA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215FDA2: push ebp */
    ebp = esp; /* 0x1215FDA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1215FDA5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1215FDA8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1215FDA9: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x1215FDAC: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x1215FDAF: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1215FDB1: push edi */
    PUSH32(esp, 0x34u); /* 0x1215FDB2: push 0x34 */
    edi = 1; /* 0x1215FDB4: mov edi, 1 */
    PUSH32(esp, edi); /* 0x1215FDB9: push edi */
    PUSH32(esp, esi); /* 0x1215FDBA: push esi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1215FDBB: mov dword ptr [ebp - 4], edi */
    RECOMP_ICALL(eax); /* 0x1215FDBE: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x16C) = eax; /* 0x1215FDC0: mov dword ptr [esi + 0x16c], eax */
    MEM32(eax) = 0x121556F0u; /* 0x1215FDC6: mov dword ptr [eax], 0x121556f0 */
    MEM32(eax + 0x4) = 0x1215F360u; /* 0x1215FDCC: mov dword ptr [eax + 4], 0x1215f360 */
    MEM32(eax + 0x8) = 0; /* 0x1215FDD3: mov dword ptr [eax + 8], 0 */
    /* cmp MEM32(esi + 0xBC), 0 */ /* 0x1215FDDA: cmp dword ptr [esi + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xBC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1215FDE1: mov dword ptr [ebp + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215FDF9; /* 0x1215FDE4: je 0x1215fdf9 */
L_1215FDE6:
    ecx = MEM32(esi); /* 0x1215FDE6: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x14) = 0x19u; /* 0x1215FDE8: mov dword ptr [ecx + 0x14], 0x19 */
    eax = MEM32(esi); /* 0x1215FDEF: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215FDF1: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215FDF3: push esi */
    RECOMP_ICALL(eax); /* 0x1215FDF4: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1215FDF6: mov eax, dword ptr [ebp + 8] */
L_1215FDF9:
    /* cmp MEM32(esi + 0x3C), 0 */ /* 0x1215FDF9: cmp dword ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1215FDFD: push ebx */
    ebx = MEM32(esi + 0x44); /* 0x1215FDFE: mov ebx, dword ptr [esi + 0x44] */
    MEM32(ebp + (-0x8)) = 0; /* 0x1215FE01: mov dword ptr [ebp - 8], 0 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215FEF1; /* 0x1215FE08: jle 0x1215fef1 */
L_1215FE0E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x1215FE0E: add ebx, 0xc */
    _flag_k = FK_ADD;
    edi = eax + 0xC; /* 0x1215FE11: lea edi, [eax + 0xc] */
L_1215FE14:
    edx = MEM32(ebx + (-0x4)); /* 0x1215FE14: mov edx, dword ptr [ebx - 4] */
    ecx = MEM32(esi + 0xF0); /* 0x1215FE17: mov ecx, dword ptr [esi + 0xf0] */
    /* cmp edx, ecx */ /* 0x1215FE1D: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215FE54; /* 0x1215FE1F: jne 0x1215fe54 */
L_1215FE21:
    eax = MEM32(ebx); /* 0x1215FE21: mov eax, dword ptr [ebx] */
    /* cmp eax, MEM32(esi + 0xF4) */ /* 0x1215FE23: cmp eax, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215FE54; /* 0x1215FE29: jne 0x1215fe54 */
L_1215FE2B:
    /* cmp MEM32(esi + 0xC0), 0 */ /* 0x1215FE2B: cmp dword ptr [esi + 0xc0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215FE49; /* 0x1215FE32: je 0x1215fe49 */
L_1215FE34:
    eax = MEM32(ebp + 0x8); /* 0x1215FE34: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = 0x1215FB30u; /* 0x1215FE37: mov dword ptr [edi], 0x1215fb30 */
    MEM32(eax + 0x8) = 1; /* 0x1215FE3D: mov dword ptr [eax + 8], 1 */
    goto L_1215FED8; /* 0x1215FE44: jmp 0x1215fed8 */
L_1215FE49:
    MEM32(edi) = 0x1215F530u; /* 0x1215FE49: mov dword ptr [edi], 0x1215f530 */
    goto L_1215FED8; /* 0x1215FE4F: jmp 0x1215fed8 */
L_1215FE54:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1215FE54: add edx, edx */
    _flag_k = FK_ADD;
    /* cmp edx, ecx */ /* 0x1215FE56: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215FEA6; /* 0x1215FE58: jne 0x1215fea6 */
L_1215FE5A:
    eax = MEM32(ebx); /* 0x1215FE5A: mov eax, dword ptr [ebx] */
    /* cmp eax, MEM32(esi + 0xF4) */ /* 0x1215FE5C: cmp eax, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215FE73; /* 0x1215FE62: jne 0x1215fe73 */
L_1215FE64:
    MEM32(ebp + (-0x4)) = 0; /* 0x1215FE64: mov dword ptr [ebp - 4], 0 */
    MEM32(edi) = 0x1215FCA0u; /* 0x1215FE6B: mov dword ptr [edi], 0x1215fca0 */
    goto L_1215FED8; /* 0x1215FE71: jmp 0x1215fed8 */
L_1215FE73:
    /* cmp edx, ecx */ /* 0x1215FE73: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215FEA6; /* 0x1215FE75: jne 0x1215fea6 */
L_1215FE77:
    eax = MEM32(ebx); /* 0x1215FE77: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1215FE79: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0xF4) */ /* 0x1215FE7B: cmp eax, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1215FEA6; /* 0x1215FE81: jne 0x1215fea6 */
L_1215FE83:
    /* cmp MEM32(esi + 0xC0), 0 */ /* 0x1215FE83: cmp dword ptr [esi + 0xc0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215FE9E; /* 0x1215FE8A: je 0x1215fe9e */
L_1215FE8C:
    eax = MEM32(ebp + 0x8); /* 0x1215FE8C: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = 0x1215F890u; /* 0x1215FE8F: mov dword ptr [edi], 0x1215f890 */
    MEM32(eax + 0x8) = 1; /* 0x1215FE95: mov dword ptr [eax + 8], 1 */
    goto L_1215FED8; /* 0x1215FE9C: jmp 0x1215fed8 */
L_1215FE9E:
    MEM32(edi) = 0x1215FD20u; /* 0x1215FE9E: mov dword ptr [edi], 0x1215fd20 */
    goto L_1215FED8; /* 0x1215FEA4: jmp 0x1215fed8 */
L_1215FEA6:
    eax = ecx; /* 0x1215FEA6: mov eax, ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215FEA8: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebx + (-0x4)); /* 0x1215FEA9: idiv dword ptr [ebx - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1215FEAC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215FEC8; /* 0x1215FEAE: jne 0x1215fec8 */
L_1215FEB0:
    eax = MEM32(esi + 0xF4); /* 0x1215FEB0: mov eax, dword ptr [esi + 0xf4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1215FEB6: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebx); /* 0x1215FEB7: idiv dword ptr [ebx] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1215FEB9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215FEC8; /* 0x1215FEBB: jne 0x1215fec8 */
L_1215FEBD:
    MEM32(ebp + (-0x4)) = edx; /* 0x1215FEBD: mov dword ptr [ebp - 4], edx */
    MEM32(edi) = 0x1215F3E0u; /* 0x1215FEC0: mov dword ptr [edi], 0x1215f3e0 */
    goto L_1215FED8; /* 0x1215FEC6: jmp 0x1215fed8 */
L_1215FEC8:
    eax = MEM32(esi); /* 0x1215FEC8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x26u; /* 0x1215FECA: mov dword ptr [eax + 0x14], 0x26 */
    eax = MEM32(esi); /* 0x1215FED1: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1215FED3: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1215FED5: push esi */
    RECOMP_ICALL(eax); /* 0x1215FED6: call eax */
    RECOMP_FLAGS_IN();
L_1215FED8:
    eax = MEM32(ebp + (-0x8)); /* 0x1215FED8: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1215FEDB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1215FEDC: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x1215FEDF: add ebx, 0x54 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x1215FEE2: mov dword ptr [ebp - 8], eax */
    /* cmp eax, MEM32(esi + 0x3C) */ /* 0x1215FEE5: cmp eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1215FE14; /* 0x1215FEE8: jl 0x1215fe14 */
L_1215FEEE:
    edi = MEM32(ebp + (-0x4)); /* 0x1215FEEE: mov edi, dword ptr [ebp - 4] */
L_1215FEF1:
    /* cmp MEM32(esi + 0xC0), 0 */ /* 0x1215FEF1: cmp dword ptr [esi + 0xc0], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1215FEF8: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1215FF11; /* 0x1215FEF9: je 0x1215ff11 */
L_1215FEFB:
    /* test edi, edi */ /* 0x1215FEFB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1215FF11; /* 0x1215FEFD: jne 0x1215ff11 */
L_1215FEFF:
    eax = MEM32(esi); /* 0x1215FEFF: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x63u; /* 0x1215FF01: mov dword ptr [eax + 0x14], 0x63 */
    eax = MEM32(esi); /* 0x1215FF08: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1215FF0A: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x1215FF0D: push edi */
    PUSH32(esp, esi); /* 0x1215FF0E: push esi */
    RECOMP_ICALL(eax); /* 0x1215FF0F: call eax */
    RECOMP_FLAGS_IN();
L_1215FF11:
    edi = POP32_VAL(esp); /* 0x1215FF11: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FF12: pop esi */
    esp = ebp; /* 0x1215FF13: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215FF15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215FF16: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1215FF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1215FF20u);

L_1215FF20:
    edi = edi; /* 0x1215FF20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1215FF22: push ebp */
    ebp = esp; /* 0x1215FF23: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1215FF25: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1215FF28: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x1215FF2B: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax); /* 0x1215FF2E: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1215FF30: push ebx */
    PUSH32(esp, esi); /* 0x1215FF31: push esi */
    esi = MEM32(ecx + 0x168); /* 0x1215FF32: mov esi, dword ptr [ecx + 0x168] */
    PUSH32(esp, edi); /* 0x1215FF38: push edi */
    PUSH32(esp, 0x2000u); /* 0x1215FF39: push 0x2000 */
    PUSH32(esp, 1); /* 0x1215FF3E: push 1 */
    PUSH32(esp, ecx); /* 0x1215FF40: push ecx */
    RECOMP_ICALL(eax); /* 0x1215FF41: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1215FF43: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x1215FF45: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1215FF48: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1215FF4A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1215FF4C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x1215FF4E: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x4)) = edx; /* 0x1215FF51: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x8) = edx; /* 0x1215FF54: mov dword ptr [ebp + 8], edx */
    MEM32(ebp + (-0x8)) = 0x00807FFFu; /* 0x1215FF57: mov dword ptr [ebp - 8], 0x807fff */
    ecx = 0x8000u; /* 0x1215FF5E: mov ecx, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x800u; /* 0x1215FF63: add eax, 0x800 */
    _flag_k = FK_ADD;
    goto L_1215FF70; /* 0x1215FF68: jmp 0x1215ff70 */
L_1215FF70:
    edx = MEM32(ebp + 0x8); /* 0x1215FF70: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x4C8Bu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x4C8Bu; /* 0x1215FF73: add dword ptr [ebp + 8], 0x4c8b */
    _flag_k = FK_ADD;
    MEM32(eax + (-0x800)) = edx; /* 0x1215FF7A: mov dword ptr [eax - 0x800], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x1215FF80: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x9646u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0x9646u; /* 0x1215FF83: add dword ptr [ebp - 4], 0x9646 */
    _flag_k = FK_ADD;
    MEM32(eax + (-0x400)) = edx; /* 0x1215FF8A: mov dword ptr [eax - 0x400], edx */
    edx = MEM32(ebp + (-0x8)); /* 0x1215FF90: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0x8000u; /* 0x1215FF93: add dword ptr [ebp - 8], 0x8000 */
    _flag_k = FK_ADD;
    MEM32(eax + 0xC00) = edx; /* 0x1215FF9A: mov dword ptr [eax + 0xc00], edx */
    edx = MEM32(ebp + (-0xC)); /* 0x1215FFA0: mov edx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x1215FFA3: mov dword ptr [eax], ecx */
    MEM32(eax + 0x400) = ebx; /* 0x1215FFA5: mov dword ptr [eax + 0x400], ebx */
    MEM32(eax + 0x800) = edi; /* 0x1215FFAB: mov dword ptr [eax + 0x800], edi */
    MEM32(eax + 0x1000) = esi; /* 0x1215FFB1: mov dword ptr [eax + 0x1000], esi */
    MEM32(eax + 0x1400) = edx; /* 0x1215FFB7: mov dword ptr [eax + 0x1400], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D2Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1D2Fu; /* 0x1215FFBD: add ecx, 0x1d2f */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14D1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x14D1u; /* 0x1215FFC3: sub edx, 0x14d1 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1215FFC9: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2B33u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x2B33u; /* 0x1215FFCC: sub ebx, 0x2b33 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54CDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x54CDu; /* 0x1215FFD2: sub edi, 0x54cd */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x6B2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x6B2Fu; /* 0x1215FFD8: sub esi, 0x6b2f */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x1215FFDE: mov dword ptr [ebp - 0xc], edx */
    /* cmp ecx, 0x001D91D1u */ /* 0x1215FFE1: cmp ecx, 0x1d91d1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x001D91D1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1215FF70; /* 0x1215FFE7: jle 0x1215ff70 */
L_1215FFE9:
    edi = POP32_VAL(esp); /* 0x1215FFE9: pop edi */
    esi = POP32_VAL(esp); /* 0x1215FFEA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1215FFEB: pop ebx */
    esp = ebp; /* 0x1215FFEC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1215FFEE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1215FFEF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12160000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160000u);

L_12160000:
    edi = edi; /* 0x12160000: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160002: push ebp */
    ebp = esp; /* 0x12160003: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x12160005: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x12160008: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x168); /* 0x1216000B: mov eax, dword ptr [ecx + 0x168] */
    edx = MEM32(ebp + 0x18); /* 0x12160011: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x12160014: push ebx */
    ebx = MEM32(eax + 0x8); /* 0x12160015: mov ebx, dword ptr [eax + 8] */
    eax = MEM32(ecx + 0x1C); /* 0x12160018: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1216001B: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1216001C: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1216001F: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + 0x18) = edx; /* 0x12160022: mov dword ptr [ebp + 0x18], edx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_12160107; /* 0x12160025: js 0x12160107 */
L_1216002B:
    eax = MEM32(ebp + 0x14); /* 0x1216002B: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1216002E: push esi */
    ecx = eax * 4; /* 0x1216002F: lea ecx, [eax*4] */
    PUSH32(esp, edi); /* 0x12160036: push edi */
L_12160037:
    esi = MEM32(ebp + 0xC); /* 0x12160037: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1216003A: mov eax, dword ptr [esi] */
    edi = MEM32(ebp + 0x10); /* 0x1216003C: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x14) = eax; /* 0x1216003F: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(edi); /* 0x12160042: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x12160044: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x12160047: mov dword ptr [ebp + 0xc], esi */
    esi = MEM32(ecx + eax); /* 0x1216004A: mov esi, dword ptr [ecx + eax] */
    eax = MEM32(edi + 0x4); /* 0x1216004D: mov eax, dword ptr [edi + 4] */
    edi = MEM32(ecx + eax); /* 0x12160050: mov edi, dword ptr [ecx + eax] */
    eax = MEM32(ebp + 0x10); /* 0x12160053: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x12160056: mov eax, dword ptr [eax + 8] */
    eax = MEM32(ecx + eax); /* 0x12160059: mov eax, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1216005C: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1216005F: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x12160063: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x12160066: mov dword ptr [ebp - 0x14], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_121600FB; /* 0x12160069: jbe 0x121600fb */
L_1216006F:
    eax = MEM32(ebp + 0x14); /* 0x1216006F: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12160072: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x12160075: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12160077: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - edi; /* 0x1216007A: sub dword ptr [ebp + 8], edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x1216007D: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + 0x14) = ecx; /* 0x12160080: mov dword ptr [ebp + 0x14], ecx */
L_12160083:
    ecx = (uint32_t)MEM8(eax); /* 0x12160083: movzx ecx, byte ptr [eax] */
    esi = (uint32_t)MEM8(eax + (-0x2)); /* 0x12160086: movzx esi, byte ptr [eax - 2] */
    edx = (uint32_t)MEM8(eax + (-0x1)); /* 0x1216008A: movzx edx, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x1216008E: add eax, 3 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x12160091: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx + ecx * 4 + 0x800); /* 0x12160094: mov eax, dword ptr [ebx + ecx*4 + 0x800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x400); /* 0x1216009B: add eax, dword ptr [ebx + edx*4 + 0x400] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121600A2: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4); /* 0x121600A3: add eax, dword ptr [ebx + esi*4] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x8)); /* 0x121600A6: mov ebx, dword ptr [ebp - 8] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x121600A9: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(ebx + edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x121600AC: mov byte ptr [ebx + edi - 1], al */
    ebx = MEM32(ebp + (-0xC)); /* 0x121600B0: mov ebx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebx + ecx * 4 + 0x1400); /* 0x121600B3: mov eax, dword ptr [ebx + ecx*4 + 0x1400] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x1000));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x1000); /* 0x121600BA: add eax, dword ptr [ebx + edx*4 + 0x1000] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4 + 0xC00));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4 + 0xC00); /* 0x121600C1: add eax, dword ptr [ebx + esi*4 + 0xc00] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x121600C8: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x121600CB: mov byte ptr [edi - 1], al */
    eax = MEM32(ebx + ecx * 4 + 0x1C00); /* 0x121600CE: mov eax, dword ptr [ebx + ecx*4 + 0x1c00] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x1800));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x1800); /* 0x121600D5: add eax, dword ptr [ebx + edx*4 + 0x1800] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x121600DC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4 + 0x1400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4 + 0x1400); /* 0x121600DF: add eax, dword ptr [ebx + esi*4 + 0x1400] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x121600E6: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x121600E9: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM8(ecx + edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x121600EC: mov byte ptr [ecx + edi - 1], al */
    eax = MEM32(ebp + (-0x10)); /* 0x121600F0: mov eax, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12160083; /* 0x121600F3: jne 0x12160083 */
L_121600F5:
    ecx = MEM32(ebp + (-0x14)); /* 0x121600F5: mov ecx, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + 0x18); /* 0x121600F8: mov edx, dword ptr [ebp + 0x18] */
L_121600FB:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x121600FB: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = edx; /* 0x121600FC: mov dword ptr [ebp + 0x18], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12160037; /* 0x121600FF: jns 0x12160037 */
L_12160105:
    edi = POP32_VAL(esp); /* 0x12160105: pop edi */
    esi = POP32_VAL(esp); /* 0x12160106: pop esi */
L_12160107:
    ebx = POP32_VAL(esp); /* 0x12160107: pop ebx */
    esp = ebp; /* 0x12160108: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1216010A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216010B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12160120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160120u);

L_12160120:
    edi = edi; /* 0x12160120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160122: push ebp */
    ebp = esp; /* 0x12160123: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x12160125: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x12160128: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x24); /* 0x1216012B: mov eax, dword ptr [ecx + 0x24] */
    edx = MEM32(ebp + 0x18); /* 0x1216012E: mov edx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12160131: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx + 0x168); /* 0x12160134: mov eax, dword ptr [ecx + 0x168] */
    PUSH32(esp, ebx); /* 0x1216013A: push ebx */
    ebx = MEM32(eax + 0x8); /* 0x1216013B: mov ebx, dword ptr [eax + 8] */
    eax = MEM32(ecx + 0x1C); /* 0x1216013E: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12160141: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = ebx; /* 0x12160142: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x12160145: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + 0x18) = edx; /* 0x12160148: mov dword ptr [ebp + 0x18], edx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_12160234; /* 0x1216014B: js 0x12160234 */
L_12160151:
    eax = MEM32(ebp + 0x14); /* 0x12160151: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x12160154: push esi */
    ecx = eax * 4; /* 0x12160155: lea ecx, [eax*4] */
    PUSH32(esp, edi); /* 0x1216015C: push edi */
    ecx = ecx; /* 0x1216015D: lea ecx, [ecx] */
L_12160160:
    esi = MEM32(ebp + 0xC); /* 0x12160160: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x12160163: mov eax, dword ptr [esi] */
    edi = MEM32(ebp + 0x10); /* 0x12160165: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x14) = eax; /* 0x12160168: mov dword ptr [ebp + 0x14], eax */
    eax = MEM32(edi); /* 0x1216016B: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1216016D: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x12160170: mov dword ptr [ebp + 0xc], esi */
    esi = MEM32(ecx + eax); /* 0x12160173: mov esi, dword ptr [ecx + eax] */
    eax = MEM32(edi + 0x4); /* 0x12160176: mov eax, dword ptr [edi + 4] */
    edi = MEM32(ecx + eax); /* 0x12160179: mov edi, dword ptr [ecx + eax] */
    eax = MEM32(ebp + 0x10); /* 0x1216017C: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x1216017F: mov eax, dword ptr [eax + 8] */
    eax = MEM32(ecx + eax); /* 0x12160182: mov eax, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12160185: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x12160188: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1216018C: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1216018F: mov dword ptr [ebp - 0x18], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_12160228; /* 0x12160192: jbe 0x12160228 */
L_12160198:
    eax = MEM32(ebp + 0x14); /* 0x12160198: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1216019B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1216019E: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121601A0: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - edi; /* 0x121601A1: sub dword ptr [ebp + 8], edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x121601A4: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + 0x14) = ecx; /* 0x121601A7: mov dword ptr [ebp + 0x14], ecx */
    ebx = ebx; /* 0x121601AA: lea ebx, [ebx] */
L_121601B0:
    ecx = (uint32_t)MEM8(eax + (-0x1)); /* 0x121601B0: movzx ecx, byte ptr [eax - 1] */
    esi = (uint32_t)MEM8(eax + 0x1); /* 0x121601B4: movzx esi, byte ptr [eax + 1] */
    edx = (uint32_t)MEM8(eax); /* 0x121601B8: movzx edx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x8)); /* 0x121601BB: add eax, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121601BE: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = eax; /* 0x121601BF: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + ecx * 4 + 0x800); /* 0x121601C2: mov eax, dword ptr [ebx + ecx*4 + 0x800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x400); /* 0x121601C9: add eax, dword ptr [ebx + edx*4 + 0x400] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4); /* 0x121601D0: add eax, dword ptr [ebx + esi*4] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0xC)); /* 0x121601D3: mov ebx, dword ptr [ebp - 0xc] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x121601D6: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(ebx + edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x121601D9: mov byte ptr [ebx + edi - 1], al */
    ebx = MEM32(ebp + (-0x10)); /* 0x121601DD: mov ebx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebx + ecx * 4 + 0x1400); /* 0x121601E0: mov eax, dword ptr [ebx + ecx*4 + 0x1400] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x1000));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x1000); /* 0x121601E7: add eax, dword ptr [ebx + edx*4 + 0x1000] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4 + 0xC00));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4 + 0xC00); /* 0x121601EE: add eax, dword ptr [ebx + esi*4 + 0xc00] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x121601F5: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x121601F8: mov byte ptr [edi - 1], al */
    eax = MEM32(ebx + ecx * 4 + 0x1C00); /* 0x121601FB: mov eax, dword ptr [ebx + ecx*4 + 0x1c00] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x1800));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x1800); /* 0x12160202: add eax, dword ptr [ebx + edx*4 + 0x1800] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x12160209: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4 + 0x1400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4 + 0x1400); /* 0x1216020C: add eax, dword ptr [ebx + esi*4 + 0x1400] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x12160213: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x12160216: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM8(ecx + edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x12160219: mov byte ptr [ecx + edi - 1], al */
    eax = MEM32(ebp + (-0x14)); /* 0x1216021D: mov eax, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121601B0; /* 0x12160220: jne 0x121601b0 */
L_12160222:
    ecx = MEM32(ebp + (-0x18)); /* 0x12160222: mov ecx, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + 0x18); /* 0x12160225: mov edx, dword ptr [ebp + 0x18] */
L_12160228:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12160228: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = edx; /* 0x12160229: mov dword ptr [ebp + 0x18], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12160160; /* 0x1216022C: jns 0x12160160 */
L_12160232:
    edi = POP32_VAL(esp); /* 0x12160232: pop edi */
    esi = POP32_VAL(esp); /* 0x12160233: pop esi */
L_12160234:
    ebx = POP32_VAL(esp); /* 0x12160234: pop ebx */
    esp = ebp; /* 0x12160235: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12160237: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12160238: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12160240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160240u);

L_12160240:
    edi = edi; /* 0x12160240: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160242: push ebp */
    ebp = esp; /* 0x12160243: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x12160245: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x12160248: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x168); /* 0x1216024B: mov eax, dword ptr [ecx + 0x168] */
    eax = MEM32(eax + 0x8); /* 0x12160251: mov eax, dword ptr [eax + 8] */
    edx = MEM32(ecx + 0x1C); /* 0x12160254: mov edx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, ebx); /* 0x12160257: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x12160258: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1216025B: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = eax; /* 0x1216025C: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x1216025F: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x18) = ebx; /* 0x12160262: mov dword ptr [ebp + 0x18], ebx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_121602E4; /* 0x12160265: js 0x121602e4 */
L_12160267:
    eax = MEM32(ebp + 0x14); /* 0x12160267: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1216026A: push esi */
    ecx = eax * 4; /* 0x1216026B: lea ecx, [eax*4] */
    PUSH32(esp, edi); /* 0x12160272: push edi */
L_12160273:
    eax = MEM32(ebp + 0xC); /* 0x12160273: mov eax, dword ptr [ebp + 0xc] */
    esi = MEM32(eax); /* 0x12160276: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12160278: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x1216027B: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x1216027E: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x12160281: mov eax, dword ptr [eax] */
    eax = MEM32(ecx + eax); /* 0x12160283: mov eax, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12160286: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12160289: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x1216028B: mov dword ptr [ebp + 0x14], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1216028E: mov dword ptr [ebp - 8], ecx */
    /* test edx, edx */ /* 0x12160291: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121602DC; /* 0x12160293: je 0x121602dc */
L_12160295:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x12160295: add esi, 2 */
    _flag_k = FK_ADD;
    goto L_121602A0; /* 0x12160298: jmp 0x121602a0 */
L_121602A0:
    eax = (uint32_t)MEM8(esi); /* 0x121602A0: movzx eax, byte ptr [esi] */
    ecx = (uint32_t)MEM8(esi + (-0x1)); /* 0x121602A3: movzx ecx, byte ptr [esi - 1] */
    ebx = MEM32(ebp + 0x8); /* 0x121602A7: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + eax * 4 + 0x800); /* 0x121602AA: mov eax, dword ptr [ebx + eax*4 + 0x800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + ecx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + ecx * 4 + 0x400); /* 0x121602B1: add eax, dword ptr [ebx + ecx*4 + 0x400] */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM8(esi + (-0x2)); /* 0x121602B8: movzx edx, byte ptr [esi - 2] */
    ecx = ebx; /* 0x121602BC: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + edx * 4); /* 0x121602BE: add eax, dword ptr [ecx + edx*4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x14); /* 0x121602C1: mov ecx, dword ptr [ebp + 0x14] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x121602C4: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(edi + ecx) = (uint8_t)(LO8(eax)); /* 0x121602C7: mov byte ptr [edi + ecx], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x121602CA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x121602CB: add esi, 3 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x121602CE: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121602A0; /* 0x121602D1: jb 0x121602a0 */
L_121602D3:
    ebx = MEM32(ebp + 0x18); /* 0x121602D3: mov ebx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + (-0x8)); /* 0x121602D6: mov ecx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x121602D9: mov edx, dword ptr [ebp - 4] */
L_121602DC:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x121602DC: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = ebx; /* 0x121602DD: mov dword ptr [ebp + 0x18], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12160273; /* 0x121602E0: jns 0x12160273 */
L_121602E2:
    edi = POP32_VAL(esp); /* 0x121602E2: pop edi */
    esi = POP32_VAL(esp); /* 0x121602E3: pop esi */
L_121602E4:
    ebx = POP32_VAL(esp); /* 0x121602E4: pop ebx */
    esp = ebp; /* 0x121602E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121602E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121602E8: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121602F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121602F0u);

L_121602F0:
    edi = edi; /* 0x121602F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121602F2: push ebp */
    ebp = esp; /* 0x121602F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x121602F5: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x121602F8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x24); /* 0x121602FB: mov eax, dword ptr [ecx + 0x24] */
    edx = MEM32(ecx + 0x1C); /* 0x121602FE: mov edx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, ebx); /* 0x12160301: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x12160302: mov ebx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12160305: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx + 0x168); /* 0x12160308: mov eax, dword ptr [ecx + 0x168] */
    eax = MEM32(eax + 0x8); /* 0x1216030E: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12160311: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = eax; /* 0x12160312: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x12160315: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x18) = ebx; /* 0x12160318: mov dword ptr [ebp + 0x18], ebx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_12160397; /* 0x1216031B: js 0x12160397 */
L_1216031D:
    eax = MEM32(ebp + 0x14); /* 0x1216031D: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x12160320: push esi */
    ecx = eax * 4; /* 0x12160321: lea ecx, [eax*4] */
    PUSH32(esp, edi); /* 0x12160328: push edi */
    esp = esp; /* 0x12160329: lea esp, [esp] */
L_12160330:
    eax = MEM32(ebp + 0xC); /* 0x12160330: mov eax, dword ptr [ebp + 0xc] */
    esi = MEM32(eax); /* 0x12160333: mov esi, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12160335: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x12160338: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x1216033B: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x1216033E: mov eax, dword ptr [eax] */
    eax = MEM32(ecx + eax); /* 0x12160340: mov eax, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12160343: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12160346: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x12160348: mov dword ptr [ebp + 0x14], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1216034B: mov dword ptr [ebp - 0xc], ecx */
    /* test edx, edx */ /* 0x1216034E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216038F; /* 0x12160350: je 0x1216038f */
L_12160352:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12160352: inc esi */
    _flag_k = FK_INC;
L_12160353:
    eax = (uint32_t)MEM8(esi + (-0x1)); /* 0x12160353: movzx eax, byte ptr [esi - 1] */
    ecx = (uint32_t)MEM8(esi); /* 0x12160357: movzx ecx, byte ptr [esi] */
    ebx = MEM32(ebp + 0x8); /* 0x1216035A: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + eax * 4 + 0x800); /* 0x1216035D: mov eax, dword ptr [ebx + eax*4 + 0x800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + ecx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + ecx * 4 + 0x400); /* 0x12160364: add eax, dword ptr [ebx + ecx*4 + 0x400] */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM8(esi + 0x1); /* 0x1216036B: movzx edx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x8)); /* 0x1216036F: add esi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x12160372: mov ecx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edx * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + edx * 4); /* 0x12160374: add eax, dword ptr [ecx + edx*4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x14); /* 0x12160377: mov ecx, dword ptr [ebp + 0x14] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1216037A: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(edi + ecx) = (uint8_t)(LO8(eax)); /* 0x1216037D: mov byte ptr [edi + ecx], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12160380: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x12160381: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12160353; /* 0x12160384: jb 0x12160353 */
L_12160386:
    ebx = MEM32(ebp + 0x18); /* 0x12160386: mov ebx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + (-0xC)); /* 0x12160389: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x1216038C: mov edx, dword ptr [ebp - 4] */
L_1216038F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1216038F: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = ebx; /* 0x12160390: mov dword ptr [ebp + 0x18], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12160330; /* 0x12160393: jns 0x12160330 */
L_12160395:
    edi = POP32_VAL(esp); /* 0x12160395: pop edi */
    esi = POP32_VAL(esp); /* 0x12160396: pop esi */
L_12160397:
    ebx = POP32_VAL(esp); /* 0x12160397: pop ebx */
    esp = ebp; /* 0x12160398: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1216039A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216039B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121603B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121603B0u);

L_121603B0:
    edi = edi; /* 0x121603B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121603B2: push ebp */
    ebp = esp; /* 0x121603B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121603B5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x121603B8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x168); /* 0x121603BB: mov eax, dword ptr [ecx + 0x168] */
    eax = MEM32(eax + 0x8); /* 0x121603C1: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x121603C4: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx + 0x1C); /* 0x121603C7: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(ebp + 0x18); /* 0x121603CA: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x121603CD: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x121603CE: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + 0x18) = ecx; /* 0x121603D1: mov dword ptr [ebp + 0x18], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_121604EB; /* 0x121603D4: js 0x121604eb */
L_121603DA:
    eax = MEM32(ebp + 0x14); /* 0x121603DA: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x121603DD: push ebx */
    PUSH32(esp, esi); /* 0x121603DE: push esi */
    PUSH32(esp, edi); /* 0x121603DF: push edi */
    ebx = eax * 4; /* 0x121603E0: lea ebx, [eax*4] */
L_121603E7:
    edx = MEM32(ebp + 0xC); /* 0x121603E7: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx); /* 0x121603EA: mov eax, dword ptr [edx] */
    esi = MEM32(ebp + 0x10); /* 0x121603EC: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x121603EF: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi); /* 0x121603F2: mov eax, dword ptr [esi] */
    edi = MEM32(ebx + eax); /* 0x121603F4: mov edi, dword ptr [ebx + eax] */
    eax = MEM32(esi + 0x4); /* 0x121603F7: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x121603FA: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x121603FD: mov dword ptr [ebp + 0xc], edx */
    edx = MEM32(ebx + eax); /* 0x12160400: mov edx, dword ptr [ebx + eax] */
    eax = MEM32(esi + 0x8); /* 0x12160403: mov eax, dword ptr [esi + 8] */
    esi = MEM32(ebx + eax); /* 0x12160406: mov esi, dword ptr [ebx + eax] */
    eax = MEM32(ebp + 0x10); /* 0x12160409: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x1216040C: mov eax, dword ptr [eax + 0xc] */
    eax = MEM32(ebx + eax); /* 0x1216040F: mov eax, dword ptr [ebx + eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12160412: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x12160415: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ebx; /* 0x12160419: mov dword ptr [ebp - 0x18], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_121604DE; /* 0x1216041C: jbe 0x121604de */
L_12160422:
    ecx = MEM32(ebp + 0x8); /* 0x12160422: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x12160425: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12160427: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1216042A: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1216042C: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1216042F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x12160432: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x12160434: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x12160437: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0x14)) = esi; /* 0x1216043A: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + 0x14) = eax; /* 0x1216043D: mov dword ptr [ebp + 0x14], eax */
L_12160440:
    eax = (uint32_t)MEM8(ecx + (-0x2)); /* 0x12160440: movzx eax, byte ptr [ecx - 2] */
    ebx = MEM32(ebp + (-0xC)); /* 0x12160444: mov ebx, dword ptr [ebp - 0xc] */
    esi = 0xFFu; /* 0x12160447: mov esi, 0xff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1216044C: sub esi, eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ecx + (-0x1)); /* 0x1216044E: movzx eax, byte ptr [ecx - 1] */
    edx = 0xFFu; /* 0x12160452: mov edx, 0xff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x12160457: sub edx, eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ecx); /* 0x12160459: movzx eax, byte ptr [ecx] */
    ecx = 0xFFu; /* 0x1216045C: mov ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12160461: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x12160463: mov eax, dword ptr [ebp + 8] */
    SET_LO8(eax, MEM8(eax + 0x1)); /* 0x12160466: mov al, byte ptr [eax + 1] */
    MEM8(ebx + edi) = (uint8_t)(LO8(eax)); /* 0x12160469: mov byte ptr [ebx + edi], al */
    ebx = MEM32(ebp + (-0x8)); /* 0x1216046C: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebx + ecx * 4 + 0x800); /* 0x1216046F: mov eax, dword ptr [ebx + ecx*4 + 0x800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x400); /* 0x12160476: add eax, dword ptr [ebx + edx*4 + 0x400] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x1216047D: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4); /* 0x12160481: add eax, dword ptr [ebx + esi*4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12160484: inc edi */
    _flag_k = FK_INC;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x12160485: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x12160488: mov byte ptr [edi - 1], al */
    eax = MEM32(ebx + ecx * 4 + 0x1400); /* 0x1216048B: mov eax, dword ptr [ebx + ecx*4 + 0x1400] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x1000));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x1000); /* 0x12160492: add eax, dword ptr [ebx + edx*4 + 0x1000] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4 + 0xC00));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4 + 0xC00); /* 0x12160499: add eax, dword ptr [ebx + esi*4 + 0xc00] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x10)); /* 0x121604A0: mov ebx, dword ptr [ebp - 0x10] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x121604A3: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(ebx + edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x121604A6: mov byte ptr [ebx + edi - 1], al */
    ebx = MEM32(ebp + (-0x8)); /* 0x121604AA: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebx + ecx * 4 + 0x1C00); /* 0x121604AD: mov eax, dword ptr [ebx + ecx*4 + 0x1c00] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx * 4 + 0x1800));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + edx * 4 + 0x1800); /* 0x121604B4: add eax, dword ptr [ebx + edx*4 + 0x1800] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x14)); /* 0x121604BB: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + esi * 4 + 0x1400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + esi * 4 + 0x1400); /* 0x121604BE: add eax, dword ptr [ebx + esi*4 + 0x1400] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x121604C5: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x121604C8: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    MEM8(ecx + edi + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x121604CB: mov byte ptr [ecx + edi - 1], al */
    ecx = MEM32(ebp + 0x8); /* 0x121604CF: mov ecx, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12160440; /* 0x121604D2: jne 0x12160440 */
L_121604D8:
    ebx = MEM32(ebp + (-0x18)); /* 0x121604D8: mov ebx, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + 0x18); /* 0x121604DB: mov ecx, dword ptr [ebp + 0x18] */
L_121604DE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x121604DE: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = ecx; /* 0x121604DF: mov dword ptr [ebp + 0x18], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_121603E7; /* 0x121604E2: jns 0x121603e7 */
L_121604E8:
    edi = POP32_VAL(esp); /* 0x121604E8: pop edi */
    esi = POP32_VAL(esp); /* 0x121604E9: pop esi */
    ebx = POP32_VAL(esp); /* 0x121604EA: pop ebx */
L_121604EB:
    esp = ebp; /* 0x121604EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121604ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121604EE: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12160500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160500u);

L_12160500:
    edi = edi; /* 0x12160500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160502: push ebp */
    ebp = esp; /* 0x12160503: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12160505: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12160508: push ebx */
    ebx = MEM32(eax + 0x1C); /* 0x12160509: mov ebx, dword ptr [eax + 0x1c] */
    eax = MEM32(eax + 0x24); /* 0x1216050C: mov eax, dword ptr [eax + 0x24] */
    PUSH32(esp, esi); /* 0x1216050F: push esi */
    esi = MEM32(ebp + 0x18); /* 0x12160510: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12160513: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = eax; /* 0x12160514: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + 0x18) = esi; /* 0x12160517: mov dword ptr [ebp + 0x18], esi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_12160569; /* 0x1216051A: js 0x12160569 */
L_1216051C:
    eax = MEM32(ebp + 0x14); /* 0x1216051C: mov eax, dword ptr [ebp + 0x14] */
    ecx = eax * 4; /* 0x1216051F: lea ecx, [eax*4] */
    PUSH32(esp, edi); /* 0x12160526: push edi */
L_12160527:
    eax = MEM32(ebp + 0xC); /* 0x12160527: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(eax); /* 0x1216052A: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1216052C: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x1216052F: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x12160532: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x12160535: mov eax, dword ptr [eax] */
    edi = MEM32(ecx + eax); /* 0x12160537: mov edi, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1216053A: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x14) = ecx; /* 0x1216053D: mov dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12160540: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x12160542: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216055F; /* 0x12160544: je 0x1216055f */
L_12160546:
    esi = MEM32(ebp + 0x8); /* 0x12160546: mov esi, dword ptr [ebp + 8] */
    esp = esp; /* 0x12160549: lea esp, [esp] */
L_12160550:
    SET_LO8(eax, MEM8(edx)); /* 0x12160550: mov al, byte ptr [edx] */
    MEM8(ecx + edi) = (uint8_t)(LO8(eax)); /* 0x12160552: mov byte ptr [ecx + edi], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12160555: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x12160556: add edx, esi */
    _flag_k = FK_ADD;
    /* cmp ecx, ebx */ /* 0x12160558: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12160550; /* 0x1216055A: jb 0x12160550 */
L_1216055C:
    esi = MEM32(ebp + 0x18); /* 0x1216055C: mov esi, dword ptr [ebp + 0x18] */
L_1216055F:
    ecx = MEM32(ebp + 0x14); /* 0x1216055F: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12160562: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = esi; /* 0x12160563: mov dword ptr [ebp + 0x18], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12160527; /* 0x12160566: jns 0x12160527 */
L_12160568:
    edi = POP32_VAL(esp); /* 0x12160568: pop edi */
L_12160569:
    esi = POP32_VAL(esp); /* 0x12160569: pop esi */
    ebx = POP32_VAL(esp); /* 0x1216056A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1216056B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216056C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12160580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160580u);

L_12160580:
    edi = edi; /* 0x12160580: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160582: push ebp */
    ebp = esp; /* 0x12160583: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12160585: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x12160586: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x1C); /* 0x12160589: mov edx, dword ptr [eax + 0x1c] */
    PUSH32(esp, ebx); /* 0x1216058C: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x1216058D: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12160590: dec ebx */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x12160591: push edi */
    edi = MEM32(eax + 0x3C); /* 0x12160592: mov edi, dword ptr [eax + 0x3c] */
    MEM32(ebp + (-0x4)) = edx; /* 0x12160595: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x18) = ebx; /* 0x12160598: mov dword ptr [ebp + 0x18], ebx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_12160616; /* 0x1216059B: js 0x12160616 */
L_1216059D:
    eax = MEM32(ebp + 0x14); /* 0x1216059D: mov eax, dword ptr [ebp + 0x14] */
    ecx = eax * 4; /* 0x121605A0: lea ecx, [eax*4] */
    eax = MEM32(ebp + 0xC); /* 0x121605A7: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x8) = ecx; /* 0x121605AA: mov dword ptr [ebp + 8], ecx */
    PUSH32(esp, esi); /* 0x121605AD: push esi */
    edi = edi; /* 0x121605AE: mov edi, edi */
L_121605B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121605B0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = esi; /* 0x121605B2: mov dword ptr [ebp + 0x14], esi */
    /* test edi, edi */ /* 0x121605B5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160603; /* 0x121605B7: jle 0x12160603 */
L_121605B9:
    esp = esp; /* 0x121605B9: lea esp, [esp] */
L_121605C0:
    eax = MEM32(ebp + 0x10); /* 0x121605C0: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + esi * 4); /* 0x121605C3: mov eax, dword ptr [eax + esi*4] */
    ebx = MEM32(ecx + eax); /* 0x121605C6: mov ebx, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121605C9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x121605CB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121605F2; /* 0x121605CD: je 0x121605f2 */
L_121605CF:
    edx = MEM32(ebp + 0xC); /* 0x121605CF: mov edx, dword ptr [ebp + 0xc] */
    edx = MEM32(edx); /* 0x121605D2: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x121605D4: add edx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x4)); /* 0x121605D6: mov esi, dword ptr [ebp - 4] */
    esp = esp; /* 0x121605D9: lea esp, [esp] */
L_121605E0:
    SET_LO8(eax, MEM8(edx)); /* 0x121605E0: mov al, byte ptr [edx] */
    MEM8(ecx + ebx) = (uint8_t)(LO8(eax)); /* 0x121605E2: mov byte ptr [ecx + ebx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121605E5: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x121605E6: add edx, edi */
    _flag_k = FK_ADD;
    /* cmp ecx, esi */ /* 0x121605E8: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121605E0; /* 0x121605EA: jb 0x121605e0 */
L_121605EC:
    esi = MEM32(ebp + 0x14); /* 0x121605EC: mov esi, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + (-0x4)); /* 0x121605EF: mov edx, dword ptr [ebp - 4] */
L_121605F2:
    ecx = MEM32(ebp + 0x8); /* 0x121605F2: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121605F5: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = esi; /* 0x121605F6: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, edi */ /* 0x121605F9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121605C0; /* 0x121605FB: jl 0x121605c0 */
L_121605FD:
    eax = MEM32(ebp + 0xC); /* 0x121605FD: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x18); /* 0x12160600: mov ebx, dword ptr [ebp + 0x18] */
L_12160603:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12160603: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12160606: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12160609: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = eax; /* 0x1216060A: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + 0x8) = ecx; /* 0x1216060D: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + 0x18) = ebx; /* 0x12160610: mov dword ptr [ebp + 0x18], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_121605B0; /* 0x12160613: jns 0x121605b0 */
L_12160615:
    esi = POP32_VAL(esp); /* 0x12160615: pop esi */
L_12160616:
    edi = POP32_VAL(esp); /* 0x12160616: pop edi */
    ebx = POP32_VAL(esp); /* 0x12160617: pop ebx */
    esp = ebp; /* 0x12160618: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1216061A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216061B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12160630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160630u);

L_12160630:
    edi = edi; /* 0x12160630: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160632: push ebp */
    ebp = esp; /* 0x12160633: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12160635: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12160636: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12160639: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x1216063C: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1216063E: push edi */
    PUSH32(esp, 0xCu); /* 0x1216063F: push 0xc */
    PUSH32(esp, 1); /* 0x12160641: push 1 */
    PUSH32(esp, esi); /* 0x12160643: push esi */
    RECOMP_ICALL(eax); /* 0x12160644: call eax */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12160646: mov edi, eax */
    MEM32(esi + 0x168) = edi; /* 0x12160648: mov dword ptr [esi + 0x168], edi */
    MEM32(edi) = 0x121556F0u; /* 0x1216064E: mov dword ptr [edi], 0x121556f0 */
    ecx = MEM32(esi + 0x28); /* 0x12160654: mov ecx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12160657: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, 4 */ /* 0x12160658: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1216067C; /* 0x1216065B: ja 0x1216067c */
L_1216065D:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x12160858)); goto _ljump; }
L_12160664:
    /* cmp MEM32(esi + 0x24), 1 */ /* 0x12160664: cmp dword ptr [esi + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160692; /* 0x12160668: je 0x12160692 */
L_1216066A:
    goto L_12160682; /* 0x1216066A: jmp 0x12160682 */
L_1216066C:
    /* cmp MEM32(esi + 0x24), 3 */ /* 0x1216066C: cmp dword ptr [esi + 0x24], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160692; /* 0x12160670: je 0x12160692 */
L_12160672:
    goto L_12160682; /* 0x12160672: jmp 0x12160682 */
L_12160674:
    /* cmp MEM32(esi + 0x24), 4 */ /* 0x12160674: cmp dword ptr [esi + 0x24], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160692; /* 0x12160678: je 0x12160692 */
L_1216067A:
    goto L_12160682; /* 0x1216067A: jmp 0x12160682 */
L_1216067C:
    /* cmp MEM32(esi + 0x24), 1 */ /* 0x1216067C: cmp dword ptr [esi + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_12160692; /* 0x12160680: jge 0x12160692 */
L_12160682:
    eax = MEM32(esi); /* 0x12160682: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 9; /* 0x12160684: mov dword ptr [eax + 0x14], 9 */
    eax = MEM32(esi); /* 0x1216068B: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1216068D: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1216068F: push esi */
    RECOMP_ICALL(eax); /* 0x12160690: call eax */
    RECOMP_FLAGS_IN();
L_12160692:
    eax = MEM32(esi + 0x40); /* 0x12160692: mov eax, dword ptr [esi + 0x40] */
    ecx = eax + (-0x1); /* 0x12160695: lea ecx, [eax - 1] */
    /* cmp ecx, 4 */ /* 0x12160698: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1216082E; /* 0x1216069B: ja 0x1216082e */
L_121606A1:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1216086C)); goto _ljump; }
L_121606A8:
    /* cmp MEM32(esi + 0x3C), 1 */ /* 0x121606A8: cmp dword ptr [esi + 0x3c], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121606BE; /* 0x121606AC: je 0x121606be */
L_121606AE:
    eax = MEM32(esi); /* 0x121606AE: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xAu; /* 0x121606B0: mov dword ptr [eax + 0x14], 0xa */
    eax = MEM32(esi); /* 0x121606B7: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121606B9: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121606BB: push esi */
    RECOMP_ICALL(eax); /* 0x121606BC: call eax */
    RECOMP_FLAGS_IN();
L_121606BE:
    eax = MEM32(esi + 0x28); /* 0x121606BE: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, 1 */ /* 0x121606C1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160700; /* 0x121606C4: je 0x12160700 */
L_121606C6:
    /* cmp eax, 2 */ /* 0x121606C6: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121606DE; /* 0x121606C9: jne 0x121606de */
L_121606CB:
    MEM32(edi) = 0x1215FF20u; /* 0x121606CB: mov dword ptr [edi], 0x1215ff20 */
    MEM32(edi + 0x4) = 0x12160240u; /* 0x121606D1: mov dword ptr [edi + 4], 0x12160240 */
    edi = POP32_VAL(esp); /* 0x121606D8: pop edi */
    esi = POP32_VAL(esp); /* 0x121606D9: pop esi */
    ebp = POP32_VAL(esp); /* 0x121606DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121606DB: ret 4 */
L_121606DE:
    /* cmp eax, 6 */ /* 0x121606DE: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121606E8; /* 0x121606E1: je 0x121606e8 */
L_121606E3:
    /* cmp eax, 7 */ /* 0x121606E3: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121606FB; /* 0x121606E6: jne 0x121606fb */
L_121606E8:
    MEM32(edi) = 0x1215FF20u; /* 0x121606E8: mov dword ptr [edi], 0x1215ff20 */
    MEM32(edi + 0x4) = 0x121602F0u; /* 0x121606EE: mov dword ptr [edi + 4], 0x121602f0 */
    edi = POP32_VAL(esp); /* 0x121606F5: pop edi */
    esi = POP32_VAL(esp); /* 0x121606F6: pop esi */
    ebp = POP32_VAL(esp); /* 0x121606F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121606F8: ret 4 */
L_121606FB:
    /* cmp eax, 3 */ /* 0x121606FB: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216072D; /* 0x121606FE: jne 0x1216072d */
L_12160700:
    MEM32(edi + 0x4) = 0x12160500u; /* 0x12160700: mov dword ptr [edi + 4], 0x12160500 */
    edi = POP32_VAL(esp); /* 0x12160707: pop edi */
    esi = POP32_VAL(esp); /* 0x12160708: pop esi */
    ebp = POP32_VAL(esp); /* 0x12160709: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216070A: ret 4 */
L_1216070D:
    /* cmp MEM32(esi + 0x3C), 3 */ /* 0x1216070D: cmp dword ptr [esi + 0x3c], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160723; /* 0x12160711: je 0x12160723 */
L_12160713:
    eax = MEM32(esi); /* 0x12160713: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xAu; /* 0x12160715: mov dword ptr [eax + 0x14], 0xa */
    eax = MEM32(esi); /* 0x1216071C: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x1216071E: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160720: push esi */
    RECOMP_ICALL(eax); /* 0x12160721: call eax */
    RECOMP_FLAGS_IN();
L_12160723:
    /* cmp MEM32(esi + 0x28), 2 */ /* 0x12160723: cmp dword ptr [esi + 0x28], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216084B; /* 0x12160727: je 0x1216084b */
L_1216072D:
    eax = MEM32(esi); /* 0x1216072D: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Bu; /* 0x1216072F: mov dword ptr [eax + 0x14], 0x1b */
    eax = MEM32(esi); /* 0x12160736: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160738: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1216073A: push esi */
    RECOMP_ICALL(eax); /* 0x1216073B: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1216073D: pop edi */
    esi = POP32_VAL(esp); /* 0x1216073E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216073F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12160740: ret 4 */
L_12160743:
    /* cmp MEM32(esi + 0x3C), 3 */ /* 0x12160743: cmp dword ptr [esi + 0x3c], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160759; /* 0x12160747: je 0x12160759 */
L_12160749:
    eax = MEM32(esi); /* 0x12160749: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xAu; /* 0x1216074B: mov dword ptr [eax + 0x14], 0xa */
    eax = MEM32(esi); /* 0x12160752: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160754: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160756: push esi */
    RECOMP_ICALL(eax); /* 0x12160757: call eax */
    RECOMP_FLAGS_IN();
L_12160759:
    eax = MEM32(esi + 0x28); /* 0x12160759: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, 2 */ /* 0x1216075C: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12160774; /* 0x1216075F: jne 0x12160774 */
L_12160761:
    MEM32(edi) = 0x1215FF20u; /* 0x12160761: mov dword ptr [edi], 0x1215ff20 */
    MEM32(edi + 0x4) = 0x12160000u; /* 0x12160767: mov dword ptr [edi + 4], 0x12160000 */
    edi = POP32_VAL(esp); /* 0x1216076E: pop edi */
    esi = POP32_VAL(esp); /* 0x1216076F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12160770: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12160771: ret 4 */
L_12160774:
    /* cmp eax, 6 */ /* 0x12160774: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216077E; /* 0x12160777: je 0x1216077e */
L_12160779:
    /* cmp eax, 7 */ /* 0x12160779: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12160791; /* 0x1216077C: jne 0x12160791 */
L_1216077E:
    MEM32(edi) = 0x1215FF20u; /* 0x1216077E: mov dword ptr [edi], 0x1215ff20 */
    MEM32(edi + 0x4) = 0x12160120u; /* 0x12160784: mov dword ptr [edi + 4], 0x12160120 */
    edi = POP32_VAL(esp); /* 0x1216078B: pop edi */
    esi = POP32_VAL(esp); /* 0x1216078C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216078D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216078E: ret 4 */
L_12160791:
    /* cmp eax, 3 */ /* 0x12160791: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216084B; /* 0x12160794: je 0x1216084b */
L_1216079A:
    eax = MEM32(esi); /* 0x1216079A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Bu; /* 0x1216079C: mov dword ptr [eax + 0x14], 0x1b */
    eax = MEM32(esi); /* 0x121607A3: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121607A5: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121607A7: push esi */
    RECOMP_ICALL(eax); /* 0x121607A8: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x121607AA: pop edi */
    esi = POP32_VAL(esp); /* 0x121607AB: pop esi */
    ebp = POP32_VAL(esp); /* 0x121607AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121607AD: ret 4 */
L_121607B0:
    /* cmp MEM32(esi + 0x3C), 4 */ /* 0x121607B0: cmp dword ptr [esi + 0x3c], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121607C6; /* 0x121607B4: je 0x121607c6 */
L_121607B6:
    eax = MEM32(esi); /* 0x121607B6: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xAu; /* 0x121607B8: mov dword ptr [eax + 0x14], 0xa */
    eax = MEM32(esi); /* 0x121607BF: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121607C1: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121607C3: push esi */
    RECOMP_ICALL(eax); /* 0x121607C4: call eax */
    RECOMP_FLAGS_IN();
L_121607C6:
    /* cmp MEM32(esi + 0x28), 4 */ /* 0x121607C6: cmp dword ptr [esi + 0x28], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216084B; /* 0x121607CA: je 0x1216084b */
L_121607CC:
    eax = MEM32(esi); /* 0x121607CC: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Bu; /* 0x121607CE: mov dword ptr [eax + 0x14], 0x1b */
    eax = MEM32(esi); /* 0x121607D5: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121607D7: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121607D9: push esi */
    RECOMP_ICALL(eax); /* 0x121607DA: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x121607DC: pop edi */
    esi = POP32_VAL(esp); /* 0x121607DD: pop esi */
    ebp = POP32_VAL(esp); /* 0x121607DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121607DF: ret 4 */
L_121607E2:
    /* cmp MEM32(esi + 0x3C), 4 */ /* 0x121607E2: cmp dword ptr [esi + 0x3c], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121607F8; /* 0x121607E6: je 0x121607f8 */
L_121607E8:
    eax = MEM32(esi); /* 0x121607E8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xAu; /* 0x121607EA: mov dword ptr [eax + 0x14], 0xa */
    eax = MEM32(esi); /* 0x121607F1: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121607F3: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121607F5: push esi */
    RECOMP_ICALL(eax); /* 0x121607F6: call eax */
    RECOMP_FLAGS_IN();
L_121607F8:
    eax = MEM32(esi + 0x28); /* 0x121607F8: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, 4 */ /* 0x121607FB: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12160813; /* 0x121607FE: jne 0x12160813 */
L_12160800:
    MEM32(edi) = 0x1215FF20u; /* 0x12160800: mov dword ptr [edi], 0x1215ff20 */
    MEM32(edi + 0x4) = 0x121603B0u; /* 0x12160806: mov dword ptr [edi + 4], 0x121603b0 */
    edi = POP32_VAL(esp); /* 0x1216080D: pop edi */
    esi = POP32_VAL(esp); /* 0x1216080E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216080F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12160810: ret 4 */
L_12160813:
    /* cmp eax, 5 */ /* 0x12160813: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216084B; /* 0x12160816: je 0x1216084b */
L_12160818:
    eax = MEM32(esi); /* 0x12160818: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Bu; /* 0x1216081A: mov dword ptr [eax + 0x14], 0x1b */
    eax = MEM32(esi); /* 0x12160821: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160823: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160825: push esi */
    RECOMP_ICALL(eax); /* 0x12160826: call eax */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12160828: pop edi */
    esi = POP32_VAL(esp); /* 0x12160829: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216082A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216082B: ret 4 */
L_1216082E:
    /* cmp eax, MEM32(esi + 0x28) */ /* 0x1216082E: cmp eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216083B; /* 0x12160831: jne 0x1216083b */
L_12160833:
    eax = MEM32(esi + 0x3C); /* 0x12160833: mov eax, dword ptr [esi + 0x3c] */
    /* cmp eax, MEM32(esi + 0x24) */ /* 0x12160836: cmp eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216084B; /* 0x12160839: je 0x1216084b */
L_1216083B:
    eax = MEM32(esi); /* 0x1216083B: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Bu; /* 0x1216083D: mov dword ptr [eax + 0x14], 0x1b */
    eax = MEM32(esi); /* 0x12160844: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160846: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160848: push esi */
    RECOMP_ICALL(eax); /* 0x12160849: call eax */
    RECOMP_FLAGS_IN();
L_1216084B:
    MEM32(edi + 0x4) = 0x12160580u; /* 0x1216084B: mov dword ptr [edi + 4], 0x12160580 */
    edi = POP32_VAL(esp); /* 0x12160852: pop edi */
    esi = POP32_VAL(esp); /* 0x12160853: pop esi */
    ebp = POP32_VAL(esp); /* 0x12160854: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12160855: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x12160664u: goto L_12160664;
      case 0x1216066Cu: goto L_1216066C;
      case 0x12160674u: goto L_12160674;
      case 0x121606A8u: goto L_121606A8;
      case 0x1216070Du: goto L_1216070D;
      case 0x12160743u: goto L_12160743;
      case 0x121607B0u: goto L_121607B0;
      case 0x121607E2u: goto L_121607E2;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12160890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160890u);

L_12160890:
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x12160890: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12160894: push ebx */
    PUSH32(esp, edi); /* 0x12160895: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_121608AA; /* 0x12160896: jbe 0x121608aa */
L_12160898:
    /* cmp MEM32(esi + 0x1C), 0 */ /* 0x12160898: cmp dword ptr [esi + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121608AA; /* 0x1216089C: jbe 0x121608aa */
L_1216089E:
    /* cmp MEM32(esi + 0x3C), 0 */ /* 0x1216089E: cmp dword ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121608AA; /* 0x121608A2: jle 0x121608aa */
L_121608A4:
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x121608A4: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121608BA; /* 0x121608A8: jg 0x121608ba */
L_121608AA:
    eax = MEM32(esi); /* 0x121608AA: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x20u; /* 0x121608AC: mov dword ptr [eax + 0x14], 0x20 */
    eax = MEM32(esi); /* 0x121608B3: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121608B5: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121608B7: push esi */
    RECOMP_ICALL(eax); /* 0x121608B8: call eax */
    RECOMP_FLAGS_IN();
L_121608BA:
    /* cmp MEM32(esi + 0x20), 0xFFDCu */ /* 0x121608BA: cmp dword ptr [esi + 0x20], 0xffdc */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0xFFDCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_121608CC; /* 0x121608C1: jg 0x121608cc */
L_121608C3:
    /* cmp MEM32(esi + 0x1C), 0xFFDCu */ /* 0x121608C3: cmp dword ptr [esi + 0x1c], 0xffdc */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0xFFDCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121608E5; /* 0x121608CA: jle 0x121608e5 */
L_121608CC:
    eax = MEM32(esi); /* 0x121608CC: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x29u; /* 0x121608CE: mov dword ptr [eax + 0x14], 0x29 */
    eax = MEM32(esi); /* 0x121608D5: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = 0xFFDCu; /* 0x121608D7: mov dword ptr [eax + 0x18], 0xffdc */
    eax = MEM32(esi); /* 0x121608DE: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121608E0: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x121608E2: push esi */
    RECOMP_ICALL(eax); /* 0x121608E3: call eax */
    RECOMP_FLAGS_IN();
L_121608E5:
    /* cmp MEM32(esi + 0x38), 8 */ /* 0x121608E5: cmp dword ptr [esi + 0x38], 8 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160903; /* 0x121608E9: je 0x12160903 */
L_121608EB:
    eax = MEM32(esi); /* 0x121608EB: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xFu; /* 0x121608ED: mov dword ptr [eax + 0x14], 0xf */
    eax = MEM32(esi + 0x38); /* 0x121608F4: mov eax, dword ptr [esi + 0x38] */
    ecx = MEM32(esi); /* 0x121608F7: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x121608F9: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x121608FC: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x121608FE: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160900: push esi */
    RECOMP_ICALL(eax); /* 0x12160901: call eax */
    RECOMP_FLAGS_IN();
L_12160903:
    /* cmp MEM32(esi + 0x3C), 0xAu */ /* 0x12160903: cmp dword ptr [esi + 0x3c], 0xa */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1216092A; /* 0x12160907: jle 0x1216092a */
L_12160909:
    eax = MEM32(esi); /* 0x12160909: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x1216090B: mov dword ptr [eax + 0x14], 0x1a */
    eax = MEM32(esi + 0x3C); /* 0x12160912: mov eax, dword ptr [esi + 0x3c] */
    ecx = MEM32(esi); /* 0x12160915: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x12160917: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x1216091A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x1C) = 0xAu; /* 0x1216091C: mov dword ptr [eax + 0x1c], 0xa */
    eax = MEM32(esi); /* 0x12160923: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160925: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160927: push esi */
    RECOMP_ICALL(eax); /* 0x12160928: call eax */
    RECOMP_FLAGS_IN();
L_1216092A:
    edi = MEM32(esi + 0x44); /* 0x1216092A: mov edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1216092D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xF0) = 1; /* 0x1216092F: mov dword ptr [esi + 0xf0], 1 */
    MEM32(esi + 0xF4) = 1; /* 0x12160939: mov dword ptr [esi + 0xf4], 1 */
    /* cmp MEM32(esi + 0x3C), ebx */ /* 0x12160943: cmp dword ptr [esi + 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121609A9; /* 0x12160946: jle 0x121609a9 */
L_12160948:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x12160948: add edi, 0xc */
    _flag_k = FK_ADD;
    goto L_12160950; /* 0x1216094B: jmp 0x12160950 */
L_12160950:
    eax = MEM32(edi + (-0x4)); /* 0x12160950: mov eax, dword ptr [edi - 4] */
    /* test eax, eax */ /* 0x12160953: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160967; /* 0x12160955: jle 0x12160967 */
L_12160957:
    /* cmp eax, 4 */ /* 0x12160957: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12160967; /* 0x1216095A: jg 0x12160967 */
L_1216095C:
    eax = MEM32(edi); /* 0x1216095C: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x1216095E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160967; /* 0x12160960: jle 0x12160967 */
L_12160962:
    /* cmp eax, 4 */ /* 0x12160962: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160977; /* 0x12160965: jle 0x12160977 */
L_12160967:
    eax = MEM32(esi); /* 0x12160967: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x12u; /* 0x12160969: mov dword ptr [eax + 0x14], 0x12 */
    eax = MEM32(esi); /* 0x12160970: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160972: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160974: push esi */
    RECOMP_ICALL(eax); /* 0x12160975: call eax */
    RECOMP_FLAGS_IN();
L_12160977:
    eax = MEM32(esi + 0xF0); /* 0x12160977: mov eax, dword ptr [esi + 0xf0] */
    ecx = MEM32(edi + (-0x4)); /* 0x1216097D: mov ecx, dword ptr [edi - 4] */
    /* cmp eax, ecx */ /* 0x12160980: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12160986; /* 0x12160982: jg 0x12160986 */
L_12160984:
    eax = ecx; /* 0x12160984: mov eax, ecx */
L_12160986:
    MEM32(esi + 0xF0) = eax; /* 0x12160986: mov dword ptr [esi + 0xf0], eax */
    eax = MEM32(esi + 0xF4); /* 0x1216098C: mov eax, dword ptr [esi + 0xf4] */
    ecx = MEM32(edi); /* 0x12160992: mov ecx, dword ptr [edi] */
    /* cmp eax, ecx */ /* 0x12160994: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1216099A; /* 0x12160996: jg 0x1216099a */
L_12160998:
    eax = ecx; /* 0x12160998: mov eax, ecx */
L_1216099A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1216099A: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi + 0xF4) = eax; /* 0x1216099B: mov dword ptr [esi + 0xf4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x121609A1: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x3C) */ /* 0x121609A4: cmp ebx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12160950; /* 0x121609A7: jl 0x12160950 */
L_121609A9:
    edi = MEM32(esi + 0x44); /* 0x121609A9: mov edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121609AC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x3C), ebx */ /* 0x121609AE: cmp dword ptr [esi + 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160A45; /* 0x121609B1: jle 0x12160a45 */
L_121609B7:
    ecx = esi + 0x1C; /* 0x121609B7: lea ecx, [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x24u; /* 0x121609BA: add edi, 0x24 */
    _flag_k = FK_ADD;
    ecx = ecx; /* 0x121609BD: lea ecx, [ecx] */
L_121609C0:
    MEM32(edi + (-0x20)) = ebx; /* 0x121609C0: mov dword ptr [edi - 0x20], ebx */
    MEM32(edi) = 8; /* 0x121609C3: mov dword ptr [edi], 8 */
    eax = MEM32(esi + 0xF0); /* 0x121609C9: mov eax, dword ptr [esi + 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121609CF: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121609D1: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121609D3: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x121609D5: push eax */
    eax = MEM32(edi + (-0x1C)); /* 0x121609D6: mov eax, dword ptr [edi - 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx)); /* 0x121609D9: imul eax, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x121609DC: push eax */
    RECOMP_CALL(sub_12154080); /* 0x121609DD: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + (-0x8)) = eax; /* 0x121609E2: mov dword ptr [edi - 8], eax */
    eax = MEM32(esi + 0xF4); /* 0x121609E5: mov eax, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121609EB: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121609ED: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121609EF: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x121609F1: push eax */
    eax = MEM32(edi + (-0x18)); /* 0x121609F2: mov eax, dword ptr [edi - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x121609F5: imul eax, dword ptr [esi + 0x20] */
    PUSH32(esp, eax); /* 0x121609F9: push eax */
    RECOMP_CALL(sub_12154080); /* 0x121609FA: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + (-0x4)) = eax; /* 0x121609FF: mov dword ptr [edi - 4], eax */
    eax = MEM32(edi + (-0x1C)); /* 0x12160A02: mov eax, dword ptr [edi - 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x1C)); /* 0x12160A05: imul eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(esi + 0xF0)); /* 0x12160A09: push dword ptr [esi + 0xf0] */
    PUSH32(esp, eax); /* 0x12160A0F: push eax */
    RECOMP_CALL(sub_12154080); /* 0x12160A10: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = eax; /* 0x12160A15: mov dword ptr [edi + 4], eax */
    eax = MEM32(edi + (-0x18)); /* 0x12160A18: mov eax, dword ptr [edi - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x12160A1B: imul eax, dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(esi + 0xF4)); /* 0x12160A1F: push dword ptr [esi + 0xf4] */
    PUSH32(esp, eax); /* 0x12160A25: push eax */
    RECOMP_CALL(sub_12154080); /* 0x12160A26: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x12160A2B: mov dword ptr [edi + 8], eax */
    MEM32(edi + 0xC) = 1; /* 0x12160A2E: mov dword ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12160A35: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x12160A36: add edi, 0x54 */
    _flag_k = FK_ADD;
    ecx = esi + 0x1C; /* 0x12160A39: lea ecx, [esi + 0x1c] */
    /* cmp ebx, MEM32(esi + 0x3C) */ /* 0x12160A3C: cmp ebx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121609C0; /* 0x12160A3F: jl 0x121609c0 */
L_12160A45:
    eax = MEM32(esi + 0xF4); /* 0x12160A45: mov eax, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12160A4B: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12160A4D: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12160A4F: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12160A51: push eax */
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x12160A52: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_12154080); /* 0x12160A55: call 0x12154080 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12160A5A: pop edi */
    MEM32(esi + 0xF8) = eax; /* 0x12160A5B: mov dword ptr [esi + 0xf8], eax */
    ebx = POP32_VAL(esp); /* 0x12160A61: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12160A62: ret  */
    RECOMP_REGS_OUT();
}

void sub_12160A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160A70u);

L_12160A70:
    edi = edi; /* 0x12160A70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160A72: push ebp */
    ebp = esp; /* 0x12160A73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA4Cu; /* 0x12160A75: sub esp, 0xa4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12160A7B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12160A80: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12160A82: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(esi + 0xA8), 0 */ /* 0x12160A85: cmp dword ptr [esi + 0xa8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12160AA7; /* 0x12160A8C: jg 0x12160aa7 */
L_12160A8E:
    eax = MEM32(esi); /* 0x12160A8E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x13u; /* 0x12160A90: mov dword ptr [eax + 0x14], 0x13 */
    eax = MEM32(esi); /* 0x12160A97: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = 0; /* 0x12160A99: mov dword ptr [eax + 0x18], 0 */
    eax = MEM32(esi); /* 0x12160AA0: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160AA2: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160AA4: push esi */
    RECOMP_ICALL(eax); /* 0x12160AA5: call eax */
    RECOMP_FLAGS_IN();
L_12160AA7:
    eax = MEM32(esi + 0xAC); /* 0x12160AA7: mov eax, dword ptr [esi + 0xac] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x12160AAD: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12160AB1: push ebx */
    PUSH32(esp, edi); /* 0x12160AB2: push edi */
    MEM32(ebp + (-0xA34)) = eax; /* 0x12160AB3: mov dword ptr [ebp - 0xa34], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12160ADB; /* 0x12160AB9: jne 0x12160adb */
L_12160ABB:
    /* cmp MEM32(eax + 0x18), 0x3Fu */ /* 0x12160ABB: cmp dword ptr [eax + 0x18], 0x3f */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12160ADB; /* 0x12160ABF: jne 0x12160adb */
L_12160AC1:
    /* cmp MEM32(esi + 0x3C), 0 */ /* 0x12160AC1: cmp dword ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xEC) = 0; /* 0x12160AC5: mov dword ptr [esi + 0xec], 0 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160B08; /* 0x12160ACF: jle 0x12160b08 */
L_12160AD1:
    ecx = MEM32(esi + 0x3C); /* 0x12160AD1: mov ecx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12160AD4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x2C); /* 0x12160AD6: lea edi, [ebp - 0x2c] */
    goto L_12160B00; /* 0x12160AD9: jmp 0x12160b00 */
L_12160ADB:
    /* cmp MEM32(esi + 0x3C), 0 */ /* 0x12160ADB: cmp dword ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xEC) = 1; /* 0x12160ADF: mov dword ptr [esi + 0xec], 1 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160B08; /* 0x12160AE9: jle 0x12160b08 */
L_12160AEB:
    ecx = MEM32(esi + 0x3C); /* 0x12160AEB: mov ecx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00FFFFFFu);
    ecx = ecx & 0x00FFFFFFu; /* 0x12160AEE: and ecx, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x12160AF4: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x12160AF4: shl ecx, 6 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x12160AF7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0xA2C); /* 0x12160AFA: lea edi, [ebp - 0xa2c] */
L_12160B00:
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x12160B00: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0xA34)); /* 0x12160B02: mov eax, dword ptr [ebp - 0xa34] */
L_12160B08:
    ecx = 1; /* 0x12160B08: mov ecx, 1 */
    MEM32(ebp + (-0xA30)) = ecx; /* 0x12160B0D: mov dword ptr [ebp - 0xa30], ecx */
    /* cmp MEM32(esi + 0xA8), ecx */ /* 0x12160B13: cmp dword ptr [esi + 0xa8], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0xA8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12160E26; /* 0x12160B19: jl 0x12160e26 */
L_12160B1F:
    /* nop */ /* 0x12160B1F: nop  */
L_12160B20:
    ebx = MEM32(eax); /* 0x12160B20: mov ebx, dword ptr [eax] */
    MEM32(ebp + (-0xA38)) = ebx; /* 0x12160B22: mov dword ptr [ebp - 0xa38], ebx */
    /* test ebx, ebx */ /* 0x12160B28: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160B31; /* 0x12160B2A: jle 0x12160b31 */
L_12160B2C:
    /* cmp ebx, 4 */ /* 0x12160B2C: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160B5B; /* 0x12160B2F: jle 0x12160b5b */
L_12160B31:
    eax = MEM32(esi); /* 0x12160B31: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x12160B33: mov dword ptr [eax + 0x14], 0x1a */
    eax = MEM32(esi); /* 0x12160B3A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ebx; /* 0x12160B3C: mov dword ptr [eax + 0x18], ebx */
    eax = MEM32(esi); /* 0x12160B3F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x1C) = 4; /* 0x12160B41: mov dword ptr [eax + 0x1c], 4 */
    eax = MEM32(esi); /* 0x12160B48: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160B4A: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160B4C: push esi */
    RECOMP_ICALL(eax); /* 0x12160B4D: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160B4F: mov ecx, dword ptr [ebp - 0xa30] */
    eax = MEM32(ebp + (-0xA34)); /* 0x12160B55: mov eax, dword ptr [ebp - 0xa34] */
L_12160B5B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12160B5B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x12160B5D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160BC4; /* 0x12160B5F: jle 0x12160bc4 */
L_12160B61:
    goto L_12160B69; /* 0x12160B61: jmp 0x12160b69 */
L_12160B63:
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160B63: mov ecx, dword ptr [ebp - 0xa30] */
L_12160B69:
    ebx = MEM32(eax + edi * 4 + 0x4); /* 0x12160B69: mov ebx, dword ptr [eax + edi*4 + 4] */
    /* test ebx, ebx */ /* 0x12160B6D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160B76; /* 0x12160B6F: js 0x12160b76 */
L_12160B71:
    /* cmp ebx, MEM32(esi + 0x3C) */ /* 0x12160B71: cmp ebx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12160B91; /* 0x12160B74: jl 0x12160b91 */
L_12160B76:
    eax = MEM32(esi); /* 0x12160B76: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x13u; /* 0x12160B78: mov dword ptr [eax + 0x14], 0x13 */
    eax = MEM32(esi); /* 0x12160B7F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12160B81: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12160B84: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160B86: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160B88: push esi */
    RECOMP_ICALL(eax); /* 0x12160B89: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA34)); /* 0x12160B8B: mov eax, dword ptr [ebp - 0xa34] */
L_12160B91:
    /* test edi, edi */ /* 0x12160B91: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160BB5; /* 0x12160B93: jle 0x12160bb5 */
L_12160B95:
    /* cmp ebx, MEM32(eax + edi * 4) */ /* 0x12160B95: cmp ebx, dword ptr [eax + edi*4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edi * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12160BB5; /* 0x12160B98: jg 0x12160bb5 */
L_12160B9A:
    eax = MEM32(esi); /* 0x12160B9A: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160B9C: mov ecx, dword ptr [ebp - 0xa30] */
    MEM32(eax + 0x14) = 0x13u; /* 0x12160BA2: mov dword ptr [eax + 0x14], 0x13 */
    eax = MEM32(esi); /* 0x12160BA9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12160BAB: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12160BAE: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160BB0: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160BB2: push esi */
    RECOMP_ICALL(eax); /* 0x12160BB3: call eax */
    RECOMP_FLAGS_IN();
L_12160BB5:
    eax = MEM32(ebp + (-0xA34)); /* 0x12160BB5: mov eax, dword ptr [ebp - 0xa34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12160BBB: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0xA38)) */ /* 0x12160BBC: cmp edi, dword ptr [ebp - 0xa38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xA38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12160B63; /* 0x12160BC2: jl 0x12160b63 */
L_12160BC4:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x12160BC4: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0xA34)); /* 0x12160BCB: mov edi, dword ptr [ebp - 0xa34] */
    edx = MEM32(edi + 0x14); /* 0x12160BD1: mov edx, dword ptr [edi + 0x14] */
    ecx = MEM32(edi + 0x18); /* 0x12160BD4: mov ecx, dword ptr [edi + 0x18] */
    eax = MEM32(edi + 0x20); /* 0x12160BD7: mov eax, dword ptr [edi + 0x20] */
    ebx = MEM32(edi + 0x1C); /* 0x12160BDA: mov ebx, dword ptr [edi + 0x1c] */
    MEM32(ebp + (-0xA3C)) = edx; /* 0x12160BDD: mov dword ptr [ebp - 0xa3c], edx */
    MEM32(ebp + (-0xA40)) = ecx; /* 0x12160BE3: mov dword ptr [ebp - 0xa40], ecx */
    MEM32(ebp + (-0xA44)) = eax; /* 0x12160BE9: mov dword ptr [ebp - 0xa44], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160D86; /* 0x12160BEF: je 0x12160d86 */
L_12160BF5:
    /* cmp edx, 0x3Fu */ /* 0x12160BF5: cmp edx, 0x3f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12160C11; /* 0x12160BF8: ja 0x12160c11 */
L_12160BFA:
    /* cmp ecx, edx */ /* 0x12160BFA: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12160C11; /* 0x12160BFC: jl 0x12160c11 */
L_12160BFE:
    /* cmp ecx, 0x40u */ /* 0x12160BFE: cmp ecx, 0x40 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_12160C11; /* 0x12160C01: jge 0x12160c11 */
L_12160C03:
    /* cmp ebx, 0xAu */ /* 0x12160C03: cmp ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12160C11; /* 0x12160C06: ja 0x12160c11 */
L_12160C08:
    /* test eax, eax */ /* 0x12160C08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160C11; /* 0x12160C0A: js 0x12160c11 */
L_12160C0C:
    /* cmp eax, 0xAu */ /* 0x12160C0C: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160C3A; /* 0x12160C0F: jle 0x12160c3a */
L_12160C11:
    eax = MEM32(esi); /* 0x12160C11: mov eax, dword ptr [esi] */
    edi = MEM32(ebp + (-0xA30)); /* 0x12160C13: mov edi, dword ptr [ebp - 0xa30] */
    MEM32(eax + 0x14) = 0x11u; /* 0x12160C19: mov dword ptr [eax + 0x14], 0x11 */
    eax = MEM32(esi); /* 0x12160C20: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = edi; /* 0x12160C22: mov dword ptr [eax + 0x18], edi */
    eax = MEM32(esi); /* 0x12160C25: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160C27: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160C29: push esi */
    RECOMP_ICALL(eax); /* 0x12160C2A: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xA40)); /* 0x12160C2C: mov ecx, dword ptr [ebp - 0xa40] */
    edx = MEM32(ebp + (-0xA3C)); /* 0x12160C32: mov edx, dword ptr [ebp - 0xa3c] */
    goto L_12160C40; /* 0x12160C38: jmp 0x12160c40 */
L_12160C3A:
    edi = MEM32(ebp + (-0xA30)); /* 0x12160C3A: mov edi, dword ptr [ebp - 0xa30] */
L_12160C40:
    /* test edx, edx */ /* 0x12160C40: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12160CEB; /* 0x12160C42: jne 0x12160ceb */
L_12160C48:
    /* test ecx, ecx */ /* 0x12160C48: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12160C67; /* 0x12160C4A: je 0x12160c67 */
L_12160C4C:
    eax = MEM32(esi); /* 0x12160C4C: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x11u; /* 0x12160C4E: mov dword ptr [eax + 0x14], 0x11 */
    eax = MEM32(esi); /* 0x12160C55: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = edi; /* 0x12160C57: mov dword ptr [eax + 0x18], edi */
    eax = MEM32(esi); /* 0x12160C5A: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160C5C: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160C5E: push esi */
    RECOMP_ICALL(eax); /* 0x12160C5F: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xA3C)); /* 0x12160C61: mov edx, dword ptr [ebp - 0xa3c] */
L_12160C67:
    edi = MEM32(ebp + (-0xA38)); /* 0x12160C67: mov edi, dword ptr [ebp - 0xa38] */
L_12160C6D:
    /* test edi, edi */ /* 0x12160C6D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160DFE; /* 0x12160C6F: jle 0x12160dfe */
L_12160C75:
    eax = MEM32(ebp + (-0xA34)); /* 0x12160C75: mov eax, dword ptr [ebp - 0xa34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12160C7B: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xA48)) = eax; /* 0x12160C7E: mov dword ptr [ebp - 0xa48], eax */
L_12160C84:
    eax = MEM32(eax); /* 0x12160C84: mov eax, dword ptr [eax] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x12160C86: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x12160C86: shl eax, 8 */
    eax = ebp + eax + (-0xA2C); /* 0x12160C89: lea eax, [ebp + eax - 0xa2c] */
    MEM32(ebp + (-0xA4C)) = eax; /* 0x12160C90: mov dword ptr [ebp - 0xa4c], eax */
    /* test edx, edx */ /* 0x12160C96: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12160CC6; /* 0x12160C98: je 0x12160cc6 */
L_12160C9A:
    /* cmp MEM32(eax), 0 */ /* 0x12160C9A: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_12160CC6; /* 0x12160C9D: jge 0x12160cc6 */
L_12160C9F:
    eax = MEM32(esi); /* 0x12160C9F: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160CA1: mov ecx, dword ptr [ebp - 0xa30] */
    MEM32(eax + 0x14) = 0x11u; /* 0x12160CA7: mov dword ptr [eax + 0x14], 0x11 */
    eax = MEM32(esi); /* 0x12160CAE: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12160CB0: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12160CB3: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160CB5: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160CB7: push esi */
    RECOMP_ICALL(eax); /* 0x12160CB8: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA4C)); /* 0x12160CBA: mov eax, dword ptr [ebp - 0xa4c] */
    edx = MEM32(ebp + (-0xA3C)); /* 0x12160CC0: mov edx, dword ptr [ebp - 0xa3c] */
L_12160CC6:
    edi = edx; /* 0x12160CC6: mov edi, edx */
    /* cmp edx, MEM32(ebp + (-0xA40)) */ /* 0x12160CC8: cmp edx, dword ptr [ebp - 0xa40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xA40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12160D66; /* 0x12160CCE: jg 0x12160d66 */
L_12160CD4:
    ecx = MEM32(ebp + (-0xA44)); /* 0x12160CD4: mov ecx, dword ptr [ebp - 0xa44] */
    edx = MEM32(ebp + (-0xA40)); /* 0x12160CDA: mov edx, dword ptr [ebp - 0xa40] */
L_12160CE0:
    eax = MEM32(eax + edi * 4); /* 0x12160CE0: mov eax, dword ptr [eax + edi*4] */
    /* test eax, eax */ /* 0x12160CE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12160D20; /* 0x12160CE5: jns 0x12160d20 */
L_12160CE7:
    /* test ebx, ebx */ /* 0x12160CE7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12160D29; /* 0x12160CE9: jmp 0x12160d29 */
L_12160CEB:
    edi = MEM32(ebp + (-0xA38)); /* 0x12160CEB: mov edi, dword ptr [ebp - 0xa38] */
    /* cmp edi, 1 */ /* 0x12160CF1: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160C6D; /* 0x12160CF4: je 0x12160c6d */
L_12160CFA:
    eax = MEM32(esi); /* 0x12160CFA: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160CFC: mov ecx, dword ptr [ebp - 0xa30] */
    MEM32(eax + 0x14) = 0x11u; /* 0x12160D02: mov dword ptr [eax + 0x14], 0x11 */
    eax = MEM32(esi); /* 0x12160D09: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12160D0B: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12160D0E: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160D10: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160D12: push esi */
    RECOMP_ICALL(eax); /* 0x12160D13: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xA3C)); /* 0x12160D15: mov edx, dword ptr [ebp - 0xa3c] */
    RECOMP_BACKEDGE();
    goto L_12160C6D; /* 0x12160D1B: jmp 0x12160c6d */
L_12160D20:
    /* cmp ebx, eax */ /* 0x12160D20: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12160D2B; /* 0x12160D22: jne 0x12160d2b */
L_12160D24:
    eax = ebx + (-0x1); /* 0x12160D24: lea eax, [ebx - 1] */
    /* cmp ecx, eax */ /* 0x12160D27: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_12160D29:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12160D52; /* 0x12160D29: je 0x12160d52 */
L_12160D2B:
    eax = MEM32(esi); /* 0x12160D2B: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160D2D: mov ecx, dword ptr [ebp - 0xa30] */
    MEM32(eax + 0x14) = 0x11u; /* 0x12160D33: mov dword ptr [eax + 0x14], 0x11 */
    eax = MEM32(esi); /* 0x12160D3A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12160D3C: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12160D3F: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160D41: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160D43: push esi */
    RECOMP_ICALL(eax); /* 0x12160D44: call eax */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0xA40)); /* 0x12160D46: mov edx, dword ptr [ebp - 0xa40] */
    ecx = MEM32(ebp + (-0xA44)); /* 0x12160D4C: mov ecx, dword ptr [ebp - 0xa44] */
L_12160D52:
    eax = MEM32(ebp + (-0xA4C)); /* 0x12160D52: mov eax, dword ptr [ebp - 0xa4c] */
    MEM32(eax + edi * 4) = ecx; /* 0x12160D58: mov dword ptr [eax + edi*4], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12160D5B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, edx */ /* 0x12160D5C: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160CE0; /* 0x12160D5E: jle 0x12160ce0 */
L_12160D60:
    edx = MEM32(ebp + (-0xA3C)); /* 0x12160D60: mov edx, dword ptr [ebp - 0xa3c] */
L_12160D66:
    eax = MEM32(ebp + (-0xA48)); /* 0x12160D66: mov eax, dword ptr [ebp - 0xa48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12160D6C: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xA38))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xA38)) = MEM32(ebp + (-0xA38)) - 1; /* 0x12160D6F: dec dword ptr [ebp - 0xa38] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xA48)) = eax; /* 0x12160D75: mov dword ptr [ebp - 0xa48], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12160C84; /* 0x12160D7B: jne 0x12160c84 */
L_12160D81:
    goto L_12160DFE; /* 0x12160D81: jmp 0x12160dfe */
L_12160D86:
    /* test edx, edx */ /* 0x12160D86: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12160D97; /* 0x12160D88: jne 0x12160d97 */
L_12160D8A:
    /* cmp ecx, 0x3Fu */ /* 0x12160D8A: cmp ecx, 0x3f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12160D97; /* 0x12160D8D: jne 0x12160d97 */
L_12160D8F:
    /* test ebx, ebx */ /* 0x12160D8F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12160D97; /* 0x12160D91: jne 0x12160d97 */
L_12160D93:
    /* test eax, eax */ /* 0x12160D93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12160DB2; /* 0x12160D95: je 0x12160db2 */
L_12160D97:
    eax = MEM32(esi); /* 0x12160D97: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160D99: mov ecx, dword ptr [ebp - 0xa30] */
    MEM32(eax + 0x14) = 0x11u; /* 0x12160D9F: mov dword ptr [eax + 0x14], 0x11 */
    eax = MEM32(esi); /* 0x12160DA6: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12160DA8: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12160DAB: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160DAD: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160DAF: push esi */
    RECOMP_ICALL(eax); /* 0x12160DB0: call eax */
    RECOMP_FLAGS_IN();
L_12160DB2:
    eax = MEM32(ebp + (-0xA38)); /* 0x12160DB2: mov eax, dword ptr [ebp - 0xa38] */
    /* test eax, eax */ /* 0x12160DB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160DFE; /* 0x12160DBA: jle 0x12160dfe */
L_12160DBC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x12160DBC: add edi, 4 */
    _flag_k = FK_ADD;
    /* nop */ /* 0x12160DBF: nop  */
L_12160DC0:
    ebx = MEM32(edi); /* 0x12160DC0: mov ebx, dword ptr [edi] */
    /* cmp MEM32(ebp + ebx * 4 + (-0x2C)), 0 */ /* 0x12160DC2: cmp dword ptr [ebp + ebx*4 - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + ebx * 4 + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160DEA; /* 0x12160DC7: je 0x12160dea */
L_12160DC9:
    eax = MEM32(esi); /* 0x12160DC9: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160DCB: mov ecx, dword ptr [ebp - 0xa30] */
    MEM32(eax + 0x14) = 0x13u; /* 0x12160DD1: mov dword ptr [eax + 0x14], 0x13 */
    eax = MEM32(esi); /* 0x12160DD8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x12160DDA: mov dword ptr [eax + 0x18], ecx */
    eax = MEM32(esi); /* 0x12160DDD: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160DDF: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160DE1: push esi */
    RECOMP_ICALL(eax); /* 0x12160DE2: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA38)); /* 0x12160DE4: mov eax, dword ptr [ebp - 0xa38] */
L_12160DEA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x12160DEA: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12160DED: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + ebx * 4 + (-0x2C)) = 1; /* 0x12160DEE: mov dword ptr [ebp + ebx*4 - 0x2c], 1 */
    MEM32(ebp + (-0xA38)) = eax; /* 0x12160DF6: mov dword ptr [ebp - 0xa38], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12160DC0; /* 0x12160DFC: jne 0x12160dc0 */
L_12160DFE:
    ecx = MEM32(ebp + (-0xA30)); /* 0x12160DFE: mov ecx, dword ptr [ebp - 0xa30] */
    eax = MEM32(ebp + (-0xA34)); /* 0x12160E04: mov eax, dword ptr [ebp - 0xa34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12160E0A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x12160E0B: add eax, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xA34)) = eax; /* 0x12160E0E: mov dword ptr [ebp - 0xa34], eax */
    MEM32(ebp + (-0xA30)) = ecx; /* 0x12160E14: mov dword ptr [ebp - 0xa30], ecx */
    /* cmp ecx, MEM32(esi + 0xA8) */ /* 0x12160E1A: cmp ecx, dword ptr [esi + 0xa8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xA8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160B20; /* 0x12160E20: jle 0x12160b20 */
L_12160E26:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x12160E26: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12160E71; /* 0x12160E2D: je 0x12160e71 */
L_12160E2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12160E2F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x3C), ebx */ /* 0x12160E31: cmp dword ptr [esi + 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160E95; /* 0x12160E34: jle 0x12160e95 */
L_12160E36:
    edi = ebp + (-0xA2C); /* 0x12160E36: lea edi, [ebp - 0xa2c] */
    esp = esp; /* 0x12160E3C: lea esp, [esp] */
L_12160E40:
    /* cmp MEM32(edi), 0 */ /* 0x12160E40: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_12160E55; /* 0x12160E43: jge 0x12160e55 */
L_12160E45:
    eax = MEM32(esi); /* 0x12160E45: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x2Du; /* 0x12160E47: mov dword ptr [eax + 0x14], 0x2d */
    eax = MEM32(esi); /* 0x12160E4E: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160E50: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160E52: push esi */
    RECOMP_ICALL(eax); /* 0x12160E53: call eax */
    RECOMP_FLAGS_IN();
L_12160E55:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12160E55: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x100u; /* 0x12160E56: add edi, 0x100 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x3C) */ /* 0x12160E5C: cmp ebx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12160E40; /* 0x12160E5F: jl 0x12160e40 */
L_12160E61:
    edi = POP32_VAL(esp); /* 0x12160E61: pop edi */
    ebx = POP32_VAL(esp); /* 0x12160E62: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x12160E63: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12160E66: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_121BECF5); /* 0x12160E68: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12160E6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12160E6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12160E70: ret  */
L_12160E71:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12160E71: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x3C), edi */ /* 0x12160E73: cmp dword ptr [esi + 0x3c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160E95; /* 0x12160E76: jle 0x12160e95 */
L_12160E78:
    /* cmp MEM32(ebp + edi * 4 + (-0x2C)), 0 */ /* 0x12160E78: cmp dword ptr [ebp + edi*4 - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + edi * 4 + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12160E8F; /* 0x12160E7D: jne 0x12160e8f */
L_12160E7F:
    eax = MEM32(esi); /* 0x12160E7F: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x2Du; /* 0x12160E81: mov dword ptr [eax + 0x14], 0x2d */
    eax = MEM32(esi); /* 0x12160E88: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160E8A: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160E8C: push esi */
    RECOMP_ICALL(eax); /* 0x12160E8D: call eax */
    RECOMP_FLAGS_IN();
L_12160E8F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12160E8F: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x3C) */ /* 0x12160E90: cmp edi, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12160E78; /* 0x12160E93: jl 0x12160e78 */
L_12160E95:
    ecx = MEM32(ebp + (-0x4)); /* 0x12160E95: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12160E98: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12160E99: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12160E9B: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12160E9C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12160EA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12160EA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12160EA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_12160EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160EB0u);

L_12160EB0:
    edi = edi; /* 0x12160EB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160EB2: push ebp */
    ebp = esp; /* 0x12160EB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x12160EB5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12160EB8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12160EB9: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0xAC); /* 0x12160EBC: mov ecx, dword ptr [esi + 0xac] */
    PUSH32(esp, edi); /* 0x12160EC2: push edi */
    /* test ecx, ecx */ /* 0x12160EC3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12160F52; /* 0x12160EC5: je 0x12160f52 */
L_12160ECB:
    eax = MEM32(esi + 0x154); /* 0x12160ECB: mov eax, dword ptr [esi + 0x154] */
    eax = MEM32(eax + 0x20); /* 0x12160ED1: mov eax, dword ptr [eax + 0x20] */
    edi = eax + eax * 8; /* 0x12160ED4: lea edi, [eax + eax*8] */
    eax = MEM32(ecx + edi * 4); /* 0x12160ED7: mov eax, dword ptr [ecx + edi*4] */
    PUSH32(esp, ebx); /* 0x12160EDA: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12160EDB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xFC) = eax; /* 0x12160EDD: mov dword ptr [esi + 0xfc], eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x12160EE3: mov dword ptr [ebp - 4], edi */
    /* cmp MEM32(ecx + edi * 4), ebx */ /* 0x12160EE6: cmp dword ptr [ecx + edi*4], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + edi * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160F21; /* 0x12160EE9: jle 0x12160f21 */
L_12160EEB:
    eax = esi + 0x44; /* 0x12160EEB: lea eax, [esi + 0x44] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12160EEE: mov dword ptr [ebp - 8], eax */
    edx = esi + 0x100; /* 0x12160EF1: lea edx, [esi + 0x100] */
    edi = ecx + edi * 4 + 0x4; /* 0x12160EF7: lea edi, [ecx + edi*4 + 4] */
    goto L_12160F00; /* 0x12160EFB: jmp 0x12160f00 */
L_12160F00:
    eax = MEM32(edi); /* 0x12160F00: mov eax, dword ptr [edi] */
    esi = MEM32(ebp + (-0x8)); /* 0x12160F02: mov esi, dword ptr [ebp - 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54u); /* 0x12160F05: imul eax, eax, 0x54 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x12160F08: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x4)); /* 0x12160F0A: mov esi, dword ptr [ebp - 4] */
    MEM32(edx) = eax; /* 0x12160F0D: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12160F0F: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x12160F10: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12160F13: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ecx + esi * 4) */ /* 0x12160F16: cmp ebx, dword ptr [ecx + esi*4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + esi * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12160F00; /* 0x12160F19: jl 0x12160f00 */
L_12160F1B:
    esi = MEM32(ebp + 0x8); /* 0x12160F1B: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x12160F1E: mov edi, dword ptr [ebp - 4] */
L_12160F21:
    eax = MEM32(ecx + edi * 4 + 0x14); /* 0x12160F21: mov eax, dword ptr [ecx + edi*4 + 0x14] */
    MEM32(esi + 0x144) = eax; /* 0x12160F25: mov dword ptr [esi + 0x144], eax */
    eax = MEM32(ecx + edi * 4 + 0x18); /* 0x12160F2B: mov eax, dword ptr [ecx + edi*4 + 0x18] */
    MEM32(esi + 0x148) = eax; /* 0x12160F2F: mov dword ptr [esi + 0x148], eax */
    eax = MEM32(ecx + edi * 4 + 0x1C); /* 0x12160F35: mov eax, dword ptr [ecx + edi*4 + 0x1c] */
    MEM32(esi + 0x14C) = eax; /* 0x12160F39: mov dword ptr [esi + 0x14c], eax */
    eax = MEM32(ecx + edi * 4 + 0x20); /* 0x12160F3F: mov eax, dword ptr [ecx + edi*4 + 0x20] */
    ebx = POP32_VAL(esp); /* 0x12160F43: pop ebx */
    edi = POP32_VAL(esp); /* 0x12160F44: pop edi */
    MEM32(esi + 0x150) = eax; /* 0x12160F45: mov dword ptr [esi + 0x150], eax */
    esi = POP32_VAL(esp); /* 0x12160F4B: pop esi */
    esp = ebp; /* 0x12160F4C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12160F4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12160F4F: ret 4 */
L_12160F52:
    /* cmp MEM32(esi + 0x3C), 4 */ /* 0x12160F52: cmp dword ptr [esi + 0x3c], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12160F79; /* 0x12160F56: jle 0x12160f79 */
L_12160F58:
    eax = MEM32(esi); /* 0x12160F58: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x12160F5A: mov dword ptr [eax + 0x14], 0x1a */
    eax = MEM32(esi + 0x3C); /* 0x12160F61: mov eax, dword ptr [esi + 0x3c] */
    ecx = MEM32(esi); /* 0x12160F64: mov ecx, dword ptr [esi] */
    MEM32(ecx + 0x18) = eax; /* 0x12160F66: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(esi); /* 0x12160F69: mov eax, dword ptr [esi] */
    MEM32(eax + 0x1C) = 4; /* 0x12160F6B: mov dword ptr [eax + 0x1c], 4 */
    eax = MEM32(esi); /* 0x12160F72: mov eax, dword ptr [esi] */
    eax = MEM32(eax); /* 0x12160F74: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12160F76: push esi */
    RECOMP_ICALL(eax); /* 0x12160F77: call eax */
    RECOMP_FLAGS_IN();
L_12160F79:
    eax = MEM32(esi + 0x3C); /* 0x12160F79: mov eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12160F7C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xFC) = eax; /* 0x12160F7E: mov dword ptr [esi + 0xfc], eax */
    /* test eax, eax */ /* 0x12160F84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12160FA3; /* 0x12160F86: jle 0x12160fa3 */
L_12160F88:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12160F88: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x100; /* 0x12160F8A: lea edi, [esi + 0x100] */
L_12160F90:
    eax = MEM32(esi + 0x44); /* 0x12160F90: mov eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12160F93: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x12160F95: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12160F97: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x12160F98: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x54u; /* 0x12160F9B: add edx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x3C) */ /* 0x12160F9E: cmp ecx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12160F90; /* 0x12160FA1: jl 0x12160f90 */
L_12160FA3:
    edi = POP32_VAL(esp); /* 0x12160FA3: pop edi */
    MEM32(esi + 0x144) = 0; /* 0x12160FA4: mov dword ptr [esi + 0x144], 0 */
    MEM32(esi + 0x148) = 0x3Fu; /* 0x12160FAE: mov dword ptr [esi + 0x148], 0x3f */
    MEM32(esi + 0x14C) = 0; /* 0x12160FB8: mov dword ptr [esi + 0x14c], 0 */
    MEM32(esi + 0x150) = 0; /* 0x12160FC2: mov dword ptr [esi + 0x150], 0 */
    esi = POP32_VAL(esp); /* 0x12160FCC: pop esi */
    esp = ebp; /* 0x12160FCD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12160FCF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12160FD0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12160FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12160FE0u);

L_12160FE0:
    edi = edi; /* 0x12160FE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12160FE2: push ebp */
    ebp = esp; /* 0x12160FE3: mov ebp, esp */
    eax = MEM32(edi + 0xFC); /* 0x12160FE5: mov eax, dword ptr [edi + 0xfc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x12160FEB: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12160FEE: push esi */
    /* cmp eax, 1 */ /* 0x12160FEF: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216105B; /* 0x12160FF2: jne 0x1216105b */
L_12160FF4:
    ecx = MEM32(edi + 0x100); /* 0x12160FF4: mov ecx, dword ptr [edi + 0x100] */
    eax = MEM32(ecx + 0x1C); /* 0x12160FFA: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(edi + 0x110) = eax; /* 0x12160FFD: mov dword ptr [edi + 0x110], eax */
    eax = MEM32(ecx + 0x20); /* 0x12161003: mov eax, dword ptr [ecx + 0x20] */
    MEM32(edi + 0x114) = eax; /* 0x12161006: mov dword ptr [edi + 0x114], eax */
    esi = MEM32(ecx + 0xC); /* 0x1216100C: mov esi, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx + 0x20); /* 0x1216100F: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12161012: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x12161014: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ecx + 0x34) = 1; /* 0x12161016: mov dword ptr [ecx + 0x34], 1 */
    MEM32(ecx + 0x38) = 1; /* 0x1216101D: mov dword ptr [ecx + 0x38], 1 */
    MEM32(ecx + 0x3C) = 1; /* 0x12161024: mov dword ptr [ecx + 0x3c], 1 */
    MEM32(ecx + 0x40) = 8; /* 0x1216102B: mov dword ptr [ecx + 0x40], 8 */
    MEM32(ecx + 0x44) = 1; /* 0x12161032: mov dword ptr [ecx + 0x44], 1 */
    /* test edx, edx */ /* 0x12161039: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216103F; /* 0x1216103B: jne 0x1216103f */
L_1216103D:
    edx = esi; /* 0x1216103D: mov edx, esi */
L_1216103F:
    MEM32(ecx + 0x48) = edx; /* 0x1216103F: mov dword ptr [ecx + 0x48], edx */
    MEM32(edi + 0x118) = 1; /* 0x12161042: mov dword ptr [edi + 0x118], 1 */
    MEM32(edi + 0x11C) = 0; /* 0x1216104C: mov dword ptr [edi + 0x11c], 0 */
    goto L_12161192; /* 0x12161056: jmp 0x12161192 */
L_1216105B:
    /* test eax, eax */ /* 0x1216105B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12161064; /* 0x1216105D: jle 0x12161064 */
L_1216105F:
    /* cmp eax, 4 */ /* 0x1216105F: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12161088; /* 0x12161062: jle 0x12161088 */
L_12161064:
    eax = MEM32(edi); /* 0x12161064: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x12161066: mov dword ptr [eax + 0x14], 0x1a */
    eax = MEM32(edi + 0xFC); /* 0x1216106D: mov eax, dword ptr [edi + 0xfc] */
    ecx = MEM32(edi); /* 0x12161073: mov ecx, dword ptr [edi] */
    MEM32(ecx + 0x18) = eax; /* 0x12161075: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(edi); /* 0x12161078: mov eax, dword ptr [edi] */
    MEM32(eax + 0x1C) = 4; /* 0x1216107A: mov dword ptr [eax + 0x1c], 4 */
    eax = MEM32(edi); /* 0x12161081: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x12161083: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12161085: push edi */
    RECOMP_ICALL(eax); /* 0x12161086: call eax */
    RECOMP_FLAGS_IN();
L_12161088:
    eax = MEM32(edi + 0xF0); /* 0x12161088: mov eax, dword ptr [edi + 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1216108E: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12161090: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x12161092: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12161093: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12161095: push eax */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x12161096: push dword ptr [edi + 0x1c] */
    RECOMP_CALL(sub_12154080); /* 0x12161099: call 0x12154080 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x110) = eax; /* 0x1216109E: mov dword ptr [edi + 0x110], eax */
    eax = MEM32(edi + 0xF4); /* 0x121610A4: mov eax, dword ptr [edi + 0xf4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121610AA: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121610AC: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121610AE: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x121610B0: push eax */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x121610B1: push dword ptr [edi + 0x20] */
    RECOMP_CALL(sub_12154080); /* 0x121610B4: call 0x12154080 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121610B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x114) = eax; /* 0x121610BB: mov dword ptr [edi + 0x114], eax */
    MEM32(edi + 0x118) = 0; /* 0x121610C1: mov dword ptr [edi + 0x118], 0 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x121610CB: mov dword ptr [ebp - 0x10], ecx */
    /* cmp MEM32(edi + 0xFC), ecx */ /* 0x121610CE: cmp dword ptr [edi + 0xfc], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0xFC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12161191; /* 0x121610D4: jle 0x12161191 */
L_121610DA:
    eax = edi + 0x100; /* 0x121610DA: lea eax, [edi + 0x100] */
    MEM32(ebp + (-0x14)) = eax; /* 0x121610E0: mov dword ptr [ebp - 0x14], eax */
L_121610E3:
    edx = MEM32(eax); /* 0x121610E3: mov edx, dword ptr [eax] */
    eax = MEM32(edx + 0x8); /* 0x121610E5: mov eax, dword ptr [edx + 8] */
    esi = MEM32(edx + 0xC); /* 0x121610E8: mov esi, dword ptr [edx + 0xc] */
    MEM32(edx + 0x38) = esi; /* 0x121610EB: mov dword ptr [edx + 0x38], esi */
    MEM32(edx + 0x34) = eax; /* 0x121610EE: mov dword ptr [edx + 0x34], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x121610F1: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x121610F4: mov dword ptr [ebp - 8], esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x121610F7: imul esi, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121610FA: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121610FC: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121610FE: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edx + 0x40) = eax; /* 0x12161100: mov dword ptr [edx + 0x40], eax */
    eax = MEM32(edx + 0x1C); /* 0x12161103: mov eax, dword ptr [edx + 0x1c] */
    MEM32(ebp + (-0xC)) = edx; /* 0x12161106: mov dword ptr [ebp - 0xc], edx */
    MEM32(edx + 0x3C) = esi; /* 0x12161109: mov dword ptr [edx + 0x3c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1216110C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x4)); /* 0x1216110E: div dword ptr [ebp - 4] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x12161111: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12161118; /* 0x12161113: jne 0x12161118 */
L_12161115:
    edx = MEM32(ebp + (-0x4)); /* 0x12161115: mov edx, dword ptr [ebp - 4] */
L_12161118:
    eax = MEM32(ebp + (-0xC)); /* 0x12161118: mov eax, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x44) = edx; /* 0x1216111B: mov dword ptr [eax + 0x44], edx */
    eax = MEM32(eax + 0x20); /* 0x1216111E: mov eax, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12161121: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x8)); /* 0x12161123: div dword ptr [ebp - 8] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x12161126: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216112D; /* 0x12161128: jne 0x1216112d */
L_1216112A:
    edx = MEM32(ebp + (-0x8)); /* 0x1216112A: mov edx, dword ptr [ebp - 8] */
L_1216112D:
    eax = MEM32(ebp + (-0xC)); /* 0x1216112D: mov eax, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x48) = edx; /* 0x12161130: mov dword ptr [eax + 0x48], edx */
    eax = MEM32(edi + 0x118); /* 0x12161133: mov eax, dword ptr [edi + 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x12161139: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp eax, 0xAu */ /* 0x1216113B: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12161153; /* 0x1216113E: jle 0x12161153 */
L_12161140:
    eax = MEM32(edi); /* 0x12161140: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0xDu; /* 0x12161142: mov dword ptr [eax + 0x14], 0xd */
    eax = MEM32(edi); /* 0x12161149: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x1216114B: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1216114D: push edi */
    RECOMP_ICALL(eax); /* 0x1216114E: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x12161150: mov ecx, dword ptr [ebp - 0x10] */
L_12161153:
    /* test esi, esi */ /* 0x12161153: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12161178; /* 0x12161155: jle 0x12161178 */
L_12161157:
    goto L_12161160; /* 0x12161157: jmp 0x12161160 */
L_12161160:
    eax = MEM32(edi + 0x118); /* 0x12161160: mov eax, dword ptr [edi + 0x118] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12161166: dec esi */
    _flag_k = FK_DEC;
    MEM32(edi + eax * 4 + 0x11C) = ecx; /* 0x12161167: mov dword ptr [edi + eax*4 + 0x11c], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x118)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x118) = MEM32(edi + 0x118) + 1; /* 0x1216116E: inc dword ptr [edi + 0x118] */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x12161174: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12161160; /* 0x12161176: jg 0x12161160 */
L_12161178:
    eax = MEM32(ebp + (-0x14)); /* 0x12161178: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1216117B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1216117C: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1216117F: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x12161182: mov dword ptr [ebp - 0x14], eax */
    /* cmp ecx, MEM32(edi + 0xFC) */ /* 0x12161185: cmp ecx, dword ptr [edi + 0xfc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121610E3; /* 0x1216118B: jl 0x121610e3 */
L_12161191:
    ebx = POP32_VAL(esp); /* 0x12161191: pop ebx */
L_12161192:
    ecx = MEM32(edi + 0xCC); /* 0x12161192: mov ecx, dword ptr [edi + 0xcc] */
    esi = POP32_VAL(esp); /* 0x12161198: pop esi */
    /* test ecx, ecx */ /* 0x12161199: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121611B8; /* 0x1216119B: jle 0x121611b8 */
L_1216119D:
    eax = MEM32(edi + 0x110); /* 0x1216119D: mov eax, dword ptr [edi + 0x110] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x121611A3: imul eax, ecx */
    /* cmp eax, 0xFFFFu */ /* 0x121611A6: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121611B2; /* 0x121611AB: jl 0x121611b2 */
L_121611AD:
    eax = 0xFFFFu; /* 0x121611AD: mov eax, 0xffff */
L_121611B2:
    MEM32(edi + 0xC8) = eax; /* 0x121611B2: mov dword ptr [edi + 0xc8], eax */
L_121611B8:
    esp = ebp; /* 0x121611B8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x121611BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121611BB: ret  */
    RECOMP_REGS_OUT();
}

void sub_121611D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121611D0u);

L_121611D0:
    edi = edi; /* 0x121611D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121611D2: push ebp */
    ebp = esp; /* 0x121611D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121611D5: push esi */
    PUSH32(esp, edi); /* 0x121611D6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121611D7: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x154); /* 0x121611DA: mov esi, dword ptr [edi + 0x154] */
    eax = MEM32(esi + 0x14); /* 0x121611E0: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x121611E3: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121612B5; /* 0x121611E6: je 0x121612b5 */
L_121611EC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121611EC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12161207; /* 0x121611ED: je 0x12161207 */
L_121611EF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121611EF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12161237; /* 0x121611F0: je 0x12161237 */
L_121611F2:
    eax = MEM32(edi); /* 0x121611F2: mov eax, dword ptr [edi] */
    MEM32(eax + 0x14) = 0x30u; /* 0x121611F4: mov dword ptr [eax + 0x14], 0x30 */
    eax = MEM32(edi); /* 0x121611FB: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x121611FD: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x121611FF: push edi */
    RECOMP_ICALL(eax); /* 0x12161200: call eax */
    RECOMP_FLAGS_IN();
    goto L_1216133C; /* 0x12161202: jmp 0x1216133c */
L_12161207:
    PUSH32(esp, edi); /* 0x12161207: push edi */
    RECOMP_CALL(sub_12160EB0); /* 0x12161208: call 0x12160eb0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_12160FE0); /* 0x1216120D: call 0x12160fe0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x144), 0 */ /* 0x12161212: cmp dword ptr [edi + 0x144], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x144)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216128F; /* 0x12161219: jne 0x1216128f */
L_1216121B:
    /* cmp MEM32(edi + 0x14C), 0 */ /* 0x1216121B: cmp dword ptr [edi + 0x14c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216128F; /* 0x12161222: je 0x1216128f */
L_12161224:
    /* cmp MEM32(edi + 0xB4), 0 */ /* 0x12161224: cmp dword ptr [edi + 0xb4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216128F; /* 0x1216122B: jne 0x1216128f */
L_1216122D:
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1; /* 0x1216122D: inc dword ptr [esi + 0x18] */
    _flag_k = FK_INC;
    MEM32(esi + 0x14) = 2; /* 0x12161230: mov dword ptr [esi + 0x14], 2 */
L_12161237:
    /* cmp MEM32(edi + 0xB8), 0 */ /* 0x12161237: cmp dword ptr [edi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216124B; /* 0x1216123E: jne 0x1216124b */
L_12161240:
    PUSH32(esp, edi); /* 0x12161240: push edi */
    RECOMP_CALL(sub_12160EB0); /* 0x12161241: call 0x12160eb0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_12160FE0); /* 0x12161246: call 0x12160fe0 */
    RECOMP_FLAGS_IN();
L_1216124B:
    eax = MEM32(edi + 0x174); /* 0x1216124B: mov eax, dword ptr [edi + 0x174] */
    eax = MEM32(eax); /* 0x12161251: mov eax, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x12161253: push 0 */
    PUSH32(esp, edi); /* 0x12161255: push edi */
    RECOMP_ICALL(eax); /* 0x12161256: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x160); /* 0x12161258: mov eax, dword ptr [edi + 0x160] */
    eax = MEM32(eax); /* 0x1216125E: mov eax, dword ptr [eax] */
    PUSH32(esp, 2); /* 0x12161260: push 2 */
    PUSH32(esp, edi); /* 0x12161262: push edi */
    RECOMP_ICALL(eax); /* 0x12161263: call eax */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x12161265: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12161277; /* 0x12161269: jne 0x12161277 */
L_1216126B:
    eax = MEM32(edi + 0x164); /* 0x1216126B: mov eax, dword ptr [edi + 0x164] */
    eax = MEM32(eax + 0x4); /* 0x12161271: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x12161274: push edi */
    RECOMP_ICALL(eax); /* 0x12161275: call eax */
    RECOMP_FLAGS_IN();
L_12161277:
    eax = MEM32(edi + 0x164); /* 0x12161277: mov eax, dword ptr [edi + 0x164] */
    eax = MEM32(eax + 0x8); /* 0x1216127D: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x12161280: push edi */
    RECOMP_ICALL(eax); /* 0x12161281: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = 0; /* 0x12161283: mov dword ptr [esi + 0xc], 0 */
    goto L_1216133C; /* 0x1216128A: jmp 0x1216133c */
L_1216128F:
    eax = MEM32(edi + 0x174); /* 0x1216128F: mov eax, dword ptr [edi + 0x174] */
    eax = MEM32(eax); /* 0x12161295: mov eax, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x12161297: push 1 */
    PUSH32(esp, edi); /* 0x12161299: push edi */
    RECOMP_ICALL(eax); /* 0x1216129A: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x160); /* 0x1216129C: mov eax, dword ptr [edi + 0x160] */
    eax = MEM32(eax); /* 0x121612A2: mov eax, dword ptr [eax] */
    PUSH32(esp, 2); /* 0x121612A4: push 2 */
    PUSH32(esp, edi); /* 0x121612A6: push edi */
    RECOMP_ICALL(eax); /* 0x121612A7: call eax */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = 0; /* 0x121612A9: mov dword ptr [esi + 0xc], 0 */
    goto L_1216133C; /* 0x121612B0: jmp 0x1216133c */
L_121612B5:
    PUSH32(esp, edi); /* 0x121612B5: push edi */
    RECOMP_CALL(sub_12160EB0); /* 0x121612B6: call 0x12160eb0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_12160FE0); /* 0x121612BB: call 0x12160fe0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0xB0), 0 */ /* 0x121612C0: cmp dword ptr [edi + 0xb0], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121612EC; /* 0x121612C7: jne 0x121612ec */
L_121612C9:
    eax = MEM32(edi + 0x168); /* 0x121612C9: mov eax, dword ptr [edi + 0x168] */
    eax = MEM32(eax); /* 0x121612CF: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x121612D1: push edi */
    RECOMP_ICALL(eax); /* 0x121612D2: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x16C); /* 0x121612D4: mov eax, dword ptr [edi + 0x16c] */
    eax = MEM32(eax); /* 0x121612DA: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x121612DC: push edi */
    RECOMP_ICALL(eax); /* 0x121612DD: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x15C); /* 0x121612DF: mov eax, dword ptr [edi + 0x15c] */
    eax = MEM32(eax); /* 0x121612E5: mov eax, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x121612E7: push 0 */
    PUSH32(esp, edi); /* 0x121612E9: push edi */
    RECOMP_ICALL(eax); /* 0x121612EA: call eax */
    RECOMP_FLAGS_IN();
L_121612EC:
    eax = MEM32(edi + 0x170); /* 0x121612EC: mov eax, dword ptr [edi + 0x170] */
    eax = MEM32(eax); /* 0x121612F2: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x121612F4: push edi */
    RECOMP_ICALL(eax); /* 0x121612F5: call eax */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0xB8)); /* 0x121612F7: push dword ptr [edi + 0xb8] */
    eax = MEM32(edi + 0x174); /* 0x121612FD: mov eax, dword ptr [edi + 0x174] */
    eax = MEM32(eax); /* 0x12161303: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12161305: push edi */
    RECOMP_ICALL(eax); /* 0x12161306: call eax */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x160); /* 0x12161308: mov ecx, dword ptr [edi + 0x160] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1216130E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x1C), 1 */ /* 0x12161310: cmp dword ptr [esi + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_LE(_flag_a, _flag_b)) ? 1 : 0); /* 0x12161314: setle al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12161317: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x12161318: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1216131B: push eax */
    eax = MEM32(ecx); /* 0x1216131C: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1216131E: push edi */
    RECOMP_ICALL(eax); /* 0x1216131F: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x158); /* 0x12161321: mov eax, dword ptr [edi + 0x158] */
    eax = MEM32(eax); /* 0x12161327: mov eax, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x12161329: push 0 */
    PUSH32(esp, edi); /* 0x1216132B: push edi */
    RECOMP_ICALL(eax); /* 0x1216132C: call eax */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1216132E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0xB8), eax */ /* 0x12161330: cmp dword ptr [edi + 0xb8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0xB8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12161336: sete al */
    MEM32(esi + 0xC) = eax; /* 0x12161339: mov dword ptr [esi + 0xc], eax */
L_1216133C:
    eax = MEM32(esi + 0x1C); /* 0x1216133C: mov eax, dword ptr [esi + 0x1c] */
    edx = MEM32(esi + 0x18); /* 0x1216133F: mov edx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12161342: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12161344: dec eax */
    _flag_k = FK_DEC;
    /* cmp edx, eax */ /* 0x12161345: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12161347: sete cl */
    MEM32(esi + 0x10) = ecx; /* 0x1216134A: mov dword ptr [esi + 0x10], ecx */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x1216134D: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12161362; /* 0x12161351: je 0x12161362 */
L_12161353:
    eax = MEM32(edi + 0x8); /* 0x12161353: mov eax, dword ptr [edi + 8] */
    MEM32(eax + 0xC) = edx; /* 0x12161356: mov dword ptr [eax + 0xc], edx */
    ecx = MEM32(edi + 0x8); /* 0x12161359: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(esi + 0x1C); /* 0x1216135C: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ecx + 0x10) = eax; /* 0x1216135F: mov dword ptr [ecx + 0x10], eax */
L_12161362:
    edi = POP32_VAL(esp); /* 0x12161362: pop edi */
    esi = POP32_VAL(esp); /* 0x12161363: pop esi */
    ebp = POP32_VAL(esp); /* 0x12161364: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12161365: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12161370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12161370u);

L_12161370:
    edi = edi; /* 0x12161370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12161372: push ebp */
    ebp = esp; /* 0x12161373: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12161375: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12161376: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x154); /* 0x12161379: mov eax, dword ptr [esi + 0x154] */
    MEM32(eax + 0xC) = 0; /* 0x1216137F: mov dword ptr [eax + 0xc], 0 */
    eax = MEM32(esi + 0x164); /* 0x12161386: mov eax, dword ptr [esi + 0x164] */
    eax = MEM32(eax + 0x4); /* 0x1216138C: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x1216138F: push esi */
    RECOMP_ICALL(eax); /* 0x12161390: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x164); /* 0x12161392: mov eax, dword ptr [esi + 0x164] */
    eax = MEM32(eax + 0x8); /* 0x12161398: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x1216139B: push esi */
    RECOMP_ICALL(eax); /* 0x1216139C: call eax */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1216139E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216139F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121613A0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121613B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121613B0u);

L_121613B0:
    edi = edi; /* 0x121613B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121613B2: push ebp */
    ebp = esp; /* 0x121613B3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121613B5: push esi */
    PUSH32(esp, edi); /* 0x121613B6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121613B7: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x174); /* 0x121613BA: mov eax, dword ptr [edi + 0x174] */
    eax = MEM32(eax + 0x8); /* 0x121613C0: mov eax, dword ptr [eax + 8] */
    esi = MEM32(edi + 0x154); /* 0x121613C3: mov esi, dword ptr [edi + 0x154] */
    PUSH32(esp, edi); /* 0x121613C9: push edi */
    RECOMP_ICALL(eax); /* 0x121613CA: call eax */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x14); /* 0x121613CC: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x121613CF: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12161405; /* 0x121613D2: je 0x12161405 */
L_121613D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121613D4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121613F5; /* 0x121613D5: je 0x121613f5 */
L_121613D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121613D7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12161418; /* 0x121613D8: jne 0x12161418 */
L_121613DA:
    /* cmp MEM32(edi + 0xB8), eax */ /* 0x121613DA: cmp dword ptr [edi + 0xb8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0xB8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12161415; /* 0x121613E0: je 0x12161415 */
L_121613E2:
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1; /* 0x121613E2: inc dword ptr [esi + 0x20] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1; /* 0x121613E5: inc dword ptr [esi + 0x18] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x121613E8: pop edi */
    MEM32(esi + 0x14) = 1; /* 0x121613E9: mov dword ptr [esi + 0x14], 1 */
    esi = POP32_VAL(esp); /* 0x121613F0: pop esi */
    ebp = POP32_VAL(esp); /* 0x121613F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121613F2: ret 4 */
L_121613F5:
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1; /* 0x121613F5: inc dword ptr [esi + 0x18] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x121613F8: pop edi */
    MEM32(esi + 0x14) = 2; /* 0x121613F9: mov dword ptr [esi + 0x14], 2 */
    esi = POP32_VAL(esp); /* 0x12161400: pop esi */
    ebp = POP32_VAL(esp); /* 0x12161401: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12161402: ret 4 */
L_12161405:
    MEM32(esi + 0x14) = 2; /* 0x12161405: mov dword ptr [esi + 0x14], 2 */
    /* cmp MEM32(edi + 0xB8), 0 */ /* 0x1216140C: cmp dword ptr [edi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12161418; /* 0x12161413: jne 0x12161418 */
L_12161415:
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1; /* 0x12161415: inc dword ptr [esi + 0x20] */
    _flag_k = FK_INC;
L_12161418:
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1; /* 0x12161418: inc dword ptr [esi + 0x18] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x1216141B: pop edi */
    esi = POP32_VAL(esp); /* 0x1216141C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216141D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216141E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12161430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12161430u);

L_12161430:
    edi = edi; /* 0x12161430: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12161432: push ebp */
    ebp = esp; /* 0x12161433: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12161435: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12161436: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x12161439: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x1216143C: mov eax, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1216143E: push edi */
    PUSH32(esp, 0x24u); /* 0x1216143F: push 0x24 */
    PUSH32(esp, 1); /* 0x12161441: push 1 */
    PUSH32(esp, esi); /* 0x12161443: push esi */
    RECOMP_ICALL(eax); /* 0x12161444: call eax */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12161446: mov edi, eax */
    MEM32(esi + 0x154) = edi; /* 0x12161448: mov dword ptr [esi + 0x154], edi */
    MEM32(edi) = 0x121611D0u; /* 0x1216144E: mov dword ptr [edi], 0x121611d0 */
    MEM32(edi + 0x4) = 0x12161370u; /* 0x12161454: mov dword ptr [edi + 4], 0x12161370 */
    MEM32(edi + 0x8) = 0x121613B0u; /* 0x1216145B: mov dword ptr [edi + 8], 0x121613b0 */
    MEM32(edi + 0x10) = 0; /* 0x12161462: mov dword ptr [edi + 0x10], 0 */
    RECOMP_CALL(sub_12160890); /* 0x12161469: call 0x12160890 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xAC), 0 */ /* 0x1216146E: cmp dword ptr [esi + 0xac], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216147E; /* 0x12161475: je 0x1216147e */
L_12161477:
    RECOMP_CALL(sub_12160A70); /* 0x12161477: call 0x12160a70 */
    RECOMP_FLAGS_IN();
    goto L_12161492; /* 0x1216147C: jmp 0x12161492 */
L_1216147E:
    MEM32(esi + 0xEC) = 0; /* 0x1216147E: mov dword ptr [esi + 0xec], 0 */
    MEM32(esi + 0xA8) = 1; /* 0x12161488: mov dword ptr [esi + 0xa8], 1 */
L_12161492:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x12161492: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121614A5; /* 0x12161499: je 0x121614a5 */
L_1216149B:
    MEM32(esi + 0xB8) = 1; /* 0x1216149B: mov dword ptr [esi + 0xb8], 1 */
L_121614A5:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121614A5: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121614BD; /* 0x121614A9: je 0x121614bd */
L_121614AB:
    eax = MEM32(esi + 0xB8); /* 0x121614AB: mov eax, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x121614B1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x121614B3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x121614B5: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x14) = eax; /* 0x121614B8: mov dword ptr [edi + 0x14], eax */
    goto L_121614C4; /* 0x121614BB: jmp 0x121614c4 */
L_121614BD:
    MEM32(edi + 0x14) = 0; /* 0x121614BD: mov dword ptr [edi + 0x14], 0 */
L_121614C4:
    MEM32(edi + 0x20) = 0; /* 0x121614C4: mov dword ptr [edi + 0x20], 0 */
    MEM32(edi + 0x18) = 0; /* 0x121614CB: mov dword ptr [edi + 0x18], 0 */
    /* cmp MEM32(esi + 0xB8), 0 */ /* 0x121614D2: cmp dword ptr [esi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xB8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0xA8); /* 0x121614D9: mov eax, dword ptr [esi + 0xa8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121614E3; /* 0x121614DF: je 0x121614e3 */
L_121614E1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121614E1: add eax, eax */
    _flag_k = FK_ADD;
L_121614E3:
    MEM32(edi + 0x1C) = eax; /* 0x121614E3: mov dword ptr [edi + 0x1c], eax */
    edi = POP32_VAL(esp); /* 0x121614E6: pop edi */
    esi = POP32_VAL(esp); /* 0x121614E7: pop esi */
    ebp = POP32_VAL(esp); /* 0x121614E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121614E9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12161500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12161500u);

L_12161500:
    edi = edi; /* 0x12161500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12161502: push ebp */
    ebp = esp; /* 0x12161503: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x138u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x138u; /* 0x12161505: sub esp, 0x138 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1216150B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12161510: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12161512: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x12161515: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(0x12013348)); /* 0x12161518: fld qword ptr [0x12013348] */
    fp_push(*(double*)ADDR(0x12013340)); /* 0x1216151E: fld qword ptr [0x12013340] */
    ecx = MEM32(ebp + 0x10); /* 0x12161524: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(0x12013338)); /* 0x12161527: fld qword ptr [0x12013338] */
    MEM32(ebp + (-0x134)) = eax; /* 0x1216152D: mov dword ptr [ebp - 0x134], eax */
    eax = MEM32(ebp + 0x18); /* 0x12161533: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x138)) = eax; /* 0x12161536: mov dword ptr [ebp - 0x138], eax */
    eax = MEM32(ebp + 0x8); /* 0x1216153C: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x1216153F: mov eax, dword ptr [eax + 0x148] */
    PUSH32(esp, ebx); /* 0x12161545: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x12161546: sub eax, -0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12161549: push esi */
    MEM32(ebp + (-0x124)) = eax; /* 0x1216154A: mov dword ptr [ebp - 0x124], eax */
    eax = MEM32(ebp + 0xC); /* 0x12161550: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12161553: push edi */
    edi = MEM32(eax + 0x50); /* 0x12161554: mov edi, dword ptr [eax + 0x50] */
    edx = ebp + (-0x104); /* 0x12161557: lea edx, [ebp - 0x104] */
    esi = 8; /* 0x1216155D: mov esi, 8 */
L_12161562:
    ebx = (uint32_t)MEM16(ecx + 0x10); /* 0x12161562: movzx ebx, word ptr [ecx + 0x10] */
    /* test LO16(ebx), LO16(ebx) */ /* 0x12161566: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121615D4; /* 0x12161569: jne 0x121615d4 */
L_1216156B:
    /* cmp MEM16(ecx + 0x20), LO16(ebx) */ /* 0x1216156B: cmp word ptr [ecx + 0x20], bx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x20)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121615D4; /* 0x1216156F: jne 0x121615d4 */
L_12161571:
    /* cmp MEM16(ecx + 0x30), LO16(ebx) */ /* 0x12161571: cmp word ptr [ecx + 0x30], bx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x30)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121615D4; /* 0x12161575: jne 0x121615d4 */
L_12161577:
    /* cmp MEM16(ecx + 0x40), LO16(ebx) */ /* 0x12161577: cmp word ptr [ecx + 0x40], bx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x40)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121615D4; /* 0x1216157B: jne 0x121615d4 */
L_1216157D:
    /* cmp MEM16(ecx + 0x50), LO16(ebx) */ /* 0x1216157D: cmp word ptr [ecx + 0x50], bx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x50)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121615D4; /* 0x12161581: jne 0x121615d4 */
L_12161583:
    /* cmp MEM16(ecx + 0x60), LO16(ebx) */ /* 0x12161583: cmp word ptr [ecx + 0x60], bx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x60)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121615D4; /* 0x12161587: jne 0x121615d4 */
L_12161589:
    /* cmp MEM16(ecx + 0x70), LO16(ebx) */ /* 0x12161589: cmp word ptr [ecx + 0x70], bx */
    _flag_a = (uint32_t)(MEM16(ecx + 0x70)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121615D4; /* 0x1216158D: jne 0x121615d4 */
L_1216158F:
    eax = (int32_t)(int16_t)MEM16(ecx); /* 0x1216158F: movsx eax, word ptr [ecx] */
    MEM32(ebp + (-0x108)) = eax; /* 0x12161592: mov dword ptr [ebp - 0x108], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x12161598: fild dword ptr [ebp - 0x108] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1216159E: fmul dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x108)) = _v; } /* 0x121615A0: fstp dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebp + (-0x108))); /* 0x121615A6: fld dword ptr [ebp - 0x108] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx) = _v; } /* 0x121615AC: fst dword ptr [edx] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0x20) = _v; } /* 0x121615AE: fst dword ptr [edx + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0x40) = _v; } /* 0x121615B1: fst dword ptr [edx + 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0x60) = _v; } /* 0x121615B4: fst dword ptr [edx + 0x60] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0x80) = _v; } /* 0x121615B7: fst dword ptr [edx + 0x80] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0xA0) = _v; } /* 0x121615BD: fst dword ptr [edx + 0xa0] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0xC0) = _v; } /* 0x121615C3: fst dword ptr [edx + 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0xE0) = _v; } /* 0x121615C9: fstp dword ptr [edx + 0xe0] */
    goto L_121618B6; /* 0x121615CF: jmp 0x121618b6 */
L_121615D4:
    eax = (int32_t)(int16_t)MEM16(ecx); /* 0x121615D4: movsx eax, word ptr [ecx] */
    MEM32(ebp + (-0x108)) = eax; /* 0x121615D7: mov dword ptr [ebp - 0x108], eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x20); /* 0x121615DD: movsx eax, word ptr [ecx + 0x20] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x121615E1: fild dword ptr [ebp - 0x108] */
    MEM32(ebp + (-0x108)) = eax; /* 0x121615E7: mov dword ptr [ebp - 0x108], eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x40); /* 0x121615ED: movsx eax, word ptr [ecx + 0x40] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x121615F1: fmul dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x128)) = _v; } /* 0x121615F3: fstp dword ptr [ebp - 0x128] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x121615F9: fild dword ptr [ebp - 0x108] */
    MEM32(ebp + (-0x108)) = eax; /* 0x121615FF: mov dword ptr [ebp - 0x108], eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x60); /* 0x12161605: movsx eax, word ptr [ecx + 0x60] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x40); /* 0x12161609: fmul dword ptr [edi + 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x12C)) = _v; } /* 0x1216160C: fstp dword ptr [ebp - 0x12c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x12161612: fild dword ptr [ebp - 0x108] */
    MEM32(ebp + (-0x108)) = eax; /* 0x12161618: mov dword ptr [ebp - 0x108], eax */
    eax = (int32_t)(int16_t)LO16(ebx); /* 0x1216161E: movsx eax, bx */
    _st[0] *= (double)*(float*)ADDR(edi + 0x80); /* 0x12161621: fmul dword ptr [edi + 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x114)) = _v; } /* 0x12161627: fstp dword ptr [ebp - 0x114] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1216162D: fild dword ptr [ebp - 0x108] */
    MEM32(ebp + (-0x108)) = eax; /* 0x12161633: mov dword ptr [ebp - 0x108], eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x30); /* 0x12161639: movsx eax, word ptr [ecx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(edi + 0xC0); /* 0x1216163D: fmul dword ptr [edi + 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x118)) = _v; } /* 0x12161643: fstp dword ptr [ebp - 0x118] */
    fp_push(*(float*)&MEM32(ebp + (-0x114))); /* 0x12161649: fld dword ptr [ebp - 0x114] */
    fp_push(_st[0]); /* 0x1216164F: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x128))); /* 0x12161651: fld dword ptr [ebp - 0x128] */
    fp_push(_st[0]); /* 0x12161657: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161659: faddp st(2) */
    fp_xch(1); /* 0x1216165B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x1216165D: fstp dword ptr [ebp - 0x10c] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12161663: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x12161665: fstp dword ptr [ebp - 0x110] */
    fp_push(*(float*)&MEM32(ebp + (-0x118))); /* 0x1216166B: fld dword ptr [ebp - 0x118] */
    fp_push(_st[0]); /* 0x12161671: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x12C))); /* 0x12161673: fld dword ptr [ebp - 0x12c] */
    fp_push(_st[0]); /* 0x12161679: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1216167B: faddp st(2) */
    fp_xch(1); /* 0x1216167D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x118)) = _v; } /* 0x1216167F: fstp dword ptr [ebp - 0x118] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12161685: fsubrp st(1) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12161687: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x118))); /* 0x12161689: fld dword ptr [ebp - 0x118] */
    fp_push(_st[0]); /* 0x1216168F: fld st(0) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x12161691: fsubp st(4) */
    fp_xch(3); /* 0x12161693: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x114)) = _v; } /* 0x12161695: fstp dword ptr [ebp - 0x114] */
    fp_push(_st[2]); /* 0x1216169B: fld st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x10C))); /* 0x1216169D: fld dword ptr [ebp - 0x10c] */
    fp_push(_st[0]); /* 0x121616A3: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x121616A5: faddp st(2) */
    fp_xch(1); /* 0x121616A7: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x128)) = _v; } /* 0x121616A9: fstp dword ptr [ebp - 0x128] */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x121616AF: fsubrp st(3) */
    fp_xch(2); /* 0x121616B1: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x118)) = _v; } /* 0x121616B3: fstp dword ptr [ebp - 0x118] */
    fp_push(*(float*)&MEM32(ebp + (-0x114))); /* 0x121616B9: fld dword ptr [ebp - 0x114] */
    fp_push(_st[0]); /* 0x121616BF: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x110))); /* 0x121616C1: fld dword ptr [ebp - 0x110] */
    fp_push(_st[0]); /* 0x121616C7: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x121616C9: faddp st(2) */
    fp_xch(1); /* 0x121616CB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x12C)) = _v; } /* 0x121616CD: fstp dword ptr [ebp - 0x12c] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x121616D3: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x114)) = _v; } /* 0x121616D5: fstp dword ptr [ebp - 0x114] */
    fp_push(*(float*)&MEM32(edi + 0x20)); /* 0x121616DB: fld dword ptr [edi + 0x20] */
    _st[0] = _st[0] * (double)(int32_t)MEM32(ebp + (-0x108)); /* 0x121616DE: fimul dword ptr [ebp - 0x108] */
    MEM32(ebp + (-0x108)) = eax; /* 0x121616E4: mov dword ptr [ebp - 0x108], eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x50); /* 0x121616EA: movsx eax, word ptr [ecx + 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x121616EE: fstp dword ptr [ebp - 0x10c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x121616F4: fild dword ptr [ebp - 0x108] */
    MEM32(ebp + (-0x108)) = eax; /* 0x121616FA: mov dword ptr [ebp - 0x108], eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x70); /* 0x12161700: movsx eax, word ptr [ecx + 0x70] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x60); /* 0x12161704: fmul dword ptr [edi + 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x12161707: fstp dword ptr [ebp - 0x110] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x1216170D: fild dword ptr [ebp - 0x108] */
    MEM32(ebp + (-0x108)) = eax; /* 0x12161713: mov dword ptr [ebp - 0x108], eax */
    _st[0] *= (double)*(float*)ADDR(edi + 0xA0); /* 0x12161719: fmul dword ptr [edi + 0xa0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x11C)) = _v; } /* 0x1216171F: fstp dword ptr [ebp - 0x11c] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x108))); /* 0x12161725: fild dword ptr [ebp - 0x108] */
    _st[0] *= (double)*(float*)ADDR(edi + 0xE0); /* 0x1216172B: fmul dword ptr [edi + 0xe0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x130)) = _v; } /* 0x12161731: fstp dword ptr [ebp - 0x130] */
    fp_push(*(float*)&MEM32(ebp + (-0x11C))); /* 0x12161737: fld dword ptr [ebp - 0x11c] */
    fp_push(_st[0]); /* 0x1216173D: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x110))); /* 0x1216173F: fld dword ptr [ebp - 0x110] */
    fp_push(_st[0]); /* 0x12161745: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161747: faddp st(2) */
    fp_xch(1); /* 0x12161749: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x1216174B: fstp dword ptr [ebp - 0x110] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12161751: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x120)) = _v; } /* 0x12161753: fstp dword ptr [ebp - 0x120] */
    fp_push(*(float*)&MEM32(ebp + (-0x130))); /* 0x12161759: fld dword ptr [ebp - 0x130] */
    fp_push(_st[0]); /* 0x1216175F: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10C))); /* 0x12161761: fld dword ptr [ebp - 0x10c] */
    fp_push(_st[0]); /* 0x12161767: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161769: faddp st(2) */
    fp_xch(1); /* 0x1216176B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x1216176D: fstp dword ptr [ebp - 0x10c] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12161773: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x11C)) = _v; } /* 0x12161775: fstp dword ptr [ebp - 0x11c] */
    fp_push(*(float*)&MEM32(ebp + (-0x10C))); /* 0x1216177B: fld dword ptr [ebp - 0x10c] */
    fp_push(_st[0]); /* 0x12161781: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x110))); /* 0x12161783: fld dword ptr [ebp - 0x110] */
    fp_push(_st[0]); /* 0x12161789: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1216178B: faddp st(2) */
    fp_xch(1); /* 0x1216178D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x130)) = _v; } /* 0x1216178F: fstp dword ptr [ebp - 0x130] */
    fp_push(*(float*)&MEM32(ebp + (-0x11C))); /* 0x12161795: fld dword ptr [ebp - 0x11c] */
    fp_push(_st[0]); /* 0x1216179B: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x120))); /* 0x1216179D: fld dword ptr [ebp - 0x120] */
    fp_push(_st[0]); /* 0x121617A3: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x121617A5: faddp st(2) */
    fp_xch(1); /* 0x121617A7: fxch st(1) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x121617A9: fmulp st(5) */
    fp_xch(4); /* 0x121617AB: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x120)) = _v; } /* 0x121617AD: fstp dword ptr [ebp - 0x120] */
    fp_push(*(float*)&MEM32(ebp + (-0x120))); /* 0x121617B3: fld dword ptr [ebp - 0x120] */
    fp_push(_st[0]); /* 0x121617B9: fld st(0) */
    fp_xch(5); /* 0x121617BB: fxch st(5) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x121617BD: fmulp st(6) */
    fp_xch(4); /* 0x121617BF: fxch st(4) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x121617C1: fsubrp st(5) */
    fp_xch(4); /* 0x121617C3: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x108)) = _v; } /* 0x121617C5: fstp dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebp + (-0x108))); /* 0x121617CB: fld dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebp + (-0x130))); /* 0x121617D1: fld dword ptr [ebp - 0x130] */
    fp_push(_st[0]); /* 0x121617D7: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x121617D9: fsubp st(2) */
    fp_xch(1); /* 0x121617DB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x11C)) = _v; } /* 0x121617DD: fstp dword ptr [ebp - 0x11c] */
    fp_xch(2); /* 0x121617E3: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x121617E5: fsubrp st(1) */
    _st[0] *= *(double*)ADDR(0x12013348); /* 0x121617E7: fmul qword ptr [0x12013348] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x108)) = _v; } /* 0x121617ED: fstp dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebp + (-0x108))); /* 0x121617F3: fld dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebp + (-0x11C))); /* 0x121617F9: fld dword ptr [ebp - 0x11c] */
    fp_push(_st[0]); /* 0x121617FF: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12161801: fsubp st(2) */
    fp_xch(1); /* 0x12161803: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x12161805: fstp dword ptr [ebp - 0x110] */
    fp_push(*(double*)ADDR(0x12013330)); /* 0x1216180B: fld qword ptr [0x12013330] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12161811: fmulp st(4) */
    fp_xch(3); /* 0x12161813: fxch st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12161815: fsubrp st(2) */
    fp_xch(1); /* 0x12161817: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x108)) = _v; } /* 0x12161819: fstp dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebp + (-0x108))); /* 0x1216181F: fld dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebp + (-0x110))); /* 0x12161825: fld dword ptr [ebp - 0x110] */
    fp_push(_st[0]); /* 0x1216182B: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1216182D: faddp st(2) */
    fp_xch(1); /* 0x1216182F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x12161831: fstp dword ptr [ebp - 0x10c] */
    fp_push(_st[1]); /* 0x12161837: fld st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x128))); /* 0x12161839: fld dword ptr [ebp - 0x128] */
    fp_push(_st[0]); /* 0x1216183F: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161841: faddp st(2) */
    fp_xch(1); /* 0x12161843: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x12161845: fstp dword ptr [edx] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12161847: fsubrp st(2) */
    fp_xch(1); /* 0x12161849: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0xE0) = _v; } /* 0x1216184B: fstp dword ptr [edx + 0xe0] */
    fp_push(_st[1]); /* 0x12161851: fld st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x12C))); /* 0x12161853: fld dword ptr [ebp - 0x12c] */
    fp_push(_st[0]); /* 0x12161859: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1216185B: faddp st(2) */
    fp_xch(1); /* 0x1216185D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x20) = _v; } /* 0x1216185F: fstp dword ptr [edx + 0x20] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12161862: fsubrp st(2) */
    fp_xch(1); /* 0x12161864: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0xC0) = _v; } /* 0x12161866: fstp dword ptr [edx + 0xc0] */
    fp_push(_st[0]); /* 0x1216186C: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x114))); /* 0x1216186E: fld dword ptr [ebp - 0x114] */
    fp_push(_st[0]); /* 0x12161874: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161876: faddp st(2) */
    fp_xch(1); /* 0x12161878: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x40) = _v; } /* 0x1216187A: fstp dword ptr [edx + 0x40] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1216187D: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0xA0) = _v; } /* 0x1216187F: fstp dword ptr [edx + 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x10C))); /* 0x12161885: fld dword ptr [ebp - 0x10c] */
    fp_push(_st[0]); /* 0x1216188B: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x118))); /* 0x1216188D: fld dword ptr [ebp - 0x118] */
    fp_push(_st[0]); /* 0x12161893: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161895: faddp st(2) */
    fp_xch(1); /* 0x12161897: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x80) = _v; } /* 0x12161899: fstp dword ptr [edx + 0x80] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1216189F: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x60) = _v; } /* 0x121618A1: fstp dword ptr [edx + 0x60] */
    fp_push(*(double*)ADDR(0x12013348)); /* 0x121618A4: fld qword ptr [0x12013348] */
    fp_push(*(double*)ADDR(0x12013340)); /* 0x121618AA: fld qword ptr [0x12013340] */
    fp_push(*(double*)ADDR(0x12013338)); /* 0x121618B0: fld qword ptr [0x12013338] */
L_121618B6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x121618B6: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x121618B7: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x121618BA: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x121618BD: add edx, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x121618C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12161562; /* 0x121618C2: jg 0x12161562 */
L_121618C8:
    ebx = MEM32(ebp + (-0x124)); /* 0x121618C8: mov ebx, dword ptr [ebp - 0x124] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121618CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x108)) = eax; /* 0x121618D0: mov dword ptr [ebp - 0x108], eax */
    edi = ebp + (-0xFC); /* 0x121618D6: lea edi, [ebp - 0xfc] */
L_121618DC:
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x121618DC: fld dword ptr [edi + 8] */
    ecx = MEM32(ebp + (-0x134)); /* 0x121618DF: mov ecx, dword ptr [ebp - 0x134] */
    _st[0] += (double)*(float*)ADDR(edi + (-0x8)); /* 0x121618E5: fadd dword ptr [edi - 8] */
    esi = MEM32(ecx + eax * 4); /* 0x121618E8: mov esi, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x138)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x138)); /* 0x121618EB: add esi, dword ptr [ebp - 0x138] */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x121618F1: fstp dword ptr [ebp - 0x10c] */
    fp_push(*(float*)&MEM32(edi + (-0x8))); /* 0x121618F7: fld dword ptr [edi - 8] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x8); /* 0x121618FA: fsub dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x121618FD: fstp dword ptr [ebp - 0x110] */
    fp_push(*(float*)&MEM32(edi + 0x10)); /* 0x12161903: fld dword ptr [edi + 0x10] */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x12161906: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x118)) = _v; } /* 0x12161908: fstp dword ptr [ebp - 0x118] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1216190E: fld dword ptr [edi] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x10); /* 0x12161910: fsub dword ptr [edi + 0x10] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12161913: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x118))); /* 0x12161915: fld dword ptr [ebp - 0x118] */
    fp_push(_st[0]); /* 0x1216191B: fld st(0) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x1216191D: fsubp st(4) */
    fp_xch(3); /* 0x1216191F: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x114)) = _v; } /* 0x12161921: fstp dword ptr [ebp - 0x114] */
    fp_push(_st[2]); /* 0x12161927: fld st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x10C))); /* 0x12161929: fld dword ptr [ebp - 0x10c] */
    fp_push(_st[0]); /* 0x1216192F: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161931: faddp st(2) */
    fp_xch(1); /* 0x12161933: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x128)) = _v; } /* 0x12161935: fstp dword ptr [ebp - 0x128] */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x1216193B: fsubrp st(3) */
    fp_xch(2); /* 0x1216193D: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x118)) = _v; } /* 0x1216193F: fstp dword ptr [ebp - 0x118] */
    fp_push(*(float*)&MEM32(ebp + (-0x114))); /* 0x12161945: fld dword ptr [ebp - 0x114] */
    fp_push(_st[0]); /* 0x1216194B: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x110))); /* 0x1216194D: fld dword ptr [ebp - 0x110] */
    fp_push(_st[0]); /* 0x12161953: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161955: faddp st(2) */
    fp_xch(1); /* 0x12161957: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x12C)) = _v; } /* 0x12161959: fstp dword ptr [ebp - 0x12c] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1216195F: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x114)) = _v; } /* 0x12161961: fstp dword ptr [ebp - 0x114] */
    fp_push(*(float*)&MEM32(edi + 0xC)); /* 0x12161967: fld dword ptr [edi + 0xc] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x1216196A: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x1216196D: fstp dword ptr [ebp - 0x110] */
    fp_push(*(float*)&MEM32(edi + 0xC)); /* 0x12161973: fld dword ptr [edi + 0xc] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x12161976: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x120)) = _v; } /* 0x12161979: fstp dword ptr [ebp - 0x120] */
    fp_push(*(float*)&MEM32(edi + 0x14)); /* 0x1216197F: fld dword ptr [edi + 0x14] */
    _st[0] += (double)*(float*)ADDR(edi + (-0x4)); /* 0x12161982: fadd dword ptr [edi - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x12161985: fstp dword ptr [ebp - 0x10c] */
    fp_push(*(float*)&MEM32(edi + (-0x4))); /* 0x1216198B: fld dword ptr [edi - 4] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x14); /* 0x1216198E: fsub dword ptr [edi + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x11C)) = _v; } /* 0x12161991: fstp dword ptr [ebp - 0x11c] */
    fp_push(*(float*)&MEM32(ebp + (-0x10C))); /* 0x12161997: fld dword ptr [ebp - 0x10c] */
    fp_push(_st[0]); /* 0x1216199D: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x110))); /* 0x1216199F: fld dword ptr [ebp - 0x110] */
    fp_push(_st[0]); /* 0x121619A5: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x121619A7: faddp st(2) */
    fp_xch(1); /* 0x121619A9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x130)) = _v; } /* 0x121619AB: fstp dword ptr [ebp - 0x130] */
    fp_push(*(float*)&MEM32(ebp + (-0x11C))); /* 0x121619B1: fld dword ptr [ebp - 0x11c] */
    fp_push(_st[0]); /* 0x121619B7: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x120))); /* 0x121619B9: fld dword ptr [ebp - 0x120] */
    fp_push(_st[0]); /* 0x121619BF: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x121619C1: faddp st(2) */
    fp_xch(1); /* 0x121619C3: fxch st(1) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x121619C5: fmulp st(5) */
    fp_xch(4); /* 0x121619C7: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x120)) = _v; } /* 0x121619C9: fstp dword ptr [ebp - 0x120] */
    fp_push(*(float*)&MEM32(ebp + (-0x120))); /* 0x121619CF: fld dword ptr [ebp - 0x120] */
    fp_push(_st[0]); /* 0x121619D5: fld st(0) */
    fp_xch(5); /* 0x121619D7: fxch st(5) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x121619D9: fmulp st(6) */
    fp_xch(4); /* 0x121619DB: fxch st(4) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x121619DD: fsubrp st(5) */
    fp_xch(4); /* 0x121619DF: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x124)) = _v; } /* 0x121619E1: fstp dword ptr [ebp - 0x124] */
    fp_push(*(float*)&MEM32(ebp + (-0x124))); /* 0x121619E7: fld dword ptr [ebp - 0x124] */
    fp_push(*(float*)&MEM32(ebp + (-0x130))); /* 0x121619ED: fld dword ptr [ebp - 0x130] */
    fp_push(_st[0]); /* 0x121619F3: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x121619F5: fsubp st(2) */
    fp_xch(1); /* 0x121619F7: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x11C)) = _v; } /* 0x121619F9: fstp dword ptr [ebp - 0x11c] */
    fp_xch(2); /* 0x121619FF: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12161A01: fsubrp st(1) */
    _st[0] *= *(double*)ADDR(0x12013348); /* 0x12161A03: fmul qword ptr [0x12013348] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x124)) = _v; } /* 0x12161A09: fstp dword ptr [ebp - 0x124] */
    fp_push(*(float*)&MEM32(ebp + (-0x124))); /* 0x12161A0F: fld dword ptr [ebp - 0x124] */
    fp_push(*(float*)&MEM32(ebp + (-0x11C))); /* 0x12161A15: fld dword ptr [ebp - 0x11c] */
    fp_push(_st[0]); /* 0x12161A1B: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12161A1D: fsubp st(2) */
    fp_xch(1); /* 0x12161A1F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x12161A21: fstp dword ptr [ebp - 0x110] */
    fp_push(*(double*)ADDR(0x12013330)); /* 0x12161A27: fld qword ptr [0x12013330] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12161A2D: fmulp st(4) */
    fp_xch(3); /* 0x12161A2F: fxch st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12161A31: fsubrp st(2) */
    fp_xch(1); /* 0x12161A33: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x124)) = _v; } /* 0x12161A35: fstp dword ptr [ebp - 0x124] */
    fp_push(*(float*)&MEM32(ebp + (-0x124))); /* 0x12161A3B: fld dword ptr [ebp - 0x124] */
    fp_push(*(float*)&MEM32(ebp + (-0x110))); /* 0x12161A41: fld dword ptr [ebp - 0x110] */
    fp_push(_st[0]); /* 0x12161A47: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161A49: faddp st(2) */
    fp_xch(1); /* 0x12161A4B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x12161A4D: fstp dword ptr [ebp - 0x10c] */
    fp_push(_st[1]); /* 0x12161A53: fld st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x128))); /* 0x12161A55: fld dword ptr [ebp - 0x128] */
    fp_push(_st[0]); /* 0x12161A5B: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161A5D: faddp st(2) */
    fp_xch(1); /* 0x12161A5F: fxch st(1) */
    RECOMP_CALL(sub_121BF371); /* 0x12161A61: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12161A66: fsubrp st(2) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12161A68: add eax, 4 */
    _flag_k = FK_ADD;
    fp_xch(1); /* 0x12161A6B: fxch st(1) */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12161A6D: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161A70: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12161A75: movzx eax, byte ptr [eax + ebx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x12161A79: mov byte ptr [esi], al */
    RECOMP_CALL(sub_121BF371); /* 0x12161A7B: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12161A80: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12161A83: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    fp_push(_st[1]); /* 0x12161A86: fld st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x12C))); /* 0x12161A88: fld dword ptr [ebp - 0x12c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161A8E: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12161A93: movzx eax, byte ptr [eax + ebx] */
    fp_push(_st[0]); /* 0x12161A97: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161A99: faddp st(2) */
    fp_xch(1); /* 0x12161A9B: fxch st(1) */
    MEM8(esi + 0x7) = (uint8_t)(LO8(eax)); /* 0x12161A9D: mov byte ptr [esi + 7], al */
    RECOMP_CALL(sub_121BF371); /* 0x12161AA0: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12161AA5: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12161AA8: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12161AAB: fsubrp st(2) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161AAD: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_xch(1); /* 0x12161AB2: fxch st(1) */
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12161AB4: movzx eax, byte ptr [eax + ebx] */
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x12161AB8: mov byte ptr [esi + 1], al */
    RECOMP_CALL(sub_121BF371); /* 0x12161ABB: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12161AC0: add eax, 4 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x12161AC3: fld st(0) */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12161AC5: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    fp_push(*(float*)&MEM32(ebp + (-0x114))); /* 0x12161AC8: fld dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161ACE: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12161AD3: movzx eax, byte ptr [eax + ebx] */
    fp_push(_st[0]); /* 0x12161AD7: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161AD9: faddp st(2) */
    fp_xch(1); /* 0x12161ADB: fxch st(1) */
    MEM8(esi + 0x6) = (uint8_t)(LO8(eax)); /* 0x12161ADD: mov byte ptr [esi + 6], al */
    RECOMP_CALL(sub_121BF371); /* 0x12161AE0: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12161AE5: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12161AE8: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12161AEB: fsubrp st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161AED: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12161AF2: movzx eax, byte ptr [eax + ebx] */
    MEM8(esi + 0x2) = (uint8_t)(LO8(eax)); /* 0x12161AF6: mov byte ptr [esi + 2], al */
    RECOMP_CALL(sub_121BF371); /* 0x12161AF9: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12161AFE: add eax, 4 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + (-0x10C))); /* 0x12161B01: fld dword ptr [ebp - 0x10c] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12161B07: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161B0A: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x12161B0F: fld st(0) */
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12161B11: movzx eax, byte ptr [eax + ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x118))); /* 0x12161B15: fld dword ptr [ebp - 0x118] */
    fp_push(_st[0]); /* 0x12161B1B: fld st(0) */
    MEM8(esi + 0x5) = (uint8_t)(LO8(eax)); /* 0x12161B1D: mov byte ptr [esi + 5], al */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12161B20: faddp st(2) */
    fp_xch(1); /* 0x12161B22: fxch st(1) */
    RECOMP_CALL(sub_121BF371); /* 0x12161B24: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12161B29: fsubrp st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12161B2B: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12161B2E: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161B31: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12161B36: movzx eax, byte ptr [eax + ebx] */
    MEM8(esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x12161B3A: mov byte ptr [esi + 4], al */
    RECOMP_CALL(sub_121BF371); /* 0x12161B3D: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12161B42: add eax, 4 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(0x12013348)); /* 0x12161B45: fld qword ptr [0x12013348] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12161B4B: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    fp_push(*(double*)ADDR(0x12013340)); /* 0x12161B4E: fld qword ptr [0x12013340] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161B54: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12161B59: movzx eax, byte ptr [eax + ebx] */
    fp_push(*(double*)ADDR(0x12013338)); /* 0x12161B5D: fld qword ptr [0x12013338] */
    MEM8(esi + 0x3) = (uint8_t)(LO8(eax)); /* 0x12161B63: mov byte ptr [esi + 3], al */
    eax = MEM32(ebp + (-0x108)); /* 0x12161B66: mov eax, dword ptr [ebp - 0x108] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12161B6C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x12161B6D: add edi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x12161B70: mov dword ptr [ebp - 0x108], eax */
    /* cmp eax, 8 */ /* 0x12161B76: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121618DC; /* 0x12161B79: jl 0x121618dc */
L_12161B7F:
    ecx = MEM32(ebp + (-0x4)); /* 0x12161B7F: mov ecx, dword ptr [ebp - 4] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12161B82: fstp st(2) */
    edi = POP32_VAL(esp); /* 0x12161B84: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12161B85: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x12161B87: pop esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12161B88: fstp st(0) */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12161B8A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12161B8C: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12161B8D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12161B92: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12161B94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12161B95: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12161BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12161BA0u);

L_12161BA0:
    edi = edi; /* 0x12161BA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12161BA2: push ebp */
    ebp = esp; /* 0x12161BA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x13Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x13Cu; /* 0x12161BA5: sub esp, 0x13c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12161BAB: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12161BB0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12161BB2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x12161BB5: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x10); /* 0x12161BB8: mov edx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x138)) = eax; /* 0x12161BBB: mov dword ptr [ebp - 0x138], eax */
    eax = MEM32(ebp + 0x18); /* 0x12161BC1: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x13C)) = eax; /* 0x12161BC4: mov dword ptr [ebp - 0x13c], eax */
    eax = MEM32(ebp + 0x8); /* 0x12161BCA: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x12161BCD: mov eax, dword ptr [eax + 0x148] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x12161BD3: sub eax, -0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12161BD6: push ebx */
    MEM32(ebp + (-0x12C)) = eax; /* 0x12161BD7: mov dword ptr [ebp - 0x12c], eax */
    eax = MEM32(ebp + 0xC); /* 0x12161BDD: mov eax, dword ptr [ebp + 0xc] */
    ebx = MEM32(eax + 0x50); /* 0x12161BE0: mov ebx, dword ptr [eax + 0x50] */
    PUSH32(esp, esi); /* 0x12161BE3: push esi */
    esi = ebp + (-0x104); /* 0x12161BE4: lea esi, [ebp - 0x104] */
    PUSH32(esp, edi); /* 0x12161BEA: push edi */
    MEM32(ebp + (-0x110)) = ebx; /* 0x12161BEB: mov dword ptr [ebp - 0x110], ebx */
    MEM32(ebp + (-0x114)) = esi; /* 0x12161BF1: mov dword ptr [ebp - 0x114], esi */
    MEM32(ebp + (-0x128)) = 8; /* 0x12161BF7: mov dword ptr [ebp - 0x128], 8 */
L_12161C01:
    eax = (uint32_t)MEM16(edx + 0x50); /* 0x12161C01: movzx eax, word ptr [edx + 0x50] */
    MEM32(ebp + (-0x118)) = eax; /* 0x12161C05: mov dword ptr [ebp - 0x118], eax */
    eax = (uint32_t)MEM16(edx + 0x40); /* 0x12161C0B: movzx eax, word ptr [edx + 0x40] */
    edi = (uint32_t)MEM16(edx + 0x60); /* 0x12161C0F: movzx edi, word ptr [edx + 0x60] */
    MEM32(ebp + (-0x120)) = eax; /* 0x12161C13: mov dword ptr [ebp - 0x120], eax */
    eax = (uint32_t)MEM16(edx + 0x30); /* 0x12161C19: movzx eax, word ptr [edx + 0x30] */
    ecx = (uint32_t)MEM16(edx + 0x70); /* 0x12161C1D: movzx ecx, word ptr [edx + 0x70] */
    MEM32(ebp + (-0x130)) = eax; /* 0x12161C21: mov dword ptr [ebp - 0x130], eax */
    eax = (uint32_t)MEM16(edx + 0x20); /* 0x12161C27: movzx eax, word ptr [edx + 0x20] */
    MEM32(ebp + (-0x124)) = eax; /* 0x12161C2B: mov dword ptr [ebp - 0x124], eax */
    eax = (uint32_t)MEM16(edx + 0x10); /* 0x12161C31: movzx eax, word ptr [edx + 0x10] */
    MEM32(ebp + (-0x134)) = eax; /* 0x12161C35: mov dword ptr [ebp - 0x134], eax */
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x124)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x124))));
    eax = eax | MEM32(ebp + (-0x124)); /* 0x12161C3B: or eax, dword ptr [ebp - 0x124] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x108)) = ecx; /* 0x12161C41: mov dword ptr [ebp - 0x108], ecx */
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x130)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x130))));
    eax = eax | MEM32(ebp + (-0x130)); /* 0x12161C47: or eax, dword ptr [ebp - 0x130] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x11C)) = edi; /* 0x12161C4D: mov dword ptr [ebp - 0x11c], edi */
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x120)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x120))));
    eax = eax | MEM32(ebp + (-0x120)); /* 0x12161C53: or eax, dword ptr [ebp - 0x120] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | MEM32(ebp + (-0x118)))); _flag_b = (uint32_t)((eax | MEM32(ebp + (-0x118))));
    eax = eax | MEM32(ebp + (-0x118)); /* 0x12161C59: or eax, dword ptr [ebp - 0x118] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edi)); _flag_b = (uint32_t)((eax | edi));
    eax = eax | edi; /* 0x12161C5F: or eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x12161C61: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(eax), LO16(eax) */ /* 0x12161C63: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12161C99; /* 0x12161C66: jne 0x12161c99 */
L_12161C68:
    ecx = (int32_t)(int16_t)MEM16(ebx); /* 0x12161C68: movsx ecx, word ptr [ebx] */
    eax = (int32_t)(int16_t)MEM16(edx); /* 0x12161C6B: movsx eax, word ptr [edx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x12161C6E: imul ecx, eax */
    MEM32(esi) = ecx; /* 0x12161C71: mov dword ptr [esi], ecx */
    MEM32(esi + 0x20) = ecx; /* 0x12161C73: mov dword ptr [esi + 0x20], ecx */
    MEM32(esi + 0x40) = ecx; /* 0x12161C76: mov dword ptr [esi + 0x40], ecx */
    MEM32(esi + 0x60) = ecx; /* 0x12161C79: mov dword ptr [esi + 0x60], ecx */
    MEM32(esi + 0x80) = ecx; /* 0x12161C7C: mov dword ptr [esi + 0x80], ecx */
    MEM32(esi + 0xA0) = ecx; /* 0x12161C82: mov dword ptr [esi + 0xa0], ecx */
    MEM32(esi + 0xC0) = ecx; /* 0x12161C88: mov dword ptr [esi + 0xc0], ecx */
    MEM32(esi + 0xE0) = ecx; /* 0x12161C8E: mov dword ptr [esi + 0xe0], ecx */
    goto L_12161E87; /* 0x12161C94: jmp 0x12161e87 */
L_12161C99:
    eax = (uint32_t)MEM16(ebx); /* 0x12161C99: movzx eax, word ptr [ebx] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(edx))); /* 0x12161C9C: imul ax, word ptr [edx] */
    ecx = (uint32_t)MEM16(edx + 0x20); /* 0x12161CA0: movzx ecx, word ptr [edx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x12161CA4: movzx esi, ax */
    eax = (uint32_t)MEM16(ebx + 0x20); /* 0x12161CA7: movzx eax, word ptr [ebx + 0x20] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)LO16(ecx))); /* 0x12161CAB: imul ax, cx */
    ecx = (uint32_t)MEM16(edx + 0x40); /* 0x12161CAF: movzx ecx, word ptr [edx + 0x40] */
    edi = (uint32_t)LO16(eax); /* 0x12161CB3: movzx edi, ax */
    eax = (uint32_t)MEM16(ebx + 0x40); /* 0x12161CB6: movzx eax, word ptr [ebx + 0x40] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)LO16(ecx))); /* 0x12161CBA: imul ax, cx */
    ecx = (uint32_t)LO16(eax); /* 0x12161CBE: movzx ecx, ax */
    eax = (uint32_t)MEM16(ebx + 0x60); /* 0x12161CC1: movzx eax, word ptr [ebx + 0x60] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ebp + (-0x11C)))); /* 0x12161CC5: imul ax, word ptr [ebp - 0x11c] */
    edx = (uint32_t)LO16(eax); /* 0x12161CCD: movzx edx, ax */
    eax = ecx + esi; /* 0x12161CD0: lea eax, [ecx + esi] */
    ebx = (uint32_t)LO16(eax); /* 0x12161CD3: movzx ebx, ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x12161CD6: sub esi, ecx */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(esi); /* 0x12161CD8: movzx eax, si */
    MEM32(ebp + (-0x11C)) = eax; /* 0x12161CDB: mov dword ptr [ebp - 0x11c], eax */
    eax = edx + edi; /* 0x12161CE1: lea eax, [edx + edi] */
    esi = (uint32_t)LO16(eax); /* 0x12161CE4: movzx esi, ax */
    eax = (int32_t)(int16_t)LO16(edx); /* 0x12161CE7: movsx eax, dx */
    edx = MEM32(ebp + (-0x11C)); /* 0x12161CEA: mov edx, dword ptr [ebp - 0x11c] */
    ecx = (int32_t)(int16_t)LO16(edi); /* 0x12161CF0: movsx ecx, di */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12161CF3: sub ecx, eax */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16Au); /* 0x12161CF5: imul ecx, ecx, 0x16a */
    eax = esi + ebx; /* 0x12161CFB: lea eax, [esi + ebx] */
    eax = (uint32_t)LO16(eax); /* 0x12161CFE: movzx eax, ax */
    MEM32(ebp + (-0x120)) = eax; /* 0x12161D01: mov dword ptr [ebp - 0x120], eax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12161D07: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12161D0A: sub ecx, esi */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(ecx); /* 0x12161D0C: movzx ecx, cx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x12161D0F: sub ebx, esi */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(ebx); /* 0x12161D11: movzx eax, bx */
    MEM32(ebp + (-0x10C)) = eax; /* 0x12161D14: mov dword ptr [ebp - 0x10c], eax */
    eax = ecx + edx; /* 0x12161D1A: lea eax, [ecx + edx] */
    eax = (uint32_t)LO16(eax); /* 0x12161D1D: movzx eax, ax */
    MEM32(ebp + (-0x11C)) = eax; /* 0x12161D20: mov dword ptr [ebp - 0x11c], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12161D26: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(edx); /* 0x12161D28: movzx eax, dx */
    edx = MEM32(ebp + (-0x110)); /* 0x12161D2B: mov edx, dword ptr [ebp - 0x110] */
    MEM32(ebp + (-0x124)) = eax; /* 0x12161D31: mov dword ptr [ebp - 0x124], eax */
    eax = (uint32_t)MEM16(edx + 0x10); /* 0x12161D37: movzx eax, word ptr [edx + 0x10] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ebp + (-0x134)))); /* 0x12161D3B: imul ax, word ptr [ebp - 0x134] */
    ebx = (uint32_t)LO16(eax); /* 0x12161D43: movzx ebx, ax */
    eax = (uint32_t)MEM16(edx + 0x30); /* 0x12161D46: movzx eax, word ptr [edx + 0x30] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ebp + (-0x130)))); /* 0x12161D4A: imul ax, word ptr [ebp - 0x130] */
    esi = (uint32_t)LO16(eax); /* 0x12161D52: movzx esi, ax */
    eax = (uint32_t)MEM16(edx + 0x50); /* 0x12161D55: movzx eax, word ptr [edx + 0x50] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ebp + (-0x118)))); /* 0x12161D59: imul ax, word ptr [ebp - 0x118] */
    ecx = (uint32_t)LO16(eax); /* 0x12161D61: movzx ecx, ax */
    eax = (uint32_t)MEM16(edx + 0x70); /* 0x12161D64: movzx eax, word ptr [edx + 0x70] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ebp + (-0x108)))); /* 0x12161D68: imul ax, word ptr [ebp - 0x108] */
    edx = (uint32_t)LO16(eax); /* 0x12161D70: movzx edx, ax */
    eax = ecx + esi; /* 0x12161D73: lea eax, [ecx + esi] */
    eax = (uint32_t)LO16(eax); /* 0x12161D76: movzx eax, ax */
    MEM32(ebp + (-0x108)) = eax; /* 0x12161D79: mov dword ptr [ebp - 0x108], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12161D7F: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = (uint32_t)LO16(ecx); /* 0x12161D81: movzx esi, cx */
    eax = edx + ebx; /* 0x12161D84: lea eax, [edx + ebx] */
    edi = (uint32_t)LO16(eax); /* 0x12161D87: movzx edi, ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x12161D8A: sub ebx, edx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(ebx); /* 0x12161D8C: movzx ecx, bx */
    ebx = MEM32(ebp + (-0x108)); /* 0x12161D8F: mov ebx, dword ptr [ebp - 0x108] */
    eax = edi + ebx; /* 0x12161D95: lea eax, [edi + ebx] */
    eax = (uint32_t)LO16(eax); /* 0x12161D98: movzx eax, ax */
    MEM32(ebp + (-0x118)) = eax; /* 0x12161D9B: mov dword ptr [ebp - 0x118], eax */
    eax = (int32_t)(int16_t)LO16(ecx); /* 0x12161DA1: movsx eax, cx */
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x12161DA4: movsx ecx, si */
    MEM32(ebp + (-0x108)) = eax; /* 0x12161DA7: mov dword ptr [ebp - 0x108], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12161DAD: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFFFFFD63u); /* 0x12161DAF: imul ecx, ecx, 0xfffffd63 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1D9u); /* 0x12161DB5: imul eax, eax, 0x1d9 */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x12161DBB: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12161DBE: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x118)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x118)); /* 0x12161DC1: sub ecx, dword ptr [ebp - 0x118] */
    _flag_k = FK_CMP;
    edx = (uint32_t)LO16(eax); /* 0x12161DC7: movzx edx, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x12161DCA: add ecx, edx */
    _flag_k = FK_ADD;
    esi = (uint32_t)LO16(ecx); /* 0x12161DCC: movzx esi, cx */
    ecx = (int32_t)(int16_t)LO16(edi); /* 0x12161DCF: movsx ecx, di */
    eax = (int32_t)(int16_t)LO16(ebx); /* 0x12161DD2: movsx eax, bx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12161DD5: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x108)); /* 0x12161DD7: mov eax, dword ptr [ebp - 0x108] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16Au); /* 0x12161DDD: imul ecx, ecx, 0x16a */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x115u); /* 0x12161DE3: imul eax, eax, 0x115 */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x12161DE9: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x12161DEC: sub eax, edx */
    _flag_k = FK_CMP;
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12161DEE: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12161DF1: sub ecx, esi */
    _flag_k = FK_CMP;
    edi = (uint32_t)LO16(ecx); /* 0x12161DF3: movzx edi, cx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x12161DF6: add eax, edi */
    _flag_k = FK_ADD;
    ebx = (uint32_t)LO16(eax); /* 0x12161DF8: movzx ebx, ax */
    eax = MEM32(ebp + (-0x118)); /* 0x12161DFB: mov eax, dword ptr [ebp - 0x118] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x12161E01: movsx ecx, ax */
    eax = MEM32(ebp + (-0x120)); /* 0x12161E04: mov eax, dword ptr [ebp - 0x120] */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x12161E0A: movsx edx, ax */
    eax = edx + ecx; /* 0x12161E0D: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12161E10: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x108)) = ebx; /* 0x12161E12: mov dword ptr [ebp - 0x108], ebx */
    ebx = MEM32(ebp + (-0x114)); /* 0x12161E18: mov ebx, dword ptr [ebp - 0x114] */
    MEM32(ebx) = eax; /* 0x12161E1E: mov dword ptr [ebx], eax */
    eax = ebx; /* 0x12161E20: mov eax, ebx */
    MEM32(eax + 0xE0) = edx; /* 0x12161E22: mov dword ptr [eax + 0xe0], edx */
    eax = MEM32(ebp + (-0x11C)); /* 0x12161E28: mov eax, dword ptr [ebp - 0x11c] */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x12161E2E: movsx edx, ax */
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x12161E31: movsx ecx, si */
    eax = ecx + edx; /* 0x12161E34: lea eax, [ecx + edx] */
    esi = ebx; /* 0x12161E37: mov esi, ebx */
    ebx = MEM32(ebp + (-0x108)); /* 0x12161E39: mov ebx, dword ptr [ebp - 0x108] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12161E3F: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(esi + 0x20) = eax; /* 0x12161E41: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(ebp + (-0x124)); /* 0x12161E44: mov eax, dword ptr [ebp - 0x124] */
    MEM32(esi + 0xC0) = edx; /* 0x12161E4A: mov dword ptr [esi + 0xc0], edx */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x12161E50: movsx edx, ax */
    ecx = (int32_t)(int16_t)LO16(edi); /* 0x12161E53: movsx ecx, di */
    eax = edx + ecx; /* 0x12161E56: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12161E59: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(esi + 0x40) = eax; /* 0x12161E5B: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ebp + (-0x10C)); /* 0x12161E5E: mov eax, dword ptr [ebp - 0x10c] */
    MEM32(esi + 0xA0) = edx; /* 0x12161E64: mov dword ptr [esi + 0xa0], edx */
    ecx = (int32_t)(int16_t)LO16(ebx); /* 0x12161E6A: movsx ecx, bx */
    ebx = MEM32(ebp + (-0x110)); /* 0x12161E6D: mov ebx, dword ptr [ebp - 0x110] */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x12161E73: movsx edx, ax */
    eax = ecx + edx; /* 0x12161E76: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12161E79: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(esi + 0x60) = edx; /* 0x12161E7B: mov dword ptr [esi + 0x60], edx */
    edx = MEM32(ebp + 0x10); /* 0x12161E7E: mov edx, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x80) = eax; /* 0x12161E81: mov dword ptr [esi + 0x80], eax */
L_12161E87:
    ecx = MEM32(ebp + (-0x128)); /* 0x12161E87: mov ecx, dword ptr [ebp - 0x128] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12161E8D: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x12161E8E: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x12161E91: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x12161E94: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = esi; /* 0x12161E97: mov dword ptr [ebp - 0x114], esi */
    MEM32(ebp + (-0x110)) = ebx; /* 0x12161E9D: mov dword ptr [ebp - 0x110], ebx */
    MEM32(ebp + 0x10) = edx; /* 0x12161EA3: mov dword ptr [ebp + 0x10], edx */
    MEM32(ebp + (-0x128)) = ecx; /* 0x12161EA6: mov dword ptr [ebp - 0x128], ecx */
    /* test ecx, ecx */ /* 0x12161EAC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12161C01; /* 0x12161EAE: jg 0x12161c01 */
L_12161EB4:
    esi = ebp + (-0x104); /* 0x12161EB4: lea esi, [ebp - 0x104] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12161EBA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x110)) = esi; /* 0x12161EBC: mov dword ptr [ebp - 0x110], esi */
    MEM32(ebp + (-0x128)) = eax; /* 0x12161EC2: mov dword ptr [ebp - 0x128], eax */
    goto L_12161ED0; /* 0x12161EC8: jmp 0x12161ed0 */
L_12161ED0:
    ecx = MEM32(ebp + (-0x138)); /* 0x12161ED0: mov ecx, dword ptr [ebp - 0x138] */
    ecx = MEM32(ecx + eax * 4); /* 0x12161ED6: mov ecx, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x13C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x13C)); /* 0x12161ED9: add ecx, dword ptr [ebp - 0x13c] */
    _flag_k = FK_ADD;
    eax = esi + 0xC; /* 0x12161EDF: lea eax, [esi + 0xc] */
    MEM32(ebp + (-0x108)) = eax; /* 0x12161EE2: mov dword ptr [ebp - 0x108], eax */
    eax = esi + 0x4; /* 0x12161EE8: lea eax, [esi + 4] */
    MEM32(ebp + (-0x11C)) = eax; /* 0x12161EEB: mov dword ptr [ebp - 0x11c], eax */
    eax = MEM32(esi + 0x18); /* 0x12161EF1: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0x1C))); _flag_b = (uint32_t)((eax | MEM32(esi + 0x1C)));
    eax = eax | MEM32(esi + 0x1C); /* 0x12161EF4: or eax, dword ptr [esi + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + 0x1C; /* 0x12161EF7: lea edx, [esi + 0x1c] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0x14))); _flag_b = (uint32_t)((eax | MEM32(esi + 0x14)));
    eax = eax | MEM32(esi + 0x14); /* 0x12161EFA: or eax, dword ptr [esi + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + 0x14; /* 0x12161EFD: lea ebx, [esi + 0x14] */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0x10))); _flag_b = (uint32_t)((eax | MEM32(esi + 0x10)));
    eax = eax | MEM32(esi + 0x10); /* 0x12161F00: or eax, dword ptr [esi + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x124)) = ecx; /* 0x12161F03: mov dword ptr [ebp - 0x124], ecx */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0xC))); _flag_b = (uint32_t)((eax | MEM32(esi + 0xC)));
    eax = eax | MEM32(esi + 0xC); /* 0x12161F09: or eax, dword ptr [esi + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x134)) = edx; /* 0x12161F0C: mov dword ptr [ebp - 0x134], edx */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0x8))); _flag_b = (uint32_t)((eax | MEM32(esi + 0x8)));
    eax = eax | MEM32(esi + 0x8); /* 0x12161F12: or eax, dword ptr [esi + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = ebx; /* 0x12161F15: mov dword ptr [ebp - 0x10c], ebx */
    _flag_a = (uint32_t)((eax | MEM32(esi + 0x4))); _flag_b = (uint32_t)((eax | MEM32(esi + 0x4)));
    eax = eax | MEM32(esi + 0x4); /* 0x12161F1B: or eax, dword ptr [esi + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12161F4F; /* 0x12161F1E: jne 0x12161f4f */
L_12161F20:
    eax = MEM32(esi); /* 0x12161F20: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + (-0x12C)); /* 0x12161F22: mov edx, dword ptr [ebp - 0x12c] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x12161F28: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12161F2B: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + edx)); /* 0x12161F30: mov al, byte ptr [eax + edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x12161F33: mov byte ptr [ecx], al */
    MEM8(ecx + 0x1) = (uint8_t)(LO8(eax)); /* 0x12161F35: mov byte ptr [ecx + 1], al */
    MEM8(ecx + 0x2) = (uint8_t)(LO8(eax)); /* 0x12161F38: mov byte ptr [ecx + 2], al */
    MEM8(ecx + 0x3) = (uint8_t)(LO8(eax)); /* 0x12161F3B: mov byte ptr [ecx + 3], al */
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x12161F3E: mov byte ptr [ecx + 4], al */
    MEM8(ecx + 0x5) = (uint8_t)(LO8(eax)); /* 0x12161F41: mov byte ptr [ecx + 5], al */
    MEM8(ecx + 0x6) = (uint8_t)(LO8(eax)); /* 0x12161F44: mov byte ptr [ecx + 6], al */
    MEM8(ecx + 0x7) = (uint8_t)(LO8(eax)); /* 0x12161F47: mov byte ptr [ecx + 7], al */
    goto L_12162149; /* 0x12161F4A: jmp 0x12162149 */
L_12161F4F:
    ecx = (uint32_t)MEM16(esi + 0x10); /* 0x12161F4F: movzx ecx, word ptr [esi + 0x10] */
    edx = (uint32_t)MEM16(esi); /* 0x12161F53: movzx edx, word ptr [esi] */
    eax = edx + ecx; /* 0x12161F56: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12161F59: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(esi + 0x8); /* 0x12161F5B: movzx ecx, word ptr [esi + 8] */
    edi = (uint32_t)LO16(eax); /* 0x12161F5F: movzx edi, ax */
    ebx = (uint32_t)LO16(edx); /* 0x12161F62: movzx ebx, dx */
    edx = (uint32_t)MEM16(esi + 0x18); /* 0x12161F65: movzx edx, word ptr [esi + 0x18] */
    eax = ecx + edx; /* 0x12161F69: lea eax, [ecx + edx] */
    esi = (uint32_t)LO16(eax); /* 0x12161F6C: movzx esi, ax */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x12161F6F: movsx ecx, cx */
    eax = (int32_t)(int16_t)LO16(edx); /* 0x12161F72: movsx eax, dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12161F75: sub ecx, eax */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16Au); /* 0x12161F77: imul ecx, ecx, 0x16a */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12161F7D: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12161F80: sub ecx, esi */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(ecx); /* 0x12161F82: movzx ecx, cx */
    eax = esi + edi; /* 0x12161F85: lea eax, [esi + edi] */
    eax = (uint32_t)LO16(eax); /* 0x12161F88: movzx eax, ax */
    MEM32(ebp + (-0x120)) = eax; /* 0x12161F8B: mov dword ptr [ebp - 0x120], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x12161F91: sub edi, esi */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(edi); /* 0x12161F93: movzx eax, di */
    MEM32(ebp + (-0x114)) = eax; /* 0x12161F96: mov dword ptr [ebp - 0x114], eax */
    eax = ecx + ebx; /* 0x12161F9C: lea eax, [ecx + ebx] */
    eax = (uint32_t)LO16(eax); /* 0x12161F9F: movzx eax, ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x12161FA2: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x118)) = eax; /* 0x12161FA4: mov dword ptr [ebp - 0x118], eax */
    eax = (uint32_t)LO16(ebx); /* 0x12161FAA: movzx eax, bx */
    MEM32(ebp + (-0x130)) = eax; /* 0x12161FAD: mov dword ptr [ebp - 0x130], eax */
    eax = MEM32(ebp + (-0x10C)); /* 0x12161FB3: mov eax, dword ptr [ebp - 0x10c] */
    edx = (uint32_t)MEM16(eax); /* 0x12161FB9: movzx edx, word ptr [eax] */
    eax = MEM32(ebp + (-0x108)); /* 0x12161FBC: mov eax, dword ptr [ebp - 0x108] */
    ecx = (uint32_t)MEM16(eax); /* 0x12161FC2: movzx ecx, word ptr [eax] */
    eax = ecx + edx; /* 0x12161FC5: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12161FC8: sub edx, ecx */
    _flag_k = FK_CMP;
    ebx = (uint32_t)LO16(eax); /* 0x12161FCA: movzx ebx, ax */
    eax = MEM32(ebp + (-0x134)); /* 0x12161FCD: mov eax, dword ptr [ebp - 0x134] */
    ecx = (uint32_t)MEM16(eax); /* 0x12161FD3: movzx ecx, word ptr [eax] */
    eax = MEM32(ebp + (-0x11C)); /* 0x12161FD6: mov eax, dword ptr [ebp - 0x11c] */
    esi = (uint32_t)LO16(edx); /* 0x12161FDC: movzx esi, dx */
    edx = (uint32_t)MEM16(eax); /* 0x12161FDF: movzx edx, word ptr [eax] */
    eax = edx + ecx; /* 0x12161FE2: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12161FE5: sub edx, ecx */
    _flag_k = FK_CMP;
    edi = (uint32_t)LO16(eax); /* 0x12161FE7: movzx edi, ax */
    eax = edi + ebx; /* 0x12161FEA: lea eax, [edi + ebx] */
    eax = (uint32_t)LO16(eax); /* 0x12161FED: movzx eax, ax */
    MEM32(ebp + (-0x108)) = ebx; /* 0x12161FF0: mov dword ptr [ebp - 0x108], ebx */
    ecx = (uint32_t)LO16(edx); /* 0x12161FF6: movzx ecx, dx */
    ebx = (int32_t)(int16_t)LO16(ecx); /* 0x12161FF9: movsx ebx, cx */
    MEM32(ebp + (-0x10C)) = eax; /* 0x12161FFC: mov dword ptr [ebp - 0x10c], eax */
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x12162002: movsx ecx, si */
    esi = MEM32(ebp + (-0x10C)); /* 0x12162005: mov esi, dword ptr [ebp - 0x10c] */
    eax = ecx + ebx; /* 0x1216200B: lea eax, [ecx + ebx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFFFFFD63u); /* 0x1216200E: imul ecx, ecx, 0xfffffd63 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x115u); /* 0x12162014: imul ebx, ebx, 0x115 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1D9u); /* 0x1216201A: imul eax, eax, 0x1d9 */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x12162020: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    edx = (uint32_t)LO16(eax); /* 0x12162023: movzx edx, ax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12162026: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12162029: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1216202B: add ecx, edx */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(ecx); /* 0x1216202D: movzx eax, cx */
    MEM32(ebp + (-0x10C)) = eax; /* 0x12162030: mov dword ptr [ebp - 0x10c], eax */
    eax = MEM32(ebp + (-0x108)); /* 0x12162036: mov eax, dword ptr [ebp - 0x108] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x1216203C: cwde  */
    ecx = (int32_t)(int16_t)LO16(edi); /* 0x1216203D: movsx ecx, di */
    edi = MEM32(ebp + (-0x10C)); /* 0x12162040: mov edi, dword ptr [ebp - 0x10c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12162046: sub ecx, eax */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x16Au); /* 0x12162048: imul ecx, ecx, 0x16a */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x1216204E: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x12162051: sub ecx, edi */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(ecx); /* 0x12162053: movzx eax, cx */
    if (8u) _cf = (((ebx) >> 7) & 1u); /* 0x12162056: sar ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 8u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x12162059: sub ebx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1216205B: add ebx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10C)) = eax; /* 0x1216205D: mov dword ptr [ebp - 0x10c], eax */
    eax = MEM32(ebp + (-0x120)); /* 0x12162063: mov eax, dword ptr [ebp - 0x120] */
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x12162069: movsx ecx, si */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x1216206C: movsx edx, ax */
    ebx = (uint32_t)LO16(ebx); /* 0x1216206F: movzx ebx, bx */
    eax = edx + ecx; /* 0x12162072: lea eax, [edx + ecx] */
    esi = MEM32(ebp + (-0x12C)); /* 0x12162075: mov esi, dword ptr [ebp - 0x12c] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1216207B: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x1216207E: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + esi); /* 0x12162083: movzx eax, byte ptr [eax + esi] */
    esi = MEM32(ebp + (-0x124)); /* 0x12162087: mov esi, dword ptr [ebp - 0x124] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1216208D: mov byte ptr [esi], al */
    eax = MEM32(ebp + (-0x12C)); /* 0x1216208F: mov eax, dword ptr [ebp - 0x12c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12162095: sub edx, ecx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x12162097: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x1216209A: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edx + eax); /* 0x121620A0: movzx eax, byte ptr [edx + eax] */
    MEM8(esi + 0x7) = (uint8_t)(LO8(eax)); /* 0x121620A4: mov byte ptr [esi + 7], al */
    eax = MEM32(ebp + (-0x118)); /* 0x121620A7: mov eax, dword ptr [ebp - 0x118] */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x121620AD: movsx edx, ax */
    ecx = (int32_t)(int16_t)LO16(edi); /* 0x121620B0: movsx ecx, di */
    edi = MEM32(ebp + (-0x12C)); /* 0x121620B3: mov edi, dword ptr [ebp - 0x12c] */
    eax = ecx + edx; /* 0x121620B9: lea eax, [ecx + edx] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x121620BC: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121620BF: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + edi); /* 0x121620C4: movzx eax, byte ptr [eax + edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121620C8: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x121620CA: mov byte ptr [esi + 1], al */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x121620CD: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x121620D0: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edx + edi); /* 0x121620D6: movzx eax, byte ptr [edx + edi] */
    MEM8(esi + 0x6) = (uint8_t)(LO8(eax)); /* 0x121620DA: mov byte ptr [esi + 6], al */
    eax = MEM32(ebp + (-0x10C)); /* 0x121620DD: mov eax, dword ptr [ebp - 0x10c] */
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x121620E3: movsx ecx, ax */
    eax = MEM32(ebp + (-0x130)); /* 0x121620E6: mov eax, dword ptr [ebp - 0x130] */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x121620EC: movsx edx, ax */
    eax = edx + ecx; /* 0x121620EF: lea eax, [edx + ecx] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x121620F2: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121620F5: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + edi); /* 0x121620FA: movzx eax, byte ptr [eax + edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121620FE: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM8(esi + 0x2) = (uint8_t)(LO8(eax)); /* 0x12162100: mov byte ptr [esi + 2], al */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x12162103: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x12162106: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edx + edi); /* 0x1216210C: movzx eax, byte ptr [edx + edi] */
    MEM8(esi + 0x5) = (uint8_t)(LO8(eax)); /* 0x12162110: mov byte ptr [esi + 5], al */
    eax = MEM32(ebp + (-0x114)); /* 0x12162113: mov eax, dword ptr [ebp - 0x114] */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x12162119: movsx edx, ax */
    ecx = (int32_t)(int16_t)LO16(ebx); /* 0x1216211C: movsx ecx, bx */
    eax = ecx + edx; /* 0x1216211F: lea eax, [ecx + edx] */
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x12162122: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12162125: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + edi); /* 0x1216212A: movzx eax, byte ptr [eax + edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1216212E: sub edx, ecx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x12162130: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    MEM8(esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x12162133: mov byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x12162136: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edx + edi); /* 0x1216213C: movzx eax, byte ptr [edx + edi] */
    MEM8(esi + 0x3) = (uint8_t)(LO8(eax)); /* 0x12162140: mov byte ptr [esi + 3], al */
    esi = MEM32(ebp + (-0x110)); /* 0x12162143: mov esi, dword ptr [ebp - 0x110] */
L_12162149:
    eax = MEM32(ebp + (-0x128)); /* 0x12162149: mov eax, dword ptr [ebp - 0x128] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1216214F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x12162150: add esi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x110)) = esi; /* 0x12162153: mov dword ptr [ebp - 0x110], esi */
    MEM32(ebp + (-0x128)) = eax; /* 0x12162159: mov dword ptr [ebp - 0x128], eax */
    /* cmp eax, 8 */ /* 0x1216215F: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12161ED0; /* 0x12162162: jl 0x12161ed0 */
L_12162168:
    ecx = MEM32(ebp + (-0x4)); /* 0x12162168: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1216216B: pop edi */
    esi = POP32_VAL(esp); /* 0x1216216C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1216216D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1216216F: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12162170: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12162175: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12162177: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12162178: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12162180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12162180u);

L_12162180:
    edi = edi; /* 0x12162180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12162182: push ebp */
    ebp = esp; /* 0x12162183: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x13Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x13Cu; /* 0x12162185: sub esp, 0x13c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1216218B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12162190: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12162192: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x12162195: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x138)) = eax; /* 0x12162198: mov dword ptr [ebp - 0x138], eax */
    eax = MEM32(ebp + 0x18); /* 0x1216219E: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x13C)) = eax; /* 0x121621A1: mov dword ptr [ebp - 0x13c], eax */
    eax = MEM32(ebp + 0x8); /* 0x121621A7: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x121621AA: mov eax, dword ptr [eax + 0x148] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x121621B0: sub eax, -0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121621B3: push ebx */
    MEM32(ebp + (-0x130)) = eax; /* 0x121621B4: mov dword ptr [ebp - 0x130], eax */
    eax = MEM32(ebp + 0xC); /* 0x121621BA: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(eax + 0x50); /* 0x121621BD: mov edx, dword ptr [eax + 0x50] */
    PUSH32(esp, esi); /* 0x121621C0: push esi */
    ebx = ebp + (-0x104); /* 0x121621C1: lea ebx, [ebp - 0x104] */
    PUSH32(esp, edi); /* 0x121621C7: push edi */
    edi = MEM32(ebp + 0x10); /* 0x121621C8: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x120)) = edx; /* 0x121621CB: mov dword ptr [ebp - 0x120], edx */
    MEM32(ebp + (-0x10C)) = ebx; /* 0x121621D1: mov dword ptr [ebp - 0x10c], ebx */
    MEM32(ebp + (-0x11C)) = 8; /* 0x121621D7: mov dword ptr [ebp - 0x11c], 8 */
L_121621E1:
    eax = (uint32_t)MEM16(edi + 0x10); /* 0x121621E1: movzx eax, word ptr [edi + 0x10] */
    MEM32(ebp + (-0x118)) = eax; /* 0x121621E5: mov dword ptr [ebp - 0x118], eax */
    /* test LO16(eax), LO16(eax) */ /* 0x121621EB: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12162249; /* 0x121621EE: jne 0x12162249 */
L_121621F0:
    /* cmp MEM16(edi + 0x20), LO16(eax) */ /* 0x121621F0: cmp word ptr [edi + 0x20], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x20)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12162249; /* 0x121621F4: jne 0x12162249 */
L_121621F6:
    /* cmp MEM16(edi + 0x30), LO16(eax) */ /* 0x121621F6: cmp word ptr [edi + 0x30], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x30)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12162249; /* 0x121621FA: jne 0x12162249 */
L_121621FC:
    /* cmp MEM16(edi + 0x40), LO16(eax) */ /* 0x121621FC: cmp word ptr [edi + 0x40], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x40)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12162249; /* 0x12162200: jne 0x12162249 */
L_12162202:
    /* cmp MEM16(edi + 0x50), LO16(eax) */ /* 0x12162202: cmp word ptr [edi + 0x50], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x50)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12162249; /* 0x12162206: jne 0x12162249 */
L_12162208:
    /* cmp MEM16(edi + 0x60), LO16(eax) */ /* 0x12162208: cmp word ptr [edi + 0x60], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x60)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12162249; /* 0x1216220C: jne 0x12162249 */
L_1216220E:
    /* cmp MEM16(edi + 0x70), LO16(eax) */ /* 0x1216220E: cmp word ptr [edi + 0x70], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x70)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12162249; /* 0x12162212: jne 0x12162249 */
L_12162214:
    ecx = (int32_t)(int16_t)MEM16(edx); /* 0x12162214: movsx ecx, word ptr [edx] */
    eax = (int32_t)(int16_t)MEM16(edi); /* 0x12162217: movsx eax, word ptr [edi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1216221A: imul ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1216221D: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1216221F: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx) = ecx; /* 0x12162221: mov dword ptr [ebx], ecx */
    MEM32(ebx + 0x20) = ecx; /* 0x12162223: mov dword ptr [ebx + 0x20], ecx */
    MEM32(ebx + 0x40) = ecx; /* 0x12162226: mov dword ptr [ebx + 0x40], ecx */
    MEM32(ebx + 0x60) = ecx; /* 0x12162229: mov dword ptr [ebx + 0x60], ecx */
    MEM32(ebx + 0x80) = ecx; /* 0x1216222C: mov dword ptr [ebx + 0x80], ecx */
    MEM32(ebx + 0xA0) = ecx; /* 0x12162232: mov dword ptr [ebx + 0xa0], ecx */
    MEM32(ebx + 0xC0) = ecx; /* 0x12162238: mov dword ptr [ebx + 0xc0], ecx */
    MEM32(ebx + 0xE0) = ecx; /* 0x1216223E: mov dword ptr [ebx + 0xe0], ecx */
    goto L_12162449; /* 0x12162244: jmp 0x12162449 */
L_12162249:
    eax = (int32_t)(int16_t)MEM16(edi + 0x20); /* 0x12162249: movsx eax, word ptr [edi + 0x20] */
    esi = (int32_t)(int16_t)MEM16(edx + 0x20); /* 0x1216224D: movsx esi, word ptr [edx + 0x20] */
    ecx = (int32_t)(int16_t)MEM16(edx + 0x60); /* 0x12162251: movsx ecx, word ptr [edx + 0x60] */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x12162255: imul esi, eax */
    eax = (int32_t)(int16_t)MEM16(edi + 0x60); /* 0x12162258: movsx eax, word ptr [edi + 0x60] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1216225C: imul ecx, eax */
    eax = ecx + esi; /* 0x1216225F: lea eax, [ecx + esi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3B21u); /* 0x12162262: imul ecx, ecx, 0x3b21 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x187Eu); /* 0x12162268: imul esi, esi, 0x187e */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1151u); /* 0x1216226E: imul eax, eax, 0x1151 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x12162274: add esi, eax */
    _flag_k = FK_ADD;
    edx = eax; /* 0x12162276: mov edx, eax */
    eax = (int32_t)(int16_t)MEM16(edi); /* 0x12162278: movsx eax, word ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1216227B: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x120)); /* 0x1216227D: mov ecx, dword ptr [ebp - 0x120] */
    ebx = (int32_t)(int16_t)MEM16(ecx); /* 0x12162283: movsx ebx, word ptr [ecx] */
    ecx = (int32_t)(int16_t)MEM16(ecx + 0x40); /* 0x12162286: movsx ecx, word ptr [ecx + 0x40] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x1216228A: imul ebx, eax */
    eax = (int32_t)(int16_t)MEM16(edi + 0x40); /* 0x1216228D: movsx eax, word ptr [edi + 0x40] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x12162291: imul ecx, eax */
    edi = ecx + ebx; /* 0x12162294: lea edi, [ecx + ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x12162297: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x12162299: mov ecx, dword ptr [ebp + 0x10] */
    if (13u) _cf = (((edi) >> 19) & 1u); /* 0x1216229C: shl edi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edi << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 13u; /* 0x1216229C: shl edi, 0xd */
    eax = edi + esi; /* 0x1216229F: lea eax, [edi + esi] */
    MEM32(ebp + (-0x134)) = eax; /* 0x121622A2: mov dword ptr [ebp - 0x134], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x121622A8: sub edi, esi */
    _flag_k = FK_CMP;
    if (13u) _cf = (((ebx) >> 19) & 1u); /* 0x121622AA: shl ebx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ebx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 13u; /* 0x121622AA: shl ebx, 0xd */
    eax = ebx + edx; /* 0x121622AD: lea eax, [ebx + edx] */
    MEM32(ebp + (-0x12C)) = eax; /* 0x121622B0: mov dword ptr [ebp - 0x12c], eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x70); /* 0x121622B6: movsx eax, word ptr [ecx + 0x70] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x121622BA: sub ebx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x128)) = edi; /* 0x121622BC: mov dword ptr [ebp - 0x128], edi */
    edi = MEM32(ebp + (-0x120)); /* 0x121622C2: mov edi, dword ptr [ebp - 0x120] */
    esi = (int32_t)(int16_t)MEM16(edi + 0x50); /* 0x121622C8: movsx esi, word ptr [edi + 0x50] */
    edx = (int32_t)(int16_t)MEM16(edi + 0x30); /* 0x121622CC: movsx edx, word ptr [edi + 0x30] */
    MEM32(ebp + (-0x124)) = ebx; /* 0x121622D0: mov dword ptr [ebp - 0x124], ebx */
    ebx = (int32_t)(int16_t)MEM16(edi + 0x70); /* 0x121622D6: movsx ebx, word ptr [edi + 0x70] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x121622DA: imul ebx, eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x50); /* 0x121622DD: movsx eax, word ptr [ecx + 0x50] */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x121622E1: imul esi, eax */
    eax = (int32_t)(int16_t)MEM16(ecx + 0x30); /* 0x121622E4: movsx eax, word ptr [ecx + 0x30] */
    ecx = (int32_t)(int16_t)MEM16(edi + 0x10); /* 0x121622E8: movsx ecx, word ptr [edi + 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x121622EC: imul edx, eax */
    eax = MEM32(ebp + (-0x118)); /* 0x121622EF: mov eax, dword ptr [ebp - 0x118] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x121622F5: cwde  */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x121622F6: imul ecx, eax */
    MEM32(ebp + (-0x108)) = ebx; /* 0x121622F9: mov dword ptr [ebp - 0x108], ebx */
    eax = MEM32(ebp + (-0x108)); /* 0x121622FF: mov eax, dword ptr [ebp - 0x108] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12162305: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x12162307: add ebx, ecx */
    _flag_k = FK_ADD;
    edi = esi + edx; /* 0x12162309: lea edi, [esi + edx] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u); /* 0x1216230C: imul ebx, ebx, 0xffffe333 */
    MEM32(ebp + (-0x110)) = esi; /* 0x12162312: mov dword ptr [ebp - 0x110], esi */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xFFFFADFDu); /* 0x12162318: imul edi, edi, 0xffffadfd */
    MEM32(ebp + (-0x118)) = ecx; /* 0x1216231E: mov dword ptr [ebp - 0x118], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x12162324: add ecx, esi */
    _flag_k = FK_ADD;
    esi = ecx + eax; /* 0x12162326: lea esi, [ecx + eax] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3EC5u); /* 0x12162329: imul eax, eax, 0x3ec5 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC7Cu); /* 0x1216232F: imul ecx, ecx, 0xc7c */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x25A1u); /* 0x12162335: imul esi, esi, 0x25a1 */
    MEM32(ebp + (-0x114)) = edx; /* 0x1216233B: mov dword ptr [ebp - 0x114], edx */
    edx = esi; /* 0x12162341: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x12162343: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x108)); /* 0x12162345: mov eax, dword ptr [ebp - 0x108] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98Eu); /* 0x1216234B: imul eax, eax, 0x98e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12162351: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12162353: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = eax; /* 0x12162355: mov dword ptr [ebp - 0x108], eax */
    eax = MEM32(ebp + (-0x110)); /* 0x1216235B: mov eax, dword ptr [ebp - 0x110] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41B3u); /* 0x12162361: imul eax, eax, 0x41b3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x12162367: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x118)); /* 0x12162369: mov ecx, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1216236F: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x12162371: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x110)) = eax; /* 0x12162373: mov dword ptr [ebp - 0x110], eax */
    eax = MEM32(ebp + (-0x114)); /* 0x12162379: mov eax, dword ptr [ebp - 0x114] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6254u); /* 0x1216237F: imul eax, eax, 0x6254 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12162385: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x12162387: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x114)) = eax; /* 0x12162389: mov dword ptr [ebp - 0x114], eax */
    edx = MEM32(ebp + (-0x134)); /* 0x1216238F: mov edx, dword ptr [ebp - 0x134] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x300Bu); /* 0x12162395: imul ecx, ecx, 0x300b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1216239B: add ecx, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x110)); /* 0x1216239D: mov esi, dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x121623A3: add ecx, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x10C)); /* 0x121623A5: mov ebx, dword ptr [ebp - 0x10c] */
    eax = edx + ecx + 0x400; /* 0x121623AB: lea eax, [edx + ecx + 0x400] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121623B2: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x12C)); /* 0x121623B4: mov ecx, dword ptr [ebp - 0x12c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x400u; /* 0x121623BA: add edx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((edx) >> 10) & 1u); /* 0x121623C0: sar edx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 11u);
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x121623C3: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    MEM32(ebx + 0xE0) = edx; /* 0x121623C6: mov dword ptr [ebx + 0xe0], edx */
    edx = MEM32(ebp + (-0x114)); /* 0x121623CC: mov edx, dword ptr [ebp - 0x114] */
    MEM32(ebx) = eax; /* 0x121623D2: mov dword ptr [ebx], eax */
    eax = ecx + edx + 0x400; /* 0x121623D4: lea eax, [ecx + edx + 0x400] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x121623DB: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x128)); /* 0x121623DD: mov edx, dword ptr [ebp - 0x128] */
    edi = MEM32(ebp + 0x10); /* 0x121623E3: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x400u; /* 0x121623E6: add ecx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x121623EC: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x121623EF: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    MEM32(ebx + 0xC0) = ecx; /* 0x121623F2: mov dword ptr [ebx + 0xc0], ecx */
    ecx = MEM32(ebp + (-0x124)); /* 0x121623F8: mov ecx, dword ptr [ebp - 0x124] */
    MEM32(ebx + 0x20) = eax; /* 0x121623FE: mov dword ptr [ebx + 0x20], eax */
    eax = ecx + esi + 0x400; /* 0x12162401: lea eax, [ecx + esi + 0x400] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12162408: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x400u; /* 0x1216240A: add ecx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x12162410: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x12162413: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    MEM32(ebx + 0xA0) = ecx; /* 0x12162416: mov dword ptr [ebx + 0xa0], ecx */
    ecx = MEM32(ebp + (-0x108)); /* 0x1216241C: mov ecx, dword ptr [ebp - 0x108] */
    MEM32(ebx + 0x40) = eax; /* 0x12162422: mov dword ptr [ebx + 0x40], eax */
    eax = edx + ecx + 0x400; /* 0x12162425: lea eax, [edx + ecx + 0x400] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1216242C: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x400u; /* 0x1216242E: add edx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x12162434: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    if (11u) _cf = (((edx) >> 10) & 1u); /* 0x12162437: sar edx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 11u);
    MEM32(ebx + 0x80) = edx; /* 0x1216243A: mov dword ptr [ebx + 0x80], edx */
    edx = MEM32(ebp + (-0x120)); /* 0x12162440: mov edx, dword ptr [ebp - 0x120] */
    MEM32(ebx + 0x60) = eax; /* 0x12162446: mov dword ptr [ebx + 0x60], eax */
L_12162449:
    eax = MEM32(ebp + (-0x11C)); /* 0x12162449: mov eax, dword ptr [ebp - 0x11c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1216244F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x12162450: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x12162453: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12162456: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10C)) = ebx; /* 0x12162459: mov dword ptr [ebp - 0x10c], ebx */
    MEM32(ebp + (-0x120)) = edx; /* 0x1216245F: mov dword ptr [ebp - 0x120], edx */
    MEM32(ebp + 0x10) = edi; /* 0x12162465: mov dword ptr [ebp + 0x10], edi */
    MEM32(ebp + (-0x11C)) = eax; /* 0x12162468: mov dword ptr [ebp - 0x11c], eax */
    /* test eax, eax */ /* 0x1216246E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121621E1; /* 0x12162470: jg 0x121621e1 */
L_12162476:
    edx = MEM32(ebp + (-0x130)); /* 0x12162476: mov edx, dword ptr [ebp - 0x130] */
    ebx = ebp + (-0x104); /* 0x1216247C: lea ebx, [ebp - 0x104] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12162482: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x108)) = ebx; /* 0x12162484: mov dword ptr [ebp - 0x108], ebx */
    MEM32(ebp + (-0x114)) = eax; /* 0x1216248A: mov dword ptr [ebp - 0x114], eax */
L_12162490:
    ecx = MEM32(ebp + (-0x138)); /* 0x12162490: mov ecx, dword ptr [ebp - 0x138] */
    ecx = MEM32(ecx + eax * 4); /* 0x12162496: mov ecx, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x13C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x13C)); /* 0x12162499: add ecx, dword ptr [ebp - 0x13c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x4); /* 0x1216249F: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x124)) = ecx; /* 0x121624A2: mov dword ptr [ebp - 0x124], ecx */
    MEM32(ebp + (-0x11C)) = eax; /* 0x121624A8: mov dword ptr [ebp - 0x11c], eax */
    /* test eax, eax */ /* 0x121624AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121624FC; /* 0x121624B0: jne 0x121624fc */
L_121624B2:
    /* cmp MEM32(ebx + 0x8), eax */ /* 0x121624B2: cmp dword ptr [ebx + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121624FC; /* 0x121624B5: jne 0x121624fc */
L_121624B7:
    /* cmp MEM32(ebx + 0xC), eax */ /* 0x121624B7: cmp dword ptr [ebx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121624FC; /* 0x121624BA: jne 0x121624fc */
L_121624BC:
    /* cmp MEM32(ebx + 0x10), eax */ /* 0x121624BC: cmp dword ptr [ebx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121624FC; /* 0x121624BF: jne 0x121624fc */
L_121624C1:
    /* cmp MEM32(ebx + 0x14), eax */ /* 0x121624C1: cmp dword ptr [ebx + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121624FC; /* 0x121624C4: jne 0x121624fc */
L_121624C6:
    /* cmp MEM32(ebx + 0x18), eax */ /* 0x121624C6: cmp dword ptr [ebx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121624FC; /* 0x121624C9: jne 0x121624fc */
L_121624CB:
    /* cmp MEM32(ebx + 0x1C), eax */ /* 0x121624CB: cmp dword ptr [ebx + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121624FC; /* 0x121624CE: jne 0x121624fc */
L_121624D0:
    eax = MEM32(ebx); /* 0x121624D0: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x121624D2: add eax, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x121624D5: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121624D8: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + edx)); /* 0x121624DD: mov al, byte ptr [eax + edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121624E0: mov byte ptr [ecx], al */
    MEM8(ecx + 0x1) = (uint8_t)(LO8(eax)); /* 0x121624E2: mov byte ptr [ecx + 1], al */
    MEM8(ecx + 0x2) = (uint8_t)(LO8(eax)); /* 0x121624E5: mov byte ptr [ecx + 2], al */
    MEM8(ecx + 0x3) = (uint8_t)(LO8(eax)); /* 0x121624E8: mov byte ptr [ecx + 3], al */
    MEM8(ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x121624EB: mov byte ptr [ecx + 4], al */
    MEM8(ecx + 0x5) = (uint8_t)(LO8(eax)); /* 0x121624EE: mov byte ptr [ecx + 5], al */
    MEM8(ecx + 0x6) = (uint8_t)(LO8(eax)); /* 0x121624F1: mov byte ptr [ecx + 6], al */
    MEM8(ecx + 0x7) = (uint8_t)(LO8(eax)); /* 0x121624F4: mov byte ptr [ecx + 7], al */
    goto L_121626DD; /* 0x121624F7: jmp 0x121626dd */
L_121624FC:
    esi = MEM32(ebx + 0x8); /* 0x121624FC: mov esi, dword ptr [ebx + 8] */
    eax = MEM32(ebx + 0x18); /* 0x121624FF: mov eax, dword ptr [ebx + 0x18] */
    ecx = eax + esi; /* 0x12162502: lea ecx, [eax + esi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3B21u); /* 0x12162505: imul eax, eax, 0x3b21 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x187Eu); /* 0x1216250B: imul esi, esi, 0x187e */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1151u); /* 0x12162511: imul ecx, ecx, 0x1151 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x12162517: add esi, ecx */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x12162519: mov edx, ecx */
    ecx = MEM32(ebx); /* 0x1216251B: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1216251D: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x10); /* 0x1216251F: mov eax, dword ptr [ebx + 0x10] */
    edi = ecx + eax; /* 0x12162522: lea edi, [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12162525: sub ecx, eax */
    _flag_k = FK_CMP;
    if (13u) _cf = (((edi) >> 19) & 1u); /* 0x12162527: shl edi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edi << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 13u; /* 0x12162527: shl edi, 0xd */
    eax = edi + esi; /* 0x1216252A: lea eax, [edi + esi] */
    MEM32(ebp + (-0x128)) = eax; /* 0x1216252D: mov dword ptr [ebp - 0x128], eax */
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x12162533: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x12162533: shl ecx, 0xd */
    eax = ecx + edx; /* 0x12162536: lea eax, [ecx + edx] */
    MEM32(ebp + (-0x12C)) = eax; /* 0x12162539: mov dword ptr [ebp - 0x12c], eax */
    eax = MEM32(ebx + 0xC); /* 0x1216253F: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12162542: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0x1C); /* 0x12162544: mov edx, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x12162547: sub edi, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x11C)); /* 0x12162549: mov esi, dword ptr [ebp - 0x11c] */
    MEM32(ebp + (-0x134)) = ecx; /* 0x1216254F: mov dword ptr [ebp - 0x134], ecx */
    ecx = MEM32(ebx + 0x14); /* 0x12162555: mov ecx, dword ptr [ebx + 0x14] */
    ebx = edx + esi; /* 0x12162558: lea ebx, [edx + esi] */
    MEM32(ebp + (-0x10C)) = ecx; /* 0x1216255B: mov dword ptr [ebp - 0x10c], ecx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u); /* 0x12162561: imul ebx, ebx, 0xffffe333 */
    MEM32(ebp + (-0x118)) = edi; /* 0x12162567: mov dword ptr [ebp - 0x118], edi */
    edi = ecx + eax; /* 0x1216256D: lea edi, [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12162570: add eax, edx */
    _flag_k = FK_ADD;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xFFFFADFDu); /* 0x12162572: imul edi, edi, 0xffffadfd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x12162578: add ecx, esi */
    _flag_k = FK_ADD;
    esi = ecx + eax; /* 0x1216257A: lea esi, [ecx + eax] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3EC5u); /* 0x1216257D: imul eax, eax, 0x3ec5 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC7Cu); /* 0x12162583: imul ecx, ecx, 0xc7c */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x25A1u); /* 0x12162589: imul esi, esi, 0x25a1 */
    MEM32(ebp + (-0x110)) = edx; /* 0x1216258F: mov dword ptr [ebp - 0x110], edx */
    edx = esi; /* 0x12162595: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x12162597: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x110)); /* 0x12162599: mov eax, dword ptr [ebp - 0x110] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98Eu); /* 0x1216259F: imul eax, eax, 0x98e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x121625A5: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x121625A7: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x110)) = eax; /* 0x121625A9: mov dword ptr [ebp - 0x110], eax */
    eax = MEM32(ebp + (-0x10C)); /* 0x121625AF: mov eax, dword ptr [ebp - 0x10c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41B3u); /* 0x121625B5: imul eax, eax, 0x41b3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x121625BB: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x121625BD: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x121625BF: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10C)) = eax; /* 0x121625C1: mov dword ptr [ebp - 0x10c], eax */
    eax = MEM32(ebp + (-0x108)); /* 0x121625C7: mov eax, dword ptr [ebp - 0x108] */
    ecx = MEM32(eax + 0xC); /* 0x121625CD: mov ecx, dword ptr [eax + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6254u); /* 0x121625D0: imul ecx, ecx, 0x6254 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x121625D6: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x128)); /* 0x121625D8: mov edx, dword ptr [ebp - 0x128] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x121625DE: add ecx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x11C)); /* 0x121625E0: mov edi, dword ptr [ebp - 0x11c] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x300Bu); /* 0x121625E6: imul edi, edi, 0x300b */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x121625EC: add edi, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + (-0x124)); /* 0x121625EE: mov esi, dword ptr [ebp - 0x124] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x121625F4: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x130)); /* 0x121625F6: mov ebx, dword ptr [ebp - 0x130] */
    eax = edx + edi + 0x20000; /* 0x121625FC: lea eax, [edx + edi + 0x20000] */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x12162603: sar eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 18u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12162606: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x1216260B: movzx eax, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1216260F: sub edx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x00020000u; /* 0x12162611: add edx, 0x20000 */
    _flag_k = FK_ADD;
    if (18u) _cf = (((edx) >> 17) & 1u); /* 0x12162617: sar edx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 18u);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1216261A: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x1216261C: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edx + ebx); /* 0x12162622: movzx eax, byte ptr [edx + ebx] */
    edx = MEM32(ebp + (-0x12C)); /* 0x12162626: mov edx, dword ptr [ebp - 0x12c] */
    MEM8(esi + 0x7) = (uint8_t)(LO8(eax)); /* 0x1216262C: mov byte ptr [esi + 7], al */
    eax = edx + ecx + 0x20000; /* 0x1216262F: lea eax, [edx + ecx + 0x20000] */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x12162636: sar eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 18u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x12162639: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x1216263E: movzx eax, byte ptr [eax + ebx] */
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x12162642: mov byte ptr [esi + 1], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12162645: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10C)); /* 0x12162647: mov ecx, dword ptr [ebp - 0x10c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x00020000u; /* 0x1216264D: add edx, 0x20000 */
    _flag_k = FK_ADD;
    if (18u) _cf = (((edx) >> 17) & 1u); /* 0x12162653: sar edx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 18u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x12162656: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edx + ebx); /* 0x1216265C: movzx eax, byte ptr [edx + ebx] */
    edx = MEM32(ebp + (-0x134)); /* 0x12162660: mov edx, dword ptr [ebp - 0x134] */
    MEM8(esi + 0x6) = (uint8_t)(LO8(eax)); /* 0x12162666: mov byte ptr [esi + 6], al */
    eax = edx + ecx + 0x20000; /* 0x12162669: lea eax, [edx + ecx + 0x20000] */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x12162670: sar eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 18u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12162673: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x118)); /* 0x12162675: mov ecx, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x1216267B: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x12162680: movzx eax, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x00020000u; /* 0x12162684: add edx, 0x20000 */
    _flag_k = FK_ADD;
    if (18u) _cf = (((edx) >> 17) & 1u); /* 0x1216268A: sar edx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 18u);
    MEM8(esi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1216268D: mov byte ptr [esi + 2], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x12162690: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edx + ebx); /* 0x12162696: movzx eax, byte ptr [edx + ebx] */
    edx = MEM32(ebp + (-0x110)); /* 0x1216269A: mov edx, dword ptr [ebp - 0x110] */
    MEM8(esi + 0x5) = (uint8_t)(LO8(eax)); /* 0x121626A0: mov byte ptr [esi + 5], al */
    eax = ecx + edx + 0x20000; /* 0x121626A3: lea eax, [ecx + edx + 0x20000] */
    if (18u) _cf = (((eax) >> 17) & 1u); /* 0x121626AA: sar eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 18u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x121626AD: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x130)); /* 0x121626AF: mov edx, dword ptr [ebp - 0x130] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121626B5: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + ebx); /* 0x121626BA: movzx eax, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x00020000u; /* 0x121626BE: add ecx, 0x20000 */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x121626C4: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFu);
    ecx = ecx & 0x3FFu; /* 0x121626C7: and ecx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x3) = (uint8_t)(LO8(eax)); /* 0x121626CD: mov byte ptr [esi + 3], al */
    eax = (uint32_t)MEM8(ecx + ebx); /* 0x121626D0: movzx eax, byte ptr [ecx + ebx] */
    ebx = MEM32(ebp + (-0x108)); /* 0x121626D4: mov ebx, dword ptr [ebp - 0x108] */
    MEM8(esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x121626DA: mov byte ptr [esi + 4], al */
L_121626DD:
    eax = MEM32(ebp + (-0x114)); /* 0x121626DD: mov eax, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121626E3: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x20u; /* 0x121626E4: add ebx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = ebx; /* 0x121626E7: mov dword ptr [ebp - 0x108], ebx */
    MEM32(ebp + (-0x114)) = eax; /* 0x121626ED: mov dword ptr [ebp - 0x114], eax */
    /* cmp eax, 8 */ /* 0x121626F3: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12162490; /* 0x121626F6: jl 0x12162490 */
L_121626FC:
    ecx = MEM32(ebp + (-0x4)); /* 0x121626FC: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121626FF: pop edi */
    esi = POP32_VAL(esp); /* 0x12162700: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12162701: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12162703: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12162704: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12162709: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1216270B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216270C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12162720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12162720u);

L_12162720:
    edi = edi; /* 0x12162720: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12162722: push ebp */
    ebp = esp; /* 0x12162723: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x12162725: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12162728: push ebx */
    PUSH32(esp, esi); /* 0x12162729: push esi */
    PUSH32(esp, edi); /* 0x1216272A: push edi */
    esi = MEM32(ebp + 0x8); /* 0x1216272B: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x1216272E: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x12162731: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0xC)) = esi; /* 0x12162734: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x2C)) = edi; /* 0x12162737: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x28)) = eax; /* 0x1216273A: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x14)) = 8; /* 0x1216273D: mov dword ptr [ebp - 0x14], 8 */
    eax = MEM32(esi); /* 0x12162744: mov eax, dword ptr [esi] */
    ebx = MEM32(esi + 0x20); /* 0x12162746: mov ebx, dword ptr [esi + 0x20] */
    ecx = MEM32(esi + 0x40); /* 0x12162749: mov ecx, dword ptr [esi + 0x40] */
    edx = MEM32(esi + 0x60); /* 0x1216274C: mov edx, dword ptr [esi + 0x60] */
    eax = MEM32(edi); /* 0x1216274F: mov eax, dword ptr [edi] */
    ebx = MEM32(edi + 0x20); /* 0x12162751: mov ebx, dword ptr [edi + 0x20] */
    ecx = MEM32(edi + 0x40); /* 0x12162754: mov ecx, dword ptr [edi + 0x40] */
    edx = MEM32(edi + 0x60); /* 0x12162757: mov edx, dword ptr [edi + 0x60] */
L_1216275A:
    esi = MEM32(ebp + (-0xC)); /* 0x1216275A: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x2C)); /* 0x1216275D: mov edi, dword ptr [ebp - 0x2c] */
    SET_LO16(eax, MEM16(esi + 0x20)); /* 0x12162760: mov ax, word ptr [esi + 0x20] */
    SET_LO16(ebx, MEM16(edi + 0x20)); /* 0x12162764: mov bx, word ptr [edi + 0x20] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x12162768: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x12162768: shl eax, 0x10 */
    SET_LO16(ecx, MEM16(esi + 0x60)); /* 0x1216276B: mov cx, word ptr [esi + 0x60] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1216276F: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    SET_LO16(edx, MEM16(edi + 0x60)); /* 0x12162772: mov dx, word ptr [edi + 0x60] */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x12162776: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x12162776: shl ebx, 0x10 */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x12162779: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1216277C: imul eax, ebx */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1216277F: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1216277F: shl ecx, 0x10 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x12162782: sar ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 16u);
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x12162785: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x12162785: shl edx, 0x10 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x12162788: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x1216278B: imul ecx, edx */
    ebx = eax; /* 0x1216278E: mov ebx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x1201335C)); /* 0x12162790: imul eax, dword ptr [0x1201335c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x12162797: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x1201336C)); /* 0x12162799: imul ecx, dword ptr [0x1201336c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x12013358)); /* 0x121627A0: imul ebx, dword ptr [0x12013358] */
    SET_LO16(edx, MEM16(edi + 0x40)); /* 0x121627A7: mov dx, word ptr [edi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x121627AB: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x121627AD: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = ecx; /* 0x121627AF: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x121627B2: mov dword ptr [ebp - 0x38], eax */
    SET_LO16(ecx, MEM16(esi + 0x40)); /* 0x121627B5: mov cx, word ptr [esi + 0x40] */
    SET_LO16(eax, MEM16(esi)); /* 0x121627B9: mov ax, word ptr [esi] */
    SET_LO16(ebx, MEM16(edi)); /* 0x121627BC: mov bx, word ptr [edi] */
    edx = (int32_t)(int16_t)LO16(edx); /* 0x121627BF: movsx edx, dx */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x121627C2: movsx ecx, cx */
    eax = (int32_t)(int16_t)LO16(eax); /* 0x121627C5: movsx eax, ax */
    ebx = (int32_t)(int16_t)LO16(ebx); /* 0x121627C8: movsx ebx, bx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x121627CB: imul ecx, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x121627CE: imul eax, ebx */
    edx = ecx; /* 0x121627D1: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x121627D3: add ecx, eax */
    _flag_k = FK_ADD;
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x121627D5: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x121627D5: shl ecx, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x121627D8: sub eax, edx */
    _flag_k = FK_CMP;
    if (13u) _cf = (((eax) >> 19) & 1u); /* 0x121627DA: shl eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 13u; /* 0x121627DA: shl eax, 0xd */
    ebx = ecx; /* 0x121627DD: mov ebx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x38)); /* 0x121627DF: add ecx, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    edx = eax; /* 0x121627E2: mov edx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x40)); /* 0x121627E4: add eax, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = ecx; /* 0x121627E7: mov dword ptr [ebp - 0x24], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x38)); /* 0x121627EA: sub ebx, dword ptr [ebp - 0x38] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x121627ED: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x40)); /* 0x121627F0: sub edx, dword ptr [ebp - 0x40] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = ebx; /* 0x121627F3: mov dword ptr [ebp - 0x3c], ebx */
    SET_LO16(eax, MEM16(esi + 0x70)); /* 0x121627F6: mov ax, word ptr [esi + 0x70] */
    MEM32(ebp + (-0x18)) = edx; /* 0x121627FA: mov dword ptr [ebp - 0x18], edx */
    SET_LO16(ebx, MEM16(edi + 0x70)); /* 0x121627FD: mov bx, word ptr [edi + 0x70] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x12162801: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x12162801: shl eax, 0x10 */
    SET_LO16(ecx, MEM16(esi + 0x30)); /* 0x12162804: mov cx, word ptr [esi + 0x30] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x12162808: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    SET_LO16(edx, MEM16(edi + 0x30)); /* 0x1216280B: mov dx, word ptr [edi + 0x30] */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x1216280F: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x1216280F: shl ebx, 0x10 */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x12162812: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x12162815: imul eax, ebx */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x12162818: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x12162818: shl ecx, 0x10 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x1216281B: sar ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 16u);
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x1216281E: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x1216281E: shl edx, 0x10 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x12162821: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    SET_LO16(ebx, MEM16(esi + 0x10)); /* 0x12162824: mov bx, word ptr [esi + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x12162828: imul ecx, edx */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x1216282B: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x1216282B: shl ebx, 0x10 */
    SET_LO16(edx, MEM16(edi + 0x10)); /* 0x1216282E: mov dx, word ptr [edi + 0x10] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x12162832: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x12162835: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x12162835: shl edx, 0x10 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x12162838: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x1216283B: imul ebx, edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1216283E: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x40)) = ecx; /* 0x12162841: mov dword ptr [ebp - 0x40], ecx */
    SET_LO16(eax, MEM16(esi + 0x50)); /* 0x12162844: mov ax, word ptr [esi + 0x50] */
    SET_LO16(edx, MEM16(edi + 0x50)); /* 0x12162848: mov dx, word ptr [edi + 0x50] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x1216284C: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x1216284C: shl eax, 0x10 */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1216284F: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x12162852: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x12162852: shl edx, 0x10 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x12162855: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x12162858: imul eax, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x1201337C)); /* 0x1216285B: imul ecx, dword ptr [0x1201337c] */
    MEM32(ebp + (-0x38)) = ebx; /* 0x12162862: mov dword ptr [ebp - 0x38], ebx */
    edx = MEM32(ebp + (-0x1C)); /* 0x12162865: mov edx, dword ptr [ebp - 0x1c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x12013368)); /* 0x12162868: imul ebx, dword ptr [0x12013368] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x12013350)); /* 0x1216286F: imul edx, dword ptr [0x12013350] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12162876: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x34)) = edx; /* 0x12162879: mov dword ptr [ebp - 0x34], edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x12013374)); /* 0x1216287C: imul eax, dword ptr [0x12013374] */
    MEM32(ebp + (-0x44)) = eax; /* 0x12162883: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x30)) = ecx; /* 0x12162886: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x12162889: mov dword ptr [ebp - 0x10], ebx */
    eax = MEM32(ebp + (-0x1C)); /* 0x1216288C: mov eax, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x8)); /* 0x1216288F: mov ebx, dword ptr [ebp - 8] */
    ecx = eax; /* 0x12162892: mov ecx, eax */
    edx = ebx; /* 0x12162894: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x38)); /* 0x12162896: add eax, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x38)); /* 0x12162899: add ebx, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x40)); /* 0x1216289C: add ecx, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x40)); /* 0x1216289F: add edx, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x121628A2: mov esi, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x12013360)); /* 0x121628A4: imul eax, dword ptr [0x12013360] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x12013378)); /* 0x121628AB: imul edx, dword ptr [0x12013378] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x121628B2: add esi, ebx */
    _flag_k = FK_ADD;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(0x12013364)); /* 0x121628B4: imul esi, dword ptr [0x12013364] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x12013370)); /* 0x121628BB: imul ecx, dword ptr [0x12013370] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x12013354)); /* 0x121628C2: imul ebx, dword ptr [0x12013354] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x121628C9: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x121628CB: add ebx, esi */
    _flag_k = FK_ADD;
    esi = eax; /* 0x121628CD: mov esi, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x121628CF: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x121628D1: add esi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x121628D3: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x121628D5: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x34)); /* 0x121628D7: add eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x44)); /* 0x121628DA: add edx, dword ptr [ebp - 0x44] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x30)); /* 0x121628DD: add ecx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x121628E0: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x3C)); /* 0x121628E3: mov ebx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x121628E6: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x3C)); /* 0x121628E8: add eax, dword ptr [ebp - 0x3c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013380));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x12013380); /* 0x121628EB: add ebx, dword ptr [0x12013380] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x28)); /* 0x121628F1: mov edi, dword ptr [ebp - 0x28] */
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x121628F4: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x12013380));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x12013380); /* 0x121628F7: add eax, dword ptr [0x12013380] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x121628FD: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    MEM32(edi + 0x80) = ebx; /* 0x12162900: mov dword ptr [edi + 0x80], ebx */
    MEM32(edi + 0x60) = eax; /* 0x12162906: mov dword ptr [edi + 0x60], eax */
    ebx = MEM32(ebp + (-0x18)); /* 0x12162909: mov ebx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x4)); /* 0x1216290C: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x1216290F: sub ebx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x18)); /* 0x12162911: add edx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12162914: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x12162916: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013380));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x12013380); /* 0x12162919: add ebx, dword ptr [0x12013380] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x1216291F: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x12013380));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x12013380); /* 0x12162922: add eax, dword ptr [0x12013380] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x12162928: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x12013380));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(0x12013380); /* 0x1216292B: add edx, dword ptr [0x12013380] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013380));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x12013380); /* 0x12162931: add ecx, dword ptr [0x12013380] */
    _flag_k = FK_ADD;
    MEM32(edi + 0xA0) = ebx; /* 0x12162937: mov dword ptr [edi + 0xa0], ebx */
    if (11u) _cf = (((edx) >> 10) & 1u); /* 0x1216293D: sar edx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 11u);
    MEM32(edi + 0xC0) = eax; /* 0x12162940: mov dword ptr [edi + 0xc0], eax */
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x12162946: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM32(edi + 0x40) = edx; /* 0x12162949: mov dword ptr [edi + 0x40], edx */
    eax = MEM32(ebp + (-0x24)); /* 0x1216294C: mov eax, dword ptr [ebp - 0x24] */
    MEM32(edi + 0x20) = ecx; /* 0x1216294F: mov dword ptr [edi + 0x20], ecx */
    ebx = eax; /* 0x12162952: mov ebx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x12162954: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x12162956: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x12013380));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x12013380); /* 0x12162958: add eax, dword ptr [0x12013380] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x1216295E: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013380));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x12013380); /* 0x12162961: add ebx, dword ptr [0x12013380] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x12162967: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    MEM32(edi + 0xE0) = eax; /* 0x1216296A: mov dword ptr [edi + 0xe0], eax */
    MEM32(edi) = ebx; /* 0x12162970: mov dword ptr [edi], ebx */
    eax = MEM32(ebp + (-0x14)); /* 0x12162972: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 2; /* 0x12162975: add dword ptr [ebp - 0xc], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 4; /* 0x12162979: add dword ptr [ebp - 0x28], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 2; /* 0x1216297D: add dword ptr [ebp - 0x2c], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12162981: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = eax; /* 0x12162982: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1216275A; /* 0x12162985: jne 0x1216275a */
L_1216298B:
    esi = MEM32(ebp + 0x10); /* 0x1216298B: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = 8; /* 0x1216298E: mov dword ptr [ebp - 0x14], 8 */
    MEM32(ebp + (-0x20)) = 0; /* 0x12162995: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x28)) = esi; /* 0x1216299C: mov dword ptr [ebp - 0x28], esi */
L_1216299F:
    esi = MEM32(ebp + (-0x28)); /* 0x1216299F: mov esi, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + 0x14); /* 0x121629A2: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x20)); /* 0x121629A5: add edi, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    edi = MEM32(edi); /* 0x121629A8: mov edi, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 4; /* 0x121629AA: add dword ptr [ebp - 0x20], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x18); /* 0x121629AE: add edi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x8); /* 0x121629B1: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(esi + 0x18); /* 0x121629B4: mov ecx, dword ptr [esi + 0x18] */
    ebx = eax; /* 0x121629B7: mov ebx, eax */
    edx = MEM32(edi); /* 0x121629B9: mov edx, dword ptr [edi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x1201335C)); /* 0x121629BB: imul eax, dword ptr [0x1201335c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x121629C2: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x1201336C)); /* 0x121629C4: imul ecx, dword ptr [0x1201336c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x12013358)); /* 0x121629CB: imul ebx, dword ptr [0x12013358] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x121629D2: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x121629D4: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = ecx; /* 0x121629D6: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x121629D9: mov dword ptr [ebp - 0x38], eax */
    ecx = MEM32(esi + 0x10); /* 0x121629DC: mov ecx, dword ptr [esi + 0x10] */
    eax = MEM32(esi); /* 0x121629DF: mov eax, dword ptr [esi] */
    edx = ecx; /* 0x121629E1: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x121629E3: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x121629E5: sub eax, edx */
    _flag_k = FK_CMP;
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x121629E7: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x121629E7: shl ecx, 0xd */
    if (13u) _cf = (((eax) >> 19) & 1u); /* 0x121629EA: shl eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 13u; /* 0x121629EA: shl eax, 0xd */
    ebx = ecx; /* 0x121629ED: mov ebx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x38)); /* 0x121629EF: add ecx, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    edx = eax; /* 0x121629F2: mov edx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x40)); /* 0x121629F4: add eax, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = ecx; /* 0x121629F7: mov dword ptr [ebp - 0x24], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x38)); /* 0x121629FA: sub ebx, dword ptr [ebp - 0x38] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x121629FD: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x40)); /* 0x12162A00: sub edx, dword ptr [ebp - 0x40] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = ebx; /* 0x12162A03: mov dword ptr [ebp - 0x3c], ebx */
    eax = MEM32(esi + 0x1C); /* 0x12162A06: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x18)) = edx; /* 0x12162A09: mov dword ptr [ebp - 0x18], edx */
    ecx = MEM32(esi + 0xC); /* 0x12162A0C: mov ecx, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x4); /* 0x12162A0F: mov ebx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x12162A12: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x40)) = ecx; /* 0x12162A15: mov dword ptr [ebp - 0x40], ecx */
    eax = MEM32(esi + 0x14); /* 0x12162A18: mov eax, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x38)) = ebx; /* 0x12162A1B: mov dword ptr [ebp - 0x38], ebx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x1201337C)); /* 0x12162A1E: imul ecx, dword ptr [0x1201337c] */
    edx = MEM32(ebp + (-0x1C)); /* 0x12162A25: mov edx, dword ptr [ebp - 0x1c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x12013368)); /* 0x12162A28: imul ebx, dword ptr [0x12013368] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x12013350)); /* 0x12162A2F: imul edx, dword ptr [0x12013350] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12162A36: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x12013374)); /* 0x12162A39: imul eax, dword ptr [0x12013374] */
    MEM32(ebp + (-0x34)) = edx; /* 0x12162A40: mov dword ptr [ebp - 0x34], edx */
    MEM32(ebp + (-0x44)) = eax; /* 0x12162A43: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x30)) = ecx; /* 0x12162A46: mov dword ptr [ebp - 0x30], ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x12162A49: mov dword ptr [ebp - 0x10], ebx */
    eax = MEM32(ebp + (-0x1C)); /* 0x12162A4C: mov eax, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x8)); /* 0x12162A4F: mov ebx, dword ptr [ebp - 8] */
    ecx = eax; /* 0x12162A52: mov ecx, eax */
    edx = ebx; /* 0x12162A54: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x38)); /* 0x12162A56: add eax, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x40)); /* 0x12162A59: add edx, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x38)); /* 0x12162A5C: add ebx, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x40)); /* 0x12162A5F: add ecx, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x12162A62: mov esi, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x12013360)); /* 0x12162A64: imul eax, dword ptr [0x12013360] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x12013378)); /* 0x12162A6B: imul edx, dword ptr [0x12013378] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x12162A72: add esi, ebx */
    _flag_k = FK_ADD;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(0x12013364)); /* 0x12162A74: imul esi, dword ptr [0x12013364] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x12013370)); /* 0x12162A7B: imul ecx, dword ptr [0x12013370] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x12013354)); /* 0x12162A82: imul ebx, dword ptr [0x12013354] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x12162A89: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x12162A8B: add ebx, esi */
    _flag_k = FK_ADD;
    esi = eax; /* 0x12162A8D: mov esi, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12162A8F: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x12162A91: add esi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x12162A93: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x12162A95: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x34)); /* 0x12162A97: add eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x44)); /* 0x12162A9A: add edx, dword ptr [ebp - 0x44] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x30)); /* 0x12162A9D: add ecx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x12162AA0: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x12162AA3: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x12162AA6: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x40)) = ecx; /* 0x12162AA9: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x38)) = esi; /* 0x12162AAC: mov dword ptr [ebp - 0x38], esi */
    ebx = MEM32(ebp + (-0x3C)); /* 0x12162AAF: mov ebx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x1C)); /* 0x12162AB2: add ebx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x24)); /* 0x12162AB5: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x38)); /* 0x12162AB8: sub ecx, dword ptr [ebp - 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013384));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x12013384); /* 0x12162ABB: add ebx, dword ptr [0x12013384] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x12162AC1: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013384));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x12013384); /* 0x12162AC4: add ecx, dword ptr [0x12013384] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x12162ACA: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    esi = MEM32(ebp + 0x1C); /* 0x12162ACD: mov esi, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013388));
    ebx = ebx & MEM32(0x12013388); /* 0x12162AD0: and ebx, dword ptr [0x12013388] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013388));
    ecx = ecx & MEM32(0x12013388); /* 0x12162AD6: and ecx, dword ptr [0x12013388] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi + ebx)); /* 0x12162ADC: mov al, byte ptr [esi + ebx] */
    SET_LO8(edx, MEM8(esi + ecx)); /* 0x12162ADF: mov dl, byte ptr [esi + ecx] */
    ebx = MEM32(ebp + (-0x18)); /* 0x12162AE2: mov ebx, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12162AE5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x8)); /* 0x12162AE8: add ebx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x40)); /* 0x12162AEB: sub ecx, dword ptr [ebp - 0x40] */
    _flag_k = FK_CMP;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x12162AEE: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x12162AEE: shl eax, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013384));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x12013384); /* 0x12162AF1: add ebx, dword ptr [0x12013384] */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x12162AF7: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x12162AF7: shl edx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013384));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x12013384); /* 0x12162AFA: add ecx, dword ptr [0x12013384] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x12162B00: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x12162B03: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013388));
    ebx = ebx & MEM32(0x12013388); /* 0x12162B06: and ebx, dword ptr [0x12013388] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013388));
    ecx = ecx & MEM32(0x12013388); /* 0x12162B0C: and ecx, dword ptr [0x12013388] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi + ebx)); /* 0x12162B12: mov al, byte ptr [esi + ebx] */
    SET_LO8(edx, MEM8(esi + ecx)); /* 0x12162B15: mov dl, byte ptr [esi + ecx] */
    ebx = MEM32(ebp + (-0x4)); /* 0x12162B18: mov ebx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x12162B1B: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x40)); /* 0x12162B1E: add ebx, dword ptr [ebp - 0x40] */
    _flag_k = FK_ADD;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x12162B21: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x12162B21: shl eax, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x12162B24: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x12162B27: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x12162B27: shl edx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013384));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x12013384); /* 0x12162B2A: add ebx, dword ptr [0x12013384] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x12162B30: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013384));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x12013384); /* 0x12162B33: add ecx, dword ptr [0x12013384] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x12162B39: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013388));
    ebx = ebx & MEM32(0x12013388); /* 0x12162B3C: and ebx, dword ptr [0x12013388] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013388));
    ecx = ecx & MEM32(0x12013388); /* 0x12162B42: and ecx, dword ptr [0x12013388] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi + ebx)); /* 0x12162B48: mov al, byte ptr [esi + ebx] */
    SET_LO8(edx, MEM8(esi + ecx)); /* 0x12162B4B: mov dl, byte ptr [esi + ecx] */
    ebx = MEM32(ebp + (-0x24)); /* 0x12162B4E: mov ebx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x12162B51: mov ecx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x38)); /* 0x12162B54: add ebx, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x12162B57: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x12162B57: shl eax, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x1C)); /* 0x12162B5A: sub ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x12162B5D: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x12162B5D: shl edx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013384));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x12013384); /* 0x12162B60: add ebx, dword ptr [0x12013384] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x12162B66: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013384));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x12013384); /* 0x12162B69: add ecx, dword ptr [0x12013384] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x12162B6F: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x12013388));
    ebx = ebx & MEM32(0x12013388); /* 0x12162B72: and ebx, dword ptr [0x12013388] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x12013388));
    ecx = ecx & MEM32(0x12013388); /* 0x12162B78: and ecx, dword ptr [0x12013388] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi + ebx)); /* 0x12162B7E: mov al, byte ptr [esi + ebx] */
    SET_LO8(edx, MEM8(esi + ecx)); /* 0x12162B81: mov dl, byte ptr [esi + ecx] */
    MEM32(edi) = eax; /* 0x12162B84: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = edx; /* 0x12162B86: mov dword ptr [edi + 4], edx */
    eax = MEM32(ebp + (-0x14)); /* 0x12162B89: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 0x20u; /* 0x12162B8C: add dword ptr [ebp - 0x28], 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12162B90: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = eax; /* 0x12162B91: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1216299F; /* 0x12162B94: jne 0x1216299f */
L_12162B9A:
    edi = POP32_VAL(esp); /* 0x12162B9A: pop edi */
    esi = POP32_VAL(esp); /* 0x12162B9B: pop esi */
    ebx = POP32_VAL(esp); /* 0x12162B9C: pop ebx */
    esp = ebp; /* 0x12162B9D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12162B9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12162BA0: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12162BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12162BB0u);

L_12162BB0:
    edi = edi; /* 0x12162BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12162BB2: push ebp */
    ebp = esp; /* 0x12162BB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x124u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x124u; /* 0x12162BB5: sub esp, 0x124 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12162BBB: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12162BC0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12162BC2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12162BC5: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x12162BC8: mov eax, dword ptr [eax + 0x148] */
    ecx = MEM32(ebp + 0x14); /* 0x12162BCE: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x12162BD1: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12162BD4: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12162BD5: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x12162BD8: sub eax, -0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x12162BDB: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12162BDC: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x124); /* 0x12162BDF: lea eax, [ebp - 0x124] */
    PUSH32(esp, ecx); /* 0x12162BE5: push ecx */
    PUSH32(esp, eax); /* 0x12162BE6: push eax */
    PUSH32(esp, MEM32(edx + 0x50)); /* 0x12162BE7: push dword ptr [edx + 0x50] */
    PUSH32(esp, esi); /* 0x12162BEA: push esi */
    RECOMP_CALL(sub_12162720); /* 0x12162BEB: call 0x12162720 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12162BF0: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12162BF3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12162BF5: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12162BF6: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12162BFB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12162BFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12162BFE: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12162C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12162C10u);

L_12162C10:
    edi = edi; /* 0x12162C10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12162C12: push ebp */
    ebp = esp; /* 0x12162C13: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xFCu; /* 0x12162C15: sub esp, 0xfc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12162C1B: push ebx */
    PUSH32(esp, esi); /* 0x12162C1C: push esi */
    PUSH32(esp, edi); /* 0x12162C1D: push edi */
    esi = MEM32(ebp + 0x8); /* 0x12162C1E: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x12162C21: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = esi; /* 0x12162C24: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x14)) = edi; /* 0x12162C27: mov dword ptr [ebp - 0x14], edi */
    esi = MEM32(ebp + 0x10); /* 0x12162C2A: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = 2; /* 0x12162C2D: mov dword ptr [ebp - 0x10], 2 */
    MEM32(ebp + (-0xC)) = esi; /* 0x12162C34: mov dword ptr [ebp - 0xc], esi */
L_12162C37:
    esi = MEM32(ebp + (-0x8)); /* 0x12162C37: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x14)); /* 0x12162C3A: mov edi, dword ptr [ebp - 0x14] */
    _mm[0] = MEM64(esi + 0x20); /* 0x12162C3D: movq mm0, qword ptr [esi + 0x20] */
    _mm[1] = MEM64(edi + 0x20); /* 0x12162C41: movq mm1, qword ptr [edi + 0x20] */
    _mm[2] = MEM64(esi + 0x60); /* 0x12162C45: movq mm2, qword ptr [esi + 0x60] */
    _mm[0] = mmx_pmullw(_mm[0], _mm[1]); /* 0x12162C49: pmullw mm0, mm1 */
    _mm[3] = MEM64(edi + 0x60); /* 0x12162C4C: movq mm3, qword ptr [edi + 0x60] */
    _mm[6] = MEM64(0x120133A8); /* 0x12162C50: movq mm6, qword ptr [0x120133a8] */
    _mm[2] = mmx_pmullw(_mm[2], _mm[3]); /* 0x12162C57: pmullw mm2, mm3 */
    _mm[7] = MEM64(0x120133C8); /* 0x12162C5A: movq mm7, qword ptr [0x120133c8] */
    _mm[4] = _mm[0]; /* 0x12162C61: movq mm4, mm0 */
    _mm[4] = mmx_pmaddwd(_mm[4], _mm[6]); /* 0x12162C64: pmaddwd mm4, mm6 */
    _mm[5] = _mm[0]; /* 0x12162C67: movq mm5, mm0 */
    _mm[3] = _mm[2]; /* 0x12162C6A: movq mm3, mm2 */
    _mm[5] = mmx_psrlq(_mm[5], 16); /* 0x12162C6D: psrlq mm5, 0x10 */
    _mm[1] = MEM64(0x120133A0); /* 0x12162C71: movq mm1, qword ptr [0x120133a0] */
    _mm[5] = mmx_pmaddwd(_mm[5], _mm[6]); /* 0x12162C78: pmaddwd mm5, mm6 */
    _mm[3] = mmx_psrlq(_mm[3], 16); /* 0x12162C7B: psrlq mm3, 0x10 */
    _mm[0] = mmx_paddw(_mm[0], _mm[2]); /* 0x12162C7F: paddw mm0, mm2 */
    _mm[2] = mmx_pmaddwd(_mm[2], _mm[7]); /* 0x12162C82: pmaddwd mm2, mm7 */
    _mm[6] = _mm[0]; /* 0x12162C85: movq mm6, mm0 */
    _mm[6] = mmx_psrlq(_mm[6], 16); /* 0x12162C88: psrlq mm6, 0x10 */
    _mm[3] = mmx_pmaddwd(_mm[3], _mm[7]); /* 0x12162C8C: pmaddwd mm3, mm7 */
    _mm[7] = MEM64(0x120133F0); /* 0x12162C8F: movq mm7, qword ptr [0x120133f0] */
    _mm[0] = mmx_pmaddwd(_mm[0], _mm[1]); /* 0x12162C96: pmaddwd mm0, mm1 */
    _mm[6] = mmx_pmaddwd(_mm[6], _mm[1]); /* 0x12162C99: pmaddwd mm6, mm1 */
    _mm[2] = (_mm[2] ^ _mm[7]); /* 0x12162C9C: pxor mm2, mm7 */
    _mm[1] = MEM64(0x120133F8); /* 0x12162C9F: movq mm1, qword ptr [0x120133f8] */
    _mm[3] = (_mm[3] ^ _mm[7]); /* 0x12162CA6: pxor mm3, mm7 */
    _mm[2] = mmx_paddd(_mm[2], _mm[1]); /* 0x12162CA9: paddd mm2, mm1 */
    _mm[3] = mmx_paddd(_mm[3], _mm[1]); /* 0x12162CAC: paddd mm3, mm1 */
    _mm[2] = mmx_paddd(_mm[2], _mm[0]); /* 0x12162CAF: paddd mm2, mm0 */
    _mm[4] = mmx_paddd(_mm[4], _mm[0]); /* 0x12162CB2: paddd mm4, mm0 */
    _mm[0] = MEM64(esi); /* 0x12162CB5: movq mm0, qword ptr [esi] */
    _mm[3] = mmx_paddd(_mm[3], _mm[6]); /* 0x12162CB8: paddd mm3, mm6 */
    _mm[1] = MEM64(edi); /* 0x12162CBB: movq mm1, qword ptr [edi] */
    _mm[5] = mmx_paddd(_mm[5], _mm[6]); /* 0x12162CBE: paddd mm5, mm6 */
    _mm[6] = MEM64(esi + 0x40); /* 0x12162CC1: movq mm6, qword ptr [esi + 0x40] */
    _mm[0] = mmx_pmullw(_mm[0], _mm[1]); /* 0x12162CC5: pmullw mm0, mm1 */
    _mm[7] = MEM64(edi + 0x40); /* 0x12162CC8: movq mm7, qword ptr [edi + 0x40] */
    /* nop */ /* 0x12162CCC: nop  */
    MEM64(ebp + (-0xBC)) = _mm[2]; /* 0x12162CCD: movq qword ptr [ebp - 0xbc], mm2 */
    _mm[6] = mmx_pmullw(_mm[6], _mm[7]); /* 0x12162CD4: pmullw mm6, mm7 */
    _mm[7] = MEM64(0x12013400); /* 0x12162CD7: movq mm7, qword ptr [0x12013400] */
    _mm[1] = _mm[0]; /* 0x12162CDE: movq mm1, mm0 */
    _mm[0] = mmx_paddw(_mm[0], _mm[6]); /* 0x12162CE1: paddw mm0, mm6 */
    /* nop */ /* 0x12162CE4: nop  */
    _mm[1] = mmx_psubw(_mm[1], _mm[6]); /* 0x12162CE5: psubw mm1, mm6 */
    _mm[6] = _mm[0]; /* 0x12162CE8: movq mm6, mm0 */
    _mm[0] = mmx_pmaddwd(_mm[0], _mm[7]); /* 0x12162CEB: pmaddwd mm0, mm7 */
    _mm[6] = mmx_psrlq(_mm[6], 16); /* 0x12162CEE: psrlq mm6, 0x10 */
    _mm[6] = mmx_pmaddwd(_mm[6], _mm[7]); /* 0x12162CF2: pmaddwd mm6, mm7 */
    _mm[2] = _mm[1]; /* 0x12162CF5: movq mm2, mm1 */
    _mm[1] = mmx_pmaddwd(_mm[1], _mm[7]); /* 0x12162CF8: pmaddwd mm1, mm7 */
    _mm[2] = mmx_psrlq(_mm[2], 16); /* 0x12162CFB: psrlq mm2, 0x10 */
    _mm[2] = mmx_pmaddwd(_mm[2], _mm[7]); /* 0x12162CFF: pmaddwd mm2, mm7 */
    _mm[0] = mmx_pslld(_mm[0], 13); /* 0x12162D02: pslld mm0, 0xd */
    _mm[7] = _mm[4]; /* 0x12162D06: movq mm7, mm4 */
    _mm[6] = mmx_pslld(_mm[6], 13); /* 0x12162D09: pslld mm6, 0xd */
    _mm[4] = mmx_paddd(_mm[4], _mm[0]); /* 0x12162D0D: paddd mm4, mm0 */
    _mm[0] = mmx_psubd(_mm[0], _mm[7]); /* 0x12162D10: psubd mm0, mm7 */
    _mm[7] = _mm[5]; /* 0x12162D13: movq mm7, mm5 */
    _mm[2] = mmx_pslld(_mm[2], 13); /* 0x12162D16: pslld mm2, 0xd */
    MEM64(ebp + (-0xA4)) = _mm[0]; /* 0x12162D1A: movq qword ptr [ebp - 0xa4], mm0 */
    _mm[5] = mmx_paddd(_mm[5], _mm[6]); /* 0x12162D21: paddd mm5, mm6 */
    _mm[0] = MEM64(ebp + (-0xBC)); /* 0x12162D24: movq mm0, qword ptr [ebp - 0xbc] */
    _mm[6] = mmx_psubd(_mm[6], _mm[7]); /* 0x12162D2B: psubd mm6, mm7 */
    MEM64(ebp + (-0x1C)) = _mm[5]; /* 0x12162D2E: movq qword ptr [ebp - 0x1c], mm5 */
    _mm[7] = _mm[3]; /* 0x12162D32: movq mm7, mm3 */
    MEM64(ebp + (-0x2C)) = _mm[6]; /* 0x12162D35: movq qword ptr [ebp - 0x2c], mm6 */
    _mm[3] = mmx_paddd(_mm[3], _mm[2]); /* 0x12162D39: paddd mm3, mm2 */
    MEM64(ebp + (-0x8C)) = _mm[4]; /* 0x12162D3C: movq qword ptr [ebp - 0x8c], mm4 */
    _mm[1] = mmx_pslld(_mm[1], 13); /* 0x12162D43: pslld mm1, 0xd */
    MEM64(ebp + (-0xFC)) = _mm[3]; /* 0x12162D47: movq qword ptr [ebp - 0xfc], mm3 */
    _mm[2] = mmx_psubd(_mm[2], _mm[7]); /* 0x12162D4E: psubd mm2, mm7 */
    _mm[6] = MEM64(esi + 0x10); /* 0x12162D51: movq mm6, qword ptr [esi + 0x10] */
    _mm[3] = _mm[0]; /* 0x12162D55: movq mm3, mm0 */
    MEM64(ebp + (-0xDC)) = _mm[2]; /* 0x12162D58: movq qword ptr [ebp - 0xdc], mm2 */
    _mm[0] = mmx_paddd(_mm[0], _mm[1]); /* 0x12162D5F: paddd mm0, mm1 */
    _mm[7] = MEM64(edi + 0x10); /* 0x12162D62: movq mm7, qword ptr [edi + 0x10] */
    MEM64(ebp + (-0xEC)) = _mm[0]; /* 0x12162D66: movq qword ptr [ebp - 0xec], mm0 */
    _mm[1] = mmx_psubd(_mm[1], _mm[3]); /* 0x12162D6D: psubd mm1, mm3 */
    _mm[0] = MEM64(esi + 0x70); /* 0x12162D70: movq mm0, qword ptr [esi + 0x70] */
    _mm[6] = mmx_pmullw(_mm[6], _mm[7]); /* 0x12162D74: pmullw mm6, mm7 */
    MEM64(ebp + (-0x7C)) = _mm[1]; /* 0x12162D77: movq qword ptr [ebp - 0x7c], mm1 */
    _mm[1] = MEM64(edi + 0x70); /* 0x12162D7B: movq mm1, qword ptr [edi + 0x70] */
    _mm[2] = MEM64(esi + 0x50); /* 0x12162D7F: movq mm2, qword ptr [esi + 0x50] */
    _mm[0] = mmx_pmullw(_mm[0], _mm[1]); /* 0x12162D83: pmullw mm0, mm1 */
    _mm[3] = MEM64(edi + 0x50); /* 0x12162D86: movq mm3, qword ptr [edi + 0x50] */
    _mm[4] = MEM64(esi + 0x30); /* 0x12162D8A: movq mm4, qword ptr [esi + 0x30] */
    _mm[2] = mmx_pmullw(_mm[2], _mm[3]); /* 0x12162D8E: pmullw mm2, mm3 */
    _mm[5] = MEM64(edi + 0x30); /* 0x12162D91: movq mm5, qword ptr [edi + 0x30] */
    _mm[1] = _mm[0]; /* 0x12162D95: movq mm1, mm0 */
    MEM64(ebp + (-0x6C)) = _mm[6]; /* 0x12162D98: movq qword ptr [ebp - 0x6c], mm6 */
    _mm[4] = mmx_pmullw(_mm[4], _mm[5]); /* 0x12162D9C: pmullw mm4, mm5 */
    MEM64(ebp + (-0x4C)) = _mm[0]; /* 0x12162D9F: movq qword ptr [ebp - 0x4c], mm0 */
    _mm[0] = mmx_paddw(_mm[0], _mm[6]); /* 0x12162DA3: paddw mm0, mm6 */
    MEM64(ebp + (-0xD4)) = _mm[2]; /* 0x12162DA6: movq qword ptr [ebp - 0xd4], mm2 */
    _mm[3] = _mm[2]; /* 0x12162DAD: movq mm3, mm2 */
    MEM64(ebp + (-0x34)) = _mm[4]; /* 0x12162DB0: movq qword ptr [ebp - 0x34], mm4 */
    _mm[2] = mmx_paddw(_mm[2], _mm[4]); /* 0x12162DB4: paddw mm2, mm4 */
    _mm[1] = mmx_paddw(_mm[1], _mm[4]); /* 0x12162DB7: paddw mm1, mm4 */
    _mm[4] = MEM64(0x120133B8); /* 0x12162DBA: movq mm4, qword ptr [0x120133b8] */
    _mm[3] = mmx_paddw(_mm[3], _mm[6]); /* 0x12162DC1: paddw mm3, mm6 */
    _mm[5] = _mm[1]; /* 0x12162DC4: movq mm5, mm1 */
    _mm[7] = _mm[0]; /* 0x12162DC7: movq mm7, mm0 */
    _mm[7] = mmx_psrlq(_mm[7], 16); /* 0x12162DCA: psrlq mm7, 0x10 */
    _mm[5] = mmx_paddw(_mm[5], _mm[3]); /* 0x12162DCE: paddw mm5, mm3 */
    _mm[6] = _mm[5]; /* 0x12162DD1: movq mm6, mm5 */
    _mm[5] = mmx_pmaddwd(_mm[5], _mm[4]); /* 0x12162DD4: pmaddwd mm5, mm4 */
    _mm[0] = mmx_pmaddwd(_mm[0], MEM64(0x120133B0)); /* 0x12162DD7: pmaddwd mm0, qword ptr [0x120133b0] */
    _mm[6] = mmx_psrlq(_mm[6], 16); /* 0x12162DDE: psrlq mm6, 0x10 */
    _mm[6] = mmx_pmaddwd(_mm[6], _mm[4]); /* 0x12162DE2: pmaddwd mm6, mm4 */
    _mm[4] = _mm[2]; /* 0x12162DE5: movq mm4, mm2 */
    MEM64(ebp + (-0x44)) = _mm[5]; /* 0x12162DE8: movq qword ptr [ebp - 0x44], mm5 */
    _mm[4] = mmx_psrlq(_mm[4], 16); /* 0x12162DEC: psrlq mm4, 0x10 */
    _mm[0] = (_mm[0] ^ MEM64(0x120133F0)); /* 0x12162DF0: pxor mm0, qword ptr [0x120133f0] */
    _mm[5] = _mm[1]; /* 0x12162DF7: movq mm5, mm1 */
    MEM64(ebp + (-0x5C)) = _mm[6]; /* 0x12162DFA: movq qword ptr [ebp - 0x5c], mm6 */
    _mm[5] = mmx_psrlq(_mm[5], 16); /* 0x12162DFE: psrlq mm5, 0x10 */
    _mm[6] = MEM64(0x120133E0); /* 0x12162E02: movq mm6, qword ptr [0x120133e0] */
    /* nop */ /* 0x12162E09: nop  */
    _mm[0] = mmx_paddd(_mm[0], MEM64(0x120133F8)); /* 0x12162E0A: paddd mm0, qword ptr [0x120133f8] */
    _mm[2] = mmx_pmaddwd(_mm[2], _mm[6]); /* 0x12162E11: pmaddwd mm2, mm6 */
    MEM64(ebp + (-0xAC)) = _mm[0]; /* 0x12162E14: movq qword ptr [ebp - 0xac], mm0 */
    _mm[4] = mmx_pmaddwd(_mm[4], _mm[6]); /* 0x12162E1B: pmaddwd mm4, mm6 */
    _mm[7] = mmx_pmaddwd(_mm[7], MEM64(0x120133B0)); /* 0x12162E1E: pmaddwd mm7, qword ptr [0x120133b0] */
    _mm[0] = _mm[3]; /* 0x12162E25: movq mm0, mm3 */
    _mm[6] = MEM64(0x120133D0); /* 0x12162E28: movq mm6, qword ptr [0x120133d0] */
    _mm[0] = mmx_psrlq(_mm[0], 16); /* 0x12162E2F: psrlq mm0, 0x10 */
    _mm[2] = (_mm[2] ^ MEM64(0x120133F0)); /* 0x12162E33: pxor mm2, qword ptr [0x120133f0] */
    _mm[1] = mmx_pmaddwd(_mm[1], _mm[6]); /* 0x12162E3A: pmaddwd mm1, mm6 */
    _mm[2] = mmx_paddd(_mm[2], MEM64(0x120133F8)); /* 0x12162E3D: paddd mm2, qword ptr [0x120133f8] */
    _mm[5] = mmx_pmaddwd(_mm[5], _mm[6]); /* 0x12162E44: pmaddwd mm5, mm6 */
    _mm[6] = MEM64(0x12013398); /* 0x12162E47: movq mm6, qword ptr [0x12013398] */
    /* nop */ /* 0x12162E4E: nop  */
    _mm[4] = (_mm[4] ^ MEM64(0x120133F0)); /* 0x12162E4F: pxor mm4, qword ptr [0x120133f0] */
    _mm[3] = mmx_pmaddwd(_mm[3], _mm[6]); /* 0x12162E56: pmaddwd mm3, mm6 */
    _mm[4] = mmx_paddd(_mm[4], MEM64(0x120133F8)); /* 0x12162E59: paddd mm4, qword ptr [0x120133f8] */
    _mm[0] = mmx_pmaddwd(_mm[0], _mm[6]); /* 0x12162E60: pmaddwd mm0, mm6 */
    _mm[6] = MEM64(0x120133F0); /* 0x12162E63: movq mm6, qword ptr [0x120133f0] */
    /* nop */ /* 0x12162E6A: nop  */
    _mm[1] = (_mm[1] ^ _mm[6]); /* 0x12162E6B: pxor mm1, mm6 */
    _mm[7] = (_mm[7] ^ _mm[6]); /* 0x12162E6E: pxor mm7, mm6 */
    _mm[1] = mmx_paddd(_mm[1], MEM64(0x120133F8)); /* 0x12162E71: paddd mm1, qword ptr [0x120133f8] */
    _mm[5] = (_mm[5] ^ _mm[6]); /* 0x12162E78: pxor mm5, mm6 */
    _mm[7] = mmx_paddd(_mm[7], MEM64(0x120133F8)); /* 0x12162E7B: paddd mm7, qword ptr [0x120133f8] */
    _mm[3] = (_mm[3] ^ _mm[6]); /* 0x12162E82: pxor mm3, mm6 */
    _mm[5] = mmx_paddd(_mm[5], MEM64(0x120133F8)); /* 0x12162E85: paddd mm5, qword ptr [0x120133f8] */
    /* nop */ /* 0x12162E8C: nop  */
    MEM64(ebp + (-0x64)) = _mm[7]; /* 0x12162E8D: movq qword ptr [ebp - 0x64], mm7 */
    _mm[0] = (_mm[0] ^ _mm[6]); /* 0x12162E91: pxor mm0, mm6 */
    _mm[1] = mmx_paddd(_mm[1], MEM64(ebp + (-0x44))); /* 0x12162E94: paddd mm1, qword ptr [ebp - 0x44] */
    /* nop */ /* 0x12162E98: nop  */
    _mm[6] = MEM64(ebp + (-0xAC)); /* 0x12162E99: movq mm6, qword ptr [ebp - 0xac] */
    /* nop */ /* 0x12162EA0: nop  */
    _mm[5] = mmx_paddd(_mm[5], MEM64(ebp + (-0x5C))); /* 0x12162EA1: paddd mm5, qword ptr [ebp - 0x5c] */
    _mm[6] = mmx_paddd(_mm[6], _mm[1]); /* 0x12162EA5: paddd mm6, mm1 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(0x120133F8)); /* 0x12162EA8: paddd mm3, qword ptr [0x120133f8] */
    _mm[1] = mmx_paddd(_mm[1], _mm[2]); /* 0x12162EAF: paddd mm1, mm2 */
    _mm[0] = mmx_paddd(_mm[0], MEM64(0x120133F8)); /* 0x12162EB2: paddd mm0, qword ptr [0x120133f8] */
    _mm[7] = mmx_paddd(_mm[7], _mm[5]); /* 0x12162EB9: paddd mm7, mm5 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(ebp + (-0x44))); /* 0x12162EBC: paddd mm3, qword ptr [ebp - 0x44] */
    _mm[5] = mmx_paddd(_mm[5], _mm[4]); /* 0x12162EC0: paddd mm5, mm4 */
    _mm[0] = mmx_paddd(_mm[0], MEM64(ebp + (-0x5C))); /* 0x12162EC3: paddd mm0, qword ptr [ebp - 0x5c] */
    _mm[2] = mmx_paddd(_mm[2], _mm[3]); /* 0x12162EC7: paddd mm2, mm3 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(ebp + (-0xAC))); /* 0x12162ECA: paddd mm3, qword ptr [ebp - 0xac] */
    _mm[4] = mmx_paddd(_mm[4], _mm[0]); /* 0x12162ED1: paddd mm4, mm0 */
    _mm[0] = mmx_paddd(_mm[0], MEM64(ebp + (-0x64))); /* 0x12162ED4: paddd mm0, qword ptr [ebp - 0x64] */
    MEM64(ebp + (-0x24)) = _mm[1]; /* 0x12162ED8: movq qword ptr [ebp - 0x24], mm1 */
    /* nop */ /* 0x12162EDC: nop  */
    MEM64(ebp + (-0xF4)) = _mm[0]; /* 0x12162EDD: movq qword ptr [ebp - 0xf4], mm0 */
    /* nop */ /* 0x12162EE4: nop  */
    _mm[0] = MEM64(ebp + (-0x4C)); /* 0x12162EE5: movq mm0, qword ptr [ebp - 0x4c] */
    /* nop */ /* 0x12162EE9: nop  */
    MEM64(ebp + (-0xC4)) = _mm[2]; /* 0x12162EEA: movq qword ptr [ebp - 0xc4], mm2 */
    _mm[1] = _mm[0]; /* 0x12162EF1: movq mm1, mm0 */
    _mm[2] = MEM64(0x12013390); /* 0x12162EF4: movq mm2, qword ptr [0x12013390] */
    _mm[1] = mmx_psrlq(_mm[1], 16); /* 0x12162EFB: psrlq mm1, 0x10 */
    MEM64(ebp + (-0x94)) = _mm[3]; /* 0x12162EFF: movq qword ptr [ebp - 0x94], mm3 */
    _mm[0] = mmx_pmaddwd(_mm[0], _mm[2]); /* 0x12162F06: pmaddwd mm0, mm2 */
    _mm[3] = MEM64(ebp + (-0xD4)); /* 0x12162F09: movq mm3, qword ptr [ebp - 0xd4] */
    _mm[1] = mmx_pmaddwd(_mm[1], _mm[2]); /* 0x12162F10: pmaddwd mm1, mm2 */
    MEM64(ebp + (-0x74)) = _mm[4]; /* 0x12162F13: movq qword ptr [ebp - 0x74], mm4 */
    _mm[2] = _mm[3]; /* 0x12162F17: movq mm2, mm3 */
    _mm[4] = MEM64(0x120133D8); /* 0x12162F1A: movq mm4, qword ptr [0x120133d8] */
    _mm[2] = mmx_psrlq(_mm[2], 16); /* 0x12162F21: psrlq mm2, 0x10 */
    MEM64(ebp + (-0xB4)) = _mm[5]; /* 0x12162F25: movq qword ptr [ebp - 0xb4], mm5 */
    _mm[3] = mmx_pmaddwd(_mm[3], _mm[4]); /* 0x12162F2C: pmaddwd mm3, mm4 */
    _mm[5] = MEM64(ebp + (-0x34)); /* 0x12162F2F: movq mm5, qword ptr [ebp - 0x34] */
    _mm[2] = mmx_pmaddwd(_mm[2], _mm[4]); /* 0x12162F33: pmaddwd mm2, mm4 */
    MEM64(ebp + (-0x3C)) = _mm[6]; /* 0x12162F36: movq qword ptr [ebp - 0x3c], mm6 */
    _mm[4] = _mm[5]; /* 0x12162F3A: movq mm4, mm5 */
    _mm[6] = MEM64(0x120133E8); /* 0x12162F3D: movq mm6, qword ptr [0x120133e8] */
    _mm[4] = mmx_psrlq(_mm[4], 16); /* 0x12162F44: psrlq mm4, 0x10 */
    MEM64(ebp + (-0x9C)) = _mm[7]; /* 0x12162F48: movq qword ptr [ebp - 0x9c], mm7 */
    _mm[5] = mmx_pmaddwd(_mm[5], _mm[6]); /* 0x12162F4F: pmaddwd mm5, mm6 */
    _mm[7] = MEM64(ebp + (-0x6C)); /* 0x12162F52: movq mm7, qword ptr [ebp - 0x6c] */
    _mm[4] = mmx_pmaddwd(_mm[4], _mm[6]); /* 0x12162F56: pmaddwd mm4, mm6 */
    _mm[0] = mmx_paddd(_mm[0], MEM64(ebp + (-0x3C))); /* 0x12162F59: paddd mm0, qword ptr [ebp - 0x3c] */
    _mm[6] = _mm[7]; /* 0x12162F5D: movq mm6, mm7 */
    _mm[1] = mmx_paddd(_mm[1], MEM64(ebp + (-0x9C))); /* 0x12162F60: paddd mm1, qword ptr [ebp - 0x9c] */
    _mm[6] = mmx_psrlq(_mm[6], 16); /* 0x12162F67: psrlq mm6, 0x10 */
    MEM64(ebp + (-0xE4)) = _mm[0]; /* 0x12162F6B: movq qword ptr [ebp - 0xe4], mm0 */
    /* nop */ /* 0x12162F72: nop  */
    _mm[0] = MEM64(0x120133C0); /* 0x12162F73: movq mm0, qword ptr [0x120133c0] */
    /* nop */ /* 0x12162F7A: nop  */
    MEM64(ebp + (-0x84)) = _mm[1]; /* 0x12162F7B: movq qword ptr [ebp - 0x84], mm1 */
    _mm[7] = mmx_pmaddwd(_mm[7], _mm[0]); /* 0x12162F82: pmaddwd mm7, mm0 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(ebp + (-0xC4))); /* 0x12162F85: paddd mm3, qword ptr [ebp - 0xc4] */
    _mm[6] = mmx_pmaddwd(_mm[6], _mm[0]); /* 0x12162F8C: pmaddwd mm6, mm0 */
    _mm[0] = MEM64(ebp + (-0x8C)); /* 0x12162F8F: movq mm0, qword ptr [ebp - 0x8c] */
    /* nop */ /* 0x12162F96: nop  */
    _mm[7] = mmx_paddd(_mm[7], MEM64(ebp + (-0x94))); /* 0x12162F97: paddd mm7, qword ptr [ebp - 0x94] */
    /* nop */ /* 0x12162F9E: nop  */
    _mm[6] = mmx_paddd(_mm[6], MEM64(ebp + (-0xF4))); /* 0x12162F9F: paddd mm6, qword ptr [ebp - 0xf4] */
    _mm[0] = mmx_psubd(_mm[0], _mm[7]); /* 0x12162FA6: psubd mm0, mm7 */
    _mm[1] = MEM64(ebp + (-0x1C)); /* 0x12162FA9: movq mm1, qword ptr [ebp - 0x1c] */
    /* nop */ /* 0x12162FAD: nop  */
    MEM64(ebp + (-0x54)) = _mm[3]; /* 0x12162FAE: movq qword ptr [ebp - 0x54], mm3 */
    _mm[1] = mmx_psubd(_mm[1], _mm[6]); /* 0x12162FB2: psubd mm1, mm6 */
    _mm[3] = MEM64(0x12013408); /* 0x12162FB5: movq mm3, qword ptr [0x12013408] */
    /* nop */ /* 0x12162FBC: nop  */
    _mm[2] = mmx_paddd(_mm[2], MEM64(ebp + (-0x74))); /* 0x12162FBD: paddd mm2, qword ptr [ebp - 0x74] */
    _mm[0] = mmx_paddd(_mm[0], _mm[3]); /* 0x12162FC1: paddd mm0, mm3 */
    _mm[7] = mmx_paddd(_mm[7], MEM64(ebp + (-0x8C))); /* 0x12162FC4: paddd mm7, qword ptr [ebp - 0x8c] */
    _mm[0] = mmx_psrad(_mm[0], 11); /* 0x12162FCB: psrad mm0, 0xb */
    MEM64(ebp + (-0xCC)) = _mm[2]; /* 0x12162FCF: movq qword ptr [ebp - 0xcc], mm2 */
    _mm[1] = mmx_paddd(_mm[1], _mm[3]); /* 0x12162FD6: paddd mm1, mm3 */
    _mm[6] = mmx_paddd(_mm[6], MEM64(ebp + (-0x1C))); /* 0x12162FD9: paddd mm6, qword ptr [ebp - 0x1c] */
    _mm[1] = mmx_psrad(_mm[1], 11); /* 0x12162FDD: psrad mm1, 0xb */
    _mm[5] = mmx_paddd(_mm[5], MEM64(ebp + (-0x24))); /* 0x12162FE1: paddd mm5, qword ptr [ebp - 0x24] */
    _mm[2] = _mm[0]; /* 0x12162FE5: movq mm2, mm0 */
    _mm[4] = mmx_paddd(_mm[4], MEM64(ebp + (-0xB4))); /* 0x12162FE8: paddd mm4, qword ptr [ebp - 0xb4] */
    _mm[0] = mmx_punpcklwd(_mm[0], _mm[1]); /* 0x12162FEF: punpcklwd mm0, mm1 */
    _mm[6] = mmx_paddd(_mm[6], _mm[3]); /* 0x12162FF2: paddd mm6, mm3 */
    _mm[2] = mmx_punpckhwd(_mm[2], _mm[1]); /* 0x12162FF5: punpckhwd mm2, mm1 */
    _mm[7] = mmx_paddd(_mm[7], _mm[3]); /* 0x12162FF8: paddd mm7, mm3 */
    _mm[0] = mmx_punpckldq(_mm[0], _mm[2]); /* 0x12162FFB: punpckldq mm0, mm2 */
    edi = MEM32(ebp + (-0xC)); /* 0x12162FFE: mov edi, dword ptr [ebp - 0xc] */
    MEM64(edi + 0x70) = _mm[0]; /* 0x12163001: movq qword ptr [edi + 0x70], mm0 */
    _mm[6] = mmx_psrad(_mm[6], 11); /* 0x12163005: psrad mm6, 0xb */
    _mm[2] = MEM64(ebp + (-0xEC)); /* 0x12163009: movq mm2, qword ptr [ebp - 0xec] */
    _mm[7] = mmx_psrad(_mm[7], 11); /* 0x12163010: psrad mm7, 0xb */
    _mm[2] = mmx_psubd(_mm[2], _mm[5]); /* 0x12163014: psubd mm2, mm5 */
    _mm[0] = _mm[7]; /* 0x12163017: movq mm0, mm7 */
    _mm[1] = MEM64(ebp + (-0xFC)); /* 0x1216301A: movq mm1, qword ptr [ebp - 0xfc] */
    _mm[7] = mmx_punpcklwd(_mm[7], _mm[6]); /* 0x12163021: punpcklwd mm7, mm6 */
    _mm[1] = mmx_psubd(_mm[1], _mm[4]); /* 0x12163024: psubd mm1, mm4 */
    _mm[0] = mmx_punpckhwd(_mm[0], _mm[6]); /* 0x12163027: punpckhwd mm0, mm6 */
    _mm[5] = mmx_paddd(_mm[5], MEM64(ebp + (-0xEC))); /* 0x1216302A: paddd mm5, qword ptr [ebp - 0xec] */
    _mm[7] = mmx_punpckldq(_mm[7], _mm[0]); /* 0x12163031: punpckldq mm7, mm0 */
    _mm[4] = mmx_paddd(_mm[4], MEM64(ebp + (-0xFC))); /* 0x12163034: paddd mm4, qword ptr [ebp - 0xfc] */
    _mm[2] = mmx_paddd(_mm[2], _mm[3]); /* 0x1216303B: paddd mm2, mm3 */
    _mm[1] = mmx_paddd(_mm[1], _mm[3]); /* 0x1216303E: paddd mm1, mm3 */
    _mm[5] = mmx_paddd(_mm[5], _mm[3]); /* 0x12163041: paddd mm5, mm3 */
    _mm[4] = mmx_paddd(_mm[4], _mm[3]); /* 0x12163044: paddd mm4, mm3 */
    _mm[2] = mmx_psrad(_mm[2], 11); /* 0x12163047: psrad mm2, 0xb */
    MEM64(edi) = _mm[7]; /* 0x1216304B: movq qword ptr [edi], mm7 */
    _mm[1] = mmx_psrad(_mm[1], 11); /* 0x1216304E: psrad mm1, 0xb */
    _mm[0] = _mm[2]; /* 0x12163052: movq mm0, mm2 */
    _mm[5] = mmx_psrad(_mm[5], 11); /* 0x12163055: psrad mm5, 0xb */
    _mm[6] = MEM64(ebp + (-0x7C)); /* 0x12163059: movq mm6, qword ptr [ebp - 0x7c] */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[1]); /* 0x1216305D: punpcklwd mm2, mm1 */
    _mm[0] = mmx_punpckhwd(_mm[0], _mm[1]); /* 0x12163060: punpckhwd mm0, mm1 */
    _mm[1] = _mm[5]; /* 0x12163063: movq mm1, mm5 */
    _mm[7] = MEM64(ebp + (-0xDC)); /* 0x12163066: movq mm7, qword ptr [ebp - 0xdc] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[0]); /* 0x1216306D: punpckldq mm2, mm0 */
    MEM64(edi + 0x60) = _mm[2]; /* 0x12163070: movq qword ptr [edi + 0x60], mm2 */
    _mm[4] = mmx_psrad(_mm[4], 11); /* 0x12163074: psrad mm4, 0xb */
    _mm[2] = _mm[6]; /* 0x12163078: movq mm2, mm6 */
    _mm[5] = mmx_punpcklwd(_mm[5], _mm[4]); /* 0x1216307B: punpcklwd mm5, mm4 */
    _mm[6] = mmx_paddd(_mm[6], MEM64(ebp + (-0x54))); /* 0x1216307E: paddd mm6, qword ptr [ebp - 0x54] */
    _mm[1] = mmx_punpckhwd(_mm[1], _mm[4]); /* 0x12163082: punpckhwd mm1, mm4 */
    _mm[2] = mmx_psubd(_mm[2], MEM64(ebp + (-0x54))); /* 0x12163085: psubd mm2, qword ptr [ebp - 0x54] */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[1]); /* 0x12163089: punpckldq mm5, mm1 */
    MEM64(edi + 0x10) = _mm[5]; /* 0x1216308C: movq qword ptr [edi + 0x10], mm5 */
    _mm[0] = _mm[7]; /* 0x12163090: movq mm0, mm7 */
    _mm[7] = mmx_paddd(_mm[7], MEM64(ebp + (-0xCC))); /* 0x12163093: paddd mm7, qword ptr [ebp - 0xcc] */
    _mm[6] = mmx_paddd(_mm[6], _mm[3]); /* 0x1216309A: paddd mm6, mm3 */
    _mm[0] = mmx_psubd(_mm[0], MEM64(ebp + (-0xCC))); /* 0x1216309D: psubd mm0, qword ptr [ebp - 0xcc] */
    _mm[7] = mmx_paddd(_mm[7], _mm[3]); /* 0x121630A4: paddd mm7, mm3 */
    _mm[2] = mmx_paddd(_mm[2], _mm[3]); /* 0x121630A7: paddd mm2, mm3 */
    _mm[7] = mmx_psrad(_mm[7], 11); /* 0x121630AA: psrad mm7, 0xb */
    _mm[0] = mmx_paddd(_mm[0], _mm[3]); /* 0x121630AE: paddd mm0, mm3 */
    _mm[6] = mmx_psrad(_mm[6], 11); /* 0x121630B1: psrad mm6, 0xb */
    _mm[1] = _mm[6]; /* 0x121630B5: movq mm1, mm6 */
    _mm[2] = mmx_psrad(_mm[2], 11); /* 0x121630B8: psrad mm2, 0xb */
    _mm[4] = MEM64(ebp + (-0xA4)); /* 0x121630BC: movq mm4, qword ptr [ebp - 0xa4] */
    _mm[6] = mmx_punpcklwd(_mm[6], _mm[7]); /* 0x121630C3: punpcklwd mm6, mm7 */
    _mm[5] = _mm[4]; /* 0x121630C6: movq mm5, mm4 */
    _mm[1] = mmx_punpckhwd(_mm[1], _mm[7]); /* 0x121630C9: punpckhwd mm1, mm7 */
    _mm[4] = mmx_paddd(_mm[4], MEM64(ebp + (-0xE4))); /* 0x121630CC: paddd mm4, qword ptr [ebp - 0xe4] */
    _mm[6] = mmx_punpckldq(_mm[6], _mm[1]); /* 0x121630D3: punpckldq mm6, mm1 */
    _mm[5] = mmx_psubd(_mm[5], MEM64(ebp + (-0xE4))); /* 0x121630D6: psubd mm5, qword ptr [ebp - 0xe4] */
    _mm[0] = mmx_psrad(_mm[0], 11); /* 0x121630DD: psrad mm0, 0xb */
    MEM64(edi + 0x20) = _mm[6]; /* 0x121630E1: movq qword ptr [edi + 0x20], mm6 */
    _mm[6] = _mm[2]; /* 0x121630E5: movq mm6, mm2 */
    _mm[4] = mmx_paddd(_mm[4], _mm[3]); /* 0x121630E8: paddd mm4, mm3 */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[0]); /* 0x121630EB: punpcklwd mm2, mm0 */
    _mm[5] = mmx_paddd(_mm[5], _mm[3]); /* 0x121630EE: paddd mm5, mm3 */
    _mm[6] = mmx_punpckhwd(_mm[6], _mm[0]); /* 0x121630F1: punpckhwd mm6, mm0 */
    _mm[0] = MEM64(ebp + (-0x2C)); /* 0x121630F4: movq mm0, qword ptr [ebp - 0x2c] */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[6]); /* 0x121630F8: punpckldq mm2, mm6 */
    _mm[1] = _mm[0]; /* 0x121630FB: movq mm1, mm0 */
    _mm[4] = mmx_psrad(_mm[4], 11); /* 0x121630FE: psrad mm4, 0xb */
    _mm[0] = mmx_paddd(_mm[0], MEM64(ebp + (-0x84))); /* 0x12163102: paddd mm0, qword ptr [ebp - 0x84] */
    _mm[5] = mmx_psrad(_mm[5], 11); /* 0x12163109: psrad mm5, 0xb */
    _mm[0] = mmx_paddd(_mm[0], _mm[3]); /* 0x1216310D: paddd mm0, mm3 */
    _mm[6] = _mm[4]; /* 0x12163110: movq mm6, mm4 */
    _mm[1] = mmx_psubd(_mm[1], MEM64(ebp + (-0x84))); /* 0x12163113: psubd mm1, qword ptr [ebp - 0x84] */
    _mm[0] = mmx_psrad(_mm[0], 11); /* 0x1216311A: psrad mm0, 0xb */
    _mm[1] = mmx_paddd(_mm[1], _mm[3]); /* 0x1216311E: paddd mm1, mm3 */
    _mm[4] = mmx_punpcklwd(_mm[4], _mm[0]); /* 0x12163121: punpcklwd mm4, mm0 */
    _mm[3] = _mm[5]; /* 0x12163124: movq mm3, mm5 */
    _mm[6] = mmx_punpckhwd(_mm[6], _mm[0]); /* 0x12163127: punpckhwd mm6, mm0 */
    MEM64(edi + 0x50) = _mm[2]; /* 0x1216312A: movq qword ptr [edi + 0x50], mm2 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[6]); /* 0x1216312E: punpckldq mm4, mm6 */
    _mm[1] = mmx_psrad(_mm[1], 11); /* 0x12163131: psrad mm1, 0xb */
    MEM64(edi + 0x30) = _mm[4]; /* 0x12163135: movq qword ptr [edi + 0x30], mm4 */
    _mm[5] = mmx_punpcklwd(_mm[5], _mm[1]); /* 0x12163139: punpcklwd mm5, mm1 */
    _mm[3] = mmx_punpckhwd(_mm[3], _mm[1]); /* 0x1216313C: punpckhwd mm3, mm1 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x1216313F: punpckldq mm5, mm3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 8; /* 0x12163142: add dword ptr [ebp - 8], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 8; /* 0x12163146: add dword ptr [ebp - 0x14], 8 */
    _flag_k = FK_ADD;
    MEM64(edi + 0x40) = _mm[5]; /* 0x1216314A: movq qword ptr [edi + 0x40], mm5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 8; /* 0x1216314E: add dword ptr [ebp - 0xc], 8 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x10)); /* 0x12163152: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12163155: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = eax; /* 0x12163156: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12162C37; /* 0x12163159: jne 0x12162c37 */
L_1216315F:
    esi = MEM32(ebp + 0x10); /* 0x1216315F: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x10)) = 8; /* 0x12163162: mov dword ptr [ebp - 0x10], 8 */
    MEM32(ebp + (-0xC)) = esi; /* 0x12163169: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x4)) = 0; /* 0x1216316C: mov dword ptr [ebp - 4], 0 */
L_12163173:
    esi = MEM32(ebp + (-0xC)); /* 0x12163173: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + 0x14); /* 0x12163176: mov edi, dword ptr [ebp + 0x14] */
    _mm[0] = MEM64(esi); /* 0x12163179: movq mm0, qword ptr [esi] */
    _mm[1] = MEM64(esi + 0x8); /* 0x1216317C: movq mm1, qword ptr [esi + 8] */
    _mm[2] = _mm[0]; /* 0x12163180: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x12163183: movq mm3, mm0 */
    _mm[2] = mmx_paddw(_mm[2], _mm[1]); /* 0x12163186: paddw mm2, mm1 */
    _mm[4] = _mm[2]; /* 0x12163189: movq mm4, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x1216318C: punpckhdq mm3, mm1 */
    _mm[3] = mmx_pmaddwd(_mm[3], MEM64(0x12013420)); /* 0x1216318F: pmaddwd mm3, qword ptr [0x12013420] */
    _mm[6] = _mm[0]; /* 0x12163196: movq mm6, mm0 */
    _mm[2] = mmx_pmaddwd(_mm[2], MEM64(0x12013428)); /* 0x12163199: pmaddwd mm2, qword ptr [0x12013428] */
    _mm[6] = mmx_psubw(_mm[6], _mm[1]); /* 0x121631A0: psubw mm6, mm1 */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[6]); /* 0x121631A3: punpckldq mm4, mm6 */
    _mm[6] = _mm[0]; /* 0x121631A6: movq mm6, mm0 */
    _mm[5] = _mm[3]; /* 0x121631A9: movq mm5, mm3 */
    _mm[4] = mmx_pslld(_mm[4], 16); /* 0x121631AC: pslld mm4, 0x10 */
    _mm[3] = (_mm[3] ^ MEM64(0x120133F0)); /* 0x121631B0: pxor mm3, qword ptr [0x120133f0] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x121631B7: punpckhdq mm2, mm2 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(0x120133F8)); /* 0x121631BA: paddd mm3, qword ptr [0x120133f8] */
    _mm[4] = mmx_psrad(_mm[4], 3); /* 0x121631C1: psrad mm4, 3 */
    _mm[3] = mmx_psrlq(_mm[3], 32); /* 0x121631C5: psrlq mm3, 0x20 */
    _mm[7] = _mm[4]; /* 0x121631C9: movq mm7, mm4 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[3]); /* 0x121631CC: punpckldq mm5, mm3 */
    _mm[3] = _mm[0]; /* 0x121631CF: movq mm3, mm0 */
    _mm[5] = mmx_paddd(_mm[5], _mm[2]); /* 0x121631D2: paddd mm5, mm2 */
    _mm[3] = mmx_paddw(_mm[3], _mm[1]); /* 0x121631D5: paddw mm3, mm1 */
    _mm[4] = mmx_paddd(_mm[4], _mm[5]); /* 0x121631D8: paddd mm4, mm5 */
    _mm[7] = mmx_psubd(_mm[7], _mm[5]); /* 0x121631DB: psubd mm7, mm5 */
    _mm[5] = _mm[3]; /* 0x121631DE: movq mm5, mm3 */
    _mm[2] = _mm[0]; /* 0x121631E1: movq mm2, mm0 */
    _mm[0] = mmx_pmaddwd(_mm[0], MEM64(0x12013430)); /* 0x121631E4: pmaddwd mm0, qword ptr [0x12013430] */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x121631EB: punpckldq mm5, mm5 */
    _mm[5] = mmx_paddw(_mm[5], _mm[3]); /* 0x121631EE: paddw mm5, mm3 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[2]); /* 0x121631F1: punpckldq mm2, mm2 */
    _mm[5] = mmx_pmaddwd(_mm[5], MEM64(0x12013450)); /* 0x121631F4: pmaddwd mm5, qword ptr [0x12013450] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[2]); /* 0x121631FB: punpckhdq mm6, mm2 */
    _mm[3] = mmx_pmaddwd(_mm[3], MEM64(0x12013448)); /* 0x121631FE: pmaddwd mm3, qword ptr [0x12013448] */
    _mm[6] = mmx_paddw(_mm[6], _mm[1]); /* 0x12163205: paddw mm6, mm1 */
    _mm[6] = mmx_pmaddwd(_mm[6], MEM64(0x12013440)); /* 0x12163208: pmaddwd mm6, qword ptr [0x12013440] */
    /* nop */ /* 0x1216320F: nop  */
    _mm[1] = mmx_pmaddwd(_mm[1], MEM64(0x12013438)); /* 0x12163210: pmaddwd mm1, qword ptr [0x12013438] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x12163217: punpckhdq mm5, mm5 */
    _mm[2] = MEM64(0x120133F8); /* 0x1216321A: movq mm2, qword ptr [0x120133f8] */
    /* nop */ /* 0x12163221: nop  */
    _mm[3] = (_mm[3] ^ MEM64(0x120133F0)); /* 0x12163222: pxor mm3, qword ptr [0x120133f0] */
    /* nop */ /* 0x12163229: nop  */
    _mm[6] = (_mm[6] ^ MEM64(0x120133F0)); /* 0x1216322A: pxor mm6, qword ptr [0x120133f0] */
    _mm[3] = mmx_paddd(_mm[3], _mm[2]); /* 0x12163231: paddd mm3, mm2 */
    _mm[6] = mmx_paddd(_mm[6], _mm[2]); /* 0x12163234: paddd mm6, mm2 */
    _mm[3] = mmx_paddd(_mm[3], _mm[5]); /* 0x12163237: paddd mm3, mm5 */
    _mm[5] = _mm[6]; /* 0x1216323A: movq mm5, mm6 */
    _mm[6] = mmx_paddd(_mm[6], _mm[3]); /* 0x1216323D: paddd mm6, mm3 */
    _mm[2] = _mm[5]; /* 0x12163240: movq mm2, mm5 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x12163243: punpckldq mm5, mm5 */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[5]); /* 0x12163246: punpckhdq mm2, mm5 */
    _mm[1] = mmx_paddd(_mm[1], _mm[6]); /* 0x12163249: paddd mm1, mm6 */
    _mm[2] = mmx_paddd(_mm[2], _mm[3]); /* 0x1216324C: paddd mm2, mm3 */
    _mm[5] = _mm[1]; /* 0x1216324F: movq mm5, mm1 */
    _mm[3] = _mm[4]; /* 0x12163252: movq mm3, mm4 */
    _mm[0] = mmx_paddd(_mm[0], _mm[2]); /* 0x12163255: paddd mm0, mm2 */
    _mm[2] = _mm[7]; /* 0x12163258: movq mm2, mm7 */
    _mm[5] = mmx_punpckldq(_mm[5], _mm[5]); /* 0x1216325B: punpckldq mm5, mm5 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[5]); /* 0x1216325E: punpckhdq mm1, mm5 */
    _mm[3] = mmx_psubd(_mm[3], _mm[0]); /* 0x12163261: psubd mm3, mm0 */
    _mm[5] = MEM64(0x12013410); /* 0x12163264: movq mm5, qword ptr [0x12013410] */
    _mm[0] = mmx_paddd(_mm[0], _mm[4]); /* 0x1216326B: paddd mm0, mm4 */
    _mm[6] = MEM64(0x12013418); /* 0x1216326E: movq mm6, qword ptr [0x12013418] */
    _mm[2] = mmx_psubd(_mm[2], _mm[1]); /* 0x12163275: psubd mm2, mm1 */
    _mm[0] = mmx_paddd(_mm[0], _mm[5]); /* 0x12163278: paddd mm0, mm5 */
    _mm[1] = mmx_paddd(_mm[1], _mm[7]); /* 0x1216327B: paddd mm1, mm7 */
    _mm[1] = mmx_paddd(_mm[1], _mm[5]); /* 0x1216327E: paddd mm1, mm5 */
    _mm[0] = mmx_psrad(_mm[0], 18); /* 0x12163281: psrad mm0, 0x12 */
    _mm[3] = mmx_paddd(_mm[3], _mm[5]); /* 0x12163285: paddd mm3, mm5 */
    _mm[1] = mmx_psrad(_mm[1], 18); /* 0x12163288: psrad mm1, 0x12 */
    _mm[2] = mmx_paddd(_mm[2], _mm[5]); /* 0x1216328C: paddd mm2, mm5 */
    _mm[3] = mmx_psrad(_mm[3], 18); /* 0x1216328F: psrad mm3, 0x12 */
    _mm[1] = (_mm[1] & _mm[6]); /* 0x12163293: pand mm1, mm6 */
    _mm[2] = mmx_psrad(_mm[2], 18); /* 0x12163296: psrad mm2, 0x12 */
    ebx = (uint32_t)_mm[1]; /* 0x1216329A: movd ebx, mm1 */
    _mm[1] = mmx_psrlq(_mm[1], 32); /* 0x1216329D: psrlq mm1, 0x20 */
    ecx = MEM32(ebp + 0x1C); /* 0x121632A1: mov ecx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x4)); /* 0x121632A4: add edi, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    edx = (uint32_t)_mm[1]; /* 0x121632A7: movd edx, mm1 */
    _mm[0] = (_mm[0] & _mm[6]); /* 0x121632AA: pand mm0, mm6 */
    SET_HI8(eax, MEM8(ecx + ebx)); /* 0x121632AD: mov ah, byte ptr [ecx + ebx] */
    edi = MEM32(edi); /* 0x121632B0: mov edi, dword ptr [edi] */
    ebx = (uint32_t)_mm[0]; /* 0x121632B2: movd ebx, mm0 */
    _mm[0] = mmx_psrlq(_mm[0], 32); /* 0x121632B5: psrlq mm0, 0x20 */
    SET_LO8(eax, MEM8(ecx + edx)); /* 0x121632B9: mov al, byte ptr [ecx + edx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x121632BC: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    edx = (uint32_t)_mm[0]; /* 0x121632C0: movd edx, mm0 */
    _mm[3] = (_mm[3] & _mm[6]); /* 0x121632C3: pand mm3, mm6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x18); /* 0x121632C6: add edi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x121632C9: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x121632C9: shl eax, 0x10 */
    SET_LO8(eax, MEM8(ecx + ebx)); /* 0x121632CC: mov al, byte ptr [ecx + ebx] */
    SET_HI8(eax, MEM8(ecx + edx)); /* 0x121632CF: mov ah, byte ptr [ecx + edx] */
    _mm[4] = (uint64_t)(uint32_t)(eax); /* 0x121632D2: movd mm4, eax */
    _mm[2] = (_mm[2] & _mm[6]); /* 0x121632D5: pand mm2, mm6 */
    ebx = (uint32_t)_mm[3]; /* 0x121632D8: movd ebx, mm3 */
    _mm[3] = mmx_psrlq(_mm[3], 32); /* 0x121632DB: psrlq mm3, 0x20 */
    edx = (uint32_t)_mm[3]; /* 0x121632DF: movd edx, mm3 */
    SET_HI8(eax, MEM8(ecx + ebx)); /* 0x121632E2: mov ah, byte ptr [ecx + ebx] */
    SET_LO8(eax, MEM8(ecx + edx)); /* 0x121632E5: mov al, byte ptr [ecx + edx] */
    ebx = (uint32_t)_mm[2]; /* 0x121632E8: movd ebx, mm2 */
    _mm[2] = mmx_psrlq(_mm[2], 32); /* 0x121632EB: psrlq mm2, 0x20 */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x121632EF: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x121632EF: shl eax, 0x10 */
    edx = (uint32_t)_mm[2]; /* 0x121632F2: movd edx, mm2 */
    SET_LO8(eax, MEM8(ecx + ebx)); /* 0x121632F5: mov al, byte ptr [ecx + ebx] */
    SET_HI8(eax, MEM8(ecx + edx)); /* 0x121632F8: mov ah, byte ptr [ecx + edx] */
    _mm[5] = (uint64_t)(uint32_t)(eax); /* 0x121632FB: movd mm5, eax */
    _mm[4] = mmx_punpckldq(_mm[4], _mm[5]); /* 0x121632FE: punpckldq mm4, mm5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0x10u; /* 0x12163301: add dword ptr [ebp - 0xc], 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x10)); /* 0x12163305: mov eax, dword ptr [ebp - 0x10] */
    MEM64(edi) = _mm[4]; /* 0x12163308: movq qword ptr [edi], mm4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1216330B: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = eax; /* 0x1216330C: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12163173; /* 0x1216330F: jne 0x12163173 */
L_12163315:
    /* emms */ /* 0x12163315: emms  */
    edi = POP32_VAL(esp); /* 0x12163317: pop edi */
    esi = POP32_VAL(esp); /* 0x12163318: pop esi */
    ebx = POP32_VAL(esp); /* 0x12163319: pop ebx */
    esp = ebp; /* 0x1216331A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1216331C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1216331D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12163330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12163330u);

L_12163330:
    edi = edi; /* 0x12163330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12163332: push ebp */
    ebp = esp; /* 0x12163333: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x124u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x124u; /* 0x12163335: sub esp, 0x124 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1216333B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12163340: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12163342: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12163345: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x12163348: mov eax, dword ptr [eax + 0x148] */
    ecx = MEM32(ebp + 0x14); /* 0x1216334E: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x12163351: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12163354: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12163355: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x12163358: sub eax, -0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1216335B: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1216335C: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x124); /* 0x1216335F: lea eax, [ebp - 0x124] */
    PUSH32(esp, ecx); /* 0x12163365: push ecx */
    PUSH32(esp, eax); /* 0x12163366: push eax */
    PUSH32(esp, MEM32(edx + 0x50)); /* 0x12163367: push dword ptr [edx + 0x50] */
    PUSH32(esp, esi); /* 0x1216336A: push esi */
    RECOMP_CALL(sub_12162C10); /* 0x1216336B: call 0x12162c10 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12163370: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12163373: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12163375: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12163376: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1216337B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1216337D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216337E: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12163390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12163390u);

L_12163390:
    edi = edi; /* 0x12163390: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12163392: push ebp */
    ebp = esp; /* 0x12163393: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xACu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xACu; /* 0x12163395: sub esp, 0xac */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1216339B: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121633A0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121633A2: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x121633A5: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0xAC)) = eax; /* 0x121633A8: mov dword ptr [ebp - 0xac], eax */
    eax = MEM32(ebp + 0x18); /* 0x121633AE: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0xA8)) = eax; /* 0x121633B1: mov dword ptr [ebp - 0xa8], eax */
    eax = MEM32(ebp + 0x8); /* 0x121633B7: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x121633BA: mov eax, dword ptr [eax + 0x148] */
    PUSH32(esp, ebx); /* 0x121633C0: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x121633C1: sub eax, -0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x121633C4: push esi */
    esi = MEM32(ebp + 0x10); /* 0x121633C5: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x98)) = eax; /* 0x121633C8: mov dword ptr [ebp - 0x98], eax */
    eax = MEM32(ebp + 0xC); /* 0x121633CE: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x121633D1: push edi */
    edi = MEM32(eax + 0x50); /* 0x121633D2: mov edi, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x60u; /* 0x121633D5: add esi, 0x60 */
    _flag_k = FK_ADD;
    ebx = 8; /* 0x121633D8: mov ebx, 8 */
    edx = ebp + (-0x64); /* 0x121633DD: lea edx, [ebp - 0x64] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x60u; /* 0x121633E0: add edi, 0x60 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x90)) = ebx; /* 0x121633E3: mov dword ptr [ebp - 0x90], ebx */
    MEM32(ebp + (-0xA0)) = edx; /* 0x121633E9: mov dword ptr [ebp - 0xa0], edx */
    MEM32(ebp + (-0x8C)) = esi; /* 0x121633EF: mov dword ptr [ebp - 0x8c], esi */
    MEM32(ebp + (-0x88)) = edi; /* 0x121633F5: mov dword ptr [ebp - 0x88], edi */
    goto L_12163400; /* 0x121633FB: jmp 0x12163400 */
L_12163400:
    /* cmp ebx, 4 */ /* 0x12163400: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216355E; /* 0x12163403: je 0x1216355e */
L_12163409:
    eax = (uint32_t)MEM16(esi + (-0x50)); /* 0x12163409: movzx eax, word ptr [esi - 0x50] */
    MEM32(ebp + (-0xA4)) = eax; /* 0x1216340D: mov dword ptr [ebp - 0xa4], eax */
    /* test LO16(eax), LO16(eax) */ /* 0x12163413: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12163451; /* 0x12163416: jne 0x12163451 */
L_12163418:
    /* cmp MEM16(esi + (-0x40)), LO16(eax) */ /* 0x12163418: cmp word ptr [esi - 0x40], ax */
    _flag_a = (uint32_t)(MEM16(esi + (-0x40))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12163451; /* 0x1216341C: jne 0x12163451 */
L_1216341E:
    /* cmp MEM16(esi + (-0x30)), LO16(eax) */ /* 0x1216341E: cmp word ptr [esi - 0x30], ax */
    _flag_a = (uint32_t)(MEM16(esi + (-0x30))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12163451; /* 0x12163422: jne 0x12163451 */
L_12163424:
    /* cmp MEM16(esi + (-0x10)), LO16(eax) */ /* 0x12163424: cmp word ptr [esi - 0x10], ax */
    _flag_a = (uint32_t)(MEM16(esi + (-0x10))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12163451; /* 0x12163428: jne 0x12163451 */
L_1216342A:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1216342A: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12163451; /* 0x1216342D: jne 0x12163451 */
L_1216342F:
    /* cmp MEM16(esi + 0x10), LO16(eax) */ /* 0x1216342F: cmp word ptr [esi + 0x10], ax */
    _flag_a = (uint32_t)(MEM16(esi + 0x10)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12163451; /* 0x12163433: jne 0x12163451 */
L_12163435:
    ecx = (int32_t)(int16_t)MEM16(edi + (-0x60)); /* 0x12163435: movsx ecx, word ptr [edi - 0x60] */
    eax = (int32_t)(int16_t)MEM16(esi + (-0x60)); /* 0x12163439: movsx eax, word ptr [esi - 0x60] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1216343D: imul ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12163440: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x12163442: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(edx + (-0x20)) = ecx; /* 0x12163444: mov dword ptr [edx - 0x20], ecx */
    MEM32(edx) = ecx; /* 0x12163447: mov dword ptr [edx], ecx */
    MEM32(edx + 0x40) = ecx; /* 0x12163449: mov dword ptr [edx + 0x40], ecx */
    goto L_1216355B; /* 0x1216344C: jmp 0x1216355b */
L_12163451:
    eax = (int32_t)(int16_t)MEM16(esi + (-0x60)); /* 0x12163451: movsx eax, word ptr [esi - 0x60] */
    ebx = (int32_t)(int16_t)MEM16(edi + (-0x60)); /* 0x12163455: movsx ebx, word ptr [edi - 0x60] */
    edx = (int32_t)(int16_t)MEM16(edi + (-0x40)); /* 0x12163459: movsx edx, word ptr [edi - 0x40] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x1216345D: imul ebx, eax */
    eax = (int32_t)(int16_t)MEM16(esi + (-0x40)); /* 0x12163460: movsx eax, word ptr [esi - 0x40] */
    ecx = (int32_t)(int16_t)MEM16(esi); /* 0x12163464: movsx ecx, word ptr [esi] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x12163467: imul edx, eax */
    eax = (int32_t)(int16_t)MEM16(edi); /* 0x1216346A: movsx eax, word ptr [edi] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3B21u); /* 0x1216346D: imul edx, edx, 0x3b21 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x12163473: imul ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x187Eu); /* 0x12163476: imul ecx, ecx, 0x187e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1216347C: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(edi + (-0x30)); /* 0x1216347E: movsx ecx, word ptr [edi - 0x30] */
    if (14u) _cf = (((ebx) >> 18) & 1u); /* 0x12163482: shl ebx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((ebx << 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 14u; /* 0x12163482: shl ebx, 0xe */
    eax = edx + ebx; /* 0x12163485: lea eax, [edx + ebx] */
    MEM32(ebp + (-0x9C)) = eax; /* 0x12163488: mov dword ptr [ebp - 0x9c], eax */
    eax = (int32_t)(int16_t)MEM16(esi + 0x10); /* 0x1216348E: movsx eax, word ptr [esi + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x12163492: sub ebx, edx */
    _flag_k = FK_CMP;
    edx = (int32_t)(int16_t)MEM16(edi + (-0x10)); /* 0x12163494: movsx edx, word ptr [edi - 0x10] */
    MEM32(ebp + (-0x94)) = ebx; /* 0x12163498: mov dword ptr [ebp - 0x94], ebx */
    ebx = (int32_t)(int16_t)MEM16(edi + 0x10); /* 0x1216349E: movsx ebx, word ptr [edi + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x121634A2: imul ebx, eax */
    eax = (int32_t)(int16_t)MEM16(esi + (-0x10)); /* 0x121634A5: movsx eax, word ptr [esi - 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x121634A9: imul edx, eax */
    eax = (int32_t)(int16_t)MEM16(esi + (-0x30)); /* 0x121634AC: movsx eax, word ptr [esi - 0x30] */
    esi = (int32_t)(int16_t)MEM16(edi + (-0x50)); /* 0x121634B0: movsx esi, word ptr [edi - 0x50] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x121634B4: imul ecx, eax */
    eax = MEM32(ebp + (-0xA4)); /* 0x121634B7: mov eax, dword ptr [ebp - 0xa4] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x121634BD: cwde  */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x121634BE: imul esi, eax */
    eax = ecx; /* 0x121634C1: mov eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1CCDu); /* 0x121634C3: imul ecx, ecx, 0x1ccd */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4587u); /* 0x121634C9: imul eax, eax, 0x4587 */
    edi = edx; /* 0x121634CF: mov edi, edx */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x133Eu); /* 0x121634D1: imul edx, edx, 0x133e */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2E75u); /* 0x121634D7: imul edi, edi, 0x2e75 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x121634DD: sub edi, eax */
    _flag_k = FK_CMP;
    eax = esi; /* 0x121634DF: mov eax, esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x5203u); /* 0x121634E1: imul esi, esi, 0x5203 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x21F9u); /* 0x121634E7: imul eax, eax, 0x21f9 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x121634ED: add edi, eax */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x121634EF: mov eax, ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1050u); /* 0x121634F1: imul ebx, ebx, 0x1050 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C2u); /* 0x121634F7: imul eax, eax, 0x6c2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x121634FD: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x9C)); /* 0x121634FF: mov ecx, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x12163505: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x12163507: sub esi, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0xA0)); /* 0x12163509: mov edx, dword ptr [ebp - 0xa0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1216350F: sub esi, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x90)); /* 0x12163511: mov ebx, dword ptr [ebp - 0x90] */
    eax = ecx + esi + 0x800; /* 0x12163517: lea eax, [ecx + esi + 0x800] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1216351E: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x8C)); /* 0x12163520: mov esi, dword ptr [ebp - 0x8c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x800u; /* 0x12163526: add ecx, 0x800 */
    _flag_k = FK_ADD;
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x1216352C: sar ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 12u);
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x1216352F: sar eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 12u);
    MEM32(edx + 0x40) = ecx; /* 0x12163532: mov dword ptr [edx + 0x40], ecx */
    ecx = MEM32(ebp + (-0x94)); /* 0x12163535: mov ecx, dword ptr [ebp - 0x94] */
    MEM32(edx + (-0x20)) = eax; /* 0x1216353B: mov dword ptr [edx - 0x20], eax */
    eax = ecx + edi + 0x800; /* 0x1216353E: lea eax, [ecx + edi + 0x800] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x12163545: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x88)); /* 0x12163547: mov edi, dword ptr [ebp - 0x88] */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x1216354D: sar eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 12u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x800u; /* 0x12163550: add ecx, 0x800 */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x12163556: mov dword ptr [edx], eax */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x12163558: sar ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 12u);
L_1216355B:
    MEM32(edx + 0x20) = ecx; /* 0x1216355B: mov dword ptr [edx + 0x20], ecx */
L_1216355E:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1216355E: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1216355F: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x12163562: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12163565: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = esi; /* 0x12163568: mov dword ptr [ebp - 0x8c], esi */
    MEM32(ebp + (-0x88)) = edi; /* 0x1216356E: mov dword ptr [ebp - 0x88], edi */
    MEM32(ebp + (-0xA0)) = edx; /* 0x12163574: mov dword ptr [ebp - 0xa0], edx */
    MEM32(ebp + (-0x90)) = ebx; /* 0x1216357A: mov dword ptr [ebp - 0x90], ebx */
    /* test ebx, ebx */ /* 0x12163580: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12163400; /* 0x12163582: jg 0x12163400 */
L_12163588:
    edx = MEM32(ebp + (-0x98)); /* 0x12163588: mov edx, dword ptr [ebp - 0x98] */
    edi = ebp + (-0x84); /* 0x1216358E: lea edi, [ebp - 0x84] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12163594: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8C)) = edi; /* 0x12163596: mov dword ptr [ebp - 0x8c], edi */
    MEM32(ebp + (-0x90)) = eax; /* 0x1216359C: mov dword ptr [ebp - 0x90], eax */
    goto L_121635B0; /* 0x121635A2: jmp 0x121635b0 */
L_121635B0:
    ecx = MEM32(ebp + (-0xAC)); /* 0x121635B0: mov ecx, dword ptr [ebp - 0xac] */
    ecx = MEM32(ecx + eax * 4); /* 0x121635B6: mov ecx, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xA8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xA8)); /* 0x121635B9: add ecx, dword ptr [ebp - 0xa8] */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x4); /* 0x121635BF: mov eax, dword ptr [edi + 4] */
    MEM32(ebp + (-0x94)) = ecx; /* 0x121635C2: mov dword ptr [ebp - 0x94], ecx */
    MEM32(ebp + (-0x88)) = eax; /* 0x121635C8: mov dword ptr [ebp - 0x88], eax */
    /* test eax, eax */ /* 0x121635CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216360B; /* 0x121635D0: jne 0x1216360b */
L_121635D2:
    /* cmp MEM32(edi + 0x8), eax */ /* 0x121635D2: cmp dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216360B; /* 0x121635D5: jne 0x1216360b */
L_121635D7:
    /* cmp MEM32(edi + 0xC), eax */ /* 0x121635D7: cmp dword ptr [edi + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216360B; /* 0x121635DA: jne 0x1216360b */
L_121635DC:
    /* cmp MEM32(edi + 0x14), eax */ /* 0x121635DC: cmp dword ptr [edi + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216360B; /* 0x121635DF: jne 0x1216360b */
L_121635E1:
    /* cmp MEM32(edi + 0x18), eax */ /* 0x121635E1: cmp dword ptr [edi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216360B; /* 0x121635E4: jne 0x1216360b */
L_121635E6:
    /* cmp MEM32(edi + 0x1C), eax */ /* 0x121635E6: cmp dword ptr [edi + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216360B; /* 0x121635E9: jne 0x1216360b */
L_121635EB:
    eax = MEM32(edi); /* 0x121635EB: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x121635ED: add eax, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x121635F0: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121635F3: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + edx)); /* 0x121635F8: mov al, byte ptr [eax + edx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121635FB: mov byte ptr [ecx], al */
    MEM8(ecx + 0x1) = (uint8_t)(LO8(eax)); /* 0x121635FD: mov byte ptr [ecx + 1], al */
    MEM8(ecx + 0x2) = (uint8_t)(LO8(eax)); /* 0x12163600: mov byte ptr [ecx + 2], al */
    MEM8(ecx + 0x3) = (uint8_t)(LO8(eax)); /* 0x12163603: mov byte ptr [ecx + 3], al */
    goto L_12163705; /* 0x12163606: jmp 0x12163705 */
L_1216360B:
    ecx = MEM32(edi + 0x8); /* 0x1216360B: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0x18); /* 0x1216360E: mov eax, dword ptr [edi + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3B21u); /* 0x12163611: imul ecx, ecx, 0x3b21 */
    edx = MEM32(edi); /* 0x12163617: mov edx, dword ptr [edi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x187Eu); /* 0x12163619: imul eax, eax, 0x187e */
    esi = MEM32(edi + 0x1C); /* 0x1216361F: mov esi, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12163622: sub ecx, eax */
    _flag_k = FK_CMP;
    if (14u) _cf = (((edx) >> 18) & 1u); /* 0x12163624: shl edx, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((edx << 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 14u; /* 0x12163624: shl edx, 0xe */
    ebx = ecx + edx; /* 0x12163627: lea ebx, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1216362A: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(edi + 0xC); /* 0x1216362C: mov ecx, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x9C)) = edx; /* 0x1216362F: mov dword ptr [ebp - 0x9c], edx */
    edx = MEM32(edi + 0x14); /* 0x12163635: mov edx, dword ptr [edi + 0x14] */
    eax = ecx; /* 0x12163638: mov eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1CCDu); /* 0x1216363A: imul ecx, ecx, 0x1ccd */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4587u); /* 0x12163640: imul eax, eax, 0x4587 */
    edi = edx; /* 0x12163646: mov edi, edx */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x133Eu); /* 0x12163648: imul edx, edx, 0x133e */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2E75u); /* 0x1216364E: imul edi, edi, 0x2e75 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x12163654: sub edi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x88)); /* 0x12163656: mov eax, dword ptr [ebp - 0x88] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x21F9u); /* 0x1216365C: imul eax, eax, 0x21f9 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x12163662: add edi, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x12163664: mov eax, esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1050u); /* 0x12163666: imul esi, esi, 0x1050 */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C2u); /* 0x1216366C: imul eax, eax, 0x6c2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x12163672: sub edi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x88)); /* 0x12163674: mov eax, dword ptr [ebp - 0x88] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5203u); /* 0x1216367A: imul eax, eax, 0x5203 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12163680: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x9C)); /* 0x12163682: mov ecx, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x12163688: sub eax, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x94)); /* 0x1216368A: mov edx, dword ptr [ebp - 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x12163690: sub eax, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x98)); /* 0x12163692: mov esi, dword ptr [ebp - 0x98] */
    MEM32(ebp + (-0x88)) = eax; /* 0x12163698: mov dword ptr [ebp - 0x88], eax */
    eax = ebx + eax + 0x40000; /* 0x1216369E: lea eax, [ebx + eax + 0x40000] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x88)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x88)); /* 0x121636A5: sub ebx, dword ptr [ebp - 0x88] */
    _flag_k = FK_CMP;
    if (19u) _cf = (((eax) >> 18) & 1u); /* 0x121636AB: sar eax, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 19u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 19u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121636AE: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + esi); /* 0x121636B3: movzx eax, byte ptr [eax + esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x00040000u; /* 0x121636B7: add ebx, 0x40000 */
    _flag_k = FK_ADD;
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x121636BD: mov byte ptr [edx], al */
    if (19u) _cf = (((ebx) >> 18) & 1u); /* 0x121636BF: sar ebx, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 19u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 19u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x121636C2: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(ebx + esi); /* 0x121636C8: movzx eax, byte ptr [ebx + esi] */
    MEM8(edx + 0x3) = (uint8_t)(LO8(eax)); /* 0x121636CC: mov byte ptr [edx + 3], al */
    eax = ecx + edi + 0x40000; /* 0x121636CF: lea eax, [ecx + edi + 0x40000] */
    if (19u) _cf = (((eax) >> 18) & 1u); /* 0x121636D6: sar eax, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 19u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 19u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x121636D9: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x8C)); /* 0x121636DB: mov edi, dword ptr [ebp - 0x8c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121636E1: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + esi); /* 0x121636E6: movzx eax, byte ptr [eax + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x00040000u; /* 0x121636EA: add ecx, 0x40000 */
    _flag_k = FK_ADD;
    if (19u) _cf = (((ecx) >> 18) & 1u); /* 0x121636F0: sar ecx, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 19u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 19u);
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x121636F3: mov byte ptr [edx + 1], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFu);
    ecx = ecx & 0x3FFu; /* 0x121636F6: and ecx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(ecx + esi); /* 0x121636FC: movzx eax, byte ptr [ecx + esi] */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x12163700: mov byte ptr [edx + 2], al */
    edx = esi; /* 0x12163703: mov edx, esi */
L_12163705:
    eax = MEM32(ebp + (-0x90)); /* 0x12163705: mov eax, dword ptr [ebp - 0x90] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1216370B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x1216370C: add edi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8C)) = edi; /* 0x1216370F: mov dword ptr [ebp - 0x8c], edi */
    MEM32(ebp + (-0x90)) = eax; /* 0x12163715: mov dword ptr [ebp - 0x90], eax */
    /* cmp eax, 4 */ /* 0x1216371B: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121635B0; /* 0x1216371E: jl 0x121635b0 */
L_12163724:
    ecx = MEM32(ebp + (-0x4)); /* 0x12163724: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12163727: pop edi */
    esi = POP32_VAL(esp); /* 0x12163728: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12163729: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1216372B: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1216372C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12163731: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12163733: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12163734: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12163740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12163740u);

L_12163740:
    edi = edi; /* 0x12163740: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12163742: push ebp */
    ebp = esp; /* 0x12163743: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x12163745: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12163748: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1216374D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1216374F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x12163752: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x58)) = eax; /* 0x12163755: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + 0x18); /* 0x12163758: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x54)) = eax; /* 0x1216375B: mov dword ptr [ebp - 0x54], eax */
    eax = MEM32(ebp + 0x8); /* 0x1216375E: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x12163761: mov eax, dword ptr [eax + 0x148] */
    PUSH32(esp, ebx); /* 0x12163767: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x12163768: sub eax, -0x80 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1216376B: push esi */
    PUSH32(esp, edi); /* 0x1216376C: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1216376D: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x50)) = eax; /* 0x12163770: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + 0xC); /* 0x12163773: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x50); /* 0x12163776: mov ecx, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x30u; /* 0x12163779: add edi, 0x30 */
    _flag_k = FK_ADD;
    edx = ebp + (-0x44); /* 0x1216377C: lea edx, [ebp - 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x1216377F: add ecx, 0x30 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4C)) = edx; /* 0x12163782: mov dword ptr [ebp - 0x4c], edx */
    ebx = 8; /* 0x12163785: mov ebx, 8 */
    MEM32(ebp + (-0x48)) = ecx; /* 0x1216378A: mov dword ptr [ebp - 0x48], ecx */
    ecx = ecx; /* 0x1216378D: lea ecx, [ecx] */
L_12163790:
    /* cmp ebx, 6 */ /* 0x12163790: cmp ebx, 6 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216385A; /* 0x12163793: je 0x1216385a */
L_12163799:
    /* cmp ebx, 4 */ /* 0x12163799: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216385A; /* 0x1216379C: je 0x1216385a */
L_121637A2:
    /* cmp ebx, 2 */ /* 0x121637A2: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216385A; /* 0x121637A5: je 0x1216385a */
L_121637AB:
    eax = (uint32_t)MEM16(edi + (-0x20)); /* 0x121637AB: movzx eax, word ptr [edi - 0x20] */
    /* test LO16(eax), LO16(eax) */ /* 0x121637AF: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121637DB; /* 0x121637B2: jne 0x121637db */
L_121637B4:
    /* cmp MEM16(edi), LO16(eax) */ /* 0x121637B4: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121637DB; /* 0x121637B7: jne 0x121637db */
L_121637B9:
    /* cmp MEM16(edi + 0x20), LO16(eax) */ /* 0x121637B9: cmp word ptr [edi + 0x20], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x20)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121637DB; /* 0x121637BD: jne 0x121637db */
L_121637BF:
    /* cmp MEM16(edi + 0x40), LO16(eax) */ /* 0x121637BF: cmp word ptr [edi + 0x40], ax */
    _flag_a = (uint32_t)(MEM16(edi + 0x40)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121637DB; /* 0x121637C3: jne 0x121637db */
L_121637C5:
    ecx = (int32_t)(int16_t)MEM16(ecx + (-0x30)); /* 0x121637C5: movsx ecx, word ptr [ecx - 0x30] */
    eax = (int32_t)(int16_t)MEM16(edi + (-0x30)); /* 0x121637C9: movsx eax, word ptr [edi - 0x30] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x121637CD: imul ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x121637D0: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x121637D2: add ecx, ecx */
    _flag_k = FK_ADD;
    MEM32(edx) = ecx; /* 0x121637D4: mov dword ptr [edx], ecx */
    MEM32(edx + 0x20) = ecx; /* 0x121637D6: mov dword ptr [edx + 0x20], ecx */
    goto L_12163857; /* 0x121637D9: jmp 0x12163857 */
L_121637DB:
    esi = (int32_t)(int16_t)MEM16(ecx + (-0x30)); /* 0x121637DB: movsx esi, word ptr [ecx - 0x30] */
    edx = (int32_t)(int16_t)MEM16(ecx + 0x20); /* 0x121637DF: movsx edx, word ptr [ecx + 0x20] */
    eax = (int32_t)(int16_t)MEM16(edi + (-0x30)); /* 0x121637E3: movsx eax, word ptr [edi - 0x30] */
    ecx = (int32_t)(int16_t)MEM16(ecx + 0x40); /* 0x121637E7: movsx ecx, word ptr [ecx + 0x40] */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x121637EB: imul esi, eax */
    eax = (int32_t)(int16_t)MEM16(edi + 0x20); /* 0x121637EE: movsx eax, word ptr [edi + 0x20] */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax); /* 0x121637F2: imul edx, eax */
    eax = (int32_t)(int16_t)MEM16(edi + 0x40); /* 0x121637F5: movsx eax, word ptr [edi + 0x40] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1B37u); /* 0x121637F9: imul edx, edx, 0x1b37 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x121637FF: imul ecx, eax */
    eax = MEM32(ebp + (-0x48)); /* 0x12163802: mov eax, dword ptr [ebp - 0x48] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1712u); /* 0x12163805: imul ecx, ecx, 0x1712 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1216380B: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(eax + (-0x20)); /* 0x1216380D: movsx ecx, word ptr [eax - 0x20] */
    eax = (uint32_t)MEM16(edi + (-0x20)); /* 0x12163811: movzx eax, word ptr [edi - 0x20] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x12163815: cwde  */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x12163816: imul ecx, eax */
    eax = MEM32(ebp + (-0x48)); /* 0x12163819: mov eax, dword ptr [ebp - 0x48] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x73FCu); /* 0x1216381C: imul ecx, ecx, 0x73fc */
    eax = (int32_t)(int16_t)MEM16(eax); /* 0x12163822: movsx eax, word ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x12163825: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int16_t)MEM16(edi); /* 0x12163827: movsx ecx, word ptr [edi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1216382A: imul ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x28BAu); /* 0x1216382D: imul ecx, ecx, 0x28ba */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12163833: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4C)); /* 0x12163835: mov ecx, dword ptr [ebp - 0x4c] */
    if (15u) _cf = (((esi) >> 17) & 1u); /* 0x12163838: shl esi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((esi << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 15u; /* 0x12163838: shl esi, 0xf */
    eax = edx + esi + 0x1000; /* 0x1216383B: lea eax, [edx + esi + 0x1000] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x12163842: sub esi, edx */
    _flag_k = FK_CMP;
    if (13u) _cf = (((eax) >> 12) & 1u); /* 0x12163844: sar eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 13u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1000u; /* 0x12163847: add esi, 0x1000 */
    _flag_k = FK_ADD;
    if (13u) _cf = (((esi) >> 12) & 1u); /* 0x1216384D: sar esi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 13u);
    edx = ecx; /* 0x12163850: mov edx, ecx */
    MEM32(ecx) = eax; /* 0x12163852: mov dword ptr [ecx], eax */
    MEM32(edx + 0x20) = esi; /* 0x12163854: mov dword ptr [edx + 0x20], esi */
L_12163857:
    ecx = MEM32(ebp + (-0x48)); /* 0x12163857: mov ecx, dword ptr [ebp - 0x48] */
L_1216385A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1216385A: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1216385D: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x12163860: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x12163861: add edi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x48)) = ecx; /* 0x12163864: mov dword ptr [ebp - 0x48], ecx */
    MEM32(ebp + (-0x4C)) = edx; /* 0x12163867: mov dword ptr [ebp - 0x4c], edx */
    /* test ebx, ebx */ /* 0x1216386A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12163790; /* 0x1216386C: jg 0x12163790 */
L_12163872:
    esi = ebp + (-0x44); /* 0x12163872: lea esi, [ebp - 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12163875: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12163877:
    eax = MEM32(ebp + (-0x58)); /* 0x12163877: mov eax, dword ptr [ebp - 0x58] */
    edi = MEM32(eax + ebx * 4); /* 0x1216387A: mov edi, dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x54)); /* 0x1216387D: add edi, dword ptr [ebp - 0x54] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x4); /* 0x12163880: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0x48)) = edi; /* 0x12163883: mov dword ptr [ebp - 0x48], edi */
    /* test eax, eax */ /* 0x12163886: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121638B0; /* 0x12163888: jne 0x121638b0 */
L_1216388A:
    /* cmp MEM32(esi + 0xC), eax */ /* 0x1216388A: cmp dword ptr [esi + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121638B0; /* 0x1216388D: jne 0x121638b0 */
L_1216388F:
    /* cmp MEM32(esi + 0x14), eax */ /* 0x1216388F: cmp dword ptr [esi + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121638B0; /* 0x12163892: jne 0x121638b0 */
L_12163894:
    /* cmp MEM32(esi + 0x1C), eax */ /* 0x12163894: cmp dword ptr [esi + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121638B0; /* 0x12163897: jne 0x121638b0 */
L_12163899:
    eax = MEM32(esi); /* 0x12163899: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x50)); /* 0x1216389B: mov ecx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1216389E: add eax, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x121638A1: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121638A4: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + ecx)); /* 0x121638A9: mov al, byte ptr [eax + ecx] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x121638AC: mov byte ptr [edi], al */
    goto L_12163912; /* 0x121638AE: jmp 0x12163912 */
L_121638B0:
    eax = MEM32(esi + 0xC); /* 0x121638B0: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(esi + 0x14); /* 0x121638B3: mov ecx, dword ptr [esi + 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x28BAu); /* 0x121638B6: imul eax, eax, 0x28ba */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1B37u); /* 0x121638BC: imul ecx, ecx, 0x1b37 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121638C2: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x1C); /* 0x121638C4: mov eax, dword ptr [esi + 0x1c] */
    edx = MEM32(esi); /* 0x121638C7: mov edx, dword ptr [esi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1712u); /* 0x121638C9: imul eax, eax, 0x1712 */
    edi = MEM32(ebp + (-0x50)); /* 0x121638CF: mov edi, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121638D2: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x4); /* 0x121638D4: mov eax, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x73FCu); /* 0x121638D7: imul eax, eax, 0x73fc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x121638DD: add ecx, eax */
    _flag_k = FK_ADD;
    if (15u) _cf = (((edx) >> 17) & 1u); /* 0x121638DF: shl edx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edx << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 15u; /* 0x121638DF: shl edx, 0xf */
    eax = ecx + edx + 0x80000; /* 0x121638E2: lea eax, [ecx + edx + 0x80000] */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x121638E9: sar eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 20u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 20u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x121638EC: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(eax + edi); /* 0x121638F1: movzx eax, byte ptr [eax + edi] */
    edi = MEM32(ebp + (-0x48)); /* 0x121638F5: mov edi, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121638F8: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00080000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x00080000u; /* 0x121638FA: add edx, 0x80000 */
    _flag_k = FK_ADD;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x12163900: mov byte ptr [edi], al */
    eax = MEM32(ebp + (-0x50)); /* 0x12163902: mov eax, dword ptr [ebp - 0x50] */
    if (20u) _cf = (((edx) >> 19) & 1u); /* 0x12163905: sar edx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 20u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 20u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x12163908: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edx + eax); /* 0x1216390E: movzx eax, byte ptr [edx + eax] */
L_12163912:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12163912: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x12163913: add esi, 0x20 */
    _flag_k = FK_ADD;
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x12163916: mov byte ptr [edi + 1], al */
    /* cmp ebx, 2 */ /* 0x12163919: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12163877; /* 0x1216391C: jl 0x12163877 */
L_12163922:
    ecx = MEM32(ebp + (-0x4)); /* 0x12163922: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12163925: pop edi */
    esi = POP32_VAL(esp); /* 0x12163926: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12163927: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12163929: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1216392A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1216392F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12163931: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12163932: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12163940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12163940u);

L_12163940:
    edi = edi; /* 0x12163940: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12163942: push ebp */
    ebp = esp; /* 0x12163943: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12163945: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x50); /* 0x12163948: mov eax, dword ptr [eax + 0x50] */
    PUSH32(esp, esi); /* 0x1216394B: push esi */
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x1216394C: movsx esi, word ptr [eax] */
    eax = MEM32(ebp + 0x10); /* 0x1216394F: mov eax, dword ptr [ebp + 0x10] */
    eax = (int32_t)(int16_t)MEM16(eax); /* 0x12163952: movsx eax, word ptr [eax] */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x12163955: imul esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x12163958: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x148); /* 0x1216395B: mov ecx, dword ptr [eax + 0x148] */
    eax = MEM32(ebp + 0x14); /* 0x12163961: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(eax); /* 0x12163964: mov edx, dword ptr [eax] */
    eax = MEM32(ebp + 0x18); /* 0x12163966: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x12163969: add esi, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x1216396C: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x1216396F: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(esi + ecx + 0x80)); /* 0x12163975: mov cl, byte ptr [esi + ecx + 0x80] */
    MEM8(eax + edx) = (uint8_t)(LO8(ecx)); /* 0x1216397C: mov byte ptr [eax + edx], cl */
    esi = POP32_VAL(esp); /* 0x1216397F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12163980: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12163981: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12163990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12163990u);

L_12163990:
    edi = edi; /* 0x12163990: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12163992: push ebp */
    ebp = esp; /* 0x12163993: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12163995: push ebx */
    PUSH32(esp, edi); /* 0x12163996: push edi */
    eax = MEM32(ebp + 0xC); /* 0x12163997: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x1216399A: mov ecx, dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x1216399D: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x10); /* 0x121639A0: mov ebx, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x121639A3: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x121639A3: shr edi, 2 */
    edx = MEM32(ebp + 0x18); /* 0x121639A6: mov edx, dword ptr [ebp + 0x18] */
L_121639A9:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(eax)); /* 0x121639A9: movd mm0, dword ptr [eax] */
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x121639AC: pxor mm7, mm7 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(ebx)); /* 0x121639AF: movd mm2, dword ptr [ebx] */
    _mm[0] = mmx_punpcklbw(_mm[0], _mm[7]); /* 0x121639B2: punpcklbw mm0, mm7 */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx)); /* 0x121639B5: movd mm3, dword ptr [ecx] */
    _mm[2] = mmx_punpcklbw(_mm[2], _mm[7]); /* 0x121639B8: punpcklbw mm2, mm7 */
    _mm[2] = mmx_psubsw(_mm[2], MEM64(0x12013460)); /* 0x121639BB: psubsw mm2, qword ptr [0x12013460] */
    _mm[3] = mmx_punpcklbw(_mm[3], _mm[7]); /* 0x121639C2: punpcklbw mm3, mm7 */
    _mm[3] = mmx_psubsw(_mm[3], MEM64(0x12013460)); /* 0x121639C5: psubsw mm3, qword ptr [0x12013460] */
    _mm[4] = _mm[2]; /* 0x121639CC: movq mm4, mm2 */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[3]); /* 0x121639CF: punpcklwd mm2, mm3 */
    _mm[1] = _mm[0]; /* 0x121639D2: movq mm1, mm0 */
    _mm[2] = mmx_pmaddwd(_mm[2], MEM64(0x12013468)); /* 0x121639D5: pmaddwd mm2, qword ptr [0x12013468] */
    _mm[1] = mmx_psllw(_mm[1], 8); /* 0x121639DC: psllw mm1, 8 */
    _mm[6] = _mm[1]; /* 0x121639E0: movq mm6, mm1 */
    _mm[1] = mmx_punpcklwd(_mm[1], _mm[7]); /* 0x121639E3: punpcklwd mm1, mm7 */
    _mm[6] = mmx_punpckhwd(_mm[6], _mm[7]); /* 0x121639E6: punpckhwd mm6, mm7 */
    _mm[5] = _mm[4]; /* 0x121639E9: movq mm5, mm4 */
    _mm[5] = mmx_punpckhwd(_mm[5], _mm[3]); /* 0x121639EC: punpckhwd mm5, mm3 */
    _mm[2] = mmx_paddd(_mm[2], _mm[1]); /* 0x121639EF: paddd mm2, mm1 */
    _mm[5] = mmx_pmaddwd(_mm[5], MEM64(0x12013468)); /* 0x121639F2: pmaddwd mm5, qword ptr [0x12013468] */
    _mm[1] = _mm[3]; /* 0x121639F9: movq mm1, mm3 */
    _mm[3] = mmx_punpcklwd(_mm[3], _mm[0]); /* 0x121639FC: punpcklwd mm3, mm0 */
    _mm[7] = _mm[4]; /* 0x121639FF: movq mm7, mm4 */
    _mm[3] = mmx_pmaddwd(_mm[3], MEM64(0x12013470)); /* 0x12163A02: pmaddwd mm3, qword ptr [0x12013470] */
    _mm[2] = mmx_psrad(_mm[2], 8); /* 0x12163A09: psrad mm2, 8 */
    _mm[5] = mmx_paddd(_mm[5], _mm[6]); /* 0x12163A0D: paddd mm5, mm6 */
    _mm[4] = mmx_punpcklwd(_mm[4], _mm[0]); /* 0x12163A10: punpcklwd mm4, mm0 */
    _mm[4] = mmx_pmaddwd(_mm[4], MEM64(0x12013478)); /* 0x12163A13: pmaddwd mm4, qword ptr [0x12013478] */
    _mm[5] = mmx_psrad(_mm[5], 8); /* 0x12163A1A: psrad mm5, 8 */
    _mm[3] = mmx_psrad(_mm[3], 8); /* 0x12163A1E: psrad mm3, 8 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[0]); /* 0x12163A22: punpckhwd mm7, mm0 */
    _mm[4] = mmx_psrad(_mm[4], 8); /* 0x12163A25: psrad mm4, 8 */
    _mm[6] = _mm[3]; /* 0x12163A29: movq mm6, mm3 */
    _mm[7] = mmx_pmaddwd(_mm[7], MEM64(0x12013478)); /* 0x12163A2C: pmaddwd mm7, qword ptr [0x12013478] */
    _mm[1] = mmx_punpckhwd(_mm[1], _mm[0]); /* 0x12163A33: punpckhwd mm1, mm0 */
    _mm[1] = mmx_pmaddwd(_mm[1], MEM64(0x12013470)); /* 0x12163A36: pmaddwd mm1, qword ptr [0x12013470] */
    _mm[3] = mmx_punpckldq(_mm[3], _mm[2]); /* 0x12163A3D: punpckldq mm3, mm2 */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[2]); /* 0x12163A40: punpckhdq mm6, mm2 */
    _mm[0] = _mm[4]; /* 0x12163A43: movq mm0, mm4 */
    _mm[7] = mmx_psrad(_mm[7], 8); /* 0x12163A46: psrad mm7, 8 */
    _mm[4] = mmx_punpckldq(_mm[4], MEM64(0x12013458)); /* 0x12163A4A: punpckldq mm4, dword ptr [0x12013458] */
    _mm[0] = mmx_punpckhdq(_mm[0], MEM64(0x12013458)); /* 0x12163A51: punpckhdq mm0, qword ptr [0x12013458] */
    _mm[1] = mmx_psrad(_mm[1], 8); /* 0x12163A58: psrad mm1, 8 */
    _mm[3] = mmx_packssdw(_mm[3], _mm[4]); /* 0x12163A5C: packssdw mm3, mm4 */
    _mm[2] = _mm[1]; /* 0x12163A5F: movq mm2, mm1 */
    _mm[6] = mmx_packssdw(_mm[6], _mm[0]); /* 0x12163A62: packssdw mm6, mm0 */
    _mm[3] = mmx_packuswb(_mm[3], _mm[6]); /* 0x12163A65: packuswb mm3, mm6 */
    _mm[2] = mmx_punpckldq(_mm[2], _mm[5]); /* 0x12163A68: punpckldq mm2, mm5 */
    _mm[4] = _mm[7]; /* 0x12163A6B: movq mm4, mm7 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[5]); /* 0x12163A6E: punpckhdq mm1, mm5 */
    _mm[7] = mmx_punpckldq(_mm[7], MEM64(0x12013458)); /* 0x12163A71: punpckldq mm7, dword ptr [0x12013458] */
    _mm[4] = mmx_punpckhdq(_mm[4], MEM64(0x12013458)); /* 0x12163A78: punpckhdq mm4, qword ptr [0x12013458] */
    _mm[0] = _mm[3]; /* 0x12163A7F: movq mm0, mm3 */
    _mm[2] = mmx_packssdw(_mm[2], _mm[7]); /* 0x12163A82: packssdw mm2, mm7 */
    _mm[3] = (_mm[3] & MEM64(0x12013480)); /* 0x12163A85: pand mm3, qword ptr [0x12013480] */
    _mm[1] = mmx_packssdw(_mm[1], _mm[4]); /* 0x12163A8C: packssdw mm1, mm4 */
    _mm[3] = mmx_psrlq(_mm[3], 8); /* 0x12163A8F: psrlq mm3, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x12163A93: add edx, 0xc */
    _flag_k = FK_ADD;
    _mm[0] = (_mm[0] | _mm[3]); /* 0x12163A96: por mm0, mm3 */
    _mm[2] = mmx_packuswb(_mm[2], _mm[1]); /* 0x12163A99: packuswb mm2, mm1 */
    _mm[3] = mmx_psrlq(_mm[3], 32); /* 0x12163A9C: psrlq mm3, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12163AA0: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(edx + (-0xC)) = (uint32_t)_mm[0]; /* 0x12163AA3: movd dword ptr [edx - 0xc], mm0 */
    _mm[3] = mmx_punpcklwd(_mm[3], _mm[2]); /* 0x12163AA7: punpcklwd mm3, mm2 */
    _mm[2] = mmx_psrlq(_mm[2], 24); /* 0x12163AAA: psrlq mm2, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12163AAE: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(edx + (-0x8)) = (uint32_t)_mm[3]; /* 0x12163AB1: movd dword ptr [edx - 8], mm3 */
    _mm[3] = mmx_psrlq(_mm[3], 48); /* 0x12163AB5: psrlq mm3, 0x30 */
    _mm[2] = (_mm[2] | _mm[3]); /* 0x12163AB9: por mm2, mm3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12163ABC: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(edx + (-0x4)) = (uint32_t)_mm[2]; /* 0x12163ABF: movd dword ptr [edx - 4], mm2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x12163AC3: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121639A9; /* 0x12163AC4: jne 0x121639a9 */
L_12163ACA:
    edi = POP32_VAL(esp); /* 0x12163ACA: pop edi */
    ebx = POP32_VAL(esp); /* 0x12163ACB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12163ACC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12163ACD: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12163AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12163AE0u);

L_12163AE0:
    edi = edi; /* 0x12163AE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12163AE2: push ebp */
    ebp = esp; /* 0x12163AE3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12163AE5: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x120134A0)); /* 0x12163AE8: fld qword ptr [0x120134a0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x12163AEE: sub esp, 0x1c */
    _flag_k = FK_CMP;
    edx = 7; /* 0x12163AF1: mov edx, 7 */
    ecx = eax + 0x8; /* 0x12163AF6: lea ecx, [eax + 8] */
L_12163AF9:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x12163AF9: fld dword ptr [ecx - 8] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x14); /* 0x12163AFC: fadd dword ptr [ecx + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12163AFF: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x12163B02: fld dword ptr [ecx - 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x14); /* 0x12163B05: fsub dword ptr [ecx + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12163B08: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x12163B0B: fld dword ptr [ecx + 0x10] */
    _st[0] += (double)*(float*)ADDR(ecx + (-0x4)); /* 0x12163B0E: fadd dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12163B11: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x12163B14: fld dword ptr [ecx - 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x10); /* 0x12163B17: fsub dword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12163B1A: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12163B1D: fld dword ptr [ecx + 0xc] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x12163B20: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12163B22: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12163B25: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0xC); /* 0x12163B27: fsub dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12163B2A: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12163B2D: fld dword ptr [ecx + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x12163B30: fadd dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163B33: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12163B36: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x12163B39: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12163B3C: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163B3F: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163B42: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12163B44: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12163B47: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163B49: faddp st(2) */
    fp_xch(1); /* 0x12163B4B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163B4D: fstp dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12163B50: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12163B52: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12163B55: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12163B58: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12163B5A: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12163B5D: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163B5F: faddp st(2) */
    fp_xch(1); /* 0x12163B61: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12163B63: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12163B66: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12163B69: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163B6B: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163B6E: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163B70: faddp st(2) */
    fp_xch(1); /* 0x12163B72: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x8)) = _v; } /* 0x12163B74: fstp dword ptr [ecx - 8] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12163B77: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x12163B79: fstp dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12163B7C: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163B7E: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163B81: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12163B84: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12163B87: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163B89: faddp st(2) */
    fp_xch(1); /* 0x12163B8B: fxch st(1) */
    _st[0] *= _st[2]; /* 0x12163B8D: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163B8F: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163B92: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163B95: fld st(0) */
    _st[0] += _st[2]; /* 0x12163B97: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x12163B99: fstp dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12163B9B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x12163B9D: fstp dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12163BA0: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12163BA3: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12163BA6: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163BA8: faddp st(2) */
    fp_xch(1); /* 0x12163BAA: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163BAC: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12163BAF: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12163BB2: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12163BB4: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12163BB7: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163BB9: faddp st(2) */
    fp_xch(1); /* 0x12163BBB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12163BBD: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163BC0: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163BC3: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12163BC5: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12163BC8: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12163BCA: fsubp st(2) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x12163BCC: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12163BCF: dec edx */
    _flag_k = FK_DEC;
    fp_push(*(double*)ADDR(0x12013498)); /* 0x12163BD0: fld qword ptr [0x12013498] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12163BD6: fmulp st(2) */
    fp_xch(1); /* 0x12163BD8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163BDA: fstp dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x12013490)); /* 0x12163BDD: fld qword ptr [0x12013490] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12163BE3: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163BE5: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163BE8: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12163BEA: faddp st(3) */
    fp_xch(2); /* 0x12163BEC: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12163BEE: fstp dword ptr [ebp - 0x1c] */
    _st[0] *= *(double*)ADDR(0x12013488); /* 0x12163BF1: fmul qword ptr [0x12013488] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12163BF7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12163BF9: fstp dword ptr [ebp - 0x14] */
    fp_xch(2); /* 0x12163BFC: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12163BFE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163C00: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163C03: fld dword ptr [ebp + 8] */
    _st[0] *= _st[2]; /* 0x12163C06: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163C08: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163C0B: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163C0E: fld st(0) */
    _st[0] += _st[2]; /* 0x12163C10: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12163C12: fstp dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12163C15: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163C17: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163C1A: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163C1D: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12163C1F: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12163C22: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163C24: faddp st(2) */
    fp_xch(1); /* 0x12163C26: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x14)) = _v; } /* 0x12163C28: fstp dword ptr [ecx - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12163C2B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x1C)) = _v; } /* 0x12163C2D: fstp dword ptr [ecx - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12163C30: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12163C33: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12163C35: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12163C38: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163C3A: faddp st(2) */
    fp_xch(1); /* 0x12163C3C: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x24)) = _v; } /* 0x12163C3E: fstp dword ptr [ecx - 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12163C41: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0xC)) = _v; } /* 0x12163C43: fstp dword ptr [ecx - 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12163AF9; /* 0x12163C46: jns 0x12163af9 */
L_12163C4C:
    ecx = 7; /* 0x12163C4C: mov ecx, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x12163C51: add eax, 0x40 */
    _flag_k = FK_ADD;
L_12163C54:
    fp_push(*(float*)&MEM32(eax + (-0x40))); /* 0x12163C54: fld dword ptr [eax - 0x40] */
    _st[0] += (double)*(float*)ADDR(eax + 0xA0); /* 0x12163C57: fadd dword ptr [eax + 0xa0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12163C5D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x40))); /* 0x12163C60: fld dword ptr [eax - 0x40] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xA0); /* 0x12163C63: fsub dword ptr [eax + 0xa0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12163C69: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x80)); /* 0x12163C6C: fld dword ptr [eax + 0x80] */
    _st[0] += (double)*(float*)ADDR(eax + (-0x20)); /* 0x12163C72: fadd dword ptr [eax - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12163C75: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + (-0x20))); /* 0x12163C78: fld dword ptr [eax - 0x20] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x80); /* 0x12163C7B: fsub dword ptr [eax + 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12163C81: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x60)); /* 0x12163C84: fld dword ptr [eax + 0x60] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x12163C87: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12163C89: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12163C8C: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x60); /* 0x12163C8E: fsub dword ptr [eax + 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12163C91: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x40)); /* 0x12163C94: fld dword ptr [eax + 0x40] */
    _st[0] += (double)*(float*)ADDR(eax + 0x20); /* 0x12163C97: fadd dword ptr [eax + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163C9A: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x12163C9D: fld dword ptr [eax + 0x20] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x40); /* 0x12163CA0: fsub dword ptr [eax + 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12163CA3: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163CA6: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163CA9: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12163CAB: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12163CAE: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163CB0: faddp st(2) */
    fp_xch(1); /* 0x12163CB2: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163CB4: fstp dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12163CB7: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12163CB9: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12163CBC: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12163CBF: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12163CC1: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12163CC4: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163CC6: faddp st(2) */
    fp_xch(1); /* 0x12163CC8: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12163CCA: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12163CCD: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12163CD0: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163CD2: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163CD5: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163CD7: faddp st(2) */
    fp_xch(1); /* 0x12163CD9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x40)) = _v; } /* 0x12163CDB: fstp dword ptr [eax - 0x40] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12163CDE: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x40) = _v; } /* 0x12163CE0: fstp dword ptr [eax + 0x40] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12163CE3: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163CE5: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163CE8: fld dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12163CEB: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12163CEE: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163CF0: faddp st(2) */
    fp_xch(1); /* 0x12163CF2: fxch st(1) */
    _st[0] *= _st[2]; /* 0x12163CF4: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163CF6: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163CF9: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163CFC: fld st(0) */
    _st[0] += _st[2]; /* 0x12163CFE: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12163D00: fstp dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12163D02: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x80) = _v; } /* 0x12163D04: fstp dword ptr [eax + 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12163D0A: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12163D0D: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12163D10: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163D12: faddp st(2) */
    fp_xch(1); /* 0x12163D14: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163D16: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12163D19: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12163D1C: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12163D1E: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12163D21: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163D23: faddp st(2) */
    fp_xch(1); /* 0x12163D25: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12163D27: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163D2A: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163D2D: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12163D2F: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12163D32: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12163D34: fsubp st(2) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12163D36: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12163D39: dec ecx */
    _flag_k = FK_DEC;
    fp_push(*(double*)ADDR(0x12013498)); /* 0x12163D3A: fld qword ptr [0x12013498] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12163D40: fmulp st(2) */
    fp_xch(1); /* 0x12163D42: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163D44: fstp dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x12013490)); /* 0x12163D47: fld qword ptr [0x12013490] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12163D4D: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163D4F: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163D52: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12163D54: faddp st(3) */
    fp_xch(2); /* 0x12163D56: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12163D58: fstp dword ptr [ebp - 0x1c] */
    _st[0] *= *(double*)ADDR(0x12013488); /* 0x12163D5B: fmul qword ptr [0x12013488] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12163D61: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12163D63: fstp dword ptr [ebp - 0x14] */
    fp_xch(2); /* 0x12163D66: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12163D68: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163D6A: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163D6D: fld dword ptr [ebp + 8] */
    _st[0] *= _st[2]; /* 0x12163D70: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163D72: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163D75: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163D78: fld st(0) */
    _st[0] += _st[2]; /* 0x12163D7A: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12163D7C: fstp dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12163D7F: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12163D81: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12163D84: fld dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12163D87: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12163D89: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12163D8C: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163D8E: faddp st(2) */
    fp_xch(1); /* 0x12163D90: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x5C) = _v; } /* 0x12163D92: fstp dword ptr [eax + 0x5c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12163D95: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12163D97: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12163D9A: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12163D9D: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12163D9F: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12163DA2: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12163DA4: faddp st(2) */
    fp_xch(1); /* 0x12163DA6: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x24)) = _v; } /* 0x12163DA8: fstp dword ptr [eax - 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12163DAB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x9C) = _v; } /* 0x12163DAD: fstp dword ptr [eax + 0x9c] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12163C54; /* 0x12163DB3: jns 0x12163c54 */
L_12163DB9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12163DB9: fstp st(0) */
    esp = ebp; /* 0x12163DBB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12163DBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12163DBE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12163DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12163DD0u);

L_12163DD0:
    edi = edi; /* 0x12163DD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12163DD2: push ebp */
    ebp = esp; /* 0x12163DD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x12163DD5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12163DD8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12163DD9: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12163DDC: push esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12163DDD: add ebx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12163DE0: push edi */
    MEM32(ebp + (-0x14)) = 7; /* 0x12163DE1: mov dword ptr [ebp - 0x14], 7 */
    MEM32(ebp + (-0x4)) = ebx; /* 0x12163DE8: mov dword ptr [ebp - 4], ebx */
    goto L_12163DF0; /* 0x12163DEB: jmp 0x12163df0 */
L_12163DF0:
    edx = (uint32_t)MEM16(ebx + 0xA); /* 0x12163DF0: movzx edx, word ptr [ebx + 0xa] */
    ecx = (uint32_t)MEM16(ebx + (-0x4)); /* 0x12163DF4: movzx ecx, word ptr [ebx - 4] */
    eax = ecx + edx; /* 0x12163DF8: lea eax, [ecx + edx] */
    eax = (uint32_t)LO16(eax); /* 0x12163DFB: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12163DFE: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)MEM16(ebx + 0x8); /* 0x12163E00: movzx edx, word ptr [ebx + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x12163E04: mov dword ptr [ebp - 0x18], eax */
    eax = (uint32_t)LO16(ecx); /* 0x12163E07: movzx eax, cx */
    ecx = (uint32_t)MEM16(ebx + (-0x2)); /* 0x12163E0A: movzx ecx, word ptr [ebx - 2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x12163E0E: mov dword ptr [ebp - 0x10], eax */
    eax = ecx + edx; /* 0x12163E11: lea eax, [ecx + edx] */
    eax = (uint32_t)LO16(eax); /* 0x12163E14: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12163E17: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)MEM16(ebx); /* 0x12163E19: movzx edx, word ptr [ebx] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12163E1C: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)LO16(ecx); /* 0x12163E1F: movzx eax, cx */
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x12163E22: movzx ecx, word ptr [ebx + 6] */
    MEM32(ebp + (-0x20)) = eax; /* 0x12163E26: mov dword ptr [ebp - 0x20], eax */
    eax = ecx + edx; /* 0x12163E29: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12163E2C: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(ebx + 0x2); /* 0x12163E2E: movzx ecx, word ptr [ebx + 2] */
    edi = (uint32_t)LO16(eax); /* 0x12163E32: movzx edi, ax */
    eax = (uint32_t)LO16(edx); /* 0x12163E35: movzx eax, dx */
    edx = (uint32_t)MEM16(ebx + 0x4); /* 0x12163E38: movzx edx, word ptr [ebx + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12163E3C: mov dword ptr [ebp - 0xc], eax */
    eax = ecx + edx; /* 0x12163E3F: lea eax, [ecx + edx] */
    esi = (uint32_t)LO16(eax); /* 0x12163E42: movzx esi, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12163E45: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = (uint32_t)LO16(ecx); /* 0x12163E47: movzx ebx, cx */
    ecx = MEM32(ebp + (-0x18)); /* 0x12163E4A: mov ecx, dword ptr [ebp - 0x18] */
    eax = esi + ecx; /* 0x12163E4D: lea eax, [esi + ecx] */
    edx = (uint32_t)LO16(eax); /* 0x12163E50: movzx edx, ax */
    eax = MEM32(ebp + (-0x8)); /* 0x12163E53: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x12163E56: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12163E58: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = (uint32_t)LO16(ecx); /* 0x12163E5A: movzx esi, cx */
    ecx = (uint32_t)LO16(eax); /* 0x12163E5D: movzx ecx, ax */
    eax = ecx + edx; /* 0x12163E60: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12163E63: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x12163E65: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x12163E68: mov ebx, dword ptr [ebp - 4] */
    MEM16(ebx + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x12163E6B: mov word ptr [ebx - 4], ax */
    eax = ebx; /* 0x12163E6F: mov eax, ebx */
    MEM16(eax + 0x4) = (uint16_t)(LO16(edx)); /* 0x12163E71: mov word ptr [eax + 4], dx */
    eax = MEM32(ebp + (-0x8)); /* 0x12163E75: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x12163E78: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x12163E7A: movsx ecx, ax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x12163E7D: movsx eax, si */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12163E80: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5u); /* 0x12163E82: imul ecx, ecx, 0xb5 */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12163E88: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    ecx = (uint32_t)LO16(ecx); /* 0x12163E8B: movzx ecx, cx */
    eax = ecx + esi; /* 0x12163E8E: lea eax, [ecx + esi] */
    edx = ebx; /* 0x12163E91: mov edx, ebx */
    ebx = MEM32(ebp + (-0x20)); /* 0x12163E93: mov ebx, dword ptr [ebp - 0x20] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x12163E96: mov word ptr [edx], ax */
    eax = MEM32(ebp + (-0xC)); /* 0x12163E99: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x12163E9C: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x12163E9F: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(eax); /* 0x12163EA1: movzx ecx, ax */
    eax = MEM32(ebp + (-0x10)); /* 0x12163EA4: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12163EA7: add eax, ebx */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x12163EA9: movzx eax, ax */
    MEM16(edx + 0x8) = (uint16_t)(LO16(esi)); /* 0x12163EAC: mov word ptr [edx + 8], si */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x12163EB0: movsx edx, ax */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x12163EB3: movsx ecx, cx */
    eax = ecx; /* 0x12163EB6: mov eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8Bu); /* 0x12163EB8: imul ecx, ecx, 0x8b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x12163EBE: sub eax, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x14Eu); /* 0x12163EC0: imul edx, edx, 0x14e */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x62u); /* 0x12163EC6: imul eax, eax, 0x62 */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x12163EC9: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    eax = (uint32_t)LO16(eax); /* 0x12163ECC: movzx eax, ax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12163ECF: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x12163ED2: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12163ED5: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x12163ED7: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0xC)); /* 0x12163ED9: mov eax, dword ptr [ebp - 0xc] */
    esi = (uint32_t)LO16(ecx); /* 0x12163EDC: movzx esi, cx */
    edi = (uint32_t)LO16(edx); /* 0x12163EDF: movzx edi, dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12163EE2: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x10)); /* 0x12163EE4: mov ebx, dword ptr [ebp - 0x10] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x12163EE7: cwde  */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB5u); /* 0x12163EE8: imul eax, eax, 0xb5 */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x12163EEE: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    ecx = (uint32_t)LO16(eax); /* 0x12163EF1: movzx ecx, ax */
    eax = ecx + ebx; /* 0x12163EF4: lea eax, [ecx + ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x12163EF7: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(ebx); /* 0x12163EF9: movzx ecx, bx */
    ebx = MEM32(ebp + (-0x4)); /* 0x12163EFC: mov ebx, dword ptr [ebp - 4] */
    edx = (uint32_t)LO16(eax); /* 0x12163EFF: movzx edx, ax */
    eax = ecx + esi; /* 0x12163F02: lea eax, [ecx + esi] */
    MEM16(ebx + 0x6) = (uint16_t)(LO16(eax)); /* 0x12163F05: mov word ptr [ebx + 6], ax */
    eax = edx + edi; /* 0x12163F09: lea eax, [edx + edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12163F0C: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x12163F0E: sub edx, edi */
    _flag_k = FK_CMP;
    MEM16(ebx + 0x2) = (uint16_t)(LO16(ecx)); /* 0x12163F10: mov word ptr [ebx + 2], cx */
    MEM16(ebx + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x12163F14: mov word ptr [ebx - 2], ax */
    MEM16(ebx + 0xA) = (uint16_t)(LO16(edx)); /* 0x12163F18: mov word ptr [ebx + 0xa], dx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x12163F1C: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x12163F1F: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x12163F22: mov dword ptr [ebp - 4], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12163DF0; /* 0x12163F25: jns 0x12163df0 */
L_12163F2B:
    ebx = MEM32(ebp + 0x8); /* 0x12163F2B: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x20u; /* 0x12163F2E: add ebx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = 7; /* 0x12163F31: mov dword ptr [ebp - 8], 7 */
    MEM32(ebp + 0x8) = ebx; /* 0x12163F38: mov dword ptr [ebp + 8], ebx */
    goto L_12163F40; /* 0x12163F3B: jmp 0x12163f40 */
L_12163F40:
    edx = (uint32_t)MEM16(ebx + 0x50); /* 0x12163F40: movzx edx, word ptr [ebx + 0x50] */
    ecx = (uint32_t)MEM16(ebx + (-0x20)); /* 0x12163F44: movzx ecx, word ptr [ebx - 0x20] */
    eax = ecx + edx; /* 0x12163F48: lea eax, [ecx + edx] */
    eax = (uint32_t)LO16(eax); /* 0x12163F4B: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12163F4E: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)MEM16(ebx + 0x40); /* 0x12163F50: movzx edx, word ptr [ebx + 0x40] */
    MEM32(ebp + (-0x20)) = eax; /* 0x12163F54: mov dword ptr [ebp - 0x20], eax */
    eax = (uint32_t)LO16(ecx); /* 0x12163F57: movzx eax, cx */
    ecx = (uint32_t)MEM16(ebx + (-0x10)); /* 0x12163F5A: movzx ecx, word ptr [ebx - 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12163F5E: mov dword ptr [ebp - 0xc], eax */
    eax = ecx + edx; /* 0x12163F61: lea eax, [ecx + edx] */
    eax = (uint32_t)LO16(eax); /* 0x12163F64: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12163F67: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)MEM16(ebx); /* 0x12163F69: movzx edx, word ptr [ebx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x12163F6C: mov dword ptr [ebp - 0x14], eax */
    eax = (uint32_t)LO16(ecx); /* 0x12163F6F: movzx eax, cx */
    ecx = (uint32_t)MEM16(ebx + 0x30); /* 0x12163F72: movzx ecx, word ptr [ebx + 0x30] */
    MEM32(ebp + (-0x18)) = eax; /* 0x12163F76: mov dword ptr [ebp - 0x18], eax */
    eax = ecx + edx; /* 0x12163F79: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12163F7C: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(ebx + 0x10); /* 0x12163F7E: movzx ecx, word ptr [ebx + 0x10] */
    edi = (uint32_t)LO16(eax); /* 0x12163F82: movzx edi, ax */
    eax = (uint32_t)LO16(edx); /* 0x12163F85: movzx eax, dx */
    edx = (uint32_t)MEM16(ebx + 0x20); /* 0x12163F88: movzx edx, word ptr [ebx + 0x20] */
    MEM32(ebp + (-0x10)) = eax; /* 0x12163F8C: mov dword ptr [ebp - 0x10], eax */
    eax = ecx + edx; /* 0x12163F8F: lea eax, [ecx + edx] */
    esi = (uint32_t)LO16(eax); /* 0x12163F92: movzx esi, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12163F95: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = (uint32_t)LO16(ecx); /* 0x12163F97: movzx ebx, cx */
    ecx = MEM32(ebp + (-0x20)); /* 0x12163F9A: mov ecx, dword ptr [ebp - 0x20] */
    eax = esi + ecx; /* 0x12163F9D: lea eax, [esi + ecx] */
    edx = (uint32_t)LO16(eax); /* 0x12163FA0: movzx edx, ax */
    eax = MEM32(ebp + (-0x14)); /* 0x12163FA3: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x12163FA6: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x12163FA8: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = (uint32_t)LO16(ecx); /* 0x12163FAA: movzx esi, cx */
    ecx = (uint32_t)LO16(eax); /* 0x12163FAD: movzx ecx, ax */
    eax = ecx + edx; /* 0x12163FB0: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x12163FB3: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x12163FB5: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12163FB8: mov ebx, dword ptr [ebp + 8] */
    MEM16(ebx + (-0x20)) = (uint16_t)(LO16(eax)); /* 0x12163FBB: mov word ptr [ebx - 0x20], ax */
    eax = ebx; /* 0x12163FBF: mov eax, ebx */
    MEM16(eax + 0x20) = (uint16_t)(LO16(edx)); /* 0x12163FC1: mov word ptr [eax + 0x20], dx */
    eax = MEM32(ebp + (-0x14)); /* 0x12163FC5: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x12163FC8: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)LO16(eax); /* 0x12163FCA: movsx ecx, ax */
    eax = (int32_t)(int16_t)LO16(esi); /* 0x12163FCD: movsx eax, si */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12163FD0: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5u); /* 0x12163FD2: imul ecx, ecx, 0xb5 */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x12163FD8: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    ecx = (uint32_t)LO16(ecx); /* 0x12163FDB: movzx ecx, cx */
    eax = ecx + esi; /* 0x12163FDE: lea eax, [ecx + esi] */
    edx = ebx; /* 0x12163FE1: mov edx, ebx */
    ebx = MEM32(ebp + (-0x18)); /* 0x12163FE3: mov ebx, dword ptr [ebp - 0x18] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x12163FE6: mov word ptr [edx], ax */
    eax = MEM32(ebp + (-0x10)); /* 0x12163FE9: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x12163FEC: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x12163FEF: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(eax); /* 0x12163FF1: movzx ecx, ax */
    eax = MEM32(ebp + (-0xC)); /* 0x12163FF4: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12163FF7: add eax, ebx */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x12163FF9: movzx eax, ax */
    MEM16(edx + 0x40) = (uint16_t)(LO16(esi)); /* 0x12163FFC: mov word ptr [edx + 0x40], si */
    edx = (int32_t)(int16_t)LO16(eax); /* 0x12164000: movsx edx, ax */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x12164003: movsx ecx, cx */
    eax = ecx; /* 0x12164006: mov eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x8Bu); /* 0x12164008: imul ecx, ecx, 0x8b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1216400E: sub eax, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x14Eu); /* 0x12164010: imul edx, edx, 0x14e */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x62u); /* 0x12164016: imul eax, eax, 0x62 */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x12164019: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    eax = (uint32_t)LO16(eax); /* 0x1216401C: movzx eax, ax */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x1216401F: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x12164022: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x12164025: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x12164027: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x10)); /* 0x12164029: mov eax, dword ptr [ebp - 0x10] */
    esi = (uint32_t)LO16(ecx); /* 0x1216402C: movzx esi, cx */
    edi = (uint32_t)LO16(edx); /* 0x1216402F: movzx edi, dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12164032: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0xC)); /* 0x12164034: mov ebx, dword ptr [ebp - 0xc] */
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x12164037: cwde  */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xB5u); /* 0x12164038: imul eax, eax, 0xb5 */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x1216403E: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    ecx = (uint32_t)LO16(eax); /* 0x12164041: movzx ecx, ax */
    eax = ecx + ebx; /* 0x12164044: lea eax, [ecx + ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x12164047: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)LO16(ebx); /* 0x12164049: movzx ecx, bx */
    ebx = MEM32(ebp + 0x8); /* 0x1216404C: mov ebx, dword ptr [ebp + 8] */
    edx = (uint32_t)LO16(eax); /* 0x1216404F: movzx edx, ax */
    eax = ecx + esi; /* 0x12164052: lea eax, [ecx + esi] */
    MEM16(ebx + 0x30) = (uint16_t)(LO16(eax)); /* 0x12164055: mov word ptr [ebx + 0x30], ax */
    eax = edx + edi; /* 0x12164059: lea eax, [edx + edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1216405C: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1216405E: sub edx, edi */
    _flag_k = FK_CMP;
    MEM16(ebx + 0x10) = (uint16_t)(LO16(ecx)); /* 0x12164060: mov word ptr [ebx + 0x10], cx */
    MEM16(ebx + (-0x10)) = (uint16_t)(LO16(eax)); /* 0x12164064: mov word ptr [ebx - 0x10], ax */
    MEM16(ebx + 0x50) = (uint16_t)(LO16(edx)); /* 0x12164068: mov word ptr [ebx + 0x50], dx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1216406C: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1216406F: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = ebx; /* 0x12164072: mov dword ptr [ebp + 8], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12163F40; /* 0x12164075: jns 0x12163f40 */
L_1216407B:
    edi = POP32_VAL(esp); /* 0x1216407B: pop edi */
    esi = POP32_VAL(esp); /* 0x1216407C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1216407D: pop ebx */
    esp = ebp; /* 0x1216407E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x12164080: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164081: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164090u);

L_12164090:
    edi = edi; /* 0x12164090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164092: push ebp */
    ebp = esp; /* 0x12164093: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x12164095: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x12164098: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1216409B: push ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1216409C: add edx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1216409F: push esi */
    MEM32(ebp + (-0x18)) = 7; /* 0x121640A0: mov dword ptr [ebp - 0x18], 7 */
    MEM32(ebp + (-0x4)) = edx; /* 0x121640A7: mov dword ptr [ebp - 4], edx */
    PUSH32(esp, edi); /* 0x121640AA: push edi */
    goto L_121640B0; /* 0x121640AB: jmp 0x121640b0 */
L_121640B0:
    eax = (int32_t)(int16_t)MEM16(edx + 0xA); /* 0x121640B0: movsx eax, word ptr [edx + 0xa] */
    ecx = (int32_t)(int16_t)MEM16(edx + (-0x4)); /* 0x121640B4: movsx ecx, word ptr [edx - 4] */
    ebx = ecx + eax; /* 0x121640B8: lea ebx, [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121640BB: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = (int32_t)(int16_t)MEM16(edx + 0x8); /* 0x121640BD: movsx eax, word ptr [edx + 8] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x121640C1: mov dword ptr [ebp - 0x14], ecx */
    ecx = (int32_t)(int16_t)MEM16(edx + (-0x2)); /* 0x121640C4: movsx ecx, word ptr [edx - 2] */
    edi = ecx + eax; /* 0x121640C8: lea edi, [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121640CB: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = (int32_t)(int16_t)MEM16(edx + 0x6); /* 0x121640CD: movsx eax, word ptr [edx + 6] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x121640D1: mov dword ptr [ebp - 8], ecx */
    ecx = (int32_t)(int16_t)MEM16(edx); /* 0x121640D4: movsx ecx, word ptr [edx] */
    esi = eax + ecx; /* 0x121640D7: lea esi, [eax + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121640DA: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = (int32_t)(int16_t)MEM16(edx + 0x4); /* 0x121640DC: movsx eax, word ptr [edx + 4] */
    edx = (int32_t)(int16_t)MEM16(edx + 0x2); /* 0x121640E0: movsx edx, word ptr [edx + 2] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x121640E4: mov dword ptr [ebp - 0x10], ecx */
    ecx = edx + eax; /* 0x121640E7: lea ecx, [edx + eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x121640EA: sub edx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x121640EC: mov dword ptr [ebp - 0xc], edx */
    edx = ecx + ebx; /* 0x121640EF: lea edx, [ecx + ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x121640F2: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = esi + edi; /* 0x121640F4: lea ecx, [esi + edi] */
    eax = edx + ecx; /* 0x121640F7: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x121640FA: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121640FC: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x121640FE: sub edi, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x4)); /* 0x12164100: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x12164103: add eax, eax */
    _flag_k = FK_ADD;
    MEM16(esi + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x12164105: mov word ptr [esi - 4], ax */
    ecx = edi + ebx; /* 0x12164109: lea ecx, [edi + ebx] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x187Eu); /* 0x1216410C: imul ebx, ebx, 0x187e */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3B21u); /* 0x12164112: imul edi, edi, 0x3b21 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1151u); /* 0x12164118: imul ecx, ecx, 0x1151 */
    eax = ebx + ecx + 0x400; /* 0x1216411E: lea eax, [ebx + ecx + 0x400] */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x12164125: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x12164128: mov word ptr [esi], ax */
    eax = MEM32(ebp + (-0x8)); /* 0x1216412B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1216412E: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x14)); /* 0x12164130: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x12164133: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x400u; /* 0x12164135: add ecx, 0x400 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1216413B: add edx, edx */
    _flag_k = FK_ADD;
    MEM16(esi + 0x4) = (uint16_t)(LO16(edx)); /* 0x1216413D: mov word ptr [esi + 4], dx */
    edx = MEM32(ebp + (-0xC)); /* 0x12164141: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12164144: add eax, edx */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x12164146: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x12164149: mov word ptr [esi + 8], cx */
    esi = MEM32(ebp + (-0x10)); /* 0x1216414D: mov esi, dword ptr [ebp - 0x10] */
    ecx = esi + edi; /* 0x12164150: lea ecx, [esi + edi] */
    ebx = ecx + eax; /* 0x12164153: lea ebx, [ecx + eax] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3EC5u); /* 0x12164156: imul eax, eax, 0x3ec5 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC7Cu); /* 0x1216415C: imul ecx, ecx, 0xc7c */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1u); /* 0x12164162: imul ebx, ebx, 0x25a1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x8)); /* 0x12164168: add esi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1216416B: add edi, edx */
    _flag_k = FK_ADD;
    edx = ebx; /* 0x1216416D: mov edx, ebx */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xFFFFE333u); /* 0x1216416F: imul edi, edi, 0xffffe333 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xFFFFADFDu); /* 0x12164175: imul esi, esi, 0xffffadfd */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1216417B: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0xC)); /* 0x1216417D: mov eax, dword ptr [ebp - 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98Eu); /* 0x12164180: imul eax, eax, 0x98e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12164186: add eax, edx */
    _flag_k = FK_ADD;
    eax = eax + edi + 0x400; /* 0x12164188: lea eax, [eax + edi + 0x400] */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x1216418F: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x12164192: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x12164194: mov ecx, dword ptr [ebp - 4] */
    MEM16(ecx + 0xA) = (uint16_t)(LO16(eax)); /* 0x12164197: mov word ptr [ecx + 0xa], ax */
    eax = MEM32(ebp + (-0x10)); /* 0x1216419B: mov eax, dword ptr [ebp - 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41B3u); /* 0x1216419E: imul eax, eax, 0x41b3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x121641A4: add eax, ebx */
    _flag_k = FK_ADD;
    eax = eax + esi + 0x400; /* 0x121641A6: lea eax, [eax + esi + 0x400] */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x121641AD: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    MEM16(ecx + 0x6) = (uint16_t)(LO16(eax)); /* 0x121641B0: mov word ptr [ecx + 6], ax */
    eax = MEM32(ebp + (-0x8)); /* 0x121641B4: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6254u); /* 0x121641B7: imul eax, eax, 0x6254 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x121641BD: add eax, edx */
    _flag_k = FK_ADD;
    eax = eax + esi + 0x400; /* 0x121641BF: lea eax, [eax + esi + 0x400] */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x121641C6: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    edx = ecx; /* 0x121641C9: mov edx, ecx */
    MEM16(edx + 0x2) = (uint16_t)(LO16(eax)); /* 0x121641CB: mov word ptr [edx + 2], ax */
    eax = MEM32(ebp + (-0x14)); /* 0x121641CF: mov eax, dword ptr [ebp - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x300Bu); /* 0x121641D2: imul eax, eax, 0x300b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x121641D8: add eax, ebx */
    _flag_k = FK_ADD;
    eax = eax + edi + 0x400; /* 0x121641DA: lea eax, [eax + edi + 0x400] */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x121641E1: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    MEM16(edx + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x121641E4: mov word ptr [edx - 2], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x121641E8: add edx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x121641EB: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x121641EE: mov dword ptr [ebp - 4], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_121640B0; /* 0x121641F1: jns 0x121640b0 */
L_121641F7:
    edx = MEM32(ebp + 0x8); /* 0x121641F7: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x121641FA: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = 7; /* 0x121641FD: mov dword ptr [ebp - 0xc], 7 */
    MEM32(ebp + 0x8) = edx; /* 0x12164204: mov dword ptr [ebp + 8], edx */
    goto L_12164210; /* 0x12164207: jmp 0x12164210 */
L_12164210:
    eax = (int32_t)(int16_t)MEM16(edx + 0x50); /* 0x12164210: movsx eax, word ptr [edx + 0x50] */
    ecx = (int32_t)(int16_t)MEM16(edx + (-0x20)); /* 0x12164214: movsx ecx, word ptr [edx - 0x20] */
    ebx = ecx + eax; /* 0x12164218: lea ebx, [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1216421B: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = (int32_t)(int16_t)MEM16(edx + 0x40); /* 0x1216421D: movsx eax, word ptr [edx + 0x40] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x12164221: mov dword ptr [ebp - 0x10], ecx */
    ecx = (int32_t)(int16_t)MEM16(edx + (-0x10)); /* 0x12164224: movsx ecx, word ptr [edx - 0x10] */
    edi = ecx + eax; /* 0x12164228: lea edi, [ecx + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1216422B: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = (int32_t)(int16_t)MEM16(edx + 0x30); /* 0x1216422D: movsx eax, word ptr [edx + 0x30] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x12164231: mov dword ptr [ebp - 8], ecx */
    ecx = (int32_t)(int16_t)MEM16(edx); /* 0x12164234: movsx ecx, word ptr [edx] */
    esi = eax + ecx; /* 0x12164237: lea esi, [eax + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1216423A: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = (int32_t)(int16_t)MEM16(edx + 0x20); /* 0x1216423C: movsx eax, word ptr [edx + 0x20] */
    edx = (int32_t)(int16_t)MEM16(edx + 0x10); /* 0x12164240: movsx edx, word ptr [edx + 0x10] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x12164244: mov dword ptr [ebp - 0x14], ecx */
    ecx = edx + eax; /* 0x12164247: lea ecx, [edx + eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1216424A: sub edx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = edx; /* 0x1216424C: mov dword ptr [ebp - 0x18], edx */
    edx = ecx + ebx; /* 0x1216424F: lea edx, [ecx + ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x12164252: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = esi + edi; /* 0x12164254: lea ecx, [esi + edi] */
    eax = ecx + edx + 0x2; /* 0x12164257: lea eax, [ecx + edx + 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1216425B: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x1216425D: sub edi, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x1216425F: mov esi, dword ptr [ebp + 8] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x12164262: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    MEM16(esi + (-0x20)) = (uint16_t)(LO16(eax)); /* 0x12164265: mov word ptr [esi - 0x20], ax */
    ecx = edi + ebx; /* 0x12164269: lea ecx, [edi + ebx] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x187Eu); /* 0x1216426C: imul ebx, ebx, 0x187e */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3B21u); /* 0x12164272: imul edi, edi, 0x3b21 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1151u); /* 0x12164278: imul ecx, ecx, 0x1151 */
    eax = ebx + ecx + 0x4000; /* 0x1216427E: lea eax, [ebx + ecx + 0x4000] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x12164285: sar eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 15u);
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x12164288: mov word ptr [esi], ax */
    eax = MEM32(ebp + (-0x8)); /* 0x1216428B: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1216428E: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x10)); /* 0x12164290: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x12164293: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4000u; /* 0x12164296: add ecx, 0x4000 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x1216429C: sar edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 2u);
    MEM16(esi + 0x20) = (uint16_t)(LO16(edx)); /* 0x1216429F: mov word ptr [esi + 0x20], dx */
    edx = MEM32(ebp + (-0x18)); /* 0x121642A3: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x121642A6: add eax, edx */
    _flag_k = FK_ADD;
    if (15u) _cf = (((ecx) >> 14) & 1u); /* 0x121642A8: sar ecx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 15u);
    MEM16(esi + 0x40) = (uint16_t)(LO16(ecx)); /* 0x121642AB: mov word ptr [esi + 0x40], cx */
    esi = MEM32(ebp + (-0x14)); /* 0x121642AF: mov esi, dword ptr [ebp - 0x14] */
    ecx = esi + edi; /* 0x121642B2: lea ecx, [esi + edi] */
    ebx = ecx + eax; /* 0x121642B5: lea ebx, [ecx + eax] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3EC5u); /* 0x121642B8: imul eax, eax, 0x3ec5 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC7Cu); /* 0x121642BE: imul ecx, ecx, 0xc7c */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1u); /* 0x121642C4: imul ebx, ebx, 0x25a1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x8)); /* 0x121642CA: add esi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x121642CD: add edi, edx */
    _flag_k = FK_ADD;
    edx = ebx; /* 0x121642CF: mov edx, ebx */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xFFFFE333u); /* 0x121642D1: imul edi, edi, 0xffffe333 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xFFFFADFDu); /* 0x121642D7: imul esi, esi, 0xffffadfd */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x121642DD: sub edx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x18)); /* 0x121642DF: mov eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x98Eu); /* 0x121642E2: imul eax, eax, 0x98e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x121642E8: add eax, edx */
    _flag_k = FK_ADD;
    eax = eax + edi + 0x4000; /* 0x121642EA: lea eax, [eax + edi + 0x4000] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x121642F1: sar eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 15u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x121642F4: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x121642F6: mov ecx, dword ptr [ebp + 8] */
    MEM16(ecx + 0x50) = (uint16_t)(LO16(eax)); /* 0x121642F9: mov word ptr [ecx + 0x50], ax */
    eax = MEM32(ebp + (-0x14)); /* 0x121642FD: mov eax, dword ptr [ebp - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41B3u); /* 0x12164300: imul eax, eax, 0x41b3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12164306: add eax, ebx */
    _flag_k = FK_ADD;
    eax = eax + esi + 0x4000; /* 0x12164308: lea eax, [eax + esi + 0x4000] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x1216430F: sar eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 15u);
    MEM16(ecx + 0x30) = (uint16_t)(LO16(eax)); /* 0x12164312: mov word ptr [ecx + 0x30], ax */
    eax = MEM32(ebp + (-0x8)); /* 0x12164316: mov eax, dword ptr [ebp - 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6254u); /* 0x12164319: imul eax, eax, 0x6254 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1216431F: add eax, edx */
    _flag_k = FK_ADD;
    eax = eax + esi + 0x4000; /* 0x12164321: lea eax, [eax + esi + 0x4000] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x12164328: sar eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 15u);
    edx = ecx; /* 0x1216432B: mov edx, ecx */
    MEM16(edx + 0x10) = (uint16_t)(LO16(eax)); /* 0x1216432D: mov word ptr [edx + 0x10], ax */
    eax = MEM32(ebp + (-0x10)); /* 0x12164331: mov eax, dword ptr [ebp - 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x300Bu); /* 0x12164334: imul eax, eax, 0x300b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1216433A: add eax, ebx */
    _flag_k = FK_ADD;
    eax = eax + edi + 0x4000; /* 0x1216433C: lea eax, [eax + edi + 0x4000] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x12164343: sar eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 15u);
    MEM16(edx + (-0x10)) = (uint16_t)(LO16(eax)); /* 0x12164346: mov word ptr [edx - 0x10], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1216434A: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x1216434D: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = edx; /* 0x12164350: mov dword ptr [ebp + 8], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_12164210; /* 0x12164353: jns 0x12164210 */
L_12164359:
    edi = POP32_VAL(esp); /* 0x12164359: pop edi */
    esi = POP32_VAL(esp); /* 0x1216435A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1216435B: pop ebx */
    esp = ebp; /* 0x1216435C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1216435E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216435F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164367(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164367u);

L_12164367:
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164367: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1216436F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216436Fu);

L_1216436F:
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216436F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12164377(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164377u);

L_12164377:
    PUSH32(esp, 0xD40u); /* 0x12164377: push 0xd40 */
    RECOMP_CALL(sub_121BF524); /* 0x1216437C: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12164381: pop ecx */
    /* test eax, eax */ /* 0x12164382: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12164387; /* 0x12164384: jne 0x12164387 */
L_12164386:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164386: ret  */
L_12164387:
    fp_push(0.0); /* 0x12164387: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12164389: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(eax + 0x10) = _st[0]; /* 0x1216438B: fst qword ptr [eax + 0x10] */
    MEM32(eax) = ecx; /* 0x1216438E: mov dword ptr [eax], ecx */
    *(double*)ADDR(eax + 0x18) = _st[0]; /* 0x12164390: fst qword ptr [eax + 0x18] */
    MEM32(eax + 0x60) = 0x00018722u; /* 0x12164393: mov dword ptr [eax + 0x60], 0x18722 */
    *(double*)ADDR(eax + 0x20) = _st[0]; /* 0x1216439A: fst qword ptr [eax + 0x20] */
    MEM16(eax + 0x78) = (uint16_t)(LO16(ecx)); /* 0x1216439D: mov word ptr [eax + 0x78], cx */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x58) = _v; } /* 0x121643A1: fstp qword ptr [eax + 0x58] */
    MEM32(eax + 0x80) = 0x12164367u; /* 0x121643A4: mov dword ptr [eax + 0x80], 0x12164367 */
    MEM32(eax + 0x84) = 0x12164367u; /* 0x121643AE: mov dword ptr [eax + 0x84], 0x12164367 */
    MEM32(eax + 0x88) = 0x12164367u; /* 0x121643B8: mov dword ptr [eax + 0x88], 0x12164367 */
    MEM32(eax + 0x8C) = 0x121C0ED5u; /* 0x121643C2: mov dword ptr [eax + 0x8c], 0x121c0ed5 */
    MEM32(eax + 0xC) = 0x12164367u; /* 0x121643CC: mov dword ptr [eax + 0xc], 0x12164367 */
    MEM32(eax + 0x74) = 0x1210B509u; /* 0x121643D3: mov dword ptr [eax + 0x74], 0x1210b509 */
    MEM32(eax + 0x90) = 0x12164367u; /* 0x121643DA: mov dword ptr [eax + 0x90], 0x12164367 */
    MEM32(eax + 0xD20) = 0x120D96FBu; /* 0x121643E4: mov dword ptr [eax + 0xd20], 0x120d96fb */
    MEM32(eax + 0xD24) = 0x120D96FBu; /* 0x121643EE: mov dword ptr [eax + 0xd24], 0x120d96fb */
    MEM32(eax + 0xD28) = 0x120D96FBu; /* 0x121643F8: mov dword ptr [eax + 0xd28], 0x120d96fb */
    MEM32(eax + 0xD2C) = 0x12164367u; /* 0x12164402: mov dword ptr [eax + 0xd2c], 0x12164367 */
    MEM32(eax + 0xD30) = 0x120D96FBu; /* 0x1216440C: mov dword ptr [eax + 0xd30], 0x120d96fb */
    MEM32(eax + 0xD34) = 0x1216436Fu; /* 0x12164416: mov dword ptr [eax + 0xd34], 0x1216436f */
    MEM32(eax + 0xD38) = ecx; /* 0x12164420: mov dword ptr [eax + 0xd38], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164426: ret  */
    RECOMP_REGS_OUT();
}

void sub_1216442C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216442Cu);

L_1216442C:
    edi = edi; /* 0x1216442C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216442E: push ebp */
    ebp = esp; /* 0x1216442F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12164431: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x12164434: fld qword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0001872Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x0001872Cu; /* 0x12164437: sub eax, 0x1872c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12164498; /* 0x1216443C: je 0x12164498 */
L_1216443E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1216443E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121644FD; /* 0x1216443F: je 0x121644fd */
L_12164445:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12164445: dec eax */
    _flag_k = FK_DEC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12164446: fstp st(0) */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12164475; /* 0x12164448: je 0x12164475 */
L_1216444A:
    eax = MEM32(ebp + 0x8); /* 0x1216444A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0xD30); /* 0x1216444D: mov ecx, dword ptr [eax + 0xd30] */
    /* cmp ecx, 0x120D96FBu */ /* 0x12164453: cmp ecx, 0x120d96fb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164468; /* 0x12164459: je 0x12164468 */
L_1216445B:
    PUSH32(esp, MEM32(eax + 0xD38)); /* 0x1216445B: push dword ptr [eax + 0xd38] */
    PUSH32(esp, 0x00018A24u); /* 0x12164461: push 0x18a24 */
    goto L_121644D8; /* 0x12164466: jmp 0x121644d8 */
L_12164468:
    PUSH32(esp, 0x00018A24u); /* 0x12164468: push 0x18a24 */
L_1216446D:
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1216446D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_12164514; /* 0x12164470: jmp 0x12164514 */
L_12164475:
    fp_push(0.0); /* 0x12164475: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x12164477: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216447A: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216447C: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216447E: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x12164480: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_121644BA; /* 0x12164483: jnp 0x121644ba */
L_12164485:
    fp_push(1.0); /* 0x12164485: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12164487: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12164489: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1216448B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_121644BA; /* 0x1216448E: jnp 0x121644ba */
L_12164490:
    eax = MEM32(ebp + 0x8); /* 0x12164490: mov eax, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x58) = _v; } /* 0x12164493: fstp qword ptr [eax + 0x58] */
    goto L_12164514; /* 0x12164496: jmp 0x12164514 */
L_12164498:
    fp_push(_st[0]); /* 0x12164498: fld st(0) */
    RECOMP_CALL(sub_121BF2F7); /* 0x1216449A: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1216449F: mov ecx, eax */
    MEM32(ebp + 0xC) = ecx; /* 0x121644A1: mov dword ptr [ebp + 0xc], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x121644A4: fild dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x121644A7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121644B1; /* 0x121644A9: jns 0x121644b1 */
L_121644AB:
    _st[0] += *(double*)ADDR(0x12002060); /* 0x121644AB: fadd qword ptr [0x12002060] */
L_121644B1:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121644B1: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121644B3: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121644B5: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_121644E3; /* 0x121644B8: jnp 0x121644e3 */
L_121644BA:
    eax = MEM32(ebp + 0x8); /* 0x121644BA: mov eax, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121644BD: fstp st(0) */
    ecx = MEM32(eax + 0xD30); /* 0x121644BF: mov ecx, dword ptr [eax + 0xd30] */
    /* cmp ecx, 0x120D96FBu */ /* 0x121644C5: cmp ecx, 0x120d96fb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121644DC; /* 0x121644CB: je 0x121644dc */
L_121644CD:
    PUSH32(esp, MEM32(eax + 0xD38)); /* 0x121644CD: push dword ptr [eax + 0xd38] */
    PUSH32(esp, 0x00018A25u); /* 0x121644D3: push 0x18a25 */
L_121644D8:
    RECOMP_ICALL(ecx); /* 0x121644D8: call ecx */
    RECOMP_FLAGS_IN();
    goto L_12164514; /* 0x121644DA: jmp 0x12164514 */
L_121644DC:
    PUSH32(esp, 0x00018A25u); /* 0x121644DC: push 0x18a25 */
    RECOMP_BACKEDGE();
    goto L_1216446D; /* 0x121644E1: jmp 0x1216446d */
L_121644E3:
    /* cmp ecx, 0x00018722u */ /* 0x121644E3: cmp ecx, 0x18722 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00018722u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_121644FD; /* 0x121644E9: jb 0x121644fd */
L_121644EB:
    /* cmp ecx, 0x00018726u */ /* 0x121644EB: cmp ecx, 0x18726 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00018726u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121644FD; /* 0x121644F1: ja 0x121644fd */
L_121644F3:
    eax = MEM32(ebp + 0x8); /* 0x121644F3: mov eax, dword ptr [ebp + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121644F6: fstp st(0) */
    MEM32(eax + 0x60) = ecx; /* 0x121644F8: mov dword ptr [eax + 0x60], ecx */
    goto L_12164514; /* 0x121644FB: jmp 0x12164514 */
L_121644FD:
    fp_push(0.0); /* 0x121644FD: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121644FF: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12164501: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12164503: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1216450C; /* 0x12164506: jnp 0x1216450c */
L_12164508:
    SET_LO8(ecx, 1); /* 0x12164508: mov cl, 1 */
    goto L_1216450E; /* 0x1216450A: jmp 0x1216450e */
L_1216450C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x1216450C: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1216450E:
    eax = MEM32(ebp + 0x8); /* 0x1216450E: mov eax, dword ptr [ebp + 8] */
    MEM8(eax + 0x79) = (uint8_t)(LO8(ecx)); /* 0x12164511: mov byte ptr [eax + 0x79], cl */
L_12164514:
    ebp = POP32_VAL(esp); /* 0x12164514: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12164515: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1216451D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216451Du);

L_1216451D:
    edi = edi; /* 0x1216451D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216451F: push ebp */
    ebp = esp; /* 0x12164520: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12164522: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x12164525: fld qword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x12164528: fstp qword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x1216452B: fld qword ptr [ebp + 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x18) = _v; } /* 0x1216452E: fstp qword ptr [eax + 0x18] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x12164531: fld qword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x20) = _v; } /* 0x12164534: fstp qword ptr [eax + 0x20] */
    ebp = POP32_VAL(esp); /* 0x12164537: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12164538: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12164540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164540u);

L_12164540:
    edi = edi; /* 0x12164540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164542: push ebp */
    ebp = esp; /* 0x12164543: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12164545: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE78FCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFE78FCu; /* 0x12164548: add eax, 0xfffe78fc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xBu */ /* 0x1216454D: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12164689; /* 0x12164550: ja 0x12164689 */
L_12164556:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x121646B8)); goto _ljump; }
L_1216455D:
    ecx = MEM32(ebp + 0x10); /* 0x1216455D: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x12164560: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12164569; /* 0x12164562: jne 0x12164569 */
L_12164564:
    ecx = 0x12164367u; /* 0x12164564: mov ecx, 0x12164367 */
L_12164569:
    eax = MEM32(ebp + 0x8); /* 0x12164569: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x80) = ecx; /* 0x1216456C: mov dword ptr [eax + 0x80], ecx */
    goto L_121646B1; /* 0x12164572: jmp 0x121646b1 */
L_12164577:
    ecx = MEM32(ebp + 0x10); /* 0x12164577: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1216457A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12164583; /* 0x1216457C: jne 0x12164583 */
L_1216457E:
    ecx = 0x120D96FBu; /* 0x1216457E: mov ecx, 0x120d96fb */
L_12164583:
    eax = MEM32(ebp + 0x8); /* 0x12164583: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD20) = ecx; /* 0x12164586: mov dword ptr [eax + 0xd20], ecx */
    goto L_121646B1; /* 0x1216458C: jmp 0x121646b1 */
L_12164591:
    eax = MEM32(ebp + 0x10); /* 0x12164591: mov eax, dword ptr [ebp + 0x10] */
    edx = 0x12164367u; /* 0x12164594: mov edx, 0x12164367 */
    /* test eax, eax */ /* 0x12164599: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216459F; /* 0x1216459B: je 0x1216459f */
L_1216459D:
    edx = eax; /* 0x1216459D: mov edx, eax */
L_1216459F:
    ecx = MEM32(ebp + 0x8); /* 0x1216459F: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x84) = edx; /* 0x121645A2: mov dword ptr [ecx + 0x84], edx */
L_121645A8:
    /* test eax, eax */ /* 0x121645A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121645AA: setne al */
    MEM8(ecx + 0x78) = (uint8_t)(LO8(eax)); /* 0x121645AD: mov byte ptr [ecx + 0x78], al */
    goto L_121646B1; /* 0x121645B0: jmp 0x121646b1 */
L_121645B5:
    eax = MEM32(ebp + 0x10); /* 0x121645B5: mov eax, dword ptr [ebp + 0x10] */
    edx = 0x120D96FBu; /* 0x121645B8: mov edx, 0x120d96fb */
    /* test eax, eax */ /* 0x121645BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121645C3; /* 0x121645BF: je 0x121645c3 */
L_121645C1:
    edx = eax; /* 0x121645C1: mov edx, eax */
L_121645C3:
    ecx = MEM32(ebp + 0x8); /* 0x121645C3: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0xD24) = edx; /* 0x121645C6: mov dword ptr [ecx + 0xd24], edx */
    RECOMP_BACKEDGE();
    goto L_121645A8; /* 0x121645CC: jmp 0x121645a8 */
L_121645CE:
    ecx = MEM32(ebp + 0x10); /* 0x121645CE: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x121645D1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121645DA; /* 0x121645D3: jne 0x121645da */
L_121645D5:
    ecx = 0x12164367u; /* 0x121645D5: mov ecx, 0x12164367 */
L_121645DA:
    eax = MEM32(ebp + 0x8); /* 0x121645DA: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x88) = ecx; /* 0x121645DD: mov dword ptr [eax + 0x88], ecx */
    goto L_121646B1; /* 0x121645E3: jmp 0x121646b1 */
L_121645E8:
    ecx = MEM32(ebp + 0x10); /* 0x121645E8: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x121645EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121645F4; /* 0x121645ED: jne 0x121645f4 */
L_121645EF:
    ecx = 0x120D96FBu; /* 0x121645EF: mov ecx, 0x120d96fb */
L_121645F4:
    eax = MEM32(ebp + 0x8); /* 0x121645F4: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD28) = ecx; /* 0x121645F7: mov dword ptr [eax + 0xd28], ecx */
    goto L_121646B1; /* 0x121645FD: jmp 0x121646b1 */
L_12164602:
    ecx = MEM32(ebp + 0x10); /* 0x12164602: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x12164605: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216460E; /* 0x12164607: jne 0x1216460e */
L_12164609:
    ecx = 0x121C0ED5u; /* 0x12164609: mov ecx, 0x121c0ed5 */
L_1216460E:
    eax = MEM32(ebp + 0x8); /* 0x1216460E: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x8C) = ecx; /* 0x12164611: mov dword ptr [eax + 0x8c], ecx */
    goto L_121646B1; /* 0x12164617: jmp 0x121646b1 */
L_1216461C:
    ecx = MEM32(ebp + 0x10); /* 0x1216461C: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1216461F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12164628; /* 0x12164621: jne 0x12164628 */
L_12164623:
    ecx = 0x12164367u; /* 0x12164623: mov ecx, 0x12164367 */
L_12164628:
    eax = MEM32(ebp + 0x8); /* 0x12164628: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD2C) = ecx; /* 0x1216462B: mov dword ptr [eax + 0xd2c], ecx */
    goto L_121646B1; /* 0x12164631: jmp 0x121646b1 */
L_12164633:
    ecx = MEM32(ebp + 0x10); /* 0x12164633: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x12164636: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216463F; /* 0x12164638: jne 0x1216463f */
L_1216463A:
    ecx = 0x12164367u; /* 0x1216463A: mov ecx, 0x12164367 */
L_1216463F:
    eax = MEM32(ebp + 0x8); /* 0x1216463F: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = ecx; /* 0x12164642: mov dword ptr [eax + 0xc], ecx */
    goto L_121646B1; /* 0x12164645: jmp 0x121646b1 */
L_12164647:
    ecx = MEM32(ebp + 0x10); /* 0x12164647: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1216464A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12164653; /* 0x1216464C: jne 0x12164653 */
L_1216464E:
    ecx = 0x120D96FBu; /* 0x1216464E: mov ecx, 0x120d96fb */
L_12164653:
    eax = MEM32(ebp + 0x8); /* 0x12164653: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD30) = ecx; /* 0x12164656: mov dword ptr [eax + 0xd30], ecx */
    goto L_121646B1; /* 0x1216465C: jmp 0x121646b1 */
L_1216465E:
    ecx = MEM32(ebp + 0x10); /* 0x1216465E: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x12164661: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216466A; /* 0x12164663: jne 0x1216466a */
L_12164665:
    ecx = 0x1210B509u; /* 0x12164665: mov ecx, 0x1210b509 */
L_1216466A:
    eax = MEM32(ebp + 0x8); /* 0x1216466A: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x74) = ecx; /* 0x1216466D: mov dword ptr [eax + 0x74], ecx */
    goto L_121646B1; /* 0x12164670: jmp 0x121646b1 */
L_12164672:
    ecx = MEM32(ebp + 0x10); /* 0x12164672: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x12164675: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216467E; /* 0x12164677: jne 0x1216467e */
L_12164679:
    ecx = 0x1216436Fu; /* 0x12164679: mov ecx, 0x1216436f */
L_1216467E:
    eax = MEM32(ebp + 0x8); /* 0x1216467E: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD34) = ecx; /* 0x12164681: mov dword ptr [eax + 0xd34], ecx */
    goto L_121646B1; /* 0x12164687: jmp 0x121646b1 */
L_12164689:
    eax = MEM32(ebp + 0x8); /* 0x12164689: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0xD30); /* 0x1216468C: mov ecx, dword ptr [eax + 0xd30] */
    /* cmp ecx, 0x120D96FBu */ /* 0x12164692: cmp ecx, 0x120d96fb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121646A9; /* 0x12164698: je 0x121646a9 */
L_1216469A:
    PUSH32(esp, MEM32(eax + 0xD38)); /* 0x1216469A: push dword ptr [eax + 0xd38] */
    PUSH32(esp, 0x00018A24u); /* 0x121646A0: push 0x18a24 */
    RECOMP_ICALL(ecx); /* 0x121646A5: call ecx */
    RECOMP_FLAGS_IN();
    goto L_121646B1; /* 0x121646A7: jmp 0x121646b1 */
L_121646A9:
    PUSH32(esp, 0x00018A24u); /* 0x121646A9: push 0x18a24 */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x121646AE: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_121646B1:
    ebp = POP32_VAL(esp); /* 0x121646B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121646B2: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x1216455Du: goto L_1216455D;
      case 0x12164577u: goto L_12164577;
      case 0x12164591u: goto L_12164591;
      case 0x121645B5u: goto L_121645B5;
      case 0x121645CEu: goto L_121645CE;
      case 0x121645E8u: goto L_121645E8;
      case 0x12164602u: goto L_12164602;
      case 0x1216461Cu: goto L_1216461C;
      case 0x12164633u: goto L_12164633;
      case 0x12164647u: goto L_12164647;
      case 0x1216465Eu: goto L_1216465E;
      case 0x12164672u: goto L_12164672;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_121646ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121646EDu);

L_121646ED:
    edi = edi; /* 0x121646ED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121646EF: push ebp */
    ebp = esp; /* 0x121646F0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121646F2: push esi */
    esi = MEM32(edi + 0x4); /* 0x121646F3: mov esi, dword ptr [edi + 4] */
    /* test esi, esi */ /* 0x121646F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216470F; /* 0x121646F8: jne 0x1216470f */
L_121646FA:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x121646FA: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_12164D27); /* 0x121646FD: call 0x12164d27 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12164702: mov esi, eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12164704: push dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x12164707: push esi */
    RECOMP_CALL(sub_12164D63); /* 0x12164708: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    goto L_12164718; /* 0x1216470D: jmp 0x12164718 */
L_1216470F:
    PUSH32(esp, esi); /* 0x1216470F: push esi */
    RECOMP_CALL(sub_12164EFE); /* 0x12164710: call 0x12164efe */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0xC); /* 0x12164715: mov esi, dword ptr [esi + 0xc] */
L_12164718:
    eax = MEM32(esi + 0x10); /* 0x12164718: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1216471B: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0xC) = ecx; /* 0x1216471E: mov dword ptr [eax + 0xc], ecx */
    fp_push(*(double*)ADDR(ebx)); /* 0x12164721: fld qword ptr [ebx] */
    eax = MEM32(esi + 0x10); /* 0x12164723: mov eax, dword ptr [esi + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x12164726: fstp qword ptr [eax + 0x10] */
    eax = MEM32(esi + 0x10); /* 0x12164729: mov eax, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(ebx + 0x8)); /* 0x1216472C: fld qword ptr [ebx + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x18) = _v; } /* 0x1216472F: fstp qword ptr [eax + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x12164732: mov eax, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(ebx + 0x10)); /* 0x12164735: fld qword ptr [ebx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x20) = _v; } /* 0x12164738: fstp qword ptr [eax + 0x20] */
    eax = MEM32(esi + 0x4); /* 0x1216473B: mov eax, dword ptr [esi + 4] */
    MEM32(esi + 0x1C) = 1; /* 0x1216473E: mov dword ptr [esi + 0x1c], 1 */
    _flag_a = (uint32_t)((MEM32(eax + 0x1C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x1C) | 0xFFFFFFFFu));
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) | 0xFFFFFFFFu; /* 0x12164745: or dword ptr [eax + 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = esi; /* 0x12164749: mov dword ptr [edi + 4], esi */
    esi = POP32_VAL(esp); /* 0x1216474C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216474D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216474E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164756(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164756u);

L_12164756:
    edi = edi; /* 0x12164756: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12164758: push ebx */
    PUSH32(esp, esi); /* 0x12164759: push esi */
    PUSH32(esp, edi); /* 0x1216475A: push edi */
    edi = eax; /* 0x1216475B: mov edi, eax */
    ebx = edi + 0xA0; /* 0x1216475D: lea ebx, [edi + 0xa0] */
    RECOMP_CALL(sub_121650A2); /* 0x12164763: call 0x121650a2 */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi + 0x98); /* 0x12164768: mov esi, dword ptr [edi + 0x98] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x1216476E: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x1216476E: shl esi, 5 */
    MEM32(edi + 0x8) = eax; /* 0x12164771: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x12164774: add esi, ebx */
    _flag_k = FK_ADD;
    goto L_12164783; /* 0x12164776: jmp 0x12164783 */
L_12164778:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x12164778: push dword ptr [ebx + 0x18] */
    RECOMP_CALL(sub_121646ED); /* 0x1216477B: call 0x121646ed */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x20u; /* 0x12164780: add ebx, 0x20 */
    _flag_k = FK_ADD;
L_12164783:
    /* cmp ebx, esi */ /* 0x12164783: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12164778; /* 0x12164785: jb 0x12164778 */
L_12164787:
    _flag_a = (uint32_t)(MEM32(edi + 0x98)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x98) = MEM32(edi + 0x98) & 0; /* 0x12164787: and dword ptr [edi + 0x98], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x94) = (uint8_t)(0); /* 0x1216478E: mov byte ptr [edi + 0x94], 0 */
    edi = POP32_VAL(esp); /* 0x12164795: pop edi */
    esi = POP32_VAL(esp); /* 0x12164796: pop esi */
    ebx = POP32_VAL(esp); /* 0x12164797: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164798: ret  */
    RECOMP_REGS_OUT();
}

void sub_1216479E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216479Eu);

L_1216479E:
    edi = edi; /* 0x1216479E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121647A0: push ebp */
    ebp = esp; /* 0x121647A1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121647A3: push ebx */
    PUSH32(esp, esi); /* 0x121647A4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121647A5: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121647A8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ebx */ /* 0x121647AA: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121647B5; /* 0x121647AC: je 0x121647b5 */
L_121647AE:
    PUSH32(esp, ebx); /* 0x121647AE: push ebx */
    PUSH32(esp, esi); /* 0x121647AF: push esi */
    RECOMP_CALL(sub_12164818); /* 0x121647B0: call 0x12164818 */
    RECOMP_FLAGS_IN();
L_121647B5:
    eax = MEM32(ebp + 0xC); /* 0x121647B5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x98) = ebx; /* 0x121647B8: mov dword ptr [esi + 0x98], ebx */
    MEM8(esi + 0x94) = (uint8_t)(LO8(ebx)); /* 0x121647BE: mov byte ptr [esi + 0x94], bl */
    MEM32(esi + 0x8) = ebx; /* 0x121647C4: mov dword ptr [esi + 8], ebx */
    MEM32(esi) = 1; /* 0x121647C7: mov dword ptr [esi], 1 */
    MEM32(esi + 0xD38) = eax; /* 0x121647CD: mov dword ptr [esi + 0xd38], eax */
    esi = POP32_VAL(esp); /* 0x121647D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x121647D4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121647D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121647D6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121647DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121647DEu);

L_121647DE:
    edi = edi; /* 0x121647DE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121647E0: push ebp */
    ebp = esp; /* 0x121647E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121647E3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121647E4: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 1 */ /* 0x121647E7: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121647F4; /* 0x121647EA: je 0x121647f4 */
L_121647EC:
    PUSH32(esp, 1); /* 0x121647EC: push 1 */
    PUSH32(esp, esi); /* 0x121647EE: push esi */
    RECOMP_CALL(sub_12164818); /* 0x121647EF: call 0x12164818 */
    RECOMP_FLAGS_IN();
L_121647F4:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x121647F4: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x98), 0 */ /* 0x121647F8: cmp dword ptr [esi + 0x98], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 2; /* 0x121647FF: mov dword ptr [esi], 2 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1216480E; /* 0x12164805: jle 0x1216480e */
L_12164807:
    MEM8(esi + 0x94) = (uint8_t)(1); /* 0x12164807: mov byte ptr [esi + 0x94], 1 */
L_1216480E:
    esi = POP32_VAL(esp); /* 0x1216480E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216480F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164810: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164818u);

L_12164818:
    edi = edi; /* 0x12164818: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216481A: push ebp */
    ebp = esp; /* 0x1216481B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1216481D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1216481E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12164821: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12164822: mov edi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi), edi */ /* 0x12164825: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216491E; /* 0x12164827: je 0x1216491e */
L_1216482D:
    PUSH32(esp, ebx); /* 0x1216482D: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1216482E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12164830:
    eax = MEM32(esi); /* 0x12164830: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x12164832: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1216489D; /* 0x12164834: jae 0x1216489d */
L_12164836:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x12164836: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12164870; /* 0x12164838: je 0x12164870 */
L_1216483A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1216483A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12164915; /* 0x1216483B: jne 0x12164915 */
L_12164841:
    eax = MEM32(esi + 0xD30); /* 0x12164841: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, 0x120D96FBu */ /* 0x12164847: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216485D; /* 0x1216484C: je 0x1216485d */
L_1216484E:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x1216484E: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 0x00018738u); /* 0x12164854: push 0x18738 */
    RECOMP_ICALL(eax); /* 0x12164859: call eax */
    RECOMP_FLAGS_IN();
    goto L_12164865; /* 0x1216485B: jmp 0x12164865 */
L_1216485D:
    PUSH32(esp, 0x00018738u); /* 0x1216485D: push 0x18738 */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x12164862: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_12164865:
    PUSH32(esp, esi); /* 0x12164865: push esi */
    RECOMP_CALL(sub_121647DE); /* 0x12164866: call 0x121647de */
    RECOMP_FLAGS_IN();
    goto L_12164915; /* 0x1216486B: jmp 0x12164915 */
L_12164870:
    eax = MEM32(esi + 0xD30); /* 0x12164870: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, 0x120D96FBu */ /* 0x12164876: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216488C; /* 0x1216487B: je 0x1216488c */
L_1216487D:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x1216487D: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 0x00018737u); /* 0x12164883: push 0x18737 */
    RECOMP_ICALL(eax); /* 0x12164888: call eax */
    RECOMP_FLAGS_IN();
    goto L_12164894; /* 0x1216488A: jmp 0x12164894 */
L_1216488C:
    PUSH32(esp, 0x00018737u); /* 0x1216488C: push 0x18737 */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x12164891: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_12164894:
    PUSH32(esp, ebx); /* 0x12164894: push ebx */
    PUSH32(esp, esi); /* 0x12164895: push esi */
    RECOMP_CALL(sub_1216479E); /* 0x12164896: call 0x1216479e */
    RECOMP_FLAGS_IN();
    goto L_12164915; /* 0x1216489B: jmp 0x12164915 */
L_1216489D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1216489D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121648DC; /* 0x1216489E: je 0x121648dc */
L_121648A0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121648A0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12164915; /* 0x121648A1: jne 0x12164915 */
L_121648A3:
    eax = MEM32(esi + 0xD30); /* 0x121648A3: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, 0x120D96FBu */ /* 0x121648A9: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121648BF; /* 0x121648AE: je 0x121648bf */
L_121648B0:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121648B0: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 0x0001873Au); /* 0x121648B6: push 0x1873a */
    RECOMP_ICALL(eax); /* 0x121648BB: call eax */
    RECOMP_FLAGS_IN();
    goto L_121648C7; /* 0x121648BD: jmp 0x121648c7 */
L_121648BF:
    PUSH32(esp, 0x0001873Au); /* 0x121648BF: push 0x1873a */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x121648C4: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_121648C7:
    /* cmp MEM32(esi), 2 */ /* 0x121648C7: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121648D4; /* 0x121648CA: je 0x121648d4 */
L_121648CC:
    PUSH32(esp, 2); /* 0x121648CC: push 2 */
    PUSH32(esp, esi); /* 0x121648CE: push esi */
    RECOMP_CALL(sub_12164818); /* 0x121648CF: call 0x12164818 */
    RECOMP_FLAGS_IN();
L_121648D4:
    MEM32(esi) = 1; /* 0x121648D4: mov dword ptr [esi], 1 */
    goto L_12164915; /* 0x121648DA: jmp 0x12164915 */
L_121648DC:
    eax = MEM32(esi + 0xD30); /* 0x121648DC: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, 0x120D96FBu */ /* 0x121648E2: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121648F8; /* 0x121648E7: je 0x121648f8 */
L_121648E9:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121648E9: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 0x00018739u); /* 0x121648EF: push 0x18739 */
    RECOMP_ICALL(eax); /* 0x121648F4: call eax */
    RECOMP_FLAGS_IN();
    goto L_12164900; /* 0x121648F6: jmp 0x12164900 */
L_121648F8:
    PUSH32(esp, 0x00018739u); /* 0x121648F8: push 0x18739 */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x121648FD: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_12164900:
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x12164900: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216490D; /* 0x12164903: je 0x1216490d */
L_12164905:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x12164905: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_12165119); /* 0x12164908: call 0x12165119 */
    RECOMP_FLAGS_IN();
L_1216490D:
    MEM32(esi) = ebx; /* 0x1216490D: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x1216490F: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x12164912: mov dword ptr [esi + 8], ebx */
L_12164915:
    /* cmp MEM32(esi), edi */ /* 0x12164915: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164830; /* 0x12164917: jne 0x12164830 */
L_1216491D:
    ebx = POP32_VAL(esp); /* 0x1216491D: pop ebx */
L_1216491E:
    edi = POP32_VAL(esp); /* 0x1216491E: pop edi */
    esi = POP32_VAL(esp); /* 0x1216491F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12164920: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12164921: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12164929(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164929u);

L_12164929:
    edi = edi; /* 0x12164929: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216492B: push ebp */
    ebp = esp; /* 0x1216492C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1216492E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1216492F: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 0 */ /* 0x12164932: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216493F; /* 0x12164935: je 0x1216493f */
L_12164937:
    PUSH32(esp, 0); /* 0x12164937: push 0 */
    PUSH32(esp, esi); /* 0x12164939: push esi */
    RECOMP_CALL(sub_12164818); /* 0x1216493A: call 0x12164818 */
    RECOMP_FLAGS_IN();
L_1216493F:
    PUSH32(esp, esi); /* 0x1216493F: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x12164940: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12164945: pop ecx */
    esi = POP32_VAL(esp); /* 0x12164946: pop esi */
    ebp = POP32_VAL(esp); /* 0x12164947: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164948: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164950u);

L_12164950:
    edi = edi; /* 0x12164950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164952: push ebp */
    ebp = esp; /* 0x12164953: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x12164955: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12164958: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1216495D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1216495F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x12164962: push esi */
    PUSH32(esp, edi); /* 0x12164963: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12164964: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12164967: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), 2 */ /* 0x12164969: cmp dword ptr [edi], 2 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164976; /* 0x1216496C: je 0x12164976 */
L_1216496E:
    PUSH32(esp, 2); /* 0x1216496E: push 2 */
    PUSH32(esp, edi); /* 0x12164970: push edi */
    RECOMP_CALL(sub_12164818); /* 0x12164971: call 0x12164818 */
    RECOMP_FLAGS_IN();
L_12164976:
    /* cmp MEM8(edi + 0x94), 0 */ /* 0x12164976: cmp byte ptr [edi + 0x94], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x94)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164989; /* 0x1216497D: je 0x12164989 */
L_1216497F:
    eax = edi; /* 0x1216497F: mov eax, edi */
    RECOMP_CALL(sub_12164756); /* 0x12164981: call 0x12164756 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(esi);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & esi; /* 0x12164986: and dword ptr [edi + 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12164989:
    edx = MEM32(ebp + 0xC); /* 0x12164989: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(0x120134B0)); /* 0x1216498C: fld qword ptr [0x120134b0] */
    fp_push(*(double*)ADDR(0x120134A8)); /* 0x12164992: fld qword ptr [0x120134a8] */
    eax = ebp + (-0x1C); /* 0x12164998: lea eax, [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1216499B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1216499D: sub edx, eax */
    _flag_k = FK_CMP;
L_1216499F:
    eax = edx + ecx * 8; /* 0x1216499F: lea eax, [edx + ecx*8] */
    fp_push(*(double*)ADDR(ebp + eax + (-0x1C))); /* 0x121649A2: fld qword ptr [ebp + eax - 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x121649A6: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121649A8: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121649AA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121649B6; /* 0x121649AD: jp 0x121649b6 */
L_121649AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121649AF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121649B1: fstp st(0) */
    fp_push(_st[1]); /* 0x121649B3: fld st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121649B5: inc esi */
    _flag_k = FK_INC;
L_121649B6:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121649B6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121649B8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121649BA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121649C6; /* 0x121649BD: jne 0x121649c6 */
L_121649BF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121649BF: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121649C1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x121649C3: fld st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121649C5: inc esi */
    _flag_k = FK_INC;
L_121649C6:
    { double _v = fp_pop(); *(double*)ADDR(ebp + ecx * 8 + (-0x1C)) = _v; } /* 0x121649C6: fstp qword ptr [ebp + ecx*8 - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x121649CA: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 3 */ /* 0x121649CB: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1216499F; /* 0x121649CE: jl 0x1216499f */
L_121649D0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121649D0: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121649D2: fstp st(0) */
    /* test esi, esi */ /* 0x121649D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121649FC; /* 0x121649D6: je 0x121649fc */
L_121649D8:
    eax = MEM32(edi + 0xD30); /* 0x121649D8: mov eax, dword ptr [edi + 0xd30] */
    /* cmp eax, 0x120D96FBu */ /* 0x121649DE: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121649F4; /* 0x121649E3: je 0x121649f4 */
L_121649E5:
    PUSH32(esp, MEM32(edi + 0xD38)); /* 0x121649E5: push dword ptr [edi + 0xd38] */
    PUSH32(esp, 0x0001873Bu); /* 0x121649EB: push 0x1873b */
    RECOMP_ICALL(eax); /* 0x121649F0: call eax */
    RECOMP_FLAGS_IN();
    goto L_121649FC; /* 0x121649F2: jmp 0x121649fc */
L_121649F4:
    PUSH32(esp, 0x0001873Bu); /* 0x121649F4: push 0x1873b */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x121649F9: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
L_121649FC:
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x121649FC: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164A3B; /* 0x12164A00: jne 0x12164a3b */
L_12164A02:
    ecx = MEM32(edi + 0x98); /* 0x12164A02: mov ecx, dword ptr [edi + 0x98] */
    /* cmp ecx, 0x64u */ /* 0x12164A08: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_12164A34; /* 0x12164A0B: jge 0x12164a34 */
L_12164A0D:
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x12164A0D: fld qword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + 0x10); /* 0x12164A10: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 5; /* 0x12164A13: add ecx, 5 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x12164A16: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x12164A16: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x12164A19: add ecx, edi */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x12164A1B: fstp qword ptr [ecx] */
    MEM32(ecx + 0x18) = eax; /* 0x12164A1D: mov dword ptr [ecx + 0x18], eax */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x12164A20: fld qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x8) = _v; } /* 0x12164A23: fstp qword ptr [ecx + 8] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x12164A26: fld qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x10) = _v; } /* 0x12164A29: fstp qword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi + 0x98)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x98) = MEM32(edi + 0x98) + 1; /* 0x12164A2C: inc dword ptr [edi + 0x98] */
    _flag_k = FK_INC;
    goto L_12164A48; /* 0x12164A32: jmp 0x12164a48 */
L_12164A34:
    eax = edi; /* 0x12164A34: mov eax, edi */
    RECOMP_CALL(sub_12164756); /* 0x12164A36: call 0x12164756 */
    RECOMP_FLAGS_IN();
L_12164A3B:
    PUSH32(esp, ebx); /* 0x12164A3B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12164A3C: push dword ptr [ebp + 0x10] */
    ebx = ebp + (-0x1C); /* 0x12164A3F: lea ebx, [ebp - 0x1c] */
    RECOMP_CALL(sub_121646ED); /* 0x12164A42: call 0x121646ed */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x12164A47: pop ebx */
L_12164A48:
    ecx = MEM32(ebp + (-0x4)); /* 0x12164A48: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12164A4B: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12164A4C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12164A4E: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12164A4F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12164A54: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12164A55: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12164A5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164A5Du);

L_12164A5D:
    edi = edi; /* 0x12164A5D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164A5F: push ebp */
    ebp = esp; /* 0x12164A60: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12164A62: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12164A63: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 2 */ /* 0x12164A66: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164A73; /* 0x12164A69: je 0x12164a73 */
L_12164A6B:
    PUSH32(esp, 2); /* 0x12164A6B: push 2 */
    PUSH32(esp, esi); /* 0x12164A6D: push esi */
    RECOMP_CALL(sub_12164818); /* 0x12164A6E: call 0x12164818 */
    RECOMP_FLAGS_IN();
L_12164A73:
    MEM32(esi) = 1; /* 0x12164A73: mov dword ptr [esi], 1 */
    esi = POP32_VAL(esp); /* 0x12164A79: pop esi */
    ebp = POP32_VAL(esp); /* 0x12164A7A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164A7B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164A83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164A83u);

L_12164A83:
    edi = edi; /* 0x12164A83: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164A85: push ebp */
    ebp = esp; /* 0x12164A86: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12164A88: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12164A89: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 1 */ /* 0x12164A8C: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12164A8F: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164A9A; /* 0x12164A90: je 0x12164a9a */
L_12164A92:
    PUSH32(esp, 1); /* 0x12164A92: push 1 */
    PUSH32(esp, esi); /* 0x12164A94: push esi */
    RECOMP_CALL(sub_12164818); /* 0x12164A95: call 0x12164818 */
    RECOMP_FLAGS_IN();
L_12164A9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12164A9A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x12164A9C: mov dword ptr [esi], edi */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x12164A9E: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164AD1; /* 0x12164AA1: jne 0x12164ad1 */
L_12164AA3:
    /* cmp MEM8(esi + 0x78), 0 */ /* 0x12164AA3: cmp byte ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x78)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164ACA; /* 0x12164AA7: jne 0x12164aca */
L_12164AA9:
    /* cmp MEM32(esi + 0x90), 0x12164367u */ /* 0x12164AA9: cmp dword ptr [esi + 0x90], 0x12164367 */
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164ACA; /* 0x12164AB3: jne 0x12164aca */
L_12164AB5:
    PUSH32(esp, esi); /* 0x12164AB5: push esi */
    RECOMP_CALL(sub_121658D5); /* 0x12164AB6: call 0x121658d5 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12164ABB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12164ACA; /* 0x12164ABD: je 0x12164aca */
L_12164ABF:
    MEM32(esi + 0xD38) = edi; /* 0x12164ABF: mov dword ptr [esi + 0xd38], edi */
    goto L_12164BAD; /* 0x12164AC5: jmp 0x12164bad */
L_12164ACA:
    eax = esi; /* 0x12164ACA: mov eax, esi */
    RECOMP_CALL(sub_12164756); /* 0x12164ACC: call 0x12164756 */
    RECOMP_FLAGS_IN();
L_12164AD1:
    PUSH32(esp, esi); /* 0x12164AD1: push esi */
    RECOMP_CALL(sub_1216756D); /* 0x12164AD2: call 0x1216756d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12164AD7: push esi */
    RECOMP_CALL(sub_1216710A); /* 0x12164AD8: call 0x1216710a */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x64), 0 */ /* 0x12164ADD: cmp byte ptr [esi + 0x64], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(esi + 0x8); /* 0x12164AE1: mov edi, dword ptr [esi + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164B9C; /* 0x12164AE4: jne 0x12164b9c */
L_12164AEA:
    /* cmp MEM8(esi + 0x79), 0 */ /* 0x12164AEA: cmp byte ptr [esi + 0x79], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x79)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164AFC; /* 0x12164AEE: je 0x12164afc */
L_12164AF0:
    PUSH32(esp, 1); /* 0x12164AF0: push 1 */
    PUSH32(esp, 1); /* 0x12164AF2: push 1 */
    PUSH32(esp, edi); /* 0x12164AF4: push edi */
    RECOMP_CALL(sub_121653F4); /* 0x12164AF5: call 0x121653f4 */
    RECOMP_FLAGS_IN();
    goto L_12164B02; /* 0x12164AFA: jmp 0x12164b02 */
L_12164AFC:
    PUSH32(esp, edi); /* 0x12164AFC: push edi */
    RECOMP_CALL(sub_12165390); /* 0x12164AFD: call 0x12165390 */
    RECOMP_FLAGS_IN();
L_12164B02:
    /* cmp MEM32(esi + 0x80), 0x12164367u */ /* 0x12164B02: cmp dword ptr [esi + 0x80], 0x12164367 */
    _flag_a = (uint32_t)(MEM32(esi + 0x80)); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164B62; /* 0x12164B0C: jne 0x12164b62 */
L_12164B0E:
    /* cmp MEM32(esi + 0x8C), 0x121C0ED5u */ /* 0x12164B0E: cmp dword ptr [esi + 0x8c], 0x121c0ed5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8C)); _flag_b = (uint32_t)(0x121C0ED5u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164B62; /* 0x12164B18: jne 0x12164b62 */
L_12164B1A:
    /* cmp MEM32(esi + 0x88), 0x12164367u */ /* 0x12164B1A: cmp dword ptr [esi + 0x88], 0x12164367 */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164B62; /* 0x12164B24: jne 0x12164b62 */
L_12164B26:
    /* cmp MEM32(esi + 0x84), 0x12164367u */ /* 0x12164B26: cmp dword ptr [esi + 0x84], 0x12164367 */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164B62; /* 0x12164B30: jne 0x12164b62 */
L_12164B32:
    /* cmp MEM32(esi + 0xD20), 0x120D96FBu */ /* 0x12164B32: cmp dword ptr [esi + 0xd20], 0x120d96fb */
    _flag_a = (uint32_t)(MEM32(esi + 0xD20)); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164B62; /* 0x12164B3C: jne 0x12164b62 */
L_12164B3E:
    /* cmp MEM32(esi + 0xD2C), 0x12164367u */ /* 0x12164B3E: cmp dword ptr [esi + 0xd2c], 0x12164367 */
    _flag_a = (uint32_t)(MEM32(esi + 0xD2C)); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164B62; /* 0x12164B48: jne 0x12164b62 */
L_12164B4A:
    /* cmp MEM32(esi + 0xD28), 0x120D96FBu */ /* 0x12164B4A: cmp dword ptr [esi + 0xd28], 0x120d96fb */
    _flag_a = (uint32_t)(MEM32(esi + 0xD28)); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164B62; /* 0x12164B54: jne 0x12164b62 */
L_12164B56:
    /* cmp MEM32(esi + 0xD24), 0x120D96FBu */ /* 0x12164B56: cmp dword ptr [esi + 0xd24], 0x120d96fb */
    _flag_a = (uint32_t)(MEM32(esi + 0xD24)); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164B76; /* 0x12164B60: je 0x12164b76 */
L_12164B62:
    /* cmp MEM8(esi + 0x79), 0 */ /* 0x12164B62: cmp byte ptr [esi + 0x79], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x79)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x12164B66: push edi */
    PUSH32(esp, esi); /* 0x12164B67: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164B71; /* 0x12164B68: je 0x12164b71 */
L_12164B6A:
    RECOMP_CALL(sub_121656FC); /* 0x12164B6A: call 0x121656fc */
    RECOMP_FLAGS_IN();
    goto L_12164B76; /* 0x12164B6F: jmp 0x12164b76 */
L_12164B71:
    RECOMP_CALL(sub_12165D7E); /* 0x12164B71: call 0x12165d7e */
    RECOMP_FLAGS_IN();
L_12164B76:
    /* cmp MEM32(esi + 0x90), 0x12164367u */ /* 0x12164B76: cmp dword ptr [esi + 0x90], 0x12164367 */
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164B9C; /* 0x12164B80: je 0x12164b9c */
L_12164B82:
    PUSH32(esp, edi); /* 0x12164B82: push edi */
    RECOMP_CALL(sub_121653C2); /* 0x12164B83: call 0x121653c2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12164B88: push edi */
    RECOMP_ICALL(MEM32(esi + 0x90)); /* 0x12164B89: call dword ptr [esi + 0x90] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x12164B8F: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xD38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xD38) = MEM32(esi + 0xD38) & 0; /* 0x12164B93: and dword ptr [esi + 0xd38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12164BAD; /* 0x12164B9A: jmp 0x12164bad */
L_12164B9C:
    PUSH32(esp, edi); /* 0x12164B9C: push edi */
    RECOMP_CALL(sub_12165119); /* 0x12164B9D: call 0x12165119 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xD38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xD38) = MEM32(esi + 0xD38) & 0; /* 0x12164BA2: and dword ptr [esi + 0xd38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x12164BA9: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12164BAD:
    edi = POP32_VAL(esp); /* 0x12164BAD: pop edi */
    esi = POP32_VAL(esp); /* 0x12164BAE: pop esi */
    ebp = POP32_VAL(esp); /* 0x12164BAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164BB0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164BB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164BB8u);

L_12164BB8:
    edi = edi; /* 0x12164BB8: mov edi, edi */
    PUSH32(esp, esi); /* 0x12164BBA: push esi */
    PUSH32(esp, 0x40u); /* 0x12164BBB: push 0x40 */
    esi = eax; /* 0x12164BBD: mov esi, eax */
    RECOMP_CALL(sub_121BF524); /* 0x12164BBF: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12164BC4: pop ecx */
    ecx = eax; /* 0x12164BC5: mov ecx, eax */
    eax = MEM32(esi + 0x4); /* 0x12164BC7: mov eax, dword ptr [esi + 4] */
    edx = ecx + 0x20; /* 0x12164BCA: lea edx, [ecx + 0x20] */
    /* cmp eax, esi */ /* 0x12164BCD: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12164BD3; /* 0x12164BCF: jae 0x12164bd3 */
L_12164BD1:
    esi = eax; /* 0x12164BD1: mov esi, eax */
L_12164BD3:
    eax = MEM32(esi + 0x4); /* 0x12164BD3: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax); /* 0x12164BD6: mov eax, dword ptr [eax] */
    MEM32(edx) = eax; /* 0x12164BD8: mov dword ptr [edx], eax */
    eax = MEM32(eax + 0x4); /* 0x12164BDA: mov eax, dword ptr [eax + 4] */
    MEM32(eax) = ecx; /* 0x12164BDD: mov dword ptr [eax], ecx */
    MEM32(ecx) = esi; /* 0x12164BDF: mov dword ptr [ecx], esi */
    eax = MEM32(esi + 0x4); /* 0x12164BE1: mov eax, dword ptr [esi + 4] */
    MEM32(eax) = edx; /* 0x12164BE4: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12164BE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x10) = eax; /* 0x12164BE8: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x14) = eax; /* 0x12164BEB: mov dword ptr [ecx + 0x14], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x12164BEE: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x18) = eax; /* 0x12164BF1: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x4) = edx; /* 0x12164BF4: mov dword ptr [ecx + 4], edx */
    MEM32(ecx + 0x8) = ecx; /* 0x12164BF7: mov dword ptr [ecx + 8], ecx */
    MEM32(ecx + 0xC) = edx; /* 0x12164BFA: mov dword ptr [ecx + 0xc], edx */
    MEM32(edx + 0x10) = eax; /* 0x12164BFD: mov dword ptr [edx + 0x10], eax */
    MEM32(edx + 0x14) = eax; /* 0x12164C00: mov dword ptr [edx + 0x14], eax */
    MEM32(edx + 0x1C) = eax; /* 0x12164C03: mov dword ptr [edx + 0x1c], eax */
    MEM32(edx + 0x18) = eax; /* 0x12164C06: mov dword ptr [edx + 0x18], eax */
    MEM32(edx + 0x4) = ecx; /* 0x12164C09: mov dword ptr [edx + 4], ecx */
    MEM32(edx + 0x8) = edx; /* 0x12164C0C: mov dword ptr [edx + 8], edx */
    MEM32(edx + 0xC) = ecx; /* 0x12164C0F: mov dword ptr [edx + 0xc], ecx */
    eax = ecx; /* 0x12164C12: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x12164C14: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164C15: ret  */
    RECOMP_REGS_OUT();
}

void sub_12164C1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164C1Bu);

L_12164C1B:
    edx = MEM32(esi + 0x8); /* 0x12164C1B: mov edx, dword ptr [esi + 8] */
    eax = MEM32(edx + 0x4); /* 0x12164C1E: mov eax, dword ptr [edx + 4] */
    ecx = MEM32(edi + 0x8); /* 0x12164C21: mov ecx, dword ptr [edi + 8] */
    MEM32(eax + 0xC) = edi; /* 0x12164C24: mov dword ptr [eax + 0xc], edi */
    eax = MEM32(ecx + 0x4); /* 0x12164C27: mov eax, dword ptr [ecx + 4] */
    MEM32(eax + 0xC) = esi; /* 0x12164C2A: mov dword ptr [eax + 0xc], esi */
    MEM32(esi + 0x8) = ecx; /* 0x12164C2D: mov dword ptr [esi + 8], ecx */
    MEM32(edi + 0x8) = edx; /* 0x12164C30: mov dword ptr [edi + 8], edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164C33: ret  */
    RECOMP_REGS_OUT();
}

void sub_12164C39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164C39u);

L_12164C39:
    PUSH32(esp, 0x40u); /* 0x12164C39: push 0x40 */
    RECOMP_CALL(sub_121BF524); /* 0x12164C3B: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12164C40: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x12164C42: pop ecx */
    /* test edx, edx */ /* 0x12164C43: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12164C67; /* 0x12164C45: je 0x12164c67 */
L_12164C47:
    ecx = MEM32(edi + 0x4); /* 0x12164C47: mov ecx, dword ptr [edi + 4] */
    MEM32(edx + 0x4) = ecx; /* 0x12164C4A: mov dword ptr [edx + 4], ecx */
    MEM32(ecx) = edx; /* 0x12164C4D: mov dword ptr [ecx], edx */
    MEM32(edx) = edi; /* 0x12164C4F: mov dword ptr [edx], edi */
    MEM32(edi + 0x4) = edx; /* 0x12164C51: mov dword ptr [edi + 4], edx */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0; /* 0x12164C54: and dword ptr [edx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x8) = esi; /* 0x12164C58: mov dword ptr [edx + 8], esi */
    eax = esi; /* 0x12164C5B: mov eax, esi */
L_12164C5D:
    MEM32(eax + 0x10) = edx; /* 0x12164C5D: mov dword ptr [eax + 0x10], edx */
    eax = MEM32(eax + 0x8); /* 0x12164C60: mov eax, dword ptr [eax + 8] */
    /* cmp eax, esi */ /* 0x12164C63: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164C5D; /* 0x12164C65: jne 0x12164c5d */
L_12164C67:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164C67: ret  */
    RECOMP_REGS_OUT();
}

void sub_12164C6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164C6Du);

L_12164C6D:
    PUSH32(esp, 0x18u); /* 0x12164C6D: push 0x18 */
    RECOMP_CALL(sub_121BF524); /* 0x12164C6F: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12164C74: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x12164C76: pop ecx */
    /* test edx, edx */ /* 0x12164C77: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12164CA8; /* 0x12164C79: je 0x12164ca8 */
L_12164C7B:
    ecx = MEM32(edi + 0x4); /* 0x12164C7B: mov ecx, dword ptr [edi + 4] */
    MEM32(edx + 0x4) = ecx; /* 0x12164C7E: mov dword ptr [edx + 4], ecx */
    MEM32(ecx) = edx; /* 0x12164C81: mov dword ptr [ecx], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12164C83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = edi; /* 0x12164C85: mov dword ptr [edx], edi */
    MEM32(edi + 0x4) = edx; /* 0x12164C87: mov dword ptr [edi + 4], edx */
    MEM32(edx + 0xC) = eax; /* 0x12164C8A: mov dword ptr [edx + 0xc], eax */
    MEM32(edx + 0x10) = eax; /* 0x12164C8D: mov dword ptr [edx + 0x10], eax */
    MEM8(edx + 0x14) = (uint8_t)(LO8(eax)); /* 0x12164C90: mov byte ptr [edx + 0x14], al */
    MEM32(edx + 0x8) = esi; /* 0x12164C93: mov dword ptr [edx + 8], esi */
    SET_LO8(eax, MEM8(edi + 0x15)); /* 0x12164C96: mov al, byte ptr [edi + 0x15] */
    MEM8(edx + 0x15) = (uint8_t)(LO8(eax)); /* 0x12164C99: mov byte ptr [edx + 0x15], al */
    eax = esi; /* 0x12164C9C: mov eax, esi */
L_12164C9E:
    MEM32(eax + 0x14) = edx; /* 0x12164C9E: mov dword ptr [eax + 0x14], edx */
    eax = MEM32(eax + 0xC); /* 0x12164CA1: mov eax, dword ptr [eax + 0xc] */
    /* cmp eax, esi */ /* 0x12164CA4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164C9E; /* 0x12164CA6: jne 0x12164c9e */
L_12164CA8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164CA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_12164CAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164CAEu);

L_12164CAE:
    edi = edi; /* 0x12164CAE: mov edi, edi */
    PUSH32(esp, esi); /* 0x12164CB0: push esi */
    esi = eax; /* 0x12164CB1: mov esi, eax */
    eax = MEM32(esi + 0x4); /* 0x12164CB3: mov eax, dword ptr [esi + 4] */
    /* cmp eax, esi */ /* 0x12164CB6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12164CBC; /* 0x12164CB8: jae 0x12164cbc */
L_12164CBA:
    esi = eax; /* 0x12164CBA: mov esi, eax */
L_12164CBC:
    eax = MEM32(esi + 0x4); /* 0x12164CBC: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi); /* 0x12164CBF: mov edx, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x12164CC1: mov ecx, dword ptr [eax] */
    eax = MEM32(edx + 0x4); /* 0x12164CC3: mov eax, dword ptr [edx + 4] */
    MEM32(eax) = ecx; /* 0x12164CC6: mov dword ptr [eax], ecx */
    eax = MEM32(ecx + 0x4); /* 0x12164CC8: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x12164CCB: push esi */
    MEM32(eax) = edx; /* 0x12164CCC: mov dword ptr [eax], edx */
    RECOMP_CALL(sub_121BF586); /* 0x12164CCE: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12164CD3: pop ecx */
    esi = POP32_VAL(esp); /* 0x12164CD4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164CD5: ret  */
    RECOMP_REGS_OUT();
}

void sub_12164CDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164CDBu);

L_12164CDB:
    ecx = MEM32(edx + 0x8); /* 0x12164CDB: mov ecx, dword ptr [edx + 8] */
    eax = ecx; /* 0x12164CDE: mov eax, ecx */
L_12164CE0:
    MEM32(eax + 0x10) = esi; /* 0x12164CE0: mov dword ptr [eax + 0x10], esi */
    eax = MEM32(eax + 0x8); /* 0x12164CE3: mov eax, dword ptr [eax + 8] */
    /* cmp eax, ecx */ /* 0x12164CE6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164CE0; /* 0x12164CE8: jne 0x12164ce0 */
L_12164CEA:
    ecx = MEM32(edx + 0x4); /* 0x12164CEA: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx); /* 0x12164CED: mov eax, dword ptr [edx] */
    MEM32(eax + 0x4) = ecx; /* 0x12164CEF: mov dword ptr [eax + 4], ecx */
    PUSH32(esp, edx); /* 0x12164CF2: push edx */
    MEM32(ecx) = eax; /* 0x12164CF3: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_121BF586); /* 0x12164CF5: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12164CFA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164CFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_12164D01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164D01u);

L_12164D01:
    ecx = MEM32(edx + 0x8); /* 0x12164D01: mov ecx, dword ptr [edx + 8] */
    eax = ecx; /* 0x12164D04: mov eax, ecx */
L_12164D06:
    MEM32(eax + 0x14) = esi; /* 0x12164D06: mov dword ptr [eax + 0x14], esi */
    eax = MEM32(eax + 0xC); /* 0x12164D09: mov eax, dword ptr [eax + 0xc] */
    /* cmp eax, ecx */ /* 0x12164D0C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164D06; /* 0x12164D0E: jne 0x12164d06 */
L_12164D10:
    ecx = MEM32(edx + 0x4); /* 0x12164D10: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx); /* 0x12164D13: mov eax, dword ptr [edx] */
    MEM32(eax + 0x4) = ecx; /* 0x12164D15: mov dword ptr [eax + 4], ecx */
    PUSH32(esp, edx); /* 0x12164D18: push edx */
    MEM32(ecx) = eax; /* 0x12164D19: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_121BF586); /* 0x12164D1B: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12164D20: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12164D21: ret  */
    RECOMP_REGS_OUT();
}

void sub_12164D27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164D27u);

L_12164D27:
    edi = edi; /* 0x12164D27: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164D29: push ebp */
    ebp = esp; /* 0x12164D2A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12164D2C: push ebx */
    PUSH32(esp, esi); /* 0x12164D2D: push esi */
    PUSH32(esp, edi); /* 0x12164D2E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12164D2F: mov edi, dword ptr [ebp + 8] */
    eax = edi + 0x58; /* 0x12164D32: lea eax, [edi + 0x58] */
    RECOMP_CALL(sub_12164BB8); /* 0x12164D35: call 0x12164bb8 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12164D3A: mov ebx, eax */
    esi = ebx; /* 0x12164D3C: mov esi, ebx */
    RECOMP_CALL(sub_12164C39); /* 0x12164D3E: call 0x12164c39 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x4); /* 0x12164D43: mov esi, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_12164C39); /* 0x12164D46: call 0x12164c39 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x40u; /* 0x12164D4B: add edi, 0x40 */
    _flag_k = FK_ADD;
    esi = ebx; /* 0x12164D4E: mov esi, ebx */
    RECOMP_CALL(sub_12164C6D); /* 0x12164D50: call 0x12164c6d */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12164D55: pop edi */
    esi = POP32_VAL(esp); /* 0x12164D56: pop esi */
    eax = ebx; /* 0x12164D57: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12164D59: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12164D5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164D5B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164D63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164D63u);

L_12164D63:
    edi = edi; /* 0x12164D63: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164D65: push ebp */
    ebp = esp; /* 0x12164D66: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12164D68: push ecx */
    PUSH32(esp, ecx); /* 0x12164D69: push ecx */
    PUSH32(esp, ebx); /* 0x12164D6A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12164D6B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12164D6E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12164D6F: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12164D72: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x12164D74: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x12164D77: mov dword ptr [ebp - 4], eax */
    /* cmp ebx, esi */ /* 0x12164D7A: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164DDE; /* 0x12164D7C: je 0x12164dde */
L_12164D7E:
    edx = MEM32(esi + 0x10); /* 0x12164D7E: mov edx, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x12164D81: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12164D82: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12164D84: inc edi */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebx + 0x10) */ /* 0x12164D85: cmp edx, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164D98; /* 0x12164D88: je 0x12164d98 */
L_12164D8A:
    esi = MEM32(ebx + 0x10); /* 0x12164D8A: mov esi, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x4)) = edi; /* 0x12164D8D: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_12164CDB); /* 0x12164D90: call 0x12164cdb */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x12164D95: mov esi, dword ptr [ebp + 0xc] */
L_12164D98:
    edx = MEM32(esi + 0x14); /* 0x12164D98: mov edx, dword ptr [esi + 0x14] */
    /* cmp edx, MEM32(ebx + 0x14) */ /* 0x12164D9B: cmp edx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164DAE; /* 0x12164D9E: je 0x12164dae */
L_12164DA0:
    esi = MEM32(ebx + 0x14); /* 0x12164DA0: mov esi, dword ptr [ebx + 0x14] */
    MEM32(ebp + (-0x8)) = edi; /* 0x12164DA3: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_12164D01); /* 0x12164DA6: call 0x12164d01 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x12164DAB: mov esi, dword ptr [ebp + 0xc] */
L_12164DAE:
    edi = ebx; /* 0x12164DAE: mov edi, ebx */
    RECOMP_CALL(sub_12164C1B); /* 0x12164DB0: call 0x12164c1b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x12164DB5: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164DC9; /* 0x12164DB9: jne 0x12164dc9 */
L_12164DBB:
    edi = MEM32(ebx + 0x10); /* 0x12164DBB: mov edi, dword ptr [ebx + 0x10] */
    RECOMP_CALL(sub_12164C39); /* 0x12164DBE: call 0x12164c39 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x10); /* 0x12164DC3: mov eax, dword ptr [ebx + 0x10] */
    MEM32(eax + 0x8) = ebx; /* 0x12164DC6: mov dword ptr [eax + 8], ebx */
L_12164DC9:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x12164DC9: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164DDD; /* 0x12164DCD: jne 0x12164ddd */
L_12164DCF:
    edi = MEM32(ebx + 0x14); /* 0x12164DCF: mov edi, dword ptr [ebx + 0x14] */
    RECOMP_CALL(sub_12164C6D); /* 0x12164DD2: call 0x12164c6d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x14); /* 0x12164DD7: mov eax, dword ptr [ebx + 0x14] */
    MEM32(eax + 0x8) = ebx; /* 0x12164DDA: mov dword ptr [eax + 8], ebx */
L_12164DDD:
    edi = POP32_VAL(esp); /* 0x12164DDD: pop edi */
L_12164DDE:
    esi = POP32_VAL(esp); /* 0x12164DDE: pop esi */
    ebx = POP32_VAL(esp); /* 0x12164DDF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12164DE0: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12164DE1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12164DE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164DE9u);

L_12164DE9:
    edi = edi; /* 0x12164DE9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164DEB: push ebp */
    ebp = esp; /* 0x12164DEC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12164DEE: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x12164DEF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12164DF3: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12164DF4: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebx + 0x14); /* 0x12164DF7: mov edx, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x12164DFA: push esi */
    PUSH32(esp, edi); /* 0x12164DFB: push edi */
    edi = MEM32(ebx + 0x4); /* 0x12164DFC: mov edi, dword ptr [ebx + 4] */
    MEM32(ebp + 0x8) = edi; /* 0x12164DFF: mov dword ptr [ebp + 8], edi */
    /* cmp edx, MEM32(edi + 0x14) */ /* 0x12164E02: cmp edx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164E16; /* 0x12164E05: je 0x12164e16 */
L_12164E07:
    esi = MEM32(edi + 0x14); /* 0x12164E07: mov esi, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x4)) = 1; /* 0x12164E0A: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_12164D01); /* 0x12164E11: call 0x12164d01 */
    RECOMP_FLAGS_IN();
L_12164E16:
    /* cmp MEM32(ebx + 0x8), ebx */ /* 0x12164E16: cmp dword ptr [ebx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164E27; /* 0x12164E19: jne 0x12164e27 */
L_12164E1B:
    edx = MEM32(ebx + 0x10); /* 0x12164E1B: mov edx, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12164E1E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_12164CDB); /* 0x12164E20: call 0x12164cdb */
    RECOMP_FLAGS_IN();
    goto L_12164E5A; /* 0x12164E25: jmp 0x12164e5a */
L_12164E27:
    eax = MEM32(ebx + 0x4); /* 0x12164E27: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(eax + 0x14); /* 0x12164E2A: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(eax + 0xC); /* 0x12164E2D: mov eax, dword ptr [eax + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x12164E30: mov dword ptr [ecx + 8], eax */
    ecx = MEM32(ebx + 0x10); /* 0x12164E33: mov ecx, dword ptr [ebx + 0x10] */
    eax = MEM32(ebx + 0x8); /* 0x12164E36: mov eax, dword ptr [ebx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x12164E39: mov dword ptr [ecx + 8], eax */
    edi = MEM32(ebx + 0x4); /* 0x12164E3C: mov edi, dword ptr [ebx + 4] */
    edi = MEM32(edi + 0xC); /* 0x12164E3F: mov edi, dword ptr [edi + 0xc] */
    esi = ebx; /* 0x12164E42: mov esi, ebx */
    RECOMP_CALL(sub_12164C1B); /* 0x12164E44: call 0x12164c1b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x12164E49: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164E57; /* 0x12164E4D: jne 0x12164e57 */
L_12164E4F:
    edi = MEM32(ebx + 0x14); /* 0x12164E4F: mov edi, dword ptr [ebx + 0x14] */
    RECOMP_CALL(sub_12164C6D); /* 0x12164E52: call 0x12164c6d */
    RECOMP_FLAGS_IN();
L_12164E57:
    edi = MEM32(ebp + 0x8); /* 0x12164E57: mov edi, dword ptr [ebp + 8] */
L_12164E5A:
    /* cmp MEM32(edi + 0x8), edi */ /* 0x12164E5A: cmp dword ptr [edi + 8], edi */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164E73; /* 0x12164E5D: jne 0x12164e73 */
L_12164E5F:
    edx = MEM32(edi + 0x10); /* 0x12164E5F: mov edx, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12164E62: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_12164CDB); /* 0x12164E64: call 0x12164cdb */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x14); /* 0x12164E69: mov edx, dword ptr [edi + 0x14] */
    RECOMP_CALL(sub_12164D01); /* 0x12164E6C: call 0x12164d01 */
    RECOMP_FLAGS_IN();
    goto L_12164E96; /* 0x12164E71: jmp 0x12164e96 */
L_12164E73:
    eax = MEM32(edi + 0x4); /* 0x12164E73: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(ebx + 0x14); /* 0x12164E76: mov ecx, dword ptr [ebx + 0x14] */
    eax = MEM32(eax + 0xC); /* 0x12164E79: mov eax, dword ptr [eax + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x12164E7C: mov esi, dword ptr [ebp + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x12164E7F: mov dword ptr [ecx + 8], eax */
    edx = MEM32(edi + 0x10); /* 0x12164E82: mov edx, dword ptr [edi + 0x10] */
    ecx = MEM32(edi + 0x8); /* 0x12164E85: mov ecx, dword ptr [edi + 8] */
    MEM32(edx + 0x8) = ecx; /* 0x12164E88: mov dword ptr [edx + 8], ecx */
    edi = MEM32(edi + 0x4); /* 0x12164E8B: mov edi, dword ptr [edi + 4] */
    edi = MEM32(edi + 0xC); /* 0x12164E8E: mov edi, dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_12164C1B); /* 0x12164E91: call 0x12164c1b */
    RECOMP_FLAGS_IN();
L_12164E96:
    eax = ebx; /* 0x12164E96: mov eax, ebx */
    RECOMP_CALL(sub_12164CAE); /* 0x12164E98: call 0x12164cae */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12164E9D: pop edi */
    esi = POP32_VAL(esp); /* 0x12164E9E: pop esi */
    ebx = POP32_VAL(esp); /* 0x12164E9F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12164EA0: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164EA1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164EA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164EA9u);

L_12164EA9:
    edi = edi; /* 0x12164EA9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164EAB: push ebp */
    ebp = esp; /* 0x12164EAC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12164EAE: push ecx */
    PUSH32(esp, ebx); /* 0x12164EAF: push ebx */
    PUSH32(esp, esi); /* 0x12164EB0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12164EB1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12164EB4: push edi */
    eax = esi; /* 0x12164EB5: mov eax, esi */
    RECOMP_CALL(sub_12164BB8); /* 0x12164EB7: call 0x12164bb8 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0xC); /* 0x12164EBC: mov edi, dword ptr [esi + 0xc] */
    ebx = MEM32(eax + 0x4); /* 0x12164EBF: mov ebx, dword ptr [eax + 4] */
    esi = eax; /* 0x12164EC2: mov esi, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x12164EC4: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_12164C1B); /* 0x12164EC7: call 0x12164c1b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12164ECC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x12164ECF: mov ecx, dword ptr [eax + 4] */
    edi = MEM32(ecx + 0x10); /* 0x12164ED2: mov edi, dword ptr [ecx + 0x10] */
    eax = esi; /* 0x12164ED5: mov eax, esi */
    esi = ebx; /* 0x12164ED7: mov esi, ebx */
    MEM32(eax + 0x10) = edi; /* 0x12164ED9: mov dword ptr [eax + 0x10], edi */
    RECOMP_CALL(sub_12164C39); /* 0x12164EDC: call 0x12164c39 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x12164EE1: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x14); /* 0x12164EE4: mov eax, dword ptr [ecx + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12164EE7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12164EEA: pop edi */
    MEM32(ebx + 0x14) = eax; /* 0x12164EEB: mov dword ptr [ebx + 0x14], eax */
    esi = POP32_VAL(esp); /* 0x12164EEE: pop esi */
    MEM32(ecx + 0x14) = eax; /* 0x12164EEF: mov dword ptr [ecx + 0x14], eax */
    eax = ecx; /* 0x12164EF2: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x12164EF4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12164EF5: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164EF6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164EFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164EFEu);

L_12164EFE:
    edi = edi; /* 0x12164EFE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164F00: push ebp */
    ebp = esp; /* 0x12164F01: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12164F03: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12164F04: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12164F07: push esi */
    PUSH32(esp, edi); /* 0x12164F08: push edi */
    PUSH32(esp, ebx); /* 0x12164F09: push ebx */
    RECOMP_CALL(sub_12164EA9); /* 0x12164F0A: call 0x12164ea9 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x4); /* 0x12164F0F: mov esi, dword ptr [ebx + 4] */
    edi = MEM32(esi + 0x4); /* 0x12164F12: mov edi, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x12164F15: mov eax, dword ptr [eax + 4] */
    edi = MEM32(edi + 0xC); /* 0x12164F18: mov edi, dword ptr [edi + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x12164F1B: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_12164C1B); /* 0x12164F1E: call 0x12164c1b */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x12164F23: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(ebx + 0x4); /* 0x12164F26: mov esi, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_12164C1B); /* 0x12164F29: call 0x12164c1b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x12164F2E: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(edi + 0x10); /* 0x12164F31: mov eax, dword ptr [edi + 0x10] */
    MEM32(ecx + 0x10) = eax; /* 0x12164F34: mov dword ptr [ecx + 0x10], eax */
    ecx = MEM32(edi + 0x4); /* 0x12164F37: mov ecx, dword ptr [edi + 4] */
    eax = MEM32(ecx + 0x10); /* 0x12164F3A: mov eax, dword ptr [ecx + 0x10] */
    MEM32(eax + 0x8) = ecx; /* 0x12164F3D: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebx + 0x4); /* 0x12164F40: mov ecx, dword ptr [ebx + 4] */
    ecx = MEM32(ecx + 0x14); /* 0x12164F43: mov ecx, dword ptr [ecx + 0x14] */
    edx = MEM32(edi + 0x4); /* 0x12164F46: mov edx, dword ptr [edi + 4] */
    MEM32(edx + 0x14) = ecx; /* 0x12164F49: mov dword ptr [edx + 0x14], ecx */
    ecx = MEM32(ebx + 0x1C); /* 0x12164F4C: mov ecx, dword ptr [ebx + 0x1c] */
    edx = MEM32(edi + 0x4); /* 0x12164F4F: mov edx, dword ptr [edi + 4] */
    MEM32(edi + 0x1C) = ecx; /* 0x12164F52: mov dword ptr [edi + 0x1c], ecx */
    ecx = MEM32(ebx + 0x4); /* 0x12164F55: mov ecx, dword ptr [ebx + 4] */
    ecx = MEM32(ecx + 0x1C); /* 0x12164F58: mov ecx, dword ptr [ecx + 0x1c] */
    eax = edi; /* 0x12164F5B: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12164F5D: pop edi */
    esi = POP32_VAL(esp); /* 0x12164F5E: pop esi */
    MEM32(edx + 0x1C) = ecx; /* 0x12164F5F: mov dword ptr [edx + 0x1c], ecx */
    ebx = POP32_VAL(esp); /* 0x12164F62: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12164F63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12164F64: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12164F6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164F6Cu);

L_12164F6C:
    edi = edi; /* 0x12164F6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164F6E: push ebp */
    ebp = esp; /* 0x12164F6F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12164F71: push ecx */
    PUSH32(esp, ecx); /* 0x12164F72: push ecx */
    PUSH32(esp, ebx); /* 0x12164F73: push ebx */
    PUSH32(esp, esi); /* 0x12164F74: push esi */
    PUSH32(esp, edi); /* 0x12164F75: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12164F76: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x12164F79: mov eax, edi */
    RECOMP_CALL(sub_12164BB8); /* 0x12164F7B: call 0x12164bb8 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x12164F80: mov edx, dword ptr [ebp + 0xc] */
    edx = MEM32(edx + 0x14); /* 0x12164F83: mov edx, dword ptr [edx + 0x14] */
    esi = MEM32(edi + 0x14); /* 0x12164F86: mov esi, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x12164F89: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x12164F8D: mov ebx, eax */
    eax = MEM32(ebx + 0x4); /* 0x12164F8F: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12164F92: mov dword ptr [ebp - 8], eax */
    /* cmp edx, esi */ /* 0x12164F95: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12164FA5; /* 0x12164F97: je 0x12164fa5 */
L_12164F99:
    MEM32(ebp + (-0x4)) = 1; /* 0x12164F99: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_12164D01); /* 0x12164FA0: call 0x12164d01 */
    RECOMP_FLAGS_IN();
L_12164FA5:
    edi = MEM32(edi + 0xC); /* 0x12164FA5: mov edi, dword ptr [edi + 0xc] */
    esi = ebx; /* 0x12164FA8: mov esi, ebx */
    RECOMP_CALL(sub_12164C1B); /* 0x12164FAA: call 0x12164c1b */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x12164FAF: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0x8)); /* 0x12164FB2: mov esi, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_12164C1B); /* 0x12164FB5: call 0x12164c1b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x12164FBA: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x12164FBE: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x12164FC1: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x10); /* 0x12164FC4: mov eax, dword ptr [eax + 0x10] */
    MEM32(ebx + 0x10) = eax; /* 0x12164FC7: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(edi + 0x10); /* 0x12164FCA: mov eax, dword ptr [edi + 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x12164FCD: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ecx + 0x14); /* 0x12164FD0: mov eax, dword ptr [ecx + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x12164FD3: mov dword ptr [esi + 0x14], eax */
    MEM32(ebx + 0x14) = eax; /* 0x12164FD6: mov dword ptr [ebx + 0x14], eax */
    eax = MEM32(ecx + 0x14); /* 0x12164FD9: mov eax, dword ptr [ecx + 0x14] */
    MEM32(eax + 0x8) = esi; /* 0x12164FDC: mov dword ptr [eax + 8], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12164FEB; /* 0x12164FDF: jne 0x12164feb */
L_12164FE1:
    edi = MEM32(ecx + 0x14); /* 0x12164FE1: mov edi, dword ptr [ecx + 0x14] */
    esi = ebx; /* 0x12164FE4: mov esi, ebx */
    RECOMP_CALL(sub_12164C6D); /* 0x12164FE6: call 0x12164c6d */
    RECOMP_FLAGS_IN();
L_12164FEB:
    edi = POP32_VAL(esp); /* 0x12164FEB: pop edi */
    esi = POP32_VAL(esp); /* 0x12164FEC: pop esi */
    eax = ebx; /* 0x12164FED: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12164FEF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12164FF0: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12164FF1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12164FF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12164FF9u);

L_12164FF9:
    edi = edi; /* 0x12164FF9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12164FFB: push ebp */
    ebp = esp; /* 0x12164FFC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12164FFE: push ecx */
    PUSH32(esp, ecx); /* 0x12164FFF: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x12165000: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x12165003: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x12165006: push ebx */
    PUSH32(esp, esi); /* 0x12165007: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x12165008: mov dword ptr [ebp - 4], eax */
    eax = MEM32(eax + 0xC); /* 0x1216500B: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, edi); /* 0x1216500E: push edi */
L_1216500F:
    ebx = eax; /* 0x1216500F: mov ebx, eax */
    eax = MEM32(eax + 0xC); /* 0x12165011: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) & 0; /* 0x12165014: and dword ptr [ebx + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x12165018: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx + 0x4); /* 0x1216501B: mov eax, dword ptr [ebx + 4] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1216501E: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216507A; /* 0x12165022: jne 0x1216507a */
L_12165024:
    ecx = MEM32(ebx + 0x8); /* 0x12165024: mov ecx, dword ptr [ebx + 8] */
    /* cmp ecx, ebx */ /* 0x12165027: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165037; /* 0x12165029: jne 0x12165037 */
L_1216502B:
    edx = MEM32(ebx + 0x10); /* 0x1216502B: mov edx, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1216502E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_12164CDB); /* 0x12165030: call 0x12164cdb */
    RECOMP_FLAGS_IN();
    goto L_1216504A; /* 0x12165035: jmp 0x1216504a */
L_12165037:
    eax = MEM32(ebx + 0x10); /* 0x12165037: mov eax, dword ptr [ebx + 0x10] */
    MEM32(eax + 0x8) = ecx; /* 0x1216503A: mov dword ptr [eax + 8], ecx */
    edi = MEM32(ebx + 0x4); /* 0x1216503D: mov edi, dword ptr [ebx + 4] */
    edi = MEM32(edi + 0xC); /* 0x12165040: mov edi, dword ptr [edi + 0xc] */
    esi = ebx; /* 0x12165043: mov esi, ebx */
    RECOMP_CALL(sub_12164C1B); /* 0x12165045: call 0x12164c1b */
    RECOMP_FLAGS_IN();
L_1216504A:
    ecx = MEM32(ebx + 0x4); /* 0x1216504A: mov ecx, dword ptr [ebx + 4] */
    edx = MEM32(ecx + 0x8); /* 0x1216504D: mov edx, dword ptr [ecx + 8] */
    /* cmp edx, ecx */ /* 0x12165050: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165060; /* 0x12165052: jne 0x12165060 */
L_12165054:
    edx = MEM32(ecx + 0x10); /* 0x12165054: mov edx, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12165057: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_12164CDB); /* 0x12165059: call 0x12164cdb */
    RECOMP_FLAGS_IN();
    goto L_12165073; /* 0x1216505E: jmp 0x12165073 */
L_12165060:
    eax = MEM32(ecx + 0x10); /* 0x12165060: mov eax, dword ptr [ecx + 0x10] */
    MEM32(eax + 0x8) = edx; /* 0x12165063: mov dword ptr [eax + 8], edx */
    edi = MEM32(ecx + 0x4); /* 0x12165066: mov edi, dword ptr [ecx + 4] */
    edi = MEM32(edi + 0xC); /* 0x12165069: mov edi, dword ptr [edi + 0xc] */
    esi = ecx; /* 0x1216506C: mov esi, ecx */
    RECOMP_CALL(sub_12164C1B); /* 0x1216506E: call 0x12164c1b */
    RECOMP_FLAGS_IN();
L_12165073:
    eax = ebx; /* 0x12165073: mov eax, ebx */
    RECOMP_CALL(sub_12164CAE); /* 0x12165075: call 0x12164cae */
    RECOMP_FLAGS_IN();
L_1216507A:
    eax = MEM32(ebp + (-0x8)); /* 0x1216507A: mov eax, dword ptr [ebp - 8] */
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x1216507D: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216500F; /* 0x12165080: jne 0x1216500f */
L_12165082:
    edx = MEM32(ebp + 0x8); /* 0x12165082: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x4); /* 0x12165085: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx); /* 0x12165088: mov eax, dword ptr [edx] */
    MEM32(eax + 0x4) = ecx; /* 0x1216508A: mov dword ptr [eax + 4], ecx */
    PUSH32(esp, edx); /* 0x1216508D: push edx */
    MEM32(ecx) = eax; /* 0x1216508E: mov dword ptr [ecx], eax */
    RECOMP_CALL(sub_121BF586); /* 0x12165090: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12165095: pop ecx */
    edi = POP32_VAL(esp); /* 0x12165096: pop edi */
    esi = POP32_VAL(esp); /* 0x12165097: pop esi */
    ebx = POP32_VAL(esp); /* 0x12165098: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12165099: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216509A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121650A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121650A2u);

L_121650A2:
    edi = edi; /* 0x121650A2: mov edi, edi */
    PUSH32(esp, esi); /* 0x121650A4: push esi */
    PUSH32(esp, 0x98u); /* 0x121650A5: push 0x98 */
    RECOMP_CALL(sub_121BF524); /* 0x121650AA: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121650AF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x121650B1: pop ecx */
    /* test esi, esi */ /* 0x121650B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121650B8; /* 0x121650B4: jne 0x121650b8 */
L_121650B6:
    esi = POP32_VAL(esp); /* 0x121650B6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121650B7: ret  */
L_121650B8:
    MEM32(esi + 0x4) = esi; /* 0x121650B8: mov dword ptr [esi + 4], esi */
    MEM32(esi) = esi; /* 0x121650BB: mov dword ptr [esi], esi */
    ecx = esi + 0x58; /* 0x121650BD: lea ecx, [esi + 0x58] */
    edx = esi + 0x78; /* 0x121650C0: lea edx, [esi + 0x78] */
    eax = esi + 0x40; /* 0x121650C3: lea eax, [esi + 0x40] */
    PUSH32(esp, ebx); /* 0x121650C6: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121650C7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = ebx; /* 0x121650C9: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0xC) = ebx; /* 0x121650CC: mov dword ptr [esi + 0xc], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x121650CF: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x121650D2: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x10) = ebx; /* 0x121650D5: mov dword ptr [eax + 0x10], ebx */
    MEM16(eax + 0x14) = (uint16_t)(LO16(ebx)); /* 0x121650D8: mov word ptr [eax + 0x14], bx */
    MEM32(eax + 0x4) = eax; /* 0x121650DC: mov dword ptr [eax + 4], eax */
    MEM32(eax) = eax; /* 0x121650DF: mov dword ptr [eax], eax */
    MEM32(ecx + 0x8) = ebx; /* 0x121650E1: mov dword ptr [ecx + 8], ebx */
    MEM32(ecx + 0xC) = ebx; /* 0x121650E4: mov dword ptr [ecx + 0xc], ebx */
    MEM32(ecx + 0x10) = ebx; /* 0x121650E7: mov dword ptr [ecx + 0x10], ebx */
    MEM32(ecx + 0x14) = ebx; /* 0x121650EA: mov dword ptr [ecx + 0x14], ebx */
    MEM32(ecx + 0x1C) = ebx; /* 0x121650ED: mov dword ptr [ecx + 0x1c], ebx */
    MEM32(ecx + 0x18) = ebx; /* 0x121650F0: mov dword ptr [ecx + 0x18], ebx */
    MEM32(ecx) = ecx; /* 0x121650F3: mov dword ptr [ecx], ecx */
    MEM32(ecx + 0x4) = edx; /* 0x121650F5: mov dword ptr [ecx + 4], edx */
    MEM32(edx + 0x8) = ebx; /* 0x121650F8: mov dword ptr [edx + 8], ebx */
    MEM32(edx + 0xC) = ebx; /* 0x121650FB: mov dword ptr [edx + 0xc], ebx */
    MEM32(edx + 0x10) = ebx; /* 0x121650FE: mov dword ptr [edx + 0x10], ebx */
    MEM32(edx + 0x14) = ebx; /* 0x12165101: mov dword ptr [edx + 0x14], ebx */
    MEM32(edx + 0x1C) = ebx; /* 0x12165104: mov dword ptr [edx + 0x1c], ebx */
    MEM32(edx + 0x18) = ebx; /* 0x12165107: mov dword ptr [edx + 0x18], ebx */
    ebx = POP32_VAL(esp); /* 0x1216510A: pop ebx */
    eax = esi; /* 0x1216510B: mov eax, esi */
    MEM32(edx) = edx; /* 0x1216510D: mov dword ptr [edx], edx */
    MEM32(edx + 0x4) = ecx; /* 0x1216510F: mov dword ptr [edx + 4], ecx */
    esi = POP32_VAL(esp); /* 0x12165112: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165113: ret  */
    RECOMP_REGS_OUT();
}

void sub_12165119(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165119u);

L_12165119:
    edi = edi; /* 0x12165119: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216511B: push ebp */
    ebp = esp; /* 0x1216511C: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1216511E: push ebx */
    PUSH32(esp, esi); /* 0x1216511F: push esi */
    PUSH32(esp, edi); /* 0x12165120: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12165121: mov edi, dword ptr [ebp + 8] */
    ebx = edi + 0x40; /* 0x12165124: lea ebx, [edi + 0x40] */
    eax = MEM32(ebx); /* 0x12165127: mov eax, dword ptr [ebx] */
    /* cmp eax, ebx */ /* 0x12165129: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216513C; /* 0x1216512B: je 0x1216513c */
L_1216512D:
    esi = MEM32(eax); /* 0x1216512D: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1216512F: push eax */
    RECOMP_CALL(sub_121BF586); /* 0x12165130: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12165135: pop ecx */
    eax = esi; /* 0x12165136: mov eax, esi */
    /* cmp esi, ebx */ /* 0x12165138: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216512D; /* 0x1216513A: jne 0x1216512d */
L_1216513C:
    eax = MEM32(edi); /* 0x1216513C: mov eax, dword ptr [edi] */
    /* cmp eax, edi */ /* 0x1216513E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165151; /* 0x12165140: je 0x12165151 */
L_12165142:
    esi = MEM32(eax); /* 0x12165142: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12165144: push eax */
    RECOMP_CALL(sub_121BF586); /* 0x12165145: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1216514A: pop ecx */
    eax = esi; /* 0x1216514B: mov eax, esi */
    /* cmp esi, edi */ /* 0x1216514D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165142; /* 0x1216514F: jne 0x12165142 */
L_12165151:
    ebx = edi + 0x58; /* 0x12165151: lea ebx, [edi + 0x58] */
    eax = MEM32(ebx); /* 0x12165154: mov eax, dword ptr [ebx] */
    /* cmp eax, ebx */ /* 0x12165156: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165169; /* 0x12165158: je 0x12165169 */
L_1216515A:
    esi = MEM32(eax); /* 0x1216515A: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1216515C: push eax */
    RECOMP_CALL(sub_121BF586); /* 0x1216515D: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12165162: pop ecx */
    eax = esi; /* 0x12165163: mov eax, esi */
    /* cmp esi, ebx */ /* 0x12165165: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216515A; /* 0x12165167: jne 0x1216515a */
L_12165169:
    PUSH32(esp, edi); /* 0x12165169: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x1216516A: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1216516F: pop ecx */
    edi = POP32_VAL(esp); /* 0x12165170: pop edi */
    esi = POP32_VAL(esp); /* 0x12165171: pop esi */
    ebx = POP32_VAL(esp); /* 0x12165172: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12165173: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12165174: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1216517C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216517Cu);

L_1216517C:
    edi = edi; /* 0x1216517C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216517E: push ebp */
    ebp = esp; /* 0x1216517F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12165181: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12165184: push esi */
    esi = MEM32(eax + 0x8); /* 0x12165185: mov esi, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x12165188: push edi */
L_12165189:
    eax = MEM32(esi + 0x4); /* 0x12165189: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi + 0x10); /* 0x1216518C: mov edx, dword ptr [esi + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x1216518F: mov ecx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12165192: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x12165195: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165198: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216519A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121651BB; /* 0x1216519D: je 0x121651bb */
L_1216519F:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x1216519F: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x121651A2: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121651A5: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121651A7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121651A9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121651C3; /* 0x121651AC: jp 0x121651c3 */
L_121651AE:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x121651AE: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x121651B1: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121651B4: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121651B6: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121651C3; /* 0x121651B9: jne 0x121651c3 */
L_121651BB:
    eax = MEM32(esi + 0x8); /* 0x121651BB: mov eax, dword ptr [esi + 8] */
    esi = MEM32(eax + 0x4); /* 0x121651BE: mov esi, dword ptr [eax + 4] */
    RECOMP_BACKEDGE();
    goto L_12165189; /* 0x121651C1: jmp 0x12165189 */
L_121651C3:
    eax = MEM32(esi + 0x4); /* 0x121651C3: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x10); /* 0x121651C6: mov edx, dword ptr [eax + 0x10] */
    ecx = MEM32(esi + 0x10); /* 0x121651C9: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x121651CC: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x121651CF: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121651D2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121651D4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121651F5; /* 0x121651D7: je 0x121651f5 */
L_121651D9:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121651D9: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x121651DC: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121651DF: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121651E1: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121651E3: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121651FA; /* 0x121651E6: jp 0x121651fa */
L_121651E8:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x121651E8: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x121651EB: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121651EE: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121651F0: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121651FA; /* 0x121651F3: jne 0x121651fa */
L_121651F5:
    esi = MEM32(esi + 0xC); /* 0x121651F5: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_121651C3; /* 0x121651F8: jmp 0x121651c3 */
L_121651FA:
    eax = MEM32(esi + 0x8); /* 0x121651FA: mov eax, dword ptr [esi + 8] */
    edi = MEM32(eax + 0x4); /* 0x121651FD: mov edi, dword ptr [eax + 4] */
    /* cmp MEM32(esi + 0xC), edi */ /* 0x12165200: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216537D; /* 0x12165203: je 0x1216537d */
L_12165209:
    PUSH32(esp, ebx); /* 0x12165209: push ebx */
L_1216520A:
    eax = MEM32(esi + 0x4); /* 0x1216520A: mov eax, dword ptr [esi + 4] */
    edx = MEM32(edi + 0x10); /* 0x1216520D: mov edx, dword ptr [edi + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x12165210: mov ecx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12165213: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x12165216: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165219: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216521B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216535A; /* 0x1216521E: je 0x1216535a */
L_12165224:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12165224: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12165227: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216522A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216522C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1216522E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121652D4; /* 0x12165231: jp 0x121652d4 */
L_12165237:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12165237: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x1216523A: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216523D: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1216523F: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216535A; /* 0x12165242: je 0x1216535a */
L_12165248:
    goto L_121652D4; /* 0x12165248: jmp 0x121652d4 */
L_1216524D:
    eax = MEM32(esi + 0x8); /* 0x1216524D: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x4); /* 0x12165250: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x10); /* 0x12165253: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x12165256: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x10); /* 0x12165259: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x1216525C: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x1216525F: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165262: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12165264: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121652C5; /* 0x12165267: je 0x121652c5 */
L_12165269:
    eax = MEM32(esi + 0x8); /* 0x12165269: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x4); /* 0x1216526C: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x10); /* 0x1216526F: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x12165272: mov eax, dword ptr [eax + 4] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12165275: fld qword ptr [ecx + 0x28] */
    eax = MEM32(eax + 0x10); /* 0x12165278: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x1216527B: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216527E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165280: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12165282: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121652A3; /* 0x12165285: jp 0x121652a3 */
L_12165287:
    eax = MEM32(esi + 0x8); /* 0x12165287: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x4); /* 0x1216528A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x10); /* 0x1216528D: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x12165290: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x10); /* 0x12165293: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12165296: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x12165299: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216529C: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1216529E: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121652C5; /* 0x121652A1: je 0x121652c5 */
L_121652A3:
    eax = MEM32(esi + 0x8); /* 0x121652A3: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x4); /* 0x121652A6: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x121652A9: push dword ptr [eax + 0x10] */
    eax = MEM32(esi + 0x4); /* 0x121652AC: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x121652AF: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x121652B2: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_12167776); /* 0x121652B5: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x121652BA: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121652BC: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121652BE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121652C0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121652DD; /* 0x121652C3: jp 0x121652dd */
L_121652C5:
    eax = MEM32(esi + 0x8); /* 0x121652C5: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x121652C8: push dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x121652CB: push esi */
    RECOMP_CALL(sub_12164F6C); /* 0x121652CC: call 0x12164f6c */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x4); /* 0x121652D1: mov esi, dword ptr [eax + 4] */
L_121652D4:
    /* cmp MEM32(edi + 0xC), esi */ /* 0x121652D4: cmp dword ptr [edi + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216524D; /* 0x121652D7: jne 0x1216524d */
L_121652DD:
    esi = MEM32(esi + 0xC); /* 0x121652DD: mov esi, dword ptr [esi + 0xc] */
    goto L_12165367; /* 0x121652E0: jmp 0x12165367 */
L_121652E5:
    ecx = MEM32(edi + 0xC); /* 0x121652E5: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx + 0x4); /* 0x121652E8: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x10); /* 0x121652EB: mov edx, dword ptr [eax + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x121652EE: mov eax, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x121652F1: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x121652F4: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121652F7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121652F9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216534E; /* 0x121652FC: je 0x1216534e */
L_121652FE:
    eax = MEM32(ecx + 0x4); /* 0x121652FE: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x10); /* 0x12165301: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12165304: fld qword ptr [eax + 0x28] */
    ecx = MEM32(ecx + 0x10); /* 0x12165307: mov ecx, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x1216530A: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216530D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216530F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12165311: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216532F; /* 0x12165314: jp 0x1216532f */
L_12165316:
    ecx = MEM32(edi + 0xC); /* 0x12165316: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx + 0x4); /* 0x12165319: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x10); /* 0x1216531C: mov edx, dword ptr [eax + 0x10] */
    eax = MEM32(ecx + 0x10); /* 0x1216531F: mov eax, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12165322: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x12165325: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165328: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1216532A: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216534E; /* 0x1216532D: je 0x1216534e */
L_1216532F:
    eax = MEM32(ebx + 0x4); /* 0x1216532F: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x12165332: push dword ptr [eax + 0x10] */
    eax = MEM32(edi + 0x4); /* 0x12165335: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x12165338: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x1216533B: push dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_12167776); /* 0x1216533E: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x12165343: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12165345: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165347: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12165349: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12165361; /* 0x1216534C: jne 0x12165361 */
L_1216534E:
    PUSH32(esp, edi); /* 0x1216534E: push edi */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x1216534F: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_12164F6C); /* 0x12165352: call 0x12164f6c */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax + 0x4); /* 0x12165357: mov edi, dword ptr [eax + 4] */
L_1216535A:
    ebx = MEM32(edi + 0xC); /* 0x1216535A: mov ebx, dword ptr [edi + 0xc] */
    /* cmp ebx, esi */ /* 0x1216535D: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121652E5; /* 0x1216535F: jne 0x121652e5 */
L_12165361:
    eax = MEM32(edi + 0x8); /* 0x12165361: mov eax, dword ptr [edi + 8] */
    edi = MEM32(eax + 0x4); /* 0x12165364: mov edi, dword ptr [eax + 4] */
L_12165367:
    /* cmp MEM32(esi + 0xC), edi */ /* 0x12165367: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216520A; /* 0x1216536A: jne 0x1216520a */
L_12165370:
    ebx = POP32_VAL(esp); /* 0x12165370: pop ebx */
    goto L_1216537D; /* 0x12165371: jmp 0x1216537d */
L_12165373:
    PUSH32(esp, edi); /* 0x12165373: push edi */
    PUSH32(esp, eax); /* 0x12165374: push eax */
    RECOMP_CALL(sub_12164F6C); /* 0x12165375: call 0x12164f6c */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax + 0x4); /* 0x1216537A: mov edi, dword ptr [eax + 4] */
L_1216537D:
    eax = MEM32(edi + 0xC); /* 0x1216537D: mov eax, dword ptr [edi + 0xc] */
    /* cmp MEM32(eax + 0xC), esi */ /* 0x12165380: cmp dword ptr [eax + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165373; /* 0x12165383: jne 0x12165373 */
L_12165385:
    edi = POP32_VAL(esp); /* 0x12165385: pop edi */
    esi = POP32_VAL(esp); /* 0x12165386: pop esi */
    ebp = POP32_VAL(esp); /* 0x12165387: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12165388: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12165390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165390u);

L_12165390:
    edi = edi; /* 0x12165390: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165392: push ebp */
    ebp = esp; /* 0x12165393: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12165395: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12165396: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x12165399: add esi, 0x40 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1216539C: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x1216539E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121653B8; /* 0x121653A0: je 0x121653b8 */
L_121653A2:
    PUSH32(esp, edi); /* 0x121653A2: push edi */
L_121653A3:
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x121653A3: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(eax); /* 0x121653A7: mov edi, dword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121653B1; /* 0x121653A9: je 0x121653b1 */
L_121653AB:
    PUSH32(esp, eax); /* 0x121653AB: push eax */
    RECOMP_CALL(sub_1216517C); /* 0x121653AC: call 0x1216517c */
    RECOMP_FLAGS_IN();
L_121653B1:
    eax = edi; /* 0x121653B1: mov eax, edi */
    /* cmp edi, esi */ /* 0x121653B3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121653A3; /* 0x121653B5: jne 0x121653a3 */
L_121653B7:
    edi = POP32_VAL(esp); /* 0x121653B7: pop edi */
L_121653B8:
    esi = POP32_VAL(esp); /* 0x121653B8: pop esi */
    ebp = POP32_VAL(esp); /* 0x121653B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121653BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121653C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121653C2u);

L_121653C2:
    edi = edi; /* 0x121653C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121653C4: push ebp */
    ebp = esp; /* 0x121653C5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121653C7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121653C8: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x121653CB: add esi, 0x40 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x121653CE: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x121653D0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121653EA; /* 0x121653D2: je 0x121653ea */
L_121653D4:
    PUSH32(esp, edi); /* 0x121653D4: push edi */
L_121653D5:
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x121653D5: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(eax); /* 0x121653D9: mov edi, dword ptr [eax] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_121653E3; /* 0x121653DB: jne 0x121653e3 */
L_121653DD:
    PUSH32(esp, eax); /* 0x121653DD: push eax */
    RECOMP_CALL(sub_12164FF9); /* 0x121653DE: call 0x12164ff9 */
    RECOMP_FLAGS_IN();
L_121653E3:
    eax = edi; /* 0x121653E3: mov eax, edi */
    /* cmp edi, esi */ /* 0x121653E5: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121653D5; /* 0x121653E7: jne 0x121653d5 */
L_121653E9:
    edi = POP32_VAL(esp); /* 0x121653E9: pop edi */
L_121653EA:
    esi = POP32_VAL(esp); /* 0x121653EA: pop esi */
    ebp = POP32_VAL(esp); /* 0x121653EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121653EC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121653F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121653F4u);

L_121653F4:
    edi = edi; /* 0x121653F4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121653F6: push ebp */
    ebp = esp; /* 0x121653F7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121653F9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121653FA: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x121653FD: add esi, 0x58 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x12165400: mov ecx, dword ptr [esi] */
    /* cmp ecx, esi */ /* 0x12165402: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165441; /* 0x12165404: je 0x12165441 */
L_12165406:
    PUSH32(esp, edi); /* 0x12165406: push edi */
L_12165407:
    eax = MEM32(ecx + 0x14); /* 0x12165407: mov eax, dword ptr [ecx + 0x14] */
    SET_LO8(edx, MEM8(eax + 0x15)); /* 0x1216540A: mov dl, byte ptr [eax + 0x15] */
    eax = MEM32(ecx + 0x4); /* 0x1216540D: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x14); /* 0x12165410: mov eax, dword ptr [eax + 0x14] */
    edi = MEM32(ecx); /* 0x12165413: mov edi, dword ptr [ecx] */
    /* cmp MEM8(eax + 0x15), LO8(edx) */ /* 0x12165415: cmp byte ptr [eax + 0x15], dl */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165428; /* 0x12165418: je 0x12165428 */
L_1216541A:
    eax = MEM32(ebp + 0xC); /* 0x1216541A: mov eax, dword ptr [ebp + 0xc] */
    /* test LO8(edx), LO8(edx) */ /* 0x1216541D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12165423; /* 0x1216541F: jne 0x12165423 */
L_12165421:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x12165421: neg eax */
    _flag_k = FK_CMP;
L_12165423:
    MEM32(ecx + 0x1C) = eax; /* 0x12165423: mov dword ptr [ecx + 0x1c], eax */
    goto L_1216543A; /* 0x12165426: jmp 0x1216543a */
L_12165428:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x12165428: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165434; /* 0x1216542C: jne 0x12165434 */
L_1216542E:
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) & 0; /* 0x1216542E: and dword ptr [ecx + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1216543A; /* 0x12165432: jmp 0x1216543a */
L_12165434:
    PUSH32(esp, ecx); /* 0x12165434: push ecx */
    RECOMP_CALL(sub_12164DE9); /* 0x12165435: call 0x12164de9 */
    RECOMP_FLAGS_IN();
L_1216543A:
    ecx = edi; /* 0x1216543A: mov ecx, edi */
    /* cmp edi, esi */ /* 0x1216543C: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165407; /* 0x1216543E: jne 0x12165407 */
L_12165440:
    edi = POP32_VAL(esp); /* 0x12165440: pop edi */
L_12165441:
    esi = POP32_VAL(esp); /* 0x12165441: pop esi */
    ebp = POP32_VAL(esp); /* 0x12165442: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12165443: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1216544B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216544Bu);

L_1216544B:
    edi = edi; /* 0x1216544B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216544D: push ebp */
    ebp = esp; /* 0x1216544E: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12165450: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x14); /* 0x12165453: mov ecx, dword ptr [edx + 0x14] */
    PUSH32(esp, esi); /* 0x12165456: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12165457: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x7C); /* 0x1216545A: mov eax, dword ptr [esi + 0x7c] */
    MEM32(ecx + 0x10) = eax; /* 0x1216545D: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(edx + 0x14); /* 0x12165460: mov eax, dword ptr [edx + 0x14] */
    MEM32(esi + 0x7C) = eax; /* 0x12165463: mov dword ptr [esi + 0x7c], eax */
    eax = MEM32(edx + 0x14); /* 0x12165466: mov eax, dword ptr [edx + 0x14] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x12165469: mov byte ptr [eax + 0x14], 1 */
    esi = POP32_VAL(esp); /* 0x1216546D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216546E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1216546F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12165477(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165477u);

L_12165477:
    edi = edi; /* 0x12165477: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165479: push ebp */
    ebp = esp; /* 0x1216547A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1216547C: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1216547D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12165481: push edi */
    edi = eax; /* 0x12165482: mov edi, eax */
    eax = MEM32(esi + 0xD20); /* 0x12165484: mov eax, dword ptr [esi + 0xd20] */
    /* cmp eax, 0x120D96FBu */ /* 0x1216548A: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216549D; /* 0x1216548F: je 0x1216549d */
L_12165491:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165491: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 4); /* 0x12165497: push 4 */
    RECOMP_ICALL(eax); /* 0x12165499: call eax */
    RECOMP_FLAGS_IN();
    goto L_121654A5; /* 0x1216549B: jmp 0x121654a5 */
L_1216549D:
    PUSH32(esp, 4); /* 0x1216549D: push 4 */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x1216549F: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_121654A5:
    /* test edi, edi */ /* 0x121654A5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216551F; /* 0x121654A7: je 0x1216551f */
L_121654A9:
    PUSH32(esp, ebx); /* 0x121654A9: push ebx */
L_121654AA:
    ebx = MEM32(edi + 0x8); /* 0x121654AA: mov ebx, dword ptr [edi + 8] */
L_121654AD:
    /* cmp MEM8(esi + 0x78), 0 */ /* 0x121654AD: cmp byte ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x78)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121654E8; /* 0x121654B1: je 0x121654e8 */
L_121654B3:
    eax = MEM32(ebx + 0x4); /* 0x121654B3: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x14); /* 0x121654B6: mov eax, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121654B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(eax + 0x15), LO8(ecx) */ /* 0x121654BB: cmp byte ptr [eax + 0x15], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x121654BE: sete cl */
    /* cmp MEM32(ebp + (-0x4)), ecx */ /* 0x121654C1: cmp dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121654E8; /* 0x121654C4: je 0x121654e8 */
L_121654C6:
    eax = MEM32(esi + 0xD24); /* 0x121654C6: mov eax, dword ptr [esi + 0xd24] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x121654CC: mov dword ptr [ebp - 4], ecx */
    /* cmp eax, 0x120D96FBu */ /* 0x121654CF: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121654E1; /* 0x121654D4: je 0x121654e1 */
L_121654D6:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121654D6: push dword ptr [esi + 0xd38] */
    PUSH32(esp, ecx); /* 0x121654DC: push ecx */
    RECOMP_ICALL(eax); /* 0x121654DD: call eax */
    RECOMP_FLAGS_IN();
    goto L_121654E8; /* 0x121654DF: jmp 0x121654e8 */
L_121654E1:
    PUSH32(esp, ecx); /* 0x121654E1: push ecx */
    RECOMP_ICALL(MEM32(esi + 0x84)); /* 0x121654E2: call dword ptr [esi + 0x84] */
    RECOMP_FLAGS_IN();
L_121654E8:
    ecx = MEM32(esi + 0xD28); /* 0x121654E8: mov ecx, dword ptr [esi + 0xd28] */
    eax = MEM32(ebx + 0x10); /* 0x121654EE: mov eax, dword ptr [ebx + 0x10] */
    /* cmp ecx, 0x120D96FBu */ /* 0x121654F1: cmp ecx, 0x120d96fb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165506; /* 0x121654F7: je 0x12165506 */
L_121654F9:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121654F9: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121654FF: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(ecx); /* 0x12165502: call ecx */
    RECOMP_FLAGS_IN();
    goto L_1216550F; /* 0x12165504: jmp 0x1216550f */
L_12165506:
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12165506: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x12165509: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_1216550F:
    ebx = MEM32(ebx + 0xC); /* 0x1216550F: mov ebx, dword ptr [ebx + 0xc] */
    /* cmp ebx, MEM32(edi + 0x8) */ /* 0x12165512: cmp ebx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121654AD; /* 0x12165515: jne 0x121654ad */
L_12165517:
    edi = MEM32(edi + 0x10); /* 0x12165517: mov edi, dword ptr [edi + 0x10] */
    /* test edi, edi */ /* 0x1216551A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121654AA; /* 0x1216551C: jne 0x121654aa */
L_1216551E:
    ebx = POP32_VAL(esp); /* 0x1216551E: pop ebx */
L_1216551F:
    eax = MEM32(esi + 0xD2C); /* 0x1216551F: mov eax, dword ptr [esi + 0xd2c] */
    edi = POP32_VAL(esp); /* 0x12165525: pop edi */
    /* cmp eax, 0x12164367u */ /* 0x12165526: cmp eax, 0x12164367 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165537; /* 0x1216552B: je 0x12165537 */
L_1216552D:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x1216552D: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x12165533: call eax */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12165535: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165536: ret  */
L_12165537:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x12165537: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1216553D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1216553E: ret  */
    RECOMP_REGS_OUT();
}

void sub_12165544(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165544u);

L_12165544:
    edi = edi; /* 0x12165544: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165546: push ebp */
    ebp = esp; /* 0x12165547: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12165549: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1216554A: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xD20); /* 0x1216554D: mov eax, dword ptr [esi + 0xd20] */
    /* cmp eax, 0x120D96FBu */ /* 0x12165553: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165566; /* 0x12165558: je 0x12165566 */
L_1216555A:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x1216555A: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 6); /* 0x12165560: push 6 */
    RECOMP_ICALL(eax); /* 0x12165562: call eax */
    RECOMP_FLAGS_IN();
    goto L_1216556E; /* 0x12165564: jmp 0x1216556e */
L_12165566:
    PUSH32(esp, 6); /* 0x12165566: push 6 */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x12165568: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_1216556E:
    ecx = MEM32(esi + 0xD28); /* 0x1216556E: mov ecx, dword ptr [esi + 0xd28] */
    PUSH32(esp, ebx); /* 0x12165574: push ebx */
    PUSH32(esp, edi); /* 0x12165575: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12165576: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x10); /* 0x12165579: mov eax, dword ptr [edi + 0x10] */
    ebx = 0x120D96FBu; /* 0x1216557C: mov ebx, 0x120d96fb */
    /* cmp ecx, ebx */ /* 0x12165581: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165592; /* 0x12165583: je 0x12165592 */
L_12165585:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165585: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1216558B: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(ecx); /* 0x1216558E: call ecx */
    RECOMP_FLAGS_IN();
    goto L_121655AA; /* 0x12165590: jmp 0x121655aa */
L_12165592:
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12165592: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x12165595: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
    goto L_121655AA; /* 0x1216559B: jmp 0x121655aa */
L_1216559D:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x1216559D: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121655D9; /* 0x121655A1: jne 0x121655d9 */
L_121655A3:
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x121655A3: mov byte ptr [eax + 0x14], 1 */
    edi = MEM32(edi + 0x8); /* 0x121655A7: mov edi, dword ptr [edi + 8] */
L_121655AA:
    ecx = MEM32(esi + 0xD28); /* 0x121655AA: mov ecx, dword ptr [esi + 0xd28] */
    eax = MEM32(edi + 0x4); /* 0x121655B0: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x10); /* 0x121655B3: mov eax, dword ptr [eax + 0x10] */
    /* cmp ecx, ebx */ /* 0x121655B6: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121655C7; /* 0x121655B8: je 0x121655c7 */
L_121655BA:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121655BA: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121655C0: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(ecx); /* 0x121655C3: call ecx */
    RECOMP_FLAGS_IN();
    goto L_121655D0; /* 0x121655C5: jmp 0x121655d0 */
L_121655C7:
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121655C7: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x121655CA: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_121655D0:
    eax = MEM32(edi + 0x14); /* 0x121655D0: mov eax, dword ptr [edi + 0x14] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x121655D3: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216559D; /* 0x121655D7: jne 0x1216559d */
L_121655D9:
    eax = MEM32(esi + 0xD2C); /* 0x121655D9: mov eax, dword ptr [esi + 0xd2c] */
    edi = POP32_VAL(esp); /* 0x121655DF: pop edi */
    ebx = POP32_VAL(esp); /* 0x121655E0: pop ebx */
    /* cmp eax, 0x12164367u */ /* 0x121655E1: cmp eax, 0x12164367 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121655F2; /* 0x121655E6: je 0x121655f2 */
L_121655E8:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121655E8: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x121655EE: call eax */
    RECOMP_FLAGS_IN();
    goto L_121655F8; /* 0x121655F0: jmp 0x121655f8 */
L_121655F2:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x121655F2: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
L_121655F8:
    esi = POP32_VAL(esp); /* 0x121655F8: pop esi */
    ebp = POP32_VAL(esp); /* 0x121655F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121655FA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12165602(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165602u);

L_12165602:
    edi = edi; /* 0x12165602: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165604: push ebp */
    ebp = esp; /* 0x12165605: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12165607: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12165608: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xD20); /* 0x1216560B: mov eax, dword ptr [esi + 0xd20] */
    /* cmp eax, 0x120D96FBu */ /* 0x12165611: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165624; /* 0x12165616: je 0x12165624 */
L_12165618:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165618: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 5); /* 0x1216561E: push 5 */
    RECOMP_ICALL(eax); /* 0x12165620: call eax */
    RECOMP_FLAGS_IN();
    goto L_1216562C; /* 0x12165622: jmp 0x1216562c */
L_12165624:
    PUSH32(esp, 5); /* 0x12165624: push 5 */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x12165626: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_1216562C:
    ecx = MEM32(esi + 0xD28); /* 0x1216562C: mov ecx, dword ptr [esi + 0xd28] */
    PUSH32(esp, ebx); /* 0x12165632: push ebx */
    PUSH32(esp, edi); /* 0x12165633: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12165634: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x10); /* 0x12165637: mov eax, dword ptr [edi + 0x10] */
    ebx = 0x120D96FBu; /* 0x1216563A: mov ebx, 0x120d96fb */
    /* cmp ecx, ebx */ /* 0x1216563F: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165650; /* 0x12165641: je 0x12165650 */
L_12165643:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165643: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12165649: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(ecx); /* 0x1216564C: call ecx */
    RECOMP_FLAGS_IN();
    goto L_121656A4; /* 0x1216564E: jmp 0x121656a4 */
L_12165650:
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12165650: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x12165653: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
    goto L_121656A4; /* 0x12165659: jmp 0x121656a4 */
L_1216565B:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x1216565B: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121656D3; /* 0x1216565F: jne 0x121656d3 */
L_12165661:
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x12165661: mov byte ptr [eax + 0x14], 1 */
    eax = MEM32(edi + 0xC); /* 0x12165665: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(esi + 0xD28); /* 0x12165668: mov ecx, dword ptr [esi + 0xd28] */
    edi = MEM32(eax + 0x4); /* 0x1216566E: mov edi, dword ptr [eax + 4] */
    eax = MEM32(edi + 0x10); /* 0x12165671: mov eax, dword ptr [edi + 0x10] */
    /* cmp ecx, ebx */ /* 0x12165674: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165685; /* 0x12165676: je 0x12165685 */
L_12165678:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165678: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1216567E: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(ecx); /* 0x12165681: call ecx */
    RECOMP_FLAGS_IN();
    goto L_1216568E; /* 0x12165683: jmp 0x1216568e */
L_12165685:
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12165685: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x12165688: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_1216568E:
    eax = MEM32(edi + 0x14); /* 0x1216568E: mov eax, dword ptr [edi + 0x14] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x12165691: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121656D3; /* 0x12165695: je 0x121656d3 */
L_12165697:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x12165697: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121656D3; /* 0x1216569B: jne 0x121656d3 */
L_1216569D:
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x1216569D: mov byte ptr [eax + 0x14], 1 */
    edi = MEM32(edi + 0x8); /* 0x121656A1: mov edi, dword ptr [edi + 8] */
L_121656A4:
    ecx = MEM32(esi + 0xD28); /* 0x121656A4: mov ecx, dword ptr [esi + 0xd28] */
    eax = MEM32(edi + 0x4); /* 0x121656AA: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x10); /* 0x121656AD: mov eax, dword ptr [eax + 0x10] */
    /* cmp ecx, ebx */ /* 0x121656B0: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121656C1; /* 0x121656B2: je 0x121656c1 */
L_121656B4:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121656B4: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121656BA: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(ecx); /* 0x121656BD: call ecx */
    RECOMP_FLAGS_IN();
    goto L_121656CA; /* 0x121656BF: jmp 0x121656ca */
L_121656C1:
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121656C1: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x121656C4: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_121656CA:
    eax = MEM32(edi + 0x14); /* 0x121656CA: mov eax, dword ptr [edi + 0x14] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x121656CD: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216565B; /* 0x121656D1: jne 0x1216565b */
L_121656D3:
    eax = MEM32(esi + 0xD2C); /* 0x121656D3: mov eax, dword ptr [esi + 0xd2c] */
    edi = POP32_VAL(esp); /* 0x121656D9: pop edi */
    ebx = POP32_VAL(esp); /* 0x121656DA: pop ebx */
    /* cmp eax, 0x12164367u */ /* 0x121656DB: cmp eax, 0x12164367 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121656EC; /* 0x121656E0: je 0x121656ec */
L_121656E2:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121656E2: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x121656E8: call eax */
    RECOMP_FLAGS_IN();
    goto L_121656F2; /* 0x121656EA: jmp 0x121656f2 */
L_121656EC:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x121656EC: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
L_121656F2:
    esi = POP32_VAL(esp); /* 0x121656F2: pop esi */
    ebp = POP32_VAL(esp); /* 0x121656F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121656F4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121656FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121656FCu);

L_121656FC:
    edi = edi; /* 0x121656FC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121656FE: push ebp */
    ebp = esp; /* 0x121656FF: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12165701: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12165702: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x40u; /* 0x12165705: add ebx, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12165708: push edi */
    edi = MEM32(ebx); /* 0x12165709: mov edi, dword ptr [ebx] */
    MEM32(ebp + 0xC) = ebx; /* 0x1216570B: mov dword ptr [ebp + 0xc], ebx */
    /* cmp edi, ebx */ /* 0x1216570E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165798; /* 0x12165710: je 0x12165798 */
L_12165716:
    PUSH32(esp, esi); /* 0x12165716: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12165717: mov esi, dword ptr [ebp + 8] */
L_1216571A:
    /* cmp MEM8(edi + 0x15), 0 */ /* 0x1216571A: cmp byte ptr [edi + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165790; /* 0x1216571E: je 0x12165790 */
L_12165720:
    eax = MEM32(esi + 0xD20); /* 0x12165720: mov eax, dword ptr [esi + 0xd20] */
    /* cmp eax, 0x120D96FBu */ /* 0x12165726: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165739; /* 0x1216572B: je 0x12165739 */
L_1216572D:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x1216572D: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 2); /* 0x12165733: push 2 */
    RECOMP_ICALL(eax); /* 0x12165735: call eax */
    RECOMP_FLAGS_IN();
    goto L_12165741; /* 0x12165737: jmp 0x12165741 */
L_12165739:
    PUSH32(esp, 2); /* 0x12165739: push 2 */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x1216573B: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_12165741:
    ebx = MEM32(edi + 0x8); /* 0x12165741: mov ebx, dword ptr [edi + 8] */
L_12165744:
    ecx = MEM32(esi + 0xD28); /* 0x12165744: mov ecx, dword ptr [esi + 0xd28] */
    eax = MEM32(ebx + 0x10); /* 0x1216574A: mov eax, dword ptr [ebx + 0x10] */
    /* cmp ecx, 0x120D96FBu */ /* 0x1216574D: cmp ecx, 0x120d96fb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165762; /* 0x12165753: je 0x12165762 */
L_12165755:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165755: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1216575B: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(ecx); /* 0x1216575E: call ecx */
    RECOMP_FLAGS_IN();
    goto L_1216576B; /* 0x12165760: jmp 0x1216576b */
L_12165762:
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12165762: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x12165765: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_1216576B:
    ebx = MEM32(ebx + 0xC); /* 0x1216576B: mov ebx, dword ptr [ebx + 0xc] */
    /* cmp ebx, MEM32(edi + 0x8) */ /* 0x1216576E: cmp ebx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165744; /* 0x12165771: jne 0x12165744 */
L_12165773:
    eax = MEM32(esi + 0xD2C); /* 0x12165773: mov eax, dword ptr [esi + 0xd2c] */
    /* cmp eax, 0x12164367u */ /* 0x12165779: cmp eax, 0x12164367 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216578A; /* 0x1216577E: je 0x1216578a */
L_12165780:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165780: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x12165786: call eax */
    RECOMP_FLAGS_IN();
    goto L_12165790; /* 0x12165788: jmp 0x12165790 */
L_1216578A:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x1216578A: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
L_12165790:
    edi = MEM32(edi); /* 0x12165790: mov edi, dword ptr [edi] */
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x12165792: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216571A; /* 0x12165795: jne 0x1216571a */
L_12165797:
    esi = POP32_VAL(esp); /* 0x12165797: pop esi */
L_12165798:
    edi = POP32_VAL(esp); /* 0x12165798: pop edi */
    ebx = POP32_VAL(esp); /* 0x12165799: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1216579A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1216579B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121657A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121657A3u);

L_121657A3:
    edi = edi; /* 0x121657A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121657A5: push ebp */
    ebp = esp; /* 0x121657A6: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x121657A8: mov ecx, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x121657AB: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121657AD: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121657B0: push ebx */
    PUSH32(esp, esi); /* 0x121657B1: push esi */
    esi = MEM32(eax + 0x98); /* 0x121657B2: mov esi, dword ptr [eax + 0x98] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x121657B8: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x121657B8: shl esi, 5 */
    PUSH32(esp, edi); /* 0x121657BB: push edi */
    ebx = eax + 0xA0; /* 0x121657BC: lea ebx, [eax + 0xa0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121657C2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x121657C4: add esi, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x121657C6: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121657D3; /* 0x121657C9: jne 0x121657d3 */
L_121657CB:
    *(double*)ADDR(ecx + 0x10) = _st[0]; /* 0x121657CB: fst qword ptr [ecx + 0x10] */
    *(double*)ADDR(ecx + 0x8) = _st[0]; /* 0x121657CE: fst qword ptr [ecx + 8] */
    *(double*)ADDR(ecx) = _st[0]; /* 0x121657D1: fst qword ptr [ecx] */
L_121657D3:
    edx = ebx + 0x20; /* 0x121657D3: lea edx, [ebx + 0x20] */
    fp_push(*(double*)ADDR(edx)); /* 0x121657D6: fld qword ptr [edx] */
    eax = ebx + 0x8; /* 0x121657D8: lea eax, [ebx + 8] */
    _st[0] -= *(double*)ADDR(ebx); /* 0x121657DB: fsub qword ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x121657DD: add edx, 0x20 */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(edx + (-0x18))); /* 0x121657E0: fld qword ptr [edx - 0x18] */
    _st[0] -= *(double*)ADDR(eax); /* 0x121657E3: fsub qword ptr [eax] */
    fp_push(*(double*)ADDR(edx + (-0x10))); /* 0x121657E5: fld qword ptr [edx - 0x10] */
    _st[0] -= *(double*)ADDR(ebx + 0x10); /* 0x121657E8: fsub qword ptr [ebx + 0x10] */
    /* cmp edx, esi */ /* 0x121657EB: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121658BF; /* 0x121657ED: jae 0x121658bf */
L_121657F3:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121657F3: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(edx)); /* 0x121657F7: fld qword ptr [edx] */
    _st[0] -= *(double*)ADDR(ebx); /* 0x121657F9: fsub qword ptr [ebx] */
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x121657FB: fld qword ptr [edx + 8] */
    _st[0] -= *(double*)ADDR(eax); /* 0x121657FE: fsub qword ptr [eax] */
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x12165800: fld qword ptr [edx + 0x10] */
    _st[0] -= *(double*)ADDR(ebx + 0x10); /* 0x12165803: fsub qword ptr [ebx + 0x10] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x12165806: fst qword ptr [ebp - 8] */
    fp_push(_st[4]); /* 0x12165809: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1216580B: fmulp st(1) */
    fp_push(_st[3]); /* 0x1216580D: fld st(3) */
    _st[0] *= _st[2]; /* 0x1216580F: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12165811: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x12165813: fstp qword ptr [ebp - 0x10] */
    fp_xch(2); /* 0x12165816: fxch st(2) */
    _st[0] *= _st[1]; /* 0x12165818: fmul st(1) */
    fp_push(_st[4]); /* 0x1216581A: fld st(4) */
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x1216581C: fmul qword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1216581F: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x12165821: fstp qword ptr [ebp - 0x18] */
    fp_xch(3); /* 0x12165824: fxch st(3) */
    _st[0] *= _st[1]; /* 0x12165826: fmul st(1) */
    fp_xch(2); /* 0x12165828: fxch st(2) */
    _st[0] *= _st[3]; /* 0x1216582A: fmul st(3) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1216582C: fsubp st(2) */
    fp_push(*(double*)ADDR(ecx)); /* 0x1216582E: fld qword ptr [ecx] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x12165830: fld qword ptr [ebp - 0x10] */
    _st[1] *= _st[0]; /* 0x12165833: fmul st(1), st(0) */
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x12165835: fld qword ptr [ecx + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x12165838: fld qword ptr [ebp - 0x18] */
    _st[1] *= _st[0]; /* 0x1216583B: fmul st(1), st(0) */
    fp_xch(3); /* 0x1216583D: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1216583F: faddp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12165841: fld qword ptr [ecx + 0x10] */
    _st[0] *= _st[5]; /* 0x12165844: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12165846: faddp st(1) */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216587A; /* 0x12165848: jne 0x1216587a */
L_1216584A:
    _fpu_cmp = FPU_CMP(_st[0], _st[6]); /* 0x1216584A: fcomp st(6) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216584C: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1216584E: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12165864; /* 0x12165851: jne 0x12165864 */
L_12165853:
    _st[0] += *(double*)ADDR(ecx); /* 0x12165853: fadd qword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x12165855: fstp qword ptr [ecx] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x12165857: fadd qword ptr [ecx + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x8) = _v; } /* 0x1216585A: fstp qword ptr [ecx + 8] */
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x1216585D: fld qword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12165860: faddp st(2) */
    goto L_12165873; /* 0x12165862: jmp 0x12165873 */
L_12165864:
    _st[0] = *(double*)ADDR(ecx) - _st[0]; /* 0x12165864: fsubr qword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x12165866: fstp qword ptr [ecx] */
    _st[0] = *(double*)ADDR(ecx + 0x8) - _st[0]; /* 0x12165868: fsubr qword ptr [ecx + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x8) = _v; } /* 0x1216586B: fstp qword ptr [ecx + 8] */
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x1216586E: fld qword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12165871: fsubrp st(2) */
L_12165873:
    fp_xch(1); /* 0x12165873: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x10) = _v; } /* 0x12165875: fstp qword ptr [ecx + 0x10] */
    goto L_121658A8; /* 0x12165878: jmp 0x121658a8 */
L_1216587A:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216587A: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216587C: fstp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1216587E: fstp st(2) */
    fp_xch(1); /* 0x12165880: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x12165882: fucom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165884: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12165886: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_121658A6; /* 0x12165889: jnp 0x121658a6 */
L_1216588B:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x1216588B: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216588D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216588F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216589D; /* 0x12165892: jne 0x1216589d */
L_12165894:
    /* test edi, edi */ /* 0x12165894: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121658BA; /* 0x12165896: js 0x121658ba */
L_12165898:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12165898: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1216589A: inc edi */
    _flag_k = FK_INC;
    goto L_121658A8; /* 0x1216589B: jmp 0x121658a8 */
L_1216589D:
    /* test edi, edi */ /* 0x1216589D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_121658BA; /* 0x1216589F: jg 0x121658ba */
L_121658A1:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x121658A1: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121658A8; /* 0x121658A4: jmp 0x121658a8 */
L_121658A6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121658A6: fstp st(0) */
L_121658A8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x121658A8: add edx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x121658AB: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121658C1; /* 0x121658AD: jae 0x121658c1 */
L_121658AF:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x121658AF: fld qword ptr [ebp - 8] */
    eax = ebx + 0x8; /* 0x121658B2: lea eax, [ebx + 8] */
    RECOMP_BACKEDGE();
    goto L_121657F3; /* 0x121658B5: jmp 0x121657f3 */
L_121658BA:
    PUSH32(esp, 2); /* 0x121658BA: push 2 */
    eax = POP32_VAL(esp); /* 0x121658BC: pop eax */
    goto L_121658C3; /* 0x121658BD: jmp 0x121658c3 */
L_121658BF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121658BF: fstp st(0) */
L_121658C1:
    eax = edi; /* 0x121658C1: mov eax, edi */
L_121658C3:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x121658C3: fstp st(2) */
    edi = POP32_VAL(esp); /* 0x121658C5: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121658C6: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x121658C8: pop esi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121658C9: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x121658CB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121658CC: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121658CD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121658D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121658D5u);

L_121658D5:
    edi = edi; /* 0x121658D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121658D7: push ebp */
    ebp = esp; /* 0x121658D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x121658DA: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121658DD: push ebx */
    PUSH32(esp, esi); /* 0x121658DE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121658DF: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x98); /* 0x121658E2: mov eax, dword ptr [esi + 0x98] */
    ebx = eax; /* 0x121658E8: mov ebx, eax */
    PUSH32(esp, edi); /* 0x121658EA: push edi */
    if (5u) _cf = (((ebx) >> 27) & 1u); /* 0x121658EB: shl ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ebx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 5u; /* 0x121658EB: shl ebx, 5 */
    edi = esi + 0xA0; /* 0x121658EE: lea edi, [esi + 0xa0] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x121658F4: add ebx, edi */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x121658F6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12165A8D; /* 0x121658F9: jl 0x12165a8d */
L_121658FF:
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x121658FF: fld qword ptr [esi + 0x10] */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x12165902: fst qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(esi + 0x18)); /* 0x12165905: fld qword ptr [esi + 0x18] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x12165908: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(esi + 0x20)); /* 0x1216590B: fld qword ptr [esi + 0x20] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1216590E: fst qword ptr [ebp - 8] */
    fp_push(0.0); /* 0x12165911: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x12165913: fucom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165915: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x12165917: fstp st(3) */
    /* test HI8(eax), 0x44u */ /* 0x12165919: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12165941; /* 0x1216591C: jp 0x12165941 */
L_1216591E:
    fp_xch(1); /* 0x1216591E: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12165920: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165922: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12165924: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12165947; /* 0x12165927: jp 0x12165947 */
L_12165929:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12165929: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216592B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1216592D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216594B; /* 0x12165930: jp 0x1216594b */
L_12165932:
    PUSH32(esp, 0); /* 0x12165932: push 0 */
    eax = ebp + (-0x18); /* 0x12165934: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x12165937: push eax */
    eax = esi; /* 0x12165938: mov eax, esi */
    RECOMP_CALL(sub_121657A3); /* 0x1216593A: call 0x121657a3 */
    RECOMP_FLAGS_IN();
    goto L_1216594B; /* 0x1216593F: jmp 0x1216594b */
L_12165941:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12165941: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12165943: fstp st(0) */
    goto L_12165949; /* 0x12165945: jmp 0x12165949 */
L_12165947:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12165947: fstp st(1) */
L_12165949:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12165949: fstp st(0) */
L_1216594B:
    PUSH32(esp, 1); /* 0x1216594B: push 1 */
    eax = ebp + (-0x18); /* 0x1216594D: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x12165950: push eax */
    eax = esi; /* 0x12165951: mov eax, esi */
    RECOMP_CALL(sub_121657A3); /* 0x12165953: call 0x121657a3 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x12165958: mov edx, eax */
    PUSH32(esp, 2); /* 0x1216595A: push 2 */
    eax = POP32_VAL(esp); /* 0x1216595C: pop eax */
    MEM32(ebp + 0x8) = edx; /* 0x1216595D: mov dword ptr [ebp + 8], edx */
    /* cmp edx, eax */ /* 0x12165960: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216596B; /* 0x12165962: jne 0x1216596b */
L_12165964:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x12165964: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_12165A8F; /* 0x12165966: jmp 0x12165a8f */
L_1216596B:
    /* test edx, edx */ /* 0x1216596B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12165A8D; /* 0x1216596D: je 0x12165a8d */
L_12165973:
    ecx = MEM32(esi + 0x60); /* 0x12165973: mov ecx, dword ptr [esi + 0x60] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00018724u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x00018724u; /* 0x12165976: sub ecx, 0x18724 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12165992; /* 0x1216597C: je 0x12165992 */
L_1216597E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1216597E: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12165989; /* 0x1216597F: je 0x12165989 */
L_12165981:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x12165981: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1216599A; /* 0x12165982: jne 0x1216599a */
L_12165984:
    goto L_12165A8D; /* 0x12165984: jmp 0x12165a8d */
L_12165989:
    /* test edx, edx */ /* 0x12165989: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1216599A; /* 0x1216598B: jle 0x1216599a */
L_1216598D:
    goto L_12165A8D; /* 0x1216598D: jmp 0x12165a8d */
L_12165992:
    /* test edx, edx */ /* 0x12165992: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12165A8D; /* 0x12165994: js 0x12165a8d */
L_1216599A:
    ecx = MEM32(esi + 0xD20); /* 0x1216599A: mov ecx, dword ptr [esi + 0xd20] */
    /* cmp ecx, 0x120D96FBu */ /* 0x121659A0: cmp ecx, 0x120d96fb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121659C9; /* 0x121659A6: je 0x121659c9 */
L_121659A8:
    /* cmp MEM8(esi + 0x79), 0 */ /* 0x121659A8: cmp byte ptr [esi + 0x79], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x79)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121659BE; /* 0x121659AC: jne 0x121659be */
L_121659AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121659AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x98), 3 */ /* 0x121659B0: cmp dword ptr [esi + 0x98], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x98)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_G(_flag_a, _flag_b)) ? 1 : 0); /* 0x121659B7: setg al */
    eax = eax + eax + 0x4; /* 0x121659BA: lea eax, [eax + eax + 4] */
L_121659BE:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121659BE: push dword ptr [esi + 0xd38] */
    PUSH32(esp, eax); /* 0x121659C4: push eax */
    RECOMP_ICALL(ecx); /* 0x121659C5: call ecx */
    RECOMP_FLAGS_IN();
    goto L_121659E6; /* 0x121659C7: jmp 0x121659e6 */
L_121659C9:
    /* cmp MEM8(esi + 0x79), 0 */ /* 0x121659C9: cmp byte ptr [esi + 0x79], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x79)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121659DF; /* 0x121659CD: jne 0x121659df */
L_121659CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121659CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x98), 3 */ /* 0x121659D1: cmp dword ptr [esi + 0x98], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x98)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_G(_flag_a, _flag_b)) ? 1 : 0); /* 0x121659D8: setg al */
    eax = eax + eax + 0x4; /* 0x121659DB: lea eax, [eax + eax + 4] */
L_121659DF:
    PUSH32(esp, eax); /* 0x121659DF: push eax */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x121659E0: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_121659E6:
    eax = MEM32(esi + 0xD28); /* 0x121659E6: mov eax, dword ptr [esi + 0xd28] */
    /* cmp eax, 0x120D96FBu */ /* 0x121659EC: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165A00; /* 0x121659F1: je 0x12165a00 */
L_121659F3:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121659F3: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x121659F9: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(eax); /* 0x121659FC: call eax */
    RECOMP_FLAGS_IN();
    goto L_12165A09; /* 0x121659FE: jmp 0x12165a09 */
L_12165A00:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x12165A00: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x12165A03: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_12165A09:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x12165A09: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12165A3D; /* 0x12165A0D: jg 0x12165a3d */
L_12165A0F:
    edi = ebx + (-0x20); /* 0x12165A0F: lea edi, [ebx - 0x20] */
    ebx = esi + 0xA0; /* 0x12165A12: lea ebx, [esi + 0xa0] */
    goto L_12165A6C; /* 0x12165A18: jmp 0x12165a6c */
L_12165A1A:
    eax = MEM32(esi + 0xD28); /* 0x12165A1A: mov eax, dword ptr [esi + 0xd28] */
    /* cmp eax, 0x120D96FBu */ /* 0x12165A20: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165A34; /* 0x12165A25: je 0x12165a34 */
L_12165A27:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165A27: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x12165A2D: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(eax); /* 0x12165A30: call eax */
    RECOMP_FLAGS_IN();
    goto L_12165A3D; /* 0x12165A32: jmp 0x12165a3d */
L_12165A34:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x12165A34: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x12165A37: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_12165A3D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x12165A3D: add edi, 0x20 */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x12165A40: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12165A1A; /* 0x12165A42: jb 0x12165a1a */
L_12165A44:
    goto L_12165A70; /* 0x12165A44: jmp 0x12165a70 */
L_12165A46:
    eax = MEM32(esi + 0xD28); /* 0x12165A46: mov eax, dword ptr [esi + 0xd28] */
    /* cmp eax, 0x120D96FBu */ /* 0x12165A4C: cmp eax, 0x120d96fb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120D96FBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165A60; /* 0x12165A51: je 0x12165a60 */
L_12165A53:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165A53: push dword ptr [esi + 0xd38] */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x12165A59: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(eax); /* 0x12165A5C: call eax */
    RECOMP_FLAGS_IN();
    goto L_12165A69; /* 0x12165A5E: jmp 0x12165a69 */
L_12165A60:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x12165A60: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x12165A63: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_12165A69:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x20u; /* 0x12165A69: sub edi, 0x20 */
    _flag_k = FK_CMP;
L_12165A6C:
    /* cmp edi, ebx */ /* 0x12165A6C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_12165A46; /* 0x12165A6E: ja 0x12165a46 */
L_12165A70:
    eax = MEM32(esi + 0xD2C); /* 0x12165A70: mov eax, dword ptr [esi + 0xd2c] */
    /* cmp eax, 0x12164367u */ /* 0x12165A76: cmp eax, 0x12164367 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12164367u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165A87; /* 0x12165A7B: je 0x12165a87 */
L_12165A7D:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x12165A7D: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x12165A83: call eax */
    RECOMP_FLAGS_IN();
    goto L_12165A8D; /* 0x12165A85: jmp 0x12165a8d */
L_12165A87:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x12165A87: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
L_12165A8D:
    SET_LO8(eax, 1); /* 0x12165A8D: mov al, 1 */
L_12165A8F:
    edi = POP32_VAL(esp); /* 0x12165A8F: pop edi */
    esi = POP32_VAL(esp); /* 0x12165A90: pop esi */
    ebx = POP32_VAL(esp); /* 0x12165A91: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12165A92: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12165A93: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12165A9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165A9Bu);

L_12165A9B:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x12165A9B: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) & 0; /* 0x12165A9E: and dword ptr [edx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12165AA2: push ebx */
    PUSH32(esp, esi); /* 0x12165AA3: push esi */
    esi = eax; /* 0x12165AA4: mov esi, eax */
    PUSH32(esp, edi); /* 0x12165AA6: push edi */
    edi = esi + 0x14; /* 0x12165AA7: lea edi, [esi + 0x14] */
    eax = MEM32(edi); /* 0x12165AAA: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12165AAC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x8) = 0x12165544u; /* 0x12165AAE: mov dword ptr [edx + 8], 0x12165544 */
    ebx = esi; /* 0x12165AB5: mov ebx, esi */
    /* cmp MEM8(eax + 0x15), LO8(ecx) */ /* 0x12165AB7: cmp byte ptr [eax + 0x15], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165B00; /* 0x12165ABA: je 0x12165b00 */
L_12165ABC:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x12165ABC: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165B00; /* 0x12165AC0: jne 0x12165b00 */
L_12165AC2:
    eax = MEM32(edi); /* 0x12165AC2: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12165AC4: inc dword ptr [edx] */
    _flag_k = FK_INC;
    MEM32(eax + 0x10) = ecx; /* 0x12165AC6: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(edi); /* 0x12165AC9: mov ecx, dword ptr [edi] */
    MEM8(ecx + 0x14) = (uint8_t)(1); /* 0x12165ACB: mov byte ptr [ecx + 0x14], 1 */
    ebx = MEM32(ebx + 0x8); /* 0x12165ACF: mov ebx, dword ptr [ebx + 8] */
    edi = ebx + 0x14; /* 0x12165AD2: lea edi, [ebx + 0x14] */
    eax = MEM32(edi); /* 0x12165AD5: mov eax, dword ptr [edi] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x12165AD7: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165ABC; /* 0x12165ADB: jne 0x12165abc */
L_12165ADD:
    goto L_12165B00; /* 0x12165ADD: jmp 0x12165b00 */
L_12165ADF:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x12165ADF: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165B0C; /* 0x12165AE3: jne 0x12165b0c */
L_12165AE5:
    eax = MEM32(esi + 0x4); /* 0x12165AE5: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x14); /* 0x12165AE8: mov eax, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12165AEB: inc dword ptr [edx] */
    _flag_k = FK_INC;
    MEM32(eax + 0x10) = ecx; /* 0x12165AED: mov dword ptr [eax + 0x10], ecx */
    eax = MEM32(esi + 0x4); /* 0x12165AF0: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x14); /* 0x12165AF3: mov ecx, dword ptr [eax + 0x14] */
    MEM8(ecx + 0x14) = (uint8_t)(1); /* 0x12165AF6: mov byte ptr [ecx + 0x14], 1 */
    eax = MEM32(esi + 0x4); /* 0x12165AFA: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0xC); /* 0x12165AFD: mov esi, dword ptr [eax + 0xc] */
L_12165B00:
    eax = MEM32(esi + 0x4); /* 0x12165B00: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x14); /* 0x12165B03: mov eax, dword ptr [eax + 0x14] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x12165B06: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165ADF; /* 0x12165B0A: jne 0x12165adf */
L_12165B0C:
    edi = POP32_VAL(esp); /* 0x12165B0C: pop edi */
    MEM32(edx + 0x4) = esi; /* 0x12165B0D: mov dword ptr [edx + 4], esi */
    esi = POP32_VAL(esp); /* 0x12165B10: pop esi */
    ebx = POP32_VAL(esp); /* 0x12165B11: pop ebx */
    goto L_12165B1B; /* 0x12165B12: jmp 0x12165b1b */
L_12165B14:
    MEM8(ecx + 0x14) = (uint8_t)(0); /* 0x12165B14: mov byte ptr [ecx + 0x14], 0 */
    ecx = MEM32(ecx + 0x10); /* 0x12165B18: mov ecx, dword ptr [ecx + 0x10] */
L_12165B1B:
    /* test ecx, ecx */ /* 0x12165B1B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12165B14; /* 0x12165B1D: jne 0x12165b14 */
L_12165B1F:
    eax = edx; /* 0x12165B1F: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165B21: ret  */
    RECOMP_REGS_OUT();
}

void sub_12165B27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165B27u);

L_12165B27:
    edi = edi; /* 0x12165B27: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165B29: push ebp */
    ebp = esp; /* 0x12165B2A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12165B2C: push ecx */
    PUSH32(esp, ecx); /* 0x12165B2D: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x12165B2E: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12165B31: push ebx */
    PUSH32(esp, esi); /* 0x12165B32: push esi */
    esi = eax; /* 0x12165B33: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12165B35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x12165B37: mov ecx, eax */
    ebx = esi + 0x14; /* 0x12165B39: lea ebx, [esi + 0x14] */
    MEM32(edx) = eax; /* 0x12165B3C: mov dword ptr [edx], eax */
    MEM32(edx + 0x4) = eax; /* 0x12165B3E: mov dword ptr [edx + 4], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x12165B41: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x12165B44: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx); /* 0x12165B47: mov eax, dword ptr [ebx] */
    PUSH32(esp, edi); /* 0x12165B49: push edi */
    MEM32(edx + 0x8) = 0x12165602u; /* 0x12165B4A: mov dword ptr [edx + 8], 0x12165602 */
    edi = esi; /* 0x12165B51: mov edi, esi */
    /* cmp MEM8(eax + 0x15), LO8(ecx) */ /* 0x12165B53: cmp byte ptr [eax + 0x15], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165BA3; /* 0x12165B56: je 0x12165ba3 */
L_12165B58:
    edx = ecx; /* 0x12165B58: mov edx, ecx */
L_12165B5A:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x12165B5A: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165B9A; /* 0x12165B5E: jne 0x12165b9a */
L_12165B60:
    eax = MEM32(ebx); /* 0x12165B60: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x10) = ecx; /* 0x12165B62: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(ebx); /* 0x12165B65: mov ecx, dword ptr [ebx] */
    MEM8(ecx + 0x14) = (uint8_t)(1); /* 0x12165B67: mov byte ptr [ecx + 0x14], 1 */
    eax = MEM32(edi + 0xC); /* 0x12165B6B: mov eax, dword ptr [edi + 0xc] */
    edi = MEM32(eax + 0x4); /* 0x12165B6E: mov edi, dword ptr [eax + 4] */
    eax = MEM32(edi + 0x14); /* 0x12165B71: mov eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12165B74: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x12165B75: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165B9A; /* 0x12165B79: je 0x12165b9a */
L_12165B7B:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x12165B7B: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165B9A; /* 0x12165B7F: jne 0x12165b9a */
L_12165B81:
    MEM32(eax + 0x10) = ecx; /* 0x12165B81: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(edi + 0x14); /* 0x12165B84: mov ecx, dword ptr [edi + 0x14] */
    MEM8(ecx + 0x14) = (uint8_t)(1); /* 0x12165B87: mov byte ptr [ecx + 0x14], 1 */
    edi = MEM32(edi + 0x8); /* 0x12165B8B: mov edi, dword ptr [edi + 8] */
    ebx = edi + 0x14; /* 0x12165B8E: lea ebx, [edi + 0x14] */
    eax = MEM32(ebx); /* 0x12165B91: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12165B93: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x12165B94: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165B5A; /* 0x12165B98: jne 0x12165b5a */
L_12165B9A:
    MEM32(ebp + (-0x8)) = edx; /* 0x12165B9A: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x12165B9D: mov dword ptr [ebp - 8], edx */
    edx = MEM32(ebp + 0x8); /* 0x12165BA0: mov edx, dword ptr [ebp + 8] */
L_12165BA3:
    eax = MEM32(esi + 0x4); /* 0x12165BA3: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x14); /* 0x12165BA6: mov eax, dword ptr [eax + 0x14] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x12165BA9: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165C13; /* 0x12165BAD: je 0x12165c13 */
L_12165BAF:
    ebx = MEM32(ebp + (-0x4)); /* 0x12165BAF: mov ebx, dword ptr [ebp - 4] */
L_12165BB2:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x12165BB2: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165C0D; /* 0x12165BB6: jne 0x12165c0d */
L_12165BB8:
    eax = MEM32(esi + 0x4); /* 0x12165BB8: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x14); /* 0x12165BBB: mov eax, dword ptr [eax + 0x14] */
    MEM32(eax + 0x10) = ecx; /* 0x12165BBE: mov dword ptr [eax + 0x10], ecx */
    eax = MEM32(esi + 0x4); /* 0x12165BC1: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x14); /* 0x12165BC4: mov ecx, dword ptr [eax + 0x14] */
    MEM8(ecx + 0x14) = (uint8_t)(1); /* 0x12165BC7: mov byte ptr [ecx + 0x14], 1 */
    eax = MEM32(esi + 0x4); /* 0x12165BCB: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0xC); /* 0x12165BCE: mov esi, dword ptr [eax + 0xc] */
    eax = MEM32(esi + 0x4); /* 0x12165BD1: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x14); /* 0x12165BD4: mov eax, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12165BD7: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x12165BD8: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165C0D; /* 0x12165BDC: je 0x12165c0d */
L_12165BDE:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x12165BDE: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165C0D; /* 0x12165BE2: jne 0x12165c0d */
L_12165BE4:
    eax = MEM32(esi + 0x4); /* 0x12165BE4: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x14); /* 0x12165BE7: mov eax, dword ptr [eax + 0x14] */
    MEM32(eax + 0x10) = ecx; /* 0x12165BEA: mov dword ptr [eax + 0x10], ecx */
    eax = MEM32(esi + 0x4); /* 0x12165BED: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x14); /* 0x12165BF0: mov ecx, dword ptr [eax + 0x14] */
    MEM8(ecx + 0x14) = (uint8_t)(1); /* 0x12165BF3: mov byte ptr [ecx + 0x14], 1 */
    eax = MEM32(esi + 0x4); /* 0x12165BF7: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x12165BFA: mov eax, dword ptr [eax + 8] */
    esi = MEM32(eax + 0x4); /* 0x12165BFD: mov esi, dword ptr [eax + 4] */
    eax = MEM32(esi + 0x4); /* 0x12165C00: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x14); /* 0x12165C03: mov eax, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12165C06: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x12165C07: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165BB2; /* 0x12165C0B: jne 0x12165bb2 */
L_12165C0D:
    MEM32(ebp + (-0x4)) = ebx; /* 0x12165C0D: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x12165C10: mov dword ptr [ebp - 4], ebx */
L_12165C13:
    ebx = MEM32(ebp + (-0x8)); /* 0x12165C13: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x12165C16: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12165C19: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(edx) = eax; /* 0x12165C1B: mov dword ptr [edx], eax */
    /* test LO8(ebx), 1 */ /* 0x12165C1D: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12165C27; /* 0x12165C20: jne 0x12165c27 */
L_12165C22:
    eax = MEM32(edi + 0x4); /* 0x12165C22: mov eax, dword ptr [edi + 4] */
    goto L_12165C38; /* 0x12165C25: jmp 0x12165c38 */
L_12165C27:
    /* test MEM8(ebp + (-0x4)), 1 */ /* 0x12165C27: test byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12165C32; /* 0x12165C2B: jne 0x12165c32 */
L_12165C2D:
    MEM32(edx + 0x4) = esi; /* 0x12165C2D: mov dword ptr [edx + 4], esi */
    goto L_12165C3B; /* 0x12165C30: jmp 0x12165c3b */
L_12165C32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12165C32: dec eax */
    _flag_k = FK_DEC;
    MEM32(edx) = eax; /* 0x12165C33: mov dword ptr [edx], eax */
    eax = MEM32(esi + 0x8); /* 0x12165C35: mov eax, dword ptr [esi + 8] */
L_12165C38:
    MEM32(edx + 0x4) = eax; /* 0x12165C38: mov dword ptr [edx + 4], eax */
L_12165C3B:
    edi = POP32_VAL(esp); /* 0x12165C3B: pop edi */
    esi = POP32_VAL(esp); /* 0x12165C3C: pop esi */
    ebx = POP32_VAL(esp); /* 0x12165C3D: pop ebx */
    goto L_12165C47; /* 0x12165C3E: jmp 0x12165c47 */
L_12165C40:
    MEM8(ecx + 0x14) = (uint8_t)(0); /* 0x12165C40: mov byte ptr [ecx + 0x14], 0 */
    ecx = MEM32(ecx + 0x10); /* 0x12165C44: mov ecx, dword ptr [ecx + 0x10] */
L_12165C47:
    /* test ecx, ecx */ /* 0x12165C47: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12165C40; /* 0x12165C49: jne 0x12165c40 */
L_12165C4B:
    eax = edx; /* 0x12165C4B: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12165C4D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12165C4E: ret 4 */
    RECOMP_REGS_OUT();
}
