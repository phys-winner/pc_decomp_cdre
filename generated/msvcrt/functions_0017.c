#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_150664B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150664B7u);

L_150664B7:
    edi = edi; /* 0x150664B7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150664B9: push ebp */
    ebp = esp; /* 0x150664BA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x150664BC: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150664BF: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150664C4: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150664C6: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x150664C9: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x150664CA: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150664CD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150664CE: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x150664D1: push edi */
    edi = MEM32(ebp + 0x10); /* 0x150664D2: mov edi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x150664D5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150664ED; /* 0x150664D7: jne 0x150664ed */
L_150664D9:
    /* test edi, edi */ /* 0x150664D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150664ED; /* 0x150664DB: je 0x150664ed */
L_150664DD:
    /* test ebx, ebx */ /* 0x150664DD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066586; /* 0x150664DF: je 0x15066586 */
L_150664E5:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x150664E5: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15066586; /* 0x150664E8: jmp 0x15066586 */
L_150664ED:
    /* test ebx, ebx */ /* 0x150664ED: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150664F4; /* 0x150664EF: je 0x150664f4 */
L_150664F1:
    _flag_a = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebx) | 0xFFFFFFFFu));
    MEM32(ebx) = MEM32(ebx) | 0xFFFFFFFFu; /* 0x150664F1: or dword ptr [ebx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150664F4:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x150664F4: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15066505; /* 0x150664FA: jbe 0x15066505 */
L_150664FC:
    RECOMP_CALL(sub_15036430); /* 0x150664FC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15066501: push 0x16 */
    goto L_1506655E; /* 0x15066503: jmp 0x1506655e */
L_15066505:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15066505: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0xC); /* 0x15066508: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1506650B: push eax */
    RECOMP_CALL(sub_15033DE0); /* 0x1506650C: call 0x15033de0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066511: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15066512: pop ecx */
    /* test eax, eax */ /* 0x15066513: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15066539; /* 0x15066515: jns 0x15066539 */
L_15066517:
    /* test esi, esi */ /* 0x15066517: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506652B; /* 0x15066519: je 0x1506652b */
L_1506651B:
    /* test edi, edi */ /* 0x1506651B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506652B; /* 0x1506651D: je 0x1506652b */
L_1506651F:
    PUSH32(esp, edi); /* 0x1506651F: push edi */
    PUSH32(esp, 0); /* 0x15066520: push 0 */
    PUSH32(esp, esi); /* 0x15066522: push esi */
    RECOMP_CALL(sub_1508E3D0); /* 0x15066523: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15066528: add esp, 0xc */
    _flag_k = FK_ADD;
L_1506652B:
    RECOMP_CALL(sub_15036430); /* 0x1506652B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15066530: push 0x2a */
    ecx = POP32_VAL(esp); /* 0x15066532: pop ecx */
    MEM32(eax) = ecx; /* 0x15066533: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x15066535: mov eax, ecx */
    goto L_15066588; /* 0x15066537: jmp 0x15066588 */
L_15066539:
    /* test ebx, ebx */ /* 0x15066539: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506653F; /* 0x1506653B: je 0x1506653f */
L_1506653D:
    MEM32(ebx) = eax; /* 0x1506653D: mov dword ptr [ebx], eax */
L_1506653F:
    /* cmp edi, eax */ /* 0x1506653F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15066574; /* 0x15066541: jge 0x15066574 */
L_15066543:
    /* test esi, esi */ /* 0x15066543: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066557; /* 0x15066545: je 0x15066557 */
L_15066547:
    /* test edi, edi */ /* 0x15066547: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066557; /* 0x15066549: je 0x15066557 */
L_1506654B:
    PUSH32(esp, edi); /* 0x1506654B: push edi */
    PUSH32(esp, 0); /* 0x1506654C: push 0 */
    PUSH32(esp, esi); /* 0x1506654E: push esi */
    RECOMP_CALL(sub_1508E3D0); /* 0x1506654F: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15066554: add esp, 0xc */
    _flag_k = FK_ADD;
L_15066557:
    RECOMP_CALL(sub_15036430); /* 0x15066557: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1506655C: push 0x22 */
L_1506655E:
    esi = POP32_VAL(esp); /* 0x1506655E: pop esi */
    MEM32(eax) = esi; /* 0x1506655F: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15066561: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15066563: push eax */
    PUSH32(esp, eax); /* 0x15066564: push eax */
    PUSH32(esp, eax); /* 0x15066565: push eax */
    PUSH32(esp, eax); /* 0x15066566: push eax */
    PUSH32(esp, eax); /* 0x15066567: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15066568: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506656D: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15066570: mov eax, esi */
    goto L_15066588; /* 0x15066572: jmp 0x15066588 */
L_15066574:
    /* test esi, esi */ /* 0x15066574: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066586; /* 0x15066576: je 0x15066586 */
L_15066578:
    PUSH32(esp, eax); /* 0x15066578: push eax */
    eax = ebp + (-0xC); /* 0x15066579: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1506657C: push eax */
    PUSH32(esp, esi); /* 0x1506657D: push esi */
    RECOMP_CALL(sub_1508DBF0); /* 0x1506657E: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15066583: add esp, 0xc */
    _flag_k = FK_ADD;
L_15066586:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15066586: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15066588:
    ecx = MEM32(ebp + (-0x4)); /* 0x15066588: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1506658B: pop edi */
    esi = POP32_VAL(esp); /* 0x1506658C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1506658D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1506658F: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15066590: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15066595: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15066596: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506659D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506659Du);

L_1506659D:
    edi = edi; /* 0x1506659D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506659F: push ebp */
    ebp = esp; /* 0x150665A0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x150665A2: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x150665A5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150665A6: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150665A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150665CF; /* 0x150665AB: jne 0x150665cf */
L_150665AD:
    RECOMP_CALL(sub_15036430); /* 0x150665AD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150665B2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x150665B4: push ecx */
    PUSH32(esp, ecx); /* 0x150665B5: push ecx */
    PUSH32(esp, ecx); /* 0x150665B6: push ecx */
    PUSH32(esp, ecx); /* 0x150665B7: push ecx */
    PUSH32(esp, ecx); /* 0x150665B8: push ecx */
    MEM32(eax) = 0x16u; /* 0x150665B9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150665BF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150665C4: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150665C7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15066652; /* 0x150665CA: jmp 0x15066652 */
L_150665CF:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x150665CF: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150665DD; /* 0x150665D2: jne 0x150665dd */
L_150665D4:
    MEM32(ebp + (-0x1C)) = 0x7FFFFFFFu; /* 0x150665D4: mov dword ptr [ebp - 0x1c], 0x7fffffff */
    goto L_150665E8; /* 0x150665DB: jmp 0x150665e8 */
L_150665DD:
    /* cmp esi, 0x7FFFFFFFu */ /* 0x150665DD: cmp esi, 0x7fffffff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150665AD; /* 0x150665E3: ja 0x150665ad */
L_150665E5:
    MEM32(ebp + (-0x1C)) = esi; /* 0x150665E5: mov dword ptr [ebp - 0x1c], esi */
L_150665E8:
    PUSH32(esp, ebx); /* 0x150665E8: push ebx */
    PUSH32(esp, edi); /* 0x150665E9: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150665EA: push dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x150665ED: mov edi, dword ptr [ebp + 8] */
    eax = ebp + (-0x20); /* 0x150665F0: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150665F3: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x18)) = edi; /* 0x150665F6: mov dword ptr [ebp - 0x18], edi */
    PUSH32(esp, eax); /* 0x150665F9: push eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x150665FA: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x14)) = 0x42u; /* 0x150665FD: mov dword ptr [ebp - 0x14], 0x42 */
    RECOMP_CALL(sub_15065854); /* 0x15066604: call 0x15065854 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15066609: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1506660B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506660D: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(edi + esi + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x15066610: mov byte ptr [edi + esi - 1], cl */
    /* test ebx, ebx */ /* 0x15066614: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1506662A; /* 0x15066616: jns 0x1506662a */
L_15066618:
    /* cmp MEM32(ebp + (-0x1C)), ecx */ /* 0x15066618: cmp dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15066625; /* 0x1506661B: jl 0x15066625 */
L_1506661D:
    /* test edi, edi */ /* 0x1506661D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066635; /* 0x1506661F: je 0x15066635 */
L_15066621:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x15066621: mov byte ptr [edi], cl */
    goto L_15066635; /* 0x15066623: jmp 0x15066635 */
L_15066625:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x15066625: push -2 */
    eax = POP32_VAL(esp); /* 0x15066627: pop eax */
    goto L_15066650; /* 0x15066628: jmp 0x15066650 */
L_1506662A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x1506662A: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15066639; /* 0x1506662E: js 0x15066639 */
L_15066630:
    eax = MEM32(ebp + (-0x20)); /* 0x15066630: mov eax, dword ptr [ebp - 0x20] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x15066633: mov byte ptr [eax], cl */
L_15066635:
    eax = ebx; /* 0x15066635: mov eax, ebx */
    goto L_15066650; /* 0x15066637: jmp 0x15066650 */
L_15066639:
    eax = ebp + (-0x20); /* 0x15066639: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1506663C: push eax */
    PUSH32(esp, ecx); /* 0x1506663D: push ecx */
    RECOMP_CALL(sub_15067CE2); /* 0x1506663E: call 0x15067ce2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066643: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15066644: pop ecx */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x15066645: push -2 */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15066647: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1506664A: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) { ecx = ebx; } /* 0x1506664B: cmovne ecx, ebx */
    eax = ecx; /* 0x1506664E: mov eax, ecx */
L_15066650:
    edi = POP32_VAL(esp); /* 0x15066650: pop edi */
    ebx = POP32_VAL(esp); /* 0x15066651: pop ebx */
L_15066652:
    esi = POP32_VAL(esp); /* 0x15066652: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15066653: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15066654: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506665B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506665Bu);

L_1506665B:
    edi = edi; /* 0x1506665B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506665D: push ebp */
    ebp = esp; /* 0x1506665E: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x15066660: mov edx, dword ptr [ebp + 0xc] */
    /* test MEM8(edx + 0xC), 0x40u */ /* 0x15066663: test byte ptr [edx + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(edx + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506666F; /* 0x15066667: je 0x1506666f */
L_15066669:
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x15066669: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506669D; /* 0x1506666D: je 0x1506669d */
L_1506666F:
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edx + 0x4) = MEM32(edx + 0x4) - 1; /* 0x1506666F: sub dword ptr [edx + 4], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15066683; /* 0x15066673: js 0x15066683 */
L_15066675:
    eax = MEM32(edx); /* 0x15066675: mov eax, dword ptr [edx] */
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x15066677: mov cl, byte ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1506667A: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x1506667C: inc dword ptr [edx] */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ecx); /* 0x1506667E: movzx eax, cl */
    goto L_15066690; /* 0x15066681: jmp 0x15066690 */
L_15066683:
    eax = (int32_t)(int8_t)MEM8(ebp + 0x8); /* 0x15066683: movsx eax, byte ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x15066687: push edx */
    PUSH32(esp, eax); /* 0x15066688: push eax */
    RECOMP_CALL(sub_15067CE2); /* 0x15066689: call 0x15067ce2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506668E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506668F: pop ecx */
L_15066690:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15066690: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506669D; /* 0x15066693: jne 0x1506669d */
L_15066695:
    eax = MEM32(ebp + 0x10); /* 0x15066695: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x15066698: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506669B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506669C: ret  */
L_1506669D:
    eax = MEM32(ebp + 0x10); /* 0x1506669D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x150666A0: inc dword ptr [eax] */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x150666A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150666A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_150666AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150666AAu);

L_150666AA:
    edi = edi; /* 0x150666AA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150666AC: push ebp */
    ebp = esp; /* 0x150666AD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150666AF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150666B0: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150666B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150666D5; /* 0x150666B5: jle 0x150666d5 */
L_150666B7:
    PUSH32(esp, edi); /* 0x150666B7: push edi */
    edi = MEM32(ebp + 0x14); /* 0x150666B8: mov edi, dword ptr [ebp + 0x14] */
L_150666BB:
    PUSH32(esp, edi); /* 0x150666BB: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150666BC: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150666BF: dec esi */
    _flag_k = FK_DEC;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150666C0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1506665B); /* 0x150666C3: call 0x1506665b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150666C8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), 0xFFFFFFFFu */ /* 0x150666CB: cmp dword ptr [edi], -1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150666D4; /* 0x150666CE: je 0x150666d4 */
L_150666D0:
    /* test esi, esi */ /* 0x150666D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150666BB; /* 0x150666D2: jg 0x150666bb */
L_150666D4:
    edi = POP32_VAL(esp); /* 0x150666D4: pop edi */
L_150666D5:
    esi = POP32_VAL(esp); /* 0x150666D5: pop esi */
    ebp = POP32_VAL(esp); /* 0x150666D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150666D7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150666DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150666DEu);

L_150666DE:
    edi = edi; /* 0x150666DE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150666E0: push ebp */
    ebp = esp; /* 0x150666E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150666E3: push esi */
    esi = MEM32(ebp + 0x10); /* 0x150666E4: mov esi, dword ptr [ebp + 0x10] */
    /* test MEM8(esi + 0xC), 0x40u */ /* 0x150666E7: test byte ptr [esi + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150666FD; /* 0x150666EB: je 0x150666fd */
L_150666ED:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x150666ED: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150666FD; /* 0x150666F1: jne 0x150666fd */
L_150666F3:
    ecx = MEM32(ebp + 0x14); /* 0x150666F3: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x150666F6: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x150666F9: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    goto L_15066746; /* 0x150666FB: jmp 0x15066746 */
L_150666FD:
    PUSH32(esp, edi); /* 0x150666FD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x150666FE: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15066701: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15066745; /* 0x15066703: jle 0x15066745 */
L_15066705:
    eax = MEM32(ebp + 0x8); /* 0x15066705: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x15066708: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15066709: mov ebx, dword ptr [ebp + 0x14] */
L_1506670C:
    eax = (uint32_t)MEM8(eax); /* 0x1506670C: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1506670F: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x15066710: push ebx */
    PUSH32(esp, esi); /* 0x15066711: push esi */
    PUSH32(esp, eax); /* 0x15066712: push eax */
    RECOMP_CALL(sub_1506665B); /* 0x15066713: call 0x1506665b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x15066718: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506671B: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1506671E: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebx), 0xFFFFFFFFu */ /* 0x1506671F: cmp dword ptr [ebx], -1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x15066722: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066740; /* 0x15066725: jne 0x15066740 */
L_15066727:
    RECOMP_CALL(sub_15036430); /* 0x15066727: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 0x2Au */ /* 0x1506672C: cmp dword ptr [eax], 0x2a */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x2Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066744; /* 0x1506672F: jne 0x15066744 */
L_15066731:
    PUSH32(esp, ebx); /* 0x15066731: push ebx */
    PUSH32(esp, esi); /* 0x15066732: push esi */
    PUSH32(esp, 0x3Fu); /* 0x15066733: push 0x3f */
    RECOMP_CALL(sub_1506665B); /* 0x15066735: call 0x1506665b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1506673A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506673D: add esp, 0xc */
    _flag_k = FK_ADD;
L_15066740:
    /* test edi, edi */ /* 0x15066740: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1506670C; /* 0x15066742: jg 0x1506670c */
L_15066744:
    ebx = POP32_VAL(esp); /* 0x15066744: pop ebx */
L_15066745:
    edi = POP32_VAL(esp); /* 0x15066745: pop edi */
L_15066746:
    esi = POP32_VAL(esp); /* 0x15066746: pop esi */
    ebp = POP32_VAL(esp); /* 0x15066747: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15066748: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506674F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506674Fu);

L_1506674F:
    edi = edi; /* 0x1506674F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15066751: push ebp */
    ebp = esp; /* 0x15066752: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15066754: sub esp, 0x20 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x15066757: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1506675A: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1506675B: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1506675E: push esi */
    esi = MEM32(ebp + 0x18); /* 0x1506675F: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x15066762: push edi */
    edi = MEM32(ebp + 0x14); /* 0x15066763: mov edi, dword ptr [ebp + 0x14] */
    eax = MEM32(esi); /* 0x15066766: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x10)) = eax; /* 0x15066768: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506676B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x1506676D: mov word ptr [ebp - 4], ax */
    eax = ebx; /* 0x15066771: mov eax, ebx */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    SET_LO8(eax, LO8(eax) & 8); /* 0x15066773: and al, 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = (uint32_t)LO8(eax); /* 0x15066775: movzx eax, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15066778: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1506677A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) - 1; /* 0x1506677C: dec dword ptr [edi] */
    _flag_k = FK_DEC;
    /* cmp MEM32(edx), 0xFFFFFFFFu */ /* 0x1506677E: cmp dword ptr [edx], -1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = eax; /* 0x15066781: mov dword ptr [ebp - 0x20], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066792; /* 0x15066784: je 0x15066792 */
L_15066786:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15066786: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(edx)); /* 0x15066789: push dword ptr [edx] */
    RECOMP_CALL(sub_1507E10C); /* 0x1506678B: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066790: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15066791: pop ecx */
L_15066792:
    eax = MEM32(ebp + 0x24); /* 0x15066792: mov eax, dword ptr [ebp + 0x24] */
    edx = ebx; /* 0x15066795: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    edx = edx & 0x10u; /* 0x15066797: and edx, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edx; /* 0x1506679A: mov dword ptr [ebp - 0x18], edx */
    ecx = eax + (-0x1); /* 0x1506679D: lea ecx, [eax - 1] */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = eax; } /* 0x150667A0: cmovne ecx, eax */
    eax = ebx; /* 0x150667A3: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x150667A5: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x150667A8: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x150667AB: mov dword ptr [ebp - 0x14], eax */
L_150667AE:
    /* test eax, eax */ /* 0x150667AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150667C3; /* 0x150667B0: je 0x150667c3 */
L_150667B2:
    ecx = MEM32(ebp + 0x1C); /* 0x150667B2: mov ecx, dword ptr [ebp + 0x1c] */
    eax = ecx; /* 0x150667B5: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150667B7: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x1C) = ecx; /* 0x150667B8: mov dword ptr [ebp + 0x1c], ecx */
    /* test eax, eax */ /* 0x150667BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150668EF; /* 0x150667BD: je 0x150668ef */
L_150667C3:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x150667C3: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x150667C6: inc dword ptr [edi] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x150667C8: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x150667CD: mov edx, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x150667D0: pop ecx */
    MEM32(edx) = eax; /* 0x150667D1: mov dword ptr [edx], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150667D3: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150668DC; /* 0x150667D6: je 0x150668dc */
L_150667DC:
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x150667DC: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066839; /* 0x150667E0: jne 0x15066839 */
L_150667E2:
    /* test LO8(ebx), 0x20u */ /* 0x150667E2: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150667F6; /* 0x150667E5: je 0x150667f6 */
L_150667E7:
    /* cmp eax, 9 */ /* 0x150667E7: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150667F1; /* 0x150667EA: jl 0x150667f1 */
L_150667EC:
    /* cmp eax, 0xDu */ /* 0x150667EC: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150667F6; /* 0x150667EF: jle 0x150667f6 */
L_150667F1:
    /* cmp eax, 0x20u */ /* 0x150667F1: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066839; /* 0x150667F4: jne 0x15066839 */
L_150667F6:
    /* test LO8(ebx), 0x40u */ /* 0x150667F6: test bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150668DC; /* 0x150667F9: je 0x150668dc */
L_150667FF:
    /* test eax, eax */ /* 0x150667FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150668DC; /* 0x15066801: js 0x150668dc */
L_15066807:
    ecx = eax; /* 0x15066807: mov ecx, eax */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x15066809: sar ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 3u);
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1506680C: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp eax, ecx */ /* 0x1506680F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150668DC; /* 0x15066811: jl 0x150668dc */
L_15066817:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    eax = eax & 7; /* 0x15066817: and eax, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1506681A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x1506681C: mov ecx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1506681E: inc edx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x1C)); /* 0x1506681F: mov eax, dword ptr [ebp - 0x1c] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x15066822: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x15066822: shl edx, cl */
    ecx = MEM32(ebp + 0xC); /* 0x15066824: mov ecx, dword ptr [ebp + 0xc] */
    eax = (int32_t)(int8_t)MEM8(eax + ecx); /* 0x15066827: movsx eax, byte ptr [eax + ecx] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + (-0x20)))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + (-0x20))));
    eax = eax ^ MEM32(ebp + (-0x20)); /* 0x1506682B: xor eax, dword ptr [ebp - 0x20] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, edx */ /* 0x1506682E: test eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x15066830: mov edx, dword ptr [ebp + 0x10] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_150668DC; /* 0x15066833: je 0x150668dc */
L_15066839:
    /* test LO8(ebx), 4 */ /* 0x15066839: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150668AD; /* 0x1506683C: jne 0x150668ad */
L_1506683E:
    edi = ebx; /* 0x1506683E: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    edi = edi & 2; /* 0x15066840: and edi, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x15066843: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150668B8; /* 0x15066847: je 0x150668b8 */
L_15066849:
    SET_LO8(eax, MEM8(edx)); /* 0x15066849: mov al, byte ptr [edx] */
    /* test edi, edi */ /* 0x1506684B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506689F; /* 0x1506684D: je 0x1506689f */
L_1506684F:
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(eax)); /* 0x1506684F: mov byte ptr [ebp - 8], al */
    eax = (uint32_t)LO8(eax); /* 0x15066852: movzx eax, al */
    PUSH32(esp, eax); /* 0x15066855: push eax */
    RECOMP_CALL(sub_150316F0); /* 0x15066856: call 0x150316f0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x14); /* 0x1506685B: mov edi, dword ptr [ebp + 0x14] */
    ecx = POP32_VAL(esp); /* 0x1506685E: pop ecx */
    /* test eax, eax */ /* 0x1506685F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066871; /* 0x15066861: je 0x15066871 */
L_15066863:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15066863: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x15066866: inc dword ptr [edi] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x15066868: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506686D: pop ecx */
    MEM8(ebp + (-0x7)) = (uint8_t)(LO8(eax)); /* 0x1506686E: mov byte ptr [ebp - 7], al */
L_15066871:
    PUSH32(esp, 0x3Fu); /* 0x15066871: push 0x3f */
    eax = POP32_VAL(esp); /* 0x15066873: pop eax */
    PUSH32(esp, MEM32(0x150BD314)); /* 0x15066874: push dword ptr [0x150bd314] */
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x1506687A: mov word ptr [ebp - 4], ax */
    eax = ebp + (-0x8); /* 0x1506687E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15066881: push eax */
    eax = ebp + (-0x4); /* 0x15066882: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15066885: push eax */
    RECOMP_CALL(sub_150320D0); /* 0x15066886: call 0x150320d0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1506688B: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506688D: add esp, 0xc */
    _flag_k = FK_ADD;
    SET_LO16(eax, MEM16(ebp + (-0x4))); /* 0x15066890: mov ax, word ptr [ebp - 4] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x15066894: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x15066897: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x1506689A: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    goto L_150668B0; /* 0x1506689D: jmp 0x150668b0 */
L_1506689F:
    ecx = MEM32(esi); /* 0x1506689F: mov ecx, dword ptr [esi] */
    edi = MEM32(ebp + 0x14); /* 0x150668A1: mov edi, dword ptr [ebp + 0x14] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x150668A4: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x150668A6: inc dword ptr [esi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x150668A8: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    goto L_150668B0; /* 0x150668AB: jmp 0x150668b0 */
L_150668AD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x150668AD: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
L_150668B0:
    eax = MEM32(ebp + (-0x14)); /* 0x150668B0: mov eax, dword ptr [ebp - 0x14] */
    RECOMP_BACKEDGE();
    goto L_150667AE; /* 0x150668B3: jmp 0x150667ae */
L_150668B8:
    RECOMP_CALL(sub_15036430); /* 0x150668B8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150668BD: mov dword ptr [eax], 0xc */
    eax = MEM32(ebp + (-0x10)); /* 0x150668C3: mov eax, dword ptr [ebp - 0x10] */
    /* test edi, edi */ /* 0x150668C6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150668D7; /* 0x150668C8: je 0x150668d7 */
L_150668CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150668CA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x150668CC: mov word ptr [eax], cx */
L_150668CF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150668CF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150668D2:
    edi = POP32_VAL(esp); /* 0x150668D2: pop edi */
    esi = POP32_VAL(esp); /* 0x150668D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x150668D4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150668D5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150668D6: ret  */
L_150668D7:
    MEM8(eax) = (uint8_t)(0); /* 0x150668D7: mov byte ptr [eax], 0 */
    RECOMP_BACKEDGE();
    goto L_150668CF; /* 0x150668DA: jmp 0x150668cf */
L_150668DC:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) - 1; /* 0x150668DC: dec dword ptr [edi] */
    _flag_k = FK_DEC;
    /* cmp MEM32(edx), 0xFFFFFFFFu */ /* 0x150668DE: cmp dword ptr [edx], -1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150668EF; /* 0x150668E1: je 0x150668ef */
L_150668E3:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x150668E3: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(edx)); /* 0x150668E6: push dword ptr [edx] */
    RECOMP_CALL(sub_1507E10C); /* 0x150668E8: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150668ED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150668EE: pop ecx */
L_150668EF:
    eax = MEM32(ebp + (-0x10)); /* 0x150668EF: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(esi) */ /* 0x150668F2: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150668CF; /* 0x150668F4: je 0x150668cf */
L_150668F6:
    /* test LO8(ebx), 4 */ /* 0x150668F6: test bl, 4 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15066917; /* 0x150668F9: jne 0x15066917 */
L_150668FB:
    eax = MEM32(ebp + 0x28); /* 0x150668FB: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x150668FE: inc dword ptr [eax] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x15066900: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066917; /* 0x15066904: jne 0x15066917 */
L_15066906:
    eax = MEM32(esi); /* 0x15066906: mov eax, dword ptr [esi] */
    /* test LO8(ebx), 2 */ /* 0x15066908: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066914; /* 0x1506690B: je 0x15066914 */
L_1506690D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1506690D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1506690F: mov word ptr [eax], cx */
    goto L_15066917; /* 0x15066912: jmp 0x15066917 */
L_15066914:
    MEM8(eax) = (uint8_t)(0); /* 0x15066914: mov byte ptr [eax], 0 */
L_15066917:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15066917: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_150668D2; /* 0x15066919: jmp 0x150668d2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15066921(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15066921u);

L_15066921:
    edi = edi; /* 0x15066921: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15066923: push ebp */
    ebp = esp; /* 0x15066924: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x15066926: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15066929: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1506692E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15066930: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x15066933: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x15066936: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x15066939: push ebx */
    PUSH32(esp, esi); /* 0x1506693A: push esi */
    PUSH32(esp, edi); /* 0x1506693B: push edi */
    MEM32(ebp + (-0x34)) = eax; /* 0x1506693C: mov dword ptr [ebp - 0x34], eax */
    edi = ebp + (-0x24); /* 0x1506693F: lea edi, [ebp - 0x24] */
    eax = MEM32(ebp + 0x18); /* 0x15066942: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x15066945: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x30)) = eax; /* 0x15066947: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x20); /* 0x1506694A: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1506694D: mov dword ptr [ebp - 0x2c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15066950: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x15066952: push 8 */
    ecx = POP32_VAL(esp); /* 0x15066954: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x15066955: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(edx); /* 0x15066957: mov ecx, dword ptr [edx] */
    edi = MEM32(ebp + 0x8); /* 0x15066959: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((edi | 8)); _flag_b = (uint32_t)((edi | 8));
    edi = edi | 8; /* 0x1506695C: or edi, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = edx; /* 0x1506695F: mov dword ptr [ebp - 0x28], edx */
    esi = ecx + 0x1; /* 0x15066962: lea esi, [ecx + 1] */
    MEM32(edx) = esi; /* 0x15066965: mov dword ptr [edx], esi */
    /* cmp MEM8(esi), 0x5Eu */ /* 0x15066967: cmp byte ptr [esi], 0x5e */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x5Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { edi = MEM32(ebp + 0x8); } /* 0x1506696A: cmovne edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) { esi = ecx; } /* 0x1506696E: cmovne esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15066971: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x15066972: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Du */ /* 0x15066974: cmp al, 0x5d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066989; /* 0x15066976: jne 0x15066989 */
L_15066978:
    SET_LO8(ebx, LO8(eax)); /* 0x15066978: mov bl, al */
    MEM8(ebp + (-0x19)) = (uint8_t)(0x20u); /* 0x1506697A: mov byte ptr [ebp - 0x19], 0x20 */
    eax = esi + 0x1; /* 0x1506697E: lea eax, [esi + 1] */
    esi = eax; /* 0x15066981: mov esi, eax */
    SET_LO8(eax, MEM8(eax)); /* 0x15066983: mov al, byte ptr [eax] */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x15066985: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150669ED; /* 0x15066987: je 0x150669ed */
L_15066989:
    edx = esi; /* 0x15066989: mov edx, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1506698B: inc esi */
    _flag_k = FK_INC;
    /* cmp LO8(eax), 0x2Du */ /* 0x1506698C: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150669CB; /* 0x1506698E: jne 0x150669cb */
L_15066990:
    /* test LO8(ebx), LO8(ebx) */ /* 0x15066990: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150669CB; /* 0x15066992: je 0x150669cb */
L_15066994:
    SET_LO8(ecx, MEM8(esi)); /* 0x15066994: mov cl, byte ptr [esi] */
    /* cmp LO8(ecx), 0x5Du */ /* 0x15066996: cmp cl, 0x5d */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150669CB; /* 0x15066999: je 0x150669cb */
L_1506699B:
    esi = edx + 0x2; /* 0x1506699B: lea esi, [edx + 2] */
    /* cmp LO8(ebx), LO8(ecx) */ /* 0x1506699E: cmp bl, cl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_150669A6; /* 0x150669A0: jae 0x150669a6 */
L_150669A2:
    SET_HI8(ebx, LO8(ecx)); /* 0x150669A2: mov bh, cl */
    goto L_150669AA; /* 0x150669A4: jmp 0x150669aa */
L_150669A6:
    SET_HI8(ebx, LO8(ebx)); /* 0x150669A6: mov bh, bl */
    SET_LO8(ebx, LO8(ecx)); /* 0x150669A8: mov bl, cl */
L_150669AA:
    edx = (uint32_t)LO8(ebx); /* 0x150669AA: movzx edx, bl */
    ecx = edx; /* 0x150669AD: mov ecx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x150669AF: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x150669B2: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x150669B2: shr ecx, 3 */
    eax = (int32_t)(int8_t)MEM8(ebp + ecx + (-0x24)); /* 0x150669B5: movsx eax, byte ptr [ebp + ecx - 0x24] */
    /* bts eax, ((edx) & 31) */ /* 0x150669BA: bts eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(((edx) & 31));
    eax = _flag_a | (1u << _flag_b); /* 0x150669BA: bts eax, edx */
    _flag_k = FK_BT;
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x150669BD: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + ecx + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x150669BF: mov byte ptr [ebp + ecx - 0x24], al */
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x150669C3: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_150669AA; /* 0x150669C5: jbe 0x150669aa */
L_150669C7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x150669C7: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_150669E4; /* 0x150669C9: jmp 0x150669e4 */
L_150669CB:
    edx = (uint32_t)LO8(eax); /* 0x150669CB: movzx edx, al */
    SET_LO8(ebx, LO8(eax)); /* 0x150669CE: mov bl, al */
    ecx = edx; /* 0x150669D0: mov ecx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x150669D2: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x150669D5: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x150669D5: shr ecx, 3 */
    eax = (int32_t)(int8_t)MEM8(ebp + ecx + (-0x24)); /* 0x150669D8: movsx eax, byte ptr [ebp + ecx - 0x24] */
    /* bts eax, ((edx) & 31) */ /* 0x150669DD: bts eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(((edx) & 31));
    eax = _flag_a | (1u << _flag_b); /* 0x150669DD: bts eax, edx */
    _flag_k = FK_BT;
    MEM8(ebp + ecx + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x150669E0: mov byte ptr [ebp + ecx - 0x24], al */
L_150669E4:
    SET_LO8(eax, MEM8(esi)); /* 0x150669E4: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x5Du */ /* 0x150669E6: cmp al, 0x5d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066989; /* 0x150669E8: jne 0x15066989 */
L_150669EA:
    edx = MEM32(ebp + (-0x28)); /* 0x150669EA: mov edx, dword ptr [ebp - 0x28] */
L_150669ED:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x150669ED: push dword ptr [ebp + 0x28] */
    eax = ebp + (-0x24); /* 0x150669F0: lea eax, [ebp - 0x24] */
    MEM32(edx) = esi; /* 0x150669F3: mov dword ptr [edx], esi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x150669F5: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x150669F8: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150669FB: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x150669FE: push dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15066A01: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x15066A04: push dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x15066A07: push eax */
    PUSH32(esp, edi); /* 0x15066A08: push edi */
    RECOMP_CALL(sub_1506674F); /* 0x15066A09: call 0x1506674f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x15066A0E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15066A11: add esp, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15066A14: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x15066A16: pop edi */
    esi = POP32_VAL(esp); /* 0x15066A17: pop esi */
    ebx = POP32_VAL(esp); /* 0x15066A18: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15066A19: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15066A1E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15066A1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15066A26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15066A26u);

L_15066A26:
    edi = edi; /* 0x15066A26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15066A28: push ebp */
    ebp = esp; /* 0x15066A29: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15066A2B: push ecx */
    PUSH32(esp, ebx); /* 0x15066A2C: push ebx */
    PUSH32(esp, esi); /* 0x15066A2D: push esi */
    PUSH32(esp, edi); /* 0x15066A2E: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15066A2F: mov edi, dword ptr [ebp + 0xc] */
    edi = MEM32(edi); /* 0x15066A32: mov edi, dword ptr [edi] */
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x15066A34: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066ACD; /* 0x15066A37: jne 0x15066acd */
L_15066A3D:
    esi = MEM32(ebp + 0x10); /* 0x15066A3D: mov esi, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x15066A40: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(esi), eax */ /* 0x15066A43: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066AA4; /* 0x15066A45: jne 0x15066aa4 */
L_15066A47:
    eax = ebp + (-0x4); /* 0x15066A47: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15066A4A: push eax */
    PUSH32(esp, 0); /* 0x15066A4B: push 0 */
    PUSH32(esp, edi); /* 0x15066A4D: push edi */
    RECOMP_CALL(sub_15036A6E); /* 0x15066A4E: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15066A53: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15066A56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15066AA0; /* 0x15066A58: js 0x15066aa0 */
L_15066A5A:
    PUSH32(esp, 2); /* 0x15066A5A: push 2 */
    ebx = POP32_VAL(esp); /* 0x15066A5C: pop ebx */
    PUSH32(esp, ebx); /* 0x15066A5D: push ebx */
    PUSH32(esp, edi); /* 0x15066A5E: push edi */
    RECOMP_CALL(sub_150487F0); /* 0x15066A5F: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x15066A64: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x15066A66: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15066A67: pop ecx */
    /* test eax, eax */ /* 0x15066A68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066AA0; /* 0x15066A6A: je 0x15066aa0 */
L_15066A6C:
    eax = MEM32(ebp + 0x18); /* 0x15066A6C: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15066A6F: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15066A72: push dword ptr [ebp + 0x14] */
    MEM32(eax) = 1; /* 0x15066A75: mov dword ptr [eax], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x15066A7B: push dword ptr [esi] */
    RECOMP_CALL(sub_1508DBF0); /* 0x15066A7D: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x15066A82: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x15066A85: push ecx */
    eax = MEM32(ecx); /* 0x15066A86: mov eax, dword ptr [ecx] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x15066A88: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x15066A8A: push edx */
    PUSH32(esp, eax); /* 0x15066A8B: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x15066A8C: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15066A91: add esp, 0x18 */
    _flag_k = FK_ADD;
L_15066A94:
    /* test eax, eax */ /* 0x15066A94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15066ACD; /* 0x15066A96: jns 0x15066acd */
L_15066A98:
    PUSH32(esp, MEM32(esi)); /* 0x15066A98: push dword ptr [esi] */
    RECOMP_CALL(sub_15048840); /* 0x15066A9A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066A9F: pop ecx */
L_15066AA0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15066AA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15066AD0; /* 0x15066AA2: jmp 0x15066ad0 */
L_15066AA4:
    PUSH32(esp, 2); /* 0x15066AA4: push 2 */
    ebx = POP32_VAL(esp); /* 0x15066AA6: pop ebx */
    PUSH32(esp, ebx); /* 0x15066AA7: push ebx */
    PUSH32(esp, edi); /* 0x15066AA8: push edi */
    PUSH32(esp, MEM32(esi)); /* 0x15066AA9: push dword ptr [esi] */
    RECOMP_CALL(sub_150491BF); /* 0x15066AAB: call 0x150491bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15066AB0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15066AB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066AA0; /* 0x15066AB5: je 0x15066aa0 */
L_15066AB7:
    ecx = MEM32(ebp + 0xC); /* 0x15066AB7: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi) = eax; /* 0x15066ABA: mov dword ptr [esi], eax */
    PUSH32(esp, ecx); /* 0x15066ABC: push ecx */
    eax = MEM32(ecx); /* 0x15066ABD: mov eax, dword ptr [ecx] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x15066ABF: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x15066AC1: push edx */
    PUSH32(esp, eax); /* 0x15066AC2: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x15066AC3: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15066AC8: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15066A94; /* 0x15066ACB: jmp 0x15066a94 */
L_15066ACD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15066ACD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15066ACF: inc eax */
    _flag_k = FK_INC;
L_15066AD0:
    edi = POP32_VAL(esp); /* 0x15066AD0: pop edi */
    esi = POP32_VAL(esp); /* 0x15066AD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x15066AD2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15066AD3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15066AD4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15066ADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15066ADBu);

L_15066ADB:
    edi = edi; /* 0x15066ADB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15066ADD: push ebp */
    ebp = esp; /* 0x15066ADE: mov ebp, esp */
    eax = (uint32_t)MEM8(ebp + 0x8); /* 0x15066AE0: movzx eax, byte ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15066AE4: push esi */
    esi = (int32_t)(int8_t)MEM8(ebp + 0x8); /* 0x15066AE5: movsx esi, byte ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x15066AE9: push eax */
    RECOMP_CALL(sub_15030030); /* 0x15066AEA: call 0x15030030 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066AEF: pop ecx */
    ecx = esi; /* 0x15066AF0: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFDFu);
    ecx = ecx & 0xFFFFFFDFu; /* 0x15066AF2: and ecx, 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 7; /* 0x15066AF5: sub ecx, 7 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x15066AF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = esi; } /* 0x15066AFA: cmovne ecx, esi */
    eax = ecx; /* 0x15066AFD: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x15066AFF: pop esi */
    ebp = POP32_VAL(esp); /* 0x15066B00: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15066B01: ret  */
    RECOMP_REGS_OUT();
}

void sub_15066B08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15066B08u);

L_15066B08:
    edi = edi; /* 0x15066B08: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15066B0A: push ebp */
    ebp = esp; /* 0x15066B0B: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15066B0D: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x15066B10: sub dword ptr [ecx + 4], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_15066B20; /* 0x15066B14: js 0x15066b20 */
L_15066B16:
    eax = MEM32(ecx); /* 0x15066B16: mov eax, dword ptr [ecx] */
    edx = (uint32_t)MEM8(eax); /* 0x15066B18: movzx edx, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15066B1B: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x15066B1C: mov dword ptr [ecx], eax */
    goto L_15066B29; /* 0x15066B1E: jmp 0x15066b29 */
L_15066B20:
    PUSH32(esp, ecx); /* 0x15066B20: push ecx */
    RECOMP_CALL(sub_15067E7D); /* 0x15066B21: call 0x15067e7d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066B26: pop ecx */
    edx = eax; /* 0x15066B27: mov edx, eax */
L_15066B29:
    eax = edx; /* 0x15066B29: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x15066B2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15066B2C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15066B33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15066B33u);

L_15066B33:
    edi = edi; /* 0x15066B33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15066B35: push ebp */
    ebp = esp; /* 0x15066B36: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1E4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1E4u; /* 0x15066B38: sub esp, 0x1e4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15066B3E: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15066B43: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15066B45: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C0)) = MEM32(ebp + (-0x1C0)) & 0; /* 0x15066B48: and dword ptr [ebp - 0x1c0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x164); /* 0x15066B4F: lea ecx, [ebp - 0x164] */
    eax = MEM32(ebp + 0x8); /* 0x15066B55: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x15066B58: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x15066B5B: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15066B5C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x174)) = eax; /* 0x15066B5E: mov dword ptr [ebp - 0x174], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x194))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x194)) = MEM32(ebp + (-0x194)) & ebx; /* 0x15066B64: and dword ptr [ebp - 0x194], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1D8))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x1D8)) = MEM32(ebp + (-0x1D8)) & ebx; /* 0x15066B6A: and dword ptr [ebp - 0x1d8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15066B70: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15066B71: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C8)) = edx; /* 0x15066B74: mov dword ptr [ebp - 0x1c8], edx */
    MEM32(ebp + (-0x198)) = ecx; /* 0x15066B7A: mov dword ptr [ebp - 0x198], ecx */
    MEM32(ebp + (-0x1C4)) = 0x15Eu; /* 0x15066B80: mov dword ptr [ebp - 0x1c4], 0x15e */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15066B8A: mov dword ptr [ebp - 0x178], ebx */
    /* test esi, esi */ /* 0x15066B90: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15066BB6; /* 0x15066B92: jne 0x15066bb6 */
L_15066B94:
    RECOMP_CALL(sub_15036430); /* 0x15066B94: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15066B99: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15066B9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15066BA1: push eax */
    PUSH32(esp, eax); /* 0x15066BA2: push eax */
    PUSH32(esp, eax); /* 0x15066BA3: push eax */
    PUSH32(esp, eax); /* 0x15066BA4: push eax */
    PUSH32(esp, eax); /* 0x15066BA5: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15066BA6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15066BAB: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15066BAE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15067BE2; /* 0x15066BB1: jmp 0x15067be2 */
L_15066BB6:
    PUSH32(esp, edi); /* 0x15066BB6: push edi */
    /* test eax, eax */ /* 0x15066BB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15066BC8; /* 0x15066BB9: jne 0x15066bc8 */
L_15066BBB:
    RECOMP_CALL(sub_15036430); /* 0x15066BBB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15066BC0: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15067BC0; /* 0x15066BC3: jmp 0x15067bc0 */
L_15066BC8:
    /* test MEM8(eax + 0xC), 0x40u */ /* 0x15066BC8: test byte ptr [eax + 0xc], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0xC)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15066BDB; /* 0x15066BCC: jne 0x15066bdb */
L_15066BCE:
    PUSH32(esp, eax); /* 0x15066BCE: push eax */
    RECOMP_CALL(sub_15076A90); /* 0x15066BCF: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1C8)); /* 0x15066BD4: mov edx, dword ptr [ebp - 0x1c8] */
    ecx = POP32_VAL(esp); /* 0x15066BDA: pop ecx */
L_15066BDB:
    SET_LO8(eax, MEM8(esi)); /* 0x15066BDB: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15066BDD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15066BDF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x168)) = (uint8_t)(LO8(ebx)); /* 0x15066BE1: mov byte ptr [ebp - 0x168], bl */
    MEM32(ebp + (-0x190)) = edi; /* 0x15066BE7: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x15066BED: mov dword ptr [ebp - 0x184], edi */
    MEM32(ebp + (-0x17C)) = ecx; /* 0x15066BF3: mov dword ptr [ebp - 0x17c], ecx */
    MEM32(ebp + (-0x1CC)) = ecx; /* 0x15066BF9: mov dword ptr [ebp - 0x1cc], ecx */
    /* test LO8(eax), LO8(eax) */ /* 0x15066BFF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067BDF; /* 0x15066C01: je 0x15067bdf */
L_15066C07:
    ecx = MEM32(ebp + (-0x1D0)); /* 0x15066C07: mov ecx, dword ptr [ebp - 0x1d0] */
    MEM32(ebp + (-0x18C)) = ecx; /* 0x15066C0D: mov dword ptr [ebp - 0x18c], ecx */
    ecx = MEM32(ebp + (-0x1D4)); /* 0x15066C13: mov ecx, dword ptr [ebp - 0x1d4] */
    MEM32(ebp + (-0x1A0)) = ecx; /* 0x15066C19: mov dword ptr [ebp - 0x1a0], ecx */
L_15066C1F:
    eax = (uint32_t)LO8(eax); /* 0x15066C1F: movzx eax, al */
    PUSH32(esp, eax); /* 0x15066C22: push eax */
    MEM32(ebp + (-0x1B0)) = edx; /* 0x15066C23: mov dword ptr [ebp - 0x1b0], edx */
    RECOMP_CALL(sub_15030170); /* 0x15066C29: call 0x15030170 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066C2E: pop ecx */
    /* test eax, eax */ /* 0x15066C2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066C7D; /* 0x15066C31: je 0x15066c7d */
L_15066C33:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15066C33: dec edi */
    _flag_k = FK_DEC;
    eax = ebp + (-0x184); /* 0x15066C34: lea eax, [ebp - 0x184] */
    MEM32(ebp + (-0x184)) = edi; /* 0x15066C3A: mov dword ptr [ebp - 0x184], edi */
    edi = MEM32(ebp + (-0x174)); /* 0x15066C40: mov edi, dword ptr [ebp - 0x174] */
    PUSH32(esp, edi); /* 0x15066C46: push edi */
    PUSH32(esp, eax); /* 0x15066C47: push eax */
    RECOMP_CALL(sub_15067CAF); /* 0x15066C48: call 0x15067caf */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066C4D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15066C4E: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15066C4F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066C5D; /* 0x15066C52: je 0x15066c5d */
L_15066C54:
    PUSH32(esp, edi); /* 0x15066C54: push edi */
    PUSH32(esp, eax); /* 0x15066C55: push eax */
    RECOMP_CALL(sub_1507E10C); /* 0x15066C56: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066C5B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15066C5C: pop ecx */
L_15066C5D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15066C5D: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(esi); /* 0x15066C5E: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x15066C61: push eax */
    RECOMP_CALL(sub_15030170); /* 0x15066C62: call 0x15030170 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066C67: pop ecx */
    /* test eax, eax */ /* 0x15066C68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15066C5D; /* 0x15066C6A: jne 0x15066c5d */
L_15066C6C:
    edi = MEM32(ebp + (-0x184)); /* 0x15066C6C: mov edi, dword ptr [ebp - 0x184] */
    MEM32(ebp + (-0x190)) = edi; /* 0x15066C72: mov dword ptr [ebp - 0x190], edi */
    goto L_15067AE8; /* 0x15066C78: jmp 0x15067ae8 */
L_15066C7D:
    /* cmp MEM8(esi), 0x25u */ /* 0x15066C7D: cmp byte ptr [esi], 0x25 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067A61; /* 0x15066C80: jne 0x15067a61 */
L_15066C86:
    /* cmp MEM8(esi + 0x1), 0x25u */ /* 0x15066C86: cmp byte ptr [esi + 1], 0x25 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067A58; /* 0x15066C8A: je 0x15067a58 */
L_15066C90:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15066C90: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x169)) = (uint8_t)(1); /* 0x15066C92: mov byte ptr [ebp - 0x169], 1 */
    MEM32(ebp + (-0x19C)) = ecx; /* 0x15066C99: mov dword ptr [ebp - 0x19c], ecx */
    edi = ecx; /* 0x15066C9F: mov edi, ecx */
    MEM32(ebp + (-0x1A4)) = ecx; /* 0x15066CA1: mov dword ptr [ebp - 0x1a4], ecx */
    ebx = ecx; /* 0x15066CA7: mov ebx, ecx */
    MEM32(ebp + (-0x1E0)) = ecx; /* 0x15066CA9: mov dword ptr [ebp - 0x1e0], ecx */
    MEM8(ebp + (-0x185)) = (uint8_t)(LO8(ecx)); /* 0x15066CAF: mov byte ptr [ebp - 0x185], cl */
    MEM8(ebp + (-0x166)) = (uint8_t)(LO8(ecx)); /* 0x15066CB5: mov byte ptr [ebp - 0x166], cl */
    MEM8(ebp + (-0x165)) = (uint8_t)(LO8(ecx)); /* 0x15066CBB: mov byte ptr [ebp - 0x165], cl */
    MEM8(ebp + (-0x167)) = (uint8_t)(LO8(ecx)); /* 0x15066CC1: mov byte ptr [ebp - 0x167], cl */
    MEM32(ebp + (-0x1B4)) = ecx; /* 0x15066CC7: mov dword ptr [ebp - 0x1b4], ecx */
L_15066CCD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15066CCD: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x170)) = esi; /* 0x15066CCE: mov dword ptr [ebp - 0x170], esi */
    MEM32(ebp + (-0x1DC)) = esi; /* 0x15066CD4: mov dword ptr [ebp - 0x1dc], esi */
    SET_LO8(eax, MEM8(esi)); /* 0x15066CDA: mov al, byte ptr [esi] */
    esi = (uint32_t)LO8(eax); /* 0x15066CDC: movzx esi, al */
    PUSH32(esp, esi); /* 0x15066CDF: push esi */
    MEM8(ebp + (-0x1B9)) = (uint8_t)(LO8(eax)); /* 0x15066CE0: mov byte ptr [ebp - 0x1b9], al */
    RECOMP_CALL(sub_15030030); /* 0x15066CE6: call 0x15030030 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15066CEB: pop ecx */
    /* test eax, eax */ /* 0x15066CEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066D63; /* 0x15066CEE: je 0x15066d63 */
L_15066CF0:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0xAu); /* 0x15066CF0: imul eax, ebx, 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15066CF3: inc edi */
    _flag_k = FK_INC;
    ebx = esi + (-0x30); /* 0x15066CF4: lea ebx, [esi - 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15066CF7: add ebx, eax */
    _flag_k = FK_ADD;
L_15066CF9:
    esi = MEM32(ebp + (-0x170)); /* 0x15066CF9: mov esi, dword ptr [ebp - 0x170] */
L_15066CFF:
    SET_LO8(ecx, MEM8(ebp + (-0x166))); /* 0x15066CFF: mov cl, byte ptr [ebp - 0x166] */
L_15066D05:
    SET_HI8(eax, MEM8(ebp + (-0x167))); /* 0x15066D05: mov ah, byte ptr [ebp - 0x167] */
L_15066D0B:
    SET_LO8(eax, MEM8(ebp + (-0x165))); /* 0x15066D0B: mov al, byte ptr [ebp - 0x165] */
L_15066D11:
    /* test LO8(eax), LO8(eax) */ /* 0x15066D11: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15066CCD; /* 0x15066D13: je 0x15066ccd */
L_15066D15:
    MEM32(ebp + (-0x180)) = ebx; /* 0x15066D15: mov dword ptr [ebp - 0x180], ebx */
    esi = MEM32(ebp + (-0x180)); /* 0x15066D1B: mov esi, dword ptr [ebp - 0x180] */
    ebx = MEM32(ebp + (-0x178)); /* 0x15066D21: mov ebx, dword ptr [ebp - 0x178] */
    MEM32(ebp + (-0x1A8)) = edi; /* 0x15066D27: mov dword ptr [ebp - 0x1a8], edi */
    edi = MEM32(ebp + (-0x190)); /* 0x15066D2D: mov edi, dword ptr [ebp - 0x190] */
    MEM32(ebp + (-0x1D0)) = esi; /* 0x15066D33: mov dword ptr [ebp - 0x1d0], esi */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15066D39: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15066F3D; /* 0x15066D3B: jne 0x15066f3d */
L_15066D41:
    ecx = MEM32(ebp + (-0x1C8)); /* 0x15066D41: mov ecx, dword ptr [ebp - 0x1c8] */
    MEM32(ebp + (-0x1D8)) = ecx; /* 0x15066D47: mov dword ptr [ebp - 0x1d8], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x15066D4D: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C8)) = ecx; /* 0x15066D50: mov dword ptr [ebp - 0x1c8], ecx */
    ecx = MEM32(ebp + (-0x1B0)); /* 0x15066D56: mov ecx, dword ptr [ebp - 0x1b0] */
    ecx = MEM32(ecx); /* 0x15066D5C: mov ecx, dword ptr [ecx] */
    goto L_15066F3F; /* 0x15066D5E: jmp 0x15066f3f */
L_15066D63:
    SET_LO8(eax, MEM8(ebp + (-0x1B9))); /* 0x15066D63: mov al, byte ptr [ebp - 0x1b9] */
    /* cmp LO8(eax), 0x68u */ /* 0x15066D69: cmp al, 0x68 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x68u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_15066E5E; /* 0x15066D6B: ja 0x15066e5e */
L_15066D71:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066E39; /* 0x15066D71: je 0x15066e39 */
L_15066D77:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x2Au; /* 0x15066D77: sub esi, 0x2a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15066E20; /* 0x15066D7A: je 0x15066e20 */
L_15066D80:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x1Cu; /* 0x15066D80: sub esi, 0x1c */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15066CF9; /* 0x15066D83: je 0x15066cf9 */
L_15066D89:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 3; /* 0x15066D89: sub esi, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15066DA7; /* 0x15066D8C: je 0x15066da7 */
L_15066D8E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 3; /* 0x15066D8E: sub esi, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15066D9C; /* 0x15066D91: je 0x15066d9c */
L_15066D93:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15066D93: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15066D94: sub esi, 1 */
    _flag_k = FK_CMP;
    goto L_15066F0A; /* 0x15066D97: jmp 0x15066f0a */
L_15066D9C:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x169))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x169)) = (uint8_t)(MEM8(ebp + (-0x169)) + 1); /* 0x15066D9C: inc byte ptr [ebp - 0x169] */
    _flag_k = FK_NARROW(FK_INC, 24);
    RECOMP_BACKEDGE();
    goto L_15066CF9; /* 0x15066DA2: jmp 0x15066cf9 */
L_15066DA7:
    ecx = MEM32(ebp + (-0x170)); /* 0x15066DA7: mov ecx, dword ptr [ebp - 0x170] */
    /* cmp MEM8(ecx + 0x1), 0x36u */ /* 0x15066DAD: cmp byte ptr [ecx + 1], 0x36 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0x36u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066DF7; /* 0x15066DB1: jne 0x15066df7 */
L_15066DB3:
    eax = ecx + 0x2; /* 0x15066DB3: lea eax, [ecx + 2] */
    /* cmp MEM8(eax), 0x34u */ /* 0x15066DB6: cmp byte ptr [eax], 0x34 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x34u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066DF7; /* 0x15066DB9: jne 0x15066df7 */
L_15066DBB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1B4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1B4)) = MEM32(ebp + (-0x1B4)) + 1; /* 0x15066DBB: inc dword ptr [ebp - 0x1b4] */
    _flag_k = FK_INC;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15066DC1: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x1D4)) = _xmm[0].u64[0]; /* 0x15066DC4: movlpd qword ptr [ebp - 0x1d4], xmm0 */
    esi = eax; /* 0x15066DCC: mov esi, eax */
    ecx = MEM32(ebp + (-0x1D0)); /* 0x15066DCE: mov ecx, dword ptr [ebp - 0x1d0] */
    MEM32(ebp + (-0x18C)) = ecx; /* 0x15066DD4: mov dword ptr [ebp - 0x18c], ecx */
    ecx = MEM32(ebp + (-0x1D4)); /* 0x15066DDA: mov ecx, dword ptr [ebp - 0x1d4] */
    MEM32(ebp + (-0x170)) = esi; /* 0x15066DE0: mov dword ptr [ebp - 0x170], esi */
    MEM32(ebp + (-0x1DC)) = esi; /* 0x15066DE6: mov dword ptr [ebp - 0x1dc], esi */
    MEM32(ebp + (-0x1A0)) = ecx; /* 0x15066DEC: mov dword ptr [ebp - 0x1a0], ecx */
    RECOMP_BACKEDGE();
    goto L_15066CFF; /* 0x15066DF2: jmp 0x15066cff */
L_15066DF7:
    /* cmp MEM8(ecx + 0x1), 0x33u */ /* 0x15066DF7: cmp byte ptr [ecx + 1], 0x33 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x1)) << 24; _flag_b = (uint32_t)(0x33u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066EE1; /* 0x15066DFB: jne 0x15066ee1 */
L_15066E01:
    eax = ecx + 0x2; /* 0x15066E01: lea eax, [ecx + 2] */
    /* cmp MEM8(eax), 0x32u */ /* 0x15066E04: cmp byte ptr [eax], 0x32 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x32u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066EE1; /* 0x15066E07: jne 0x15066ee1 */
L_15066E0D:
    esi = eax; /* 0x15066E0D: mov esi, eax */
    MEM32(ebp + (-0x170)) = esi; /* 0x15066E0F: mov dword ptr [ebp - 0x170], esi */
    MEM32(ebp + (-0x1DC)) = esi; /* 0x15066E15: mov dword ptr [ebp - 0x1dc], esi */
    RECOMP_BACKEDGE();
    goto L_15066CFF; /* 0x15066E1B: jmp 0x15066cff */
L_15066E20:
    SET_LO8(ecx, MEM8(ebp + (-0x166))); /* 0x15066E20: mov cl, byte ptr [ebp - 0x166] */
    esi = MEM32(ebp + (-0x170)); /* 0x15066E26: mov esi, dword ptr [ebp - 0x170] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ecx, LO8(ecx) + 1); /* 0x15066E2C: inc cl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x166)) = (uint8_t)(LO8(ecx)); /* 0x15066E2E: mov byte ptr [ebp - 0x166], cl */
    RECOMP_BACKEDGE();
    goto L_15066D05; /* 0x15066E34: jmp 0x15066d05 */
L_15066E39:
    SET_HI8(eax, MEM8(ebp + (-0x167))); /* 0x15066E39: mov ah, byte ptr [ebp - 0x167] */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x169))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x169)) = (uint8_t)(MEM8(ebp + (-0x169)) - 1); /* 0x15066E3F: dec byte ptr [ebp - 0x169] */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(eax, HI8(eax) - 1); /* 0x15066E45: dec ah */
    _flag_k = FK_NARROW(FK_DEC, 24);
    esi = MEM32(ebp + (-0x170)); /* 0x15066E47: mov esi, dword ptr [ebp - 0x170] */
L_15066E4D:
    SET_LO8(ecx, MEM8(ebp + (-0x166))); /* 0x15066E4D: mov cl, byte ptr [ebp - 0x166] */
    MEM8(ebp + (-0x167)) = (uint8_t)(HI8(eax)); /* 0x15066E53: mov byte ptr [ebp - 0x167], ah */
    RECOMP_BACKEDGE();
    goto L_15066D0B; /* 0x15066E59: jmp 0x15066d0b */
L_15066E5E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x6Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x6Au; /* 0x15066E5E: sub esi, 0x6a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15066E7C; /* 0x15066E61: je 0x15066e7c */
L_15066E63:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15066E63: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15066E64: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15066EAE; /* 0x15066E67: je 0x15066eae */
L_15066E69:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 8; /* 0x15066E69: sub esi, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15066E7C; /* 0x15066E6C: je 0x15066e7c */
L_15066E6E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 3; /* 0x15066E6E: sub esi, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15066EC8; /* 0x15066E71: je 0x15066ec8 */
L_15066E73:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 3; /* 0x15066E73: sub esi, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15066F10; /* 0x15066E76: jne 0x15066f10 */
L_15066E7C:
    /* cmp LO8(eax), 0x6Au */ /* 0x15066E7C: cmp al, 0x6a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066EDB; /* 0x15066E7E: jne 0x15066edb */
L_15066E80:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1B4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1B4)) = MEM32(ebp + (-0x1B4)) + 1; /* 0x15066E80: inc dword ptr [ebp - 0x1b4] */
    _flag_k = FK_INC;
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15066E86: xorps xmm0, xmm0 */
    MEM64(ebp + (-0x1D4)) = _xmm[0].u64[0]; /* 0x15066E89: movlpd qword ptr [ebp - 0x1d4], xmm0 */
    eax = MEM32(ebp + (-0x1D0)); /* 0x15066E91: mov eax, dword ptr [ebp - 0x1d0] */
    MEM32(ebp + (-0x18C)) = eax; /* 0x15066E97: mov dword ptr [ebp - 0x18c], eax */
    eax = MEM32(ebp + (-0x1D4)); /* 0x15066E9D: mov eax, dword ptr [ebp - 0x1d4] */
    MEM32(ebp + (-0x1A0)) = eax; /* 0x15066EA3: mov dword ptr [ebp - 0x1a0], eax */
    RECOMP_BACKEDGE();
    goto L_15066CF9; /* 0x15066EA9: jmp 0x15066cf9 */
L_15066EAE:
    esi = MEM32(ebp + (-0x170)); /* 0x15066EAE: mov esi, dword ptr [ebp - 0x170] */
    eax = esi + 0x1; /* 0x15066EB4: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0x6Cu */ /* 0x15066EB7: cmp byte ptr [eax], 0x6c */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x6Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066DBB; /* 0x15066EBA: je 0x15066dbb */
L_15066EC0:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x169))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x169)) = (uint8_t)(MEM8(ebp + (-0x169)) + 1); /* 0x15066EC0: inc byte ptr [ebp - 0x169] */
    _flag_k = FK_NARROW(FK_INC, 24);
    goto L_15066ECE; /* 0x15066EC6: jmp 0x15066ece */
L_15066EC8:
    esi = MEM32(ebp + (-0x170)); /* 0x15066EC8: mov esi, dword ptr [ebp - 0x170] */
L_15066ECE:
    SET_HI8(eax, MEM8(ebp + (-0x167))); /* 0x15066ECE: mov ah, byte ptr [ebp - 0x167] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_HI8(eax, HI8(eax) + 1); /* 0x15066ED4: inc ah */
    _flag_k = FK_NARROW(FK_INC, 24);
    RECOMP_BACKEDGE();
    goto L_15066E4D; /* 0x15066ED6: jmp 0x15066e4d */
L_15066EDB:
    ecx = MEM32(ebp + (-0x170)); /* 0x15066EDB: mov ecx, dword ptr [ebp - 0x170] */
L_15066EE1:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x15066EE1: mov al, byte ptr [ecx + 1] */
    /* cmp LO8(eax), 0x64u */ /* 0x15066EE4: cmp al, 0x64 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066CF9; /* 0x15066EE6: je 0x15066cf9 */
L_15066EEC:
    /* cmp LO8(eax), 0x69u */ /* 0x15066EEC: cmp al, 0x69 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066F20; /* 0x15066EEE: je 0x15066f20 */
L_15066EF0:
    /* cmp LO8(eax), 0x6Fu */ /* 0x15066EF0: cmp al, 0x6f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x6Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066CF9; /* 0x15066EF2: je 0x15066cf9 */
L_15066EF8:
    /* cmp LO8(eax), 0x75u */ /* 0x15066EF8: cmp al, 0x75 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x75u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066CF9; /* 0x15066EFA: je 0x15066cf9 */
L_15066F00:
    /* cmp LO8(eax), 0x78u */ /* 0x15066F00: cmp al, 0x78 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066CF9; /* 0x15066F02: je 0x15066cf9 */
L_15066F08:
    /* cmp LO8(eax), 0x58u */ /* 0x15066F08: cmp al, 0x58 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_15066F0A:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_15066CF9; /* 0x15066F0A: je 0x15066cf9 */
L_15066F10:
    SET_LO8(eax, MEM8(ebp + (-0x165))); /* 0x15066F10: mov al, byte ptr [ebp - 0x165] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x15066F16: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x165)) = (uint8_t)(LO8(eax)); /* 0x15066F18: mov byte ptr [ebp - 0x165], al */
    goto L_15066F26; /* 0x15066F1E: jmp 0x15066f26 */
L_15066F20:
    SET_LO8(eax, MEM8(ebp + (-0x165))); /* 0x15066F20: mov al, byte ptr [ebp - 0x165] */
L_15066F26:
    SET_LO8(ecx, MEM8(ebp + (-0x166))); /* 0x15066F26: mov cl, byte ptr [ebp - 0x166] */
    SET_HI8(eax, MEM8(ebp + (-0x167))); /* 0x15066F2C: mov ah, byte ptr [ebp - 0x167] */
    esi = MEM32(ebp + (-0x170)); /* 0x15066F32: mov esi, dword ptr [ebp - 0x170] */
    RECOMP_BACKEDGE();
    goto L_15066D11; /* 0x15066F38: jmp 0x15066d11 */
L_15066F3D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15066F3D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15066F3F:
    MEM32(ebp + (-0x1B8)) = ecx; /* 0x15066F3F: mov dword ptr [ebp - 0x1b8], ecx */
    MEM32(ebp + (-0x1B0)) = ecx; /* 0x15066F45: mov dword ptr [ebp - 0x1b0], ecx */
    ecx = MEM32(ebp + (-0x170)); /* 0x15066F4B: mov ecx, dword ptr [ebp - 0x170] */
    MEM8(ebp + (-0x165)) = (uint8_t)(0); /* 0x15066F51: mov byte ptr [ebp - 0x165], 0 */
    /* test HI8(eax), HI8(eax) */ /* 0x15066F58: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15066F74; /* 0x15066F5A: jne 0x15066f74 */
L_15066F5C:
    SET_LO8(eax, MEM8(ecx)); /* 0x15066F5C: mov al, byte ptr [ecx] */
    /* cmp LO8(eax), 0x53u */ /* 0x15066F5E: cmp al, 0x53 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x53u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066F6D; /* 0x15066F60: je 0x15066f6d */
L_15066F62:
    MEM8(ebp + (-0x167)) = (uint8_t)(0xFFu); /* 0x15066F62: mov byte ptr [ebp - 0x167], 0xff */
    /* cmp LO8(eax), 0x43u */ /* 0x15066F69: cmp al, 0x43 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15066F74; /* 0x15066F6B: jne 0x15066f74 */
L_15066F6D:
    MEM8(ebp + (-0x167)) = (uint8_t)(1); /* 0x15066F6D: mov byte ptr [ebp - 0x167], 1 */
L_15066F74:
    edx = (uint32_t)MEM8(ecx); /* 0x15066F74: movzx edx, byte ptr [ecx] */
    _flag_a = (uint32_t)((edx | 0x20u)); _flag_b = (uint32_t)((edx | 0x20u));
    edx = edx | 0x20u; /* 0x15066F77: or edx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1AC)) = edx; /* 0x15066F7A: mov dword ptr [ebp - 0x1ac], edx */
    /* cmp edx, 0x6Eu */ /* 0x15066F80: cmp edx, 0x6e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066FE6; /* 0x15066F83: je 0x15066fe6 */
L_15066F85:
    /* cmp edx, 0x63u */ /* 0x15066F85: cmp edx, 0x63 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066FB0; /* 0x15066F88: je 0x15066fb0 */
L_15066F8A:
    /* cmp edx, 0x7Bu */ /* 0x15066F8A: cmp edx, 0x7b */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066FB0; /* 0x15066F8D: je 0x15066fb0 */
L_15066F8F:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15066F8F: push dword ptr [ebp - 0x174] */
    eax = ebp + (-0x184); /* 0x15066F95: lea eax, [ebp - 0x184] */
    PUSH32(esp, eax); /* 0x15066F9B: push eax */
    RECOMP_CALL(sub_15067CAF); /* 0x15066F9C: call 0x15067caf */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x184)); /* 0x15066FA1: mov edi, dword ptr [ebp - 0x184] */
    ecx = POP32_VAL(esp); /* 0x15066FA7: pop ecx */
    MEM32(ebp + (-0x190)) = edi; /* 0x15066FA8: mov dword ptr [ebp - 0x190], edi */
    goto L_15066FC8; /* 0x15066FAE: jmp 0x15066fc8 */
L_15066FB0:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15066FB0: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15066FB6: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = edi; /* 0x15066FB7: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x15066FBD: mov dword ptr [ebp - 0x184], edi */
    RECOMP_CALL(sub_15066B08); /* 0x15066FC3: call 0x15066b08 */
    RECOMP_FLAGS_IN();
L_15066FC8:
    ebx = eax; /* 0x15066FC8: mov ebx, eax */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15066FCA: mov dword ptr [ebp - 0x178], ebx */
    ecx = POP32_VAL(esp); /* 0x15066FD0: pop ecx */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15066FD1: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067B7F; /* 0x15066FD4: je 0x15067b7f */
L_15066FDA:
    edx = MEM32(ebp + (-0x1AC)); /* 0x15066FDA: mov edx, dword ptr [ebp - 0x1ac] */
    ecx = MEM32(ebp + (-0x170)); /* 0x15066FE0: mov ecx, dword ptr [ebp - 0x170] */
L_15066FE6:
    /* cmp MEM32(ebp + (-0x1A8)), 0 */ /* 0x15066FE6: cmp dword ptr [ebp - 0x1a8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15066FF7; /* 0x15066FED: je 0x15066ff7 */
L_15066FEF:
    /* test esi, esi */ /* 0x15066FEF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067B6C; /* 0x15066FF1: je 0x15067b6c */
L_15066FF7:
    SET_LO8(eax, MEM8(ebp + (-0x166))); /* 0x15066FF7: mov al, byte ptr [ebp - 0x166] */
    /* test LO8(eax), LO8(eax) */ /* 0x15066FFD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067056; /* 0x15066FFF: jne 0x15067056 */
L_15067001:
    /* cmp edx, 0x63u */ /* 0x15067001: cmp edx, 0x63 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067010; /* 0x15067004: je 0x15067010 */
L_15067006:
    /* cmp edx, 0x73u */ /* 0x15067006: cmp edx, 0x73 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x73u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067010; /* 0x15067009: je 0x15067010 */
L_1506700B:
    /* cmp edx, 0x7Bu */ /* 0x1506700B: cmp edx, 0x7b */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067056; /* 0x1506700E: jne 0x15067056 */
L_15067010:
    eax = MEM32(ebp + (-0x1D8)); /* 0x15067010: mov eax, dword ptr [ebp - 0x1d8] */
    ebx = eax; /* 0x15067016: mov ebx, eax */
    ebx = MEM32(ebx); /* 0x15067018: mov ebx, dword ptr [ebx] */
    MEM32(ebp + (-0x1B8)) = ebx; /* 0x1506701A: mov dword ptr [ebp - 0x1b8], ebx */
    MEM32(ebp + (-0x1B0)) = ebx; /* 0x15067020: mov dword ptr [ebp - 0x1b0], ebx */
    ebx = eax + 0x4; /* 0x15067026: lea ebx, [eax + 4] */
    eax = MEM32(eax + 0x4); /* 0x15067029: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x1D8)) = ebx; /* 0x1506702C: mov dword ptr [ebp - 0x1d8], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x15067032: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C8)) = ebx; /* 0x15067035: mov dword ptr [ebp - 0x1c8], ebx */
    ebx = MEM32(ebp + (-0x178)); /* 0x1506703B: mov ebx, dword ptr [ebp - 0x178] */
    MEM32(ebp + (-0x1E0)) = eax; /* 0x15067041: mov dword ptr [ebp - 0x1e0], eax */
    /* cmp eax, 1 */ /* 0x15067047: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15067AFD; /* 0x1506704A: jb 0x15067afd */
L_15067050:
    SET_LO8(eax, MEM8(ebp + (-0x166))); /* 0x15067050: mov al, byte ptr [ebp - 0x166] */
L_15067056:
    /* cmp edx, 0x6Eu */ /* 0x15067056: cmp edx, 0x6e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150674B5; /* 0x15067059: ja 0x150674b5 */
L_1506705F:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150674A6; /* 0x1506705F: je 0x150674a6 */
L_15067065:
    eax = edx; /* 0x15067065: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x63u; /* 0x15067067: sub eax, 0x63 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15067485; /* 0x1506706A: je 0x15067485 */
L_15067070:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15067070: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150676F0; /* 0x15067073: je 0x150676f0 */
L_15067079:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15067079: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150670B0; /* 0x1506707C: je 0x150670b0 */
L_1506707E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1506707E: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150670B0; /* 0x15067081: je 0x150670b0 */
L_15067083:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15067083: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150670B0; /* 0x15067086: je 0x150670b0 */
L_15067088:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15067088: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15067089: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150674EA; /* 0x1506708C: jne 0x150674ea */
L_15067092:
    PUSH32(esp, 0x64u); /* 0x15067092: push 0x64 */
    eax = POP32_VAL(esp); /* 0x15067094: pop eax */
    MEM32(ebp + (-0x1AC)) = eax; /* 0x15067095: mov dword ptr [ebp - 0x1ac], eax */
L_1506709B:
    /* cmp ebx, 0x2Du */ /* 0x1506709B: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067522; /* 0x1506709E: jne 0x15067522 */
L_150670A4:
    MEM8(ebp + (-0x185)) = (uint8_t)(1); /* 0x150670A4: mov byte ptr [ebp - 0x185], 1 */
    goto L_15067527; /* 0x150670AB: jmp 0x15067527 */
L_150670B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150670B0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 0x2Du */ /* 0x150670B2: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150670C2; /* 0x150670B5: jne 0x150670c2 */
L_150670B7:
    eax = MEM32(ebp + (-0x198)); /* 0x150670B7: mov eax, dword ptr [ebp - 0x198] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150670BD: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x150670BE: mov byte ptr [eax], bl */
    goto L_150670C7; /* 0x150670C0: jmp 0x150670c7 */
L_150670C2:
    /* cmp ebx, 0x2Bu */ /* 0x150670C2: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150670E2; /* 0x150670C5: jne 0x150670e2 */
L_150670C7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x180))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x180)) = MEM32(ebp + (-0x180)) - 1; /* 0x150670C7: dec dword ptr [ebp - 0x180] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150670CD: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x150670CE: push dword ptr [ebp - 0x174] */
    RECOMP_CALL(sub_15066B08); /* 0x150670D4: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150670D9: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x150670DB: pop ecx */
    MEM32(ebp + (-0x178)) = ebx; /* 0x150670DC: mov dword ptr [ebp - 0x178], ebx */
L_150670E2:
    /* cmp MEM32(ebp + (-0x1A8)), 0 */ /* 0x150670E2: cmp dword ptr [ebp - 0x1a8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x180)); /* 0x150670E9: mov eax, dword ptr [ebp - 0x180] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150670EF: push -1 */
    ecx = POP32_VAL(esp); /* 0x150670F1: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x150670F2: cmove eax, ecx */
    MEM32(ebp + (-0x180)) = eax; /* 0x150670F5: mov dword ptr [ebp - 0x180], eax */
    eax = (uint32_t)LO8(ebx); /* 0x150670FB: movzx eax, bl */
    PUSH32(esp, eax); /* 0x150670FE: push eax */
    RECOMP_CALL(sub_15030030); /* 0x150670FF: call 0x15030030 */
    RECOMP_FLAGS_IN();
    goto L_15067174; /* 0x15067104: jmp 0x15067174 */
L_15067106:
    ecx = MEM32(ebp + (-0x180)); /* 0x15067106: mov ecx, dword ptr [ebp - 0x180] */
    eax = ecx; /* 0x1506710C: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1506710E: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x180)) = ecx; /* 0x1506710F: mov dword ptr [ebp - 0x180], ecx */
    /* test eax, eax */ /* 0x15067115: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067179; /* 0x15067117: je 0x15067179 */
L_15067119:
    eax = MEM32(ebp + (-0x198)); /* 0x15067119: mov eax, dword ptr [ebp - 0x198] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1A4)) = MEM32(ebp + (-0x1A4)) + 1; /* 0x1506711F: inc dword ptr [ebp - 0x1a4] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x15067125: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1C0); /* 0x15067128: lea eax, [ebp - 0x1c0] */
    PUSH32(esp, eax); /* 0x1506712E: push eax */
    eax = ebp + (-0x164); /* 0x1506712F: lea eax, [ebp - 0x164] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15067135: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15067136: push eax */
    eax = ebp + (-0x198); /* 0x15067137: lea eax, [ebp - 0x198] */
    PUSH32(esp, eax); /* 0x1506713D: push eax */
    eax = ebp + (-0x1C4); /* 0x1506713E: lea eax, [ebp - 0x1c4] */
    PUSH32(esp, eax); /* 0x15067144: push eax */
    PUSH32(esp, esi); /* 0x15067145: push esi */
    RECOMP_CALL(sub_15066A26); /* 0x15067146: call 0x15066a26 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506714B: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506714E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067B7F; /* 0x15067150: je 0x15067b7f */
L_15067156:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067156: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1506715C: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x1506715D: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15067162: mov ebx, eax */
    eax = (uint32_t)LO8(ebx); /* 0x15067164: movzx eax, bl */
    PUSH32(esp, eax); /* 0x15067167: push eax */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067168: mov dword ptr [ebp - 0x178], ebx */
    RECOMP_CALL(sub_15030030); /* 0x1506716E: call 0x15030030 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067173: pop ecx */
L_15067174:
    ecx = POP32_VAL(esp); /* 0x15067174: pop ecx */
    /* test eax, eax */ /* 0x15067175: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067106; /* 0x15067177: jne 0x15067106 */
L_15067179:
    RECOMP_CALL(sub_1505D940); /* 0x15067179: call 0x1505d940 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x180)); /* 0x1506717E: mov ecx, dword ptr [ebp - 0x180] */
    eax = MEM32(eax); /* 0x15067184: mov eax, dword ptr [eax] */
    SET_LO8(eax, MEM8(eax)); /* 0x15067186: mov al, byte ptr [eax] */
    MEM8(ebp + (-0x1E4)) = (uint8_t)(LO8(eax)); /* 0x15067188: mov byte ptr [ebp - 0x1e4], al */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1506718E: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067295; /* 0x15067190: jne 0x15067295 */
L_15067196:
    eax = ecx; /* 0x15067196: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15067198: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x180)) = ecx; /* 0x15067199: mov dword ptr [ebp - 0x180], ecx */
    /* test eax, eax */ /* 0x1506719F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067295; /* 0x150671A1: je 0x15067295 */
L_150671A7:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x150671A7: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150671AD: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x150671AE: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x198)); /* 0x150671B3: mov ecx, dword ptr [ebp - 0x198] */
    ebx = eax; /* 0x150671B9: mov ebx, eax */
    SET_LO8(eax, MEM8(ebp + (-0x1E4))); /* 0x150671BB: mov al, byte ptr [ebp - 0x1e4] */
    MEM32(ebp + (-0x178)) = ebx; /* 0x150671C1: mov dword ptr [ebp - 0x178], ebx */
    MEM8(esi + ecx) = (uint8_t)(LO8(eax)); /* 0x150671C7: mov byte ptr [esi + ecx], al */
    eax = ebp + (-0x1C0); /* 0x150671CA: lea eax, [ebp - 0x1c0] */
    PUSH32(esp, eax); /* 0x150671D0: push eax */
    eax = ebp + (-0x164); /* 0x150671D1: lea eax, [ebp - 0x164] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150671D7: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x150671D8: push eax */
    eax = ebp + (-0x198); /* 0x150671D9: lea eax, [ebp - 0x198] */
    PUSH32(esp, eax); /* 0x150671DF: push eax */
    eax = ebp + (-0x1C4); /* 0x150671E0: lea eax, [ebp - 0x1c4] */
    PUSH32(esp, eax); /* 0x150671E6: push eax */
    PUSH32(esp, esi); /* 0x150671E7: push esi */
    RECOMP_CALL(sub_15066A26); /* 0x150671E8: call 0x15066a26 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150671ED: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150671F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067B7F; /* 0x150671F2: je 0x15067b7f */
L_150671F8:
    eax = (uint32_t)LO8(ebx); /* 0x150671F8: movzx eax, bl */
    PUSH32(esp, eax); /* 0x150671FB: push eax */
    RECOMP_CALL(sub_15030030); /* 0x150671FC: call 0x15030030 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067201: pop ecx */
    /* test eax, eax */ /* 0x15067202: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506728F; /* 0x15067204: je 0x1506728f */
L_1506720A:
    MEM32(ebp + (-0x1B0)) = edi; /* 0x1506720A: mov dword ptr [ebp - 0x1b0], edi */
L_15067210:
    ecx = MEM32(ebp + (-0x180)); /* 0x15067210: mov ecx, dword ptr [ebp - 0x180] */
    eax = ecx; /* 0x15067216: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15067218: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x180)) = ecx; /* 0x15067219: mov dword ptr [ebp - 0x180], ecx */
    /* test eax, eax */ /* 0x1506721F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067295; /* 0x15067221: je 0x15067295 */
L_15067223:
    eax = MEM32(ebp + (-0x198)); /* 0x15067223: mov eax, dword ptr [ebp - 0x198] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1A4)) = MEM32(ebp + (-0x1A4)) + 1; /* 0x15067229: inc dword ptr [ebp - 0x1a4] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x1506722F: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1C0); /* 0x15067232: lea eax, [ebp - 0x1c0] */
    PUSH32(esp, eax); /* 0x15067238: push eax */
    eax = ebp + (-0x164); /* 0x15067239: lea eax, [ebp - 0x164] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1506723F: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15067240: push eax */
    eax = ebp + (-0x198); /* 0x15067241: lea eax, [ebp - 0x198] */
    PUSH32(esp, eax); /* 0x15067247: push eax */
    eax = ebp + (-0x1C4); /* 0x15067248: lea eax, [ebp - 0x1c4] */
    PUSH32(esp, eax); /* 0x1506724E: push eax */
    PUSH32(esp, esi); /* 0x1506724F: push esi */
    RECOMP_CALL(sub_15066A26); /* 0x15067250: call 0x15066a26 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15067255: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15067258: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067B7F; /* 0x1506725A: je 0x15067b7f */
L_15067260:
    edi = MEM32(ebp + (-0x1B0)); /* 0x15067260: mov edi, dword ptr [ebp - 0x1b0] */
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067266: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1506726C: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x1506726D: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15067272: mov ebx, eax */
    MEM32(ebp + (-0x1B0)) = edi; /* 0x15067274: mov dword ptr [ebp - 0x1b0], edi */
    eax = (uint32_t)LO8(ebx); /* 0x1506727A: movzx eax, bl */
    PUSH32(esp, eax); /* 0x1506727D: push eax */
    MEM32(ebp + (-0x178)) = ebx; /* 0x1506727E: mov dword ptr [ebp - 0x178], ebx */
    RECOMP_CALL(sub_15030030); /* 0x15067284: call 0x15030030 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067289: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506728A: pop ecx */
    /* test eax, eax */ /* 0x1506728B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067210; /* 0x1506728D: jne 0x15067210 */
L_1506728F:
    ecx = MEM32(ebp + (-0x180)); /* 0x1506728F: mov ecx, dword ptr [ebp - 0x180] */
L_15067295:
    /* cmp MEM32(ebp + (-0x1A4)), 0 */ /* 0x15067295: cmp dword ptr [ebp - 0x1a4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506740B; /* 0x1506729C: je 0x1506740b */
L_150672A2:
    /* cmp ebx, 0x65u */ /* 0x150672A2: cmp ebx, 0x65 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150672B0; /* 0x150672A5: je 0x150672b0 */
L_150672A7:
    /* cmp ebx, 0x45u */ /* 0x150672A7: cmp ebx, 0x45 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506740B; /* 0x150672AA: jne 0x1506740b */
L_150672B0:
    eax = ecx; /* 0x150672B0: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150672B2: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x180)) = ecx; /* 0x150672B3: mov dword ptr [ebp - 0x180], ecx */
    MEM32(ebp + (-0x1B0)) = ecx; /* 0x150672B9: mov dword ptr [ebp - 0x1b0], ecx */
    /* test eax, eax */ /* 0x150672BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506740B; /* 0x150672C1: je 0x1506740b */
L_150672C7:
    eax = MEM32(ebp + (-0x198)); /* 0x150672C7: mov eax, dword ptr [ebp - 0x198] */
    MEM8(esi + eax) = (uint8_t)(0x65u); /* 0x150672CD: mov byte ptr [esi + eax], 0x65 */
    eax = ebp + (-0x1C0); /* 0x150672D1: lea eax, [ebp - 0x1c0] */
    PUSH32(esp, eax); /* 0x150672D7: push eax */
    eax = ebp + (-0x164); /* 0x150672D8: lea eax, [ebp - 0x164] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150672DE: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x150672DF: push eax */
    eax = ebp + (-0x198); /* 0x150672E0: lea eax, [ebp - 0x198] */
    PUSH32(esp, eax); /* 0x150672E6: push eax */
    eax = ebp + (-0x1C4); /* 0x150672E7: lea eax, [ebp - 0x1c4] */
    PUSH32(esp, eax); /* 0x150672ED: push eax */
    PUSH32(esp, esi); /* 0x150672EE: push esi */
    RECOMP_CALL(sub_15066A26); /* 0x150672EF: call 0x15066a26 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150672F4: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150672F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067B7F; /* 0x150672F9: je 0x15067b7f */
L_150672FF:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x150672FF: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15067305: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x15067306: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1506730B: mov ebx, eax */
    MEM32(ebp + (-0x178)) = ebx; /* 0x1506730D: mov dword ptr [ebp - 0x178], ebx */
    ecx = POP32_VAL(esp); /* 0x15067313: pop ecx */
    /* cmp ebx, 0x2Du */ /* 0x15067314: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067352; /* 0x15067317: jne 0x15067352 */
L_15067319:
    eax = MEM32(ebp + (-0x198)); /* 0x15067319: mov eax, dword ptr [ebp - 0x198] */
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x1506731F: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1C0); /* 0x15067322: lea eax, [ebp - 0x1c0] */
    PUSH32(esp, eax); /* 0x15067328: push eax */
    eax = ebp + (-0x164); /* 0x15067329: lea eax, [ebp - 0x164] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1506732F: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15067330: push eax */
    eax = ebp + (-0x198); /* 0x15067331: lea eax, [ebp - 0x198] */
    PUSH32(esp, eax); /* 0x15067337: push eax */
    eax = ebp + (-0x1C4); /* 0x15067338: lea eax, [ebp - 0x1c4] */
    PUSH32(esp, eax); /* 0x1506733E: push eax */
    PUSH32(esp, esi); /* 0x1506733F: push esi */
    RECOMP_CALL(sub_15066A26); /* 0x15067340: call 0x15066a26 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15067345: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15067348: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067B7F; /* 0x1506734A: je 0x15067b7f */
L_15067350:
    goto L_15067357; /* 0x15067350: jmp 0x15067357 */
L_15067352:
    /* cmp ebx, 0x2Bu */ /* 0x15067352: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506738D; /* 0x15067355: jne 0x1506738d */
L_15067357:
    ecx = MEM32(ebp + (-0x180)); /* 0x15067357: mov ecx, dword ptr [ebp - 0x180] */
    eax = ecx; /* 0x1506735D: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1506735F: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x180)) = ecx; /* 0x15067360: mov dword ptr [ebp - 0x180], ecx */
    /* test eax, eax */ /* 0x15067366: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067378; /* 0x15067368: jne 0x15067378 */
L_1506736A:
    eax = MEM32(ebp + (-0x1B0)); /* 0x1506736A: mov eax, dword ptr [ebp - 0x1b0] */
    MEM32(ebp + (-0x180)) = eax; /* 0x15067370: mov dword ptr [ebp - 0x180], eax */
    goto L_1506738D; /* 0x15067376: jmp 0x1506738d */
L_15067378:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067378: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1506737E: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x1506737F: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15067384: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15067386: pop ecx */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067387: mov dword ptr [ebp - 0x178], ebx */
L_1506738D:
    eax = (uint32_t)LO8(ebx); /* 0x1506738D: movzx eax, bl */
    PUSH32(esp, eax); /* 0x15067390: push eax */
    RECOMP_CALL(sub_15030030); /* 0x15067391: call 0x15030030 */
    RECOMP_FLAGS_IN();
    goto L_15067406; /* 0x15067396: jmp 0x15067406 */
L_15067398:
    ecx = MEM32(ebp + (-0x180)); /* 0x15067398: mov ecx, dword ptr [ebp - 0x180] */
    eax = ecx; /* 0x1506739E: mov eax, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150673A0: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x180)) = ecx; /* 0x150673A1: mov dword ptr [ebp - 0x180], ecx */
    /* test eax, eax */ /* 0x150673A7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506740B; /* 0x150673A9: je 0x1506740b */
L_150673AB:
    eax = MEM32(ebp + (-0x198)); /* 0x150673AB: mov eax, dword ptr [ebp - 0x198] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1A4)) = MEM32(ebp + (-0x1A4)) + 1; /* 0x150673B1: inc dword ptr [ebp - 0x1a4] */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(ebx)); /* 0x150673B7: mov byte ptr [esi + eax], bl */
    eax = ebp + (-0x1C0); /* 0x150673BA: lea eax, [ebp - 0x1c0] */
    PUSH32(esp, eax); /* 0x150673C0: push eax */
    eax = ebp + (-0x164); /* 0x150673C1: lea eax, [ebp - 0x164] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150673C7: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x150673C8: push eax */
    eax = ebp + (-0x198); /* 0x150673C9: lea eax, [ebp - 0x198] */
    PUSH32(esp, eax); /* 0x150673CF: push eax */
    eax = ebp + (-0x1C4); /* 0x150673D0: lea eax, [ebp - 0x1c4] */
    PUSH32(esp, eax); /* 0x150673D6: push eax */
    PUSH32(esp, esi); /* 0x150673D7: push esi */
    RECOMP_CALL(sub_15066A26); /* 0x150673D8: call 0x15066a26 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150673DD: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150673E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067B7F; /* 0x150673E2: je 0x15067b7f */
L_150673E8:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x150673E8: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150673EE: inc edi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x150673EF: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150673F4: mov ebx, eax */
    eax = (uint32_t)LO8(ebx); /* 0x150673F6: movzx eax, bl */
    PUSH32(esp, eax); /* 0x150673F9: push eax */
    MEM32(ebp + (-0x178)) = ebx; /* 0x150673FA: mov dword ptr [ebp - 0x178], ebx */
    RECOMP_CALL(sub_15030030); /* 0x15067400: call 0x15030030 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067405: pop ecx */
L_15067406:
    ecx = POP32_VAL(esp); /* 0x15067406: pop ecx */
    /* test eax, eax */ /* 0x15067407: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067398; /* 0x15067409: jne 0x15067398 */
L_1506740B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1506740B: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = edi; /* 0x1506740C: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x15067412: mov dword ptr [ebp - 0x184], edi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15067418: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506742B; /* 0x1506741B: je 0x1506742b */
L_1506741D:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x1506741D: push dword ptr [ebp - 0x174] */
    PUSH32(esp, ebx); /* 0x15067423: push ebx */
    RECOMP_CALL(sub_1507E10C); /* 0x15067424: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067429: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506742A: pop ecx */
L_1506742B:
    /* cmp MEM32(ebp + (-0x1A4)), 0 */ /* 0x1506742B: cmp dword ptr [ebp - 0x1a4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067B7F; /* 0x15067432: je 0x15067b7f */
L_15067438:
    /* cmp MEM8(ebp + (-0x166)), 0 */ /* 0x15067438: cmp byte ptr [ebp - 0x166], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x166))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067A39; /* 0x1506743F: jne 0x15067a39 */
L_15067445:
    eax = MEM32(ebp + (-0x17C)); /* 0x15067445: mov eax, dword ptr [ebp - 0x17c] */
    PUSH32(esp, MEM32(ebp + (-0x1E4))); /* 0x1506744B: push dword ptr [ebp - 0x1e4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15067451: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x17C)) = eax; /* 0x15067452: mov dword ptr [ebp - 0x17c], eax */
    MEM32(ebp + (-0x1CC)) = eax; /* 0x15067458: mov dword ptr [ebp - 0x1cc], eax */
    eax = MEM32(ebp + (-0x198)); /* 0x1506745E: mov eax, dword ptr [ebp - 0x198] */
    PUSH32(esp, eax); /* 0x15067464: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1B8))); /* 0x15067465: push dword ptr [ebp - 0x1b8] */
    MEM8(esi + eax) = (uint8_t)(0); /* 0x1506746B: mov byte ptr [esi + eax], 0 */
    eax = (int32_t)(int8_t)MEM8(ebp + (-0x169)); /* 0x1506746F: movsx eax, byte ptr [ebp - 0x169] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15067476: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x15067477: push eax */
    RECOMP_CALL(sub_1506580C); /* 0x15067478: call 0x1506580c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1506747D: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_15067A39; /* 0x15067480: jmp 0x15067a39 */
L_15067485:
    ebx = MEM32(ebp + (-0x1A8)); /* 0x15067485: mov ebx, dword ptr [ebp - 0x1a8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1506748B: inc esi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x1506748C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1506748E: push 0x10 */
    if (TEST_NZ(_flag_a, _flag_b)) { esi = MEM32(ebp + (-0x1D0)); } /* 0x15067490: cmovne esi, dword ptr [ebp - 0x1d0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15067497: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15067499: inc eax */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x1506749A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = ebx; } /* 0x1506749C: cmovne eax, ebx */
    ebx = eax; /* 0x1506749F: mov ebx, eax */
    goto L_15067641; /* 0x150674A1: jmp 0x15067641 */
L_150674A6:
    ecx = edi; /* 0x150674A6: mov ecx, edi */
    /* test LO8(eax), LO8(eax) */ /* 0x150674A8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067A07; /* 0x150674AA: je 0x15067a07 */
L_150674B0:
    goto L_15067A39; /* 0x150674B0: jmp 0x15067a39 */
L_150674B5:
    eax = edx; /* 0x150674B5: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x6Fu; /* 0x150674B7: sub eax, 0x6f */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150676F0; /* 0x150674BA: je 0x150676f0 */
L_150674C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150674C0: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150676E9; /* 0x150674C3: je 0x150676e9 */
L_150674C9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x150674C9: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15067639; /* 0x150674CC: je 0x15067639 */
L_150674D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150674D2: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150674D3: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150676F0; /* 0x150674D6: je 0x150676f0 */
L_150674DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x150674DC: sub eax, 3 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1506709B; /* 0x150674DF: je 0x1506709b */
L_150674E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x150674E5: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1506751B; /* 0x150674E8: je 0x1506751b */
L_150674EA:
    eax = (uint32_t)MEM8(ecx); /* 0x150674EA: movzx eax, byte ptr [ecx] */
    /* cmp eax, ebx */ /* 0x150674ED: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067B23; /* 0x150674EF: jne 0x15067b23 */
L_150674F5:
    SET_LO8(eax, MEM8(ebp + (-0x168))); /* 0x150674F5: mov al, byte ptr [ebp - 0x168] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) - 1); /* 0x150674FB: dec al */
    _flag_k = FK_NARROW(FK_DEC, 24);
    /* cmp MEM8(ebp + (-0x166)), 0 */ /* 0x150674FD: cmp byte ptr [ebp - 0x166], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x166))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067A3F; /* 0x15067504: jne 0x15067a3f */
L_1506750A:
    ecx = MEM32(ebp + (-0x1D8)); /* 0x1506750A: mov ecx, dword ptr [ebp - 0x1d8] */
    MEM32(ebp + (-0x1C8)) = ecx; /* 0x15067510: mov dword ptr [ebp - 0x1c8], ecx */
    goto L_15067A3F; /* 0x15067516: jmp 0x15067a3f */
L_1506751B:
    PUSH32(esp, 0x40u); /* 0x1506751B: push 0x40 */
    goto L_1506763B; /* 0x1506751D: jmp 0x1506763b */
L_15067522:
    /* cmp ebx, 0x2Bu */ /* 0x15067522: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506755E; /* 0x15067525: jne 0x1506755e */
L_15067527:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15067527: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1506753D; /* 0x1506752A: jne 0x1506753d */
L_1506752C:
    /* cmp MEM32(ebp + (-0x1A8)), esi */ /* 0x1506752C: cmp dword ptr [ebp - 0x1a8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506753D; /* 0x15067532: je 0x1506753d */
L_15067534:
    MEM8(ebp + (-0x165)) = (uint8_t)(1); /* 0x15067534: mov byte ptr [ebp - 0x165], 1 */
    goto L_1506755E; /* 0x1506753B: jmp 0x1506755e */
L_1506753D:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x1506753D: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15067543: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = edi; /* 0x15067544: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x1506754A: mov dword ptr [ebp - 0x184], edi */
    RECOMP_CALL(sub_15066B08); /* 0x15067550: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15067555: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15067557: pop ecx */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067558: mov dword ptr [ebp - 0x178], ebx */
L_1506755E:
    /* cmp ebx, 0x30u */ /* 0x1506755E: cmp ebx, 0x30 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506773B; /* 0x15067561: jne 0x1506773b */
L_15067567:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067567: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1506756D: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = edi; /* 0x1506756E: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x15067574: mov dword ptr [ebp - 0x184], edi */
    RECOMP_CALL(sub_15066B08); /* 0x1506757A: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1506757F: mov ebx, eax */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067581: mov dword ptr [ebp - 0x178], ebx */
    ecx = POP32_VAL(esp); /* 0x15067587: pop ecx */
    /* cmp LO8(ebx), 0x78u */ /* 0x15067588: cmp bl, 0x78 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150675FD; /* 0x1506758B: je 0x150675fd */
L_1506758D:
    /* cmp LO8(ebx), 0x58u */ /* 0x1506758D: cmp bl, 0x58 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150675FD; /* 0x15067590: je 0x150675fd */
L_15067592:
    edx = MEM32(ebp + (-0x1AC)); /* 0x15067592: mov edx, dword ptr [ebp - 0x1ac] */
    MEM32(ebp + (-0x1A4)) = 1; /* 0x15067598: mov dword ptr [ebp - 0x1a4], 1 */
    /* cmp edx, 0x78u */ /* 0x150675A2: cmp edx, 0x78 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150675C9; /* 0x150675A5: je 0x150675c9 */
L_150675A7:
    /* cmp MEM32(ebp + (-0x1A8)), 0 */ /* 0x150675A7: cmp dword ptr [ebp - 0x1a8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150675BB; /* 0x150675AE: je 0x150675bb */
L_150675B0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x150675B0: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150675BB; /* 0x150675B3: jne 0x150675bb */
L_150675B5:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x165))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x165)) = (uint8_t)(MEM8(ebp + (-0x165)) + 1); /* 0x150675B5: inc byte ptr [ebp - 0x165] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_150675BB:
    PUSH32(esp, 0x6Fu); /* 0x150675BB: push 0x6f */
L_150675BD:
    edx = POP32_VAL(esp); /* 0x150675BD: pop edx */
    MEM32(ebp + (-0x1AC)) = edx; /* 0x150675BE: mov dword ptr [ebp - 0x1ac], edx */
    goto L_15067741; /* 0x150675C4: jmp 0x15067741 */
L_150675C9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150675C9: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = edi; /* 0x150675CA: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x150675D0: mov dword ptr [ebp - 0x184], edi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x150675D6: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150675EF; /* 0x150675D9: je 0x150675ef */
L_150675DB:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x150675DB: push dword ptr [ebp - 0x174] */
    PUSH32(esp, ebx); /* 0x150675E1: push ebx */
    RECOMP_CALL(sub_1507E10C); /* 0x150675E2: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1AC)); /* 0x150675E7: mov edx, dword ptr [ebp - 0x1ac] */
    ecx = POP32_VAL(esp); /* 0x150675ED: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150675EE: pop ecx */
L_150675EF:
    PUSH32(esp, 0x30u); /* 0x150675EF: push 0x30 */
    ebx = POP32_VAL(esp); /* 0x150675F1: pop ebx */
    MEM32(ebp + (-0x178)) = ebx; /* 0x150675F2: mov dword ptr [ebp - 0x178], ebx */
    goto L_15067741; /* 0x150675F8: jmp 0x15067741 */
L_150675FD:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x150675FD: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15067603: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = edi; /* 0x15067604: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x1506760A: mov dword ptr [ebp - 0x184], edi */
    RECOMP_CALL(sub_15066B08); /* 0x15067610: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x1A8)), 0 */ /* 0x15067615: cmp dword ptr [ebp - 0x1a8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax; /* 0x1506761C: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1506761E: pop ecx */
    MEM32(ebp + (-0x178)) = ebx; /* 0x1506761F: mov dword ptr [ebp - 0x178], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067635; /* 0x15067625: je 0x15067635 */
L_15067627:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x15067627: sub esi, 2 */
    _flag_k = FK_CMP;
    /* cmp esi, 1 */ /* 0x1506762A: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15067635; /* 0x1506762D: jge 0x15067635 */
L_1506762F:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x165))) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(ebp + (-0x165)) = (uint8_t)(MEM8(ebp + (-0x165)) + 1); /* 0x1506762F: inc byte ptr [ebp - 0x165] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_15067635:
    PUSH32(esp, 0x78u); /* 0x15067635: push 0x78 */
    RECOMP_BACKEDGE();
    goto L_150675BD; /* 0x15067637: jmp 0x150675bd */
L_15067639:
    PUSH32(esp, 0x20u); /* 0x15067639: push 0x20 */
L_1506763B:
    ebx = MEM32(ebp + (-0x1A8)); /* 0x1506763B: mov ebx, dword ptr [ebp - 0x1a8] */
L_15067641:
    ecx = POP32_VAL(esp); /* 0x15067641: pop ecx */
    eax = ecx; /* 0x15067642: mov eax, ecx */
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x15067644: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x15067647: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x15067649: cmove eax, ecx */
    ecx = eax; /* 0x1506764C: mov ecx, eax */
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x1506764E: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x167)), 0 */ /* 0x15067651: cmp byte ptr [ebp - 0x167], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x167))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) { ecx = eax; } /* 0x15067658: cmovle ecx, eax */
    eax = ecx; /* 0x1506765B: mov eax, ecx */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x1506765D: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x166)), 0 */ /* 0x15067660: cmp byte ptr [ebp - 0x166], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x166))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15067667: cmove eax, ecx */
    ecx = ebp + (-0x1CC); /* 0x1506766A: lea ecx, [ebp - 0x1cc] */
    PUSH32(esp, ecx); /* 0x15067670: push ecx */
    ecx = ebp + (-0x1B0); /* 0x15067671: lea ecx, [ebp - 0x1b0] */
    PUSH32(esp, MEM32(ebp + (-0x1E0))); /* 0x15067677: push dword ptr [ebp - 0x1e0] */
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x1506767D: push dword ptr [ebp - 0x174] */
    PUSH32(esp, esi); /* 0x15067683: push esi */
    PUSH32(esp, ecx); /* 0x15067684: push ecx */
    ecx = ebp + (-0x184); /* 0x15067685: lea ecx, [ebp - 0x184] */
    PUSH32(esp, ecx); /* 0x1506768B: push ecx */
    ecx = ebp + (-0x178); /* 0x1506768C: lea ecx, [ebp - 0x178] */
    PUSH32(esp, ecx); /* 0x15067692: push ecx */
    /* cmp edx, 0x7Bu */ /* 0x15067693: cmp edx, 0x7b */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150676B3; /* 0x15067696: jne 0x150676b3 */
L_15067698:
    ecx = ebp + (-0x1DC); /* 0x15067698: lea ecx, [ebp - 0x1dc] */
    PUSH32(esp, ecx); /* 0x1506769E: push ecx */
    PUSH32(esp, eax); /* 0x1506769F: push eax */
    RECOMP_CALL(sub_15066921); /* 0x150676A0: call 0x15066921 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1DC)); /* 0x150676A5: mov ecx, dword ptr [ebp - 0x1dc] */
    MEM32(ebp + (-0x170)) = ecx; /* 0x150676AB: mov dword ptr [ebp - 0x170], ecx */
    goto L_150676BB; /* 0x150676B1: jmp 0x150676bb */
L_150676B3:
    PUSH32(esp, 0); /* 0x150676B3: push 0 */
    PUSH32(esp, eax); /* 0x150676B5: push eax */
    RECOMP_CALL(sub_1506674F); /* 0x150676B6: call 0x1506674f */
    RECOMP_FLAGS_IN();
L_150676BB:
    ebx = MEM32(ebp + (-0x178)); /* 0x150676BB: mov ebx, dword ptr [ebp - 0x178] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x150676C1: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150676C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067B3B; /* 0x150676C6: jne 0x15067b3b */
L_150676CC:
    ecx = MEM32(ebp + (-0x1CC)); /* 0x150676CC: mov ecx, dword ptr [ebp - 0x1cc] */
    edi = MEM32(ebp + (-0x184)); /* 0x150676D2: mov edi, dword ptr [ebp - 0x184] */
    MEM32(ebp + (-0x17C)) = ecx; /* 0x150676D8: mov dword ptr [ebp - 0x17c], ecx */
    MEM32(ebp + (-0x190)) = edi; /* 0x150676DE: mov dword ptr [ebp - 0x190], edi */
    goto L_15067A39; /* 0x150676E4: jmp 0x15067a39 */
L_150676E9:
    MEM8(ebp + (-0x169)) = (uint8_t)(1); /* 0x150676E9: mov byte ptr [ebp - 0x169], 1 */
L_150676F0:
    /* cmp ebx, 0x2Du */ /* 0x150676F0: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150676FE; /* 0x150676F3: jne 0x150676fe */
L_150676F5:
    MEM8(ebp + (-0x185)) = (uint8_t)(1); /* 0x150676F5: mov byte ptr [ebp - 0x185], 1 */
    goto L_15067703; /* 0x150676FC: jmp 0x15067703 */
L_150676FE:
    /* cmp ebx, 0x2Bu */ /* 0x150676FE: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067741; /* 0x15067701: jne 0x15067741 */
L_15067703:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15067703: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1506771A; /* 0x15067706: jne 0x1506771a */
L_15067708:
    /* cmp MEM32(ebp + (-0x1A8)), esi */ /* 0x15067708: cmp dword ptr [ebp - 0x1a8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506771A; /* 0x1506770E: je 0x1506771a */
L_15067710:
    SET_LO8(eax, 1); /* 0x15067710: mov al, 1 */
    MEM8(ebp + (-0x165)) = (uint8_t)(LO8(eax)); /* 0x15067712: mov byte ptr [ebp - 0x165], al */
    goto L_15067747; /* 0x15067718: jmp 0x15067747 */
L_1506771A:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x1506771A: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15067720: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = edi; /* 0x15067721: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x15067727: mov dword ptr [ebp - 0x184], edi */
    RECOMP_CALL(sub_15066B08); /* 0x1506772D: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15067732: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15067734: pop ecx */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067735: mov dword ptr [ebp - 0x178], ebx */
L_1506773B:
    edx = MEM32(ebp + (-0x1AC)); /* 0x1506773B: mov edx, dword ptr [ebp - 0x1ac] */
L_15067741:
    SET_LO8(eax, MEM8(ebp + (-0x165))); /* 0x15067741: mov al, byte ptr [ebp - 0x165] */
L_15067747:
    /* cmp MEM32(ebp + (-0x1B4)), 0 */ /* 0x15067747: cmp dword ptr [ebp - 0x1b4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1B4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150678CC; /* 0x1506774E: je 0x150678cc */
L_15067754:
    /* test LO8(eax), LO8(eax) */ /* 0x15067754: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506789B; /* 0x15067756: jne 0x1506789b */
L_1506775C:
    /* cmp edx, 0x78u */ /* 0x1506775C: cmp edx, 0x78 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150677D9; /* 0x1506775F: je 0x150677d9 */
L_15067761:
    /* cmp edx, 0x70u */ /* 0x15067761: cmp edx, 0x70 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150677D9; /* 0x15067764: je 0x150677d9 */
L_15067766:
    eax = (uint32_t)LO8(ebx); /* 0x15067766: movzx eax, bl */
    PUSH32(esp, eax); /* 0x15067769: push eax */
    RECOMP_CALL(sub_15030030); /* 0x1506776A: call 0x15030030 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506776F: pop ecx */
    /* test eax, eax */ /* 0x15067770: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506787B; /* 0x15067772: je 0x1506787b */
L_15067778:
    /* cmp MEM32(ebp + (-0x1AC)), 0x6Fu */ /* 0x15067778: cmp dword ptr [ebp - 0x1ac], 0x6f */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1AC))); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150677B1; /* 0x1506777F: jne 0x150677b1 */
L_15067781:
    ecx = MEM32(ebp + (-0x18C)); /* 0x15067781: mov ecx, dword ptr [ebp - 0x18c] */
    /* cmp ebx, 0x38u */ /* 0x15067787: cmp ebx, 0x38 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150677A7; /* 0x1506778A: jge 0x150677a7 */
L_1506778C:
    edx = MEM32(ebp + (-0x1A0)); /* 0x1506778C: mov edx, dword ptr [ebp - 0x1a0] */
    if (1) _cf = (((ecx) >> 29) & 1u); /* 0x15067792: shld ecx, edx, 3 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((ecx) << (3u)) | ((uint32_t)(edx) >> (32 - (3u)))) : (ecx)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ((1) ? (((ecx) << (3u)) | ((uint32_t)(edx) >> (32 - (3u)))) : (ecx));
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x15067796: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x15067796: shl edx, 3 */
    MEM32(ebp + (-0x18C)) = ecx; /* 0x15067799: mov dword ptr [ebp - 0x18c], ecx */
    MEM32(ebp + (-0x1A0)) = edx; /* 0x1506779F: mov dword ptr [ebp - 0x1a0], edx */
    goto L_1506781F; /* 0x150677A5: jmp 0x1506781f */
L_150677A7:
    SET_LO8(eax, 1); /* 0x150677A7: mov al, 1 */
    MEM8(ebp + (-0x165)) = (uint8_t)(LO8(eax)); /* 0x150677A9: mov byte ptr [ebp - 0x165], al */
    goto L_15067825; /* 0x150677AF: jmp 0x15067825 */
L_150677B1:
    eax = MEM32(ebp + (-0x18C)); /* 0x150677B1: mov eax, dword ptr [ebp - 0x18c] */
    PUSH32(esp, 0xAu); /* 0x150677B7: push 0xa */
    edx = POP32_VAL(esp); /* 0x150677B9: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x150677BA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, 0xAu); /* 0x150677BC: push 0xa */
    ecx = eax; /* 0x150677BE: mov ecx, eax */
    eax = MEM32(ebp + (-0x1A0)); /* 0x150677C0: mov eax, dword ptr [ebp - 0x1a0] */
    edx = POP32_VAL(esp); /* 0x150677C6: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x150677C7: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x150677C9: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1A0)) = eax; /* 0x150677CB: mov dword ptr [ebp - 0x1a0], eax */
    MEM32(ebp + (-0x18C)) = ecx; /* 0x150677D1: mov dword ptr [ebp - 0x18c], ecx */
    goto L_1506781F; /* 0x150677D7: jmp 0x1506781f */
L_150677D9:
    eax = (uint32_t)LO8(ebx); /* 0x150677D9: movzx eax, bl */
    PUSH32(esp, eax); /* 0x150677DC: push eax */
    RECOMP_CALL(sub_150301F0); /* 0x150677DD: call 0x150301f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150677E2: pop ecx */
    /* test eax, eax */ /* 0x150677E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506787B; /* 0x150677E5: je 0x1506787b */
L_150677EB:
    ecx = MEM32(ebp + (-0x1A0)); /* 0x150677EB: mov ecx, dword ptr [ebp - 0x1a0] */
    eax = MEM32(ebp + (-0x18C)); /* 0x150677F1: mov eax, dword ptr [ebp - 0x18c] */
    if (1) _cf = (((eax) >> 28) & 1u); /* 0x150677F7: shld eax, ecx, 4 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) << (4u)) | ((uint32_t)(ecx) >> (32 - (4u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) << (4u)) | ((uint32_t)(ecx) >> (32 - (4u)))) : (eax));
    PUSH32(esp, ebx); /* 0x150677FB: push ebx */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x150677FC: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x150677FC: shl ecx, 4 */
    MEM32(ebp + (-0x18C)) = eax; /* 0x150677FF: mov dword ptr [ebp - 0x18c], eax */
    MEM32(ebp + (-0x1A0)) = ecx; /* 0x15067805: mov dword ptr [ebp - 0x1a0], ecx */
    RECOMP_CALL(sub_15066ADB); /* 0x1506780B: call 0x15066adb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067810: pop ecx */
    ecx = MEM32(ebp + (-0x18C)); /* 0x15067811: mov ecx, dword ptr [ebp - 0x18c] */
    ebx = eax; /* 0x15067817: mov ebx, eax */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067819: mov dword ptr [ebp - 0x178], ebx */
L_1506781F:
    SET_LO8(eax, MEM8(ebp + (-0x165))); /* 0x1506781F: mov al, byte ptr [ebp - 0x165] */
L_15067825:
    /* test LO8(eax), LO8(eax) */ /* 0x15067825: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506787B; /* 0x15067827: jne 0x1506787b */
L_15067829:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1A4)) = MEM32(ebp + (-0x1A4)) + 1; /* 0x15067829: inc dword ptr [ebp - 0x1a4] */
    _flag_k = FK_INC;
    eax = ebx + (-0x30); /* 0x1506782F: lea eax, [ebx - 0x30] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15067832: cdq  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A0))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1A0)) = MEM32(ebp + (-0x1A0)) + eax; /* 0x15067833: add dword ptr [ebp - 0x1a0], eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = ecx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15067839: adc ecx, edx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(ebp + (-0x1A8)), 0 */ /* 0x1506783B: cmp dword ptr [ebp - 0x1a8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18C)) = ecx; /* 0x15067842: mov dword ptr [ebp - 0x18c], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506784F; /* 0x15067848: je 0x1506784f */
L_1506784A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1506784A: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150678A1; /* 0x1506784D: je 0x150678a1 */
L_1506784F:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x1506784F: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15067855: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = edi; /* 0x15067856: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x1506785C: mov dword ptr [ebp - 0x184], edi */
    RECOMP_CALL(sub_15066B08); /* 0x15067862: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1AC)); /* 0x15067867: mov edx, dword ptr [ebp - 0x1ac] */
    ebx = eax; /* 0x1506786D: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1506786F: pop ecx */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067870: mov dword ptr [ebp - 0x178], ebx */
    RECOMP_BACKEDGE();
    goto L_1506775C; /* 0x15067876: jmp 0x1506775c */
L_1506787B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1506787B: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = edi; /* 0x1506787C: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x15067882: mov dword ptr [ebp - 0x184], edi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15067888: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506789B; /* 0x1506788B: je 0x1506789b */
L_1506788D:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x1506788D: push dword ptr [ebp - 0x174] */
    PUSH32(esp, ebx); /* 0x15067893: push ebx */
    RECOMP_CALL(sub_1507E10C); /* 0x15067894: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067899: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506789A: pop ecx */
L_1506789B:
    ecx = MEM32(ebp + (-0x18C)); /* 0x1506789B: mov ecx, dword ptr [ebp - 0x18c] */
L_150678A1:
    /* cmp MEM8(ebp + (-0x185)), 0 */ /* 0x150678A1: cmp byte ptr [ebp - 0x185], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x185))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150679D8; /* 0x150678A8: je 0x150679d8 */
L_150678AE:
    eax = MEM32(ebp + (-0x1A0)); /* 0x150678AE: mov eax, dword ptr [ebp - 0x1a0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150678B4: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1A0)) = eax; /* 0x150678B6: mov dword ptr [ebp - 0x1a0], eax */
    { uint32_t _aa = ecx, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150678BC: adc ecx, 0 */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x150678BF: neg ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18C)) = ecx; /* 0x150678C1: mov dword ptr [ebp - 0x18c], ecx */
    goto L_150679D8; /* 0x150678C7: jmp 0x150679d8 */
L_150678CC:
    /* test LO8(eax), LO8(eax) */ /* 0x150678CC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150679C1; /* 0x150678CE: jne 0x150679c1 */
L_150678D4:
    /* cmp edx, 0x78u */ /* 0x150678D4: cmp edx, 0x78 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067922; /* 0x150678D7: je 0x15067922 */
L_150678D9:
    /* cmp edx, 0x70u */ /* 0x150678D9: cmp edx, 0x70 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067922; /* 0x150678DC: je 0x15067922 */
L_150678DE:
    eax = (uint32_t)LO8(ebx); /* 0x150678DE: movzx eax, bl */
    PUSH32(esp, eax); /* 0x150678E1: push eax */
    RECOMP_CALL(sub_15030030); /* 0x150678E2: call 0x15030030 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150678E7: pop ecx */
    /* test eax, eax */ /* 0x150678E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150679A1; /* 0x150678EA: je 0x150679a1 */
L_150678F0:
    /* cmp MEM32(ebp + (-0x1AC)), 0x6Fu */ /* 0x150678F0: cmp dword ptr [ebp - 0x1ac], 0x6f */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1AC))); _flag_b = (uint32_t)(0x6Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067919; /* 0x150678F7: jne 0x15067919 */
L_150678F9:
    ecx = MEM32(ebp + (-0x19C)); /* 0x150678F9: mov ecx, dword ptr [ebp - 0x19c] */
    /* cmp ebx, 0x38u */ /* 0x150678FF: cmp ebx, 0x38 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1506790F; /* 0x15067902: jge 0x1506790f */
L_15067904:
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x15067904: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x15067904: shl ecx, 3 */
L_15067907:
    MEM32(ebp + (-0x19C)) = ecx; /* 0x15067907: mov dword ptr [ebp - 0x19c], ecx */
    goto L_1506794C; /* 0x1506790D: jmp 0x1506794c */
L_1506790F:
    SET_LO8(eax, 1); /* 0x1506790F: mov al, 1 */
    MEM8(ebp + (-0x165)) = (uint8_t)(LO8(eax)); /* 0x15067911: mov byte ptr [ebp - 0x165], al */
    goto L_15067952; /* 0x15067917: jmp 0x15067952 */
L_15067919:
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x19C)) * (int32_t)0xAu); /* 0x15067919: imul ecx, dword ptr [ebp - 0x19c], 0xa */
    RECOMP_BACKEDGE();
    goto L_15067907; /* 0x15067920: jmp 0x15067907 */
L_15067922:
    eax = (uint32_t)LO8(ebx); /* 0x15067922: movzx eax, bl */
    PUSH32(esp, eax); /* 0x15067925: push eax */
    RECOMP_CALL(sub_150301F0); /* 0x15067926: call 0x150301f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506792B: pop ecx */
    /* test eax, eax */ /* 0x1506792C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150679A1; /* 0x1506792E: je 0x150679a1 */
L_15067930:
    if (4u) _cf = (((MEM32(ebp + (-0x19C))) >> 28) & 1u); /* 0x15067930: shl dword ptr [ebp - 0x19c], 4 */
    if (4u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x19C)) << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x19C)) = MEM32(ebp + (-0x19C)) << 4u; /* 0x15067930: shl dword ptr [ebp - 0x19c], 4 */
    PUSH32(esp, ebx); /* 0x15067937: push ebx */
    RECOMP_CALL(sub_15066ADB); /* 0x15067938: call 0x15066adb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506793D: pop ecx */
    ecx = MEM32(ebp + (-0x19C)); /* 0x1506793E: mov ecx, dword ptr [ebp - 0x19c] */
    ebx = eax; /* 0x15067944: mov ebx, eax */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067946: mov dword ptr [ebp - 0x178], ebx */
L_1506794C:
    SET_LO8(eax, MEM8(ebp + (-0x165))); /* 0x1506794C: mov al, byte ptr [ebp - 0x165] */
L_15067952:
    /* test LO8(eax), LO8(eax) */ /* 0x15067952: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150679A1; /* 0x15067954: jne 0x150679a1 */
L_15067956:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1A4)) = MEM32(ebp + (-0x1A4)) + 1; /* 0x15067956: inc dword ptr [ebp - 0x1a4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFD0u; /* 0x1506795C: add ecx, -0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1506795F: add ecx, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x1A8)), 0 */ /* 0x15067961: cmp dword ptr [ebp - 0x1a8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x19C)) = ecx; /* 0x15067968: mov dword ptr [ebp - 0x19c], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067975; /* 0x1506796E: je 0x15067975 */
L_15067970:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15067970: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150679C7; /* 0x15067973: je 0x150679c7 */
L_15067975:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067975: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1506797B: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = edi; /* 0x1506797C: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x15067982: mov dword ptr [ebp - 0x184], edi */
    RECOMP_CALL(sub_15066B08); /* 0x15067988: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x1AC)); /* 0x1506798D: mov edx, dword ptr [ebp - 0x1ac] */
    ebx = eax; /* 0x15067993: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15067995: pop ecx */
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067996: mov dword ptr [ebp - 0x178], ebx */
    RECOMP_BACKEDGE();
    goto L_150678D4; /* 0x1506799C: jmp 0x150678d4 */
L_150679A1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150679A1: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x190)) = edi; /* 0x150679A2: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x150679A8: mov dword ptr [ebp - 0x184], edi */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x150679AE: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150679C1; /* 0x150679B1: je 0x150679c1 */
L_150679B3:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x150679B3: push dword ptr [ebp - 0x174] */
    PUSH32(esp, ebx); /* 0x150679B9: push ebx */
    RECOMP_CALL(sub_1507E10C); /* 0x150679BA: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150679BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150679C0: pop ecx */
L_150679C1:
    ecx = MEM32(ebp + (-0x19C)); /* 0x150679C1: mov ecx, dword ptr [ebp - 0x19c] */
L_150679C7:
    /* cmp MEM8(ebp + (-0x185)), 0 */ /* 0x150679C7: cmp byte ptr [ebp - 0x185], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x185))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150679D8; /* 0x150679CE: je 0x150679d8 */
L_150679D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x150679D0: neg ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x19C)) = ecx; /* 0x150679D2: mov dword ptr [ebp - 0x19c], ecx */
L_150679D8:
    /* cmp MEM32(ebp + (-0x1A4)), 0 */ /* 0x150679D8: cmp dword ptr [ebp - 0x1a4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1A4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067B7F; /* 0x150679DF: je 0x15067b7f */
L_150679E5:
    /* cmp MEM8(ebp + (-0x166)), 0 */ /* 0x150679E5: cmp byte ptr [ebp - 0x166], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x166))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067A39; /* 0x150679EC: jne 0x15067a39 */
L_150679EE:
    edx = MEM32(ebp + (-0x17C)); /* 0x150679EE: mov edx, dword ptr [ebp - 0x17c] */
    ecx = MEM32(ebp + (-0x19C)); /* 0x150679F4: mov ecx, dword ptr [ebp - 0x19c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150679FA: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x17C)) = edx; /* 0x150679FB: mov dword ptr [ebp - 0x17c], edx */
    MEM32(ebp + (-0x1CC)) = edx; /* 0x15067A01: mov dword ptr [ebp - 0x1cc], edx */
L_15067A07:
    /* cmp MEM32(ebp + (-0x1B4)), 0 */ /* 0x15067A07: cmp dword ptr [ebp - 0x1b4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1B4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1B8)); /* 0x15067A0E: mov eax, dword ptr [ebp - 0x1b8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067A29; /* 0x15067A14: je 0x15067a29 */
L_15067A16:
    ecx = MEM32(ebp + (-0x1A0)); /* 0x15067A16: mov ecx, dword ptr [ebp - 0x1a0] */
    MEM32(eax) = ecx; /* 0x15067A1C: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x18C)); /* 0x15067A1E: mov ecx, dword ptr [ebp - 0x18c] */
    MEM32(eax + 0x4) = ecx; /* 0x15067A24: mov dword ptr [eax + 4], ecx */
    goto L_15067A39; /* 0x15067A27: jmp 0x15067a39 */
L_15067A29:
    /* cmp MEM8(ebp + (-0x169)), 0 */ /* 0x15067A29: cmp byte ptr [ebp - 0x169], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x169))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067A36; /* 0x15067A30: je 0x15067a36 */
L_15067A32:
    MEM32(eax) = ecx; /* 0x15067A32: mov dword ptr [eax], ecx */
    goto L_15067A39; /* 0x15067A34: jmp 0x15067a39 */
L_15067A36:
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15067A36: mov word ptr [eax], cx */
L_15067A39:
    SET_LO8(eax, MEM8(ebp + (-0x168))); /* 0x15067A39: mov al, byte ptr [ebp - 0x168] */
L_15067A3F:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x15067A3F: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebp + (-0x168)) = (uint8_t)(LO8(eax)); /* 0x15067A41: mov byte ptr [ebp - 0x168], al */
    eax = MEM32(ebp + (-0x170)); /* 0x15067A47: mov eax, dword ptr [ebp - 0x170] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15067A4D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x170)) = eax; /* 0x15067A4E: mov dword ptr [ebp - 0x170], eax */
    esi = eax; /* 0x15067A54: mov esi, eax */
    goto L_15067ACA; /* 0x15067A56: jmp 0x15067aca */
L_15067A58:
    eax = esi + 0x1; /* 0x15067A58: lea eax, [esi + 1] */
    /* cmp MEM8(eax), 0x25u */ /* 0x15067A5B: cmp byte ptr [eax], 0x25 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { esi = eax; } /* 0x15067A5E: cmove esi, eax */
L_15067A61:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067A61: push dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15067A67: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x190)) = edi; /* 0x15067A68: mov dword ptr [ebp - 0x190], edi */
    MEM32(ebp + (-0x184)) = edi; /* 0x15067A6E: mov dword ptr [ebp - 0x184], edi */
    RECOMP_CALL(sub_15066B08); /* 0x15067A74: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15067A79: mov ebx, eax */
    eax = (uint32_t)MEM8(esi); /* 0x15067A7B: movzx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15067A7E: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x178)) = ebx; /* 0x15067A7F: mov dword ptr [ebp - 0x178], ebx */
    MEM32(ebp + (-0x170)) = esi; /* 0x15067A85: mov dword ptr [ebp - 0x170], esi */
    ecx = POP32_VAL(esp); /* 0x15067A8B: pop ecx */
    /* cmp eax, ebx */ /* 0x15067A8C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067B6C; /* 0x15067A8E: jne 0x15067b6c */
L_15067A94:
    eax = (uint32_t)LO8(ebx); /* 0x15067A94: movzx eax, bl */
    PUSH32(esp, eax); /* 0x15067A97: push eax */
    RECOMP_CALL(sub_150316F0); /* 0x15067A98: call 0x150316f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067A9D: pop ecx */
    /* test eax, eax */ /* 0x15067A9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067AC4; /* 0x15067AA0: je 0x15067ac4 */
L_15067AA2:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067AA2: push dword ptr [ebp - 0x174] */
    RECOMP_CALL(sub_15066B08); /* 0x15067AA8: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x15067AAD: mov edx, esi */
    ecx = POP32_VAL(esp); /* 0x15067AAF: pop ecx */
    ecx = (uint32_t)MEM8(edx); /* 0x15067AB0: movzx ecx, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15067AB3: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x170)) = edx; /* 0x15067AB4: mov dword ptr [ebp - 0x170], edx */
    esi = edx; /* 0x15067ABA: mov esi, edx */
    /* cmp ecx, eax */ /* 0x15067ABC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067B4F; /* 0x15067ABE: jne 0x15067b4f */
L_15067AC4:
    eax = MEM32(ebp + (-0x170)); /* 0x15067AC4: mov eax, dword ptr [ebp - 0x170] */
L_15067ACA:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15067ACA: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067AE2; /* 0x15067ACD: jne 0x15067ae2 */
L_15067ACF:
    /* cmp MEM8(eax), 0x25u */ /* 0x15067ACF: cmp byte ptr [eax], 0x25 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067B7F; /* 0x15067AD2: jne 0x15067b7f */
L_15067AD8:
    /* cmp MEM8(esi + 0x1), 0x6Eu */ /* 0x15067AD8: cmp byte ptr [esi + 1], 0x6e */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0x6Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067B7F; /* 0x15067ADC: jne 0x15067b7f */
L_15067AE2:
    esi = MEM32(ebp + (-0x170)); /* 0x15067AE2: mov esi, dword ptr [ebp - 0x170] */
L_15067AE8:
    SET_LO8(eax, MEM8(esi)); /* 0x15067AE8: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15067AEA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067B7F; /* 0x15067AEC: je 0x15067b7f */
L_15067AF2:
    edx = MEM32(ebp + (-0x1C8)); /* 0x15067AF2: mov edx, dword ptr [ebp - 0x1c8] */
    RECOMP_BACKEDGE();
    goto L_15066C1F; /* 0x15067AF8: jmp 0x15066c1f */
L_15067AFD:
    /* cmp MEM8(ebp + (-0x167)), 0 */ /* 0x15067AFD: cmp byte ptr [ebp - 0x167], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x167))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ebp + (-0x1B8)); /* 0x15067B04: mov eax, dword ptr [ebp - 0x1b8] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_15067B13; /* 0x15067B0A: jle 0x15067b13 */
L_15067B0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15067B0C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15067B0E: mov word ptr [eax], cx */
    goto L_15067B16; /* 0x15067B11: jmp 0x15067b16 */
L_15067B13:
    MEM8(eax) = (uint8_t)(0); /* 0x15067B13: mov byte ptr [eax], 0 */
L_15067B16:
    RECOMP_CALL(sub_15036430); /* 0x15067B16: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15067B1B: mov dword ptr [eax], 0xc */
    goto L_15067B7F; /* 0x15067B21: jmp 0x15067b7f */
L_15067B23:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15067B23: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067B36; /* 0x15067B26: je 0x15067b36 */
L_15067B28:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067B28: push dword ptr [ebp - 0x174] */
    PUSH32(esp, ebx); /* 0x15067B2E: push ebx */
    RECOMP_CALL(sub_1507E10C); /* 0x15067B2F: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067B34: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15067B35: pop ecx */
L_15067B36:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15067B36: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15067B38: inc edi */
    _flag_k = FK_INC;
    goto L_15067B85; /* 0x15067B39: jmp 0x15067b85 */
L_15067B3B:
    esi = MEM32(ebp + (-0x1CC)); /* 0x15067B3B: mov esi, dword ptr [ebp - 0x1cc] */
    edi = MEM32(ebp + (-0x194)); /* 0x15067B41: mov edi, dword ptr [ebp - 0x194] */
    MEM32(ebp + (-0x17C)) = esi; /* 0x15067B47: mov dword ptr [ebp - 0x17c], esi */
    goto L_15067B8B; /* 0x15067B4D: jmp 0x15067b8b */
L_15067B4F:
    esi = MEM32(ebp + (-0x174)); /* 0x15067B4F: mov esi, dword ptr [ebp - 0x174] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15067B55: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x15067B58: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067B65; /* 0x15067B5A: je 0x15067b65 */
L_15067B5C:
    PUSH32(esp, esi); /* 0x15067B5C: push esi */
    PUSH32(esp, eax); /* 0x15067B5D: push eax */
    RECOMP_CALL(sub_1507E10C); /* 0x15067B5E: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067B63: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15067B64: pop ecx */
L_15067B65:
    /* cmp ebx, edi */ /* 0x15067B65: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067B7F; /* 0x15067B67: je 0x15067b7f */
L_15067B69:
    PUSH32(esp, esi); /* 0x15067B69: push esi */
    goto L_15067B77; /* 0x15067B6A: jmp 0x15067b77 */
L_15067B6C:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x15067B6C: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067B7F; /* 0x15067B6F: je 0x15067b7f */
L_15067B71:
    PUSH32(esp, MEM32(ebp + (-0x174))); /* 0x15067B71: push dword ptr [ebp - 0x174] */
L_15067B77:
    PUSH32(esp, ebx); /* 0x15067B77: push ebx */
    RECOMP_CALL(sub_1507E10C); /* 0x15067B78: call 0x1507e10c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067B7D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15067B7E: pop ecx */
L_15067B7F:
    edi = MEM32(ebp + (-0x194)); /* 0x15067B7F: mov edi, dword ptr [ebp - 0x194] */
L_15067B85:
    esi = MEM32(ebp + (-0x17C)); /* 0x15067B85: mov esi, dword ptr [ebp - 0x17c] */
L_15067B8B:
    /* cmp MEM32(ebp + (-0x1C0)), 1 */ /* 0x15067B8B: cmp dword ptr [ebp - 0x1c0], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C0))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067BA0; /* 0x15067B92: jne 0x15067ba0 */
L_15067B94:
    PUSH32(esp, MEM32(ebp + (-0x198))); /* 0x15067B94: push dword ptr [ebp - 0x198] */
    RECOMP_CALL(sub_15048840); /* 0x15067B9A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067B9F: pop ecx */
L_15067BA0:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15067BA0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, eax */ /* 0x15067BA3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067BB6; /* 0x15067BA5: jne 0x15067bb6 */
L_15067BA7:
    /* test esi, esi */ /* 0x15067BA7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067BD5; /* 0x15067BA9: jne 0x15067bd5 */
L_15067BAB:
    /* cmp MEM8(ebp + (-0x168)), 0 */ /* 0x15067BAB: cmp byte ptr [ebp - 0x168], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x168))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067BE1; /* 0x15067BB2: je 0x15067be1 */
L_15067BB4:
    goto L_15067BD5; /* 0x15067BB4: jmp 0x15067bd5 */
L_15067BB6:
    /* cmp edi, 1 */ /* 0x15067BB6: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067BD9; /* 0x15067BB9: jne 0x15067bd9 */
L_15067BBB:
    RECOMP_CALL(sub_15036430); /* 0x15067BBB: call 0x15036430 */
    RECOMP_FLAGS_IN();
L_15067BC0:
    MEM32(eax) = 0x16u; /* 0x15067BC0: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15067BC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15067BC8: push eax */
    PUSH32(esp, eax); /* 0x15067BC9: push eax */
    PUSH32(esp, eax); /* 0x15067BCA: push eax */
    PUSH32(esp, eax); /* 0x15067BCB: push eax */
    PUSH32(esp, eax); /* 0x15067BCC: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15067BCD: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15067BD2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15067BD5:
    eax = esi; /* 0x15067BD5: mov eax, esi */
    goto L_15067BE1; /* 0x15067BD7: jmp 0x15067be1 */
L_15067BD9:
    ecx = MEM32(ebp + (-0x17C)); /* 0x15067BD9: mov ecx, dword ptr [ebp - 0x17c] */
L_15067BDF:
    eax = ecx; /* 0x15067BDF: mov eax, ecx */
L_15067BE1:
    edi = POP32_VAL(esp); /* 0x15067BE1: pop edi */
L_15067BE2:
    ecx = MEM32(ebp + (-0x4)); /* 0x15067BE2: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x15067BE5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15067BE6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15067BE8: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15067BE9: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15067BEE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067BEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_15067BF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15067BF6u);

L_15067BF6:
    edi = edi; /* 0x15067BF6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15067BF8: push ebp */
    ebp = esp; /* 0x15067BF9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15067BFB: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15067BFE: sub esp, 0x20 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x15067C01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067C24; /* 0x15067C03: jne 0x15067c24 */
L_15067C05:
    RECOMP_CALL(sub_15036430); /* 0x15067C05: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15067C0A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15067C10: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15067C12: push eax */
    PUSH32(esp, eax); /* 0x15067C13: push eax */
    PUSH32(esp, eax); /* 0x15067C14: push eax */
    PUSH32(esp, eax); /* 0x15067C15: push eax */
    PUSH32(esp, eax); /* 0x15067C16: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15067C17: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15067C1C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15067C1F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15067C22: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067C23: ret  */
L_15067C24:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15067C24: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067C05; /* 0x15067C28: je 0x15067c05 */
L_15067C2A:
    ecx = MEM32(ebp + 0xC); /* 0x15067C2A: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0x7FFFFFFFu */ /* 0x15067C2D: cmp ecx, 0x7fffffff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15067C05; /* 0x15067C33: ja 0x15067c05 */
L_15067C35:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15067C35: push dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15067C38: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15067C3B: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15067C3E: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x20); /* 0x15067C41: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15067C44: push eax */
    MEM32(ebp + (-0x14)) = 0x49u; /* 0x15067C45: mov dword ptr [ebp - 0x14], 0x49 */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x15067C4C: mov dword ptr [ebp - 0x1c], ecx */
    RECOMP_CALL(sub_15066B33); /* 0x15067C4F: call 0x15066b33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15067C54: add esp, 0xc */
    _flag_k = FK_ADD;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15067C57: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067C58: ret  */
    RECOMP_REGS_OUT();
}

void sub_15067C5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15067C5Fu);

L_15067C5F:
    PUSH32(esp, 0xCu); /* 0x15067C5F: push 0xc */
    PUSH32(esp, 0x150B0D88u); /* 0x15067C61: push 0x150b0d88 */
    RECOMP_CALL(sub_1505E988); /* 0x15067C66: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) | 0xFFFFFFFFu; /* 0x15067C6B: or dword ptr [ebp - 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15067C6F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15067C73: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15067C76: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x150BC600u); /* 0x15067C79: push 0x150bc600 */
    RECOMP_CALL(sub_15066B33); /* 0x15067C7E: call 0x15066b33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15067C83: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x15067C86: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15067C89: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15067CA8); /* 0x15067C90: call 0x15067ca8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x15067C95: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15067C98: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15067C9F: pop ecx */
    edi = POP32_VAL(esp); /* 0x15067CA0: pop edi */
    esi = POP32_VAL(esp); /* 0x15067CA1: pop esi */
    ebx = POP32_VAL(esp); /* 0x15067CA2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15067CA3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067CA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15067CA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15067CA8u);

L_15067CA8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067CA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_15067CAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15067CAFu);

L_15067CAF:
    edi = edi; /* 0x15067CAF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15067CB1: push ebp */
    ebp = esp; /* 0x15067CB2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15067CB4: push esi */
    PUSH32(esp, edi); /* 0x15067CB5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15067CB6: mov edi, dword ptr [ebp + 8] */
L_15067CB9:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15067CB9: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x15067CBC: inc dword ptr [edi] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_15066B08); /* 0x15067CBE: call 0x15066b08 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15067CC3: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15067CC5: pop ecx */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15067CC6: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067CD6; /* 0x15067CC9: je 0x15067cd6 */
L_15067CCB:
    PUSH32(esp, esi); /* 0x15067CCB: push esi */
    RECOMP_CALL(sub_15030170); /* 0x15067CCC: call 0x15030170 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067CD1: pop ecx */
    /* test eax, eax */ /* 0x15067CD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067CB9; /* 0x15067CD4: jne 0x15067cb9 */
L_15067CD6:
    edi = POP32_VAL(esp); /* 0x15067CD6: pop edi */
    eax = esi; /* 0x15067CD7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15067CD9: pop esi */
    ebp = POP32_VAL(esp); /* 0x15067CDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067CDB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15067CE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15067CE2u);

L_15067CE2:
    edi = edi; /* 0x15067CE2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15067CE4: push ebp */
    ebp = esp; /* 0x15067CE5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15067CE7: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15067CEA: push esi */
    PUSH32(esp, edi); /* 0x15067CEB: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15067CEC: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15067CEF: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x15067CF0: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067CF5: pop ecx */
    esi = edi + 0xC; /* 0x15067CF6: lea esi, [edi + 0xc] */
    edx = eax; /* 0x15067CF9: mov edx, eax */
    ecx = MEM32(esi); /* 0x15067CFB: mov ecx, dword ptr [esi] */
    MEM32(ebp + (-0x8)) = edx; /* 0x15067CFD: mov dword ptr [ebp - 8], edx */
    /* test LO8(ecx), 0x82u */ /* 0x15067D00: test cl, 0x82 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067D1B; /* 0x15067D03: jne 0x15067d1b */
L_15067D05:
    RECOMP_CALL(sub_15036430); /* 0x15067D05: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15067D0A: mov dword ptr [eax], 9 */
L_15067D10:
    _flag_a = (uint32_t)((MEM32(esi) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi) | 0x20u));
    MEM32(esi) = MEM32(esi) | 0x20u; /* 0x15067D10: or dword ptr [esi], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15067D13: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15067E73; /* 0x15067D16: jmp 0x15067e73 */
L_15067D1B:
    /* test LO8(ecx), 0x40u */ /* 0x15067D1B: test cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067D2D; /* 0x15067D1E: je 0x15067d2d */
L_15067D20:
    RECOMP_CALL(sub_15036430); /* 0x15067D20: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x15067D25: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_15067D10; /* 0x15067D2B: jmp 0x15067d10 */
L_15067D2D:
    PUSH32(esp, ebx); /* 0x15067D2D: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15067D2E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ecx), 1 */ /* 0x15067D30: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067D45; /* 0x15067D33: je 0x15067d45 */
L_15067D35:
    MEM32(edi + 0x4) = ebx; /* 0x15067D35: mov dword ptr [edi + 4], ebx */
    /* test LO8(ecx), 0x10u */ /* 0x15067D38: test cl, 0x10 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067D90; /* 0x15067D3B: je 0x15067d90 */
L_15067D3D:
    eax = MEM32(edi + 0x8); /* 0x15067D3D: mov eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x15067D40: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x15067D43: mov dword ptr [edi], eax */
L_15067D45:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFEFu);
    ecx = ecx & 0xFFFFFFEFu; /* 0x15067D45: and ecx, 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4) = ebx; /* 0x15067D48: mov dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x15067D4B: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x15067D4E: mov dword ptr [esi], ecx */
    /* test ecx, 0x10Cu */ /* 0x15067D50: test ecx, 0x10c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067DA0; /* 0x15067D56: jne 0x15067da0 */
L_15067D58:
    /* cmp edi, 0x150BC620u */ /* 0x15067D58: cmp edi, 0x150bc620 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x150BC620u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067D68; /* 0x15067D5E: je 0x15067d68 */
L_15067D60:
    /* cmp edi, 0x150BC640u */ /* 0x15067D60: cmp edi, 0x150bc640 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x150BC640u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067D73; /* 0x15067D66: jne 0x15067d73 */
L_15067D68:
    PUSH32(esp, edx); /* 0x15067D68: push edx */
    RECOMP_CALL(sub_1504C2F0); /* 0x15067D69: call 0x1504c2f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067D6E: pop ecx */
    /* test eax, eax */ /* 0x15067D6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067D9A; /* 0x15067D71: jne 0x15067d9a */
L_15067D73:
    RECOMP_CALL(sub_15036430); /* 0x15067D73: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15067D78: push ebx */
    PUSH32(esp, ebx); /* 0x15067D79: push ebx */
    PUSH32(esp, ebx); /* 0x15067D7A: push ebx */
    PUSH32(esp, ebx); /* 0x15067D7B: push ebx */
    PUSH32(esp, ebx); /* 0x15067D7C: push ebx */
    MEM32(eax) = 0x16u; /* 0x15067D7D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15067D83: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15067D88: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15067E69; /* 0x15067D8B: jmp 0x15067e69 */
L_15067D90:
    _flag_a = (uint32_t)((ecx | 0x20u)); _flag_b = (uint32_t)((ecx | 0x20u));
    ecx = ecx | 0x20u; /* 0x15067D90: or ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x15067D93: mov dword ptr [esi], ecx */
    goto L_15067E69; /* 0x15067D95: jmp 0x15067e69 */
L_15067D9A:
    edx = MEM32(ebp + (-0x8)); /* 0x15067D9A: mov edx, dword ptr [ebp - 8] */
    esi = edi + 0xC; /* 0x15067D9D: lea esi, [edi + 0xc] */
L_15067DA0:
    /* test MEM32(esi), 0x108u */ /* 0x15067DA0: test dword ptr [esi], 0x108 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x108u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067E4F; /* 0x15067DA6: je 0x15067e4f */
L_15067DAC:
    ecx = edi + 0x8; /* 0x15067DAC: lea ecx, [edi + 8] */
    eax = MEM32(ecx); /* 0x15067DAF: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15067DB1: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi); /* 0x15067DB4: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx); /* 0x15067DB6: sub eax, dword ptr [ecx] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x15067DB8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x15067DBB: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15067DBD: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x15067DBE: mov dword ptr [ebp - 8], ecx */
    MEM32(edi) = eax; /* 0x15067DC1: mov dword ptr [edi], eax */
    eax = MEM32(edi + 0x18); /* 0x15067DC3: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15067DC6: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi + 0x4) = eax; /* 0x15067DC7: mov dword ptr [edi + 4], eax */
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x15067DCA: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15067DE3; /* 0x15067DCD: jle 0x15067de3 */
L_15067DCF:
    edi = MEM32(ebp + (-0x4)); /* 0x15067DCF: mov edi, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x15067DD2: push edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x15067DD3: push dword ptr [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x15067DD6: push edx */
    RECOMP_CALL(sub_1504EDD0); /* 0x15067DD7: call 0x1504edd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15067DDC: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x15067DDF: mov ebx, eax */
    goto L_15067E43; /* 0x15067DE1: jmp 0x15067e43 */
L_15067DE3:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x15067DE3: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067E0C; /* 0x15067DE6: je 0x15067e0c */
L_15067DE8:
    esi = edi + 0xC; /* 0x15067DE8: lea esi, [edi + 0xc] */
    /* cmp edx, 0xFFFFFFFEu */ /* 0x15067DEB: cmp edx, -2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067E09; /* 0x15067DEE: je 0x15067e09 */
L_15067DF0:
    eax = edx; /* 0x15067DF0: mov eax, edx */
    ecx = edx; /* 0x15067DF2: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15067DF4: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x15067DF7: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x15067DFA: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx * 4 + 0x150BEBC0); /* 0x15067DFD: add eax, dword ptr [ecx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
    ecx = edi + 0x8; /* 0x15067E04: lea ecx, [edi + 8] */
    goto L_15067E11; /* 0x15067E07: jmp 0x15067e11 */
L_15067E09:
    ecx = edi + 0x8; /* 0x15067E09: lea ecx, [edi + 8] */
L_15067E0C:
    eax = 0x150BCEA0u; /* 0x15067E0C: mov eax, 0x150bcea0 */
L_15067E11:
    /* test MEM8(eax + 0x4), 0x20u */ /* 0x15067E11: test byte ptr [eax + 4], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x8)) = ecx; /* 0x15067E15: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xC)) = esi; /* 0x15067E18: mov dword ptr [ebp - 0xc], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067E40; /* 0x15067E1B: je 0x15067e40 */
L_15067E1D:
    PUSH32(esp, 2); /* 0x15067E1D: push 2 */
    PUSH32(esp, ebx); /* 0x15067E1F: push ebx */
    PUSH32(esp, ebx); /* 0x15067E20: push ebx */
    PUSH32(esp, edx); /* 0x15067E21: push edx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15067E22: mov dword ptr [ebp - 8], ecx */
    RECOMP_CALL(sub_1504C6A0); /* 0x15067E25: call 0x1504c6a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x15067E2A: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15067E2C: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15067E2F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067E40; /* 0x15067E32: jne 0x15067e40 */
L_15067E34:
    ecx = MEM32(edi + 0xC); /* 0x15067E34: mov ecx, dword ptr [edi + 0xc] */
    eax = esi; /* 0x15067E37: mov eax, esi */
    _flag_a = (uint32_t)((ecx | 0x20u)); _flag_b = (uint32_t)((ecx | 0x20u));
    ecx = ecx | 0x20u; /* 0x15067E39: or ecx, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x15067E3C: mov dword ptr [eax], ecx */
    goto L_15067E69; /* 0x15067E3E: jmp 0x15067e69 */
L_15067E40:
    edi = MEM32(ebp + (-0x4)); /* 0x15067E40: mov edi, dword ptr [ebp - 4] */
L_15067E43:
    ecx = MEM32(ebp + (-0x8)); /* 0x15067E43: mov ecx, dword ptr [ebp - 8] */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x15067E46: mov al, byte ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x15067E49: mov ecx, dword ptr [ecx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x15067E4B: mov byte ptr [ecx], al */
    goto L_15067E62; /* 0x15067E4D: jmp 0x15067e62 */
L_15067E4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15067E4F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x8; /* 0x15067E51: lea eax, [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15067E54: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x15067E55: push edi */
    PUSH32(esp, eax); /* 0x15067E56: push eax */
    PUSH32(esp, edx); /* 0x15067E57: push edx */
    RECOMP_CALL(sub_1504EDD0); /* 0x15067E58: call 0x1504edd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15067E5D: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x15067E60: mov ebx, eax */
L_15067E62:
    /* cmp ebx, edi */ /* 0x15067E62: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067E6E; /* 0x15067E64: je 0x15067e6e */
L_15067E66:
    _flag_a = (uint32_t)((MEM32(esi) | 0x20u)); _flag_b = (uint32_t)((MEM32(esi) | 0x20u));
    MEM32(esi) = MEM32(esi) | 0x20u; /* 0x15067E66: or dword ptr [esi], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15067E69:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15067E69: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15067E72; /* 0x15067E6C: jmp 0x15067e72 */
L_15067E6E:
    eax = (uint32_t)MEM8(ebp + 0x8); /* 0x15067E6E: movzx eax, byte ptr [ebp + 8] */
L_15067E72:
    ebx = POP32_VAL(esp); /* 0x15067E72: pop ebx */
L_15067E73:
    edi = POP32_VAL(esp); /* 0x15067E73: pop edi */
    esi = POP32_VAL(esp); /* 0x15067E74: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15067E75: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067E76: ret  */
    RECOMP_REGS_OUT();
}

void sub_15067E7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15067E7Du);

L_15067E7D:
    edi = edi; /* 0x15067E7D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15067E7F: push ebp */
    ebp = esp; /* 0x15067E80: mov ebp, esp */
    PUSH32(esp, edi); /* 0x15067E82: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15067E83: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15067E86: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067EA9; /* 0x15067E88: jne 0x15067ea9 */
L_15067E8A:
    RECOMP_CALL(sub_15036430); /* 0x15067E8A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15067E8F: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15067E95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15067E97: push eax */
    PUSH32(esp, eax); /* 0x15067E98: push eax */
    PUSH32(esp, eax); /* 0x15067E99: push eax */
    PUSH32(esp, eax); /* 0x15067E9A: push eax */
    PUSH32(esp, eax); /* 0x15067E9B: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15067E9C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15067EA1: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15067F9A; /* 0x15067EA4: jmp 0x15067f9a */
L_15067EA9:
    eax = MEM32(edi + 0xC); /* 0x15067EA9: mov eax, dword ptr [edi + 0xc] */
    /* test LO8(eax), 0x83u */ /* 0x15067EAC: test al, 0x83 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x83u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067F9A; /* 0x15067EAE: je 0x15067f9a */
L_15067EB4:
    /* test LO8(eax), 0x40u */ /* 0x15067EB4: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067F9A; /* 0x15067EB6: jne 0x15067f9a */
L_15067EBC:
    /* test LO8(eax), 2 */ /* 0x15067EBC: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067ECB; /* 0x15067EBE: je 0x15067ecb */
L_15067EC0:
    _flag_a = (uint32_t)((eax | 0x20u)); _flag_b = (uint32_t)((eax | 0x20u));
    eax = eax | 0x20u; /* 0x15067EC0: or eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC) = eax; /* 0x15067EC3: mov dword ptr [edi + 0xc], eax */
    goto L_15067F9A; /* 0x15067EC6: jmp 0x15067f9a */
L_15067ECB:
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x15067ECB: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC) = eax; /* 0x15067ECE: mov dword ptr [edi + 0xc], eax */
    /* test eax, 0x10Cu */ /* 0x15067ED1: test eax, 0x10c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10Cu);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067E8A; /* 0x15067ED6: je 0x15067e8a */
L_15067ED8:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x15067ED8: push dword ptr [edi + 0x18] */
    eax = MEM32(edi + 0x8); /* 0x15067EDB: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, eax); /* 0x15067EDE: push eax */
    PUSH32(esp, edi); /* 0x15067EDF: push edi */
    MEM32(edi) = eax; /* 0x15067EE0: mov dword ptr [edi], eax */
    RECOMP_CALL(sub_15076A90); /* 0x15067EE2: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067EE7: pop ecx */
    PUSH32(esp, eax); /* 0x15067EE8: push eax */
    RECOMP_CALL(sub_1504D790); /* 0x15067EE9: call 0x1504d790 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15067EEE: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x15067EF1: mov dword ptr [edi + 4], eax */
    /* test eax, eax */ /* 0x15067EF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15067F88; /* 0x15067EF6: je 0x15067f88 */
L_15067EFC:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15067EFC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067F88; /* 0x15067EFF: je 0x15067f88 */
L_15067F05:
    /* test MEM8(edi + 0xC), 0x82u */ /* 0x15067F05: test byte ptr [edi + 0xc], 0x82 */
    _flag_a = (uint32_t)(MEM8(edi + 0xC)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067F5E; /* 0x15067F09: jne 0x15067f5e */
L_15067F0B:
    PUSH32(esp, edi); /* 0x15067F0B: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x15067F0C: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067F11: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15067F12: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067F49; /* 0x15067F15: je 0x15067f49 */
L_15067F17:
    PUSH32(esp, edi); /* 0x15067F17: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x15067F18: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067F1D: pop ecx */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x15067F1E: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15067F49; /* 0x15067F21: je 0x15067f49 */
L_15067F23:
    PUSH32(esp, esi); /* 0x15067F23: push esi */
    PUSH32(esp, edi); /* 0x15067F24: push edi */
    RECOMP_CALL(sub_15076A90); /* 0x15067F25: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15067F2A: mov esi, eax */
    PUSH32(esp, edi); /* 0x15067F2C: push edi */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x15067F2D: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    RECOMP_CALL(sub_15076A90); /* 0x15067F30: call 0x15076a90 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15067F35: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15067F36: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15067F39: pop ecx */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x15067F3A: imul ecx, eax, 0xc */
    eax = MEM32(esi * 4 + 0x150BEBC0); /* 0x15067F3D: mov eax, dword ptr [esi*4 + 0x150bebc0] */
    esi = POP32_VAL(esp); /* 0x15067F44: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15067F45: add eax, ecx */
    _flag_k = FK_ADD;
    goto L_15067F4E; /* 0x15067F47: jmp 0x15067f4e */
L_15067F49:
    eax = 0x150BCEA0u; /* 0x15067F49: mov eax, 0x150bcea0 */
L_15067F4E:
    SET_LO8(eax, MEM8(eax + 0x4)); /* 0x15067F4E: mov al, byte ptr [eax + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    SET_LO8(eax, LO8(eax) & 0x82u); /* 0x15067F51: and al, 0x82 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 0x82u */ /* 0x15067F53: cmp al, 0x82 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x82u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067F5E; /* 0x15067F55: jne 0x15067f5e */
L_15067F57:
    _flag_a = (uint32_t)((MEM32(edi + 0xC) | 0x2000u)); _flag_b = (uint32_t)((MEM32(edi + 0xC) | 0x2000u));
    MEM32(edi + 0xC) = MEM32(edi + 0xC) | 0x2000u; /* 0x15067F57: or dword ptr [edi + 0xc], 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15067F5E:
    /* cmp MEM32(edi + 0x18), 0x200u */ /* 0x15067F5E: cmp dword ptr [edi + 0x18], 0x200 */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0x200u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067F7B; /* 0x15067F65: jne 0x15067f7b */
L_15067F67:
    eax = MEM32(edi + 0xC); /* 0x15067F67: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x408u);
    eax = eax & 0x408u; /* 0x15067F6A: and eax, 0x408 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 8 */ /* 0x15067F6F: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15067F7B; /* 0x15067F72: jne 0x15067f7b */
L_15067F74:
    MEM32(edi + 0x18) = 0x1000u; /* 0x15067F74: mov dword ptr [edi + 0x18], 0x1000 */
L_15067F7B:
    ecx = MEM32(edi); /* 0x15067F7B: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x15067F7D: dec dword ptr [edi + 4] */
    _flag_k = FK_DEC;
    eax = (uint32_t)MEM8(ecx); /* 0x15067F80: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15067F83: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi) = ecx; /* 0x15067F84: mov dword ptr [edi], ecx */
    goto L_15067F9D; /* 0x15067F86: jmp 0x15067f9d */
L_15067F88:
    PUSH32(esp, 0x10u); /* 0x15067F88: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x15067F8A: pop ecx */
    PUSH32(esp, 0x20u); /* 0x15067F8B: push 0x20 */
    /* test eax, eax */ /* 0x15067F8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = POP32_VAL(esp); /* 0x15067F8F: pop edx */
    if (TEST_NZ(_flag_a, _flag_b)) { ecx = edx; } /* 0x15067F90: cmovne ecx, edx */
    _flag_a = (uint32_t)((MEM32(edi + 0xC) | ecx)); _flag_b = (uint32_t)((MEM32(edi + 0xC) | ecx));
    MEM32(edi + 0xC) = MEM32(edi + 0xC) | ecx; /* 0x15067F93: or dword ptr [edi + 0xc], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) & 0; /* 0x15067F96: and dword ptr [edi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15067F9A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15067F9A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15067F9D:
    edi = POP32_VAL(esp); /* 0x15067F9D: pop edi */
    ebp = POP32_VAL(esp); /* 0x15067F9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067F9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15067FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15067FB0u);

L_15067FB0:
    edi = edi; /* 0x15067FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15067FB2: push ebp */
    ebp = esp; /* 0x15067FB3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15067FB5: push 0 */
    PUSH32(esp, 1); /* 0x15067FB7: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15067FB9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150684AA); /* 0x15067FBC: call 0x150684aa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15067FC1: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15067FC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15067FC5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15067FCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15067FCCu);

L_15067FCC:
    edi = edi; /* 0x15067FCC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15067FCE: push ebp */
    ebp = esp; /* 0x15067FCF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15067FD1: push ecx */
    PUSH32(esp, esi); /* 0x15067FD2: push esi */
    eax = ebp + (-0x4); /* 0x15067FD3: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15067FD6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15067FD8: push eax */
    PUSH32(esp, 0x15006A4Cu); /* 0x15067FD9: push 0x15006a4c */
    PUSH32(esp, esi); /* 0x15067FDE: push esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x15067FDF: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(MEM32(0x150C015C)); /* 0x15067FE2: call dword ptr [0x150c015c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15067FE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15067FF1; /* 0x15067FEA: jne 0x15067ff1 */
L_15067FEC:
    MEM32(ebp + (-0x4)) = esi; /* 0x15067FEC: mov dword ptr [ebp - 4], esi */
    goto L_15067FF4; /* 0x15067FEF: jmp 0x15067ff4 */
L_15067FF1:
    esi = MEM32(ebp + (-0x4)); /* 0x15067FF1: mov esi, dword ptr [ebp - 4] */
L_15067FF4:
    /* test esi, esi */ /* 0x15067FF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068017; /* 0x15067FF6: je 0x15068017 */
L_15067FF8:
    PUSH32(esp, 0x15006A64u); /* 0x15067FF8: push 0x15006a64 */
    PUSH32(esp, esi); /* 0x15067FFD: push esi */
    RECOMP_ICALL(MEM32(0x150C0174)); /* 0x15067FFE: call dword ptr [0x150c0174] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068004: mov esi, eax */
    /* test esi, esi */ /* 0x15068006: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068017; /* 0x15068008: je 0x15068017 */
L_1506800A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1506800A: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1506800D: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1506800F: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15068015: call esi */
    RECOMP_FLAGS_IN();
L_15068017:
    esi = POP32_VAL(esp); /* 0x15068017: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15068018: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068019: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068020u);

L_15068020:
    edi = edi; /* 0x15068020: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068022: push ebp */
    ebp = esp; /* 0x15068023: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15068025: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15067FCC); /* 0x15068028: call 0x15067fcc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506802D: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1506802E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0204)); /* 0x15068031: call dword ptr [0x150c0204] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15068037u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1506803E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506803Eu);

L_1506803E:
    PUSH32(esp, 0x15002000u); /* 0x1506803E: push 0x15002000 */
    PUSH32(esp, 0x15001FF0u); /* 0x15068043: push 0x15001ff0 */
    RECOMP_CALL(sub_150683B0); /* 0x15068048: call 0x150683b0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x15002008u); /* 0x1506804D: push 0x15002008 */
    PUSH32(esp, 0x15002004u); /* 0x15068052: push 0x15002004 */
    RECOMP_CALL(sub_150683B0); /* 0x15068057: call 0x150683b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1506805C: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506805F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068070u);

L_15068070:
    edi = edi; /* 0x15068070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068072: push ebp */
    ebp = esp; /* 0x15068073: mov ebp, esp */
    /* cmp MEM32(0x150BDFF4), 0 */ /* 0x15068075: cmp dword ptr [0x150bdff4], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFF4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068099; /* 0x1506807C: je 0x15068099 */
L_1506807E:
    RECOMP_CALL(sub_15068445); /* 0x1506807E: call 0x15068445 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFu); /* 0x15068083: push 0xff */
    /* test eax, eax */ /* 0x15068088: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068094; /* 0x1506808A: je 0x15068094 */
L_1506808C:
    RECOMP_CALL(sub_15067FCC); /* 0x1506808C: call 0x15067fcc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068091: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15068092: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068093: ret  */
L_15068094:
    RECOMP_CALL(sub_15068020); /* 0x15068094: call 0x15068020 */
    RECOMP_FLAGS_IN();
L_15068099:
    MEM32(0x150BDFF4) = 1; /* 0x15068099: mov dword ptr [0x150bdff4], 1 */
    RECOMP_CALL(sub_15069F21); /* 0x150680A3: call 0x15069f21 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150680A8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15069F60); /* 0x150680AB: call 0x15069f60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150680B0: pop ecx */
    PUSH32(esp, 0xFFu); /* 0x150680B1: push 0xff */
    RECOMP_CALL(sub_15067FB0); /* 0x150680B6: call 0x15067fb0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x150680BBu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150680D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150680D0u);

L_150680D0:
    PUSH32(esp, 1); /* 0x150680D0: push 1 */
    PUSH32(esp, 1); /* 0x150680D2: push 1 */
    PUSH32(esp, 0); /* 0x150680D4: push 0 */
    RECOMP_CALL(sub_150684AA); /* 0x150680D6: call 0x150684aa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150680DB: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150680DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150680F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150680F0u);

L_150680F0:
    PUSH32(esp, 1); /* 0x150680F0: push 1 */
    PUSH32(esp, 0); /* 0x150680F2: push 0 */
    PUSH32(esp, 0); /* 0x150680F4: push 0 */
    RECOMP_CALL(sub_150684AA); /* 0x150680F6: call 0x150684aa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150680FB: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150680FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068105(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068105u);

L_15068105:
    edi = edi; /* 0x15068105: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068107: push ebp */
    ebp = esp; /* 0x15068108: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1506810A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15096690); /* 0x1506810D: call 0x15096690 */
    RECOMP_FLAGS_IN();
    MEM32(esp) = 0x15001FE4u; /* 0x15068112: mov dword ptr [esp], 0x15001fe4 */
    PUSH32(esp, 0x15001FD0u); /* 0x15068119: push 0x15001fd0 */
    RECOMP_CALL(sub_150683F0); /* 0x1506811E: call 0x150683f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068123: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068124: pop ecx */
    /* test eax, eax */ /* 0x15068125: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506813C; /* 0x15068127: jne 0x1506813c */
L_15068129:
    PUSH32(esp, 0x15001FCCu); /* 0x15068129: push 0x15001fcc */
    PUSH32(esp, 0x15001FC4u); /* 0x1506812E: push 0x15001fc4 */
    RECOMP_CALL(sub_150683B0); /* 0x15068133: call 0x150683b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068138: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068139: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506813A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506813C:
    ebp = POP32_VAL(esp); /* 0x1506813C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506813D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068150u);

L_15068150:
    edi = edi; /* 0x15068150: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068152: push ebp */
    ebp = esp; /* 0x15068153: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15068155: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15068158: push esi */
    /* test eax, eax */ /* 0x15068159: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506817A; /* 0x1506815B: jne 0x1506817a */
L_1506815D:
    RECOMP_CALL(sub_15036430); /* 0x1506815D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15068162: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15068164: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15068165: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15068167: push ecx */
    PUSH32(esp, ecx); /* 0x15068168: push ecx */
    PUSH32(esp, ecx); /* 0x15068169: push ecx */
    PUSH32(esp, ecx); /* 0x1506816A: push ecx */
    PUSH32(esp, ecx); /* 0x1506816B: push ecx */
    MEM32(eax) = esi; /* 0x1506816C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1506816E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15068173: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15068176: mov eax, esi */
    goto L_15068188; /* 0x15068178: jmp 0x15068188 */
L_1506817A:
    ecx = MEM32(0x150BDFDC); /* 0x1506817A: mov ecx, dword ptr [0x150bdfdc] */
    /* test ecx, ecx */ /* 0x15068180: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506815D; /* 0x15068182: je 0x1506815d */
L_15068184:
    MEM32(eax) = ecx; /* 0x15068184: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068186: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15068188:
    esi = POP32_VAL(esp); /* 0x15068188: pop esi */
    ebp = POP32_VAL(esp); /* 0x15068189: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506818A: ret  */
    RECOMP_REGS_OUT();
}

void sub_150681A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150681A0u);

L_150681A0:
    edi = edi; /* 0x150681A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150681A2: push ebp */
    ebp = esp; /* 0x150681A3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x150681A5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150681A8: push esi */
    /* test ecx, ecx */ /* 0x150681A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150681CA; /* 0x150681AB: jne 0x150681ca */
L_150681AD:
    RECOMP_CALL(sub_15036430); /* 0x150681AD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150681B2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150681B4: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150681B5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x150681B7: push ecx */
    PUSH32(esp, ecx); /* 0x150681B8: push ecx */
    PUSH32(esp, ecx); /* 0x150681B9: push ecx */
    PUSH32(esp, ecx); /* 0x150681BA: push ecx */
    PUSH32(esp, ecx); /* 0x150681BB: push ecx */
    MEM32(eax) = esi; /* 0x150681BC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150681BE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150681C3: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150681C6: mov eax, esi */
    goto L_150681DC; /* 0x150681C8: jmp 0x150681dc */
L_150681CA:
    /* cmp MEM32(0x150BDFDC), 0 */ /* 0x150681CA: cmp dword ptr [0x150bdfdc], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFDC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150681AD; /* 0x150681D1: je 0x150681ad */
L_150681D3:
    eax = MEM32(0x150BDFE0); /* 0x150681D3: mov eax, dword ptr [0x150bdfe0] */
    MEM32(ecx) = eax; /* 0x150681D8: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150681DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150681DC:
    esi = POP32_VAL(esp); /* 0x150681DC: pop esi */
    ebp = POP32_VAL(esp); /* 0x150681DD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150681DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150681F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150681F0u);

L_150681F0:
    edi = edi; /* 0x150681F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150681F2: push ebp */
    ebp = esp; /* 0x150681F3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x150681F5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150681F8: push esi */
    /* test eax, eax */ /* 0x150681F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506821A; /* 0x150681FB: jne 0x1506821a */
L_150681FD:
    RECOMP_CALL(sub_15036430); /* 0x150681FD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15068202: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15068204: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15068205: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15068207: push ecx */
    PUSH32(esp, ecx); /* 0x15068208: push ecx */
    PUSH32(esp, ecx); /* 0x15068209: push ecx */
    PUSH32(esp, ecx); /* 0x1506820A: push ecx */
    PUSH32(esp, ecx); /* 0x1506820B: push ecx */
    MEM32(eax) = esi; /* 0x1506820C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1506820E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15068213: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15068216: mov eax, esi */
    goto L_15068228; /* 0x15068218: jmp 0x15068228 */
L_1506821A:
    ecx = MEM32(0x150BDFD4); /* 0x1506821A: mov ecx, dword ptr [0x150bdfd4] */
    /* test ecx, ecx */ /* 0x15068220: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150681FD; /* 0x15068222: je 0x150681fd */
L_15068224:
    MEM32(eax) = ecx; /* 0x15068224: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068226: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15068228:
    esi = POP32_VAL(esp); /* 0x15068228: pop esi */
    ebp = POP32_VAL(esp); /* 0x15068229: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506822A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068240u);

L_15068240:
    edi = edi; /* 0x15068240: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068242: push ebp */
    ebp = esp; /* 0x15068243: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15068245: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15068248: push esi */
    /* test ecx, ecx */ /* 0x15068249: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506826A; /* 0x1506824B: jne 0x1506826a */
L_1506824D:
    RECOMP_CALL(sub_15036430); /* 0x1506824D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15068252: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15068254: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15068255: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15068257: push ecx */
    PUSH32(esp, ecx); /* 0x15068258: push ecx */
    PUSH32(esp, ecx); /* 0x15068259: push ecx */
    PUSH32(esp, ecx); /* 0x1506825A: push ecx */
    PUSH32(esp, ecx); /* 0x1506825B: push ecx */
    MEM32(eax) = esi; /* 0x1506825C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1506825E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15068263: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15068266: mov eax, esi */
    goto L_1506827C; /* 0x15068268: jmp 0x1506827c */
L_1506826A:
    /* cmp MEM32(0x150BDFDC), 0 */ /* 0x1506826A: cmp dword ptr [0x150bdfdc], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFDC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506824D; /* 0x15068271: je 0x1506824d */
L_15068273:
    eax = MEM32(0x150BDFE8); /* 0x15068273: mov eax, dword ptr [0x150bdfe8] */
    MEM32(ecx) = eax; /* 0x15068278: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506827A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506827C:
    esi = POP32_VAL(esp); /* 0x1506827C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1506827D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506827E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068290u);

L_15068290:
    edi = edi; /* 0x15068290: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068292: push ebp */
    ebp = esp; /* 0x15068293: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15068295: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15068298: push esi */
    /* test ecx, ecx */ /* 0x15068299: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150682BA; /* 0x1506829B: jne 0x150682ba */
L_1506829D:
    RECOMP_CALL(sub_15036430); /* 0x1506829D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150682A2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150682A4: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150682A5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x150682A7: push ecx */
    PUSH32(esp, ecx); /* 0x150682A8: push ecx */
    PUSH32(esp, ecx); /* 0x150682A9: push ecx */
    PUSH32(esp, ecx); /* 0x150682AA: push ecx */
    PUSH32(esp, ecx); /* 0x150682AB: push ecx */
    MEM32(eax) = esi; /* 0x150682AC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150682AE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150682B3: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150682B6: mov eax, esi */
    goto L_150682CC; /* 0x150682B8: jmp 0x150682cc */
L_150682BA:
    /* cmp MEM32(0x150BDFDC), 0 */ /* 0x150682BA: cmp dword ptr [0x150bdfdc], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFDC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506829D; /* 0x150682C1: je 0x1506829d */
L_150682C3:
    eax = MEM32(0x150BDFEC); /* 0x150682C3: mov eax, dword ptr [0x150bdfec] */
    MEM32(ecx) = eax; /* 0x150682C8: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150682CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150682CC:
    esi = POP32_VAL(esp); /* 0x150682CC: pop esi */
    ebp = POP32_VAL(esp); /* 0x150682CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150682CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150682E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150682E0u);

L_150682E0:
    edi = edi; /* 0x150682E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150682E2: push ebp */
    ebp = esp; /* 0x150682E3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x150682E5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150682E8: push esi */
    /* test ecx, ecx */ /* 0x150682E9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506830A; /* 0x150682EB: jne 0x1506830a */
L_150682ED:
    RECOMP_CALL(sub_15036430); /* 0x150682ED: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150682F2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150682F4: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150682F5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x150682F7: push ecx */
    PUSH32(esp, ecx); /* 0x150682F8: push ecx */
    PUSH32(esp, ecx); /* 0x150682F9: push ecx */
    PUSH32(esp, ecx); /* 0x150682FA: push ecx */
    PUSH32(esp, ecx); /* 0x150682FB: push ecx */
    MEM32(eax) = esi; /* 0x150682FC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150682FE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15068303: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15068306: mov eax, esi */
    goto L_1506831C; /* 0x15068308: jmp 0x1506831c */
L_1506830A:
    /* cmp MEM32(0x150BDFDC), 0 */ /* 0x1506830A: cmp dword ptr [0x150bdfdc], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDFDC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150682ED; /* 0x15068311: je 0x150682ed */
L_15068313:
    eax = MEM32(0x150BDFE4); /* 0x15068313: mov eax, dword ptr [0x150bdfe4] */
    MEM32(ecx) = eax; /* 0x15068318: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506831A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506831C:
    esi = POP32_VAL(esp); /* 0x1506831C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1506831D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506831E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068330u);

L_15068330:
    edi = edi; /* 0x15068330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068332: push ebp */
    ebp = esp; /* 0x15068333: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15068335: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15068338: push esi */
    /* test eax, eax */ /* 0x15068339: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506835A; /* 0x1506833B: jne 0x1506835a */
L_1506833D:
    RECOMP_CALL(sub_15036430); /* 0x1506833D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15068342: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15068344: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15068345: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15068347: push ecx */
    PUSH32(esp, ecx); /* 0x15068348: push ecx */
    PUSH32(esp, ecx); /* 0x15068349: push ecx */
    PUSH32(esp, ecx); /* 0x1506834A: push ecx */
    PUSH32(esp, ecx); /* 0x1506834B: push ecx */
    MEM32(eax) = esi; /* 0x1506834C: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1506834E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15068353: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15068356: mov eax, esi */
    goto L_15068368; /* 0x15068358: jmp 0x15068368 */
L_1506835A:
    ecx = MEM32(0x150BDFD8); /* 0x1506835A: mov ecx, dword ptr [0x150bdfd8] */
    /* test ecx, ecx */ /* 0x15068360: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506833D; /* 0x15068362: je 0x1506833d */
L_15068364:
    MEM32(eax) = ecx; /* 0x15068364: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068366: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15068368:
    esi = POP32_VAL(esp); /* 0x15068368: pop esi */
    ebp = POP32_VAL(esp); /* 0x15068369: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506836A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068371(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068371u);

L_15068371:
    edi = edi; /* 0x15068371: mov edi, edi */
    PUSH32(esp, esi); /* 0x15068373: push esi */
    RECOMP_CALL(sub_15068668); /* 0x15068374: call 0x15068668 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068379: mov esi, eax */
    PUSH32(esp, esi); /* 0x1506837B: push esi */
    RECOMP_CALL(sub_15046199); /* 0x1506837C: call 0x15046199 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15068381: push esi */
    RECOMP_CALL(sub_1505E348); /* 0x15068382: call 0x1505e348 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15068387: push esi */
    RECOMP_CALL(sub_15058C6F); /* 0x15068388: call 0x15058c6f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1506838D: push esi */
    RECOMP_CALL(sub_150566C0); /* 0x1506838E: call 0x150566c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15068393: push esi */
    RECOMP_CALL(sub_1503B145); /* 0x15068394: call 0x1503b145 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15068399: push esi */
    RECOMP_CALL(sub_1505EB07); /* 0x1506839A: call 0x1505eb07 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1506839F: add esp, 0x18 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x150683A2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150683A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_150683B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150683B0u);

L_150683B0:
    edi = edi; /* 0x150683B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150683B2: push ebp */
    ebp = esp; /* 0x150683B3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150683B5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150683B6: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x150683B9: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150683D8; /* 0x150683BC: jae 0x150683d8 */
L_150683BE:
    PUSH32(esp, edi); /* 0x150683BE: push edi */
L_150683BF:
    edi = MEM32(esi); /* 0x150683BF: mov edi, dword ptr [esi] */
    /* test edi, edi */ /* 0x150683C1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150683CF; /* 0x150683C3: je 0x150683cf */
L_150683C5:
    ecx = edi; /* 0x150683C5: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x150683C7: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x150683CD: call edi */
    RECOMP_FLAGS_IN();
L_150683CF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x150683CF: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x150683D2: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150683BF; /* 0x150683D5: jb 0x150683bf */
L_150683D7:
    edi = POP32_VAL(esp); /* 0x150683D7: pop edi */
L_150683D8:
    esi = POP32_VAL(esp); /* 0x150683D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x150683D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150683DA: ret  */
    RECOMP_REGS_OUT();
}

void sub_150683F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150683F0u);

L_150683F0:
    edi = edi; /* 0x150683F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150683F2: push ebp */
    ebp = esp; /* 0x150683F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150683F5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150683F6: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150683F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x150683FB: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506841E; /* 0x150683FE: jae 0x1506841e */
L_15068400:
    PUSH32(esp, edi); /* 0x15068400: push edi */
L_15068401:
    /* test eax, eax */ /* 0x15068401: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506841D; /* 0x15068403: jne 0x1506841d */
L_15068405:
    edi = MEM32(esi); /* 0x15068405: mov edi, dword ptr [esi] */
    /* test edi, edi */ /* 0x15068407: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068415; /* 0x15068409: je 0x15068415 */
L_1506840B:
    ecx = edi; /* 0x1506840B: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1506840D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x15068413: call edi */
    RECOMP_FLAGS_IN();
L_15068415:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15068415: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x15068418: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15068401; /* 0x1506841B: jb 0x15068401 */
L_1506841D:
    edi = POP32_VAL(esp); /* 0x1506841D: pop edi */
L_1506841E:
    esi = POP32_VAL(esp); /* 0x1506841E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1506841F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068420: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068427(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068427u);

L_15068427:
    PUSH32(esp, 8); /* 0x15068427: push 8 */
    RECOMP_CALL(sub_15068D80); /* 0x15068429: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506842E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506842F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068436(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068436u);

L_15068436:
    PUSH32(esp, 8); /* 0x15068436: push 8 */
    RECOMP_CALL(sub_15068F50); /* 0x15068438: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506843D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506843E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068445(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068445u);

L_15068445:
    PUSH32(esp, 0); /* 0x15068445: push 0 */
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x15068447: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    ecx = 0x5A4Du; /* 0x1506844D: mov ecx, 0x5a4d */
    /* cmp MEM16(eax), LO16(ecx) */ /* 0x15068452: cmp word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150684A1; /* 0x15068455: jne 0x150684a1 */
L_15068457:
    ecx = MEM32(eax + 0x3C); /* 0x15068457: mov ecx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1506845A: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), 0x4550u */ /* 0x1506845C: cmp dword ptr [ecx], 0x4550 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x4550u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150684A1; /* 0x15068462: jne 0x150684a1 */
L_15068464:
    eax = (uint32_t)MEM16(ecx + 0x18); /* 0x15068464: movzx eax, word ptr [ecx + 0x18] */
    edx = 0x10Bu; /* 0x15068468: mov edx, 0x10b */
    /* cmp LO16(eax), LO16(edx) */ /* 0x1506846D: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068491; /* 0x15068470: je 0x15068491 */
L_15068472:
    edx = 0x20Bu; /* 0x15068472: mov edx, 0x20b */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15068477: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150684A1; /* 0x1506847A: jne 0x150684a1 */
L_1506847C:
    /* cmp MEM32(ecx + 0x84), 0xEu */ /* 0x1506847C: cmp dword ptr [ecx + 0x84], 0xe */
    _flag_a = (uint32_t)(MEM32(ecx + 0x84)); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150684A1; /* 0x15068483: jbe 0x150684a1 */
L_15068485:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068485: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0xF8), eax */ /* 0x15068487: cmp dword ptr [ecx + 0xf8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xF8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1506848D:
    SET_LO8(eax, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) ? 1 : 0); /* 0x1506848D: setne al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068490: ret  */
L_15068491:
    /* cmp MEM32(ecx + 0x74), 0xEu */ /* 0x15068491: cmp dword ptr [ecx + 0x74], 0xe */
    _flag_a = (uint32_t)(MEM32(ecx + 0x74)); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150684A1; /* 0x15068495: jbe 0x150684a1 */
L_15068497:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068497: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0xE8), eax */ /* 0x15068499: cmp dword ptr [ecx + 0xe8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xE8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1506848D; /* 0x1506849F: jmp 0x1506848d */
L_150684A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150684A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150684A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_150684AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150684AAu);

L_150684AA:
    PUSH32(esp, 0x18u); /* 0x150684AA: push 0x18 */
    PUSH32(esp, 0x150B0DA8u); /* 0x150684AC: push 0x150b0da8 */
    RECOMP_CALL(sub_1505E988); /* 0x150684B1: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x10); /* 0x150684B6: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x150684B9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150684CF; /* 0x150684BB: jne 0x150684cf */
L_150684BD:
    RECOMP_CALL(sub_15068445); /* 0x150684BD: call 0x15068445 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150684C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150684CF; /* 0x150684C4: je 0x150684cf */
L_150684C6:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150684C6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15067FCC); /* 0x150684C9: call 0x15067fcc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150684CE: pop ecx */
L_150684CF:
    PUSH32(esp, 8); /* 0x150684CF: push 8 */
    RECOMP_CALL(sub_15068D80); /* 0x150684D1: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150684D6: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150684D7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x150BDFF0), 1 */ /* 0x150684DB: cmp dword ptr [0x150bdff0], 1 */
    _flag_a = (uint32_t)(MEM32(0x150BDFF0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068593; /* 0x150684E2: je 0x15068593 */
L_150684E8:
    MEM32(0x150BDFB4) = 1; /* 0x150684E8: mov dword ptr [0x150bdfb4], 1 */
    MEM8(0x150BDFB0) = (uint8_t)(LO8(ebx)); /* 0x150684F2: mov byte ptr [0x150bdfb0], bl */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150684F8: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068593; /* 0x150684FC: jne 0x15068593 */
L_15068502:
    PUSH32(esp, MEM32(0x150BECCC)); /* 0x15068502: push dword ptr [0x150beccc] */
    RECOMP_CALL(sub_1506863C); /* 0x15068508: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506850D: pop ecx */
    ebx = eax; /* 0x1506850E: mov ebx, eax */
    MEM32(ebp + (-0x28)) = ebx; /* 0x15068510: mov dword ptr [ebp - 0x28], ebx */
    /* test ebx, ebx */ /* 0x15068513: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068593; /* 0x15068515: je 0x15068593 */
L_15068517:
    PUSH32(esp, MEM32(0x150BECC8)); /* 0x15068517: push dword ptr [0x150becc8] */
    RECOMP_CALL(sub_1506863C); /* 0x1506851D: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068522: pop ecx */
    edi = eax; /* 0x15068523: mov edi, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15068525: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x20)) = edi; /* 0x15068528: mov dword ptr [ebp - 0x20], edi */
L_1506852B:
    MEM32(ebp + (-0x24)) = edi; /* 0x1506852B: mov dword ptr [ebp - 0x24], edi */
L_1506852E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x1506852E: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = edi; /* 0x15068531: mov dword ptr [ebp - 0x24], edi */
    /* cmp edi, ebx */ /* 0x15068534: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15068593; /* 0x15068536: jb 0x15068593 */
L_15068538:
    RECOMP_CALL(sub_15068668); /* 0x15068538: call 0x15068668 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), eax */ /* 0x1506853D: cmp dword ptr [edi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506852E; /* 0x1506853F: je 0x1506852e */
L_15068541:
    /* cmp edi, ebx */ /* 0x15068541: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15068593; /* 0x15068543: jb 0x15068593 */
L_15068545:
    PUSH32(esp, MEM32(edi)); /* 0x15068545: push dword ptr [edi] */
    RECOMP_CALL(sub_1506863C); /* 0x15068547: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506854C: pop ecx */
    esi = eax; /* 0x1506854D: mov esi, eax */
    RECOMP_CALL(sub_15068668); /* 0x1506854F: call 0x15068668 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x15068554: mov dword ptr [edi], eax */
    ecx = esi; /* 0x15068556: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15068558: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x1506855E: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x150BECCC)); /* 0x15068560: push dword ptr [0x150beccc] */
    RECOMP_CALL(sub_1506863C); /* 0x15068566: call 0x1506863c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1506856B: mov esi, eax */
    PUSH32(esp, MEM32(0x150BECC8)); /* 0x1506856D: push dword ptr [0x150becc8] */
    RECOMP_CALL(sub_1506863C); /* 0x15068573: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068578: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068579: pop ecx */
    /* cmp MEM32(ebp + (-0x1C)), esi */ /* 0x1506857A: cmp dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068584; /* 0x1506857D: jne 0x15068584 */
L_1506857F:
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x1506857F: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506852E; /* 0x15068582: je 0x1506852e */
L_15068584:
    MEM32(ebp + (-0x1C)) = esi; /* 0x15068584: mov dword ptr [ebp - 0x1c], esi */
    ebx = esi; /* 0x15068587: mov ebx, esi */
    MEM32(ebp + (-0x28)) = ebx; /* 0x15068589: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1506858C: mov dword ptr [ebp - 0x20], eax */
    edi = eax; /* 0x1506858F: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_1506852B; /* 0x15068591: jmp 0x1506852b */
L_15068593:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15068593: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150685A5); /* 0x1506859A: call 0x150685a5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1506859F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150685C8; /* 0x150685A1: je 0x150685c8 */
L_150685A3:
    goto L_150685B8; /* 0x150685A3: jmp 0x150685b8 */
L_150685B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x150685B8: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150685BB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150685C2: pop ecx */
    edi = POP32_VAL(esp); /* 0x150685C3: pop edi */
    esi = POP32_VAL(esp); /* 0x150685C4: pop esi */
    ebx = POP32_VAL(esp); /* 0x150685C5: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150685C6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150685C7: ret  */
L_150685C8:
    MEM32(0x150BDFF0) = 1; /* 0x150685C8: mov dword ptr [0x150bdff0], 1 */
    RECOMP_CALL(sub_15068436); /* 0x150685D2: call 0x15068436 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150685D7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15068020); /* 0x150685DA: call 0x15068020 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x150685DFu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150685A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150685A5u);

L_150685A5:
    eax = MEM32(ebp + 0x10); /* 0x150685A5: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x150685A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150685B7; /* 0x150685AA: je 0x150685b7 */
L_150685AC:
    PUSH32(esp, 8); /* 0x150685AC: push 8 */
    RECOMP_CALL(sub_15068F50); /* 0x150685AE: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150685B3: pop ecx */
    eax = MEM32(ebp + 0x10); /* 0x150685B4: mov eax, dword ptr [ebp + 0x10] */
L_150685B7:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150685B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150685F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150685F0u);

L_150685F0:
    edi = edi; /* 0x150685F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150685F2: push ebp */
    ebp = esp; /* 0x150685F3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150685F5: push 0 */
    PUSH32(esp, 0); /* 0x150685F7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150685F9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150684AA); /* 0x150685FC: call 0x150684aa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15068601: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15068604: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068605: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506860C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506860Cu);

L_1506860C:
    eax = MEM32(0x150BD674); /* 0x1506860C: mov eax, dword ptr [0x150bd674] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068611: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068620u);

L_15068620:
    { _itail_tgt = (uint32_t)(MEM32(0x150C0220)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_15068630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068630u);

L_15068630:
    { _itail_tgt = (uint32_t)(MEM32(0x150C0218)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1506863C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506863Cu);

L_1506863C:
    edi = edi; /* 0x1506863C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506863E: push ebp */
    ebp = esp; /* 0x1506863F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15068641: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C02A0)); /* 0x15068644: call dword ptr [0x150c02a0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1506864A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506864B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068652(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068652u);

L_15068652:
    edi = edi; /* 0x15068652: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068654: push ebp */
    ebp = esp; /* 0x15068655: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15068657: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0298)); /* 0x1506865A: call dword ptr [0x150c0298] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15068660: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068661: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068668(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068668u);

L_15068668:
    PUSH32(esp, 0); /* 0x15068668: push 0 */
    RECOMP_ICALL(MEM32(0x150C0298)); /* 0x1506866A: call dword ptr [0x150c0298] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068670: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068680u);

L_15068680:
    PUSH32(esp, 8); /* 0x15068680: push 8 */
    PUSH32(esp, 0x150B0DC8u); /* 0x15068682: push 0x150b0dc8 */
    RECOMP_CALL(sub_1505E988); /* 0x15068687: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1506868C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1506868F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150687B3; /* 0x15068691: je 0x150687b3 */
L_15068697:
    /* cmp MEM32(esi + 0x24), 0 */ /* 0x15068697: cmp dword ptr [esi + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150686A6; /* 0x1506869B: je 0x150686a6 */
L_1506869D:
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x1506869D: push dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_15048840); /* 0x150686A0: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150686A5: pop ecx */
L_150686A6:
    /* cmp MEM32(esi + 0x28), 0 */ /* 0x150686A6: cmp dword ptr [esi + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150686B5; /* 0x150686AA: je 0x150686b5 */
L_150686AC:
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x150686AC: push dword ptr [esi + 0x28] */
    RECOMP_CALL(sub_15048840); /* 0x150686AF: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150686B4: pop ecx */
L_150686B5:
    /* cmp MEM32(esi + 0x2C), 0 */ /* 0x150686B5: cmp dword ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150686C4; /* 0x150686B9: je 0x150686c4 */
L_150686BB:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x150686BB: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_15048840); /* 0x150686BE: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150686C3: pop ecx */
L_150686C4:
    /* cmp MEM32(esi + 0x30), 0 */ /* 0x150686C4: cmp dword ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150686D3; /* 0x150686C8: je 0x150686d3 */
L_150686CA:
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x150686CA: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_15048840); /* 0x150686CD: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150686D2: pop ecx */
L_150686D3:
    /* cmp MEM32(esi + 0x34), 0 */ /* 0x150686D3: cmp dword ptr [esi + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150686E2; /* 0x150686D7: je 0x150686e2 */
L_150686D9:
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x150686D9: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_15048840); /* 0x150686DC: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150686E1: pop ecx */
L_150686E2:
    /* cmp MEM32(esi + 0x3C), 0 */ /* 0x150686E2: cmp dword ptr [esi + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150686F1; /* 0x150686E6: je 0x150686f1 */
L_150686E8:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x150686E8: push dword ptr [esi + 0x3c] */
    RECOMP_CALL(sub_15048840); /* 0x150686EB: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150686F0: pop ecx */
L_150686F1:
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x150686F1: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068700; /* 0x150686F5: je 0x15068700 */
L_150686F7:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x150686F7: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_15048840); /* 0x150686FA: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150686FF: pop ecx */
L_15068700:
    /* cmp MEM32(esi + 0x44), 0 */ /* 0x15068700: cmp dword ptr [esi + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506870F; /* 0x15068704: je 0x1506870f */
L_15068706:
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x15068706: push dword ptr [esi + 0x44] */
    RECOMP_CALL(sub_15048840); /* 0x15068709: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506870E: pop ecx */
L_1506870F:
    /* cmp MEM32(esi + 0x48), 0 */ /* 0x1506870F: cmp dword ptr [esi + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506871E; /* 0x15068713: je 0x1506871e */
L_15068715:
    PUSH32(esp, MEM32(esi + 0x48)); /* 0x15068715: push dword ptr [esi + 0x48] */
    RECOMP_CALL(sub_15048840); /* 0x15068718: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506871D: pop ecx */
L_1506871E:
    /* cmp MEM32(esi + 0x5C), 0x15005198u */ /* 0x1506871E: cmp dword ptr [esi + 0x5c], 0x15005198 */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0x15005198u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068730; /* 0x15068725: je 0x15068730 */
L_15068727:
    PUSH32(esp, MEM32(esi + 0x5C)); /* 0x15068727: push dword ptr [esi + 0x5c] */
    RECOMP_CALL(sub_15048840); /* 0x1506872A: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506872F: pop ecx */
L_15068730:
    PUSH32(esp, 0xDu); /* 0x15068730: push 0xd */
    RECOMP_CALL(sub_15068D80); /* 0x15068732: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068737: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15068738: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x68); /* 0x1506873C: mov ecx, dword ptr [esi + 0x68] */
    /* test ecx, ecx */ /* 0x1506873F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506875B; /* 0x15068741: je 0x1506875b */
L_15068743:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15068743: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x15068746: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1506875B; /* 0x1506874A: jne 0x1506875b */
L_1506874C:
    /* cmp ecx, 0x150BD0E0u */ /* 0x1506874C: cmp ecx, 0x150bd0e0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150BD0E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506875B; /* 0x15068752: je 0x1506875b */
L_15068754:
    PUSH32(esp, ecx); /* 0x15068754: push ecx */
    RECOMP_CALL(sub_15048840); /* 0x15068755: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506875A: pop ecx */
L_1506875B:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1506875B: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150687C8); /* 0x15068762: call 0x150687c8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x15068767: push 0xc */
    RECOMP_CALL(sub_15068D80); /* 0x15068769: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506876E: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1506876F: mov dword ptr [ebp - 4], 1 */
    edi = MEM32(esi + 0x6C); /* 0x15068776: mov edi, dword ptr [esi + 0x6c] */
    /* test edi, edi */ /* 0x15068779: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150687A0; /* 0x1506877B: je 0x150687a0 */
L_1506877D:
    PUSH32(esp, edi); /* 0x1506877D: push edi */
    RECOMP_CALL(sub_15057199); /* 0x1506877E: call 0x15057199 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068783: pop ecx */
    /* cmp edi, MEM32(0x150BC074) */ /* 0x15068784: cmp edi, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150687A0; /* 0x1506878A: je 0x150687a0 */
L_1506878C:
    /* cmp edi, 0x150BC078u */ /* 0x1506878C: cmp edi, 0x150bc078 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x150BC078u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150687A0; /* 0x15068792: je 0x150687a0 */
L_15068794:
    /* cmp MEM32(edi), 0 */ /* 0x15068794: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150687A0; /* 0x15068797: jne 0x150687a0 */
L_15068799:
    PUSH32(esp, edi); /* 0x15068799: push edi */
    RECOMP_CALL(sub_15056EA3); /* 0x1506879A: call 0x15056ea3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506879F: pop ecx */
L_150687A0:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150687A0: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150687D4); /* 0x150687A7: call 0x150687d4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150687AC: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150687AD: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150687B2: pop ecx */
L_150687B3:
    ecx = MEM32(ebp + (-0x10)); /* 0x150687B3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150687B6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150687BD: pop ecx */
    edi = POP32_VAL(esp); /* 0x150687BE: pop edi */
    esi = POP32_VAL(esp); /* 0x150687BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150687C0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150687C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x150687C2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_150687C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150687C8u);

L_150687C8:
    PUSH32(esp, 0xDu); /* 0x150687C8: push 0xd */
    RECOMP_CALL(sub_15068F50); /* 0x150687CA: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150687CF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150687D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150687D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150687D4u);

L_150687D4:
    PUSH32(esp, 0xCu); /* 0x150687D4: push 0xc */
    RECOMP_CALL(sub_15068F50); /* 0x150687D6: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150687DB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150687DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_150687E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150687E3u);

L_150687E3:
    edi = edi; /* 0x150687E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150687E5: push ebp */
    ebp = esp; /* 0x150687E6: mov ebp, esp */
    eax = MEM32(0x150BD674); /* 0x150687E8: mov eax, dword ptr [0x150bd674] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150687ED: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068818; /* 0x150687F0: je 0x15068818 */
L_150687F2:
    PUSH32(esp, esi); /* 0x150687F2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150687F3: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x150687F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068808; /* 0x150687F8: jne 0x15068808 */
L_150687FA:
    PUSH32(esp, eax); /* 0x150687FA: push eax */
    RECOMP_ICALL(MEM32(0x150C0080)); /* 0x150687FB: call dword ptr [0x150c0080] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068801: mov esi, eax */
    eax = MEM32(0x150BD674); /* 0x15068803: mov eax, dword ptr [0x150bd674] */
L_15068808:
    PUSH32(esp, 0); /* 0x15068808: push 0 */
    PUSH32(esp, eax); /* 0x1506880A: push eax */
    RECOMP_ICALL(MEM32(0x150C0084)); /* 0x1506880B: call dword ptr [0x150c0084] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15068811: push esi */
    RECOMP_CALL(sub_15068680); /* 0x15068812: call 0x15068680 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x15068817: pop esi */
L_15068818:
    ebp = POP32_VAL(esp); /* 0x15068818: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068819: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068820u);

L_15068820:
    edi = edi; /* 0x15068820: mov edi, edi */
    PUSH32(esp, esi); /* 0x15068822: push esi */
    RECOMP_CALL(sub_15068840); /* 0x15068823: call 0x15068840 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068828: mov esi, eax */
    /* test esi, esi */ /* 0x1506882A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068836; /* 0x1506882C: jne 0x15068836 */
L_1506882E:
    PUSH32(esp, 0x10u); /* 0x1506882E: push 0x10 */
    RECOMP_CALL(sub_15068070); /* 0x15068830: call 0x15068070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068835: pop ecx */
L_15068836:
    eax = esi; /* 0x15068836: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15068838: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068839: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068840u);

L_15068840:
    edi = edi; /* 0x15068840: mov edi, edi */
    PUSH32(esp, esi); /* 0x15068842: push esi */
    PUSH32(esp, edi); /* 0x15068843: push edi */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15068844: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x150BD674)); /* 0x1506884A: push dword ptr [0x150bd674] */
    edi = eax; /* 0x15068850: mov edi, eax */
    RECOMP_ICALL(MEM32(0x150C0080)); /* 0x15068852: call dword ptr [0x150c0080] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068858: mov esi, eax */
    /* test esi, esi */ /* 0x1506885A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506889B; /* 0x1506885C: jne 0x1506889b */
L_1506885E:
    PUSH32(esp, 0x214u); /* 0x1506885E: push 0x214 */
    PUSH32(esp, 1); /* 0x15068863: push 1 */
    RECOMP_CALL(sub_15048EE2); /* 0x15068865: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1506886A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1506886C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506886D: pop ecx */
    /* test esi, esi */ /* 0x1506886E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506889B; /* 0x15068870: je 0x1506889b */
L_15068872:
    PUSH32(esp, esi); /* 0x15068872: push esi */
    PUSH32(esp, MEM32(0x150BD674)); /* 0x15068873: push dword ptr [0x150bd674] */
    RECOMP_ICALL(MEM32(0x150C0084)); /* 0x15068879: call dword ptr [0x150c0084] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1506887F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068892; /* 0x15068881: je 0x15068892 */
L_15068883:
    PUSH32(esp, 0); /* 0x15068883: push 0 */
    PUSH32(esp, esi); /* 0x15068885: push esi */
    RECOMP_CALL(sub_150688AD); /* 0x15068886: call 0x150688ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x1506888B: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1506888F: pop ecx */
    goto L_1506889A; /* 0x15068890: jmp 0x1506889a */
L_15068892:
    PUSH32(esp, esi); /* 0x15068892: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15068893: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15068898: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506889A:
    ecx = POP32_VAL(esp); /* 0x1506889A: pop ecx */
L_1506889B:
    PUSH32(esp, edi); /* 0x1506889B: push edi */
    RECOMP_ICALL(MEM32(0x150C0064)); /* 0x1506889C: call dword ptr [0x150c0064] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x150688A2: pop edi */
    eax = esi; /* 0x150688A3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150688A5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150688A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150688AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150688ADu);

L_150688AD:
    PUSH32(esp, 8); /* 0x150688AD: push 8 */
    PUSH32(esp, 0x150B0DF0u); /* 0x150688AF: push 0x150b0df0 */
    RECOMP_CALL(sub_1505E988); /* 0x150688B4: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x150688B9: mov esi, dword ptr [ebp + 8] */
    MEM32(esi + 0x5C) = 0x15005198u; /* 0x150688BC: mov dword ptr [esi + 0x5c], 0x15005198 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150688C3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150688C5: inc edi */
    _flag_k = FK_INC;
    MEM32(esi + 0x14) = edi; /* 0x150688C6: mov dword ptr [esi + 0x14], edi */
    eax = MEM32(0x150C0298); /* 0x150688C9: mov eax, dword ptr [0x150c0298] */
    MEM32(esi + 0x1F8) = eax; /* 0x150688CE: mov dword ptr [esi + 0x1f8], eax */
    eax = MEM32(0x150C02A0); /* 0x150688D4: mov eax, dword ptr [0x150c02a0] */
    MEM32(esi + 0x1FC) = eax; /* 0x150688D9: mov dword ptr [esi + 0x1fc], eax */
    MEM32(esi + 0x70) = edi; /* 0x150688DF: mov dword ptr [esi + 0x70], edi */
    MEM8(esi + 0xC8) = (uint8_t)(0x43u); /* 0x150688E2: mov byte ptr [esi + 0xc8], 0x43 */
    MEM8(esi + 0x14B) = (uint8_t)(0x43u); /* 0x150688E9: mov byte ptr [esi + 0x14b], 0x43 */
    MEM32(esi + 0x68) = 0x150BD0E0u; /* 0x150688F0: mov dword ptr [esi + 0x68], 0x150bd0e0 */
    PUSH32(esp, 0xDu); /* 0x150688F7: push 0xd */
    RECOMP_CALL(sub_15068D80); /* 0x150688F9: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150688FE: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150688FF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x68); /* 0x15068903: mov eax, dword ptr [esi + 0x68] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x15068906: lock inc dword ptr [eax] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15068909: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15068960); /* 0x15068910: call 0x15068960 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x15068915: push 0xc */
    RECOMP_CALL(sub_15068D80); /* 0x15068917: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506891C: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1506891D: mov dword ptr [ebp - 4], edi */
    eax = MEM32(ebp + 0xC); /* 0x15068920: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x6C) = eax; /* 0x15068923: mov dword ptr [esi + 0x6c], eax */
    /* test eax, eax */ /* 0x15068926: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068937; /* 0x15068928: jne 0x15068937 */
L_1506892A:
    eax = MEM32(0x150BC074); /* 0x1506892A: mov eax, dword ptr [0x150bc074] */
    MEM32(esi + 0x6C) = eax; /* 0x1506892F: mov dword ptr [esi + 0x6c], eax */
    eax = MEM32(0x150BC074); /* 0x15068932: mov eax, dword ptr [0x150bc074] */
L_15068937:
    PUSH32(esp, eax); /* 0x15068937: push eax */
    RECOMP_CALL(sub_15056E1C); /* 0x15068938: call 0x15056e1c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506893D: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1506893E: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15068969); /* 0x15068945: call 0x15068969 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1506894A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1506894D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15068954: pop ecx */
    edi = POP32_VAL(esp); /* 0x15068955: pop edi */
    esi = POP32_VAL(esp); /* 0x15068956: pop esi */
    ebx = POP32_VAL(esp); /* 0x15068957: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15068958: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068959: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068960u);

L_15068960:
    PUSH32(esp, 0xDu); /* 0x15068960: push 0xd */
    RECOMP_CALL(sub_15068F50); /* 0x15068962: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068967: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068968: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068969(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068969u);

L_15068969:
    PUSH32(esp, 0xCu); /* 0x15068969: push 0xc */
    RECOMP_CALL(sub_15068F50); /* 0x1506896B: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068970: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068971: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068978u);

L_15068978:
    edi = edi; /* 0x15068978: mov edi, edi */
    PUSH32(esp, esi); /* 0x1506897A: push esi */
    RECOMP_CALL(sub_15068371); /* 0x1506897B: call 0x15068371 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068EFA); /* 0x15068980: call 0x15068efa */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15068985: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150689CA; /* 0x15068987: je 0x150689ca */
L_15068989:
    PUSH32(esp, 0x15068680u); /* 0x15068989: push 0x15068680 */
    RECOMP_ICALL(MEM32(0x150C0078)); /* 0x1506898E: call dword ptr [0x150c0078] */
    RECOMP_FLAGS_IN();
    MEM32(0x150BD674) = eax; /* 0x15068994: mov dword ptr [0x150bd674], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15068999: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150689CA; /* 0x1506899C: je 0x150689ca */
L_1506899E:
    PUSH32(esp, 0x214u); /* 0x1506899E: push 0x214 */
    PUSH32(esp, 1); /* 0x150689A3: push 1 */
    RECOMP_CALL(sub_15048EE2); /* 0x150689A5: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150689AA: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x150689AC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150689AD: pop ecx */
    /* test esi, esi */ /* 0x150689AE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150689CA; /* 0x150689B0: je 0x150689ca */
L_150689B2:
    PUSH32(esp, esi); /* 0x150689B2: push esi */
    PUSH32(esp, MEM32(0x150BD674)); /* 0x150689B3: push dword ptr [0x150bd674] */
    RECOMP_ICALL(MEM32(0x150C0084)); /* 0x150689B9: call dword ptr [0x150c0084] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150689BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150689D3; /* 0x150689C1: jne 0x150689d3 */
L_150689C3:
    PUSH32(esp, esi); /* 0x150689C3: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150689C4: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150689C9: pop ecx */
L_150689CA:
    RECOMP_CALL(sub_150689EC); /* 0x150689CA: call 0x150689ec */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150689CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x150689D1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150689D2: ret  */
L_150689D3:
    PUSH32(esp, 0); /* 0x150689D3: push 0 */
    PUSH32(esp, esi); /* 0x150689D5: push esi */
    RECOMP_CALL(sub_150688AD); /* 0x150689D6: call 0x150688ad */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x150689DB: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150689DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150689E1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150689E2: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150689E3: inc eax */
    _flag_k = FK_INC;
    esi = POP32_VAL(esp); /* 0x150689E4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150689E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150689EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150689ECu);

L_150689EC:
    eax = MEM32(0x150BD674); /* 0x150689EC: mov eax, dword ptr [0x150bd674] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150689F1: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068A04; /* 0x150689F4: je 0x15068a04 */
L_150689F6:
    PUSH32(esp, eax); /* 0x150689F6: push eax */
    RECOMP_ICALL(MEM32(0x150C007C)); /* 0x150689F7: call dword ptr [0x150c007c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(0x150BD674) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(0x150BD674) | 0xFFFFFFFFu));
    MEM32(0x150BD674) = MEM32(0x150BD674) | 0xFFFFFFFFu; /* 0x150689FD: or dword ptr [0x150bd674], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15068A04:
    goto L_15068DBC; /* 0x15068A04: jmp 0x15068dbc */
L_15068DBC:
    edi = edi; /* 0x15068DBC: mov edi, edi */
    PUSH32(esp, esi); /* 0x15068DBE: push esi */
    esi = 0x150BC4E0u; /* 0x15068DBF: mov esi, 0x150bc4e0 */
    PUSH32(esp, edi); /* 0x15068DC4: push edi */
L_15068DC5:
    edi = MEM32(esi); /* 0x15068DC5: mov edi, dword ptr [esi] */
    /* test edi, edi */ /* 0x15068DC7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068DE2; /* 0x15068DC9: je 0x15068de2 */
L_15068DCB:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x15068DCB: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068DE2; /* 0x15068DCF: je 0x15068de2 */
L_15068DD1:
    PUSH32(esp, edi); /* 0x15068DD1: push edi */
    RECOMP_ICALL(MEM32(0x150C0264)); /* 0x15068DD2: call dword ptr [0x150c0264] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15068DD8: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15068DD9: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x15068DDE: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15068DE1: pop ecx */
L_15068DE2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x15068DE2: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x150BC600u */ /* 0x15068DE5: cmp esi, 0x150bc600 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x150BC600u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15068DC5; /* 0x15068DEB: jl 0x15068dc5 */
L_15068DED:
    edi = POP32_VAL(esp); /* 0x15068DED: pop edi */
    esi = 0x150BC4E4u; /* 0x15068DEE: mov esi, 0x150bc4e4 */
L_15068DF3:
    /* cmp MEM32(esi + (-0x4)), 0 */ /* 0x15068DF3: cmp dword ptr [esi - 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068E07; /* 0x15068DF7: je 0x15068e07 */
L_15068DF9:
    /* cmp MEM32(esi), 1 */ /* 0x15068DF9: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068E07; /* 0x15068DFC: jne 0x15068e07 */
L_15068DFE:
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x15068DFE: push dword ptr [esi - 4] */
    RECOMP_ICALL(MEM32(0x150C0264)); /* 0x15068E01: call dword ptr [0x150c0264] */
    RECOMP_FLAGS_IN();
L_15068E07:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x15068E07: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x150BC604u */ /* 0x15068E0A: cmp esi, 0x150bc604 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x150BC604u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15068DF3; /* 0x15068E10: jl 0x15068df3 */
L_15068E12:
    esi = POP32_VAL(esp); /* 0x15068E12: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068E13: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068A10u);

L_15068A10:
    edi = edi; /* 0x15068A10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068A12: push ebp */
    ebp = esp; /* 0x15068A13: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15068A15: push ecx */
    PUSH32(esp, ebx); /* 0x15068A16: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15068A17: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15068A1A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15068A1B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x15068A1D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068A3E; /* 0x15068A1F: jne 0x15068a3e */
L_15068A21:
    RECOMP_CALL(sub_15036430); /* 0x15068A21: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15068A26: push esi */
    PUSH32(esp, esi); /* 0x15068A27: push esi */
    PUSH32(esp, esi); /* 0x15068A28: push esi */
    PUSH32(esp, esi); /* 0x15068A29: push esi */
    PUSH32(esp, esi); /* 0x15068A2A: push esi */
    MEM32(eax) = 0x16u; /* 0x15068A2B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15068A31: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15068A36: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15068A39: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15068AAE; /* 0x15068A3C: jmp 0x15068aae */
L_15068A3E:
    PUSH32(esp, edi); /* 0x15068A3E: push edi */
    RECOMP_CALL(sub_15036310); /* 0x15068A3F: call 0x15036310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x214u); /* 0x15068A44: push 0x214 */
    PUSH32(esp, 1); /* 0x15068A49: push 1 */
    RECOMP_CALL(sub_15048EE2); /* 0x15068A4B: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15068A50: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15068A52: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068A53: pop ecx */
    /* test edi, edi */ /* 0x15068A54: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068A98; /* 0x15068A56: je 0x15068a98 */
L_15068A58:
    RECOMP_CALL(sub_15068820); /* 0x15068A58: call 0x15068820 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax + 0x6C)); /* 0x15068A5D: push dword ptr [eax + 0x6c] */
    PUSH32(esp, edi); /* 0x15068A60: push edi */
    RECOMP_CALL(sub_150688AD); /* 0x15068A61: call 0x150688ad */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15068A66: mov eax, dword ptr [ebp + 0x10] */
    ecx = POP32_VAL(esp); /* 0x15068A69: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068A6A: pop ecx */
    MEM32(edi + 0x58) = eax; /* 0x15068A6B: mov dword ptr [edi + 0x58], eax */
    eax = ebp + (-0x4); /* 0x15068A6E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15068A71: push eax */
    PUSH32(esp, 4); /* 0x15068A72: push 4 */
    PUSH32(esp, edi); /* 0x15068A74: push edi */
    PUSH32(esp, 0x15068B60u); /* 0x15068A75: push 0x15068b60 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15068A7A: push dword ptr [ebp + 0xc] */
    MEM32(edi + 0x54) = ebx; /* 0x15068A7D: mov dword ptr [edi + 0x54], ebx */
    PUSH32(esp, esi); /* 0x15068A80: push esi */
    RECOMP_ICALL(MEM32(0x150C0224)); /* 0x15068A81: call dword ptr [0x150c0224] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068A87: mov esi, eax */
    MEM32(edi + 0x4) = esi; /* 0x15068A89: mov dword ptr [edi + 4], esi */
    /* test esi, esi */ /* 0x15068A8C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068AB2; /* 0x15068A8E: jne 0x15068ab2 */
L_15068A90:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15068A90: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068A96: mov esi, eax */
L_15068A98:
    PUSH32(esp, edi); /* 0x15068A98: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15068A99: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068A9E: pop ecx */
    /* test esi, esi */ /* 0x15068A9F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068AAA; /* 0x15068AA1: je 0x15068aaa */
L_15068AA3:
    PUSH32(esp, esi); /* 0x15068AA3: push esi */
    RECOMP_CALL(sub_150363FB); /* 0x15068AA4: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068AA9: pop ecx */
L_15068AAA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15068AAA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15068AAD:
    edi = POP32_VAL(esp); /* 0x15068AAD: pop edi */
L_15068AAE:
    esi = POP32_VAL(esp); /* 0x15068AAE: pop esi */
    ebx = POP32_VAL(esp); /* 0x15068AAF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15068AB0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068AB1: ret  */
L_15068AB2:
    PUSH32(esp, esi); /* 0x15068AB2: push esi */
    RECOMP_ICALL(MEM32(0x150C022C)); /* 0x15068AB3: call dword ptr [0x150c022c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15068AB9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068A90; /* 0x15068ABC: je 0x15068a90 */
L_15068ABE:
    eax = esi; /* 0x15068ABE: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_15068AAD; /* 0x15068AC0: jmp 0x15068aad */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15068AC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068AC8u);

L_15068AC8:
    PUSH32(esp, 0xCu); /* 0x15068AC8: push 0xc */
    PUSH32(esp, 0x150B0E18u); /* 0x15068ACA: push 0x150b0e18 */
    RECOMP_CALL(sub_1505E988); /* 0x15068ACF: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068820); /* 0x15068AD4: call 0x15068820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15068AD9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + 0x58)); /* 0x15068ADD: push dword ptr [eax + 0x58] */
    esi = MEM32(eax + 0x54); /* 0x15068AE0: mov esi, dword ptr [eax + 0x54] */
    ecx = esi; /* 0x15068AE3: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15068AE5: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15068AEB: call esi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068AED: pop ecx */
    RECOMP_CALL(sub_15068B20); /* 0x15068AEE: call 0x15068b20 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x15068AF3: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x15068AF6: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x15068AF8: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15068AFA: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, ecx); /* 0x15068AFD: push ecx */
    PUSH32(esp, eax); /* 0x15068AFE: push eax */
    RECOMP_CALL(sub_150567F0); /* 0x15068AFF: call 0x150567f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068B04: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068B05: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068B06: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068B20u);

L_15068B20:
    edi = edi; /* 0x15068B20: mov edi, edi */
    PUSH32(esp, esi); /* 0x15068B22: push esi */
    RECOMP_CALL(sub_150566C0); /* 0x15068B23: call 0x150566c0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068840); /* 0x15068B28: call 0x15068840 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068B2D: mov esi, eax */
    /* test esi, esi */ /* 0x15068B2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068B49; /* 0x15068B31: je 0x15068b49 */
L_15068B33:
    /* cmp MEM32(esi + 0x4), 0xFFFFFFFFu */ /* 0x15068B33: cmp dword ptr [esi + 4], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15068B42; /* 0x15068B37: je 0x15068b42 */
L_15068B39:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x15068B39: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15068B3C: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
L_15068B42:
    PUSH32(esp, esi); /* 0x15068B42: push esi */
    RECOMP_CALL(sub_150687E3); /* 0x15068B43: call 0x150687e3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068B48: pop ecx */
L_15068B49:
    PUSH32(esp, 0); /* 0x15068B49: push 0 */
    RECOMP_ICALL(MEM32(0x150C0228)); /* 0x15068B4B: call dword ptr [0x150c0228] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15068B51u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15068B60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068B60u);

L_15068B60:
    edi = edi; /* 0x15068B60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068B62: push ebp */
    ebp = esp; /* 0x15068B63: mov ebp, esp */
    RECOMP_CALL(sub_15036310); /* 0x15068B65: call 0x15036310 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1506860C); /* 0x15068B6A: call 0x1506860c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15068B6F: push eax */
    RECOMP_ICALL(MEM32(0x150C0080)); /* 0x15068B70: call dword ptr [0x150c0080] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15068B76: mov edx, eax */
    /* test edx, edx */ /* 0x15068B78: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068B9C; /* 0x15068B7A: jne 0x15068b9c */
L_15068B7C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15068B7C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1506860C); /* 0x15068B7F: call 0x1506860c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15068B84: push eax */
    RECOMP_ICALL(MEM32(0x150C0084)); /* 0x15068B85: call dword ptr [0x150c0084] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15068B8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068BB7; /* 0x15068B8D: jne 0x15068bb7 */
L_15068B8F:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15068B8F: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15068B95: push eax */
    RECOMP_ICALL(MEM32(0x150C0228)); /* 0x15068B96: call dword ptr [0x150c0228] */
    RECOMP_FLAGS_IN();
L_15068B9C:
    ecx = MEM32(ebp + 0x8); /* 0x15068B9C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x15068B9F: push ecx */
    eax = MEM32(ecx + 0x54); /* 0x15068BA0: mov eax, dword ptr [ecx + 0x54] */
    MEM32(edx + 0x54) = eax; /* 0x15068BA3: mov dword ptr [edx + 0x54], eax */
    eax = MEM32(ecx + 0x58); /* 0x15068BA6: mov eax, dword ptr [ecx + 0x58] */
    MEM32(edx + 0x58) = eax; /* 0x15068BA9: mov dword ptr [edx + 0x58], eax */
    eax = MEM32(ecx + 0x4); /* 0x15068BAC: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x15068BAF: mov dword ptr [edx + 4], eax */
    RECOMP_CALL(sub_15068680); /* 0x15068BB2: call 0x15068680 */
    RECOMP_FLAGS_IN();
L_15068BB7:
    RECOMP_CALL(sub_150566C0); /* 0x15068BB7: call 0x150566c0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068AC8); /* 0x15068BBC: call 0x15068ac8 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15068BC1u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15068BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068BD0u);

L_15068BD0:
    edi = edi; /* 0x15068BD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068BD2: push ebp */
    ebp = esp; /* 0x15068BD3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15068BD5: push ecx */
    PUSH32(esp, ebx); /* 0x15068BD6: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x15068BD7: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15068BDA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15068BDB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x15068BDD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068BFE; /* 0x15068BDF: jne 0x15068bfe */
L_15068BE1:
    RECOMP_CALL(sub_15036430); /* 0x15068BE1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15068BE6: push esi */
    PUSH32(esp, esi); /* 0x15068BE7: push esi */
    PUSH32(esp, esi); /* 0x15068BE8: push esi */
    PUSH32(esp, esi); /* 0x15068BE9: push esi */
    PUSH32(esp, esi); /* 0x15068BEA: push esi */
    MEM32(eax) = 0x16u; /* 0x15068BEB: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15068BF1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15068BF6: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15068BF9: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15068C76; /* 0x15068BFC: jmp 0x15068c76 */
L_15068BFE:
    PUSH32(esp, edi); /* 0x15068BFE: push edi */
    RECOMP_CALL(sub_15036310); /* 0x15068BFF: call 0x15036310 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x214u); /* 0x15068C04: push 0x214 */
    PUSH32(esp, 1); /* 0x15068C09: push 1 */
    RECOMP_CALL(sub_15048EE2); /* 0x15068C0B: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15068C10: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15068C12: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068C13: pop ecx */
    /* test edi, edi */ /* 0x15068C14: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068C61; /* 0x15068C16: je 0x15068c61 */
L_15068C18:
    RECOMP_CALL(sub_15068820); /* 0x15068C18: call 0x15068820 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax + 0x6C)); /* 0x15068C1D: push dword ptr [eax + 0x6c] */
    PUSH32(esp, edi); /* 0x15068C20: push edi */
    RECOMP_CALL(sub_150688AD); /* 0x15068C21: call 0x150688ad */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x15068C26: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)((MEM32(edi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x4) | 0xFFFFFFFFu));
    MEM32(edi + 0x4) = MEM32(edi + 0x4) | 0xFFFFFFFFu; /* 0x15068C29: or dword ptr [edi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x1C), esi */ /* 0x15068C2D: cmp dword ptr [ebp + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15068C30: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068C31: pop ecx */
    MEM32(edi + 0x58) = eax; /* 0x15068C32: mov dword ptr [edi + 0x58], eax */
    eax = ebp + (-0x4); /* 0x15068C35: lea eax, [ebp - 4] */
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + 0x1C); } /* 0x15068C38: cmovne eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x15068C3C: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15068C3D: push dword ptr [ebp + 0x18] */
    MEM32(edi + 0x54) = ebx; /* 0x15068C40: mov dword ptr [edi + 0x54], ebx */
    PUSH32(esp, edi); /* 0x15068C43: push edi */
    PUSH32(esp, 0x15068D10u); /* 0x15068C44: push 0x15068d10 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15068C49: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15068C4C: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0224)); /* 0x15068C4F: call dword ptr [0x150c0224] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15068C55: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068C75; /* 0x15068C57: jne 0x15068c75 */
L_15068C59:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15068C59: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15068C5F: mov esi, eax */
L_15068C61:
    PUSH32(esp, edi); /* 0x15068C61: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15068C62: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068C67: pop ecx */
    /* test esi, esi */ /* 0x15068C68: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068C73; /* 0x15068C6A: je 0x15068c73 */
L_15068C6C:
    PUSH32(esp, esi); /* 0x15068C6C: push esi */
    RECOMP_CALL(sub_150363FB); /* 0x15068C6D: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068C72: pop ecx */
L_15068C73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068C73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15068C75:
    edi = POP32_VAL(esp); /* 0x15068C75: pop edi */
L_15068C76:
    esi = POP32_VAL(esp); /* 0x15068C76: pop esi */
    ebx = POP32_VAL(esp); /* 0x15068C77: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15068C78: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068C79: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068C80u);

L_15068C80:
    PUSH32(esp, 0xCu); /* 0x15068C80: push 0xc */
    PUSH32(esp, 0x150B0E38u); /* 0x15068C82: push 0x150b0e38 */
    RECOMP_CALL(sub_1505E988); /* 0x15068C87: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068820); /* 0x15068C8C: call 0x15068820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15068C91: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + 0x58)); /* 0x15068C95: push dword ptr [eax + 0x58] */
    esi = MEM32(eax + 0x54); /* 0x15068C98: mov esi, dword ptr [eax + 0x54] */
    ecx = esi; /* 0x15068C9B: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15068C9D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15068CA3: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15068CA5: push eax */
    RECOMP_CALL(sub_15068CE0); /* 0x15068CA6: call 0x15068ce0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x15068CAB: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x15068CAE: mov eax, dword ptr [ecx] */
    eax = MEM32(eax); /* 0x15068CB0: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15068CB2: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, ecx); /* 0x15068CB5: push ecx */
    PUSH32(esp, eax); /* 0x15068CB6: push eax */
    RECOMP_CALL(sub_150567F0); /* 0x15068CB7: call 0x150567f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068CBC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068CBD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068CBE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068CE0u);

L_15068CE0:
    edi = edi; /* 0x15068CE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068CE2: push ebp */
    ebp = esp; /* 0x15068CE3: mov ebp, esp */
    RECOMP_CALL(sub_150566C0); /* 0x15068CE5: call 0x150566c0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068840); /* 0x15068CEA: call 0x15068840 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15068CEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068CFA; /* 0x15068CF1: je 0x15068cfa */
L_15068CF3:
    PUSH32(esp, eax); /* 0x15068CF3: push eax */
    RECOMP_CALL(sub_150687E3); /* 0x15068CF4: call 0x150687e3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068CF9: pop ecx */
L_15068CFA:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15068CFA: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0228)); /* 0x15068CFD: call dword ptr [0x150c0228] */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15068D03u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15068D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068D10u);

L_15068D10:
    edi = edi; /* 0x15068D10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068D12: push ebp */
    ebp = esp; /* 0x15068D13: mov ebp, esp */
    RECOMP_CALL(sub_15036310); /* 0x15068D15: call 0x15036310 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1506860C); /* 0x15068D1A: call 0x1506860c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15068D1F: push eax */
    RECOMP_ICALL(MEM32(0x150C0080)); /* 0x15068D20: call dword ptr [0x150c0080] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15068D26: mov edx, eax */
    /* test edx, edx */ /* 0x15068D28: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068D4C; /* 0x15068D2A: jne 0x15068d4c */
L_15068D2C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15068D2C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1506860C); /* 0x15068D2F: call 0x1506860c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15068D34: push eax */
    RECOMP_ICALL(MEM32(0x150C0084)); /* 0x15068D35: call dword ptr [0x150c0084] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15068D3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068D67; /* 0x15068D3D: jne 0x15068d67 */
L_15068D3F:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15068D3F: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15068D45: push eax */
    RECOMP_ICALL(MEM32(0x150C0228)); /* 0x15068D46: call dword ptr [0x150c0228] */
    RECOMP_FLAGS_IN();
L_15068D4C:
    ecx = MEM32(ebp + 0x8); /* 0x15068D4C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x15068D4F: push ecx */
    eax = MEM32(ecx + 0x54); /* 0x15068D50: mov eax, dword ptr [ecx + 0x54] */
    MEM32(edx + 0x54) = eax; /* 0x15068D53: mov dword ptr [edx + 0x54], eax */
    eax = MEM32(ecx + 0x58); /* 0x15068D56: mov eax, dword ptr [ecx + 0x58] */
    MEM32(edx + 0x58) = eax; /* 0x15068D59: mov dword ptr [edx + 0x58], eax */
    eax = MEM32(ecx + 0x4); /* 0x15068D5C: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x15068D5F: mov dword ptr [edx + 4], eax */
    RECOMP_CALL(sub_15068680); /* 0x15068D62: call 0x15068680 */
    RECOMP_FLAGS_IN();
L_15068D67:
    RECOMP_CALL(sub_150566C0); /* 0x15068D67: call 0x150566c0 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068C80); /* 0x15068D6C: call 0x15068c80 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15068D71u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15068D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068D80u);

L_15068D80:
    edi = edi; /* 0x15068D80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068D82: push ebp */
    ebp = esp; /* 0x15068D83: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15068D85: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15068D86: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi * 8 + 0x150BC4E0), 0 */ /* 0x15068D89: cmp dword ptr [esi*8 + 0x150bc4e0], 0 */
    _flag_a = (uint32_t)(MEM32(esi * 8 + 0x150BC4E0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068DA6; /* 0x15068D91: jne 0x15068da6 */
L_15068D93:
    PUSH32(esp, esi); /* 0x15068D93: push esi */
    RECOMP_CALL(sub_15068E1A); /* 0x15068D94: call 0x15068e1a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068D99: pop ecx */
    /* test eax, eax */ /* 0x15068D9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068DA6; /* 0x15068D9C: jne 0x15068da6 */
L_15068D9E:
    PUSH32(esp, 0x11u); /* 0x15068D9E: push 0x11 */
    RECOMP_CALL(sub_15068070); /* 0x15068DA0: call 0x15068070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068DA5: pop ecx */
L_15068DA6:
    PUSH32(esp, MEM32(esi * 8 + 0x150BC4E0)); /* 0x15068DA6: push dword ptr [esi*8 + 0x150bc4e0] */
    RECOMP_ICALL(MEM32(0x150C0268)); /* 0x15068DAD: call dword ptr [0x150c0268] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x15068DB3: pop esi */
    ebp = POP32_VAL(esp); /* 0x15068DB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068DB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068E1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068E1Au);

L_15068E1A:
    PUSH32(esp, 0xCu); /* 0x15068E1A: push 0xc */
    PUSH32(esp, 0x150B0E58u); /* 0x15068E1C: push 0x150b0e58 */
    RECOMP_CALL(sub_1505E988); /* 0x15068E21: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15068E26: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15068E28: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x15068E29: mov dword ptr [ebp - 0x1c], esi */
    /* cmp MEM32(0x150BDB68), 0 */ /* 0x15068E2C: cmp dword ptr [0x150bdb68], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDB68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068E4D; /* 0x15068E33: jne 0x15068e4d */
L_15068E35:
    RECOMP_CALL(sub_15069F21); /* 0x15068E35: call 0x15069f21 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Eu); /* 0x15068E3A: push 0x1e */
    RECOMP_CALL(sub_15069F60); /* 0x15068E3C: call 0x15069f60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFu); /* 0x15068E41: push 0xff */
    RECOMP_CALL(sub_15068020); /* 0x15068E46: call 0x15068020 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068E4B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15068E4C: pop ecx */
L_15068E4D:
    ebx = MEM32(ebp + 0x8); /* 0x15068E4D: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx * 8 + 0x150BC4E0), 0 */ /* 0x15068E50: cmp dword ptr [ebx*8 + 0x150bc4e0], 0 */
    _flag_a = (uint32_t)(MEM32(ebx * 8 + 0x150BC4E0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068ED2; /* 0x15068E58: jne 0x15068ed2 */
L_15068E5A:
    PUSH32(esp, 0x18u); /* 0x15068E5A: push 0x18 */
    RECOMP_CALL(sub_15048F2F); /* 0x15068E5C: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068E61: pop ecx */
    edi = eax; /* 0x15068E62: mov edi, eax */
    /* test edi, edi */ /* 0x15068E64: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068E77; /* 0x15068E66: jne 0x15068e77 */
L_15068E68:
    RECOMP_CALL(sub_15036430); /* 0x15068E68: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15068E6D: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068E73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15068ED4; /* 0x15068E75: jmp 0x15068ed4 */
L_15068E77:
    PUSH32(esp, 0xAu); /* 0x15068E77: push 0xa */
    RECOMP_CALL(sub_15068D80); /* 0x15068E79: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068E7E: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15068E7F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx * 8 + 0x150BC4E0), 0 */ /* 0x15068E83: cmp dword ptr [ebx*8 + 0x150bc4e0], 0 */
    _flag_a = (uint32_t)(MEM32(ebx * 8 + 0x150BC4E0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068EBF; /* 0x15068E8B: jne 0x15068ebf */
L_15068E8D:
    PUSH32(esp, 0xFA0u); /* 0x15068E8D: push 0xfa0 */
    PUSH32(esp, edi); /* 0x15068E92: push edi */
    RECOMP_ICALL(MEM32(0x150C0260)); /* 0x15068E93: call dword ptr [0x150c0260] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15068E99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15068EB6; /* 0x15068E9B: jne 0x15068eb6 */
L_15068E9D:
    PUSH32(esp, edi); /* 0x15068E9D: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15068E9E: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068EA3: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x15068EA4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15068EA9: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15068EAF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x15068EB1: mov dword ptr [ebp - 0x1c], esi */
    goto L_15068EC6; /* 0x15068EB4: jmp 0x15068ec6 */
L_15068EB6:
    MEM32(ebx * 8 + 0x150BC4E0) = edi; /* 0x15068EB6: mov dword ptr [ebx*8 + 0x150bc4e0], edi */
    goto L_15068EC6; /* 0x15068EBD: jmp 0x15068ec6 */
L_15068EBF:
    PUSH32(esp, edi); /* 0x15068EBF: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15068EC0: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15068EC5: pop ecx */
L_15068EC6:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15068EC6: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15068EE7); /* 0x15068ECD: call 0x15068ee7 */
    RECOMP_FLAGS_IN();
L_15068ED2:
    eax = esi; /* 0x15068ED2: mov eax, esi */
L_15068ED4:
    ecx = MEM32(ebp + (-0x10)); /* 0x15068ED4: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15068ED7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15068EDE: pop ecx */
    edi = POP32_VAL(esp); /* 0x15068EDF: pop edi */
    esi = POP32_VAL(esp); /* 0x15068EE0: pop esi */
    ebx = POP32_VAL(esp); /* 0x15068EE1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15068EE2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068EE3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068EE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068EE7u);

L_15068EE7:
    PUSH32(esp, MEM32(0x150BC530)); /* 0x15068EE7: push dword ptr [0x150bc530] */
    RECOMP_ICALL(MEM32(0x150C026C)); /* 0x15068EED: call dword ptr [0x150c026c] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068EF3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068EFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068EFAu);

L_15068EFA:
    edi = edi; /* 0x15068EFA: mov edi, edi */
    PUSH32(esp, esi); /* 0x15068EFC: push esi */
    PUSH32(esp, edi); /* 0x15068EFD: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15068EFE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x150BC4E4u; /* 0x15068F00: mov edi, 0x150bc4e4 */
L_15068F05:
    /* cmp MEM32(edi + esi * 8), 1 */ /* 0x15068F05: cmp dword ptr [edi + esi*8], 1 */
    _flag_a = (uint32_t)(MEM32(edi + esi * 8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068F28; /* 0x15068F09: jne 0x15068f28 */
L_15068F0B:
    PUSH32(esp, 0x04000000u); /* 0x15068F0B: push 0x4000000 */
    PUSH32(esp, 0xFA0u); /* 0x15068F10: push 0xfa0 */
    PUSH32(esp, MEM32(esi * 8 + 0x150BC4E0)); /* 0x15068F15: push dword ptr [esi*8 + 0x150bc4e0] */
    RECOMP_CALL(sub_150AF78B); /* 0x15068F1C: call 0x150af78b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15068F21: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15068F24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068F34; /* 0x15068F26: je 0x15068f34 */
L_15068F28:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15068F28: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x24u */ /* 0x15068F29: cmp esi, 0x24 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15068F05; /* 0x15068F2C: jl 0x15068f05 */
L_15068F2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068F2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15068F30: inc eax */
    _flag_k = FK_INC;
L_15068F31:
    edi = POP32_VAL(esp); /* 0x15068F31: pop edi */
    esi = POP32_VAL(esp); /* 0x15068F32: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068F33: ret  */
L_15068F34:
    _flag_a = (uint32_t)(MEM32(esi * 8 + 0x150BC4E0)); _flag_b = (uint32_t)(0);
    MEM32(esi * 8 + 0x150BC4E0) = MEM32(esi * 8 + 0x150BC4E0) & 0; /* 0x15068F34: and dword ptr [esi*8 + 0x150bc4e0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15068F3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15068F31; /* 0x15068F3E: jmp 0x15068f31 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15068F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068F50u);

L_15068F50:
    edi = edi; /* 0x15068F50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068F52: push ebp */
    ebp = esp; /* 0x15068F53: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15068F55: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax * 8 + 0x150BC4E0)); /* 0x15068F58: push dword ptr [eax*8 + 0x150bc4e0] */
    RECOMP_ICALL(MEM32(0x150C026C)); /* 0x15068F5F: call dword ptr [0x150c026c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15068F65: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15068F66: ret  */
    RECOMP_REGS_OUT();
}

void sub_15068F76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15068F76u);

L_15068F76:
    edi = edi; /* 0x15068F76: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15068F78: push ebp */
    ebp = esp; /* 0x15068F79: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15068F7B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15068F7E: push ebx */
    PUSH32(esp, esi); /* 0x15068F7F: push esi */
    PUSH32(esp, edi); /* 0x15068F80: push edi */
    PUSH32(esp, 0x104u); /* 0x15068F81: push 0x104 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15068F86: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x150BE000u; /* 0x15068F88: mov edi, 0x150be000 */
    PUSH32(esp, edi); /* 0x15068F8D: push edi */
    PUSH32(esp, ebx); /* 0x15068F8E: push ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15068F8F: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15068F92: mov dword ptr [ebp - 8], ebx */
    MEM8(0x150BE104) = (uint8_t)(LO8(ebx)); /* 0x15068F95: mov byte ptr [0x150be104], bl */
    RECOMP_ICALL(MEM32(0x150C0168)); /* 0x15068F9B: call dword ptr [0x150c0168] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDAFC); /* 0x15068FA1: mov esi, dword ptr [0x150bdafc] */
    MEM32(0x150BDFD4) = edi; /* 0x15068FA7: mov dword ptr [0x150bdfd4], edi */
    /* test esi, esi */ /* 0x15068FAD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15068FB5; /* 0x15068FAF: je 0x15068fb5 */
L_15068FB1:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x15068FB1: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15068FB7; /* 0x15068FB3: jne 0x15068fb7 */
L_15068FB5:
    esi = edi; /* 0x15068FB5: mov esi, edi */
L_15068FB7:
    eax = ebp + (-0x8); /* 0x15068FB7: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15068FBA: push eax */
    eax = ebp + (-0x4); /* 0x15068FBB: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15068FBE: push eax */
    PUSH32(esp, ebx); /* 0x15068FBF: push ebx */
    PUSH32(esp, ebx); /* 0x15068FC0: push ebx */
    PUSH32(esp, esi); /* 0x15068FC1: push esi */
    RECOMP_CALL(sub_15069047); /* 0x15068FC2: call 0x15069047 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x15068FC7: mov ebx, dword ptr [ebp - 4] */
    eax = ebp + (-0xC); /* 0x15068FCA: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15068FCD: push eax */
    PUSH32(esp, 4); /* 0x15068FCE: push 4 */
    ecx = POP32_VAL(esp); /* 0x15068FD0: pop ecx */
    eax = ebx; /* 0x15068FD1: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x15068FD3: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x15068FD5: push edx */
    PUSH32(esp, eax); /* 0x15068FD6: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x15068FD7: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15068FDC: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15068FDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15069039; /* 0x15068FE1: js 0x15069039 */
L_15068FE3:
    eax = ebp + (-0x10); /* 0x15068FE3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x15068FE6: push eax */
    PUSH32(esp, 0); /* 0x15068FE7: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15068FE9: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_15036A6E); /* 0x15068FEC: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15068FF1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15068FF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15069039; /* 0x15068FF6: js 0x15069039 */
L_15068FF8:
    eax = MEM32(ebp + (-0x10)); /* 0x15068FF8: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x15068FFB: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x15068FFE: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15069039; /* 0x15069001: jb 0x15069039 */
L_15069003:
    PUSH32(esp, eax); /* 0x15069003: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15069004: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15069009: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1506900B: pop ecx */
    /* test edi, edi */ /* 0x1506900C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069039; /* 0x1506900E: je 0x15069039 */
L_15069010:
    eax = ebp + (-0x8); /* 0x15069010: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15069013: push eax */
    eax = ebp + (-0x4); /* 0x15069014: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15069017: push eax */
    ecx = edi + ebx * 4; /* 0x15069018: lea ecx, [edi + ebx*4] */
    PUSH32(esp, ecx); /* 0x1506901B: push ecx */
    PUSH32(esp, edi); /* 0x1506901C: push edi */
    PUSH32(esp, esi); /* 0x1506901D: push esi */
    RECOMP_CALL(sub_15069047); /* 0x1506901E: call 0x15069047 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x15069023: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15069026: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15069029: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x150BDFC4) = edi; /* 0x1506902A: mov dword ptr [0x150bdfc4], edi */
    MEM32(0x150BDFC0) = eax; /* 0x15069030: mov dword ptr [0x150bdfc0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069035: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1506903C; /* 0x15069037: jmp 0x1506903c */
L_15069039:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15069039: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506903C:
    edi = POP32_VAL(esp); /* 0x1506903C: pop edi */
    esi = POP32_VAL(esp); /* 0x1506903D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1506903E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1506903F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069040: ret  */
    RECOMP_REGS_OUT();
}

void sub_15069047(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069047u);

L_15069047:
    edi = edi; /* 0x15069047: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15069049: push ebp */
    ebp = esp; /* 0x1506904A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1506904C: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1506904F: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x18); /* 0x15069052: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x15069055: push ebx */
    PUSH32(esp, esi); /* 0x15069056: push esi */
    PUSH32(esp, edi); /* 0x15069057: push edi */
    edi = MEM32(ebp + 0x14); /* 0x15069058: mov edi, dword ptr [ebp + 0x14] */
    ebx = MEM32(edx); /* 0x1506905B: mov ebx, dword ptr [edx] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1506905D: mov dword ptr [ebp - 0xc], ebx */
    ecx = MEM32(edi); /* 0x15069060: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x15069062: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = 1; /* 0x15069065: mov dword ptr [edi], 1 */
    edi = MEM32(ebp + 0x8); /* 0x1506906B: mov edi, dword ptr [ebp + 8] */
    esi = eax + ecx * 4; /* 0x1506906E: lea esi, [eax + ecx*4] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x15069071: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x14)) = esi; /* 0x15069074: mov dword ptr [ebp - 0x14], esi */
    esi = MEM32(ebp + 0x10); /* 0x15069077: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x1506907A: add ebx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1506907C: mov dword ptr [ebp - 4], ebx */
    /* test eax, eax */ /* 0x1506907F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069095; /* 0x15069081: je 0x15069095 */
L_15069083:
    /* cmp ecx, 1 */ /* 0x15069083: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15069095; /* 0x15069086: jl 0x15069095 */
L_15069088:
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x15069088: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069095; /* 0x1506908B: jae 0x15069095 */
L_1506908D:
    MEM32(eax) = esi; /* 0x1506908D: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1506908F: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x15069092: mov dword ptr [ebp + 0xc], eax */
L_15069095:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15069095: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x15069097: mov dword ptr [ebp - 0x10], ecx */
    goto L_1506909F; /* 0x1506909A: jmp 0x1506909f */
L_1506909C:
    ebx = MEM32(ebp + (-0x4)); /* 0x1506909C: mov ebx, dword ptr [ebp - 4] */
L_1506909F:
    /* cmp MEM8(edi), 0x22u */ /* 0x1506909F: cmp byte ptr [edi], 0x22 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150690B5; /* 0x150690A2: jne 0x150690b5 */
L_150690A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150690A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, 0x22u); /* 0x150690A6: mov bl, 0x22 */
    /* test ecx, ecx */ /* 0x150690A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x150690AA: sete al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150690AD: inc edi */
    _flag_k = FK_INC;
    ecx = eax; /* 0x150690AE: mov ecx, eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x150690B0: mov dword ptr [ebp - 0x10], ecx */
    goto L_15069100; /* 0x150690B3: jmp 0x15069100 */
L_150690B5:
    eax = MEM32(edx); /* 0x150690B5: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150690B7: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x150690B8: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x150690BA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150690CC; /* 0x150690BC: je 0x150690cc */
L_150690BE:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x150690BE: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150690CC; /* 0x150690C1: jg 0x150690cc */
L_150690C3:
    /* cmp esi, ebx */ /* 0x150690C3: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150690CC; /* 0x150690C5: jae 0x150690cc */
L_150690C7:
    SET_LO8(eax, MEM8(edi)); /* 0x150690C7: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x150690C9: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150690CB: inc esi */
    _flag_k = FK_INC;
L_150690CC:
    SET_LO8(ebx, MEM8(edi)); /* 0x150690CC: mov bl, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150690CE: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ebx); /* 0x150690CF: movzx eax, bl */
    PUSH32(esp, eax); /* 0x150690D2: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150690D3: call 0x15050550 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x150690D8: mov edx, dword ptr [ebp + 0x18] */
    ecx = POP32_VAL(esp); /* 0x150690DB: pop ecx */
    /* test eax, eax */ /* 0x150690DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150690F9; /* 0x150690DE: je 0x150690f9 */
L_150690E0:
    eax = MEM32(edx); /* 0x150690E0: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150690E2: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x150690E3: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x150690E5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150690F8; /* 0x150690E7: je 0x150690f8 */
L_150690E9:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x150690E9: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150690F8; /* 0x150690EC: jg 0x150690f8 */
L_150690EE:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x150690EE: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150690F8; /* 0x150690F1: jae 0x150690f8 */
L_150690F3:
    SET_LO8(eax, MEM8(edi)); /* 0x150690F3: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x150690F5: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150690F7: inc esi */
    _flag_k = FK_INC;
L_150690F8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150690F8: inc edi */
    _flag_k = FK_INC;
L_150690F9:
    /* test LO8(ebx), LO8(ebx) */ /* 0x150690F9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069118; /* 0x150690FB: je 0x15069118 */
L_150690FD:
    ecx = MEM32(ebp + (-0x10)); /* 0x150690FD: mov ecx, dword ptr [ebp - 0x10] */
L_15069100:
    /* test ecx, ecx */ /* 0x15069100: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506909C; /* 0x15069102: jne 0x1506909c */
L_15069104:
    /* cmp LO8(ebx), 0x20u */ /* 0x15069104: cmp bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506910E; /* 0x15069107: je 0x1506910e */
L_15069109:
    /* cmp LO8(ebx), 9 */ /* 0x15069109: cmp bl, 9 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506909C; /* 0x1506910C: jne 0x1506909c */
L_1506910E:
    /* test esi, esi */ /* 0x1506910E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069119; /* 0x15069110: je 0x15069119 */
L_15069112:
    MEM8(esi + (-0x1)) = (uint8_t)(0); /* 0x15069112: mov byte ptr [esi - 1], 0 */
    goto L_15069119; /* 0x15069116: jmp 0x15069119 */
L_15069118:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15069118: dec edi */
    _flag_k = FK_DEC;
L_15069119:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x15069119: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x18); /* 0x1506911D: mov ebx, dword ptr [ebp + 0x18] */
L_15069120:
    SET_LO8(eax, MEM8(edi)); /* 0x15069120: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15069122: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069133; /* 0x15069124: je 0x15069133 */
L_15069126:
    /* cmp LO8(eax), 0x20u */ /* 0x15069126: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506912E; /* 0x15069128: je 0x1506912e */
L_1506912A:
    /* cmp LO8(eax), 9 */ /* 0x1506912A: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069133; /* 0x1506912C: jne 0x15069133 */
L_1506912E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1506912E: inc edi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edi)); /* 0x1506912F: mov al, byte ptr [edi] */
    RECOMP_BACKEDGE();
    goto L_15069126; /* 0x15069131: jmp 0x15069126 */
L_15069133:
    edx = MEM32(ebp + 0x14); /* 0x15069133: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx); /* 0x15069136: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15069138: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx) = ecx; /* 0x15069139: mov dword ptr [edx], ecx */
    edx = MEM32(ebp + 0xC); /* 0x1506913B: mov edx, dword ptr [ebp + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x1506913E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069236; /* 0x15069140: je 0x15069236 */
L_15069146:
    /* test edx, edx */ /* 0x15069146: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506915C; /* 0x15069148: je 0x1506915c */
L_1506914A:
    /* cmp ecx, MEM32(ebp + (-0x18)) */ /* 0x1506914A: cmp ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1506915C; /* 0x1506914D: jg 0x1506915c */
L_1506914F:
    /* cmp edx, MEM32(ebp + (-0x14)) */ /* 0x1506914F: cmp edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506915C; /* 0x15069152: jae 0x1506915c */
L_15069154:
    MEM32(edx) = esi; /* 0x15069154: mov dword ptr [edx], esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x15069156: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x15069159: mov dword ptr [ebp + 0xc], edx */
L_1506915C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1506915C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1506915E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1506915F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x15069161: mov dword ptr [ebp - 0x10], edx */
    goto L_15069168; /* 0x15069164: jmp 0x15069168 */
L_15069166:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069166: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15069167: inc ecx */
    _flag_k = FK_INC;
L_15069168:
    SET_LO8(eax, MEM8(edi)); /* 0x15069168: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1506916A: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069166; /* 0x1506916C: je 0x15069166 */
L_1506916E:
    /* cmp LO8(eax), 0x22u */ /* 0x1506916E: cmp al, 0x22 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069197; /* 0x15069170: jne 0x15069197 */
L_15069172:
    /* test LO8(ecx), 1 */ /* 0x15069172: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069195; /* 0x15069175: jne 0x15069195 */
L_15069177:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x15069177: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069185; /* 0x1506917B: je 0x15069185 */
L_1506917D:
    /* cmp MEM8(edi + 0x1), LO8(eax) */ /* 0x1506917D: cmp byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069185; /* 0x15069180: jne 0x15069185 */
L_15069182:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069182: inc edi */
    _flag_k = FK_INC;
    goto L_1506918A; /* 0x15069183: jmp 0x1506918a */
L_15069185:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15069185: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x15069187: mov dword ptr [ebp - 0x10], edx */
L_1506918A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506918A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1506918C: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1506918F: sete al */
    MEM32(ebp + (-0x8)) = eax; /* 0x15069192: mov dword ptr [ebp - 8], eax */
L_15069195:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15069195: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x15069195: shr ecx, 1 */
L_15069197:
    /* test ecx, ecx */ /* 0x15069197: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150691BC; /* 0x15069199: je 0x150691bc */
L_1506919B:
    edx = MEM32(ebp + (-0x4)); /* 0x1506919B: mov edx, dword ptr [ebp - 4] */
L_1506919E:
    eax = MEM32(ebx); /* 0x1506919E: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150691A0: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150691A1: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx) = eax; /* 0x150691A2: mov dword ptr [ebx], eax */
    /* test esi, esi */ /* 0x150691A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150691B5; /* 0x150691A6: je 0x150691b5 */
L_150691A8:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x150691A8: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150691B5; /* 0x150691AB: jg 0x150691b5 */
L_150691AD:
    /* cmp esi, edx */ /* 0x150691AD: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150691B5; /* 0x150691AF: jae 0x150691b5 */
L_150691B1:
    MEM8(esi) = (uint8_t)(0x5Cu); /* 0x150691B1: mov byte ptr [esi], 0x5c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150691B4: inc esi */
    _flag_k = FK_INC;
L_150691B5:
    /* test ecx, ecx */ /* 0x150691B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506919E; /* 0x150691B7: jne 0x1506919e */
L_150691B9:
    edx = MEM32(ebp + (-0x10)); /* 0x150691B9: mov edx, dword ptr [ebp - 0x10] */
L_150691BC:
    SET_LO8(eax, MEM8(edi)); /* 0x150691BC: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x150691BE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506920E; /* 0x150691C0: je 0x1506920e */
L_150691C2:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x150691C2: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150691D0; /* 0x150691C6: jne 0x150691d0 */
L_150691C8:
    /* cmp LO8(eax), 0x20u */ /* 0x150691C8: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506920E; /* 0x150691CA: je 0x1506920e */
L_150691CC:
    /* cmp LO8(eax), 9 */ /* 0x150691CC: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506920E; /* 0x150691CE: je 0x1506920e */
L_150691D0:
    /* test edx, edx */ /* 0x150691D0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069208; /* 0x150691D2: je 0x15069208 */
L_150691D4:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x150691D4: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x150691D6: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x150691D9: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150691DA: call 0x15050550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150691DF: pop ecx */
    /* test esi, esi */ /* 0x150691E0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069201; /* 0x150691E2: je 0x15069201 */
L_150691E4:
    /* test eax, eax */ /* 0x150691E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150691F5; /* 0x150691E6: je 0x150691f5 */
L_150691E8:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x150691E8: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069208; /* 0x150691EB: jae 0x15069208 */
L_150691ED:
    SET_LO8(eax, MEM8(edi)); /* 0x150691ED: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x150691EF: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150691F1: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150691F2: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x150691F3: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_150691F5:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x150691F5: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069208; /* 0x150691F8: jae 0x15069208 */
L_150691FA:
    SET_LO8(eax, MEM8(edi)); /* 0x150691FA: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x150691FC: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150691FE: inc esi */
    _flag_k = FK_INC;
    goto L_15069208; /* 0x150691FF: jmp 0x15069208 */
L_15069201:
    /* test eax, eax */ /* 0x15069201: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069208; /* 0x15069203: je 0x15069208 */
L_15069205:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069205: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x15069206: inc dword ptr [ebx] */
    _flag_k = FK_INC;
L_15069208:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069208: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1506915C; /* 0x15069209: jmp 0x1506915c */
L_1506920E:
    eax = MEM32(ebx); /* 0x1506920E: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069210: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx) = eax; /* 0x15069211: mov dword ptr [ebx], eax */
    /* test esi, esi */ /* 0x15069213: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069120; /* 0x15069215: je 0x15069120 */
L_1506921B:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1506921B: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_15069120; /* 0x1506921E: jg 0x15069120 */
L_15069224:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x15069224: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069120; /* 0x15069227: jae 0x15069120 */
L_1506922D:
    MEM8(esi) = (uint8_t)(0); /* 0x1506922D: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15069230: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15069120; /* 0x15069231: jmp 0x15069120 */
L_15069236:
    edi = POP32_VAL(esp); /* 0x15069236: pop edi */
    esi = POP32_VAL(esp); /* 0x15069237: pop esi */
    ebx = POP32_VAL(esp); /* 0x15069238: pop ebx */
    /* test edx, edx */ /* 0x15069239: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506924A; /* 0x1506923B: je 0x1506924a */
L_1506923D:
    /* cmp ecx, MEM32(ebp + (-0x18)) */ /* 0x1506923D: cmp ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1506924A; /* 0x15069240: jg 0x1506924a */
L_15069242:
    /* cmp edx, MEM32(ebp + (-0x14)) */ /* 0x15069242: cmp edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506924A; /* 0x15069245: jae 0x1506924a */
L_15069247:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x15069247: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506924A:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1506924A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506924B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15069252(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069252u);

L_15069252:
    edi = edi; /* 0x15069252: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15069254: push ebp */
    ebp = esp; /* 0x15069255: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15069257: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1506925A: push ebx */
    PUSH32(esp, esi); /* 0x1506925B: push esi */
    PUSH32(esp, edi); /* 0x1506925C: push edi */
    PUSH32(esp, 0x104u); /* 0x1506925D: push 0x104 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15069262: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x150BE108u; /* 0x15069264: mov edi, 0x150be108 */
    PUSH32(esp, edi); /* 0x15069269: push edi */
    PUSH32(esp, ebx); /* 0x1506926A: push ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1506926B: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1506926E: mov dword ptr [ebp - 8], ebx */
    MEM8(0x150BE20C) = (uint8_t)(LO8(ebx)); /* 0x15069271: mov byte ptr [0x150be20c], bl */
    RECOMP_ICALL(MEM32(0x150C0168)); /* 0x15069277: call dword ptr [0x150c0168] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDAFC); /* 0x1506927D: mov esi, dword ptr [0x150bdafc] */
    MEM32(0x150BDFD4) = edi; /* 0x15069283: mov dword ptr [0x150bdfd4], edi */
    /* test esi, esi */ /* 0x15069289: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069291; /* 0x1506928B: je 0x15069291 */
L_1506928D:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x1506928D: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069293; /* 0x1506928F: jne 0x15069293 */
L_15069291:
    esi = edi; /* 0x15069291: mov esi, edi */
L_15069293:
    eax = ebp + (-0x8); /* 0x15069293: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15069296: push eax */
    eax = ebp + (-0x4); /* 0x15069297: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1506929A: push eax */
    PUSH32(esp, ebx); /* 0x1506929B: push ebx */
    PUSH32(esp, ebx); /* 0x1506929C: push ebx */
    PUSH32(esp, esi); /* 0x1506929D: push esi */
    RECOMP_CALL(sub_15069328); /* 0x1506929E: call 0x15069328 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x150692A3: mov ebx, dword ptr [ebp - 4] */
    eax = ebp + (-0xC); /* 0x150692A6: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x150692A9: push eax */
    PUSH32(esp, 4); /* 0x150692AA: push 4 */
    ecx = POP32_VAL(esp); /* 0x150692AC: pop ecx */
    eax = ebx; /* 0x150692AD: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x150692AF: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x150692B1: push edx */
    PUSH32(esp, eax); /* 0x150692B2: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x150692B3: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x150692B8: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150692BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1506931A; /* 0x150692BD: js 0x1506931a */
L_150692BF:
    eax = ebp + (-0x10); /* 0x150692BF: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150692C2: push eax */
    PUSH32(esp, 0); /* 0x150692C3: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x150692C5: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_15036A6E); /* 0x150692C8: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150692CD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150692D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1506931A; /* 0x150692D2: js 0x1506931a */
L_150692D4:
    eax = MEM32(ebp + (-0x10)); /* 0x150692D4: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x150692D7: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x150692DA: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1506931A; /* 0x150692DD: jb 0x1506931a */
L_150692DF:
    PUSH32(esp, eax); /* 0x150692DF: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x150692E0: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150692E5: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x150692E7: pop ecx */
    /* test edi, edi */ /* 0x150692E8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506931A; /* 0x150692EA: je 0x1506931a */
L_150692EC:
    eax = ebp + (-0x8); /* 0x150692EC: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150692EF: push eax */
    eax = ebp + (-0x4); /* 0x150692F0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150692F3: push eax */
    ecx = edi + ebx * 4; /* 0x150692F4: lea ecx, [edi + ebx*4] */
    PUSH32(esp, ecx); /* 0x150692F7: push ecx */
    PUSH32(esp, edi); /* 0x150692F8: push edi */
    PUSH32(esp, esi); /* 0x150692F9: push esi */
    RECOMP_CALL(sub_15069328); /* 0x150692FA: call 0x15069328 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x150692FF: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15069302: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15069305: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x150BDFC4) = edi; /* 0x15069306: mov dword ptr [0x150bdfc4], edi */
    MEM32(0x150BDFC0) = eax; /* 0x1506930C: mov dword ptr [0x150bdfc0], eax */
    RECOMP_CALL(sub_1506A0CA); /* 0x15069311: call 0x1506a0ca */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15069316: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506931D; /* 0x15069318: je 0x1506931d */
L_1506931A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1506931A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506931D:
    edi = POP32_VAL(esp); /* 0x1506931D: pop edi */
    esi = POP32_VAL(esp); /* 0x1506931E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1506931F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15069320: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069321: ret  */
    RECOMP_REGS_OUT();
}

void sub_15069328(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069328u);

L_15069328:
    edi = edi; /* 0x15069328: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506932A: push ebp */
    ebp = esp; /* 0x1506932B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1506932D: sub esp, 0x18 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x18); /* 0x15069330: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x15069333: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x15069336: push ebx */
    PUSH32(esp, esi); /* 0x15069337: push esi */
    ecx = MEM32(edx); /* 0x15069338: mov ecx, dword ptr [edx] */
    esi = MEM32(ebp + 0x10); /* 0x1506933A: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1506933D: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1506933E: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15069341: mov dword ptr [ebp - 8], ecx */
    ebx = MEM32(edi); /* 0x15069344: mov ebx, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x15069346: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ebx; /* 0x15069349: mov dword ptr [ebp - 0x14], ebx */
    MEM32(edi) = 1; /* 0x1506934C: mov dword ptr [edi], 1 */
    edi = MEM32(ebp + 0x8); /* 0x15069352: mov edi, dword ptr [ebp + 8] */
    ebx = eax + ebx * 4; /* 0x15069355: lea ebx, [eax + ebx*4] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x15069358: mov dword ptr [ebp - 0x18], ebx */
    ebx = ecx + esi; /* 0x1506935B: lea ebx, [ecx + esi] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1506935E: mov dword ptr [ebp - 4], ebx */
    /* test eax, eax */ /* 0x15069361: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069378; /* 0x15069363: je 0x15069378 */
L_15069365:
    /* cmp MEM32(ebp + (-0x14)), 1 */ /* 0x15069365: cmp dword ptr [ebp - 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15069378; /* 0x15069369: jl 0x15069378 */
L_1506936B:
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x1506936B: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069378; /* 0x1506936E: jae 0x15069378 */
L_15069370:
    MEM32(eax) = esi; /* 0x15069370: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x15069372: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x15069375: mov dword ptr [ebp + 0xc], eax */
L_15069378:
    eax = MEM32(edx); /* 0x15069378: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1506937A: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x1506937B: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x1506937D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506938E; /* 0x1506937F: je 0x1506938e */
L_15069381:
    /* cmp eax, ecx */ /* 0x15069381: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1506938E; /* 0x15069383: jg 0x1506938e */
L_15069385:
    /* cmp esi, ebx */ /* 0x15069385: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506938E; /* 0x15069387: jae 0x1506938e */
L_15069389:
    SET_LO8(eax, MEM8(edi)); /* 0x15069389: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1506938B: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1506938D: inc esi */
    _flag_k = FK_INC;
L_1506938E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1506938E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x15069390: mov dword ptr [ebp - 0x10], ecx */
    goto L_15069398; /* 0x15069393: jmp 0x15069398 */
L_15069395:
    ebx = MEM32(ebp + (-0x4)); /* 0x15069395: mov ebx, dword ptr [ebp - 4] */
L_15069398:
    /* cmp MEM8(edi), 0x22u */ /* 0x15069398: cmp byte ptr [edi], 0x22 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150693AE; /* 0x1506939B: jne 0x150693ae */
L_1506939D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506939D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, 0x22u); /* 0x1506939F: mov bl, 0x22 */
    /* test ecx, ecx */ /* 0x150693A1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x150693A3: sete al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150693A6: inc edi */
    _flag_k = FK_INC;
    ecx = eax; /* 0x150693A7: mov ecx, eax */
    MEM32(ebp + (-0x10)) = ecx; /* 0x150693A9: mov dword ptr [ebp - 0x10], ecx */
    goto L_150693F9; /* 0x150693AC: jmp 0x150693f9 */
L_150693AE:
    eax = MEM32(edx); /* 0x150693AE: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150693B0: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x150693B1: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x150693B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150693C5; /* 0x150693B5: je 0x150693c5 */
L_150693B7:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x150693B7: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150693C5; /* 0x150693BA: jg 0x150693c5 */
L_150693BC:
    /* cmp esi, ebx */ /* 0x150693BC: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150693C5; /* 0x150693BE: jae 0x150693c5 */
L_150693C0:
    SET_LO8(eax, MEM8(edi)); /* 0x150693C0: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x150693C2: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150693C4: inc esi */
    _flag_k = FK_INC;
L_150693C5:
    SET_LO8(ebx, MEM8(edi)); /* 0x150693C5: mov bl, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150693C7: inc edi */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ebx); /* 0x150693C8: movzx eax, bl */
    PUSH32(esp, eax); /* 0x150693CB: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150693CC: call 0x15050550 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x150693D1: mov edx, dword ptr [ebp + 0x18] */
    ecx = POP32_VAL(esp); /* 0x150693D4: pop ecx */
    /* test eax, eax */ /* 0x150693D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150693F2; /* 0x150693D7: je 0x150693f2 */
L_150693D9:
    eax = MEM32(edx); /* 0x150693D9: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150693DB: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x150693DC: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x150693DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150693F1; /* 0x150693E0: je 0x150693f1 */
L_150693E2:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x150693E2: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150693F1; /* 0x150693E5: jg 0x150693f1 */
L_150693E7:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x150693E7: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150693F1; /* 0x150693EA: jae 0x150693f1 */
L_150693EC:
    SET_LO8(eax, MEM8(edi)); /* 0x150693EC: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x150693EE: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150693F0: inc esi */
    _flag_k = FK_INC;
L_150693F1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150693F1: inc edi */
    _flag_k = FK_INC;
L_150693F2:
    /* test LO8(ebx), LO8(ebx) */ /* 0x150693F2: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069411; /* 0x150693F4: je 0x15069411 */
L_150693F6:
    ecx = MEM32(ebp + (-0x10)); /* 0x150693F6: mov ecx, dword ptr [ebp - 0x10] */
L_150693F9:
    /* test ecx, ecx */ /* 0x150693F9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069395; /* 0x150693FB: jne 0x15069395 */
L_150693FD:
    /* cmp LO8(ebx), 0x20u */ /* 0x150693FD: cmp bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069407; /* 0x15069400: je 0x15069407 */
L_15069402:
    /* cmp LO8(ebx), 9 */ /* 0x15069402: cmp bl, 9 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069395; /* 0x15069405: jne 0x15069395 */
L_15069407:
    /* test esi, esi */ /* 0x15069407: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069412; /* 0x15069409: je 0x15069412 */
L_1506940B:
    MEM8(esi + (-0x1)) = (uint8_t)(0); /* 0x1506940B: mov byte ptr [esi - 1], 0 */
    goto L_15069412; /* 0x1506940F: jmp 0x15069412 */
L_15069411:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15069411: dec edi */
    _flag_k = FK_DEC;
L_15069412:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x15069412: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15069416:
    SET_LO8(eax, MEM8(edi)); /* 0x15069416: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15069418: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069429; /* 0x1506941A: je 0x15069429 */
L_1506941C:
    /* cmp LO8(eax), 0x20u */ /* 0x1506941C: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069424; /* 0x1506941E: je 0x15069424 */
L_15069420:
    /* cmp LO8(eax), 9 */ /* 0x15069420: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069429; /* 0x15069422: jne 0x15069429 */
L_15069424:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069424: inc edi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edi)); /* 0x15069425: mov al, byte ptr [edi] */
    RECOMP_BACKEDGE();
    goto L_1506941C; /* 0x15069427: jmp 0x1506941c */
L_15069429:
    edx = MEM32(ebp + 0x14); /* 0x15069429: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx); /* 0x1506942C: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1506942E: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx) = ecx; /* 0x1506942F: mov dword ptr [edx], ecx */
    edx = MEM32(ebp + 0xC); /* 0x15069431: mov edx, dword ptr [ebp + 0xc] */
    /* test LO8(eax), LO8(eax) */ /* 0x15069434: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506954A; /* 0x15069436: je 0x1506954a */
L_1506943C:
    /* test edx, edx */ /* 0x1506943C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069452; /* 0x1506943E: je 0x15069452 */
L_15069440:
    /* cmp ecx, MEM32(ebp + (-0x14)) */ /* 0x15069440: cmp ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069452; /* 0x15069443: jg 0x15069452 */
L_15069445:
    /* cmp edx, MEM32(ebp + (-0x18)) */ /* 0x15069445: cmp edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069452; /* 0x15069448: jae 0x15069452 */
L_1506944A:
    MEM32(edx) = esi; /* 0x1506944A: mov dword ptr [edx], esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1506944C: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x1506944F: mov dword ptr [ebp + 0xc], edx */
L_15069452:
    edx = MEM32(ebp + 0x18); /* 0x15069452: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(edx); /* 0x15069455: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069457: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x15069458: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x1506945A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506946D; /* 0x1506945C: je 0x1506946d */
L_1506945E:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1506945E: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1506946D; /* 0x15069461: jg 0x1506946d */
L_15069463:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x15069463: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506946D; /* 0x15069466: jae 0x1506946d */
L_15069468:
    SET_LO8(eax, MEM8(edi)); /* 0x15069468: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1506946A: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1506946C: inc esi */
    _flag_k = FK_INC;
L_1506946D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1506946D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1506946F: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15069470: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x15069472: mov dword ptr [ebp - 0x10], ebx */
    goto L_15069479; /* 0x15069475: jmp 0x15069479 */
L_15069477:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069477: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15069478: inc ecx */
    _flag_k = FK_INC;
L_15069479:
    SET_LO8(eax, MEM8(edi)); /* 0x15069479: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1506947B: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069477; /* 0x1506947D: je 0x15069477 */
L_1506947F:
    /* cmp LO8(eax), 0x22u */ /* 0x1506947F: cmp al, 0x22 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150694A8; /* 0x15069481: jne 0x150694a8 */
L_15069483:
    /* test LO8(ecx), 1 */ /* 0x15069483: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150694A6; /* 0x15069486: jne 0x150694a6 */
L_15069488:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x15069488: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069496; /* 0x1506948C: je 0x15069496 */
L_1506948E:
    /* cmp MEM8(edi + 0x1), LO8(eax) */ /* 0x1506948E: cmp byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069496; /* 0x15069491: jne 0x15069496 */
L_15069493:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069493: inc edi */
    _flag_k = FK_INC;
    goto L_1506949B; /* 0x15069494: jmp 0x1506949b */
L_15069496:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15069496: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x15069498: mov dword ptr [ebp - 0x10], ebx */
L_1506949B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506949B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x1506949D: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x150694A0: sete al */
    MEM32(ebp + (-0xC)) = eax; /* 0x150694A3: mov dword ptr [ebp - 0xc], eax */
L_150694A6:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150694A6: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x150694A6: shr ecx, 1 */
L_150694A8:
    /* test ecx, ecx */ /* 0x150694A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150694CD; /* 0x150694AA: je 0x150694cd */
L_150694AC:
    ebx = MEM32(ebp + (-0x4)); /* 0x150694AC: mov ebx, dword ptr [ebp - 4] */
L_150694AF:
    eax = MEM32(edx); /* 0x150694AF: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150694B1: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150694B2: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x150694B3: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x150694B5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150694C6; /* 0x150694B7: je 0x150694c6 */
L_150694B9:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x150694B9: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150694C6; /* 0x150694BC: jg 0x150694c6 */
L_150694BE:
    /* cmp esi, ebx */ /* 0x150694BE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150694C6; /* 0x150694C0: jae 0x150694c6 */
L_150694C2:
    MEM8(esi) = (uint8_t)(0x5Cu); /* 0x150694C2: mov byte ptr [esi], 0x5c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150694C5: inc esi */
    _flag_k = FK_INC;
L_150694C6:
    /* test ecx, ecx */ /* 0x150694C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150694AF; /* 0x150694C8: jne 0x150694af */
L_150694CA:
    ebx = MEM32(ebp + (-0x10)); /* 0x150694CA: mov ebx, dword ptr [ebp - 0x10] */
L_150694CD:
    SET_LO8(eax, MEM8(edi)); /* 0x150694CD: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x150694CF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069522; /* 0x150694D1: je 0x15069522 */
L_150694D3:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x150694D3: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150694E1; /* 0x150694D7: jne 0x150694e1 */
L_150694D9:
    /* cmp LO8(eax), 0x20u */ /* 0x150694D9: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069522; /* 0x150694DB: je 0x15069522 */
L_150694DD:
    /* cmp LO8(eax), 9 */ /* 0x150694DD: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069522; /* 0x150694DF: je 0x15069522 */
L_150694E1:
    /* test ebx, ebx */ /* 0x150694E1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506951C; /* 0x150694E3: je 0x1506951c */
L_150694E5:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x150694E5: inc dword ptr [edx] */
    _flag_k = FK_INC;
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x150694E7: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x150694EA: push eax */
    RECOMP_CALL(sub_15050550); /* 0x150694EB: call 0x15050550 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x150694F0: mov edx, dword ptr [ebp + 0x18] */
    ecx = POP32_VAL(esp); /* 0x150694F3: pop ecx */
    /* test esi, esi */ /* 0x150694F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069515; /* 0x150694F6: je 0x15069515 */
L_150694F8:
    /* test eax, eax */ /* 0x150694F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069509; /* 0x150694FA: je 0x15069509 */
L_150694FC:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x150694FC: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506951C; /* 0x150694FF: jae 0x1506951c */
L_15069501:
    SET_LO8(eax, MEM8(edi)); /* 0x15069501: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15069503: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15069505: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069506: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x15069507: inc dword ptr [edx] */
    _flag_k = FK_INC;
L_15069509:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x15069509: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506951C; /* 0x1506950C: jae 0x1506951c */
L_1506950E:
    SET_LO8(eax, MEM8(edi)); /* 0x1506950E: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15069510: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15069512: inc esi */
    _flag_k = FK_INC;
    goto L_1506951C; /* 0x15069513: jmp 0x1506951c */
L_15069515:
    /* test eax, eax */ /* 0x15069515: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506951C; /* 0x15069517: je 0x1506951c */
L_15069519:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069519: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x1506951A: inc dword ptr [edx] */
    _flag_k = FK_INC;
L_1506951C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1506951C: inc edi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1506946D; /* 0x1506951D: jmp 0x1506946d */
L_15069522:
    eax = MEM32(edx); /* 0x15069522: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069524: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x15069525: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x15069527: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069416; /* 0x15069529: je 0x15069416 */
L_1506952F:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1506952F: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_15069416; /* 0x15069532: jg 0x15069416 */
L_15069538:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x15069538: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069416; /* 0x1506953B: jae 0x15069416 */
L_15069541:
    MEM8(esi) = (uint8_t)(0); /* 0x15069541: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15069544: inc esi */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15069416; /* 0x15069545: jmp 0x15069416 */
L_1506954A:
    edi = POP32_VAL(esp); /* 0x1506954A: pop edi */
    esi = POP32_VAL(esp); /* 0x1506954B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1506954C: pop ebx */
    /* test edx, edx */ /* 0x1506954D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506955E; /* 0x1506954F: je 0x1506955e */
L_15069551:
    /* cmp ecx, MEM32(ebp + (-0x14)) */ /* 0x15069551: cmp ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1506955E; /* 0x15069554: jg 0x1506955e */
L_15069556:
    /* cmp edx, MEM32(ebp + (-0x18)) */ /* 0x15069556: cmp edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506955E; /* 0x15069559: jae 0x1506955e */
L_1506955B:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x1506955B: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506955E:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1506955E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506955F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15069566(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069566u);

L_15069566:
    edi = edi; /* 0x15069566: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15069568: push ebp */
    ebp = esp; /* 0x15069569: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1506956B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1506956E: push ebx */
    PUSH32(esp, esi); /* 0x1506956F: push esi */
    PUSH32(esp, edi); /* 0x15069570: push edi */
    PUSH32(esp, 0x104u); /* 0x15069571: push 0x104 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15069576: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x150BE210u; /* 0x15069578: mov ebx, 0x150be210 */
    PUSH32(esp, ebx); /* 0x1506957D: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506957E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x15069580: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, edi); /* 0x15069583: push edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x15069584: mov dword ptr [ebp - 8], edi */
    MEM16(0x150BE418) = (uint16_t)(LO16(eax)); /* 0x15069587: mov word ptr [0x150be418], ax */
    RECOMP_ICALL(MEM32(0x150C0164)); /* 0x1506958D: call dword ptr [0x150c0164] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB00); /* 0x15069593: mov esi, dword ptr [0x150bdb00] */
    MEM32(0x150BDFD8) = ebx; /* 0x15069599: mov dword ptr [0x150bdfd8], ebx */
    /* test esi, esi */ /* 0x1506959F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150695A8; /* 0x150695A1: je 0x150695a8 */
L_150695A3:
    /* cmp MEM16(esi), LO16(edi) */ /* 0x150695A3: cmp word ptr [esi], di */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150695AA; /* 0x150695A6: jne 0x150695aa */
L_150695A8:
    esi = ebx; /* 0x150695A8: mov esi, ebx */
L_150695AA:
    eax = ebp + (-0x8); /* 0x150695AA: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150695AD: push eax */
    eax = ebp + (-0x4); /* 0x150695AE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150695B1: push eax */
    PUSH32(esp, edi); /* 0x150695B2: push edi */
    PUSH32(esp, edi); /* 0x150695B3: push edi */
    PUSH32(esp, esi); /* 0x150695B4: push esi */
    RECOMP_CALL(sub_1506963F); /* 0x150695B5: call 0x1506963f */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x150695BA: mov ebx, dword ptr [ebp - 4] */
    eax = ebp + (-0xC); /* 0x150695BD: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x150695C0: push eax */
    PUSH32(esp, 4); /* 0x150695C1: push 4 */
    ecx = POP32_VAL(esp); /* 0x150695C3: pop ecx */
    eax = ebx; /* 0x150695C4: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x150695C6: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x150695C8: push edx */
    PUSH32(esp, eax); /* 0x150695C9: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x150695CA: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x150695CF: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150695D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15069631; /* 0x150695D4: js 0x15069631 */
L_150695D6:
    eax = ebp + (-0x10); /* 0x150695D6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150695D9: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x150695DA: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 2); /* 0x150695DD: push 2 */
    ecx = POP32_VAL(esp); /* 0x150695DF: pop ecx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x150695E0: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x150695E2: push edx */
    PUSH32(esp, eax); /* 0x150695E3: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x150695E4: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150695E9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150695EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15069631; /* 0x150695EE: js 0x15069631 */
L_150695F0:
    eax = MEM32(ebp + (-0x10)); /* 0x150695F0: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x150695F3: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x150695F6: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15069631; /* 0x150695F9: jb 0x15069631 */
L_150695FB:
    PUSH32(esp, eax); /* 0x150695FB: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x150695FC: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15069601: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15069603: pop ecx */
    /* test edi, edi */ /* 0x15069604: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069631; /* 0x15069606: je 0x15069631 */
L_15069608:
    eax = ebp + (-0x8); /* 0x15069608: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1506960B: push eax */
    eax = ebp + (-0x4); /* 0x1506960C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1506960F: push eax */
    ecx = edi + ebx * 4; /* 0x15069610: lea ecx, [edi + ebx*4] */
    PUSH32(esp, ecx); /* 0x15069613: push ecx */
    PUSH32(esp, edi); /* 0x15069614: push edi */
    PUSH32(esp, esi); /* 0x15069615: push esi */
    RECOMP_CALL(sub_1506963F); /* 0x15069616: call 0x1506963f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1506961B: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506961E: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15069621: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x150BDFC8) = edi; /* 0x15069622: mov dword ptr [0x150bdfc8], edi */
    MEM32(0x150BDFC0) = eax; /* 0x15069628: mov dword ptr [0x150bdfc0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506962D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15069634; /* 0x1506962F: jmp 0x15069634 */
L_15069631:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15069631: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15069634:
    edi = POP32_VAL(esp); /* 0x15069634: pop edi */
    esi = POP32_VAL(esp); /* 0x15069635: pop esi */
    ebx = POP32_VAL(esp); /* 0x15069636: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15069637: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069638: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506963F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506963Fu);

L_1506963F:
    edi = edi; /* 0x1506963F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15069641: push ebp */
    ebp = esp; /* 0x15069642: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x15069644: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x18); /* 0x15069647: mov eax, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x14); /* 0x1506964A: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x1506964D: push ebx */
    PUSH32(esp, esi); /* 0x1506964E: push esi */
    ecx = MEM32(eax); /* 0x1506964F: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + 0x10); /* 0x15069651: mov esi, dword ptr [ebp + 0x10] */
    edx = MEM32(edx); /* 0x15069654: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15069656: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x15069659: mov dword ptr [ebp - 0xc], ecx */
    ecx = esi + ecx * 2; /* 0x1506965C: lea ecx, [esi + ecx*2] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1506965F: mov dword ptr [ebp - 0x1c], edx */
    PUSH32(esp, edi); /* 0x15069662: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15069663: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x15069666: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x15069669: mov ecx, dword ptr [ebp + 0x14] */
    ebx = edi + edx * 4; /* 0x1506966C: lea ebx, [edi + edx*4] */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1506966F: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ecx) = 1; /* 0x15069672: mov dword ptr [ecx], 1 */
    ecx = MEM32(ebp + 0x8); /* 0x15069678: mov ecx, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1506967B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069690; /* 0x1506967D: je 0x15069690 */
L_1506967F:
    /* cmp edx, 1 */ /* 0x1506967F: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15069690; /* 0x15069682: jl 0x15069690 */
L_15069684:
    /* cmp edi, ebx */ /* 0x15069684: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069690; /* 0x15069686: jae 0x15069690 */
L_15069688:
    MEM32(edi) = esi; /* 0x15069688: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1506968A: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edi; /* 0x1506968D: mov dword ptr [ebp + 0xc], edi */
L_15069690:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15069690: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = 0x22u; /* 0x15069692: mov dword ptr [ebp - 0x2c], 0x22 */
    MEM32(ebp + (-0x24)) = 9; /* 0x15069699: mov dword ptr [ebp - 0x24], 9 */
    goto L_150696A8; /* 0x150696A0: jmp 0x150696a8 */
L_150696A2:
    edx = MEM32(ebp + (-0x8)); /* 0x150696A2: mov edx, dword ptr [ebp - 8] */
L_150696A5:
    eax = MEM32(ebp + 0x18); /* 0x150696A5: mov eax, dword ptr [ebp + 0x18] */
L_150696A8:
    PUSH32(esp, 0x22u); /* 0x150696A8: push 0x22 */
    edi = POP32_VAL(esp); /* 0x150696AA: pop edi */
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x150696AB: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = ecx; /* 0x150696AE: mov ebx, ecx */
    edi = MEM32(ebp + 0xC); /* 0x150696B0: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x150696B3: mov dword ptr [ebp - 0x18], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150696D1; /* 0x150696B6: jne 0x150696d1 */
L_150696B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150696B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x150696BA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x22u); /* 0x150696BC: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x150696BE: pop ecx */
    edx = ecx; /* 0x150696BF: mov edx, ecx */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x150696C1: sete al */
    ecx = ebx + 0x2; /* 0x150696C4: lea ecx, [ebx + 2] */
    MEM32(ebp + (-0x8)) = eax; /* 0x150696C7: mov dword ptr [ebp - 8], eax */
    ebx = ecx; /* 0x150696CA: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x150696CC: mov dword ptr [ebp - 4], ebx */
    goto L_15069708; /* 0x150696CF: jmp 0x15069708 */
L_150696D1:
    eax = MEM32(eax); /* 0x150696D1: mov eax, dword ptr [eax] */
    ebx = MEM32(ebp + 0x18); /* 0x150696D3: mov ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150696D6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx) = eax; /* 0x150696D7: mov dword ptr [ebx], eax */
    /* test esi, esi */ /* 0x150696D9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150696F0; /* 0x150696DB: je 0x150696f0 */
L_150696DD:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x150696DD: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150696F0; /* 0x150696E0: jg 0x150696f0 */
L_150696E2:
    /* cmp esi, MEM32(ebp + (-0x10)) */ /* 0x150696E2: cmp esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150696F0; /* 0x150696E5: jae 0x150696f0 */
L_150696E7:
    SET_LO16(eax, MEM16(ecx)); /* 0x150696E7: mov ax, word ptr [ecx] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x150696EA: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x150696ED: add esi, 2 */
    _flag_k = FK_ADD;
L_150696F0:
    eax = (uint32_t)MEM16(ecx); /* 0x150696F0: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150696F3: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = edx; /* 0x150696F6: mov dword ptr [ebp - 8], edx */
    ebx = ecx; /* 0x150696F9: mov ebx, ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x150696FB: mov dword ptr [ebp - 4], ebx */
    edx = eax; /* 0x150696FE: mov edx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15069700: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506972D; /* 0x15069703: je 0x1506972d */
L_15069705:
    eax = MEM32(ebp + (-0x8)); /* 0x15069705: mov eax, dword ptr [ebp - 8] */
L_15069708:
    /* test eax, eax */ /* 0x15069708: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150696A2; /* 0x1506970A: jne 0x150696a2 */
L_1506970C:
    PUSH32(esp, 0x20u); /* 0x1506970C: push 0x20 */
    eax = POP32_VAL(esp); /* 0x1506970E: pop eax */
    /* cmp LO16(edx), LO16(eax) */ /* 0x1506970F: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069721; /* 0x15069712: je 0x15069721 */
L_15069714:
    PUSH32(esp, 9); /* 0x15069714: push 9 */
    eax = POP32_VAL(esp); /* 0x15069716: pop eax */
    /* cmp LO16(edx), LO16(eax) */ /* 0x15069717: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = ebx; /* 0x1506971A: mov ecx, ebx */
    edx = MEM32(ebp + (-0x8)); /* 0x1506971C: mov edx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150696A5; /* 0x1506971F: jne 0x150696a5 */
L_15069721:
    /* test esi, esi */ /* 0x15069721: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069733; /* 0x15069723: je 0x15069733 */
L_15069725:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069725: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x15069727: mov word ptr [esi - 2], ax */
    goto L_15069730; /* 0x1506972B: jmp 0x15069730 */
L_1506972D:
    ebx = MEM32(ebp + (-0x18)); /* 0x1506972D: mov ebx, dword ptr [ebp - 0x18] */
L_15069730:
    MEM32(ebp + (-0x4)) = ebx; /* 0x15069730: mov dword ptr [ebp - 4], ebx */
L_15069733:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x15069733: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = 0x5Cu; /* 0x15069737: mov dword ptr [ebp - 0x28], 0x5c */
L_1506973E:
    eax = (uint32_t)MEM16(ebx); /* 0x1506973E: movzx eax, word ptr [ebx] */
    ecx = eax; /* 0x15069741: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15069743: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069764; /* 0x15069746: je 0x15069764 */
L_15069748:
    PUSH32(esp, 0x20u); /* 0x15069748: push 0x20 */
    edx = POP32_VAL(esp); /* 0x1506974A: pop edx */
L_1506974B:
    /* cmp LO16(eax), LO16(edx) */ /* 0x1506974B: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069759; /* 0x1506974E: je 0x15069759 */
L_15069750:
    ecx = (uint32_t)LO16(eax); /* 0x15069750: movzx ecx, ax */
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x15069753: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069761; /* 0x15069757: jne 0x15069761 */
L_15069759:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15069759: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ebx); /* 0x1506975C: movzx eax, word ptr [ebx] */
    RECOMP_BACKEDGE();
    goto L_1506974B; /* 0x1506975F: jmp 0x1506974b */
L_15069761:
    MEM32(ebp + (-0x4)) = ebx; /* 0x15069761: mov dword ptr [ebp - 4], ebx */
L_15069764:
    edx = MEM32(ebp + 0x14); /* 0x15069764: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(edx); /* 0x15069767: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069769: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x1506976A: mov dword ptr [edx], eax */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1506976C: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150698AD; /* 0x1506976F: je 0x150698ad */
L_15069775:
    /* test edi, edi */ /* 0x15069775: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506978B; /* 0x15069777: je 0x1506978b */
L_15069779:
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x15069779: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1506978B; /* 0x1506977C: jg 0x1506978b */
L_1506977E:
    /* cmp edi, MEM32(ebp + (-0x20)) */ /* 0x1506977E: cmp edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506978B; /* 0x15069781: jae 0x1506978b */
L_15069783:
    MEM32(edi) = esi; /* 0x15069783: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x15069785: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edi; /* 0x15069788: mov dword ptr [ebp + 0xc], edi */
L_1506978B:
    edi = MEM32(ebp + 0x18); /* 0x1506978B: mov edi, dword ptr [ebp + 0x18] */
L_1506978E:
    eax = (uint32_t)MEM16(ebx); /* 0x1506978E: movzx eax, word ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15069791: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x15069793: mov edx, eax */
    MEM32(ebp + (-0x14)) = 1; /* 0x15069795: mov dword ptr [ebp - 0x14], 1 */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1506979C: mov dword ptr [ebp - 0x18], ecx */
    /* cmp LO16(eax), MEM16(ebp + (-0x28)) */ /* 0x1506979F: cmp ax, word ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x28))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150697BC; /* 0x150697A3: jne 0x150697bc */
L_150697A5:
    PUSH32(esp, 0x5Cu); /* 0x150697A5: push 0x5c */
    edx = POP32_VAL(esp); /* 0x150697A7: pop edx */
L_150697A8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x150697A8: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150697AB: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM16(ebx); /* 0x150697AC: movzx eax, word ptr [ebx] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x150697AF: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150697A8; /* 0x150697B2: je 0x150697a8 */
L_150697B4:
    MEM32(ebp + (-0x18)) = ecx; /* 0x150697B4: mov dword ptr [ebp - 0x18], ecx */
    edx = eax; /* 0x150697B7: mov edx, eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x150697B9: mov dword ptr [ebp - 4], ebx */
L_150697BC:
    PUSH32(esp, 0x22u); /* 0x150697BC: push 0x22 */
    eax = POP32_VAL(esp); /* 0x150697BE: pop eax */
    /* cmp LO16(edx), LO16(eax) */ /* 0x150697BF: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069805; /* 0x150697C2: jne 0x15069805 */
L_150697C4:
    /* test LO8(ecx), 1 */ /* 0x150697C4: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069803; /* 0x150697C7: jne 0x15069803 */
L_150697C9:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x150697C9: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150697F4; /* 0x150697CD: je 0x150697f4 */
L_150697CF:
    ecx = ebx + 0x2; /* 0x150697CF: lea ecx, [ebx + 2] */
    eax = (uint32_t)MEM16(ecx); /* 0x150697D2: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), MEM16(ebp + (-0x2C)) */ /* 0x150697D5: cmp ax, word ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x2C))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = eax; /* 0x150697D9: mov edx, eax */
    PUSH32(esp, 0x22u); /* 0x150697DB: push 0x22 */
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = ecx; } /* 0x150697DD: cmove ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150697E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150697E2: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x150697E3: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x4)) = ebx; /* 0x150697E6: mov dword ptr [ebp - 4], ebx */
    ecx = MEM32(ebp + (-0x18)); /* 0x150697E9: mov ecx, dword ptr [ebp - 0x18] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x150697EC: sete al */
    MEM32(ebp + (-0x14)) = eax; /* 0x150697EF: mov dword ptr [ebp - 0x14], eax */
    goto L_150697F8; /* 0x150697F2: jmp 0x150697f8 */
L_150697F4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x150697F4: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150697F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150697F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x150697FA: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x150697FD: sete al */
    MEM32(ebp + (-0x8)) = eax; /* 0x15069800: mov dword ptr [ebp - 8], eax */
L_15069803:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15069803: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x15069803: shr ecx, 1 */
L_15069805:
    /* test ecx, ecx */ /* 0x15069805: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069831; /* 0x15069807: je 0x15069831 */
L_15069809:
    ebx = MEM32(ebp + (-0xC)); /* 0x15069809: mov ebx, dword ptr [ebp - 0xc] */
L_1506980C:
    edx = MEM32(edi); /* 0x1506980C: mov edx, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1506980E: dec ecx */
    _flag_k = FK_DEC;
    eax = edx + 0x1; /* 0x1506980F: lea eax, [edx + 1] */
    MEM32(edi) = eax; /* 0x15069812: mov dword ptr [edi], eax */
    /* test esi, esi */ /* 0x15069814: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506982A; /* 0x15069816: je 0x1506982a */
L_15069818:
    /* cmp edx, ebx */ /* 0x15069818: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1506982A; /* 0x1506981A: jge 0x1506982a */
L_1506981C:
    /* cmp esi, MEM32(ebp + (-0x10)) */ /* 0x1506981C: cmp esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506982A; /* 0x1506981F: jae 0x1506982a */
L_15069821:
    PUSH32(esp, 0x5Cu); /* 0x15069821: push 0x5c */
    eax = POP32_VAL(esp); /* 0x15069823: pop eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15069824: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15069827: add esi, 2 */
    _flag_k = FK_ADD;
L_1506982A:
    /* test ecx, ecx */ /* 0x1506982A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506980C; /* 0x1506982C: jne 0x1506980c */
L_1506982E:
    ebx = MEM32(ebp + (-0x4)); /* 0x1506982E: mov ebx, dword ptr [ebp - 4] */
L_15069831:
    eax = (uint32_t)MEM16(ebx); /* 0x15069831: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x15069834: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506987C; /* 0x15069837: je 0x1506987c */
L_15069839:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x15069839: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506984F; /* 0x1506983D: jne 0x1506984f */
L_1506983F:
    PUSH32(esp, 0x20u); /* 0x1506983F: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x15069841: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15069842: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506987C; /* 0x15069845: je 0x1506987c */
L_15069847:
    PUSH32(esp, 9); /* 0x15069847: push 9 */
    ecx = POP32_VAL(esp); /* 0x15069849: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1506984A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506987C; /* 0x1506984D: je 0x1506987c */
L_1506984F:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1506984F: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069871; /* 0x15069853: je 0x15069871 */
L_15069855:
    eax = MEM32(edi); /* 0x15069855: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069857: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x15069858: mov dword ptr [edi], eax */
    /* test esi, esi */ /* 0x1506985A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069871; /* 0x1506985C: je 0x15069871 */
L_1506985E:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1506985E: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069871; /* 0x15069861: jg 0x15069871 */
L_15069863:
    /* cmp esi, MEM32(ebp + (-0x10)) */ /* 0x15069863: cmp esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069871; /* 0x15069866: jae 0x15069871 */
L_15069868:
    SET_LO16(eax, MEM16(ebx)); /* 0x15069868: mov ax, word ptr [ebx] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1506986B: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1506986E: add esi, 2 */
    _flag_k = FK_ADD;
L_15069871:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15069871: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x15069874: mov dword ptr [ebp - 4], ebx */
    RECOMP_BACKEDGE();
    goto L_1506978E; /* 0x15069877: jmp 0x1506978e */
L_1506987C:
    ecx = edi; /* 0x1506987C: mov ecx, edi */
    edi = MEM32(ebp + 0xC); /* 0x1506987E: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x15069881: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069883: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x15069884: mov dword ptr [ecx], eax */
    /* test esi, esi */ /* 0x15069886: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506973E; /* 0x15069888: je 0x1506973e */
L_1506988E:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1506988E: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1506973E; /* 0x15069891: jg 0x1506973e */
L_15069897:
    /* cmp esi, MEM32(ebp + (-0x10)) */ /* 0x15069897: cmp esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506973E; /* 0x1506989A: jae 0x1506973e */
L_150698A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150698A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x150698A2: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x150698A5: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1506973E; /* 0x150698A8: jmp 0x1506973e */
L_150698AD:
    /* test edi, edi */ /* 0x150698AD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150698BE; /* 0x150698AF: je 0x150698be */
L_150698B1:
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x150698B1: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150698BE; /* 0x150698B4: jg 0x150698be */
L_150698B6:
    /* cmp edi, MEM32(ebp + (-0x20)) */ /* 0x150698B6: cmp edi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150698BE; /* 0x150698B9: jae 0x150698be */
L_150698BB:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x150698BB: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150698BE:
    edi = POP32_VAL(esp); /* 0x150698BE: pop edi */
    esi = POP32_VAL(esp); /* 0x150698BF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150698C0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150698C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150698C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150698C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150698C9u);

L_150698C9:
    edi = edi; /* 0x150698C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150698CB: push ebp */
    ebp = esp; /* 0x150698CC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150698CE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150698D1: push ebx */
    PUSH32(esp, esi); /* 0x150698D2: push esi */
    PUSH32(esp, edi); /* 0x150698D3: push edi */
    PUSH32(esp, 0x104u); /* 0x150698D4: push 0x104 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150698D9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x150BE420u; /* 0x150698DB: mov ebx, 0x150be420 */
    PUSH32(esp, ebx); /* 0x150698E0: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150698E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x150698E3: mov dword ptr [ebp - 4], edi */
    PUSH32(esp, edi); /* 0x150698E6: push edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x150698E7: mov dword ptr [ebp - 8], edi */
    MEM16(0x150BE628) = (uint16_t)(LO16(eax)); /* 0x150698EA: mov word ptr [0x150be628], ax */
    RECOMP_ICALL(MEM32(0x150C0164)); /* 0x150698F0: call dword ptr [0x150c0164] */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x150BDB00); /* 0x150698F6: mov esi, dword ptr [0x150bdb00] */
    MEM32(0x150BDFD8) = ebx; /* 0x150698FC: mov dword ptr [0x150bdfd8], ebx */
    /* test esi, esi */ /* 0x15069902: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506990B; /* 0x15069904: je 0x1506990b */
L_15069906:
    /* cmp MEM16(esi), LO16(edi) */ /* 0x15069906: cmp word ptr [esi], di */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506990D; /* 0x15069909: jne 0x1506990d */
L_1506990B:
    esi = ebx; /* 0x1506990B: mov esi, ebx */
L_1506990D:
    eax = ebp + (-0x8); /* 0x1506990D: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15069910: push eax */
    eax = ebp + (-0x4); /* 0x15069911: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15069914: push eax */
    PUSH32(esp, edi); /* 0x15069915: push edi */
    PUSH32(esp, edi); /* 0x15069916: push edi */
    PUSH32(esp, esi); /* 0x15069917: push esi */
    RECOMP_CALL(sub_150699A7); /* 0x15069918: call 0x150699a7 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x1506991D: mov ebx, dword ptr [ebp - 4] */
    eax = ebp + (-0xC); /* 0x15069920: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x15069923: push eax */
    PUSH32(esp, 4); /* 0x15069924: push 4 */
    ecx = POP32_VAL(esp); /* 0x15069926: pop ecx */
    eax = ebx; /* 0x15069927: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x15069929: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x1506992B: push edx */
    PUSH32(esp, eax); /* 0x1506992C: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x1506992D: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15069932: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15069935: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15069999; /* 0x15069937: js 0x15069999 */
L_15069939:
    eax = ebp + (-0x10); /* 0x15069939: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1506993C: push eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1506993D: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 2); /* 0x15069940: push 2 */
    ecx = POP32_VAL(esp); /* 0x15069942: pop ecx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x15069943: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edx); /* 0x15069945: push edx */
    PUSH32(esp, eax); /* 0x15069946: push eax */
    RECOMP_CALL(sub_15036A6E); /* 0x15069947: call 0x15036a6e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506994C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506994F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15069999; /* 0x15069951: js 0x15069999 */
L_15069953:
    eax = MEM32(ebp + (-0x10)); /* 0x15069953: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x15069956: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x15069959: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15069999; /* 0x1506995C: jb 0x15069999 */
L_1506995E:
    PUSH32(esp, eax); /* 0x1506995E: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x1506995F: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15069964: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15069966: pop ecx */
    /* test edi, edi */ /* 0x15069967: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069999; /* 0x15069969: je 0x15069999 */
L_1506996B:
    eax = ebp + (-0x8); /* 0x1506996B: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1506996E: push eax */
    eax = ebp + (-0x4); /* 0x1506996F: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15069972: push eax */
    ecx = edi + ebx * 4; /* 0x15069973: lea ecx, [edi + ebx*4] */
    PUSH32(esp, ecx); /* 0x15069976: push ecx */
    PUSH32(esp, edi); /* 0x15069977: push edi */
    PUSH32(esp, esi); /* 0x15069978: push esi */
    RECOMP_CALL(sub_150699A7); /* 0x15069979: call 0x150699a7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1506997E: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15069981: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15069984: dec eax */
    _flag_k = FK_DEC;
    MEM32(0x150BDFC8) = edi; /* 0x15069985: mov dword ptr [0x150bdfc8], edi */
    MEM32(0x150BDFC0) = eax; /* 0x1506998B: mov dword ptr [0x150bdfc0], eax */
    RECOMP_CALL(sub_1506A457); /* 0x15069990: call 0x1506a457 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15069995: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506999C; /* 0x15069997: je 0x1506999c */
L_15069999:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15069999: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506999C:
    edi = POP32_VAL(esp); /* 0x1506999C: pop edi */
    esi = POP32_VAL(esp); /* 0x1506999D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1506999E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1506999F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150699A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150699A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150699A7u);

L_150699A7:
    edi = edi; /* 0x150699A7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150699A9: push ebp */
    ebp = esp; /* 0x150699AA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x150699AC: sub esp, 0x2c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x14); /* 0x150699AF: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x18); /* 0x150699B2: mov edx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x150699B5: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x150699B6: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x150699B9: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x150699BB: push esi */
    esi = MEM32(ebp + 0x10); /* 0x150699BC: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x150699BF: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, edi); /* 0x150699C2: push edi */
    edi = MEM32(edx); /* 0x150699C3: mov edi, dword ptr [edx] */
    eax = ebx + eax * 4; /* 0x150699C5: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x150699C8: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x150699CB: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x10)) = edi; /* 0x150699CE: mov dword ptr [ebp - 0x10], edi */
    eax = esi + edi * 2; /* 0x150699D1: lea eax, [esi + edi*2] */
    MEM32(ebp + (-0x8)) = eax; /* 0x150699D4: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150699D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150699D9: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx) = eax; /* 0x150699DA: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + 0x8); /* 0x150699DC: mov ecx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x150699DF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150699F5; /* 0x150699E1: je 0x150699f5 */
L_150699E3:
    /* cmp MEM32(ebp + (-0x18)), eax */ /* 0x150699E3: cmp dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150699F5; /* 0x150699E6: jl 0x150699f5 */
L_150699E8:
    /* cmp ebx, MEM32(ebp + (-0x1C)) */ /* 0x150699E8: cmp ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150699F5; /* 0x150699EB: jae 0x150699f5 */
L_150699ED:
    MEM32(ebx) = esi; /* 0x150699ED: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x150699EF: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ebx; /* 0x150699F2: mov dword ptr [ebp + 0xc], ebx */
L_150699F5:
    eax = MEM32(edx); /* 0x150699F5: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150699F7: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x150699F8: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x150699FA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069A10; /* 0x150699FC: je 0x15069a10 */
L_150699FE:
    /* cmp eax, edi */ /* 0x150699FE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069A10; /* 0x15069A00: jg 0x15069a10 */
L_15069A02:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x15069A02: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069A10; /* 0x15069A05: jae 0x15069a10 */
L_15069A07:
    SET_LO16(eax, MEM16(ecx)); /* 0x15069A07: mov ax, word ptr [ecx] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15069A0A: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15069A0D: add esi, 2 */
    _flag_k = FK_ADD;
L_15069A10:
    PUSH32(esp, 0x22u); /* 0x15069A10: push 0x22 */
    eax = POP32_VAL(esp); /* 0x15069A12: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15069A13: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = eax; /* 0x15069A15: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x24)) = 9; /* 0x15069A18: mov dword ptr [ebp - 0x24], 9 */
    goto L_15069A27; /* 0x15069A1F: jmp 0x15069a27 */
L_15069A21:
    edx = MEM32(ebp + (-0xC)); /* 0x15069A21: mov edx, dword ptr [ebp - 0xc] */
L_15069A24:
    PUSH32(esp, 0x22u); /* 0x15069A24: push 0x22 */
    eax = POP32_VAL(esp); /* 0x15069A26: pop eax */
L_15069A27:
    edi = ecx; /* 0x15069A27: mov edi, ecx */
    MEM32(ebp + (-0x20)) = edi; /* 0x15069A29: mov dword ptr [ebp - 0x20], edi */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x15069A2C: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069A4A; /* 0x15069A2F: jne 0x15069a4a */
L_15069A31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069A31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x15069A33: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x22u); /* 0x15069A35: push 0x22 */
    ecx = POP32_VAL(esp); /* 0x15069A37: pop ecx */
    edx = ecx; /* 0x15069A38: mov edx, ecx */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x15069A3A: sete al */
    ecx = edi + 0x2; /* 0x15069A3D: lea ecx, [edi + 2] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15069A40: mov dword ptr [ebp - 0xc], eax */
    edi = ecx; /* 0x15069A43: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x15069A45: mov dword ptr [ebp - 4], edi */
    goto L_15069A81; /* 0x15069A48: jmp 0x15069a81 */
L_15069A4A:
    edi = MEM32(ebp + 0x18); /* 0x15069A4A: mov edi, dword ptr [ebp + 0x18] */
    eax = MEM32(edi); /* 0x15069A4D: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069A4F: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x15069A50: mov dword ptr [edi], eax */
    /* test esi, esi */ /* 0x15069A52: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069A69; /* 0x15069A54: je 0x15069a69 */
L_15069A56:
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x15069A56: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069A69; /* 0x15069A59: jg 0x15069a69 */
L_15069A5B:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x15069A5B: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069A69; /* 0x15069A5E: jae 0x15069a69 */
L_15069A60:
    SET_LO16(eax, MEM16(ecx)); /* 0x15069A60: mov ax, word ptr [ecx] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15069A63: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15069A66: add esi, 2 */
    _flag_k = FK_ADD;
L_15069A69:
    eax = (uint32_t)MEM16(ecx); /* 0x15069A69: movzx eax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15069A6C: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x15069A6F: mov dword ptr [ebp - 0xc], edx */
    edi = ecx; /* 0x15069A72: mov edi, ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x15069A74: mov dword ptr [ebp - 4], edi */
    edx = eax; /* 0x15069A77: mov edx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15069A79: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069AA6; /* 0x15069A7C: je 0x15069aa6 */
L_15069A7E:
    eax = MEM32(ebp + (-0xC)); /* 0x15069A7E: mov eax, dword ptr [ebp - 0xc] */
L_15069A81:
    /* test eax, eax */ /* 0x15069A81: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069A21; /* 0x15069A83: jne 0x15069a21 */
L_15069A85:
    PUSH32(esp, 0x20u); /* 0x15069A85: push 0x20 */
    eax = POP32_VAL(esp); /* 0x15069A87: pop eax */
    /* cmp LO16(edx), LO16(eax) */ /* 0x15069A88: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069A9A; /* 0x15069A8B: je 0x15069a9a */
L_15069A8D:
    PUSH32(esp, 9); /* 0x15069A8D: push 9 */
    eax = POP32_VAL(esp); /* 0x15069A8F: pop eax */
    /* cmp LO16(edx), LO16(eax) */ /* 0x15069A90: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = edi; /* 0x15069A93: mov ecx, edi */
    edx = MEM32(ebp + (-0xC)); /* 0x15069A95: mov edx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069A24; /* 0x15069A98: jne 0x15069a24 */
L_15069A9A:
    /* test esi, esi */ /* 0x15069A9A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069AAC; /* 0x15069A9C: je 0x15069aac */
L_15069A9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069A9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x15069AA0: mov word ptr [esi - 2], ax */
    goto L_15069AA9; /* 0x15069AA4: jmp 0x15069aa9 */
L_15069AA6:
    edi = MEM32(ebp + (-0x20)); /* 0x15069AA6: mov edi, dword ptr [ebp - 0x20] */
L_15069AA9:
    MEM32(ebp + (-0x4)) = edi; /* 0x15069AA9: mov dword ptr [ebp - 4], edi */
L_15069AAC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x15069AAC: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x18); /* 0x15069AB0: mov edx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x28)) = 0x5Cu; /* 0x15069AB3: mov dword ptr [ebp - 0x28], 0x5c */
L_15069ABA:
    eax = (uint32_t)MEM16(edi); /* 0x15069ABA: movzx eax, word ptr [edi] */
    ecx = eax; /* 0x15069ABD: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15069ABF: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069AE3; /* 0x15069AC2: je 0x15069ae3 */
L_15069AC4:
    PUSH32(esp, 0x20u); /* 0x15069AC4: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x15069AC6: pop ecx */
L_15069AC7:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15069AC7: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069AD8; /* 0x15069ACA: je 0x15069ad8 */
L_15069ACC:
    ecx = (uint32_t)LO16(eax); /* 0x15069ACC: movzx ecx, ax */
    /* cmp LO16(eax), MEM16(ebp + (-0x24)) */ /* 0x15069ACF: cmp ax, word ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x24))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069AE0; /* 0x15069AD3: jne 0x15069ae0 */
L_15069AD5:
    PUSH32(esp, 0x20u); /* 0x15069AD5: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x15069AD7: pop ecx */
L_15069AD8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15069AD8: add edi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edi); /* 0x15069ADB: movzx eax, word ptr [edi] */
    RECOMP_BACKEDGE();
    goto L_15069AC7; /* 0x15069ADE: jmp 0x15069ac7 */
L_15069AE0:
    MEM32(ebp + (-0x4)) = edi; /* 0x15069AE0: mov dword ptr [ebp - 4], edi */
L_15069AE3:
    eax = MEM32(ebp + 0x14); /* 0x15069AE3: mov eax, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x14); /* 0x15069AE6: mov ebx, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x15069AE9: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069AEB: inc eax */
    _flag_k = FK_INC;
    MEM32(ebx) = eax; /* 0x15069AEC: mov dword ptr [ebx], eax */
    ebx = MEM32(ebp + 0xC); /* 0x15069AEE: mov ebx, dword ptr [ebp + 0xc] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x15069AF1: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069C47; /* 0x15069AF4: je 0x15069c47 */
L_15069AFA:
    /* test ebx, ebx */ /* 0x15069AFA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069B10; /* 0x15069AFC: je 0x15069b10 */
L_15069AFE:
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x15069AFE: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069B10; /* 0x15069B01: jg 0x15069b10 */
L_15069B03:
    /* cmp ebx, MEM32(ebp + (-0x1C)) */ /* 0x15069B03: cmp ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069B10; /* 0x15069B06: jae 0x15069b10 */
L_15069B08:
    MEM32(ebx) = esi; /* 0x15069B08: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x15069B0A: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ebx; /* 0x15069B0D: mov dword ptr [ebp + 0xc], ebx */
L_15069B10:
    eax = MEM32(edx); /* 0x15069B10: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069B12: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x15069B13: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x15069B15: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069B2C; /* 0x15069B17: je 0x15069b2c */
L_15069B19:
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x15069B19: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069B2C; /* 0x15069B1C: jg 0x15069b2c */
L_15069B1E:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x15069B1E: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069B2C; /* 0x15069B21: jae 0x15069b2c */
L_15069B23:
    SET_LO16(eax, MEM16(edi)); /* 0x15069B23: mov ax, word ptr [edi] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15069B26: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15069B29: add esi, 2 */
    _flag_k = FK_ADD;
L_15069B2C:
    ebx = MEM32(ebp + (-0x10)); /* 0x15069B2C: mov ebx, dword ptr [ebp - 0x10] */
L_15069B2F:
    eax = (uint32_t)MEM16(edi); /* 0x15069B2F: movzx eax, word ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15069B32: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x15069B34: mov edx, eax */
    MEM32(ebp + (-0x14)) = 1; /* 0x15069B36: mov dword ptr [ebp - 0x14], 1 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x15069B3D: mov dword ptr [ebp - 0x20], ecx */
    /* cmp LO16(eax), MEM16(ebp + (-0x28)) */ /* 0x15069B40: cmp ax, word ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x28))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069B5D; /* 0x15069B44: jne 0x15069b5d */
L_15069B46:
    PUSH32(esp, 0x5Cu); /* 0x15069B46: push 0x5c */
    edx = POP32_VAL(esp); /* 0x15069B48: pop edx */
L_15069B49:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15069B49: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15069B4C: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM16(edi); /* 0x15069B4D: movzx eax, word ptr [edi] */
    /* cmp LO16(eax), LO16(edx) */ /* 0x15069B50: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069B49; /* 0x15069B53: je 0x15069b49 */
L_15069B55:
    MEM32(ebp + (-0x20)) = ecx; /* 0x15069B55: mov dword ptr [ebp - 0x20], ecx */
    edx = eax; /* 0x15069B58: mov edx, eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x15069B5A: mov dword ptr [ebp - 4], edi */
L_15069B5D:
    PUSH32(esp, 0x22u); /* 0x15069B5D: push 0x22 */
    eax = POP32_VAL(esp); /* 0x15069B5F: pop eax */
    /* cmp LO16(edx), LO16(eax) */ /* 0x15069B60: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069BA6; /* 0x15069B63: jne 0x15069ba6 */
L_15069B65:
    /* test LO8(ecx), 1 */ /* 0x15069B65: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069BA4; /* 0x15069B68: jne 0x15069ba4 */
L_15069B6A:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x15069B6A: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069B95; /* 0x15069B6E: je 0x15069b95 */
L_15069B70:
    ecx = edi + 0x2; /* 0x15069B70: lea ecx, [edi + 2] */
    eax = (uint32_t)MEM16(ecx); /* 0x15069B73: movzx eax, word ptr [ecx] */
    /* cmp LO16(eax), MEM16(ebp + (-0x2C)) */ /* 0x15069B76: cmp ax, word ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x2C))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = eax; /* 0x15069B7A: mov edx, eax */
    PUSH32(esp, 0x22u); /* 0x15069B7C: push 0x22 */
    if (CMP_EQ(_flag_a, _flag_b)) { edi = ecx; } /* 0x15069B7E: cmove edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069B81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15069B83: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x15069B84: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + (-0x4)) = edi; /* 0x15069B87: mov dword ptr [ebp - 4], edi */
    ecx = MEM32(ebp + (-0x20)); /* 0x15069B8A: mov ecx, dword ptr [ebp - 0x20] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15069B8D: sete al */
    MEM32(ebp + (-0x14)) = eax; /* 0x15069B90: mov dword ptr [ebp - 0x14], eax */
    goto L_15069B99; /* 0x15069B93: jmp 0x15069b99 */
L_15069B95:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x15069B95: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15069B99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069B99: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x15069B9B: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x15069B9E: sete al */
    MEM32(ebp + (-0xC)) = eax; /* 0x15069BA1: mov dword ptr [ebp - 0xc], eax */
L_15069BA4:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15069BA4: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x15069BA4: shr ecx, 1 */
L_15069BA6:
    edx = MEM32(ebp + 0x18); /* 0x15069BA6: mov edx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x15069BA9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069BD2; /* 0x15069BAB: je 0x15069bd2 */
L_15069BAD:
    edi = MEM32(ebp + (-0x8)); /* 0x15069BAD: mov edi, dword ptr [ebp - 8] */
L_15069BB0:
    eax = MEM32(edx); /* 0x15069BB0: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15069BB2: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069BB3: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x15069BB4: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x15069BB6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069BCB; /* 0x15069BB8: je 0x15069bcb */
L_15069BBA:
    /* cmp eax, ebx */ /* 0x15069BBA: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069BCB; /* 0x15069BBC: jg 0x15069bcb */
L_15069BBE:
    /* cmp esi, edi */ /* 0x15069BBE: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069BCB; /* 0x15069BC0: jae 0x15069bcb */
L_15069BC2:
    PUSH32(esp, 0x5Cu); /* 0x15069BC2: push 0x5c */
    eax = POP32_VAL(esp); /* 0x15069BC4: pop eax */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15069BC5: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15069BC8: add esi, 2 */
    _flag_k = FK_ADD;
L_15069BCB:
    /* test ecx, ecx */ /* 0x15069BCB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069BB0; /* 0x15069BCD: jne 0x15069bb0 */
L_15069BCF:
    edi = MEM32(ebp + (-0x4)); /* 0x15069BCF: mov edi, dword ptr [ebp - 4] */
L_15069BD2:
    eax = (uint32_t)MEM16(edi); /* 0x15069BD2: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x15069BD5: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069C1C; /* 0x15069BD8: je 0x15069c1c */
L_15069BDA:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x15069BDA: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069BF0; /* 0x15069BDE: jne 0x15069bf0 */
L_15069BE0:
    PUSH32(esp, 0x20u); /* 0x15069BE0: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x15069BE2: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15069BE3: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069C1C; /* 0x15069BE6: je 0x15069c1c */
L_15069BE8:
    PUSH32(esp, 9); /* 0x15069BE8: push 9 */
    ecx = POP32_VAL(esp); /* 0x15069BEA: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x15069BEB: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069C1C; /* 0x15069BEE: je 0x15069c1c */
L_15069BF0:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x15069BF0: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069C11; /* 0x15069BF4: je 0x15069c11 */
L_15069BF6:
    eax = MEM32(edx); /* 0x15069BF6: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069BF8: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x15069BF9: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x15069BFB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069C11; /* 0x15069BFD: je 0x15069c11 */
L_15069BFF:
    /* cmp eax, ebx */ /* 0x15069BFF: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069C11; /* 0x15069C01: jg 0x15069c11 */
L_15069C03:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x15069C03: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069C11; /* 0x15069C06: jae 0x15069c11 */
L_15069C08:
    SET_LO16(eax, MEM16(edi)); /* 0x15069C08: mov ax, word ptr [edi] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15069C0B: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15069C0E: add esi, 2 */
    _flag_k = FK_ADD;
L_15069C11:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15069C11: add edi, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edi; /* 0x15069C14: mov dword ptr [ebp - 4], edi */
    RECOMP_BACKEDGE();
    goto L_15069B2F; /* 0x15069C17: jmp 0x15069b2f */
L_15069C1C:
    eax = MEM32(edx); /* 0x15069C1C: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15069C1E: inc eax */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x15069C1F: mov dword ptr [edx], eax */
    /* test esi, esi */ /* 0x15069C21: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069ABA; /* 0x15069C23: je 0x15069aba */
L_15069C29:
    /* cmp eax, ebx */ /* 0x15069C29: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_15069ABA; /* 0x15069C2B: jg 0x15069aba */
L_15069C31:
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x15069C31: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069ABA; /* 0x15069C34: jae 0x15069aba */
L_15069C3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069C3A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15069C3C: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15069C3F: add esi, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15069ABA; /* 0x15069C42: jmp 0x15069aba */
L_15069C47:
    /* test ebx, ebx */ /* 0x15069C47: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069C58; /* 0x15069C49: je 0x15069c58 */
L_15069C4B:
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x15069C4B: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15069C58; /* 0x15069C4E: jg 0x15069c58 */
L_15069C50:
    /* cmp ebx, MEM32(ebp + (-0x1C)) */ /* 0x15069C50: cmp ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15069C58; /* 0x15069C53: jae 0x15069c58 */
L_15069C55:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x15069C55: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15069C58:
    edi = POP32_VAL(esp); /* 0x15069C58: pop edi */
    esi = POP32_VAL(esp); /* 0x15069C59: pop esi */
    ebx = POP32_VAL(esp); /* 0x15069C5A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15069C5B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069C5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15069C63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069C63u);

L_15069C63:
    edi = edi; /* 0x15069C63: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15069C65: push ebp */
    ebp = esp; /* 0x15069C66: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15069C68: push ecx */
    edx = MEM32(0x150BDAF4); /* 0x15069C69: mov edx, dword ptr [0x150bdaf4] */
    PUSH32(esp, ebx); /* 0x15069C6F: push ebx */
    PUSH32(esp, esi); /* 0x15069C70: push esi */
    PUSH32(esp, edi); /* 0x15069C71: push edi */
    /* test edx, edx */ /* 0x15069C72: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069D55; /* 0x15069C74: je 0x15069d55 */
L_15069C7A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15069C7A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15069C7C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15069CA8; /* 0x15069C7E: jmp 0x15069ca8 */
L_15069C80:
    ecx = edx; /* 0x15069C80: mov ecx, edx */
    eax = ecx + 0x1; /* 0x15069C82: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15069C85: mov dword ptr [ebp - 4], eax */
L_15069C88:
    SET_LO8(eax, MEM8(ecx)); /* 0x15069C88: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15069C8A: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15069C8B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069C88; /* 0x15069C8D: jne 0x15069c88 */
L_15069C8F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x15069C8F: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15069C92: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO8(ebx), 0x3Du */ /* 0x15069C93: cmp bl, 0x3d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = esi + ecx; /* 0x15069C96: lea eax, [esi + ecx] */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = esi; } /* 0x15069C99: cmove eax, esi */
    esi = eax; /* 0x15069C9C: mov esi, eax */
    eax = edi + 0x1; /* 0x15069C9E: lea eax, [edi + 1] */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = edi; } /* 0x15069CA1: cmove eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x15069CA4: add edx, ecx */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15069CA6: mov edi, eax */
L_15069CA8:
    SET_LO8(ebx, MEM8(edx)); /* 0x15069CA8: mov bl, byte ptr [edx] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x15069CAA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069C80; /* 0x15069CAC: jne 0x15069c80 */
L_15069CAE:
    ebx = esi + 0x4; /* 0x15069CAE: lea ebx, [esi + 4] */
    ebx = ebx + edi * 4; /* 0x15069CB1: lea ebx, [ebx + edi*4] */
    PUSH32(esp, 1); /* 0x15069CB4: push 1 */
    PUSH32(esp, ebx); /* 0x15069CB6: push ebx */
    RECOMP_CALL(sub_15048EE2); /* 0x15069CB7: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15069CBC: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15069CBE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15069CBF: pop ecx */
    /* test esi, esi */ /* 0x15069CC0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069D55; /* 0x15069CC2: je 0x15069d55 */
L_15069CC8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069CC8: inc edi */
    _flag_k = FK_INC;
    MEM32(0x150BDFBC) = esi; /* 0x15069CC9: mov dword ptr [0x150bdfbc], esi */
    ecx = esi + ebx; /* 0x15069CCF: lea ecx, [esi + ebx] */
    MEM32(0x150BDFCC) = esi; /* 0x15069CD2: mov dword ptr [0x150bdfcc], esi */
    MEM32(0x150BECD0) = ecx; /* 0x15069CD8: mov dword ptr [0x150becd0], ecx */
    ebx = esi + edi * 4; /* 0x15069CDE: lea ebx, [esi + edi*4] */
    edi = MEM32(0x150BDAF4); /* 0x15069CE1: mov edi, dword ptr [0x150bdaf4] */
    SET_LO8(edx, MEM8(edi)); /* 0x15069CE7: mov dl, byte ptr [edi] */
    /* test LO8(edx), LO8(edx) */ /* 0x15069CE9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069D40; /* 0x15069CEB: je 0x15069d40 */
L_15069CED:
    ecx = edi; /* 0x15069CED: mov ecx, edi */
    eax = ecx + 0x1; /* 0x15069CEF: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15069CF2: mov dword ptr [ebp - 4], eax */
L_15069CF5:
    SET_LO8(eax, MEM8(ecx)); /* 0x15069CF5: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15069CF7: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15069CF8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069CF5; /* 0x15069CFA: jne 0x15069cf5 */
L_15069CFC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x15069CFC: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x15069CFF: lea eax, [ecx + 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15069D02: mov dword ptr [ebp - 4], eax */
    /* cmp LO8(edx), 0x3Du */ /* 0x15069D05: cmp dl, 0x3d */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069D32; /* 0x15069D08: je 0x15069d32 */
L_15069D0A:
    PUSH32(esp, edi); /* 0x15069D0A: push edi */
    PUSH32(esp, eax); /* 0x15069D0B: push eax */
    PUSH32(esp, ebx); /* 0x15069D0C: push ebx */
    MEM32(esi) = ebx; /* 0x15069D0D: mov dword ptr [esi], ebx */
    RECOMP_CALL(sub_1508E640); /* 0x15069D0F: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15069D14: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15069D17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069D2A; /* 0x15069D19: je 0x15069d2a */
L_15069D1B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069D1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15069D1D: push eax */
    PUSH32(esp, eax); /* 0x15069D1E: push eax */
    PUSH32(esp, eax); /* 0x15069D1F: push eax */
    PUSH32(esp, eax); /* 0x15069D20: push eax */
    PUSH32(esp, eax); /* 0x15069D21: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15069D22: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15069D27: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15069D2A:
    eax = MEM32(ebp + (-0x4)); /* 0x15069D2A: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15069D2D: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15069D2F: add esi, 4 */
    _flag_k = FK_ADD;
L_15069D32:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x15069D32: add edi, eax */
    _flag_k = FK_ADD;
    SET_LO8(edx, MEM8(edi)); /* 0x15069D34: mov dl, byte ptr [edi] */
    /* test LO8(edx), LO8(edx) */ /* 0x15069D36: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069CED; /* 0x15069D38: jne 0x15069ced */
L_15069D3A:
    edi = MEM32(0x150BDAF4); /* 0x15069D3A: mov edi, dword ptr [0x150bdaf4] */
L_15069D40:
    PUSH32(esp, edi); /* 0x15069D40: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15069D41: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x150BDAF4)); _flag_b = (uint32_t)(0);
    MEM32(0x150BDAF4) = MEM32(0x150BDAF4) & 0; /* 0x15069D46: and dword ptr [0x150bdaf4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x15069D4D: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069D50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15069D52: pop ecx */
    goto L_15069D58; /* 0x15069D53: jmp 0x15069d58 */
L_15069D55:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15069D55: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15069D58:
    edi = POP32_VAL(esp); /* 0x15069D58: pop edi */
    esi = POP32_VAL(esp); /* 0x15069D59: pop esi */
    ebx = POP32_VAL(esp); /* 0x15069D5A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15069D5B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069D5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15069D63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069D63u);

L_15069D63:
    edi = edi; /* 0x15069D63: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15069D65: push ebp */
    ebp = esp; /* 0x15069D66: mov ebp, esp */
    edx = MEM32(0x150BDAF8); /* 0x15069D68: mov edx, dword ptr [0x150bdaf8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15069D6E: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15069D71: push ebx */
    PUSH32(esp, esi); /* 0x15069D72: push esi */
    PUSH32(esp, edi); /* 0x15069D73: push edi */
    /* test edx, edx */ /* 0x15069D74: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069E94; /* 0x15069D76: je 0x15069e94 */
L_15069D7C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069D7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x3Du; /* 0x15069D7E: mov dword ptr [ebp - 4], 0x3d */
    MEM32(ebp + (-0x8)) = eax; /* 0x15069D85: mov dword ptr [ebp - 8], eax */
    edi = eax; /* 0x15069D88: mov edi, eax */
    esi = eax; /* 0x15069D8A: mov esi, eax */
    eax = (uint32_t)MEM16(edx); /* 0x15069D8C: movzx eax, word ptr [edx] */
    /* test LO16(eax), LO16(eax) */ /* 0x15069D8F: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069DD5; /* 0x15069D92: je 0x15069dd5 */
L_15069D94:
    ebx = eax; /* 0x15069D94: mov ebx, eax */
L_15069D96:
    ecx = edx; /* 0x15069D96: mov ecx, edx */
    eax = ecx + 0x2; /* 0x15069D98: lea eax, [ecx + 2] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15069D9B: mov dword ptr [ebp - 0xc], eax */
L_15069D9E:
    SET_LO16(eax, MEM16(ecx)); /* 0x15069D9E: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15069DA1: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x15069DA4: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069D9E; /* 0x15069DA8: jne 0x15069d9e */
L_15069DAA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x15069DAA: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15069DAD: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + 0x1; /* 0x15069DAF: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15069DB2: add eax, esi */
    _flag_k = FK_ADD;
    edx = edx + ecx * 2; /* 0x15069DB4: lea edx, [edx + ecx*2] */
    /* cmp LO16(ebx), MEM16(ebp + (-0x4)) */ /* 0x15069DB7: cmp bx, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = esi; } /* 0x15069DBB: cmove eax, esi */
    esi = eax; /* 0x15069DBE: mov esi, eax */
    eax = edi + 0x1; /* 0x15069DC0: lea eax, [edi + 1] */
    if (CMP_EQ(_flag_a, _flag_b)) { eax = edi; } /* 0x15069DC3: cmove eax, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15069DC6: add edx, 2 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15069DC9: mov edi, eax */
    eax = (uint32_t)MEM16(edx); /* 0x15069DCB: movzx eax, word ptr [edx] */
    ebx = eax; /* 0x15069DCE: mov ebx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15069DD0: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069D96; /* 0x15069DD3: jne 0x15069d96 */
L_15069DD5:
    ebx = esi + 0x2; /* 0x15069DD5: lea ebx, [esi + 2] */
    ebx = ebx + edi * 2; /* 0x15069DD8: lea ebx, [ebx + edi*2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x15069DDB: add ebx, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x15069DDD: push 1 */
    PUSH32(esp, ebx); /* 0x15069DDF: push ebx */
    RECOMP_CALL(sub_15048EE2); /* 0x15069DE0: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15069DE5: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15069DE7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15069DE8: pop ecx */
    /* test esi, esi */ /* 0x15069DE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069E94; /* 0x15069DEB: je 0x15069e94 */
L_15069DF1:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15069DF1: inc edi */
    _flag_k = FK_INC;
    MEM32(0x150BDFB8) = esi; /* 0x15069DF2: mov dword ptr [0x150bdfb8], esi */
    ecx = esi + ebx; /* 0x15069DF8: lea ecx, [esi + ebx] */
    MEM32(0x150BDFD0) = esi; /* 0x15069DFB: mov dword ptr [0x150bdfd0], esi */
    MEM32(0x150BECD4) = ecx; /* 0x15069E01: mov dword ptr [0x150becd4], ecx */
    ebx = esi + edi * 4; /* 0x15069E07: lea ebx, [esi + edi*4] */
    edi = MEM32(0x150BDAF8); /* 0x15069E0A: mov edi, dword ptr [0x150bdaf8] */
    eax = (uint32_t)MEM16(edi); /* 0x15069E10: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x15069E13: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069E82; /* 0x15069E16: je 0x15069e82 */
L_15069E18:
    edx = eax; /* 0x15069E18: mov edx, eax */
L_15069E1A:
    ecx = edi; /* 0x15069E1A: mov ecx, edi */
    eax = ecx + 0x2; /* 0x15069E1C: lea eax, [ecx + 2] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15069E1F: mov dword ptr [ebp - 0xc], eax */
L_15069E22:
    SET_LO16(eax, MEM16(ecx)); /* 0x15069E22: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15069E25: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x15069E28: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069E22; /* 0x15069E2C: jne 0x15069e22 */
L_15069E2E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x15069E2E: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15069E31: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 0x3Du); /* 0x15069E33: push 0x3d */
    eax = ecx + 0x1; /* 0x15069E35: lea eax, [ecx + 1] */
    ecx = POP32_VAL(esp); /* 0x15069E38: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x15069E39: mov dword ptr [ebp - 0xc], eax */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x15069E3C: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069E6E; /* 0x15069E3F: je 0x15069e6e */
L_15069E41:
    PUSH32(esp, edi); /* 0x15069E41: push edi */
    PUSH32(esp, eax); /* 0x15069E42: push eax */
    PUSH32(esp, ebx); /* 0x15069E43: push ebx */
    MEM32(esi) = ebx; /* 0x15069E44: mov dword ptr [esi], ebx */
    RECOMP_CALL(sub_1508F250); /* 0x15069E46: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15069E4B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15069E4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069E61; /* 0x15069E50: je 0x15069e61 */
L_15069E52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069E52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15069E54: push eax */
    PUSH32(esp, eax); /* 0x15069E55: push eax */
    PUSH32(esp, eax); /* 0x15069E56: push eax */
    PUSH32(esp, eax); /* 0x15069E57: push eax */
    PUSH32(esp, eax); /* 0x15069E58: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15069E59: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15069E5E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15069E61:
    eax = MEM32(ebp + (-0xC)); /* 0x15069E61: mov eax, dword ptr [ebp - 0xc] */
    ebx = ebx + eax * 2; /* 0x15069E64: lea ebx, [ebx + eax*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x15069E67: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15069E69: add esi, 4 */
    _flag_k = FK_ADD;
    goto L_15069E70; /* 0x15069E6C: jmp 0x15069e70 */
L_15069E6E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x15069E6E: add eax, eax */
    _flag_k = FK_ADD;
L_15069E70:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x15069E70: add edi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edi); /* 0x15069E72: movzx eax, word ptr [edi] */
    edx = eax; /* 0x15069E75: mov edx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15069E77: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069E1A; /* 0x15069E7A: jne 0x15069e1a */
L_15069E7C:
    edi = MEM32(0x150BDAF8); /* 0x15069E7C: mov edi, dword ptr [0x150bdaf8] */
L_15069E82:
    PUSH32(esp, edi); /* 0x15069E82: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15069E83: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15069E88: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BDAF8) = eax; /* 0x15069E8A: mov dword ptr [0x150bdaf8], eax */
    ecx = POP32_VAL(esp); /* 0x15069E8F: pop ecx */
    MEM32(esi) = eax; /* 0x15069E90: mov dword ptr [esi], eax */
    goto L_15069E97; /* 0x15069E92: jmp 0x15069e97 */
L_15069E94:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15069E94: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15069E97:
    edi = POP32_VAL(esp); /* 0x15069E97: pop edi */
    esi = POP32_VAL(esp); /* 0x15069E98: pop esi */
    ebx = POP32_VAL(esp); /* 0x15069E99: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15069E9A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069E9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15069EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069EB0u);

L_15069EB0:
    PUSH32(esp, ecx); /* 0x15069EB0: push ecx */
    ecx = esp + 0x8; /* 0x15069EB1: lea ecx, [esp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15069EB5: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x15069EB7: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15069EBA: add eax, ecx */
    _flag_k = FK_ADD;
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15069EBC: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x15069EBE: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15069EC0: pop ecx */
    goto L_15069EF0; /* 0x15069EC1: jmp 0x15069ef0 */
L_15069EF0:
    PUSH32(esp, ecx); /* 0x15069EF0: push ecx */
    ecx = esp + 0x4; /* 0x15069EF1: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15069EF5: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15069EF7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x15069EF9: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x15069EFB: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x15069EFD: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x15069EFF: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15069F04:
    /* cmp ecx, eax */ /* 0x15069F04: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15069F12; /* 0x15069F06: jb 0x15069f12 */
L_15069F08:
    eax = ecx; /* 0x15069F08: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x15069F0A: pop ecx */
    { uint32_t _tmp = esp; /* 0x15069F0B: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x15069F0C: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x15069F0E: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069F11: ret  */
L_15069F12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x15069F12: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x15069F17: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15069F04; /* 0x15069F19: jmp 0x15069f04 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15069EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069EF0u);

L_15069EF0:
    PUSH32(esp, ecx); /* 0x15069EF0: push ecx */
    ecx = esp + 0x4; /* 0x15069EF1: lea ecx, [esp + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15069EF5: sub ecx, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15069EF7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ~eax; /* 0x15069EF9: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x15069EFB: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x15069EFD: mov eax, esp */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x15069EFF: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15069F04:
    /* cmp ecx, eax */ /* 0x15069F04: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15069F12; /* 0x15069F06: jb 0x15069f12 */
L_15069F08:
    eax = ecx; /* 0x15069F08: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x15069F0A: pop ecx */
    { uint32_t _tmp = esp; /* 0x15069F0B: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    eax = MEM32(eax); /* 0x15069F0C: mov eax, dword ptr [eax] */
    MEM32(esp) = eax; /* 0x15069F0E: mov dword ptr [esp], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069F11: ret  */
L_15069F12:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1000u; /* 0x15069F12: sub eax, 0x1000 */
    _flag_k = FK_CMP;
    /* test MEM32(eax), eax */ /* 0x15069F17: test dword ptr [eax], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15069F04; /* 0x15069F19: jmp 0x15069f04 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15069F21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069F21u);

L_15069F21:
    PUSH32(esp, 3); /* 0x15069F21: push 3 */
    RECOMP_CALL(sub_15059280); /* 0x15069F23: call 0x15059280 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15069F28: pop ecx */
    /* cmp eax, 1 */ /* 0x15069F29: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069F43; /* 0x15069F2C: je 0x15069f43 */
L_15069F2E:
    PUSH32(esp, 3); /* 0x15069F2E: push 3 */
    RECOMP_CALL(sub_15059280); /* 0x15069F30: call 0x15059280 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15069F35: pop ecx */
    /* test eax, eax */ /* 0x15069F36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069F59; /* 0x15069F38: jne 0x15069f59 */
L_15069F3A:
    /* cmp MEM32(0x150BDB08), 1 */ /* 0x15069F3A: cmp dword ptr [0x150bdb08], 1 */
    _flag_a = (uint32_t)(MEM32(0x150BDB08)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15069F59; /* 0x15069F41: jne 0x15069f59 */
L_15069F43:
    PUSH32(esp, 0xFCu); /* 0x15069F43: push 0xfc */
    RECOMP_CALL(sub_15069F60); /* 0x15069F48: call 0x15069f60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFu); /* 0x15069F4D: push 0xff */
    RECOMP_CALL(sub_15069F60); /* 0x15069F52: call 0x15069f60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15069F57: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15069F58: pop ecx */
L_15069F59:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15069F59: ret  */
    RECOMP_REGS_OUT();
}

void sub_15069F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15069F60u);

L_15069F60:
    edi = edi; /* 0x15069F60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15069F62: push ebp */
    ebp = esp; /* 0x15069F63: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15069F65: push ecx */
    PUSH32(esp, ebx); /* 0x15069F66: push ebx */
    PUSH32(esp, esi); /* 0x15069F67: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15069F68: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15069F6A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15069F6B: mov edi, dword ptr [ebp + 8] */
    esi = ebx; /* 0x15069F6E: mov esi, ebx */
L_15069F70:
    /* cmp edi, MEM32(esi * 8 + 0x15001620) */ /* 0x15069F70: cmp edi, dword ptr [esi*8 + 0x15001620] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi * 8 + 0x15001620));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15069F7F; /* 0x15069F77: je 0x15069f7f */
L_15069F79:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15069F79: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x17u */ /* 0x15069F7A: cmp esi, 0x17 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15069F70; /* 0x15069F7D: jb 0x15069f70 */
L_15069F7F:
    /* cmp esi, 0x17u */ /* 0x15069F7F: cmp esi, 0x17 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506A0BF; /* 0x15069F82: jae 0x1506a0bf */
L_15069F88:
    PUSH32(esp, 3); /* 0x15069F88: push 3 */
    RECOMP_CALL(sub_15059280); /* 0x15069F8A: call 0x15059280 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15069F8F: pop ecx */
    /* cmp eax, 1 */ /* 0x15069F90: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A089; /* 0x15069F93: je 0x1506a089 */
L_15069F99:
    PUSH32(esp, 3); /* 0x15069F99: push 3 */
    RECOMP_CALL(sub_15059280); /* 0x15069F9B: call 0x15059280 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15069FA0: pop ecx */
    /* test eax, eax */ /* 0x15069FA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15069FB2; /* 0x15069FA3: jne 0x15069fb2 */
L_15069FA5:
    /* cmp MEM32(0x150BDB08), 1 */ /* 0x15069FA5: cmp dword ptr [0x150bdb08], 1 */
    _flag_a = (uint32_t)(MEM32(0x150BDB08)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A089; /* 0x15069FAC: je 0x1506a089 */
L_15069FB2:
    /* cmp edi, 0xFCu */ /* 0x15069FB2: cmp edi, 0xfc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A0BF; /* 0x15069FB8: je 0x1506a0bf */
L_15069FBE:
    PUSH32(esp, 0x15006FD0u); /* 0x15069FBE: push 0x15006fd0 */
    PUSH32(esp, 0x314u); /* 0x15069FC3: push 0x314 */
    edi = 0x150BE630u; /* 0x15069FC8: mov edi, 0x150be630 */
    PUSH32(esp, edi); /* 0x15069FCD: push edi */
    RECOMP_CALL(sub_1508E640); /* 0x15069FCE: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15069FD3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15069FD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15069FE7; /* 0x15069FD8: je 0x15069fe7 */
L_15069FDA:
    PUSH32(esp, ebx); /* 0x15069FDA: push ebx */
    PUSH32(esp, ebx); /* 0x15069FDB: push ebx */
    PUSH32(esp, ebx); /* 0x15069FDC: push ebx */
    PUSH32(esp, ebx); /* 0x15069FDD: push ebx */
    PUSH32(esp, ebx); /* 0x15069FDE: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15069FDF: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15069FE4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15069FE7:
    PUSH32(esp, 0x104u); /* 0x15069FE7: push 0x104 */
    PUSH32(esp, 0x150BE649u); /* 0x15069FEC: push 0x150be649 */
    PUSH32(esp, ebx); /* 0x15069FF1: push ebx */
    MEM8(0x150BE74D) = (uint8_t)(LO8(ebx)); /* 0x15069FF2: mov byte ptr [0x150be74d], bl */
    RECOMP_ICALL(MEM32(0x150C0168)); /* 0x15069FF8: call dword ptr [0x150c0168] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15069FFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A02A; /* 0x1506A000: jne 0x1506a02a */
L_1506A002:
    PUSH32(esp, 0x15005B54u); /* 0x1506A002: push 0x15005b54 */
    PUSH32(esp, 0x2FBu); /* 0x1506A007: push 0x2fb */
    PUSH32(esp, 0x150BE649u); /* 0x1506A00C: push 0x150be649 */
    RECOMP_CALL(sub_1508E640); /* 0x1506A011: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506A016: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506A019: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A02A; /* 0x1506A01B: je 0x1506a02a */
L_1506A01D:
    PUSH32(esp, ebx); /* 0x1506A01D: push ebx */
    PUSH32(esp, ebx); /* 0x1506A01E: push ebx */
    PUSH32(esp, ebx); /* 0x1506A01F: push ebx */
    PUSH32(esp, ebx); /* 0x1506A020: push ebx */
    PUSH32(esp, ebx); /* 0x1506A021: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1506A022: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506A027: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1506A02A:
    PUSH32(esp, 0x15005B30u); /* 0x1506A02A: push 0x15005b30 */
    PUSH32(esp, 0x314u); /* 0x1506A02F: push 0x314 */
    PUSH32(esp, edi); /* 0x1506A034: push edi */
    RECOMP_CALL(sub_1508E450); /* 0x1506A035: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506A03A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506A03D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A04E; /* 0x1506A03F: je 0x1506a04e */
L_1506A041:
    PUSH32(esp, ebx); /* 0x1506A041: push ebx */
    PUSH32(esp, ebx); /* 0x1506A042: push ebx */
    PUSH32(esp, ebx); /* 0x1506A043: push ebx */
    PUSH32(esp, ebx); /* 0x1506A044: push ebx */
    PUSH32(esp, ebx); /* 0x1506A045: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1506A046: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506A04B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1506A04E:
    PUSH32(esp, MEM32(esi * 8 + 0x15001624)); /* 0x1506A04E: push dword ptr [esi*8 + 0x15001624] */
    PUSH32(esp, 0x314u); /* 0x1506A055: push 0x314 */
    PUSH32(esp, edi); /* 0x1506A05A: push edi */
    RECOMP_CALL(sub_1508E450); /* 0x1506A05B: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506A060: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506A063: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A074; /* 0x1506A065: je 0x1506a074 */
L_1506A067:
    PUSH32(esp, ebx); /* 0x1506A067: push ebx */
    PUSH32(esp, ebx); /* 0x1506A068: push ebx */
    PUSH32(esp, ebx); /* 0x1506A069: push ebx */
    PUSH32(esp, ebx); /* 0x1506A06A: push ebx */
    PUSH32(esp, ebx); /* 0x1506A06B: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1506A06C: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506A071: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1506A074:
    PUSH32(esp, 0x00012010u); /* 0x1506A074: push 0x12010 */
    PUSH32(esp, 0x15005C40u); /* 0x1506A079: push 0x15005c40 */
    PUSH32(esp, edi); /* 0x1506A07E: push edi */
    RECOMP_CALL(sub_15060C6C); /* 0x1506A07F: call 0x15060c6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506A084: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1506A0BF; /* 0x1506A087: jmp 0x1506a0bf */
L_1506A089:
    PUSH32(esp, 0xFFFFFFF4u); /* 0x1506A089: push -0xc */
    RECOMP_ICALL(MEM32(0x150C01E0)); /* 0x1506A08B: call dword ptr [0x150c01e0] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1506A091: mov edx, eax */
    /* test edx, edx */ /* 0x1506A093: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A0BF; /* 0x1506A095: je 0x1506a0bf */
L_1506A097:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1506A097: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A0BF; /* 0x1506A09A: je 0x1506a0bf */
L_1506A09C:
    esi = MEM32(esi * 8 + 0x15001624); /* 0x1506A09C: mov esi, dword ptr [esi*8 + 0x15001624] */
    ecx = esi; /* 0x1506A0A3: mov ecx, esi */
    edi = ecx + 0x1; /* 0x1506A0A5: lea edi, [ecx + 1] */
L_1506A0A8:
    SET_LO8(eax, MEM8(ecx)); /* 0x1506A0A8: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1506A0AA: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1506A0AB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A0A8; /* 0x1506A0AD: jne 0x1506a0a8 */
L_1506A0AF:
    PUSH32(esp, ebx); /* 0x1506A0AF: push ebx */
    eax = ebp + (-0x4); /* 0x1506A0B0: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1506A0B3: sub ecx, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1506A0B5: push eax */
    PUSH32(esp, ecx); /* 0x1506A0B6: push ecx */
    PUSH32(esp, esi); /* 0x1506A0B7: push esi */
    PUSH32(esp, edx); /* 0x1506A0B8: push edx */
    RECOMP_ICALL(MEM32(0x150C0108)); /* 0x1506A0B9: call dword ptr [0x150c0108] */
    RECOMP_FLAGS_IN();
L_1506A0BF:
    edi = POP32_VAL(esp); /* 0x1506A0BF: pop edi */
    esi = POP32_VAL(esp); /* 0x1506A0C0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1506A0C1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1506A0C2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A0C3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A0CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A0CAu);

L_1506A0CA:
    _flag_a = (uint32_t)(MEM32(0x150BE948)); _flag_b = (uint32_t)(0);
    MEM32(0x150BE948) = MEM32(0x150BE948) & 0; /* 0x1506A0CA: and dword ptr [0x150be948], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A0D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1506A0D3: push esi */
    esi = MEM32(0x150BDFC4); /* 0x1506A0D4: mov esi, dword ptr [0x150bdfc4] */
    MEM32(0x150BE944) = eax; /* 0x1506A0DA: mov dword ptr [0x150be944], eax */
    ecx = MEM32(esi); /* 0x1506A0DF: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1506A0E1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A120; /* 0x1506A0E3: je 0x1506a120 */
L_1506A0E5:
    eax = ecx + 0x1; /* 0x1506A0E5: lea eax, [ecx + 1] */
    PUSH32(esp, 0x15006FECu); /* 0x1506A0E8: push 0x15006fec */
    PUSH32(esp, eax); /* 0x1506A0ED: push eax */
    MEM32(esi) = eax; /* 0x1506A0EE: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_15055990); /* 0x1506A0F0: call 0x15055990 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A0F5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A0F6: pop ecx */
    /* test eax, eax */ /* 0x1506A0F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A106; /* 0x1506A0F9: je 0x1506a106 */
L_1506A0FB:
    PUSH32(esp, eax); /* 0x1506A0FB: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x1506A0FC: push dword ptr [esi] */
    RECOMP_CALL(sub_1506A272); /* 0x1506A0FE: call 0x1506a272 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A103: pop ecx */
    goto L_1506A10D; /* 0x1506A104: jmp 0x1506a10d */
L_1506A106:
    PUSH32(esp, MEM32(esi)); /* 0x1506A106: push dword ptr [esi] */
    RECOMP_CALL(sub_1506A190); /* 0x1506A108: call 0x1506a190 */
    RECOMP_FLAGS_IN();
L_1506A10D:
    ecx = POP32_VAL(esp); /* 0x1506A10D: pop ecx */
    /* test eax, eax */ /* 0x1506A10E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A13F; /* 0x1506A110: jne 0x1506a13f */
L_1506A112:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1506A112: add esi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x1506A115: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1506A117: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A0E5; /* 0x1506A119: jne 0x1506a0e5 */
L_1506A11B:
    eax = MEM32(0x150BE944); /* 0x1506A11B: mov eax, dword ptr [0x150be944] */
L_1506A120:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1506A120: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1506A128; /* 0x1506A122: jmp 0x1506a128 */
L_1506A124:
    eax = MEM32(eax + 0x4); /* 0x1506A124: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1506A127: inc esi */
    _flag_k = FK_INC;
L_1506A128:
    /* test eax, eax */ /* 0x1506A128: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A124; /* 0x1506A12A: jne 0x1506a124 */
L_1506A12C:
    eax = esi + 0x1; /* 0x1506A12C: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x1506A12F: push eax */
    PUSH32(esp, 4); /* 0x1506A130: push 4 */
    RECOMP_CALL(sub_15048EE2); /* 0x1506A132: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A137: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A138: pop ecx */
    ecx = eax; /* 0x1506A139: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1506A13B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A144; /* 0x1506A13D: jne 0x1506a144 */
L_1506A13F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1506A13F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1506A142: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A143: ret  */
L_1506A144:
    edx = MEM32(0x150BE944); /* 0x1506A144: mov edx, dword ptr [0x150be944] */
    MEM32(0x150BDFC0) = esi; /* 0x1506A14A: mov dword ptr [0x150bdfc0], esi */
    esi = edx; /* 0x1506A150: mov esi, edx */
    MEM32(0x150BDFC4) = ecx; /* 0x1506A152: mov dword ptr [0x150bdfc4], ecx */
    goto L_1506A164; /* 0x1506A158: jmp 0x1506a164 */
L_1506A15A:
    eax = MEM32(esi); /* 0x1506A15A: mov eax, dword ptr [esi] */
    MEM32(ecx) = eax; /* 0x1506A15C: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1506A15E: add ecx, 4 */
    _flag_k = FK_ADD;
    esi = MEM32(esi + 0x4); /* 0x1506A161: mov esi, dword ptr [esi + 4] */
L_1506A164:
    /* test esi, esi */ /* 0x1506A164: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A15A; /* 0x1506A166: jne 0x1506a15a */
L_1506A168:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    MEM32(ecx) = MEM32(ecx) & esi; /* 0x1506A168: and dword ptr [ecx], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1506A16A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A186; /* 0x1506A16C: je 0x1506a186 */
L_1506A16E:
    esi = edx; /* 0x1506A16E: mov esi, edx */
L_1506A170:
    esi = MEM32(esi + 0x4); /* 0x1506A170: mov esi, dword ptr [esi + 4] */
    PUSH32(esp, edx); /* 0x1506A173: push edx */
    RECOMP_CALL(sub_15048840); /* 0x1506A174: call 0x15048840 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x1506A179: mov edx, esi */
    ecx = POP32_VAL(esp); /* 0x1506A17B: pop ecx */
    /* test esi, esi */ /* 0x1506A17C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A170; /* 0x1506A17E: jne 0x1506a170 */
L_1506A180:
    MEM32(0x150BE944) = esi; /* 0x1506A180: mov dword ptr [0x150be944], esi */
L_1506A186:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A186: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1506A188: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A189: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A190u);

L_1506A190:
    edi = edi; /* 0x1506A190: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A192: push ebp */
    ebp = esp; /* 0x1506A193: mov ebp, esp */
    PUSH32(esp, 8); /* 0x1506A195: push 8 */
    RECOMP_CALL(sub_15048F2F); /* 0x1506A197: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A19C: pop ecx */
    ecx = eax; /* 0x1506A19D: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1506A19F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A1A8; /* 0x1506A1A1: jne 0x1506a1a8 */
L_1506A1A3:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1506A1A3: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506A1A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A1A7: ret  */
L_1506A1A8:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1506A1A8: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x150BE944), 0 */ /* 0x1506A1AC: cmp dword ptr [0x150be944], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BE944)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1506A1B3: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1506A1B6: mov dword ptr [ecx], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A1C4; /* 0x1506A1B8: je 0x1506a1c4 */
L_1506A1BA:
    eax = MEM32(0x150BE948); /* 0x1506A1BA: mov eax, dword ptr [0x150be948] */
    MEM32(eax + 0x4) = ecx; /* 0x1506A1BF: mov dword ptr [eax + 4], ecx */
    goto L_1506A1CA; /* 0x1506A1C2: jmp 0x1506a1ca */
L_1506A1C4:
    MEM32(0x150BE944) = ecx; /* 0x1506A1C4: mov dword ptr [0x150be944], ecx */
L_1506A1CA:
    MEM32(0x150BE948) = ecx; /* 0x1506A1CA: mov dword ptr [0x150be948], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A1D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506A1D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A1D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A1DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A1DAu);

L_1506A1DA:
    edi = edi; /* 0x1506A1DA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A1DC: push ebp */
    ebp = esp; /* 0x1506A1DD: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1506A1DF: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A237; /* 0x1506A1E3: je 0x1506a237 */
L_1506A1E5:
    eax = MEM32(0x150BE950); /* 0x1506A1E5: mov eax, dword ptr [0x150be950] */
    /* test eax, eax */ /* 0x1506A1EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A202; /* 0x1506A1EC: jne 0x1506a202 */
L_1506A1EE:
    PUSH32(esp, 0x244u); /* 0x1506A1EE: push 0x244 */
    RECOMP_CALL(sub_15048F2F); /* 0x1506A1F3: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    MEM32(0x150BE950) = eax; /* 0x1506A1F8: mov dword ptr [0x150be950], eax */
    ecx = POP32_VAL(esp); /* 0x1506A1FD: pop ecx */
    /* test eax, eax */ /* 0x1506A1FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A233; /* 0x1506A200: je 0x1506a233 */
L_1506A202:
    ecx = MEM32(0x150BE94C); /* 0x1506A202: mov ecx, dword ptr [0x150be94c] */
    /* test ecx, ecx */ /* 0x1506A208: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A21F; /* 0x1506A20A: je 0x1506a21f */
L_1506A20C:
    PUSH32(esp, ecx); /* 0x1506A20C: push ecx */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x1506A20D: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x150BE94C)); _flag_b = (uint32_t)(0);
    MEM32(0x150BE94C) = MEM32(0x150BE94C) & 0; /* 0x1506A213: and dword ptr [0x150be94c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x150BE950); /* 0x1506A21A: mov eax, dword ptr [0x150be950] */
L_1506A21F:
    PUSH32(esp, eax); /* 0x1506A21F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1506A220: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C0114)); /* 0x1506A223: call dword ptr [0x150c0114] */
    RECOMP_FLAGS_IN();
    MEM32(0x150BE94C) = eax; /* 0x1506A229: mov dword ptr [0x150be94c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1506A22E: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A262; /* 0x1506A231: jne 0x1506a262 */
L_1506A233:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A233: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506A235: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A236: ret  */
L_1506A237:
    PUSH32(esp, MEM32(0x150BE950)); /* 0x1506A237: push dword ptr [0x150be950] */
    PUSH32(esp, MEM32(0x150BE94C)); /* 0x1506A23D: push dword ptr [0x150be94c] */
    RECOMP_ICALL(MEM32(0x150C00A8)); /* 0x1506A243: call dword ptr [0x150c00a8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1506A249: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A262; /* 0x1506A24B: jne 0x1506a262 */
L_1506A24D:
    PUSH32(esp, MEM32(0x150BE94C)); /* 0x1506A24D: push dword ptr [0x150be94c] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x1506A253: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x150BE94C)); _flag_b = (uint32_t)(0);
    MEM32(0x150BE94C) = MEM32(0x150BE94C) & 0; /* 0x1506A259: and dword ptr [0x150be94c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1506A233; /* 0x1506A260: jmp 0x1506a233 */
L_1506A262:
    eax = MEM32(0x150BE950); /* 0x1506A262: mov eax, dword ptr [0x150be950] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2Cu; /* 0x1506A267: add eax, 0x2c */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1506A26A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A26B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A272(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A272u);

L_1506A272:
    edi = edi; /* 0x1506A272: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A274: push ebp */
    ebp = esp; /* 0x1506A275: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1506A277: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1506A27A: push ebx */
    PUSH32(esp, esi); /* 0x1506A27B: push esi */
    PUSH32(esp, edi); /* 0x1506A27C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1506A27D: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A280: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1506A282: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1506A284: mov dword ptr [ebp - 8], eax */
    /* test edi, edi */ /* 0x1506A287: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A449; /* 0x1506A289: je 0x1506a449 */
L_1506A28F:
    esi = MEM32(ebp + 0x8); /* 0x1506A28F: mov esi, dword ptr [ebp + 8] */
    goto L_1506A2B4; /* 0x1506A292: jmp 0x1506a2b4 */
L_1506A294:
    SET_LO8(eax, MEM8(edi)); /* 0x1506A294: mov al, byte ptr [edi] */
    ecx = edi; /* 0x1506A296: mov ecx, edi */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1506A298: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A2B8; /* 0x1506A29A: je 0x1506a2b8 */
L_1506A29C:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1506A29C: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A2B8; /* 0x1506A29E: je 0x1506a2b8 */
L_1506A2A0:
    /* cmp LO8(eax), 0x3Au */ /* 0x1506A2A0: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A2B8; /* 0x1506A2A2: je 0x1506a2b8 */
L_1506A2A4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1506A2A4: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, esi */ /* 0x1506A2A5: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1506A2B6; /* 0x1506A2A7: jbe 0x1506a2b6 */
L_1506A2A9:
    PUSH32(esp, ecx); /* 0x1506A2A9: push ecx */
    PUSH32(esp, esi); /* 0x1506A2AA: push esi */
    RECOMP_CALL(sub_15052570); /* 0x1506A2AB: call 0x15052570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A2B0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A2B1: pop ecx */
    edi = eax; /* 0x1506A2B2: mov edi, eax */
L_1506A2B4:
    /* cmp edi, esi */ /* 0x1506A2B4: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1506A2B6:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1506A294; /* 0x1506A2B6: jne 0x1506a294 */
L_1506A2B8:
    SET_LO8(eax, MEM8(edi)); /* 0x1506A2B8: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x3Au */ /* 0x1506A2BA: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A2D1; /* 0x1506A2BC: jne 0x1506a2d1 */
L_1506A2BE:
    eax = esi + 0x1; /* 0x1506A2BE: lea eax, [esi + 1] */
    /* cmp edi, eax */ /* 0x1506A2C1: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A2D9; /* 0x1506A2C3: je 0x1506a2d9 */
L_1506A2C5:
    PUSH32(esp, esi); /* 0x1506A2C5: push esi */
    RECOMP_CALL(sub_1506A190); /* 0x1506A2C6: call 0x1506a190 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A2CB: pop ecx */
    goto L_1506A44C; /* 0x1506A2CC: jmp 0x1506a44c */
L_1506A2D1:
    /* cmp LO8(eax), 0x5Cu */ /* 0x1506A2D1: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A2D9; /* 0x1506A2D3: je 0x1506a2d9 */
L_1506A2D5:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1506A2D5: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A2DE; /* 0x1506A2D7: jne 0x1506a2de */
L_1506A2D9:
    ebx = edi; /* 0x1506A2D9: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1506A2DB: sub ebx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1506A2DD: inc ebx */
    _flag_k = FK_INC;
L_1506A2DE:
    PUSH32(esp, esi); /* 0x1506A2DE: push esi */
    RECOMP_CALL(sub_1506A1DA); /* 0x1506A2DF: call 0x1506a1da */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1506A2E4: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1506A2E7: pop ecx */
    /* test eax, eax */ /* 0x1506A2E8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A2C5; /* 0x1506A2EA: je 0x1506a2c5 */
L_1506A2EC:
    ecx = MEM32(0x150BE948); /* 0x1506A2EC: mov ecx, dword ptr [0x150be948] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1506A2F2: mov dword ptr [ebp - 0x14], ecx */
L_1506A2F5:
    PUSH32(esp, 0x150052E4u); /* 0x1506A2F5: push 0x150052e4 */
    PUSH32(esp, eax); /* 0x1506A2FA: push eax */
    RECOMP_CALL(sub_15052040); /* 0x1506A2FB: call 0x15052040 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A300: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A301: pop ecx */
    /* test eax, eax */ /* 0x1506A302: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A3E8; /* 0x1506A304: je 0x1506a3e8 */
L_1506A30A:
    PUSH32(esp, 0x15006FF0u); /* 0x1506A30A: push 0x15006ff0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1506A30F: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15052040); /* 0x1506A312: call 0x15052040 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A317: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A318: pop ecx */
    /* test eax, eax */ /* 0x1506A319: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A3E8; /* 0x1506A31B: je 0x1506a3e8 */
L_1506A321:
    SET_LO8(eax, MEM8(edi)); /* 0x1506A321: mov al, byte ptr [edi] */
    /* cmp LO8(eax), 0x5Cu */ /* 0x1506A323: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A348; /* 0x1506A325: je 0x1506a348 */
L_1506A327:
    /* cmp LO8(eax), 0x3Au */ /* 0x1506A327: cmp al, 0x3a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A348; /* 0x1506A329: je 0x1506a348 */
L_1506A32B:
    /* cmp LO8(eax), 0x2Fu */ /* 0x1506A32B: cmp al, 0x2f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A348; /* 0x1506A32D: je 0x1506a348 */
L_1506A32F:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1506A32F: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1508B6B0); /* 0x1506A332: call 0x1508b6b0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1506A337: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1506A339: pop ecx */
    /* test esi, esi */ /* 0x1506A33A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A449; /* 0x1506A33C: je 0x1506a449 */
L_1506A342:
    PUSH32(esp, esi); /* 0x1506A342: push esi */
    goto L_1506A3DB; /* 0x1506A343: jmp 0x1506a3db */
L_1506A348:
    ecx = MEM32(ebp + (-0x4)); /* 0x1506A348: mov ecx, dword ptr [ebp - 4] */
    edx = ecx + 0x1; /* 0x1506A34B: lea edx, [ecx + 1] */
L_1506A34E:
    SET_LO8(eax, MEM8(ecx)); /* 0x1506A34E: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1506A350: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1506A351: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A34E; /* 0x1506A353: jne 0x1506a34e */
L_1506A355:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1506A355: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1506A357: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1506A35A: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x1506A35C: mov dword ptr [ebp - 0xc], eax */
    /* test ebx, ebx */ /* 0x1506A35F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1506A449; /* 0x1506A361: js 0x1506a449 */
L_1506A367:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1506A367: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506A449; /* 0x1506A36A: jae 0x1506a449 */
L_1506A370:
    /* cmp eax, ebx */ /* 0x1506A370: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1506A449; /* 0x1506A372: jb 0x1506a449 */
L_1506A378:
    PUSH32(esp, 1); /* 0x1506A378: push 1 */
    PUSH32(esp, eax); /* 0x1506A37A: push eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1506A37B: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1506A380: mov dword ptr [ebp - 0x10], eax */
    ecx = POP32_VAL(esp); /* 0x1506A383: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A384: pop ecx */
    /* test eax, eax */ /* 0x1506A385: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A449; /* 0x1506A387: je 0x1506a449 */
L_1506A38D:
    PUSH32(esp, ebx); /* 0x1506A38D: push ebx */
    PUSH32(esp, esi); /* 0x1506A38E: push esi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1506A38F: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1506A392: push eax */
    RECOMP_CALL(sub_150535C0); /* 0x1506A393: call 0x150535c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1506A398: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506A39B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A3AE; /* 0x1506A39D: je 0x1506a3ae */
L_1506A39F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A39F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1506A3A1: push eax */
    PUSH32(esp, eax); /* 0x1506A3A2: push eax */
    PUSH32(esp, eax); /* 0x1506A3A3: push eax */
    PUSH32(esp, eax); /* 0x1506A3A4: push eax */
    PUSH32(esp, eax); /* 0x1506A3A5: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1506A3A6: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506A3AB: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1506A3AE:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1506A3AE: push dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0xC)); /* 0x1506A3B1: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1506A3B4: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1506A3B6: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1506A3B7: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1506A3BA: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1506A3BC: push eax */
    RECOMP_CALL(sub_1508E640); /* 0x1506A3BD: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506A3C2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506A3C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A3D8; /* 0x1506A3C7: je 0x1506a3d8 */
L_1506A3C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A3C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1506A3CB: push eax */
    PUSH32(esp, eax); /* 0x1506A3CC: push eax */
    PUSH32(esp, eax); /* 0x1506A3CD: push eax */
    PUSH32(esp, eax); /* 0x1506A3CE: push eax */
    PUSH32(esp, eax); /* 0x1506A3CF: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1506A3D0: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506A3D5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1506A3D8:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1506A3D8: push dword ptr [ebp - 0x10] */
L_1506A3DB:
    RECOMP_CALL(sub_1506A190); /* 0x1506A3DB: call 0x1506a190 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A3E0: pop ecx */
    /* test eax, eax */ /* 0x1506A3E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A449; /* 0x1506A3E3: jne 0x1506a449 */
L_1506A3E5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1506A3E5: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
L_1506A3E8:
    PUSH32(esp, 0); /* 0x1506A3E8: push 0 */
    RECOMP_CALL(sub_1506A1DA); /* 0x1506A3EA: call 0x1506a1da */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1506A3EF: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x1506A3F2: pop ecx */
    /* test eax, eax */ /* 0x1506A3F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A2F5; /* 0x1506A3F5: jne 0x1506a2f5 */
L_1506A3FB:
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1506A3FB: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A2C5; /* 0x1506A3FE: je 0x1506a2c5 */
L_1506A404:
    eax = MEM32(ebp + (-0x14)); /* 0x1506A404: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x1506A407: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A410; /* 0x1506A409: je 0x1506a410 */
L_1506A40B:
    edi = MEM32(eax + 0x4); /* 0x1506A40B: mov edi, dword ptr [eax + 4] */
    goto L_1506A416; /* 0x1506A40E: jmp 0x1506a416 */
L_1506A410:
    edi = MEM32(0x150BE944); /* 0x1506A410: mov edi, dword ptr [0x150be944] */
L_1506A416:
    /* test edi, edi */ /* 0x1506A416: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A445; /* 0x1506A418: je 0x1506a445 */
L_1506A41A:
    goto L_1506A43C; /* 0x1506A41A: jmp 0x1506a43c */
L_1506A41C:
    PUSH32(esp, MEM32(edi)); /* 0x1506A41C: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi)); /* 0x1506A41E: push dword ptr [esi] */
    RECOMP_CALL(sub_15052640); /* 0x1506A420: call 0x15052640 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A425: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A426: pop ecx */
    /* test eax, eax */ /* 0x1506A427: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1506A433; /* 0x1506A429: jns 0x1506a433 */
L_1506A42B:
    ecx = MEM32(edi); /* 0x1506A42B: mov ecx, dword ptr [edi] */
    eax = MEM32(esi); /* 0x1506A42D: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1506A42F: mov dword ptr [edi], eax */
    MEM32(esi) = ecx; /* 0x1506A431: mov dword ptr [esi], ecx */
L_1506A433:
    esi = MEM32(esi + 0x4); /* 0x1506A433: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x1506A436: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A41C; /* 0x1506A438: jne 0x1506a41c */
L_1506A43A:
    edi = MEM32(ebx); /* 0x1506A43A: mov edi, dword ptr [ebx] */
L_1506A43C:
    ebx = edi + 0x4; /* 0x1506A43C: lea ebx, [edi + 4] */
    esi = MEM32(ebx); /* 0x1506A43F: mov esi, dword ptr [ebx] */
    /* test esi, esi */ /* 0x1506A441: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A41C; /* 0x1506A443: jne 0x1506a41c */
L_1506A445:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A445: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1506A44C; /* 0x1506A447: jmp 0x1506a44c */
L_1506A449:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1506A449: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506A44C:
    edi = POP32_VAL(esp); /* 0x1506A44C: pop edi */
    esi = POP32_VAL(esp); /* 0x1506A44D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1506A44E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1506A44F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A450: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A457(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A457u);

L_1506A457:
    _flag_a = (uint32_t)(MEM32(0x150BE958)); _flag_b = (uint32_t)(0);
    MEM32(0x150BE958) = MEM32(0x150BE958) & 0; /* 0x1506A457: and dword ptr [0x150be958], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A45E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1506A460: push esi */
    esi = MEM32(0x150BDFC8); /* 0x1506A461: mov esi, dword ptr [0x150bdfc8] */
    MEM32(0x150BE954) = eax; /* 0x1506A467: mov dword ptr [0x150be954], eax */
    ecx = MEM32(esi); /* 0x1506A46C: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1506A46E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A4AD; /* 0x1506A470: je 0x1506a4ad */
L_1506A472:
    eax = ecx + 0x2; /* 0x1506A472: lea eax, [ecx + 2] */
    PUSH32(esp, 0x15006FF4u); /* 0x1506A475: push 0x15006ff4 */
    PUSH32(esp, eax); /* 0x1506A47A: push eax */
    MEM32(esi) = eax; /* 0x1506A47B: mov dword ptr [esi], eax */
    RECOMP_CALL(sub_1508F770); /* 0x1506A47D: call 0x1508f770 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A482: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A483: pop ecx */
    /* test eax, eax */ /* 0x1506A484: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A493; /* 0x1506A486: je 0x1506a493 */
L_1506A488:
    PUSH32(esp, eax); /* 0x1506A488: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x1506A489: push dword ptr [esi] */
    RECOMP_CALL(sub_1506A5FF); /* 0x1506A48B: call 0x1506a5ff */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A490: pop ecx */
    goto L_1506A49A; /* 0x1506A491: jmp 0x1506a49a */
L_1506A493:
    PUSH32(esp, MEM32(esi)); /* 0x1506A493: push dword ptr [esi] */
    RECOMP_CALL(sub_1506A51D); /* 0x1506A495: call 0x1506a51d */
    RECOMP_FLAGS_IN();
L_1506A49A:
    ecx = POP32_VAL(esp); /* 0x1506A49A: pop ecx */
    /* test eax, eax */ /* 0x1506A49B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A4CC; /* 0x1506A49D: jne 0x1506a4cc */
L_1506A49F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1506A49F: add esi, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x1506A4A2: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1506A4A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A472; /* 0x1506A4A6: jne 0x1506a472 */
L_1506A4A8:
    eax = MEM32(0x150BE954); /* 0x1506A4A8: mov eax, dword ptr [0x150be954] */
L_1506A4AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1506A4AD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1506A4B5; /* 0x1506A4AF: jmp 0x1506a4b5 */
L_1506A4B1:
    eax = MEM32(eax + 0x4); /* 0x1506A4B1: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1506A4B4: inc esi */
    _flag_k = FK_INC;
L_1506A4B5:
    /* test eax, eax */ /* 0x1506A4B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A4B1; /* 0x1506A4B7: jne 0x1506a4b1 */
L_1506A4B9:
    eax = esi + 0x1; /* 0x1506A4B9: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x1506A4BC: push eax */
    PUSH32(esp, 4); /* 0x1506A4BD: push 4 */
    RECOMP_CALL(sub_15048EE2); /* 0x1506A4BF: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A4C4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A4C5: pop ecx */
    ecx = eax; /* 0x1506A4C6: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1506A4C8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A4D1; /* 0x1506A4CA: jne 0x1506a4d1 */
L_1506A4CC:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1506A4CC: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1506A4CF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A4D0: ret  */
L_1506A4D1:
    edx = MEM32(0x150BE954); /* 0x1506A4D1: mov edx, dword ptr [0x150be954] */
    MEM32(0x150BDFC0) = esi; /* 0x1506A4D7: mov dword ptr [0x150bdfc0], esi */
    esi = edx; /* 0x1506A4DD: mov esi, edx */
    MEM32(0x150BDFC8) = ecx; /* 0x1506A4DF: mov dword ptr [0x150bdfc8], ecx */
    goto L_1506A4F1; /* 0x1506A4E5: jmp 0x1506a4f1 */
L_1506A4E7:
    eax = MEM32(esi); /* 0x1506A4E7: mov eax, dword ptr [esi] */
    MEM32(ecx) = eax; /* 0x1506A4E9: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1506A4EB: add ecx, 4 */
    _flag_k = FK_ADD;
    esi = MEM32(esi + 0x4); /* 0x1506A4EE: mov esi, dword ptr [esi + 4] */
L_1506A4F1:
    /* test esi, esi */ /* 0x1506A4F1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A4E7; /* 0x1506A4F3: jne 0x1506a4e7 */
L_1506A4F5:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    MEM32(ecx) = MEM32(ecx) & esi; /* 0x1506A4F5: and dword ptr [ecx], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1506A4F7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A513; /* 0x1506A4F9: je 0x1506a513 */
L_1506A4FB:
    esi = edx; /* 0x1506A4FB: mov esi, edx */
L_1506A4FD:
    esi = MEM32(esi + 0x4); /* 0x1506A4FD: mov esi, dword ptr [esi + 4] */
    PUSH32(esp, edx); /* 0x1506A500: push edx */
    RECOMP_CALL(sub_15048840); /* 0x1506A501: call 0x15048840 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x1506A506: mov edx, esi */
    ecx = POP32_VAL(esp); /* 0x1506A508: pop ecx */
    /* test esi, esi */ /* 0x1506A509: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A4FD; /* 0x1506A50B: jne 0x1506a4fd */
L_1506A50D:
    MEM32(0x150BE954) = esi; /* 0x1506A50D: mov dword ptr [0x150be954], esi */
L_1506A513:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A513: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1506A515: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A516: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A51D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A51Du);

L_1506A51D:
    edi = edi; /* 0x1506A51D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A51F: push ebp */
    ebp = esp; /* 0x1506A520: mov ebp, esp */
    PUSH32(esp, 8); /* 0x1506A522: push 8 */
    RECOMP_CALL(sub_15048F2F); /* 0x1506A524: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A529: pop ecx */
    ecx = eax; /* 0x1506A52A: mov ecx, eax */
    /* test ecx, ecx */ /* 0x1506A52C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A535; /* 0x1506A52E: jne 0x1506a535 */
L_1506A530:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1506A530: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506A533: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A534: ret  */
L_1506A535:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x1506A535: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x150BE954), 0 */ /* 0x1506A539: cmp dword ptr [0x150be954], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BE954)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1506A540: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x1506A543: mov dword ptr [ecx], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A551; /* 0x1506A545: je 0x1506a551 */
L_1506A547:
    eax = MEM32(0x150BE958); /* 0x1506A547: mov eax, dword ptr [0x150be958] */
    MEM32(eax + 0x4) = ecx; /* 0x1506A54C: mov dword ptr [eax + 4], ecx */
    goto L_1506A557; /* 0x1506A54F: jmp 0x1506a557 */
L_1506A551:
    MEM32(0x150BE954) = ecx; /* 0x1506A551: mov dword ptr [0x150be954], ecx */
L_1506A557:
    MEM32(0x150BE958) = ecx; /* 0x1506A557: mov dword ptr [0x150be958], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A55D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506A55F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A560: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A567(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A567u);

L_1506A567:
    edi = edi; /* 0x1506A567: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A569: push ebp */
    ebp = esp; /* 0x1506A56A: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1506A56C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A5C4; /* 0x1506A570: je 0x1506a5c4 */
L_1506A572:
    eax = MEM32(0x150BE960); /* 0x1506A572: mov eax, dword ptr [0x150be960] */
    /* test eax, eax */ /* 0x1506A577: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A58F; /* 0x1506A579: jne 0x1506a58f */
L_1506A57B:
    PUSH32(esp, 0x354u); /* 0x1506A57B: push 0x354 */
    RECOMP_CALL(sub_15048F2F); /* 0x1506A580: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    MEM32(0x150BE960) = eax; /* 0x1506A585: mov dword ptr [0x150be960], eax */
    ecx = POP32_VAL(esp); /* 0x1506A58A: pop ecx */
    /* test eax, eax */ /* 0x1506A58B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A5C0; /* 0x1506A58D: je 0x1506a5c0 */
L_1506A58F:
    ecx = MEM32(0x150BE95C); /* 0x1506A58F: mov ecx, dword ptr [0x150be95c] */
    /* test ecx, ecx */ /* 0x1506A595: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A5AC; /* 0x1506A597: je 0x1506a5ac */
L_1506A599:
    PUSH32(esp, ecx); /* 0x1506A599: push ecx */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x1506A59A: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x150BE95C)); _flag_b = (uint32_t)(0);
    MEM32(0x150BE95C) = MEM32(0x150BE95C) & 0; /* 0x1506A5A0: and dword ptr [0x150be95c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x150BE960); /* 0x1506A5A7: mov eax, dword ptr [0x150be960] */
L_1506A5AC:
    PUSH32(esp, eax); /* 0x1506A5AC: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1506A5AD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x150C009C)); /* 0x1506A5B0: call dword ptr [0x150c009c] */
    RECOMP_FLAGS_IN();
    MEM32(0x150BE95C) = eax; /* 0x1506A5B6: mov dword ptr [0x150be95c], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1506A5BB: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A5EF; /* 0x1506A5BE: jne 0x1506a5ef */
L_1506A5C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A5C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506A5C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A5C3: ret  */
L_1506A5C4:
    PUSH32(esp, MEM32(0x150BE960)); /* 0x1506A5C4: push dword ptr [0x150be960] */
    PUSH32(esp, MEM32(0x150BE95C)); /* 0x1506A5CA: push dword ptr [0x150be95c] */
    RECOMP_ICALL(MEM32(0x150C00A0)); /* 0x1506A5D0: call dword ptr [0x150c00a0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1506A5D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A5EF; /* 0x1506A5D8: jne 0x1506a5ef */
L_1506A5DA:
    PUSH32(esp, MEM32(0x150BE95C)); /* 0x1506A5DA: push dword ptr [0x150be95c] */
    RECOMP_ICALL(MEM32(0x150C0090)); /* 0x1506A5E0: call dword ptr [0x150c0090] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x150BE95C)); _flag_b = (uint32_t)(0);
    MEM32(0x150BE95C) = MEM32(0x150BE95C) & 0; /* 0x1506A5E6: and dword ptr [0x150be95c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1506A5C0; /* 0x1506A5ED: jmp 0x1506a5c0 */
L_1506A5EF:
    eax = MEM32(0x150BE960); /* 0x1506A5EF: mov eax, dword ptr [0x150be960] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2Cu; /* 0x1506A5F4: add eax, 0x2c */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1506A5F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A5F8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A5FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A5FFu);

L_1506A5FF:
    edi = edi; /* 0x1506A5FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A601: push ebp */
    ebp = esp; /* 0x1506A602: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1506A604: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1506A607: push ebx */
    PUSH32(esp, esi); /* 0x1506A608: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A609: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1506A60B: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1506A60C: mov edi, dword ptr [ebp + 0xc] */
    ebx = eax; /* 0x1506A60F: mov ebx, eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x1506A611: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1506A614: mov dword ptr [ebp - 0xc], eax */
    /* test edi, edi */ /* 0x1506A617: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A85D; /* 0x1506A619: je 0x1506a85d */
L_1506A61F:
    esi = MEM32(ebp + 0x8); /* 0x1506A61F: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x5Cu); /* 0x1506A622: push 0x5c */
    ecx = POP32_VAL(esp); /* 0x1506A624: pop ecx */
    PUSH32(esp, 0x2Fu); /* 0x1506A625: push 0x2f */
    edx = POP32_VAL(esp); /* 0x1506A627: pop edx */
    MEM32(ebp + (-0x8)) = 0x3Au; /* 0x1506A628: mov dword ptr [ebp - 8], 0x3a */
    goto L_1506A647; /* 0x1506A62F: jmp 0x1506a647 */
L_1506A631:
    eax = (uint32_t)MEM16(edi); /* 0x1506A631: movzx eax, word ptr [edi] */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1506A634: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A64B; /* 0x1506A637: je 0x1506a64b */
L_1506A639:
    /* cmp LO16(eax), LO16(edx) */ /* 0x1506A639: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A64B; /* 0x1506A63C: je 0x1506a64b */
L_1506A63E:
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x1506A63E: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A64B; /* 0x1506A642: je 0x1506a64b */
L_1506A644:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1506A644: sub edi, 2 */
    _flag_k = FK_CMP;
L_1506A647:
    /* cmp edi, esi */ /* 0x1506A647: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A631; /* 0x1506A649: jne 0x1506a631 */
L_1506A64B:
    eax = (uint32_t)MEM16(edi); /* 0x1506A64B: movzx eax, word ptr [edi] */
    /* cmp LO16(eax), MEM16(ebp + (-0x8)) */ /* 0x1506A64E: cmp ax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A667; /* 0x1506A652: jne 0x1506a667 */
L_1506A654:
    eax = esi + 0x2; /* 0x1506A654: lea eax, [esi + 2] */
    /* cmp edi, eax */ /* 0x1506A657: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A671; /* 0x1506A659: je 0x1506a671 */
L_1506A65B:
    PUSH32(esp, esi); /* 0x1506A65B: push esi */
    RECOMP_CALL(sub_1506A51D); /* 0x1506A65C: call 0x1506a51d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A661: pop ecx */
    goto L_1506A860; /* 0x1506A662: jmp 0x1506a860 */
L_1506A667:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1506A667: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A671; /* 0x1506A66A: je 0x1506a671 */
L_1506A66C:
    /* cmp LO16(eax), LO16(edx) */ /* 0x1506A66C: cmp ax, dx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A678; /* 0x1506A66F: jne 0x1506a678 */
L_1506A671:
    ebx = edi; /* 0x1506A671: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x1506A673: sub ebx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1506A675: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1506A677: inc ebx */
    _flag_k = FK_INC;
L_1506A678:
    PUSH32(esp, esi); /* 0x1506A678: push esi */
    RECOMP_CALL(sub_1506A567); /* 0x1506A679: call 0x1506a567 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1506A67E: mov edx, eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x1506A680: mov dword ptr [ebp - 8], edx */
    ecx = POP32_VAL(esp); /* 0x1506A683: pop ecx */
    /* test edx, edx */ /* 0x1506A684: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A65B; /* 0x1506A686: je 0x1506a65b */
L_1506A688:
    eax = MEM32(0x150BE958); /* 0x1506A688: mov eax, dword ptr [0x150be958] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1506A68D: mov dword ptr [ebp - 0x18], eax */
L_1506A690:
    ecx = 0x15006FFCu; /* 0x1506A690: mov ecx, 0x15006ffc */
    eax = edx; /* 0x1506A695: mov eax, edx */
L_1506A697:
    SET_LO16(edx, MEM16(eax)); /* 0x1506A697: mov dx, word ptr [eax] */
    /* cmp LO16(edx), MEM16(ecx) */ /* 0x1506A69A: cmp dx, word ptr [ecx] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebp + (-0x8)); /* 0x1506A69D: mov edx, dword ptr [ebp - 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A6CA; /* 0x1506A6A0: jne 0x1506a6ca */
L_1506A6A2:
    /* cmp MEM16(eax), 0 */ /* 0x1506A6A2: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A6C6; /* 0x1506A6A6: je 0x1506a6c6 */
L_1506A6A8:
    SET_LO16(edx, MEM16(eax + 0x2)); /* 0x1506A6A8: mov dx, word ptr [eax + 2] */
    /* cmp LO16(edx), MEM16(ecx + 0x2) */ /* 0x1506A6AC: cmp dx, word ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0x2)) = (uint16_t)(LO16(edx)); /* 0x1506A6B0: mov word ptr [ebp - 2], dx */
    edx = MEM32(ebp + (-0x8)); /* 0x1506A6B4: mov edx, dword ptr [ebp - 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A6CA; /* 0x1506A6B7: jne 0x1506a6ca */
L_1506A6B9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1506A6B9: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1506A6BC: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1506A6BF: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A697; /* 0x1506A6C4: jne 0x1506a697 */
L_1506A6C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A6C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1506A6CF; /* 0x1506A6C8: jmp 0x1506a6cf */
L_1506A6CA:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1506A6CA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1506A6CC: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506A6CF:
    /* test eax, eax */ /* 0x1506A6CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A7F9; /* 0x1506A6D1: je 0x1506a7f9 */
L_1506A6D7:
    ecx = 0x15007000u; /* 0x1506A6D7: mov ecx, 0x15007000 */
    eax = edx; /* 0x1506A6DC: mov eax, edx */
L_1506A6DE:
    SET_LO16(edx, MEM16(eax)); /* 0x1506A6DE: mov dx, word ptr [eax] */
    /* cmp LO16(edx), MEM16(ecx) */ /* 0x1506A6E1: cmp dx, word ptr [ecx] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    edx = MEM32(ebp + (-0x8)); /* 0x1506A6E4: mov edx, dword ptr [ebp - 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A711; /* 0x1506A6E7: jne 0x1506a711 */
L_1506A6E9:
    /* cmp MEM16(eax), 0 */ /* 0x1506A6E9: cmp word ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A70D; /* 0x1506A6ED: je 0x1506a70d */
L_1506A6EF:
    SET_LO16(edx, MEM16(eax + 0x2)); /* 0x1506A6EF: mov dx, word ptr [eax + 2] */
    /* cmp LO16(edx), MEM16(ecx + 0x2) */ /* 0x1506A6F3: cmp dx, word ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM16(ebp + (-0x2)) = (uint16_t)(LO16(edx)); /* 0x1506A6F7: mov word ptr [ebp - 2], dx */
    edx = MEM32(ebp + (-0x8)); /* 0x1506A6FB: mov edx, dword ptr [ebp - 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A711; /* 0x1506A6FE: jne 0x1506a711 */
L_1506A700:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1506A700: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1506A703: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x2)), 0 */ /* 0x1506A706: cmp word ptr [ebp - 2], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x2))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A6DE; /* 0x1506A70B: jne 0x1506a6de */
L_1506A70D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A70D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1506A716; /* 0x1506A70F: jmp 0x1506a716 */
L_1506A711:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1506A711: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1506A713: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506A716:
    /* test eax, eax */ /* 0x1506A716: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A7F9; /* 0x1506A718: je 0x1506a7f9 */
L_1506A71E:
    eax = (uint32_t)MEM16(edi); /* 0x1506A71E: movzx eax, word ptr [edi] */
    PUSH32(esp, 0x5Cu); /* 0x1506A721: push 0x5c */
    ecx = POP32_VAL(esp); /* 0x1506A723: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1506A724: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A750; /* 0x1506A727: je 0x1506a750 */
L_1506A729:
    PUSH32(esp, 0x3Au); /* 0x1506A729: push 0x3a */
    ecx = POP32_VAL(esp); /* 0x1506A72B: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1506A72C: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A750; /* 0x1506A72F: je 0x1506a750 */
L_1506A731:
    PUSH32(esp, 0x2Fu); /* 0x1506A731: push 0x2f */
    ecx = POP32_VAL(esp); /* 0x1506A733: pop ecx */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1506A734: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A750; /* 0x1506A737: je 0x1506a750 */
L_1506A739:
    PUSH32(esp, edx); /* 0x1506A739: push edx */
    RECOMP_CALL(sub_1508C8A0); /* 0x1506A73A: call 0x1508c8a0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1506A73F: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1506A741: pop ecx */
    /* test esi, esi */ /* 0x1506A742: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A85D; /* 0x1506A744: je 0x1506a85d */
L_1506A74A:
    PUSH32(esp, esi); /* 0x1506A74A: push esi */
    goto L_1506A7EC; /* 0x1506A74B: jmp 0x1506a7ec */
L_1506A750:
    ecx = edx; /* 0x1506A750: mov ecx, edx */
    edx = ecx + 0x2; /* 0x1506A752: lea edx, [ecx + 2] */
L_1506A755:
    SET_LO16(eax, MEM16(ecx)); /* 0x1506A755: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1506A758: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x14)) */ /* 0x1506A75B: cmp ax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x14))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506A755; /* 0x1506A75F: jne 0x1506a755 */
L_1506A761:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1506A761: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1506A763: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    eax = ecx + 0x1; /* 0x1506A765: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1506A768: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1506A76A: mov dword ptr [ebp - 4], eax */
    /* test ebx, ebx */ /* 0x1506A76D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1506A85D; /* 0x1506A76F: js 0x1506a85d */
L_1506A775:
    /* cmp eax, 0x7FFFFFFFu */ /* 0x1506A775: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1506A85D; /* 0x1506A77A: jae 0x1506a85d */
L_1506A780:
    /* cmp eax, ebx */ /* 0x1506A780: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1506A85D; /* 0x1506A782: jb 0x1506a85d */
L_1506A788:
    PUSH32(esp, 2); /* 0x1506A788: push 2 */
    PUSH32(esp, eax); /* 0x1506A78A: push eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1506A78B: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1506A790: mov dword ptr [ebp - 0x10], eax */
    ecx = POP32_VAL(esp); /* 0x1506A793: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A794: pop ecx */
    /* test eax, eax */ /* 0x1506A795: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A85D; /* 0x1506A797: je 0x1506a85d */
L_1506A79D:
    PUSH32(esp, ebx); /* 0x1506A79D: push ebx */
    PUSH32(esp, esi); /* 0x1506A79E: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1506A79F: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1506A7A2: push eax */
    RECOMP_CALL(sub_1508F590); /* 0x1506A7A3: call 0x1508f590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1506A7A8: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506A7AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A7BE; /* 0x1506A7AD: je 0x1506a7be */
L_1506A7AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A7AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1506A7B1: push eax */
    PUSH32(esp, eax); /* 0x1506A7B2: push eax */
    PUSH32(esp, eax); /* 0x1506A7B3: push eax */
    PUSH32(esp, eax); /* 0x1506A7B4: push eax */
    PUSH32(esp, eax); /* 0x1506A7B5: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1506A7B6: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506A7BB: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1506A7BE:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1506A7BE: push dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x1506A7C1: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1506A7C4: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1506A7C6: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1506A7C7: mov eax, dword ptr [ebp - 0x10] */
    eax = eax + ebx * 2; /* 0x1506A7CA: lea eax, [eax + ebx*2] */
    PUSH32(esp, eax); /* 0x1506A7CD: push eax */
    RECOMP_CALL(sub_1508F250); /* 0x1506A7CE: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1506A7D3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1506A7D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A7E9; /* 0x1506A7D8: je 0x1506a7e9 */
L_1506A7DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A7DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1506A7DC: push eax */
    PUSH32(esp, eax); /* 0x1506A7DD: push eax */
    PUSH32(esp, eax); /* 0x1506A7DE: push eax */
    PUSH32(esp, eax); /* 0x1506A7DF: push eax */
    PUSH32(esp, eax); /* 0x1506A7E0: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1506A7E1: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1506A7E6: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1506A7E9:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1506A7E9: push dword ptr [ebp - 0x10] */
L_1506A7EC:
    RECOMP_CALL(sub_1506A51D); /* 0x1506A7EC: call 0x1506a51d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A7F1: pop ecx */
    /* test eax, eax */ /* 0x1506A7F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A85D; /* 0x1506A7F4: jne 0x1506a85d */
L_1506A7F6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1506A7F6: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
L_1506A7F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A7F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1506A7FB: push eax */
    RECOMP_CALL(sub_1506A567); /* 0x1506A7FC: call 0x1506a567 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1506A801: mov edx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1506A803: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x1506A806: pop ecx */
    /* test edx, edx */ /* 0x1506A807: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A690; /* 0x1506A809: jne 0x1506a690 */
L_1506A80F:
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x1506A80F: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A65B; /* 0x1506A812: je 0x1506a65b */
L_1506A818:
    eax = MEM32(ebp + (-0x18)); /* 0x1506A818: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, eax */ /* 0x1506A81B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A824; /* 0x1506A81D: je 0x1506a824 */
L_1506A81F:
    edi = MEM32(eax + 0x4); /* 0x1506A81F: mov edi, dword ptr [eax + 4] */
    goto L_1506A82A; /* 0x1506A822: jmp 0x1506a82a */
L_1506A824:
    edi = MEM32(0x150BE954); /* 0x1506A824: mov edi, dword ptr [0x150be954] */
L_1506A82A:
    /* test edi, edi */ /* 0x1506A82A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1506A859; /* 0x1506A82C: je 0x1506a859 */
L_1506A82E:
    goto L_1506A850; /* 0x1506A82E: jmp 0x1506a850 */
L_1506A830:
    PUSH32(esp, MEM32(edi)); /* 0x1506A830: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi)); /* 0x1506A832: push dword ptr [esi] */
    RECOMP_CALL(sub_1508C930); /* 0x1506A834: call 0x1508c930 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A839: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A83A: pop ecx */
    /* test eax, eax */ /* 0x1506A83B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1506A847; /* 0x1506A83D: jns 0x1506a847 */
L_1506A83F:
    ecx = MEM32(edi); /* 0x1506A83F: mov ecx, dword ptr [edi] */
    eax = MEM32(esi); /* 0x1506A841: mov eax, dword ptr [esi] */
    MEM32(edi) = eax; /* 0x1506A843: mov dword ptr [edi], eax */
    MEM32(esi) = ecx; /* 0x1506A845: mov dword ptr [esi], ecx */
L_1506A847:
    esi = MEM32(esi + 0x4); /* 0x1506A847: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x1506A84A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A830; /* 0x1506A84C: jne 0x1506a830 */
L_1506A84E:
    edi = MEM32(ebx); /* 0x1506A84E: mov edi, dword ptr [ebx] */
L_1506A850:
    ebx = edi + 0x4; /* 0x1506A850: lea ebx, [edi + 4] */
    esi = MEM32(ebx); /* 0x1506A853: mov esi, dword ptr [ebx] */
    /* test esi, esi */ /* 0x1506A855: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A830; /* 0x1506A857: jne 0x1506a830 */
L_1506A859:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A859: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1506A860; /* 0x1506A85B: jmp 0x1506a860 */
L_1506A85D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1506A85D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1506A860:
    edi = POP32_VAL(esp); /* 0x1506A860: pop edi */
    esi = POP32_VAL(esp); /* 0x1506A861: pop esi */
    ebx = POP32_VAL(esp); /* 0x1506A862: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1506A863: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A864: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A870u);

L_1506A870:
    PUSH32(esp, 4); /* 0x1506A870: push 4 */
    PUSH32(esp, MEM32(0x150BD680)); /* 0x1506A872: push dword ptr [0x150bd680] */
    RECOMP_CALL(sub_15048EE2); /* 0x1506A878: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BFCE0) = eax; /* 0x1506A87D: mov dword ptr [0x150bfce0], eax */
    ecx = POP32_VAL(esp); /* 0x1506A882: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A883: pop ecx */
    /* test eax, eax */ /* 0x1506A884: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A8A7; /* 0x1506A886: jne 0x1506a8a7 */
L_1506A888:
    PUSH32(esp, 0x14u); /* 0x1506A888: push 0x14 */
    eax = POP32_VAL(esp); /* 0x1506A88A: pop eax */
    PUSH32(esp, 4); /* 0x1506A88B: push 4 */
    PUSH32(esp, eax); /* 0x1506A88D: push eax */
    MEM32(0x150BD680) = eax; /* 0x1506A88E: mov dword ptr [0x150bd680], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x1506A893: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BFCE0) = eax; /* 0x1506A898: mov dword ptr [0x150bfce0], eax */
    ecx = POP32_VAL(esp); /* 0x1506A89D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1506A89E: pop ecx */
    /* test eax, eax */ /* 0x1506A89F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A8A7; /* 0x1506A8A1: jne 0x1506a8a7 */
L_1506A8A3:
    PUSH32(esp, 0x1Au); /* 0x1506A8A3: push 0x1a */
    eax = POP32_VAL(esp); /* 0x1506A8A5: pop eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A8A6: ret  */
L_1506A8A7:
    PUSH32(esp, esi); /* 0x1506A8A7: push esi */
    PUSH32(esp, edi); /* 0x1506A8A8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1506A8A9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x150BC600u; /* 0x1506A8AB: mov ecx, 0x150bc600 */
    edx = edi; /* 0x1506A8B0: mov edx, edi */
L_1506A8B2:
    MEM32(edx + eax) = ecx; /* 0x1506A8B2: mov dword ptr [edx + eax], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x1506A8B5: add ecx, 0x20 */
    _flag_k = FK_ADD;
    edx = edx + 0x4; /* 0x1506A8B8: lea edx, [edx + 4] */
    /* cmp ecx, 0x150BC880u */ /* 0x1506A8BB: cmp ecx, 0x150bc880 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150BC880u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1506A8CA; /* 0x1506A8C1: jge 0x1506a8ca */
L_1506A8C3:
    eax = MEM32(0x150BFCE0); /* 0x1506A8C3: mov eax, dword ptr [0x150bfce0] */
    RECOMP_BACKEDGE();
    goto L_1506A8B2; /* 0x1506A8C8: jmp 0x1506a8b2 */
L_1506A8CA:
    esi = 0x150BC610u; /* 0x1506A8CA: mov esi, 0x150bc610 */
L_1506A8CF:
    eax = edi; /* 0x1506A8CF: mov eax, edi */
    edx = edi; /* 0x1506A8D1: mov edx, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x1506A8D3: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x1506A8D6: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1506A8D9: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x1506A8DC: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    eax = MEM32(ecx + eax); /* 0x1506A8E3: mov eax, dword ptr [ecx + eax] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1506A8E6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A8F4; /* 0x1506A8E9: je 0x1506a8f4 */
L_1506A8EB:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1506A8EB: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A8F4; /* 0x1506A8EE: je 0x1506a8f4 */
L_1506A8F0:
    /* test eax, eax */ /* 0x1506A8F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1506A8FA; /* 0x1506A8F2: jne 0x1506a8fa */
L_1506A8F4:
    MEM32(esi) = 0xFFFFFFFEu; /* 0x1506A8F4: mov dword ptr [esi], 0xfffffffe */
L_1506A8FA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x1506A8FA: add esi, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1506A8FD: inc edi */
    _flag_k = FK_INC;
    /* cmp esi, 0x150BC670u */ /* 0x1506A8FE: cmp esi, 0x150bc670 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x150BC670u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1506A8CF; /* 0x1506A904: jl 0x1506a8cf */
L_1506A906:
    edi = POP32_VAL(esp); /* 0x1506A906: pop edi */
    esi = POP32_VAL(esp); /* 0x1506A907: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1506A908: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A90A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A920u);

L_1506A920:
    RECOMP_CALL(sub_15076CF0); /* 0x1506A920: call 0x15076cf0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(0x150BDFB0), 0 */ /* 0x1506A925: cmp byte ptr [0x150bdfb0], 0 */
    _flag_a = (uint32_t)(MEM8(0x150BDFB0)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1506A933; /* 0x1506A92C: je 0x1506a933 */
L_1506A92E:
    RECOMP_CALL(sub_15076680); /* 0x1506A92E: call 0x15076680 */
    RECOMP_FLAGS_IN();
L_1506A933:
    PUSH32(esp, MEM32(0x150BFCE0)); /* 0x1506A933: push dword ptr [0x150bfce0] */
    RECOMP_CALL(sub_15048840); /* 0x1506A939: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A93E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A93F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A946(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A946u);

L_1506A946:
    edi = edi; /* 0x1506A946: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A948: push ebp */
    ebp = esp; /* 0x1506A949: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1506A94B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1506A94C: mov esi, dword ptr [ebp + 8] */
    ecx = 0x150BC600u; /* 0x1506A94F: mov ecx, 0x150bc600 */
    /* cmp esi, ecx */ /* 0x1506A954: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1506A97A; /* 0x1506A956: jb 0x1506a97a */
L_1506A958:
    /* cmp esi, 0x150BC860u */ /* 0x1506A958: cmp esi, 0x150bc860 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x150BC860u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1506A97A; /* 0x1506A95E: ja 0x1506a97a */
L_1506A960:
    eax = esi; /* 0x1506A960: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1506A962: sub eax, ecx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1506A964: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1506A967: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1506A96A: push eax */
    RECOMP_CALL(sub_15068D80); /* 0x1506A96B: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0xC) | 0x8000u)); _flag_b = (uint32_t)((MEM32(esi + 0xC) | 0x8000u));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x8000u; /* 0x1506A970: or dword ptr [esi + 0xc], 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1506A977: pop ecx */
    goto L_1506A984; /* 0x1506A978: jmp 0x1506a984 */
L_1506A97A:
    eax = esi + 0x20; /* 0x1506A97A: lea eax, [esi + 0x20] */
    PUSH32(esp, eax); /* 0x1506A97D: push eax */
    RECOMP_ICALL(MEM32(0x150C0268)); /* 0x1506A97E: call dword ptr [0x150c0268] */
    RECOMP_FLAGS_IN();
L_1506A984:
    esi = POP32_VAL(esp); /* 0x1506A984: pop esi */
    ebp = POP32_VAL(esp); /* 0x1506A985: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A986: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A98D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A98Du);

L_1506A98D:
    edi = edi; /* 0x1506A98D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A98F: push ebp */
    ebp = esp; /* 0x1506A990: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1506A992: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x14u */ /* 0x1506A995: cmp eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1506A9B0; /* 0x1506A998: jge 0x1506a9b0 */
L_1506A99A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1506A99A: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1506A99D: push eax */
    RECOMP_CALL(sub_15068D80); /* 0x1506A99E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1506A9A3: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1506A9A6: pop ecx */
    _flag_a = (uint32_t)((MEM32(eax + 0xC) | 0x8000u)); _flag_b = (uint32_t)((MEM32(eax + 0xC) | 0x8000u));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 0x8000u; /* 0x1506A9A7: or dword ptr [eax + 0xc], 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506A9AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A9AF: ret  */
L_1506A9B0:
    eax = MEM32(ebp + 0xC); /* 0x1506A9B0: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1506A9B3: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1506A9B6: push eax */
    RECOMP_ICALL(MEM32(0x150C0268)); /* 0x1506A9B7: call dword ptr [0x150c0268] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1506A9BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A9BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506A9C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506A9C5u);

L_1506A9C5:
    edi = edi; /* 0x1506A9C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506A9C7: push ebp */
    ebp = esp; /* 0x1506A9C8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1506A9CA: mov eax, dword ptr [ebp + 8] */
    ecx = 0x150BC600u; /* 0x1506A9CD: mov ecx, 0x150bc600 */
    /* cmp eax, ecx */ /* 0x1506A9D2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1506A9F5; /* 0x1506A9D4: jb 0x1506a9f5 */
L_1506A9D6:
    /* cmp eax, 0x150BC860u */ /* 0x1506A9D6: cmp eax, 0x150bc860 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BC860u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1506A9F5; /* 0x1506A9DB: ja 0x1506a9f5 */
L_1506A9DD:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0xFFFF7FFFu; /* 0x1506A9DD: and dword ptr [eax + 0xc], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1506A9E4: sub eax, ecx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x1506A9E6: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1506A9E9: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1506A9EC: push eax */
    RECOMP_CALL(sub_15068F50); /* 0x1506A9ED: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506A9F2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1506A9F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506A9F4: ret  */
L_1506A9F5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1506A9F5: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1506A9F8: push eax */
    RECOMP_ICALL(MEM32(0x150C026C)); /* 0x1506A9F9: call dword ptr [0x150c026c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1506A9FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506AA00: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506AA07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506AA07u);

L_1506AA07:
    edi = edi; /* 0x1506AA07: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506AA09: push ebp */
    ebp = esp; /* 0x1506AA0A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1506AA0C: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x1506AA0F: mov eax, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0x14u */ /* 0x1506AA12: cmp ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1506AA2A; /* 0x1506AA15: jge 0x1506aa2a */
L_1506AA17:
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0xFFFF7FFFu; /* 0x1506AA17: and dword ptr [eax + 0xc], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x10; /* 0x1506AA1E: lea eax, [ecx + 0x10] */
    PUSH32(esp, eax); /* 0x1506AA21: push eax */
    RECOMP_CALL(sub_15068F50); /* 0x1506AA22: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1506AA27: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1506AA28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506AA29: ret  */
L_1506AA2A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1506AA2A: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1506AA2D: push eax */
    RECOMP_ICALL(MEM32(0x150C026C)); /* 0x1506AA2E: call dword ptr [0x150c026c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1506AA34: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506AA35: ret  */
    RECOMP_REGS_OUT();
}

void sub_1506AA3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1506AA3Cu);

L_1506AA3C:
    edi = edi; /* 0x1506AA3C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1506AA3E: push ebp */
    ebp = esp; /* 0x1506AA3F: mov ebp, esp */
    eax = (int32_t)(int8_t)MEM8(ebp + 0x8); /* 0x1506AA41: movsx eax, byte ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1506AA45: push eax */
    RECOMP_CALL(sub_1504D706); /* 0x1506AA46: call 0x1504d706 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1506AA4B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1506AA4E: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x1506AA51: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1506AA59; /* 0x1506AA52: jne 0x1506aa59 */
L_1506AA54:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1506AA54: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1506AA57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506AA58: ret  */
L_1506AA59:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1506AA59: inc dword ptr [eax] */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1506AA5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1506AA5C: ret  */
    RECOMP_REGS_OUT();
}
