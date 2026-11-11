#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_140822D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140822D0u);

L_140822D0:
    edi = edi; /* 0x140822D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140822D2: push ebp */
    ebp = esp; /* 0x140822D3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x140822D5: push ebx */
    PUSH32(esp, esi); /* 0x140822D6: push esi */
    /* test edi, edi */ /* 0x140822D7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082316; /* 0x140822D9: je 0x14082316 */
L_140822DB:
    /* cmp MEM32(edi + 0x4), 5 */ /* 0x140822DB: cmp dword ptr [edi + 4], 5 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082316; /* 0x140822DF: jne 0x14082316 */
L_140822E1:
    /* cmp MEM32(edi + 0x20), 0x1Du */ /* 0x140822E1: cmp dword ptr [edi + 0x20], 0x1d */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082316; /* 0x140822E5: jne 0x14082316 */
L_140822E7:
    PUSH32(esp, 0x11u); /* 0x140822E7: push 0x11 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140822E9: push dword ptr [ebp + 8] */
    ebx = eax; /* 0x140822EC: mov ebx, eax */
    eax = MEM32(edi + 0x24); /* 0x140822EE: mov eax, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140822F1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_140819D0); /* 0x140822F3: call 0x140819d0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140822F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1408231B; /* 0x140822FA: js 0x1408231b */
L_140822FC:
    /* cmp eax, 1 */ /* 0x140822FC: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1408231B; /* 0x140822FF: je 0x1408231b */
L_14082301:
    eax = MEM32(edi + 0x28); /* 0x14082301: mov eax, dword ptr [edi + 0x28] */
    ebx = MEM32(ebp + 0x8); /* 0x14082304: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x14082307: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x14082308: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_14082330); /* 0x1408230B: call 0x14082330 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x14082310: pop esi */
    ebx = POP32_VAL(esp); /* 0x14082311: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14082312: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14082313: ret 8 */
L_14082316:
    eax = 1; /* 0x14082316: mov eax, 1 */
L_1408231B:
    esi = POP32_VAL(esp); /* 0x1408231B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1408231C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1408231D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1408231E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14082330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14082330u);

L_14082330:
    edi = edi; /* 0x14082330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14082332: push ebp */
    ebp = esp; /* 0x14082333: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2D0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2D0u; /* 0x14082335: sub esp, 0x2d0 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1408233B: push esi */
    PUSH32(esp, edi); /* 0x1408233C: push edi */
    edi = eax; /* 0x1408233D: mov edi, eax */
    /* test edi, edi */ /* 0x1408233F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140824A6; /* 0x14082341: je 0x140824a6 */
L_14082347:
    /* cmp MEM32(edi + 0x4), 5 */ /* 0x14082347: cmp dword ptr [edi + 4], 5 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140824A6; /* 0x1408234B: jne 0x140824a6 */
L_14082351:
    eax = ebp + (-0x2D0); /* 0x14082351: lea eax, [ebp - 0x2d0] */
    RECOMP_CALL(sub_140D7390); /* 0x14082357: call 0x140d7390 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0xC2C); /* 0x1408235C: mov ecx, dword ptr [ebx + 0xc2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14082362: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14082364:
    /* cmp MEM32(eax + 0x1402D3C0), ecx */ /* 0x14082364: cmp dword ptr [eax + 0x1402d3c0], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x1402D3C0)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140823A9; /* 0x1408236A: je 0x140823a9 */
L_1408236C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1408236C: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0x24u */ /* 0x1408236F: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14082364; /* 0x14082372: jb 0x14082364 */
L_14082374:
    edx = MEM32(edi + 0x58); /* 0x14082374: mov edx, dword ptr [edi + 0x58] */
    /* test edx, edx */ /* 0x14082377: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408237E; /* 0x14082379: jne 0x1408237e */
L_1408237B:
    edx = edi + 0x38; /* 0x1408237B: lea edx, [edi + 0x38] */
L_1408237E:
    PUSH32(esp, 0x14038384u); /* 0x1408237E: push 0x14038384 */
    PUSH32(esp, 0); /* 0x14082383: push 0 */
    eax = ebx + 0x30; /* 0x14082385: lea eax, [ebx + 0x30] */
    PUSH32(esp, eax); /* 0x14082388: push eax */
L_14082389:
    RECOMP_CALL(sub_141C5C90); /* 0x14082389: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1408238E: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = ebp + (-0x2D0); /* 0x14082391: lea edi, [ebp - 0x2d0] */
    RECOMP_CALL(sub_140D7440); /* 0x14082397: call 0x140d7440 */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x1408239C: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x140823A1: pop edi */
    esi = POP32_VAL(esp); /* 0x140823A2: pop esi */
    esp = ebp; /* 0x140823A3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140823A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140823A6: ret 8 */
L_140823A9:
    /* cmp MEM32(edi + 0x20), 0x30u */ /* 0x140823A9: cmp dword ptr [edi + 0x20], 0x30 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082418; /* 0x140823AD: jne 0x14082418 */
L_140823AF:
    eax = MEM32(edi + 0x30); /* 0x140823AF: mov eax, dword ptr [edi + 0x30] */
    MEM32(ebp + (-0x4)) = eax; /* 0x140823B2: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x140823B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140823D3; /* 0x140823B7: jne 0x140823d3 */
L_140823B9:
    edi = ebp + (-0x2D0); /* 0x140823B9: lea edi, [ebp - 0x2d0] */
    esi = 0x80004005u; /* 0x140823BF: mov esi, 0x80004005 */
    RECOMP_CALL(sub_140D7440); /* 0x140823C4: call 0x140d7440 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x140823C9: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x140823CB: pop edi */
    esi = POP32_VAL(esp); /* 0x140823CC: pop esi */
    esp = ebp; /* 0x140823CD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140823CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140823D0: ret 8 */
L_140823D3:
    PUSH32(esp, ecx); /* 0x140823D3: push ecx */
    PUSH32(esp, eax); /* 0x140823D4: push eax */
    esi = ebp + (-0x8); /* 0x140823D5: lea esi, [ebp - 8] */
    RECOMP_CALL(sub_1407B050); /* 0x140823D8: call 0x1407b050 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140823DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14082418; /* 0x140823DF: jns 0x14082418 */
L_140823E1:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x140823E1: push dword ptr [ebp - 4] */
    eax = edi; /* 0x140823E4: mov eax, edi */
    PUSH32(esp, 0x140383A0u); /* 0x140823E6: push 0x140383a0 */
    PUSH32(esp, 0); /* 0x140823EB: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x140823ED: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x30; /* 0x140823F2: lea ecx, [ebx + 0x30] */
    PUSH32(esp, ecx); /* 0x140823F5: push ecx */
    edx = eax; /* 0x140823F6: mov edx, eax */
    RECOMP_CALL(sub_141C5C90); /* 0x140823F8: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140823FD: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = ebp + (-0x2D0); /* 0x14082400: lea edi, [ebp - 0x2d0] */
    RECOMP_CALL(sub_140D7440); /* 0x14082406: call 0x140d7440 */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x1408240B: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x14082410: pop edi */
    esi = POP32_VAL(esp); /* 0x14082411: pop esi */
    esp = ebp; /* 0x14082412: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14082414: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14082415: ret 8 */
L_14082418:
    eax = ebp + (-0x4); /* 0x14082418: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1408241B: push eax */
    eax = MEM32(ebx + 0xC28); /* 0x1408241C: mov eax, dword ptr [ebx + 0xc28] */
    _flag_a = (uint32_t)((eax | MEM32(edi + 0x34))); _flag_b = (uint32_t)((eax | MEM32(edi + 0x34)));
    eax = eax | MEM32(edi + 0x34); /* 0x14082422: or eax, dword ptr [edi + 0x34] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x14082425: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14082427: push dword ptr [ebp + 8] */
    esi = ebx + 0x30; /* 0x1408242A: lea esi, [ebx + 0x30] */
    PUSH32(esp, eax); /* 0x1408242D: push eax */
    PUSH32(esp, ebx); /* 0x1408242E: push ebx */
    RECOMP_CALL(sub_14083640); /* 0x1408242F: call 0x14083640 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14082434: push eax */
    PUSH32(esp, MEM32(ebx + 0xBC0)); /* 0x14082435: push dword ptr [ebx + 0xbc0] */
    eax = ebp + (-0x2D0); /* 0x1408243B: lea eax, [ebp - 0x2d0] */
    PUSH32(esp, esi); /* 0x14082441: push esi */
    PUSH32(esp, eax); /* 0x14082442: push eax */
    eax = edi; /* 0x14082443: mov eax, edi */
    RECOMP_CALL(sub_140D7560); /* 0x14082445: call 0x140d7560 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408244A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14082465; /* 0x1408244C: jns 0x14082465 */
L_1408244E:
    edx = MEM32(edi + 0x58); /* 0x1408244E: mov edx, dword ptr [edi + 0x58] */
    /* test edx, edx */ /* 0x14082451: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082458; /* 0x14082453: jne 0x14082458 */
L_14082455:
    edx = edi + 0x38; /* 0x14082455: lea edx, [edi + 0x38] */
L_14082458:
    PUSH32(esp, 0x140383D4u); /* 0x14082458: push 0x140383d4 */
    PUSH32(esp, 0); /* 0x1408245D: push 0 */
    PUSH32(esp, esi); /* 0x1408245F: push esi */
    RECOMP_BACKEDGE();
    goto L_14082389; /* 0x14082460: jmp 0x14082389 */
L_14082465:
    /* cmp MEM32(edi + 0x20), 0x30u */ /* 0x14082465: cmp dword ptr [edi + 0x20], 0x30 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1408248F; /* 0x14082469: jne 0x1408248f */
L_1408246B:
    ecx = MEM32(ebp + 0xC); /* 0x1408246B: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1408246E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140823B9; /* 0x14082470: je 0x140823b9 */
L_14082476:
    eax = MEM32(ebp + (-0x4)); /* 0x14082476: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx) = eax; /* 0x14082479: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x8); /* 0x1408247B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1408247E: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x14082480: push ebx */
    MEM32(ecx + 0x4) = eax; /* 0x14082481: mov dword ptr [ecx + 4], eax */
    RECOMP_CALL(sub_1407FAA0); /* 0x14082484: call 0x1407faa0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14082489: mov esi, eax */
    /* test esi, esi */ /* 0x1408248B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14082491; /* 0x1408248D: js 0x14082491 */
L_1408248F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1408248F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_14082491:
    edi = ebp + (-0x2D0); /* 0x14082491: lea edi, [ebp - 0x2d0] */
    RECOMP_CALL(sub_140D7440); /* 0x14082497: call 0x140d7440 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1408249C: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x1408249E: pop edi */
    esi = POP32_VAL(esp); /* 0x1408249F: pop esi */
    esp = ebp; /* 0x140824A0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140824A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140824A3: ret 8 */
L_140824A6:
    edi = POP32_VAL(esp); /* 0x140824A6: pop edi */
    eax = 1; /* 0x140824A7: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x140824AC: pop esi */
    esp = ebp; /* 0x140824AD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140824AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140824B0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140824C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140824C0u);

L_140824C0:
    edi = edi; /* 0x140824C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140824C2: push ebp */
    ebp = esp; /* 0x140824C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140824C5: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x140824C6: mov ecx, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x140824C9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082513; /* 0x140824CB: je 0x14082513 */
L_140824CD:
    /* cmp MEM32(esi + 0x4), 4 */ /* 0x140824CD: cmp dword ptr [esi + 4], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082513; /* 0x140824D1: jne 0x14082513 */
L_140824D3:
    eax = MEM32(esi + 0x14); /* 0x140824D3: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, 0xCu */ /* 0x140824D6: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140824E0; /* 0x140824D9: je 0x140824e0 */
L_140824DB:
    /* cmp eax, 0xDu */ /* 0x140824DB: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140824F5; /* 0x140824DE: jne 0x140824f5 */
L_140824E0:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140824E0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140824E3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x140824E6: push esi */
    RECOMP_CALL(sub_14080570); /* 0x140824E7: call 0x14080570 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140824EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14082518; /* 0x140824EE: js 0x14082518 */
L_140824F0:
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082518; /* 0x140824F0: je 0x14082518 */
L_140824F2:
    ecx = MEM32(ebp + 0x8); /* 0x140824F2: mov ecx, dword ptr [ebp + 8] */
L_140824F5:
    /* cmp MEM32(esi + 0x4), 4 */ /* 0x140824F5: cmp dword ptr [esi + 4], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082513; /* 0x140824F9: jne 0x14082513 */
L_140824FB:
    /* cmp MEM32(esi + 0x14), 0xEu */ /* 0x140824FB: cmp dword ptr [esi + 0x14], 0xe */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082513; /* 0x140824FF: jne 0x14082513 */
L_14082501:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x14082501: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x14082504: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x14082507: push esi */
    PUSH32(esp, ecx); /* 0x14082508: push ecx */
    RECOMP_CALL(sub_14080C40); /* 0x14082509: call 0x14080c40 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1408250E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1408250F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14082510: ret 0xc */
L_14082513:
    eax = 1; /* 0x14082513: mov eax, 1 */
L_14082518:
    ecx = POP32_VAL(esp); /* 0x14082518: pop ecx */
    ebp = POP32_VAL(esp); /* 0x14082519: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1408251A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14082530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14082530u);

L_14082530:
    edi = edi; /* 0x14082530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14082532: push ebp */
    ebp = esp; /* 0x14082533: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x14082535: sub esp, 0x68 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14082538: push ebx */
    PUSH32(esp, esi); /* 0x14082539: push esi */
    PUSH32(esp, edi); /* 0x1408253A: push edi */
    edi = ecx; /* 0x1408253B: mov edi, ecx */
    esi = eax; /* 0x1408253D: mov esi, eax */
    ebx = edx; /* 0x1408253F: mov ebx, edx */
    /* test edi, edi */ /* 0x14082541: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082602; /* 0x14082543: je 0x14082602 */
L_14082549:
    /* cmp MEM32(edi + 0x4), 5 */ /* 0x14082549: cmp dword ptr [edi + 4], 5 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082602; /* 0x1408254D: jne 0x14082602 */
L_14082553:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x14082553: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082602; /* 0x14082557: jne 0x14082602 */
L_1408255D:
    ecx = MEM32(edi + 0x14); /* 0x1408255D: mov ecx, dword ptr [edi + 0x14] */
    eax = MEM32(ecx); /* 0x14082560: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x64); /* 0x14082562: lea edx, [ebp - 0x64] */
    PUSH32(esp, edx); /* 0x14082565: push edx */
    PUSH32(esp, 0xAu); /* 0x14082566: push 0xa */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x14082568: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1408256B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082602; /* 0x1408256D: je 0x14082602 */
L_14082573:
    eax = MEM32(ebp + (-0x60)); /* 0x14082573: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFD7u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFD7u; /* 0x14082576: add eax, -0x29 */
    _flag_k = FK_ADD;
    /* cmp eax, 5 */ /* 0x14082579: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14082602; /* 0x1408257C: ja 0x14082602 */
L_14082582:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x14082610)); goto _ljump; }
L_14082589:
    MEM32(esi) = 0xEu; /* 0x14082589: mov dword ptr [esi], 0xe */
    goto L_140825B7; /* 0x1408258F: jmp 0x140825b7 */
L_14082591:
    MEM32(esi) = 0x10u; /* 0x14082591: mov dword ptr [esi], 0x10 */
    goto L_140825B7; /* 0x14082597: jmp 0x140825b7 */
L_14082599:
    MEM32(esi) = 0xFu; /* 0x14082599: mov dword ptr [esi], 0xf */
    goto L_140825B7; /* 0x1408259F: jmp 0x140825b7 */
L_140825A1:
    MEM32(esi) = 3; /* 0x140825A1: mov dword ptr [esi], 3 */
    goto L_140825B7; /* 0x140825A7: jmp 0x140825b7 */
L_140825A9:
    MEM32(esi) = 2; /* 0x140825A9: mov dword ptr [esi], 2 */
    goto L_140825B7; /* 0x140825AF: jmp 0x140825b7 */
L_140825B1:
    MEM32(esi) = 1; /* 0x140825B1: mov dword ptr [esi], 1 */
L_140825B7:
    esi = MEM32(edi + 0x24); /* 0x140825B7: mov esi, dword ptr [edi + 0x24] */
    /* test esi, esi */ /* 0x140825BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082602; /* 0x140825BC: je 0x14082602 */
L_140825BE:
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x140825BE: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082602; /* 0x140825C2: jne 0x14082602 */
L_140825C4:
    esi = MEM32(esi + 0x8); /* 0x140825C4: mov esi, dword ptr [esi + 8] */
    /* test esi, esi */ /* 0x140825C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082602; /* 0x140825C9: je 0x14082602 */
L_140825CB:
    /* cmp MEM32(esi + 0x4), 6 */ /* 0x140825CB: cmp dword ptr [esi + 4], 6 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082602; /* 0x140825CF: jne 0x14082602 */
L_140825D1:
    /* cmp MEM32(esi + 0x18), 4 */ /* 0x140825D1: cmp dword ptr [esi + 0x18], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082602; /* 0x140825D5: jne 0x14082602 */
L_140825D7:
    edi = MEM32(ebp + 0x8); /* 0x140825D7: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x140825DA: push edi */
    eax = edi + 0x4; /* 0x140825DB: lea eax, [edi + 4] */
    PUSH32(esp, eax); /* 0x140825DE: push eax */
    eax = MEM32(esi + 0x20); /* 0x140825DF: mov eax, dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_14082330); /* 0x140825E2: call 0x14082330 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140825E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14082607; /* 0x140825E9: js 0x14082607 */
L_140825EB:
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082607; /* 0x140825EB: je 0x14082607 */
L_140825ED:
    esi = MEM32(esi + 0x20); /* 0x140825ED: mov esi, dword ptr [esi + 0x20] */
    PUSH32(esp, 0); /* 0x140825F0: push 0 */
    PUSH32(esp, edi); /* 0x140825F2: push edi */
    PUSH32(esp, ebx); /* 0x140825F3: push ebx */
    RECOMP_CALL(sub_140824C0); /* 0x140825F4: call 0x140824c0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x140825F9: pop edi */
    esi = POP32_VAL(esp); /* 0x140825FA: pop esi */
    ebx = POP32_VAL(esp); /* 0x140825FB: pop ebx */
    esp = ebp; /* 0x140825FC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140825FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140825FF: ret 4 */
L_14082602:
    eax = 1; /* 0x14082602: mov eax, 1 */
L_14082607:
    edi = POP32_VAL(esp); /* 0x14082607: pop edi */
    esi = POP32_VAL(esp); /* 0x14082608: pop esi */
    ebx = POP32_VAL(esp); /* 0x14082609: pop ebx */
    esp = ebp; /* 0x1408260A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1408260C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1408260D: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x14082589u: goto L_14082589;
      case 0x14082591u: goto L_14082591;
      case 0x14082599u: goto L_14082599;
      case 0x140825A1u: goto L_140825A1;
      case 0x140825A9u: goto L_140825A9;
      case 0x140825B1u: goto L_140825B1;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_14083530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14083530u);

L_14083530:
    edi = edi; /* 0x14083530: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14083532: push ebp */
    ebp = esp; /* 0x14083533: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14083535: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x14083536: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x14083539: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1408353C: push ebx */
    ebx = MEM32(eax + 0xBD8); /* 0x1408353D: mov ebx, dword ptr [eax + 0xbd8] */
    PUSH32(esp, esi); /* 0x14083543: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14083544: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x14083546: push edi */
    /* test ebx, ebx */ /* 0x14083547: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083597; /* 0x14083549: je 0x14083597 */
L_1408354B:
    eax = MEM32(eax + 0xBD0); /* 0x1408354B: mov eax, dword ptr [eax + 0xbd0] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14083551: mov dword ptr [ebp - 4], eax */
    edi = eax; /* 0x14083554: mov edi, eax */
L_14083556:
    eax = MEM32(edi); /* 0x14083556: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x20); /* 0x14083558: mov eax, dword ptr [eax + 0x20] */
    goto L_14083560; /* 0x1408355B: jmp 0x14083560 */
L_14083560:
    SET_LO8(edx, MEM8(eax)); /* 0x14083560: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x14083562: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14083580; /* 0x14083564: jne 0x14083580 */
L_14083566:
    /* test LO8(edx), LO8(edx) */ /* 0x14083566: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408357C; /* 0x14083568: je 0x1408357c */
L_1408356A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1408356A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1408356D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14083580; /* 0x14083570: jne 0x14083580 */
L_14083572:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x14083572: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x14083575: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x14083578: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14083560; /* 0x1408357A: jne 0x14083560 */
L_1408357C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408357C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14083585; /* 0x1408357E: jmp 0x14083585 */
L_14083580:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14083580: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14083582: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_14083585:
    /* test eax, eax */ /* 0x14083585: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140835D5; /* 0x14083587: je 0x140835d5 */
L_14083589:
    ecx = MEM32(ebp + 0xC); /* 0x14083589: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1408358C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1408358D: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x14083590: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14083556; /* 0x14083592: jb 0x14083556 */
L_14083594:
    eax = MEM32(ebp + 0x8); /* 0x14083594: mov eax, dword ptr [ebp + 8] */
L_14083597:
    ebx = MEM32(eax + 0xBE8); /* 0x14083597: mov ebx, dword ptr [eax + 0xbe8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1408359D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1408359F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140835FF; /* 0x140835A1: je 0x140835ff */
L_140835A3:
    eax = MEM32(eax + 0xBE0); /* 0x140835A3: mov eax, dword ptr [eax + 0xbe0] */
    MEM32(ebp + 0x8) = eax; /* 0x140835A9: mov dword ptr [ebp + 8], eax */
    edi = eax; /* 0x140835AC: mov edi, eax */
    edi = edi; /* 0x140835AE: mov edi, edi */
L_140835B0:
    eax = MEM32(edi); /* 0x140835B0: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x20); /* 0x140835B2: mov eax, dword ptr [eax + 0x20] */
L_140835B5:
    SET_LO8(edx, MEM8(eax)); /* 0x140835B5: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140835B7: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140835EB; /* 0x140835B9: jne 0x140835eb */
L_140835BB:
    /* test LO8(edx), LO8(edx) */ /* 0x140835BB: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140835D1; /* 0x140835BD: je 0x140835d1 */
L_140835BF:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140835BF: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140835C2: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140835EB; /* 0x140835C5: jne 0x140835eb */
L_140835C7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140835C7: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140835CA: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140835CD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140835B5; /* 0x140835CF: jne 0x140835b5 */
L_140835D1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140835D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140835F0; /* 0x140835D3: jmp 0x140835f0 */
L_140835D5:
    eax = MEM32(ebp + (-0x4)); /* 0x140835D5: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + esi * 4); /* 0x140835D8: mov eax, dword ptr [eax + esi*4] */
    ecx = MEM32(ebp + 0x10); /* 0x140835DB: mov ecx, dword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x140835DE: pop edi */
    esi = POP32_VAL(esp); /* 0x140835DF: pop esi */
    MEM32(ecx) = eax; /* 0x140835E0: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140835E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140835E4: pop ebx */
    esp = ebp; /* 0x140835E5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140835E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140835E8: ret 0xc */
L_140835EB:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140835EB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140835ED: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140835F0:
    /* test eax, eax */ /* 0x140835F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083616; /* 0x140835F2: je 0x14083616 */
L_140835F4:
    ecx = MEM32(ebp + 0xC); /* 0x140835F4: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x140835F7: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x140835F8: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x140835FB: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140835B0; /* 0x140835FD: jb 0x140835b0 */
L_140835FF:
    eax = MEM32(ebp + 0x10); /* 0x140835FF: mov eax, dword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x14083602: pop edi */
    esi = POP32_VAL(esp); /* 0x14083603: pop esi */
    MEM32(eax) = 0; /* 0x14083604: mov dword ptr [eax], 0 */
    eax = 0x80004005u; /* 0x1408360A: mov eax, 0x80004005 */
    ebx = POP32_VAL(esp); /* 0x1408360F: pop ebx */
    esp = ebp; /* 0x14083610: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14083612: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14083613: ret 0xc */
L_14083616:
    eax = MEM32(ebp + 0x8); /* 0x14083616: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + esi * 4); /* 0x14083619: mov eax, dword ptr [eax + esi*4] */
    ecx = MEM32(ebp + 0x10); /* 0x1408361C: mov ecx, dword ptr [ebp + 0x10] */
    edi = POP32_VAL(esp); /* 0x1408361F: pop edi */
    esi = POP32_VAL(esp); /* 0x14083620: pop esi */
    MEM32(ecx) = eax; /* 0x14083621: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14083623: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14083625: pop ebx */
    esp = ebp; /* 0x14083626: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14083628: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14083629: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14083640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14083640u);

L_14083640:
    edi = edi; /* 0x14083640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14083642: push ebp */
    ebp = esp; /* 0x14083643: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x14083645: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = ebp + (-0x1C); /* 0x14083648: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1408364B: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1408364C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x200u); /* 0x1408364F: push 0x200 */
    PUSH32(esp, 0x10u); /* 0x14083654: push 0x10 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x14083656: push -1 */
    PUSH32(esp, MEM32(eax + 0xC2C)); /* 0x14083658: push dword ptr [eax + 0xc2c] */
    RECOMP_CALL(sub_141E9701); /* 0x1408365E: call 0x141e9701 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083663: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x1C)); /* 0x14083665: mov eax, dword ptr [ebp - 0x1c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408366F; /* 0x14083668: je 0x1408366f */
L_1408366A:
    eax = 0x14032D84u; /* 0x1408366A: mov eax, 0x14032d84 */
L_1408366F:
    esp = ebp; /* 0x1408366F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14083671: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14083672: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14083680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14083680u);

L_14083680:
    edi = edi; /* 0x14083680: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14083682: push ebp */
    ebp = esp; /* 0x14083683: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x14083685: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14083688: push ebx */
    PUSH32(esp, edi); /* 0x14083689: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1408368A: mov edi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x1408368D: mov ebx, eax */
    /* test edi, edi */ /* 0x1408368F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408369F; /* 0x14083691: jne 0x1408369f */
L_14083693:
    MEM32(ebx) = edi; /* 0x14083693: mov dword ptr [ebx], edi */
L_14083695:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14083695: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14083697:
    edi = POP32_VAL(esp); /* 0x14083697: pop edi */
    ebx = POP32_VAL(esp); /* 0x14083698: pop ebx */
    esp = ebp; /* 0x14083699: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1408369B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1408369C: ret 8 */
L_1408369F:
    ecx = edi; /* 0x1408369F: mov ecx, edi */
    edx = ecx + 0x1; /* 0x140836A1: lea edx, [ecx + 1] */
L_140836A4:
    SET_LO8(eax, MEM8(ecx)); /* 0x140836A4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140836A6: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140836A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140836A4; /* 0x140836A9: jne 0x140836a4 */
L_140836AB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x140836AB: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x140836AD: push ecx */
    PUSH32(esp, edi); /* 0x140836AE: push edi */
    RECOMP_CALL(sub_141C76E0); /* 0x140836AF: call 0x141c76e0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xC); /* 0x140836B4: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x140836B7: push ecx */
    PUSH32(esp, 0); /* 0x140836B8: push 0 */
    PUSH32(esp, edi); /* 0x140836BA: push edi */
    edi = eax; /* 0x140836BB: mov edi, eax */
    ecx = esi; /* 0x140836BD: mov ecx, esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x140836BF: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_14085670); /* 0x140836C2: call 0x14085670 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140836C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140836DB; /* 0x140836C9: js 0x140836db */
L_140836CB:
    ecx = MEM32(ebp + (-0x8)); /* 0x140836CB: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ecx + 0x4); /* 0x140836CE: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x140836D1: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ecx + 0x8); /* 0x140836D4: mov eax, dword ptr [ecx + 8] */
    MEM32(ebx) = eax; /* 0x140836D7: mov dword ptr [ebx], eax */
    goto L_140836FD; /* 0x140836D9: jmp 0x140836fd */
L_140836DB:
    edi = MEM32(ebp + 0x8); /* 0x140836DB: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x140836DE: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140836E1: push ebx */
    PUSH32(esp, edi); /* 0x140836E2: push edi */
    RECOMP_CALL(sub_141E6A66); /* 0x140836E3: call 0x141e6a66 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140836E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083697; /* 0x140836EA: js 0x14083697 */
L_140836EC:
    PUSH32(esp, MEM32(ebx)); /* 0x140836EC: push dword ptr [ebx] */
    ebx = MEM32(ebp + (-0x4)); /* 0x140836EE: mov ebx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x140836F1: push edi */
    edi = esi; /* 0x140836F2: mov edi, esi */
    RECOMP_CALL(sub_140857F0); /* 0x140836F4: call 0x140857f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140836F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083697; /* 0x140836FB: js 0x14083697 */
L_140836FD:
    eax = MEM32(esi + 0x8); /* 0x140836FD: mov eax, dword ptr [esi + 8] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x14083700: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14083695; /* 0x14083703: jb 0x14083695 */
L_14083705:
    eax = eax + eax + 0x1; /* 0x14083705: lea eax, [eax + eax + 1] */
    PUSH32(esp, esi); /* 0x14083709: push esi */
    RECOMP_CALL(sub_14085C00); /* 0x1408370A: call 0x14085c00 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1408370F: pop edi */
    ebx = POP32_VAL(esp); /* 0x14083710: pop ebx */
    esp = ebp; /* 0x14083711: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14083713: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14083714: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14083720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14083720u);

L_14083720:
    edi = edi; /* 0x14083720: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14083722: push ebp */
    ebp = esp; /* 0x14083723: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x14083725: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14083728: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1408372D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1408372F: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x14083732: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x14083735: push ebx */
    MEM32(ebp + (-0x38)) = eax; /* 0x14083736: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + 0xC); /* 0x14083739: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1408373C: push esi */
    esi = MEM32(eax + 0x4); /* 0x1408373D: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + (-0x30)) = eax; /* 0x14083740: mov dword ptr [ebp - 0x30], eax */
    PUSH32(esp, edi); /* 0x14083743: push edi */
    eax = ebp + (-0x2C); /* 0x14083744: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x14083747: push eax */
    eax = MEM32(esi); /* 0x14083748: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x1408374A: mov dword ptr [ebp - 0x40], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1408374D: mov ecx, dword ptr [ebp + 0x10] */
    ebx = edx; /* 0x14083750: mov ebx, edx */
    PUSH32(esp, esi); /* 0x14083752: push esi */
    MEM32(ebp + (-0x34)) = ebx; /* 0x14083753: mov dword ptr [ebp - 0x34], ebx */
    MEM32(ebp + (-0x54)) = ecx; /* 0x14083756: mov dword ptr [ebp - 0x54], ecx */
    MEM32(ebp + (-0x44)) = 0; /* 0x14083759: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x50)) = 0; /* 0x14083760: mov dword ptr [ebp - 0x50], 0 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x14083767: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x1408376E: mov dword ptr [ebp - 0x48], 0 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x14083775: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14083778: push eax */
    eax = MEM32(esi); /* 0x14083779: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1408377B: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1408377C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1408377F: push eax */
    ecx = ebx; /* 0x14083780: mov ecx, ebx */
    RECOMP_CALL(sub_141E6AB0); /* 0x14083782: call 0x141e6ab0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14083787: mov esi, eax */
    /* test esi, esi */ /* 0x14083789: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083898; /* 0x1408378B: js 0x14083898 */
L_14083791:
    eax = MEM32(ebp + (-0x30)); /* 0x14083791: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14083794: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x14083796: add eax, 0xc */
    _flag_k = FK_ADD;
    ebx = ebp + (-0x28); /* 0x14083799: lea ebx, [ebp - 0x28] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1408379C: mov dword ptr [ebp - 0x3c], eax */
    /* nop */ /* 0x1408379F: nop  */
L_140837A0:
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x140837A0: push dword ptr [ebp - 0x34] */
    esi = MEM32(ebp + (-0x38)); /* 0x140837A3: mov esi, dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(eax)); /* 0x140837A6: push dword ptr [eax] */
    eax = ebx; /* 0x140837A8: mov eax, ebx */
    RECOMP_CALL(sub_14083680); /* 0x140837AA: call 0x14083680 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140837AF: mov esi, eax */
    /* test esi, esi */ /* 0x140837B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083898; /* 0x140837B3: js 0x14083898 */
L_140837B9:
    eax = MEM32(ebp + (-0x3C)); /* 0x140837B9: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140837BC: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x140837BD: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x140837C0: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C)) = eax; /* 0x140837C3: mov dword ptr [ebp - 0x3c], eax */
    /* cmp edi, 4 */ /* 0x140837C6: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140837A0; /* 0x140837C9: jb 0x140837a0 */
L_140837CB:
    ebx = MEM32(ebp + (-0x30)); /* 0x140837CB: mov ebx, dword ptr [ebp - 0x30] */
    eax = MEM32(ebx + 0x1C); /* 0x140837CE: mov eax, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x140837D1: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebx + 0x20); /* 0x140837D4: mov eax, dword ptr [ebx + 0x20] */
    MEM32(ebp + (-0x14)) = eax; /* 0x140837D7: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x2C); /* 0x140837DA: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x140837DD: mov dword ptr [ebp - 0x10], eax */
    /* test eax, eax */ /* 0x140837E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408386A; /* 0x140837E2: je 0x1408386a */
L_140837E8:
    edi = ebp + (-0x50); /* 0x140837E8: lea edi, [ebp - 0x50] */
    RECOMP_CALL(sub_14085E10); /* 0x140837EB: call 0x14085e10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140837F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083863; /* 0x140837F2: js 0x14083863 */
L_140837F4:
    eax = MEM32(ebp + (-0x48)); /* 0x140837F4: mov eax, dword ptr [ebp - 0x48] */
    ecx = MEM32(ebp + (-0x50)); /* 0x140837F7: mov ecx, dword ptr [ebp - 0x50] */
    ecx = ecx + eax * 8; /* 0x140837FA: lea ecx, [ecx + eax*8] */
    MEM32(ebp + (-0x30)) = ecx; /* 0x140837FD: mov dword ptr [ebp - 0x30], ecx */
    /* test ecx, ecx */ /* 0x14083800: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083863; /* 0x14083802: je 0x14083863 */
L_14083804:
    eax = MEM32(ebp + (-0x10)); /* 0x14083804: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14083807: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x14083809: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083845; /* 0x1408380B: je 0x14083845 */
L_1408380D:
    ecx = ecx; /* 0x1408380D: lea ecx, [ecx] */
L_14083810:
    eax = MEM32(ebx + 0x24); /* 0x14083810: mov eax, dword ptr [ebx + 0x24] */
    eax = MEM32(eax + edi * 8); /* 0x14083813: mov eax, dword ptr [eax + edi*8] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x14083816: push dword ptr [ebp - 0x34] */
    esi = MEM32(ebp + (-0x38)); /* 0x14083819: mov esi, dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1408381C: push dword ptr [eax + 0xc] */
    ecx = ecx + edi * 8; /* 0x1408381F: lea ecx, [ecx + edi*8] */
    eax = ecx; /* 0x14083822: mov eax, ecx */
    RECOMP_CALL(sub_14083680); /* 0x14083824: call 0x14083680 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14083829: mov esi, eax */
    /* test esi, esi */ /* 0x1408382B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083898; /* 0x1408382D: js 0x14083898 */
L_1408382F:
    eax = MEM32(ebx + 0x24); /* 0x1408382F: mov eax, dword ptr [ebx + 0x24] */
    eax = MEM32(eax + edi * 8 + 0x4); /* 0x14083832: mov eax, dword ptr [eax + edi*8 + 4] */
    ecx = MEM32(ebp + (-0x30)); /* 0x14083836: mov ecx, dword ptr [ebp - 0x30] */
    MEM32(ecx + edi * 8 + 0x4) = eax; /* 0x14083839: mov dword ptr [ecx + edi*8 + 4], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1408383D: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14083840: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x14083841: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14083810; /* 0x14083843: jb 0x14083810 */
L_14083845:
    ebx = MEM32(ebp + (-0x34)); /* 0x14083845: mov ebx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083848: add eax, eax */
    _flag_k = FK_ADD;
    edx = ebp + (-0xC); /* 0x1408384A: lea edx, [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1408384D: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x1408384F: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083850: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14083852: push eax */
    PUSH32(esp, ecx); /* 0x14083853: push ecx */
    ecx = ebx; /* 0x14083854: mov ecx, ebx */
    RECOMP_CALL(sub_141E6897); /* 0x14083856: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1408385B: mov esi, eax */
    /* test esi, esi */ /* 0x1408385D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083898; /* 0x1408385F: js 0x14083898 */
L_14083861:
    goto L_14083874; /* 0x14083861: jmp 0x14083874 */
L_14083863:
    esi = 0x8007000Eu; /* 0x14083863: mov esi, 0x8007000e */
    goto L_14083898; /* 0x14083868: jmp 0x14083898 */
L_1408386A:
    ebx = MEM32(ebp + (-0x34)); /* 0x1408386A: mov ebx, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0xC)) = 0; /* 0x1408386D: mov dword ptr [ebp - 0xc], 0 */
L_14083874:
    eax = MEM32(ebp + (-0x54)); /* 0x14083874: mov eax, dword ptr [ebp - 0x54] */
    /* test eax, eax */ /* 0x14083877: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083880; /* 0x14083879: je 0x14083880 */
L_1408387B:
    PUSH32(esp, eax); /* 0x1408387B: push eax */
    ecx = ebx; /* 0x1408387C: mov ecx, ebx */
    goto L_14083885; /* 0x1408387E: jmp 0x14083885 */
L_14083880:
    ecx = MEM32(ebp + (-0x40)); /* 0x14083880: mov ecx, dword ptr [ebp - 0x40] */
    PUSH32(esp, 0); /* 0x14083883: push 0 */
L_14083885:
    PUSH32(esp, 0x24u); /* 0x14083885: push 0x24 */
    eax = ebp + (-0x2C); /* 0x14083887: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1408388A: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x1408388B: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14083890: mov esi, eax */
    /* test esi, esi */ /* 0x14083892: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083898; /* 0x14083894: js 0x14083898 */
L_14083896:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14083896: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_14083898:
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x14083898: push dword ptr [ebp - 0x50] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x1408389B: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x140838A1: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140838A4: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x140838A7: pop edi */
    eax = esi; /* 0x140838A8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140838AA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140838AB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140838AD: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x140838AE: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140838B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140838B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140838B6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140838C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140838C0u);

L_140838C0:
    edi = edi; /* 0x140838C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140838C2: push ebp */
    ebp = esp; /* 0x140838C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x140838C5: sub esp, 0x68 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x140838C8: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x140838CD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x140838CF: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x140838D2: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x140838D5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x140838D6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x140838D9: push esi */
    PUSH32(esp, edi); /* 0x140838DA: push edi */
    PUSH32(esp, eax); /* 0x140838DB: push eax */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x140838DC: push dword ptr [ebx + 8] */
    esi = ecx; /* 0x140838DF: mov esi, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x140838E1: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x30)) = eax; /* 0x140838E4: mov dword ptr [ebp - 0x30], eax */
    eax = ebp + (-0x20); /* 0x140838E7: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x28)) = esi; /* 0x140838EA: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x60)) = ebx; /* 0x140838ED: mov dword ptr [ebp - 0x60], ebx */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x140838F0: mov dword ptr [ebp - 0x4c], ecx */
    MEM32(ebp + (-0x38)) = 0; /* 0x140838F3: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x24)) = 0x18u; /* 0x140838FA: mov dword ptr [ebp - 0x24], 0x18 */
    MEM32(ebp + (-0x50)) = 0; /* 0x14083901: mov dword ptr [ebp - 0x50], 0 */
    MEM32(ebp + (-0x5C)) = 0; /* 0x14083908: mov dword ptr [ebp - 0x5c], 0 */
    MEM32(ebp + (-0x58)) = 0; /* 0x1408390F: mov dword ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x54)) = 0; /* 0x14083916: mov dword ptr [ebp - 0x54], 0 */
    RECOMP_CALL(sub_14083680); /* 0x1408391D: call 0x14083680 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083922: mov edi, eax */
    /* test edi, edi */ /* 0x14083924: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C99; /* 0x14083926: js 0x14083c99 */
L_1408392C:
    eax = MEM32(ebx + 0x4); /* 0x1408392C: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x1408392F: mov ecx, dword ptr [ebx] */
    MEM32(ebp + (-0x18)) = eax; /* 0x14083931: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebx + 0xC); /* 0x14083934: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x14083937: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x10); /* 0x1408393A: mov eax, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1408393D: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x14083940: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx + 0x14); /* 0x14083943: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x14083946: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = eax; /* 0x14083947: mov dword ptr [ebp - 0xc], eax */
    /* cmp ecx, 3 */ /* 0x1408394A: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14083C94; /* 0x1408394D: ja 0x14083c94 */
L_14083953:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x14083CC4)); goto _ljump; }
L_1408395A:
    eax = esi + 0x20; /* 0x1408395A: lea eax, [esi + 0x20] */
    esi = 0x1Cu; /* 0x1408395D: mov esi, 0x1c */
    MEM32(ebp + (-0x24)) = 0x1Cu; /* 0x14083962: mov dword ptr [ebp - 0x24], 0x1c */
    RECOMP_CALL(sub_14085850); /* 0x14083969: call 0x14085850 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1408396E: mov esi, eax */
    /* test esi, esi */ /* 0x14083970: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408397E; /* 0x14083972: jne 0x1408397e */
L_14083974:
    edi = 0x8007000Eu; /* 0x14083974: mov edi, 0x8007000e */
    goto L_14083C99; /* 0x14083979: jmp 0x14083c99 */
L_1408397E:
    eax = MEM32(ebp + (-0x20)); /* 0x1408397E: mov eax, dword ptr [ebp - 0x20] */
    MEM32(esi) = eax; /* 0x14083981: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x14083983: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(esi + 0x4) = eax; /* 0x14083986: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x14083989: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x8) = eax; /* 0x1408398C: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1408398F: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0xC) = eax; /* 0x14083992: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x14083995: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x14083998: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1408399B: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x14) = eax; /* 0x1408399E: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebx + 0x1C); /* 0x140839A1: mov eax, dword ptr [ebx + 0x1c] */
    MEM32(esi + 0x18) = eax; /* 0x140839A4: mov dword ptr [esi + 0x18], eax */
    goto L_14083C10; /* 0x140839A7: jmp 0x14083c10 */
L_140839AC:
    eax = esi + 0x20; /* 0x140839AC: lea eax, [esi + 0x20] */
    esi = 0x18u; /* 0x140839AF: mov esi, 0x18 */
    RECOMP_CALL(sub_14085850); /* 0x140839B4: call 0x14085850 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140839B9: mov esi, eax */
    /* test esi, esi */ /* 0x140839BB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083974; /* 0x140839BD: je 0x14083974 */
L_140839BF:
    eax = MEM32(ebp + (-0x20)); /* 0x140839BF: mov eax, dword ptr [ebp - 0x20] */
    MEM32(esi) = eax; /* 0x140839C2: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x140839C4: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(esi + 0x4) = eax; /* 0x140839C7: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x140839CA: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x8) = eax; /* 0x140839CD: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x140839D0: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0xC) = eax; /* 0x140839D3: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x140839D6: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x140839D9: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x140839DC: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x14) = eax; /* 0x140839DF: mov dword ptr [esi + 0x14], eax */
    goto L_14083C10; /* 0x140839E2: jmp 0x14083c10 */
L_140839E7:
    edi = MEM32(ebx + 0x28); /* 0x140839E7: mov edi, dword ptr [ebx + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140839EA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x140839EC: mov eax, edi */
    edx = 0x10u; /* 0x140839EE: mov edx, 0x10 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x140839F3: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x140839F5: seto cl */
    MEM32(ebp + (-0x34)) = edi; /* 0x140839F8: mov dword ptr [ebp - 0x34], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x140839FB: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x140839FD: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x140839FF: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14083A00: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14083A06: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14083A08: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = ecx; /* 0x14083A0B: mov dword ptr [ebp - 0x38], ecx */
    /* test ecx, ecx */ /* 0x14083A0E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083974; /* 0x14083A10: je 0x14083974 */
L_14083A16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14083A16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = eax; /* 0x14083A18: mov dword ptr [ebp - 0x2c], eax */
    /* test edi, edi */ /* 0x14083A1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083AC9; /* 0x14083A1D: je 0x14083ac9 */
L_14083A23:
    esi = ecx + 0xC; /* 0x14083A23: lea esi, [ecx + 0xc] */
    MEM32(ebp + (-0x3C)) = esi; /* 0x14083A26: mov dword ptr [ebp - 0x3c], esi */
    esp = esp; /* 0x14083A29: lea esp, [esp] */
L_14083A30:
    ecx = MEM32(ebx + 0x20); /* 0x14083A30: mov ecx, dword ptr [ebx + 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x14083A33: push dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083A36: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083A38: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x14083A3A: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx); /* 0x14083A3C: mov ecx, dword ptr [ecx] */
    PUSH32(esp, MEM32(ecx)); /* 0x14083A3E: push dword ptr [ecx] */
    MEM32(ebp + (-0x24)) = eax; /* 0x14083A40: mov dword ptr [ebp - 0x24], eax */
    eax = esi + (-0xC); /* 0x14083A43: lea eax, [esi - 0xc] */
    esi = MEM32(ebp + (-0x28)); /* 0x14083A46: mov esi, dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_14083680); /* 0x14083A49: call 0x14083680 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083A4E: mov edi, eax */
    /* test edi, edi */ /* 0x14083A50: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C99; /* 0x14083A52: js 0x14083c99 */
L_14083A58:
    ecx = MEM32(ebx + 0x20); /* 0x14083A58: mov ecx, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x24)); /* 0x14083A5B: add ecx, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x14083A5E: push dword ptr [ebp - 0x30] */
    ecx = MEM32(ecx); /* 0x14083A61: mov ecx, dword ptr [ecx] */
    eax = MEM32(ebp + (-0x3C)); /* 0x14083A63: mov eax, dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x14083A66: push dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF8u; /* 0x14083A69: add eax, -8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_14083680); /* 0x14083A6C: call 0x14083680 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083A71: mov edi, eax */
    /* test edi, edi */ /* 0x14083A73: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C99; /* 0x14083A75: js 0x14083c99 */
L_14083A7B:
    eax = MEM32(ebx + 0x20); /* 0x14083A7B: mov eax, dword ptr [ebx + 0x20] */
    esi = MEM32(ebp + (-0x3C)); /* 0x14083A7E: mov esi, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x14083A81: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x28)); /* 0x14083A84: mov ecx, dword ptr [ebp - 0x28] */
    eax = MEM32(eax); /* 0x14083A87: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x14083A89: push esi */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x14083A8A: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x14083A8D: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_140838C0); /* 0x14083A90: call 0x140838c0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083A95: mov edi, eax */
    /* test edi, edi */ /* 0x14083A97: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C99; /* 0x14083A99: js 0x14083c99 */
L_14083A9F:
    eax = MEM32(ebx + 0x20); /* 0x14083A9F: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(ebp + (-0x24)); /* 0x14083AA2: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ecx + eax); /* 0x14083AA5: mov eax, dword ptr [ecx + eax] */
    eax = MEM32(eax + 0x8); /* 0x14083AA8: mov eax, dword ptr [eax + 8] */
    edi = MEM32(ebp + (-0x34)); /* 0x14083AAB: mov edi, dword ptr [ebp - 0x34] */
    MEM32(esi + (-0x4)) = eax; /* 0x14083AAE: mov dword ptr [esi - 4], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x14083AB1: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x14083AB4: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x14083AB5: add esi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x14083AB8: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x3C)) = esi; /* 0x14083ABB: mov dword ptr [ebp - 0x3c], esi */
    /* cmp eax, edi */ /* 0x14083ABE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14083A30; /* 0x14083AC0: jb 0x14083a30 */
L_14083AC6:
    esi = MEM32(ebp + (-0x28)); /* 0x14083AC6: mov esi, dword ptr [ebp - 0x28] */
L_14083AC9:
    eax = edi; /* 0x14083AC9: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x14083ACB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x14083ACB: shl eax, 4 */
    /* test MEM8(esi + 0xC30), 0x20u */ /* 0x14083ACE: test byte ptr [esi + 0xc30], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC30)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = eax + 0x1C; /* 0x14083AD5: lea ecx, [eax + 0x1c] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x14083AD8: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x14083ADB: mov dword ptr [ebp - 0x24], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083B8E; /* 0x14083ADE: je 0x14083b8e */
L_14083AE4:
    eax = MEM32(ebx + 0x40); /* 0x14083AE4: mov eax, dword ptr [ebx + 0x40] */
    /* test eax, eax */ /* 0x14083AE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083B09; /* 0x14083AE9: je 0x14083b09 */
L_14083AEB:
    ecx = ebp + (-0x48); /* 0x14083AEB: lea ecx, [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x14083AEE: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x14083AEF: push dword ptr [ebp - 0x30] */
    ecx = esi; /* 0x14083AF2: mov ecx, esi */
    PUSH32(esp, eax); /* 0x14083AF4: push eax */
    RECOMP_CALL(sub_140838C0); /* 0x14083AF5: call 0x140838c0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083AFA: mov edi, eax */
    /* test edi, edi */ /* 0x14083AFC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C99; /* 0x14083AFE: js 0x14083c99 */
L_14083B04:
    ecx = MEM32(ebp + (-0x24)); /* 0x14083B04: mov ecx, dword ptr [ebp - 0x24] */
    goto L_14083B10; /* 0x14083B07: jmp 0x14083b10 */
L_14083B09:
    MEM32(ebp + (-0x48)) = 0; /* 0x14083B09: mov dword ptr [ebp - 0x48], 0 */
L_14083B10:
    eax = MEM32(ebx + 0x38); /* 0x14083B10: mov eax, dword ptr [ebx + 0x38] */
    MEM32(ebp + (-0x44)) = eax; /* 0x14083B13: mov dword ptr [ebp - 0x44], eax */
    /* test eax, eax */ /* 0x14083B16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083B87; /* 0x14083B18: je 0x14083b87 */
L_14083B1A:
    edi = ebp + (-0x5C); /* 0x14083B1A: lea edi, [ebp - 0x5c] */
    RECOMP_CALL(sub_14086040); /* 0x14083B1D: call 0x14086040 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083B22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083974; /* 0x14083B24: js 0x14083974 */
L_14083B2A:
    eax = MEM32(ebp + (-0x54)); /* 0x14083B2A: mov eax, dword ptr [ebp - 0x54] */
    ecx = MEM32(ebp + (-0x5C)); /* 0x14083B2D: mov ecx, dword ptr [ebp - 0x5c] */
    edx = ecx + eax * 4; /* 0x14083B30: lea edx, [ecx + eax*4] */
    MEM32(ebp + (-0x3C)) = edx; /* 0x14083B33: mov dword ptr [ebp - 0x3c], edx */
    /* test edx, edx */ /* 0x14083B36: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083974; /* 0x14083B38: je 0x14083974 */
L_14083B3E:
    eax = MEM32(ebp + (-0x44)); /* 0x14083B3E: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14083B41: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x14083B43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083B81; /* 0x14083B45: je 0x14083b81 */
L_14083B47:
    goto L_14083B50; /* 0x14083B47: jmp 0x14083b50 */
L_14083B50:
    ecx = MEM32(ebx + 0x30); /* 0x14083B50: mov ecx, dword ptr [ebx + 0x30] */
    eax = esi * 4; /* 0x14083B53: lea eax, [esi*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x14083B5A: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x14083B5C: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14083B5E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x14083B5F: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ecx)); /* 0x14083B62: push dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x28)); /* 0x14083B64: mov ecx, dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_140838C0); /* 0x14083B67: call 0x140838c0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083B6C: mov edi, eax */
    /* test edi, edi */ /* 0x14083B6E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C99; /* 0x14083B70: js 0x14083c99 */
L_14083B76:
    eax = MEM32(ebp + (-0x44)); /* 0x14083B76: mov eax, dword ptr [ebp - 0x44] */
    edx = MEM32(ebp + (-0x3C)); /* 0x14083B79: mov edx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14083B7C: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, eax */ /* 0x14083B7D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14083B50; /* 0x14083B7F: jb 0x14083b50 */
L_14083B81:
    ecx = MEM32(ebp + (-0x24)); /* 0x14083B81: mov ecx, dword ptr [ebp - 0x24] */
    esi = MEM32(ebp + (-0x28)); /* 0x14083B84: mov esi, dword ptr [ebp - 0x28] */
L_14083B87:
    ecx = ecx + eax * 4 + 0x8; /* 0x14083B87: lea ecx, [ecx + eax*4 + 8] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x14083B8B: mov dword ptr [ebp - 0x24], ecx */
L_14083B8E:
    eax = esi + 0x20; /* 0x14083B8E: lea eax, [esi + 0x20] */
    esi = ecx; /* 0x14083B91: mov esi, ecx */
    RECOMP_CALL(sub_14085850); /* 0x14083B93: call 0x14085850 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14083B98: mov esi, eax */
    /* test esi, esi */ /* 0x14083B9A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083974; /* 0x14083B9C: je 0x14083974 */
L_14083BA2:
    eax = MEM32(ebp + (-0x20)); /* 0x14083BA2: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x14083BA5: push dword ptr [ebp - 0x2c] */
    MEM32(esi) = eax; /* 0x14083BA8: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x14083BAA: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x14083BAD: push dword ptr [ebp - 0x38] */
    MEM32(esi + 0x4) = eax; /* 0x14083BB0: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x14083BB3: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x8) = eax; /* 0x14083BB6: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x14083BB9: mov eax, dword ptr [ebp - 0x14] */
    MEM32(esi + 0xC) = eax; /* 0x14083BBC: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x14083BBF: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x14083BC2: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x14083BC5: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x14) = eax; /* 0x14083BC8: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x14083BCB: mov eax, dword ptr [ebp - 0x34] */
    edi = esi + 0x18; /* 0x14083BCE: lea edi, [esi + 0x18] */
    MEM32(edi) = eax; /* 0x14083BD1: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x14083BD3: add edi, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x14083BD6: push edi */
    RECOMP_CALL(sub_141EC9A4); /* 0x14083BD7: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x14083BDC: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x2C)); /* 0x14083BDF: add edi, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14083BE2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test MEM8(eax + 0xC30), 0x20u */ /* 0x14083BE5: test byte ptr [eax + 0xc30], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC30)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083C10; /* 0x14083BEC: je 0x14083c10 */
L_14083BEE:
    eax = MEM32(ebp + (-0x48)); /* 0x14083BEE: mov eax, dword ptr [ebp - 0x48] */
    MEM32(edi) = eax; /* 0x14083BF1: mov dword ptr [edi], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x14083BF3: mov eax, dword ptr [ebp - 0x44] */
    MEM32(edi + 0x4) = eax; /* 0x14083BF6: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x14083BF9: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083BFC: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083BFE: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14083C00: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x14083C01: push dword ptr [ebp - 0x5c] */
    eax = edi + 0x8; /* 0x14083C04: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x14083C07: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x14083C08: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14083C0D: add esp, 0xc */
    _flag_k = FK_ADD;
L_14083C10:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x14083C10: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x14083C13: push esi */
    RECOMP_CALL(sub_141C76E0); /* 0x14083C14: call 0x141c76e0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14083C19: mov ecx, eax */
    eax = MEM32(ebp + (-0x28)); /* 0x14083C1B: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x14083C1E: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x14083C20: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x14083C23: push ebx */
    PUSH32(esp, eax); /* 0x14083C24: push eax */
    ebx = ebp + (-0x40); /* 0x14083C25: lea ebx, [ebp - 0x40] */
    edi = ecx; /* 0x14083C28: mov edi, ecx */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x14083C2A: mov dword ptr [ebp - 0x2c], ecx */
    MEM32(ebp + (-0x34)) = eax; /* 0x14083C2D: mov dword ptr [ebp - 0x34], eax */
    RECOMP_CALL(sub_14085780); /* 0x14083C30: call 0x14085780 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4C)); /* 0x14083C35: mov ebx, dword ptr [ebp - 0x4c] */
    /* test eax, eax */ /* 0x14083C38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C4F; /* 0x14083C3A: js 0x14083c4f */
L_14083C3C:
    ecx = MEM32(ebp + (-0x3C)); /* 0x14083C3C: mov ecx, dword ptr [ebp - 0x3c] */
    eax = MEM32(ecx + 0x4); /* 0x14083C3F: mov eax, dword ptr [ecx + 4] */
    esi = MEM32(ebp + (-0x34)); /* 0x14083C42: mov esi, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x64)) = eax; /* 0x14083C45: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ecx + 0x8); /* 0x14083C48: mov eax, dword ptr [ecx + 8] */
    MEM32(ebx) = eax; /* 0x14083C4B: mov dword ptr [ebx], eax */
    goto L_14083C7A; /* 0x14083C4D: jmp 0x14083c7a */
L_14083C4F:
    ecx = MEM32(ebp + (-0x30)); /* 0x14083C4F: mov ecx, dword ptr [ebp - 0x30] */
    PUSH32(esp, ebx); /* 0x14083C52: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x14083C53: push dword ptr [ebp - 0x24] */
    PUSH32(esp, esi); /* 0x14083C56: push esi */
    RECOMP_CALL(sub_141E6897); /* 0x14083C57: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083C5C: mov edi, eax */
    /* test edi, edi */ /* 0x14083C5E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C99; /* 0x14083C60: js 0x14083c99 */
L_14083C62:
    PUSH32(esp, MEM32(ebx)); /* 0x14083C62: push dword ptr [ebx] */
    esi = MEM32(ebp + (-0x34)); /* 0x14083C64: mov esi, dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x14083C67: push dword ptr [ebp - 0x60] */
    ebx = MEM32(ebp + (-0x2C)); /* 0x14083C6A: mov ebx, dword ptr [ebp - 0x2c] */
    edi = esi; /* 0x14083C6D: mov edi, esi */
    RECOMP_CALL(sub_140857F0); /* 0x14083C6F: call 0x140857f0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083C74: mov edi, eax */
    /* test edi, edi */ /* 0x14083C76: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083C99; /* 0x14083C78: js 0x14083c99 */
L_14083C7A:
    eax = MEM32(esi + 0x8); /* 0x14083C7A: mov eax, dword ptr [esi + 8] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x14083C7D: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14083C90; /* 0x14083C80: jb 0x14083c90 */
L_14083C82:
    eax = eax + eax + 0x1; /* 0x14083C82: lea eax, [eax + eax + 1] */
    PUSH32(esp, esi); /* 0x14083C86: push esi */
    RECOMP_CALL(sub_14085C00); /* 0x14083C87: call 0x14085c00 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14083C8C: mov edi, eax */
    goto L_14083C99; /* 0x14083C8E: jmp 0x14083c99 */
L_14083C90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14083C90: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14083C99; /* 0x14083C92: jmp 0x14083c99 */
L_14083C94:
    edi = 0x80004001u; /* 0x14083C94: mov edi, 0x80004001 */
L_14083C99:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x14083C99: push dword ptr [ebp - 0x38] */
    esi = MEM32(0x1400115C); /* 0x14083C9C: mov esi, dword ptr [0x1400115c] */
    RECOMP_ICALL(esi); /* 0x14083CA2: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14083CA4: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x14083CA7: push dword ptr [ebp - 0x5c] */
    RECOMP_ICALL(esi); /* 0x14083CAA: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x14083CAC: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14083CAF: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x14083CB2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x14083CB4: pop edi */
    esi = POP32_VAL(esp); /* 0x14083CB5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14083CB6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14083CB8: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x14083CB9: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14083CBE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14083CC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14083CC1: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x1408395Au: goto L_1408395A;
      case 0x140839ACu: goto L_140839AC;
      case 0x140839E7u: goto L_140839E7;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_14083CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14083CE0u);

L_14083CE0:
    edi = edi; /* 0x14083CE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14083CE2: push ebp */
    ebp = esp; /* 0x14083CE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x14083CE5: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14083CE8: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x14083CED: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x14083CEF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x4); /* 0x14083CF2: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x14083CF5: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0xC); /* 0x14083CF8: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x14083CFB: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx + 0x10); /* 0x14083CFE: mov eax, dword ptr [ebx + 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x14083D01: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, esi); /* 0x14083D04: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14083D05: dec eax */
    _flag_k = FK_DEC;
    esi = edx; /* 0x14083D06: mov esi, edx */
    MEM32(ebp + (-0x18)) = esi; /* 0x14083D08: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x14083D0B: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, 7 */ /* 0x14083D0E: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14083E99; /* 0x14083D11: ja 0x14083e99 */
L_14083D17:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x14083EB0)); goto _ljump; }
L_14083D1E:
    eax = ebp + (-0x8); /* 0x14083D1E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14083D21: push eax */
    PUSH32(esp, 4); /* 0x14083D22: push 4 */
    esi = ebx + 0x14; /* 0x14083D24: lea esi, [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x14083D27: push esi */
    ecx = edi; /* 0x14083D28: mov ecx, edi */
    RECOMP_CALL(sub_141E6897); /* 0x14083D2A: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083D2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083D31: js 0x14083e9e */
L_14083D37:
    eax = MEM32(esi); /* 0x14083D37: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083D39: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083D3B: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x14083D3D: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083D3F: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14083D41: push eax */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x14083D42: push dword ptr [ebx + 0x18] */
    goto L_14083E6F; /* 0x14083D45: jmp 0x14083e6f */
L_14083D4A:
    PUSH32(esp, edi); /* 0x14083D4A: push edi */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x14083D4B: push dword ptr [ebx + 0x14] */
    eax = ebp + (-0x8); /* 0x14083D4E: lea eax, [ebp - 8] */
    RECOMP_CALL(sub_14083680); /* 0x14083D51: call 0x14083680 */
    RECOMP_FLAGS_IN();
    goto L_14083E76; /* 0x14083D56: jmp 0x14083e76 */
L_14083D5B:
    eax = MEM32(ebx + 0x14); /* 0x14083D5B: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, edi); /* 0x14083D5E: push edi */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x14083D5F: push dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x38)) = eax; /* 0x14083D62: mov dword ptr [ebp - 0x38], eax */
    eax = ebp + (-0x3C); /* 0x14083D65: lea eax, [ebp - 0x3c] */
    RECOMP_CALL(sub_14083680); /* 0x14083D68: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083D6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083D6F: js 0x14083e9e */
L_14083D75:
    eax = ebp + (-0x8); /* 0x14083D75: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14083D78: push eax */
    eax = ebp + (-0x3C); /* 0x14083D79: lea eax, [ebp - 0x3c] */
    goto L_14083E6C; /* 0x14083D7C: jmp 0x14083e6c */
L_14083D81:
    PUSH32(esp, edi); /* 0x14083D81: push edi */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x14083D82: push dword ptr [ebx + 0x14] */
    eax = ebp + (-0x24); /* 0x14083D85: lea eax, [ebp - 0x24] */
    RECOMP_CALL(sub_14083680); /* 0x14083D88: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083D8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083D8F: js 0x14083e9e */
L_14083D95:
    PUSH32(esp, edi); /* 0x14083D95: push edi */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x14083D96: push dword ptr [ebx + 0x18] */
    eax = ebp + (-0x20); /* 0x14083D99: lea eax, [ebp - 0x20] */
    RECOMP_CALL(sub_14083680); /* 0x14083D9C: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083DA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083DA3: js 0x14083e9e */
L_14083DA9:
    eax = ebp + (-0x8); /* 0x14083DA9: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14083DAC: push eax */
    eax = ebp + (-0x24); /* 0x14083DAD: lea eax, [ebp - 0x24] */
    goto L_14083E6C; /* 0x14083DB0: jmp 0x14083e6c */
L_14083DB5:
    ecx = MEM32(ebx + 0x14); /* 0x14083DB5: mov ecx, dword ptr [ebx + 0x14] */
    eax = ebp + (-0x8); /* 0x14083DB8: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14083DBB: push eax */
    eax = MEM32(ecx); /* 0x14083DBC: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x14083DBE: push ecx */
    esi = ecx; /* 0x14083DBF: mov esi, ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x14083DC1: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14083DC4: push eax */
    eax = MEM32(esi); /* 0x14083DC5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x14083DC7: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x14083DC8: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14083DCB: push eax */
    ecx = edi; /* 0x14083DCC: mov ecx, edi */
    RECOMP_CALL(sub_141E6AB0); /* 0x14083DCE: call 0x141e6ab0 */
    RECOMP_FLAGS_IN();
    goto L_14083E76; /* 0x14083DD3: jmp 0x14083e76 */
L_14083DD8:
    ecx = MEM32(ebx + 0x20); /* 0x14083DD8: mov ecx, dword ptr [ebx + 0x20] */
    eax = ebp + (-0x34); /* 0x14083DDB: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x14083DDE: push eax */
    eax = MEM32(ecx); /* 0x14083DDF: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x14083DE1: push ecx */
    esi = ecx; /* 0x14083DE2: mov esi, ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x14083DE4: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14083DE7: push eax */
    eax = MEM32(esi); /* 0x14083DE8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x14083DEA: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x14083DEB: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14083DEE: push eax */
    ecx = edi; /* 0x14083DEF: mov ecx, edi */
    RECOMP_CALL(sub_141E6AB0); /* 0x14083DF1: call 0x141e6ab0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083DF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083DF8: js 0x14083e9e */
L_14083DFE:
    esi = MEM32(ebp + (-0x18)); /* 0x14083DFE: mov esi, dword ptr [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x14083E01: push edi */
    PUSH32(esp, MEM32(ebx + 0x28)); /* 0x14083E02: push dword ptr [ebx + 0x28] */
    eax = ebp + (-0x30); /* 0x14083E05: lea eax, [ebp - 0x30] */
    RECOMP_CALL(sub_14083680); /* 0x14083E08: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083E0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083E0F: js 0x14083e9e */
L_14083E15:
    eax = ebp + (-0x8); /* 0x14083E15: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14083E18: push eax */
    eax = ebp + (-0x34); /* 0x14083E19: lea eax, [ebp - 0x34] */
    goto L_14083E6C; /* 0x14083E1C: jmp 0x14083e6c */
L_14083E1E:
    eax = ebp + (-0x8); /* 0x14083E1E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14083E21: push eax */
    eax = ebx + 0x1C; /* 0x14083E22: lea eax, [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x14083E25: push eax */
    PUSH32(esp, esi); /* 0x14083E26: push esi */
    edx = edi; /* 0x14083E27: mov edx, edi */
    RECOMP_CALL(sub_14083720); /* 0x14083E29: call 0x14083720 */
    RECOMP_FLAGS_IN();
    goto L_14083E76; /* 0x14083E2E: jmp 0x14083e76 */
L_14083E30:
    ecx = MEM32(ebx + 0x18); /* 0x14083E30: mov ecx, dword ptr [ebx + 0x18] */
    eax = ebp + (-0x28); /* 0x14083E33: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x14083E36: push eax */
    eax = MEM32(ecx); /* 0x14083E37: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x14083E39: push ecx */
    esi = ecx; /* 0x14083E3A: mov esi, ecx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x14083E3C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14083E3F: push eax */
    eax = MEM32(esi); /* 0x14083E40: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x14083E42: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x14083E43: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14083E46: push eax */
    ecx = edi; /* 0x14083E47: mov ecx, edi */
    RECOMP_CALL(sub_141E6AB0); /* 0x14083E49: call 0x141e6ab0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083E4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083E50: js 0x14083e9e */
L_14083E52:
    esi = MEM32(ebp + (-0x18)); /* 0x14083E52: mov esi, dword ptr [ebp - 0x18] */
    PUSH32(esp, edi); /* 0x14083E55: push edi */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x14083E56: push dword ptr [ebx + 0x14] */
    eax = ebp + (-0x2C); /* 0x14083E59: lea eax, [ebp - 0x2c] */
    RECOMP_CALL(sub_14083680); /* 0x14083E5C: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083E61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083E63: js 0x14083e9e */
L_14083E65:
    eax = ebp + (-0x8); /* 0x14083E65: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x14083E68: push eax */
    eax = ebp + (-0x2C); /* 0x14083E69: lea eax, [ebp - 0x2c] */
L_14083E6C:
    PUSH32(esp, 8); /* 0x14083E6C: push 8 */
    PUSH32(esp, eax); /* 0x14083E6E: push eax */
L_14083E6F:
    ecx = edi; /* 0x14083E6F: mov ecx, edi */
    RECOMP_CALL(sub_141E6897); /* 0x14083E71: call 0x141e6897 */
    RECOMP_FLAGS_IN();
L_14083E76:
    /* test eax, eax */ /* 0x14083E76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083E9E; /* 0x14083E78: js 0x14083e9e */
L_14083E7A:
    ecx = MEM32(ebp + (-0x1C)); /* 0x14083E7A: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0); /* 0x14083E7D: push 0 */
    PUSH32(esp, 0x10u); /* 0x14083E7F: push 0x10 */
    eax = ebp + (-0x14); /* 0x14083E81: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x14083E84: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x14083E85: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x14083E8A: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x14083E8B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14083E8E: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x14083E90: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14083E95: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14083E97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14083E98: ret  */
L_14083E99:
    eax = 0x80004005u; /* 0x14083E99: mov eax, 0x80004005 */
L_14083E9E:
    ecx = MEM32(ebp + (-0x4)); /* 0x14083E9E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14083EA1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14083EA3: pop esi */
    RECOMP_CALL(sub_141EC0B6); /* 0x14083EA4: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14083EA9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14083EAB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14083EAC: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x14083D1Eu: goto L_14083D1E;
      case 0x14083D4Au: goto L_14083D4A;
      case 0x14083D5Bu: goto L_14083D5B;
      case 0x14083D81u: goto L_14083D81;
      case 0x14083DB5u: goto L_14083DB5;
      case 0x14083DD8u: goto L_14083DD8;
      case 0x14083E1Eu: goto L_14083E1E;
      case 0x14083E30u: goto L_14083E30;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_14083EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14083EE0u);

L_14083EE0:
    edi = edi; /* 0x14083EE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14083EE2: push ebp */
    ebp = esp; /* 0x14083EE3: mov ebp, esp */
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x14083EE5: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14083EE9: push ebx */
    ebx = MEM32(edi + 0x18); /* 0x14083EEA: mov ebx, dword ptr [edi + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_14083EFC; /* 0x14083EED: jne 0x14083efc */
L_14083EEF:
    MEM32(ecx) = 0; /* 0x14083EEF: mov dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14083EF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14083EF7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14083EF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14083EF9: ret 4 */
L_14083EFC:
    PUSH32(esp, ecx); /* 0x14083EFC: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x14083EFD: push dword ptr [ebx] */
    ecx = MEM32(ebp + 0x8); /* 0x14083EFF: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x14083F02: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_141E6897); /* 0x14083F05: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083F0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083F3E; /* 0x14083F0C: js 0x14083f3e */
L_14083F0E:
    PUSH32(esp, esi); /* 0x14083F0E: push esi */
    esi = 1; /* 0x14083F0F: mov esi, 1 */
    /* cmp MEM32(edi + 0x14), esi */ /* 0x14083F14: cmp dword ptr [edi + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14083F3D; /* 0x14083F17: jbe 0x14083f3d */
L_14083F19:
    esp = esp; /* 0x14083F19: lea esp, [esp] */
L_14083F20:
    ecx = MEM32(ebp + 0x8); /* 0x14083F20: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x14083F23: push 0 */
    PUSH32(esp, MEM32(ebx + 0x48)); /* 0x14083F25: push dword ptr [ebx + 0x48] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x48u; /* 0x14083F28: add ebx, 0x48 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x14083F2B: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_141E6897); /* 0x14083F2E: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083F33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083F3D; /* 0x14083F35: js 0x14083f3d */
L_14083F37:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14083F37: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x14) */ /* 0x14083F38: cmp esi, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14083F20; /* 0x14083F3B: jb 0x14083f20 */
L_14083F3D:
    esi = POP32_VAL(esp); /* 0x14083F3D: pop esi */
L_14083F3E:
    ebx = POP32_VAL(esp); /* 0x14083F3E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14083F3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14083F40: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14083F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14083F50u);

L_14083F50:
    edi = edi; /* 0x14083F50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14083F52: push ebp */
    ebp = esp; /* 0x14083F53: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x14083F55: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14083F58: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x14083F5D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x14083F5F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x14083F62: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x14083F65: push ebx */
    PUSH32(esp, esi); /* 0x14083F66: push esi */
    PUSH32(esp, eax); /* 0x14083F67: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x14083F68: push dword ptr [edi] */
    esi = ecx; /* 0x14083F6A: mov esi, ecx */
    ebx = edx; /* 0x14083F6C: mov ebx, edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x14083F6E: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x18); /* 0x14083F71: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x20)) = esi; /* 0x14083F74: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x14083F77: mov dword ptr [ebp - 0x24], ebx */
    RECOMP_CALL(sub_14083680); /* 0x14083F7A: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083F7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084013; /* 0x14083F81: js 0x14084013 */
L_14083F87:
    eax = MEM32(edi + 0x4); /* 0x14083F87: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFu; /* 0x14083F8A: add eax, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x14083F8D: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x14083F90: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(edi + 0xC); /* 0x14083F93: mov eax, dword ptr [edi + 0xc] */
    ecx = eax; /* 0x14083F96: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x14083F98: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x14083F9B: mov dword ptr [ebp - 0x10], ecx */
    /* test LO8(eax), 8 */ /* 0x14083F9E: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083FA8; /* 0x14083FA0: je 0x14083fa8 */
L_14083FA2:
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x14083FA2: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x14083FA5: mov dword ptr [ebp - 0x10], ecx */
L_14083FA8:
    eax = MEM32(edi + 0x18); /* 0x14083FA8: mov eax, dword ptr [edi + 0x18] */
    MEM32(ebp + (-0xC)) = eax; /* 0x14083FAB: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi + 0x8); /* 0x14083FAE: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, 0); /* 0x14083FB1: push 0 */
    MEM32(ebp + (-0x8)) = eax; /* 0x14083FB3: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, 0x14u); /* 0x14083FB6: push 0x14 */
    eax = ebp + (-0x18); /* 0x14083FB8: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x14083FBB: push eax */
    ecx = ebx; /* 0x14083FBC: mov ecx, ebx */
    RECOMP_CALL(sub_141E6897); /* 0x14083FBE: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083FC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084013; /* 0x14083FC5: js 0x14084013 */
L_14083FC7:
    ecx = MEM32(ebp + 0xC); /* 0x14083FC7: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x14083FCA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14083FE3; /* 0x14083FCC: jne 0x14083fe3 */
L_14083FCE:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x14083FCE: push dword ptr [ebp - 0x1c] */
    eax = edi + 0x20; /* 0x14083FD1: lea eax, [edi + 0x20] */
    PUSH32(esp, ebx); /* 0x14083FD4: push ebx */
    PUSH32(esp, eax); /* 0x14083FD5: push eax */
    PUSH32(esp, esi); /* 0x14083FD6: push esi */
    RECOMP_CALL(sub_140846C0); /* 0x14083FD7: call 0x140846c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083FDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084013; /* 0x14083FDE: js 0x14084013 */
L_14083FE0:
    ecx = MEM32(ebp + 0xC); /* 0x14083FE0: mov ecx, dword ptr [ebp + 0xc] */
L_14083FE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14083FE3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x14083FE5: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084013; /* 0x14083FE8: jbe 0x14084013 */
L_14083FEA:
    ebx = ebx; /* 0x14083FEA: lea ebx, [ebx] */
L_14083FF0:
    edx = MEM32(edi + 0x10); /* 0x14083FF0: mov edx, dword ptr [edi + 0x10] */
    edx = MEM32(edx + esi * 4); /* 0x14083FF3: mov edx, dword ptr [edx + esi*4] */
    PUSH32(esp, ecx); /* 0x14083FF6: push ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x14083FF7: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x14083FFA: push ebx */
    ebx = MEM32(ebp + (-0x1C)); /* 0x14083FFB: mov ebx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_14084030); /* 0x14083FFE: call 0x14084030 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084003: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084013; /* 0x14084005: js 0x14084013 */
L_14084007:
    ebx = MEM32(ebp + (-0x24)); /* 0x14084007: mov ebx, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + 0xC); /* 0x1408400A: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1408400D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x1408400E: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14083FF0; /* 0x14084011: jb 0x14083ff0 */
L_14084013:
    ecx = MEM32(ebp + (-0x4)); /* 0x14084013: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x14084016: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14084017: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14084019: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x1408401A: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1408401F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14084021: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14084022: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14084030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14084030u);

L_14084030:
    edi = edi; /* 0x14084030: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14084032: push ebp */
    ebp = esp; /* 0x14084033: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x14084035: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14084038: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1408403D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1408403F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x14084042: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x14084045: push esi */
    PUSH32(esp, edi); /* 0x14084046: push edi */
    edi = edx; /* 0x14084047: mov edi, edx */
    /* cmp MEM32(edi + 0x1C), 0xFFFFFFFFu */ /* 0x14084049: cmp dword ptr [edi + 0x1c], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = eax; /* 0x1408404D: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(edi + 0x8); /* 0x14084050: mov eax, dword ptr [edi + 8] */
    esi = ecx; /* 0x14084053: mov esi, ecx */
    MEM32(ebp + (-0x24)) = esi; /* 0x14084055: mov dword ptr [ebp - 0x24], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x14084058: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x8)) = 0; /* 0x1408405B: mov dword ptr [ebp - 8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1408406B; /* 0x14084062: je 0x1408406b */
L_14084064:
    MEM32(ebp + (-0x8)) = 4; /* 0x14084064: mov dword ptr [ebp - 8], 4 */
L_1408406B:
    eax = ebp + (-0x18); /* 0x1408406B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1408406E: push eax */
    PUSH32(esp, ebx); /* 0x1408406F: push ebx */
    PUSH32(esp, MEM32(edi + 0x28)); /* 0x14084070: push dword ptr [edi + 0x28] */
    RECOMP_CALL(sub_140838C0); /* 0x14084073: call 0x140838c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084078: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140840F1; /* 0x1408407A: js 0x140840f1 */
L_1408407C:
    PUSH32(esp, ebx); /* 0x1408407C: push ebx */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x1408407D: push dword ptr [edi + 0x20] */
    eax = ebp + (-0x1C); /* 0x14084080: lea eax, [ebp - 0x1c] */
    RECOMP_CALL(sub_14083680); /* 0x14084083: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084088: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140840F1; /* 0x1408408A: js 0x140840f1 */
L_1408408C:
    PUSH32(esp, ebx); /* 0x1408408C: push ebx */
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x1408408D: push dword ptr [edi + 0x24] */
    eax = ebp + (-0x14); /* 0x14084090: lea eax, [ebp - 0x14] */
    RECOMP_CALL(sub_14083680); /* 0x14084093: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084098: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140840F1; /* 0x1408409A: js 0x140840f1 */
L_1408409C:
    esi = MEM32(ebp + 0xC); /* 0x1408409C: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1408409F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140840C2; /* 0x140840A1: jne 0x140840c2 */
L_140840A3:
    PUSH32(esp, ebx); /* 0x140840A3: push ebx */
    ecx = ebp + (-0xC); /* 0x140840A4: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_14083EE0); /* 0x140840A7: call 0x14083ee0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140840AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140840C9; /* 0x140840AE: jns 0x140840c9 */
L_140840B0:
    edi = POP32_VAL(esp); /* 0x140840B0: pop edi */
    esi = POP32_VAL(esp); /* 0x140840B1: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x140840B2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140840B5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140840B7: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140840BC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140840BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140840BF: ret 8 */
L_140840C2:
    MEM32(ebp + (-0xC)) = 0; /* 0x140840C2: mov dword ptr [ebp - 0xc], 0 */
L_140840C9:
    ecx = MEM32(ebp + (-0x20)); /* 0x140840C9: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0); /* 0x140840CC: push 0 */
    PUSH32(esp, 0x18u); /* 0x140840CE: push 0x18 */
    eax = ebp + (-0x1C); /* 0x140840D0: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x140840D3: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x140840D4: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140840D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140840F1; /* 0x140840DB: js 0x140840f1 */
L_140840DD:
    /* test esi, esi */ /* 0x140840DD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140840F1; /* 0x140840DF: jne 0x140840f1 */
L_140840E1:
    PUSH32(esp, ebx); /* 0x140840E1: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x140840E2: push dword ptr [ebp - 0x20] */
    eax = edi + 0x30; /* 0x140840E5: lea eax, [edi + 0x30] */
    PUSH32(esp, eax); /* 0x140840E8: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x140840E9: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_140846C0); /* 0x140840EC: call 0x140846c0 */
    RECOMP_FLAGS_IN();
L_140840F1:
    ecx = MEM32(ebp + (-0x4)); /* 0x140840F1: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x140840F4: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140840F5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140840F7: pop esi */
    RECOMP_CALL(sub_141EC0B6); /* 0x140840F8: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140840FD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140840FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14084100: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14084110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14084110u);

L_14084110:
    edi = edi; /* 0x14084110: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14084112: push ebp */
    ebp = esp; /* 0x14084113: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x14084115: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14084118: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1408411D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1408411F: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x14084122: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x14084125: push ebx */
    ebx = ecx; /* 0x14084126: mov ebx, ecx */
    ecx = MEM32(ebx + 0x28); /* 0x14084128: mov ecx, dword ptr [ebx + 0x28] */
    PUSH32(esp, esi); /* 0x1408412B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1408412C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1408412F: push edi */
    edi = MEM32(ecx + 0x4); /* 0x14084130: mov edi, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x54)) = edx; /* 0x14084133: mov dword ptr [ebp - 0x54], edx */
    MEM32(ebp + (-0x5C)) = ebx; /* 0x14084136: mov dword ptr [ebp - 0x5c], ebx */
    MEM32(ebp + (-0x44)) = eax; /* 0x14084139: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x48)) = esi; /* 0x1408413C: mov dword ptr [ebp - 0x48], esi */
    MEM32(ebp + (-0x40)) = ecx; /* 0x1408413F: mov dword ptr [ebp - 0x40], ecx */
    MEM32(ebp + (-0x4C)) = edi; /* 0x14084142: mov dword ptr [ebp - 0x4c], edi */
    /* cmp edi, 1 */ /* 0x14084145: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14084152; /* 0x14084148: jae 0x14084152 */
L_1408414A:
    edi = 1; /* 0x1408414A: mov edi, 1 */
    MEM32(ebp + (-0x4C)) = edi; /* 0x1408414F: mov dword ptr [ebp - 0x4c], edi */
L_14084152:
    eax = MEM32(ebx + 0x1C); /* 0x14084152: mov eax, dword ptr [ebx + 0x1c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x14084155: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x14); /* 0x14084158: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1408415B: push eax */
    PUSH32(esp, esi); /* 0x1408415C: push esi */
    PUSH32(esp, ecx); /* 0x1408415D: push ecx */
    ecx = edx; /* 0x1408415E: mov ecx, edx */
    RECOMP_CALL(sub_140838C0); /* 0x14084160: call 0x140838c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084165: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x14084167: js 0x140844f7 */
L_1408416D:
    PUSH32(esp, esi); /* 0x1408416D: push esi */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x1408416E: push dword ptr [ebx + 0x20] */
    esi = MEM32(ebp + (-0x54)); /* 0x14084171: mov esi, dword ptr [ebp - 0x54] */
    eax = ebp + (-0x18); /* 0x14084174: lea eax, [ebp - 0x18] */
    RECOMP_CALL(sub_14083680); /* 0x14084177: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408417C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x1408417E: js 0x140844f7 */
L_14084184:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x14084184: push dword ptr [ebp - 0x48] */
    eax = ebp + (-0x10); /* 0x14084187: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebx + 0x24)); /* 0x1408418A: push dword ptr [ebx + 0x24] */
    RECOMP_CALL(sub_14083680); /* 0x1408418D: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084192: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x14084194: js 0x140844f7 */
L_1408419A:
    ecx = MEM32(ebp + (-0x44)); /* 0x1408419A: mov ecx, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x1408419D: push 0 */
    PUSH32(esp, 0x10u); /* 0x1408419F: push 0x10 */
    eax = ebp + (-0x18); /* 0x140841A1: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x140841A4: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x140841A5: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140841AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x140841AC: js 0x140844f7 */
L_140841B2:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x140841B2: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140844F7; /* 0x140841B6: jne 0x140844f7 */
L_140841BC:
    esi = MEM32(ebp + (-0x40)); /* 0x140841BC: mov esi, dword ptr [ebp - 0x40] */
    eax = esi; /* 0x140841BF: mov eax, esi */
    RECOMP_CALL(sub_14086CE0); /* 0x140841C1: call 0x14086ce0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140841C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084252; /* 0x140841C8: je 0x14084252 */
L_140841CE:
    MEM32(ebp + (-0x58)) = 0; /* 0x140841CE: mov dword ptr [ebp - 0x58], 0 */
    /* test edi, edi */ /* 0x140841D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140844E5; /* 0x140841D7: je 0x140844e5 */
L_140841DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140841DD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = edi; /* 0x140841DF: mov dword ptr [ebp - 0x40], edi */
L_140841E2:
    eax = MEM32(ebx + 0x40); /* 0x140841E2: mov eax, dword ptr [ebx + 0x40] */
    eax = MEM32(edi + eax + 0x8); /* 0x140841E5: mov eax, dword ptr [edi + eax + 8] */
    ecx = MEM32(ebp + (-0x44)); /* 0x140841E9: mov ecx, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x140841EC: push 0 */
    MEM32(ebp + (-0x50)) = eax; /* 0x140841EE: mov dword ptr [ebp - 0x50], eax */
    PUSH32(esp, 4); /* 0x140841F1: push 4 */
    eax = ebp + (-0x50); /* 0x140841F3: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x140841F6: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x140841F7: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140841FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x140841FE: js 0x140844f7 */
L_14084204:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14084204: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x50)), esi */ /* 0x14084206: cmp dword ptr [ebp - 0x50], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1408423B; /* 0x14084209: jbe 0x1408423b */
L_1408420B:
    goto L_14084210; /* 0x1408420B: jmp 0x14084210 */
L_14084210:
    eax = MEM32(ebx + 0x40); /* 0x14084210: mov eax, dword ptr [ebx + 0x40] */
    eax = MEM32(edi + eax); /* 0x14084213: mov eax, dword ptr [edi + eax] */
    edi = MEM32(ebp + (-0x48)); /* 0x14084216: mov edi, dword ptr [ebp - 0x48] */
    ecx = MEM32(ebp + (-0x44)); /* 0x14084219: mov ecx, dword ptr [ebp - 0x44] */
    ebx = MEM32(eax + esi * 4); /* 0x1408421C: mov ebx, dword ptr [eax + esi*4] */
    edx = MEM32(ebp + (-0x54)); /* 0x1408421F: mov edx, dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_14083CE0); /* 0x14084222: call 0x14083ce0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084227: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x14084229: js 0x140844f7 */
L_1408422F:
    ebx = MEM32(ebp + (-0x5C)); /* 0x1408422F: mov ebx, dword ptr [ebp - 0x5c] */
    edi = MEM32(ebp + (-0x40)); /* 0x14084232: mov edi, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14084235: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x50)) */ /* 0x14084236: cmp esi, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084210; /* 0x14084239: jb 0x14084210 */
L_1408423B:
    esi = MEM32(ebp + (-0x58)); /* 0x1408423B: mov esi, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1408423E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1408423F: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = esi; /* 0x14084242: mov dword ptr [ebp - 0x58], esi */
    MEM32(ebp + (-0x40)) = edi; /* 0x14084245: mov dword ptr [ebp - 0x40], edi */
    /* cmp esi, MEM32(ebp + (-0x4C)) */ /* 0x14084248: cmp esi, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140841E2; /* 0x1408424B: jb 0x140841e2 */
L_1408424D:
    goto L_140844E5; /* 0x1408424D: jmp 0x140844e5 */
L_14084252:
    eax = esi; /* 0x14084252: mov eax, esi */
    RECOMP_CALL(sub_14086BD0); /* 0x14084254: call 0x14086bd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084259: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084484; /* 0x1408425B: je 0x14084484 */
L_14084261:
    eax = MEM32(esi + 0x1C); /* 0x14084261: mov eax, dword ptr [esi + 0x1c] */
    /* cmp eax, 0x1Au */ /* 0x14084264: cmp eax, 0x1a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140843D9; /* 0x14084267: je 0x140843d9 */
L_1408426D:
    /* cmp eax, 0x1Du */ /* 0x1408426D: cmp eax, 0x1d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140843D9; /* 0x14084270: je 0x140843d9 */
L_14084276:
    /* cmp eax, 0x1Eu */ /* 0x14084276: cmp eax, 0x1e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140843D9; /* 0x14084279: je 0x140843d9 */
L_1408427F:
    /* cmp eax, 0x1Cu */ /* 0x1408427F: cmp eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140843D9; /* 0x14084282: je 0x140843d9 */
L_14084288:
    /* cmp eax, 0x1Bu */ /* 0x14084288: cmp eax, 0x1b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140843D9; /* 0x1408428B: je 0x140843d9 */
L_14084291:
    /* cmp eax, 0x19u */ /* 0x14084291: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140843D9; /* 0x14084294: je 0x140843d9 */
L_1408429A:
    /* cmp eax, 8 */ /* 0x1408429A: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1408434E; /* 0x1408429D: jne 0x1408434e */
L_140842A3:
    MEM32(ebp + (-0x40)) = 0; /* 0x140842A3: mov dword ptr [ebp - 0x40], 0 */
    /* test edi, edi */ /* 0x140842AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140844E5; /* 0x140842AC: je 0x140844e5 */
L_140842B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140842B2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140842B4:
    /* cmp MEM32(ebx + 0x14), 0 */ /* 0x140842B4: cmp dword ptr [ebx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084310; /* 0x140842B8: jbe 0x14084310 */
L_140842BA:
    eax = MEM32(ebx + 0x18); /* 0x140842BA: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(edi + eax + 0xC); /* 0x140842BD: mov esi, dword ptr [edi + eax + 0xc] */
    /* test esi, esi */ /* 0x140842C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084310; /* 0x140842C3: je 0x14084310 */
L_140842C5:
    eax = MEM32(esi); /* 0x140842C5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x140842C7: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x140842C8: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140842CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084310; /* 0x140842CD: je 0x14084310 */
L_140842CF:
    eax = ebp + (-0x60); /* 0x140842CF: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x140842D2: push eax */
    eax = MEM32(esi); /* 0x140842D3: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x140842D5: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x140842D6: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x140842D9: push eax */
    eax = MEM32(esi); /* 0x140842DA: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x140842DC: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x140842DD: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x48)); /* 0x140842E0: mov esi, dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x140842E3: push eax */
    ecx = esi; /* 0x140842E4: mov ecx, esi */
    RECOMP_CALL(sub_141E6AB0); /* 0x140842E6: call 0x141e6ab0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140842EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x140842ED: js 0x140844f7 */
L_140842F3:
    eax = MEM32(ebx + 0x18); /* 0x140842F3: mov eax, dword ptr [ebx + 0x18] */
    PUSH32(esp, esi); /* 0x140842F6: push esi */
    PUSH32(esp, MEM32(edi + eax + 0x14)); /* 0x140842F7: push dword ptr [edi + eax + 0x14] */
    esi = MEM32(ebp + (-0x54)); /* 0x140842FB: mov esi, dword ptr [ebp - 0x54] */
    eax = ebp + (-0x5C); /* 0x140842FE: lea eax, [ebp - 0x5c] */
    RECOMP_CALL(sub_14083680); /* 0x14084301: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084306: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x14084308: js 0x140844f7 */
L_1408430E:
    goto L_1408431E; /* 0x1408430E: jmp 0x1408431e */
L_14084310:
    MEM32(ebp + (-0x60)) = 0; /* 0x14084310: mov dword ptr [ebp - 0x60], 0 */
    MEM32(ebp + (-0x5C)) = 0; /* 0x14084317: mov dword ptr [ebp - 0x5c], 0 */
L_1408431E:
    ecx = MEM32(ebp + (-0x44)); /* 0x1408431E: mov ecx, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x14084321: push 0 */
    PUSH32(esp, 8); /* 0x14084323: push 8 */
    eax = ebp + (-0x60); /* 0x14084325: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x14084328: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x14084329: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408432E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x14084330: js 0x140844f7 */
L_14084336:
    eax = MEM32(ebp + (-0x40)); /* 0x14084336: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x14084339: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x48u; /* 0x1408433A: add edi, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = eax; /* 0x1408433D: mov dword ptr [ebp - 0x40], eax */
    /* cmp eax, MEM32(ebp + (-0x4C)) */ /* 0x14084340: cmp eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140842B4; /* 0x14084343: jb 0x140842b4 */
L_14084349:
    goto L_140844E5; /* 0x14084349: jmp 0x140844e5 */
L_1408434E:
    MEM32(ebp + (-0x58)) = 0; /* 0x1408434E: mov dword ptr [ebp - 0x58], 0 */
    /* test edi, edi */ /* 0x14084355: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140844E5; /* 0x14084357: je 0x140844e5 */
L_1408435D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1408435D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1408435F: mov dword ptr [ebp - 0x50], ecx */
L_14084362:
    /* cmp MEM32(ebx + 0x14), 0 */ /* 0x14084362: cmp dword ptr [ebx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140843A1; /* 0x14084366: jbe 0x140843a1 */
L_14084368:
    eax = MEM32(ebx + 0x18); /* 0x14084368: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(eax + ecx + 0xC); /* 0x1408436B: mov esi, dword ptr [eax + ecx + 0xc] */
    /* test esi, esi */ /* 0x1408436F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140843A1; /* 0x14084371: je 0x140843a1 */
L_14084373:
    eax = MEM32(esi); /* 0x14084373: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x14084375: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x14084376: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084379: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140843A1; /* 0x1408437B: je 0x140843a1 */
L_1408437D:
    eax = ebp + (-0x40); /* 0x1408437D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x14084380: push eax */
    eax = MEM32(esi); /* 0x14084381: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x14084383: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x14084384: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14084387: push eax */
    eax = MEM32(esi); /* 0x14084388: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1408438A: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1408438B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x48)); /* 0x1408438E: mov ecx, dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x14084391: push eax */
    RECOMP_CALL(sub_141E6AB0); /* 0x14084392: call 0x141e6ab0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084397: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x14084399: js 0x140844f7 */
L_1408439F:
    goto L_140843A8; /* 0x1408439F: jmp 0x140843a8 */
L_140843A1:
    MEM32(ebp + (-0x40)) = 0; /* 0x140843A1: mov dword ptr [ebp - 0x40], 0 */
L_140843A8:
    ecx = MEM32(ebp + (-0x44)); /* 0x140843A8: mov ecx, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x140843AB: push 0 */
    PUSH32(esp, 4); /* 0x140843AD: push 4 */
    eax = ebp + (-0x40); /* 0x140843AF: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x140843B2: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x140843B3: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140843B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x140843BA: js 0x140844f7 */
L_140843C0:
    eax = MEM32(ebp + (-0x58)); /* 0x140843C0: mov eax, dword ptr [ebp - 0x58] */
    ecx = MEM32(ebp + (-0x50)); /* 0x140843C3: mov ecx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140843C6: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x140843C7: add ecx, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x58)) = eax; /* 0x140843CA: mov dword ptr [ebp - 0x58], eax */
    MEM32(ebp + (-0x50)) = ecx; /* 0x140843CD: mov dword ptr [ebp - 0x50], ecx */
    /* cmp eax, edi */ /* 0x140843D0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084362; /* 0x140843D2: jb 0x14084362 */
L_140843D4:
    goto L_140844E5; /* 0x140843D4: jmp 0x140844e5 */
L_140843D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140843D9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4C)), edi */ /* 0x140843DB: cmp dword ptr [ebp - 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140844E5; /* 0x140843DE: jbe 0x140844e5 */
L_140843E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x140843E4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_140843E6:
    /* cmp MEM32(ebx + 0x14), 0 */ /* 0x140843E6: cmp dword ptr [ebx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1408441E; /* 0x140843EA: jbe 0x1408441e */
L_140843EC:
    eax = MEM32(ebx + 0x18); /* 0x140843EC: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM32(esi + eax + 0xC), 0 */ /* 0x140843EF: cmp dword ptr [esi + eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1408441E; /* 0x140843F4: je 0x1408441e */
L_140843F6:
    eax = MEM32(esi + eax + 0xC); /* 0x140843F6: mov eax, dword ptr [esi + eax + 0xc] */
    ecx = MEM32(eax); /* 0x140843FA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x140843FC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x140843FD: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084400: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408441E; /* 0x14084402: je 0x1408441e */
L_14084404:
    eax = MEM32(ebx + 0x18); /* 0x14084404: mov eax, dword ptr [ebx + 0x18] */
    edx = MEM32(ebp + (-0x48)); /* 0x14084407: mov edx, dword ptr [ebp - 0x48] */
    ecx = MEM32(ebp + (-0x44)); /* 0x1408440A: mov ecx, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x1408440D: push 0 */
    eax = esi + eax + 0x8; /* 0x1408440F: lea eax, [esi + eax + 8] */
    PUSH32(esp, eax); /* 0x14084413: push eax */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x14084414: push dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_14083720); /* 0x14084417: call 0x14083720 */
    RECOMP_FLAGS_IN();
    goto L_1408446D; /* 0x1408441C: jmp 0x1408446d */
L_1408441E:
    ecx = MEM32(ebp + (-0x44)); /* 0x1408441E: mov ecx, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x14084421: push 0 */
    PUSH32(esp, 0x24u); /* 0x14084423: push 0x24 */
    eax = ebp + (-0x3C); /* 0x14084425: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x14084428: push eax */
    MEM32(ebp + (-0x3C)) = 0; /* 0x14084429: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x14084430: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x14084437: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x1408443E: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x14084445: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x1408444C: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x14084453: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x1408445A: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x14084461: mov dword ptr [ebp - 0x1c], 0 */
    RECOMP_CALL(sub_141E6897); /* 0x14084468: call 0x141e6897 */
    RECOMP_FLAGS_IN();
L_1408446D:
    /* test eax, eax */ /* 0x1408446D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x1408446F: js 0x140844f7 */
L_14084475:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14084475: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x48u; /* 0x14084476: add esi, 0x48 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0x4C)) */ /* 0x14084479: cmp edi, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140843E6; /* 0x1408447C: jb 0x140843e6 */
L_14084482:
    goto L_140844E5; /* 0x14084482: jmp 0x140844e5 */
L_14084484:
    /* cmp MEM32(esi), 2 */ /* 0x14084484: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140844E5; /* 0x14084487: jne 0x140844e5 */
L_14084489:
    /* cmp MEM32(esi + 0x1C), 1 */ /* 0x14084489: cmp dword ptr [esi + 0x1c], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140844E5; /* 0x1408448D: jne 0x140844e5 */
L_1408448F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1408448F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4C)), edi */ /* 0x14084491: cmp dword ptr [ebp - 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140844E5; /* 0x14084494: jbe 0x140844e5 */
L_14084496:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14084496: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = ecx; /* 0x14084498: mov dword ptr [ebp - 0x40], ecx */
    goto L_140844A0; /* 0x1408449B: jmp 0x140844a0 */
L_140844A0:
    eax = MEM32(ebx + 0x18); /* 0x140844A0: mov eax, dword ptr [ebx + 0x18] */
    /* test eax, eax */ /* 0x140844A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140844AD; /* 0x140844A5: je 0x140844ad */
L_140844A7:
    eax = MEM32(ecx + eax + 0x44); /* 0x140844A7: mov eax, dword ptr [ecx + eax + 0x44] */
    goto L_140844AF; /* 0x140844AB: jmp 0x140844af */
L_140844AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140844AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140844AF:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x140844AF: push dword ptr [ebp - 0x48] */
    esi = MEM32(ebp + (-0x54)); /* 0x140844B2: mov esi, dword ptr [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x140844B5: push eax */
    eax = ebp + (-0x5C); /* 0x140844B6: lea eax, [ebp - 0x5c] */
    RECOMP_CALL(sub_14083680); /* 0x140844B9: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140844BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x140844C0: js 0x140844f7 */
L_140844C2:
    ecx = MEM32(ebp + (-0x44)); /* 0x140844C2: mov ecx, dword ptr [ebp - 0x44] */
    PUSH32(esp, 0); /* 0x140844C5: push 0 */
    PUSH32(esp, 4); /* 0x140844C7: push 4 */
    eax = ebp + (-0x5C); /* 0x140844C9: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x140844CC: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x140844CD: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140844D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140844F7; /* 0x140844D4: js 0x140844f7 */
L_140844D6:
    ecx = MEM32(ebp + (-0x40)); /* 0x140844D6: mov ecx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140844D9: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x140844DA: add ecx, 0x48 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = ecx; /* 0x140844DD: mov dword ptr [ebp - 0x40], ecx */
    /* cmp edi, MEM32(ebp + (-0x4C)) */ /* 0x140844E0: cmp edi, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140844A0; /* 0x140844E3: jb 0x140844a0 */
L_140844E5:
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x140844E5: push dword ptr [ebp - 0x48] */
    eax = ebx + 0x30; /* 0x140844E8: lea eax, [ebx + 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x140844EB: push dword ptr [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x140844EE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x140844EF: push dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_140846C0); /* 0x140844F2: call 0x140846c0 */
    RECOMP_FLAGS_IN();
L_140844F7:
    ecx = MEM32(ebp + (-0x8)); /* 0x140844F7: mov ecx, dword ptr [ebp - 8] */
    edi = POP32_VAL(esp); /* 0x140844FA: pop edi */
    esi = POP32_VAL(esp); /* 0x140844FB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140844FC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140844FE: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x140844FF: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14084504: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14084506: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x14084507: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14084510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14084510u);

L_14084510:
    edi = edi; /* 0x14084510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14084512: push ebp */
    ebp = esp; /* 0x14084513: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x14084515: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x14084518: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1408451D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1408451F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x14084522: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x14084525: push ebx */
    PUSH32(esp, esi); /* 0x14084526: push esi */
    PUSH32(esp, edi); /* 0x14084527: push edi */
    edi = MEM32(ebp + 0xC); /* 0x14084528: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1408452B: mov dword ptr [ebp - 0x3c], eax */
    eax = ebp + (-0x10); /* 0x1408452E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x14084531: push eax */
    ebx = edx; /* 0x14084532: mov ebx, edx */
    PUSH32(esp, edi); /* 0x14084534: push edi */
    PUSH32(esp, MEM32(ebx + 0x28)); /* 0x14084535: push dword ptr [ebx + 0x28] */
    esi = ecx; /* 0x14084538: mov esi, ecx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1408453A: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1408453D: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x28)) = edi; /* 0x14084540: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x8)) = 0; /* 0x14084543: mov dword ptr [ebp - 8], 0 */
    RECOMP_CALL(sub_140838C0); /* 0x1408454A: call 0x140838c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408454F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140846A6; /* 0x14084551: js 0x140846a6 */
L_14084557:
    PUSH32(esp, edi); /* 0x14084557: push edi */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x14084558: push dword ptr [ebx + 0x20] */
    eax = ebp + (-0x14); /* 0x1408455B: lea eax, [ebp - 0x14] */
    RECOMP_CALL(sub_14083680); /* 0x1408455E: call 0x14083680 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084563: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140846A6; /* 0x14084565: js 0x140846a6 */
L_1408456B:
    esi = MEM32(ebx + 0x14); /* 0x1408456B: mov esi, dword ptr [ebx + 0x14] */
    MEM32(ebp + (-0xC)) = 0; /* 0x1408456E: mov dword ptr [ebp - 0xc], 0 */
    /* test esi, esi */ /* 0x14084575: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084682; /* 0x14084577: je 0x14084682 */
L_1408457D:
    eax = MEM32(ebx + 0x18); /* 0x1408457D: mov eax, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x14084580: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x38); /* 0x14084583: lea eax, [ebp - 0x38] */
    MEM32(ebp + (-0x2C)) = 0; /* 0x14084586: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x1408458D: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x14084594: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x1408459B: mov dword ptr [ebp - 0x30], 0 */
    RECOMP_CALL(sub_14085BC0); /* 0x140845A2: call 0x14085bc0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140845A7: mov edi, eax */
    /* test edi, edi */ /* 0x140845A9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140845CD; /* 0x140845AB: jne 0x140845cd */
L_140845AD:
    esi = ebp + (-0x38); /* 0x140845AD: lea esi, [ebp - 0x38] */
    RECOMP_CALL(sub_14085B90); /* 0x140845B0: call 0x14085b90 */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x140845B5: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x140845BA: pop edi */
    esi = POP32_VAL(esp); /* 0x140845BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x140845BC: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x140845BD: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140845C0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x140845C2: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140845C7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140845C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140845CA: ret 8 */
L_140845CD:
    /* cmp MEM32(ebx + 0x14), 0 */ /* 0x140845CD: cmp dword ptr [ebx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = 0; /* 0x140845D1: mov dword ptr [ebp - 0x24], 0 */
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084615; /* 0x140845D8: jbe 0x14084615 */
L_140845DA:
    ebx = MEM32(ebp + (-0x18)); /* 0x140845DA: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x40u; /* 0x140845DD: add ebx, 0x40 */
    _flag_k = FK_ADD;
L_140845E0:
    eax = MEM32(ebx + (-0x4)); /* 0x140845E0: mov eax, dword ptr [ebx - 4] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x140845E3: push dword ptr [ebp - 0x28] */
    esi = MEM32(ebp + (-0x1C)); /* 0x140845E6: mov esi, dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x140845E9: push dword ptr [eax + 0xc] */
    eax = edi; /* 0x140845EC: mov eax, edi */
    RECOMP_CALL(sub_14083680); /* 0x140845EE: call 0x14083680 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140845F3: mov esi, eax */
    /* test esi, esi */ /* 0x140845F5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084658; /* 0x140845F7: js 0x14084658 */
L_140845F9:
    eax = MEM32(ebx); /* 0x140845F9: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x20)); /* 0x140845FB: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(edi + 0x4) = eax; /* 0x140845FE: mov dword ptr [edi + 4], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x14084601: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x14084604: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x48u; /* 0x14084605: add ebx, 0x48 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x14084608: add edi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x1408460B: mov dword ptr [ebp - 0x24], eax */
    /* cmp eax, MEM32(ecx + 0x14) */ /* 0x1408460E: cmp eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140845E0; /* 0x14084611: jb 0x140845e0 */
L_14084613:
    ebx = ecx; /* 0x14084613: mov ebx, ecx */
L_14084615:
    esi = MEM32(ebp + (-0x38)); /* 0x14084615: mov esi, dword ptr [ebp - 0x38] */
    edi = MEM32(ebp + (-0x28)); /* 0x14084618: mov edi, dword ptr [ebp - 0x28] */
    eax = ebp + (-0xC); /* 0x1408461B: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1408461E: push eax */
    eax = MEM32(ebp + (-0x30)); /* 0x1408461F: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14084622: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14084624: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14084626: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14084628: push eax */
    PUSH32(esp, esi); /* 0x14084629: push esi */
    ecx = edi; /* 0x1408462A: mov ecx, edi */
    RECOMP_CALL(sub_141E6897); /* 0x1408462C: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x14084631: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, esi); /* 0x14084634: push esi */
    /* test eax, eax */ /* 0x14084635: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14084679; /* 0x14084637: jns 0x14084679 */
L_14084639:
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14084639: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1408463F: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14084642: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x14084645: pop edi */
    esi = POP32_VAL(esp); /* 0x14084646: pop esi */
    ebx = POP32_VAL(esp); /* 0x14084647: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x14084648: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1408464B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x1408464D: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14084652: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14084654: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14084655: ret 8 */
L_14084658:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x14084658: push dword ptr [ebp - 0x38] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x1408465B: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14084661: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x14084664: mov eax, esi */
    edi = POP32_VAL(esp); /* 0x14084666: pop edi */
    esi = POP32_VAL(esp); /* 0x14084667: pop esi */
    ebx = POP32_VAL(esp); /* 0x14084668: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x14084669: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1408466C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141EC0B6); /* 0x1408466E: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14084673: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14084675: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14084676: ret 8 */
L_14084679:
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14084679: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408467F: add esp, 4 */
    _flag_k = FK_ADD;
L_14084682:
    esi = MEM32(ebp + (-0x3C)); /* 0x14084682: mov esi, dword ptr [ebp - 0x3c] */
    PUSH32(esp, 0); /* 0x14084685: push 0 */
    PUSH32(esp, 0x10u); /* 0x14084687: push 0x10 */
    eax = ebp + (-0x14); /* 0x14084689: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1408468C: push eax */
    ecx = esi; /* 0x1408468D: mov ecx, esi */
    RECOMP_CALL(sub_141E6897); /* 0x1408468F: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084694: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140846A6; /* 0x14084696: js 0x140846a6 */
L_14084698:
    PUSH32(esp, edi); /* 0x14084698: push edi */
    PUSH32(esp, esi); /* 0x14084699: push esi */
    eax = ebx + 0x30; /* 0x1408469A: lea eax, [ebx + 0x30] */
    PUSH32(esp, eax); /* 0x1408469D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1408469E: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_140846C0); /* 0x140846A1: call 0x140846c0 */
    RECOMP_FLAGS_IN();
L_140846A6:
    ecx = MEM32(ebp + (-0x4)); /* 0x140846A6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x140846A9: pop edi */
    esi = POP32_VAL(esp); /* 0x140846AA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140846AB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140846AD: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x140846AE: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x140846B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140846B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140846B6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140846C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140846C0u);

L_140846C0:
    edi = edi; /* 0x140846C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140846C2: push ebp */
    ebp = esp; /* 0x140846C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x140846C5: sub esp, 0x24 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x140846C8: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x140846CB: push ebx */
    PUSH32(esp, esi); /* 0x140846CC: push esi */
    esi = MEM32(ebp + 0x14); /* 0x140846CD: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x140846D0: push edi */
    edi = MEM32(ebp + 0xC); /* 0x140846D1: mov edi, dword ptr [ebp + 0xc] */
    edi = MEM32(edi + 0x8); /* 0x140846D4: mov edi, dword ptr [edi + 8] */
    PUSH32(esp, 0); /* 0x140846D7: push 0 */
    PUSH32(esp, edi); /* 0x140846D9: push edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x140846DA: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_141E6A94); /* 0x140846DD: call 0x141e6a94 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140846E2: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140846E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084802; /* 0x140846E6: js 0x14084802 */
L_140846EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140846EC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ebx; /* 0x140846EE: mov dword ptr [ebp - 8], ebx */
    /* test edi, edi */ /* 0x140846F1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084802; /* 0x140846F3: je 0x14084802 */
L_140846F9:
    esp = esp; /* 0x140846F9: lea esp, [esp] */
L_14084700:
    eax = MEM32(ebp + 0xC); /* 0x14084700: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x14084703: mov eax, dword ptr [eax] */
    edi = MEM32(eax + ebx * 4); /* 0x14084705: mov edi, dword ptr [eax + ebx*4] */
    ecx = MEM32(ebp + 0x8); /* 0x14084708: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x1408470B: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1408470E: push eax */
    PUSH32(esp, esi); /* 0x1408470F: push esi */
    PUSH32(esp, MEM32(edi + 0x28)); /* 0x14084710: push dword ptr [edi + 0x28] */
    MEM32(ebp + (-0xC)) = edi; /* 0x14084713: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_140838C0); /* 0x14084716: call 0x140838c0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1408471B: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1408471D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084802; /* 0x1408471F: js 0x14084802 */
L_14084725:
    PUSH32(esp, esi); /* 0x14084725: push esi */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x14084726: push dword ptr [edi + 0x20] */
    esi = MEM32(ebp + 0x8); /* 0x14084729: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x20); /* 0x1408472C: lea eax, [ebp - 0x20] */
    RECOMP_CALL(sub_14083680); /* 0x1408472F: call 0x14083680 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14084734: mov ecx, eax */
    /* test ecx, ecx */ /* 0x14084736: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084802; /* 0x14084738: js 0x14084802 */
L_1408473E:
    esi = MEM32(ebp + 0x10); /* 0x1408473E: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x14084741: push 0 */
    PUSH32(esp, 8); /* 0x14084743: push 8 */
    eax = ebp + (-0x20); /* 0x14084745: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x14084748: push eax */
    ecx = esi; /* 0x14084749: mov ecx, esi */
    RECOMP_CALL(sub_141E6897); /* 0x1408474B: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14084750: mov ecx, eax */
    /* test ecx, ecx */ /* 0x14084752: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084802; /* 0x14084754: js 0x14084802 */
L_1408475A:
    eax = MEM32(ebp + 0xC); /* 0x1408475A: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x1408475D: mov eax, dword ptr [eax] */
    eax = MEM32(eax + ebx * 4); /* 0x1408475F: mov eax, dword ptr [eax + ebx*4] */
    eax = MEM32(eax + 0x28); /* 0x14084762: mov eax, dword ptr [eax + 0x28] */
    eax = MEM32(eax); /* 0x14084765: mov eax, dword ptr [eax] */
    /* cmp eax, 1 */ /* 0x14084767: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140847CF; /* 0x1408476A: je 0x140847cf */
L_1408476C:
    /* cmp eax, 3 */ /* 0x1408476C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140847CF; /* 0x1408476F: je 0x140847cf */
L_14084771:
    eax = MEM32(edi + 0x28); /* 0x14084771: mov eax, dword ptr [edi + 0x28] */
    eax = MEM32(eax + 0x4); /* 0x14084774: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14084777: mov dword ptr [ebp - 4], eax */
    /* cmp eax, 1 */ /* 0x1408477A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14084787; /* 0x1408477D: jae 0x14084787 */
L_1408477F:
    eax = 1; /* 0x1408477F: mov eax, 1 */
    MEM32(ebp + (-0x4)) = eax; /* 0x14084784: mov dword ptr [ebp - 4], eax */
L_14084787:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14084787: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x14084789: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140847F2; /* 0x1408478B: je 0x140847f2 */
L_1408478D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1408478D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* nop */ /* 0x1408478F: nop  */
L_14084790:
    eax = MEM32(ebp + (-0xC)); /* 0x14084790: mov eax, dword ptr [ebp - 0xc] */
    eax = MEM32(eax + 0x18); /* 0x14084793: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x14084796: push dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x8); /* 0x14084799: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + ebx + 0x44)); /* 0x1408479C: push dword ptr [eax + ebx + 0x44] */
    eax = ebp + (-0x10); /* 0x140847A0: lea eax, [ebp - 0x10] */
    RECOMP_CALL(sub_14083680); /* 0x140847A3: call 0x14083680 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140847A8: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140847AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084802; /* 0x140847AC: js 0x14084802 */
L_140847AE:
    ecx = MEM32(ebp + 0x10); /* 0x140847AE: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x140847B1: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x140847B3: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_141E6A94); /* 0x140847B6: call 0x141e6a94 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140847BB: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140847BD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084802; /* 0x140847BF: js 0x14084802 */
L_140847C1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140847C1: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x48u; /* 0x140847C2: add ebx, 0x48 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x140847C5: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084790; /* 0x140847C8: jb 0x14084790 */
L_140847CA:
    ebx = MEM32(ebp + (-0x8)); /* 0x140847CA: mov ebx, dword ptr [ebp - 8] */
    goto L_140847F2; /* 0x140847CD: jmp 0x140847f2 */
L_140847CF:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x140847CF: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x140847D2: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_14083EE0); /* 0x140847D5: call 0x14083ee0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140847DA: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140847DC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084802; /* 0x140847DE: js 0x14084802 */
L_140847E0:
    PUSH32(esp, 0); /* 0x140847E0: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x140847E2: push dword ptr [ebp - 0x14] */
    ecx = esi; /* 0x140847E5: mov ecx, esi */
    RECOMP_CALL(sub_141E6A94); /* 0x140847E7: call 0x141e6a94 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x140847EC: mov ecx, eax */
    /* test ecx, ecx */ /* 0x140847EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084802; /* 0x140847F0: js 0x14084802 */
L_140847F2:
    esi = MEM32(ebp + 0x14); /* 0x140847F2: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x140847F5: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ebx; /* 0x140847F6: mov dword ptr [ebp - 8], ebx */
    /* cmp ebx, MEM32(ebp + (-0x18)) */ /* 0x140847F9: cmp ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084700; /* 0x140847FC: jb 0x14084700 */
L_14084802:
    edi = POP32_VAL(esp); /* 0x14084802: pop edi */
    esi = POP32_VAL(esp); /* 0x14084803: pop esi */
    eax = ecx; /* 0x14084804: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x14084806: pop ebx */
    esp = ebp; /* 0x14084807: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14084809: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1408480A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_14084820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14084820u);

L_14084820:
    edi = edi; /* 0x14084820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14084822: push ebp */
    ebp = esp; /* 0x14084823: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x14084825: sub esp, 0x134 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x1408482B: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x14084830: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x14084832: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x14084835: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x14084836: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x14084838: push esi */
    PUSH32(esp, edi); /* 0x14084839: push edi */
    edi = ecx; /* 0x1408483A: mov edi, ecx */
    esi = edx; /* 0x1408483C: mov esi, edx */
    ecx = ebp + (-0x130); /* 0x1408483E: lea ecx, [ebp - 0x130] */
    MEM32(ebp + (-0x6C)) = edi; /* 0x14084844: mov dword ptr [ebp - 0x6c], edi */
    MEM32(ebp + (-0xCC)) = esi; /* 0x14084847: mov dword ptr [ebp - 0xcc], esi */
    MEM32(ebp + (-0xE4)) = 0; /* 0x1408484D: mov dword ptr [ebp - 0xe4], 0 */
    MEM32(ebp + (-0xF0)) = 0; /* 0x14084857: mov dword ptr [ebp - 0xf0], 0 */
    MEM32(ebp + (-0xEC)) = 0; /* 0x14084861: mov dword ptr [ebp - 0xec], 0 */
    MEM32(ebp + (-0xE8)) = 0; /* 0x1408486B: mov dword ptr [ebp - 0xe8], 0 */
    MEM32(ebp + (-0x98)) = 0; /* 0x14084875: mov dword ptr [ebp - 0x98], 0 */
    MEM32(ebp + (-0xA4)) = 0; /* 0x1408487F: mov dword ptr [ebp - 0xa4], 0 */
    MEM32(ebp + (-0xA0)) = 0; /* 0x14084889: mov dword ptr [ebp - 0xa0], 0 */
    MEM32(ebp + (-0x9C)) = ebx; /* 0x14084893: mov dword ptr [ebp - 0x9c], ebx */
    MEM32(ebp + (-0xF4)) = ebx; /* 0x14084899: mov dword ptr [ebp - 0xf4], ebx */
    MEM32(ebp + (-0x100)) = ebx; /* 0x1408489F: mov dword ptr [ebp - 0x100], ebx */
    MEM32(ebp + (-0xFC)) = ebx; /* 0x140848A5: mov dword ptr [ebp - 0xfc], ebx */
    MEM32(ebp + (-0xF8)) = ebx; /* 0x140848AB: mov dword ptr [ebp - 0xf8], ebx */
    MEM32(ebp + (-0x70)) = ebx; /* 0x140848B1: mov dword ptr [ebp - 0x70], ebx */
    MEM32(ebp + (-0x80)) = ebx; /* 0x140848B4: mov dword ptr [ebp - 0x80], ebx */
    MEM8(ebp + (-0x130)) = (uint8_t)(LO8(ebx)); /* 0x140848B7: mov byte ptr [ebp - 0x130], bl */
    RECOMP_CALL(sub_141E9B96); /* 0x140848BD: call 0x141e9b96 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x114); /* 0x140848C2: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_141E67FE); /* 0x140848C8: call 0x141e67fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x94); /* 0x140848CD: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_141E67FE); /* 0x140848D3: call 0x141e67fe */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0xB8); /* 0x140848D8: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_141E67FE); /* 0x140848DE: call 0x141e67fe */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x140848E3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14084972; /* 0x140848E5: jne 0x14084972 */
L_140848EB:
    edi = 0x80070057u; /* 0x140848EB: mov edi, 0x80070057 */
L_140848F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140848F0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140848F2:
    ecx = MEM32(ebp + (-0x70)); /* 0x140848F2: mov ecx, dword ptr [ebp - 0x70] */
    /* test ecx, ecx */ /* 0x140848F5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084906; /* 0x140848F7: je 0x14084906 */
L_140848F9:
    eax = MEM32(ecx); /* 0x140848F9: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x140848FB: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140848FC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_140848FF:
    MEM32(ebp + (-0x70)) = 0; /* 0x140848FF: mov dword ptr [ebp - 0x70], 0 */
L_14084906:
    esi = MEM32(0x1400115C); /* 0x14084906: mov esi, dword ptr [0x1400115c] */
    PUSH32(esp, ebx); /* 0x1408490C: push ebx */
    RECOMP_ICALL(esi); /* 0x1408490D: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408490F: add esp, 4 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0xB8); /* 0x14084912: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_141E6816); /* 0x14084918: call 0x141e6816 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x94); /* 0x1408491D: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_141E6816); /* 0x14084923: call 0x141e6816 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x114); /* 0x14084928: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_141E6816); /* 0x1408492E: call 0x141e6816 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x130); /* 0x14084933: lea ecx, [ebp - 0x130] */
    RECOMP_CALL(sub_141E9BAE); /* 0x14084939: call 0x141e9bae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x100))); /* 0x1408493E: push dword ptr [ebp - 0x100] */
    RECOMP_ICALL(esi); /* 0x14084944: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14084946: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0xA4))); /* 0x14084949: push dword ptr [ebp - 0xa4] */
    RECOMP_ICALL(esi); /* 0x1408494F: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14084951: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + (-0xF0))); /* 0x14084954: push dword ptr [ebp - 0xf0] */
    RECOMP_ICALL(esi); /* 0x1408495A: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1408495C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408495F: add esp, 4 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x14084962: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x14084964: pop edi */
    esi = POP32_VAL(esp); /* 0x14084965: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x14084966: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14084968: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x14084969: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1408496E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14084970: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14084971: ret  */
L_14084972:
    PUSH32(esp, edi); /* 0x14084972: push edi */
    RECOMP_CALL(sub_14085700); /* 0x14084973: call 0x14085700 */
    RECOMP_FLAGS_IN();
    esi = edi + 0x10; /* 0x14084978: lea esi, [edi + 0x10] */
    PUSH32(esp, esi); /* 0x1408497B: push esi */
    RECOMP_CALL(sub_14085700); /* 0x1408497C: call 0x14085700 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x8); /* 0x14084981: mov eax, dword ptr [edi + 8] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x14084984: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1408499D; /* 0x14084987: jb 0x1408499d */
L_14084989:
    eax = eax + eax + 0x1; /* 0x14084989: lea eax, [eax + eax + 1] */
    PUSH32(esp, edi); /* 0x1408498D: push edi */
    RECOMP_CALL(sub_14085C00); /* 0x1408498E: call 0x14085c00 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084993: mov edi, eax */
    /* test edi, edi */ /* 0x14084995: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084997: js 0x140848f0 */
L_1408499D:
    eax = MEM32(esi + 0x8); /* 0x1408499D: mov eax, dword ptr [esi + 8] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x140849A0: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140849B9; /* 0x140849A3: jb 0x140849b9 */
L_140849A5:
    eax = eax + eax + 0x1; /* 0x140849A5: lea eax, [eax + eax + 1] */
    PUSH32(esp, esi); /* 0x140849A9: push esi */
    RECOMP_CALL(sub_14085C00); /* 0x140849AA: call 0x14085c00 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140849AF: mov edi, eax */
    /* test edi, edi */ /* 0x140849B1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x140849B3: js 0x140848f0 */
L_140849B9:
    PUSH32(esp, 0x60u); /* 0x140849B9: push 0x60 */
    eax = ebp + (-0x68); /* 0x140849BB: lea eax, [ebp - 0x68] */
    PUSH32(esp, 0); /* 0x140849BE: push 0 */
    PUSH32(esp, eax); /* 0x140849C0: push eax */
    RECOMP_CALL(sub_141EC9B0); /* 0x140849C1: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x6C)); /* 0x140849C6: mov esi, dword ptr [ebp - 0x6c] */
    eax = ebp + (-0x68); /* 0x140849C9: lea eax, [ebp - 0x68] */
    MEM32(esi + 0xBC4) = eax; /* 0x140849CC: mov dword ptr [esi + 0xbc4], eax */
    SET_LO8(eax, MEM8(esi + 0xC30)); /* 0x140849D2: mov al, byte ptr [esi + 0xc30] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) & 1); /* 0x140849D8: and al, 1 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x140849DA: movzx eax, al */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140849DD: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140849E0: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140849E2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    eax = eax & 0x14u; /* 0x140849E4: and eax, 0x14 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x4Cu; /* 0x140849E7: add eax, 0x4c */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x140849EA: push 0 */
    ecx = ebp + (-0x94); /* 0x140849EC: lea ecx, [ebp - 0x94] */
    MEM32(ebp + (-0xD8)) = eax; /* 0x140849F2: mov dword ptr [ebp - 0xd8], eax */
    MEM32(ebp + (-0xE0)) = ebx; /* 0x140849F8: mov dword ptr [ebp - 0xe0], ebx */
    RECOMP_CALL(sub_141E6844); /* 0x140849FE: call 0x141e6844 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x14084A03: push 0 */
    PUSH32(esp, 4); /* 0x14084A05: push 4 */
    eax = ebp + (-0xE0); /* 0x14084A07: lea eax, [ebp - 0xe0] */
    PUSH32(esp, eax); /* 0x14084A0D: push eax */
    ecx = ebp + (-0x94); /* 0x14084A0E: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_141E6897); /* 0x14084A14: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084A19: mov edi, eax */
    /* test edi, edi */ /* 0x14084A1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084A1D: js 0x140848f0 */
L_14084A23:
    edx = MEM32(esi + 0xC2C); /* 0x14084A23: mov edx, dword ptr [esi + 0xc2c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14084A29: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14084A2B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x14084A2D: lea ecx, [ecx] */
L_14084A30:
    /* cmp MEM32(eax + 0x1402D3C0), edx */ /* 0x14084A30: cmp dword ptr [eax + 0x1402d3c0], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x1402D3C0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14084A4B; /* 0x14084A36: je 0x14084a4b */
L_14084A38:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x14084A38: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14084A3B: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, 0x24u */ /* 0x14084A3C: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084A30; /* 0x14084A3F: jb 0x14084a30 */
L_14084A41:
    edi = 0x80004005u; /* 0x14084A41: mov edi, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_140848F0; /* 0x14084A46: jmp 0x140848f0 */
L_14084A4B:
    eax = ecx + ecx * 2; /* 0x14084A4B: lea eax, [ecx + ecx*2] */
    eax = MEM32(eax * 4 + 0x1402D3C4); /* 0x14084A4E: mov eax, dword ptr [eax*4 + 0x1402d3c4] */
    edx = esi; /* 0x14084A55: mov edx, esi */
    MEM32(ebp + (-0x68)) = eax; /* 0x14084A57: mov dword ptr [ebp - 0x68], eax */
    eax = MEM32(edx + 0xBF8); /* 0x14084A5A: mov eax, dword ptr [edx + 0xbf8] */
    MEM32(ebp + (-0x64)) = eax; /* 0x14084A60: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(edx + 0xC08); /* 0x14084A63: mov eax, dword ptr [edx + 0xc08] */
    MEM32(ebp + (-0x58)) = eax; /* 0x14084A69: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(edx + 0xBCC); /* 0x14084A6C: mov eax, dword ptr [edx + 0xbcc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14084A72: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4C)) = eax; /* 0x14084A74: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(edx + 0xC18); /* 0x14084A77: mov eax, dword ptr [edx + 0xc18] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x14084A7D: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x7C)) = ecx; /* 0x14084A80: mov dword ptr [ebp - 0x7c], ecx */
    /* cmp MEM32(edx + 0xBD8), ecx */ /* 0x14084A83: cmp dword ptr [edx + 0xbd8], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0xBD8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084BBA; /* 0x14084A89: jbe 0x14084bba */
L_14084A8F:
    /* nop */ /* 0x14084A8F: nop  */
L_14084A90:
    eax = MEM32(edx + 0xBD0); /* 0x14084A90: mov eax, dword ptr [edx + 0xbd0] */
    edx = MEM32(eax + ecx * 4); /* 0x14084A96: mov edx, dword ptr [eax + ecx*4] */
    ecx = MEM32(edx + 0x28); /* 0x14084A99: mov ecx, dword ptr [edx + 0x28] */
    esi = MEM32(ecx + 0x4); /* 0x14084A9C: mov esi, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x78)) = edx; /* 0x14084A9F: mov dword ptr [ebp - 0x78], edx */
    MEM32(ebp + (-0x74)) = ecx; /* 0x14084AA2: mov dword ptr [ebp - 0x74], ecx */
    /* cmp esi, 1 */ /* 0x14084AA5: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14084AAF; /* 0x14084AA8: jae 0x14084aaf */
L_14084AAA:
    esi = 1; /* 0x14084AAA: mov esi, 1 */
L_14084AAF:
    eax = MEM32(ecx); /* 0x14084AAF: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14084AB1: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 3 */ /* 0x14084AB2: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14084A41; /* 0x14084AB5: ja 0x14084a41 */
L_14084AB7:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x14085160)); goto _ljump; }
L_14084ABE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) + 1; /* 0x14084ABE: inc dword ptr [ebp - 0x60] */
    _flag_k = FK_INC;
    /* cmp MEM32(edx + 0x2C), 0 */ /* 0x14084AC1: cmp dword ptr [edx + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14084AD4; /* 0x14084AC5: je 0x14084ad4 */
L_14084AC7:
    eax = MEM32(edx + 0x2C); /* 0x14084AC7: mov eax, dword ptr [edx + 0x2c] */
    /* test MEM8(eax + 0xC), 1 */ /* 0x14084ACA: test byte ptr [eax + 0xc], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14084B9E; /* 0x14084ACE: jne 0x14084b9e */
L_14084AD4:
    /* cmp MEM8(ecx + 0x18), 0 */ /* 0x14084AD4: cmp byte ptr [ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14084B9E; /* 0x14084AD8: je 0x14084b9e */
L_14084ADE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + esi; /* 0x14084ADE: add dword ptr [ebp - 0xc], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084AE1: jmp 0x14084b9e */
L_14084AE6:
    ebx = ebp + (-0x78); /* 0x14084AE6: lea ebx, [ebp - 0x78] */
    eax = ebp + (-0x100); /* 0x14084AE9: lea eax, [ebp - 0x100] */
    RECOMP_CALL(sub_14085A80); /* 0x14084AEF: call 0x14085a80 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084AF4: mov edi, eax */
    /* test edi, edi */ /* 0x14084AF6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084AF8: js 0x140848f0 */
L_14084AFE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x14084AFE: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + esi; /* 0x14084B01: add dword ptr [ebp - 0x10], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B04: jmp 0x14084b9e */
L_14084B09:
    ebx = ebp + (-0x78); /* 0x14084B09: lea ebx, [ebp - 0x78] */
    eax = ebp + (-0xF0); /* 0x14084B0C: lea eax, [ebp - 0xf0] */
    RECOMP_CALL(sub_14085A80); /* 0x14084B12: call 0x14085a80 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084B17: mov edi, eax */
    /* test edi, edi */ /* 0x14084B19: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084B1B: js 0x140848f0 */
L_14084B21:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) + 1; /* 0x14084B21: inc dword ptr [ebp - 0x5c] */
    _flag_k = FK_INC;
    edi = MEM32(ebp + (-0x74)); /* 0x14084B24: mov edi, dword ptr [ebp - 0x74] */
    eax = MEM32(edi + 0x1C); /* 0x14084B27: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14084B2A: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x13u */ /* 0x14084B2B: cmp eax, 0x13 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14084B5C; /* 0x14084B2E: ja 0x14084b5c */
L_14084B30:
    eax = (uint32_t)MEM8(eax + 0x1408518C); /* 0x14084B30: movzx eax, byte ptr [eax + 0x1408518c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x14085170)); goto _ljump; }
L_14084B3E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) + esi; /* 0x14084B3E: add dword ptr [ebp - 0x38], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B41: jmp 0x14084b9e */
L_14084B43:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) + esi; /* 0x14084B43: add dword ptr [ebp - 0x3c], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B46: jmp 0x14084b9e */
L_14084B48:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) + esi; /* 0x14084B48: add dword ptr [ebp - 0x34], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B4B: jmp 0x14084b9e */
L_14084B4D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) + esi; /* 0x14084B4D: add dword ptr [ebp - 0x44], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B50: jmp 0x14084b9e */
L_14084B52:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + esi; /* 0x14084B52: add dword ptr [ebp - 0x2c], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B55: jmp 0x14084b9e */
L_14084B57:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + esi; /* 0x14084B57: add dword ptr [ebp - 0x28], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B5A: jmp 0x14084b9e */
L_14084B5C:
    eax = edi; /* 0x14084B5C: mov eax, edi */
    RECOMP_CALL(sub_14086CC0); /* 0x14084B5E: call 0x14086cc0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084B63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084B6C; /* 0x14084B65: je 0x14084b6c */
L_14084B67:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + esi; /* 0x14084B67: add dword ptr [ebp - 0x30], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B6A: jmp 0x14084b9e */
L_14084B6C:
    eax = edi; /* 0x14084B6C: mov eax, edi */
    RECOMP_CALL(sub_14086BD0); /* 0x14084B6E: call 0x14086bd0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084B73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084B7C; /* 0x14084B75: je 0x14084b7c */
L_14084B77:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + esi; /* 0x14084B77: add dword ptr [ebp - 0x24], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B7A: jmp 0x14084b9e */
L_14084B7C:
    eax = edi; /* 0x14084B7C: mov eax, edi */
    RECOMP_CALL(sub_14086300); /* 0x14084B7E: call 0x14086300 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084B83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084B8C; /* 0x14084B85: je 0x14084b8c */
L_14084B87:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) + esi; /* 0x14084B87: add dword ptr [ebp - 0x40], esi */
    _flag_k = FK_ADD;
    goto L_14084B9E; /* 0x14084B8A: jmp 0x14084b9e */
L_14084B8C:
    eax = edi; /* 0x14084B8C: mov eax, edi */
    RECOMP_CALL(sub_14086360); /* 0x14084B8E: call 0x14086360 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084B93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084A41; /* 0x14084B95: je 0x14084a41 */
L_14084B9B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + esi; /* 0x14084B9B: add dword ptr [ebp - 0x18], esi */
    _flag_k = FK_ADD;
L_14084B9E:
    ecx = MEM32(ebp + (-0x7C)); /* 0x14084B9E: mov ecx, dword ptr [ebp - 0x7c] */
    edx = MEM32(ebp + (-0x6C)); /* 0x14084BA1: mov edx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14084BA4: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x7C)) = ecx; /* 0x14084BA5: mov dword ptr [ebp - 0x7c], ecx */
    /* cmp ecx, MEM32(edx + 0xBD8) */ /* 0x14084BA8: cmp ecx, dword ptr [edx + 0xbd8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0xBD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084A90; /* 0x14084BAE: jb 0x14084a90 */
L_14084BB4:
    ebx = MEM32(ebp + (-0x9C)); /* 0x14084BB4: mov ebx, dword ptr [ebp - 0x9c] */
L_14084BBA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14084BBA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0xBE8), esi */ /* 0x14084BBC: cmp dword ptr [edx + 0xbe8], esi */
    _flag_a = (uint32_t)(MEM32(edx + 0xBE8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084C2C; /* 0x14084BC2: jbe 0x14084c2c */
L_14084BC4:
    eax = MEM32(edx + 0xBE0); /* 0x14084BC4: mov eax, dword ptr [edx + 0xbe0] */
    eax = MEM32(eax + esi * 4); /* 0x14084BCA: mov eax, dword ptr [eax + esi*4] */
    MEM32(ebp + (-0x74)) = eax; /* 0x14084BCD: mov dword ptr [ebp - 0x74], eax */
    eax = MEM32(eax + 0x28); /* 0x14084BD0: mov eax, dword ptr [eax + 0x28] */
    eax = MEM32(eax); /* 0x14084BD3: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14084BD5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_14084BE2; /* 0x14084BD6: je 0x14084be2 */
L_14084BD8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14084BD8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_14084BFC; /* 0x14084BD9: je 0x14084bfc */
L_14084BDB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14084BDB: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_14084A41; /* 0x14084BDC: jne 0x14084a41 */
L_14084BE2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x54)) = MEM32(ebp + (-0x54)) + 1; /* 0x14084BE2: inc dword ptr [ebp - 0x54] */
    _flag_k = FK_INC;
L_14084BE5:
    ebx = MEM32(ebp + (-0x6C)); /* 0x14084BE5: mov ebx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14084BE8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0xBE8) */ /* 0x14084BE9: cmp esi, dword ptr [ebx + 0xbe8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0xBE8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14084C2F; /* 0x14084BEF: jae 0x14084c2f */
L_14084BF1:
    ebx = MEM32(ebp + (-0x9C)); /* 0x14084BF1: mov ebx, dword ptr [ebp - 0x9c] */
    edx = MEM32(ebp + (-0x6C)); /* 0x14084BF7: mov edx, dword ptr [ebp - 0x6c] */
    RECOMP_BACKEDGE();
    goto L_14084BC4; /* 0x14084BFA: jmp 0x14084bc4 */
L_14084BFC:
    eax = ebx + 0x1; /* 0x14084BFC: lea eax, [ebx + 1] */
    edi = ebp + (-0xA4); /* 0x14084BFF: lea edi, [ebp - 0xa4] */
    RECOMP_CALL(sub_14086040); /* 0x14084C05: call 0x14086040 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14084C0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14084C27; /* 0x14084C0C: js 0x14084c27 */
L_14084C0E:
    eax = MEM32(ebp + (-0x9C)); /* 0x14084C0E: mov eax, dword ptr [ebp - 0x9c] */
    ecx = MEM32(ebp + (-0x74)); /* 0x14084C14: mov ecx, dword ptr [ebp - 0x74] */
    edx = MEM32(ebp + (-0xA4)); /* 0x14084C17: mov edx, dword ptr [ebp - 0xa4] */
    MEM32(edx + eax * 4) = ecx; /* 0x14084C1D: mov dword ptr [edx + eax*4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x14084C20: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x9C)) = eax; /* 0x14084C21: mov dword ptr [ebp - 0x9c], eax */
L_14084C27:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x50)) = MEM32(ebp + (-0x50)) + 1; /* 0x14084C27: inc dword ptr [ebp - 0x50] */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_14084BE5; /* 0x14084C2A: jmp 0x14084be5 */
L_14084C2C:
    ebx = MEM32(ebp + (-0x6C)); /* 0x14084C2C: mov ebx, dword ptr [ebp - 0x6c] */
L_14084C2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14084C2F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x64)), esi */ /* 0x14084C31: cmp dword ptr [ebp - 0x64], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084C6F; /* 0x14084C34: jbe 0x14084c6f */
L_14084C36:
    goto L_14084C40; /* 0x14084C36: jmp 0x14084c40 */
L_14084C40:
    edi = MEM32(ebx + 0xBF0); /* 0x14084C40: mov edi, dword ptr [ebx + 0xbf0] */
    edi = MEM32(edi + esi * 4); /* 0x14084C46: mov edi, dword ptr [edi + esi*4] */
    PUSH32(esp, 0); /* 0x14084C49: push 0 */
    eax = ebp + (-0x94); /* 0x14084C4B: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084C51: push eax */
    edx = ebp + (-0xB8); /* 0x14084C52: lea edx, [ebp - 0xb8] */
    ecx = ebx; /* 0x14084C58: mov ecx, ebx */
    RECOMP_CALL(sub_14083F50); /* 0x14084C5A: call 0x14083f50 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084C5F: mov edi, eax */
    /* test edi, edi */ /* 0x14084C61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084C63: js 0x140848f0 */
L_14084C69:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14084C69: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x64)) */ /* 0x14084C6A: cmp esi, dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x64)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084C40; /* 0x14084C6D: jb 0x14084c40 */
L_14084C6F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14084C6F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x5C)), esi */ /* 0x14084C71: cmp dword ptr [ebp - 0x5c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084CB0; /* 0x14084C74: jbe 0x14084cb0 */
L_14084C76:
    goto L_14084C80; /* 0x14084C76: jmp 0x14084c80 */
L_14084C80:
    ecx = MEM32(ebp + (-0xF0)); /* 0x14084C80: mov ecx, dword ptr [ebp - 0xf0] */
    ecx = MEM32(ecx + esi * 4); /* 0x14084C86: mov ecx, dword ptr [ecx + esi*4] */
    PUSH32(esp, 0); /* 0x14084C89: push 0 */
    eax = ebp + (-0x94); /* 0x14084C8B: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084C91: push eax */
    eax = ebp + (-0xB8); /* 0x14084C92: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x14084C98: push eax */
    edx = ebx; /* 0x14084C99: mov edx, ebx */
    RECOMP_CALL(sub_14084110); /* 0x14084C9B: call 0x14084110 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084CA0: mov edi, eax */
    /* test edi, edi */ /* 0x14084CA2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084CA4: js 0x140848f0 */
L_14084CAA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14084CAA: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x5C)) */ /* 0x14084CAB: cmp esi, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084C80; /* 0x14084CAE: jb 0x14084c80 */
L_14084CB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14084CB0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x14084CB2: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084CEE; /* 0x14084CB5: jbe 0x14084cee */
L_14084CB7:
    goto L_14084CC0; /* 0x14084CB7: jmp 0x14084cc0 */
L_14084CC0:
    edx = MEM32(ebp + (-0x100)); /* 0x14084CC0: mov edx, dword ptr [ebp - 0x100] */
    edx = MEM32(edx + esi * 4); /* 0x14084CC6: mov edx, dword ptr [edx + esi*4] */
    eax = ebp + (-0x94); /* 0x14084CC9: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084CCF: push eax */
    eax = ebp + (-0xB8); /* 0x14084CD0: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x14084CD6: push eax */
    ecx = ebx; /* 0x14084CD7: mov ecx, ebx */
    RECOMP_CALL(sub_14084510); /* 0x14084CD9: call 0x14084510 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084CDE: mov edi, eax */
    /* test edi, edi */ /* 0x14084CE0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084CE2: js 0x140848f0 */
L_14084CE8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14084CE8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x14)) */ /* 0x14084CE9: cmp esi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084CC0; /* 0x14084CEC: jb 0x14084cc0 */
L_14084CEE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14084CEE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x58)), esi */ /* 0x14084CF0: cmp dword ptr [ebp - 0x58], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084D24; /* 0x14084CF3: jbe 0x14084d24 */
L_14084CF5:
    edi = MEM32(ebx + 0xC00); /* 0x14084CF5: mov edi, dword ptr [ebx + 0xc00] */
    edi = MEM32(edi + esi * 4); /* 0x14084CFB: mov edi, dword ptr [edi + esi*4] */
    PUSH32(esp, 1); /* 0x14084CFE: push 1 */
    eax = ebp + (-0x94); /* 0x14084D00: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084D06: push eax */
    edx = ebp + (-0xB8); /* 0x14084D07: lea edx, [ebp - 0xb8] */
    ecx = ebx; /* 0x14084D0D: mov ecx, ebx */
    RECOMP_CALL(sub_14083F50); /* 0x14084D0F: call 0x14083f50 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084D14: mov edi, eax */
    /* test edi, edi */ /* 0x14084D16: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084D18: js 0x140848f0 */
L_14084D1E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14084D1E: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x58)) */ /* 0x14084D1F: cmp esi, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x58)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084CF5; /* 0x14084D22: jb 0x14084cf5 */
L_14084D24:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14084D24: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x50)), esi */ /* 0x14084D26: cmp dword ptr [ebp - 0x50], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084D60; /* 0x14084D29: jbe 0x14084d60 */
L_14084D2B:
    goto L_14084D30; /* 0x14084D2B: jmp 0x14084d30 */
L_14084D30:
    PUSH32(esp, 1); /* 0x14084D30: push 1 */
    eax = ebp + (-0x94); /* 0x14084D32: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084D38: push eax */
    eax = ebp + (-0xB8); /* 0x14084D39: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x14084D3F: push eax */
    eax = MEM32(ebp + (-0xA4)); /* 0x14084D40: mov eax, dword ptr [ebp - 0xa4] */
    ecx = MEM32(eax + esi * 4); /* 0x14084D46: mov ecx, dword ptr [eax + esi*4] */
    edx = ebx; /* 0x14084D49: mov edx, ebx */
    RECOMP_CALL(sub_14084110); /* 0x14084D4B: call 0x14084110 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084D50: mov edi, eax */
    /* test edi, edi */ /* 0x14084D52: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084D54: js 0x140848f0 */
L_14084D5A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14084D5A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x50)) */ /* 0x14084D5B: cmp esi, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084D30; /* 0x14084D5E: jb 0x14084d30 */
L_14084D60:
    esi = MEM32(ebp + (-0x6C)); /* 0x14084D60: mov esi, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14084D63: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x74)) = ecx; /* 0x14084D65: mov dword ptr [ebp - 0x74], ecx */
    /* cmp MEM32(esi + 0xC18), ecx */ /* 0x14084D68: cmp dword ptr [esi + 0xc18], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084FD5; /* 0x14084D6E: jbe 0x14084fd5 */
L_14084D74:
    goto L_14084D80; /* 0x14084D74: jmp 0x14084d80 */
L_14084D80:
    /* test MEM8(esi + 0xC30), 1 */ /* 0x14084D80: test byte ptr [esi + 0xc30], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC30)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(esi + 0xC10); /* 0x14084D87: mov eax, dword ptr [esi + 0xc10] */
    ebx = MEM32(eax + ecx * 4); /* 0x14084D8D: mov ebx, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0xDC)) = ebx; /* 0x14084D90: mov dword ptr [ebp - 0xdc], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14084E01; /* 0x14084D96: je 0x14084e01 */
L_14084D98:
    eax = ebp + (-0x94); /* 0x14084D98: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084D9E: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x14084D9F: push dword ptr [ebx] */
    eax = ebp + (-0x11C); /* 0x14084DA1: lea eax, [ebp - 0x11c] */
    RECOMP_CALL(sub_14083680); /* 0x14084DA7: call 0x14083680 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084DAC: mov edi, eax */
    /* test edi, edi */ /* 0x14084DAE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084DB0: js 0x140848f0 */
L_14084DB6:
    eax = MEM32(ebx + 0xC); /* 0x14084DB6: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0); /* 0x14084DB9: push 0 */
    MEM32(ebp + (-0x118)) = eax; /* 0x14084DBB: mov dword ptr [ebp - 0x118], eax */
    PUSH32(esp, 8); /* 0x14084DC1: push 8 */
    eax = ebp + (-0x11C); /* 0x14084DC3: lea eax, [ebp - 0x11c] */
    PUSH32(esp, eax); /* 0x14084DC9: push eax */
    ecx = ebp + (-0xB8); /* 0x14084DCA: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_141E6897); /* 0x14084DD0: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084DD5: mov edi, eax */
    /* test edi, edi */ /* 0x14084DD7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084DD9: js 0x140848f0 */
L_14084DDF:
    eax = ebp + (-0x94); /* 0x14084DDF: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084DE5: push eax */
    eax = ebp + (-0xB8); /* 0x14084DE6: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x14084DEC: push eax */
    eax = ebx + 0x14; /* 0x14084DED: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x14084DF0: push eax */
    PUSH32(esp, esi); /* 0x14084DF1: push esi */
    RECOMP_CALL(sub_140846C0); /* 0x14084DF2: call 0x140846c0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084DF7: mov edi, eax */
    /* test edi, edi */ /* 0x14084DF9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084DFB: js 0x140848f0 */
L_14084E01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14084E01: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x78)) = ecx; /* 0x14084E03: mov dword ptr [ebp - 0x78], ecx */
    /* cmp MEM32(ebx + 0xC), ecx */ /* 0x14084E06: cmp dword ptr [ebx + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084FC2; /* 0x14084E09: jbe 0x14084fc2 */
L_14084E0F:
    /* nop */ /* 0x14084E0F: nop  */
L_14084E10:
    eax = MEM32(ebx + 0x4); /* 0x14084E10: mov eax, dword ptr [ebx + 4] */
    ebx = MEM32(eax + ecx * 4); /* 0x14084E13: mov ebx, dword ptr [eax + ecx*4] */
    eax = ebp + (-0x94); /* 0x14084E16: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084E1C: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x14084E1D: push dword ptr [ebx] */
    eax = ebp + (-0xC8); /* 0x14084E1F: lea eax, [ebp - 0xc8] */
    MEM32(ebp + (-0xD0)) = ebx; /* 0x14084E25: mov dword ptr [ebp - 0xd0], ebx */
    RECOMP_CALL(sub_14083680); /* 0x14084E2B: call 0x14083680 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084E30: mov edi, eax */
    /* test edi, edi */ /* 0x14084E32: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084E34: js 0x140848f0 */
L_14084E3A:
    eax = MEM32(ebx + 0xC); /* 0x14084E3A: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0); /* 0x14084E3D: push 0 */
    MEM32(ebp + (-0xC4)) = eax; /* 0x14084E3F: mov dword ptr [ebp - 0xc4], eax */
    PUSH32(esp, 8); /* 0x14084E45: push 8 */
    eax = ebp + (-0xC8); /* 0x14084E47: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x14084E4D: push eax */
    ecx = ebp + (-0xB8); /* 0x14084E4E: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_141E6897); /* 0x14084E54: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084E59: mov edi, eax */
    /* test edi, edi */ /* 0x14084E5B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084E5D: js 0x140848f0 */
L_14084E63:
    eax = ebp + (-0x94); /* 0x14084E63: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084E69: push eax */
    eax = ebp + (-0xB8); /* 0x14084E6A: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x14084E70: push eax */
    eax = ebx + 0x14; /* 0x14084E71: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x14084E74: push eax */
    PUSH32(esp, esi); /* 0x14084E75: push esi */
    RECOMP_CALL(sub_140846C0); /* 0x14084E76: call 0x140846c0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084E7B: mov edi, eax */
    /* test edi, edi */ /* 0x14084E7D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084E7F: js 0x140848f0 */
L_14084E85:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14084E85: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x7C)) = ecx; /* 0x14084E87: mov dword ptr [ebp - 0x7c], ecx */
    /* cmp MEM32(ebp + (-0xC4)), ecx */ /* 0x14084E8A: cmp dword ptr [ebp - 0xc4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084FAC; /* 0x14084E90: jbe 0x14084fac */
L_14084E96:
    goto L_14084EA0; /* 0x14084E96: jmp 0x14084ea0 */
L_14084EA0:
    eax = MEM32(ebx + 0x4); /* 0x14084EA0: mov eax, dword ptr [ebx + 4] */
    ebx = MEM32(eax + ecx * 4); /* 0x14084EA3: mov ebx, dword ptr [eax + ecx*4] */
    eax = ebp + (-0x94); /* 0x14084EA6: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084EAC: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x14084EAD: push dword ptr [ebx] */
    eax = ebp + (-0xC0); /* 0x14084EAF: lea eax, [ebp - 0xc0] */
    MEM32(ebp + (-0xD4)) = ebx; /* 0x14084EB5: mov dword ptr [ebp - 0xd4], ebx */
    RECOMP_CALL(sub_14083680); /* 0x14084EBB: call 0x14083680 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084EC0: mov edi, eax */
    /* test edi, edi */ /* 0x14084EC2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084EC4: js 0x140848f0 */
L_14084ECA:
    eax = MEM32(ebx + 0xC); /* 0x14084ECA: mov eax, dword ptr [ebx + 0xc] */
    PUSH32(esp, 0); /* 0x14084ECD: push 0 */
    MEM32(ebp + (-0xBC)) = eax; /* 0x14084ECF: mov dword ptr [ebp - 0xbc], eax */
    PUSH32(esp, 8); /* 0x14084ED5: push 8 */
    eax = ebp + (-0xC0); /* 0x14084ED7: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x14084EDD: push eax */
    ecx = ebp + (-0xB8); /* 0x14084EDE: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_141E6897); /* 0x14084EE4: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084EE9: mov edi, eax */
    /* test edi, edi */ /* 0x14084EEB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084EED: js 0x140848f0 */
L_14084EF3:
    eax = ebp + (-0x94); /* 0x14084EF3: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x14084EF9: push eax */
    eax = ebp + (-0xB8); /* 0x14084EFA: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x14084F00: push eax */
    eax = ebx + 0x14; /* 0x14084F01: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x14084F04: push eax */
    PUSH32(esp, esi); /* 0x14084F05: push esi */
    RECOMP_CALL(sub_140846C0); /* 0x14084F06: call 0x140846c0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084F0B: mov edi, eax */
    /* test edi, edi */ /* 0x14084F0D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084F0F: js 0x140848f0 */
L_14084F15:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14084F15: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xBC)), esi */ /* 0x14084F17: cmp dword ptr [ebp - 0xbc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14084F90; /* 0x14084F1D: jbe 0x14084f90 */
L_14084F1F:
    /* nop */ /* 0x14084F1F: nop  */
L_14084F20:
    eax = MEM32(ebx + 0x4); /* 0x14084F20: mov eax, dword ptr [ebx + 4] */
    ebx = MEM32(eax + esi * 4); /* 0x14084F23: mov ebx, dword ptr [eax + esi*4] */
    eax = MEM32(ebx + 0x10); /* 0x14084F26: mov eax, dword ptr [ebx + 0x10] */
    /* cmp eax, 7 */ /* 0x14084F29: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14084F33; /* 0x14084F2C: je 0x14084f33 */
L_14084F2E:
    /* cmp eax, 8 */ /* 0x14084F2E: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14084F63; /* 0x14084F31: jne 0x14084f63 */
L_14084F33:
    eax = MEM32(ebx + 0x4); /* 0x14084F33: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, 0x3Bu */ /* 0x14084F36: cmp eax, 0x3b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_14084A41; /* 0x14084F39: jae 0x14084a41 */
L_14084F3F:
    eax = eax + eax * 4; /* 0x14084F3F: lea eax, [eax + eax*4] */
    eax = MEM32(eax * 8 + 0x1402FA84); /* 0x14084F42: mov eax, dword ptr [eax*8 + 0x1402fa84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14084F49: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0xFu */ /* 0x14084F4A: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14084F63; /* 0x14084F4D: ja 0x14084f63 */
L_14084F4F:
    eax = (uint32_t)MEM8(eax + 0x140851A8); /* 0x14084F4F: movzx eax, byte ptr [eax + 0x140851a8] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140851A0)); goto _ljump; }
L_14084F5D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 1; /* 0x14084F5D: inc dword ptr [ebp - 0x20] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 1; /* 0x14084F60: inc dword ptr [ebp - 0x24] */
    _flag_k = FK_INC;
L_14084F63:
    edx = MEM32(ebp + (-0x6C)); /* 0x14084F63: mov edx, dword ptr [ebp - 0x6c] */
    edi = ebp + (-0x94); /* 0x14084F66: lea edi, [ebp - 0x94] */
    ecx = ebp + (-0xB8); /* 0x14084F6C: lea ecx, [ebp - 0xb8] */
    RECOMP_CALL(sub_14083CE0); /* 0x14084F72: call 0x14083ce0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084F77: mov edi, eax */
    /* test edi, edi */ /* 0x14084F79: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084F7B: js 0x140848f0 */
L_14084F81:
    ebx = MEM32(ebp + (-0xD4)); /* 0x14084F81: mov ebx, dword ptr [ebp - 0xd4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14084F87: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0xBC)) */ /* 0x14084F88: cmp esi, dword ptr [ebp - 0xbc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xBC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084F20; /* 0x14084F8E: jb 0x14084f20 */
L_14084F90:
    ecx = MEM32(ebp + (-0x7C)); /* 0x14084F90: mov ecx, dword ptr [ebp - 0x7c] */
    esi = MEM32(ebp + (-0x6C)); /* 0x14084F93: mov esi, dword ptr [ebp - 0x6c] */
    ebx = MEM32(ebp + (-0xD0)); /* 0x14084F96: mov ebx, dword ptr [ebp - 0xd0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14084F9C: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x7C)) = ecx; /* 0x14084F9D: mov dword ptr [ebp - 0x7c], ecx */
    /* cmp ecx, MEM32(ebp + (-0xC4)) */ /* 0x14084FA0: cmp ecx, dword ptr [ebp - 0xc4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084EA0; /* 0x14084FA6: jb 0x14084ea0 */
L_14084FAC:
    ecx = MEM32(ebp + (-0x78)); /* 0x14084FAC: mov ecx, dword ptr [ebp - 0x78] */
    ebx = MEM32(ebp + (-0xDC)); /* 0x14084FAF: mov ebx, dword ptr [ebp - 0xdc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14084FB5: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x78)) = ecx; /* 0x14084FB6: mov dword ptr [ebp - 0x78], ecx */
    /* cmp ecx, MEM32(ebx + 0xC) */ /* 0x14084FB9: cmp ecx, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084E10; /* 0x14084FBC: jb 0x14084e10 */
L_14084FC2:
    ecx = MEM32(ebp + (-0x74)); /* 0x14084FC2: mov ecx, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14084FC5: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x74)) = ecx; /* 0x14084FC6: mov dword ptr [ebp - 0x74], ecx */
    /* cmp ecx, MEM32(esi + 0xC18) */ /* 0x14084FC9: cmp ecx, dword ptr [esi + 0xc18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xC18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14084D80; /* 0x14084FCF: jb 0x14084d80 */
L_14084FD5:
    ecx = ebp + (-0x94); /* 0x14084FD5: lea ecx, [ebp - 0x94] */
    RECOMP_CALL(sub_141E6A0A); /* 0x14084FDB: call 0x141e6a0a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x14084FE0: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xD8))); /* 0x14084FE2: push dword ptr [ebp - 0xd8] */
    MEM32(ebp + (-0x48)) = eax; /* 0x14084FE8: mov dword ptr [ebp - 0x48], eax */
    eax = ebp + (-0x68); /* 0x14084FEB: lea eax, [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x14084FEE: push eax */
    ecx = ebp + (-0x114); /* 0x14084FEF: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_141E6897); /* 0x14084FF5: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14084FFA: mov edi, eax */
    /* test edi, edi */ /* 0x14084FFC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14084FFE: js 0x140848f0 */
L_14085004:
    eax = ebp + (-0x94); /* 0x14085004: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x1408500A: push eax */
    ecx = ebp + (-0x114); /* 0x1408500B: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_141E685A); /* 0x14085011: call 0x141e685a */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14085016: mov edi, eax */
    /* test edi, edi */ /* 0x14085018: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x1408501A: js 0x140848f0 */
L_14085020:
    eax = ebp + (-0xB8); /* 0x14085020: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x14085026: push eax */
    ecx = ebp + (-0x114); /* 0x14085027: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_141E685A); /* 0x1408502D: call 0x141e685a */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14085032: mov edi, eax */
    /* test edi, edi */ /* 0x14085034: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14085036: js 0x140848f0 */
L_1408503C:
    ecx = ebp + (-0x114); /* 0x1408503C: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_141E6A0A); /* 0x14085042: call 0x141e6a0a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14085047: mov esi, eax */
    eax = MEM32(ebp + (-0x6C)); /* 0x14085049: mov eax, dword ptr [ebp - 0x6c] */
    /* test MEM8(eax + 0xC30), 4 */ /* 0x1408504C: test byte ptr [eax + 0xc30], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085119; /* 0x14085053: je 0x14085119 */
L_14085059:
    /* cmp esi, 0x02000000u */ /* 0x14085059: cmp esi, 0x2000000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x02000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14085076; /* 0x1408505F: jb 0x14085076 */
L_14085061:
    PUSH32(esp, 0x140387A8u); /* 0x14085061: push 0x140387a8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x14085066: add eax, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x14085069: push 0 */
    PUSH32(esp, eax); /* 0x1408506B: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1408506C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_141C5C90); /* 0x1408506E: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14085073: add esp, 0xc */
    _flag_k = FK_ADD;
L_14085076:
    PUSH32(esp, esi); /* 0x14085076: push esi */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14085077: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1408507D: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408507F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x14085082: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085090; /* 0x14085084: jne 0x14085090 */
L_14085086:
    edi = 0x8007000Eu; /* 0x14085086: mov edi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_140848F2; /* 0x1408508B: jmp 0x140848f2 */
L_14085090:
    PUSH32(esp, esi); /* 0x14085090: push esi */
    PUSH32(esp, ebx); /* 0x14085091: push ebx */
    ecx = ebp + (-0x114); /* 0x14085092: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_141E69B7); /* 0x14085098: call 0x141e69b7 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1408509D: mov edi, eax */
    /* test edi, edi */ /* 0x1408509F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F2; /* 0x140850A1: js 0x140848f2 */
L_140850A7:
    PUSH32(esp, ebx); /* 0x140850A7: push ebx */
    PUSH32(esp, esi); /* 0x140850A8: push esi */
    PUSH32(esp, 0x30315846u); /* 0x140850A9: push 0x30315846 */
    ecx = ebp + (-0x130); /* 0x140850AE: lea ecx, [ebp - 0x130] */
    RECOMP_CALL(sub_141E9C14); /* 0x140850B4: call 0x141e9c14 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140850B9: mov edi, eax */
    /* test edi, edi */ /* 0x140850BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F2; /* 0x140850BD: js 0x140848f2 */
L_140850C3:
    PUSH32(esp, 0x141EA0CBu); /* 0x140850C3: push 0x141ea0cb */
    eax = ebp + (-0x80); /* 0x140850C8: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x140850CB: push eax */
    PUSH32(esp, 0); /* 0x140850CC: push 0 */
    ecx = ebp + (-0x130); /* 0x140850CE: lea ecx, [ebp - 0x130] */
    RECOMP_CALL(sub_141E9CE8); /* 0x140850D4: call 0x141e9ce8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140850D9: mov edi, eax */
    /* test edi, edi */ /* 0x140850DB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F2; /* 0x140850DD: js 0x140848f2 */
L_140850E3:
    eax = ebp + (-0x70); /* 0x140850E3: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x140850E6: push eax */
    PUSH32(esp, MEM32(ebp + (-0x80))); /* 0x140850E7: push dword ptr [ebp - 0x80] */
    RECOMP_CALL(sub_141E54BF); /* 0x140850EA: call 0x141e54bf */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x140850EF: mov edi, eax */
    /* test edi, edi */ /* 0x140850F1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F2; /* 0x140850F3: js 0x140848f2 */
L_140850F9:
    PUSH32(esp, 0x141EA0CBu); /* 0x140850F9: push 0x141ea0cb */
    eax = ebp + (-0x80); /* 0x140850FE: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x14085101: push eax */
    eax = MEM32(ebp + (-0x70)); /* 0x14085102: mov eax, dword ptr [ebp - 0x70] */
    ecx = MEM32(eax); /* 0x14085105: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x14085107: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x14085108: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1408510B: push eax */
    ecx = ebp + (-0x130); /* 0x1408510C: lea ecx, [ebp - 0x130] */
    RECOMP_CALL(sub_141E9CE8); /* 0x14085112: call 0x141e9ce8 */
    RECOMP_FLAGS_IN();
    goto L_14085145; /* 0x14085117: jmp 0x14085145 */
L_14085119:
    eax = ebp + (-0x70); /* 0x14085119: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1408511C: push eax */
    PUSH32(esp, esi); /* 0x1408511D: push esi */
    RECOMP_CALL(sub_141E54BF); /* 0x1408511E: call 0x141e54bf */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14085123: mov edi, eax */
    /* test edi, edi */ /* 0x14085125: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F0; /* 0x14085127: js 0x140848f0 */
L_1408512D:
    eax = MEM32(ebp + (-0x70)); /* 0x1408512D: mov eax, dword ptr [ebp - 0x70] */
    ecx = MEM32(eax); /* 0x14085130: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x14085132: push esi */
    PUSH32(esp, eax); /* 0x14085133: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x14085134: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x14085137: push eax */
    ecx = ebp + (-0x114); /* 0x14085138: lea ecx, [ebp - 0x114] */
    RECOMP_CALL(sub_141E69B7); /* 0x1408513E: call 0x141e69b7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x14085143: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_14085145:
    edi = eax; /* 0x14085145: mov edi, eax */
    /* test edi, edi */ /* 0x14085147: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140848F2; /* 0x14085149: js 0x140848f2 */
L_1408514F:
    eax = MEM32(ebp + (-0x70)); /* 0x1408514F: mov eax, dword ptr [ebp - 0x70] */
    ecx = MEM32(ebp + (-0xCC)); /* 0x14085152: mov ecx, dword ptr [ebp - 0xcc] */
    MEM32(ecx) = eax; /* 0x14085158: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_140848FF; /* 0x1408515A: jmp 0x140848ff */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x14084ABEu: goto L_14084ABE;
      case 0x14084AE6u: goto L_14084AE6;
      case 0x14084B09u: goto L_14084B09;
      case 0x14084B3Eu: goto L_14084B3E;
      case 0x14084B43u: goto L_14084B43;
      case 0x14084B48u: goto L_14084B48;
      case 0x14084B4Du: goto L_14084B4D;
      case 0x14084B52u: goto L_14084B52;
      case 0x14084B57u: goto L_14084B57;
      case 0x14084B5Cu: goto L_14084B5C;
      case 0x14084F5Du: goto L_14084F5D;
      case 0x14084F63u: goto L_14084F63;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140851C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140851C0u);

L_140851C0:
    edi = edi; /* 0x140851C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140851C2: push ebp */
    ebp = esp; /* 0x140851C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x140851C5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x140851C8: push edi */
    edi = ecx; /* 0x140851C9: mov edi, ecx */
    edx = MEM32(edi); /* 0x140851CB: mov edx, dword ptr [edi] */
    ecx = MEM32(ebp + 0x8); /* 0x140851CD: mov ecx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ecx) */ /* 0x140851D0: cmp edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14085336; /* 0x140851D2: jne 0x14085336 */
L_140851D8:
    eax = MEM32(edi + 0x4); /* 0x140851D8: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x140851DB: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14085336; /* 0x140851DE: jne 0x14085336 */
L_140851E4:
    eax = edx + (-0x1); /* 0x140851E4: lea eax, [edx - 1] */
    PUSH32(esp, ebx); /* 0x140851E7: push ebx */
    PUSH32(esp, esi); /* 0x140851E8: push esi */
    /* cmp eax, 3 */ /* 0x140851E9: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140852CD; /* 0x140851EC: ja 0x140852cd */
L_140851F2:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x14085340)); goto _ljump; }
L_140851F9:
    eax = MEM32(edi + 0x28); /* 0x140851F9: mov eax, dword ptr [edi + 0x28] */
    MEM32(ebp + (-0x8)) = eax; /* 0x140851FC: mov dword ptr [ebp - 8], eax */
    /* cmp eax, MEM32(ecx + 0x28) */ /* 0x140851FF: cmp eax, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140852CD; /* 0x14085202: jne 0x140852cd */
L_14085208:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x14085208: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1408520A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085328; /* 0x1408520C: je 0x14085328 */
L_14085212:
    edx = MEM32(edi + 0x20); /* 0x14085212: mov edx, dword ptr [edi + 0x20] */
    eax = MEM32(edx + esi * 4); /* 0x14085215: mov eax, dword ptr [edx + esi*4] */
    ebx = MEM32(eax + 0x4); /* 0x14085218: mov ebx, dword ptr [eax + 4] */
    /* test ebx, ebx */ /* 0x1408521B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085224; /* 0x1408521D: jne 0x14085224 */
L_1408521F:
    ebx = 0x14033E93u; /* 0x1408521F: mov ebx, 0x14033e93 */
L_14085224:
    ecx = MEM32(ecx + 0x20); /* 0x14085224: mov ecx, dword ptr [ecx + 0x20] */
    eax = MEM32(ecx + esi * 4); /* 0x14085227: mov eax, dword ptr [ecx + esi*4] */
    eax = MEM32(eax + 0x4); /* 0x1408522A: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1408522D: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x14085230: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408523C; /* 0x14085232: jne 0x1408523c */
L_14085234:
    eax = 0x14033E93u; /* 0x14085234: mov eax, 0x14033e93 */
    MEM32(ebp + (-0x4)) = eax; /* 0x14085239: mov dword ptr [ebp - 4], eax */
L_1408523C:
    eax = MEM32(ecx + esi * 4); /* 0x1408523C: mov eax, dword ptr [ecx + esi*4] */
    ecx = MEM32(edx + esi * 4); /* 0x1408523F: mov ecx, dword ptr [edx + esi*4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x14085242: push dword ptr [eax + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x14085245: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_CALL(sub_140851C0); /* 0x14085248: call 0x140851c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408524D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140852CD; /* 0x1408524F: je 0x140852cd */
L_14085251:
    eax = MEM32(ebp + 0x8); /* 0x14085251: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x20); /* 0x14085254: mov eax, dword ptr [eax + 0x20] */
    ecx = MEM32(eax + esi * 4); /* 0x14085257: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(edi + 0x20); /* 0x1408525A: mov eax, dword ptr [edi + 0x20] */
    edx = MEM32(eax + esi * 4); /* 0x1408525D: mov edx, dword ptr [eax + esi*4] */
    eax = MEM32(edx + 0x8); /* 0x14085260: mov eax, dword ptr [edx + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x14085263: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140852CD; /* 0x14085266: jne 0x140852cd */
L_14085268:
    ecx = MEM32(ecx); /* 0x14085268: mov ecx, dword ptr [ecx] */
    eax = MEM32(edx); /* 0x1408526A: mov eax, dword ptr [edx] */
    esp = esp; /* 0x1408526C: lea esp, [esp] */
L_14085270:
    SET_LO8(edx, MEM8(eax)); /* 0x14085270: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x14085272: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14085290; /* 0x14085274: jne 0x14085290 */
L_14085276:
    /* test LO8(edx), LO8(edx) */ /* 0x14085276: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408528C; /* 0x14085278: je 0x1408528c */
L_1408527A:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1408527A: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1408527D: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14085290; /* 0x14085280: jne 0x14085290 */
L_14085282:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x14085282: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x14085285: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x14085288: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085270; /* 0x1408528A: jne 0x14085270 */
L_1408528C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408528C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14085295; /* 0x1408528E: jmp 0x14085295 */
L_14085290:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14085290: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14085292: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_14085295:
    /* test eax, eax */ /* 0x14085295: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140852CD; /* 0x14085297: jne 0x140852cd */
L_14085299:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x14085299: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x1408529C: push ebx */
    RECOMP_ICALL(MEM32(0x14001130)); /* 0x1408529D: call dword ptr [0x14001130] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140852A3: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140852A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140852CD; /* 0x140852A8: jne 0x140852cd */
L_140852AA:
    ecx = MEM32(ebp + 0x8); /* 0x140852AA: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x140852AD: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x140852AE: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085212; /* 0x140852B1: jb 0x14085212 */
L_140852B7:
    esi = POP32_VAL(esp); /* 0x140852B7: pop esi */
    ebx = POP32_VAL(esp); /* 0x140852B8: pop ebx */
    eax = 1; /* 0x140852B9: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x140852BE: pop edi */
    esp = ebp; /* 0x140852BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140852C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140852C2: ret 4 */
L_140852C5:
    eax = MEM32(edi + 0x1C); /* 0x140852C5: mov eax, dword ptr [edi + 0x1c] */
    /* cmp eax, MEM32(ecx + 0x1C) */ /* 0x140852C8: cmp eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_140852CB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_14085328; /* 0x140852CB: je 0x14085328 */
L_140852CD:
    esi = POP32_VAL(esp); /* 0x140852CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x140852CE: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140852CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140852D1: pop edi */
    esp = ebp; /* 0x140852D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140852D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140852D5: ret 4 */
L_140852D8:
    ecx = MEM32(ecx + 0x1C); /* 0x140852D8: mov ecx, dword ptr [ecx + 0x1c] */
    edx = MEM32(edi + 0x1C); /* 0x140852DB: mov edx, dword ptr [edi + 0x1c] */
    eax = ecx; /* 0x140852DE: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x140852E0: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x700u */ /* 0x140852E2: test eax, 0x700 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140852CD; /* 0x140852E7: jne 0x140852cd */
L_140852E9:
    eax = ecx; /* 0x140852E9: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x140852EB: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x3800u */ /* 0x140852ED: test eax, 0x3800 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3800u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140852CD; /* 0x140852F2: jne 0x140852cd */
L_140852F4:
    eax = ecx; /* 0x140852F4: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x140852F6: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 0xF8u */ /* 0x140852F8: test al, 0xf8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xF8u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140852CD; /* 0x140852FA: jne 0x140852cd */
L_140852FC:
    eax = ecx; /* 0x140852FC: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x140852FE: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 7 */ /* 0x14085300: test al, 7 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140852CD; /* 0x14085302: jne 0x140852cd */
L_14085304:
    eax = ecx; /* 0x14085304: mov eax, ecx */
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x14085306: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x4000u */ /* 0x14085308: test eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140852CD; /* 0x1408530D: jne 0x140852cd */
L_1408530F:
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1408530F: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, 0x8000u */ /* 0x14085311: test ecx, 0x8000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_140852CB; /* 0x14085317: jmp 0x140852cb */
L_14085319:
    PUSH32(esp, MEM32(ecx + 0x44)); /* 0x14085319: push dword ptr [ecx + 0x44] */
    ecx = MEM32(edi + 0x44); /* 0x1408531C: mov ecx, dword ptr [edi + 0x44] */
    RECOMP_CALL(sub_140851C0); /* 0x1408531F: call 0x140851c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14085324: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140852CD; /* 0x14085326: je 0x140852cd */
L_14085328:
    esi = POP32_VAL(esp); /* 0x14085328: pop esi */
    ebx = POP32_VAL(esp); /* 0x14085329: pop ebx */
    eax = 1; /* 0x1408532A: mov eax, 1 */
    edi = POP32_VAL(esp); /* 0x1408532F: pop edi */
    esp = ebp; /* 0x14085330: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085332: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14085333: ret 4 */
L_14085336:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085336: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14085338: pop edi */
    esp = ebp; /* 0x14085339: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1408533B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1408533C: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x140851F9u: goto L_140851F9;
      case 0x140852C5u: goto L_140852C5;
      case 0x140852D8u: goto L_140852D8;
      case 0x14085319u: goto L_14085319;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_14085360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085360u);

L_14085360:
    edi = edi; /* 0x14085360: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085362: push ebp */
    ebp = esp; /* 0x14085363: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4Cu; /* 0x14085365: sub esp, 0xc4c */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x1408536B: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x14085370: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x14085372: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x14085375: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x14085378: push ebx */
    PUSH32(esp, esi); /* 0x14085379: push esi */
    MEM32(ebp + (-0xC48)) = eax; /* 0x1408537A: mov dword ptr [ebp - 0xc48], eax */
    eax = MEM32(ebp + 0x24); /* 0x14085380: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, edi); /* 0x14085383: push edi */
    edi = ebp + (-0xC40); /* 0x14085384: lea edi, [ebp - 0xc40] */
    ebx = ecx; /* 0x1408538A: mov ebx, ecx */
    MEM32(ebp + (-0xC4C)) = eax; /* 0x1408538C: mov dword ptr [ebp - 0xc4c], eax */
    esi = edx; /* 0x14085392: mov esi, edx */
    RECOMP_CALL(sub_1407B450); /* 0x14085394: call 0x1407b450 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14085399: push esi */
    eax = ebp + (-0xC44); /* 0x1408539A: lea eax, [ebp - 0xc44] */
    PUSH32(esp, eax); /* 0x140853A0: push eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x140853A1: push dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x18); /* 0x140853A4: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x140853A7: push dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0xC44)) = 0; /* 0x140853AA: mov dword ptr [ebp - 0xc44], 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x140853B4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x140853B7: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x140853B8: push dword ptr [ebp + 0x10] */
    ebx = edi; /* 0x140853BB: mov ebx, edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140853BD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0xC48))); /* 0x140853C0: push dword ptr [ebp - 0xc48] */
    RECOMP_CALL(sub_1407B650); /* 0x140853C6: call 0x1407b650 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC44)); /* 0x140853CB: mov ecx, dword ptr [ebp - 0xc44] */
    esi = eax; /* 0x140853D1: mov esi, eax */
    /* test esi, esi */ /* 0x140853D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140853E1; /* 0x140853D5: js 0x140853e1 */
L_140853D7:
    edx = MEM32(ebp + (-0xC4C)); /* 0x140853D7: mov edx, dword ptr [ebp - 0xc4c] */
    MEM32(edx) = ecx; /* 0x140853DD: mov dword ptr [edx], ecx */
    goto L_140853EB; /* 0x140853DF: jmp 0x140853eb */
L_140853E1:
    /* test ecx, ecx */ /* 0x140853E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140853EB; /* 0x140853E3: je 0x140853eb */
L_140853E5:
    eax = MEM32(ecx); /* 0x140853E5: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x140853E7: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140853E8: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_140853EB:
    edi = ebp + (-0xC40); /* 0x140853EB: lea edi, [ebp - 0xc40] */
    RECOMP_CALL(sub_1407B5C0); /* 0x140853F1: call 0x1407b5c0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x140853F6: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x140853F9: pop edi */
    eax = esi; /* 0x140853FA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x140853FC: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x140853FD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140853FF: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x14085400: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x14085405: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085407: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x14085408: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_14085410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085410u);

L_14085410:
    edi = edi; /* 0x14085410: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085412: push ebp */
    ebp = esp; /* 0x14085413: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14085415: push esi */
    PUSH32(esp, MEM32(ebx)); /* 0x14085416: push dword ptr [ebx] */
    MEM32(ebx + 0x8) = 0; /* 0x14085418: mov dword ptr [ebx + 8], 0 */
    MEM32(ebx + 0xC) = 0; /* 0x1408541F: mov dword ptr [ebx + 0xc], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085426: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1408542C: mov esi, dword ptr [ebp + 8] */
    MEM32(ebx) = 0; /* 0x1408542F: mov dword ptr [ebx], 0 */
    MEM32(ebx + 0x4) = 0; /* 0x14085435: mov dword ptr [ebx + 4], 0 */
    eax = MEM32(esi + 0x8); /* 0x1408543C: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1408543F: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14085441: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14085443: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14085445: push eax */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14085446: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1408544C: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x1408544F: mov dword ptr [ebx], eax */
    /* test eax, eax */ /* 0x14085451: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408545F; /* 0x14085453: jne 0x1408545f */
L_14085455:
    eax = 0x8007000Eu; /* 0x14085455: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x1408545A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1408545B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1408545C: ret 4 */
L_1408545F:
    eax = MEM32(esi + 0x8); /* 0x1408545F: mov eax, dword ptr [esi + 8] */
    MEM32(ebx + 0x8) = eax; /* 0x14085462: mov dword ptr [ebx + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x14085465: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x14085468: push edi */
    MEM32(ebx + 0x4) = eax; /* 0x14085469: mov dword ptr [ebx + 4], eax */
    eax = MEM32(esi + 0xC); /* 0x1408546C: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1408546F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xC) = eax; /* 0x14085471: mov dword ptr [ebx + 0xc], eax */
    /* cmp MEM32(ebx + 0x8), edi */ /* 0x14085474: cmp dword ptr [ebx + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1408549B; /* 0x14085477: jbe 0x1408549b */
L_14085479:
    esp = esp; /* 0x14085479: lea esp, [esp] */
L_14085480:
    edx = MEM32(esi); /* 0x14085480: mov edx, dword ptr [esi] */
    ecx = MEM32(edx + edi * 8); /* 0x14085482: mov ecx, dword ptr [edx + edi*8] */
    esi = MEM32(ebx); /* 0x14085485: mov esi, dword ptr [ebx] */
    MEM32(esi + edi * 8) = ecx; /* 0x14085487: mov dword ptr [esi + edi*8], ecx */
    ecx = MEM32(edx + edi * 8 + 0x4); /* 0x1408548A: mov ecx, dword ptr [edx + edi*8 + 4] */
    MEM32(esi + edi * 8 + 0x4) = ecx; /* 0x1408548E: mov dword ptr [esi + edi*8 + 4], ecx */
    esi = MEM32(ebp + 0x8); /* 0x14085492: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085495: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0x8) */ /* 0x14085496: cmp edi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085480; /* 0x14085499: jb 0x14085480 */
L_1408549B:
    edi = POP32_VAL(esp); /* 0x1408549B: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408549C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1408549E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1408549F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140854A0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140854B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140854B0u);

L_140854B0:
    edi = edi; /* 0x140854B0: mov edi, edi */
    PUSH32(esp, edi); /* 0x140854B2: push edi */
    edi = eax; /* 0x140854B3: mov edi, eax */
    eax = MEM32(edi + 0x8); /* 0x140854B5: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140854B8: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_14086040); /* 0x140854B9: call 0x14086040 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140854BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140854C6; /* 0x140854C0: jns 0x140854c6 */
L_140854C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140854C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x140854C4: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140854C5: ret  */
L_140854C6:
    ecx = MEM32(edi + 0x8); /* 0x140854C6: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi); /* 0x140854C9: mov eax, dword ptr [edi] */
    eax = eax + ecx * 4; /* 0x140854CB: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x140854CE: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi + 0x8) = ecx; /* 0x140854CF: mov dword ptr [edi + 8], ecx */
    edi = POP32_VAL(esp); /* 0x140854D2: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140854D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085510u);

L_14085510:
    edi = edi; /* 0x14085510: mov edi, edi */
    PUSH32(esp, ebx); /* 0x14085512: push ebx */
    PUSH32(esp, esi); /* 0x14085513: push esi */
    PUSH32(esp, edi); /* 0x14085514: push edi */
    esi = eax; /* 0x14085515: mov esi, eax */
    RECOMP_CALL(sub_14085EA0); /* 0x14085517: call 0x14085ea0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1408551C: push dword ptr [esi] */
    ebx = MEM32(0x1400115C); /* 0x1408551E: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14085524: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14085526: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085528: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x1408552B: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14085531: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14085538: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1408557C; /* 0x1408553B: jbe 0x1408557c */
L_1408553D:
    ecx = ecx; /* 0x1408553D: lea ecx, [ecx] */
L_14085540:
    eax = MEM32(esi); /* 0x14085540: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14085542: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14085545: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085567; /* 0x14085547: je 0x14085567 */
L_14085549:
    ecx = ebx + 0x14; /* 0x14085549: lea ecx, [ebx + 0x14] */
    RECOMP_CALL(sub_14087540); /* 0x1408554C: call 0x14087540 */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x4; /* 0x14085551: lea eax, [ebx + 4] */
    RECOMP_CALL(sub_140873E0); /* 0x14085554: call 0x140873e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14085559: push ebx */
    ebx = MEM32(0x1400115C); /* 0x1408555A: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14085560: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085562: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_1408556D; /* 0x14085565: jmp 0x1408556d */
L_14085567:
    ebx = MEM32(0x1400115C); /* 0x14085567: mov ebx, dword ptr [0x1400115c] */
L_1408556D:
    eax = MEM32(esi); /* 0x1408556D: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x1408556F: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085576: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14085577: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085540; /* 0x1408557A: jb 0x14085540 */
L_1408557C:
    PUSH32(esp, MEM32(esi)); /* 0x1408557C: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x1408557E: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x14085580: push 0 */
    MEM32(esi) = 0; /* 0x14085582: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x14085588: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x1408558F: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(ebx); /* 0x14085596: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14085598: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1408559B: pop edi */
    MEM32(esi) = 0; /* 0x1408559C: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x140855A2: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x140855A9: pop esi */
    ebx = POP32_VAL(esp); /* 0x140855AA: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140855AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_140855C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140855C0u);

L_140855C0:
    edi = edi; /* 0x140855C0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x140855C2: push ebx */
    PUSH32(esp, esi); /* 0x140855C3: push esi */
    PUSH32(esp, edi); /* 0x140855C4: push edi */
    esi = eax; /* 0x140855C5: mov esi, eax */
    RECOMP_CALL(sub_14085F00); /* 0x140855C7: call 0x14085f00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x140855CC: push dword ptr [esi] */
    ebx = MEM32(0x1400115C); /* 0x140855CE: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x140855D4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140855D6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140855D8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x140855DB: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x140855E1: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x140855E8: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1408562C; /* 0x140855EB: jbe 0x1408562c */
L_140855ED:
    ecx = ecx; /* 0x140855ED: lea ecx, [ecx] */
L_140855F0:
    eax = MEM32(esi); /* 0x140855F0: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x140855F2: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x140855F5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085617; /* 0x140855F7: je 0x14085617 */
L_140855F9:
    ecx = ebx + 0x14; /* 0x140855F9: lea ecx, [ebx + 0x14] */
    RECOMP_CALL(sub_14087540); /* 0x140855FC: call 0x14087540 */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x4; /* 0x14085601: lea eax, [ebx + 4] */
    RECOMP_CALL(sub_14085510); /* 0x14085604: call 0x14085510 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14085609: push ebx */
    ebx = MEM32(0x1400115C); /* 0x1408560A: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14085610: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085612: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_1408561D; /* 0x14085615: jmp 0x1408561d */
L_14085617:
    ebx = MEM32(0x1400115C); /* 0x14085617: mov ebx, dword ptr [0x1400115c] */
L_1408561D:
    eax = MEM32(esi); /* 0x1408561D: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x1408561F: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085626: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14085627: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140855F0; /* 0x1408562A: jb 0x140855f0 */
L_1408562C:
    PUSH32(esp, MEM32(esi)); /* 0x1408562C: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x1408562E: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x14085630: push 0 */
    MEM32(esi) = 0; /* 0x14085632: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x14085638: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x1408563F: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(ebx); /* 0x14085646: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14085648: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1408564B: pop edi */
    MEM32(esi) = 0; /* 0x1408564C: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14085652: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x14085659: pop esi */
    ebx = POP32_VAL(esp); /* 0x1408565A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408565B: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085670u);

L_14085670:
    edi = edi; /* 0x14085670: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085672: push ebp */
    ebp = esp; /* 0x14085673: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14085675: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14085676: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x14085678: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ecx + 0x4); /* 0x1408567A: div dword ptr [ecx + 4] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ecx); /* 0x1408567D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1408567F: push ebx */
    PUSH32(esp, esi); /* 0x14085680: push esi */
    esi = MEM32(eax + edx * 4); /* 0x14085681: mov esi, dword ptr [eax + edx*4] */
    eax = eax + edx * 4; /* 0x14085684: lea eax, [eax + edx*4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14085687: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x1408568A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140856D0; /* 0x1408568C: je 0x140856d0 */
L_1408568E:
    ebx = MEM32(ebp + 0x8); /* 0x1408568E: mov ebx, dword ptr [ebp + 8] */
L_14085691:
    /* cmp edi, MEM32(esi) */ /* 0x14085691: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140856C9; /* 0x14085693: jne 0x140856c9 */
L_14085695:
    eax = MEM32(esi + 0x4); /* 0x14085695: mov eax, dword ptr [esi + 4] */
    ecx = ebx; /* 0x14085698: mov ecx, ebx */
    ebx = ebx; /* 0x1408569A: lea ebx, [ebx] */
L_140856A0:
    SET_LO8(edx, MEM8(eax)); /* 0x140856A0: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x140856A2: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140856C0; /* 0x140856A4: jne 0x140856c0 */
L_140856A6:
    /* test LO8(edx), LO8(edx) */ /* 0x140856A6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140856BC; /* 0x140856A8: je 0x140856bc */
L_140856AA:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x140856AA: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x140856AD: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140856C0; /* 0x140856B0: jne 0x140856c0 */
L_140856B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x140856B2: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x140856B5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x140856B8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140856A0; /* 0x140856BA: jne 0x140856a0 */
L_140856BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140856BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140856C5; /* 0x140856BE: jmp 0x140856c5 */
L_140856C0:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140856C0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x140856C2: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_140856C5:
    /* test eax, eax */ /* 0x140856C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140856DD; /* 0x140856C7: je 0x140856dd */
L_140856C9:
    esi = MEM32(esi + 0xC); /* 0x140856C9: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x140856CC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085691; /* 0x140856CE: jne 0x14085691 */
L_140856D0:
    esi = POP32_VAL(esp); /* 0x140856D0: pop esi */
    eax = 0x80004005u; /* 0x140856D1: mov eax, 0x80004005 */
    ebx = POP32_VAL(esp); /* 0x140856D6: pop ebx */
    esp = ebp; /* 0x140856D7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140856D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140856DA: ret 0xc */
L_140856DD:
    eax = MEM32(ebp + 0x10); /* 0x140856DD: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x140856E0: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = esi; /* 0x140856E3: mov dword ptr [eax + 4], esi */
    esi = POP32_VAL(esp); /* 0x140856E6: pop esi */
    MEM32(eax) = ecx; /* 0x140856E7: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140856E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140856EB: pop ebx */
    esp = ebp; /* 0x140856EC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140856EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140856EF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14085700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085700u);

L_14085700:
    edi = edi; /* 0x14085700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085702: push ebp */
    ebp = esp; /* 0x14085703: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14085705: push ecx */
    edx = MEM32(0x1400115C); /* 0x14085706: mov edx, dword ptr [0x1400115c] */
    PUSH32(esp, ebx); /* 0x1408570C: push ebx */
    PUSH32(esp, edi); /* 0x1408570D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1408570E: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x14085711: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x14085713: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085752; /* 0x14085716: jbe 0x14085752 */
L_14085718:
    PUSH32(esp, esi); /* 0x14085718: push esi */
    esp = esp; /* 0x14085719: lea esp, [esp] */
L_14085720:
    eax = MEM32(edi); /* 0x14085720: mov eax, dword ptr [edi] */
    eax = MEM32(eax + ebx * 4); /* 0x14085722: mov eax, dword ptr [eax + ebx*4] */
    /* test eax, eax */ /* 0x14085725: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408574B; /* 0x14085727: je 0x1408574b */
L_14085729:
    ecx = edi + 0x8; /* 0x14085729: lea ecx, [edi + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1408572C: mov dword ptr [ebp - 4], ecx */
    edi = ecx; /* 0x1408572F: mov edi, ecx */
L_14085731:
    esi = MEM32(eax + 0xC); /* 0x14085731: mov esi, dword ptr [eax + 0xc] */
    PUSH32(esp, eax); /* 0x14085734: push eax */
    RECOMP_ICALL(edx); /* 0x14085735: call edx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) - 1; /* 0x14085737: dec dword ptr [edi] */
    _flag_k = FK_DEC;
    edx = MEM32(0x1400115C); /* 0x14085739: mov edx, dword ptr [0x1400115c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408573F: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x14085742: mov eax, esi */
    /* test esi, esi */ /* 0x14085744: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085731; /* 0x14085746: jne 0x14085731 */
L_14085748:
    edi = MEM32(ebp + 0x8); /* 0x14085748: mov edi, dword ptr [ebp + 8] */
L_1408574B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1408574B: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x1408574C: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085720; /* 0x1408574F: jb 0x14085720 */
L_14085751:
    esi = POP32_VAL(esp); /* 0x14085751: pop esi */
L_14085752:
    /* cmp MEM8(edi + 0xC), 0 */ /* 0x14085752: cmp byte ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14085769; /* 0x14085756: je 0x14085769 */
L_14085758:
    PUSH32(esp, MEM32(edi)); /* 0x14085758: push dword ptr [edi] */
    RECOMP_ICALL(edx); /* 0x1408575A: call edx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408575C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x1408575F: mov dword ptr [edi], 0 */
    MEM8(edi + 0xC) = (uint8_t)(0); /* 0x14085765: mov byte ptr [edi + 0xc], 0 */
L_14085769:
    MEM32(edi + 0x4) = 0; /* 0x14085769: mov dword ptr [edi + 4], 0 */
    edi = POP32_VAL(esp); /* 0x14085770: pop edi */
    ebx = POP32_VAL(esp); /* 0x14085771: pop ebx */
    esp = ebp; /* 0x14085772: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085774: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14085775: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14085780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085780u);

L_14085780:
    edi = edi; /* 0x14085780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085782: push ebp */
    ebp = esp; /* 0x14085783: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14085785: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x14085786: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14085789: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1408578B: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ecx + 0x4); /* 0x1408578D: div dword ptr [ecx + 4] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ecx); /* 0x14085790: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x14085792: push esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x14085793: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x14085795: add edx, edx */
    _flag_k = FK_ADD;
    esi = MEM32(edx + eax); /* 0x14085797: mov esi, dword ptr [edx + eax] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1408579A: mov dword ptr [ebp - 4], edx */
    /* test esi, esi */ /* 0x1408579D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140857BB; /* 0x1408579F: je 0x140857bb */
L_140857A1:
    /* cmp edi, MEM32(esi) */ /* 0x140857A1: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140857B4; /* 0x140857A3: jne 0x140857b4 */
L_140857A5:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x140857A5: push dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x140857A8: mov ecx, dword ptr [esi + 4] */
    RECOMP_CALL(sub_140851C0); /* 0x140857AB: call 0x140851c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140857B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140857C7; /* 0x140857B2: jne 0x140857c7 */
L_140857B4:
    esi = MEM32(esi + 0xC); /* 0x140857B4: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x140857B7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140857A1; /* 0x140857B9: jne 0x140857a1 */
L_140857BB:
    eax = 0x80004005u; /* 0x140857BB: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x140857C0: pop esi */
    esp = ebp; /* 0x140857C1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140857C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140857C4: ret 0xc */
L_140857C7:
    eax = MEM32(ebp + 0x8); /* 0x140857C7: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x140857CA: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x140857CC: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = esi; /* 0x140857CF: mov dword ptr [ebx + 4], esi */
    MEM32(ebx) = eax; /* 0x140857D2: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140857D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140857D6: pop esi */
    esp = ebp; /* 0x140857D7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140857D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140857DA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_140857F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140857F0u);

L_140857F0:
    edi = edi; /* 0x140857F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140857F2: push ebp */
    ebp = esp; /* 0x140857F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140857F5: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140857F6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x140857F8: mov eax, ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(edi + 0x4); /* 0x140857FA: div dword ptr [edi + 4] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, esi); /* 0x140857FD: push esi */
    PUSH32(esp, 0x10u); /* 0x140857FE: push 0x10 */
    MEM32(ebp + (-0x4)) = edx; /* 0x14085800: mov dword ptr [ebp - 4], edx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14085803: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14085809: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408580B: add esp, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1408580E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408581E; /* 0x14085810: jne 0x1408581e */
L_14085812:
    eax = 0x8007000Eu; /* 0x14085812: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x14085817: pop esi */
    esp = ebp; /* 0x14085818: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1408581A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1408581B: ret 8 */
L_1408581E:
    eax = MEM32(edi); /* 0x1408581E: mov eax, dword ptr [edi] */
    edx = MEM32(ebp + (-0x4)); /* 0x14085820: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(eax + edx * 4); /* 0x14085823: mov eax, dword ptr [eax + edx*4] */
    MEM32(esi + 0xC) = eax; /* 0x14085826: mov dword ptr [esi + 0xc], eax */
    ecx = MEM32(ebp + 0x8); /* 0x14085829: mov ecx, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = ecx; /* 0x1408582C: mov dword ptr [esi + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1408582F: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x8) = ecx; /* 0x14085832: mov dword ptr [esi + 8], ecx */
    MEM32(esi) = ebx; /* 0x14085835: mov dword ptr [esi], ebx */
    ecx = MEM32(edi); /* 0x14085837: mov ecx, dword ptr [edi] */
    MEM32(ecx + edx * 4) = esi; /* 0x14085839: mov dword ptr [ecx + edx*4], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x1408583C: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408583F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14085841: pop esi */
    esp = ebp; /* 0x14085842: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085844: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14085845: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14085850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085850u);

L_14085850:
    edi = edi; /* 0x14085850: mov edi, edi */
    PUSH32(esp, edi); /* 0x14085852: push edi */
    edi = eax; /* 0x14085853: mov edi, eax */
    eax = MEM32(edi + 0x8); /* 0x14085855: mov eax, dword ptr [edi + 8] */
    ecx = eax + esi; /* 0x14085858: lea ecx, [eax + esi] */
    /* cmp ecx, eax */ /* 0x1408585B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1408586A; /* 0x1408585D: jae 0x1408586a */
L_1408585F:
    MEM32(edi + 0xC) = 0x8007000Eu; /* 0x1408585F: mov dword ptr [edi + 0xc], 0x8007000e */
L_14085866:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085866: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14085868: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085869: ret  */
L_1408586A:
    eax = ecx; /* 0x1408586A: mov eax, ecx */
    RECOMP_CALL(sub_14085D50); /* 0x1408586C: call 0x14085d50 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14085871: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14085866; /* 0x14085873: js 0x14085866 */
L_14085875:
    ecx = MEM32(edi + 0x8); /* 0x14085875: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi); /* 0x14085878: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1408587A: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1408587C: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = ecx; /* 0x1408587E: mov dword ptr [edi + 8], ecx */
    edi = POP32_VAL(esp); /* 0x14085881: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085882: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085890u);

L_14085890:
    edi = edi; /* 0x14085890: mov edi, edi */
    PUSH32(esp, ebx); /* 0x14085892: push ebx */
    PUSH32(esp, esi); /* 0x14085893: push esi */
    PUSH32(esp, edi); /* 0x14085894: push edi */
    esi = eax; /* 0x14085895: mov esi, eax */
    RECOMP_CALL(sub_14085F60); /* 0x14085897: call 0x14085f60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1408589C: push dword ptr [esi] */
    ebx = MEM32(0x1400115C); /* 0x1408589E: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x140858A4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140858A6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140858A8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x140858AB: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x140858B1: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x140858B8: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085919; /* 0x140858BB: jbe 0x14085919 */
L_140858BD:
    ecx = ecx; /* 0x140858BD: lea ecx, [ecx] */
L_140858C0:
    eax = MEM32(esi); /* 0x140858C0: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x140858C2: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x140858C5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085904; /* 0x140858C7: je 0x14085904 */
L_140858C9:
    ecx = ebx + 0x20; /* 0x140858C9: lea ecx, [ebx + 0x20] */
    RECOMP_CALL(sub_14087540); /* 0x140858CC: call 0x14087540 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x140858D1: push dword ptr [ebx + 0x10] */
    MEM32(ebx + 0x18) = 0; /* 0x140858D4: mov dword ptr [ebx + 0x18], 0 */
    MEM32(ebx + 0x1C) = 0; /* 0x140858DB: mov dword ptr [ebx + 0x1c], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140858E2: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x10) = 0; /* 0x140858E8: mov dword ptr [ebx + 0x10], 0 */
    MEM32(ebx + 0x14) = 0; /* 0x140858EF: mov dword ptr [ebx + 0x14], 0 */
    PUSH32(esp, ebx); /* 0x140858F6: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140858F7: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x140858FD: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140858FF: add esp, 8 */
    _flag_k = FK_ADD;
    goto L_1408590A; /* 0x14085902: jmp 0x1408590a */
L_14085904:
    ebx = MEM32(0x1400115C); /* 0x14085904: mov ebx, dword ptr [0x1400115c] */
L_1408590A:
    eax = MEM32(esi); /* 0x1408590A: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x1408590C: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085913: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14085914: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140858C0; /* 0x14085917: jb 0x140858c0 */
L_14085919:
    PUSH32(esp, MEM32(esi)); /* 0x14085919: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x1408591B: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1408591D: push 0 */
    MEM32(esi) = 0; /* 0x1408591F: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x14085925: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x1408592C: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(ebx); /* 0x14085933: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14085935: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x14085938: pop edi */
    MEM32(esi) = 0; /* 0x14085939: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x1408593F: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x14085946: pop esi */
    ebx = POP32_VAL(esp); /* 0x14085947: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085948: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085950u);

L_14085950:
    edi = edi; /* 0x14085950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085952: push ebp */
    ebp = esp; /* 0x14085953: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x14085955: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x14085958: mov eax, dword ptr [edx] */
    PUSH32(esp, edi); /* 0x1408595A: push edi */
    edi = MEM32(eax + ebx * 4); /* 0x1408595B: mov edi, dword ptr [eax + ebx*4] */
    /* test edi, edi */ /* 0x1408595E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408599C; /* 0x14085960: je 0x1408599c */
L_14085962:
    ecx = edi + 0x20; /* 0x14085962: lea ecx, [edi + 0x20] */
    RECOMP_CALL(sub_14087540); /* 0x14085965: call 0x14087540 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x1408596A: push dword ptr [edi + 0x10] */
    MEM32(edi + 0x18) = 0; /* 0x1408596D: mov dword ptr [edi + 0x18], 0 */
    MEM32(edi + 0x1C) = 0; /* 0x14085974: mov dword ptr [edi + 0x1c], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x1408597B: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x14085981: push edi */
    MEM32(edi + 0x10) = 0; /* 0x14085982: mov dword ptr [edi + 0x10], 0 */
    MEM32(edi + 0x14) = 0; /* 0x14085989: mov dword ptr [edi + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085990: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x14085996: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14085999: add esp, 8 */
    _flag_k = FK_ADD;
L_1408599C:
    eax = MEM32(edx); /* 0x1408599C: mov eax, dword ptr [edx] */
    MEM32(eax + ebx * 4) = 0; /* 0x1408599E: mov dword ptr [eax + ebx*4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x8) = MEM32(edx + 0x8) - 1; /* 0x140859A5: dec dword ptr [edx + 8] */
    _flag_k = FK_DEC;
    ecx = MEM32(edx + 0x8); /* 0x140859A8: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx); /* 0x140859AB: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x140859AD: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x140859AF: add ecx, ecx */
    _flag_k = FK_ADD;
    edx = eax + ebx * 4; /* 0x140859B1: lea edx, [eax + ebx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x140859B4: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x140859B6: push ecx */
    eax = edx + 0x4; /* 0x140859B7: lea eax, [edx + 4] */
    PUSH32(esp, eax); /* 0x140859BA: push eax */
    PUSH32(esp, edx); /* 0x140859BB: push edx */
    RECOMP_ICALL(MEM32(0x14001134)); /* 0x140859BC: call dword ptr [0x14001134] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x140859C2: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x140859C5: pop edi */
    ebp = POP32_VAL(esp); /* 0x140859C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140859C7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140859D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140859D0u);

L_140859D0:
    edi = edi; /* 0x140859D0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x140859D2: push ebx */
    PUSH32(esp, esi); /* 0x140859D3: push esi */
    PUSH32(esp, edi); /* 0x140859D4: push edi */
    esi = eax; /* 0x140859D5: mov esi, eax */
    RECOMP_CALL(sub_14085FE0); /* 0x140859D7: call 0x14085fe0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x140859DC: push dword ptr [esi] */
    ebx = MEM32(0x1400115C); /* 0x140859DE: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x140859E4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140859E6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140859E8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x140859EB: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x140859F1: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x140859F8: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085A3C; /* 0x140859FB: jbe 0x14085a3c */
L_140859FD:
    ecx = ecx; /* 0x140859FD: lea ecx, [ecx] */
L_14085A00:
    eax = MEM32(esi); /* 0x14085A00: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14085A02: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14085A05: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085A27; /* 0x14085A07: je 0x14085a27 */
L_14085A09:
    ecx = ebx + 0x14; /* 0x14085A09: lea ecx, [ebx + 0x14] */
    RECOMP_CALL(sub_14087540); /* 0x14085A0C: call 0x14087540 */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x4; /* 0x14085A11: lea eax, [ebx + 4] */
    RECOMP_CALL(sub_140855C0); /* 0x14085A14: call 0x140855c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14085A19: push ebx */
    ebx = MEM32(0x1400115C); /* 0x14085A1A: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14085A20: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085A22: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_14085A2D; /* 0x14085A25: jmp 0x14085a2d */
L_14085A27:
    ebx = MEM32(0x1400115C); /* 0x14085A27: mov ebx, dword ptr [0x1400115c] */
L_14085A2D:
    eax = MEM32(esi); /* 0x14085A2D: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14085A2F: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085A36: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14085A37: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085A00; /* 0x14085A3A: jb 0x14085a00 */
L_14085A3C:
    PUSH32(esp, MEM32(esi)); /* 0x14085A3C: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x14085A3E: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x14085A40: push 0 */
    MEM32(esi) = 0; /* 0x14085A42: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x14085A48: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14085A4F: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(ebx); /* 0x14085A56: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14085A58: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x14085A5B: pop edi */
    MEM32(esi) = 0; /* 0x14085A5C: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14085A62: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x14085A69: pop esi */
    ebx = POP32_VAL(esp); /* 0x14085A6A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085A6B: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085A80u);

L_14085A80:
    edi = edi; /* 0x14085A80: mov edi, edi */
    PUSH32(esp, esi); /* 0x14085A82: push esi */
    PUSH32(esp, edi); /* 0x14085A83: push edi */
    edi = eax; /* 0x14085A84: mov edi, eax */
    eax = MEM32(edi + 0x8); /* 0x14085A86: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x14085A89: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_14086040); /* 0x14085A8A: call 0x14086040 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14085A8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14085A99; /* 0x14085A91: jns 0x14085a99 */
L_14085A93:
    eax = MEM32(edi + 0xC); /* 0x14085A93: mov eax, dword ptr [edi + 0xc] */
    edi = POP32_VAL(esp); /* 0x14085A96: pop edi */
    esi = POP32_VAL(esp); /* 0x14085A97: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085A98: ret  */
L_14085A99:
    edx = MEM32(edi + 0x8); /* 0x14085A99: mov edx, dword ptr [edi + 8] */
    eax = MEM32(ebx); /* 0x14085A9C: mov eax, dword ptr [ebx] */
    ecx = MEM32(edi); /* 0x14085A9E: mov ecx, dword ptr [edi] */
    MEM32(ecx + edx * 4) = eax; /* 0x14085AA0: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x14085AA3: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x14085AA6: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085AA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14085AA9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085AAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085AB0u);

L_14085AB0:
    edi = edi; /* 0x14085AB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085AB2: push ebp */
    ebp = esp; /* 0x14085AB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14085AB5: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x14085AB8: push esi */
    esi = eax; /* 0x14085AB9: mov esi, eax */
    PUSH32(esp, edi); /* 0x14085ABB: push edi */
    edi = ecx; /* 0x14085ABC: mov edi, ecx */
    ecx = MEM32(ebx + 0x8); /* 0x14085ABE: mov ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14085AC1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x14085AC4: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x14085AC6: mov dword ptr [ebp - 8], ecx */
    /* cmp eax, esi */ /* 0x14085AC9: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085AD8; /* 0x14085ACB: jae 0x14085ad8 */
L_14085ACD:
    edi = POP32_VAL(esp); /* 0x14085ACD: pop edi */
    eax = 0x80070216u; /* 0x14085ACE: mov eax, 0x80070216 */
    esi = POP32_VAL(esp); /* 0x14085AD3: pop esi */
    esp = ebp; /* 0x14085AD4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085AD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085AD7: ret  */
L_14085AD8:
    eax = ecx + esi; /* 0x14085AD8: lea eax, [ecx + esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14085ADB: mov dword ptr [ebp - 4], eax */
    /* cmp eax, MEM32(ebx + 0x4) */ /* 0x14085ADE: cmp eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085AFF; /* 0x14085AE1: jbe 0x14085aff */
L_14085AE3:
    /* cmp MEM8(ebx + 0xD), 0 */ /* 0x14085AE3: cmp byte ptr [ebx + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14085AF0; /* 0x14085AE7: jne 0x14085af0 */
L_14085AE9:
    eax = 0x8007000Eu; /* 0x14085AE9: mov eax, 0x8007000e */
    goto L_14085B04; /* 0x14085AEE: jmp 0x14085b04 */
L_14085AF0:
    PUSH32(esp, eax); /* 0x14085AF0: push eax */
    ecx = ebx; /* 0x14085AF1: mov ecx, ebx */
    RECOMP_CALL(sub_140861C0); /* 0x14085AF3: call 0x140861c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14085AF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085B1C; /* 0x14085AFA: jne 0x14085b1c */
L_14085AFC:
    eax = MEM32(ebp + (-0x4)); /* 0x14085AFC: mov eax, dword ptr [ebp - 4] */
L_14085AFF:
    MEM32(ebx + 0x8) = eax; /* 0x14085AFF: mov dword ptr [ebx + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085B02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14085B04:
    /* test eax, eax */ /* 0x14085B04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085B1C; /* 0x14085B06: jne 0x14085b1c */
L_14085B08:
    ecx = MEM32(ebx); /* 0x14085B08: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x8)); /* 0x14085B0A: add ecx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x14085B0D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085B1A; /* 0x14085B0F: je 0x14085b1a */
L_14085B11:
    SET_LO8(eax, MEM8(edi)); /* 0x14085B11: mov al, byte ptr [edi] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x14085B13: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14085B15: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085B16: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x14085B17: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_14085B11; /* 0x14085B18: jne 0x14085b11 */
L_14085B1A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085B1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14085B1C:
    edi = POP32_VAL(esp); /* 0x14085B1C: pop edi */
    esi = POP32_VAL(esp); /* 0x14085B1D: pop esi */
    esp = ebp; /* 0x14085B1E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085B20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085B21: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085B30u);

L_14085B30:
    edi = edi; /* 0x14085B30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085B32: push ebp */
    ebp = esp; /* 0x14085B33: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x14085B35: push ebx */
    ebx = MEM32(esi + 0x8); /* 0x14085B36: mov ebx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x14085B39: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x14085B3C: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp eax, 1 */ /* 0x14085B3E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085B4D; /* 0x14085B41: jae 0x14085b4d */
L_14085B43:
    eax = 0x80070216u; /* 0x14085B43: mov eax, 0x80070216 */
    ebx = POP32_VAL(esp); /* 0x14085B48: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14085B49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14085B4A: ret 4 */
L_14085B4D:
    PUSH32(esp, edi); /* 0x14085B4D: push edi */
    edi = ebx + 0x1; /* 0x14085B4E: lea edi, [ebx + 1] */
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x14085B51: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085B6F; /* 0x14085B54: jbe 0x14085b6f */
L_14085B56:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x14085B56: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14085B63; /* 0x14085B5A: jne 0x14085b63 */
L_14085B5C:
    eax = 0x8007000Eu; /* 0x14085B5C: mov eax, 0x8007000e */
    goto L_14085B74; /* 0x14085B61: jmp 0x14085b74 */
L_14085B63:
    PUSH32(esp, edi); /* 0x14085B63: push edi */
    ecx = esi; /* 0x14085B64: mov ecx, esi */
    RECOMP_CALL(sub_140861C0); /* 0x14085B66: call 0x140861c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14085B6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085B74; /* 0x14085B6D: jne 0x14085b74 */
L_14085B6F:
    MEM32(esi + 0x8) = edi; /* 0x14085B6F: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085B72: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14085B74:
    edi = POP32_VAL(esp); /* 0x14085B74: pop edi */
    /* test eax, eax */ /* 0x14085B75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085B83; /* 0x14085B77: jne 0x14085b83 */
L_14085B79:
    eax = MEM32(esi); /* 0x14085B79: mov eax, dword ptr [esi] */
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x14085B7B: mov cl, byte ptr [ebp + 8] */
    MEM8(eax + ebx) = (uint8_t)(LO8(ecx)); /* 0x14085B7E: mov byte ptr [eax + ebx], cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085B81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14085B83:
    ebx = POP32_VAL(esp); /* 0x14085B83: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14085B84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14085B85: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14085B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085B90u);

L_14085B90:
    PUSH32(esp, MEM32(esi)); /* 0x14085B90: push dword ptr [esi] */
    MEM32(esi + 0x8) = 0; /* 0x14085B92: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14085B99: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085BA0: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085BA6: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x14085BA9: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14085BAF: mov dword ptr [esi + 4], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085BB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085BC0u);

L_14085BC0:
    edi = edi; /* 0x14085BC0: mov edi, edi */
    PUSH32(esp, edi); /* 0x14085BC2: push edi */
    edi = eax; /* 0x14085BC3: mov edi, eax */
    eax = MEM32(edi + 0x8); /* 0x14085BC5: mov eax, dword ptr [edi + 8] */
    ecx = eax + esi; /* 0x14085BC8: lea ecx, [eax + esi] */
    /* cmp ecx, eax */ /* 0x14085BCB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085BDA; /* 0x14085BCD: jae 0x14085bda */
L_14085BCF:
    MEM32(edi + 0xC) = 0x8007000Eu; /* 0x14085BCF: mov dword ptr [edi + 0xc], 0x8007000e */
L_14085BD6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085BD6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x14085BD8: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085BD9: ret  */
L_14085BDA:
    eax = ecx; /* 0x14085BDA: mov eax, ecx */
    RECOMP_CALL(sub_14085E10); /* 0x14085BDC: call 0x14085e10 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14085BE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14085BD6; /* 0x14085BE3: js 0x14085bd6 */
L_14085BE5:
    ecx = MEM32(edi + 0x8); /* 0x14085BE5: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi); /* 0x14085BE8: mov eax, dword ptr [edi] */
    eax = eax + ecx * 8; /* 0x14085BEA: lea eax, [eax + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x14085BED: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = ecx; /* 0x14085BEF: mov dword ptr [edi + 8], ecx */
    edi = POP32_VAL(esp); /* 0x14085BF2: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085BF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085C00u);

L_14085C00:
    edi = edi; /* 0x14085C00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14085C02: push ebp */
    ebp = esp; /* 0x14085C03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x14085C05: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14085C08: push ebx */
    PUSH32(esp, esi); /* 0x14085C09: push esi */
    PUSH32(esp, edi); /* 0x14085C0A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x14085C0B: mov edi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x14085C0E: mov ebx, eax */
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x14085C10: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14085C23; /* 0x14085C13: ja 0x14085c23 */
L_14085C15:
    eax = 0x80004005u; /* 0x14085C15: mov eax, 0x80004005 */
    edi = POP32_VAL(esp); /* 0x14085C1A: pop edi */
    esi = POP32_VAL(esp); /* 0x14085C1B: pop esi */
    ebx = POP32_VAL(esp); /* 0x14085C1C: pop ebx */
    esp = ebp; /* 0x14085C1D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085C1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14085C20: ret 4 */
L_14085C23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085C23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14085C25:
    /* cmp MEM32(eax * 4 + 0x1402F760), ebx */ /* 0x14085C25: cmp dword ptr [eax*4 + 0x1402f760], ebx */
    _flag_a = (uint32_t)(MEM32(eax * 4 + 0x1402F760)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085C36; /* 0x14085C2C: jae 0x14085c36 */
L_14085C2E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x14085C2E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x1Cu */ /* 0x14085C2F: cmp eax, 0x1c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085C25; /* 0x14085C32: jb 0x14085c25 */
L_14085C34:
    goto L_14085C3D; /* 0x14085C34: jmp 0x14085c3d */
L_14085C36:
    ebx = MEM32(eax * 4 + 0x1402F760); /* 0x14085C36: mov ebx, dword ptr [eax*4 + 0x1402f760] */
L_14085C3D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14085C3D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x14085C3F: mov eax, ebx */
    edx = 4; /* 0x14085C41: mov edx, 4 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x14085C46: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x14085C48: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x14085C4B: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x14085C4D: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x14085C4F: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14085C50: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x14085C56: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085C58: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x14085C5B: mov dword ptr [ebp - 0xc], ecx */
    /* test ecx, ecx */ /* 0x14085C5E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085C70; /* 0x14085C60: jne 0x14085c70 */
L_14085C62:
    eax = 0x8007000Eu; /* 0x14085C62: mov eax, 0x8007000e */
    edi = POP32_VAL(esp); /* 0x14085C67: pop edi */
    esi = POP32_VAL(esp); /* 0x14085C68: pop esi */
    ebx = POP32_VAL(esp); /* 0x14085C69: pop ebx */
    esp = ebp; /* 0x14085C6A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085C6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14085C6D: ret 4 */
L_14085C70:
    eax = ebx * 4; /* 0x14085C70: lea eax, [ebx*4] */
    PUSH32(esp, eax); /* 0x14085C77: push eax */
    PUSH32(esp, 0); /* 0x14085C78: push 0 */
    PUSH32(esp, ecx); /* 0x14085C7A: push ecx */
    RECOMP_CALL(sub_141EC9B0); /* 0x14085C7B: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(edi); /* 0x14085C80: mov esi, dword ptr [edi] */
    eax = MEM32(edi + 0x4); /* 0x14085C82: mov eax, dword ptr [edi + 4] */
    eax = esi + eax * 4; /* 0x14085C85: lea eax, [esi + eax*4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14085C88: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x14085C8B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085CA0; /* 0x14085C8D: jae 0x14085ca0 */
L_14085C8F:
    /* nop */ /* 0x14085C8F: nop  */
L_14085C90:
    /* cmp MEM32(esi), 0 */ /* 0x14085C90: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14085D3A; /* 0x14085C93: jne 0x14085d3a */
L_14085C99:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x14085C99: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x14085C9C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085C90; /* 0x14085C9E: jb 0x14085c90 */
L_14085CA0:
    edx = MEM32(ebp + (-0x10)); /* 0x14085CA0: mov edx, dword ptr [ebp - 0x10] */
L_14085CA3:
    MEM32(ebp + (-0x4)) = edx; /* 0x14085CA3: mov dword ptr [ebp - 4], edx */
    /* cmp esi, eax */ /* 0x14085CA6: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14085D08; /* 0x14085CA8: je 0x14085d08 */
L_14085CAA:
    ebx = ebx; /* 0x14085CAA: lea ebx, [ebx] */
L_14085CB0:
    eax = MEM32(edx); /* 0x14085CB0: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14085CB2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x14085CB4: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(edi + 0x4); /* 0x14085CB6: mov ecx, dword ptr [edi + 4] */
    eax = MEM32(edi); /* 0x14085CB9: mov eax, dword ptr [edi] */
    eax = eax + ecx * 4; /* 0x14085CBB: lea eax, [eax + ecx*4] */
    MEM32(ebp + (-0x10)) = edx; /* 0x14085CBE: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x14085CC1: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(edx + 0xC); /* 0x14085CC4: mov ecx, dword ptr [edx + 0xc] */
    MEM32(ebp + (-0x4)) = edx; /* 0x14085CC7: mov dword ptr [ebp - 4], edx */
    /* test ecx, ecx */ /* 0x14085CCA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085CE2; /* 0x14085CCC: jne 0x14085ce2 */
L_14085CCE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x14085CCE: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x14085CD1: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085CE2; /* 0x14085CD3: jae 0x14085ce2 */
L_14085CD5:
    ecx = MEM32(esi); /* 0x14085CD5: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x14085CD7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14085CE2; /* 0x14085CD9: jne 0x14085ce2 */
L_14085CDB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x14085CDB: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x14085CDE: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085CD5; /* 0x14085CE0: jb 0x14085cd5 */
L_14085CE2:
    edi = MEM32(ebp + (-0x10)); /* 0x14085CE2: mov edi, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0xC)); /* 0x14085CE5: mov eax, dword ptr [ebp - 0xc] */
    eax = MEM32(eax + edi * 4); /* 0x14085CE8: mov eax, dword ptr [eax + edi*4] */
    MEM32(edx + 0xC) = eax; /* 0x14085CEB: mov dword ptr [edx + 0xc], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x14085CEE: mov eax, dword ptr [ebp - 0xc] */
    MEM32(eax + edi * 4) = edx; /* 0x14085CF1: mov dword ptr [eax + edi*4], edx */
    edi = MEM32(ebp + 0x8); /* 0x14085CF4: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi); /* 0x14085CF7: mov eax, dword ptr [edi] */
    edx = ecx; /* 0x14085CF9: mov edx, ecx */
    ecx = MEM32(edi + 0x4); /* 0x14085CFB: mov ecx, dword ptr [edi + 4] */
    eax = eax + ecx * 4; /* 0x14085CFE: lea eax, [eax + ecx*4] */
    MEM32(ebp + (-0x4)) = edx; /* 0x14085D01: mov dword ptr [ebp - 4], edx */
    /* cmp esi, eax */ /* 0x14085D04: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14085CB0; /* 0x14085D06: jne 0x14085cb0 */
L_14085D08:
    /* cmp MEM8(edi + 0xC), 0 */ /* 0x14085D08: cmp byte ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14085D23; /* 0x14085D0C: je 0x14085d23 */
L_14085D0E:
    PUSH32(esp, MEM32(edi)); /* 0x14085D0E: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085D10: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085D16: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi) = 0; /* 0x14085D19: mov dword ptr [edi], 0 */
    MEM8(edi + 0xC) = (uint8_t)(0); /* 0x14085D1F: mov byte ptr [edi + 0xc], 0 */
L_14085D23:
    eax = MEM32(ebp + (-0xC)); /* 0x14085D23: mov eax, dword ptr [ebp - 0xc] */
    MEM32(edi) = eax; /* 0x14085D26: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = ebx; /* 0x14085D28: mov dword ptr [edi + 4], ebx */
    MEM8(edi + 0xC) = (uint8_t)(1); /* 0x14085D2B: mov byte ptr [edi + 0xc], 1 */
    edi = POP32_VAL(esp); /* 0x14085D2F: pop edi */
    esi = POP32_VAL(esp); /* 0x14085D30: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085D31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14085D33: pop ebx */
    esp = ebp; /* 0x14085D34: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14085D36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14085D37: ret 4 */
L_14085D3A:
    edx = MEM32(esi); /* 0x14085D3A: mov edx, dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_14085CA3; /* 0x14085D3C: jmp 0x14085ca3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_14085D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085D50u);

L_14085D50:
    ecx = MEM32(edi + 0x4); /* 0x14085D50: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x14085D53: push ebx */
    PUSH32(esp, esi); /* 0x14085D54: push esi */
    /* cmp eax, ecx */ /* 0x14085D55: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085DAA; /* 0x14085D57: jbe 0x14085daa */
L_14085D59:
    esi = ecx + ecx; /* 0x14085D59: lea esi, [ecx + ecx] */
    /* cmp esi, eax */ /* 0x14085D5C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14085D62; /* 0x14085D5E: ja 0x14085d62 */
L_14085D60:
    esi = eax; /* 0x14085D60: mov esi, eax */
L_14085D62:
    /* cmp esi, 0x10u */ /* 0x14085D62: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085D6C; /* 0x14085D65: jae 0x14085d6c */
L_14085D67:
    esi = 0x10u; /* 0x14085D67: mov esi, 0x10 */
L_14085D6C:
    /* cmp esi, ecx */ /* 0x14085D6C: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14085DAF; /* 0x14085D6E: jb 0x14085daf */
L_14085D70:
    /* cmp esi, MEM32(edi + 0x8) */ /* 0x14085D70: cmp esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14085DAF; /* 0x14085D73: jb 0x14085daf */
L_14085D75:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x14085D75: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085DAF; /* 0x14085D78: jae 0x14085daf */
L_14085D7A:
    PUSH32(esp, esi); /* 0x14085D7A: push esi */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14085D7B: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14085D81: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085D83: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x14085D86: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085DAF; /* 0x14085D88: je 0x14085daf */
L_14085D8A:
    eax = MEM32(edi); /* 0x14085D8A: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x14085D8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085DA5; /* 0x14085D8E: je 0x14085da5 */
L_14085D90:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x14085D90: push dword ptr [edi + 8] */
    PUSH32(esp, eax); /* 0x14085D93: push eax */
    PUSH32(esp, ebx); /* 0x14085D94: push ebx */
    RECOMP_CALL(sub_141EC9A4); /* 0x14085D95: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x14085D9A: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085D9C: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x14085DA2: add esp, 0x10 */
    _flag_k = FK_ADD;
L_14085DA5:
    MEM32(edi) = ebx; /* 0x14085DA5: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = esi; /* 0x14085DA7: mov dword ptr [edi + 4], esi */
L_14085DAA:
    esi = POP32_VAL(esp); /* 0x14085DAA: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085DAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14085DAD: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085DAE: ret  */
L_14085DAF:
    esi = POP32_VAL(esp); /* 0x14085DAF: pop esi */
    MEM32(edi + 0xC) = 0x8007000Eu; /* 0x14085DB0: mov dword ptr [edi + 0xc], 0x8007000e */
    eax = 0x8007000Eu; /* 0x14085DB7: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14085DBC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085DBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085DD0u);

L_14085DD0:
    edi = edi; /* 0x14085DD0: mov edi, edi */
    PUSH32(esp, esi); /* 0x14085DD2: push esi */
    esi = ecx; /* 0x14085DD3: mov esi, ecx */
    /* cmp MEM8(esi + 0xC), 0 */ /* 0x14085DD5: cmp byte ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(esi + 0x8) = 0; /* 0x14085DD9: mov dword ptr [esi + 8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14085DF1; /* 0x14085DE0: je 0x14085df1 */
L_14085DE2:
    PUSH32(esp, MEM32(esi)); /* 0x14085DE2: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085DE4: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085DEA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM8(esi + 0xC) = (uint8_t)(0); /* 0x14085DED: mov byte ptr [esi + 0xc], 0 */
L_14085DF1:
    MEM32(esi + 0x4) = 0; /* 0x14085DF1: mov dword ptr [esi + 4], 0 */
    MEM32(esi) = 0; /* 0x14085DF8: mov dword ptr [esi], 0 */
    esi = POP32_VAL(esp); /* 0x14085DFE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085DFF: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085E10u);

L_14085E10:
    ecx = MEM32(edi + 0x4); /* 0x14085E10: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x14085E13: push ebx */
    PUSH32(esp, esi); /* 0x14085E14: push esi */
    /* cmp eax, ecx */ /* 0x14085E15: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085E7B; /* 0x14085E17: jbe 0x14085e7b */
L_14085E19:
    esi = ecx + ecx; /* 0x14085E19: lea esi, [ecx + ecx] */
    /* cmp esi, eax */ /* 0x14085E1C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14085E22; /* 0x14085E1E: ja 0x14085e22 */
L_14085E20:
    esi = eax; /* 0x14085E20: mov esi, eax */
L_14085E22:
    /* cmp esi, 0x10u */ /* 0x14085E22: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085E2C; /* 0x14085E25: jae 0x14085e2c */
L_14085E27:
    esi = 0x10u; /* 0x14085E27: mov esi, 0x10 */
L_14085E2C:
    /* cmp esi, ecx */ /* 0x14085E2C: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14085E80; /* 0x14085E2E: jb 0x14085e80 */
L_14085E30:
    /* cmp esi, MEM32(edi + 0x8) */ /* 0x14085E30: cmp esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14085E80; /* 0x14085E33: jb 0x14085e80 */
L_14085E35:
    /* cmp esi, 0x1FFFFFFFu */ /* 0x14085E35: cmp esi, 0x1fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14085E80; /* 0x14085E3B: jae 0x14085e80 */
L_14085E3D:
    eax = esi * 8; /* 0x14085E3D: lea eax, [esi*8] */
    PUSH32(esp, eax); /* 0x14085E44: push eax */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14085E45: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14085E4B: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085E4D: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x14085E50: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085E80; /* 0x14085E52: je 0x14085e80 */
L_14085E54:
    ecx = MEM32(edi); /* 0x14085E54: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x14085E56: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085E76; /* 0x14085E58: je 0x14085e76 */
L_14085E5A:
    eax = MEM32(edi + 0x8); /* 0x14085E5A: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14085E5D: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14085E5F: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14085E61: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14085E63: push eax */
    PUSH32(esp, ecx); /* 0x14085E64: push ecx */
    PUSH32(esp, ebx); /* 0x14085E65: push ebx */
    RECOMP_CALL(sub_141EC9A4); /* 0x14085E66: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x14085E6B: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085E6D: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x14085E73: add esp, 0x10 */
    _flag_k = FK_ADD;
L_14085E76:
    MEM32(edi) = ebx; /* 0x14085E76: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = esi; /* 0x14085E78: mov dword ptr [edi + 4], esi */
L_14085E7B:
    esi = POP32_VAL(esp); /* 0x14085E7B: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085E7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14085E7E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085E7F: ret  */
L_14085E80:
    esi = POP32_VAL(esp); /* 0x14085E80: pop esi */
    MEM32(edi + 0xC) = 0x8007000Eu; /* 0x14085E81: mov dword ptr [edi + 0xc], 0x8007000e */
    eax = 0x8007000Eu; /* 0x14085E88: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14085E8D: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085E8E: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085EA0u);

L_14085EA0:
    edi = edi; /* 0x14085EA0: mov edi, edi */
    PUSH32(esp, edi); /* 0x14085EA2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14085EA3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14085EA5: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085EF3; /* 0x14085EA8: jbe 0x14085ef3 */
L_14085EAA:
    PUSH32(esp, ebx); /* 0x14085EAA: push ebx */
    goto L_14085EB0; /* 0x14085EAB: jmp 0x14085eb0 */
L_14085EB0:
    eax = MEM32(esi); /* 0x14085EB0: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14085EB2: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14085EB5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085ED3; /* 0x14085EB7: je 0x14085ed3 */
L_14085EB9:
    ecx = ebx + 0x14; /* 0x14085EB9: lea ecx, [ebx + 0x14] */
    RECOMP_CALL(sub_14087540); /* 0x14085EBC: call 0x14087540 */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x4; /* 0x14085EC1: lea eax, [ebx + 4] */
    RECOMP_CALL(sub_140873E0); /* 0x14085EC4: call 0x140873e0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14085EC9: push ebx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085ECA: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085ED0: add esp, 4 */
    _flag_k = FK_ADD;
L_14085ED3:
    eax = MEM32(esi); /* 0x14085ED3: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14085ED5: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085EDC: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14085EDD: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085EB0; /* 0x14085EE0: jb 0x14085eb0 */
L_14085EE2:
    ebx = POP32_VAL(esp); /* 0x14085EE2: pop ebx */
    MEM32(esi + 0x8) = 0; /* 0x14085EE3: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14085EEA: mov dword ptr [esi + 0xc], 0 */
    edi = POP32_VAL(esp); /* 0x14085EF1: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085EF2: ret  */
L_14085EF3:
    MEM32(esi + 0x8) = edi; /* 0x14085EF3: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x14085EF6: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x14085EF9: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085EFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085F00u);

L_14085F00:
    edi = edi; /* 0x14085F00: mov edi, edi */
    PUSH32(esp, edi); /* 0x14085F02: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14085F03: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14085F05: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085F53; /* 0x14085F08: jbe 0x14085f53 */
L_14085F0A:
    PUSH32(esp, ebx); /* 0x14085F0A: push ebx */
    goto L_14085F10; /* 0x14085F0B: jmp 0x14085f10 */
L_14085F10:
    eax = MEM32(esi); /* 0x14085F10: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14085F12: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14085F15: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085F33; /* 0x14085F17: je 0x14085f33 */
L_14085F19:
    ecx = ebx + 0x14; /* 0x14085F19: lea ecx, [ebx + 0x14] */
    RECOMP_CALL(sub_14087540); /* 0x14085F1C: call 0x14087540 */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x4; /* 0x14085F21: lea eax, [ebx + 4] */
    RECOMP_CALL(sub_14085510); /* 0x14085F24: call 0x14085510 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14085F29: push ebx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085F2A: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14085F30: add esp, 4 */
    _flag_k = FK_ADD;
L_14085F33:
    eax = MEM32(esi); /* 0x14085F33: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14085F35: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085F3C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14085F3D: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085F10; /* 0x14085F40: jb 0x14085f10 */
L_14085F42:
    ebx = POP32_VAL(esp); /* 0x14085F42: pop ebx */
    MEM32(esi + 0x8) = 0; /* 0x14085F43: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14085F4A: mov dword ptr [esi + 0xc], 0 */
    edi = POP32_VAL(esp); /* 0x14085F51: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085F52: ret  */
L_14085F53:
    MEM32(esi + 0x8) = edi; /* 0x14085F53: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x14085F56: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x14085F59: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085F5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085F60u);

L_14085F60:
    edi = edi; /* 0x14085F60: mov edi, edi */
    PUSH32(esp, edi); /* 0x14085F62: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14085F63: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14085F65: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14085FD0; /* 0x14085F68: jbe 0x14085fd0 */
L_14085F6A:
    PUSH32(esp, ebx); /* 0x14085F6A: push ebx */
    goto L_14085F70; /* 0x14085F6B: jmp 0x14085f70 */
L_14085F70:
    eax = MEM32(esi); /* 0x14085F70: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14085F72: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14085F75: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14085FB0; /* 0x14085F77: je 0x14085fb0 */
L_14085F79:
    ecx = ebx + 0x20; /* 0x14085F79: lea ecx, [ebx + 0x20] */
    RECOMP_CALL(sub_14087540); /* 0x14085F7C: call 0x14087540 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x14085F81: push dword ptr [ebx + 0x10] */
    MEM32(ebx + 0x18) = 0; /* 0x14085F84: mov dword ptr [ebx + 0x18], 0 */
    MEM32(ebx + 0x1C) = 0; /* 0x14085F8B: mov dword ptr [ebx + 0x1c], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085F92: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14085F98: push ebx */
    MEM32(ebx + 0x10) = 0; /* 0x14085F99: mov dword ptr [ebx + 0x10], 0 */
    MEM32(ebx + 0x14) = 0; /* 0x14085FA0: mov dword ptr [ebx + 0x14], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14085FA7: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14085FAD: add esp, 8 */
    _flag_k = FK_ADD;
L_14085FB0:
    eax = MEM32(esi); /* 0x14085FB0: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14085FB2: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14085FB9: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14085FBA: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085F70; /* 0x14085FBD: jb 0x14085f70 */
L_14085FBF:
    ebx = POP32_VAL(esp); /* 0x14085FBF: pop ebx */
    MEM32(esi + 0x8) = 0; /* 0x14085FC0: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14085FC7: mov dword ptr [esi + 0xc], 0 */
    edi = POP32_VAL(esp); /* 0x14085FCE: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085FCF: ret  */
L_14085FD0:
    MEM32(esi + 0x8) = edi; /* 0x14085FD0: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x14085FD3: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x14085FD6: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14085FD7: ret  */
    RECOMP_REGS_OUT();
}

void sub_14085FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14085FE0u);

L_14085FE0:
    edi = edi; /* 0x14085FE0: mov edi, edi */
    PUSH32(esp, edi); /* 0x14085FE2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14085FE3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14085FE5: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086033; /* 0x14085FE8: jbe 0x14086033 */
L_14085FEA:
    PUSH32(esp, ebx); /* 0x14085FEA: push ebx */
    goto L_14085FF0; /* 0x14085FEB: jmp 0x14085ff0 */
L_14085FF0:
    eax = MEM32(esi); /* 0x14085FF0: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14085FF2: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14085FF5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086013; /* 0x14085FF7: je 0x14086013 */
L_14085FF9:
    ecx = ebx + 0x14; /* 0x14085FF9: lea ecx, [ebx + 0x14] */
    RECOMP_CALL(sub_14087540); /* 0x14085FFC: call 0x14087540 */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x4; /* 0x14086001: lea eax, [ebx + 4] */
    RECOMP_CALL(sub_140855C0); /* 0x14086004: call 0x140855c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14086009: push ebx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x1408600A: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086010: add esp, 4 */
    _flag_k = FK_ADD;
L_14086013:
    eax = MEM32(esi); /* 0x14086013: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14086015: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1408601C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1408601D: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14085FF0; /* 0x14086020: jb 0x14085ff0 */
L_14086022:
    ebx = POP32_VAL(esp); /* 0x14086022: pop ebx */
    MEM32(esi + 0x8) = 0; /* 0x14086023: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x1408602A: mov dword ptr [esi + 0xc], 0 */
    edi = POP32_VAL(esp); /* 0x14086031: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086032: ret  */
L_14086033:
    MEM32(esi + 0x8) = edi; /* 0x14086033: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x14086036: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x14086039: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408603A: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086040u);

L_14086040:
    ecx = MEM32(edi + 0x4); /* 0x14086040: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x14086043: push ebx */
    PUSH32(esp, esi); /* 0x14086044: push esi */
    /* cmp eax, ecx */ /* 0x14086045: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140860A9; /* 0x14086047: jbe 0x140860a9 */
L_14086049:
    esi = ecx + ecx; /* 0x14086049: lea esi, [ecx + ecx] */
    /* cmp esi, eax */ /* 0x1408604C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14086052; /* 0x1408604E: ja 0x14086052 */
L_14086050:
    esi = eax; /* 0x14086050: mov esi, eax */
L_14086052:
    /* cmp esi, 0x10u */ /* 0x14086052: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1408605C; /* 0x14086055: jae 0x1408605c */
L_14086057:
    esi = 0x10u; /* 0x14086057: mov esi, 0x10 */
L_1408605C:
    /* cmp esi, ecx */ /* 0x1408605C: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140860AE; /* 0x1408605E: jb 0x140860ae */
L_14086060:
    /* cmp esi, MEM32(edi + 0x8) */ /* 0x14086060: cmp esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140860AE; /* 0x14086063: jb 0x140860ae */
L_14086065:
    /* cmp esi, 0x3FFFFFFFu */ /* 0x14086065: cmp esi, 0x3fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140860AE; /* 0x1408606B: jae 0x140860ae */
L_1408606D:
    eax = esi * 4; /* 0x1408606D: lea eax, [esi*4] */
    PUSH32(esp, eax); /* 0x14086074: push eax */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14086075: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1408607B: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408607D: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x14086080: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140860AE; /* 0x14086082: je 0x140860ae */
L_14086084:
    ecx = MEM32(edi); /* 0x14086084: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x14086086: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140860A4; /* 0x14086088: je 0x140860a4 */
L_1408608A:
    eax = MEM32(edi + 0x8); /* 0x1408608A: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1408608D: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1408608F: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14086091: push eax */
    PUSH32(esp, ecx); /* 0x14086092: push ecx */
    PUSH32(esp, ebx); /* 0x14086093: push ebx */
    RECOMP_CALL(sub_141EC9A4); /* 0x14086094: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x14086099: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x1408609B: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140860A1: add esp, 0x10 */
    _flag_k = FK_ADD;
L_140860A4:
    MEM32(edi) = ebx; /* 0x140860A4: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = esi; /* 0x140860A6: mov dword ptr [edi + 4], esi */
L_140860A9:
    esi = POP32_VAL(esp); /* 0x140860A9: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140860AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140860AC: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140860AD: ret  */
L_140860AE:
    esi = POP32_VAL(esp); /* 0x140860AE: pop esi */
    MEM32(edi + 0xC) = 0x8007000Eu; /* 0x140860AF: mov dword ptr [edi + 0xc], 0x8007000e */
    eax = 0x8007000Eu; /* 0x140860B6: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x140860BB: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140860BC: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086160u);

L_14086160:
    edi = edi; /* 0x14086160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086162: push ebp */
    ebp = esp; /* 0x14086163: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14086165: push esi */
    esi = ecx; /* 0x14086166: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x14086168: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1408616B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1408616C: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, eax */ /* 0x1408616F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086194; /* 0x14086171: jbe 0x14086194 */
L_14086173:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x14086173: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086184; /* 0x14086177: jne 0x14086184 */
L_14086179:
    edi = POP32_VAL(esp); /* 0x14086179: pop edi */
    eax = 0x8007000Eu; /* 0x1408617A: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x1408617F: pop esi */
    ebp = POP32_VAL(esp); /* 0x14086180: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14086181: ret 8 */
L_14086184:
    PUSH32(esp, edi); /* 0x14086184: push edi */
    RECOMP_CALL(sub_140861C0); /* 0x14086185: call 0x140861c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408618A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140861AE; /* 0x1408618C: je 0x140861ae */
L_1408618E:
    edi = POP32_VAL(esp); /* 0x1408618E: pop edi */
    esi = POP32_VAL(esp); /* 0x1408618F: pop esi */
    ebp = POP32_VAL(esp); /* 0x14086190: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x14086191: ret 8 */
L_14086194:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x14086194: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140861AE; /* 0x14086198: je 0x140861ae */
L_1408619A:
    /* cmp edi, eax */ /* 0x1408619A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140861AE; /* 0x1408619C: jae 0x140861ae */
L_1408619E:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x1408619E: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140861AE; /* 0x140861A2: je 0x140861ae */
L_140861A4:
    PUSH32(esp, edi); /* 0x140861A4: push edi */
    RECOMP_CALL(sub_140861C0); /* 0x140861A5: call 0x140861c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140861AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140861B3; /* 0x140861AC: jne 0x140861b3 */
L_140861AE:
    MEM32(esi + 0x8) = edi; /* 0x140861AE: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140861B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_140861B3:
    edi = POP32_VAL(esp); /* 0x140861B3: pop edi */
    esi = POP32_VAL(esp); /* 0x140861B4: pop esi */
    ebp = POP32_VAL(esp); /* 0x140861B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140861B6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_140861C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140861C0u);

L_140861C0:
    edi = edi; /* 0x140861C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140861C2: push ebp */
    ebp = esp; /* 0x140861C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140861C5: push esi */
    esi = ecx; /* 0x140861C6: mov esi, ecx */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x140861C8: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_140861D8; /* 0x140861CC: jne 0x140861d8 */
L_140861CE:
    eax = 0x8000FFFFu; /* 0x140861CE: mov eax, 0x8000ffff */
    esi = POP32_VAL(esp); /* 0x140861D3: pop esi */
    ebp = POP32_VAL(esp); /* 0x140861D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140861D5: ret 4 */
L_140861D8:
    eax = MEM32(ebp + 0x8); /* 0x140861D8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x140861DB: push ebx */
    PUSH32(esp, edi); /* 0x140861DC: push edi */
    /* test eax, eax */ /* 0x140861DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086245; /* 0x140861DF: je 0x14086245 */
L_140861E1:
    ecx = ebp + 0x8; /* 0x140861E1: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x140861E4: push ecx */
    PUSH32(esp, eax); /* 0x140861E5: push eax */
    ecx = esi; /* 0x140861E6: mov ecx, esi */
    RECOMP_CALL(sub_14086280); /* 0x140861E8: call 0x14086280 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140861ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408626D; /* 0x140861EF: jne 0x1408626d */
L_140861F1:
    edi = MEM32(ebp + 0x8); /* 0x140861F1: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x140861F4: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086205; /* 0x140861F7: jbe 0x14086205 */
L_140861F9:
    edi = POP32_VAL(esp); /* 0x140861F9: pop edi */
    ebx = POP32_VAL(esp); /* 0x140861FA: pop ebx */
    eax = 0x80070216u; /* 0x140861FB: mov eax, 0x80070216 */
    esi = POP32_VAL(esp); /* 0x14086200: pop esi */
    ebp = POP32_VAL(esp); /* 0x14086201: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086202: ret 4 */
L_14086205:
    /* test edi, edi */ /* 0x14086205: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086247; /* 0x14086207: je 0x14086247 */
L_14086209:
    PUSH32(esp, edi); /* 0x14086209: push edi */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x1408620A: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14086210: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086212: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x14086215: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086225; /* 0x14086217: jne 0x14086225 */
L_14086219:
    edi = POP32_VAL(esp); /* 0x14086219: pop edi */
    ebx = POP32_VAL(esp); /* 0x1408621A: pop ebx */
    eax = 0x8007000Eu; /* 0x1408621B: mov eax, 0x8007000e */
    esi = POP32_VAL(esp); /* 0x14086220: pop esi */
    ebp = POP32_VAL(esp); /* 0x14086221: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086222: ret 4 */
L_14086225:
    eax = MEM32(esi + 0x8); /* 0x14086225: mov eax, dword ptr [esi + 8] */
    edx = edi; /* 0x14086228: mov edx, edi */
    /* cmp edi, eax */ /* 0x1408622A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086230; /* 0x1408622C: jbe 0x14086230 */
L_1408622E:
    edx = eax; /* 0x1408622E: mov edx, eax */
L_14086230:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14086230: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x14086232: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086249; /* 0x14086234: je 0x14086249 */
L_14086236:
    eax = MEM32(esi); /* 0x14086236: mov eax, dword ptr [esi] */
    SET_LO8(eax, MEM8(ecx + eax)); /* 0x14086238: mov al, byte ptr [ecx + eax] */
    MEM8(ecx + ebx) = (uint8_t)(LO8(eax)); /* 0x1408623B: mov byte ptr [ecx + ebx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1408623E: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x1408623F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14086236; /* 0x14086241: jb 0x14086236 */
L_14086243:
    goto L_14086249; /* 0x14086243: jmp 0x14086249 */
L_14086245:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14086245: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_14086247:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x14086247: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_14086249:
    /* cmp MEM8(esi + 0xC), 0 */ /* 0x14086249: cmp byte ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1408625A; /* 0x1408624D: je 0x1408625a */
L_1408624F:
    PUSH32(esp, MEM32(esi)); /* 0x1408624F: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086251: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086257: add esp, 4 */
    _flag_k = FK_ADD;
L_1408625A:
    MEM32(esi) = ebx; /* 0x1408625A: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = edi; /* 0x1408625C: mov dword ptr [esi + 4], edi */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1408625F: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086267; /* 0x14086262: jbe 0x14086267 */
L_14086264:
    MEM32(esi + 0x8) = edi; /* 0x14086264: mov dword ptr [esi + 8], edi */
L_14086267:
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x14086267: mov byte ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408626B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1408626D:
    edi = POP32_VAL(esp); /* 0x1408626D: pop edi */
    ebx = POP32_VAL(esp); /* 0x1408626E: pop ebx */
    esi = POP32_VAL(esp); /* 0x1408626F: pop esi */
    ebp = POP32_VAL(esp); /* 0x14086270: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086271: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14086280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086280u);

L_14086280:
    edi = edi; /* 0x14086280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086282: push ebp */
    ebp = esp; /* 0x14086283: mov ebp, esp */
    ecx = MEM32(ecx + 0x4); /* 0x14086285: mov ecx, dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x14086288: mov eax, dword ptr [ebp + 8] */
    goto L_14086290; /* 0x1408628B: jmp 0x14086290 */
L_14086290:
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x14086290: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140862BF; /* 0x14086293: je 0x140862bf */
L_14086295:
    /* cmp ecx, 0x10u */ /* 0x14086295: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140862A1; /* 0x14086298: jae 0x140862a1 */
L_1408629A:
    ecx = 0x20u; /* 0x1408629A: mov ecx, 0x20 */
    goto L_140862B0; /* 0x1408629F: jmp 0x140862b0 */
L_140862A1:
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x140862A1: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140862AD; /* 0x140862A7: ja 0x140862ad */
L_140862A9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x140862A9: add ecx, ecx */
    _flag_k = FK_ADD;
    goto L_140862B0; /* 0x140862AB: jmp 0x140862b0 */
L_140862AD:
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x140862AD: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_140862B0:
    /* cmp ecx, eax */ /* 0x140862B0: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14086290; /* 0x140862B2: jb 0x14086290 */
L_140862B4:
    eax = MEM32(ebp + 0xC); /* 0x140862B4: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x140862B7: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140862B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x140862BB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140862BC: ret 8 */
L_140862BF:
    eax = 0x80070216u; /* 0x140862BF: mov eax, 0x80070216 */
    ebp = POP32_VAL(esp); /* 0x140862C4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x140862C5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_14086300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086300u);

L_14086300:
    /* cmp MEM32(eax), 2 */ /* 0x14086300: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x1C); /* 0x14086303: mov ecx, dword ptr [eax + 0x1c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1408634F; /* 0x14086306: jne 0x1408634f */
L_14086308:
    /* cmp ecx, 9 */ /* 0x14086308: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x1408630B: je 0x14086349 */
L_1408630D:
    /* cmp ecx, 0xAu */ /* 0x1408630D: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x14086310: je 0x14086349 */
L_14086312:
    /* cmp ecx, 0xBu */ /* 0x14086312: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x14086315: je 0x14086349 */
L_14086317:
    /* cmp ecx, 0xCu */ /* 0x14086317: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x1408631A: je 0x14086349 */
L_1408631C:
    /* cmp ecx, 0xDu */ /* 0x1408631C: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x1408631F: je 0x14086349 */
L_14086321:
    /* cmp ecx, 0xEu */ /* 0x14086321: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x14086324: je 0x14086349 */
L_14086326:
    /* cmp ecx, 0xFu */ /* 0x14086326: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x14086329: je 0x14086349 */
L_1408632B:
    /* cmp ecx, 0x10u */ /* 0x1408632B: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x1408632E: je 0x14086349 */
L_14086330:
    /* cmp ecx, 0x11u */ /* 0x14086330: cmp ecx, 0x11 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x14086333: je 0x14086349 */
L_14086335:
    /* cmp ecx, 0x17u */ /* 0x14086335: cmp ecx, 0x17 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x14086338: je 0x14086349 */
L_1408633A:
    /* cmp ecx, 0x16u */ /* 0x1408633A: cmp ecx, 0x16 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x1408633D: je 0x14086349 */
L_1408633F:
    /* cmp ecx, 0x27u */ /* 0x1408633F: cmp ecx, 0x27 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x27u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086349; /* 0x14086342: je 0x14086349 */
L_14086344:
    /* cmp ecx, 0x25u */ /* 0x14086344: cmp ecx, 0x25 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x25u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1408634F; /* 0x14086347: jne 0x1408634f */
L_14086349:
    eax = 1; /* 0x14086349: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408634E: ret  */
L_1408634F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408634F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086351: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086360u);

L_14086360:
    /* cmp MEM32(eax), 2 */ /* 0x14086360: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x1C); /* 0x14086363: mov ecx, dword ptr [eax + 0x1c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_140863AA; /* 0x14086366: jne 0x140863aa */
L_14086368:
    /* cmp ecx, 0x1Fu */ /* 0x14086368: cmp ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x1408636B: je 0x140863a4 */
L_1408636D:
    /* cmp ecx, 0x20u */ /* 0x1408636D: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x14086370: je 0x140863a4 */
L_14086372:
    /* cmp ecx, 0x21u */ /* 0x14086372: cmp ecx, 0x21 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x14086375: je 0x140863a4 */
L_14086377:
    /* cmp ecx, 0x22u */ /* 0x14086377: cmp ecx, 0x22 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x1408637A: je 0x140863a4 */
L_1408637C:
    /* cmp ecx, 0x23u */ /* 0x1408637C: cmp ecx, 0x23 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x1408637F: je 0x140863a4 */
L_14086381:
    /* cmp ecx, 0x24u */ /* 0x14086381: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x14086384: je 0x140863a4 */
L_14086386:
    /* cmp ecx, 0x26u */ /* 0x14086386: cmp ecx, 0x26 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x14086389: je 0x140863a4 */
L_1408638B:
    /* cmp ecx, 0x28u */ /* 0x1408638B: cmp ecx, 0x28 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x1408638E: je 0x140863a4 */
L_14086390:
    /* cmp ecx, 0x29u */ /* 0x14086390: cmp ecx, 0x29 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x14086393: je 0x140863a4 */
L_14086395:
    /* cmp ecx, 0x2Au */ /* 0x14086395: cmp ecx, 0x2a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x14086398: je 0x140863a4 */
L_1408639A:
    /* cmp ecx, 0x2Bu */ /* 0x1408639A: cmp ecx, 0x2b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140863A4; /* 0x1408639D: je 0x140863a4 */
L_1408639F:
    /* cmp ecx, 0x2Cu */ /* 0x1408639F: cmp ecx, 0x2c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140863AA; /* 0x140863A2: jne 0x140863aa */
L_140863A4:
    eax = 1; /* 0x140863A4: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140863A9: ret  */
L_140863AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140863AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140863AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_140863C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140863C0u);

L_140863C0:
    edi = edi; /* 0x140863C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140863C2: push ebp */
    ebp = esp; /* 0x140863C3: mov ebp, esp */
    eax = MEM32(ecx); /* 0x140863C5: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x140863C7: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140863CA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_140863E5; /* 0x140863CB: je 0x140863e5 */
L_140863CD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x140863CD: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_14086412; /* 0x140863D0: jne 0x14086412 */
L_140863D2:
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x140863D2: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 3; /* 0x140863D5: mov dword ptr [ecx], 3 */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x140863DB: setne al */
    MEM32(ecx + 0x4) = eax; /* 0x140863DE: mov dword ptr [ecx + 4], eax */
    esp = ebp; /* 0x140863E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140863E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140863E4: ret  */
L_140863E5:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x140863E5: fld dword ptr [ecx + 4] */
    MEM32(ecx) = 3; /* 0x140863E8: mov dword ptr [ecx], 3 */
    _st[0] += *(double*)ADDR(0x14066858); /* 0x140863EE: fadd qword ptr [0x14066858] */
    MEM16(ebp + (-0x2)) = _fpu_cw; /* 0x140863F4: fnstcw word ptr [ebp - 2] */
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x140863F7: movzx eax, word ptr [ebp - 2] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x140863FB: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x14086400: mov dword ptr [ebp - 8], eax */
    _fpu_cw = MEM16(ebp + (-0x8)); /* 0x14086403: fldcw word ptr [ebp - 8] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0xC)) = (uint64_t)_q; } /* 0x14086406: fistp qword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0xC)); /* 0x14086409: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x1408640C: mov dword ptr [ecx + 4], eax */
    _fpu_cw = MEM16(ebp + (-0x2)); /* 0x1408640F: fldcw word ptr [ebp - 2] */
L_14086412:
    esp = ebp; /* 0x14086412: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086414: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086415: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086420u);

L_14086420:
    edi = edi; /* 0x14086420: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086422: push ebp */
    ebp = esp; /* 0x14086423: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14086425: push ecx */
    eax = MEM32(ecx); /* 0x14086426: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14086428: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 3 */ /* 0x14086429: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14086461; /* 0x1408642C: ja 0x14086461 */
L_1408642E:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x14086468)); goto _ljump; }
L_14086435:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x14086435: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086447; /* 0x14086439: je 0x14086447 */
L_1408643B:
    fp_push(1.0); /* 0x1408643B: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1408643D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x14086440: fld dword ptr [ebp - 4] */
    esp = ebp; /* 0x14086443: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086445: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086446: ret  */
L_14086447:
    fp_push(0.0); /* 0x14086447: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x14086449: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1408644C: fld dword ptr [ebp - 4] */
    esp = ebp; /* 0x1408644F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086451: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086452: ret  */
L_14086453:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x14086453: fld dword ptr [ecx + 4] */
    esp = ebp; /* 0x14086456: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086458: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086459: ret  */
L_1408645A:
    fp_push((double)(int32_t)MEM32(ecx + 0x4)); /* 0x1408645A: fild dword ptr [ecx + 4] */
    esp = ebp; /* 0x1408645D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1408645F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086460: ret  */
L_14086461:
    fp_push(0.0); /* 0x14086461: fldz  */
    esp = ebp; /* 0x14086463: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086465: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086466: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x14086435u: goto L_14086435;
      case 0x14086453u: goto L_14086453;
      case 0x1408645Au: goto L_1408645A;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_14086480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086480u);

L_14086480:
    ecx = MEM32(edx); /* 0x14086480: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x14086482: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, 3 */ /* 0x14086483: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140864B0; /* 0x14086486: ja 0x140864b0 */
L_14086488:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x140864B4)); goto _ljump; }
L_1408648F:
    eax = MEM32(edx + 0x4); /* 0x1408648F: mov eax, dword ptr [edx + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086492: ret  */
L_14086493:
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x14086493: fld dword ptr [edx + 4] */
    fp_push(0.0); /* 0x14086496: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x14086498: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1408649A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1408649C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_140864B0; /* 0x1408649F: jnp 0x140864b0 */
L_140864A1:
    eax = 1; /* 0x140864A1: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140864A6: ret  */
L_140864A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140864A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x4), eax */ /* 0x140864A9: cmp dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x140864AC: setne al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140864AF: ret  */
L_140864B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140864B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140864B2: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1408648Fu: goto L_1408648F;
      case 0x14086493u: goto L_14086493;
      case 0x140864A7u: goto L_140864A7;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140864D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140864D0u);

L_140864D0:
    /* test ecx, ecx */ /* 0x140864D0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140864DB; /* 0x140864D2: jne 0x140864db */
L_140864D4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x140864D4: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140864D6: ret  */
L_140864D7:
    /* test ecx, ecx */ /* 0x140864D7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140864E6; /* 0x140864D9: je 0x140864e6 */
L_140864DB:
    /* cmp MEM32(ecx + 0x4), 0xAu */ /* 0x140864DB: cmp dword ptr [ecx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140864E6; /* 0x140864DF: jne 0x140864e6 */
L_140864E1:
    ecx = MEM32(ecx + 0x20); /* 0x140864E1: mov ecx, dword ptr [ecx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_140864D7; /* 0x140864E4: jmp 0x140864d7 */
L_140864E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140864E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), edx */ /* 0x140864E8: cmp dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x140864EB: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140864EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086500u);

L_14086500:
    ecx = edx; /* 0x14086500: mov ecx, edx */
L_14086502:
    /* test ecx, ecx */ /* 0x14086502: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086511; /* 0x14086504: je 0x14086511 */
L_14086506:
    /* cmp MEM32(ecx + 0x4), 0xAu */ /* 0x14086506: cmp dword ptr [ecx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086511; /* 0x1408650A: jne 0x14086511 */
L_1408650C:
    ecx = MEM32(ecx + 0x20); /* 0x1408650C: mov ecx, dword ptr [ecx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_14086502; /* 0x1408650F: jmp 0x14086502 */
L_14086511:
    PUSH32(esp, esi); /* 0x14086511: push esi */
    esi = 1; /* 0x14086512: mov esi, 1 */
L_14086517:
    /* test ecx, ecx */ /* 0x14086517: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408653F; /* 0x14086519: je 0x1408653f */
L_1408651B:
    /* cmp MEM32(ecx + 0x4), 7 */ /* 0x1408651B: cmp dword ptr [ecx + 4], 7 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1408653F; /* 0x1408651F: jne 0x1408653f */
L_14086521:
    edx = MEM32(ecx + 0x18); /* 0x14086521: mov edx, dword ptr [ecx + 0x18] */
    eax = ecx; /* 0x14086524: mov eax, ecx */
    ecx = edx; /* 0x14086526: mov ecx, edx */
L_14086528:
    /* test ecx, ecx */ /* 0x14086528: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086537; /* 0x1408652A: je 0x14086537 */
L_1408652C:
    /* cmp MEM32(ecx + 0x4), 0xAu */ /* 0x1408652C: cmp dword ptr [ecx + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086537; /* 0x14086530: jne 0x14086537 */
L_14086532:
    ecx = MEM32(ecx + 0x20); /* 0x14086532: mov ecx, dword ptr [ecx + 0x20] */
    RECOMP_BACKEDGE();
    goto L_14086528; /* 0x14086535: jmp 0x14086528 */
L_14086537:
    eax = MEM32(eax + 0x1C); /* 0x14086537: mov eax, dword ptr [eax + 0x1c] */
    esi = (uint32_t)((int32_t)esi * (int32_t)eax); /* 0x1408653A: imul esi, eax */
    RECOMP_BACKEDGE();
    goto L_14086517; /* 0x1408653D: jmp 0x14086517 */
L_1408653F:
    eax = edx; /* 0x1408653F: mov eax, edx */
    /* test edi, edi */ /* 0x14086541: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086547; /* 0x14086543: je 0x14086547 */
L_14086545:
    MEM32(edi) = esi; /* 0x14086545: mov dword ptr [edi], esi */
L_14086547:
    esi = POP32_VAL(esp); /* 0x14086547: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086548: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086550u);

L_14086550:
    edi = edi; /* 0x14086550: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086552: push ebp */
    ebp = esp; /* 0x14086553: mov ebp, esp */
    eax = MEM32(ecx); /* 0x14086555: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14086557: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x14086558: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp eax, 3 */ /* 0x1408655B: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140865A2; /* 0x1408655E: ja 0x140865a2 */
L_14086560:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140865A8)); goto _ljump; }
L_14086567:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086567: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x14086569: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1408656C: setne al */
    esp = ebp; /* 0x1408656F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086571: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086572: ret  */
L_14086573:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x14086573: fld dword ptr [ecx + 4] */
    _st[0] += *(double*)ADDR(0x14066858); /* 0x14086576: fadd qword ptr [0x14066858] */
    MEM16(ebp + (-0x2)) = _fpu_cw; /* 0x1408657C: fnstcw word ptr [ebp - 2] */
    eax = (uint32_t)MEM16(ebp + (-0x2)); /* 0x1408657F: movzx eax, word ptr [ebp - 2] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x14086583: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x14086588: mov dword ptr [ebp - 8], eax */
    _fpu_cw = MEM16(ebp + (-0x8)); /* 0x1408658B: fldcw word ptr [ebp - 8] */
    { int64_t _q = fp_st0_to_i64(_st[0], g_st_i64[0], _fpu_cw); (void)fp_pop(); MEM64(ebp + (-0xC)) = (uint64_t)_q; } /* 0x1408658E: fistp qword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0xC)); /* 0x14086591: mov eax, dword ptr [ebp - 0xc] */
    _fpu_cw = MEM16(ebp + (-0x2)); /* 0x14086594: fldcw word ptr [ebp - 2] */
    esp = ebp; /* 0x14086597: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086599: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408659A: ret  */
L_1408659B:
    eax = MEM32(ecx + 0x4); /* 0x1408659B: mov eax, dword ptr [ecx + 4] */
    esp = ebp; /* 0x1408659E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140865A0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140865A1: ret  */
L_140865A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140865A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; /* 0x140865A4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140865A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140865A7: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x14086567u: goto L_14086567;
      case 0x14086573u: goto L_14086573;
      case 0x1408659Bu: goto L_1408659B;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140865C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140865C0u);

L_140865C0:
    edi = edi; /* 0x140865C0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x140865C2: push ebx */
    PUSH32(esp, esi); /* 0x140865C3: push esi */
    esi = edx; /* 0x140865C4: mov esi, edx */
    /* test ecx, ecx */ /* 0x140865C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140865E3; /* 0x140865C8: je 0x140865e3 */
L_140865CA:
    edx = 0x7FFFFFFEu; /* 0x140865CA: mov edx, 0x7ffffffe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x140865CF: sub esi, eax */
    _flag_k = FK_CMP;
L_140865D1:
    /* test edx, edx */ /* 0x140865D1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140865EF; /* 0x140865D3: je 0x140865ef */
L_140865D5:
    SET_LO8(ebx, MEM8(esi + eax)); /* 0x140865D5: mov bl, byte ptr [esi + eax] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x140865D8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_140865EF; /* 0x140865DA: je 0x140865ef */
L_140865DC:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x140865DC: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140865DE: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x140865DF: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x140865E0: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140865D1; /* 0x140865E1: jne 0x140865d1 */
L_140865E3:
    esi = POP32_VAL(esp); /* 0x140865E3: pop esi */
    MEM8(eax + (-0x1)) = (uint8_t)(0); /* 0x140865E4: mov byte ptr [eax - 1], 0 */
    eax = 0x8007007Au; /* 0x140865E8: mov eax, 0x8007007a */
    ebx = POP32_VAL(esp); /* 0x140865ED: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140865EE: ret  */
L_140865EF:
    /* test ecx, ecx */ /* 0x140865EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_140865E3; /* 0x140865F1: je 0x140865e3 */
L_140865F3:
    esi = POP32_VAL(esp); /* 0x140865F3: pop esi */
    MEM8(eax) = (uint8_t)(0); /* 0x140865F4: mov byte ptr [eax], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140865F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140865F9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140865FA: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086600u);

L_14086600:
    edi = edi; /* 0x14086600: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086602: push ebp */
    ebp = esp; /* 0x14086603: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x14086605: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086608: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1408660A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086616; /* 0x1408660C: je 0x14086616 */
L_1408660E:
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x1408660E: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1408661B; /* 0x14086614: jbe 0x1408661b */
L_14086616:
    eax = 0x80070057u; /* 0x14086616: mov eax, 0x80070057 */
L_1408661B:
    /* test eax, eax */ /* 0x1408661B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1408662A; /* 0x1408661D: js 0x1408662a */
L_1408661F:
    edx = MEM32(ebp + 0x10); /* 0x1408661F: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x14086622: mov eax, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_140865C0); /* 0x14086625: call 0x140865c0 */
    RECOMP_FLAGS_IN();
L_1408662A:
    ebp = POP32_VAL(esp); /* 0x1408662A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1408662B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_14086640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086640u);

L_14086640:
    edi = edi; /* 0x14086640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086642: push ebp */
    ebp = esp; /* 0x14086643: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x14086645: push ebx */
    PUSH32(esp, esi); /* 0x14086646: push esi */
    PUSH32(esp, edi); /* 0x14086647: push edi */
    esi = eax; /* 0x14086648: mov esi, eax */
    PUSH32(esp, 0x3Au); /* 0x1408664A: push 0x3a */
    PUSH32(esp, MEM32(esi)); /* 0x1408664C: push dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1408664E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x14001160)); /* 0x14086650: call dword ptr [0x14001160] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x14086656: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14086658: add esp, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1408665B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086666; /* 0x1408665D: jne 0x14086666 */
L_1408665F:
    edi = POP32_VAL(esp); /* 0x1408665F: pop edi */
    esi = POP32_VAL(esp); /* 0x14086660: pop esi */
    ebx = POP32_VAL(esp); /* 0x14086661: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14086662: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086663: ret 4 */
L_14086666:
    /* cmp edi, MEM32(esi) */ /* 0x14086666: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140866B0; /* 0x14086668: jne 0x140866b0 */
L_1408666A:
    ecx = MEM32(ebp + 0x8); /* 0x1408666A: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x1408666D: add ecx, 0x30 */
    _flag_k = FK_ADD;
    esi = 0x14038864u; /* 0x14086670: mov esi, 0x14038864 */
    edx = 0xFEu; /* 0x14086675: mov edx, 0xfe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1408667A: sub esi, ecx */
    _flag_k = FK_CMP;
    esp = esp; /* 0x1408667C: lea esp, [esp] */
L_14086680:
    eax = edx + 0x7FFFFF00; /* 0x14086680: lea eax, [edx + 0x7fffff00] */
    /* test eax, eax */ /* 0x14086686: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086798; /* 0x14086688: je 0x14086798 */
L_1408668E:
    SET_LO8(eax, MEM8(esi + ecx)); /* 0x1408668E: mov al, byte ptr [esi + ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x14086691: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086798; /* 0x14086693: je 0x14086798 */
L_14086699:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x14086699: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1408669B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1408669C: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_14086680; /* 0x1408669D: jne 0x14086680 */
L_1408669F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1408669F: dec ecx */
    _flag_k = FK_DEC;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x140866A0: mov byte ptr [ecx], bl */
    edi = POP32_VAL(esp); /* 0x140866A2: pop edi */
    ebx = 0x80004005u; /* 0x140866A3: mov ebx, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x140866A8: pop esi */
    eax = ebx; /* 0x140866A9: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140866AB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140866AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140866AD: ret 4 */
L_140866B0:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x140866B0: mov byte ptr [edi], bl */
    PUSH32(esp, MEM32(esi)); /* 0x140866B2: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x14001144)); /* 0x140866B4: call dword ptr [0x14001144] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140866BA: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140866BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1408675B; /* 0x140866BF: js 0x1408675b */
L_140866C5:
    /* cmp eax, 0xFFu */ /* 0x140866C5: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1408675B; /* 0x140866CA: jg 0x1408675b */
L_140866D0:
    ecx = MEM32(ebp + 0x8); /* 0x140866D0: mov ecx, dword ptr [ebp + 8] */
    MEM8(ecx + 0x1E) = (uint8_t)(LO8(eax)); /* 0x140866D3: mov byte ptr [ecx + 0x1e], al */
    /* cmp MEM32(esi), edi */ /* 0x140866D6: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140866F9; /* 0x140866D8: jae 0x140866f9 */
L_140866DA:
    ebx = ebx; /* 0x140866DA: lea ebx, [ebx] */
L_140866E0:
    eax = MEM32(esi); /* 0x140866E0: mov eax, dword ptr [esi] */
    eax = (uint32_t)MEM8(eax); /* 0x140866E2: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x140866E5: push eax */
    RECOMP_ICALL(MEM32(0x14001148)); /* 0x140866E6: call dword ptr [0x14001148] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140866EC: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x140866EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408672E; /* 0x140866F1: je 0x1408672e */
L_140866F3:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x140866F3: inc dword ptr [esi] */
    _flag_k = FK_INC;
    /* cmp MEM32(esi), edi */ /* 0x140866F5: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140866E0; /* 0x140866F7: jb 0x140866e0 */
L_140866F9:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x140866F9: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x140866FB: mov eax, dword ptr [esi] */
    eax = (uint32_t)MEM8(eax); /* 0x140866FD: movzx eax, byte ptr [eax] */
    edi = MEM32(0x14001124); /* 0x14086700: mov edi, dword ptr [0x14001124] */
    PUSH32(esp, eax); /* 0x14086706: push eax */
    RECOMP_ICALL(edi); /* 0x14086707: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086709: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1408670C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140867A4; /* 0x1408670E: je 0x140867a4 */
L_14086714:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x14086714: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x14086716: mov eax, dword ptr [esi] */
    eax = (uint32_t)MEM8(eax); /* 0x14086718: movzx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x1408671B: push eax */
    RECOMP_ICALL(edi); /* 0x1408671C: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408671E: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14086721: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086714; /* 0x14086723: jne 0x14086714 */
L_14086725:
    edi = POP32_VAL(esp); /* 0x14086725: pop edi */
    esi = POP32_VAL(esp); /* 0x14086726: pop esi */
    eax = ebx; /* 0x14086727: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x14086729: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1408672A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1408672B: ret 4 */
L_1408672E:
    eax = MEM32(esi); /* 0x1408672E: mov eax, dword ptr [esi] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x14086730: movsx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x14086733: push eax */
    eax = MEM32(ebp + 0x8); /* 0x14086734: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x14038894u); /* 0x14086737: push 0x14038894 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x1408673C: add eax, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xFEu); /* 0x1408673F: push 0xfe */
    PUSH32(esp, eax); /* 0x14086744: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x14086745: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1408674A: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1408674D: pop edi */
    ebx = 0x80004005u; /* 0x1408674E: mov ebx, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x14086753: pop esi */
    eax = ebx; /* 0x14086754: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x14086756: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14086757: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086758: ret 4 */
L_1408675B:
    ecx = MEM32(ebp + 0x8); /* 0x1408675B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x1408675E: add ecx, 0x30 */
    _flag_k = FK_ADD;
    esi = 0x14038864u; /* 0x14086761: mov esi, 0x14038864 */
    edx = 0xFEu; /* 0x14086766: mov edx, 0xfe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1408676B: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = ecx; /* 0x1408676D: lea ecx, [ecx] */
L_14086770:
    eax = edx + 0x7FFFFF00; /* 0x14086770: lea eax, [edx + 0x7fffff00] */
    /* test eax, eax */ /* 0x14086776: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086798; /* 0x14086778: je 0x14086798 */
L_1408677A:
    SET_LO8(eax, MEM8(esi + ecx)); /* 0x1408677A: mov al, byte ptr [esi + ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1408677D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086798; /* 0x1408677F: je 0x14086798 */
L_14086781:
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x14086781: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14086783: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x14086784: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_14086770; /* 0x14086785: jne 0x14086770 */
L_14086787:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x14086787: dec ecx */
    _flag_k = FK_DEC;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x14086788: mov byte ptr [ecx], bl */
    edi = POP32_VAL(esp); /* 0x1408678A: pop edi */
    ebx = 0x80004005u; /* 0x1408678B: mov ebx, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x14086790: pop esi */
    eax = ebx; /* 0x14086791: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x14086793: pop ebx */
    ebp = POP32_VAL(esp); /* 0x14086794: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086795: ret 4 */
L_14086798:
    /* test edx, edx */ /* 0x14086798: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408679D; /* 0x1408679A: jne 0x1408679d */
L_1408679C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1408679C: dec ecx */
    _flag_k = FK_DEC;
L_1408679D:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1408679D: mov byte ptr [ecx], bl */
    ebx = 0x80004005u; /* 0x1408679F: mov ebx, 0x80004005 */
L_140867A4:
    edi = POP32_VAL(esp); /* 0x140867A4: pop edi */
    esi = POP32_VAL(esp); /* 0x140867A5: pop esi */
    eax = ebx; /* 0x140867A6: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140867A8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x140867A9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140867AA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140867C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140867C0u);

L_140867C0:
    edi = edi; /* 0x140867C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140867C2: push ebp */
    ebp = esp; /* 0x140867C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x140867C5: push esi */
    PUSH32(esp, 0x2Eu); /* 0x140867C6: push 0x2e */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x140867C8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x14001160)); /* 0x140867CB: call dword ptr [0x14001160] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x140867D1: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140867D3: add esp, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x140867D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140867E3; /* 0x140867D8: jne 0x140867e3 */
L_140867DA:
    MEM8(edi + 0x1D) = (uint8_t)(4); /* 0x140867DA: mov byte ptr [edi + 0x1d], 4 */
    esi = POP32_VAL(esp); /* 0x140867DE: pop esi */
    ebp = POP32_VAL(esp); /* 0x140867DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140867E0: ret 4 */
L_140867E3:
    MEM8(esi) = (uint8_t)(0); /* 0x140867E3: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x140867E6: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x140867E7: push ebx */
    ebx = esi; /* 0x140867E8: mov ebx, esi */
    ecx = ebx + 0x1; /* 0x140867EA: lea ecx, [ebx + 1] */
    ecx = ecx; /* 0x140867ED: lea ecx, [ecx] */
L_140867F0:
    SET_LO8(eax, MEM8(ebx)); /* 0x140867F0: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x140867F2: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x140867F3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140867F0; /* 0x140867F5: jne 0x140867f0 */
L_140867F7:
    PUSH32(esp, esi); /* 0x140867F7: push esi */
    PUSH32(esp, 0x14035770u); /* 0x140867F8: push 0x14035770 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x140867FD: sub ebx, ecx */
    _flag_k = FK_CMP;
    RECOMP_ICALL(MEM32(0x14001128)); /* 0x140867FF: call dword ptr [0x14001128] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14086805: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14086808: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086813; /* 0x1408680A: je 0x14086813 */
L_1408680C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14035770u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x14035770u; /* 0x1408680C: sub eax, 0x14035770 */
    _flag_k = FK_CMP;
    goto L_1408682B; /* 0x14086811: jmp 0x1408682b */
L_14086813:
    PUSH32(esp, esi); /* 0x14086813: push esi */
    PUSH32(esp, 0x14038820u); /* 0x14086814: push 0x14038820 */
    RECOMP_ICALL(MEM32(0x14001128)); /* 0x14086819: call dword ptr [0x14001128] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1408681F: add esp, 8 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14086822: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086842; /* 0x14086824: je 0x14086842 */
L_14086826:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14038820u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x14038820u; /* 0x14086826: sub eax, 0x14038820 */
    _flag_k = FK_CMP;
L_1408682B:
    /* test ebx, ebx */ /* 0x1408682B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086834; /* 0x1408682D: jne 0x14086834 */
L_1408682F:
    ebx = 4; /* 0x1408682F: mov ebx, 4 */
L_14086834:
    MEM8(edi + 0x1D) = (uint8_t)(LO8(ebx)); /* 0x14086834: mov byte ptr [edi + 0x1d], bl */
    ebx = POP32_VAL(esp); /* 0x14086837: pop ebx */
    MEM8(edi + 0x1C) = (uint8_t)(LO8(eax)); /* 0x14086838: mov byte ptr [edi + 0x1c], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408683B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1408683D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1408683E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1408683F: ret 4 */
L_14086842:
    PUSH32(esp, esi); /* 0x14086842: push esi */
    PUSH32(esp, 0x14038828u); /* 0x14086843: push 0x14038828 */
    eax = edi + 0x30; /* 0x14086848: lea eax, [edi + 0x30] */
    PUSH32(esp, 0xFEu); /* 0x1408684B: push 0xfe */
    PUSH32(esp, eax); /* 0x14086850: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x14086851: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x14086856: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x14086859: pop ebx */
    eax = 0x80004005u; /* 0x1408685A: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x1408685F: pop esi */
    ebp = POP32_VAL(esp); /* 0x14086860: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086861: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14086870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086870u);

L_14086870:
    edi = edi; /* 0x14086870: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086872: push ebp */
    ebp = esp; /* 0x14086873: mov ebp, esp */
    PUSH32(esp, esi); /* 0x14086875: push esi */
    esi = ebx; /* 0x14086876: mov esi, ebx */
    ecx = esi + 0x1; /* 0x14086878: lea ecx, [esi + 1] */
    goto L_14086880; /* 0x1408687B: jmp 0x14086880 */
L_14086880:
    SET_LO8(eax, MEM8(esi)); /* 0x14086880: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14086882: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x14086883: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086880; /* 0x14086885: jne 0x14086880 */
L_14086887:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x14086887: sub esi, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x14086889: push edi */
    edi = MEM32(0x14001148); /* 0x1408688A: mov edi, dword ptr [0x14001148] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_140868A4; /* 0x14086890: je 0x140868a4 */
L_14086892:
    eax = (uint32_t)MEM8(ebx + esi + (-0x1)); /* 0x14086892: movzx eax, byte ptr [ebx + esi - 1] */
    PUSH32(esp, eax); /* 0x14086897: push eax */
    RECOMP_ICALL(edi); /* 0x14086898: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408689A: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1408689D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140868A4; /* 0x1408689F: je 0x140868a4 */
L_140868A1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x140868A1: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_14086892; /* 0x140868A2: jne 0x14086892 */
L_140868A4:
    eax = (uint32_t)MEM8(esi + ebx); /* 0x140868A4: movzx eax, byte ptr [esi + ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x140868A8: add esi, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x140868AA: push eax */
    RECOMP_ICALL(edi); /* 0x140868AB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140868AD: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x140868B0: pop edi */
    /* test eax, eax */ /* 0x140868B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140868CF; /* 0x140868B3: je 0x140868cf */
L_140868B5:
    PUSH32(esp, esi); /* 0x140868B5: push esi */
    RECOMP_ICALL(MEM32(0x14001144)); /* 0x140868B6: call dword ptr [0x14001144] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x140868BC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140868BF: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x18) = eax; /* 0x140868C2: mov dword ptr [ecx + 0x18], eax */
    MEM8(esi) = (uint8_t)(0); /* 0x140868C5: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140868C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140868CA: pop esi */
    ebp = POP32_VAL(esp); /* 0x140868CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140868CC: ret 4 */
L_140868CF:
    eax = MEM32(ebp + 0x8); /* 0x140868CF: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x18) = 0; /* 0x140868D2: mov dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140868D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x140868DB: pop esi */
    ebp = POP32_VAL(esp); /* 0x140868DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x140868DD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140868F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140868F0u);

L_140868F0:
    edi = edi; /* 0x140868F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140868F2: push ebp */
    ebp = esp; /* 0x140868F3: mov ebp, esp */
    PUSH32(esp, edi); /* 0x140868F5: push edi */
    edi = eax; /* 0x140868F6: mov edi, eax */
    MEM32(edi + 0x10) = 0; /* 0x140868F8: mov dword ptr [edi + 0x10], 0 */
    MEM32(edi + 0x14) = 0; /* 0x140868FF: mov dword ptr [edi + 0x14], 0 */
    MEM32(edi + 0x18) = 0; /* 0x14086906: mov dword ptr [edi + 0x18], 0 */
    PUSH32(esp, edi); /* 0x1408690D: push edi */
    eax = ebp + 0x8; /* 0x1408690E: lea eax, [ebp + 8] */
    MEM32(edi + 0x1C) = 0; /* 0x14086911: mov dword ptr [edi + 0x1c], 0 */
    RECOMP_CALL(sub_14086640); /* 0x14086918: call 0x14086640 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408691D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14086973; /* 0x1408691F: js 0x14086973 */
L_14086921:
    PUSH32(esp, ebx); /* 0x14086921: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x14086922: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x14086925: push ebx */
    RECOMP_CALL(sub_140867C0); /* 0x14086926: call 0x140867c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408692B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14086972; /* 0x1408692D: js 0x14086972 */
L_1408692F:
    PUSH32(esp, esi); /* 0x1408692F: push esi */
    PUSH32(esp, edi); /* 0x14086930: push edi */
    RECOMP_CALL(sub_14086870); /* 0x14086931: call 0x14086870 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x14086936: mov esi, eax */
    /* test esi, esi */ /* 0x14086938: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14086971; /* 0x1408693A: js 0x14086971 */
L_1408693C:
    edx = ebx; /* 0x1408693C: mov edx, ebx */
    ecx = 0x14038818u; /* 0x1408693E: mov ecx, 0x14038818 */
L_14086943:
    SET_LO8(eax, MEM8(ecx)); /* 0x14086943: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), MEM8(edx) */ /* 0x14086945: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086963; /* 0x14086947: jne 0x14086963 */
L_14086949:
    /* test LO8(eax), LO8(eax) */ /* 0x14086949: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408695F; /* 0x1408694B: je 0x1408695f */
L_1408694D:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x1408694D: mov al, byte ptr [ecx + 1] */
    /* cmp LO8(eax), MEM8(edx + 0x1) */ /* 0x14086950: cmp al, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086963; /* 0x14086953: jne 0x14086963 */
L_14086955:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x14086955: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x14086958: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1408695B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086943; /* 0x1408695D: jne 0x14086943 */
L_1408695F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408695F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14086968; /* 0x14086961: jmp 0x14086968 */
L_14086963:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14086963: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x14086965: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_14086968:
    /* test eax, eax */ /* 0x14086968: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x1408696A: mov eax, esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086971; /* 0x1408696C: je 0x14086971 */
L_1408696E:
    MEM32(edi + 0x14) = ebx; /* 0x1408696E: mov dword ptr [edi + 0x14], ebx */
L_14086971:
    esi = POP32_VAL(esp); /* 0x14086971: pop esi */
L_14086972:
    ebx = POP32_VAL(esp); /* 0x14086972: pop ebx */
L_14086973:
    edi = POP32_VAL(esp); /* 0x14086973: pop edi */
    ebp = POP32_VAL(esp); /* 0x14086974: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086975: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_14086980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086980u);

L_14086980:
    ecx = MEM32(edi + 0x4); /* 0x14086980: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x14086983: push ebx */
    PUSH32(esp, esi); /* 0x14086984: push esi */
    /* cmp eax, ecx */ /* 0x14086985: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140869E6; /* 0x14086987: jbe 0x140869e6 */
L_14086989:
    esi = ecx + ecx; /* 0x14086989: lea esi, [ecx + ecx] */
    /* cmp esi, eax */ /* 0x1408698C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14086992; /* 0x1408698E: ja 0x14086992 */
L_14086990:
    esi = eax; /* 0x14086990: mov esi, eax */
L_14086992:
    /* cmp esi, 0x10u */ /* 0x14086992: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1408699C; /* 0x14086995: jae 0x1408699c */
L_14086997:
    esi = 0x10u; /* 0x14086997: mov esi, 0x10 */
L_1408699C:
    /* cmp esi, ecx */ /* 0x1408699C: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140869EB; /* 0x1408699E: jb 0x140869eb */
L_140869A0:
    /* cmp esi, MEM32(edi + 0x8) */ /* 0x140869A0: cmp esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_140869EB; /* 0x140869A3: jb 0x140869eb */
L_140869A5:
    /* cmp esi, 0x0FFFFFFFu */ /* 0x140869A5: cmp esi, 0xfffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140869EB; /* 0x140869AB: jae 0x140869eb */
L_140869AD:
    eax = esi; /* 0x140869AD: mov eax, esi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x140869AF: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x140869AF: shl eax, 4 */
    PUSH32(esp, eax); /* 0x140869B2: push eax */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x140869B3: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x140869B9: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140869BB: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x140869BE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140869EB; /* 0x140869C0: je 0x140869eb */
L_140869C2:
    ecx = MEM32(edi); /* 0x140869C2: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x140869C4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140869E1; /* 0x140869C6: je 0x140869e1 */
L_140869C8:
    eax = MEM32(edi + 0x8); /* 0x140869C8: mov eax, dword ptr [edi + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x140869CB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x140869CB: shl eax, 4 */
    PUSH32(esp, eax); /* 0x140869CE: push eax */
    PUSH32(esp, ecx); /* 0x140869CF: push ecx */
    PUSH32(esp, ebx); /* 0x140869D0: push ebx */
    RECOMP_CALL(sub_141EC9A4); /* 0x140869D1: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x140869D6: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140869D8: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140869DE: add esp, 0x10 */
    _flag_k = FK_ADD;
L_140869E1:
    MEM32(edi) = ebx; /* 0x140869E1: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = esi; /* 0x140869E3: mov dword ptr [edi + 4], esi */
L_140869E6:
    esi = POP32_VAL(esp); /* 0x140869E6: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140869E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x140869E9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140869EA: ret  */
L_140869EB:
    esi = POP32_VAL(esp); /* 0x140869EB: pop esi */
    MEM32(edi + 0xC) = 0x8007000Eu; /* 0x140869EC: mov dword ptr [edi + 0xc], 0x8007000e */
    eax = 0x8007000Eu; /* 0x140869F3: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x140869F8: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140869F9: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086A00u);

L_14086A00:
    edi = edi; /* 0x14086A00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086A02: push ebp */
    ebp = esp; /* 0x14086A03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x14086A05: sub esp, 8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x14086A08: push ebx */
    PUSH32(esp, edi); /* 0x14086A09: push edi */
    edi = MEM32(ebp + 0x8); /* 0x14086A0A: mov edi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x14086A0D: mov ebx, eax */
    MEM32(ebp + (-0x4)) = 0; /* 0x14086A0F: mov dword ptr [ebp - 4], 0 */
    MEM8(edi + 0x30) = (uint8_t)(0); /* 0x14086A16: mov byte ptr [edi + 0x30], 0 */
    /* test ebx, ebx */ /* 0x14086A1A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086A26; /* 0x14086A1C: jne 0x14086a26 */
L_14086A1E:
    edi = POP32_VAL(esp); /* 0x14086A1E: pop edi */
    ebx = POP32_VAL(esp); /* 0x14086A1F: pop ebx */
    esp = ebp; /* 0x14086A20: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086A22: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086A23: ret 4 */
L_14086A26:
    PUSH32(esp, esi); /* 0x14086A26: push esi */
    esi = ebx; /* 0x14086A27: mov esi, ebx */
    ecx = esi + 0x1; /* 0x14086A29: lea ecx, [esi + 1] */
    esp = esp; /* 0x14086A2C: lea esp, [esp] */
L_14086A30:
    SET_LO8(eax, MEM8(esi)); /* 0x14086A30: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14086A32: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x14086A33: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086A30; /* 0x14086A35: jne 0x14086a30 */
L_14086A37:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x14086A37: sub esi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_14086A46; /* 0x14086A39: jne 0x14086a46 */
L_14086A3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086A3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_14086A3D:
    esi = POP32_VAL(esp); /* 0x14086A3D: pop esi */
    edi = POP32_VAL(esp); /* 0x14086A3E: pop edi */
    ebx = POP32_VAL(esp); /* 0x14086A3F: pop ebx */
    esp = ebp; /* 0x14086A40: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086A42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086A43: ret 4 */
L_14086A46:
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x14086A46: push dword ptr [edi + 0x20] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086A49: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x14086A4F: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x14086A50: push esi */
    MEM32(edi + 0x20) = 0; /* 0x14086A51: mov dword ptr [edi + 0x20], 0 */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14086A58: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14086A5E: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x20) = eax; /* 0x14086A61: mov dword ptr [edi + 0x20], eax */
    /* test eax, eax */ /* 0x14086A64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086A76; /* 0x14086A66: jne 0x14086a76 */
L_14086A68:
    esi = POP32_VAL(esp); /* 0x14086A68: pop esi */
    edi = POP32_VAL(esp); /* 0x14086A69: pop edi */
    eax = 0x8007000Eu; /* 0x14086A6A: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14086A6F: pop ebx */
    esp = ebp; /* 0x14086A70: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086A72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x14086A73: ret 4 */
L_14086A76:
    /* test esi, esi */ /* 0x14086A76: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086A8B; /* 0x14086A78: je 0x14086a8b */
L_14086A7A:
    /* cmp esi, 0x7FFFFFFFu */ /* 0x14086A7A: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14086A8B; /* 0x14086A80: ja 0x14086a8b */
L_14086A82:
    edx = ebx; /* 0x14086A82: mov edx, ebx */
    ecx = esi; /* 0x14086A84: mov ecx, esi */
    RECOMP_CALL(sub_140865C0); /* 0x14086A86: call 0x140865c0 */
    RECOMP_FLAGS_IN();
L_14086A8B:
    edi = MEM32(edi + 0x20); /* 0x14086A8B: mov edi, dword ptr [edi + 0x20] */
    ebx = MEM32(0x14001124); /* 0x14086A8E: mov ebx, dword ptr [0x14001124] */
L_14086A94:
    PUSH32(esp, 0x3Bu); /* 0x14086A94: push 0x3b */
    PUSH32(esp, edi); /* 0x14086A96: push edi */
    RECOMP_ICALL(MEM32(0x14001160)); /* 0x14086A97: call dword ptr [0x14001160] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14086A9D: add esp, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x14086AA0: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x14086AA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086AAF; /* 0x14086AA5: je 0x14086aaf */
L_14086AA7:
    MEM8(eax) = (uint8_t)(0); /* 0x14086AA7: mov byte ptr [eax], 0 */
    esi = eax + (-0x1); /* 0x14086AAA: lea esi, [eax - 1] */
    goto L_14086AC0; /* 0x14086AAD: jmp 0x14086ac0 */
L_14086AAF:
    ecx = edi; /* 0x14086AAF: mov ecx, edi */
    edx = ecx + 0x1; /* 0x14086AB1: lea edx, [ecx + 1] */
L_14086AB4:
    SET_LO8(eax, MEM8(ecx)); /* 0x14086AB4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x14086AB6: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x14086AB7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086AB4; /* 0x14086AB9: jne 0x14086ab4 */
L_14086ABB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x14086ABB: sub ecx, edx */
    _flag_k = FK_CMP;
    esi = ecx + edi; /* 0x14086ABD: lea esi, [ecx + edi] */
L_14086AC0:
    eax = (uint32_t)MEM8(edi); /* 0x14086AC0: movzx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x14086AC3: push eax */
    RECOMP_ICALL(ebx); /* 0x14086AC4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086AC6: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14086AC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086ADF; /* 0x14086ACB: je 0x14086adf */
L_14086ACD:
    ecx = ecx; /* 0x14086ACD: lea ecx, [ecx] */
L_14086AD0:
    eax = (uint32_t)MEM8(edi + 0x1); /* 0x14086AD0: movzx eax, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14086AD4: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x14086AD5: push eax */
    RECOMP_ICALL(ebx); /* 0x14086AD6: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086AD8: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14086ADB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14086AD0; /* 0x14086ADD: jne 0x14086ad0 */
L_14086ADF:
    /* cmp esi, edi */ /* 0x14086ADF: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086AF8; /* 0x14086AE1: jbe 0x14086af8 */
L_14086AE3:
    eax = (uint32_t)MEM8(esi); /* 0x14086AE3: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x14086AE6: push eax */
    RECOMP_ICALL(ebx); /* 0x14086AE7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086AE9: add esp, 4 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x14086AEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086AF8; /* 0x14086AEE: je 0x14086af8 */
L_14086AF0:
    MEM8(esi) = (uint8_t)(0); /* 0x14086AF0: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x14086AF3: dec esi */
    _flag_k = FK_DEC;
    /* cmp esi, edi */ /* 0x14086AF4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_14086AE3; /* 0x14086AF6: ja 0x14086ae3 */
L_14086AF8:
    /* cmp MEM8(edi), 0 */ /* 0x14086AF8: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086B5D; /* 0x14086AFB: je 0x14086b5d */
L_14086AFD:
    PUSH32(esp, edi); /* 0x14086AFD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x14086AFE: mov edi, dword ptr [ebp + 8] */
    eax = edi; /* 0x14086B01: mov eax, edi */
    RECOMP_CALL(sub_140868F0); /* 0x14086B03: call 0x140868f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14086B08: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14086A3D; /* 0x14086B0A: js 0x14086a3d */
L_14086B10:
    eax = MEM32(edi + 0x8); /* 0x14086B10: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x14086B13: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x10) = 0; /* 0x14086B14: mov dword ptr [edi + 0x10], 0 */
    RECOMP_CALL(sub_14086980); /* 0x14086B1B: call 0x14086980 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14086B20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14086B34; /* 0x14086B22: jns 0x14086b34 */
L_14086B24:
    eax = MEM32(edi + 0xC); /* 0x14086B24: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14086B27: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x14086B2A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14086A3D; /* 0x14086B2C: js 0x14086a3d */
L_14086B32:
    goto L_14086B60; /* 0x14086B32: jmp 0x14086b60 */
L_14086B34:
    ecx = MEM32(edi + 0x8); /* 0x14086B34: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0x10); /* 0x14086B37: mov eax, dword ptr [edi + 0x10] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x14086B3A: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x14086B3A: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi); /* 0x14086B3D: add ecx, dword ptr [edi] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x14086B3F: mov dword ptr [ecx], eax */
    eax = MEM32(edi + 0x14); /* 0x14086B41: mov eax, dword ptr [edi + 0x14] */
    MEM32(ecx + 0x4) = eax; /* 0x14086B44: mov dword ptr [ecx + 4], eax */
    eax = MEM32(edi + 0x18); /* 0x14086B47: mov eax, dword ptr [edi + 0x18] */
    MEM32(ecx + 0x8) = eax; /* 0x14086B4A: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edi + 0x1C); /* 0x14086B4D: mov eax, dword ptr [edi + 0x1c] */
    MEM32(ecx + 0xC) = eax; /* 0x14086B50: mov dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x14086B53: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086B56: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x14086B58: mov dword ptr [ebp - 4], eax */
    goto L_14086B60; /* 0x14086B5B: jmp 0x14086b60 */
L_14086B5D:
    eax = MEM32(ebp + (-0x4)); /* 0x14086B5D: mov eax, dword ptr [ebp - 4] */
L_14086B60:
    edi = MEM32(ebp + (-0x8)); /* 0x14086B60: mov edi, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x14086B63: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086A3D; /* 0x14086B65: je 0x14086a3d */
L_14086B6B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14086B6B: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_14086A94; /* 0x14086B6C: jmp 0x14086a94 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_14086B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086B80u);

L_14086B80:
    edi = edi; /* 0x14086B80: mov edi, edi */
    PUSH32(esp, ebx); /* 0x14086B82: push ebx */
    PUSH32(esp, esi); /* 0x14086B83: push esi */
    esi = edi + 0x20; /* 0x14086B84: lea esi, [edi + 0x20] */
    ebx = 4; /* 0x14086B87: mov ebx, 4 */
    esp = esp; /* 0x14086B8C: lea esp, [esp] */
L_14086B90:
    PUSH32(esp, MEM32(esi)); /* 0x14086B90: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086B92: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0; /* 0x14086B98: mov dword ptr [esi], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086B9E: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x14086BA1: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x14086BA4: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_14086B90; /* 0x14086BA5: jne 0x14086b90 */
L_14086BA7:
    PUSH32(esp, MEM32(edi)); /* 0x14086BA7: push dword ptr [edi] */
    MEM32(edi + 0x8) = ebx; /* 0x14086BA9: mov dword ptr [edi + 8], ebx */
    MEM32(edi + 0xC) = ebx; /* 0x14086BAC: mov dword ptr [edi + 0xc], ebx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086BAF: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086BB5: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x14086BB8: pop esi */
    MEM32(edi) = ebx; /* 0x14086BB9: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = ebx; /* 0x14086BBB: mov dword ptr [edi + 4], ebx */
    ebx = POP32_VAL(esp); /* 0x14086BBE: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086BBF: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086BD0u);

L_14086BD0:
    /* cmp MEM32(eax), 2 */ /* 0x14086BD0: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x1C); /* 0x14086BD3: mov ecx, dword ptr [eax + 0x1c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086C10; /* 0x14086BD6: jne 0x14086c10 */
L_14086BD8:
    /* cmp ecx, 6 */ /* 0x14086BD8: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086BDB: je 0x14086c0a */
L_14086BDD:
    /* cmp ecx, 0x1Au */ /* 0x14086BDD: cmp ecx, 0x1a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086BE0: je 0x14086c0a */
L_14086BE2:
    /* cmp ecx, 0x1Du */ /* 0x14086BE2: cmp ecx, 0x1d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086BE5: je 0x14086c0a */
L_14086BE7:
    /* cmp ecx, 0x1Eu */ /* 0x14086BE7: cmp ecx, 0x1e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086BEA: je 0x14086c0a */
L_14086BEC:
    /* cmp ecx, 0x1Cu */ /* 0x14086BEC: cmp ecx, 0x1c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086BEF: je 0x14086c0a */
L_14086BF1:
    /* cmp ecx, 7 */ /* 0x14086BF1: cmp ecx, 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086BF4: je 0x14086c0a */
L_14086BF6:
    /* cmp ecx, 8 */ /* 0x14086BF6: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086BF9: je 0x14086c0a */
L_14086BFB:
    /* cmp ecx, 0x1Bu */ /* 0x14086BFB: cmp ecx, 0x1b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086BFE: je 0x14086c0a */
L_14086C00:
    /* cmp ecx, 5 */ /* 0x14086C00: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086C0A; /* 0x14086C03: je 0x14086c0a */
L_14086C05:
    /* cmp ecx, 0x19u */ /* 0x14086C05: cmp ecx, 0x19 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086C10; /* 0x14086C08: jne 0x14086c10 */
L_14086C0A:
    eax = 1; /* 0x14086C0A: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086C0F: ret  */
L_14086C10:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086C10: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086C12: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086C20u);

L_14086C20:
    MEM32(eax) = 0; /* 0x14086C20: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x14086C26: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x14086C2D: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x14086C34: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x14086C3B: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x14086C42: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x14086C49: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x14086C50: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x14086C57: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x14086C5E: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x14086C65: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x14086C6C: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x30) = 0; /* 0x14086C73: mov dword ptr [eax + 0x30], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086C7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086CC0u);

L_14086CC0:
    /* cmp MEM32(eax), 2 */ /* 0x14086CC0: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086CD1; /* 0x14086CC3: jne 0x14086cd1 */
L_14086CC5:
    /* cmp MEM32(eax + 0x1C), 0x15u */ /* 0x14086CC5: cmp dword ptr [eax + 0x1c], 0x15 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086CD1; /* 0x14086CC9: jne 0x14086cd1 */
L_14086CCB:
    eax = 1; /* 0x14086CCB: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086CD0: ret  */
L_14086CD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086CD1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086CD3: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086CE0u);

L_14086CE0:
    /* cmp MEM32(eax), 2 */ /* 0x14086CE0: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x1C); /* 0x14086CE3: mov ecx, dword ptr [eax + 0x1c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086D02; /* 0x14086CE6: jne 0x14086d02 */
L_14086CE8:
    /* cmp ecx, 2 */ /* 0x14086CE8: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086CFC; /* 0x14086CEB: je 0x14086cfc */
L_14086CED:
    /* cmp ecx, 3 */ /* 0x14086CED: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086CFC; /* 0x14086CF0: je 0x14086cfc */
L_14086CF2:
    /* cmp ecx, 4 */ /* 0x14086CF2: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14086CFC; /* 0x14086CF5: je 0x14086cfc */
L_14086CF7:
    /* cmp ecx, 0x15u */ /* 0x14086CF7: cmp ecx, 0x15 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086D02; /* 0x14086CFA: jne 0x14086d02 */
L_14086CFC:
    eax = 1; /* 0x14086CFC: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086D01: ret  */
L_14086D02:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086D02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086D04: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086D10u);

L_14086D10:
    MEM32(eax + 0x3C) = 0; /* 0x14086D10: mov dword ptr [eax + 0x3c], 0 */
    MEM32(eax + 0x30) = 0; /* 0x14086D17: mov dword ptr [eax + 0x30], 0 */
    MEM32(eax + 0x34) = 0; /* 0x14086D1E: mov dword ptr [eax + 0x34], 0 */
    MEM32(eax + 0x38) = 0; /* 0x14086D25: mov dword ptr [eax + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0xFFFFFFFEu; /* 0x14086D2C: and dword ptr [eax + 0xc], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0; /* 0x14086D30: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x14086D36: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x14086D3D: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0x20) = 0; /* 0x14086D44: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x14086D4B: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x14086D52: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x14086D59: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x10) = 0; /* 0x14086D60: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x1C) = 0xFFFFFFFFu; /* 0x14086D67: mov dword ptr [eax + 0x1c], 0xffffffff */
    MEM32(eax + 0x18) = 0; /* 0x14086D6E: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x14) = 0; /* 0x14086D75: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x40) = 0; /* 0x14086D7C: mov dword ptr [eax + 0x40], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086D83: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086D90u);

L_14086D90:
    /* test eax, eax */ /* 0x14086D90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086D98; /* 0x14086D92: je 0x14086d98 */
L_14086D94:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x14086D94: add eax, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086D97: ret  */
L_14086D98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086D98: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086D9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086DA0u);

L_14086DA0:
    PUSH32(esp, 0x48u); /* 0x14086DA0: push 0x48 */
    MEM32(esi + 0x2C) = 0; /* 0x14086DA2: mov dword ptr [esi + 0x2c], 0 */
    MEM32(esi + 0x20) = 0; /* 0x14086DA9: mov dword ptr [esi + 0x20], 0 */
    MEM32(esi + 0x24) = 0; /* 0x14086DB0: mov dword ptr [esi + 0x24], 0 */
    MEM32(esi + 0x28) = 0; /* 0x14086DB7: mov dword ptr [esi + 0x28], 0 */
    PUSH32(esp, 0); /* 0x14086DBE: push 0 */
    PUSH32(esp, esi); /* 0x14086DC0: push esi */
    MEM32(esi + 0x3C) = 0; /* 0x14086DC1: mov dword ptr [esi + 0x3c], 0 */
    MEM32(esi + 0x30) = 0; /* 0x14086DC8: mov dword ptr [esi + 0x30], 0 */
    MEM32(esi + 0x34) = 0; /* 0x14086DCF: mov dword ptr [esi + 0x34], 0 */
    MEM32(esi + 0x38) = 0; /* 0x14086DD6: mov dword ptr [esi + 0x38], 0 */
    RECOMP_CALL(sub_141EC9B0); /* 0x14086DDD: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14086DE2: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x14086DE5: mov eax, esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086DE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086DF0u);

L_14086DF0:
    edi = edi; /* 0x14086DF0: mov edi, edi */
L_14086DF2:
    /* test eax, eax */ /* 0x14086DF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086E01; /* 0x14086DF4: je 0x14086e01 */
L_14086DF6:
    /* cmp MEM32(eax + 0x4), 0xAu */ /* 0x14086DF6: cmp dword ptr [eax + 4], 0xa */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14086E01; /* 0x14086DFA: jne 0x14086e01 */
L_14086DFC:
    eax = MEM32(eax + 0x20); /* 0x14086DFC: mov eax, dword ptr [eax + 0x20] */
    RECOMP_BACKEDGE();
    goto L_14086DF2; /* 0x14086DFF: jmp 0x14086df2 */
L_14086E01:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086E01: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086E10u);

L_14086E10:
    MEM32(eax + 0x1C) = 0; /* 0x14086E10: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x10) = 0; /* 0x14086E17: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x14086E1E: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x14086E25: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x14086E2C: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x14086E33: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x14086E3A: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x14086E41: mov dword ptr [eax + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFFFFF0u);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0xFFFFFFF0u; /* 0x14086E48: and dword ptr [eax + 0xc], 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0; /* 0x14086E4C: mov dword ptr [eax], 0 */
    MEM32(eax + 0x4) = 0; /* 0x14086E52: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0xFFFFFFFFu; /* 0x14086E59: mov dword ptr [eax + 8], 0xffffffff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086E60: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086E70u);

L_14086E70:
    edi = edi; /* 0x14086E70: mov edi, edi */
    PUSH32(esp, ebx); /* 0x14086E72: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x14086E73: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x14086E75: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086EB8; /* 0x14086E78: jbe 0x14086eb8 */
L_14086E7A:
    PUSH32(esp, edi); /* 0x14086E7A: push edi */
    goto L_14086E80; /* 0x14086E7B: jmp 0x14086e80 */
L_14086E80:
    eax = MEM32(esi); /* 0x14086E80: mov eax, dword ptr [esi] */
    edi = MEM32(eax + ebx * 4); /* 0x14086E82: mov edi, dword ptr [eax + ebx*4] */
    /* test edi, edi */ /* 0x14086E85: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086E98; /* 0x14086E87: je 0x14086e98 */
L_14086E89:
    RECOMP_CALL(sub_14087480); /* 0x14086E89: call 0x14087480 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x14086E8E: push edi */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086E8F: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086E95: add esp, 4 */
    _flag_k = FK_ADD;
L_14086E98:
    eax = MEM32(esi); /* 0x14086E98: mov eax, dword ptr [esi] */
    MEM32(eax + ebx * 4) = 0; /* 0x14086E9A: mov dword ptr [eax + ebx*4], 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x14086EA1: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0x8) */ /* 0x14086EA2: cmp ebx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14086E80; /* 0x14086EA5: jb 0x14086e80 */
L_14086EA7:
    edi = POP32_VAL(esp); /* 0x14086EA7: pop edi */
    MEM32(esi + 0x8) = 0; /* 0x14086EA8: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14086EAF: mov dword ptr [esi + 0xc], 0 */
    ebx = POP32_VAL(esp); /* 0x14086EB6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086EB7: ret  */
L_14086EB8:
    MEM32(esi + 0x8) = ebx; /* 0x14086EB8: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0xC) = ebx; /* 0x14086EBB: mov dword ptr [esi + 0xc], ebx */
    ebx = POP32_VAL(esp); /* 0x14086EBE: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086EBF: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086ED0u);

L_14086ED0:
    edi = edi; /* 0x14086ED0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086ED2: push ebp */
    ebp = esp; /* 0x14086ED3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14086ED5: push ecx */
    PUSH32(esp, edi); /* 0x14086ED6: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14086ED7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14086ED9: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086F3A; /* 0x14086EDC: jbe 0x14086f3a */
L_14086EDE:
    PUSH32(esp, ebx); /* 0x14086EDE: push ebx */
    /* nop */ /* 0x14086EDF: nop  */
L_14086EE0:
    eax = MEM32(esi); /* 0x14086EE0: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14086EE2: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14086EE5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086F17; /* 0x14086EE7: je 0x14086f17 */
L_14086EE9:
    eax = MEM32(ebx + 0xC); /* 0x14086EE9: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14086EEC: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x14086EEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086F06; /* 0x14086EF1: je 0x14086f06 */
L_14086EF3:
    ecx = eax; /* 0x14086EF3: mov ecx, eax */
    RECOMP_CALL(sub_14087110); /* 0x14086EF5: call 0x14087110 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x14086EFA: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086EFD: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086F03: add esp, 4 */
    _flag_k = FK_ADD;
L_14086F06:
    PUSH32(esp, ebx); /* 0x14086F06: push ebx */
    MEM32(ebx + 0xC) = 0; /* 0x14086F07: mov dword ptr [ebx + 0xc], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086F0E: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086F14: add esp, 4 */
    _flag_k = FK_ADD;
L_14086F17:
    eax = MEM32(esi); /* 0x14086F17: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14086F19: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14086F20: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14086F21: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14086EE0; /* 0x14086F24: jb 0x14086ee0 */
L_14086F26:
    ebx = POP32_VAL(esp); /* 0x14086F26: pop ebx */
    MEM32(esi + 0x8) = 0; /* 0x14086F27: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14086F2E: mov dword ptr [esi + 0xc], 0 */
    edi = POP32_VAL(esp); /* 0x14086F35: pop edi */
    esp = ebp; /* 0x14086F36: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086F38: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086F39: ret  */
L_14086F3A:
    MEM32(esi + 0x8) = edi; /* 0x14086F3A: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x14086F3D: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x14086F40: pop edi */
    esp = ebp; /* 0x14086F41: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14086F43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086F44: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086F50u);

L_14086F50:
    edi = edi; /* 0x14086F50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086F52: push ebp */
    ebp = esp; /* 0x14086F53: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14086F55: push ecx */
    PUSH32(esp, ebx); /* 0x14086F56: push ebx */
    PUSH32(esp, esi); /* 0x14086F57: push esi */
    PUSH32(esp, edi); /* 0x14086F58: push edi */
    esi = eax; /* 0x14086F59: mov esi, eax */
    RECOMP_CALL(sub_14086ED0); /* 0x14086F5B: call 0x14086ed0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x14086F60: push dword ptr [esi] */
    ebx = MEM32(0x1400115C); /* 0x14086F62: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14086F68: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14086F6A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086F6C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x14086F6F: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14086F75: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14086F7C: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086FD1; /* 0x14086F7F: jbe 0x14086fd1 */
L_14086F81:
    eax = MEM32(esi); /* 0x14086F81: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14086F83: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14086F86: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086FBC; /* 0x14086F88: je 0x14086fbc */
L_14086F8A:
    eax = MEM32(ebx + 0xC); /* 0x14086F8A: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14086F8D: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x14086F90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086FA7; /* 0x14086F92: je 0x14086fa7 */
L_14086F94:
    ecx = eax; /* 0x14086F94: mov ecx, eax */
    RECOMP_CALL(sub_14087110); /* 0x14086F96: call 0x14087110 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x14086F9B: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086F9E: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086FA4: add esp, 4 */
    _flag_k = FK_ADD;
L_14086FA7:
    MEM32(ebx + 0xC) = 0; /* 0x14086FA7: mov dword ptr [ebx + 0xc], 0 */
    PUSH32(esp, ebx); /* 0x14086FAE: push ebx */
    ebx = MEM32(0x1400115C); /* 0x14086FAF: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14086FB5: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086FB7: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_14086FC2; /* 0x14086FBA: jmp 0x14086fc2 */
L_14086FBC:
    ebx = MEM32(0x1400115C); /* 0x14086FBC: mov ebx, dword ptr [0x1400115c] */
L_14086FC2:
    eax = MEM32(esi); /* 0x14086FC2: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14086FC4: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14086FCB: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14086FCC: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14086F81; /* 0x14086FCF: jb 0x14086f81 */
L_14086FD1:
    PUSH32(esp, MEM32(esi)); /* 0x14086FD1: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x14086FD3: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x14086FD5: push 0 */
    MEM32(esi) = 0; /* 0x14086FD7: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x14086FDD: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14086FE4: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(ebx); /* 0x14086FEB: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14086FED: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x14086FF0: pop edi */
    MEM32(esi) = 0; /* 0x14086FF1: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14086FF7: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x14086FFE: pop esi */
    ebx = POP32_VAL(esp); /* 0x14086FFF: pop ebx */
    esp = ebp; /* 0x14087000: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14087002: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087003: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087010u);

L_14087010:
    edi = edi; /* 0x14087010: mov edi, edi */
    PUSH32(esp, edi); /* 0x14087012: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14087013: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14087015: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1408705A; /* 0x14087018: jbe 0x1408705a */
L_1408701A:
    PUSH32(esp, ebx); /* 0x1408701A: push ebx */
    goto L_14087020; /* 0x1408701B: jmp 0x14087020 */
L_14087020:
    eax = MEM32(esi); /* 0x14087020: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14087022: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14087025: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408703A; /* 0x14087027: je 0x1408703a */
L_14087029:
    ecx = ebx; /* 0x14087029: mov ecx, ebx */
    RECOMP_CALL(sub_14087110); /* 0x1408702B: call 0x14087110 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14087030: push ebx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14087031: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087037: add esp, 4 */
    _flag_k = FK_ADD;
L_1408703A:
    eax = MEM32(esi); /* 0x1408703A: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x1408703C: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14087043: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14087044: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14087020; /* 0x14087047: jb 0x14087020 */
L_14087049:
    ebx = POP32_VAL(esp); /* 0x14087049: pop ebx */
    MEM32(esi + 0x8) = 0; /* 0x1408704A: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14087051: mov dword ptr [esi + 0xc], 0 */
    edi = POP32_VAL(esp); /* 0x14087058: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087059: ret  */
L_1408705A:
    MEM32(esi + 0x8) = edi; /* 0x1408705A: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x1408705D: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x14087060: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087061: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087070u);

L_14087070:
    edi = edi; /* 0x14087070: mov edi, edi */
    PUSH32(esp, ebx); /* 0x14087072: push ebx */
    PUSH32(esp, esi); /* 0x14087073: push esi */
    PUSH32(esp, edi); /* 0x14087074: push edi */
    esi = eax; /* 0x14087075: mov esi, eax */
    RECOMP_CALL(sub_14087010); /* 0x14087077: call 0x14087010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1408707C: push dword ptr [esi] */
    ebx = MEM32(0x1400115C); /* 0x1408707E: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14087084: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14087086: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087088: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x1408708B: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14087091: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14087098: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140870D3; /* 0x1408709B: jbe 0x140870d3 */
L_1408709D:
    ecx = ecx; /* 0x1408709D: lea ecx, [ecx] */
L_140870A0:
    eax = MEM32(esi); /* 0x140870A0: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x140870A2: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x140870A5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140870BE; /* 0x140870A7: je 0x140870be */
L_140870A9:
    ecx = ebx; /* 0x140870A9: mov ecx, ebx */
    RECOMP_CALL(sub_14087110); /* 0x140870AB: call 0x14087110 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x140870B0: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140870B1: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x140870B7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140870B9: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_140870C4; /* 0x140870BC: jmp 0x140870c4 */
L_140870BE:
    ebx = MEM32(0x1400115C); /* 0x140870BE: mov ebx, dword ptr [0x1400115c] */
L_140870C4:
    eax = MEM32(esi); /* 0x140870C4: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x140870C6: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x140870CD: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x140870CE: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_140870A0; /* 0x140870D1: jb 0x140870a0 */
L_140870D3:
    PUSH32(esp, MEM32(esi)); /* 0x140870D3: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x140870D5: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x140870D7: push 0 */
    MEM32(esi) = 0; /* 0x140870D9: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x140870DF: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x140870E6: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(ebx); /* 0x140870ED: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140870EF: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x140870F2: pop edi */
    MEM32(esi) = 0; /* 0x140870F3: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x140870F9: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x14087100: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087101: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087102: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087110u);

    goto L_14087110;
L_14086F50:
    edi = edi; /* 0x14086F50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14086F52: push ebp */
    ebp = esp; /* 0x14086F53: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14086F55: push ecx */
    PUSH32(esp, ebx); /* 0x14086F56: push ebx */
    PUSH32(esp, esi); /* 0x14086F57: push esi */
    PUSH32(esp, edi); /* 0x14086F58: push edi */
    esi = eax; /* 0x14086F59: mov esi, eax */
    RECOMP_CALL(sub_14086ED0); /* 0x14086F5B: call 0x14086ed0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x14086F60: push dword ptr [esi] */
    ebx = MEM32(0x1400115C); /* 0x14086F62: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14086F68: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14086F6A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086F6C: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x14086F6F: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14086F75: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14086F7C: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086FD1; /* 0x14086F7F: jbe 0x14086fd1 */
L_14086F81:
    eax = MEM32(esi); /* 0x14086F81: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14086F83: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14086F86: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086FBC; /* 0x14086F88: je 0x14086fbc */
L_14086F8A:
    eax = MEM32(ebx + 0xC); /* 0x14086F8A: mov eax, dword ptr [ebx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x14086F8D: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x14086F90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086FA7; /* 0x14086F92: je 0x14086fa7 */
L_14086F94:
    ecx = eax; /* 0x14086F94: mov ecx, eax */
    RECOMP_CALL(sub_14087110); /* 0x14086F96: call 0x14087110 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x14086F9B: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086F9E: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086FA4: add esp, 4 */
    _flag_k = FK_ADD;
L_14086FA7:
    MEM32(ebx + 0xC) = 0; /* 0x14086FA7: mov dword ptr [ebx + 0xc], 0 */
    PUSH32(esp, ebx); /* 0x14086FAE: push ebx */
    ebx = MEM32(0x1400115C); /* 0x14086FAF: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14086FB5: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14086FB7: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_14086FC2; /* 0x14086FBA: jmp 0x14086fc2 */
L_14086FBC:
    ebx = MEM32(0x1400115C); /* 0x14086FBC: mov ebx, dword ptr [0x1400115c] */
L_14086FC2:
    eax = MEM32(esi); /* 0x14086FC2: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14086FC4: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14086FCB: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14086FCC: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14086F81; /* 0x14086FCF: jb 0x14086f81 */
L_14086FD1:
    PUSH32(esp, MEM32(esi)); /* 0x14086FD1: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x14086FD3: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x14086FD5: push 0 */
    MEM32(esi) = 0; /* 0x14086FD7: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x14086FDD: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14086FE4: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(ebx); /* 0x14086FEB: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x14086FED: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x14086FF0: pop edi */
    MEM32(esi) = 0; /* 0x14086FF1: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14086FF7: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x14086FFE: pop esi */
    ebx = POP32_VAL(esp); /* 0x14086FFF: pop ebx */
    esp = ebp; /* 0x14087000: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14087002: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087003: ret  */
L_14087110:
    edi = edi; /* 0x14087110: mov edi, edi */
    PUSH32(esp, esi); /* 0x14087112: push esi */
    PUSH32(esp, edi); /* 0x14087113: push edi */
    edi = ecx; /* 0x14087114: mov edi, ecx */
    esi = MEM32(edi + 0x40); /* 0x14087116: mov esi, dword ptr [edi + 0x40] */
    /* test esi, esi */ /* 0x14087119: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408712E; /* 0x1408711B: je 0x1408712e */
L_1408711D:
    ecx = esi; /* 0x1408711D: mov ecx, esi */
    RECOMP_CALL(sub_14087110); /* 0x1408711F: call 0x14087110 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087124: push esi */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14087125: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408712B: add esp, 4 */
    _flag_k = FK_ADD;
L_1408712E:
    esi = MEM32(edi + 0x44); /* 0x1408712E: mov esi, dword ptr [edi + 0x44] */
    /* test esi, esi */ /* 0x14087131: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14087146; /* 0x14087133: je 0x14087146 */
L_14087135:
    ecx = esi; /* 0x14087135: mov ecx, esi */
    RECOMP_CALL(sub_14087110); /* 0x14087137: call 0x14087110 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1408713C: push esi */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x1408713D: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087143: add esp, 4 */
    _flag_k = FK_ADD;
L_14087146:
    eax = edi + 0x30; /* 0x14087146: lea eax, [edi + 0x30] */
    RECOMP_CALL(sub_14087070); /* 0x14087149: call 0x14087070 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x20; /* 0x1408714E: lea eax, [edi + 0x20] */
    edi = POP32_VAL(esp); /* 0x14087151: pop edi */
    esi = POP32_VAL(esp); /* 0x14087152: pop esi */
    RECOMP_BACKEDGE();
    goto L_14086F50; /* 0x14087153: jmp 0x14086f50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_14087160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087160u);

L_14087160:
    edi = edi; /* 0x14087160: mov edi, edi */
    PUSH32(esp, esi); /* 0x14087162: push esi */
    esi = ecx; /* 0x14087163: mov esi, ecx */
    ecx = MEM32(esi + 0x40); /* 0x14087165: mov ecx, dword ptr [esi + 0x40] */
    /* test ecx, ecx */ /* 0x14087168: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14087173; /* 0x1408716A: je 0x14087173 */
L_1408716C:
    PUSH32(esp, 1); /* 0x1408716C: push 1 */
    RECOMP_CALL(sub_14087160); /* 0x1408716E: call 0x14087160 */
    RECOMP_FLAGS_IN();
L_14087173:
    ecx = MEM32(esi + 0x44); /* 0x14087173: mov ecx, dword ptr [esi + 0x44] */
    /* test ecx, ecx */ /* 0x14087176: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14087181; /* 0x14087178: je 0x14087181 */
L_1408717A:
    PUSH32(esp, 1); /* 0x1408717A: push 1 */
    RECOMP_CALL(sub_14087160); /* 0x1408717C: call 0x14087160 */
    RECOMP_FLAGS_IN();
L_14087181:
    eax = esi + 0x30; /* 0x14087181: lea eax, [esi + 0x30] */
    RECOMP_CALL(sub_14087070); /* 0x14087184: call 0x14087070 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x20; /* 0x14087189: lea eax, [esi + 0x20] */
    RECOMP_CALL(sub_14086F50); /* 0x1408718C: call 0x14086f50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087191: push esi */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14087192: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087198: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1408719B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1408719D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1408719E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_140871B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140871B0u);

L_140871B0:
    edi = edi; /* 0x140871B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140871B2: push ebp */
    ebp = esp; /* 0x140871B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140871B5: push ecx */
    PUSH32(esp, ebx); /* 0x140871B6: push ebx */
    ebx = MEM32(eax + (-0x4)); /* 0x140871B7: mov ebx, dword ptr [eax - 4] */
    PUSH32(esp, esi); /* 0x140871BA: push esi */
    esi = eax + (-0x4); /* 0x140871BB: lea esi, [eax - 4] */
    ecx = ebx + ebx * 8; /* 0x140871BE: lea ecx, [ebx + ebx*8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140871C1: dec ebx */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x140871C2: push edi */
    edi = MEM32(0x1400115C); /* 0x140871C3: mov edi, dword ptr [0x1400115c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x140871C9: mov dword ptr [ebp - 4], esi */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_14087227; /* 0x140871CC: js 0x14087227 */
L_140871CE:
    esi = eax + ecx * 8 + 0x38; /* 0x140871CE: lea esi, [eax + ecx*8 + 0x38] */
L_140871D2:
    PUSH32(esp, MEM32(esi + (-0x7C))); /* 0x140871D2: push dword ptr [esi - 0x7c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x48u; /* 0x140871D5: sub esi, 0x48 */
    _flag_k = FK_CMP;
    RECOMP_ICALL(edi); /* 0x140871D8: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x140871DA: push dword ptr [esi + 0xc] */
    MEM32(esi + (-0x34)) = 0; /* 0x140871DD: mov dword ptr [esi - 0x34], 0 */
    RECOMP_ICALL(edi); /* 0x140871E4: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140871E6: add esp, 8 */
    _flag_k = FK_ADD;
    edi = esi + (-0x30); /* 0x140871E9: lea edi, [esi - 0x30] */
    MEM32(esi + 0xC) = 0; /* 0x140871EC: mov dword ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_140872A0); /* 0x140871F3: call 0x140872a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + (-0xC))); /* 0x140871F8: push dword ptr [esi - 0xc] */
    edi = MEM32(0x1400115C); /* 0x140871FB: mov edi, dword ptr [0x1400115c] */
    MEM32(esi + (-0x4)) = 0; /* 0x14087201: mov dword ptr [esi - 4], 0 */
    MEM32(esi) = 0; /* 0x14087208: mov dword ptr [esi], 0 */
    RECOMP_ICALL(edi); /* 0x1408720E: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087210: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x14087213: dec ebx */
    _flag_k = FK_DEC;
    MEM32(esi + (-0xC)) = 0; /* 0x14087214: mov dword ptr [esi - 0xc], 0 */
    MEM32(esi + (-0x8)) = 0; /* 0x1408721B: mov dword ptr [esi - 8], 0 */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_140871D2; /* 0x14087222: jns 0x140871d2 */
L_14087224:
    esi = MEM32(ebp + (-0x4)); /* 0x14087224: mov esi, dword ptr [ebp - 4] */
L_14087227:
    PUSH32(esp, esi); /* 0x14087227: push esi */
    RECOMP_ICALL(edi); /* 0x14087228: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408722A: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1408722D: pop edi */
    eax = esi; /* 0x1408722E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x14087230: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087231: pop ebx */
    esp = ebp; /* 0x14087232: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14087234: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087235: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087240u);

L_14087240:
    edi = edi; /* 0x14087240: mov edi, edi */
    PUSH32(esp, edi); /* 0x14087242: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x14087243: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14087245: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1408728A; /* 0x14087248: jbe 0x1408728a */
L_1408724A:
    PUSH32(esp, ebx); /* 0x1408724A: push ebx */
    goto L_14087250; /* 0x1408724B: jmp 0x14087250 */
L_14087250:
    eax = MEM32(esi); /* 0x14087250: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14087252: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14087255: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408726A; /* 0x14087257: je 0x1408726a */
L_14087259:
    eax = ebx; /* 0x14087259: mov eax, ebx */
    RECOMP_CALL(sub_14087350); /* 0x1408725B: call 0x14087350 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14087260: push ebx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14087261: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087267: add esp, 4 */
    _flag_k = FK_ADD;
L_1408726A:
    eax = MEM32(esi); /* 0x1408726A: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x1408726C: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x14087273: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x14087274: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14087250; /* 0x14087277: jb 0x14087250 */
L_14087279:
    ebx = POP32_VAL(esp); /* 0x14087279: pop ebx */
    MEM32(esi + 0x8) = 0; /* 0x1408727A: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14087281: mov dword ptr [esi + 0xc], 0 */
    edi = POP32_VAL(esp); /* 0x14087288: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087289: ret  */
L_1408728A:
    MEM32(esi + 0x8) = edi; /* 0x1408728A: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0xC) = edi; /* 0x1408728D: mov dword ptr [esi + 0xc], edi */
    edi = POP32_VAL(esp); /* 0x14087290: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087291: ret  */
    RECOMP_REGS_OUT();
}

void sub_140872A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140872A0u);

L_140872A0:
    ecx = MEM32(edi + 0x4); /* 0x140872A0: mov ecx, dword ptr [edi + 4] */
    MEM32(edi) = 0; /* 0x140872A3: mov dword ptr [edi], 0 */
    /* test ecx, ecx */ /* 0x140872A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140872BA; /* 0x140872AB: je 0x140872ba */
L_140872AD:
    eax = MEM32(ecx); /* 0x140872AD: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x140872AF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140872B0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x4) = 0; /* 0x140872B3: mov dword ptr [edi + 4], 0 */
L_140872BA:
    PUSH32(esp, ebx); /* 0x140872BA: push ebx */
    PUSH32(esp, esi); /* 0x140872BB: push esi */
    MEM32(edi + 0x8) = 0; /* 0x140872BC: mov dword ptr [edi + 8], 0 */
    esi = edi + 0xC; /* 0x140872C3: lea esi, [edi + 0xc] */
    ebx = 4; /* 0x140872C6: mov ebx, 4 */
    goto L_140872D0; /* 0x140872CB: jmp 0x140872d0 */
L_140872D0:
    PUSH32(esp, MEM32(esi)); /* 0x140872D0: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140872D2: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0; /* 0x140872D8: mov dword ptr [esi], 0 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140872DE: add esp, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x140872E1: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140872E4: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_140872D0; /* 0x140872E5: jne 0x140872d0 */
L_140872E7:
    MEM32(edi + 0x1C) = ebx; /* 0x140872E7: mov dword ptr [edi + 0x1c], ebx */
    MEM32(edi + 0x20) = ebx; /* 0x140872EA: mov dword ptr [edi + 0x20], ebx */
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x140872ED: push dword ptr [edi + 0x24] */
    MEM32(edi + 0x2C) = ebx; /* 0x140872F0: mov dword ptr [edi + 0x2c], ebx */
    MEM32(edi + 0x30) = ebx; /* 0x140872F3: mov dword ptr [edi + 0x30], ebx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140872F6: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140872FC: add esp, 4 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x140872FF: pop esi */
    MEM32(edi + 0x24) = ebx; /* 0x14087300: mov dword ptr [edi + 0x24], ebx */
    MEM32(edi + 0x28) = ebx; /* 0x14087303: mov dword ptr [edi + 0x28], ebx */
    ebx = POP32_VAL(esp); /* 0x14087306: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087307: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087350u);

L_14087350:
    edi = edi; /* 0x14087350: mov edi, edi */
    PUSH32(esp, edi); /* 0x14087352: push edi */
    edi = eax; /* 0x14087353: mov edi, eax */
    eax = MEM32(edi + 0x10); /* 0x14087355: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14087358: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_14087388; /* 0x14087359: je 0x14087388 */
L_1408735B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1408735B: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_14087379; /* 0x1408735E: je 0x14087379 */
L_14087360:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14087360: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1408739B; /* 0x14087361: jne 0x1408739b */
L_14087363:
    ecx = MEM32(edi + 0x14); /* 0x14087363: mov ecx, dword ptr [edi + 0x14] */
    /* test ecx, ecx */ /* 0x14087366: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408739B; /* 0x14087368: je 0x1408739b */
L_1408736A:
    eax = MEM32(ecx); /* 0x1408736A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1408736C: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1408736D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x14) = 0; /* 0x14087370: mov dword ptr [edi + 0x14], 0 */
    goto L_1408739B; /* 0x14087377: jmp 0x1408739b */
L_14087379:
    ecx = MEM32(edi + 0x18); /* 0x14087379: mov ecx, dword ptr [edi + 0x18] */
    /* test ecx, ecx */ /* 0x1408737C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408739B; /* 0x1408737E: je 0x1408739b */
L_14087380:
    eax = MEM32(ecx); /* 0x14087380: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x14087382: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x14087383: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_14087394; /* 0x14087386: jmp 0x14087394 */
L_14087388:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x14087388: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x1408738B: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087391: add esp, 4 */
    _flag_k = FK_ADD;
L_14087394:
    MEM32(edi + 0x18) = 0; /* 0x14087394: mov dword ptr [edi + 0x18], 0 */
L_1408739B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x1Cu; /* 0x1408739B: add edi, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_140872A0); /* 0x1408739E: call 0x140872a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x140873A3: push dword ptr [edi + 0x24] */
    MEM32(edi + 0x2C) = 0; /* 0x140873A6: mov dword ptr [edi + 0x2c], 0 */
    MEM32(edi + 0x30) = 0; /* 0x140873AD: mov dword ptr [edi + 0x30], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140873B4: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140873BA: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x24) = 0; /* 0x140873BD: mov dword ptr [edi + 0x24], 0 */
    MEM32(edi + 0x28) = 0; /* 0x140873C4: mov dword ptr [edi + 0x28], 0 */
    edi = POP32_VAL(esp); /* 0x140873CB: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140873CC: ret  */
    RECOMP_REGS_OUT();
}

void sub_140873E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140873E0u);

L_140873E0:
    edi = edi; /* 0x140873E0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x140873E2: push ebx */
    PUSH32(esp, esi); /* 0x140873E3: push esi */
    PUSH32(esp, edi); /* 0x140873E4: push edi */
    esi = eax; /* 0x140873E5: mov esi, eax */
    RECOMP_CALL(sub_14087240); /* 0x140873E7: call 0x14087240 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x140873EC: push dword ptr [esi] */
    ebx = MEM32(0x1400115C); /* 0x140873EE: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x140873F4: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x140873F6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140873F8: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x140873FB: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14087401: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x14087408: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14087443; /* 0x1408740B: jbe 0x14087443 */
L_1408740D:
    ecx = ecx; /* 0x1408740D: lea ecx, [ecx] */
L_14087410:
    eax = MEM32(esi); /* 0x14087410: mov eax, dword ptr [esi] */
    ebx = MEM32(eax + edi * 4); /* 0x14087412: mov ebx, dword ptr [eax + edi*4] */
    /* test ebx, ebx */ /* 0x14087415: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408742E; /* 0x14087417: je 0x1408742e */
L_14087419:
    eax = ebx; /* 0x14087419: mov eax, ebx */
    RECOMP_CALL(sub_14087350); /* 0x1408741B: call 0x14087350 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x14087420: push ebx */
    ebx = MEM32(0x1400115C); /* 0x14087421: mov ebx, dword ptr [0x1400115c] */
    RECOMP_ICALL(ebx); /* 0x14087427: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087429: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_14087434; /* 0x1408742C: jmp 0x14087434 */
L_1408742E:
    ebx = MEM32(0x1400115C); /* 0x1408742E: mov ebx, dword ptr [0x1400115c] */
L_14087434:
    eax = MEM32(esi); /* 0x14087434: mov eax, dword ptr [esi] */
    MEM32(eax + edi * 4) = 0; /* 0x14087436: mov dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1408743D: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1408743E: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14087410; /* 0x14087441: jb 0x14087410 */
L_14087443:
    PUSH32(esp, MEM32(esi)); /* 0x14087443: push dword ptr [esi] */
    RECOMP_ICALL(ebx); /* 0x14087445: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x14087447: push 0 */
    MEM32(esi) = 0; /* 0x14087449: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x1408744F: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x14087456: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(ebx); /* 0x1408745D: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1408745F: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x14087462: pop edi */
    MEM32(esi) = 0; /* 0x14087463: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14087469: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x14087470: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087471: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087472: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087480u);

L_14087480:
    edi = edi; /* 0x14087480: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14087482: push ebp */
    ebp = esp; /* 0x14087483: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x14087485: push ecx */
    PUSH32(esp, esi); /* 0x14087486: push esi */
    esi = MEM32(edi + 0x28); /* 0x14087487: mov esi, dword ptr [edi + 0x28] */
    /* test esi, esi */ /* 0x1408748A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140874C4; /* 0x1408748C: je 0x140874c4 */
L_1408748E:
    ecx = MEM32(esi + 0x40); /* 0x1408748E: mov ecx, dword ptr [esi + 0x40] */
    /* test ecx, ecx */ /* 0x14087491: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408749C; /* 0x14087493: je 0x1408749c */
L_14087495:
    PUSH32(esp, 1); /* 0x14087495: push 1 */
    RECOMP_CALL(sub_14087160); /* 0x14087497: call 0x14087160 */
    RECOMP_FLAGS_IN();
L_1408749C:
    ecx = MEM32(esi + 0x44); /* 0x1408749C: mov ecx, dword ptr [esi + 0x44] */
    /* test ecx, ecx */ /* 0x1408749F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140874AA; /* 0x140874A1: je 0x140874aa */
L_140874A3:
    PUSH32(esp, 1); /* 0x140874A3: push 1 */
    RECOMP_CALL(sub_14087160); /* 0x140874A5: call 0x14087160 */
    RECOMP_FLAGS_IN();
L_140874AA:
    eax = esi + 0x30; /* 0x140874AA: lea eax, [esi + 0x30] */
    RECOMP_CALL(sub_14087070); /* 0x140874AD: call 0x14087070 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x20; /* 0x140874B2: lea eax, [esi + 0x20] */
    RECOMP_CALL(sub_14086F50); /* 0x140874B5: call 0x14086f50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x140874BA: push esi */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x140874BB: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140874C1: add esp, 4 */
    _flag_k = FK_ADD;
L_140874C4:
    eax = MEM32(edi + 0x18); /* 0x140874C4: mov eax, dword ptr [edi + 0x18] */
    MEM32(edi + 0x28) = 0; /* 0x140874C7: mov dword ptr [edi + 0x28], 0 */
    /* test eax, eax */ /* 0x140874CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140874D7; /* 0x140874D0: je 0x140874d7 */
L_140874D2:
    RECOMP_CALL(sub_140871B0); /* 0x140874D2: call 0x140871b0 */
    RECOMP_FLAGS_IN();
L_140874D7:
    eax = MEM32(edi + 0x40); /* 0x140874D7: mov eax, dword ptr [edi + 0x40] */
    MEM32(edi + 0x18) = 0; /* 0x140874DA: mov dword ptr [edi + 0x18], 0 */
    /* test eax, eax */ /* 0x140874E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408751B; /* 0x140874E3: je 0x1408751b */
L_140874E5:
    ecx = eax + (-0x4); /* 0x140874E5: lea ecx, [eax - 4] */
    PUSH32(esp, ebx); /* 0x140874E8: push ebx */
    ebx = MEM32(ecx); /* 0x140874E9: mov ebx, dword ptr [ecx] */
    esi = ebx; /* 0x140874EB: mov esi, ebx */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x140874ED: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x140874ED: shl esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x140874F0: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140874F2: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x140874F3: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_14087510; /* 0x140874F6: js 0x14087510 */
L_140874F8:
    goto L_14087500; /* 0x140874F8: jmp 0x14087500 */
L_14087500:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x10u; /* 0x14087500: sub esi, 0x10 */
    _flag_k = FK_CMP;
    eax = esi; /* 0x14087503: mov eax, esi */
    RECOMP_CALL(sub_140873E0); /* 0x14087505: call 0x140873e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1408750A: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_14087500; /* 0x1408750B: jns 0x14087500 */
L_1408750D:
    ecx = MEM32(ebp + (-0x4)); /* 0x1408750D: mov ecx, dword ptr [ebp - 4] */
L_14087510:
    PUSH32(esp, ecx); /* 0x14087510: push ecx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14087511: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087517: add esp, 4 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1408751A: pop ebx */
L_1408751B:
    ecx = edi + 0x30; /* 0x1408751B: lea ecx, [edi + 0x30] */
    MEM32(edi + 0x40) = 0; /* 0x1408751E: mov dword ptr [edi + 0x40], 0 */
    RECOMP_CALL(sub_14087540); /* 0x14087525: call 0x14087540 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1408752A: pop esi */
    esp = ebp; /* 0x1408752B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1408752D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408752E: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087540u);

L_14087540:
    edi = edi; /* 0x14087540: mov edi, edi */
    PUSH32(esp, ebx); /* 0x14087542: push ebx */
    PUSH32(esp, esi); /* 0x14087543: push esi */
    PUSH32(esp, edi); /* 0x14087544: push edi */
    esi = ecx; /* 0x14087545: mov esi, ecx */
    RECOMP_CALL(sub_14086E70); /* 0x14087547: call 0x14086e70 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1408754C: push dword ptr [esi] */
    edi = MEM32(0x1400115C); /* 0x1408754E: mov edi, dword ptr [0x1400115c] */
    RECOMP_ICALL(edi); /* 0x14087554: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x14087556: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087558: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = 0; /* 0x1408755B: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x14087561: mov dword ptr [esi + 4], 0 */
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x14087568: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140875A1; /* 0x1408756B: jbe 0x140875a1 */
L_1408756D:
    ecx = ecx; /* 0x1408756D: lea ecx, [ecx] */
L_14087570:
    eax = MEM32(esi); /* 0x14087570: mov eax, dword ptr [esi] */
    edi = MEM32(eax + ebx * 4); /* 0x14087572: mov edi, dword ptr [eax + ebx*4] */
    /* test edi, edi */ /* 0x14087575: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408758C; /* 0x14087577: je 0x1408758c */
L_14087579:
    RECOMP_CALL(sub_14087480); /* 0x14087579: call 0x14087480 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1408757E: push edi */
    edi = MEM32(0x1400115C); /* 0x1408757F: mov edi, dword ptr [0x1400115c] */
    RECOMP_ICALL(edi); /* 0x14087585: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087587: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_14087592; /* 0x1408758A: jmp 0x14087592 */
L_1408758C:
    edi = MEM32(0x1400115C); /* 0x1408758C: mov edi, dword ptr [0x1400115c] */
L_14087592:
    eax = MEM32(esi); /* 0x14087592: mov eax, dword ptr [esi] */
    MEM32(eax + ebx * 4) = 0; /* 0x14087594: mov dword ptr [eax + ebx*4], 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1408759B: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0x8) */ /* 0x1408759C: cmp ebx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14087570; /* 0x1408759F: jb 0x14087570 */
L_140875A1:
    PUSH32(esp, MEM32(esi)); /* 0x140875A1: push dword ptr [esi] */
    RECOMP_ICALL(edi); /* 0x140875A3: call edi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x140875A5: push 0 */
    MEM32(esi) = 0; /* 0x140875A7: mov dword ptr [esi], 0 */
    MEM32(esi + 0x8) = 0; /* 0x140875AD: mov dword ptr [esi + 8], 0 */
    MEM32(esi + 0xC) = 0; /* 0x140875B4: mov dword ptr [esi + 0xc], 0 */
    RECOMP_ICALL(edi); /* 0x140875BB: call edi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x140875BD: add esp, 8 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x140875C0: pop edi */
    MEM32(esi) = 0; /* 0x140875C1: mov dword ptr [esi], 0 */
    MEM32(esi + 0x4) = 0; /* 0x140875C7: mov dword ptr [esi + 4], 0 */
    esi = POP32_VAL(esp); /* 0x140875CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x140875CF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140875D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_140875E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140875E0u);

L_140875E0:
    MEM32(eax) = 0x1403AB90u; /* 0x140875E0: mov dword ptr [eax], 0x1403ab90 */
    MEM32(eax + 0x4) = 0; /* 0x140875E6: mov dword ptr [eax + 4], 0 */
    MEM32(eax + 0x8) = 0; /* 0x140875ED: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x140875F4: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x10) = 0; /* 0x140875FB: mov dword ptr [eax + 0x10], 0 */
    MEM32(eax + 0x14) = 0; /* 0x14087602: mov dword ptr [eax + 0x14], 0 */
    MEM32(eax + 0x18) = 0; /* 0x14087609: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x1C) = 0; /* 0x14087610: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x20) = 0; /* 0x14087617: mov dword ptr [eax + 0x20], 0 */
    MEM32(eax + 0x24) = 0; /* 0x1408761E: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x14087625: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x1408762C: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x30) = 0; /* 0x14087633: mov dword ptr [eax + 0x30], 0 */
    MEM32(eax + 0x34) = 0; /* 0x1408763A: mov dword ptr [eax + 0x34], 0 */
    MEM32(eax + 0x38) = 0; /* 0x14087641: mov dword ptr [eax + 0x38], 0 */
    MEM32(eax + 0x3C) = 0; /* 0x14087648: mov dword ptr [eax + 0x3c], 0 */
    MEM32(eax + 0x40) = 0; /* 0x1408764F: mov dword ptr [eax + 0x40], 0 */
    MEM32(eax + 0x44) = 0; /* 0x14087656: mov dword ptr [eax + 0x44], 0 */
    MEM32(eax + 0x48) = 0; /* 0x1408765D: mov dword ptr [eax + 0x48], 0 */
    MEM32(eax + 0x4C) = 0; /* 0x14087664: mov dword ptr [eax + 0x4c], 0 */
    MEM32(eax + 0x50) = 0; /* 0x1408766B: mov dword ptr [eax + 0x50], 0 */
    MEM32(eax + 0x54) = 0; /* 0x14087672: mov dword ptr [eax + 0x54], 0 */
    MEM32(eax + 0x58) = 0; /* 0x14087679: mov dword ptr [eax + 0x58], 0 */
    MEM32(eax + 0x68) = 0; /* 0x14087680: mov dword ptr [eax + 0x68], 0 */
    MEM32(eax + 0x64) = 0; /* 0x14087687: mov dword ptr [eax + 0x64], 0 */
    MEM32(eax + 0x5C) = 0; /* 0x1408768E: mov dword ptr [eax + 0x5c], 0 */
    MEM32(eax + 0x60) = 0; /* 0x14087695: mov dword ptr [eax + 0x60], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408769C: ret  */
    RECOMP_REGS_OUT();
}

void sub_140876B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140876B0u);

L_140876B0:
    edi = edi; /* 0x140876B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140876B2: push ebp */
    ebp = esp; /* 0x140876B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140876B5: push ecx */
    PUSH32(esp, ebx); /* 0x140876B6: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140876B7: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x140876BD: push esi */
    PUSH32(esp, edi); /* 0x140876BE: push edi */
    edi = ecx; /* 0x140876BF: mov edi, ecx */
    eax = MEM32(edi + 0x8); /* 0x140876C1: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x140876C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140876FC; /* 0x140876C6: je 0x140876fc */
L_140876C8:
    ebx = MEM32(eax + (-0x4)); /* 0x140876C8: mov ebx, dword ptr [eax - 4] */
    ecx = eax + (-0x4); /* 0x140876CB: lea ecx, [eax - 4] */
    esi = ebx; /* 0x140876CE: mov esi, ebx */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x140876D0: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x140876D0: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x140876D3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140876D5: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x140876D6: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_140876F0; /* 0x140876D9: js 0x140876f0 */
L_140876DB:
    goto L_140876E0; /* 0x140876DB: jmp 0x140876e0 */
L_140876E0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x20u; /* 0x140876E0: sub esi, 0x20 */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x140876E3: mov ecx, esi */
    RECOMP_CALL(sub_140876B0); /* 0x140876E5: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140876EA: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_140876E0; /* 0x140876EB: jns 0x140876e0 */
L_140876ED:
    ecx = MEM32(ebp + (-0x4)); /* 0x140876ED: mov ecx, dword ptr [ebp - 4] */
L_140876F0:
    ebx = MEM32(0x1400115C); /* 0x140876F0: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, ecx); /* 0x140876F6: push ecx */
    RECOMP_ICALL(ebx); /* 0x140876F7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140876F9: add esp, 4 */
    _flag_k = FK_ADD;
L_140876FC:
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x140876FC: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x8) = 0; /* 0x14087700: mov dword ptr [edi + 8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14087733; /* 0x14087707: je 0x14087733 */
L_14087709:
    esp = esp; /* 0x14087709: lea esp, [esp] */
L_14087710:
    esi = MEM32(edi + 0xC); /* 0x14087710: mov esi, dword ptr [edi + 0xc] */
    eax = MEM32(esi + 0xC); /* 0x14087713: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x14087716: mov dword ptr [edi + 0xc], eax */
    ecx = esi; /* 0x14087719: mov ecx, esi */
    MEM32(esi + 0xC) = 0; /* 0x1408771B: mov dword ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_140876B0); /* 0x14087722: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087727: push esi */
    RECOMP_ICALL(ebx); /* 0x14087728: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408772A: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x1408772D: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14087710; /* 0x14087731: jne 0x14087710 */
L_14087733:
    edi = POP32_VAL(esp); /* 0x14087733: pop edi */
    esi = POP32_VAL(esp); /* 0x14087734: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087735: pop ebx */
    esp = ebp; /* 0x14087736: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14087738: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087739: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087740u);

L_14087740:
    edi = edi; /* 0x14087740: mov edi, edi */
    PUSH32(esp, ebx); /* 0x14087742: push ebx */
    PUSH32(esp, esi); /* 0x14087743: push esi */
    PUSH32(esp, edi); /* 0x14087744: push edi */
    edi = MEM32(eax + (-0x4)); /* 0x14087745: mov edi, dword ptr [eax - 4] */
    ebx = eax + (-0x4); /* 0x14087748: lea ebx, [eax - 4] */
    esi = edi; /* 0x1408774B: mov esi, edi */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x1408774D: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x1408774D: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x14087750: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x14087752: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_14087762; /* 0x14087753: js 0x14087762 */
L_14087755:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x20u; /* 0x14087755: sub esi, 0x20 */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x14087758: mov ecx, esi */
    RECOMP_CALL(sub_140876B0); /* 0x1408775A: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1408775F: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_14087755; /* 0x14087760: jns 0x14087755 */
L_14087762:
    PUSH32(esp, ebx); /* 0x14087762: push ebx */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14087763: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087769: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x1408776C: pop edi */
    esi = POP32_VAL(esp); /* 0x1408776D: pop esi */
    eax = ebx; /* 0x1408776E: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x14087770: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087771: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087780u);

L_14087780:
    MEM32(eax + 0x10) = 0xFFFFFFFFu; /* 0x14087780: mov dword ptr [eax + 0x10], 0xffffffff */
    MEM32(eax + 0x1C) = 0; /* 0x14087787: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x8) = 0; /* 0x1408778E: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x14087795: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x4) = eax; /* 0x1408779C: mov dword ptr [eax + 4], eax */
    MEM32(eax) = 0; /* 0x1408779F: mov dword ptr [eax], 0 */
    MEM32(eax + 0x30) = 0; /* 0x140877A5: mov dword ptr [eax + 0x30], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x140877AC: mov dword ptr [eax + 0x2c], 0 */
    MEM32(eax + 0x34) = 0; /* 0x140877B3: mov dword ptr [eax + 0x34], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140877BA: ret  */
    RECOMP_REGS_OUT();
}

void sub_140877C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140877C0u);

    goto L_140877C0;
L_140876B0:
    edi = edi; /* 0x140876B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140876B2: push ebp */
    ebp = esp; /* 0x140876B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140876B5: push ecx */
    PUSH32(esp, ebx); /* 0x140876B6: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140876B7: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x140876BD: push esi */
    PUSH32(esp, edi); /* 0x140876BE: push edi */
    edi = ecx; /* 0x140876BF: mov edi, ecx */
    eax = MEM32(edi + 0x8); /* 0x140876C1: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x140876C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140876FC; /* 0x140876C6: je 0x140876fc */
L_140876C8:
    ebx = MEM32(eax + (-0x4)); /* 0x140876C8: mov ebx, dword ptr [eax - 4] */
    ecx = eax + (-0x4); /* 0x140876CB: lea ecx, [eax - 4] */
    esi = ebx; /* 0x140876CE: mov esi, ebx */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x140876D0: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x140876D0: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x140876D3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140876D5: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x140876D6: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_140876F0; /* 0x140876D9: js 0x140876f0 */
L_140876DB:
    goto L_140876E0; /* 0x140876DB: jmp 0x140876e0 */
L_140876E0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x20u; /* 0x140876E0: sub esi, 0x20 */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x140876E3: mov ecx, esi */
    RECOMP_CALL(sub_140876B0); /* 0x140876E5: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140876EA: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_140876E0; /* 0x140876EB: jns 0x140876e0 */
L_140876ED:
    ecx = MEM32(ebp + (-0x4)); /* 0x140876ED: mov ecx, dword ptr [ebp - 4] */
L_140876F0:
    ebx = MEM32(0x1400115C); /* 0x140876F0: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, ecx); /* 0x140876F6: push ecx */
    RECOMP_ICALL(ebx); /* 0x140876F7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140876F9: add esp, 4 */
    _flag_k = FK_ADD;
L_140876FC:
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x140876FC: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x8) = 0; /* 0x14087700: mov dword ptr [edi + 8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14087733; /* 0x14087707: je 0x14087733 */
L_14087709:
    esp = esp; /* 0x14087709: lea esp, [esp] */
L_14087710:
    esi = MEM32(edi + 0xC); /* 0x14087710: mov esi, dword ptr [edi + 0xc] */
    eax = MEM32(esi + 0xC); /* 0x14087713: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x14087716: mov dword ptr [edi + 0xc], eax */
    ecx = esi; /* 0x14087719: mov ecx, esi */
    MEM32(esi + 0xC) = 0; /* 0x1408771B: mov dword ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_140876B0); /* 0x14087722: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087727: push esi */
    RECOMP_ICALL(ebx); /* 0x14087728: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408772A: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x1408772D: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14087710; /* 0x14087731: jne 0x14087710 */
L_14087733:
    edi = POP32_VAL(esp); /* 0x14087733: pop edi */
    esi = POP32_VAL(esp); /* 0x14087734: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087735: pop ebx */
    esp = ebp; /* 0x14087736: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14087738: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087739: ret  */
L_140877C0:
    edi = edi; /* 0x140877C0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x140877C2: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140877C3: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x140877C9: push esi */
    PUSH32(esp, edi); /* 0x140877CA: push edi */
    edi = ecx; /* 0x140877CB: mov edi, ecx */
    esi = MEM32(edi + 0x30); /* 0x140877CD: mov esi, dword ptr [edi + 0x30] */
    /* test esi, esi */ /* 0x140877D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140877E1; /* 0x140877D2: je 0x140877e1 */
L_140877D4:
    ecx = esi; /* 0x140877D4: mov ecx, esi */
    RECOMP_CALL(sub_14087A50); /* 0x140877D6: call 0x14087a50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x140877DB: push esi */
    RECOMP_ICALL(ebx); /* 0x140877DC: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140877DE: add esp, 4 */
    _flag_k = FK_ADD;
L_140877E1:
    esi = MEM32(edi + 0x2C); /* 0x140877E1: mov esi, dword ptr [edi + 0x2c] */
    MEM32(edi + 0x30) = 0; /* 0x140877E4: mov dword ptr [edi + 0x30], 0 */
    /* test esi, esi */ /* 0x140877EB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140877FC; /* 0x140877ED: je 0x140877fc */
L_140877EF:
    ecx = esi; /* 0x140877EF: mov ecx, esi */
    RECOMP_CALL(sub_14087850); /* 0x140877F1: call 0x14087850 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x140877F6: push esi */
    RECOMP_ICALL(ebx); /* 0x140877F7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140877F9: add esp, 4 */
    _flag_k = FK_ADD;
L_140877FC:
    /* cmp MEM32(edi + 0x34), 0 */ /* 0x140877FC: cmp dword ptr [edi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x2C) = 0; /* 0x14087800: mov dword ptr [edi + 0x2c], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14087833; /* 0x14087807: je 0x14087833 */
L_14087809:
    esp = esp; /* 0x14087809: lea esp, [esp] */
L_14087810:
    esi = MEM32(edi + 0x34); /* 0x14087810: mov esi, dword ptr [edi + 0x34] */
    eax = MEM32(esi + 0x34); /* 0x14087813: mov eax, dword ptr [esi + 0x34] */
    MEM32(edi + 0x34) = eax; /* 0x14087816: mov dword ptr [edi + 0x34], eax */
    ecx = esi; /* 0x14087819: mov ecx, esi */
    MEM32(esi + 0x34) = 0; /* 0x1408781B: mov dword ptr [esi + 0x34], 0 */
    RECOMP_CALL(sub_140877C0); /* 0x14087822: call 0x140877c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087827: push esi */
    RECOMP_ICALL(ebx); /* 0x14087828: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408782A: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x34), 0 */ /* 0x1408782D: cmp dword ptr [edi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14087810; /* 0x14087831: jne 0x14087810 */
L_14087833:
    ecx = edi; /* 0x14087833: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x14087835: pop edi */
    esi = POP32_VAL(esp); /* 0x14087836: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087837: pop ebx */
    RECOMP_BACKEDGE();
    goto L_140876B0; /* 0x14087838: jmp 0x140876b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_14087850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087850u);

    goto L_14087850;
L_140876B0:
    edi = edi; /* 0x140876B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140876B2: push ebp */
    ebp = esp; /* 0x140876B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140876B5: push ecx */
    PUSH32(esp, ebx); /* 0x140876B6: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140876B7: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x140876BD: push esi */
    PUSH32(esp, edi); /* 0x140876BE: push edi */
    edi = ecx; /* 0x140876BF: mov edi, ecx */
    eax = MEM32(edi + 0x8); /* 0x140876C1: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x140876C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140876FC; /* 0x140876C6: je 0x140876fc */
L_140876C8:
    ebx = MEM32(eax + (-0x4)); /* 0x140876C8: mov ebx, dword ptr [eax - 4] */
    ecx = eax + (-0x4); /* 0x140876CB: lea ecx, [eax - 4] */
    esi = ebx; /* 0x140876CE: mov esi, ebx */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x140876D0: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x140876D0: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x140876D3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140876D5: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x140876D6: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_140876F0; /* 0x140876D9: js 0x140876f0 */
L_140876DB:
    goto L_140876E0; /* 0x140876DB: jmp 0x140876e0 */
L_140876E0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x20u; /* 0x140876E0: sub esi, 0x20 */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x140876E3: mov ecx, esi */
    RECOMP_CALL(sub_140876B0); /* 0x140876E5: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140876EA: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_140876E0; /* 0x140876EB: jns 0x140876e0 */
L_140876ED:
    ecx = MEM32(ebp + (-0x4)); /* 0x140876ED: mov ecx, dword ptr [ebp - 4] */
L_140876F0:
    ebx = MEM32(0x1400115C); /* 0x140876F0: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, ecx); /* 0x140876F6: push ecx */
    RECOMP_ICALL(ebx); /* 0x140876F7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140876F9: add esp, 4 */
    _flag_k = FK_ADD;
L_140876FC:
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x140876FC: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x8) = 0; /* 0x14087700: mov dword ptr [edi + 8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14087733; /* 0x14087707: je 0x14087733 */
L_14087709:
    esp = esp; /* 0x14087709: lea esp, [esp] */
L_14087710:
    esi = MEM32(edi + 0xC); /* 0x14087710: mov esi, dword ptr [edi + 0xc] */
    eax = MEM32(esi + 0xC); /* 0x14087713: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x14087716: mov dword ptr [edi + 0xc], eax */
    ecx = esi; /* 0x14087719: mov ecx, esi */
    MEM32(esi + 0xC) = 0; /* 0x1408771B: mov dword ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_140876B0); /* 0x14087722: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087727: push esi */
    RECOMP_ICALL(ebx); /* 0x14087728: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408772A: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x1408772D: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14087710; /* 0x14087731: jne 0x14087710 */
L_14087733:
    edi = POP32_VAL(esp); /* 0x14087733: pop edi */
    esi = POP32_VAL(esp); /* 0x14087734: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087735: pop ebx */
    esp = ebp; /* 0x14087736: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14087738: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087739: ret  */
L_14087850:
    edi = edi; /* 0x14087850: mov edi, edi */
    PUSH32(esp, ebx); /* 0x14087852: push ebx */
    ebx = MEM32(0x1400115C); /* 0x14087853: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x14087859: push esi */
    PUSH32(esp, edi); /* 0x1408785A: push edi */
    edi = ecx; /* 0x1408785B: mov edi, ecx */
    esi = MEM32(edi + 0x28); /* 0x1408785D: mov esi, dword ptr [edi + 0x28] */
    /* test esi, esi */ /* 0x14087860: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14087871; /* 0x14087862: je 0x14087871 */
L_14087864:
    ecx = esi; /* 0x14087864: mov ecx, esi */
    RECOMP_CALL(sub_14087A50); /* 0x14087866: call 0x14087a50 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1408786B: push esi */
    RECOMP_ICALL(ebx); /* 0x1408786C: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408786E: add esp, 4 */
    _flag_k = FK_ADD;
L_14087871:
    /* cmp MEM32(edi + 0x2C), 0 */ /* 0x14087871: cmp dword ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x28) = 0; /* 0x14087875: mov dword ptr [edi + 0x28], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140878A3; /* 0x1408787C: je 0x140878a3 */
L_1408787E:
    edi = edi; /* 0x1408787E: mov edi, edi */
L_14087880:
    esi = MEM32(edi + 0x2C); /* 0x14087880: mov esi, dword ptr [edi + 0x2c] */
    eax = MEM32(esi + 0x2C); /* 0x14087883: mov eax, dword ptr [esi + 0x2c] */
    MEM32(edi + 0x2C) = eax; /* 0x14087886: mov dword ptr [edi + 0x2c], eax */
    ecx = esi; /* 0x14087889: mov ecx, esi */
    MEM32(esi + 0x2C) = 0; /* 0x1408788B: mov dword ptr [esi + 0x2c], 0 */
    RECOMP_CALL(sub_14087850); /* 0x14087892: call 0x14087850 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087897: push esi */
    RECOMP_ICALL(ebx); /* 0x14087898: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408789A: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x2C), 0 */ /* 0x1408789D: cmp dword ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14087880; /* 0x140878A1: jne 0x14087880 */
L_140878A3:
    ecx = edi; /* 0x140878A3: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x140878A5: pop edi */
    esi = POP32_VAL(esp); /* 0x140878A6: pop esi */
    ebx = POP32_VAL(esp); /* 0x140878A7: pop ebx */
    RECOMP_BACKEDGE();
    goto L_140876B0; /* 0x140878A8: jmp 0x140876b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_140878C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140878C0u);

    goto L_140878C0;
L_140876B0:
    edi = edi; /* 0x140876B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140876B2: push ebp */
    ebp = esp; /* 0x140876B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x140876B5: push ecx */
    PUSH32(esp, ebx); /* 0x140876B6: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140876B7: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x140876BD: push esi */
    PUSH32(esp, edi); /* 0x140876BE: push edi */
    edi = ecx; /* 0x140876BF: mov edi, ecx */
    eax = MEM32(edi + 0x8); /* 0x140876C1: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x140876C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140876FC; /* 0x140876C6: je 0x140876fc */
L_140876C8:
    ebx = MEM32(eax + (-0x4)); /* 0x140876C8: mov ebx, dword ptr [eax - 4] */
    ecx = eax + (-0x4); /* 0x140876CB: lea ecx, [eax - 4] */
    esi = ebx; /* 0x140876CE: mov esi, ebx */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x140876D0: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x140876D0: shl esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x140876D3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140876D5: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x140876D6: mov dword ptr [ebp - 4], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_140876F0; /* 0x140876D9: js 0x140876f0 */
L_140876DB:
    goto L_140876E0; /* 0x140876DB: jmp 0x140876e0 */
L_140876E0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x20u; /* 0x140876E0: sub esi, 0x20 */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x140876E3: mov ecx, esi */
    RECOMP_CALL(sub_140876B0); /* 0x140876E5: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x140876EA: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_140876E0; /* 0x140876EB: jns 0x140876e0 */
L_140876ED:
    ecx = MEM32(ebp + (-0x4)); /* 0x140876ED: mov ecx, dword ptr [ebp - 4] */
L_140876F0:
    ebx = MEM32(0x1400115C); /* 0x140876F0: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, ecx); /* 0x140876F6: push ecx */
    RECOMP_ICALL(ebx); /* 0x140876F7: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140876F9: add esp, 4 */
    _flag_k = FK_ADD;
L_140876FC:
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x140876FC: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x8) = 0; /* 0x14087700: mov dword ptr [edi + 8], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14087733; /* 0x14087707: je 0x14087733 */
L_14087709:
    esp = esp; /* 0x14087709: lea esp, [esp] */
L_14087710:
    esi = MEM32(edi + 0xC); /* 0x14087710: mov esi, dword ptr [edi + 0xc] */
    eax = MEM32(esi + 0xC); /* 0x14087713: mov eax, dword ptr [esi + 0xc] */
    MEM32(edi + 0xC) = eax; /* 0x14087716: mov dword ptr [edi + 0xc], eax */
    ecx = esi; /* 0x14087719: mov ecx, esi */
    MEM32(esi + 0xC) = 0; /* 0x1408771B: mov dword ptr [esi + 0xc], 0 */
    RECOMP_CALL(sub_140876B0); /* 0x14087722: call 0x140876b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087727: push esi */
    RECOMP_ICALL(ebx); /* 0x14087728: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408772A: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x1408772D: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14087710; /* 0x14087731: jne 0x14087710 */
L_14087733:
    edi = POP32_VAL(esp); /* 0x14087733: pop edi */
    esi = POP32_VAL(esp); /* 0x14087734: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087735: pop ebx */
    esp = ebp; /* 0x14087736: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x14087738: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087739: ret  */
L_140878C0:
    edi = edi; /* 0x140878C0: mov edi, edi */
    PUSH32(esp, edi); /* 0x140878C2: push edi */
    edi = ecx; /* 0x140878C3: mov edi, ecx */
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x140878C5: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140878F8; /* 0x140878C9: je 0x140878f8 */
L_140878CB:
    PUSH32(esp, ebx); /* 0x140878CB: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140878CC: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x140878D2: push esi */
L_140878D3:
    esi = MEM32(edi + 0x28); /* 0x140878D3: mov esi, dword ptr [edi + 0x28] */
    eax = MEM32(esi + 0x28); /* 0x140878D6: mov eax, dword ptr [esi + 0x28] */
    MEM32(edi + 0x28) = eax; /* 0x140878D9: mov dword ptr [edi + 0x28], eax */
    ecx = esi; /* 0x140878DC: mov ecx, esi */
    MEM32(esi + 0x28) = 0; /* 0x140878DE: mov dword ptr [esi + 0x28], 0 */
    RECOMP_CALL(sub_140878C0); /* 0x140878E5: call 0x140878c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x140878EA: push esi */
    RECOMP_ICALL(ebx); /* 0x140878EB: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140878ED: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x28), 0 */ /* 0x140878F0: cmp dword ptr [edi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140878D3; /* 0x140878F4: jne 0x140878d3 */
L_140878F6:
    esi = POP32_VAL(esp); /* 0x140878F6: pop esi */
    ebx = POP32_VAL(esp); /* 0x140878F7: pop ebx */
L_140878F8:
    ecx = edi; /* 0x140878F8: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x140878FA: pop edi */
    RECOMP_BACKEDGE();
    goto L_140876B0; /* 0x140878FB: jmp 0x140876b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_14087910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087910u);

L_14087910:
    edi = edi; /* 0x14087910: mov edi, edi */
    PUSH32(esp, edi); /* 0x14087912: push edi */
    edi = ecx; /* 0x14087913: mov edi, ecx */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x14087915: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14087948; /* 0x14087919: je 0x14087948 */
L_1408791B:
    PUSH32(esp, ebx); /* 0x1408791B: push ebx */
    ebx = MEM32(0x1400115C); /* 0x1408791C: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x14087922: push esi */
L_14087923:
    esi = MEM32(edi + 0x8); /* 0x14087923: mov esi, dword ptr [edi + 8] */
    eax = MEM32(esi + 0x8); /* 0x14087926: mov eax, dword ptr [esi + 8] */
    MEM32(edi + 0x8) = eax; /* 0x14087929: mov dword ptr [edi + 8], eax */
    ecx = esi; /* 0x1408792C: mov ecx, esi */
    MEM32(esi + 0x8) = 0; /* 0x1408792E: mov dword ptr [esi + 8], 0 */
    RECOMP_CALL(sub_14087910); /* 0x14087935: call 0x14087910 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1408793A: push esi */
    RECOMP_ICALL(ebx); /* 0x1408793B: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408793D: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x14087940: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14087923; /* 0x14087944: jne 0x14087923 */
L_14087946:
    esi = POP32_VAL(esp); /* 0x14087946: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087947: pop ebx */
L_14087948:
    edi = POP32_VAL(esp); /* 0x14087948: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087949: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087950u);

L_14087950:
    ecx = esi; /* 0x14087950: mov ecx, esi */
    RECOMP_CALL(sub_14087910); /* 0x14087952: call 0x14087910 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x14087957: push esi */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14087958: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408795E: add esp, 4 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x14087961: mov eax, esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087963: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087970u);

L_14087970:
    edi = edi; /* 0x14087970: mov edi, edi */
    PUSH32(esp, ebp); /* 0x14087972: push ebp */
    ebp = esp; /* 0x14087973: mov ebp, esp */
    MEM32(edx) = eax; /* 0x14087975: mov dword ptr [edx], eax */
    eax = MEM32(ebp + 0x8); /* 0x14087977: mov eax, dword ptr [ebp + 8] */
    MEM32(edx + 0x4) = eax; /* 0x1408797A: mov dword ptr [edx + 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1408797D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx + 0x8) = eax; /* 0x14087980: mov dword ptr [edx + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x14087983: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx + 0xC) = eax; /* 0x14087986: mov dword ptr [edx + 0xc], eax */
    eax = MEM32(ebp + 0x14); /* 0x14087989: mov eax, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x1C) = ecx; /* 0x1408798C: mov dword ptr [edx + 0x1c], ecx */
    ecx = MEM32(ebp + 0x20); /* 0x1408798F: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(edx + 0x10) = eax; /* 0x14087992: mov dword ptr [edx + 0x10], eax */
    eax = MEM32(ebp + 0x18); /* 0x14087995: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edx + 0x20) = ecx; /* 0x14087998: mov dword ptr [edx + 0x20], ecx */
    ecx = MEM32(ebp + 0x24); /* 0x1408799B: mov ecx, dword ptr [ebp + 0x24] */
    MEM32(edx + 0x14) = eax; /* 0x1408799E: mov dword ptr [edx + 0x14], eax */
    eax = MEM32(ebp + 0x1C); /* 0x140879A1: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(edx + 0x24) = ecx; /* 0x140879A4: mov dword ptr [edx + 0x24], ecx */
    ecx = MEM32(ebp + 0x28); /* 0x140879A7: mov ecx, dword ptr [ebp + 0x28] */
    MEM32(edx + 0x18) = eax; /* 0x140879AA: mov dword ptr [edx + 0x18], eax */
    MEM32(edx + 0x28) = ecx; /* 0x140879AD: mov dword ptr [edx + 0x28], ecx */
    MEM32(edx + 0x2C) = 0; /* 0x140879B0: mov dword ptr [edx + 0x2c], 0 */
    eax = edx; /* 0x140879B7: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x140879B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x140879BA: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_140879D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140879D0u);

L_140879D0:
    edi = edi; /* 0x140879D0: mov edi, edi */
    PUSH32(esp, edi); /* 0x140879D2: push edi */
    edi = ecx; /* 0x140879D3: mov edi, ecx */
    /* cmp MEM32(edi + 0x2C), 0 */ /* 0x140879D5: cmp dword ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14087A08; /* 0x140879D9: je 0x14087a08 */
L_140879DB:
    PUSH32(esp, ebx); /* 0x140879DB: push ebx */
    ebx = MEM32(0x1400115C); /* 0x140879DC: mov ebx, dword ptr [0x1400115c] */
    PUSH32(esp, esi); /* 0x140879E2: push esi */
L_140879E3:
    esi = MEM32(edi + 0x2C); /* 0x140879E3: mov esi, dword ptr [edi + 0x2c] */
    eax = MEM32(esi + 0x2C); /* 0x140879E6: mov eax, dword ptr [esi + 0x2c] */
    MEM32(edi + 0x2C) = eax; /* 0x140879E9: mov dword ptr [edi + 0x2c], eax */
    ecx = esi; /* 0x140879EC: mov ecx, esi */
    MEM32(esi + 0x2C) = 0; /* 0x140879EE: mov dword ptr [esi + 0x2c], 0 */
    RECOMP_CALL(sub_140879D0); /* 0x140879F5: call 0x140879d0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x140879FA: push esi */
    RECOMP_ICALL(ebx); /* 0x140879FB: call ebx */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140879FD: add esp, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x2C), 0 */ /* 0x14087A00: cmp dword ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140879E3; /* 0x14087A04: jne 0x140879e3 */
L_14087A06:
    esi = POP32_VAL(esp); /* 0x14087A06: pop esi */
    ebx = POP32_VAL(esp); /* 0x14087A07: pop ebx */
L_14087A08:
    edi = POP32_VAL(esp); /* 0x14087A08: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087A09: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087A10u);

L_14087A10:
    MEM32(eax + 0x10) = 0xFFFFFFFFu; /* 0x14087A10: mov dword ptr [eax + 0x10], 0xffffffff */
    MEM32(eax + 0x1C) = 0; /* 0x14087A17: mov dword ptr [eax + 0x1c], 0 */
    MEM32(eax + 0x8) = 0; /* 0x14087A1E: mov dword ptr [eax + 8], 0 */
    MEM32(eax + 0xC) = 0; /* 0x14087A25: mov dword ptr [eax + 0xc], 0 */
    MEM32(eax + 0x4) = eax; /* 0x14087A2C: mov dword ptr [eax + 4], eax */
    MEM32(eax) = 3; /* 0x14087A2F: mov dword ptr [eax], 3 */
    MEM32(eax + 0x18) = 0; /* 0x14087A35: mov dword ptr [eax + 0x18], 0 */
    MEM32(eax + 0x30) = 0; /* 0x14087A3C: mov dword ptr [eax + 0x30], 0 */
    MEM32(eax + 0x34) = 0; /* 0x14087A43: mov dword ptr [eax + 0x34], 0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087A4A: ret  */
    RECOMP_REGS_OUT();
}

void sub_14082630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14082630u);

L_14082630:
    edx = eax + eax * 4; /* 0x14082630: lea edx, [eax + eax*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x14082633: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x14082635: add edx, edx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + edx + 0x1402FA70); /* 0x14082637: mov eax, dword ptr [edx + edx + 0x1402fa70] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x1408263E: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14082640: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x25u */ /* 0x14082641: cmp eax, 0x25 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x25u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14082856; /* 0x14082644: ja 0x14082856 */
L_1408264A:
    eax = (uint32_t)MEM8(eax + 0x14082898); /* 0x1408264A: movzx eax, byte ptr [eax + 0x14082898] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1408285C)); goto _ljump; }
L_14082658:
    /* cmp MEM32(esi), 2 */ /* 0x14082658: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x1408265B: jne 0x14082670 */
L_1408265D:
    /* cmp MEM32(esi + 0x1C), 0x1Cu */ /* 0x1408265D: cmp dword ptr [esi + 0x1c], 0x1c */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x14082661: jne 0x14082670 */
L_14082663:
    eax = 1; /* 0x14082663: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14082668: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1408266A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1408266C: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408266F: ret  */
L_14082670:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14082670: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14082672: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14082674: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x14082676: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14082679: ret  */
L_1408267A:
    /* cmp MEM32(esi), 2 */ /* 0x1408267A: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x1408267D: jne 0x14082670 */
L_1408267F:
    /* cmp MEM32(esi + 0x1C), 0x1Eu */ /* 0x1408267F: cmp dword ptr [esi + 0x1c], 0x1e */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x14082683: jne 0x14082670 */
L_14082685:
    eax = 1; /* 0x14082685: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1408268A: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1408268C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1408268E: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14082691: ret  */
L_14082692:
    /* cmp MEM32(esi), 2 */ /* 0x14082692: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x14082695: jne 0x14082670 */
L_14082697:
    /* cmp MEM32(esi + 0x1C), 0x1Du */ /* 0x14082697: cmp dword ptr [esi + 0x1c], 0x1d */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x1408269B: jne 0x14082670 */
L_1408269D:
    eax = 1; /* 0x1408269D: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140826A2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140826A4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x140826A6: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140826A9: ret  */
L_140826AA:
    /* cmp MEM32(esi), 2 */ /* 0x140826AA: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082856; /* 0x140826AD: jne 0x14082856 */
L_140826B3:
    eax = MEM32(esi + 0x1C); /* 0x140826B3: mov eax, dword ptr [esi + 0x1c] */
    /* cmp eax, 7 */ /* 0x140826B6: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140826C9; /* 0x140826B9: je 0x140826c9 */
L_140826BB:
    /* cmp eax, 8 */ /* 0x140826BB: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140826C9; /* 0x140826BE: je 0x140826c9 */
L_140826C0:
    /* cmp eax, 0x1Bu */ /* 0x140826C0: cmp eax, 0x1b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082856; /* 0x140826C3: jne 0x14082856 */
L_140826C9:
    eax = 2; /* 0x140826C9: mov eax, 2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140826CE: ret  */
L_140826CF:
    /* cmp MEM32(esi), 2 */ /* 0x140826CF: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082856; /* 0x140826D2: jne 0x14082856 */
L_140826D8:
    eax = MEM32(esi + 0x1C); /* 0x140826D8: mov eax, dword ptr [esi + 0x1c] */
    /* cmp eax, 5 */ /* 0x140826DB: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140826E9; /* 0x140826DE: je 0x140826e9 */
L_140826E0:
    /* cmp eax, 0x19u */ /* 0x140826E0: cmp eax, 0x19 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x19u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082856; /* 0x140826E3: jne 0x14082856 */
L_140826E9:
    eax = 2; /* 0x140826E9: mov eax, 2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140826EE: ret  */
L_140826EF:
    /* cmp MEM32(esi), 2 */ /* 0x140826EF: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082856; /* 0x140826F2: jne 0x14082856 */
L_140826F8:
    eax = MEM32(esi + 0x1C); /* 0x140826F8: mov eax, dword ptr [esi + 0x1c] */
    /* cmp eax, 6 */ /* 0x140826FB: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082709; /* 0x140826FE: je 0x14082709 */
L_14082700:
    /* cmp eax, 0x1Au */ /* 0x14082700: cmp eax, 0x1a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082856; /* 0x14082703: jne 0x14082856 */
L_14082709:
    eax = 2; /* 0x14082709: mov eax, 2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408270E: ret  */
L_1408270F:
    /* cmp MEM32(esi), 2 */ /* 0x1408270F: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x14082712: jne 0x14082670 */
L_14082718:
    /* cmp MEM32(esi + 0x1C), 2 */ /* 0x14082718: cmp dword ptr [esi + 0x1c], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x1408271C: jne 0x14082670 */
L_14082722:
    eax = 1; /* 0x14082722: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14082727: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14082729: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1408272B: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408272E: ret  */
L_1408272F:
    /* cmp MEM32(esi), 2 */ /* 0x1408272F: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x14082732: jne 0x14082670 */
L_14082738:
    /* cmp MEM32(esi + 0x1C), 4 */ /* 0x14082738: cmp dword ptr [esi + 0x1c], 4 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x1408273C: jne 0x14082670 */
L_14082742:
    eax = 1; /* 0x14082742: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14082747: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14082749: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1408274B: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408274E: ret  */
L_1408274F:
    /* cmp MEM32(esi), 2 */ /* 0x1408274F: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x14082752: jne 0x14082670 */
L_14082758:
    /* cmp MEM32(esi + 0x1C), 3 */ /* 0x14082758: cmp dword ptr [esi + 0x1c], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x1408275C: jne 0x14082670 */
L_14082762:
    eax = 1; /* 0x14082762: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14082767: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14082769: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1408276B: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408276E: ret  */
L_1408276F:
    /* cmp MEM32(esi), 2 */ /* 0x1408276F: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x14082772: jne 0x14082670 */
L_14082778:
    /* cmp MEM32(esi + 0x1C), 0x13u */ /* 0x14082778: cmp dword ptr [esi + 0x1c], 0x13 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x1408277C: jne 0x14082670 */
L_14082782:
    eax = 1; /* 0x14082782: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14082787: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14082789: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1408278B: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408278E: ret  */
L_1408278F:
    /* cmp MEM32(esi), 2 */ /* 0x1408278F: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x14082792: jne 0x14082670 */
L_14082798:
    /* cmp MEM32(esi + 0x1C), 0x14u */ /* 0x14082798: cmp dword ptr [esi + 0x1c], 0x14 */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082670; /* 0x1408279C: jne 0x14082670 */
L_140827A2:
    eax = 1; /* 0x140827A2: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x140827A7: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x140827A9: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x140827AB: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140827AE: ret  */
L_140827AF:
    /* cmp MEM32(esi), 1 */ /* 0x140827AF: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082856; /* 0x140827B2: jne 0x14082856 */
L_140827B8:
    ecx = MEM32(esi + 0x1C); /* 0x140827B8: mov ecx, dword ptr [esi + 0x1c] */
    eax = ecx; /* 0x140827BB: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x140827BD: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x100u */ /* 0x140827C2: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140827F1; /* 0x140827C7: jne 0x140827f1 */
L_140827C9:
    eax = ecx; /* 0x140827C9: mov eax, ecx */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x140827CB: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x140827CB: shr eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x140827CE: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(edx + 0x1402FA74) */ /* 0x140827D1: cmp eax, dword ptr [edx + 0x1402fa74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x1402FA74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140827F1; /* 0x140827D7: jne 0x140827f1 */
L_140827D9:
    if (24u) _cf = (((ecx) >> 8) & 1u); /* 0x140827D9: shl ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack((ecx << 24u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 24u; /* 0x140827D9: shl ecx, 0x18 */
    if (27u) _cf = (((ecx) >> 26) & 1u); /* 0x140827DC: sar ecx, 0x1b */
    if (27u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 27u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 27u);
    /* cmp ecx, 2 */ /* 0x140827DF: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140826C9; /* 0x140827E2: je 0x140826c9 */
L_140827E8:
    /* cmp ecx, 3 */ /* 0x140827E8: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140826C9; /* 0x140827EB: je 0x140826c9 */
L_140827F1:
    eax = 1; /* 0x140827F1: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140827F6: ret  */
L_140827F7:
    /* cmp MEM32(esi), 1 */ /* 0x140827F7: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082856; /* 0x140827FA: jne 0x14082856 */
L_140827FC:
    ecx = MEM32(esi + 0x1C); /* 0x140827FC: mov ecx, dword ptr [esi + 0x1c] */
    eax = ecx; /* 0x140827FF: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x700u);
    eax = eax & 0x700u; /* 0x14082801: and eax, 0x700 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x100u */ /* 0x14082806: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140827F1; /* 0x1408280B: jne 0x140827f1 */
L_1408280D:
    eax = ecx; /* 0x1408280D: mov eax, ecx */
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x1408280F: shr eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax >> 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 11u; /* 0x1408280F: shr eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x14082812: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(edx + 0x1402FA74) */ /* 0x14082815: cmp eax, dword ptr [edx + 0x1402fa74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x1402FA74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140827F1; /* 0x1408281B: jne 0x140827f1 */
L_1408281D:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xF8u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0xF8u); /* 0x1408281D: and cl, 0xf8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(ecx), 8 */ /* 0x14082820: cmp cl, 8 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_140827F1; /* 0x14082823: jne 0x140827f1 */
L_14082825:
    eax = 2; /* 0x14082825: mov eax, 2 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408282A: ret  */
L_1408282B:
    eax = esi; /* 0x1408282B: mov eax, esi */
    RECOMP_CALL(sub_14086300); /* 0x1408282D: call 0x14086300 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14082832: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082849; /* 0x14082834: jne 0x14082849 */
L_14082836:
    eax = esi; /* 0x14082836: mov eax, esi */
    RECOMP_CALL(sub_14086360); /* 0x14082838: call 0x14086360 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1408283D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082849; /* 0x1408283F: jne 0x14082849 */
L_14082841:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x14082841: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14082843: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x14082845: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14082848: ret  */
L_14082849:
    eax = 1; /* 0x14082849: mov eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1408284E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x14082850: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x14082852: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14082855: ret  */
L_14082856:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14082856: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14082858: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x14082658u: goto L_14082658;
      case 0x1408267Au: goto L_1408267A;
      case 0x14082692u: goto L_14082692;
      case 0x140826AAu: goto L_140826AA;
      case 0x140826CFu: goto L_140826CF;
      case 0x140826EFu: goto L_140826EF;
      case 0x1408270Fu: goto L_1408270F;
      case 0x1408272Fu: goto L_1408272F;
      case 0x1408274Fu: goto L_1408274F;
      case 0x1408276Fu: goto L_1408276F;
      case 0x1408278Fu: goto L_1408278F;
      case 0x140827AFu: goto L_140827AF;
      case 0x140827F7u: goto L_140827F7;
      case 0x1408282Bu: goto L_1408282B;
      case 0x14082856u: goto L_14082856;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140828D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140828D0u);

L_140828D0:
    edi = edi; /* 0x140828D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x140828D2: push ebp */
    ebp = esp; /* 0x140828D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xF0u; /* 0x140828D5: sub esp, 0xf0 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x140828DB: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0x8); /* 0x140828DE: mov eax, dword ptr [edx + 8] */
    PUSH32(esp, ebx); /* 0x140828E1: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140828E2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x140828E4: push esi */
    esi = MEM32(0x1400115C); /* 0x140828E5: mov esi, dword ptr [0x1400115c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x140828EB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x140828ED: push edi */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x140828EE: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x78)) = eax; /* 0x140828F1: mov dword ptr [ebp - 0x78], eax */
    MEM32(ebp + (-0x54)) = ebx; /* 0x140828F4: mov dword ptr [ebp - 0x54], ebx */
    MEM32(ebp + (-0x60)) = ebx; /* 0x140828F7: mov dword ptr [ebp - 0x60], ebx */
    MEM32(ebp + (-0x5C)) = ebx; /* 0x140828FA: mov dword ptr [ebp - 0x5c], ebx */
    MEM32(ebp + (-0x58)) = ebx; /* 0x140828FD: mov dword ptr [ebp - 0x58], ebx */
    MEM32(ebp + (-0x68)) = ecx; /* 0x14082900: mov dword ptr [ebp - 0x68], ecx */
    /* test eax, eax */ /* 0x14082903: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408319D; /* 0x14082905: je 0x1408319d */
L_1408290B:
    goto L_14082910; /* 0x1408290B: jmp 0x14082910 */
L_14082910:
    eax = MEM32(edx); /* 0x14082910: mov eax, dword ptr [edx] */
    edi = MEM32(eax + ecx * 4); /* 0x14082912: mov edi, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x20)) = 0; /* 0x14082915: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x1408291C: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x14082923: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x1408292A: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x18)) = 0; /* 0x14082931: mov dword ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x50)) = 0; /* 0x14082938: mov dword ptr [ebp - 0x50], 0 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x1408293F: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x14082946: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x1408294D: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x14082954: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x3C)) = 0; /* 0x1408295B: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x14082962: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x14082969: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x14082970: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x14082977: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x1408297E: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x14082985: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x1408298C: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x58)) = 0; /* 0x14082993: mov dword ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x54)) = 0; /* 0x1408299A: mov dword ptr [ebp - 0x54], 0 */
    eax = MEM32(edi + 0x4); /* 0x140829A1: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x140829A4: lea eax, [eax + eax*4] */
    eax = MEM32(eax * 8 + 0x1402FA84); /* 0x140829A7: mov eax, dword ptr [eax*8 + 0x1402fa84] */
    MEM32(edi) = eax; /* 0x140829AE: mov dword ptr [edi], eax */
    eax = MEM32(edi + 0x8); /* 0x140829B0: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(eax + 0x4); /* 0x140829B3: mov ecx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x10)) = edi; /* 0x140829B6: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0xC)) = 0; /* 0x140829B9: mov dword ptr [ebp - 0xc], 0 */
    /* cmp ecx, 1 */ /* 0x140829C0: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082A32; /* 0x140829C3: jne 0x14082a32 */
L_140829C5:
    esi = MEM32(eax + 0x8); /* 0x140829C5: mov esi, dword ptr [eax + 8] */
    /* cmp MEM32(esi + 0x4), 5 */ /* 0x140829C8: cmp dword ptr [esi + 4], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x140829CC: mov dword ptr [ebp - 8], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082A04; /* 0x140829CF: jne 0x14082a04 */
L_140829D1:
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x140829D1: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082A3C; /* 0x140829D5: je 0x14082a3c */
L_140829D7:
    edx = MEM32(esi + 0x58); /* 0x140829D7: mov edx, dword ptr [esi + 0x58] */
    /* test edx, edx */ /* 0x140829DA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140829E1; /* 0x140829DC: jne 0x140829e1 */
L_140829DE:
    edx = esi + 0x38; /* 0x140829DE: lea edx, [esi + 0x38] */
L_140829E1:
    eax = MEM32(edi + 0x4); /* 0x140829E1: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x140829E4: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x140829E7: push dword ptr [eax*8 + 0x1402fa68] */
    eax = MEM32(ebp + 0x8); /* 0x140829EE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x140383FCu); /* 0x140829F1: push 0x140383fc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x140829F6: add eax, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x140829F9: push 0 */
    PUSH32(esp, eax); /* 0x140829FB: push eax */
    RECOMP_CALL(sub_141C5C90); /* 0x140829FC: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x14082A01: add esp, 0x10 */
    _flag_k = FK_ADD;
L_14082A04:
    edi = ebp + (-0x50); /* 0x14082A04: lea edi, [ebp - 0x50] */
    ebx = 0x80004005u; /* 0x14082A07: mov ebx, 0x80004005 */
    RECOMP_CALL(sub_140872A0); /* 0x14082A0C: call 0x140872a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x14082A11: push dword ptr [ebp - 0x2c] */
    esi = MEM32(0x1400115C); /* 0x14082A14: mov esi, dword ptr [0x1400115c] */
    MEM32(ebp + (-0x24)) = 0; /* 0x14082A1A: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x14082A21: mov dword ptr [ebp - 0x20], 0 */
    RECOMP_ICALL(esi); /* 0x14082A28: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14082A2A: add esp, 4 */
    _flag_k = FK_ADD;
    goto L_140831A9; /* 0x14082A2D: jmp 0x140831a9 */
L_14082A32:
    /* cmp ecx, 5 */ /* 0x14082A32: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082A04; /* 0x14082A35: jne 0x14082a04 */
L_14082A37:
    esi = eax; /* 0x14082A37: mov esi, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x14082A39: mov dword ptr [ebp - 8], eax */
L_14082A3C:
    /* test esi, esi */ /* 0x14082A3C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082B79; /* 0x14082A3E: je 0x14082b79 */
L_14082A44:
    /* cmp MEM32(esi + 0x4), 5 */ /* 0x14082A44: cmp dword ptr [esi + 4], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082B79; /* 0x14082A48: jne 0x14082b79 */
L_14082A4E:
    eax = esi; /* 0x14082A4E: mov eax, esi */
    MEM32(ebp + (-0x14)) = eax; /* 0x14082A50: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(esi + 0x4), 5 */ /* 0x14082A53: cmp dword ptr [esi + 4], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082A96; /* 0x14082A57: jne 0x14082a96 */
L_14082A59:
    MEM32(ebp + (-0x14)) = eax; /* 0x14082A59: mov dword ptr [ebp - 0x14], eax */
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x14082A5C: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082A96; /* 0x14082A60: jne 0x14082a96 */
L_14082A62:
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x14082A62: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082A96; /* 0x14082A66: je 0x14082a96 */
L_14082A68:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x14082A68: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082A96; /* 0x14082A6C: jne 0x14082a96 */
L_14082A6E:
    ecx = MEM32(ebp + 0x8); /* 0x14082A6E: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x14); /* 0x14082A71: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x14082A74: push eax */
    PUSH32(esp, 0x11u); /* 0x14082A75: push 0x11 */
    MEM32(ebp + (-0x14)) = esi; /* 0x14082A77: mov dword ptr [ebp - 0x14], esi */
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x14082A7A: push dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_14081930); /* 0x14082A7D: call 0x14081930 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082A82: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082A84: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14082AC5; /* 0x14082A86: js 0x14082ac5 */
L_14082A88:
    /* cmp ebx, 1 */ /* 0x14082A88: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082B79; /* 0x14082A8B: je 0x14082b79 */
L_14082A91:
    eax = MEM32(ebp + (-0x14)); /* 0x14082A91: mov eax, dword ptr [ebp - 0x14] */
    goto L_14082A98; /* 0x14082A94: jmp 0x14082a98 */
L_14082A96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x14082A96: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_14082A98:
    eax = MEM32(eax + 0x24); /* 0x14082A98: mov eax, dword ptr [eax + 0x24] */
    eax = MEM32(eax + 0x8); /* 0x14082A9B: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x14082A9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082B79; /* 0x14082AA0: je 0x14082b79 */
L_14082AA6:
    /* cmp MEM32(eax + 0x4), 6 */ /* 0x14082AA6: cmp dword ptr [eax + 4], 6 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082B79; /* 0x14082AAA: jne 0x14082b79 */
L_14082AB0:
    /* cmp MEM32(eax + 0x18), 5 */ /* 0x14082AB0: cmp dword ptr [eax + 0x18], 5 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082B79; /* 0x14082AB4: jne 0x14082b79 */
L_14082ABA:
    eax = MEM32(eax + 0x20); /* 0x14082ABA: mov eax, dword ptr [eax + 0x20] */
    eax = MEM32(eax + 0xC); /* 0x14082ABD: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x14082AC0: mov dword ptr [ebp - 0xc], eax */
    goto L_14082AC8; /* 0x14082AC3: jmp 0x14082ac8 */
L_14082AC5:
    eax = MEM32(ebp + (-0xC)); /* 0x14082AC5: mov eax, dword ptr [ebp - 0xc] */
L_14082AC8:
    /* test ebx, ebx */ /* 0x14082AC8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083268; /* 0x14082ACA: js 0x14083268 */
L_14082AD0:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082B79; /* 0x14082AD0: jne 0x14082b79 */
L_14082AD6:
    ecx = MEM32(ebp + 0x8); /* 0x14082AD6: mov ecx, dword ptr [ebp + 8] */
    /* test MEM8(ecx + 0xC24), 2 */ /* 0x14082AD9: test byte ptr [ecx + 0xc24], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC24)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082AF4; /* 0x14082AE0: jne 0x14082af4 */
L_14082AE2:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x14082AE2: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082AF4; /* 0x14082AE6: jne 0x14082af4 */
L_14082AE8:
    /* cmp MEM32(edi), 0x0003000Au */ /* 0x14082AE8: cmp dword ptr [edi], 0x3000a */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0003000Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140831DE; /* 0x14082AEE: jne 0x140831de */
L_14082AF4:
    edx = ebp + (-0x70); /* 0x14082AF4: lea edx, [ebp - 0x70] */
    PUSH32(esp, edx); /* 0x14082AF7: push edx */
    PUSH32(esp, eax); /* 0x14082AF8: push eax */
    PUSH32(esp, ecx); /* 0x14082AF9: push ecx */
    RECOMP_CALL(sub_14083530); /* 0x14082AFA: call 0x14083530 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082AFF: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082B01: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083268; /* 0x14082B03: js 0x14083268 */
L_14082B09:
    edx = MEM32(ebp + (-0x70)); /* 0x14082B09: mov edx, dword ptr [ebp - 0x70] */
    eax = MEM32(edx + 0x28); /* 0x14082B0C: mov eax, dword ptr [edx + 0x28] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x14082B0F: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14083244; /* 0x14082B13: jne 0x14083244 */
L_14082B19:
    ecx = MEM32(esi + 0x58); /* 0x14082B19: mov ecx, dword ptr [esi + 0x58] */
    /* test ecx, ecx */ /* 0x14082B1C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082B23; /* 0x14082B1E: jne 0x14082b23 */
L_14082B20:
    ecx = esi + 0x38; /* 0x14082B20: lea ecx, [esi + 0x38] */
L_14082B23:
    eax = MEM32(edi + 0x4); /* 0x14082B23: mov eax, dword ptr [edi + 4] */
    edi = MEM32(ebp + (-0xC)); /* 0x14082B26: mov edi, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x14082B29: mov esi, dword ptr [ebp + 8] */
    ebx = eax + eax * 4; /* 0x14082B2C: lea ebx, [eax + eax*4] */
    ebx = MEM32(ebx * 8 + 0x1402FA68); /* 0x14082B2F: mov ebx, dword ptr [ebx*8 + 0x1402fa68] */
    PUSH32(esp, ecx); /* 0x14082B36: push ecx */
    RECOMP_CALL(sub_1407FDD0); /* 0x14082B37: call 0x1407fdd0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082B3C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082B3E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082B40: js 0x14083471 */
L_14082B46:
    esi = MEM32(ebp + (-0x70)); /* 0x14082B46: mov esi, dword ptr [ebp - 0x70] */
    edi = MEM32(ebp + (-0x10)); /* 0x14082B49: mov edi, dword ptr [ebp - 0x10] */
    esi = MEM32(esi + 0x28); /* 0x14082B4C: mov esi, dword ptr [esi + 0x28] */
    eax = MEM32(edi + 0x4); /* 0x14082B4F: mov eax, dword ptr [edi + 4] */
    RECOMP_CALL(sub_14082630); /* 0x14082B52: call 0x14082630 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x14082B57: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082B76; /* 0x14082B5A: je 0x14082b76 */
L_14082B5C:
    /* test eax, eax */ /* 0x14082B5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408321D; /* 0x14082B5E: je 0x1408321d */
L_14082B64:
    eax = MEM32(ebp + (-0xC)); /* 0x14082B64: mov eax, dword ptr [ebp - 0xc] */
    MEM32(edi + 0x10) = 2; /* 0x14082B67: mov dword ptr [edi + 0x10], 2 */
    MEM32(edi + 0x14) = eax; /* 0x14082B6E: mov dword ptr [edi + 0x14], eax */
    goto L_1408317C; /* 0x14082B71: jmp 0x1408317c */
L_14082B76:
    esi = MEM32(ebp + (-0x8)); /* 0x14082B76: mov esi, dword ptr [ebp - 8] */
L_14082B79:
    edx = MEM32(ebp + 0x8); /* 0x14082B79: mov edx, dword ptr [ebp + 8] */
    eax = ebp + (-0x50); /* 0x14082B7C: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x14082B7F: push eax */
    eax = ebp + (-0x80); /* 0x14082B80: lea eax, [ebp - 0x80] */
    ecx = esi; /* 0x14082B83: mov ecx, esi */
    RECOMP_CALL(sub_14082530); /* 0x14082B85: call 0x14082530 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082B8A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082B8C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083268; /* 0x14082B8E: js 0x14083268 */
L_14082B94:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082C41; /* 0x14082B94: jne 0x14082c41 */
L_14082B9A:
    eax = MEM32(edi); /* 0x14082B9A: mov eax, dword ptr [edi] */
    /* cmp eax, MEM32(ebp + (-0x80)) */ /* 0x14082B9C: cmp eax, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x80)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140832C0; /* 0x14082B9F: jne 0x140832c0 */
L_14082BA5:
    eax = MEM32(ebp + (-0x24)); /* 0x14082BA5: mov eax, dword ptr [ebp - 0x24] */
    /* cmp MEM32(ebp + (-0x48)), eax */ /* 0x14082BA8: cmp dword ptr [ebp - 0x48], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14083291; /* 0x14082BAB: jne 0x14083291 */
L_14082BB1:
    /* cmp MEM32(ebp + (-0x34)), 1 */ /* 0x14082BB1: cmp dword ptr [ebp - 0x34], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14082BC0; /* 0x14082BB5: ja 0x14082bc0 */
L_14082BB7:
    /* test eax, eax */ /* 0x14082BB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 7; /* 0x14082BB9: mov eax, 7 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082BC5; /* 0x14082BBE: je 0x14082bc5 */
L_14082BC0:
    eax = 8; /* 0x14082BC0: mov eax, 8 */
L_14082BC5:
    MEM32(edi + 0x10) = eax; /* 0x14082BC5: mov dword ptr [edi + 0x10], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x1Cu; /* 0x14082BC8: add edi, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_140872A0); /* 0x14082BCB: call 0x140872a0 */
    RECOMP_FLAGS_IN();
    ecx = 0xDu; /* 0x14082BD0: mov ecx, 0xd */
    esi = ebp + (-0x50); /* 0x14082BD5: lea esi, [ebp - 0x50] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x14082BD8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x50)) = 0; /* 0x14082BDA: mov dword ptr [ebp - 0x50], 0 */
    MEM32(ebp + (-0x4C)) = 0; /* 0x14082BE1: mov dword ptr [ebp - 0x4c], 0 */
    MEM32(ebp + (-0x48)) = 0; /* 0x14082BE8: mov dword ptr [ebp - 0x48], 0 */
    MEM32(ebp + (-0x44)) = 0; /* 0x14082BEF: mov dword ptr [ebp - 0x44], 0 */
    MEM32(ebp + (-0x40)) = 0; /* 0x14082BF6: mov dword ptr [ebp - 0x40], 0 */
    MEM32(ebp + (-0x3C)) = 0; /* 0x14082BFD: mov dword ptr [ebp - 0x3c], 0 */
    MEM32(ebp + (-0x38)) = 0; /* 0x14082C04: mov dword ptr [ebp - 0x38], 0 */
    MEM32(ebp + (-0x34)) = 0; /* 0x14082C0B: mov dword ptr [ebp - 0x34], 0 */
    MEM32(ebp + (-0x30)) = 0; /* 0x14082C12: mov dword ptr [ebp - 0x30], 0 */
    MEM32(ebp + (-0x2C)) = 0; /* 0x14082C19: mov dword ptr [ebp - 0x2c], 0 */
    MEM32(ebp + (-0x28)) = 0; /* 0x14082C20: mov dword ptr [ebp - 0x28], 0 */
    MEM32(ebp + (-0x24)) = 0; /* 0x14082C27: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x14082C2E: mov dword ptr [ebp - 0x20], 0 */
    MEM32(ebp + (-0x1C)) = 0; /* 0x14082C35: mov dword ptr [ebp - 0x1c], 0 */
    goto L_1408317C; /* 0x14082C3C: jmp 0x1408317c */
L_14082C41:
    ecx = MEM32(ebp + 0x8); /* 0x14082C41: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + (-0x60); /* 0x14082C44: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x14082C47: push eax */
    PUSH32(esp, esi); /* 0x14082C48: push esi */
    RECOMP_CALL(sub_14081BD0); /* 0x14082C49: call 0x14081bd0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082C4E: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082C50: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082C52: js 0x14083471 */
L_14082C58:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082CF5; /* 0x14082C58: jne 0x14082cf5 */
L_14082C5E:
    eax = edi; /* 0x14082C5E: mov eax, edi */
    RECOMP_ICALL(0x140862D0u); /* 0x14082C60: call 0x140862d0 */ /* not lifted */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x58)); /* 0x14082C65: mov ecx, dword ptr [ebp - 0x58] */
    /* test eax, eax */ /* 0x14082C68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14082C92; /* 0x14082C6A: je 0x14082c92 */
L_14082C6C:
    /* cmp ecx, 1 */ /* 0x14082C6C: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140832EF; /* 0x14082C6F: jne 0x140832ef */
L_14082C75:
    edx = MEM32(ebp + (-0x60)); /* 0x14082C75: mov edx, dword ptr [ebp - 0x60] */
    eax = MEM32(edx); /* 0x14082C78: mov eax, dword ptr [edx] */
    /* cmp eax, 2 */ /* 0x14082C7A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082C88; /* 0x14082C7D: je 0x14082c88 */
L_14082C7F:
    /* cmp eax, 3 */ /* 0x14082C7F: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140832EF; /* 0x14082C82: jne 0x140832ef */
L_14082C88:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x14082C88: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_140832EF; /* 0x14082C8C: jne 0x140832ef */
L_14082C92:
    eax = MEM32(edi + 0x4); /* 0x14082C92: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x14082C95: lea eax, [eax + eax*4] */
    /* cmp MEM32(eax * 8 + 0x1402FA74), ecx */ /* 0x14082C98: cmp dword ptr [eax*8 + 0x1402fa74], ecx */
    _flag_a = (uint32_t)(MEM32(eax * 8 + 0x1402FA74)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14083330; /* 0x14082C9F: jne 0x14083330 */
L_14082CA5:
    MEM32(edi + 0x10) = 1; /* 0x14082CA5: mov dword ptr [edi + 0x10], 1 */
    eax = MEM32(ebp + (-0x58)); /* 0x14082CAC: mov eax, dword ptr [ebp - 0x58] */
    MEM32(edi + 0x14) = eax; /* 0x14082CAF: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x14082CB2: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x14082CB5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 8; /* 0x14082CB7: mov edx, 8 */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x14082CBC: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x14082CBE: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x14082CC1: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x14082CC3: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x14082CC5: push ecx */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14082CC6: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14082CCC: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x18) = eax; /* 0x14082CCF: mov dword ptr [edi + 0x18], eax */
    /* test eax, eax */ /* 0x14082CD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083318; /* 0x14082CD4: je 0x14083318 */
L_14082CDA:
    ecx = MEM32(edi + 0x14); /* 0x14082CDA: mov ecx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x14082CDD: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x14082CDF: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x14082CE1: add ecx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x14082CE3: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x14082CE4: push dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x14082CE7: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x14082CE8: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14082CED: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1408317C; /* 0x14082CF0: jmp 0x1408317c */
L_14082CF5:
    eax = ebp + (-0x7C); /* 0x14082CF5: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x14082CF8: push eax */
    eax = ebp + (-0x88); /* 0x14082CF9: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x14082CFF: push eax */
    eax = ebp + (-0x18); /* 0x14082D00: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x14082D03: push eax */
    PUSH32(esp, esi); /* 0x14082D04: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14082D05: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_140821F0); /* 0x14082D08: call 0x140821f0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082D0D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082D0F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082D11: js 0x14083471 */
L_14082D17:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082E26; /* 0x14082D17: jne 0x14082e26 */
L_14082D1D:
    ebx = MEM32(ebp + 0x8); /* 0x14082D1D: mov ebx, dword ptr [ebp + 8] */
    /* test MEM8(ebx + 0xC24), 2 */ /* 0x14082D20: test byte ptr [ebx + 0xc24], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC24)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082D3B; /* 0x14082D27: jne 0x14082d3b */
L_14082D29:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x14082D29: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082D3B; /* 0x14082D2D: jne 0x14082d3b */
L_14082D2F:
    /* cmp MEM32(edi), 0x0003000Au */ /* 0x14082D2F: cmp dword ptr [edi], 0x3000a */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0003000Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1408336E; /* 0x14082D35: jne 0x1408336e */
L_14082D3B:
    ecx = ebp + (-0x88); /* 0x14082D3B: lea ecx, [ebp - 0x88] */
    RECOMP_CALL(sub_14086550); /* 0x14082D41: call 0x14086550 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x14082D46: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x74); /* 0x14082D49: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x14082D4C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x14082D4D: push dword ptr [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x14082D50: push ebx */
    RECOMP_CALL(sub_14083530); /* 0x14082D51: call 0x14083530 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082D56: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082D58: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082D5A: js 0x14083471 */
L_14082D60:
    eax = MEM32(edi + 0x4); /* 0x14082D60: mov eax, dword ptr [edi + 4] */
    ebx = eax + eax * 4; /* 0x14082D63: lea ebx, [eax + eax*4] */
    eax = esi; /* 0x14082D66: mov eax, esi */
    RECOMP_CALL(sub_14068390); /* 0x14082D68: call 0x14068390 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x74)); /* 0x14082D6D: mov edx, dword ptr [ebp - 0x74] */
    edi = MEM32(ebp + (-0x18)); /* 0x14082D70: mov edi, dword ptr [ebp - 0x18] */
    ebx = MEM32(ebx * 8 + 0x1402FA68); /* 0x14082D73: mov ebx, dword ptr [ebx*8 + 0x1402fa68] */
    esi = MEM32(ebp + 0x8); /* 0x14082D7A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x14082D7D: push eax */
    RECOMP_CALL(sub_1407FDD0); /* 0x14082D7E: call 0x1407fdd0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082D83: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082D85: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082D87: js 0x14083471 */
L_14082D8D:
    edi = MEM32(ebp + (-0x74)); /* 0x14082D8D: mov edi, dword ptr [ebp - 0x74] */
    eax = MEM32(edi + 0x28); /* 0x14082D90: mov eax, dword ptr [edi + 0x28] */
    ecx = MEM32(eax); /* 0x14082D93: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + (-0x14)); /* 0x14082D95: mov edx, dword ptr [ebp - 0x14] */
    /* cmp ecx, 2 */ /* 0x14082D98: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082DA6; /* 0x14082D9B: jne 0x14082da6 */
L_14082D9D:
    /* cmp edx, MEM32(eax + 0x4) */ /* 0x14082D9D: cmp edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140833C1; /* 0x14082DA0: jae 0x140833c1 */
L_14082DA6:
    /* cmp ecx, 3 */ /* 0x14082DA6: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082DB4; /* 0x14082DA9: jne 0x14082db4 */
L_14082DAB:
    /* cmp edx, MEM32(eax + 0xC) */ /* 0x14082DAB: cmp edx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140833C1; /* 0x14082DAE: jae 0x140833c1 */
L_14082DB4:
    /* cmp ecx, 1 */ /* 0x14082DB4: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082DBE; /* 0x14082DB7: je 0x14082dbe */
L_14082DB9:
    /* cmp ecx, 4 */ /* 0x14082DB9: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082DD1; /* 0x14082DBC: jne 0x14082dd1 */
L_14082DBE:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x14082DBE: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140833C1; /* 0x14082DC2: je 0x140833c1 */
L_14082DC8:
    /* cmp edx, MEM32(eax + 0xC) */ /* 0x14082DC8: cmp edx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140833C1; /* 0x14082DCB: jae 0x140833c1 */
L_14082DD1:
    /* cmp edx, 0x3FFFFFFFu */ /* 0x14082DD1: cmp edx, 0x3fffffff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14083208; /* 0x14082DD7: jae 0x14083208 */
L_14082DDD:
    /* cmp ecx, 3 */ /* 0x14082DDD: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_14082DF1; /* 0x14082DE0: jne 0x14082df1 */
L_14082DE2:
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x14082DE2: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_14083394; /* 0x14082DE6: ja 0x14083394 */
L_14082DEC:
    esi = MEM32(ebp + (-0x7C)); /* 0x14082DEC: mov esi, dword ptr [ebp - 0x7c] */
    goto L_14082DF3; /* 0x14082DEF: jmp 0x14082df3 */
L_14082DF1:
    esi = eax; /* 0x14082DF1: mov esi, eax */
L_14082DF3:
    edi = MEM32(ebp + (-0x10)); /* 0x14082DF3: mov edi, dword ptr [ebp - 0x10] */
    eax = MEM32(edi + 0x4); /* 0x14082DF6: mov eax, dword ptr [edi + 4] */
    RECOMP_CALL(sub_14082630); /* 0x14082DF9: call 0x14082630 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x14082DFE: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082E23; /* 0x14082E01: je 0x14082e23 */
L_14082E03:
    /* test eax, eax */ /* 0x14082E03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083394; /* 0x14082E05: je 0x14083394 */
L_14082E0B:
    eax = MEM32(ebp + (-0x14)); /* 0x14082E0B: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edi + 0x10) = 3; /* 0x14082E0E: mov dword ptr [edi + 0x10], 3 */
    MEM32(edi + 0x14) = eax; /* 0x14082E15: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x14082E18: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edi + 0x18) = eax; /* 0x14082E1B: mov dword ptr [edi + 0x18], eax */
    goto L_1408317C; /* 0x14082E1E: jmp 0x1408317c */
L_14082E23:
    esi = MEM32(ebp + (-0x8)); /* 0x14082E23: mov esi, dword ptr [ebp - 8] */
L_14082E26:
    eax = ebp + (-0xC); /* 0x14082E26: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x14082E29: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14082E2A: push dword ptr [ebp + 8] */
    eax = ebp + (-0x18); /* 0x14082E2D: lea eax, [ebp - 0x18] */
    edi = esi; /* 0x14082E30: mov edi, esi */
    RECOMP_CALL(sub_14082250); /* 0x14082E32: call 0x14082250 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082E37: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082E39: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082E3B: js 0x14083471 */
L_14082E41:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082EE8; /* 0x14082E41: jne 0x14082ee8 */
L_14082E47:
    ebx = MEM32(ebp + 0x8); /* 0x14082E47: mov ebx, dword ptr [ebp + 8] */
    /* test MEM8(ebx + 0xC24), 2 */ /* 0x14082E4A: test byte ptr [ebx + 0xc24], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC24)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082E5D; /* 0x14082E51: jne 0x14082e5d */
L_14082E53:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x14082E53: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140833E9; /* 0x14082E57: je 0x140833e9 */
L_14082E5D:
    edi = MEM32(ebp + (-0x18)); /* 0x14082E5D: mov edi, dword ptr [ebp - 0x18] */
    eax = ebp + (-0x64); /* 0x14082E60: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x14082E63: push eax */
    PUSH32(esp, edi); /* 0x14082E64: push edi */
    PUSH32(esp, ebx); /* 0x14082E65: push ebx */
    RECOMP_CALL(sub_14083530); /* 0x14082E66: call 0x14083530 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082E6B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082E6D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082E6F: js 0x14083471 */
L_14082E75:
    esi = MEM32(ebp + (-0x10)); /* 0x14082E75: mov esi, dword ptr [ebp - 0x10] */
    eax = MEM32(esi + 0x4); /* 0x14082E78: mov eax, dword ptr [esi + 4] */
    ebx = eax + eax * 4; /* 0x14082E7B: lea ebx, [eax + eax*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x14082E7E: mov eax, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_14068390); /* 0x14082E81: call 0x14068390 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x64)); /* 0x14082E86: mov edx, dword ptr [ebp - 0x64] */
    ebx = MEM32(ebx * 8 + 0x1402FA68); /* 0x14082E89: mov ebx, dword ptr [ebx*8 + 0x1402fa68] */
    esi = MEM32(ebp + 0x8); /* 0x14082E90: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x14082E93: push eax */
    RECOMP_CALL(sub_1407FDD0); /* 0x14082E94: call 0x1407fdd0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082E99: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082E9B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082E9D: js 0x14083471 */
L_14082EA3:
    eax = MEM32(ebp + (-0x64)); /* 0x14082EA3: mov eax, dword ptr [ebp - 0x64] */
    esi = MEM32(eax + 0x28); /* 0x14082EA6: mov esi, dword ptr [eax + 0x28] */
    edi = MEM32(ebp + (-0x10)); /* 0x14082EA9: mov edi, dword ptr [ebp - 0x10] */
    eax = MEM32(edi + 0x4); /* 0x14082EAC: mov eax, dword ptr [edi + 4] */
    RECOMP_CALL(sub_14082630); /* 0x14082EAF: call 0x14082630 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x14082EB4: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082EE5; /* 0x14082EB7: je 0x14082ee5 */
L_14082EB9:
    /* test eax, eax */ /* 0x14082EB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408321D; /* 0x14082EBB: je 0x1408321d */
L_14082EC1:
    /* cmp MEM32(edi), 0x0003000Au */ /* 0x14082EC1: cmp dword ptr [edi], 0x3000a */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0003000Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14083413; /* 0x14082EC7: je 0x14083413 */
L_14082ECD:
    MEM32(edi + 0x10) = 4; /* 0x14082ECD: mov dword ptr [edi + 0x10], 4 */
    eax = MEM32(ebp + (-0x18)); /* 0x14082ED4: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edi + 0x14) = eax; /* 0x14082ED7: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x14082EDA: mov eax, dword ptr [ebp - 0xc] */
    MEM32(edi + 0x18) = eax; /* 0x14082EDD: mov dword ptr [edi + 0x18], eax */
    goto L_1408317C; /* 0x14082EE0: jmp 0x1408317c */
L_14082EE5:
    esi = MEM32(ebp + (-0x8)); /* 0x14082EE5: mov esi, dword ptr [ebp - 8] */
L_14082EE8:
    eax = ebp + (-0x1C); /* 0x14082EE8: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x14082EEB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x14082EEC: push dword ptr [ebp + 8] */
    eax = ebp + (-0x18); /* 0x14082EEF: lea eax, [ebp - 0x18] */
    edi = esi; /* 0x14082EF2: mov edi, esi */
    RECOMP_CALL(sub_140822D0); /* 0x14082EF4: call 0x140822d0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082EF9: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082EFB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082EFD: js 0x14083471 */
L_14082F03:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082FAE; /* 0x14082F03: jne 0x14082fae */
L_14082F09:
    ebx = MEM32(ebp + 0x8); /* 0x14082F09: mov ebx, dword ptr [ebp + 8] */
    /* test MEM8(ebx + 0xC24), 2 */ /* 0x14082F0C: test byte ptr [ebx + 0xc24], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC24)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082F1F; /* 0x14082F13: jne 0x14082f1f */
L_14082F15:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x14082F15: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140833E9; /* 0x14082F19: je 0x140833e9 */
L_14082F1F:
    edi = MEM32(ebp + (-0x18)); /* 0x14082F1F: mov edi, dword ptr [ebp - 0x18] */
    eax = ebp + (-0x6C); /* 0x14082F22: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x14082F25: push eax */
    PUSH32(esp, edi); /* 0x14082F26: push edi */
    PUSH32(esp, ebx); /* 0x14082F27: push ebx */
    RECOMP_CALL(sub_14083530); /* 0x14082F28: call 0x14083530 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082F2D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082F2F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082F31: js 0x14083471 */
L_14082F37:
    esi = MEM32(ebp + (-0x10)); /* 0x14082F37: mov esi, dword ptr [ebp - 0x10] */
    eax = MEM32(esi + 0x4); /* 0x14082F3A: mov eax, dword ptr [esi + 4] */
    ebx = eax + eax * 4; /* 0x14082F3D: lea ebx, [eax + eax*4] */
    eax = MEM32(ebp + (-0x8)); /* 0x14082F40: mov eax, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_14068390); /* 0x14082F43: call 0x14068390 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x6C)); /* 0x14082F48: mov edx, dword ptr [ebp - 0x6c] */
    ebx = MEM32(ebx * 8 + 0x1402FA68); /* 0x14082F4B: mov ebx, dword ptr [ebx*8 + 0x1402fa68] */
    esi = MEM32(ebp + 0x8); /* 0x14082F52: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x14082F55: push eax */
    RECOMP_CALL(sub_1407FDD0); /* 0x14082F56: call 0x1407fdd0 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x14082F5B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x14082F5D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083471; /* 0x14082F5F: js 0x14083471 */
L_14082F65:
    eax = MEM32(ebp + (-0x6C)); /* 0x14082F65: mov eax, dword ptr [ebp - 0x6c] */
    esi = MEM32(eax + 0x28); /* 0x14082F68: mov esi, dword ptr [eax + 0x28] */
    edi = MEM32(ebp + (-0x10)); /* 0x14082F6B: mov edi, dword ptr [ebp - 0x10] */
    eax = MEM32(edi + 0x4); /* 0x14082F6E: mov eax, dword ptr [edi + 4] */
    RECOMP_CALL(sub_14082630); /* 0x14082F71: call 0x14082630 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x14082F76: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14082FB3; /* 0x14082F79: je 0x14082fb3 */
L_14082F7B:
    /* test eax, eax */ /* 0x14082F7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408321D; /* 0x14082F7D: je 0x1408321d */
L_14082F83:
    /* cmp MEM32(edi), 0x0003000Au */ /* 0x14082F83: cmp dword ptr [edi], 0x3000a */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x0003000Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_14083438; /* 0x14082F89: je 0x14083438 */
L_14082F8F:
    MEM32(edi + 0x10) = 5; /* 0x14082F8F: mov dword ptr [edi + 0x10], 5 */
    eax = MEM32(ebp + (-0x18)); /* 0x14082F96: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edi + 0x14) = eax; /* 0x14082F99: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x14082F9C: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edi + 0x18) = eax; /* 0x14082F9F: mov dword ptr [edi + 0x18], eax */
    MEM32(ebp + (-0x1C)) = 0; /* 0x14082FA2: mov dword ptr [ebp - 0x1c], 0 */
    goto L_1408317C; /* 0x14082FA9: jmp 0x1408317c */
L_14082FAE:
    edi = MEM32(ebp + (-0x10)); /* 0x14082FAE: mov edi, dword ptr [ebp - 0x10] */
    goto L_14082FB6; /* 0x14082FB1: jmp 0x14082fb6 */
L_14082FB3:
    esi = MEM32(ebp + (-0x8)); /* 0x14082FB3: mov esi, dword ptr [ebp - 8] */
L_14082FB6:
    ebx = MEM32(ebp + 0x8); /* 0x14082FB6: mov ebx, dword ptr [ebp + 8] */
    /* test MEM8(ebx + 0xC24), 2 */ /* 0x14082FB9: test byte ptr [ebx + 0xc24], 2 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC24)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14082FCC; /* 0x14082FC0: jne 0x14082fcc */
L_14082FC2:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x14082FC2: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1408336E; /* 0x14082FC6: je 0x1408336e */
L_14082FCC:
    eax = ebp + (-0xEC); /* 0x14082FCC: lea eax, [ebp - 0xec] */
    RECOMP_CALL(sub_140E9EA0); /* 0x14082FD2: call 0x140e9ea0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xDC)) = 0; /* 0x14082FD7: mov dword ptr [ebp - 0xdc], 0 */
    eax = MEM32(edi + 0x4); /* 0x14082FE1: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x14082FE4: lea eax, [eax + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14082FE7: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14082FE9: add eax, eax */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + eax + 0x1402FA74); /* 0x14082FEB: mov ecx, dword ptr [eax + eax + 0x1402fa74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14082FF2: add eax, eax */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x1402FA70); /* 0x14082FF4: mov eax, dword ptr [eax + 0x1402fa70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x14082FFA: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = ecx; /* 0x14082FFB: mov dword ptr [ebp - 0x14], ecx */
    /* cmp eax, 0x13u */ /* 0x14082FFE: cmp eax, 0x13 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140834A7; /* 0x14083001: ja 0x140834a7 */
L_14083007:
    eax = (uint32_t)MEM8(eax + 0x1408350C); /* 0x14083007: movzx eax, byte ptr [eax + 0x1408350c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x140834F4)); goto _ljump; }
L_14083015:
    eax = MEM32(ebx + 0x9D0); /* 0x14083015: mov eax, dword ptr [ebx + 0x9d0] */
    goto L_1408303B; /* 0x1408301B: jmp 0x1408303b */
L_1408301D:
    eax = MEM32(ebx + 0x9C0); /* 0x1408301D: mov eax, dword ptr [ebx + 0x9c0] */
    goto L_1408303B; /* 0x14083023: jmp 0x1408303b */
L_14083025:
    eax = MEM32(ebx + 0x9CC); /* 0x14083025: mov eax, dword ptr [ebx + 0x9cc] */
    goto L_1408303B; /* 0x1408302B: jmp 0x1408303b */
L_1408302D:
    eax = MEM32(ebx + 0x9B0); /* 0x1408302D: mov eax, dword ptr [ebx + 0x9b0] */
    goto L_1408303B; /* 0x14083033: jmp 0x1408303b */
L_14083035:
    eax = MEM32(ebx + 0x9A0); /* 0x14083035: mov eax, dword ptr [ebx + 0x9a0] */
L_1408303B:
    MEM32(ebp + (-0xC)) = eax; /* 0x1408303B: mov dword ptr [ebp - 0xc], eax */
    eax = esi; /* 0x1408303E: mov eax, esi */
    RECOMP_CALL(sub_14068390); /* 0x14083040: call 0x14068390 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x14083045: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x14083048: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(ebx + 0x9B0) */ /* 0x1408304B: cmp eax, dword ptr [ebx + 0x9b0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x9B0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebx + 0x938; /* 0x14083051: lea ecx, [ebx + 0x938] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_14083069; /* 0x14083057: jne 0x14083069 */
L_14083059:
    edx = MEM32(ecx + 0x1D4); /* 0x14083059: mov edx, dword ptr [ecx + 0x1d4] */
    /* test edx, edx */ /* 0x1408305F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083069; /* 0x14083061: je 0x14083069 */
L_14083063:
    /* cmp MEM32(ebp + (-0x14)), 4 */ /* 0x14083063: cmp dword ptr [ebp - 0x14], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140830D2; /* 0x14083067: je 0x140830d2 */
L_14083069:
    PUSH32(esp, eax); /* 0x14083069: push eax */
    PUSH32(esp, 0); /* 0x1408306A: push 0 */
    PUSH32(esp, 0); /* 0x1408306C: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1408306E: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_140F0510); /* 0x14083071: call 0x140f0510 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x14083076: mov edx, eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x14083078: mov dword ptr [ebp - 0xc], edx */
    /* test edx, edx */ /* 0x1408307B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140830C9; /* 0x1408307D: je 0x140830c9 */
L_1408307F:
    /* cmp MEM32(ebp + (-0x14)), 1 */ /* 0x1408307F: cmp dword ptr [ebp - 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_140830D2; /* 0x14083083: jbe 0x140830d2 */
L_14083085:
    eax = MEM32(0x141F3DEC); /* 0x14083085: mov eax, dword ptr [0x141f3dec] */
    /* test eax, eax */ /* 0x1408308A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_14083092; /* 0x1408308C: jns 0x14083092 */
L_1408308E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1408308E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_14083099; /* 0x14083090: jmp 0x14083099 */
L_14083092:
    PUSH32(esp, eax); /* 0x14083092: push eax */
    RECOMP_ICALL(MEM32(0x14001068)); /* 0x14083093: call dword ptr [0x14001068] */
    RECOMP_FLAGS_IN();
L_14083099:
    ecx = MEM32(eax + 0x4); /* 0x14083099: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x1408309C: push 0x10 */
    PUSH32(esp, 0x24u); /* 0x1408309E: push 0x24 */
    RECOMP_CALL(sub_141E6491); /* 0x140830A0: call 0x141e6491 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140830A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140830C9; /* 0x140830A7: je 0x140830c9 */
L_140830A9:
    RECOMP_CALL(sub_140F51E0); /* 0x140830A9: call 0x140f51e0 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x140830AE: mov edx, eax */
    /* test edx, edx */ /* 0x140830B0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140830C9; /* 0x140830B2: je 0x140830c9 */
L_140830B4:
    eax = MEM32(ebp + (-0xC)); /* 0x140830B4: mov eax, dword ptr [ebp - 0xc] */
    MEM32(edx + 0x18) = eax; /* 0x140830B7: mov dword ptr [edx + 0x18], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x140830BA: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edx + 0x1C) = 1; /* 0x140830BD: mov dword ptr [edx + 0x1c], 1 */
    MEM32(edx + 0x20) = eax; /* 0x140830C4: mov dword ptr [edx + 0x20], eax */
    goto L_140830D2; /* 0x140830C7: jmp 0x140830d2 */
L_140830C9:
    MEM8(ebx + 0xB80) = (uint8_t)(1); /* 0x140830C9: mov byte ptr [ebx + 0xb80], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140830D0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140830D2:
    /* test edx, edx */ /* 0x140830D2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14083484; /* 0x140830D4: je 0x14083484 */
L_140830DA:
    MEM32(ebp + (-0xCC)) = 0; /* 0x140830DA: mov dword ptr [ebp - 0xcc], 0 */
    ecx = MEM32(edi + 0x4); /* 0x140830E4: mov ecx, dword ptr [edi + 4] */
    ecx = ecx + ecx * 4; /* 0x140830E7: lea ecx, [ecx + ecx*4] */
    ecx = MEM32(ecx * 8 + 0x1402FA74); /* 0x140830EA: mov ecx, dword ptr [ecx*8 + 0x1402fa74] */
    eax = esi; /* 0x140830F1: mov eax, esi */
    MEM32(ebp + (-0xD0)) = ecx; /* 0x140830F3: mov dword ptr [ebp - 0xd0], ecx */
    MEM32(ebp + (-0xD4)) = 1; /* 0x140830F9: mov dword ptr [ebp - 0xd4], 1 */
    MEM8(ebp + (-0xC0)) = (uint8_t)(1); /* 0x14083103: mov byte ptr [ebp - 0xc0], 1 */
    MEM32(ebp + (-0xD8)) = edx; /* 0x1408310A: mov dword ptr [ebp - 0xd8], edx */
    MEM32(ebp + (-0xC8)) = esi; /* 0x14083110: mov dword ptr [ebp - 0xc8], esi */
    RECOMP_CALL(sub_14068390); /* 0x14083116: call 0x14068390 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1408311B: mov esi, eax */
    PUSH32(esp, 0); /* 0x1408311D: push 0 */
    eax = ebp + (-0x1C); /* 0x1408311F: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x14083122: push eax */
    ecx = 8; /* 0x14083123: mov ecx, 8 */
    edi = ebp + (-0xB4); /* 0x14083128: lea edi, [ebp - 0xb4] */
    eax = ebp + (-0xEC); /* 0x1408312E: lea eax, [ebp - 0xec] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x14083134: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_14082330); /* 0x14083136: call 0x14082330 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1408313B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1408313D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_14083466; /* 0x1408313F: js 0x14083466 */
L_14083145:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140834D0; /* 0x14083145: jne 0x140834d0 */
L_1408314B:
    esi = MEM32(ebp + (-0x10)); /* 0x1408314B: mov esi, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x10) = 6; /* 0x1408314E: mov dword ptr [esi + 0x10], 6 */
    eax = MEM32(ebp + (-0x1C)); /* 0x14083155: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(esi + 0x14) = eax; /* 0x14083158: mov dword ptr [esi + 0x14], eax */
    eax = esi; /* 0x1408315B: mov eax, esi */
    MEM32(ebp + (-0x1C)) = 0; /* 0x1408315D: mov dword ptr [ebp - 0x1c], 0 */
    RECOMP_ICALL(0x140862D0u); /* 0x14083164: call 0x140862d0 */ /* not lifted */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x14083169: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408343F; /* 0x1408316B: jne 0x1408343f */
L_14083171:
    ecx = ebp + (-0xEC); /* 0x14083171: lea ecx, [ebp - 0xec] */
    RECOMP_ICALL(0x140EA020u); /* 0x14083177: call 0x140ea020 */ /* not lifted */
    RECOMP_FLAGS_IN();
L_1408317C:
    eax = ebp + (-0x50); /* 0x1408317C: lea eax, [ebp - 0x50] */
    RECOMP_ICALL(0x14087310u); /* 0x1408317F: call 0x14087310 */ /* not lifted */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x68)); /* 0x14083184: mov ecx, dword ptr [ebp - 0x68] */
    edx = MEM32(ebp + 0xC); /* 0x14083187: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1408318A: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x68)) = ecx; /* 0x1408318B: mov dword ptr [ebp - 0x68], ecx */
    /* cmp ecx, MEM32(ebp + (-0x78)) */ /* 0x1408318E: cmp ecx, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_14082910; /* 0x14083191: jb 0x14082910 */
L_14083197:
    esi = MEM32(0x1400115C); /* 0x14083197: mov esi, dword ptr [0x1400115c] */
L_1408319D:
    PUSH32(esp, edx); /* 0x1408319D: push edx */
    RECOMP_CALL(sub_1407DAE0); /* 0x1408319E: call 0x1407dae0 */
    RECOMP_FLAGS_IN();
L_140831A3:
    /* test ebx, ebx */ /* 0x140831A3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140831A9; /* 0x140831A5: js 0x140831a9 */
L_140831A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x140831A7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_140831A9:
    ecx = MEM32(ebp + (-0x1C)); /* 0x140831A9: mov ecx, dword ptr [ebp - 0x1c] */
    /* test ecx, ecx */ /* 0x140831AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_140831BD; /* 0x140831AE: je 0x140831bd */
L_140831B0:
    eax = MEM32(ecx); /* 0x140831B0: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x140831B2: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x140831B3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = 0; /* 0x140831B6: mov dword ptr [ebp - 0x1c], 0 */
L_140831BD:
    PUSH32(esp, MEM32(ebp + (-0x60))); /* 0x140831BD: push dword ptr [ebp - 0x60] */
    MEM32(ebp + (-0x58)) = 0; /* 0x140831C0: mov dword ptr [ebp - 0x58], 0 */
    MEM32(ebp + (-0x54)) = 0; /* 0x140831C7: mov dword ptr [ebp - 0x54], 0 */
    RECOMP_ICALL(esi); /* 0x140831CE: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x140831D0: add esp, 4 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x140831D3: pop edi */
    esi = POP32_VAL(esp); /* 0x140831D4: pop esi */
    eax = ebx; /* 0x140831D5: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x140831D7: pop ebx */
    esp = ebp; /* 0x140831D8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x140831DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x140831DB: ret 0xc */
L_140831DE:
    edx = MEM32(esi + 0x58); /* 0x140831DE: mov edx, dword ptr [esi + 0x58] */
    /* test edx, edx */ /* 0x140831E1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140831E8; /* 0x140831E3: jne 0x140831e8 */
L_140831E5:
    edx = esi + 0x38; /* 0x140831E5: lea edx, [esi + 0x38] */
L_140831E8:
    eax = MEM32(edi + 0x4); /* 0x140831E8: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x140831EB: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x140831EE: push dword ptr [eax*8 + 0x1402fa68] */
    eax = ecx + 0x30; /* 0x140831F5: lea eax, [ecx + 0x30] */
    PUSH32(esp, 0x14038430u); /* 0x140831F8: push 0x14038430 */
L_140831FD:
    PUSH32(esp, 0); /* 0x140831FD: push 0 */
    PUSH32(esp, eax); /* 0x140831FF: push eax */
L_14083200:
    RECOMP_CALL(sub_141C5C90); /* 0x14083200: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x14083205: add esp, 0x10 */
    _flag_k = FK_ADD;
L_14083208:
    eax = ebp + (-0x50); /* 0x14083208: lea eax, [ebp - 0x50] */
    ebx = 0x80004005u; /* 0x1408320B: mov ebx, 0x80004005 */
    RECOMP_ICALL(0x14087310u); /* 0x14083210: call 0x14087310 */ /* not lifted */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x1400115C); /* 0x14083215: mov esi, dword ptr [0x1400115c] */
    RECOMP_BACKEDGE();
    goto L_140831A9; /* 0x1408321B: jmp 0x140831a9 */
L_1408321D:
    eax = MEM32(edi + 0x4); /* 0x1408321D: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x14083220: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x14083223: push dword ptr [eax*8 + 0x1402fa68] */
    eax = MEM32(ebp + (-0x8)); /* 0x1408322A: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0x140384A0u); /* 0x1408322D: push 0x140384a0 */
    PUSH32(esp, 0); /* 0x14083232: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x14083234: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x14083239: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x1408323C: add ecx, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1408323F: push ecx */
    edx = eax; /* 0x14083240: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_14083200; /* 0x14083242: jmp 0x14083200 */
L_14083244:
    edx = MEM32(esi + 0x58); /* 0x14083244: mov edx, dword ptr [esi + 0x58] */
    /* test edx, edx */ /* 0x14083247: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1408324E; /* 0x14083249: jne 0x1408324e */
L_1408324B:
    edx = esi + 0x38; /* 0x1408324B: lea edx, [esi + 0x38] */
L_1408324E:
    eax = MEM32(edi + 0x4); /* 0x1408324E: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x14083251: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x14083254: push dword ptr [eax*8 + 0x1402fa68] */
    eax = MEM32(ebp + 0x8); /* 0x1408325B: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x140383FCu); /* 0x1408325E: push 0x140383fc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x14083263: add eax, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_140831FD; /* 0x14083266: jmp 0x140831fd */
L_14083268:
    edi = ebp + (-0x50); /* 0x14083268: lea edi, [ebp - 0x50] */
    RECOMP_CALL(sub_140872A0); /* 0x1408326B: call 0x140872a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x14083270: push dword ptr [ebp - 0x2c] */
    esi = MEM32(0x1400115C); /* 0x14083273: mov esi, dword ptr [0x1400115c] */
    MEM32(ebp + (-0x24)) = 0; /* 0x14083279: mov dword ptr [ebp - 0x24], 0 */
    MEM32(ebp + (-0x20)) = 0; /* 0x14083280: mov dword ptr [ebp - 0x20], 0 */
    RECOMP_ICALL(esi); /* 0x14083287: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14083289: add esp, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_140831A3; /* 0x1408328C: jmp 0x140831a3 */
L_14083291:
    /* test esi, esi */ /* 0x14083291: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_14083299; /* 0x14083293: jne 0x14083299 */
L_14083295:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x14083295: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140832A3; /* 0x14083297: jmp 0x140832a3 */
L_14083299:
    edx = MEM32(esi + 0x58); /* 0x14083299: mov edx, dword ptr [esi + 0x58] */
    /* test edx, edx */ /* 0x1408329C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140832A3; /* 0x1408329E: jne 0x140832a3 */
L_140832A0:
    edx = esi + 0x38; /* 0x140832A0: lea edx, [esi + 0x38] */
L_140832A3:
    eax = MEM32(edi + 0x4); /* 0x140832A3: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x140832A6: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x140832A9: push dword ptr [eax*8 + 0x1402fa68] */
    eax = MEM32(ebp + 0x8); /* 0x140832B0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x14038530u); /* 0x140832B3: push 0x14038530 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x140832B8: add eax, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_140831FD; /* 0x140832BB: jmp 0x140831fd */
L_140832C0:
    /* test esi, esi */ /* 0x140832C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140832C8; /* 0x140832C2: jne 0x140832c8 */
L_140832C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x140832C4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_140832D2; /* 0x140832C6: jmp 0x140832d2 */
L_140832C8:
    edx = MEM32(esi + 0x58); /* 0x140832C8: mov edx, dword ptr [esi + 0x58] */
    /* test edx, edx */ /* 0x140832CB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_140832D2; /* 0x140832CD: jne 0x140832d2 */
L_140832CF:
    edx = esi + 0x38; /* 0x140832CF: lea edx, [esi + 0x38] */
L_140832D2:
    eax = MEM32(edi + 0x4); /* 0x140832D2: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x140832D5: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x140832D8: push dword ptr [eax*8 + 0x1402fa68] */
    eax = MEM32(ebp + 0x8); /* 0x140832DF: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x140384E8u); /* 0x140832E2: push 0x140384e8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x30u; /* 0x140832E7: add eax, 0x30 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_140831FD; /* 0x140832EA: jmp 0x140831fd */
L_140832EF:
    eax = MEM32(edi + 0x4); /* 0x140832EF: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x140832F2: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x140832F5: push dword ptr [eax*8 + 0x1402fa68] */
    eax = esi; /* 0x140832FC: mov eax, esi */
    PUSH32(esp, 0x14038578u); /* 0x140832FE: push 0x14038578 */
    PUSH32(esp, 0); /* 0x14083303: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x14083305: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1408330A: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x1408330D: add ecx, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x14083310: push ecx */
    edx = eax; /* 0x14083311: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_14083200; /* 0x14083313: jmp 0x14083200 */
L_14083318:
    eax = ebp + (-0x50); /* 0x14083318: lea eax, [ebp - 0x50] */
    ebx = 0x8007000Eu; /* 0x1408331B: mov ebx, 0x8007000e */
    RECOMP_ICALL(0x14087310u); /* 0x14083320: call 0x14087310 */ /* not lifted */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x1400115C); /* 0x14083325: mov esi, dword ptr [0x1400115c] */
    RECOMP_BACKEDGE();
    goto L_140831A9; /* 0x1408332B: jmp 0x140831a9 */
L_14083330:
    eax = MEM32(edi + 0x4); /* 0x14083330: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x14083333: lea eax, [eax + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083336: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083338: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1408333A: push ecx */
    PUSH32(esp, MEM32(eax + eax + 0x1402FA74)); /* 0x1408333B: push dword ptr [eax + eax + 0x1402fa74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14083342: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x1402FA68)); /* 0x14083344: push dword ptr [eax + 0x1402fa68] */
    eax = esi; /* 0x1408334A: mov eax, esi */
    PUSH32(esp, 0x140385C8u); /* 0x1408334C: push 0x140385c8 */
    PUSH32(esp, 0); /* 0x14083351: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x14083353: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x14083358: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x1408335B: add ecx, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1408335E: push ecx */
    edx = eax; /* 0x1408335F: mov edx, eax */
    RECOMP_CALL(sub_141C5C90); /* 0x14083361: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x14083366: add esp, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_14083208; /* 0x14083369: jmp 0x14083208 */
L_1408336E:
    eax = MEM32(edi + 0x4); /* 0x1408336E: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x14083371: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x14083374: push dword ptr [eax*8 + 0x1402fa68] */
    eax = esi; /* 0x1408337B: mov eax, esi */
    PUSH32(esp, 0x14038430u); /* 0x1408337D: push 0x14038430 */
    PUSH32(esp, 0); /* 0x14083382: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x14083384: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x30; /* 0x14083389: lea ecx, [ebx + 0x30] */
    PUSH32(esp, ecx); /* 0x1408338C: push ecx */
    edx = eax; /* 0x1408338D: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_14083200; /* 0x1408338F: jmp 0x14083200 */
L_14083394:
    esi = MEM32(ebp + (-0x10)); /* 0x14083394: mov esi, dword ptr [ebp - 0x10] */
    eax = MEM32(esi + 0x4); /* 0x14083397: mov eax, dword ptr [esi + 4] */
    eax = eax + eax * 4; /* 0x1408339A: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x1408339D: push dword ptr [eax*8 + 0x1402fa68] */
    eax = MEM32(ebp + (-0x8)); /* 0x140833A4: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0x140384A0u); /* 0x140833A7: push 0x140384a0 */
    PUSH32(esp, 0); /* 0x140833AC: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x140833AE: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x140833B3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x140833B6: add ecx, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x140833B9: push ecx */
    edx = eax; /* 0x140833BA: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_14083200; /* 0x140833BC: jmp 0x14083200 */
L_140833C1:
    eax = MEM32(eax + 0x4); /* 0x140833C1: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x140833C4: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x140833C5: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x140833C6: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, edx); /* 0x140833C9: push edx */
    PUSH32(esp, 0x1403860Cu); /* 0x140833CA: push 0x1403860c */
    PUSH32(esp, 0); /* 0x140833CF: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x140833D1: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x30; /* 0x140833D6: lea ecx, [esi + 0x30] */
    PUSH32(esp, ecx); /* 0x140833D9: push ecx */
    edx = eax; /* 0x140833DA: mov edx, eax */
    RECOMP_CALL(sub_141C5C90); /* 0x140833DC: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x140833E1: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_14083208; /* 0x140833E4: jmp 0x14083208 */
L_140833E9:
    esi = MEM32(ebp + (-0x10)); /* 0x140833E9: mov esi, dword ptr [ebp - 0x10] */
    eax = MEM32(esi + 0x4); /* 0x140833EC: mov eax, dword ptr [esi + 4] */
    eax = eax + eax * 4; /* 0x140833EF: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x140833F2: push dword ptr [eax*8 + 0x1402fa68] */
    eax = MEM32(ebp + (-0x8)); /* 0x140833F9: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0x14038430u); /* 0x140833FC: push 0x14038430 */
    PUSH32(esp, 0); /* 0x14083401: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x14083403: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x30; /* 0x14083408: lea ecx, [ebx + 0x30] */
    PUSH32(esp, ecx); /* 0x1408340B: push ecx */
    edx = eax; /* 0x1408340C: mov edx, eax */
    RECOMP_BACKEDGE();
    goto L_14083200; /* 0x1408340E: jmp 0x14083200 */
L_14083413:
    PUSH32(esp, 0x14038648u); /* 0x14083413: push 0x14038648 */
L_14083418:
    eax = MEM32(ebp + (-0x8)); /* 0x14083418: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0); /* 0x1408341B: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x1408341D: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x14083422: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x14083425: add ecx, 0x30 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x14083428: push ecx */
    edx = eax; /* 0x14083429: mov edx, eax */
    RECOMP_CALL(sub_141C5C90); /* 0x1408342B: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14083430: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_14083208; /* 0x14083433: jmp 0x14083208 */
L_14083438:
    PUSH32(esp, 0x14038690u); /* 0x14083438: push 0x14038690 */
    RECOMP_BACKEDGE();
    goto L_14083418; /* 0x1408343D: jmp 0x14083418 */
L_1408343F:
    eax = MEM32(esi + 0x4); /* 0x1408343F: mov eax, dword ptr [esi + 4] */
    eax = eax + eax * 4; /* 0x14083442: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x14083445: push dword ptr [eax*8 + 0x1402fa68] */
    eax = ebp + (-0xEC); /* 0x1408344C: lea eax, [ebp - 0xec] */
    PUSH32(esp, 0x14038758u); /* 0x14083452: push 0x14038758 */
    PUSH32(esp, 0); /* 0x14083457: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x14083459: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1408345E: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x14083461: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_140834C5; /* 0x14083464: jmp 0x140834c5 */
L_14083466:
    ecx = ebp + (-0xEC); /* 0x14083466: lea ecx, [ebp - 0xec] */
    RECOMP_ICALL(0x140EA020u); /* 0x1408346C: call 0x140ea020 */ /* not lifted */
    RECOMP_FLAGS_IN();
L_14083471:
    eax = ebp + (-0x50); /* 0x14083471: lea eax, [ebp - 0x50] */
    RECOMP_ICALL(0x14087310u); /* 0x14083474: call 0x14087310 */ /* not lifted */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x1400115C); /* 0x14083479: mov esi, dword ptr [0x1400115c] */
    RECOMP_BACKEDGE();
    goto L_140831A3; /* 0x1408347F: jmp 0x140831a3 */
L_14083484:
    ecx = ebp + (-0xEC); /* 0x14083484: lea ecx, [ebp - 0xec] */
    ebx = 0x8007000Eu; /* 0x1408348A: mov ebx, 0x8007000e */
    RECOMP_ICALL(0x140EA020u); /* 0x1408348F: call 0x140ea020 */ /* not lifted */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x14083494: lea eax, [ebp - 0x50] */
    RECOMP_ICALL(0x14087310u); /* 0x14083497: call 0x14087310 */ /* not lifted */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x1400115C); /* 0x1408349C: mov esi, dword ptr [0x1400115c] */
    RECOMP_BACKEDGE();
    goto L_140831A9; /* 0x140834A2: jmp 0x140831a9 */
L_140834A7:
    eax = MEM32(edi + 0x4); /* 0x140834A7: mov eax, dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x140834AA: lea eax, [eax + eax*4] */
    PUSH32(esp, MEM32(eax * 8 + 0x1402FA68)); /* 0x140834AD: push dword ptr [eax*8 + 0x1402fa68] */
    eax = esi; /* 0x140834B4: mov eax, esi */
    PUSH32(esp, 0x140386D8u); /* 0x140834B6: push 0x140386d8 */
    PUSH32(esp, 0); /* 0x140834BB: push 0 */
    RECOMP_CALL(sub_14068390); /* 0x140834BD: call 0x14068390 */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x30; /* 0x140834C2: lea ecx, [ebx + 0x30] */
L_140834C5:
    PUSH32(esp, ecx); /* 0x140834C5: push ecx */
    edx = eax; /* 0x140834C6: mov edx, eax */
    RECOMP_CALL(sub_141C5C90); /* 0x140834C8: call 0x141c5c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x140834CD: add esp, 0x10 */
    _flag_k = FK_ADD;
L_140834D0:
    ecx = ebp + (-0xEC); /* 0x140834D0: lea ecx, [ebp - 0xec] */
    ebx = 0x80004005u; /* 0x140834D6: mov ebx, 0x80004005 */
    RECOMP_ICALL(0x140EA020u); /* 0x140834DB: call 0x140ea020 */ /* not lifted */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x140834E0: lea eax, [ebp - 0x50] */
    RECOMP_ICALL(0x14087310u); /* 0x140834E3: call 0x14087310 */ /* not lifted */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x1400115C); /* 0x140834E8: mov esi, dword ptr [0x1400115c] */
    RECOMP_BACKEDGE();
    goto L_140831A9; /* 0x140834EE: jmp 0x140831a9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x14083015u: goto L_14083015;
      case 0x1408301Du: goto L_1408301D;
      case 0x14083025u: goto L_14083025;
      case 0x1408302Du: goto L_1408302D;
      case 0x14083035u: goto L_14083035;
      case 0x140834A7u: goto L_140834A7;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_140854E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140854E0u);

L_140854E0:
    edi = edi; /* 0x140854E0: mov edi, edi */
    PUSH32(esp, esi); /* 0x140854E2: push esi */
    PUSH32(esp, edi); /* 0x140854E3: push edi */
    edi = eax; /* 0x140854E4: mov edi, eax */
    eax = MEM32(edi + 0x8); /* 0x140854E6: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x140854E9: inc eax */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_14086040); /* 0x140854EA: call 0x14086040 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x140854EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_140854F9; /* 0x140854F1: jns 0x140854f9 */
L_140854F3:
    eax = MEM32(edi + 0xC); /* 0x140854F3: mov eax, dword ptr [edi + 0xc] */
    edi = POP32_VAL(esp); /* 0x140854F6: pop edi */
    esi = POP32_VAL(esp); /* 0x140854F7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140854F8: ret  */
L_140854F9:
    edx = MEM32(edi + 0x8); /* 0x140854F9: mov edx, dword ptr [edi + 8] */
    ecx = MEM32(edi); /* 0x140854FC: mov ecx, dword ptr [edi] */
    eax = MEM32(ebx); /* 0x140854FE: mov eax, dword ptr [ebx] */
    MEM32(ecx + edx * 4) = eax; /* 0x14085500: mov dword ptr [ecx + edx*4], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x14085503: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x14085506: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14085507: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x14085509: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1408550A: ret  */
    RECOMP_REGS_OUT();
}

void sub_140860D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140860D0u);

L_140860D0:
    ecx = MEM32(edi + 0x4); /* 0x140860D0: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x140860D3: push ebx */
    PUSH32(esp, esi); /* 0x140860D4: push esi */
    /* cmp eax, ecx */ /* 0x140860D5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_14086140; /* 0x140860D7: jbe 0x14086140 */
L_140860D9:
    esi = ecx + ecx; /* 0x140860D9: lea esi, [ecx + ecx] */
    /* cmp esi, eax */ /* 0x140860DC: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_140860E2; /* 0x140860DE: ja 0x140860e2 */
L_140860E0:
    esi = eax; /* 0x140860E0: mov esi, eax */
L_140860E2:
    /* cmp esi, 0x10u */ /* 0x140860E2: cmp esi, 0x10 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_140860EC; /* 0x140860E5: jae 0x140860ec */
L_140860E7:
    esi = 0x10u; /* 0x140860E7: mov esi, 0x10 */
L_140860EC:
    /* cmp esi, ecx */ /* 0x140860EC: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14086145; /* 0x140860EE: jb 0x14086145 */
L_140860F0:
    /* cmp esi, MEM32(edi + 0x8) */ /* 0x140860F0: cmp esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_14086145; /* 0x140860F3: jb 0x14086145 */
L_140860F5:
    /* cmp esi, 0x0AAAAAAAu */ /* 0x140860F5: cmp esi, 0xaaaaaaa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x0AAAAAAAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_14086145; /* 0x140860FB: jae 0x14086145 */
L_140860FD:
    eax = esi + esi * 2; /* 0x140860FD: lea eax, [esi + esi*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14086100: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14086102: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14086104: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14086106: push eax */
    RECOMP_ICALL(MEM32(0x14001158)); /* 0x14086107: call dword ptr [0x14001158] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1408610D: mov ebx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1408610F: add esp, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x14086112: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_14086145; /* 0x14086114: je 0x14086145 */
L_14086116:
    ecx = MEM32(edi); /* 0x14086116: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x14086118: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1408613B; /* 0x1408611A: je 0x1408613b */
L_1408611C:
    eax = MEM32(edi + 0x8); /* 0x1408611C: mov eax, dword ptr [edi + 8] */
    eax = eax + eax * 2; /* 0x1408611F: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14086122: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14086124: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x14086126: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x14086128: push eax */
    PUSH32(esp, ecx); /* 0x14086129: push ecx */
    PUSH32(esp, ebx); /* 0x1408612A: push ebx */
    RECOMP_CALL(sub_141EC9A4); /* 0x1408612B: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x14086130: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x14086132: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x14086138: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1408613B:
    MEM32(edi) = ebx; /* 0x1408613B: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = esi; /* 0x1408613D: mov dword ptr [edi + 4], esi */
L_14086140:
    esi = POP32_VAL(esp); /* 0x14086140: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x14086141: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x14086143: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086144: ret  */
L_14086145:
    esi = POP32_VAL(esp); /* 0x14086145: pop esi */
    MEM32(edi + 0xC) = 0x8007000Eu; /* 0x14086146: mov dword ptr [edi + 0xc], 0x8007000e */
    eax = 0x8007000Eu; /* 0x1408614D: mov eax, 0x8007000e */
    ebx = POP32_VAL(esp); /* 0x14086152: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086153: ret  */
    RECOMP_REGS_OUT();
}

void sub_140862D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x140862D0u);

L_140862D0:
    eax = MEM32(eax); /* 0x140862D0: mov eax, dword ptr [eax] */
    /* cmp eax, 0x10u */ /* 0x140862D2: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_140862EB; /* 0x140862D5: jg 0x140862eb */
L_140862D7:
    /* cmp eax, 0xEu */ /* 0x140862D7: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_140862E5; /* 0x140862DA: jge 0x140862e5 */
L_140862DC:
    /* test eax, eax */ /* 0x140862DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_140862F2; /* 0x140862DE: jle 0x140862f2 */
L_140862E0:
    /* cmp eax, 8 */ /* 0x140862E0: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_140862F2; /* 0x140862E3: jg 0x140862f2 */
L_140862E5:
    eax = 1; /* 0x140862E5: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140862EA: ret  */
L_140862EB:
    /* cmp eax, 0x0003000Au */ /* 0x140862EB: cmp eax, 0x3000a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0003000Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_140862E5; /* 0x140862F0: je 0x140862e5 */
L_140862F2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x140862F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x140862F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_14086C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14086C80u);

L_14086C80:
    eax = esi + 0x1C; /* 0x14086C80: lea eax, [esi + 0x1c] */
    MEM32(eax + 0x30) = 0; /* 0x14086C83: mov dword ptr [eax + 0x30], 0 */
    MEM32(eax + 0x24) = 0; /* 0x14086C8A: mov dword ptr [eax + 0x24], 0 */
    MEM32(eax + 0x28) = 0; /* 0x14086C91: mov dword ptr [eax + 0x28], 0 */
    MEM32(eax + 0x2C) = 0; /* 0x14086C98: mov dword ptr [eax + 0x2c], 0 */
    RECOMP_CALL(sub_14086C20); /* 0x14086C9F: call 0x14086c20 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x50u); /* 0x14086CA4: push 0x50 */
    PUSH32(esp, 0); /* 0x14086CA6: push 0 */
    PUSH32(esp, esi); /* 0x14086CA8: push esi */
    RECOMP_CALL(sub_141EC9B0); /* 0x14086CA9: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x14086CAE: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = esi; /* 0x14086CB1: mov eax, esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14086CB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_14087310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x14087310u);

L_14087310:
    edi = edi; /* 0x14087310: mov edi, edi */
    PUSH32(esp, edi); /* 0x14087312: push edi */
    edi = eax; /* 0x14087313: mov edi, eax */
    RECOMP_CALL(sub_140872A0); /* 0x14087315: call 0x140872a0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x1408731A: push dword ptr [edi + 0x24] */
    MEM32(edi + 0x2C) = 0; /* 0x1408731D: mov dword ptr [edi + 0x2c], 0 */
    MEM32(edi + 0x30) = 0; /* 0x14087324: mov dword ptr [edi + 0x30], 0 */
    RECOMP_ICALL(MEM32(0x1400115C)); /* 0x1408732B: call dword ptr [0x1400115c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x14087331: add esp, 4 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x24) = 0; /* 0x14087334: mov dword ptr [edi + 0x24], 0 */
    MEM32(edi + 0x28) = 0; /* 0x1408733B: mov dword ptr [edi + 0x28], 0 */
    edi = POP32_VAL(esp); /* 0x14087342: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x14087343: ret  */
    RECOMP_REGS_OUT();
}
