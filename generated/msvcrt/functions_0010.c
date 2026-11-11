#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15046090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046090u);

L_15046090:
    edi = edi; /* 0x15046090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046092: push ebp */
    ebp = esp; /* 0x15046093: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15046095: push esi */
    goto L_150460A5; /* 0x15046096: jmp 0x150460a5 */
L_15046098:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15046098: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15046160); /* 0x1504609B: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150460A0: pop ecx */
    /* test eax, eax */ /* 0x150460A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150460B4; /* 0x150460A3: je 0x150460b4 */
L_150460A5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150460A5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15048A30); /* 0x150460A8: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150460AD: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x150460AF: pop ecx */
    /* test esi, esi */ /* 0x150460B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046098; /* 0x150460B2: je 0x15046098 */
L_150460B4:
    eax = esi; /* 0x150460B4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150460B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x150460B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150460B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150460C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150460C0u);

L_150460C0:
    goto L_15048840; /* 0x150460C0: jmp 0x15048840 */
L_15048840:
    PUSH32(esp, 0x18u); /* 0x15048840: push 0x18 */
    PUSH32(esp, 0x150B0410u); /* 0x15048842: push 0x150b0410 */
    RECOMP_CALL(sub_1505E988); /* 0x15048847: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1504884C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504884F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150488C3; /* 0x15048851: je 0x150488c3 */
L_15048853:
    eax = MEM32(0x150BEBA4); /* 0x15048853: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x15048858: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150488E4; /* 0x1504885B: jne 0x150488e4 */
L_15048861:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15048861: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x15048865: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15048867: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504886C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504886D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15048871: push esi */
    RECOMP_CALL(sub_150475FD); /* 0x15048872: call 0x150475fd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048877: pop ecx */
    edi = eax; /* 0x15048878: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504887A: mov dword ptr [ebp - 0x1c], edi */
    /* test edi, edi */ /* 0x1504887D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504888A; /* 0x1504887F: je 0x1504888a */
L_15048881:
    PUSH32(esp, esi); /* 0x15048881: push esi */
    PUSH32(esp, edi); /* 0x15048882: push edi */
    RECOMP_CALL(sub_15047635); /* 0x15048883: call 0x15047635 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048888: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15048889: pop ecx */
L_1504888A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504888A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150488D9); /* 0x15048891: call 0x150488d9 */
    RECOMP_FLAGS_IN();
L_15048896:
    /* test edi, edi */ /* 0x15048896: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150488C3; /* 0x15048898: jne 0x150488c3 */
L_1504889A:
    PUSH32(esp, esi); /* 0x1504889A: push esi */
    PUSH32(esp, 0); /* 0x1504889B: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x1504889D: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x150488A3: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150488A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150488C3; /* 0x150488AB: jne 0x150488c3 */
L_150488AD:
    RECOMP_CALL(sub_15036430); /* 0x150488AD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150488B2: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150488B4: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150488BA: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x150488BB: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488C0: pop ecx */
    MEM32(esi) = eax; /* 0x150488C1: mov dword ptr [esi], eax */
L_150488C3:
    ecx = MEM32(ebp + (-0x10)); /* 0x150488C3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150488C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150488CD: pop ecx */
    edi = POP32_VAL(esp); /* 0x150488CE: pop edi */
    esi = POP32_VAL(esp); /* 0x150488CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150488D0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150488D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150488D2: ret  */
L_150488E4:
    /* cmp eax, 2 */ /* 0x150488E4: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504889A; /* 0x150488E7: jne 0x1504889a */
L_150488E9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x150488E9: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x150488ED: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150488EF: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488F4: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x150488F5: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x24); /* 0x150488FC: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x150488FF: push eax */
    eax = ebp + (-0x28); /* 0x15048900: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15048903: push eax */
    PUSH32(esp, esi); /* 0x15048904: push esi */
    RECOMP_CALL(sub_15046C73); /* 0x15048905: call 0x15046c73 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504890A: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504890D: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x1504890F: mov dword ptr [ebp - 0x20], edi */
    /* test edi, edi */ /* 0x15048912: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048925; /* 0x15048914: je 0x15048925 */
L_15048916:
    PUSH32(esp, edi); /* 0x15048916: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15048917: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1504891A: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_15046CE4); /* 0x1504891D: call 0x15046ce4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15048922: add esp, 0xc */
    _flag_k = FK_ADD;
L_15048925:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048925: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504893C); /* 0x1504892C: call 0x1504893c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15048896; /* 0x15048931: jmp 0x15048896 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150460D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150460D0u);

    goto L_150460D0;
L_15046090:
    edi = edi; /* 0x15046090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046092: push ebp */
    ebp = esp; /* 0x15046093: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15046095: push esi */
    goto L_150460A5; /* 0x15046096: jmp 0x150460a5 */
L_15046098:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15046098: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15046160); /* 0x1504609B: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150460A0: pop ecx */
    /* test eax, eax */ /* 0x150460A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150460B4; /* 0x150460A3: je 0x150460b4 */
L_150460A5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150460A5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15048A30); /* 0x150460A8: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150460AD: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x150460AF: pop ecx */
    /* test esi, esi */ /* 0x150460B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046098; /* 0x150460B2: je 0x15046098 */
L_150460B4:
    eax = esi; /* 0x150460B4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150460B6: pop esi */
    ebp = POP32_VAL(esp); /* 0x150460B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150460B8: ret  */
L_150460D0:
    edi = edi; /* 0x150460D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150460D2: push ebp */
    ebp = esp; /* 0x150460D3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x150460D5: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15046090; /* 0x150460D6: jmp 0x15046090 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150460F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150460F0u);

    goto L_150460F0;
L_150460C0:
    goto L_15048840; /* 0x150460C0: jmp 0x15048840 */
L_150460F0:
    RECOMP_BACKEDGE();
    goto L_150460C0; /* 0x150460F0: jmp 0x150460c0 */
L_15048840:
    PUSH32(esp, 0x18u); /* 0x15048840: push 0x18 */
    PUSH32(esp, 0x150B0410u); /* 0x15048842: push 0x150b0410 */
    RECOMP_CALL(sub_1505E988); /* 0x15048847: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1504884C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504884F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150488C3; /* 0x15048851: je 0x150488c3 */
L_15048853:
    eax = MEM32(0x150BEBA4); /* 0x15048853: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x15048858: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150488E4; /* 0x1504885B: jne 0x150488e4 */
L_15048861:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15048861: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x15048865: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15048867: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504886C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504886D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15048871: push esi */
    RECOMP_CALL(sub_150475FD); /* 0x15048872: call 0x150475fd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048877: pop ecx */
    edi = eax; /* 0x15048878: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504887A: mov dword ptr [ebp - 0x1c], edi */
    /* test edi, edi */ /* 0x1504887D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504888A; /* 0x1504887F: je 0x1504888a */
L_15048881:
    PUSH32(esp, esi); /* 0x15048881: push esi */
    PUSH32(esp, edi); /* 0x15048882: push edi */
    RECOMP_CALL(sub_15047635); /* 0x15048883: call 0x15047635 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048888: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15048889: pop ecx */
L_1504888A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504888A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150488D9); /* 0x15048891: call 0x150488d9 */
    RECOMP_FLAGS_IN();
L_15048896:
    /* test edi, edi */ /* 0x15048896: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150488C3; /* 0x15048898: jne 0x150488c3 */
L_1504889A:
    PUSH32(esp, esi); /* 0x1504889A: push esi */
    PUSH32(esp, 0); /* 0x1504889B: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x1504889D: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x150488A3: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150488A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150488C3; /* 0x150488AB: jne 0x150488c3 */
L_150488AD:
    RECOMP_CALL(sub_15036430); /* 0x150488AD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150488B2: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150488B4: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150488BA: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x150488BB: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488C0: pop ecx */
    MEM32(esi) = eax; /* 0x150488C1: mov dword ptr [esi], eax */
L_150488C3:
    ecx = MEM32(ebp + (-0x10)); /* 0x150488C3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150488C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150488CD: pop ecx */
    edi = POP32_VAL(esp); /* 0x150488CE: pop edi */
    esi = POP32_VAL(esp); /* 0x150488CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150488D0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150488D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150488D2: ret  */
L_150488E4:
    /* cmp eax, 2 */ /* 0x150488E4: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504889A; /* 0x150488E7: jne 0x1504889a */
L_150488E9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x150488E9: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x150488ED: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150488EF: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488F4: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x150488F5: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x24); /* 0x150488FC: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x150488FF: push eax */
    eax = ebp + (-0x28); /* 0x15048900: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15048903: push eax */
    PUSH32(esp, esi); /* 0x15048904: push esi */
    RECOMP_CALL(sub_15046C73); /* 0x15048905: call 0x15046c73 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504890A: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504890D: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x1504890F: mov dword ptr [ebp - 0x20], edi */
    /* test edi, edi */ /* 0x15048912: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048925; /* 0x15048914: je 0x15048925 */
L_15048916:
    PUSH32(esp, edi); /* 0x15048916: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15048917: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1504891A: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_15046CE4); /* 0x1504891D: call 0x15046ce4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15048922: add esp, 0xc */
    _flag_k = FK_ADD;
L_15048925:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048925: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504893C); /* 0x1504892C: call 0x1504893c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15048896; /* 0x15048931: jmp 0x15048896 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15046100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046100u);

L_15046100:
    PUSH32(esp, MEM32(0x150BDB64)); /* 0x15046100: push dword ptr [0x150bdb64] */
    RECOMP_CALL(sub_1506863C); /* 0x15046106: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504610B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504610C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046120u);

L_15046120:
    edi = edi; /* 0x15046120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046122: push ebp */
    ebp = esp; /* 0x15046123: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15046125: push esi */
    PUSH32(esp, 4); /* 0x15046126: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15046128: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x150BDB64)); /* 0x1504612D: push dword ptr [0x150bdb64] */
    RECOMP_CALL(sub_1506863C); /* 0x15046133: call 0x1506863c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15046138: push dword ptr [ebp + 8] */
    esi = eax; /* 0x1504613B: mov esi, eax */
    RECOMP_CALL(sub_15068652); /* 0x1504613D: call 0x15068652 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x15046142: push 4 */
    MEM32(0x150BDB64) = eax; /* 0x15046144: mov dword ptr [0x150bdb64], eax */
    RECOMP_CALL(sub_15068F50); /* 0x15046149: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1504614E: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15046151: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15046153: pop esi */
    ebp = POP32_VAL(esp); /* 0x15046154: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046155: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046160u);

L_15046160:
    edi = edi; /* 0x15046160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046162: push ebp */
    ebp = esp; /* 0x15046163: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15046165: push esi */
    PUSH32(esp, MEM32(0x150BDB64)); /* 0x15046166: push dword ptr [0x150bdb64] */
    RECOMP_CALL(sub_1506863C); /* 0x1504616C: call 0x1506863c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15046171: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15046173: pop ecx */
    /* test esi, esi */ /* 0x15046174: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504618E; /* 0x15046176: je 0x1504618e */
L_15046178:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15046178: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1504617B: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1504617D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15046183: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15046185: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15046187: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15046188: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1504618A: neg eax */
    _flag_k = FK_CMP;
    goto L_15046190; /* 0x1504618C: jmp 0x15046190 */
L_1504618E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504618E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15046190:
    esi = POP32_VAL(esp); /* 0x15046190: pop esi */
    ebp = POP32_VAL(esp); /* 0x15046191: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046192: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046199(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046199u);

L_15046199:
    edi = edi; /* 0x15046199: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504619B: push ebp */
    ebp = esp; /* 0x1504619C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1504619E: mov eax, dword ptr [ebp + 8] */
    MEM32(0x150BDB64) = eax; /* 0x150461A1: mov dword ptr [0x150bdb64], eax */
    ebp = POP32_VAL(esp); /* 0x150461A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150461A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150461B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150461B0u);

L_150461B0:
    eax = MEM32(0x150BDB78); /* 0x150461B0: mov eax, dword ptr [0x150bdb78] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150461B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150461C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150461C0u);

L_150461C0:
    edi = edi; /* 0x150461C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150461C2: push ebp */
    ebp = esp; /* 0x150461C3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x150461C5: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150461C8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150461F0; /* 0x150461CA: je 0x150461f0 */
L_150461CC:
    /* cmp ecx, 1 */ /* 0x150461CC: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150461F0; /* 0x150461CF: je 0x150461f0 */
L_150461D1:
    RECOMP_CALL(sub_15036430); /* 0x150461D1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150461D6: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150461DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150461DE: push eax */
    PUSH32(esp, eax); /* 0x150461DF: push eax */
    PUSH32(esp, eax); /* 0x150461E0: push eax */
    PUSH32(esp, eax); /* 0x150461E1: push eax */
    PUSH32(esp, eax); /* 0x150461E2: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150461E3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150461E8: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150461EB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150461EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150461EF: ret  */
L_150461F0:
    eax = MEM32(0x150BDB78); /* 0x150461F0: mov eax, dword ptr [0x150bdb78] */
    MEM32(0x150BDB78) = ecx; /* 0x150461F5: mov dword ptr [0x150bdb78], ecx */
    ebp = POP32_VAL(esp); /* 0x150461FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150461FC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046210u);

L_15046210:
    PUSH32(esp, 0); /* 0x15046210: push 0 */
    RECOMP_CALL(sub_15046120); /* 0x15046212: call 0x15046120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046217: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046218: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504621A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046230u);

L_15046230:
    edi = edi; /* 0x15046230: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046232: push ebp */
    ebp = esp; /* 0x15046233: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15046235: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15046238: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046248; /* 0x1504623A: je 0x15046248 */
L_1504623C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x1504623C: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + (-0x4))); /* 0x1504623F: push dword ptr [eax - 4] */
    RECOMP_CALL(sub_15048840); /* 0x15046242: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046247: pop ecx */
L_15046248:
    ebp = POP32_VAL(esp); /* 0x15046248: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046249: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046250u);

L_15046250:
    edi = edi; /* 0x15046250: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046252: push ebp */
    ebp = esp; /* 0x15046253: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15046255: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15046257: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1504625A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15046270); /* 0x1504625D: call 0x15046270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15046262: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15046265: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046266: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046270u);

L_15046270:
    edi = edi; /* 0x15046270: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046272: push ebp */
    ebp = esp; /* 0x15046273: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x15046275: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx + (-0x1); /* 0x15046278: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x1504627B: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504629D; /* 0x1504627D: je 0x1504629d */
L_1504627F:
    RECOMP_CALL(sub_15036430); /* 0x1504627F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15046284: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504628A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504628C: push eax */
    PUSH32(esp, eax); /* 0x1504628D: push eax */
    PUSH32(esp, eax); /* 0x1504628E: push eax */
    PUSH32(esp, eax); /* 0x1504628F: push eax */
    PUSH32(esp, eax); /* 0x15046290: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15046291: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15046296: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046299: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1504629B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504629C: ret  */
L_1504629D:
    eax = MEM32(ebp + 0x8); /* 0x1504629D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150462A0: push esi */
    esi = MEM32(ebp + 0x10); /* 0x150462A1: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x150462A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150462CA; /* 0x150462A6: je 0x150462ca */
L_150462A8:
    /* cmp esi, eax */ /* 0x150462A8: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150462CA; /* 0x150462AA: jb 0x150462ca */
L_150462AC:
    RECOMP_CALL(sub_15036430); /* 0x150462AC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150462B1: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150462B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150462B9: push eax */
    PUSH32(esp, eax); /* 0x150462BA: push eax */
    PUSH32(esp, eax); /* 0x150462BB: push eax */
    PUSH32(esp, eax); /* 0x150462BC: push eax */
    PUSH32(esp, eax); /* 0x150462BD: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150462BE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150462C3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150462C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504631C; /* 0x150462C8: jmp 0x1504631c */
L_150462CA:
    PUSH32(esp, ebx); /* 0x150462CA: push ebx */
    PUSH32(esp, edi); /* 0x150462CB: push edi */
    PUSH32(esp, 4); /* 0x150462CC: push 4 */
    edi = POP32_VAL(esp); /* 0x150462CE: pop edi */
    /* cmp ecx, edi */ /* 0x150462CF: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = esi; /* 0x150462D1: mov ebx, esi */
    if (CMP_A(_flag_a, _flag_b)) { edi = ecx; } /* 0x150462D3: cmova edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x150462D6: neg ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x150462D8: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx + 0x3; /* 0x150462DB: lea ecx, [ebx + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x150462DE: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x150462E0: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x150462E2: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150462F3; /* 0x150462E4: jbe 0x150462f3 */
L_150462E6:
    RECOMP_CALL(sub_15036430); /* 0x150462E6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150462EB: mov dword ptr [eax], 0xc */
    goto L_15046300; /* 0x150462F1: jmp 0x15046300 */
L_150462F3:
    PUSH32(esp, ecx); /* 0x150462F3: push ecx */
    RECOMP_CALL(sub_15048A30); /* 0x150462F4: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x150462F9: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x150462FB: pop ecx */
    /* test edx, edx */ /* 0x150462FC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046304; /* 0x150462FE: jne 0x15046304 */
L_15046300:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046300: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504631A; /* 0x15046302: jmp 0x1504631a */
L_15046304:
    eax = ebx + 0x3; /* 0x15046304: lea eax, [ebx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15046307: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x15046309: neg edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1504630B: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1504630D: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1504630F: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15046311: sub eax, esi */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x15046313: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x15046315: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ecx + (-0x4)) = edx; /* 0x15046317: mov dword ptr [ecx - 4], edx */
L_1504631A:
    edi = POP32_VAL(esp); /* 0x1504631A: pop edi */
    ebx = POP32_VAL(esp); /* 0x1504631B: pop ebx */
L_1504631C:
    esi = POP32_VAL(esp); /* 0x1504631C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504631D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504631E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046330u);

L_15046330:
    edi = edi; /* 0x15046330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046332: push ebp */
    ebp = esp; /* 0x15046333: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15046335: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15046338: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15046339: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1504633C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504633D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1504633F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046359; /* 0x15046341: jne 0x15046359 */
L_15046343:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15046343: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15046346: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15046349: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15046270); /* 0x1504634C: call 0x15046270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15046351: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_150464B3; /* 0x15046354: jmp 0x150464b3 */
L_15046359:
    edx = MEM32(ebp + 0xC); /* 0x15046359: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1504635C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504636E; /* 0x1504635E: jne 0x1504636e */
L_15046360:
    PUSH32(esp, ebx); /* 0x15046360: push ebx */
    RECOMP_CALL(sub_15046230); /* 0x15046361: call 0x15046230 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046366: pop ecx */
L_15046367:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046367: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150464B3; /* 0x15046369: jmp 0x150464b3 */
L_1504636E:
    ecx = MEM32(ebp + 0x10); /* 0x1504636E: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx + (-0x1); /* 0x15046371: lea eax, [ecx - 1] */
    /* test ecx, eax */ /* 0x15046374: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046392; /* 0x15046376: je 0x15046392 */
L_15046378:
    RECOMP_CALL(sub_15036430); /* 0x15046378: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1504637D: push esi */
    PUSH32(esp, esi); /* 0x1504637E: push esi */
    PUSH32(esp, esi); /* 0x1504637F: push esi */
    PUSH32(esp, esi); /* 0x15046380: push esi */
    PUSH32(esp, esi); /* 0x15046381: push esi */
    MEM32(eax) = 0x16u; /* 0x15046382: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15046388: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504638D: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15046367; /* 0x15046390: jmp 0x15046367 */
L_15046392:
    ecx = MEM32(ebp + 0x14); /* 0x15046392: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x15046395: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504639D; /* 0x15046397: je 0x1504639d */
L_15046399:
    /* cmp ecx, edx */ /* 0x15046399: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_15046378; /* 0x1504639B: jae 0x15046378 */
L_1504639D:
    PUSH32(esp, edi); /* 0x1504639D: push edi */
    PUSH32(esp, 4); /* 0x1504639E: push 4 */
    edi = POP32_VAL(esp); /* 0x150463A0: pop edi */
    eax = ebx; /* 0x150463A1: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x150463A3: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x150463A6: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = MEM32(ebp + 0x10); } /* 0x150463A9: cmova edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x150463AD: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x150463AF: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x150463B2: mov dword ptr [ebp - 0x14], edi */
    eax = MEM32(eax + (-0x4)); /* 0x150463B5: mov eax, dword ptr [eax - 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x150463B8: mov dword ptr [ebp - 8], ecx */
    ecx = ebx; /* 0x150463BB: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x150463BD: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x150463BF: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, eax); /* 0x150463C2: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x150463C3: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x150463C6: mov dword ptr [ebp - 0x20], ecx */
    RECOMP_CALL(sub_15048600); /* 0x150463C9: call 0x15048600 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x150463CE: mov edx, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x150463D1: pop ecx */
    ecx = edx; /* 0x150463D2: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x150463D4: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x150463D6: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x150463D8: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x150463DB: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0xC)); /* 0x150463DE: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp ecx, eax */ /* 0x150463E1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ecx = eax; } /* 0x150463E3: cmova ecx, eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x150463E6: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x150463E9: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x150463EC: add ecx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x150463EF: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x150463F1: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x150463F3: mov dword ptr [ebp - 0x10], ecx */
    /* cmp eax, ecx */ /* 0x150463F6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504640C; /* 0x150463F8: jbe 0x1504640c */
L_150463FA:
    RECOMP_CALL(sub_15036430); /* 0x150463FA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150463FF: mov dword ptr [eax], 0xc */
L_15046405:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046405: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150464B2; /* 0x15046407: jmp 0x150464b2 */
L_1504640C:
    eax = MEM32(ebp + (-0x8)); /* 0x1504640C: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x1504640F: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15046412: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x15046414: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x15046416: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504642C; /* 0x15046418: jae 0x1504642c */
L_1504641A:
    PUSH32(esp, ecx); /* 0x1504641A: push ecx */
L_1504641B:
    RECOMP_CALL(sub_15048A30); /* 0x1504641B: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15046420: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15046422: pop ecx */
    /* test edi, edi */ /* 0x15046423: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046405; /* 0x15046425: je 0x15046405 */
L_15046427:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15046427: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15046429: inc esi */
    _flag_k = FK_INC;
    goto L_1504645B; /* 0x1504642A: jmp 0x1504645b */
L_1504642C:
    RECOMP_CALL(sub_15036430); /* 0x1504642C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x15046431: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15046434: push dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x15046437: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15046439: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_150464E0); /* 0x1504643C: call 0x150464e0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15046441: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15046443: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15046444: pop ecx */
    /* test edi, edi */ /* 0x15046445: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046458; /* 0x15046447: jne 0x15046458 */
L_15046449:
    RECOMP_CALL(sub_15036430); /* 0x15046449: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1504644E: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x15046451: push dword ptr [ebp - 0x10] */
    MEM32(eax) = ecx; /* 0x15046454: mov dword ptr [eax], ecx */
    RECOMP_BACKEDGE();
    goto L_1504641B; /* 0x15046456: jmp 0x1504641b */
L_15046458:
    MEM32(ebp + (-0x4)) = edi; /* 0x15046458: mov dword ptr [ebp - 4], edi */
L_1504645B:
    /* cmp edi, MEM32(ebp + (-0x1C)) */ /* 0x1504645B: cmp edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046471; /* 0x1504645E: jne 0x15046471 */
L_15046460:
    edx = MEM32(ebp + (-0x8)); /* 0x15046460: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x15046463: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x15046466: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x14); /* 0x15046468: add edx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1504646B: neg ecx */
    _flag_k = FK_CMP;
    /* test ecx, edx */ /* 0x1504646D: test ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150464B0; /* 0x1504646F: je 0x150464b0 */
L_15046471:
    edx = MEM32(ebp + (-0x14)); /* 0x15046471: mov edx, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + 0x14); /* 0x15046474: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x15046477: push dword ptr [ebp - 0xc] */
    eax = edx + edi; /* 0x1504647A: lea eax, [edx + edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1504647D: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x8)); /* 0x1504647F: add eax, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    ebx = ecx + 0x3; /* 0x15046482: lea ebx, [ecx + 3] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15046485: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x15046487: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x1504648A: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    ebx = ebx & edx; /* 0x1504648D: and ebx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1504648F: sub ebx, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15046491: push eax */
    PUSH32(esp, ebx); /* 0x15046492: push ebx */
    RECOMP_CALL(sub_1508E000); /* 0x15046493: call 0x1508e000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15046498: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1504649B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150464A8; /* 0x1504649D: je 0x150464a8 */
L_1504649F:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1504649F: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15048840); /* 0x150464A2: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150464A7: pop ecx */
L_150464A8:
    ecx = ebx; /* 0x150464A8: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x150464AA: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    MEM32(ecx + (-0x4)) = edi; /* 0x150464AD: mov dword ptr [ecx - 4], edi */
L_150464B0:
    eax = ebx; /* 0x150464B0: mov eax, ebx */
L_150464B2:
    edi = POP32_VAL(esp); /* 0x150464B2: pop edi */
L_150464B3:
    esi = POP32_VAL(esp); /* 0x150464B3: pop esi */
    ebx = POP32_VAL(esp); /* 0x150464B4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150464B5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150464B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150464C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150464C0u);

L_150464C0:
    edi = edi; /* 0x150464C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150464C2: push ebp */
    ebp = esp; /* 0x150464C3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150464C5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150464C7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150464CA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150464CD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15046330); /* 0x150464D0: call 0x15046330 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150464D5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150464D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150464D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150464E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150464E0u);

L_150464E0:
    PUSH32(esp, 0x1Cu); /* 0x150464E0: push 0x1c */
    PUSH32(esp, 0x150B0350u); /* 0x150464E2: push 0x150b0350 */
    RECOMP_CALL(sub_1505E988); /* 0x150464E7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x150464EC: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x150464EF: mov eax, ebx */
    MEM32(ebp + (-0x28)) = eax; /* 0x150464F1: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150464F4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x150464F6: mov edi, edx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x150464F8: mov dword ptr [ebp - 0x1c], edi */
    esi = MEM32(ebp + 0x8); /* 0x150464FB: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x150464FE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046523; /* 0x15046500: jne 0x15046523 */
L_15046502:
    RECOMP_CALL(sub_15036430); /* 0x15046502: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15046507: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504650D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1504650F: push eax */
    PUSH32(esp, eax); /* 0x15046510: push eax */
    PUSH32(esp, eax); /* 0x15046511: push eax */
    PUSH32(esp, eax); /* 0x15046512: push eax */
    PUSH32(esp, eax); /* 0x15046513: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15046514: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15046519: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1504651C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504651C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150465CF; /* 0x1504651E: jmp 0x150465cf */
L_15046523:
    /* cmp ebx, 0xFFFFFFE0u */ /* 0x15046523: cmp ebx, -0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15046535; /* 0x15046526: jbe 0x15046535 */
L_15046528:
    RECOMP_CALL(sub_15036430); /* 0x15046528: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1504652D: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_1504651C; /* 0x15046533: jmp 0x1504651c */
L_15046535:
    ecx = MEM32(0x150BEBA4); /* 0x15046535: mov ecx, dword ptr [0x150beba4] */
    /* cmp ecx, 3 */ /* 0x1504653B: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150465F1; /* 0x1504653E: jne 0x150465f1 */
L_15046544:
    MEM32(ebp + (-0x20)) = edx; /* 0x15046544: mov dword ptr [ebp - 0x20], edx */
    PUSH32(esp, 4); /* 0x15046547: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15046549: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504654E: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edi; /* 0x1504654F: and dword ptr [ebp - 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15046552: push esi */
    RECOMP_CALL(sub_150475FD); /* 0x15046553: call 0x150475fd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046558: pop ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x15046559: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x1504655C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046580; /* 0x1504655E: je 0x15046580 */
L_15046560:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15046560: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15046562: mov dword ptr [ebp - 0x1c], edi */
    /* cmp ebx, MEM32(0x150BEBA0) */ /* 0x15046565: cmp ebx, dword ptr [0x150beba0] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEBA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15046580; /* 0x1504656B: ja 0x15046580 */
L_1504656D:
    PUSH32(esp, ebx); /* 0x1504656D: push ebx */
    PUSH32(esp, esi); /* 0x1504656E: push esi */
    PUSH32(esp, eax); /* 0x1504656F: push eax */
    RECOMP_CALL(sub_15047E53); /* 0x15046570: call 0x15047e53 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15046575: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15046578: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = esi; } /* 0x1504657A: cmovne edi, esi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504657D: mov dword ptr [ebp - 0x1c], edi */
L_15046580:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15046580: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150465E8); /* 0x15046587: call 0x150465e8 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1504658C: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150465CD; /* 0x15046590: jne 0x150465cd */
L_15046592:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046592: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046594: inc eax */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x15046595: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x28)); } /* 0x15046597: cmovne eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFu; /* 0x1504659B: add eax, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1504659E: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150465A1: push eax */
L_150465A2:
    PUSH32(esp, esi); /* 0x150465A2: push esi */
    PUSH32(esp, 0x10u); /* 0x150465A3: push 0x10 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x150465A5: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0138)); /* 0x150465AB: call dword ptr [0x150c0138] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150465B1: mov edi, eax */
    /* test edi, edi */ /* 0x150465B3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150465CD; /* 0x150465B5: jne 0x150465cd */
L_150465B7:
    RECOMP_CALL(sub_15036430); /* 0x150465B7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150465BC: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150465BE: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150465C4: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x150465C5: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150465CA: pop ecx */
    MEM32(esi) = eax; /* 0x150465CB: mov dword ptr [esi], eax */
L_150465CD:
    eax = edi; /* 0x150465CD: mov eax, edi */
L_150465CF:
    ecx = MEM32(ebp + (-0x10)); /* 0x150465CF: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150465D2: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150465D9: pop ecx */
    edi = POP32_VAL(esp); /* 0x150465DA: pop edi */
    esi = POP32_VAL(esp); /* 0x150465DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x150465DC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150465DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150465DE: ret  */
L_150465F1:
    /* cmp ecx, 2 */ /* 0x150465F1: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504668E; /* 0x150465F4: jne 0x1504668e */
L_150465FA:
    MEM32(ebp + (-0x24)) = edx; /* 0x150465FA: mov dword ptr [ebp - 0x24], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150465FD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x150465FF: inc ebx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x15046600: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { ebx = eax; } /* 0x15046602: cmovne ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFu; /* 0x15046605: add ebx, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    ebx = ebx & 0xFFFFFFF0u; /* 0x15046608: and ebx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ebx; /* 0x1504660B: mov dword ptr [ebp + 0xc], ebx */
    PUSH32(esp, 4); /* 0x1504660E: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15046610: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046615: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046616: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046618: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x15046619: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x28); /* 0x1504661C: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1504661F: push eax */
    eax = ebp + (-0x2C); /* 0x15046620: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x15046623: push eax */
    PUSH32(esp, esi); /* 0x15046624: push esi */
    RECOMP_CALL(sub_15046C73); /* 0x15046625: call 0x15046c73 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504662A: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1504662D: mov ecx, eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1504662F: mov dword ptr [ebp - 0x24], ecx */
    /* test ecx, ecx */ /* 0x15046632: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046660; /* 0x15046634: je 0x15046660 */
L_15046636:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15046636: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15046638: mov dword ptr [ebp - 0x1c], edi */
    /* cmp ebx, MEM32(0x150BCE98) */ /* 0x1504663B: cmp ebx, dword ptr [0x150bce98] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BCE98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15046660; /* 0x15046641: ja 0x15046660 */
L_15046643:
    eax = ebx; /* 0x15046643: mov eax, ebx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x15046645: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x15046645: shr eax, 4 */
    PUSH32(esp, eax); /* 0x15046648: push eax */
    PUSH32(esp, ecx); /* 0x15046649: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1504664A: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1504664D: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_15047071); /* 0x15046650: call 0x15047071 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15046655: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15046658: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = esi; } /* 0x1504665A: cmovne edi, esi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504665D: mov dword ptr [ebp - 0x1c], edi */
L_15046660:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15046660: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15046685); /* 0x15046667: call 0x15046685 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x1504666C: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150465CD; /* 0x15046670: jne 0x150465cd */
L_15046676:
    PUSH32(esp, ebx); /* 0x15046676: push ebx */
    RECOMP_BACKEDGE();
    goto L_150465A2; /* 0x15046677: jmp 0x150465a2 */
L_1504668E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504668E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15046690: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x15046691: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { edi = eax; } /* 0x15046693: cmovne edi, eax */
    MEM32(ebp + (-0x2C)) = edi; /* 0x15046696: mov dword ptr [ebp - 0x2c], edi */
    PUSH32(esp, esi); /* 0x15046699: push esi */
    PUSH32(esp, edx); /* 0x1504669A: push edx */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x1504669B: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0150)); /* 0x150466A1: call dword ptr [0x150c0150] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150466A7: mov ebx, eax */
    PUSH32(esp, edi); /* 0x150466A9: push edi */
    PUSH32(esp, esi); /* 0x150466AA: push esi */
    PUSH32(esp, 0x10u); /* 0x150466AB: push 0x10 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x150466AD: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0138)); /* 0x150466B3: call dword ptr [0x150c0138] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150466B9: mov edi, eax */
    /* test edi, edi */ /* 0x150466BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150465CD; /* 0x150466BD: jne 0x150465cd */
L_150466C3:
    /* cmp ebx, 0x4000u */ /* 0x150466C3: cmp ebx, 0x4000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150465B7; /* 0x150466C9: ja 0x150465b7 */
L_150466CF:
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x150466CF: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150465B7; /* 0x150466D2: ja 0x150465b7 */
L_150466D8:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x28)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x28)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) | 0xFFFFFFFFu; /* 0x150466D8: or dword ptr [ebp - 0x28], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150466DC: push eax */
    PUSH32(esp, 4); /* 0x150466DD: push 4 */
    eax = ebp + (-0x28); /* 0x150466DF: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150466E2: push eax */
    PUSH32(esp, edi); /* 0x150466E3: push edi */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x150466E4: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C012C)); /* 0x150466EA: call dword ptr [0x150c012c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150466F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150466FF; /* 0x150466F2: je 0x150466ff */
L_150466F4:
    /* cmp MEM32(ebp + (-0x28)), 2 */ /* 0x150466F4: cmp dword ptr [ebp - 0x28], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150466FF; /* 0x150466F8: jne 0x150466ff */
L_150466FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150466FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150466FC: inc eax */
    _flag_k = FK_INC;
    goto L_15046701; /* 0x150466FD: jmp 0x15046701 */
L_150466FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150466FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15046701:
    /* test eax, eax */ /* 0x15046701: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150465B7; /* 0x15046703: je 0x150465b7 */
L_15046709:
    edi = esi; /* 0x15046709: mov edi, esi */
    RECOMP_BACKEDGE();
    goto L_150465CD; /* 0x1504670B: jmp 0x150465cd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150465E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150465E8u);

L_150465E8:
    PUSH32(esp, 4); /* 0x150465E8: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x150465EA: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150465EF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150465F0: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046685(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046685u);

L_15046685:
    PUSH32(esp, 4); /* 0x15046685: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x15046687: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504668C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504668D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046716(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046716u);

L_15046716:
    edi = edi; /* 0x15046716: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046718: push ebp */
    ebp = esp; /* 0x15046719: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1504671B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1504671C: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1504671F: push 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x15046721: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(0x150C0178)); /* 0x15046724: call dword ptr [0x150c0178] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1504672A: mov ecx, eax */
    eax = 0x5A4Du; /* 0x1504672C: mov eax, 0x5a4d */
    /* cmp MEM16(ecx), LO16(eax) */ /* 0x15046731: cmp word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504674A; /* 0x15046734: jne 0x1504674a */
L_15046736:
    edx = MEM32(ecx + 0x3C); /* 0x15046736: mov edx, dword ptr [ecx + 0x3c] */
    /* test edx, edx */ /* 0x15046739: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504674A; /* 0x1504673B: je 0x1504674a */
L_1504673D:
    SET_LO8(eax, MEM8(edx + ecx + 0x1A)); /* 0x1504673D: mov al, byte ptr [edx + ecx + 0x1a] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15046741: mov byte ptr [esi], al */
    SET_LO8(eax, MEM8(edx + ecx + 0x1B)); /* 0x15046743: mov al, byte ptr [edx + ecx + 0x1b] */
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x15046747: mov byte ptr [esi + 1], al */
L_1504674A:
    esi = POP32_VAL(esp); /* 0x1504674A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1504674B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504674C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046760u);

L_15046760:
    eax = MEM32(0x150BDB68); /* 0x15046760: mov eax, dword ptr [0x150bdb68] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046765: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504676C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504676Cu);

L_1504676C:
    edi = edi; /* 0x1504676C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504676E: push ebp */
    ebp = esp; /* 0x1504676F: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046771: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x15046773: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x15046776: push 0 */
    PUSH32(esp, 0x1000u); /* 0x15046778: push 0x1000 */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1504677D: sete al */
    PUSH32(esp, eax); /* 0x15046780: push eax */
    RECOMP_ICALL(MEM32(0x150C0130)); /* 0x15046781: call dword ptr [0x150c0130] */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDB68) = eax; /* 0x15046787: mov dword ptr [0x150bdb68], eax */
    /* test eax, eax */ /* 0x1504678C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046792; /* 0x1504678E: jne 0x15046792 */
L_15046790:
    ebp = POP32_VAL(esp); /* 0x15046790: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046791: ret  */
L_15046792:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046792: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046794: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BEBA4) = eax; /* 0x15046795: mov dword ptr [0x150beba4], eax */
    ebp = POP32_VAL(esp); /* 0x1504679A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504679B: ret  */
    RECOMP_REGS_OUT();
}

void sub_150467A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150467A2u);

L_150467A2:
    eax = MEM32(0x150BEBA4); /* 0x150467A2: mov eax, dword ptr [0x150beba4] */
    PUSH32(esp, ebx); /* 0x150467A7: push ebx */
    PUSH32(esp, esi); /* 0x150467A8: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150467A9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x150467AB: push edi */
    /* cmp eax, 3 */ /* 0x150467AC: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046802; /* 0x150467AF: jne 0x15046802 */
L_150467B1:
    edi = ebx; /* 0x150467B1: mov edi, ebx */
    eax = MEM32(0x150BEB9C); /* 0x150467B3: mov eax, dword ptr [0x150beb9c] */
    /* cmp MEM32(0x150BEB90), ebx */ /* 0x150467B8: cmp dword ptr [0x150beb90], ebx */
    _flag_a = (uint32_t)(MEM32(0x150BEB90)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150467F2; /* 0x150467BE: jle 0x150467f2 */
L_150467C0:
    esi = eax + 0x10; /* 0x150467C0: lea esi, [eax + 0x10] */
L_150467C3:
    PUSH32(esp, 0x8000u); /* 0x150467C3: push 0x8000 */
    PUSH32(esp, ebx); /* 0x150467C8: push ebx */
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x150467C9: push dword ptr [esi - 4] */
    RECOMP_ICALL(MEM32(0x150C01B4)); /* 0x150467CC: call dword ptr [0x150c01b4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x150467D2: push dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x150467D4: push ebx */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x150467D5: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x150467DB: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150467E1: inc edi */
    _flag_k = FK_INC;
    esi = esi + 0x14; /* 0x150467E2: lea esi, [esi + 0x14] */
    /* cmp edi, MEM32(0x150BEB90) */ /* 0x150467E5: cmp edi, dword ptr [0x150beb90] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEB90));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_150467C3; /* 0x150467EB: jl 0x150467c3 */
L_150467ED:
    eax = MEM32(0x150BEB9C); /* 0x150467ED: mov eax, dword ptr [0x150beb9c] */
L_150467F2:
    PUSH32(esp, eax); /* 0x150467F2: push eax */
    PUSH32(esp, ebx); /* 0x150467F3: push ebx */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x150467F4: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x150467FA: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    goto L_15046828; /* 0x15046800: jmp 0x15046828 */
L_15046802:
    /* cmp eax, 2 */ /* 0x15046802: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046828; /* 0x15046805: jne 0x15046828 */
L_15046807:
    edi = 0x150BA048u; /* 0x15046807: mov edi, 0x150ba048 */
    esi = edi; /* 0x1504680C: mov esi, edi */
L_1504680E:
    /* cmp MEM32(esi + 0x10), ebx */ /* 0x1504680E: cmp dword ptr [esi + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15046822; /* 0x15046811: je 0x15046822 */
L_15046813:
    PUSH32(esp, 0x8000u); /* 0x15046813: push 0x8000 */
    PUSH32(esp, ebx); /* 0x15046818: push ebx */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x15046819: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(MEM32(0x150C01B4)); /* 0x1504681C: call dword ptr [0x150c01b4] */
    RECOMP_FLAGS_IN();
L_15046822:
    esi = MEM32(esi); /* 0x15046822: mov esi, dword ptr [esi] */
    /* cmp esi, edi */ /* 0x15046824: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504680E; /* 0x15046826: jne 0x1504680e */
L_15046828:
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15046828: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0134)); /* 0x1504682E: call dword ptr [0x150c0134] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x15046834: pop edi */
    esi = POP32_VAL(esp); /* 0x15046835: pop esi */
    MEM32(0x150BDB68) = ebx; /* 0x15046836: mov dword ptr [0x150bdb68], ebx */
    ebx = POP32_VAL(esp); /* 0x1504683C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504683D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046844(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046844u);

L_15046844:
    edi = edi; /* 0x15046844: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046846: push ebp */
    ebp = esp; /* 0x15046847: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15046849: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1504684C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1504684D: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15046850: push esi */
    esi = MEM32(0x150BC068); /* 0x15046851: mov esi, dword ptr [0x150bc068] */
    PUSH32(esp, edi); /* 0x15046857: push edi */
L_15046858:
    /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu */ /* 0x15046858: cmp dword ptr [esi + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150468F8; /* 0x1504685C: je 0x150468f8 */
L_15046862:
    edi = MEM32(esi + 0x8); /* 0x15046862: mov edi, dword ptr [esi + 8] */
    ecx = esi + 0x2018; /* 0x15046865: lea ecx, [esi + 0x2018] */
    eax = edi; /* 0x1504686B: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1504686D: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x18u; /* 0x1504686F: sub eax, 0x18 */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x15046872: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    if (12u) _cf = (((eax) >> 20) & 1u); /* 0x15046875: shl eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 12u; /* 0x15046875: shl eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x10); /* 0x15046878: add eax, dword ptr [esi + 0x10] */
    _flag_k = FK_ADD;
    goto L_150468AE; /* 0x1504687B: jmp 0x150468ae */
L_1504687D:
    /* cmp MEM32(edi), ebx */ /* 0x1504687D: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150468A6; /* 0x1504687F: jl 0x150468a6 */
L_15046881:
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x15046881: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150468A6; /* 0x15046884: jbe 0x150468a6 */
L_15046886:
    PUSH32(esp, ebx); /* 0x15046886: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x15046887: push dword ptr [edi] */
    PUSH32(esp, eax); /* 0x15046889: push eax */
    RECOMP_CALL(sub_15046A56); /* 0x1504688A: call 0x15046a56 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504688F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15046892: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046960; /* 0x15046894: jne 0x15046960 */
L_1504689A:
    eax = MEM32(ebp + (-0x4)); /* 0x1504689A: mov eax, dword ptr [ebp - 4] */
    ecx = esi + 0x2018; /* 0x1504689D: lea ecx, [esi + 0x2018] */
    MEM32(edi + 0x4) = ebx; /* 0x150468A3: mov dword ptr [edi + 4], ebx */
L_150468A6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x150468A6: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1000u; /* 0x150468A9: add eax, 0x1000 */
    _flag_k = FK_ADD;
L_150468AE:
    MEM32(ebp + (-0x4)) = eax; /* 0x150468AE: mov dword ptr [ebp - 4], eax */
    /* cmp edi, ecx */ /* 0x150468B1: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1504687D; /* 0x150468B3: jb 0x1504687d */
L_150468B5:
    ecx = MEM32(esi + 0x8); /* 0x150468B5: mov ecx, dword ptr [esi + 8] */
    edi = esi + 0x18; /* 0x150468B8: lea edi, [esi + 0x18] */
    eax = MEM32(esi + 0x10); /* 0x150468BB: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x150468BE: mov dword ptr [ebp - 8], ecx */
    goto L_150468F1; /* 0x150468C1: jmp 0x150468f1 */
L_150468C3:
    /* cmp MEM32(edi), ebx */ /* 0x150468C3: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150468E9; /* 0x150468C5: jl 0x150468e9 */
L_150468C7:
    /* cmp MEM32(edi + 0x4), ebx */ /* 0x150468C7: cmp dword ptr [edi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150468E9; /* 0x150468CA: jbe 0x150468e9 */
L_150468CC:
    PUSH32(esp, ebx); /* 0x150468CC: push ebx */
    PUSH32(esp, MEM32(edi)); /* 0x150468CD: push dword ptr [edi] */
    PUSH32(esp, eax); /* 0x150468CF: push eax */
    RECOMP_CALL(sub_15046A56); /* 0x150468D0: call 0x15046a56 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150468D5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150468D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046960; /* 0x150468DA: jne 0x15046960 */
L_150468E0:
    eax = MEM32(ebp + (-0x4)); /* 0x150468E0: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x150468E3: mov ecx, dword ptr [ebp - 8] */
    MEM32(edi + 0x4) = ebx; /* 0x150468E6: mov dword ptr [edi + 4], ebx */
L_150468E9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x150468E9: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1000u; /* 0x150468EC: add eax, 0x1000 */
    _flag_k = FK_ADD;
L_150468F1:
    MEM32(ebp + (-0x4)) = eax; /* 0x150468F1: mov dword ptr [ebp - 4], eax */
    /* cmp edi, ecx */ /* 0x150468F4: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150468C3; /* 0x150468F6: jb 0x150468c3 */
L_150468F8:
    esi = MEM32(esi); /* 0x150468F8: mov esi, dword ptr [esi] */
    /* cmp esi, MEM32(0x150BC068) */ /* 0x150468FA: cmp esi, dword ptr [0x150bc068] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BC068));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046858; /* 0x15046900: jne 0x15046858 */
L_15046906:
    eax = 0x150BA048u; /* 0x15046906: mov eax, 0x150ba048 */
    edi = eax; /* 0x1504690B: mov edi, eax */
L_1504690D:
    /* cmp MEM32(edi + 0x10), 0xFFFFFFFFu */ /* 0x1504690D: cmp dword ptr [edi + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504691D; /* 0x15046911: je 0x1504691d */
L_15046913:
    ecx = MEM32(edi + 0xC); /* 0x15046913: mov ecx, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15046916: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x15046919: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046970; /* 0x1504691B: jne 0x15046970 */
L_1504691D:
    edi = MEM32(edi); /* 0x1504691D: mov edi, dword ptr [edi] */
    /* cmp edi, eax */ /* 0x1504691F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504690D; /* 0x15046921: jne 0x1504690d */
L_15046923:
    RECOMP_CALL(sub_15046EBB); /* 0x15046923: call 0x15046ebb */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15046928: mov esi, eax */
    /* test esi, esi */ /* 0x1504692A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046A49; /* 0x1504692C: je 0x15046a49 */
L_15046932:
    edx = MEM32(esi + 0x10); /* 0x15046932: mov edx, dword ptr [esi + 0x10] */
    ecx = ebx + 0x8; /* 0x15046935: lea ecx, [ebx + 8] */
    eax = 0xF0u; /* 0x15046938: mov eax, 0xf0 */
    MEM32(0x150BC068) = esi; /* 0x1504693D: mov dword ptr [0x150bc068], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x15046943: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x15046945: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(edx + 0x4) = eax; /* 0x15046947: mov dword ptr [edx + 4], eax */
    eax = (uint32_t)LO8(ebx); /* 0x1504694A: movzx eax, bl */
    MEM8(edx + 0x8) = (uint8_t)(LO8(ebx)); /* 0x1504694D: mov byte ptr [edx + 8], bl */
    MEM32(edx) = ecx; /* 0x15046950: mov dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) - eax; /* 0x15046952: sub dword ptr [esi + 0x18], eax */
    _flag_k = FK_CMP;
    eax = edx + 0x100; /* 0x15046955: lea eax, [edx + 0x100] */
    goto L_15046A4B; /* 0x1504695B: jmp 0x15046a4b */
L_15046960:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi) = MEM32(edi) - ebx; /* 0x15046960: sub dword ptr [edi], ebx */
    _flag_k = FK_CMP;
    MEM32(0x150BC068) = esi; /* 0x15046962: mov dword ptr [0x150bc068], esi */
    MEM32(esi + 0x8) = edi; /* 0x15046968: mov dword ptr [esi + 8], edi */
    goto L_15046A4B; /* 0x1504696B: jmp 0x15046a4b */
L_15046970:
    esi = ecx; /* 0x15046970: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046972: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x15046974: sub esi, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x15046976: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x18u; /* 0x15046979: sub esi, 0x18 */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x1504697C: mov edx, ecx */
    if (3u) _cf = (((esi) >> 2) & 1u); /* 0x1504697E: sar esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 3u);
    if (12u) _cf = (((esi) >> 20) & 1u); /* 0x15046981: shl esi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((esi << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 12u; /* 0x15046981: shl esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(edi + 0x10); /* 0x15046984: add esi, dword ptr [edi + 0x10] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x15046987: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504699D; /* 0x1504698A: jne 0x1504699d */
L_1504698C:
    /* cmp eax, 0x10u */ /* 0x1504698C: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1504699A; /* 0x1504698F: jge 0x1504699a */
L_15046991:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x15046991: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046994: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(edx), 0xFFFFFFFFu */ /* 0x15046995: cmp dword ptr [edx], -1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504698C; /* 0x15046998: je 0x1504698c */
L_1504699A:
    MEM32(ebp + (-0x4)) = eax; /* 0x1504699A: mov dword ptr [ebp - 4], eax */
L_1504699D:
    PUSH32(esp, 4); /* 0x1504699D: push 4 */
    if (12u) _cf = (((eax) >> 20) & 1u); /* 0x1504699F: shl eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((eax << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 12u; /* 0x1504699F: shl eax, 0xc */
    PUSH32(esp, 0x1000u); /* 0x150469A2: push 0x1000 */
    PUSH32(esp, eax); /* 0x150469A7: push eax */
    PUSH32(esp, esi); /* 0x150469A8: push esi */
    MEM32(ebp + (-0xC)) = eax; /* 0x150469A9: mov dword ptr [ebp - 0xc], eax */
    RECOMP_ICALL(MEM32(0x150C01B8)); /* 0x150469AC: call dword ptr [0x150c01b8] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x150469B2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046A49; /* 0x150469B4: jne 0x15046a49 */
L_150469BA:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x150469BA: push dword ptr [ebp - 0xc] */
    PUSH32(esp, 0); /* 0x150469BD: push 0 */
    PUSH32(esp, esi); /* 0x150469BF: push esi */
    RECOMP_CALL(sub_1508E3D0); /* 0x150469C0: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x150469C5: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150469C8: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x150469CB: mov ecx, dword ptr [ebp - 8] */
    /* test edx, edx */ /* 0x150469CE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15046A03; /* 0x150469D0: jle 0x15046a03 */
L_150469D2:
    ebx = esi + 0x4; /* 0x150469D2: lea ebx, [esi + 4] */
L_150469D5:
    eax = ebx + 0x4; /* 0x150469D5: lea eax, [ebx + 4] */
    MEM8(ebx + 0xF4) = (uint8_t)(0xFFu); /* 0x150469D8: mov byte ptr [ebx + 0xf4], 0xff */
    MEM32(ebx + (-0x4)) = eax; /* 0x150469DF: mov dword ptr [ebx - 4], eax */
    eax = 0xF0u; /* 0x150469E2: mov eax, 0xf0 */
    MEM32(ebx) = eax; /* 0x150469E7: mov dword ptr [ebx], eax */
    ebx = ebx + 0x1000; /* 0x150469E9: lea ebx, [ebx + 0x1000] */
    MEM32(ecx) = eax; /* 0x150469EF: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = 0xF1u; /* 0x150469F1: mov dword ptr [ecx + 4], 0xf1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x150469F8: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x150469FB: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150469D5; /* 0x150469FE: jne 0x150469d5 */
L_15046A00:
    ebx = MEM32(ebp + 0x8); /* 0x15046A00: mov ebx, dword ptr [ebp + 8] */
L_15046A03:
    MEM32(0x150BC068) = edi; /* 0x15046A03: mov dword ptr [0x150bc068], edi */
    eax = edi + 0x2018; /* 0x15046A09: lea eax, [edi + 0x2018] */
    goto L_15046A19; /* 0x15046A0F: jmp 0x15046a19 */
L_15046A11:
    /* cmp MEM32(ecx), 0xFFFFFFFFu */ /* 0x15046A11: cmp dword ptr [ecx], -1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15046A1D; /* 0x15046A14: je 0x15046a1d */
L_15046A16:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x15046A16: add ecx, 8 */
    _flag_k = FK_ADD;
L_15046A19:
    /* cmp ecx, eax */ /* 0x15046A19: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15046A11; /* 0x15046A1B: jb 0x15046a11 */
L_15046A1D:
    eax = edi + 0x2018; /* 0x15046A1D: lea eax, [edi + 0x2018] */
    /* cmp ecx, eax */ /* 0x15046A23: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15046A25: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x15046A27: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC) = eax; /* 0x15046A29: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x15046A2C: mov eax, dword ptr [ebp - 8] */
    MEM8(esi + 0x8) = (uint8_t)(LO8(ebx)); /* 0x15046A2F: mov byte ptr [esi + 8], bl */
    MEM32(edi + 0x8) = eax; /* 0x15046A32: mov dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - ebx; /* 0x15046A35: sub dword ptr [eax], ebx */
    _flag_k = FK_CMP;
    eax = ebx + 0x8; /* 0x15046A37: lea eax, [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15046A3A: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - ebx; /* 0x15046A3C: sub dword ptr [esi + 4], ebx */
    _flag_k = FK_CMP;
    MEM32(esi) = eax; /* 0x15046A3F: mov dword ptr [esi], eax */
    eax = esi + 0x100; /* 0x15046A41: lea eax, [esi + 0x100] */
    goto L_15046A4B; /* 0x15046A47: jmp 0x15046a4b */
L_15046A49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046A49: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15046A4B:
    edi = POP32_VAL(esp); /* 0x15046A4B: pop edi */
    esi = POP32_VAL(esp); /* 0x15046A4C: pop esi */
    ebx = POP32_VAL(esp); /* 0x15046A4D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15046A4E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046A4F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046A56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046A56u);

L_15046A56:
    edi = edi; /* 0x15046A56: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046A58: push ebp */
    ebp = esp; /* 0x15046A59: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15046A5B: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15046A5E: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x15046A61: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx + 0x4); /* 0x15046A64: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, ebx); /* 0x15046A67: push ebx */
    ebx = MEM32(ecx); /* 0x15046A68: mov ebx, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x15046A6A: push edi */
    edi = ecx + 0xF8; /* 0x15046A6B: lea edi, [ecx + 0xf8] */
    /* cmp eax, edx */ /* 0x15046A71: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15046A9E; /* 0x15046A73: jb 0x15046a9e */
L_15046A75:
    eax = ebx + edx; /* 0x15046A75: lea eax, [ebx + edx] */
    MEM8(ebx) = (uint8_t)(LO8(edx)); /* 0x15046A78: mov byte ptr [ebx], dl */
    /* cmp eax, edi */ /* 0x15046A7A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15046A85; /* 0x15046A7C: jae 0x15046a85 */
L_15046A7E:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + edx; /* 0x15046A7E: add dword ptr [ecx], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - edx; /* 0x15046A80: sub dword ptr [ecx + 4], edx */
    _flag_k = FK_CMP;
    goto L_15046A8E; /* 0x15046A83: jmp 0x15046a8e */
L_15046A85:
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x15046A85: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x8; /* 0x15046A89: lea eax, [ecx + 8] */
    MEM32(ecx) = eax; /* 0x15046A8C: mov dword ptr [ecx], eax */
L_15046A8E:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFu); /* 0x15046A8E: imul ecx, ecx, 0xf */
    eax = ebx + 0x8; /* 0x15046A91: lea eax, [ebx + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x15046A94: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x15046A94: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15046A97: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_15046B82; /* 0x15046A99: jmp 0x15046b82 */
L_15046A9E:
    PUSH32(esp, esi); /* 0x15046A9E: push esi */
    esi = eax + ebx; /* 0x15046A9F: lea esi, [eax + ebx] */
    /* cmp MEM8(esi), 0 */ /* 0x15046AA2: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) { esi = ebx; } /* 0x15046AA5: cmove esi, ebx */
    eax = esi + edx; /* 0x15046AA8: lea eax, [esi + edx] */
    /* cmp eax, edi */ /* 0x15046AAB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x15046AAD: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x15046AB0: mov dword ptr [ebp - 8], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_15046B17; /* 0x15046AB3: jae 0x15046b17 */
L_15046AB5:
    SET_LO8(eax, MEM8(esi)); /* 0x15046AB5: mov al, byte ptr [esi] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x15046AB7: mov byte ptr [ebp - 1], al */
    /* test LO8(eax), LO8(eax) */ /* 0x15046ABA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + (-0x8)); /* 0x15046ABC: mov eax, dword ptr [ebp - 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046B0A; /* 0x15046ABF: jne 0x15046b0a */
L_15046AC1:
    edi = esi + 0x1; /* 0x15046AC1: lea edi, [esi + 1] */
    MEM32(ebp + (-0xC)) = edi; /* 0x15046AC4: mov dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15046AC7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x15046AC9: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15046ACC: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x15046ACD: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = MEM32(ebp + 0x8); /* 0x15046AD0: mov ecx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046AE5; /* 0x15046AD3: jne 0x15046ae5 */
L_15046AD5:
    edx = MEM32(ebp + (-0xC)); /* 0x15046AD5: mov edx, dword ptr [ebp - 0xc] */
L_15046AD8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15046AD8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15046AD9: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM8(edx), 0 */ /* 0x15046ADA: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15046AD8; /* 0x15046ADD: je 0x15046ad8 */
L_15046ADF:
    MEM32(ebp + (-0xC)) = edx; /* 0x15046ADF: mov dword ptr [ebp - 0xc], edx */
    edx = MEM32(ebp + 0x10); /* 0x15046AE2: mov edx, dword ptr [ebp + 0x10] */
L_15046AE5:
    /* cmp edi, edx */ /* 0x15046AE5: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15046B1C; /* 0x15046AE7: jae 0x15046b1c */
L_15046AE9:
    /* cmp esi, ebx */ /* 0x15046AE9: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046AF2; /* 0x15046AEB: jne 0x15046af2 */
L_15046AED:
    MEM32(ecx + 0x4) = edi; /* 0x15046AED: mov dword ptr [ecx + 4], edi */
    goto L_15046AFF; /* 0x15046AF0: jmp 0x15046aff */
L_15046AF2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15046AF2: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x15046AF4: mov dword ptr [ebp - 8], eax */
    /* cmp eax, edx */ /* 0x15046AF7: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15046B7F; /* 0x15046AF9: jb 0x15046b7f */
L_15046AFF:
    esi = MEM32(ebp + (-0xC)); /* 0x15046AFF: mov esi, dword ptr [ebp - 0xc] */
    edi = ecx + 0xF8; /* 0x15046B02: lea edi, [ecx + 0xf8] */
    goto L_15046B10; /* 0x15046B08: jmp 0x15046b10 */
L_15046B0A:
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x15046B0A: movzx eax, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15046B0E: add esi, eax */
    _flag_k = FK_ADD;
L_15046B10:
    eax = esi + edx; /* 0x15046B10: lea eax, [esi + edx] */
    /* cmp eax, edi */ /* 0x15046B13: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15046AB5; /* 0x15046B15: jb 0x15046ab5 */
L_15046B17:
    esi = ecx + 0x8; /* 0x15046B17: lea esi, [ecx + 8] */
    goto L_15046B7B; /* 0x15046B1A: jmp 0x15046b7b */
L_15046B1C:
    eax = esi + edx; /* 0x15046B1C: lea eax, [esi + edx] */
    ebx = ecx + 0xF8; /* 0x15046B1F: lea ebx, [ecx + 0xf8] */
    /* cmp eax, ebx */ /* 0x15046B25: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = eax; /* 0x15046B27: mov ebx, eax */
    if (CMP_B(_flag_a, _flag_b)) goto L_15046B2E; /* 0x15046B29: jb 0x15046b2e */
L_15046B2B:
    ebx = ecx + 0x8; /* 0x15046B2B: lea ebx, [ecx + 8] */
L_15046B2E:
    MEM32(ecx) = ebx; /* 0x15046B2E: mov dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x15046B30: sub edi, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0xF8; /* 0x15046B32: lea ebx, [ecx + 0xf8] */
    /* cmp eax, ebx */ /* 0x15046B38: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15046B3A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x15046B3C: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15046B8D; /* 0x15046B3E: jmp 0x15046b8d */
L_15046B40:
    eax = esi + edx; /* 0x15046B40: lea eax, [esi + edx] */
    /* cmp eax, edi */ /* 0x15046B43: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15046B7F; /* 0x15046B45: jae 0x15046b7f */
L_15046B47:
    SET_LO8(eax, MEM8(esi)); /* 0x15046B47: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15046B49: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046B76; /* 0x15046B4B: jne 0x15046b76 */
L_15046B4D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046B4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x1; /* 0x15046B4F: lea edi, [esi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046B52: inc eax */
    _flag_k = FK_INC;
    goto L_15046B57; /* 0x15046B53: jmp 0x15046b57 */
L_15046B55:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15046B55: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046B56: inc eax */
    _flag_k = FK_INC;
L_15046B57:
    /* cmp MEM8(edi), 0 */ /* 0x15046B57: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15046B55; /* 0x15046B5A: je 0x15046b55 */
L_15046B5C:
    /* cmp eax, edx */ /* 0x15046B5C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15046B86; /* 0x15046B5E: jae 0x15046b86 */
L_15046B60:
    esi = MEM32(ebp + (-0x8)); /* 0x15046B60: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x15046B63: sub esi, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x15046B65: mov dword ptr [ebp - 8], esi */
    /* cmp esi, edx */ /* 0x15046B68: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15046B7F; /* 0x15046B6A: jb 0x15046b7f */
L_15046B6C:
    esi = edi; /* 0x15046B6C: mov esi, edi */
    edi = ecx + 0xF8; /* 0x15046B6E: lea edi, [ecx + 0xf8] */
    goto L_15046B7B; /* 0x15046B74: jmp 0x15046b7b */
L_15046B76:
    eax = (uint32_t)LO8(eax); /* 0x15046B76: movzx eax, al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15046B79: add esi, eax */
    _flag_k = FK_ADD;
L_15046B7B:
    /* cmp esi, ebx */ /* 0x15046B7B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15046B40; /* 0x15046B7D: jb 0x15046b40 */
L_15046B7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046B7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15046B81:
    esi = POP32_VAL(esp); /* 0x15046B81: pop esi */
L_15046B82:
    edi = POP32_VAL(esp); /* 0x15046B82: pop edi */
    ebx = POP32_VAL(esp); /* 0x15046B83: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15046B84: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046B85: ret  */
L_15046B86:
    edi = esi + edx; /* 0x15046B86: lea edi, [esi + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x15046B89: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ecx) = edi; /* 0x15046B8B: mov dword ptr [ecx], edi */
L_15046B8D:
    MEM32(ecx + 0x4) = eax; /* 0x15046B8D: mov dword ptr [ecx + 4], eax */
    eax = esi + 0x8; /* 0x15046B90: lea eax, [esi + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFu); /* 0x15046B93: imul ecx, ecx, 0xf */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x15046B96: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x15046B96: shl eax, 4 */
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x15046B99: mov byte ptr [esi], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15046B9B: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_15046B81; /* 0x15046B9D: jmp 0x15046b81 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15046BA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046BA5u);

L_15046BA5:
    edi = edi; /* 0x15046BA5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046BA7: push ebp */
    ebp = esp; /* 0x15046BA8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15046BAA: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x15046BAB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x15046BAE: push ebx */
    PUSH32(esp, esi); /* 0x15046BAF: push esi */
    esi = MEM32(0x150BA04C); /* 0x15046BB0: mov esi, dword ptr [0x150ba04c] */
    PUSH32(esp, edi); /* 0x15046BB6: push edi */
L_15046BB7:
    /* cmp MEM32(esi + 0x10), 0xFFFFFFFFu */ /* 0x15046BB7: cmp dword ptr [esi + 0x10], -1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15046C58; /* 0x15046BBB: je 0x15046c58 */
L_15046BC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046BC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi + 0x2010; /* 0x15046BC3: lea edi, [esi + 0x2010] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15046BC9: mov dword ptr [ebp - 4], eax */
    ebx = 0x003FF000u; /* 0x15046BCC: mov ebx, 0x3ff000 */
L_15046BD1:
    /* cmp MEM32(edi), 0xF0u */ /* 0x15046BD1: cmp dword ptr [edi], 0xf0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046C1C; /* 0x15046BD7: jne 0x15046c1c */
L_15046BD9:
    eax = MEM32(esi + 0x10); /* 0x15046BD9: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, 0x4000u); /* 0x15046BDC: push 0x4000 */
    PUSH32(esp, 0x1000u); /* 0x15046BE1: push 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x15046BE6: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15046BE8: push eax */
    RECOMP_ICALL(MEM32(0x150C01B4)); /* 0x15046BE9: call dword ptr [0x150c01b4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15046BEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046C19; /* 0x15046BF1: je 0x15046c19 */
L_15046BF3:
    _flag_a = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi) | 0xFFFFFFFFu));
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu; /* 0x15046BF3: or dword ptr [edi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x150BDB70)); _flag_b = (uint32_t)(1);
    MEM32(0x150BDB70) = MEM32(0x150BDB70) - 1; /* 0x15046BF6: dec dword ptr [0x150bdb70] */
    _flag_k = FK_DEC;
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x15046BFC: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15046C07; /* 0x15046C00: je 0x15046c07 */
L_15046C02:
    /* cmp MEM32(esi + 0xC), edi */ /* 0x15046C02: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15046C0A; /* 0x15046C05: jbe 0x15046c0a */
L_15046C07:
    MEM32(esi + 0xC) = edi; /* 0x15046C07: mov dword ptr [esi + 0xc], edi */
L_15046C0A:
    eax = MEM32(ebp + (-0x4)); /* 0x15046C0A: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046C0D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x15046C0E: sub dword ptr [ebp + 8], 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x15046C12: mov dword ptr [ebp - 4], eax */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15046C27; /* 0x15046C15: je 0x15046c27 */
L_15046C17:
    goto L_15046C1C; /* 0x15046C17: jmp 0x15046c1c */
L_15046C19:
    eax = MEM32(ebp + (-0x4)); /* 0x15046C19: mov eax, dword ptr [ebp - 4] */
L_15046C1C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 8; /* 0x15046C1C: sub edi, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x1000u; /* 0x15046C1F: sub ebx, 0x1000 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_15046BD1; /* 0x15046C25: jns 0x15046bd1 */
L_15046C27:
    ecx = esi; /* 0x15046C27: mov ecx, esi */
    esi = MEM32(esi + 0x4); /* 0x15046C29: mov esi, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x15046C2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046C55; /* 0x15046C2E: je 0x15046c55 */
L_15046C30:
    /* cmp MEM32(ecx + 0x18), 0xFFFFFFFFu */ /* 0x15046C30: cmp dword ptr [ecx + 0x18], -1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046C55; /* 0x15046C34: jne 0x15046c55 */
L_15046C36:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046C36: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x20; /* 0x15046C38: lea edx, [ecx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046C3B: inc eax */
    _flag_k = FK_INC;
L_15046C3C:
    /* cmp MEM32(edx), 0xFFFFFFFFu */ /* 0x15046C3C: cmp dword ptr [edx], -1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046C55; /* 0x15046C3F: jne 0x15046c55 */
L_15046C41:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046C41: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x15046C42: add edx, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x400u */ /* 0x15046C45: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15046C3C; /* 0x15046C4A: jl 0x15046c3c */
L_15046C4C:
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046C55; /* 0x15046C4C: jne 0x15046c55 */
L_15046C4E:
    PUSH32(esp, ecx); /* 0x15046C4E: push ecx */
    RECOMP_CALL(sub_15047010); /* 0x15046C4F: call 0x15047010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046C54: pop ecx */
L_15046C55:
    eax = MEM32(ebp + 0x8); /* 0x15046C55: mov eax, dword ptr [ebp + 8] */
L_15046C58:
    /* cmp esi, MEM32(0x150BA04C) */ /* 0x15046C58: cmp esi, dword ptr [0x150ba04c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BA04C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15046C68; /* 0x15046C5E: je 0x15046c68 */
L_15046C60:
    /* test eax, eax */ /* 0x15046C60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15046BB7; /* 0x15046C62: jg 0x15046bb7 */
L_15046C68:
    edi = POP32_VAL(esp); /* 0x15046C68: pop edi */
    esi = POP32_VAL(esp); /* 0x15046C69: pop esi */
    ebx = POP32_VAL(esp); /* 0x15046C6A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15046C6B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046C6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046C73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046C73u);

L_15046C73:
    edi = edi; /* 0x15046C73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046C75: push ebp */
    ebp = esp; /* 0x15046C76: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15046C78: push ebx */
    PUSH32(esp, esi); /* 0x15046C79: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15046C7A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15046C7D: push edi */
    /* test esi, esi */ /* 0x15046C7E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046C85; /* 0x15046C80: je 0x15046c85 */
L_15046C82:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x15046C82: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15046C85:
    edi = MEM32(ebp + 0x10); /* 0x15046C85: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x15046C88: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046C8F; /* 0x15046C8A: je 0x15046c8f */
L_15046C8C:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x15046C8C: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15046C8F:
    ecx = MEM32(ebp + 0x8); /* 0x15046C8F: mov ecx, dword ptr [ebp + 8] */
    eax = 0x150BA048u; /* 0x15046C92: mov eax, 0x150ba048 */
    edx = eax; /* 0x15046C97: mov edx, eax */
L_15046C99:
    /* cmp ecx, MEM32(edx + 0x10) */ /* 0x15046C99: cmp ecx, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15046CA3; /* 0x15046C9C: jbe 0x15046ca3 */
L_15046C9E:
    /* cmp ecx, MEM32(edx + 0x14) */ /* 0x15046C9E: cmp ecx, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15046CB0; /* 0x15046CA1: jb 0x15046cb0 */
L_15046CA3:
    edx = MEM32(edx); /* 0x15046CA3: mov edx, dword ptr [edx] */
    /* cmp edx, eax */ /* 0x15046CA5: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046C99; /* 0x15046CA7: jne 0x15046c99 */
L_15046CA9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046CA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15046CAB:
    edi = POP32_VAL(esp); /* 0x15046CAB: pop edi */
    esi = POP32_VAL(esp); /* 0x15046CAC: pop esi */
    ebx = POP32_VAL(esp); /* 0x15046CAD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15046CAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046CAF: ret  */
L_15046CB0:
    /* test LO8(ecx), 0xFu */ /* 0x15046CB0: test cl, 0xf */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046CA9; /* 0x15046CB3: jne 0x15046ca9 */
L_15046CB5:
    eax = ecx; /* 0x15046CB5: mov eax, ecx */
    ebx = 0x100u; /* 0x15046CB7: mov ebx, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFu);
    eax = eax & 0xFFFu; /* 0x15046CBC: and eax, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x15046CC1: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15046CA9; /* 0x15046CC3: jb 0x15046ca9 */
L_15046CC5:
    eax = ecx; /* 0x15046CC5: mov eax, ecx */
    MEM32(esi) = edx; /* 0x15046CC7: mov dword ptr [esi], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFF000u);
    eax = eax & 0xFFFFF000u; /* 0x15046CC9: and eax, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x15046CCE: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x15046CD0: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x15046CD2: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x15046CD4: add eax, 8 */
    _flag_k = FK_ADD;
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x15046CD7: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15046CDA: add eax, ecx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15046CAB; /* 0x15046CDC: jmp 0x15046cab */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15046CE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046CE4u);

L_15046CE4:
    edi = edi; /* 0x15046CE4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046CE6: push ebp */
    ebp = esp; /* 0x15046CE7: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15046CE9: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x15046CEC: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15046CEF: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15046CF0: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edx + 0x10); /* 0x15046CF3: sub esi, dword ptr [edx + 0x10] */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ecx); /* 0x15046CF6: movzx eax, byte ptr [ecx] */
    if (12u) _cf = (((esi) >> 11) & 1u); /* 0x15046CF9: sar esi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 12u);
    _flag_a = (uint32_t)(MEM32(edx + esi * 8 + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + esi * 8 + 0x18) = MEM32(edx + esi * 8 + 0x18) + eax; /* 0x15046CFC: add dword ptr [edx + esi*8 + 0x18], eax */
    _flag_k = FK_ADD;
    MEM8(ecx) = (uint8_t)(0); /* 0x15046D00: mov byte ptr [ecx], 0 */
    /* cmp MEM32(edx + esi * 8 + 0x18), 0xF0u */ /* 0x15046D03: cmp dword ptr [edx + esi*8 + 0x18], 0xf0 */
    _flag_a = (uint32_t)(MEM32(edx + esi * 8 + 0x18)); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edx + esi * 8 + 0x1C) = 0xF1u; /* 0x15046D0B: mov dword ptr [edx + esi*8 + 0x1c], 0xf1 */
    esi = POP32_VAL(esp); /* 0x15046D13: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046D2E; /* 0x15046D14: jne 0x15046d2e */
L_15046D16:
    eax = MEM32(0x150BDB70); /* 0x15046D16: mov eax, dword ptr [0x150bdb70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046D1B: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BDB70) = eax; /* 0x15046D1C: mov dword ptr [0x150bdb70], eax */
    /* cmp eax, 0x20u */ /* 0x15046D21: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046D2E; /* 0x15046D24: jne 0x15046d2e */
L_15046D26:
    PUSH32(esp, 0x10u); /* 0x15046D26: push 0x10 */
    RECOMP_CALL(sub_15046BA5); /* 0x15046D28: call 0x15046ba5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046D2D: pop ecx */
L_15046D2E:
    ebp = POP32_VAL(esp); /* 0x15046D2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046D2F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15046D36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046D36u);

L_15046D36:
    edi = edi; /* 0x15046D36: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046D38: push ebp */
    ebp = esp; /* 0x15046D39: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x15046D3B: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15046D3E: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15046D3F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x150BA048u; /* 0x15046D41: mov edx, 0x150ba048 */
    PUSH32(esp, esi); /* 0x15046D46: push esi */
    MEM32(ebp + (-0x20)) = ecx; /* 0x15046D47: mov dword ptr [ebp - 0x20], ecx */
    PUSH32(esp, edi); /* 0x15046D4A: push edi */
L_15046D4B:
    /* cmp MEM32(0x150BC068), edx */ /* 0x15046D4B: cmp dword ptr [0x150bc068], edx */
    _flag_a = (uint32_t)(MEM32(0x150BC068)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046D57; /* 0x15046D51: jne 0x15046d57 */
L_15046D53:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15046D53: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ecx; /* 0x15046D54: mov dword ptr [ebp - 0x20], ecx */
L_15046D57:
    esi = MEM32(edx + 0x10); /* 0x15046D57: mov esi, dword ptr [edx + 0x10] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15046D5A: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15046E75; /* 0x15046D5D: je 0x15046e75 */
L_15046D63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15046D63: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0xF8; /* 0x15046D65: lea eax, [esi + 0xf8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15046D6B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15046D6D: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x15046D70: mov dword ptr [ebp - 0x18], ecx */
    ebx = edx + 0x18; /* 0x15046D73: lea ebx, [edx + 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15046D76: mov dword ptr [ebp - 0x14], eax */
L_15046D79:
    /* cmp MEM32(ebx), 0xFFFFFFFFu */ /* 0x15046D79: cmp dword ptr [ebx], -1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046D94; /* 0x15046D7C: jne 0x15046d94 */
L_15046D7E:
    /* test ecx, ecx */ /* 0x15046D7E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046D8B; /* 0x15046D80: jne 0x15046d8b */
L_15046D82:
    /* cmp MEM32(edx + 0xC), ebx */ /* 0x15046D82: cmp dword ptr [edx + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046E92; /* 0x15046D85: jne 0x15046e92 */
L_15046D8B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15046D8B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = ecx; /* 0x15046D8C: mov dword ptr [ebp - 0x18], ecx */
    goto L_15046E51; /* 0x15046D8F: jmp 0x15046e51 */
L_15046D94:
    /* cmp MEM32(esi), eax */ /* 0x15046D94: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15046EAF; /* 0x15046D96: jae 0x15046eaf */
L_15046D9C:
    /* cmp MEM8(eax), 0xFFu */ /* 0x15046D9C: cmp byte ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xFFu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046EAB; /* 0x15046D9F: jne 0x15046eab */
L_15046DA5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046DA5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15046DA7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & eax; /* 0x15046DA9: and dword ptr [ebp - 0x10], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & eax; /* 0x15046DAC: and dword ptr [ebp - 0xc], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x15046DAF: mov dword ptr [ebp - 8], eax */
L_15046DB2:
    ecx = edi + 0x8; /* 0x15046DB2: lea ecx, [edi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x15046DB5: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046DB7: inc eax */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi) */ /* 0x15046DB8: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x8)); } /* 0x15046DBA: cmovne eax, dword ptr [ebp - 8] */
    SET_LO8(ecx, MEM8(ecx)); /* 0x15046DBE: mov cl, byte ptr [ecx] */
    MEM32(ebp + (-0x8)) = eax; /* 0x15046DC0: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x15046DC3: mov dword ptr [ebp - 0x24], eax */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x15046DC6: mov byte ptr [ebp - 1], cl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15046DC9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15046DDA; /* 0x15046DCB: jne 0x15046dda */
L_15046DCD:
    ecx = MEM32(ebp + (-0x10)); /* 0x15046DCD: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15046DD0: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x15046DD1: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x15046DD4: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15046DD7: inc edi */
    _flag_k = FK_INC;
    goto L_15046E34; /* 0x15046DD8: jmp 0x15046e34 */
L_15046DDA:
    ecx = MEM32(ebp + (-0xC)); /* 0x15046DDA: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp ecx, MEM32(ebx + 0x4) */ /* 0x15046DDD: cmp ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15046EA7; /* 0x15046DE0: jge 0x15046ea7 */
L_15046DE6:
    /* cmp MEM32(ebp + (-0x24)), 1 */ /* 0x15046DE6: cmp dword ptr [ebp - 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x15046DEA: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046E05; /* 0x15046DED: jne 0x15046e05 */
L_15046DEF:
    eax = MEM32(ebp + (-0x14)); /* 0x15046DEF: mov eax, dword ptr [ebp - 0x14] */
    /* cmp ecx, MEM32(eax + (-0xF4)) */ /* 0x15046DF2: cmp ecx, dword ptr [eax - 0xf4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + (-0xF4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15046E97; /* 0x15046DF8: jl 0x15046e97 */
L_15046DFE:
    MEM32(ebp + (-0x8)) = 2; /* 0x15046DFE: mov dword ptr [ebp - 8], 2 */
L_15046E05:
    ecx = (uint32_t)MEM8(ebp + (-0x1)); /* 0x15046E05: movzx ecx, byte ptr [ebp - 1] */
    eax = edi + 0x1; /* 0x15046E09: lea eax, [edi + 1] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x15046E0C: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x15046E10: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = ecx; /* 0x15046E12: mov dword ptr [ebp - 0x24], ecx */
    /* cmp eax, ecx */ /* 0x15046E15: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15046E2C; /* 0x15046E17: jge 0x15046e2c */
L_15046E19:
    edi = MEM32(ebp + (-0x24)); /* 0x15046E19: mov edi, dword ptr [ebp - 0x24] */
    ecx = esi + 0x8; /* 0x15046E1C: lea ecx, [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x15046E1F: add ecx, eax */
    _flag_k = FK_ADD;
L_15046E21:
    /* cmp MEM8(ecx), 0 */ /* 0x15046E21: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046E9B; /* 0x15046E24: jne 0x15046e9b */
L_15046E26:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15046E26: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15046E27: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x15046E28: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15046E21; /* 0x15046E2A: jl 0x15046e21 */
L_15046E2C:
    ecx = MEM32(ebp + (-0x10)); /* 0x15046E2C: mov ecx, dword ptr [ebp - 0x10] */
    edi = eax; /* 0x15046E2F: mov edi, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x15046E31: mov eax, dword ptr [ebp - 8] */
L_15046E34:
    /* cmp edi, 0xF0u */ /* 0x15046E34: cmp edi, 0xf0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15046DB2; /* 0x15046E3A: jl 0x15046db2 */
L_15046E40:
    /* cmp ecx, MEM32(ebx) */ /* 0x15046E40: cmp ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046EA3; /* 0x15046E42: jne 0x15046ea3 */
L_15046E44:
    /* test eax, eax */ /* 0x15046E44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046E9F; /* 0x15046E46: je 0x15046e9f */
L_15046E48:
    eax = MEM32(ebp + (-0x14)); /* 0x15046E48: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x18)); /* 0x15046E4B: mov ecx, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x1C)); /* 0x15046E4E: mov edi, dword ptr [ebp - 0x1c] */
L_15046E51:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15046E51: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1000u; /* 0x15046E52: add eax, 0x1000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x15046E57: add ebx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15046E5A: mov dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1000u; /* 0x15046E5D: add esi, 0x1000 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x15046E63: mov dword ptr [ebp - 0x14], eax */
    /* cmp edi, 0x400u */ /* 0x15046E66: cmp edi, 0x400 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15046D79; /* 0x15046E6C: jl 0x15046d79 */
L_15046E72:
    ecx = MEM32(ebp + (-0x20)); /* 0x15046E72: mov ecx, dword ptr [ebp - 0x20] */
L_15046E75:
    edx = MEM32(edx); /* 0x15046E75: mov edx, dword ptr [edx] */
    /* cmp edx, 0x150BA048u */ /* 0x15046E77: cmp edx, 0x150ba048 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x150BA048u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046D4B; /* 0x15046E7D: jne 0x15046d4b */
L_15046E83:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15046E83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15046E85: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFF7u); /* 0x15046E87: push -9 */
    edx = POP32_VAL(esp); /* 0x15046E89: pop edx */
    if (TEST_Z(_flag_a, _flag_b)) { eax = edx; } /* 0x15046E8A: cmove eax, edx */
L_15046E8D:
    edi = POP32_VAL(esp); /* 0x15046E8D: pop edi */
    esi = POP32_VAL(esp); /* 0x15046E8E: pop esi */
    ebx = POP32_VAL(esp); /* 0x15046E8F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15046E90: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046E91: ret  */
L_15046E92:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15046E92: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15046E8D; /* 0x15046E95: jmp 0x15046e8d */
L_15046E97:
    PUSH32(esp, 0xFFFFFFFBu); /* 0x15046E97: push -5 */
    goto L_15046EB1; /* 0x15046E99: jmp 0x15046eb1 */
L_15046E9B:
    PUSH32(esp, 0xFFFFFFFAu); /* 0x15046E9B: push -6 */
    goto L_15046EB1; /* 0x15046E9D: jmp 0x15046eb1 */
L_15046E9F:
    PUSH32(esp, 0xFFFFFFF8u); /* 0x15046E9F: push -8 */
    goto L_15046EB1; /* 0x15046EA1: jmp 0x15046eb1 */
L_15046EA3:
    PUSH32(esp, 0xFFFFFFF9u); /* 0x15046EA3: push -7 */
    goto L_15046EB1; /* 0x15046EA5: jmp 0x15046eb1 */
L_15046EA7:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x15046EA7: push -4 */
    goto L_15046EB1; /* 0x15046EA9: jmp 0x15046eb1 */
L_15046EAB:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x15046EAB: push -3 */
    goto L_15046EB1; /* 0x15046EAD: jmp 0x15046eb1 */
L_15046EAF:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x15046EAF: push -2 */
L_15046EB1:
    eax = POP32_VAL(esp); /* 0x15046EB1: pop eax */
    RECOMP_BACKEDGE();
    goto L_15046E8D; /* 0x15046EB2: jmp 0x15046e8d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15046EBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15046EBBu);

L_15046EBB:
    /* cmp MEM32(0x150BA058), 0xFFFFFFFFu */ /* 0x15046EBB: cmp dword ptr [0x150ba058], -1 */
    _flag_a = (uint32_t)(MEM32(0x150BA058)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15046EC2: push ebx */
    PUSH32(esp, esi); /* 0x15046EC3: push esi */
    PUSH32(esp, edi); /* 0x15046EC4: push edi */
    ebx = 0x150BA048u; /* 0x15046EC5: mov ebx, 0x150ba048 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046ED0; /* 0x15046ECA: jne 0x15046ed0 */
L_15046ECC:
    esi = ebx; /* 0x15046ECC: mov esi, ebx */
    goto L_15046EED; /* 0x15046ECE: jmp 0x15046eed */
L_15046ED0:
    PUSH32(esp, 0x2020u); /* 0x15046ED0: push 0x2020 */
    PUSH32(esp, 0); /* 0x15046ED5: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15046ED7: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C013C)); /* 0x15046EDD: call dword ptr [0x150c013c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15046EE3: mov esi, eax */
    /* test esi, esi */ /* 0x15046EE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15047004; /* 0x15046EE7: je 0x15047004 */
L_15046EED:
    PUSH32(esp, 4); /* 0x15046EED: push 4 */
    PUSH32(esp, 0x2000u); /* 0x15046EEF: push 0x2000 */
    PUSH32(esp, 0x00400000u); /* 0x15046EF4: push 0x400000 */
    PUSH32(esp, 0); /* 0x15046EF9: push 0 */
    RECOMP_ICALL(MEM32(0x150C01B8)); /* 0x15046EFB: call dword ptr [0x150c01b8] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15046F01: mov edi, eax */
    /* test edi, edi */ /* 0x15046F03: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046FF1; /* 0x15046F05: je 0x15046ff1 */
L_15046F0B:
    PUSH32(esp, 4); /* 0x15046F0B: push 4 */
    PUSH32(esp, 0x1000u); /* 0x15046F0D: push 0x1000 */
    PUSH32(esp, 0x00010000u); /* 0x15046F12: push 0x10000 */
    PUSH32(esp, edi); /* 0x15046F17: push edi */
    RECOMP_ICALL(MEM32(0x150C01B8)); /* 0x15046F18: call dword ptr [0x150c01b8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15046F1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046FE3; /* 0x15046F20: je 0x15046fe3 */
L_15046F26:
    /* cmp esi, ebx */ /* 0x15046F26: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046F4A; /* 0x15046F28: jne 0x15046f4a */
L_15046F2A:
    /* cmp MEM32(0x150BA048), 0 */ /* 0x15046F2A: cmp dword ptr [0x150ba048], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BA048)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046F39; /* 0x15046F31: jne 0x15046f39 */
L_15046F33:
    MEM32(0x150BA048) = ebx; /* 0x15046F33: mov dword ptr [0x150ba048], ebx */
L_15046F39:
    /* cmp MEM32(0x150BA04C), 0 */ /* 0x15046F39: cmp dword ptr [0x150ba04c], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BA04C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15046F5F; /* 0x15046F40: jne 0x15046f5f */
L_15046F42:
    MEM32(0x150BA04C) = ebx; /* 0x15046F42: mov dword ptr [0x150ba04c], ebx */
    goto L_15046F5F; /* 0x15046F48: jmp 0x15046f5f */
L_15046F4A:
    MEM32(esi) = ebx; /* 0x15046F4A: mov dword ptr [esi], ebx */
    eax = MEM32(0x150BA04C); /* 0x15046F4C: mov eax, dword ptr [0x150ba04c] */
    MEM32(esi + 0x4) = eax; /* 0x15046F51: mov dword ptr [esi + 4], eax */
    MEM32(0x150BA04C) = esi; /* 0x15046F54: mov dword ptr [0x150ba04c], esi */
    eax = MEM32(esi + 0x4); /* 0x15046F5A: mov eax, dword ptr [esi + 4] */
    MEM32(eax) = esi; /* 0x15046F5D: mov dword ptr [eax], esi */
L_15046F5F:
    eax = edi + 0x400000; /* 0x15046F5F: lea eax, [edi + 0x400000] */
    MEM32(esi + 0x10) = edi; /* 0x15046F65: mov dword ptr [esi + 0x10], edi */
    MEM32(esi + 0x14) = eax; /* 0x15046F68: mov dword ptr [esi + 0x14], eax */
    edx = esi + 0x1C; /* 0x15046F6B: lea edx, [esi + 0x1c] */
    eax = esi + 0x18; /* 0x15046F6E: lea eax, [esi + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15046F71: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x15046F73: mov dword ptr [esi + 8], eax */
    ebx = 0xF1u; /* 0x15046F76: mov ebx, 0xf1 */
    eax = esi + 0x98; /* 0x15046F7B: lea eax, [esi + 0x98] */
    MEM32(esi + 0xC) = eax; /* 0x15046F81: mov dword ptr [esi + 0xc], eax */
L_15046F84:
    /* cmp ecx, 0x10u */ /* 0x15046F84: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15046F87: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x15046F89: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15046F8B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15046F8C: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx + (-0x4)) = eax; /* 0x15046F8D: mov dword ptr [edx - 4], eax */
    MEM32(edx) = ebx; /* 0x15046F90: mov dword ptr [edx], ebx */
    edx = edx + 0x8; /* 0x15046F92: lea edx, [edx + 8] */
    /* cmp ecx, 0x400u */ /* 0x15046F95: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15046F84; /* 0x15046F9B: jl 0x15046f84 */
L_15046F9D:
    ebx = 0x00010000u; /* 0x15046F9D: mov ebx, 0x10000 */
    PUSH32(esp, ebx); /* 0x15046FA2: push ebx */
    PUSH32(esp, 0); /* 0x15046FA3: push 0 */
    PUSH32(esp, edi); /* 0x15046FA5: push edi */
    RECOMP_CALL(sub_1508E3D0); /* 0x15046FA6: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x10); /* 0x15046FAB: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15046FAE: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x15046FB1: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x15046FB3: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15046FDF; /* 0x15046FB5: jae 0x15046fdf */
L_15046FB7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x15046FB7: add edi, 4 */
    _flag_k = FK_ADD;
L_15046FBA:
    eax = edi + 0x4; /* 0x15046FBA: lea eax, [edi + 4] */
    MEM32(edi) = 0xF0u; /* 0x15046FBD: mov dword ptr [edi], 0xf0 */
    MEM32(edi + (-0x4)) = eax; /* 0x15046FC3: mov dword ptr [edi - 4], eax */
    edi = edi + 0x1000; /* 0x15046FC6: lea edi, [edi + 0x1000] */
    MEM8(edi + (-0xF0C)) = (uint8_t)(0xFFu); /* 0x15046FCC: mov byte ptr [edi - 0xf0c], 0xff */
    ecx = edi + (-0x4); /* 0x15046FD3: lea ecx, [edi - 4] */
    eax = MEM32(esi + 0x10); /* 0x15046FD6: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x15046FD9: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x15046FDB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15046FBA; /* 0x15046FDD: jb 0x15046fba */
L_15046FDF:
    eax = esi; /* 0x15046FDF: mov eax, esi */
    goto L_15047006; /* 0x15046FE1: jmp 0x15047006 */
L_15046FE3:
    PUSH32(esp, 0x8000u); /* 0x15046FE3: push 0x8000 */
    PUSH32(esp, 0); /* 0x15046FE8: push 0 */
    PUSH32(esp, edi); /* 0x15046FEA: push edi */
    RECOMP_ICALL(MEM32(0x150C01B4)); /* 0x15046FEB: call dword ptr [0x150c01b4] */
    RECOMP_FLAGS_IN();
L_15046FF1:
    /* cmp esi, ebx */ /* 0x15046FF1: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047004; /* 0x15046FF3: je 0x15047004 */
L_15046FF5:
    PUSH32(esp, esi); /* 0x15046FF5: push esi */
    PUSH32(esp, 0); /* 0x15046FF6: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15046FF8: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x15046FFE: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
L_15047004:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15047004: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047006:
    edi = POP32_VAL(esp); /* 0x15047006: pop edi */
    esi = POP32_VAL(esp); /* 0x15047007: pop esi */
    ebx = POP32_VAL(esp); /* 0x15047008: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15047009: ret  */
    RECOMP_REGS_OUT();
}

void sub_15047010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15047010u);

L_15047010:
    edi = edi; /* 0x15047010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15047012: push ebp */
    ebp = esp; /* 0x15047013: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15047015: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15047016: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0x8000u); /* 0x15047019: push 0x8000 */
    PUSH32(esp, 0); /* 0x1504701E: push 0 */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x15047020: push dword ptr [esi + 0x10] */
    RECOMP_ICALL(MEM32(0x150C01B4)); /* 0x15047023: call dword ptr [0x150c01b4] */
    RECOMP_FLAGS_IN();
    edx = esi + 0x4; /* 0x15047029: lea edx, [esi + 4] */
    /* cmp MEM32(0x150BC068), esi */ /* 0x1504702C: cmp dword ptr [0x150bc068], esi */
    _flag_a = (uint32_t)(MEM32(0x150BC068)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504703B; /* 0x15047032: jne 0x1504703b */
L_15047034:
    eax = MEM32(edx); /* 0x15047034: mov eax, dword ptr [edx] */
    MEM32(0x150BC068) = eax; /* 0x15047036: mov dword ptr [0x150bc068], eax */
L_1504703B:
    /* cmp esi, 0x150BA048u */ /* 0x1504703B: cmp esi, 0x150ba048 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x150BA048u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047061; /* 0x15047041: je 0x15047061 */
L_15047043:
    ecx = MEM32(edx); /* 0x15047043: mov ecx, dword ptr [edx] */
    eax = MEM32(esi); /* 0x15047045: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x15047047: push esi */
    PUSH32(esp, 0); /* 0x15047048: push 0 */
    MEM32(ecx) = eax; /* 0x1504704A: mov dword ptr [ecx], eax */
    ecx = MEM32(esi); /* 0x1504704C: mov ecx, dword ptr [esi] */
    eax = MEM32(edx); /* 0x1504704E: mov eax, dword ptr [edx] */
    MEM32(ecx + 0x4) = eax; /* 0x15047050: mov dword ptr [ecx + 4], eax */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15047053: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x15047059: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    goto L_15047068; /* 0x1504705F: jmp 0x15047068 */
L_15047061:
    _flag_a = (uint32_t)((MEM32(0x150BA058) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(0x150BA058) | 0xFFFFFFFFu));
    MEM32(0x150BA058) = MEM32(0x150BA058) | 0xFFFFFFFFu; /* 0x15047061: or dword ptr [0x150ba058], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047068:
    esi = POP32_VAL(esp); /* 0x15047068: pop esi */
    ebp = POP32_VAL(esp); /* 0x15047069: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504706A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15047071(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15047071u);

L_15047071:
    edi = edi; /* 0x15047071: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15047073: push ebp */
    ebp = esp; /* 0x15047074: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x15047076: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x15047079: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504707C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x1504707E: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x15047081: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x15047082: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x15047085: push esi */
    edx = (uint32_t)MEM8(edx); /* 0x15047086: movzx edx, byte ptr [edx] */
    PUSH32(esp, edi); /* 0x15047089: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1504708A: mov edi, dword ptr [ebp + 0xc] */
    esi = edi; /* 0x1504708D: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(eax + 0x10); /* 0x1504708F: sub esi, dword ptr [eax + 0x10] */
    _flag_k = FK_CMP;
    if (12u) _cf = (((esi) >> 11) & 1u); /* 0x15047092: sar esi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 12u);
    MEM32(ebp + (-0x8)) = esi; /* 0x15047095: mov dword ptr [ebp - 8], esi */
    /* cmp edx, ebx */ /* 0x15047098: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150470AB; /* 0x1504709A: jbe 0x150470ab */
L_1504709C:
    ecx = MEM32(ebp + 0x10); /* 0x1504709C: mov ecx, dword ptr [ebp + 0x10] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1504709F: mov byte ptr [ecx], bl */
    MEM32(eax + esi * 8 + 0x1C) = 0xF1u; /* 0x150470A1: mov dword ptr [eax + esi*8 + 0x1c], 0xf1 */
    goto L_15047114; /* 0x150470A9: jmp 0x15047114 */
L_150470AB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1504711D; /* 0x150470AB: jae 0x1504711d */
L_150470AD:
    eax = MEM32(ebp + 0x10); /* 0x150470AD: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x150470B0: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = edi + 0xF8; /* 0x150470B2: lea ebx, [edi + 0xf8] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x150470B8: mov dword ptr [ebp - 0xc], ebx */
    /* cmp eax, ebx */ /* 0x150470BB: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x14); /* 0x150470BD: mov ebx, dword ptr [ebp + 0x14] */
    if (CMP_A(_flag_a, _flag_b)) goto L_1504711D; /* 0x150470C0: ja 0x1504711d */
L_150470C2:
    edi = MEM32(ebp + 0x10); /* 0x150470C2: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x150470C5: add edi, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edi; /* 0x150470C7: mov dword ptr [ebp - 4], edi */
    /* cmp edi, eax */ /* 0x150470CA: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0xC); /* 0x150470CC: mov edi, dword ptr [ebp + 0xc] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_150470E0; /* 0x150470CF: jae 0x150470e0 */
L_150470D1:
    esi = MEM32(ebp + (-0x4)); /* 0x150470D1: mov esi, dword ptr [ebp - 4] */
    /* cmp MEM8(esi), LO8(ecx) */ /* 0x150470D4: cmp byte ptr [esi], cl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504711D; /* 0x150470D6: jne 0x1504711d */
L_150470D8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x150470D8: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x150470DB: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150470D1; /* 0x150470DE: jb 0x150470d1 */
L_150470E0:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x150470E0: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504711D; /* 0x150470E3: jne 0x1504711d */
L_150470E5:
    esi = MEM32(ebp + 0x10); /* 0x150470E5: mov esi, dword ptr [ebp + 0x10] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150470E8: mov byte ptr [esi], bl */
    /* cmp esi, MEM32(edi) */ /* 0x150470EA: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x8)); /* 0x150470EC: mov esi, dword ptr [ebp - 8] */
    if (CMP_A(_flag_a, _flag_b)) goto L_15047111; /* 0x150470EF: ja 0x15047111 */
L_150470F1:
    /* cmp eax, MEM32(edi) */ /* 0x150470F1: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15047111; /* 0x150470F3: jbe 0x15047111 */
L_150470F5:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x150470F5: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15047109; /* 0x150470F8: jae 0x15047109 */
L_150470FA:
    MEM32(edi) = eax; /* 0x150470FA: mov dword ptr [edi], eax */
    /* cmp MEM8(eax), LO8(ecx) */ /* 0x150470FC: cmp byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504710E; /* 0x150470FE: jne 0x1504710e */
L_15047100:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15047100: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + ecx), 0 */ /* 0x15047101: cmp byte ptr [eax + ecx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047100; /* 0x15047105: je 0x15047100 */
L_15047107:
    goto L_1504710E; /* 0x15047107: jmp 0x1504710e */
L_15047109:
    eax = edi + 0x8; /* 0x15047109: lea eax, [edi + 8] */
    MEM32(edi) = eax; /* 0x1504710C: mov dword ptr [edi], eax */
L_1504710E:
    MEM32(edi + 0x4) = ecx; /* 0x1504710E: mov dword ptr [edi + 4], ecx */
L_15047111:
    eax = MEM32(ebp + 0x8); /* 0x15047111: mov eax, dword ptr [ebp + 8] */
L_15047114:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x15047114: sub edx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15047116: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + esi * 8 + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + esi * 8 + 0x18) = MEM32(eax + esi * 8 + 0x18) + edx; /* 0x15047118: add dword ptr [eax + esi*8 + 0x18], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504711C: inc ecx */
    _flag_k = FK_INC;
L_1504711D:
    edi = POP32_VAL(esp); /* 0x1504711D: pop edi */
    esi = POP32_VAL(esp); /* 0x1504711E: pop esi */
    eax = ecx; /* 0x1504711F: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x15047121: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15047122: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15047123: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504712A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504712Au);

L_1504712A:
    edi = edi; /* 0x1504712A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504712C: push ebp */
    ebp = esp; /* 0x1504712D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1504712F: sub esp, 0x1c */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)MEM32(0x150BEB90) * (int32_t)0x14u); /* 0x15047132: imul edx, dword ptr [0x150beb90], 0x14 */
    eax = MEM32(ebp + 0x8); /* 0x15047139: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x17u; /* 0x1504713C: add eax, 0x17 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1504713F: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x15047142: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x150BEB9C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(0x150BEB9C); /* 0x15047145: add edx, dword ptr [0x150beb9c] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x1504714B: push ebx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x1504714C: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x1504714F: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15047152: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x15047153: push esi */
    PUSH32(esp, edi); /* 0x15047154: push edi */
    /* cmp eax, 0x20u */ /* 0x15047155: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1504715F; /* 0x15047158: jl 0x1504715f */
L_1504715A:
    ecx = eax + (-0x20); /* 0x1504715A: lea ecx, [eax - 0x20] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1504715D: shr ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> ((LO8(ecx)) & 31); /* 0x1504715D: shr ebx, cl */
L_1504715F:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1504715F: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x15047162: mov dword ptr [ebp - 0xc], ebx */
    ecx = eax; /* 0x15047165: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047167: shr edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> ((LO8(ecx)) & 31); /* 0x15047167: shr edi, cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15047169: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x20u */ /* 0x1504716B: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(0x150BEB98); /* 0x1504716E: mov eax, dword ptr [0x150beb98] */
    esi = eax; /* 0x15047173: mov esi, eax */
    if (CMP_GE(_flag_a, _flag_b)) { edi = ecx; } /* 0x15047175: cmovge edi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15047178: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1504717B: mov dword ptr [ebp - 8], edi */
    /* cmp esi, edx */ /* 0x1504717E: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504719E; /* 0x15047180: jae 0x1504719e */
L_15047182:
    ecx = MEM32(esi + 0x4); /* 0x15047182: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x15047185: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x15047187: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x15047189: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1504718B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150471D1; /* 0x1504718D: jne 0x150471d1 */
L_1504718F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x1504718F: add esi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = esi; /* 0x15047192: mov dword ptr [ebp - 4], esi */
    /* cmp esi, edx */ /* 0x15047195: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15047182; /* 0x15047197: jb 0x15047182 */
L_15047199:
    eax = MEM32(0x150BEB98); /* 0x15047199: mov eax, dword ptr [0x150beb98] */
L_1504719E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_150471D1; /* 0x1504719E: jne 0x150471d1 */
L_150471A0:
    esi = MEM32(0x150BEB9C); /* 0x150471A0: mov esi, dword ptr [0x150beb9c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x150471A6: mov dword ptr [ebp - 4], esi */
    /* cmp esi, eax */ /* 0x150471A9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150471CB; /* 0x150471AB: jae 0x150471cb */
L_150471AD:
    ecx = MEM32(esi + 0x4); /* 0x150471AD: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(esi); /* 0x150471B0: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x150471B2: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x150471B4: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x150471B6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x150BEB98); /* 0x150471B8: mov eax, dword ptr [0x150beb98] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150471C6; /* 0x150471BD: jne 0x150471c6 */
L_150471BF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x150471BF: add esi, 0x14 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x150471C2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150471AD; /* 0x150471C4: jb 0x150471ad */
L_150471C6:
    MEM32(ebp + (-0x4)) = esi; /* 0x150471C6: mov dword ptr [ebp - 4], esi */
    /* cmp esi, eax */ /* 0x150471C9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_150471CB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_150472D8; /* 0x150471CB: je 0x150472d8 */
L_150471D1:
    edx = MEM32(ebp + (-0xC)); /* 0x150471D1: mov edx, dword ptr [ebp - 0xc] */
    MEM32(0x150BEB98) = esi; /* 0x150471D4: mov dword ptr [0x150beb98], esi */
    edi = MEM32(esi + 0x10); /* 0x150471DA: mov edi, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x18)) = edi; /* 0x150471DD: mov dword ptr [ebp - 0x18], edi */
    ebx = MEM32(edi); /* 0x150471E0: mov ebx, dword ptr [edi] */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x150471E2: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150471FB; /* 0x150471E5: je 0x150471fb */
L_150471E7:
    ecx = MEM32(edi + ebx * 4 + 0x44); /* 0x150471E7: mov ecx, dword ptr [edi + ebx*4 + 0x44] */
    eax = MEM32(edi + ebx * 4 + 0xC4); /* 0x150471EB: mov eax, dword ptr [edi + ebx*4 + 0xc4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    ecx = ecx & MEM32(ebp + (-0x8)); /* 0x150471F2: and ecx, dword ptr [ebp - 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x150471F5: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x150471F7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047235; /* 0x150471F9: jne 0x15047235 */
L_150471FB:
    ecx = MEM32(edi + 0xC4); /* 0x150471FB: mov ecx, dword ptr [edi + 0xc4] */
    eax = edi + 0x44; /* 0x15047201: lea eax, [edi + 0x44] */
    MEM32(ebp + (-0x10)) = eax; /* 0x15047204: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x15047207: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x8)); /* 0x15047209: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504720C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x44));
    eax = eax & MEM32(edi + 0x44); /* 0x1504720E: and eax, dword ptr [edi + 0x44] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x15047211: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047235; /* 0x15047213: jne 0x15047235 */
L_15047215:
    edi = MEM32(ebp + (-0x8)); /* 0x15047215: mov edi, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x10)); /* 0x15047218: mov esi, dword ptr [ebp - 0x10] */
L_1504721B:
    esi = esi + 0x4; /* 0x1504721B: lea esi, [esi + 4] */
    eax = edi; /* 0x1504721E: mov eax, edi */
    ecx = MEM32(esi + 0x80); /* 0x15047220: mov ecx, dword ptr [esi + 0x80] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15047226: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    eax = eax & MEM32(esi); /* 0x15047227: and eax, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x15047229: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1504722B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504721B; /* 0x1504722D: je 0x1504721b */
L_1504722F:
    esi = MEM32(ebp + (-0x4)); /* 0x1504722F: mov esi, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x18)); /* 0x15047232: mov edi, dword ptr [ebp - 0x18] */
L_15047235:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0x204u); /* 0x15047235: imul eax, ebx, 0x204 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1504723B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1504723D: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x144u; /* 0x15047240: add eax, 0x144 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15047245: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = eax; /* 0x15047247: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edi + ebx * 4 + 0x44); /* 0x1504724A: mov eax, dword ptr [edi + ebx*4 + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    eax = eax & MEM32(ebp + (-0x8)); /* 0x1504724E: and eax, dword ptr [ebp - 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047262; /* 0x15047251: jne 0x15047262 */
L_15047253:
    eax = MEM32(edi + ebx * 4 + 0xC4); /* 0x15047253: mov eax, dword ptr [edi + ebx*4 + 0xc4] */
    PUSH32(esp, 0x20u); /* 0x1504725A: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x1504725C: pop ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1504725D: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x15047260: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047262:
    /* test eax, eax */ /* 0x15047262: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504726E; /* 0x15047264: js 0x1504726e */
L_15047266:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15047266: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x15047267: add eax, eax */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_15047266; /* 0x15047269: jns 0x15047266 */
L_1504726B:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1504726B: mov dword ptr [ebp - 4], ecx */
L_1504726E:
    eax = MEM32(ebp + (-0xC)); /* 0x1504726E: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = 0x3Fu; /* 0x15047271: mov dword ptr [ebp - 0x10], 0x3f */
    edx = MEM32(eax + ecx * 8 + 0x4); /* 0x15047278: mov edx, dword ptr [eax + ecx*8 + 4] */
    ecx = MEM32(edx); /* 0x1504727C: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x14)); /* 0x1504727E: sub ecx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    eax = ecx; /* 0x15047281: mov eax, ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15047283: mov dword ptr [ebp - 8], ecx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x15047286: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15047289: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x3Fu */ /* 0x1504728A: cmp eax, 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x10)); } /* 0x1504728D: cmovg eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = eax; /* 0x15047291: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x15047294: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047422; /* 0x15047297: je 0x15047422 */
L_1504729D:
    eax = MEM32(edx + 0x4); /* 0x1504729D: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x150472A0: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047347; /* 0x150472A3: jne 0x15047347 */
L_150472A9:
    ecx = MEM32(ebp + (-0x4)); /* 0x150472A9: mov ecx, dword ptr [ebp - 4] */
    eax = 0x80000000u; /* 0x150472AC: mov eax, 0x80000000 */
    /* cmp ecx, 0x20u */ /* 0x150472B1: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15047329; /* 0x150472B4: jge 0x15047329 */
L_150472B6:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x150472B6: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x150472B6: shr eax, cl */
    eax = ~eax; /* 0x150472B8: not eax */
    _flag_a = (uint32_t)(MEM32(edi + ebx * 4 + 0x44)); _flag_b = (uint32_t)(eax);
    MEM32(edi + ebx * 4 + 0x44) = MEM32(edi + ebx * 4 + 0x44) & eax; /* 0x150472BA: and dword ptr [edi + ebx*4 + 0x44], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(edi + ecx + 0x4) = (uint8_t)(MEM8(edi + ecx + 0x4) - 1); /* 0x150472BE: sub byte ptr [edi + ecx + 4], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = eax; /* 0x150472C3: mov dword ptr [ebp - 4], eax */
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15047347; /* 0x150472C6: jne 0x15047347 */
L_150472C8:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    MEM32(esi) = MEM32(esi) & eax; /* 0x150472C8: and dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15047347; /* 0x150472CA: jmp 0x15047347 */
L_150472CC:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x150472CC: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504730D; /* 0x150472D0: jne 0x1504730d */
L_150472D2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x150472D2: add esi, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = esi; /* 0x150472D5: mov dword ptr [ebp - 4], esi */
L_150472D8:
    /* cmp esi, edx */ /* 0x150472D8: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150472CC; /* 0x150472DA: jb 0x150472cc */
L_150472DC:
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504730D; /* 0x150472DC: jne 0x1504730d */
L_150472DE:
    esi = MEM32(0x150BEB9C); /* 0x150472DE: mov esi, dword ptr [0x150beb9c] */
    MEM32(ebp + (-0x4)) = esi; /* 0x150472E4: mov dword ptr [ebp - 4], esi */
    /* cmp esi, eax */ /* 0x150472E7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150472FD; /* 0x150472E9: jae 0x150472fd */
L_150472EB:
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x150472EB: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150472F8; /* 0x150472EF: jne 0x150472f8 */
L_150472F1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x150472F1: add esi, 0x14 */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x150472F4: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150472EB; /* 0x150472F6: jb 0x150472eb */
L_150472F8:
    MEM32(ebp + (-0x4)) = esi; /* 0x150472F8: mov dword ptr [ebp - 4], esi */
    /* cmp esi, eax */ /* 0x150472FB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_150472FD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1504730D; /* 0x150472FD: jne 0x1504730d */
L_150472FF:
    RECOMP_CALL(sub_15047544); /* 0x150472FF: call 0x15047544 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15047304: mov esi, eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x15047306: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x15047309: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15047322; /* 0x1504730B: je 0x15047322 */
L_1504730D:
    PUSH32(esp, esi); /* 0x1504730D: push esi */
    RECOMP_CALL(sub_1504742E); /* 0x1504730E: call 0x1504742e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15047313: pop ecx */
    ecx = MEM32(esi + 0x10); /* 0x15047314: mov ecx, dword ptr [esi + 0x10] */
    MEM32(ecx) = eax; /* 0x15047317: mov dword ptr [ecx], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15047319: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150471D1; /* 0x1504731C: jne 0x150471d1 */
L_15047322:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15047322: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150473F6; /* 0x15047324: jmp 0x150473f6 */
L_15047329:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x15047329: add ecx, -0x20 */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1504732C: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x1504732C: shr eax, cl */
    ecx = MEM32(ebp + (-0x4)); /* 0x1504732E: mov ecx, dword ptr [ebp - 4] */
    eax = ~eax; /* 0x15047331: not eax */
    _flag_a = (uint32_t)(MEM32(edi + ebx * 4 + 0xC4)); _flag_b = (uint32_t)(eax);
    MEM32(edi + ebx * 4 + 0xC4) = MEM32(edi + ebx * 4 + 0xC4) & eax; /* 0x15047333: and dword ptr [edi + ebx*4 + 0xc4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1504733A: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(MEM8(edi + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(edi + ecx + 0x4) = (uint8_t)(MEM8(edi + ecx + 0x4) - 1); /* 0x1504733D: sub byte ptr [edi + ecx + 4], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15047347; /* 0x15047342: jne 0x15047347 */
L_15047344:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & eax; /* 0x15047344: and dword ptr [esi + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047347:
    ecx = MEM32(edx + 0x8); /* 0x15047347: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x4); /* 0x1504734A: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1504734D: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(edx + 0x4); /* 0x15047350: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx + 0x8); /* 0x15047353: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x15047356: mov dword ptr [ecx + 8], eax */
    ecx = MEM32(ebp + (-0x8)); /* 0x15047359: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x1504735C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150473B8; /* 0x1504735E: je 0x150473b8 */
L_15047360:
    eax = MEM32(ebp + (-0x10)); /* 0x15047360: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x15047363: mov ecx, dword ptr [ebp - 0xc] */
    ecx = ecx + eax * 8; /* 0x15047366: lea ecx, [ecx + eax*8] */
    eax = MEM32(ecx + 0x4); /* 0x15047369: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1504736C: mov dword ptr [edx + 4], eax */
    MEM32(edx + 0x8) = ecx; /* 0x1504736F: mov dword ptr [edx + 8], ecx */
    MEM32(ecx + 0x4) = edx; /* 0x15047372: mov dword ptr [ecx + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x15047375: mov eax, dword ptr [edx + 4] */
    MEM32(eax + 0x8) = edx; /* 0x15047378: mov dword ptr [eax + 8], edx */
    eax = MEM32(edx + 0x4); /* 0x1504737B: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x1504737E: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150473AF; /* 0x15047381: jne 0x150473af */
L_15047383:
    ecx = MEM32(ebp + (-0x10)); /* 0x15047383: mov ecx, dword ptr [ebp - 0x10] */
    SET_HI8(eax, MEM8(ecx + edi + 0x4)); /* 0x15047386: mov ah, byte ptr [ecx + edi + 4] */
    SET_LO8(eax, HI8(eax)); /* 0x1504738A: mov al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x1504738C: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ecx + edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504738E: mov byte ptr [ecx + edi + 4], al */
    /* cmp ecx, 0x20u */ /* 0x15047392: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150473FB; /* 0x15047395: jge 0x150473fb */
L_15047397:
    /* test HI8(eax), HI8(eax) */ /* 0x15047397: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150473A4; /* 0x15047399: jne 0x150473a4 */
L_1504739B:
    eax = 0x80000000u; /* 0x1504739B: mov eax, 0x80000000 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x150473A0: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x150473A0: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x150473A2: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150473A4:
    eax = 0x80000000u; /* 0x150473A4: mov eax, 0x80000000 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x150473A9: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x150473A9: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(edi + ebx * 4 + 0x44) | eax)); _flag_b = (uint32_t)((MEM32(edi + ebx * 4 + 0x44) | eax));
    MEM32(edi + ebx * 4 + 0x44) = MEM32(edi + ebx * 4 + 0x44) | eax; /* 0x150473AB: or dword ptr [edi + ebx*4 + 0x44], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150473AF:
    ecx = MEM32(ebp + (-0x8)); /* 0x150473AF: mov ecx, dword ptr [ebp - 8] */
L_150473B2:
    MEM32(edx) = ecx; /* 0x150473B2: mov dword ptr [edx], ecx */
    MEM32(ecx + edx + (-0x4)) = ecx; /* 0x150473B4: mov dword ptr [ecx + edx - 4], ecx */
L_150473B8:
    edi = MEM32(ebp + (-0xC)); /* 0x150473B8: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x150473BB: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x14)); /* 0x150473BD: mov ecx, dword ptr [ebp - 0x14] */
    eax = ecx + 0x1; /* 0x150473C0: lea eax, [ecx + 1] */
    MEM32(edx) = eax; /* 0x150473C3: mov dword ptr [edx], eax */
    MEM32(edx + ecx + (-0x4)) = eax; /* 0x150473C5: mov dword ptr [edx + ecx - 4], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x150473C9: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x150473CC: mov ecx, dword ptr [eax] */
    eax = ecx + 0x1; /* 0x150473CE: lea eax, [ecx + 1] */
    MEM32(edi) = eax; /* 0x150473D1: mov dword ptr [edi], eax */
    edi = MEM32(ebp + (-0x18)); /* 0x150473D3: mov edi, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x150473D6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150473F1; /* 0x150473D8: jne 0x150473f1 */
L_150473DA:
    /* cmp esi, MEM32(0x150BDB6C) */ /* 0x150473DA: cmp esi, dword ptr [0x150bdb6c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BDB6C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150473F1; /* 0x150473E0: jne 0x150473f1 */
L_150473E2:
    /* cmp ebx, MEM32(0x150BEB8C) */ /* 0x150473E2: cmp ebx, dword ptr [0x150beb8c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEB8C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150473F1; /* 0x150473E8: jne 0x150473f1 */
L_150473EA:
    _flag_a = (uint32_t)(MEM32(0x150BDB6C)); _flag_b = (uint32_t)(0);
    MEM32(0x150BDB6C) = MEM32(0x150BDB6C) & 0; /* 0x150473EA: and dword ptr [0x150bdb6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150473F1:
    MEM32(edi) = ebx; /* 0x150473F1: mov dword ptr [edi], ebx */
    eax = edx + 0x4; /* 0x150473F3: lea eax, [edx + 4] */
L_150473F6:
    edi = POP32_VAL(esp); /* 0x150473F6: pop edi */
    esi = POP32_VAL(esp); /* 0x150473F7: pop esi */
    ebx = POP32_VAL(esp); /* 0x150473F8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150473F9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150473FA: ret  */
L_150473FB:
    /* test HI8(eax), HI8(eax) */ /* 0x150473FB: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504740F; /* 0x150473FD: jne 0x1504740f */
L_150473FF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x150473FF: add ecx, -0x20 */
    _flag_k = FK_ADD;
    eax = 0x80000000u; /* 0x15047402: mov eax, 0x80000000 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047407: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047407: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | eax)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | eax));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | eax; /* 0x15047409: or dword ptr [esi + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x1504740C: mov ecx, dword ptr [ebp - 0x10] */
L_1504740F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x1504740F: add ecx, -0x20 */
    _flag_k = FK_ADD;
    eax = 0x80000000u; /* 0x15047412: mov eax, 0x80000000 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047417: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047417: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(edi + ebx * 4 + 0xC4) | eax)); _flag_b = (uint32_t)((MEM32(edi + ebx * 4 + 0xC4) | eax));
    MEM32(edi + ebx * 4 + 0xC4) = MEM32(edi + ebx * 4 + 0xC4) | eax; /* 0x15047419: or dword ptr [edi + ebx*4 + 0xc4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_150473AF; /* 0x15047420: jmp 0x150473af */
L_15047422:
    /* test ecx, ecx */ /* 0x15047422: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150473B8; /* 0x15047424: je 0x150473b8 */
L_15047426:
    RECOMP_BACKEDGE();
    goto L_150473B2; /* 0x15047426: jmp 0x150473b2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504742E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504742Eu);

L_1504742E:
    edi = edi; /* 0x1504742E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15047430: push ebp */
    ebp = esp; /* 0x15047431: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15047433: push ecx */
    PUSH32(esp, ecx); /* 0x15047434: push ecx */
    PUSH32(esp, ebx); /* 0x15047435: push ebx */
    PUSH32(esp, esi); /* 0x15047436: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15047437: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1504743A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1504743B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x8); /* 0x1504743D: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(esi + 0x10); /* 0x15047440: mov ecx, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15047443: mov dword ptr [ebp - 8], ecx */
    /* test eax, eax */ /* 0x15047446: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1504744F; /* 0x15047448: js 0x1504744f */
L_1504744A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504744A: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1504744B: add eax, eax */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_1504744A; /* 0x1504744D: jns 0x1504744a */
L_1504744F:
    eax = (uint32_t)((int32_t)edi * (int32_t)0x204u); /* 0x1504744F: imul eax, edi, 0x204 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x144u; /* 0x15047455: add ecx, 0x144 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x3Fu); /* 0x1504745B: push 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1504745D: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504745F: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x15047462: pop ecx */
L_15047463:
    MEM32(eax + 0x8) = eax; /* 0x15047463: mov dword ptr [eax + 8], eax */
    MEM32(eax + 0x4) = eax; /* 0x15047466: mov dword ptr [eax + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x15047469: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1504746C: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15047463; /* 0x1504746F: jne 0x15047463 */
L_15047471:
    PUSH32(esp, 4); /* 0x15047471: push 4 */
    ebx = edi; /* 0x15047473: mov ebx, edi */
    PUSH32(esp, 0x1000u); /* 0x15047475: push 0x1000 */
    if (15u) _cf = (((ebx) >> 17) & 1u); /* 0x1504747A: shl ebx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((ebx << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 15u; /* 0x1504747A: shl ebx, 0xf */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi + 0xC); /* 0x1504747D: add ebx, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x8000u); /* 0x15047480: push 0x8000 */
    PUSH32(esp, ebx); /* 0x15047485: push ebx */
    RECOMP_ICALL(MEM32(0x150C01B8)); /* 0x15047486: call dword ptr [0x150c01b8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504748C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047498; /* 0x1504748E: jne 0x15047498 */
L_15047490:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15047490: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15047539; /* 0x15047493: jmp 0x15047539 */
L_15047498:
    eax = ebx + 0x7000; /* 0x15047498: lea eax, [ebx + 0x7000] */
    /* cmp ebx, eax */ /* 0x1504749E: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150474E9; /* 0x150474A0: ja 0x150474e9 */
L_150474A2:
    PUSH32(esp, 8); /* 0x150474A2: push 8 */
    ecx = ebx + 0xFFC; /* 0x150474A4: lea ecx, [ebx + 0xffc] */
    edx = POP32_VAL(esp); /* 0x150474AA: pop edx */
L_150474AB:
    _flag_a = (uint32_t)((MEM32(ecx + (-0xFF4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + (-0xFF4)) | 0xFFFFFFFFu));
    MEM32(ecx + (-0xFF4)) = MEM32(ecx + (-0xFF4)) | 0xFFFFFFFFu; /* 0x150474AB: or dword ptr [ecx - 0xff4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x10; /* 0x150474B2: lea eax, [ecx + 0x10] */
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x150474B5: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + (-0xFEC)) = eax; /* 0x150474B8: mov dword ptr [ecx - 0xfec], eax */
    eax = ecx + (-0x1FF0); /* 0x150474BE: lea eax, [ecx - 0x1ff0] */
    MEM32(ecx + (-0xFF0)) = 0xFF0u; /* 0x150474C4: mov dword ptr [ecx - 0xff0], 0xff0 */
    ecx = ecx + 0x1000; /* 0x150474CE: lea ecx, [ecx + 0x1000] */
    MEM32(ecx + (-0x1FE8)) = eax; /* 0x150474D4: mov dword ptr [ecx - 0x1fe8], eax */
    MEM32(ecx + (-0x1004)) = 0xFF0u; /* 0x150474DA: mov dword ptr [ecx - 0x1004], 0xff0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x150474E4: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150474AB; /* 0x150474E7: jne 0x150474ab */
L_150474E9:
    ecx = MEM32(ebp + (-0x4)); /* 0x150474E9: mov ecx, dword ptr [ebp - 4] */
    eax = ebx + 0xC; /* 0x150474EC: lea eax, [ebx + 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x150474EF: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1F8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1F8u; /* 0x150474F2: add ecx, 0x1f8 */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x4) = eax; /* 0x150474F8: mov dword ptr [ecx + 4], eax */
    MEM32(eax + 0x8) = ecx; /* 0x150474FB: mov dword ptr [eax + 8], ecx */
    eax = ebx + 0x700C; /* 0x150474FE: lea eax, [ebx + 0x700c] */
    MEM32(ecx + 0x8) = eax; /* 0x15047504: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15047507: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x15047509: mov dword ptr [eax + 4], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1504750C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + edi * 4 + 0x44)); _flag_b = (uint32_t)(0);
    MEM32(edx + edi * 4 + 0x44) = MEM32(edx + edi * 4 + 0x44) & 0; /* 0x1504750D: and dword ptr [edx + edi*4 + 0x44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + edi * 4 + 0xC4) = ebx; /* 0x15047512: mov dword ptr [edx + edi*4 + 0xc4], ebx */
    SET_LO8(ecx, MEM8(edx + 0x43)); /* 0x15047519: mov cl, byte ptr [edx + 0x43] */
    eax = ecx + 0x1; /* 0x1504751C: lea eax, [ecx + 1] */
    MEM8(edx + 0x43) = (uint8_t)(LO8(eax)); /* 0x1504751F: mov byte ptr [edx + 0x43], al */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15047522: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047529; /* 0x15047524: jne 0x15047529 */
L_15047526:
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | ebx)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | ebx));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | ebx; /* 0x15047526: or dword ptr [esi + 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047529:
    edx = 0x80000000u; /* 0x15047529: mov edx, 0x80000000 */
    ecx = edi; /* 0x1504752E: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047530: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x15047530: shr edx, cl */
    eax = edi; /* 0x15047532: mov eax, edi */
    edx = ~edx; /* 0x15047534: not edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edx);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & edx; /* 0x15047536: and dword ptr [esi + 8], edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047539:
    edi = POP32_VAL(esp); /* 0x15047539: pop edi */
    esi = POP32_VAL(esp); /* 0x1504753A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504753B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504753C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504753D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15047544(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15047544u);

L_15047544:
    ecx = MEM32(0x150BEB90); /* 0x15047544: mov ecx, dword ptr [0x150beb90] */
    eax = MEM32(0x150BEB94); /* 0x1504754A: mov eax, dword ptr [0x150beb94] */
    PUSH32(esp, esi); /* 0x1504754F: push esi */
    PUSH32(esp, edi); /* 0x15047550: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15047551: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x15047553: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047589; /* 0x15047555: jne 0x15047589 */
L_15047557:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x15047557: add eax, 0x10 */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x1504755A: imul eax, eax, 0x14 */
    PUSH32(esp, eax); /* 0x1504755D: push eax */
    PUSH32(esp, MEM32(0x150BEB9C)); /* 0x1504755E: push dword ptr [0x150beb9c] */
    PUSH32(esp, edi); /* 0x15047564: push edi */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15047565: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0138)); /* 0x1504756B: call dword ptr [0x150c0138] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15047571: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150475AD; /* 0x15047573: je 0x150475ad */
L_15047575:
    _flag_a = (uint32_t)(MEM32(0x150BEB94)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x150BEB94) = MEM32(0x150BEB94) + 0x10u; /* 0x15047575: add dword ptr [0x150beb94], 0x10 */
    _flag_k = FK_ADD;
    ecx = MEM32(0x150BEB90); /* 0x1504757C: mov ecx, dword ptr [0x150beb90] */
    MEM32(0x150BEB9C) = eax; /* 0x15047582: mov dword ptr [0x150beb9c], eax */
    goto L_1504758E; /* 0x15047587: jmp 0x1504758e */
L_15047589:
    eax = MEM32(0x150BEB9C); /* 0x15047589: mov eax, dword ptr [0x150beb9c] */
L_1504758E:
    PUSH32(esp, 0x41C4u); /* 0x1504758E: push 0x41c4 */
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x15047593: imul esi, ecx, 0x14 */
    PUSH32(esp, 8); /* 0x15047596: push 8 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15047598: push dword ptr [0x150bdb68] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1504759E: add esi, eax */
    _flag_k = FK_ADD;
    RECOMP_ICALL(MEM32(0x150C013C)); /* 0x150475A0: call dword ptr [0x150c013c] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x150475A6: mov dword ptr [esi + 0x10], eax */
    /* test eax, eax */ /* 0x150475A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150475B1; /* 0x150475AB: jne 0x150475b1 */
L_150475AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150475AD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150475F4; /* 0x150475AF: jmp 0x150475f4 */
L_150475B1:
    PUSH32(esp, 4); /* 0x150475B1: push 4 */
    PUSH32(esp, 0x2000u); /* 0x150475B3: push 0x2000 */
    PUSH32(esp, 0x00100000u); /* 0x150475B8: push 0x100000 */
    PUSH32(esp, edi); /* 0x150475BD: push edi */
    RECOMP_ICALL(MEM32(0x150C01B8)); /* 0x150475BE: call dword ptr [0x150c01b8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x150475C4: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x150475C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150475DD; /* 0x150475C9: jne 0x150475dd */
L_150475CB:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x150475CB: push dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x150475CE: push edi */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x150475CF: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x150475D5: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150475AD; /* 0x150475DB: jmp 0x150475ad */
L_150475DD:
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 0xFFFFFFFFu));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 0xFFFFFFFFu; /* 0x150475DD: or dword ptr [esi + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x150475E1: mov eax, esi */
    MEM32(esi) = edi; /* 0x150475E3: mov dword ptr [esi], edi */
    MEM32(esi + 0x4) = edi; /* 0x150475E5: mov dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(0x150BEB90)); _flag_b = (uint32_t)(1);
    MEM32(0x150BEB90) = MEM32(0x150BEB90) + 1; /* 0x150475E8: inc dword ptr [0x150beb90] */
    _flag_k = FK_INC;
    ecx = MEM32(esi + 0x10); /* 0x150475EE: mov ecx, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x150475F1: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150475F4:
    edi = POP32_VAL(esp); /* 0x150475F4: pop edi */
    esi = POP32_VAL(esp); /* 0x150475F5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150475F6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150475FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150475FDu);

L_150475FD:
    edi = edi; /* 0x150475FD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150475FF: push ebp */
    ebp = esp; /* 0x15047600: mov ebp, esp */
    edx = (uint32_t)((int32_t)MEM32(0x150BEB90) * (int32_t)0x14u); /* 0x15047602: imul edx, dword ptr [0x150beb90], 0x14 */
    ecx = MEM32(0x150BEB9C); /* 0x15047609: mov ecx, dword ptr [0x150beb9c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1504760F: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_15047623; /* 0x15047611: jmp 0x15047623 */
L_15047613:
    eax = MEM32(ebp + 0x8); /* 0x15047613: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0xC); /* 0x15047616: sub eax, dword ptr [ecx + 0xc] */
    _flag_k = FK_CMP;
    /* cmp eax, 0x00100000u */ /* 0x15047619: cmp eax, 0x100000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1504762B; /* 0x1504761E: jb 0x1504762b */
L_15047620:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x15047620: add ecx, 0x14 */
    _flag_k = FK_ADD;
L_15047623:
    /* cmp ecx, edx */ /* 0x15047623: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15047613; /* 0x15047625: jb 0x15047613 */
L_15047627:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15047627: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15047629: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504762A: ret  */
L_1504762B:
    eax = ecx; /* 0x1504762B: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1504762D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504762E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15047635(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15047635u);

L_15047635:
    edi = edi; /* 0x15047635: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15047637: push ebp */
    ebp = esp; /* 0x15047638: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1504763A: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x1504763D: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x15047640: mov eax, ecx */
    PUSH32(esp, ebx); /* 0x15047642: push ebx */
    PUSH32(esp, esi); /* 0x15047643: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15047644: mov esi, dword ptr [ebp + 8] */
    edx = ecx + (-0x4); /* 0x15047647: lea edx, [ecx - 4] */
    ebx = MEM32(edx); /* 0x1504764A: mov ebx, dword ptr [edx] */
    PUSH32(esp, edi); /* 0x1504764C: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esi + 0xC); /* 0x1504764D: sub eax, dword ptr [esi + 0xc] */
    _flag_k = FK_CMP;
    edi = MEM32(esi + 0x10); /* 0x15047650: mov edi, dword ptr [esi + 0x10] */
    if (15u) _cf = (((eax) >> 14) & 1u); /* 0x15047653: shr eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 15u; /* 0x15047653: shr eax, 0xf */
    MEM32(ebp + (-0x4)) = eax; /* 0x15047656: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x204u); /* 0x15047659: imul eax, eax, 0x204 */
    MEM32(ebp + (-0xC)) = edi; /* 0x1504765F: mov dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x144u; /* 0x15047662: add eax, 0x144 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15047667: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x15047669: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1504766A: mov dword ptr [ebp - 0x1c], eax */
    /* test LO8(ebx), 1 */ /* 0x1504766D: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047981; /* 0x15047670: jne 0x15047981 */
L_15047676:
    eax = MEM32(ebx + edx); /* 0x15047676: mov eax, dword ptr [ebx + edx] */
    ecx = MEM32(edx + (-0x4)); /* 0x15047679: mov ecx, dword ptr [edx - 4] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1504767C: mov dword ptr [ebp - 0x14], ecx */
    ecx = 0x80000000u; /* 0x1504767F: mov ecx, 0x80000000 */
    MEM32(ebp + (-0x20)) = eax; /* 0x15047684: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x18)) = 0x3Fu; /* 0x15047687: mov dword ptr [ebp - 0x18], 0x3f */
    /* test LO8(eax), 1 */ /* 0x1504768E: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504772A; /* 0x15047690: jne 0x1504772a */
L_15047696:
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x15047696: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15047699: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x3Fu */ /* 0x1504769A: cmp eax, 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x18)); } /* 0x1504769D: cmova eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = eax; /* 0x150476A1: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx + edx + 0x4); /* 0x150476A4: mov eax, dword ptr [ebx + edx + 4] */
    /* cmp eax, MEM32(ebx + edx + 0x8) */ /* 0x150476A8: cmp eax, dword ptr [ebx + edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504770C; /* 0x150476AC: jne 0x1504770c */
L_150476AE:
    eax = MEM32(ebp + (-0x10)); /* 0x150476AE: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, 0x20u */ /* 0x150476B1: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150476E0; /* 0x150476B4: jae 0x150476e0 */
L_150476B6:
    MEM32(ebp + (-0x8)) = ecx; /* 0x150476B6: mov dword ptr [ebp - 8], ecx */
    ecx = eax; /* 0x150476B9: mov ecx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x150476BB: mov eax, dword ptr [ebp - 8] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x150476BE: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x150476BE: shr eax, cl */
    eax = ~eax; /* 0x150476C0: not eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x150476C2: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x150476C5: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x150476C8: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0x44)); _flag_b = (uint32_t)(ecx);
    MEM32(edi + eax * 4 + 0x44) = MEM32(edi + eax * 4 + 0x44) & ecx; /* 0x150476CB: and dword ptr [edi + eax*4 + 0x44], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x150476CF: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM8(ecx + edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(ecx + edi + 0x4) = (uint8_t)(MEM8(ecx + edi + 0x4) - 1); /* 0x150476D2: sub byte ptr [ecx + edi + 4], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504770C; /* 0x150476D7: jne 0x1504770c */
L_150476D9:
    eax = MEM32(ebp + (-0x8)); /* 0x150476D9: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    MEM32(esi) = MEM32(esi) & eax; /* 0x150476DC: and dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504770C; /* 0x150476DE: jmp 0x1504770c */
L_150476E0:
    ecx = eax + (-0x20); /* 0x150476E0: lea ecx, [eax - 0x20] */
    eax = 0x80000000u; /* 0x150476E3: mov eax, 0x80000000 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x150476E8: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x150476E8: shr eax, cl */
    eax = ~eax; /* 0x150476EA: not eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x150476EC: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x150476EF: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x150476F2: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(edi + eax * 4 + 0xC4)); _flag_b = (uint32_t)(ecx);
    MEM32(edi + eax * 4 + 0xC4) = MEM32(edi + eax * 4 + 0xC4) & ecx; /* 0x150476F5: and dword ptr [edi + eax*4 + 0xc4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x10)); /* 0x150476FC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM8(ecx + edi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(ecx + edi + 0x4) = (uint8_t)(MEM8(ecx + edi + 0x4) - 1); /* 0x150476FF: sub byte ptr [ecx + edi + 4], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504770C; /* 0x15047704: jne 0x1504770c */
L_15047706:
    eax = MEM32(ebp + (-0x8)); /* 0x15047706: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & eax; /* 0x15047709: and dword ptr [esi + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504770C:
    ecx = MEM32(ebx + edx + 0x8); /* 0x1504770C: mov ecx, dword ptr [ebx + edx + 8] */
    eax = MEM32(ebx + edx + 0x4); /* 0x15047710: mov eax, dword ptr [ebx + edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x15047714: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(ebx + edx + 0x4); /* 0x15047717: mov ecx, dword ptr [ebx + edx + 4] */
    eax = MEM32(ebx + edx + 0x8); /* 0x1504771B: mov eax, dword ptr [ebx + edx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x20)); /* 0x1504771F: add ebx, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x8) = eax; /* 0x15047722: mov dword ptr [ecx + 8], eax */
    ecx = 0x80000000u; /* 0x15047725: mov ecx, 0x80000000 */
L_1504772A:
    edi = ebx; /* 0x1504772A: mov edi, ebx */
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x1504772C: sar edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 4u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1504772F: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x3Fu); /* 0x15047730: push 0x3f */
    eax = POP32_VAL(esp); /* 0x15047732: pop eax */
    /* cmp edi, eax */ /* 0x15047733: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = eax; } /* 0x15047735: cmova edi, eax */
    eax = MEM32(ebp + (-0x14)); /* 0x15047738: mov eax, dword ptr [ebp - 0x14] */
    /* test LO8(eax), 1 */ /* 0x1504773B: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047801; /* 0x1504773D: jne 0x15047801 */
L_15047743:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x15047743: sub edx, eax */
    _flag_k = FK_CMP;
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x15047745: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15047748: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x3Fu); /* 0x15047749: push 0x3f */
    edi = POP32_VAL(esp); /* 0x1504774B: pop edi */
    /* cmp eax, edi */ /* 0x1504774C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = edi; } /* 0x1504774E: cmova eax, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x14)); /* 0x15047751: add ebx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x15047754: mov edi, ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x15047756: mov dword ptr [ebp - 8], eax */
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x15047759: sar edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 4u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1504775C: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, 0x3Fu */ /* 0x1504775D: cmp edi, 0x3f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = MEM32(ebp + (-0x18)); } /* 0x15047760: cmova edi, dword ptr [ebp - 0x18] */
    /* cmp eax, edi */ /* 0x15047764: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047883; /* 0x15047766: je 0x15047883 */
L_1504776C:
    eax = MEM32(edx + 0x4); /* 0x1504776C: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x1504776F: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150477E4; /* 0x15047772: jne 0x150477e4 */
L_15047774:
    eax = MEM32(ebp + (-0x8)); /* 0x15047774: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, 0x20u */ /* 0x15047777: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150477AD; /* 0x1504777A: jae 0x150477ad */
L_1504777C:
    esi = ecx; /* 0x1504777C: mov esi, ecx */
    ecx = eax; /* 0x1504777E: mov ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x15047780: mov eax, dword ptr [ebp - 4] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047783: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x15047783: shr esi, cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x15047785: mov ecx, dword ptr [ebp - 0xc] */
    esi = ~esi; /* 0x15047788: not esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x1504778A: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0x44)); _flag_b = (uint32_t)(esi);
    MEM32(ecx + eax * 4 + 0x44) = MEM32(ecx + eax * 4 + 0x44) & esi; /* 0x1504778D: and dword ptr [ecx + eax*4 + 0x44], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x8)); /* 0x15047791: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x8)); /* 0x15047794: mov esi, dword ptr [ebp - 8] */
    SET_LO8(eax, MEM8(ecx + eax + 0x4)); /* 0x15047797: mov al, byte ptr [ecx + eax + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 1); /* 0x1504779B: sub al, 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ecx + esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504779D: mov byte ptr [ecx + esi + 4], al */
    esi = MEM32(ebp + 0x8); /* 0x150477A1: mov esi, dword ptr [ebp + 8] */
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150477E4; /* 0x150477A4: jne 0x150477e4 */
L_150477A6:
    eax = MEM32(ebp + (-0x20)); /* 0x150477A6: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    MEM32(esi) = MEM32(esi) & eax; /* 0x150477A9: and dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150477E4; /* 0x150477AB: jmp 0x150477e4 */
L_150477AD:
    ecx = eax + (-0x20); /* 0x150477AD: lea ecx, [eax - 0x20] */
    esi = 0x80000000u; /* 0x150477B0: mov esi, 0x80000000 */
    eax = MEM32(ebp + (-0x4)); /* 0x150477B5: mov eax, dword ptr [ebp - 4] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x150477B8: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x150477B8: shr esi, cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x150477BA: mov ecx, dword ptr [ebp - 0xc] */
    esi = ~esi; /* 0x150477BD: not esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x150477BF: mov dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0xC4)); _flag_b = (uint32_t)(esi);
    MEM32(ecx + eax * 4 + 0xC4) = MEM32(ecx + eax * 4 + 0xC4) & esi; /* 0x150477C2: and dword ptr [ecx + eax*4 + 0xc4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x8)); /* 0x150477C9: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x8)); /* 0x150477CC: mov esi, dword ptr [ebp - 8] */
    SET_LO8(eax, MEM8(ecx + eax + 0x4)); /* 0x150477CF: mov al, byte ptr [ecx + eax + 4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 1); /* 0x150477D3: sub al, 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ecx + esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x150477D5: mov byte ptr [ecx + esi + 4], al */
    esi = MEM32(ebp + 0x8); /* 0x150477D9: mov esi, dword ptr [ebp + 8] */
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150477E4; /* 0x150477DC: jne 0x150477e4 */
L_150477DE:
    eax = MEM32(ebp + (-0x20)); /* 0x150477DE: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & eax; /* 0x150477E1: and dword ptr [esi + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150477E4:
    ecx = MEM32(edx + 0x8); /* 0x150477E4: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x4); /* 0x150477E7: mov eax, dword ptr [edx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x150477EA: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(edx + 0x4); /* 0x150477ED: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx + 0x8); /* 0x150477F0: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x150477F3: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x150477F6: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x150477F9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047883; /* 0x150477FB: je 0x15047883 */
L_15047801:
    eax = MEM32(ebp + (-0x1C)); /* 0x15047801: mov eax, dword ptr [ebp - 0x1c] */
    ecx = eax + edi * 8; /* 0x15047804: lea ecx, [eax + edi*8] */
    eax = MEM32(ecx + 0x4); /* 0x15047807: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x4) = eax; /* 0x1504780A: mov dword ptr [edx + 4], eax */
    MEM32(edx + 0x8) = ecx; /* 0x1504780D: mov dword ptr [edx + 8], ecx */
    MEM32(ecx + 0x4) = edx; /* 0x15047810: mov dword ptr [ecx + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x15047813: mov eax, dword ptr [edx + 4] */
    MEM32(eax + 0x8) = edx; /* 0x15047816: mov dword ptr [eax + 8], edx */
    eax = MEM32(edx + 0x4); /* 0x15047819: mov eax, dword ptr [edx + 4] */
    /* cmp eax, MEM32(edx + 0x8) */ /* 0x1504781C: cmp eax, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047883; /* 0x1504781F: jne 0x15047883 */
L_15047821:
    ecx = MEM32(ebp + (-0xC)); /* 0x15047821: mov ecx, dword ptr [ebp - 0xc] */
    SET_HI8(eax, MEM8(edi + ecx + 0x4)); /* 0x15047824: mov ah, byte ptr [edi + ecx + 4] */
    SET_LO8(eax, HI8(eax)); /* 0x15047828: mov al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x1504782A: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(edi + ecx + 0x4) = (uint8_t)(LO8(eax)); /* 0x1504782C: mov byte ptr [edi + ecx + 4], al */
    /* cmp edi, 0x20u */ /* 0x15047830: cmp edi, 0x20 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15047859; /* 0x15047833: jae 0x15047859 */
L_15047835:
    /* test HI8(eax), HI8(eax) */ /* 0x15047835: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047844; /* 0x15047837: jne 0x15047844 */
L_15047839:
    eax = 0x80000000u; /* 0x15047839: mov eax, 0x80000000 */
    ecx = edi; /* 0x1504783E: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047840: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047840: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(esi) | eax)); _flag_b = (uint32_t)((MEM32(esi) | eax));
    MEM32(esi) = MEM32(esi) | eax; /* 0x15047842: or dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047844:
    ecx = edi; /* 0x15047844: mov ecx, edi */
    eax = 0x80000000u; /* 0x15047846: mov eax, 0x80000000 */
    edi = MEM32(ebp + (-0x4)); /* 0x1504784B: mov edi, dword ptr [ebp - 4] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1504784E: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x1504784E: shr eax, cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x15047850: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)((MEM32(ecx + edi * 4 + 0x44) | eax)); _flag_b = (uint32_t)((MEM32(ecx + edi * 4 + 0x44) | eax));
    MEM32(ecx + edi * 4 + 0x44) = MEM32(ecx + edi * 4 + 0x44) | eax; /* 0x15047853: or dword ptr [ecx + edi*4 + 0x44], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15047886; /* 0x15047857: jmp 0x15047886 */
L_15047859:
    /* test HI8(eax), HI8(eax) */ /* 0x15047859: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504786A; /* 0x1504785B: jne 0x1504786a */
L_1504785D:
    ecx = edi + (-0x20); /* 0x1504785D: lea ecx, [edi - 0x20] */
    eax = 0x80000000u; /* 0x15047860: mov eax, 0x80000000 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047865: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047865: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | eax)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | eax));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | eax; /* 0x15047867: or dword ptr [esi + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504786A:
    ecx = edi + (-0x20); /* 0x1504786A: lea ecx, [edi - 0x20] */
    eax = 0x80000000u; /* 0x1504786D: mov eax, 0x80000000 */
    edi = MEM32(ebp + (-0x4)); /* 0x15047872: mov edi, dword ptr [ebp - 4] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047875: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047875: shr eax, cl */
    ecx = MEM32(ebp + (-0xC)); /* 0x15047877: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)((MEM32(ecx + edi * 4 + 0xC4) | eax)); _flag_b = (uint32_t)((MEM32(ecx + edi * 4 + 0xC4) | eax));
    MEM32(ecx + edi * 4 + 0xC4) = MEM32(ecx + edi * 4 + 0xC4) | eax; /* 0x1504787A: or dword ptr [ecx + edi*4 + 0xc4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15047886; /* 0x15047881: jmp 0x15047886 */
L_15047883:
    edi = MEM32(ebp + (-0x4)); /* 0x15047883: mov edi, dword ptr [ebp - 4] */
L_15047886:
    eax = MEM32(ebp + (-0x1C)); /* 0x15047886: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edx) = ebx; /* 0x15047889: mov dword ptr [edx], ebx */
    MEM32(ebx + edx + (-0x4)) = ebx; /* 0x1504788B: mov dword ptr [ebx + edx - 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1504788F: sub dword ptr [eax], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15047981; /* 0x15047892: jne 0x15047981 */
L_15047898:
    ecx = MEM32(0x150BDB6C); /* 0x15047898: mov ecx, dword ptr [0x150bdb6c] */
    /* test ecx, ecx */ /* 0x1504789E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15047975; /* 0x150478A0: je 0x15047975 */
L_150478A6:
    eax = MEM32(0x150BEB8C); /* 0x150478A6: mov eax, dword ptr [0x150beb8c] */
    PUSH32(esp, 0x4000u); /* 0x150478AB: push 0x4000 */
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x150478B0: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x150478B0: shl eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0xC); /* 0x150478B3: add eax, dword ptr [ecx + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x8000u); /* 0x150478B6: push 0x8000 */
    PUSH32(esp, eax); /* 0x150478BB: push eax */
    RECOMP_ICALL(MEM32(0x150C01B4)); /* 0x150478BC: call dword ptr [0x150c01b4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB6C); /* 0x150478C2: mov eax, dword ptr [0x150bdb6c] */
    edx = 0x80000000u; /* 0x150478C7: mov edx, 0x80000000 */
    ecx = MEM32(0x150BEB8C); /* 0x150478CC: mov ecx, dword ptr [0x150beb8c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150478D2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x150478D4: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x150478D4: shr edx, cl */
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | edx)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | edx));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | edx; /* 0x150478D6: or dword ptr [eax + 8], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x150BDB6C); /* 0x150478D9: mov eax, dword ptr [0x150bdb6c] */
    ecx = MEM32(eax + 0x10); /* 0x150478DE: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(0x150BEB8C); /* 0x150478E1: mov eax, dword ptr [0x150beb8c] */
    MEM32(ecx + eax * 4 + 0xC4) = ebx; /* 0x150478E6: mov dword ptr [ecx + eax*4 + 0xc4], ebx */
    eax = MEM32(0x150BDB6C); /* 0x150478ED: mov eax, dword ptr [0x150bdb6c] */
    eax = MEM32(eax + 0x10); /* 0x150478F2: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(MEM8(eax + 0x43)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x43) = (uint8_t)(MEM8(eax + 0x43) - 1); /* 0x150478F5: sub byte ptr [eax + 0x43], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15047904; /* 0x150478F9: jne 0x15047904 */
L_150478FB:
    eax = MEM32(0x150BDB6C); /* 0x150478FB: mov eax, dword ptr [0x150bdb6c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFFFFFEu; /* 0x15047900: and dword ptr [eax + 4], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047904:
    eax = MEM32(0x150BDB6C); /* 0x15047904: mov eax, dword ptr [0x150bdb6c] */
    /* cmp MEM32(eax + 0x8), 0xFFFFFFFFu */ /* 0x15047909: cmp dword ptr [eax + 8], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047975; /* 0x1504790D: jne 0x15047975 */
L_1504790F:
    PUSH32(esp, 0x8000u); /* 0x1504790F: push 0x8000 */
    PUSH32(esp, ebx); /* 0x15047914: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x15047915: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(0x150C01B4)); /* 0x15047918: call dword ptr [0x150c01b4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BDB6C); /* 0x1504791E: mov eax, dword ptr [0x150bdb6c] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x15047923: push dword ptr [eax + 0x10] */
    PUSH32(esp, ebx); /* 0x15047926: push ebx */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15047927: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x1504792D: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)((int32_t)MEM32(0x150BEB90) * (int32_t)0x14u); /* 0x15047933: imul ecx, dword ptr [0x150beb90], 0x14 */
    edx = MEM32(0x150BDB6C); /* 0x1504793A: mov edx, dword ptr [0x150bdb6c] */
    eax = MEM32(0x150BEB9C); /* 0x15047940: mov eax, dword ptr [0x150beb9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFECu; /* 0x15047945: add eax, -0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15047948: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1504794A: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1504794C: push eax */
    eax = edx + 0x14; /* 0x1504794D: lea eax, [edx + 0x14] */
    PUSH32(esp, eax); /* 0x15047950: push eax */
    PUSH32(esp, edx); /* 0x15047951: push edx */
    RECOMP_CALL(sub_1508E000); /* 0x15047952: call 0x1508e000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15047957: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(0x150BEB90)); _flag_b = (uint32_t)(1);
    MEM32(0x150BEB90) = MEM32(0x150BEB90) - 1; /* 0x1504795A: dec dword ptr [0x150beb90] */
    _flag_k = FK_DEC;
    /* cmp esi, MEM32(0x150BDB6C) */ /* 0x15047960: cmp esi, dword ptr [0x150bdb6c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BDB6C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504796B; /* 0x15047966: jbe 0x1504796b */
L_15047968:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x14u; /* 0x15047968: sub esi, 0x14 */
    _flag_k = FK_CMP;
L_1504796B:
    eax = MEM32(0x150BEB9C); /* 0x1504796B: mov eax, dword ptr [0x150beb9c] */
    MEM32(0x150BEB98) = eax; /* 0x15047970: mov dword ptr [0x150beb98], eax */
L_15047975:
    MEM32(0x150BDB6C) = esi; /* 0x15047975: mov dword ptr [0x150bdb6c], esi */
    MEM32(0x150BEB8C) = edi; /* 0x1504797B: mov dword ptr [0x150beb8c], edi */
L_15047981:
    edi = POP32_VAL(esp); /* 0x15047981: pop edi */
    esi = POP32_VAL(esp); /* 0x15047982: pop esi */
    ebx = POP32_VAL(esp); /* 0x15047983: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15047984: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15047985: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504798C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504798Cu);

L_1504798C:
    edi = edi; /* 0x1504798C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504798E: push ebp */
    ebp = esp; /* 0x1504798F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x140u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x140u; /* 0x15047991: sub esp, 0x140 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15047997: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1504799C: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504799E: mov dword ptr [ebp - 4], eax */
    edx = MEM32(0x150BEB9C); /* 0x150479A1: mov edx, dword ptr [0x150beb9c] */
    /* test edx, edx */ /* 0x150479A7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150479B3; /* 0x150479A9: jne 0x150479b3 */
L_150479AB:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150479AB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15047CE1; /* 0x150479AE: jmp 0x15047ce1 */
L_150479B3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0; /* 0x150479B3: and dword ptr [ebp - 0x134], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x150BEB90), 0 */ /* 0x150479BA: cmp dword ptr [0x150beb90], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BEB90)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150479C1: push ebx */
    PUSH32(esp, esi); /* 0x150479C2: push esi */
    PUSH32(esp, edi); /* 0x150479C3: push edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_15047CDC; /* 0x150479C4: jle 0x15047cdc */
L_150479CA:
    MEM32(ebp + (-0x138)) = 0x3Fu; /* 0x150479CA: mov dword ptr [ebp - 0x138], 0x3f */
L_150479D4:
    eax = MEM32(edx + 0x10); /* 0x150479D4: mov eax, dword ptr [edx + 0x10] */
    /* test eax, eax */ /* 0x150479D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15047D25; /* 0x150479D9: je 0x15047d25 */
L_150479DF:
    esi = MEM32(edx + 0xC); /* 0x150479DF: mov esi, dword ptr [edx + 0xc] */
    ecx = eax + 0x144; /* 0x150479E2: lea ecx, [eax + 0x144] */
    MEM32(ebp + (-0x11C)) = ecx; /* 0x150479E8: mov dword ptr [ebp - 0x11c], ecx */
    ebx = eax + 0xC4; /* 0x150479EE: lea ebx, [eax + 0xc4] */
    ecx = MEM32(edx + 0x8); /* 0x150479F4: mov ecx, dword ptr [edx + 8] */
    MEM32(ebp + (-0x120)) = ecx; /* 0x150479F7: mov dword ptr [ebp - 0x120], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150479FD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x12C))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x12C)) = MEM32(ebp + (-0x12C)) & ecx; /* 0x150479FF: and dword ptr [ebp - 0x12c], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x118)) = esi; /* 0x15047A05: mov dword ptr [ebp - 0x118], esi */
    MEM32(ebp + (-0x124)) = ecx; /* 0x15047A0B: mov dword ptr [ebp - 0x124], ecx */
    MEM32(ebp + (-0x128)) = ecx; /* 0x15047A11: mov dword ptr [ebp - 0x128], ecx */
    MEM32(ebp + (-0x130)) = ebx; /* 0x15047A17: mov dword ptr [ebp - 0x130], ebx */
L_15047A1D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x110))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x110)) = MEM32(ebp + (-0x110)) & 0; /* 0x15047A1D: and dword ptr [ebp - 0x110], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x104); /* 0x15047A24: lea edi, [ebp - 0x104] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x114)) = MEM32(ebp + (-0x114)) & 0; /* 0x15047A2A: and dword ptr [ebp - 0x114], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15047A31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x108))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x108)) = MEM32(ebp + (-0x108)) & 0; /* 0x15047A33: and dword ptr [ebp - 0x108], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x40u); /* 0x15047A3A: push 0x40 */
    ecx = POP32_VAL(esp); /* 0x15047A3C: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x15047A3D: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0x120)); /* 0x15047A3F: mov eax, dword ptr [ebp - 0x120] */
    /* test eax, eax */ /* 0x15047A45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15047C51; /* 0x15047A47: js 0x15047c51 */
L_15047A4D:
    /* test esi, esi */ /* 0x15047A4D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15047D19; /* 0x15047A4F: je 0x15047d19 */
L_15047A55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15047A55: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFCu; /* 0x15047A57: add esi, 0xffc */
    _flag_k = FK_ADD;
L_15047A5D:
    /* cmp MEM32(esi + (-0xFF4)), 0xFFFFFFFFu */ /* 0x15047A5D: cmp dword ptr [esi - 0xff4], -1 */
    _flag_a = (uint32_t)(MEM32(esi + (-0xFF4))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = esi + (-0xFF0); /* 0x15047A64: lea edi, [esi - 0xff0] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D15; /* 0x15047A6A: jne 0x15047d15 */
L_15047A70:
    /* cmp MEM32(esi), 0xFFFFFFFFu */ /* 0x15047A70: cmp dword ptr [esi], -1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D15; /* 0x15047A73: jne 0x15047d15 */
L_15047A79:
    ecx = MEM32(edi); /* 0x15047A79: mov ecx, dword ptr [edi] */
    eax = ecx; /* 0x15047A7B: mov eax, ecx */
    MEM32(ebp + (-0x10C)) = eax; /* 0x15047A7D: mov dword ptr [ebp - 0x10c], eax */
    /* test LO8(ecx), 1 */ /* 0x15047A83: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15047A9D; /* 0x15047A86: je 0x15047a9d */
L_15047A88:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15047A88: dec ecx */
    _flag_k = FK_DEC;
    /* cmp ecx, 0x400u */ /* 0x15047A89: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15047CED; /* 0x15047A8F: jg 0x15047ced */
L_15047A95:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x108))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x108)) = MEM32(ebp + (-0x108)) + 1; /* 0x15047A95: inc dword ptr [ebp - 0x108] */
    _flag_k = FK_INC;
    goto L_15047ABA; /* 0x15047A9B: jmp 0x15047aba */
L_15047A9D:
    eax = ecx; /* 0x15047A9D: mov eax, ecx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x15047A9F: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15047AA2: dec eax */
    _flag_k = FK_DEC;
    /* cmp eax, 0x3Fu */ /* 0x15047AA3: cmp eax, 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x138)); } /* 0x15047AA6: cmovg eax, dword ptr [ebp - 0x138] */
    _flag_a = (uint32_t)(MEM32(ebp + eax * 4 + (-0x104))); _flag_b = (uint32_t)(1);
    MEM32(ebp + eax * 4 + (-0x104)) = MEM32(ebp + eax * 4 + (-0x104)) + 1; /* 0x15047AAD: inc dword ptr [ebp + eax*4 - 0x104] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10C)); /* 0x15047AB4: mov eax, dword ptr [ebp - 0x10c] */
L_15047ABA:
    /* cmp ecx, 0x10u */ /* 0x15047ABA: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15047D11; /* 0x15047ABD: jl 0x15047d11 */
L_15047AC3:
    /* test LO8(ecx), 0xFu */ /* 0x15047AC3: test cl, 0xf */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047D11; /* 0x15047AC6: jne 0x15047d11 */
L_15047ACC:
    /* cmp ecx, 0xFF0u */ /* 0x15047ACC: cmp ecx, 0xff0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFF0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15047D11; /* 0x15047AD2: jg 0x15047d11 */
L_15047AD8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x15047AD8: add edi, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + (-0x4)), eax */ /* 0x15047ADA: cmp dword ptr [edi - 4], eax */
    _flag_a = (uint32_t)(MEM32(edi + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D0D; /* 0x15047ADD: jne 0x15047d0d */
L_15047AE3:
    /* cmp edi, esi */ /* 0x15047AE3: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15047A79; /* 0x15047AE5: jb 0x15047a79 */
L_15047AE7:
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D0D; /* 0x15047AE7: jne 0x15047d0d */
L_15047AED:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1000u; /* 0x15047AED: add esi, 0x1000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15047AF3: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 8 */ /* 0x15047AF4: cmp ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15047A5D; /* 0x15047AF7: jl 0x15047a5d */
L_15047AFD:
    ecx = MEM32(ebp + (-0x11C)); /* 0x15047AFD: mov ecx, dword ptr [ebp - 0x11c] */
    eax = MEM32(ebp + (-0x108)); /* 0x15047B03: mov eax, dword ptr [ebp - 0x108] */
    /* cmp MEM32(ecx), eax */ /* 0x15047B09: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D09; /* 0x15047B0B: jne 0x15047d09 */
L_15047B11:
    ebx = ecx; /* 0x15047B11: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15047B13: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047B15:
    ecx = ebx + 0x8; /* 0x15047B15: lea ecx, [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15047B18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x140)) = ecx; /* 0x15047B1A: mov dword ptr [ebp - 0x140], ecx */
    esi = ebx; /* 0x15047B20: mov esi, ebx */
    ecx = MEM32(ecx + (-0x4)); /* 0x15047B22: mov ecx, dword ptr [ecx - 4] */
    MEM32(ebp + (-0x108)) = eax; /* 0x15047B25: mov dword ptr [ebp - 0x108], eax */
    MEM32(ebp + (-0x10C)) = esi; /* 0x15047B2B: mov dword ptr [ebp - 0x10c], esi */
    /* cmp ecx, ebx */ /* 0x15047B31: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047C11; /* 0x15047B33: je 0x15047c11 */
L_15047B39:
    /* cmp eax, MEM32(ebp + edi * 4 + (-0x104)) */ /* 0x15047B39: cmp eax, dword ptr [ebp + edi*4 - 0x104] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + edi * 4 + (-0x104)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047BDA; /* 0x15047B40: je 0x15047bda */
L_15047B46:
    eax = MEM32(ebp + (-0x118)); /* 0x15047B46: mov eax, dword ptr [ebp - 0x118] */
    /* cmp ecx, eax */ /* 0x15047B4C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15047CFD; /* 0x15047B4E: jb 0x15047cfd */
L_15047B54:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8000u; /* 0x15047B54: add eax, 0x8000 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x15047B59: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15047CFD; /* 0x15047B5B: jae 0x15047cfd */
L_15047B61:
    esi = ecx; /* 0x15047B61: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFF000u);
    esi = esi & 0xFFFFF000u; /* 0x15047B63: and esi, 0xfffff000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x15047B69: add esi, 0xc */
    _flag_k = FK_ADD;
    eax = esi + 0xFF0; /* 0x15047B6C: lea eax, [esi + 0xff0] */
    MEM32(ebp + (-0x13C)) = eax; /* 0x15047B72: mov dword ptr [ebp - 0x13c], eax */
L_15047B78:
    /* cmp esi, ecx */ /* 0x15047B78: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047B8D; /* 0x15047B7A: je 0x15047b8d */
L_15047B7C:
    eax = MEM32(esi); /* 0x15047B7C: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x15047B7E: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15047B81: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x13C)); /* 0x15047B83: mov eax, dword ptr [ebp - 0x13c] */
    /* cmp esi, eax */ /* 0x15047B89: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047B78; /* 0x15047B8B: jne 0x15047b78 */
L_15047B8D:
    /* cmp esi, eax */ /* 0x15047B8D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15047CF9; /* 0x15047B8F: je 0x15047cf9 */
L_15047B95:
    eax = MEM32(ecx); /* 0x15047B95: mov eax, dword ptr [ecx] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x15047B97: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15047B9A: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x3Fu); /* 0x15047B9B: push 0x3f */
    esi = POP32_VAL(esp); /* 0x15047B9D: pop esi */
    /* cmp eax, esi */ /* 0x15047B9E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) { eax = esi; } /* 0x15047BA0: cmovg eax, esi */
    /* cmp eax, edi */ /* 0x15047BA3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047CF5; /* 0x15047BA5: jne 0x15047cf5 */
L_15047BAB:
    eax = MEM32(ebp + (-0x10C)); /* 0x15047BAB: mov eax, dword ptr [ebp - 0x10c] */
    /* cmp MEM32(ecx + 0x8), eax */ /* 0x15047BB1: cmp dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047CF1; /* 0x15047BB4: jne 0x15047cf1 */
L_15047BBA:
    eax = MEM32(ebp + (-0x108)); /* 0x15047BBA: mov eax, dword ptr [ebp - 0x108] */
    esi = ecx; /* 0x15047BC0: mov esi, ecx */
    ecx = MEM32(ecx + 0x4); /* 0x15047BC2: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15047BC5: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10C)) = esi; /* 0x15047BC6: mov dword ptr [ebp - 0x10c], esi */
    MEM32(ebp + (-0x108)) = eax; /* 0x15047BCC: mov dword ptr [ebp - 0x108], eax */
    /* cmp ecx, ebx */ /* 0x15047BD2: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047B39; /* 0x15047BD4: jne 0x15047b39 */
L_15047BDA:
    /* test eax, eax */ /* 0x15047BDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15047C11; /* 0x15047BDC: je 0x15047c11 */
L_15047BDE:
    eax = 0x80000000u; /* 0x15047BDE: mov eax, 0x80000000 */
    /* cmp edi, 0x20u */ /* 0x15047BE3: cmp edi, 0x20 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15047BFA; /* 0x15047BE6: jge 0x15047bfa */
L_15047BE8:
    ecx = edi; /* 0x15047BE8: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047BEA: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047BEA: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x110)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x110)) | eax));
    MEM32(ebp + (-0x110)) = MEM32(ebp + (-0x110)) | eax; /* 0x15047BEC: or dword ptr [ebp - 0x110], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x124)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x124)) | eax));
    MEM32(ebp + (-0x124)) = MEM32(ebp + (-0x124)) | eax; /* 0x15047BF2: or dword ptr [ebp - 0x124], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15047C0B; /* 0x15047BF8: jmp 0x15047c0b */
L_15047BFA:
    ecx = edi + (-0x20); /* 0x15047BFA: lea ecx, [edi - 0x20] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047BFD: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047BFD: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x114)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x114)) | eax));
    MEM32(ebp + (-0x114)) = MEM32(ebp + (-0x114)) | eax; /* 0x15047BFF: or dword ptr [ebp - 0x114], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x128)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x128)) | eax));
    MEM32(ebp + (-0x128)) = MEM32(ebp + (-0x128)) | eax; /* 0x15047C05: or dword ptr [ebp - 0x128], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047C0B:
    eax = MEM32(ebp + (-0x108)); /* 0x15047C0B: mov eax, dword ptr [ebp - 0x108] */
L_15047C11:
    /* cmp MEM32(esi + 0x4), ebx */ /* 0x15047C11: cmp dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D05; /* 0x15047C14: jne 0x15047d05 */
L_15047C1A:
    /* cmp eax, MEM32(ebp + edi * 4 + (-0x104)) */ /* 0x15047C1A: cmp eax, dword ptr [ebp + edi*4 - 0x104] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + edi * 4 + (-0x104)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D05; /* 0x15047C21: jne 0x15047d05 */
L_15047C27:
    ebx = MEM32(ebp + (-0x140)); /* 0x15047C27: mov ebx, dword ptr [ebp - 0x140] */
    /* cmp MEM32(ebx), esi */ /* 0x15047C2D: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D01; /* 0x15047C2F: jne 0x15047d01 */
L_15047C35:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15047C35: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 0x40u */ /* 0x15047C36: cmp edi, 0x40 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15047B15; /* 0x15047C39: jl 0x15047b15 */
L_15047C3F:
    esi = MEM32(ebp + (-0x118)); /* 0x15047C3F: mov esi, dword ptr [ebp - 0x118] */
    ebx = MEM32(ebp + (-0x130)); /* 0x15047C45: mov ebx, dword ptr [ebp - 0x130] */
    eax = MEM32(ebp + (-0x120)); /* 0x15047C4B: mov eax, dword ptr [ebp - 0x120] */
L_15047C51:
    ecx = MEM32(ebp + (-0x110)); /* 0x15047C51: mov ecx, dword ptr [ebp - 0x110] */
    /* cmp ecx, MEM32(ebx + (-0x80)) */ /* 0x15047C57: cmp ecx, dword ptr [ebx - 0x80] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + (-0x80)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D21; /* 0x15047C5A: jne 0x15047d21 */
L_15047C60:
    ecx = MEM32(ebp + (-0x114)); /* 0x15047C60: mov ecx, dword ptr [ebp - 0x114] */
    /* cmp ecx, MEM32(ebx) */ /* 0x15047C66: cmp ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D21; /* 0x15047C68: jne 0x15047d21 */
L_15047C6E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x11C))); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x11C)) = MEM32(ebp + (-0x11C)) + 0x204u; /* 0x15047C6E: add dword ptr [ebp - 0x11c], 0x204 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x15047C78: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x120)) = eax; /* 0x15047C7A: mov dword ptr [ebp - 0x120], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x8000u; /* 0x15047C80: add esi, 0x8000 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x12C)); /* 0x15047C86: mov eax, dword ptr [ebp - 0x12c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x15047C8C: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15047C8F: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x118)) = esi; /* 0x15047C90: mov dword ptr [ebp - 0x118], esi */
    MEM32(ebp + (-0x12C)) = eax; /* 0x15047C96: mov dword ptr [ebp - 0x12c], eax */
    MEM32(ebp + (-0x130)) = ebx; /* 0x15047C9C: mov dword ptr [ebp - 0x130], ebx */
    /* cmp eax, 0x20u */ /* 0x15047CA2: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15047A1D; /* 0x15047CA5: jl 0x15047a1d */
L_15047CAB:
    ecx = MEM32(ebp + (-0x124)); /* 0x15047CAB: mov ecx, dword ptr [ebp - 0x124] */
    /* cmp ecx, MEM32(edx) */ /* 0x15047CB1: cmp ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D1D; /* 0x15047CB3: jne 0x15047d1d */
L_15047CB5:
    ecx = MEM32(ebp + (-0x128)); /* 0x15047CB5: mov ecx, dword ptr [ebp - 0x128] */
    /* cmp ecx, MEM32(edx + 0x4) */ /* 0x15047CBB: cmp ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047D1D; /* 0x15047CBE: jne 0x15047d1d */
L_15047CC0:
    ecx = MEM32(ebp + (-0x134)); /* 0x15047CC0: mov ecx, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x15047CC6: add edx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15047CC9: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x134)) = ecx; /* 0x15047CCA: mov dword ptr [ebp - 0x134], ecx */
    /* cmp ecx, MEM32(0x150BEB90) */ /* 0x15047CD0: cmp ecx, dword ptr [0x150beb90] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x150BEB90));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_150479D4; /* 0x15047CD6: jl 0x150479d4 */
L_15047CDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15047CDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047CDE:
    edi = POP32_VAL(esp); /* 0x15047CDE: pop edi */
    esi = POP32_VAL(esp); /* 0x15047CDF: pop esi */
    ebx = POP32_VAL(esp); /* 0x15047CE0: pop ebx */
L_15047CE1:
    ecx = MEM32(ebp + (-0x4)); /* 0x15047CE1: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15047CE4: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15047CE6: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15047CEB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15047CEC: ret  */
L_15047CED:
    PUSH32(esp, 0xFFFFFFFAu); /* 0x15047CED: push -6 */
    goto L_15047D27; /* 0x15047CEF: jmp 0x15047d27 */
L_15047CF1:
    PUSH32(esp, 0xFFFFFFF3u); /* 0x15047CF1: push -0xd */
    goto L_15047D27; /* 0x15047CF3: jmp 0x15047d27 */
L_15047CF5:
    PUSH32(esp, 0xFFFFFFF4u); /* 0x15047CF5: push -0xc */
    goto L_15047D27; /* 0x15047CF7: jmp 0x15047d27 */
L_15047CF9:
    PUSH32(esp, 0xFFFFFFF5u); /* 0x15047CF9: push -0xb */
    goto L_15047D27; /* 0x15047CFB: jmp 0x15047d27 */
L_15047CFD:
    PUSH32(esp, 0xFFFFFFF6u); /* 0x15047CFD: push -0xa */
    goto L_15047D27; /* 0x15047CFF: jmp 0x15047d27 */
L_15047D01:
    PUSH32(esp, 0xFFFFFFF1u); /* 0x15047D01: push -0xf */
    goto L_15047D27; /* 0x15047D03: jmp 0x15047d27 */
L_15047D05:
    PUSH32(esp, 0xFFFFFFF2u); /* 0x15047D05: push -0xe */
    goto L_15047D27; /* 0x15047D07: jmp 0x15047d27 */
L_15047D09:
    PUSH32(esp, 0xFFFFFFF7u); /* 0x15047D09: push -9 */
    goto L_15047D27; /* 0x15047D0B: jmp 0x15047d27 */
L_15047D0D:
    PUSH32(esp, 0xFFFFFFF8u); /* 0x15047D0D: push -8 */
    goto L_15047D27; /* 0x15047D0F: jmp 0x15047d27 */
L_15047D11:
    PUSH32(esp, 0xFFFFFFF9u); /* 0x15047D11: push -7 */
    goto L_15047D27; /* 0x15047D13: jmp 0x15047d27 */
L_15047D15:
    PUSH32(esp, 0xFFFFFFFBu); /* 0x15047D15: push -5 */
    goto L_15047D27; /* 0x15047D17: jmp 0x15047d27 */
L_15047D19:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x15047D19: push -4 */
    goto L_15047D27; /* 0x15047D1B: jmp 0x15047d27 */
L_15047D1D:
    PUSH32(esp, 0xFFFFFFEFu); /* 0x15047D1D: push -0x11 */
    goto L_15047D27; /* 0x15047D1F: jmp 0x15047d27 */
L_15047D21:
    PUSH32(esp, 0xFFFFFFF0u); /* 0x15047D21: push -0x10 */
    goto L_15047D27; /* 0x15047D23: jmp 0x15047d27 */
L_15047D25:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x15047D25: push -2 */
L_15047D27:
    eax = POP32_VAL(esp); /* 0x15047D27: pop eax */
    RECOMP_BACKEDGE();
    goto L_15047CDE; /* 0x15047D28: jmp 0x15047cde */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15047D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15047D30u);

L_15047D30:
    edi = edi; /* 0x15047D30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15047D32: push ebp */
    ebp = esp; /* 0x15047D33: mov ebp, esp */
    PUSH32(esp, 0x140u); /* 0x15047D35: push 0x140 */
    PUSH32(esp, 0); /* 0x15047D3A: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15047D3C: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C013C)); /* 0x15047D42: call dword ptr [0x150c013c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15047D48: mov ecx, eax */
    MEM32(0x150BEB9C) = ecx; /* 0x15047D4A: mov dword ptr [0x150beb9c], ecx */
    /* test ecx, ecx */ /* 0x15047D50: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047D56; /* 0x15047D52: jne 0x15047d56 */
L_15047D54:
    ebp = POP32_VAL(esp); /* 0x15047D54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15047D55: ret  */
L_15047D56:
    eax = MEM32(ebp + 0x8); /* 0x15047D56: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(0x150BDB6C)); _flag_b = (uint32_t)(0);
    MEM32(0x150BDB6C) = MEM32(0x150BDB6C) & 0; /* 0x15047D59: and dword ptr [0x150bdb6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x150BEB90)); _flag_b = (uint32_t)(0);
    MEM32(0x150BEB90) = MEM32(0x150BEB90) & 0; /* 0x15047D60: and dword ptr [0x150beb90], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BEBA0) = eax; /* 0x15047D67: mov dword ptr [0x150beba0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15047D6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BEB98) = ecx; /* 0x15047D6E: mov dword ptr [0x150beb98], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15047D74: inc eax */
    _flag_k = FK_INC;
    MEM32(0x150BEB94) = 0x10u; /* 0x15047D75: mov dword ptr [0x150beb94], 0x10 */
    ebp = POP32_VAL(esp); /* 0x15047D7F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15047D80: ret  */
    RECOMP_REGS_OUT();
}

void sub_15047D87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15047D87u);

L_15047D87:
    ecx = MEM32(0x150BDB6C); /* 0x15047D87: mov ecx, dword ptr [0x150bdb6c] */
    /* test ecx, ecx */ /* 0x15047D8D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15047E4C; /* 0x15047D8F: je 0x15047e4c */
L_15047D95:
    eax = MEM32(0x150BEB8C); /* 0x15047D95: mov eax, dword ptr [0x150beb8c] */
    PUSH32(esp, 0x4000u); /* 0x15047D9A: push 0x4000 */
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x15047D9F: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x15047D9F: shl eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0xC); /* 0x15047DA2: add eax, dword ptr [ecx + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x8000u); /* 0x15047DA5: push 0x8000 */
    PUSH32(esp, eax); /* 0x15047DAA: push eax */
    RECOMP_ICALL(MEM32(0x150C01B4)); /* 0x15047DAB: call dword ptr [0x150c01b4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x150BDB6C); /* 0x15047DB1: mov edx, dword ptr [0x150bdb6c] */
    eax = 0x80000000u; /* 0x15047DB7: mov eax, 0x80000000 */
    ecx = MEM32(0x150BEB8C); /* 0x15047DBC: mov ecx, dword ptr [0x150beb8c] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047DC2: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047DC2: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(edx + 0x8) | eax)); _flag_b = (uint32_t)((MEM32(edx + 0x8) | eax));
    MEM32(edx + 0x8) = MEM32(edx + 0x8) | eax; /* 0x15047DC4: or dword ptr [edx + 8], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x150BDB6C); /* 0x15047DC7: mov eax, dword ptr [0x150bdb6c] */
    ecx = MEM32(eax + 0x10); /* 0x15047DCC: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(0x150BEB8C); /* 0x15047DCF: mov eax, dword ptr [0x150beb8c] */
    _flag_a = (uint32_t)(MEM32(ecx + eax * 4 + 0xC4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + eax * 4 + 0xC4) = MEM32(ecx + eax * 4 + 0xC4) & 0; /* 0x15047DD4: and dword ptr [ecx + eax*4 + 0xc4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x150BDB6C); /* 0x15047DDC: mov eax, dword ptr [0x150bdb6c] */
    eax = MEM32(eax + 0x10); /* 0x15047DE1: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(MEM8(eax + 0x43)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(eax + 0x43) = (uint8_t)(MEM8(eax + 0x43) - 1); /* 0x15047DE4: sub byte ptr [eax + 0x43], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15047DF3; /* 0x15047DE8: jne 0x15047df3 */
L_15047DEA:
    eax = MEM32(0x150BDB6C); /* 0x15047DEA: mov eax, dword ptr [0x150bdb6c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0xFFFFFFFEu; /* 0x15047DEF: and dword ptr [eax + 4], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047DF3:
    eax = MEM32(0x150BDB6C); /* 0x15047DF3: mov eax, dword ptr [0x150bdb6c] */
    /* cmp MEM32(eax + 0x8), 0xFFFFFFFFu */ /* 0x15047DF8: cmp dword ptr [eax + 8], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047E45; /* 0x15047DFC: jne 0x15047e45 */
L_15047DFE:
    /* cmp MEM32(0x150BEB90), 1 */ /* 0x15047DFE: cmp dword ptr [0x150beb90], 1 */
    _flag_a = (uint32_t)(MEM32(0x150BEB90)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15047E45; /* 0x15047E05: jle 0x15047e45 */
L_15047E07:
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x15047E07: push dword ptr [eax + 0x10] */
    PUSH32(esp, 0); /* 0x15047E0A: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15047E0C: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x15047E12: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    ecx = (uint32_t)((int32_t)MEM32(0x150BEB90) * (int32_t)0x14u); /* 0x15047E18: imul ecx, dword ptr [0x150beb90], 0x14 */
    edx = MEM32(0x150BDB6C); /* 0x15047E1F: mov edx, dword ptr [0x150bdb6c] */
    eax = MEM32(0x150BEB9C); /* 0x15047E25: mov eax, dword ptr [0x150beb9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFECu; /* 0x15047E2A: add eax, -0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15047E2D: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15047E2F: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15047E31: push eax */
    eax = edx + 0x14; /* 0x15047E32: lea eax, [edx + 0x14] */
    PUSH32(esp, eax); /* 0x15047E35: push eax */
    PUSH32(esp, edx); /* 0x15047E36: push edx */
    RECOMP_CALL(sub_1508E000); /* 0x15047E37: call 0x1508e000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15047E3C: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(0x150BEB90)); _flag_b = (uint32_t)(1);
    MEM32(0x150BEB90) = MEM32(0x150BEB90) - 1; /* 0x15047E3F: dec dword ptr [0x150beb90] */
    _flag_k = FK_DEC;
L_15047E45:
    _flag_a = (uint32_t)(MEM32(0x150BDB6C)); _flag_b = (uint32_t)(0);
    MEM32(0x150BDB6C) = MEM32(0x150BDB6C) & 0; /* 0x15047E45: and dword ptr [0x150bdb6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047E4C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15047E4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15047E53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15047E53u);

L_15047E53:
    edi = edi; /* 0x15047E53: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15047E55: push ebp */
    ebp = esp; /* 0x15047E56: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15047E58: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15047E5B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15047E5C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15047E5F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x15047E60: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x15047E63: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15047E64: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x17u; /* 0x15047E67: add esi, 0x17 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebx + 0xC); /* 0x15047E6A: sub edi, dword ptr [ebx + 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esi = esi & 0xFFFFFFF0u; /* 0x15047E6D: and esi, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebx + 0x10); /* 0x15047E70: mov edx, dword ptr [ebx + 0x10] */
    if (15u) _cf = (((edi) >> 14) & 1u); /* 0x15047E73: shr edi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edi >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 15u; /* 0x15047E73: shr edi, 0xf */
    eax = (uint32_t)((int32_t)edi * (int32_t)0x204u); /* 0x15047E76: imul eax, edi, 0x204 */
    MEM32(ebp + (-0x10)) = esi; /* 0x15047E7C: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0xC)) = edi; /* 0x15047E7F: mov dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x144u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x144u; /* 0x15047E82: add eax, 0x144 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x15047E87: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x15047E89: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + 0xC); /* 0x15047E8C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + (-0x4)); /* 0x15047E8F: mov ecx, dword ptr [eax - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x15047E92: add eax, -4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15047E95: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15047E96: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x15047E98: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x15047E9B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(eax); /* 0x15047E9E: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x15047EA0: mov dword ptr [ebp - 8], eax */
    /* cmp esi, ecx */ /* 0x15047EA3: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15047FF5; /* 0x15047EA5: jle 0x15047ff5 */
L_15047EAB:
    /* test LO8(eax), 1 */ /* 0x15047EAB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047FEE; /* 0x15047EAD: jne 0x15047fee */
L_15047EB3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15047EB3: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x15047EB5: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15047FEE; /* 0x15047EB7: jg 0x15047fee */
L_15047EBD:
    ecx = MEM32(ebp + (-0x8)); /* 0x15047EBD: mov ecx, dword ptr [ebp - 8] */
    esi = 0x80000000u; /* 0x15047EC0: mov esi, 0x80000000 */
    ebx = MEM32(ebp + (-0x4)); /* 0x15047EC5: mov ebx, dword ptr [ebp - 4] */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x15047EC8: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15047ECB: dec ecx */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x3Fu); /* 0x15047ECC: push 0x3f */
    eax = POP32_VAL(esp); /* 0x15047ECE: pop eax */
    /* cmp ecx, eax */ /* 0x15047ECF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { ecx = eax; } /* 0x15047ED1: cmova ecx, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x15047ED4: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x15047ED7: mov dword ptr [ebp - 0x1c], ecx */
    eax = MEM32(eax + 0x4); /* 0x15047EDA: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ebx + 0x8) */ /* 0x15047EDD: cmp eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x15047EE0: mov ebx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047F1A; /* 0x15047EE3: jne 0x15047f1a */
L_15047EE5:
    eax = esi; /* 0x15047EE5: mov eax, esi */
    /* cmp ecx, 0x20u */ /* 0x15047EE7: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15047EFF; /* 0x15047EEA: jae 0x15047eff */
L_15047EEC:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047EEC: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047EEC: shr eax, cl */
    eax = ~eax; /* 0x15047EEE: not eax */
    _flag_a = (uint32_t)(MEM32(edx + edi * 4 + 0x44)); _flag_b = (uint32_t)(eax);
    MEM32(edx + edi * 4 + 0x44) = MEM32(edx + edi * 4 + 0x44) & eax; /* 0x15047EF0: and dword ptr [edx + edi*4 + 0x44], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ecx + edx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(ecx + edx + 0x4) = (uint8_t)(MEM8(ecx + edx + 0x4) - 1); /* 0x15047EF4: sub byte ptr [ecx + edx + 4], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15047F1A; /* 0x15047EF9: jne 0x15047f1a */
L_15047EFB:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    MEM32(ebx) = MEM32(ebx) & eax; /* 0x15047EFB: and dword ptr [ebx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15047F1A; /* 0x15047EFD: jmp 0x15047f1a */
L_15047EFF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x15047EFF: add ecx, -0x20 */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047F02: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047F02: shr eax, cl */
    ecx = MEM32(ebp + (-0x1C)); /* 0x15047F04: mov ecx, dword ptr [ebp - 0x1c] */
    eax = ~eax; /* 0x15047F07: not eax */
    _flag_a = (uint32_t)(MEM32(edx + edi * 4 + 0xC4)); _flag_b = (uint32_t)(eax);
    MEM32(edx + edi * 4 + 0xC4) = MEM32(edx + edi * 4 + 0xC4) & eax; /* 0x15047F09: and dword ptr [edx + edi*4 + 0xc4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(ecx + edx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(ecx + edx + 0x4) = (uint8_t)(MEM8(ecx + edx + 0x4) - 1); /* 0x15047F10: sub byte ptr [ecx + edx + 4], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15047F1A; /* 0x15047F15: jne 0x15047f1a */
L_15047F17:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(eax);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & eax; /* 0x15047F17: and dword ptr [ebx + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047F1A:
    eax = MEM32(ebp + (-0x4)); /* 0x15047F1A: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + 0x8); /* 0x15047F1D: mov ecx, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x4); /* 0x15047F20: mov eax, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x15047F23: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x15047F26: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + 0x4); /* 0x15047F29: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x15047F2C: mov eax, dword ptr [eax + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x15047F2F: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x15047F32: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x10)); /* 0x15047F35: sub eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x8)); /* 0x15047F38: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x15047F3B: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x15047F3D: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x15047F40: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15047FD9; /* 0x15047F42: jle 0x15047fd9 */
L_15047F48:
    eax = MEM32(ebp + (-0x10)); /* 0x15047F48: mov eax, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + 0xC); /* 0x15047F4B: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x15047F4E: add eax, -4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x15047F51: add edi, eax */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x15047F53: mov eax, ecx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x15047F55: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15047F58: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x20)) = edi; /* 0x15047F59: mov dword ptr [ebp - 0x20], edi */
    PUSH32(esp, 0x3Fu); /* 0x15047F5C: push 0x3f */
    ecx = POP32_VAL(esp); /* 0x15047F5E: pop ecx */
    /* cmp eax, ecx */ /* 0x15047F5F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { eax = ecx; } /* 0x15047F61: cmova eax, ecx */
    ecx = MEM32(ebp + (-0x18)); /* 0x15047F64: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15047F67: mov dword ptr [ebp - 0x14], eax */
    ecx = ecx + eax * 8; /* 0x15047F6A: lea ecx, [ecx + eax*8] */
    eax = MEM32(ecx + 0x4); /* 0x15047F6D: mov eax, dword ptr [ecx + 4] */
    MEM32(edi + 0x4) = eax; /* 0x15047F70: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x8) = ecx; /* 0x15047F73: mov dword ptr [edi + 8], ecx */
    MEM32(ecx + 0x4) = edi; /* 0x15047F76: mov dword ptr [ecx + 4], edi */
    eax = MEM32(edi + 0x4); /* 0x15047F79: mov eax, dword ptr [edi + 4] */
    MEM32(eax + 0x8) = edi; /* 0x15047F7C: mov dword ptr [eax + 8], edi */
    eax = MEM32(edi + 0x4); /* 0x15047F7F: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(edi + 0x8) */ /* 0x15047F82: cmp eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0xC)); /* 0x15047F85: mov edi, dword ptr [ebp - 0xc] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15047FCD; /* 0x15047F88: jne 0x15047fcd */
L_15047F8A:
    ecx = MEM32(ebp + (-0x14)); /* 0x15047F8A: mov ecx, dword ptr [ebp - 0x14] */
    SET_HI8(eax, MEM8(ecx + edx + 0x4)); /* 0x15047F8D: mov ah, byte ptr [ecx + edx + 4] */
    SET_LO8(eax, HI8(eax)); /* 0x15047F91: mov al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x15047F93: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ecx + edx + 0x4) = (uint8_t)(LO8(eax)); /* 0x15047F95: mov byte ptr [ecx + edx + 4], al */
    /* cmp ecx, 0x20u */ /* 0x15047F99: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15047FB0; /* 0x15047F9C: jae 0x15047fb0 */
L_15047F9E:
    /* test HI8(eax), HI8(eax) */ /* 0x15047F9E: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047FA8; /* 0x15047FA0: jne 0x15047fa8 */
L_15047FA2:
    eax = esi; /* 0x15047FA2: mov eax, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047FA4: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047FA4: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(ebx) | eax)); _flag_b = (uint32_t)((MEM32(ebx) | eax));
    MEM32(ebx) = MEM32(ebx) | eax; /* 0x15047FA6: or dword ptr [ebx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047FA8:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047FA8: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x15047FA8: shr esi, cl */
    _flag_a = (uint32_t)((MEM32(edx + edi * 4 + 0x44) | esi)); _flag_b = (uint32_t)((MEM32(edx + edi * 4 + 0x44) | esi));
    MEM32(edx + edi * 4 + 0x44) = MEM32(edx + edi * 4 + 0x44) | esi; /* 0x15047FAA: or dword ptr [edx + edi*4 + 0x44], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15047FCD; /* 0x15047FAE: jmp 0x15047fcd */
L_15047FB0:
    /* test HI8(eax), HI8(eax) */ /* 0x15047FB0: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15047FC1; /* 0x15047FB2: jne 0x15047fc1 */
L_15047FB4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x15047FB4: add ecx, -0x20 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15047FB7: mov eax, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047FB9: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15047FB9: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(ebx + 0x4) | eax)); _flag_b = (uint32_t)((MEM32(ebx + 0x4) | eax));
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) | eax; /* 0x15047FBB: or dword ptr [ebx + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x15047FBE: mov ecx, dword ptr [ebp - 0x14] */
L_15047FC1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFE0u; /* 0x15047FC1: add ecx, -0x20 */
    _flag_k = FK_ADD;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15047FC4: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x15047FC4: shr esi, cl */
    _flag_a = (uint32_t)((MEM32(edx + edi * 4 + 0xC4) | esi)); _flag_b = (uint32_t)((MEM32(edx + edi * 4 + 0xC4) | esi));
    MEM32(edx + edi * 4 + 0xC4) = MEM32(edx + edi * 4 + 0xC4) | esi; /* 0x15047FC6: or dword ptr [edx + edi*4 + 0xc4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15047FCD:
    ecx = MEM32(ebp + (-0x20)); /* 0x15047FCD: mov ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x8)); /* 0x15047FD0: mov eax, dword ptr [ebp - 8] */
    MEM32(ecx) = eax; /* 0x15047FD3: mov dword ptr [ecx], eax */
    MEM32(eax + ecx + (-0x4)) = eax; /* 0x15047FD5: mov dword ptr [eax + ecx - 4], eax */
L_15047FD9:
    ecx = MEM32(ebp + (-0x10)); /* 0x15047FD9: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x15047FDC: mov edx, dword ptr [ebp + 0xc] */
    eax = ecx + 0x1; /* 0x15047FDF: lea eax, [ecx + 1] */
    MEM32(edx + (-0x4)) = eax; /* 0x15047FE2: mov dword ptr [edx - 4], eax */
    MEM32(edx + ecx + (-0x8)) = eax; /* 0x15047FE5: mov dword ptr [edx + ecx - 8], eax */
    goto L_15048137; /* 0x15047FE9: jmp 0x15048137 */
L_15047FEE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15047FEE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504813A; /* 0x15047FF0: jmp 0x1504813a */
L_15047FF5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_GE, _cf)) goto L_15048137; /* 0x15047FF5: jge 0x15048137 */
L_15047FFB:
    edi = MEM32(ebp + 0xC); /* 0x15047FFB: mov edi, dword ptr [ebp + 0xc] */
    eax = esi + 0x1; /* 0x15047FFE: lea eax, [esi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15048001: sub ecx, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x3Fu); /* 0x15048003: push 0x3f */
    MEM32(ebp + (-0x14)) = ecx; /* 0x15048005: mov dword ptr [ebp - 0x14], ecx */
    MEM32(edi + (-0x4)) = eax; /* 0x15048008: mov dword ptr [edi - 4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFFCu; /* 0x1504800B: add edi, -4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1504800E: add edi, esi */
    _flag_k = FK_ADD;
    esi = 0x80000000u; /* 0x15048010: mov esi, 0x80000000 */
    MEM32(ebp + (-0x10)) = edi; /* 0x15048015: mov dword ptr [ebp - 0x10], edi */
    MEM32(edi + (-0x4)) = eax; /* 0x15048018: mov dword ptr [edi - 4], eax */
    edi = ecx; /* 0x1504801B: mov edi, ecx */
    eax = MEM32(ebp + (-0x8)); /* 0x1504801D: mov eax, dword ptr [ebp - 8] */
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x15048020: sar edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 4u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15048023: dec edi */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x15048024: pop ecx */
    /* cmp edi, ecx */ /* 0x15048025: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = ecx; } /* 0x15048027: cmova edi, ecx */
    /* test LO8(eax), 1 */ /* 0x1504802A: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150480BA; /* 0x1504802C: jne 0x150480ba */
L_15048032:
    edi = eax; /* 0x15048032: mov edi, eax */
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x15048034: sar edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 4u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15048037: dec edi */
    _flag_k = FK_DEC;
    /* cmp edi, ecx */ /* 0x15048038: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = ecx; } /* 0x1504803A: cmova edi, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1504803D: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0x4); /* 0x15048040: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x15048043: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504808E; /* 0x15048046: jne 0x1504808e */
L_15048048:
    eax = esi; /* 0x15048048: mov eax, esi */
    /* cmp edi, 0x20u */ /* 0x1504804A: cmp edi, 0x20 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504806D; /* 0x1504804D: jae 0x1504806d */
L_1504804F:
    ecx = edi; /* 0x1504804F: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15048051: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15048051: shr eax, cl */
    eax = ~eax; /* 0x15048053: not eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x15048055: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x15048058: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504805B: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0x44)); _flag_b = (uint32_t)(ecx);
    MEM32(edx + eax * 4 + 0x44) = MEM32(edx + eax * 4 + 0x44) & ecx; /* 0x1504805E: and dword ptr [edx + eax*4 + 0x44], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi + edx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(edi + edx + 0x4) = (uint8_t)(MEM8(edi + edx + 0x4) - 1); /* 0x15048062: sub byte ptr [edi + edx + 4], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504808E; /* 0x15048067: jne 0x1504808e */
L_15048069:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    MEM32(ebx) = MEM32(ebx) & ecx; /* 0x15048069: and dword ptr [ebx], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504808E; /* 0x1504806B: jmp 0x1504808e */
L_1504806D:
    ecx = edi + (-0x20); /* 0x1504806D: lea ecx, [edi - 0x20] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15048070: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15048070: shr eax, cl */
    eax = ~eax; /* 0x15048072: not eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x15048074: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x15048077: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1504807A: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4 + 0xC4)); _flag_b = (uint32_t)(ecx);
    MEM32(edx + eax * 4 + 0xC4) = MEM32(edx + eax * 4 + 0xC4) & ecx; /* 0x1504807D: and dword ptr [edx + eax*4 + 0xc4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM8(edi + edx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM8(edi + edx + 0x4) = (uint8_t)(MEM8(edi + edx + 0x4) - 1); /* 0x15048084: sub byte ptr [edi + edx + 4], 1 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504808E; /* 0x15048089: jne 0x1504808e */
L_1504808B:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(ecx);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & ecx; /* 0x1504808B: and dword ptr [ebx + 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504808E:
    edi = MEM32(ebp + (-0x4)); /* 0x1504808E: mov edi, dword ptr [ebp - 4] */
    PUSH32(esp, 0x3Fu); /* 0x15048091: push 0x3f */
    ecx = MEM32(edi + 0x8); /* 0x15048093: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0x4); /* 0x15048096: mov eax, dword ptr [edi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x15048099: mov dword ptr [ecx + 4], eax */
    ecx = MEM32(edi + 0x4); /* 0x1504809C: mov ecx, dword ptr [edi + 4] */
    eax = MEM32(edi + 0x8); /* 0x1504809F: mov eax, dword ptr [edi + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x150480A2: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x150480A5: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x8)); /* 0x150480A8: add eax, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    edi = eax; /* 0x150480AB: mov edi, eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x150480AD: mov dword ptr [ebp - 0x14], eax */
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x150480B0: sar edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 4u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150480B3: dec edi */
    _flag_k = FK_DEC;
    ecx = POP32_VAL(esp); /* 0x150480B4: pop ecx */
    /* cmp edi, ecx */ /* 0x150480B5: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = ecx; } /* 0x150480B7: cmova edi, ecx */
L_150480BA:
    ecx = MEM32(ebp + (-0x18)); /* 0x150480BA: mov ecx, dword ptr [ebp - 0x18] */
    ebx = MEM32(ebp + (-0x10)); /* 0x150480BD: mov ebx, dword ptr [ebp - 0x10] */
    ecx = ecx + edi * 8; /* 0x150480C0: lea ecx, [ecx + edi*8] */
    eax = MEM32(ecx + 0x4); /* 0x150480C3: mov eax, dword ptr [ecx + 4] */
    MEM32(ebx + 0x4) = eax; /* 0x150480C6: mov dword ptr [ebx + 4], eax */
    eax = ebx; /* 0x150480C9: mov eax, ebx */
    ebx = MEM32(ebp + 0x8); /* 0x150480CB: mov ebx, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x150480CE: mov dword ptr [eax + 8], ecx */
    MEM32(ecx + 0x4) = eax; /* 0x150480D1: mov dword ptr [ecx + 4], eax */
    ecx = eax; /* 0x150480D4: mov ecx, eax */
    eax = MEM32(ecx + 0x4); /* 0x150480D6: mov eax, dword ptr [ecx + 4] */
    MEM32(eax + 0x8) = ecx; /* 0x150480D9: mov dword ptr [eax + 8], ecx */
    eax = MEM32(ecx + 0x4); /* 0x150480DC: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x150480DF: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504812E; /* 0x150480E2: jne 0x1504812e */
L_150480E4:
    SET_LO8(ecx, MEM8(edi + edx + 0x4)); /* 0x150480E4: mov cl, byte ptr [edi + edx + 4] */
    SET_LO8(eax, LO8(ecx)); /* 0x150480E8: mov al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x150480EA: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(edi + edx + 0x4) = (uint8_t)(LO8(eax)); /* 0x150480EC: mov byte ptr [edi + edx + 4], al */
    /* cmp edi, 0x20u */ /* 0x150480F0: cmp edi, 0x20 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504810E; /* 0x150480F3: jae 0x1504810e */
L_150480F5:
    /* test LO8(ecx), LO8(ecx) */ /* 0x150480F5: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048101; /* 0x150480F7: jne 0x15048101 */
L_150480F9:
    eax = esi; /* 0x150480F9: mov eax, esi */
    ecx = edi; /* 0x150480FB: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x150480FD: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x150480FD: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(ebx) | eax)); _flag_b = (uint32_t)((MEM32(ebx) | eax));
    MEM32(ebx) = MEM32(ebx) | eax; /* 0x150480FF: or dword ptr [ebx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048101:
    eax = MEM32(ebp + (-0xC)); /* 0x15048101: mov eax, dword ptr [ebp - 0xc] */
    ecx = edi; /* 0x15048104: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15048106: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x15048106: shr esi, cl */
    _flag_a = (uint32_t)((MEM32(edx + eax * 4 + 0x44) | esi)); _flag_b = (uint32_t)((MEM32(edx + eax * 4 + 0x44) | esi));
    MEM32(edx + eax * 4 + 0x44) = MEM32(edx + eax * 4 + 0x44) | esi; /* 0x15048108: or dword ptr [edx + eax*4 + 0x44], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504812B; /* 0x1504810C: jmp 0x1504812b */
L_1504810E:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1504810E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504811C; /* 0x15048110: jne 0x1504811c */
L_15048112:
    ecx = edi + (-0x20); /* 0x15048112: lea ecx, [edi - 0x20] */
    eax = esi; /* 0x15048115: mov eax, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15048117: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x15048117: shr eax, cl */
    _flag_a = (uint32_t)((MEM32(ebx + 0x4) | eax)); _flag_b = (uint32_t)((MEM32(ebx + 0x4) | eax));
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) | eax; /* 0x15048119: or dword ptr [ebx + 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504811C:
    eax = MEM32(ebp + (-0xC)); /* 0x1504811C: mov eax, dword ptr [ebp - 0xc] */
    ecx = edi + (-0x20); /* 0x1504811F: lea ecx, [edi - 0x20] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x15048122: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x15048122: shr esi, cl */
    _flag_a = (uint32_t)((MEM32(edx + eax * 4 + 0xC4) | esi)); _flag_b = (uint32_t)((MEM32(edx + eax * 4 + 0xC4) | esi));
    MEM32(edx + eax * 4 + 0xC4) = MEM32(edx + eax * 4 + 0xC4) | esi; /* 0x15048124: or dword ptr [edx + eax*4 + 0xc4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1504812B:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504812B: mov ecx, dword ptr [ebp - 0x10] */
L_1504812E:
    eax = MEM32(ebp + (-0x14)); /* 0x1504812E: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ecx) = eax; /* 0x15048131: mov dword ptr [ecx], eax */
    MEM32(eax + ecx + (-0x4)) = eax; /* 0x15048133: mov dword ptr [eax + ecx - 4], eax */
L_15048137:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15048137: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15048139: inc eax */
    _flag_k = FK_INC;
L_1504813A:
    edi = POP32_VAL(esp); /* 0x1504813A: pop edi */
    esi = POP32_VAL(esp); /* 0x1504813B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504813C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504813D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504813E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048150u);

L_15048150:
    /* cmp MEM32(0x150BDB68), 0 */ /* 0x15048150: cmp dword ptr [0x150bdb68], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDB68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15048174; /* 0x15048157: je 0x15048174 */
L_15048159:
    eax = MEM32(0x150BEBA4); /* 0x15048159: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x1504815E: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048169; /* 0x15048161: jne 0x15048169 */
L_15048163:
    eax = MEM32(0x150BEBA0); /* 0x15048163: mov eax, dword ptr [0x150beba0] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048168: ret  */
L_15048169:
    /* cmp eax, 2 */ /* 0x15048169: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048174; /* 0x1504816C: jne 0x15048174 */
L_1504816E:
    eax = MEM32(0x150BCE98); /* 0x1504816E: mov eax, dword ptr [0x150bce98] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048173: ret  */
L_15048174:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15048174: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048176: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048180u);

L_15048180:
    edi = edi; /* 0x15048180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15048182: push ebp */
    ebp = esp; /* 0x15048183: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15048185: push ecx */
    /* cmp MEM32(0x150BDB68), 0 */ /* 0x15048186: cmp dword ptr [0x150bdb68], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDB68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048193; /* 0x1504818D: jne 0x15048193 */
L_1504818F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504818F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15048191: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048192: ret  */
L_15048193:
    eax = MEM32(0x150BEBA4); /* 0x15048193: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x15048198: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150481CD; /* 0x1504819B: jne 0x150481cd */
L_1504819D:
    eax = MEM32(ebp + 0x8); /* 0x1504819D: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x3F8u */ /* 0x150481A0: cmp eax, 0x3f8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3F8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150481C3; /* 0x150481A5: jbe 0x150481c3 */
L_150481A7:
    RECOMP_CALL(sub_15036430); /* 0x150481A7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150481AC: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150481B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150481B4: push eax */
    PUSH32(esp, eax); /* 0x150481B5: push eax */
    PUSH32(esp, eax); /* 0x150481B6: push eax */
    PUSH32(esp, eax); /* 0x150481B7: push eax */
    PUSH32(esp, eax); /* 0x150481B8: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150481B9: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150481BE: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1504818F; /* 0x150481C1: jmp 0x1504818f */
L_150481C3:
    MEM32(0x150BEBA0) = eax; /* 0x150481C3: mov dword ptr [0x150beba0], eax */
L_150481C8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150481C8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150481CA: inc eax */
    _flag_k = FK_INC;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150481CB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150481CC: ret  */
L_150481CD:
    /* cmp eax, 2 */ /* 0x150481CD: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150481E9; /* 0x150481D0: jne 0x150481e9 */
L_150481D2:
    eax = MEM32(ebp + 0x8); /* 0x150481D2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFu; /* 0x150481D5: add eax, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x150481D8: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0x780u */ /* 0x150481DB: cmp eax, 0x780 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x780u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150481A7; /* 0x150481E0: ja 0x150481a7 */
L_150481E2:
    MEM32(0x150BCE98) = eax; /* 0x150481E2: mov dword ptr [0x150bce98], eax */
    RECOMP_BACKEDGE();
    goto L_150481C8; /* 0x150481E7: jmp 0x150481c8 */
L_150481E9:
    PUSH32(esp, esi); /* 0x150481E9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150481EA: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x150481ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504826E; /* 0x150481EF: je 0x1504826e */
L_150481F1:
    /* cmp eax, 1 */ /* 0x150481F1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048273; /* 0x150481F4: jne 0x15048273 */
L_150481F6:
    eax = ebp + (-0x4); /* 0x150481F6: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x150481F9: push eax */
    RECOMP_CALL(sub_15046716); /* 0x150481FA: call 0x15046716 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x4)), 6 */ /* 0x150481FF: cmp byte ptr [ebp - 4], 6 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x15048203: pop ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_15048247; /* 0x15048204: jb 0x15048247 */
L_15048206:
    /* cmp esi, 0x3F8u */ /* 0x15048206: cmp esi, 0x3f8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3F8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504822B; /* 0x1504820C: ja 0x1504822b */
L_1504820E:
    PUSH32(esp, esi); /* 0x1504820E: push esi */
    RECOMP_CALL(sub_15047D30); /* 0x1504820F: call 0x15047d30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048214: pop ecx */
    /* test eax, eax */ /* 0x15048215: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504822B; /* 0x15048217: je 0x1504822b */
L_15048219:
    MEM32(0x150BEBA0) = esi; /* 0x15048219: mov dword ptr [0x150beba0], esi */
    MEM32(0x150BEBA4) = 3; /* 0x1504821F: mov dword ptr [0x150beba4], 3 */
    goto L_1504826E; /* 0x15048229: jmp 0x1504826e */
L_1504822B:
    RECOMP_CALL(sub_15036430); /* 0x1504822B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15048230: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15048236: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15048238: push eax */
    PUSH32(esp, eax); /* 0x15048239: push eax */
    PUSH32(esp, eax); /* 0x1504823A: push eax */
    PUSH32(esp, eax); /* 0x1504823B: push eax */
    PUSH32(esp, eax); /* 0x1504823C: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1504823D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15048242: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1504827E; /* 0x15048245: jmp 0x1504827e */
L_15048247:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFu; /* 0x15048247: add esi, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esi = esi & 0xFFFFFFF0u; /* 0x1504824A: and esi, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0x780u */ /* 0x1504824D: cmp esi, 0x780 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x780u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1504822B; /* 0x15048253: ja 0x1504822b */
L_15048255:
    RECOMP_CALL(sub_15046EBB); /* 0x15048255: call 0x15046ebb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504825A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504822B; /* 0x1504825C: je 0x1504822b */
L_1504825E:
    MEM32(0x150BCE98) = esi; /* 0x1504825E: mov dword ptr [0x150bce98], esi */
    MEM32(0x150BEBA4) = 2; /* 0x15048264: mov dword ptr [0x150beba4], 2 */
L_1504826E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504826E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15048270: inc eax */
    _flag_k = FK_INC;
    goto L_15048280; /* 0x15048271: jmp 0x15048280 */
L_15048273:
    RECOMP_CALL(sub_15036430); /* 0x15048273: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15048278: mov dword ptr [eax], 0x16 */
L_1504827E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504827E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048280:
    esi = POP32_VAL(esp); /* 0x15048280: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15048281: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048282: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048290(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048290u);

L_15048290:
    RECOMP_CALL(sub_15036430); /* 0x15048290: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x28u; /* 0x15048295: mov dword ptr [eax], 0x28 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504829B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504829E: ret  */
    RECOMP_REGS_OUT();
}

void sub_150482B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150482B0u);

L_150482B0:
    PUSH32(esp, 0xCu); /* 0x150482B0: push 0xc */
    PUSH32(esp, 0x150B0378u); /* 0x150482B2: push 0x150b0378 */
    RECOMP_CALL(sub_1505E988); /* 0x150482B7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFEu); /* 0x150482BC: push -2 */
    ebx = POP32_VAL(esp); /* 0x150482BE: pop ebx */
    esi = ebx; /* 0x150482BF: mov esi, ebx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x150482C1: mov dword ptr [ebp - 0x1c], esi */
    eax = MEM32(0x150BEBA4); /* 0x150482C4: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x150482C9: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048303; /* 0x150482CC: jne 0x15048303 */
L_150482CE:
    PUSH32(esp, 4); /* 0x150482CE: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150482D0: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150482D5: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150482D6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504798C); /* 0x150482DA: call 0x1504798c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFCu); /* 0x150482DF: push -4 */
    edi = POP32_VAL(esp); /* 0x150482E1: pop edi */
    /* test eax, eax */ /* 0x150482E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { esi = edi; } /* 0x150482E4: cmovs esi, edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x150482E7: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x150482EA: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_150482FA); /* 0x150482ED: call 0x150482fa */
    RECOMP_FLAGS_IN();
    goto L_15048343; /* 0x150482F2: jmp 0x15048343 */
L_15048303:
    /* cmp eax, 2 */ /* 0x15048303: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048340; /* 0x15048306: jne 0x15048340 */
L_15048308:
    PUSH32(esp, 4); /* 0x15048308: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x1504830A: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504830F: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x15048310: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_15046D36); /* 0x15048317: call 0x15046d36 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFCu); /* 0x1504831C: push -4 */
    edi = POP32_VAL(esp); /* 0x1504831E: pop edi */
    /* test eax, eax */ /* 0x1504831F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { esi = edi; } /* 0x15048321: cmovs esi, edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15048324: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15048327: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_15048337); /* 0x1504832A: call 0x15048337 */
    RECOMP_FLAGS_IN();
    goto L_15048343; /* 0x1504832F: jmp 0x15048343 */
L_15048340:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x15048340: push -4 */
    edi = POP32_VAL(esp); /* 0x15048342: pop edi */
L_15048343:
    PUSH32(esp, 0); /* 0x15048343: push 0 */
    PUSH32(esp, 0); /* 0x15048345: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048347: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0140)); /* 0x1504834D: call dword ptr [0x150c0140] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15048353: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504837A; /* 0x15048355: jne 0x1504837a */
L_15048357:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15048357: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x78u); /* 0x1504835D: push 0x78 */
    ebx = POP32_VAL(esp); /* 0x1504835F: pop ebx */
    /* cmp eax, ebx */ /* 0x15048360: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048378; /* 0x15048362: jne 0x15048378 */
L_15048364:
    RECOMP_CALL(sub_150363E0); /* 0x15048364: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15048369: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x1504836B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x28u; /* 0x15048370: mov dword ptr [eax], 0x28 */
    goto L_1504837A; /* 0x15048376: jmp 0x1504837a */
L_15048378:
    esi = edi; /* 0x15048378: mov esi, edi */
L_1504837A:
    eax = esi; /* 0x1504837A: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504837C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504837F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15048386: pop ecx */
    edi = POP32_VAL(esp); /* 0x15048387: pop edi */
    esi = POP32_VAL(esp); /* 0x15048388: pop esi */
    ebx = POP32_VAL(esp); /* 0x15048389: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504838A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504838B: ret  */
    RECOMP_REGS_OUT();
}

void sub_150482FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150482FAu);

L_150482FA:
    PUSH32(esp, 4); /* 0x150482FA: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x150482FC: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048301: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048302: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048337(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048337u);

L_15048337:
    PUSH32(esp, 4); /* 0x15048337: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x15048339: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504833E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504833F: ret  */
    RECOMP_REGS_OUT();
}

void sub_150483A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150483A0u);

    goto L_150483A0;
L_150482B0:
    PUSH32(esp, 0xCu); /* 0x150482B0: push 0xc */
    PUSH32(esp, 0x150B0378u); /* 0x150482B2: push 0x150b0378 */
    RECOMP_CALL(sub_1505E988); /* 0x150482B7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFEu); /* 0x150482BC: push -2 */
    ebx = POP32_VAL(esp); /* 0x150482BE: pop ebx */
    esi = ebx; /* 0x150482BF: mov esi, ebx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x150482C1: mov dword ptr [ebp - 0x1c], esi */
    eax = MEM32(0x150BEBA4); /* 0x150482C4: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x150482C9: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048303; /* 0x150482CC: jne 0x15048303 */
L_150482CE:
    PUSH32(esp, 4); /* 0x150482CE: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150482D0: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150482D5: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150482D6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1504798C); /* 0x150482DA: call 0x1504798c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFCu); /* 0x150482DF: push -4 */
    edi = POP32_VAL(esp); /* 0x150482E1: pop edi */
    /* test eax, eax */ /* 0x150482E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { esi = edi; } /* 0x150482E4: cmovs esi, edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x150482E7: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x150482EA: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_150482FA); /* 0x150482ED: call 0x150482fa */
    RECOMP_FLAGS_IN();
    goto L_15048343; /* 0x150482F2: jmp 0x15048343 */
L_15048303:
    /* cmp eax, 2 */ /* 0x15048303: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048340; /* 0x15048306: jne 0x15048340 */
L_15048308:
    PUSH32(esp, 4); /* 0x15048308: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x1504830A: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504830F: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x15048310: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_15046D36); /* 0x15048317: call 0x15046d36 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFCu); /* 0x1504831C: push -4 */
    edi = POP32_VAL(esp); /* 0x1504831E: pop edi */
    /* test eax, eax */ /* 0x1504831F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) { esi = edi; } /* 0x15048321: cmovs esi, edi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15048324: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15048327: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_15048337); /* 0x1504832A: call 0x15048337 */
    RECOMP_FLAGS_IN();
    goto L_15048343; /* 0x1504832F: jmp 0x15048343 */
L_15048340:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x15048340: push -4 */
    edi = POP32_VAL(esp); /* 0x15048342: pop edi */
L_15048343:
    PUSH32(esp, 0); /* 0x15048343: push 0 */
    PUSH32(esp, 0); /* 0x15048345: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048347: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0140)); /* 0x1504834D: call dword ptr [0x150c0140] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15048353: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504837A; /* 0x15048355: jne 0x1504837a */
L_15048357:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15048357: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x78u); /* 0x1504835D: push 0x78 */
    ebx = POP32_VAL(esp); /* 0x1504835F: pop ebx */
    /* cmp eax, ebx */ /* 0x15048360: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048378; /* 0x15048362: jne 0x15048378 */
L_15048364:
    RECOMP_CALL(sub_150363E0); /* 0x15048364: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15048369: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x1504836B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x28u; /* 0x15048370: mov dword ptr [eax], 0x28 */
    goto L_1504837A; /* 0x15048376: jmp 0x1504837a */
L_15048378:
    esi = edi; /* 0x15048378: mov esi, edi */
L_1504837A:
    eax = esi; /* 0x1504837A: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504837C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504837F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15048386: pop ecx */
    edi = POP32_VAL(esp); /* 0x15048387: pop edi */
    esi = POP32_VAL(esp); /* 0x15048388: pop esi */
    ebx = POP32_VAL(esp); /* 0x15048389: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504838A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504838B: ret  */
L_150483A0:
    RECOMP_BACKEDGE();
    goto L_150482B0; /* 0x150483A0: jmp 0x150482b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150483B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150483B0u);

L_150483B0:
    PUSH32(esp, 8); /* 0x150483B0: push 8 */
    PUSH32(esp, 0x150B03A0u); /* 0x150483B2: push 0x150b03a0 */
    RECOMP_CALL(sub_1505E988); /* 0x150483B7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BEBA4); /* 0x150483BC: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x150483C1: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048424; /* 0x150483C4: jne 0x15048424 */
L_150483C6:
    PUSH32(esp, 4); /* 0x150483C6: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150483C8: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150483CD: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150483CE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15047D87); /* 0x150483D2: call 0x15047d87 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150483D7: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504841B); /* 0x150483DE: call 0x1504841b */
    RECOMP_FLAGS_IN();
L_150483E3:
    PUSH32(esp, 0); /* 0x150483E3: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x150483E5: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0144)); /* 0x150483EB: call dword ptr [0x150c0144] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150483F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048457; /* 0x150483F3: jne 0x15048457 */
L_150483F5:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150483F5: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x78u */ /* 0x150483FB: cmp eax, 0x78 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048416; /* 0x150483FE: jne 0x15048416 */
L_15048400:
    RECOMP_CALL(sub_150363E0); /* 0x15048400: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x78u; /* 0x15048405: mov dword ptr [eax], 0x78 */
    RECOMP_CALL(sub_15036430); /* 0x1504840B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x28u; /* 0x15048410: mov dword ptr [eax], 0x28 */
L_15048416:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15048416: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15048459; /* 0x15048419: jmp 0x15048459 */
L_15048424:
    /* cmp eax, 2 */ /* 0x15048424: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150483E3; /* 0x15048427: jne 0x150483e3 */
L_15048429:
    PUSH32(esp, 4); /* 0x15048429: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x1504842B: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048430: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x15048431: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, 0x20u); /* 0x15048438: push 0x20 */
    RECOMP_CALL(sub_15046BA5); /* 0x1504843A: call 0x15046ba5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504843F: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048440: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504844E); /* 0x15048447: call 0x1504844e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_150483E3; /* 0x1504844C: jmp 0x150483e3 */
L_15048457:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15048457: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048459:
    ecx = MEM32(ebp + (-0x10)); /* 0x15048459: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504845C: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15048463: pop ecx */
    edi = POP32_VAL(esp); /* 0x15048464: pop edi */
    esi = POP32_VAL(esp); /* 0x15048465: pop esi */
    ebx = POP32_VAL(esp); /* 0x15048466: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15048467: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048468: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504841B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504841Bu);

L_1504841B:
    PUSH32(esp, 4); /* 0x1504841B: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x1504841D: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048422: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048423: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504844E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504844Eu);

L_1504844E:
    PUSH32(esp, 4); /* 0x1504844E: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x15048450: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048455: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048456: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048470u);

L_15048470:
    RECOMP_CALL(sub_15036430); /* 0x15048470: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x28u; /* 0x15048475: mov dword ptr [eax], 0x28 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504847B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504847D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048490u);

L_15048490:
    PUSH32(esp, 0x2Cu); /* 0x15048490: push 0x2c */
    PUSH32(esp, 0x150B03C8u); /* 0x15048492: push 0x150b03c8 */
    RECOMP_CALL(sub_1505E988); /* 0x15048497: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1504849C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504849F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150484C1; /* 0x150484A1: jne 0x150484c1 */
L_150484A3:
    RECOMP_CALL(sub_15036430); /* 0x150484A3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150484A8: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150484AE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x150484B0: push ebx */
    PUSH32(esp, ebx); /* 0x150484B1: push ebx */
    PUSH32(esp, ebx); /* 0x150484B2: push ebx */
    PUSH32(esp, ebx); /* 0x150484B3: push ebx */
    PUSH32(esp, ebx); /* 0x150484B4: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x150484B5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150484BA: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0xFFFFFFFAu); /* 0x150484BD: push -6 */
    goto L_15048534; /* 0x150484BF: jmp 0x15048534 */
L_150484C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150484C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x32)) = (uint16_t)(LO16(eax)); /* 0x150484C3: mov word ptr [ebp - 0x32], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150484C7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x33)) = (uint8_t)(LO8(ebx)); /* 0x150484C9: mov byte ptr [ebp - 0x33], bl */
    eax = MEM32(esi); /* 0x150484CC: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x150484CE: mov dword ptr [ebp - 0x3c], eax */
    /* test eax, eax */ /* 0x150484D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048545; /* 0x150484D3: jne 0x15048545 */
L_150484D5:
    eax = ebp + (-0x3C); /* 0x150484D5: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x150484D8: push eax */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x150484D9: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0148)); /* 0x150484DF: call dword ptr [0x150c0148] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150484E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048510; /* 0x150484E7: jne 0x15048510 */
L_150484E9:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150484E9: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x78u); /* 0x150484EF: push 0x78 */
    esi = POP32_VAL(esp); /* 0x150484F1: pop esi */
    /* cmp eax, esi */ /* 0x150484F2: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504850C; /* 0x150484F4: jne 0x1504850c */
L_150484F6:
    RECOMP_CALL(sub_150363E0); /* 0x150484F6: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150484FB: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x150484FD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x28u; /* 0x15048502: mov dword ptr [eax], 0x28 */
L_15048508:
    PUSH32(esp, 0xFFFFFFFBu); /* 0x15048508: push -5 */
    goto L_15048534; /* 0x1504850A: jmp 0x15048534 */
L_1504850C:
    PUSH32(esp, 0xFFFFFFFDu); /* 0x1504850C: push -3 */
    goto L_15048534; /* 0x1504850E: jmp 0x15048534 */
L_15048510:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15048510: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15048512: inc edi */
    _flag_k = FK_INC;
L_15048513:
    /* test MEM8(ebp + (-0x32)), 3 */ /* 0x15048513: test byte ptr [ebp - 0x32], 3 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x32))) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504856A; /* 0x15048517: jne 0x1504856a */
L_15048519:
    ecx = MEM32(ebp + (-0x3C)); /* 0x15048519: mov ecx, dword ptr [ebp - 0x3c] */
    MEM32(esi) = ecx; /* 0x1504851C: mov dword ptr [esi], ecx */
    ecx = MEM32(ebp + (-0x38)); /* 0x1504851E: mov ecx, dword ptr [ebp - 0x38] */
    MEM32(esi + 0x4) = ecx; /* 0x15048521: mov dword ptr [esi + 4], ecx */
    edx = MEM32(ebp + (-0x32)); /* 0x15048524: mov edx, dword ptr [ebp - 0x32] */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x15048527: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x15048527: shr edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x1504852A: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x1504852C: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x8) = edx; /* 0x1504852F: mov dword ptr [ecx + 8], edx */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x15048532: push -2 */
L_15048534:
    eax = POP32_VAL(esp); /* 0x15048534: pop eax */
    ecx = MEM32(ebp + (-0x10)); /* 0x15048535: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15048538: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504853F: pop ecx */
    edi = POP32_VAL(esp); /* 0x15048540: pop edi */
    esi = POP32_VAL(esp); /* 0x15048541: pop esi */
    ebx = POP32_VAL(esp); /* 0x15048542: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15048543: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048544: ret  */
L_15048545:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15048545: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15048547: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x15048548: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504856A; /* 0x1504854B: jne 0x1504856a */
L_1504854D:
    PUSH32(esp, eax); /* 0x1504854D: push eax */
    PUSH32(esp, ebx); /* 0x1504854E: push ebx */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x1504854F: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0140)); /* 0x15048555: call dword ptr [0x150c0140] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504855B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150485E8; /* 0x1504855D: je 0x150485e8 */
L_15048563:
    PUSH32(esp, 4); /* 0x15048563: push 4 */
    eax = POP32_VAL(esp); /* 0x15048565: pop eax */
    MEM16(ebp + (-0x32)) = (uint16_t)(LO16(eax)); /* 0x15048566: mov word ptr [ebp - 0x32], ax */
L_1504856A:
    MEM32(ebp + (-0x4)) = ebx; /* 0x1504856A: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1504856D: mov dword ptr [ebp - 0x1c], ebx */
    eax = ebp + (-0x3C); /* 0x15048570: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x15048573: push eax */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048574: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0148)); /* 0x1504857A: call dword ptr [0x150c0148] */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x15048580: mov ecx, ebx */
    /* test eax, eax */ /* 0x15048582: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ecx = edi; } /* 0x15048584: cmove ecx, edi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x15048587: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504858A: mov dword ptr [ebp - 4], 0xfffffffe */
    goto L_150485BE; /* 0x15048591: jmp 0x150485be */
L_150485BE:
    /* cmp ecx, edi */ /* 0x150485BE: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150485DF; /* 0x150485C0: jne 0x150485df */
L_150485C2:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150485C2: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x103u */ /* 0x150485C8: cmp eax, 0x103 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x103u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15048508; /* 0x150485CD: je 0x15048508 */
L_150485D3:
    PUSH32(esp, 0x78u); /* 0x150485D3: push 0x78 */
    esi = POP32_VAL(esp); /* 0x150485D5: pop esi */
    /* cmp eax, esi */ /* 0x150485D6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150485E8; /* 0x150485D8: jne 0x150485e8 */
L_150485DA:
    RECOMP_BACKEDGE();
    goto L_150484F6; /* 0x150485DA: jmp 0x150484f6 */
L_150485DF:
    /* cmp ecx, 2 */ /* 0x150485DF: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048513; /* 0x150485E2: jne 0x15048513 */
L_150485E8:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x150485E8: push -4 */
    RECOMP_BACKEDGE();
    goto L_15048534; /* 0x150485EA: jmp 0x15048534 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15048600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048600u);

L_15048600:
    PUSH32(esp, 0x1Cu); /* 0x15048600: push 0x1c */
    PUSH32(esp, 0x150B03E8u); /* 0x15048602: push 0x150b03e8 */
    RECOMP_CALL(sub_1505E988); /* 0x15048607: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1504860C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504860F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048630; /* 0x15048611: jne 0x15048630 */
L_15048613:
    RECOMP_CALL(sub_15036430); /* 0x15048613: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15048618: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1504861E: push esi */
    PUSH32(esp, esi); /* 0x1504861F: push esi */
    PUSH32(esp, esi); /* 0x15048620: push esi */
    PUSH32(esp, esi); /* 0x15048621: push esi */
    PUSH32(esp, esi); /* 0x15048622: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x15048623: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15048628: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504862B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15048688; /* 0x1504862E: jmp 0x15048688 */
L_15048630:
    eax = MEM32(0x150BEBA4); /* 0x15048630: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x15048635: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150486A9; /* 0x15048638: jne 0x150486a9 */
L_1504863A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1504863A: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1504863E: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15048640: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048645: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15048646: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1504864A: push esi */
    RECOMP_CALL(sub_150475FD); /* 0x1504864B: call 0x150475fd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048650: pop ecx */
    edi = eax; /* 0x15048651: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x15048653: mov dword ptr [ebp - 0x20], edi */
    /* test edi, edi */ /* 0x15048656: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048663; /* 0x15048658: je 0x15048663 */
L_1504865A:
    ecx = MEM32(esi + (-0x4)); /* 0x1504865A: mov ecx, dword ptr [esi - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 9; /* 0x1504865D: sub ecx, 9 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x15048660: mov dword ptr [ebp - 0x1c], ecx */
L_15048663:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048663: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504869E); /* 0x1504866A: call 0x1504869e */
    RECOMP_FLAGS_IN();
L_1504866F:
    /* test edi, edi */ /* 0x1504866F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048685; /* 0x15048671: jne 0x15048685 */
L_15048673:
    PUSH32(esp, esi); /* 0x15048673: push esi */
    PUSH32(esp, 0); /* 0x15048674: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048676: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0150)); /* 0x1504867C: call dword ptr [0x150c0150] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x15048682: mov dword ptr [ebp - 0x1c], eax */
L_15048685:
    eax = MEM32(ebp + (-0x1C)); /* 0x15048685: mov eax, dword ptr [ebp - 0x1c] */
L_15048688:
    ecx = MEM32(ebp + (-0x10)); /* 0x15048688: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504868B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15048692: pop ecx */
    edi = POP32_VAL(esp); /* 0x15048693: pop edi */
    esi = POP32_VAL(esp); /* 0x15048694: pop esi */
    ebx = POP32_VAL(esp); /* 0x15048695: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15048696: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048697: ret  */
L_150486A9:
    /* cmp eax, 2 */ /* 0x150486A9: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048673; /* 0x150486AC: jne 0x15048673 */
L_150486AE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x150486AE: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x150486B2: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150486B4: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150486B9: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x150486BA: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x28); /* 0x150486C1: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150486C4: push eax */
    eax = ebp + (-0x2C); /* 0x150486C5: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x150486C8: push eax */
    PUSH32(esp, esi); /* 0x150486C9: push esi */
    RECOMP_CALL(sub_15046C73); /* 0x150486CA: call 0x15046c73 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150486CF: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x150486D2: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x150486D4: mov dword ptr [ebp - 0x24], edi */
    /* test edi, edi */ /* 0x150486D7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150486E4; /* 0x150486D9: je 0x150486e4 */
L_150486DB:
    ecx = (uint32_t)MEM8(edi); /* 0x150486DB: movzx ecx, byte ptr [edi] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x150486DE: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x150486DE: shl ecx, 4 */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x150486E1: mov dword ptr [ebp - 0x1c], ecx */
L_150486E4:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150486E4: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150486FB); /* 0x150486EB: call 0x150486fb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1504866F; /* 0x150486F0: jmp 0x1504866f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1504869E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504869Eu);

L_1504869E:
    PUSH32(esp, 4); /* 0x1504869E: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x150486A0: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150486A5: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150486A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150486FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150486FBu);

L_150486FB:
    PUSH32(esp, 4); /* 0x150486FB: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x150486FD: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048702: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048703: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048710u);

L_15048710:
    edi = edi; /* 0x15048710: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15048712: push ebp */
    ebp = esp; /* 0x15048713: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x15048715: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15048718: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1504871D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1504871F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15048722: push ebx */
    PUSH32(esp, esi); /* 0x15048723: push esi */
    PUSH32(esp, edi); /* 0x15048724: push edi */
    PUSH32(esp, 4); /* 0x15048725: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15048727: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x15048729: pop eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1504872A: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_15069EF0); /* 0x1504872D: call 0x15069ef0 */
    RECOMP_FLAGS_IN();
    eax = esp; /* 0x15048732: mov eax, esp */
    ecx = ebp + (-0x30); /* 0x15048734: lea ecx, [ebp - 0x30] */
    PUSH32(esp, 0x1Cu); /* 0x15048737: push 0x1c */
    PUSH32(esp, ecx); /* 0x15048739: push ecx */
    PUSH32(esp, eax); /* 0x1504873A: push eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1504873B: mov dword ptr [ebp - 0xc], eax */
    RECOMP_ICALL(MEM32(0x150C01B0)); /* 0x1504873E: call dword ptr [0x150c01b0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15048744: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150487D2; /* 0x15048746: je 0x150487d2 */
L_1504874C:
    eax = MEM32(ebp + (-0x2C)); /* 0x1504874C: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1504874F: mov dword ptr [ebp - 0x10], eax */
    eax = ebp + (-0x54); /* 0x15048752: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x15048755: push eax */
    RECOMP_ICALL(MEM32(0x150C0280)); /* 0x15048756: call dword ptr [0x150c0280] */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x50)); /* 0x1504875C: mov ebx, dword ptr [ebp - 0x50] */
    eax = ebp + (-0x8); /* 0x1504875F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15048762: push eax */
    RECOMP_ICALL(MEM32(0x150C020C)); /* 0x15048763: call dword ptr [0x150c020c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x15048769: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048775; /* 0x1504876C: jne 0x15048775 */
L_1504876E:
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x1504876E: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) { edi = MEM32(ebp + (-0x8)); } /* 0x15048771: cmova edi, dword ptr [ebp - 8] */
L_15048775:
    eax = ebx + (-0x1); /* 0x15048775: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15048778: add eax, edi */
    _flag_k = FK_ADD;
    esi = ebx + (-0x1); /* 0x1504877A: lea esi, [ebx - 1] */
    /* cmp eax, edi */ /* 0x1504877D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150487D2; /* 0x1504877F: jb 0x150487d2 */
L_15048781:
    esi = ~esi; /* 0x15048781: not esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x15048783: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048790; /* 0x15048785: je 0x15048790 */
L_15048787:
    ecx = eax + ebx; /* 0x15048787: lea ecx, [eax + ebx] */
    /* cmp ecx, eax */ /* 0x1504878A: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150487D2; /* 0x1504878C: jb 0x150487d2 */
L_1504878E:
    eax = ecx; /* 0x1504878E: mov eax, ecx */
L_15048790:
    edi = ebx + ebx; /* 0x15048790: lea edi, [ebx + ebx] */
    /* cmp eax, edi */ /* 0x15048793: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) { edi = eax; } /* 0x15048795: cmovae edi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    esi = esi & MEM32(ebp + (-0xC)); /* 0x15048798: and esi, dword ptr [ebp - 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x10)); /* 0x1504879B: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1504879E: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x150487A0: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp esi, eax */ /* 0x150487A2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150487D2; /* 0x150487A4: jb 0x150487d2 */
L_150487A6:
    PUSH32(esp, 4); /* 0x150487A6: push 4 */
    PUSH32(esp, 0x1000u); /* 0x150487A8: push 0x1000 */
    PUSH32(esp, edi); /* 0x150487AD: push edi */
    PUSH32(esp, esi); /* 0x150487AE: push esi */
    RECOMP_ICALL(MEM32(0x150C01B8)); /* 0x150487AF: call dword ptr [0x150c01b8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150487B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150487D2; /* 0x150487B7: je 0x150487d2 */
L_150487B9:
    eax = ebp + (-0x14); /* 0x150487B9: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x150487BC: push eax */
    PUSH32(esp, 0x104u); /* 0x150487BD: push 0x104 */
    PUSH32(esp, edi); /* 0x150487C2: push edi */
    PUSH32(esp, esi); /* 0x150487C3: push esi */
    RECOMP_ICALL(MEM32(0x150C01AC)); /* 0x150487C4: call dword ptr [0x150c01ac] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150487CA: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150487CC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150487CE: neg eax */
    _flag_k = FK_CMP;
    goto L_150487D4; /* 0x150487D0: jmp 0x150487d4 */
L_150487D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150487D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150487D4:
    esp = ebp + (-0x60); /* 0x150487D4: lea esp, [ebp - 0x60] */
    edi = POP32_VAL(esp); /* 0x150487D7: pop edi */
    esi = POP32_VAL(esp); /* 0x150487D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x150487D9: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x150487DA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150487DD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150487DF: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150487E4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150487E5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150487F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150487F0u);

L_150487F0:
    edi = edi; /* 0x150487F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150487F2: push ebp */
    ebp = esp; /* 0x150487F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150487F5: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150487F6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x4); /* 0x150487FA: lea eax, [ebp - 4] */
    PUSH32(esp, esi); /* 0x150487FD: push esi */
    PUSH32(esp, eax); /* 0x150487FE: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150487FF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15048802: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504901D); /* 0x15048805: call 0x1504901d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1504880A: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504880C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1504880F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504882B; /* 0x15048811: jne 0x1504882b */
L_15048813:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x15048813: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504882B; /* 0x15048816: je 0x1504882b */
L_15048818:
    RECOMP_CALL(sub_15036430); /* 0x15048818: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504881D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504882B; /* 0x1504881F: je 0x1504882b */
L_15048821:
    RECOMP_CALL(sub_15036430); /* 0x15048821: call 0x15036430 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x15048826: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x15048829: mov dword ptr [eax], ecx */
L_1504882B:
    eax = esi; /* 0x1504882B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1504882D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504882E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504882F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048840u);

L_15048840:
    PUSH32(esp, 0x18u); /* 0x15048840: push 0x18 */
    PUSH32(esp, 0x150B0410u); /* 0x15048842: push 0x150b0410 */
    RECOMP_CALL(sub_1505E988); /* 0x15048847: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1504884C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504884F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150488C3; /* 0x15048851: je 0x150488c3 */
L_15048853:
    eax = MEM32(0x150BEBA4); /* 0x15048853: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x15048858: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150488E4; /* 0x1504885B: jne 0x150488e4 */
L_15048861:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15048861: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x15048865: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15048867: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504886C: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1504886D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15048871: push esi */
    RECOMP_CALL(sub_150475FD); /* 0x15048872: call 0x150475fd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048877: pop ecx */
    edi = eax; /* 0x15048878: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1504887A: mov dword ptr [ebp - 0x1c], edi */
    /* test edi, edi */ /* 0x1504887D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504888A; /* 0x1504887F: je 0x1504888a */
L_15048881:
    PUSH32(esp, esi); /* 0x15048881: push esi */
    PUSH32(esp, edi); /* 0x15048882: push edi */
    RECOMP_CALL(sub_15047635); /* 0x15048883: call 0x15047635 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048888: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15048889: pop ecx */
L_1504888A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504888A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150488D9); /* 0x15048891: call 0x150488d9 */
    RECOMP_FLAGS_IN();
L_15048896:
    /* test edi, edi */ /* 0x15048896: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150488C3; /* 0x15048898: jne 0x150488c3 */
L_1504889A:
    PUSH32(esp, esi); /* 0x1504889A: push esi */
    PUSH32(esp, 0); /* 0x1504889B: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x1504889D: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x150488A3: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150488A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150488C3; /* 0x150488AB: jne 0x150488c3 */
L_150488AD:
    RECOMP_CALL(sub_15036430); /* 0x150488AD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150488B2: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150488B4: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x150488BA: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x150488BB: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488C0: pop ecx */
    MEM32(esi) = eax; /* 0x150488C1: mov dword ptr [esi], eax */
L_150488C3:
    ecx = MEM32(ebp + (-0x10)); /* 0x150488C3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150488C6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150488CD: pop ecx */
    edi = POP32_VAL(esp); /* 0x150488CE: pop edi */
    esi = POP32_VAL(esp); /* 0x150488CF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150488D0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150488D1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150488D2: ret  */
L_150488E4:
    /* cmp eax, 2 */ /* 0x150488E4: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504889A; /* 0x150488E7: jne 0x1504889a */
L_150488E9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x150488E9: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x150488ED: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150488EF: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488F4: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x150488F5: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x24); /* 0x150488FC: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x150488FF: push eax */
    eax = ebp + (-0x28); /* 0x15048900: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15048903: push eax */
    PUSH32(esp, esi); /* 0x15048904: push esi */
    RECOMP_CALL(sub_15046C73); /* 0x15048905: call 0x15046c73 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504890A: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1504890D: mov edi, eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x1504890F: mov dword ptr [ebp - 0x20], edi */
    /* test edi, edi */ /* 0x15048912: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048925; /* 0x15048914: je 0x15048925 */
L_15048916:
    PUSH32(esp, edi); /* 0x15048916: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15048917: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1504891A: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_15046CE4); /* 0x1504891D: call 0x15046ce4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15048922: add esp, 0xc */
    _flag_k = FK_ADD;
L_15048925:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048925: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504893C); /* 0x1504892C: call 0x1504893c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15048896; /* 0x15048931: jmp 0x15048896 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150488D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150488D9u);

L_150488D9:
    PUSH32(esp, 4); /* 0x150488D9: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x150488DB: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150488E0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150488E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504893C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504893Cu);

L_1504893C:
    PUSH32(esp, 4); /* 0x1504893C: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x1504893E: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048943: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048944: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504894B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504894Bu);

L_1504894B:
    PUSH32(esp, 0xCu); /* 0x1504894B: push 0xc */
    PUSH32(esp, 0x150B0458u); /* 0x1504894D: push 0x150b0458 */
    RECOMP_CALL(sub_1505E988); /* 0x15048952: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15048957: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x15048959: mov dword ptr [ebp - 0x1c], esi */
    edi = MEM32(ebp + 0x8); /* 0x1504895C: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1504895F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504896B; /* 0x15048961: je 0x1504896b */
L_15048963:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFu; /* 0x15048963: add edi, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    edi = edi & 0xFFFFFFF0u; /* 0x15048966: and edi, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504896E; /* 0x15048969: jmp 0x1504896e */
L_1504896B:
    PUSH32(esp, 0x10u); /* 0x1504896B: push 0x10 */
    edi = POP32_VAL(esp); /* 0x1504896D: pop edi */
L_1504896E:
    /* cmp edi, MEM32(0x150BCE98) */ /* 0x1504896E: cmp edi, dword ptr [0x150bce98] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BCE98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504899C; /* 0x15048974: ja 0x1504899c */
L_15048976:
    PUSH32(esp, 4); /* 0x15048976: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15048978: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504897D: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504897E: mov dword ptr [ebp - 4], esi */
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x15048981: shr edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 4u; /* 0x15048981: shr edi, 4 */
    PUSH32(esp, edi); /* 0x15048984: push edi */
    RECOMP_CALL(sub_15046844); /* 0x15048985: call 0x15046844 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504898A: pop ecx */
    esi = eax; /* 0x1504898B: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504898D: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048990: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150489B1); /* 0x15048997: call 0x150489b1 */
    RECOMP_FLAGS_IN();
L_1504899C:
    eax = esi; /* 0x1504899C: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1504899E: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150489A1: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150489A8: pop ecx */
    edi = POP32_VAL(esp); /* 0x150489A9: pop edi */
    esi = POP32_VAL(esp); /* 0x150489AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x150489AB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150489AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150489AD: ret  */
    RECOMP_REGS_OUT();
}

void sub_150489B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150489B1u);

L_150489B1:
    PUSH32(esp, 4); /* 0x150489B1: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x150489B3: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150489B8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150489B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150489C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150489C0u);

L_150489C0:
    PUSH32(esp, 0xCu); /* 0x150489C0: push 0xc */
    PUSH32(esp, 0x150B0438u); /* 0x150489C2: push 0x150b0438 */
    RECOMP_CALL(sub_1505E988); /* 0x150489C7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150489CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x150489CE: mov dword ptr [ebp - 0x1c], esi */
    edi = MEM32(ebp + 0x8); /* 0x150489D1: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, MEM32(0x150BEBA0) */ /* 0x150489D4: cmp edi, dword ptr [0x150beba0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150489FF; /* 0x150489DA: ja 0x150489ff */
L_150489DC:
    PUSH32(esp, 4); /* 0x150489DC: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150489DE: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150489E3: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x150489E4: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, edi); /* 0x150489E7: push edi */
    RECOMP_CALL(sub_1504712A); /* 0x150489E8: call 0x1504712a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150489ED: pop ecx */
    esi = eax; /* 0x150489EE: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x150489F0: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150489F3: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15048A14); /* 0x150489FA: call 0x15048a14 */
    RECOMP_FLAGS_IN();
L_150489FF:
    eax = esi; /* 0x150489FF: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15048A01: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15048A04: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15048A0B: pop ecx */
    edi = POP32_VAL(esp); /* 0x15048A0C: pop edi */
    esi = POP32_VAL(esp); /* 0x15048A0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x15048A0E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15048A0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048A10: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048A14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048A14u);

L_15048A14:
    PUSH32(esp, 4); /* 0x15048A14: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x15048A16: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048A1B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048A1C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048A30u);

L_15048A30:
    edi = edi; /* 0x15048A30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15048A32: push ebp */
    ebp = esp; /* 0x15048A33: mov ebp, esp */
    /* cmp MEM32(0x150BDB68), 0 */ /* 0x15048A35: cmp dword ptr [0x150bdb68], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDB68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048A49; /* 0x15048A3C: jne 0x15048a49 */
L_15048A3E:
    RECOMP_CALL(sub_150361D9); /* 0x15048A3E: call 0x150361d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15048A43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048A49; /* 0x15048A45: jne 0x15048a49 */
L_15048A47:
    ebp = POP32_VAL(esp); /* 0x15048A47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048A48: ret  */
L_15048A49:
    PUSH32(esp, esi); /* 0x15048A49: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15048A4A: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xFFFFFFE0u */ /* 0x15048A4D: cmp esi, -0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048AFC; /* 0x15048A50: ja 0x15048afc */
L_15048A56:
    PUSH32(esp, ebx); /* 0x15048A56: push ebx */
    PUSH32(esp, edi); /* 0x15048A57: push edi */
L_15048A58:
    /* cmp MEM32(0x150BDB68), 0 */ /* 0x15048A58: cmp dword ptr [0x150bdb68], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDB68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048A79; /* 0x15048A5F: jne 0x15048a79 */
L_15048A61:
    RECOMP_CALL(sub_15069F21); /* 0x15048A61: call 0x15069f21 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Eu); /* 0x15048A66: push 0x1e */
    RECOMP_CALL(sub_15069F60); /* 0x15048A68: call 0x15069f60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFu); /* 0x15048A6D: push 0xff */
    RECOMP_CALL(sub_15068020); /* 0x15048A72: call 0x15068020 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048A77: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15048A78: pop ecx */
L_15048A79:
    eax = MEM32(0x150BEBA4); /* 0x15048A79: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 1 */ /* 0x15048A7E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048A8A; /* 0x15048A81: jne 0x15048a8a */
L_15048A83:
    /* test esi, esi */ /* 0x15048A83: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = esi; } /* 0x15048A85: cmovne eax, esi */
    goto L_15048AB7; /* 0x15048A88: jmp 0x15048ab7 */
L_15048A8A:
    /* cmp eax, 3 */ /* 0x15048A8A: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048A97; /* 0x15048A8D: jne 0x15048a97 */
L_15048A8F:
    PUSH32(esp, esi); /* 0x15048A8F: push esi */
    RECOMP_CALL(sub_150489C0); /* 0x15048A90: call 0x150489c0 */
    RECOMP_FLAGS_IN();
    goto L_15048AA2; /* 0x15048A95: jmp 0x15048aa2 */
L_15048A97:
    /* cmp eax, 2 */ /* 0x15048A97: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048AA9; /* 0x15048A9A: jne 0x15048aa9 */
L_15048A9C:
    PUSH32(esp, esi); /* 0x15048A9C: push esi */
    RECOMP_CALL(sub_1504894B); /* 0x15048A9D: call 0x1504894b */
    RECOMP_FLAGS_IN();
L_15048AA2:
    edi = eax; /* 0x15048AA2: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15048AA4: pop ecx */
    /* test edi, edi */ /* 0x15048AA5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048AF6; /* 0x15048AA7: jne 0x15048af6 */
L_15048AA9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15048AA9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15048AAB: inc eax */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x15048AAC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { eax = esi; } /* 0x15048AAE: cmovne eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFu; /* 0x15048AB1: add eax, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x15048AB4: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048AB7:
    PUSH32(esp, eax); /* 0x15048AB7: push eax */
    PUSH32(esp, 0); /* 0x15048AB8: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048ABA: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C013C)); /* 0x15048AC0: call dword ptr [0x150c013c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048AC6: mov edi, eax */
    /* test edi, edi */ /* 0x15048AC8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048AF6; /* 0x15048ACA: jne 0x15048af6 */
L_15048ACC:
    PUSH32(esp, 0xCu); /* 0x15048ACC: push 0xc */
    ebx = POP32_VAL(esp); /* 0x15048ACE: pop ebx */
    /* cmp MEM32(0x150BDB78), eax */ /* 0x15048ACF: cmp dword ptr [0x150bdb78], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDB78)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15048AE8; /* 0x15048AD5: je 0x15048ae8 */
L_15048AD7:
    PUSH32(esp, esi); /* 0x15048AD7: push esi */
    RECOMP_CALL(sub_15046160); /* 0x15048AD8: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048ADD: pop ecx */
    /* test eax, eax */ /* 0x15048ADE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048A58; /* 0x15048AE0: jne 0x15048a58 */
L_15048AE6:
    goto L_15048AEF; /* 0x15048AE6: jmp 0x15048aef */
L_15048AE8:
    RECOMP_CALL(sub_15036430); /* 0x15048AE8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15048AED: mov dword ptr [eax], ebx */
L_15048AEF:
    RECOMP_CALL(sub_15036430); /* 0x15048AEF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x15048AF4: mov dword ptr [eax], ebx */
L_15048AF6:
    eax = edi; /* 0x15048AF6: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15048AF8: pop edi */
    ebx = POP32_VAL(esp); /* 0x15048AF9: pop ebx */
    goto L_15048B10; /* 0x15048AFA: jmp 0x15048b10 */
L_15048AFC:
    PUSH32(esp, esi); /* 0x15048AFC: push esi */
    RECOMP_CALL(sub_15046160); /* 0x15048AFD: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048B02: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x15048B03: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15048B08: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15048B0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048B10:
    esi = POP32_VAL(esp); /* 0x15048B10: pop esi */
    ebp = POP32_VAL(esp); /* 0x15048B11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048B12: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048B20u);

L_15048B20:
    PUSH32(esp, 0x1Cu); /* 0x15048B20: push 0x1c */
    PUSH32(esp, 0x150B0478u); /* 0x15048B22: push 0x150b0478 */
    RECOMP_CALL(sub_1505E988); /* 0x15048B27: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x15048B2C: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x15048B2F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048B41; /* 0x15048B31: jne 0x15048b41 */
L_15048B33:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15048B33: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_15048A30); /* 0x15048B36: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048B3B: pop ecx */
    goto L_15048EA4; /* 0x15048B3C: jmp 0x15048ea4 */
L_15048B41:
    esi = MEM32(ebp + 0xC); /* 0x15048B41: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x15048B44: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048B54; /* 0x15048B46: jne 0x15048b54 */
L_15048B48:
    PUSH32(esp, ebx); /* 0x15048B48: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x15048B49: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048B4E: pop ecx */
    goto L_15048EA2; /* 0x15048B4F: jmp 0x15048ea2 */
L_15048B54:
    eax = MEM32(0x150BEBA4); /* 0x15048B54: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x15048B59: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048CCB; /* 0x15048B5C: jne 0x15048ccb */
L_15048B62:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x15048B62: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048B66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15048B66: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048B68: mov dword ptr [ebp - 0x1c], edi */
    /* cmp esi, 0xFFFFFFE0u */ /* 0x15048B6B: cmp esi, -0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048E90; /* 0x15048B6E: ja 0x15048e90 */
L_15048B74:
    PUSH32(esp, 4); /* 0x15048B74: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15048B76: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048B7B: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edi; /* 0x15048B7C: and dword ptr [ebp - 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15048B7F: push ebx */
    RECOMP_CALL(sub_150475FD); /* 0x15048B80: call 0x150475fd */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048B85: pop ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x15048B86: mov dword ptr [ebp - 0x24], eax */
    /* test eax, eax */ /* 0x15048B89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048C34; /* 0x15048B8B: je 0x15048c34 */
L_15048B91:
    /* cmp esi, MEM32(0x150BEBA0) */ /* 0x15048B91: cmp esi, dword ptr [0x150beba0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BEBA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048BE5; /* 0x15048B97: ja 0x15048be5 */
L_15048B99:
    PUSH32(esp, esi); /* 0x15048B99: push esi */
    PUSH32(esp, ebx); /* 0x15048B9A: push ebx */
    PUSH32(esp, eax); /* 0x15048B9B: push eax */
    RECOMP_CALL(sub_15047E53); /* 0x15048B9C: call 0x15047e53 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15048BA1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15048BA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048BAF; /* 0x15048BA6: je 0x15048baf */
L_15048BA8:
    edi = ebx; /* 0x15048BA8: mov edi, ebx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048BAA: mov dword ptr [ebp - 0x1c], edi */
    goto L_15048BE5; /* 0x15048BAD: jmp 0x15048be5 */
L_15048BAF:
    PUSH32(esp, esi); /* 0x15048BAF: push esi */
    RECOMP_CALL(sub_1504712A); /* 0x15048BB0: call 0x1504712a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048BB5: pop ecx */
    edi = eax; /* 0x15048BB6: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048BB8: mov dword ptr [ebp - 0x1c], edi */
    /* test edi, edi */ /* 0x15048BBB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048BE9; /* 0x15048BBD: je 0x15048be9 */
L_15048BBF:
    edx = MEM32(ebx + (-0x4)); /* 0x15048BBF: mov edx, dword ptr [ebx - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x15048BC2: dec edx */
    _flag_k = FK_DEC;
    ecx = esi; /* 0x15048BC3: mov ecx, esi */
    /* cmp edx, esi */ /* 0x15048BC5: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { ecx = edx; } /* 0x15048BC7: cmovb ecx, edx */
    PUSH32(esp, ecx); /* 0x15048BCA: push ecx */
    PUSH32(esp, ebx); /* 0x15048BCB: push ebx */
    PUSH32(esp, edi); /* 0x15048BCC: push edi */
    RECOMP_CALL(sub_1508DBF0); /* 0x15048BCD: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15048BD2: push ebx */
    RECOMP_CALL(sub_150475FD); /* 0x15048BD3: call 0x150475fd */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = eax; /* 0x15048BD8: mov dword ptr [ebp - 0x24], eax */
    PUSH32(esp, ebx); /* 0x15048BDB: push ebx */
    PUSH32(esp, eax); /* 0x15048BDC: push eax */
    RECOMP_CALL(sub_15047635); /* 0x15048BDD: call 0x15047635 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15048BE2: add esp, 0x18 */
    _flag_k = FK_ADD;
L_15048BE5:
    /* test edi, edi */ /* 0x15048BE5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048C34; /* 0x15048BE7: jne 0x15048c34 */
L_15048BE9:
    /* test esi, esi */ /* 0x15048BE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x15048BEB: push 1 */
    eax = POP32_VAL(esp); /* 0x15048BED: pop eax */
    if (TEST_Z(_flag_a, _flag_b)) { esi = eax; } /* 0x15048BEE: cmove esi, eax */
    MEM32(ebp + 0xC) = esi; /* 0x15048BF1: mov dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFu; /* 0x15048BF4: add esi, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esi = esi & 0xFFFFFFF0u; /* 0x15048BF7: and esi, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x15048BFA: mov dword ptr [ebp + 0xc], esi */
    PUSH32(esp, esi); /* 0x15048BFD: push esi */
    PUSH32(esp, 0); /* 0x15048BFE: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048C00: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C013C)); /* 0x15048C06: call dword ptr [0x150c013c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048C0C: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048C0E: mov dword ptr [ebp - 0x1c], edi */
    /* test edi, edi */ /* 0x15048C11: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048C34; /* 0x15048C13: je 0x15048c34 */
L_15048C15:
    ecx = MEM32(ebx + (-0x4)); /* 0x15048C15: mov ecx, dword ptr [ebx - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x15048C18: dec ecx */
    _flag_k = FK_DEC;
    eax = esi; /* 0x15048C19: mov eax, esi */
    /* cmp ecx, esi */ /* 0x15048C1B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = ecx; } /* 0x15048C1D: cmovb eax, ecx */
    PUSH32(esp, eax); /* 0x15048C20: push eax */
    PUSH32(esp, ebx); /* 0x15048C21: push ebx */
    PUSH32(esp, edi); /* 0x15048C22: push edi */
    RECOMP_CALL(sub_1508DBF0); /* 0x15048C23: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15048C28: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15048C29: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_15047635); /* 0x15048C2C: call 0x15047635 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15048C31: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15048C34:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048C34: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15048CA2); /* 0x15048C3B: call 0x15048ca2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x15048C40: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x15048C43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048C6D; /* 0x15048C45: jne 0x15048c6d */
L_15048C47:
    /* test esi, esi */ /* 0x15048C47: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x15048C49: push 1 */
    eax = POP32_VAL(esp); /* 0x15048C4B: pop eax */
    if (TEST_Z(_flag_a, _flag_b)) { esi = eax; } /* 0x15048C4C: cmove esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFu; /* 0x15048C4F: add esi, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esi = esi & 0xFFFFFFF0u; /* 0x15048C52: and esi, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x15048C55: mov dword ptr [ebp + 0xc], esi */
    PUSH32(esp, esi); /* 0x15048C58: push esi */
    PUSH32(esp, ebx); /* 0x15048C59: push ebx */
    PUSH32(esp, 0); /* 0x15048C5A: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048C5C: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0138)); /* 0x15048C62: call dword ptr [0x150c0138] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048C68: mov edi, eax */
    eax = MEM32(ebp + (-0x24)); /* 0x15048C6A: mov eax, dword ptr [ebp - 0x24] */
L_15048C6D:
    /* test edi, edi */ /* 0x15048C6D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048ED8; /* 0x15048C6F: jne 0x15048ed8 */
L_15048C75:
    /* cmp MEM32(0x150BDB78), edi */ /* 0x15048C75: cmp dword ptr [0x150bdb78], edi */
    _flag_a = (uint32_t)(MEM32(0x150BDB78)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15048CAB; /* 0x15048C7B: je 0x15048cab */
L_15048C7D:
    PUSH32(esp, esi); /* 0x15048C7D: push esi */
    RECOMP_CALL(sub_15046160); /* 0x15048C7E: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048C83: pop ecx */
    /* test eax, eax */ /* 0x15048C84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048B66; /* 0x15048C86: jne 0x15048b66 */
L_15048C8C:
    RECOMP_CALL(sub_15036430); /* 0x15048C8C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x24)), edi */ /* 0x15048C91: cmp dword ptr [ebp - 0x24], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_15048E0F; /* 0x15048C94: jmp 0x15048e0f */
L_15048CAB:
    /* test edi, edi */ /* 0x15048CAB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048ED8; /* 0x15048CAD: jne 0x15048ed8 */
L_15048CB3:
    /* test eax, eax */ /* 0x15048CB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048EC2; /* 0x15048CB5: je 0x15048ec2 */
L_15048CBB:
    RECOMP_CALL(sub_15036430); /* 0x15048CBB: call 0x15036430 */
    RECOMP_FLAGS_IN();
L_15048CC0:
    MEM32(eax) = 0xCu; /* 0x15048CC0: mov dword ptr [eax], 0xc */
    goto L_15048ED8; /* 0x15048CC6: jmp 0x15048ed8 */
L_15048CCB:
    /* cmp eax, 2 */ /* 0x15048CCB: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048E52; /* 0x15048CCE: jne 0x15048e52 */
L_15048CD4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x15048CD4: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0xFFFFFFE0u */ /* 0x15048CD8: cmp esi, -0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048CE6; /* 0x15048CDB: ja 0x15048ce6 */
L_15048CDD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFu; /* 0x15048CDD: add esi, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esi = esi & 0xFFFFFFF0u; /* 0x15048CE0: and esi, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x15048CE3: mov dword ptr [ebp + 0xc], esi */
L_15048CE6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15048CE6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048CE8: mov dword ptr [ebp - 0x1c], edi */
    /* cmp esi, 0xFFFFFFE0u */ /* 0x15048CEB: cmp esi, -0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048E90; /* 0x15048CEE: ja 0x15048e90 */
L_15048CF4:
    PUSH32(esp, 4); /* 0x15048CF4: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15048CF6: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048CFB: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x15048CFC: mov dword ptr [ebp - 4], 1 */
    eax = ebp + (-0x28); /* 0x15048D03: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15048D06: push eax */
    eax = ebp + (-0x2C); /* 0x15048D07: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x15048D0A: push eax */
    PUSH32(esp, ebx); /* 0x15048D0B: push ebx */
    RECOMP_CALL(sub_15046C73); /* 0x15048D0C: call 0x15046c73 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15048D11: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x15048D14: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x15048D17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048DC7; /* 0x15048D19: je 0x15048dc7 */
L_15048D1F:
    /* cmp esi, MEM32(0x150BCE98) */ /* 0x15048D1F: cmp esi, dword ptr [0x150bce98] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BCE98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15048D80; /* 0x15048D25: jae 0x15048d80 */
L_15048D27:
    edi = esi; /* 0x15048D27: mov edi, esi */
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x15048D29: shr edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 4u; /* 0x15048D29: shr edi, 4 */
    PUSH32(esp, edi); /* 0x15048D2C: push edi */
    PUSH32(esp, eax); /* 0x15048D2D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15048D2E: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x15048D31: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_15047071); /* 0x15048D34: call 0x15047071 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15048D39: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15048D3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048D47; /* 0x15048D3E: je 0x15048d47 */
L_15048D40:
    edi = ebx; /* 0x15048D40: mov edi, ebx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048D42: mov dword ptr [ebp - 0x1c], edi */
    goto L_15048D80; /* 0x15048D45: jmp 0x15048d80 */
L_15048D47:
    PUSH32(esp, edi); /* 0x15048D47: push edi */
    RECOMP_CALL(sub_15046844); /* 0x15048D48: call 0x15046844 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048D4D: pop ecx */
    edi = eax; /* 0x15048D4E: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048D50: mov dword ptr [ebp - 0x1c], edi */
    /* test edi, edi */ /* 0x15048D53: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048D84; /* 0x15048D55: je 0x15048d84 */
L_15048D57:
    eax = MEM32(ebp + (-0x20)); /* 0x15048D57: mov eax, dword ptr [ebp - 0x20] */
    edx = (uint32_t)MEM8(eax); /* 0x15048D5A: movzx edx, byte ptr [eax] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x15048D5D: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x15048D5D: shl edx, 4 */
    ecx = esi; /* 0x15048D60: mov ecx, esi */
    /* cmp edx, esi */ /* 0x15048D62: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { ecx = edx; } /* 0x15048D64: cmovb ecx, edx */
    PUSH32(esp, ecx); /* 0x15048D67: push ecx */
    PUSH32(esp, ebx); /* 0x15048D68: push ebx */
    PUSH32(esp, edi); /* 0x15048D69: push edi */
    RECOMP_CALL(sub_1508DBF0); /* 0x15048D6A: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15048D6F: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15048D72: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x15048D75: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_15046CE4); /* 0x15048D78: call 0x15046ce4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15048D7D: add esp, 0x18 */
    _flag_k = FK_ADD;
L_15048D80:
    /* test edi, edi */ /* 0x15048D80: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048DDC; /* 0x15048D82: jne 0x15048ddc */
L_15048D84:
    PUSH32(esp, esi); /* 0x15048D84: push esi */
    PUSH32(esp, 0); /* 0x15048D85: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048D87: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C013C)); /* 0x15048D8D: call dword ptr [0x150c013c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048D93: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048D95: mov dword ptr [ebp - 0x1c], edi */
    /* test edi, edi */ /* 0x15048D98: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048DDC; /* 0x15048D9A: je 0x15048ddc */
L_15048D9C:
    eax = MEM32(ebp + (-0x20)); /* 0x15048D9C: mov eax, dword ptr [ebp - 0x20] */
    ecx = (uint32_t)MEM8(eax); /* 0x15048D9F: movzx ecx, byte ptr [eax] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x15048DA2: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x15048DA2: shl ecx, 4 */
    eax = esi; /* 0x15048DA5: mov eax, esi */
    /* cmp ecx, esi */ /* 0x15048DA7: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = ecx; } /* 0x15048DA9: cmovb eax, ecx */
    PUSH32(esp, eax); /* 0x15048DAC: push eax */
    PUSH32(esp, ebx); /* 0x15048DAD: push ebx */
    PUSH32(esp, edi); /* 0x15048DAE: push edi */
    RECOMP_CALL(sub_1508DBF0); /* 0x15048DAF: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15048DB4: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15048DB7: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x15048DBA: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_15046CE4); /* 0x15048DBD: call 0x15046ce4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15048DC2: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_15048DDC; /* 0x15048DC5: jmp 0x15048ddc */
L_15048DC7:
    PUSH32(esp, esi); /* 0x15048DC7: push esi */
    PUSH32(esp, ebx); /* 0x15048DC8: push ebx */
    PUSH32(esp, 0); /* 0x15048DC9: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048DCB: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0138)); /* 0x15048DD1: call dword ptr [0x150c0138] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048DD7: mov edi, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15048DD9: mov dword ptr [ebp - 0x1c], edi */
L_15048DDC:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15048DDC: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15048E31); /* 0x15048DE3: call 0x15048e31 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x15048DE8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048ED8; /* 0x15048DEA: jne 0x15048ed8 */
L_15048DF0:
    /* cmp MEM32(0x150BDB78), edi */ /* 0x15048DF0: cmp dword ptr [0x150bdb78], edi */
    _flag_a = (uint32_t)(MEM32(0x150BDB78)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15048E3A; /* 0x15048DF6: je 0x15048e3a */
L_15048DF8:
    PUSH32(esp, esi); /* 0x15048DF8: push esi */
    RECOMP_CALL(sub_15046160); /* 0x15048DF9: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048DFE: pop ecx */
    /* test eax, eax */ /* 0x15048DFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048CE6; /* 0x15048E01: jne 0x15048ce6 */
L_15048E07:
    RECOMP_CALL(sub_15036430); /* 0x15048E07: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), edi */ /* 0x15048E0C: cmp dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_15048E0F:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_15048E9C; /* 0x15048E0F: jne 0x15048e9c */
L_15048E15:
    esi = eax; /* 0x15048E15: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15048E17: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15048E1D: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x15048E1E: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048E23: pop ecx */
    MEM32(esi) = eax; /* 0x15048E24: mov dword ptr [esi], eax */
    goto L_15048EA2; /* 0x15048E26: jmp 0x15048ea2 */
L_15048E3A:
    /* test edi, edi */ /* 0x15048E3A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048ED8; /* 0x15048E3C: jne 0x15048ed8 */
L_15048E42:
    RECOMP_CALL(sub_15036430); /* 0x15048E42: call 0x15036430 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), edi */ /* 0x15048E47: cmp dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048CC0; /* 0x15048E4A: jne 0x15048cc0 */
L_15048E50:
    goto L_15048EC7; /* 0x15048E50: jmp 0x15048ec7 */
L_15048E52:
    /* cmp esi, 0xFFFFFFE0u */ /* 0x15048E52: cmp esi, -0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048E90; /* 0x15048E55: ja 0x15048e90 */
L_15048E57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15048E57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15048E59: inc eax */
    _flag_k = FK_INC;
L_15048E5A:
    /* test esi, esi */ /* 0x15048E5A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { esi = eax; } /* 0x15048E5C: cmove esi, eax */
    PUSH32(esp, esi); /* 0x15048E5F: push esi */
    PUSH32(esp, ebx); /* 0x15048E60: push ebx */
    PUSH32(esp, 0); /* 0x15048E61: push 0 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15048E63: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C0138)); /* 0x15048E69: call dword ptr [0x150c0138] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048E6F: mov edi, eax */
    /* test edi, edi */ /* 0x15048E71: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048ED8; /* 0x15048E73: jne 0x15048ed8 */
L_15048E75:
    /* cmp MEM32(0x150BDB78), eax */ /* 0x15048E75: cmp dword ptr [0x150bdb78], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDB78)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15048EBE; /* 0x15048E7B: je 0x15048ebe */
L_15048E7D:
    PUSH32(esp, esi); /* 0x15048E7D: push esi */
    RECOMP_CALL(sub_15046160); /* 0x15048E7E: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048E83: pop ecx */
    /* test eax, eax */ /* 0x15048E84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048EB4; /* 0x15048E86: je 0x15048eb4 */
L_15048E88:
    /* cmp esi, 0xFFFFFFE0u */ /* 0x15048E88: cmp esi, -0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x15048E8B: push 1 */
    eax = POP32_VAL(esp); /* 0x15048E8D: pop eax */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_15048E5A; /* 0x15048E8E: jbe 0x15048e5a */
L_15048E90:
    PUSH32(esp, esi); /* 0x15048E90: push esi */
    RECOMP_CALL(sub_15046160); /* 0x15048E91: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048E96: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x15048E97: call 0x15036430 */
    RECOMP_FLAGS_IN();
L_15048E9C:
    MEM32(eax) = 0xCu; /* 0x15048E9C: mov dword ptr [eax], 0xc */
L_15048EA2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15048EA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048EA4:
    ecx = MEM32(ebp + (-0x10)); /* 0x15048EA4: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15048EA7: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15048EAE: pop ecx */
    edi = POP32_VAL(esp); /* 0x15048EAF: pop edi */
    esi = POP32_VAL(esp); /* 0x15048EB0: pop esi */
    ebx = POP32_VAL(esp); /* 0x15048EB1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15048EB2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048EB3: ret  */
L_15048EB4:
    RECOMP_CALL(sub_15036430); /* 0x15048EB4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15048E15; /* 0x15048EB9: jmp 0x15048e15 */
L_15048EBE:
    /* test edi, edi */ /* 0x15048EBE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048ED8; /* 0x15048EC0: jne 0x15048ed8 */
L_15048EC2:
    RECOMP_CALL(sub_15036430); /* 0x15048EC2: call 0x15036430 */
    RECOMP_FLAGS_IN();
L_15048EC7:
    esi = eax; /* 0x15048EC7: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15048EC9: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15048ECF: push eax */
    RECOMP_CALL(sub_150364C5); /* 0x15048ED0: call 0x150364c5 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x15048ED5: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x15048ED7: pop ecx */
L_15048ED8:
    eax = edi; /* 0x15048ED8: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_15048EA4; /* 0x15048EDA: jmp 0x15048ea4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15048CA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048CA2u);

L_15048CA2:
    PUSH32(esp, 4); /* 0x15048CA2: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x15048CA4: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048CA9: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048CAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048E31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048E31u);

L_15048E31:
    PUSH32(esp, 4); /* 0x15048E31: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x15048E33: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15048E38: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048E39: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048EE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048EE2u);

L_15048EE2:
    edi = edi; /* 0x15048EE2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15048EE4: push ebp */
    ebp = esp; /* 0x15048EE5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15048EE7: push esi */
    PUSH32(esp, edi); /* 0x15048EE8: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15048EE9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048EEB:
    PUSH32(esp, 0); /* 0x15048EEB: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15048EED: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15048EF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1504901D); /* 0x15048EF3: call 0x1504901d */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048EF8: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15048EFA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x15048EFD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048F23; /* 0x15048EFF: jne 0x15048f23 */
L_15048F01:
    /* cmp MEM32(0x150BDB74), eax */ /* 0x15048F01: cmp dword ptr [0x150bdb74], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDB74)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15048F23; /* 0x15048F07: jbe 0x15048f23 */
L_15048F09:
    PUSH32(esp, esi); /* 0x15048F09: push esi */
    RECOMP_ICALL(MEM32(0x150C0274)); /* 0x15048F0A: call dword ptr [0x150c0274] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x3E8u; /* 0x15048F10: add esi, 0x3e8 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(0x150BDB74) */ /* 0x15048F16: cmp esi, dword ptr [0x150bdb74] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BDB74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048F23; /* 0x15048F1C: ja 0x15048f23 */
L_15048F1E:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15048F1E: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048EEB; /* 0x15048F21: jne 0x15048eeb */
L_15048F23:
    eax = edi; /* 0x15048F23: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15048F25: pop edi */
    esi = POP32_VAL(esp); /* 0x15048F26: pop esi */
    ebp = POP32_VAL(esp); /* 0x15048F27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048F28: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048F2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048F2Fu);

L_15048F2F:
    edi = edi; /* 0x15048F2F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15048F31: push ebp */
    ebp = esp; /* 0x15048F32: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15048F34: push ebx */
    PUSH32(esp, esi); /* 0x15048F35: push esi */
    PUSH32(esp, edi); /* 0x15048F36: push edi */
    edi = MEM32(0x150BDB74); /* 0x15048F37: mov edi, dword ptr [0x150bdb74] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15048F3D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048F3F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15048F3F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15048A30); /* 0x15048F42: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15048F47: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15048F49: pop ecx */
    /* test ebx, ebx */ /* 0x15048F4A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048F6E; /* 0x15048F4C: jne 0x15048f6e */
L_15048F4E:
    /* test edi, edi */ /* 0x15048F4E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15048F6E; /* 0x15048F50: je 0x15048f6e */
L_15048F52:
    PUSH32(esp, esi); /* 0x15048F52: push esi */
    RECOMP_ICALL(MEM32(0x150C0274)); /* 0x15048F53: call dword ptr [0x150c0274] */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x150BDB74); /* 0x15048F59: mov edi, dword ptr [0x150bdb74] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x3E8u; /* 0x15048F5F: add esi, 0x3e8 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x15048F65: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048F6E; /* 0x15048F67: ja 0x15048f6e */
L_15048F69:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15048F69: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048F3F; /* 0x15048F6C: jne 0x15048f3f */
L_15048F6E:
    edi = POP32_VAL(esp); /* 0x15048F6E: pop edi */
    esi = POP32_VAL(esp); /* 0x15048F6F: pop esi */
    eax = ebx; /* 0x15048F70: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15048F72: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15048F73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048F74: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048F7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048F7Bu);

L_15048F7B:
    edi = edi; /* 0x15048F7B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15048F7D: push ebp */
    ebp = esp; /* 0x15048F7E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15048F80: push esi */
    PUSH32(esp, edi); /* 0x15048F81: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15048F82: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048F84:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15048F84: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15048F87: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15048B20); /* 0x15048F8A: call 0x15048b20 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048F8F: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15048F91: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15048F92: pop ecx */
    /* test edi, edi */ /* 0x15048F93: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15048FBE; /* 0x15048F95: jne 0x15048fbe */
L_15048F97:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x15048F97: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15048FBE; /* 0x15048F9A: je 0x15048fbe */
L_15048F9C:
    /* cmp MEM32(0x150BDB74), eax */ /* 0x15048F9C: cmp dword ptr [0x150bdb74], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDB74)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15048FBE; /* 0x15048FA2: jbe 0x15048fbe */
L_15048FA4:
    PUSH32(esp, esi); /* 0x15048FA4: push esi */
    RECOMP_ICALL(MEM32(0x150C0274)); /* 0x15048FA5: call dword ptr [0x150c0274] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x3E8u; /* 0x15048FAB: add esi, 0x3e8 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(0x150BDB74) */ /* 0x15048FB1: cmp esi, dword ptr [0x150bdb74] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BDB74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15048FBE; /* 0x15048FB7: ja 0x15048fbe */
L_15048FB9:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15048FB9: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048F84; /* 0x15048FBC: jne 0x15048f84 */
L_15048FBE:
    eax = edi; /* 0x15048FBE: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15048FC0: pop edi */
    esi = POP32_VAL(esp); /* 0x15048FC1: pop esi */
    ebp = POP32_VAL(esp); /* 0x15048FC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15048FC3: ret  */
    RECOMP_REGS_OUT();
}

void sub_15048FCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15048FCAu);

L_15048FCA:
    edi = edi; /* 0x15048FCA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15048FCC: push ebp */
    ebp = esp; /* 0x15048FCD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15048FCF: push esi */
    PUSH32(esp, edi); /* 0x15048FD0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15048FD1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15048FD3:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15048FD3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15048FD6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15048FD9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150491BF); /* 0x15048FDC: call 0x150491bf */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15048FE1: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15048FE3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x15048FE6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049011; /* 0x15048FE8: jne 0x15049011 */
L_15048FEA:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x15048FEA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049011; /* 0x15048FED: je 0x15049011 */
L_15048FEF:
    /* cmp MEM32(0x150BDB74), eax */ /* 0x15048FEF: cmp dword ptr [0x150bdb74], eax */
    _flag_a = (uint32_t)(MEM32(0x150BDB74)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15049011; /* 0x15048FF5: jbe 0x15049011 */
L_15048FF7:
    PUSH32(esp, esi); /* 0x15048FF7: push esi */
    RECOMP_ICALL(MEM32(0x150C0274)); /* 0x15048FF8: call dword ptr [0x150c0274] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3E8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x3E8u; /* 0x15048FFE: add esi, 0x3e8 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(0x150BDB74) */ /* 0x15049004: cmp esi, dword ptr [0x150bdb74] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BDB74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15049011; /* 0x1504900A: ja 0x15049011 */
L_1504900C:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1504900C: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15048FD3; /* 0x1504900F: jne 0x15048fd3 */
L_15049011:
    eax = edi; /* 0x15049011: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15049013: pop edi */
    esi = POP32_VAL(esp); /* 0x15049014: pop esi */
    ebp = POP32_VAL(esp); /* 0x15049015: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049016: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504901D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504901Du);

L_1504901D:
    PUSH32(esp, 0x10u); /* 0x1504901D: push 0x10 */
    PUSH32(esp, 0x150B04A0u); /* 0x1504901F: push 0x150b04a0 */
    RECOMP_CALL(sub_1505E988); /* 0x15049024: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x15049029: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1504902C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049060; /* 0x1504902E: je 0x15049060 */
L_15049030:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x15049030: push -0x20 */
    eax = POP32_VAL(esp); /* 0x15049032: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15049033: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x15049035: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x15049037: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15049060; /* 0x1504903A: jae 0x15049060 */
L_1504903C:
    RECOMP_CALL(sub_15036430); /* 0x1504903C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15049041: mov dword ptr [eax], 0xc */
    PUSH32(esp, 0); /* 0x15049047: push 0 */
    PUSH32(esp, 0); /* 0x15049049: push 0 */
    PUSH32(esp, 0); /* 0x1504904B: push 0 */
    PUSH32(esp, 0); /* 0x1504904D: push 0 */
    PUSH32(esp, 0); /* 0x1504904F: push 0 */
    RECOMP_CALL(sub_1505A110); /* 0x15049051: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15049056: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15049059:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15049059: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150491A9; /* 0x1504905B: jmp 0x150491a9 */
L_15049060:
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0xC)); /* 0x15049060: imul edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20)) = edi; /* 0x15049064: mov dword ptr [ebp - 0x20], edi */
    /* cmp MEM32(0x150BDB68), 0 */ /* 0x15049067: cmp dword ptr [0x150bdb68], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDB68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049079; /* 0x1504906E: jne 0x15049079 */
L_15049070:
    RECOMP_CALL(sub_150361D9); /* 0x15049070: call 0x150361d9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15049075: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049059; /* 0x15049077: je 0x15049059 */
L_15049079:
    ebx = edi; /* 0x15049079: mov ebx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504907B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1504907D: inc eax */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x1504907E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ebx = eax; } /* 0x15049080: cmove ebx, eax */
L_15049083:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15049083: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x15049085: mov dword ptr [ebp - 0x1c], esi */
    /* cmp ebx, 0xFFFFFFE0u */ /* 0x15049088: cmp ebx, -0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15049153; /* 0x1504908B: ja 0x15049153 */
L_15049091:
    eax = MEM32(0x150BEBA4); /* 0x15049091: mov eax, dword ptr [0x150beba4] */
    /* cmp eax, 3 */ /* 0x15049096: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150490EC; /* 0x15049099: jne 0x150490ec */
L_1504909B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFu; /* 0x1504909B: add ebx, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    ebx = ebx & 0xFFFFFFF0u; /* 0x1504909E: and ebx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ebx; /* 0x150490A1: mov dword ptr [ebp + 0xc], ebx */
    /* cmp edi, MEM32(0x150BEBA0) */ /* 0x150490A4: cmp edi, dword ptr [0x150beba0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504913E; /* 0x150490AA: ja 0x1504913e */
L_150490B0:
    PUSH32(esp, 4); /* 0x150490B0: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x150490B2: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150490B7: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x150490B8: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x150490BB: push edi */
    RECOMP_CALL(sub_1504712A); /* 0x150490BC: call 0x1504712a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150490C1: pop ecx */
    esi = eax; /* 0x150490C2: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x150490C4: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150490C7: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150490E3); /* 0x150490CE: call 0x150490e3 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x150490D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049142; /* 0x150490D5: je 0x15049142 */
L_150490D7:
    PUSH32(esp, edi); /* 0x150490D7: push edi */
    goto L_15049133; /* 0x150490D8: jmp 0x15049133 */
L_150490EC:
    /* cmp eax, 2 */ /* 0x150490EC: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504913E; /* 0x150490EF: jne 0x1504913e */
L_150490F1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFu; /* 0x150490F1: add ebx, 0xf */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFF0u);
    ebx = ebx & 0xFFFFFFF0u; /* 0x150490F4: and ebx, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ebx; /* 0x150490F7: mov dword ptr [ebp + 0xc], ebx */
    /* cmp ebx, MEM32(0x150BCE98) */ /* 0x150490FA: cmp ebx, dword ptr [0x150bce98] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BCE98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504913E; /* 0x15049100: ja 0x1504913e */
L_15049102:
    PUSH32(esp, 4); /* 0x15049102: push 4 */
    RECOMP_CALL(sub_15068D80); /* 0x15049104: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049109: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1504910A: mov dword ptr [ebp - 4], 1 */
    eax = ebx; /* 0x15049111: mov eax, ebx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x15049113: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x15049113: shr eax, 4 */
    PUSH32(esp, eax); /* 0x15049116: push eax */
    RECOMP_CALL(sub_15046844); /* 0x15049117: call 0x15046844 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504911C: pop ecx */
    esi = eax; /* 0x1504911D: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504911F: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15049122: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504918D); /* 0x15049129: call 0x1504918d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1504912E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049142; /* 0x15049130: je 0x15049142 */
L_15049132:
    PUSH32(esp, ebx); /* 0x15049132: push ebx */
L_15049133:
    PUSH32(esp, 0); /* 0x15049133: push 0 */
    PUSH32(esp, esi); /* 0x15049135: push esi */
    RECOMP_CALL(sub_1508E3D0); /* 0x15049136: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504913B: add esp, 0xc */
    _flag_k = FK_ADD;
L_1504913E:
    /* test esi, esi */ /* 0x1504913E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150491A7; /* 0x15049140: jne 0x150491a7 */
L_15049142:
    PUSH32(esp, ebx); /* 0x15049142: push ebx */
    PUSH32(esp, 8); /* 0x15049143: push 8 */
    PUSH32(esp, MEM32(0x150BDB68)); /* 0x15049145: push dword ptr [0x150bdb68] */
    RECOMP_ICALL(MEM32(0x150C013C)); /* 0x1504914B: call dword ptr [0x150c013c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15049151: mov esi, eax */
L_15049153:
    /* test esi, esi */ /* 0x15049153: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150491A7; /* 0x15049155: jne 0x150491a7 */
L_15049157:
    /* cmp MEM32(0x150BDB78), esi */ /* 0x15049157: cmp dword ptr [0x150bdb78], esi */
    _flag_a = (uint32_t)(MEM32(0x150BDB78)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049196; /* 0x1504915D: je 0x15049196 */
L_1504915F:
    PUSH32(esp, ebx); /* 0x1504915F: push ebx */
    RECOMP_CALL(sub_15046160); /* 0x15049160: call 0x15046160 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049165: pop ecx */
    /* test eax, eax */ /* 0x15049166: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049083; /* 0x15049168: jne 0x15049083 */
L_1504916E:
    eax = MEM32(ebp + 0x10); /* 0x1504916E: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x15049171: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049059; /* 0x15049173: je 0x15049059 */
L_15049179:
    MEM32(eax) = 0xCu; /* 0x15049179: mov dword ptr [eax], 0xc */
    RECOMP_BACKEDGE();
    goto L_15049059; /* 0x1504917F: jmp 0x15049059 */
L_15049196:
    /* test esi, esi */ /* 0x15049196: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150491A7; /* 0x15049198: jne 0x150491a7 */
L_1504919A:
    eax = MEM32(ebp + 0x10); /* 0x1504919A: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1504919D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150491A7; /* 0x1504919F: je 0x150491a7 */
L_150491A1:
    MEM32(eax) = 0xCu; /* 0x150491A1: mov dword ptr [eax], 0xc */
L_150491A7:
    eax = esi; /* 0x150491A7: mov eax, esi */
L_150491A9:
    ecx = MEM32(ebp + (-0x10)); /* 0x150491A9: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150491AC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150491B3: pop ecx */
    edi = POP32_VAL(esp); /* 0x150491B4: pop edi */
    esi = POP32_VAL(esp); /* 0x150491B5: pop esi */
    ebx = POP32_VAL(esp); /* 0x150491B6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150491B7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150491B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150490E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150490E3u);

L_150490E3:
    PUSH32(esp, 4); /* 0x150490E3: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x150490E5: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150490EA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150490EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504918D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504918Du);

L_1504918D:
    PUSH32(esp, 4); /* 0x1504918D: push 4 */
    RECOMP_CALL(sub_15068F50); /* 0x1504918F: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049194: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049195: ret  */
    RECOMP_REGS_OUT();
}

void sub_150491BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150491BFu);

L_150491BF:
    edi = edi; /* 0x150491BF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150491C1: push ebp */
    ebp = esp; /* 0x150491C2: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x150491C4: push ebx */
    PUSH32(esp, esi); /* 0x150491C5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150491C6: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150491C9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x150491CB: push edi */
    edi = ebx; /* 0x150491CC: mov edi, ebx */
    /* test esi, esi */ /* 0x150491CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150491FA; /* 0x150491D0: je 0x150491fa */
L_150491D2:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x150491D2: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150491D4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x150491D6: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x150491D7: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x150491D9: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150491FA; /* 0x150491DC: jae 0x150491fa */
L_150491DE:
    RECOMP_CALL(sub_15036430); /* 0x150491DE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x150491E3: push ebx */
    PUSH32(esp, ebx); /* 0x150491E4: push ebx */
    PUSH32(esp, ebx); /* 0x150491E5: push ebx */
    PUSH32(esp, ebx); /* 0x150491E6: push ebx */
    PUSH32(esp, ebx); /* 0x150491E7: push ebx */
    MEM32(eax) = 0xCu; /* 0x150491E8: mov dword ptr [eax], 0xc */
    RECOMP_CALL(sub_1505A110); /* 0x150491EE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150491F3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150491F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049234; /* 0x150491F8: jmp 0x15049234 */
L_150491FA:
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x10)); /* 0x150491FA: imul esi, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0x8); /* 0x150491FE: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x15049201: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504920E; /* 0x15049203: je 0x1504920e */
L_15049205:
    PUSH32(esp, ebx); /* 0x15049205: push ebx */
    RECOMP_CALL(sub_15048600); /* 0x15049206: call 0x15048600 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504920B: pop ecx */
    edi = eax; /* 0x1504920C: mov edi, eax */
L_1504920E:
    PUSH32(esp, esi); /* 0x1504920E: push esi */
    PUSH32(esp, ebx); /* 0x1504920F: push ebx */
    RECOMP_CALL(sub_15048B20); /* 0x15049210: call 0x15048b20 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15049215: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15049217: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15049218: pop ecx */
    /* test ebx, ebx */ /* 0x15049219: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049232; /* 0x1504921B: je 0x15049232 */
L_1504921D:
    /* cmp edi, esi */ /* 0x1504921D: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15049232; /* 0x1504921F: jae 0x15049232 */
L_15049221:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x15049221: sub esi, edi */
    _flag_k = FK_CMP;
    eax = edi + ebx; /* 0x15049223: lea eax, [edi + ebx] */
    PUSH32(esp, esi); /* 0x15049226: push esi */
    PUSH32(esp, 0); /* 0x15049227: push 0 */
    PUSH32(esp, eax); /* 0x15049229: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x1504922A: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1504922F: add esp, 0xc */
    _flag_k = FK_ADD;
L_15049232:
    eax = ebx; /* 0x15049232: mov eax, ebx */
L_15049234:
    edi = POP32_VAL(esp); /* 0x15049234: pop edi */
    esi = POP32_VAL(esp); /* 0x15049235: pop esi */
    ebx = POP32_VAL(esp); /* 0x15049236: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15049237: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049238: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049240u);

L_15049240:
    PUSH32(esp, esi); /* 0x15049240: push esi */
    eax = MEM32(esp + 0x14); /* 0x15049241: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15049245: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049271; /* 0x15049247: jne 0x15049271 */
L_15049249:
    ecx = MEM32(esp + 0x10); /* 0x15049249: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x1504924D: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15049251: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x15049253: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x15049255: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x15049257: mov eax, dword ptr [esp + 8] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1504925B: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x1504925D: mov esi, eax */
    eax = ebx; /* 0x1504925F: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x15049261: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x15049265: mov ecx, eax */
    eax = esi; /* 0x15049267: mov eax, esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x15049269: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1504926D: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_150492B8; /* 0x1504926F: jmp 0x150492b8 */
L_15049271:
    ecx = eax; /* 0x15049271: mov ecx, eax */
    ebx = MEM32(esp + 0x10); /* 0x15049273: mov ebx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x15049277: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x1504927B: mov eax, dword ptr [esp + 8] */
L_1504927F:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1504927F: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1504927F: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x15049281: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15049283: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x15049283: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x15049285: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x15049287: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504927F; /* 0x15049289: jne 0x1504927f */
L_1504928B:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1504928B: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x1504928D: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x1504928F: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x15049293: mov ecx, eax */
    eax = MEM32(esp + 0x10); /* 0x15049295: mov eax, dword ptr [esp + 0x10] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x15049299: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1504929B: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_150492AD; /* 0x1504929D: jb 0x150492ad */
L_1504929F:
    /* cmp edx, MEM32(esp + 0xC) */ /* 0x1504929F: cmp edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150492AD; /* 0x150492A3: ja 0x150492ad */
L_150492A5:
    if (CMP_B(_flag_a, _flag_b)) goto L_150492B6; /* 0x150492A5: jb 0x150492b6 */
L_150492A7:
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x150492A7: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150492B6; /* 0x150492AB: jbe 0x150492b6 */
L_150492AD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150492AD: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x150492AE: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150492B2: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_150492B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150492B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150492B8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x8); /* 0x150492B8: sub eax, dword ptr [esp + 8] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0xC), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150492BC: sbb edx, dword ptr [esp + 0xc] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x150492C0: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150492C2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150492C4: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edx; /* 0x150492C7: mov ecx, edx */
    edx = ebx; /* 0x150492C9: mov edx, ebx */
    ebx = ecx; /* 0x150492CB: mov ebx, ecx */
    ecx = eax; /* 0x150492CD: mov ecx, eax */
    eax = esi; /* 0x150492CF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150492D1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x150492D2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_150492E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150492E0u);

L_150492E0:
    eax = MEM32(esp + 0x8); /* 0x150492E0: mov eax, dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x10); /* 0x150492E4: mov ecx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x150492E8: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0xC); /* 0x150492EA: mov ecx, dword ptr [esp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150492F9; /* 0x150492EE: jne 0x150492f9 */
L_150492F0:
    eax = MEM32(esp + 0x4); /* 0x150492F0: mov eax, dword ptr [esp + 4] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x150492F4: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x150492F6: ret 0x10 */
L_150492F9:
    PUSH32(esp, ebx); /* 0x150492F9: push ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x150492FA: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ebx = eax; /* 0x150492FC: mov ebx, eax */
    eax = MEM32(esp + 0x8); /* 0x150492FE: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x15049302: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15049306: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esp + 0x8); /* 0x15049308: mov eax, dword ptr [esp + 8] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ecx); /* 0x1504930C: mul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x1504930E: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x15049310: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x15049311: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_15049320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049320u);

L_15049320:
    PUSH32(esp, ebx); /* 0x15049320: push ebx */
    PUSH32(esp, esi); /* 0x15049321: push esi */
    eax = MEM32(esp + 0x18); /* 0x15049322: mov eax, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15049326: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049342; /* 0x15049328: jne 0x15049342 */
L_1504932A:
    ecx = MEM32(esp + 0x14); /* 0x1504932A: mov ecx, dword ptr [esp + 0x14] */
    eax = MEM32(esp + 0x10); /* 0x1504932E: mov eax, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15049332: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x15049334: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x15049336: mov ebx, eax */
    eax = MEM32(esp + 0xC); /* 0x15049338: mov eax, dword ptr [esp + 0xc] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1504933C: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = ebx; /* 0x1504933E: mov edx, ebx */
    goto L_15049383; /* 0x15049340: jmp 0x15049383 */
L_15049342:
    ecx = eax; /* 0x15049342: mov ecx, eax */
    ebx = MEM32(esp + 0x14); /* 0x15049344: mov ebx, dword ptr [esp + 0x14] */
    edx = MEM32(esp + 0x10); /* 0x15049348: mov edx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x1504934C: mov eax, dword ptr [esp + 0xc] */
L_15049350:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15049350: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x15049350: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x15049352: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15049354: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x15049354: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x15049356: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x15049358: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049350; /* 0x1504935A: jne 0x15049350 */
L_1504935C:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1504935C: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x1504935E: mov esi, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x18)); /* 0x15049360: mul dword ptr [esp + 0x18] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x15049364: mov ecx, eax */
    eax = MEM32(esp + 0x14); /* 0x15049366: mov eax, dword ptr [esp + 0x14] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(esi); /* 0x1504936A: mul esi */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1504936C: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_1504937E; /* 0x1504936E: jb 0x1504937e */
L_15049370:
    /* cmp edx, MEM32(esp + 0x10) */ /* 0x15049370: cmp edx, dword ptr [esp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1504937E; /* 0x15049374: ja 0x1504937e */
L_15049376:
    if (CMP_B(_flag_a, _flag_b)) goto L_1504937F; /* 0x15049376: jb 0x1504937f */
L_15049378:
    /* cmp eax, MEM32(esp + 0xC) */ /* 0x15049378: cmp eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1504937F; /* 0x1504937C: jbe 0x1504937f */
L_1504937E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1504937E: dec esi */
    _flag_k = FK_DEC;
L_1504937F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1504937F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x15049381: mov eax, esi */
L_15049383:
    esi = POP32_VAL(esp); /* 0x15049383: pop esi */
    ebx = POP32_VAL(esp); /* 0x15049384: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x15049385: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_15049390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049390u);

L_15049390:
    PUSH32(esp, ebx); /* 0x15049390: push ebx */
    eax = MEM32(esp + 0x14); /* 0x15049391: mov eax, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)((eax | eax)); _flag_b = (uint32_t)((eax | eax));
    eax = eax | eax; /* 0x15049395: or eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150493B1; /* 0x15049397: jne 0x150493b1 */
L_15049399:
    ecx = MEM32(esp + 0x10); /* 0x15049399: mov ecx, dword ptr [esp + 0x10] */
    eax = MEM32(esp + 0xC); /* 0x1504939D: mov eax, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150493A1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x150493A3: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esp + 0x8); /* 0x150493A5: mov eax, dword ptr [esp + 8] */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x150493A9: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edx; /* 0x150493AB: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150493AD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049401; /* 0x150493AF: jmp 0x15049401 */
L_150493B1:
    ecx = eax; /* 0x150493B1: mov ecx, eax */
    ebx = MEM32(esp + 0x10); /* 0x150493B3: mov ebx, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0xC); /* 0x150493B7: mov edx, dword ptr [esp + 0xc] */
    eax = MEM32(esp + 0x8); /* 0x150493BB: mov eax, dword ptr [esp + 8] */
L_150493BF:
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150493BF: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x150493BF: shr ecx, 1 */
    { uint32_t _rv = (ebx) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } ebx = _rv; } /* 0x150493C1: rcr ebx, 1 */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x150493C3: shr edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 1u; /* 0x150493C3: shr edx, 1 */
    { uint32_t _rv = (eax) & 0xFFFFFFFFu, _rn = ((1) & 31) % 33u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 31)) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } eax = _rv; } /* 0x150493C5: rcr eax, 1 */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x150493C7: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150493BF; /* 0x150493C9: jne 0x150493bf */
L_150493CB:
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x150493CB: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x150493CD: mov ecx, eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x14)); /* 0x150493CF: mul dword ptr [esp + 0x14] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    { uint32_t _tmp = ecx; /* 0x150493D3: xchg ecx, eax */
      ecx = eax;
      eax = _tmp; }
    { uint64_t _r = (uint64_t)eax * (uint32_t)(MEM32(esp + 0x10)); /* 0x150493D4: mul dword ptr [esp + 0x10] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x150493D8: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_150493EA; /* 0x150493DA: jb 0x150493ea */
L_150493DC:
    /* cmp edx, MEM32(esp + 0xC) */ /* 0x150493DC: cmp edx, dword ptr [esp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150493EA; /* 0x150493E0: ja 0x150493ea */
L_150493E2:
    if (CMP_B(_flag_a, _flag_b)) goto L_150493F2; /* 0x150493E2: jb 0x150493f2 */
L_150493E4:
    /* cmp eax, MEM32(esp + 0x8) */ /* 0x150493E4: cmp eax, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150493F2; /* 0x150493E8: jbe 0x150493f2 */
L_150493EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x10); /* 0x150493EA: sub eax, dword ptr [esp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150493EE: sbb edx, dword ptr [esp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_150493F2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(esp + 0x8); /* 0x150493F2: sub eax, dword ptr [esp + 8] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(esp + 0xC), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150493F6: sbb edx, dword ptr [esp + 0xc] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x150493FA: neg edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150493FC: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150493FE: sbb edx, 0 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_15049401:
    ebx = POP32_VAL(esp); /* 0x15049401: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x15049402: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1504940B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504940Bu);

L_1504940B:
    edi = edi; /* 0x1504940B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1504940D: push ebp */
    ebp = esp; /* 0x1504940E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x15049410: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x50); /* 0x15049413: lea eax, [ebp - 0x50] */
    PUSH32(esp, ebx); /* 0x15049416: push ebx */
    PUSH32(esp, esi); /* 0x15049417: push esi */
    PUSH32(esp, edi); /* 0x15049418: push edi */
    PUSH32(esp, eax); /* 0x15049419: push eax */
    RECOMP_ICALL(MEM32(0x150C0210)); /* 0x1504941A: call dword ptr [0x150c0210] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x24u); /* 0x15049420: push 0x24 */
    PUSH32(esp, 0x20u); /* 0x15049422: push 0x20 */
    RECOMP_CALL(sub_15048EE2); /* 0x15049424: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049429: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1504942A: pop ecx */
    /* test eax, eax */ /* 0x1504942B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049642; /* 0x1504942D: je 0x15049642 */
L_15049433:
    PUSH32(esp, 0x20u); /* 0x15049433: push 0x20 */
    ecx = eax + 0x480; /* 0x15049435: lea ecx, [eax + 0x480] */
    MEM32(0x150BEBC0) = eax; /* 0x1504943B: mov dword ptr [0x150bebc0], eax */
    edx = POP32_VAL(esp); /* 0x15049440: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15049441: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x150BEBAC) = edx; /* 0x15049443: mov dword ptr [0x150bebac], edx */
    /* cmp eax, ecx */ /* 0x15049449: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15049478; /* 0x1504944B: jae 0x15049478 */
L_1504944D:
    edx = eax + 0x5; /* 0x1504944D: lea edx, [eax + 5] */
L_15049450:
    _flag_a = (uint32_t)((MEM32(edx + (-0x5)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx + (-0x5)) | 0xFFFFFFFFu));
    MEM32(edx + (-0x5)) = MEM32(edx + (-0x5)) | 0xFFFFFFFFu; /* 0x15049450: or dword ptr [edx - 5], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edx + 0x24; /* 0x15049454: lea edx, [edx + 0x24] */
    MEM32(edx + (-0x25)) = 0x0A0A0A00u; /* 0x15049457: mov dword ptr [edx - 0x25], 0xa0a0a00 */
    ecx = edx + (-0x5); /* 0x1504945E: lea ecx, [edx - 5] */
    MEM32(edx + (-0x21)) = ebx; /* 0x15049461: mov dword ptr [edx - 0x21], ebx */
    eax = MEM32(0x150BEBC0); /* 0x15049464: mov eax, dword ptr [0x150bebc0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x480u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x480u; /* 0x15049469: add eax, 0x480 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x1504946E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15049450; /* 0x15049470: jb 0x15049450 */
L_15049472:
    edx = MEM32(0x150BEBAC); /* 0x15049472: mov edx, dword ptr [0x150bebac] */
L_15049478:
    /* cmp MEM16(ebp + (-0x1E)), LO16(ebx) */ /* 0x15049478: cmp word ptr [ebp - 0x1e], bx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x1E))) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049598; /* 0x1504947C: je 0x15049598 */
L_15049482:
    ecx = MEM32(ebp + (-0x1C)); /* 0x15049482: mov ecx, dword ptr [ebp - 0x1c] */
    /* test ecx, ecx */ /* 0x15049485: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049598; /* 0x15049487: je 0x15049598 */
L_1504948D:
    eax = MEM32(ecx); /* 0x1504948D: mov eax, dword ptr [ecx] */
    edi = 0x800u; /* 0x1504948F: mov edi, 0x800 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x15049494: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x15049497: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x15049499: mov dword ptr [ebp - 4], ecx */
    if (CMP_L(_flag_a, _flag_b)) { edi = eax; } /* 0x1504949C: cmovl edi, eax */
    MEM32(ebp + (-0xC)) = edi; /* 0x1504949F: mov dword ptr [ebp - 0xc], edi */
    esi = ecx + eax; /* 0x150494A2: lea esi, [ecx + eax] */
    MEM32(ebp + (-0x8)) = esi; /* 0x150494A5: mov dword ptr [ebp - 8], esi */
    /* cmp edx, edi */ /* 0x150494A8: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15049519; /* 0x150494AA: jge 0x15049519 */
L_150494AC:
    esi = 0x150BEBC4u; /* 0x150494AC: mov esi, 0x150bebc4 */
L_150494B1:
    PUSH32(esp, 0x24u); /* 0x150494B1: push 0x24 */
    PUSH32(esp, 0x20u); /* 0x150494B3: push 0x20 */
    RECOMP_CALL(sub_15048EE2); /* 0x150494B5: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150494BA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150494BB: pop ecx */
    /* test eax, eax */ /* 0x150494BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504950D; /* 0x150494BE: je 0x1504950d */
L_150494C0:
    edx = MEM32(0x150BEBAC); /* 0x150494C0: mov edx, dword ptr [0x150bebac] */
    ecx = eax + 0x480; /* 0x150494C6: lea ecx, [eax + 0x480] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x150494CC: add edx, 0x20 */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x150494CF: mov dword ptr [esi], eax */
    MEM32(0x150BEBAC) = edx; /* 0x150494D1: mov dword ptr [0x150bebac], edx */
    /* cmp eax, ecx */ /* 0x150494D7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15049504; /* 0x150494D9: jae 0x15049504 */
L_150494DB:
    edx = eax + 0x5; /* 0x150494DB: lea edx, [eax + 5] */
L_150494DE:
    _flag_a = (uint32_t)((MEM32(edx + (-0x5)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edx + (-0x5)) | 0xFFFFFFFFu));
    MEM32(edx + (-0x5)) = MEM32(edx + (-0x5)) | 0xFFFFFFFFu; /* 0x150494DE: or dword ptr [edx - 5], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edx + 0x24; /* 0x150494E2: lea edx, [edx + 0x24] */
    MEM32(edx + (-0x25)) = 0x0A0A0A00u; /* 0x150494E5: mov dword ptr [edx - 0x25], 0xa0a0a00 */
    eax = edx + (-0x5); /* 0x150494EC: lea eax, [edx - 5] */
    MEM32(edx + (-0x21)) = ebx; /* 0x150494EF: mov dword ptr [edx - 0x21], ebx */
    ecx = MEM32(esi); /* 0x150494F2: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x480u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x480u; /* 0x150494F4: add ecx, 0x480 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x150494FA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_150494DE; /* 0x150494FC: jb 0x150494de */
L_150494FE:
    edx = MEM32(0x150BEBAC); /* 0x150494FE: mov edx, dword ptr [0x150bebac] */
L_15049504:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15049504: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x15049507: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_150494B1; /* 0x15049509: jl 0x150494b1 */
L_1504950B:
    goto L_15049516; /* 0x1504950B: jmp 0x15049516 */
L_1504950D:
    edi = MEM32(0x150BEBAC); /* 0x1504950D: mov edi, dword ptr [0x150bebac] */
    MEM32(ebp + (-0xC)) = edi; /* 0x15049513: mov dword ptr [ebp - 0xc], edi */
L_15049516:
    ecx = MEM32(ebp + (-0x4)); /* 0x15049516: mov ecx, dword ptr [ebp - 4] */
L_15049519:
    esi = ebx; /* 0x15049519: mov esi, ebx */
    /* test edi, edi */ /* 0x1504951B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15049598; /* 0x1504951D: jle 0x15049598 */
L_1504951F:
    edx = MEM32(ebp + (-0x8)); /* 0x1504951F: mov edx, dword ptr [ebp - 8] */
L_15049522:
    /* cmp MEM32(edx), 0xFFFFFFFFu */ /* 0x15049522: cmp dword ptr [edx], -1 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049589; /* 0x15049525: je 0x15049589 */
L_15049527:
    /* cmp MEM32(edx), 0xFFFFFFFEu */ /* 0x15049527: cmp dword ptr [edx], -2 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049589; /* 0x1504952A: je 0x15049589 */
L_1504952C:
    SET_LO8(eax, MEM8(ecx)); /* 0x1504952C: mov al, byte ptr [ecx] */
    /* test LO8(eax), 1 */ /* 0x1504952E: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049589; /* 0x15049530: je 0x15049589 */
L_15049532:
    /* test LO8(eax), 8 */ /* 0x15049532: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049545; /* 0x15049534: jne 0x15049545 */
L_15049536:
    PUSH32(esp, MEM32(edx)); /* 0x15049536: push dword ptr [edx] */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x15049538: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1504953E: mov edx, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x15049541: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049586; /* 0x15049543: je 0x15049586 */
L_15049545:
    eax = esi; /* 0x15049545: mov eax, esi */
    ecx = esi; /* 0x15049547: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15049549: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x1504954C: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    edi = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x1504954F: imul edi, eax, 0x24 */
    eax = MEM32(edx); /* 0x15049552: mov eax, dword ptr [edx] */
    PUSH32(esp, 0xFA0u); /* 0x15049554: push 0xfa0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx * 4 + 0x150BEBC0));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ecx * 4 + 0x150BEBC0); /* 0x15049559: add edi, dword ptr [ecx*4 + 0x150bebc0] */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x15049560: mov dword ptr [edi], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x15049562: mov eax, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(eax)); /* 0x15049565: mov al, byte ptr [eax] */
    MEM8(edi + 0x4) = (uint8_t)(LO8(eax)); /* 0x15049567: mov byte ptr [edi + 4], al */
    eax = edi + 0xC; /* 0x1504956A: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x1504956D: push eax */
    RECOMP_ICALL(MEM32(0x150C0260)); /* 0x1504956E: call dword ptr [0x150c0260] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15049574: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049642; /* 0x15049576: je 0x15049642 */
L_1504957C:
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | 4)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | 4));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | 4; /* 0x1504957C: or dword ptr [edi + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0xC)); /* 0x15049580: mov edi, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x15049583: mov edx, dword ptr [ebp - 8] */
L_15049586:
    ecx = MEM32(ebp + (-0x4)); /* 0x15049586: mov ecx, dword ptr [ebp - 4] */
L_15049589:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15049589: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1504958A: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1504958D: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edx; /* 0x1504958E: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15049591: mov dword ptr [ebp - 4], ecx */
    /* cmp esi, edi */ /* 0x15049594: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15049522; /* 0x15049596: jl 0x15049522 */
L_15049598:
    esi = ebx; /* 0x15049598: mov esi, ebx */
L_1504959A:
    edi = MEM32(0x150BEBC0); /* 0x1504959A: mov edi, dword ptr [0x150bebc0] */
    /* cmp MEM32(esi + edi), 0xFFFFFFFFu */ /* 0x150495A0: cmp dword ptr [esi + edi], -1 */
    _flag_a = (uint32_t)(MEM32(esi + edi)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150495B3; /* 0x150495A4: je 0x150495b3 */
L_150495A6:
    /* cmp MEM32(esi + edi), 0xFFFFFFFEu */ /* 0x150495A6: cmp dword ptr [esi + edi], -2 */
    _flag_a = (uint32_t)(MEM32(esi + edi)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150495B3; /* 0x150495AA: je 0x150495b3 */
L_150495AC:
    _flag_a = (uint32_t)((MEM8(esi + edi + 0x4) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(esi + edi + 0x4) | 0x80u)) << 24;
    MEM8(esi + edi + 0x4) = (uint8_t)(MEM8(esi + edi + 0x4) | 0x80u); /* 0x150495AC: or byte ptr [esi + edi + 4], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_15049631; /* 0x150495B1: jmp 0x15049631 */
L_150495B3:
    eax = ebx + (-0x1); /* 0x150495B3: lea eax, [ebx - 1] */
    MEM8(esi + edi + 0x4) = (uint8_t)(0x81u); /* 0x150495B6: mov byte ptr [esi + edi + 4], 0x81 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150495BB: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0xFFFFFFF6u); /* 0x150495BD: push -0xa */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150495BF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF5u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFF5u; /* 0x150495C1: add eax, -0xb */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x150495C4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150495C6: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) { eax = ecx; } /* 0x150495C7: cmove eax, ecx */
    PUSH32(esp, eax); /* 0x150495CA: push eax */
    RECOMP_ICALL(MEM32(0x150C01E0)); /* 0x150495CB: call dword ptr [0x150c01e0] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x150495D1: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x150495D4: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049625; /* 0x150495D7: je 0x15049625 */
L_150495D9:
    /* test eax, eax */ /* 0x150495D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049625; /* 0x150495DB: je 0x15049625 */
L_150495DD:
    PUSH32(esp, eax); /* 0x150495DD: push eax */
    RECOMP_ICALL(MEM32(0x150C00E8)); /* 0x150495DE: call dword ptr [0x150c00e8] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150495E4: mov ecx, eax */
    /* test ecx, ecx */ /* 0x150495E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049625; /* 0x150495E8: je 0x15049625 */
L_150495EA:
    eax = MEM32(ebp + (-0xC)); /* 0x150495EA: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi + edi) = eax; /* 0x150495ED: mov dword ptr [esi + edi], eax */
    eax = (uint32_t)LO8(ecx); /* 0x150495F0: movzx eax, cl */
    /* cmp eax, 2 */ /* 0x150495F3: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150495FF; /* 0x150495F6: jne 0x150495ff */
L_150495F8:
    _flag_a = (uint32_t)((MEM8(esi + edi + 0x4) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(esi + edi + 0x4) | 0x40u)) << 24;
    MEM8(esi + edi + 0x4) = (uint8_t)(MEM8(esi + edi + 0x4) | 0x40u); /* 0x150495F8: or byte ptr [esi + edi + 4], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_15049609; /* 0x150495FD: jmp 0x15049609 */
L_150495FF:
    /* cmp eax, 3 */ /* 0x150495FF: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049609; /* 0x15049602: jne 0x15049609 */
L_15049604:
    _flag_a = (uint32_t)((MEM8(esi + edi + 0x4) | 8)) << 24; _flag_b = (uint32_t)((MEM8(esi + edi + 0x4) | 8)) << 24;
    MEM8(esi + edi + 0x4) = (uint8_t)(MEM8(esi + edi + 0x4) | 8); /* 0x15049604: or byte ptr [esi + edi + 4], 8 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_15049609:
    eax = edi + 0xC; /* 0x15049609: lea eax, [edi + 0xc] */
    PUSH32(esp, 0xFA0u); /* 0x1504960C: push 0xfa0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15049611: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15049613: push eax */
    RECOMP_ICALL(MEM32(0x150C0260)); /* 0x15049614: call dword ptr [0x150c0260] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504961A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049642; /* 0x1504961C: je 0x15049642 */
L_1504961E:
    _flag_a = (uint32_t)((MEM32(esi + edi + 0x8) | 4)); _flag_b = (uint32_t)((MEM32(esi + edi + 0x8) | 4));
    MEM32(esi + edi + 0x8) = MEM32(esi + edi + 0x8) | 4; /* 0x1504961E: or dword ptr [esi + edi + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049631; /* 0x15049623: jmp 0x15049631 */
L_15049625:
    _flag_a = (uint32_t)((MEM8(esi + edi + 0x4) | 0x40u)) << 24; _flag_b = (uint32_t)((MEM8(esi + edi + 0x4) | 0x40u)) << 24;
    MEM8(esi + edi + 0x4) = (uint8_t)(MEM8(esi + edi + 0x4) | 0x40u); /* 0x15049625: or byte ptr [esi + edi + 4], 0x40 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + edi) = 0xFFFFFFFEu; /* 0x1504962A: mov dword ptr [esi + edi], 0xfffffffe */
L_15049631:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x24u; /* 0x15049631: add esi, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15049634: inc ebx */
    _flag_k = FK_INC;
    /* cmp esi, 0x6Cu */ /* 0x15049635: cmp esi, 0x6c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1504959A; /* 0x15049638: jl 0x1504959a */
L_1504963E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504963E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049645; /* 0x15049640: jmp 0x15049645 */
L_15049642:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15049642: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15049645:
    edi = POP32_VAL(esp); /* 0x15049645: pop edi */
    esi = POP32_VAL(esp); /* 0x15049646: pop esi */
    ebx = POP32_VAL(esp); /* 0x15049647: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15049648: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049649: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049650u);

L_15049650:
    edi = edi; /* 0x15049650: mov edi, edi */
    PUSH32(esp, esi); /* 0x15049652: push esi */
    PUSH32(esp, edi); /* 0x15049653: push edi */
    edi = 0x150BEBC0u; /* 0x15049654: mov edi, 0x150bebc0 */
L_15049659:
    esi = MEM32(edi); /* 0x15049659: mov esi, dword ptr [edi] */
    /* test esi, esi */ /* 0x1504965B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049694; /* 0x1504965D: je 0x15049694 */
L_1504965F:
    eax = esi + 0x480; /* 0x1504965F: lea eax, [esi + 0x480] */
    /* cmp esi, eax */ /* 0x15049665: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1504968A; /* 0x15049667: jae 0x1504968a */
L_15049669:
    /* test MEM8(esi + 0x8), 4 */ /* 0x15049669: test byte ptr [esi + 8], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049679; /* 0x1504966D: je 0x15049679 */
L_1504966F:
    eax = esi + 0xC; /* 0x1504966F: lea eax, [esi + 0xc] */
    PUSH32(esp, eax); /* 0x15049672: push eax */
    RECOMP_ICALL(MEM32(0x150C0264)); /* 0x15049673: call dword ptr [0x150c0264] */
    RECOMP_FLAGS_IN();
L_15049679:
    ecx = MEM32(edi); /* 0x15049679: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x24u; /* 0x1504967B: add esi, 0x24 */
    _flag_k = FK_ADD;
    eax = ecx + 0x480; /* 0x1504967E: lea eax, [ecx + 0x480] */
    /* cmp esi, eax */ /* 0x15049684: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15049669; /* 0x15049686: jb 0x15049669 */
L_15049688:
    esi = ecx; /* 0x15049688: mov esi, ecx */
L_1504968A:
    PUSH32(esp, esi); /* 0x1504968A: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1504968B: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x15049690: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15049693: pop ecx */
L_15049694:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x15049694: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 0x150BECC0u */ /* 0x15049697: cmp edi, 0x150becc0 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x150BECC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15049659; /* 0x1504969D: jl 0x15049659 */
L_1504969F:
    edi = POP32_VAL(esp); /* 0x1504969F: pop edi */
    esi = POP32_VAL(esp); /* 0x150496A0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150496A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150496B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150496B0u);

L_150496B0:
    edi = edi; /* 0x150496B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150496B2: push ebp */
    ebp = esp; /* 0x150496B3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150496B5: push ecx */
    PUSH32(esp, esi); /* 0x150496B6: push esi */
    PUSH32(esp, edi); /* 0x150496B7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x150496B8: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150496BB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x150496BD: mov dword ptr [ebp - 4], esi */
    /* test edi, edi */ /* 0x150496C0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150496E7; /* 0x150496C2: jne 0x150496e7 */
L_150496C4:
    RECOMP_CALL(sub_150363E0); /* 0x150496C4: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150496C9: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x150496CB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150496D0: push esi */
    PUSH32(esp, esi); /* 0x150496D1: push esi */
    PUSH32(esp, esi); /* 0x150496D2: push esi */
    PUSH32(esp, esi); /* 0x150496D3: push esi */
    PUSH32(esp, esi); /* 0x150496D4: push esi */
    MEM32(eax) = 0x16u; /* 0x150496D5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150496DB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150496E0: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150496E3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504970A; /* 0x150496E5: jmp 0x1504970a */
L_150496E7:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x150496E7: movsx eax, byte ptr [edi] */
    ecx = ebp + (-0x4); /* 0x150496EA: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x150496ED: push ecx */
    PUSH32(esp, eax); /* 0x150496EE: push eax */
    esi = edi + 0x2; /* 0x150496EF: lea esi, [edi + 2] */
    PUSH32(esp, esi); /* 0x150496F2: push esi */
    RECOMP_CALL(sub_15049720); /* 0x150496F3: call 0x15049720 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(ebp + (-0x4))); /* 0x150496F8: mov cl, byte ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150496FB: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(edi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x150496FE: mov byte ptr [edi + 1], cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15049701: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15049703: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x15049705: cmovne esi, ecx */
    eax = esi; /* 0x15049708: mov eax, esi */
L_1504970A:
    edi = POP32_VAL(esp); /* 0x1504970A: pop edi */
    esi = POP32_VAL(esp); /* 0x1504970B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504970C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504970D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049720u);

L_15049720:
    PUSH32(esp, 0x20u); /* 0x15049720: push 0x20 */
    PUSH32(esp, 0x150B04C8u); /* 0x15049722: push 0x150b04c8 */
    RECOMP_CALL(sub_1505E988); /* 0x15049727: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1504972C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x1504972E: mov dword ptr [ebp - 0x24], ebx */
    esi = MEM32(ebp + 0x8); /* 0x15049731: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15049734: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504975D; /* 0x15049736: jne 0x1504975d */
L_15049738:
    RECOMP_CALL(sub_150363E0); /* 0x15049738: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = ebx; /* 0x1504973D: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_15036430); /* 0x1504973F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15049744: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15049746: pop esi */
    MEM32(eax) = esi; /* 0x15049747: mov dword ptr [eax], esi */
    PUSH32(esp, ebx); /* 0x15049749: push ebx */
    PUSH32(esp, ebx); /* 0x1504974A: push ebx */
    PUSH32(esp, ebx); /* 0x1504974B: push ebx */
    PUSH32(esp, ebx); /* 0x1504974C: push ebx */
    PUSH32(esp, ebx); /* 0x1504974D: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x1504974E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15049753: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15049756: mov eax, esi */
    goto L_1504980C; /* 0x15049758: jmp 0x1504980c */
L_1504975D:
    eax = MEM32(ebp + 0xC); /* 0x1504975D: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15049760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049738; /* 0x15049762: je 0x15049738 */
L_15049764:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15049764: mov byte ptr [esi], bl */
    edi = MEM32(ebp + 0x10); /* 0x15049766: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x15049769: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049738; /* 0x1504976B: je 0x15049738 */
L_1504976D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1504976D: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1504976E: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, 3); /* 0x15049771: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x15049773: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049778: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15049779: mov dword ptr [ebp - 4], ebx */
    MEM32(edi) = ebx; /* 0x1504977C: mov dword ptr [edi], ebx */
L_1504977E:
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1504977E: mov dword ptr [ebp - 0x2c], ebx */
    eax = ebp + (-0x2C); /* 0x15049781: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x15049784: push eax */
    PUSH32(esp, 2); /* 0x15049785: push 2 */
    eax = ebp + (-0x20); /* 0x15049787: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1504978A: push eax */
    RECOMP_CALL(sub_150498B0); /* 0x1504978B: call 0x150498b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15049790: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15049793: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x15049795: mov dword ptr [ebp - 0x24], edi */
    /* test edi, edi */ /* 0x15049798: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150497F1; /* 0x1504979A: jne 0x150497f1 */
L_1504979C:
    MEM32(ebp + (-0x28)) = ebx; /* 0x1504979C: mov dword ptr [ebp - 0x28], ebx */
    /* cmp MEM16(ebp + (-0x20)), LO16(eax) */ /* 0x1504979F: cmp word ptr [ebp - 0x20], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x20))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150497F1; /* 0x150497A3: je 0x150497f1 */
L_150497A5:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x150497A5: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x150497A8: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, esi); /* 0x150497AB: push esi */
    eax = ebp + (-0x28); /* 0x150497AC: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150497AF: push eax */
    RECOMP_CALL(sub_15033E20); /* 0x150497B0: call 0x15033e20 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150497B5: add esp, 0x10 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x150497B8: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x150497BA: mov dword ptr [ebp - 0x24], edi */
    /* test edi, edi */ /* 0x150497BD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150497DD; /* 0x150497BF: jne 0x150497dd */
L_150497C1:
    eax = MEM32(ebp + (-0x28)); /* 0x150497C1: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x150497C4: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x150497C6: mov dword ptr [ebp + 8], esi */
    ecx = MEM32(ebp + 0x10); /* 0x150497C9: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x150497CC: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x1C)); /* 0x150497CE: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x150497D1: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x150497D3: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + (-0x30)) = ecx; /* 0x150497D6: mov dword ptr [ebp - 0x30], ecx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1504977E; /* 0x150497D9: jne 0x1504977e */
L_150497DB:
    goto L_150497F1; /* 0x150497DB: jmp 0x150497f1 */
L_150497DD:
    SET_LO16(eax, MEM16(ebp + (-0x20))); /* 0x150497DD: mov ax, word ptr [ebp - 0x20] */
    MEM16(0x150BEBA8) = (uint16_t)(LO16(eax)); /* 0x150497E1: mov word ptr [0x150beba8], ax */
    MEM32(0x150BDB7C) = 1; /* 0x150497E7: mov dword ptr [0x150bdb7c], 1 */
L_150497F1:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150497F1: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15049824); /* 0x150497F8: call 0x15049824 */
    RECOMP_FLAGS_IN();
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150497FD: mov byte ptr [esi], bl */
    /* test edi, edi */ /* 0x150497FF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504980A; /* 0x15049801: je 0x1504980a */
L_15049803:
    RECOMP_CALL(sub_15036430); /* 0x15049803: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = edi; /* 0x15049808: mov dword ptr [eax], edi */
L_1504980A:
    eax = edi; /* 0x1504980A: mov eax, edi */
L_1504980C:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504980C: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504980F: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15049816: pop ecx */
    edi = POP32_VAL(esp); /* 0x15049817: pop edi */
    esi = POP32_VAL(esp); /* 0x15049818: pop esi */
    ebx = POP32_VAL(esp); /* 0x15049819: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504981A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504981B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049824(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049824u);

L_15049824:
    PUSH32(esp, 3); /* 0x15049824: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x15049826: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504982B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504982C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049840u);

L_15049840:
    edi = edi; /* 0x15049840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15049842: push ebp */
    ebp = esp; /* 0x15049843: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15049845: push ecx */
    PUSH32(esp, esi); /* 0x15049846: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15049847: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1504984A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049871; /* 0x1504984C: jne 0x15049871 */
L_1504984E:
    RECOMP_CALL(sub_150363E0); /* 0x1504984E: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15049853: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15049855: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1504985A: push esi */
    PUSH32(esp, esi); /* 0x1504985B: push esi */
    PUSH32(esp, esi); /* 0x1504985C: push esi */
    PUSH32(esp, esi); /* 0x1504985D: push esi */
    PUSH32(esp, esi); /* 0x1504985E: push esi */
    MEM32(eax) = 0x16u; /* 0x1504985F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15049865: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504986A: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504986D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049899; /* 0x1504986F: jmp 0x15049899 */
L_15049871:
    eax = (uint32_t)MEM16(esi); /* 0x15049871: movzx eax, word ptr [esi] */
    ecx = ebp + (-0x4); /* 0x15049874: lea ecx, [ebp - 4] */
    PUSH32(esp, edi); /* 0x15049877: push edi */
    PUSH32(esp, ecx); /* 0x15049878: push ecx */
    PUSH32(esp, eax); /* 0x15049879: push eax */
    edi = esi + 0x4; /* 0x1504987A: lea edi, [esi + 4] */
    PUSH32(esp, edi); /* 0x1504987D: push edi */
    RECOMP_CALL(sub_150498B0); /* 0x1504987E: call 0x150498b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15049883: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15049886: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504988E; /* 0x15049888: je 0x1504988e */
L_1504988A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1504988A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049898; /* 0x1504988C: jmp 0x15049898 */
L_1504988E:
    SET_LO16(ecx, MEM16(ebp + (-0x4))); /* 0x1504988E: mov cx, word ptr [ebp - 4] */
    eax = edi; /* 0x15049892: mov eax, edi */
    MEM16(esi + 0x2) = (uint16_t)(LO16(ecx)); /* 0x15049894: mov word ptr [esi + 2], cx */
L_15049898:
    edi = POP32_VAL(esp); /* 0x15049898: pop edi */
L_15049899:
    esi = POP32_VAL(esp); /* 0x15049899: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504989A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504989B: ret  */
    RECOMP_REGS_OUT();
}

void sub_150498B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150498B0u);

L_150498B0:
    PUSH32(esp, 0x14u); /* 0x150498B0: push 0x14 */
    PUSH32(esp, 0x150B04E8u); /* 0x150498B2: push 0x150b04e8 */
    RECOMP_CALL(sub_1505E988); /* 0x150498B7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150498BC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x150498BE: mov dword ptr [ebp - 0x1c], esi */
    ebx = MEM32(ebp + 0x8); /* 0x150498C1: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x150498C4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150498ED; /* 0x150498C6: jne 0x150498ed */
L_150498C8:
    RECOMP_CALL(sub_150363E0); /* 0x150498C8: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x150498CD: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x150498CF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150498D4: push 0x16 */
    edi = POP32_VAL(esp); /* 0x150498D6: pop edi */
    MEM32(eax) = edi; /* 0x150498D7: mov dword ptr [eax], edi */
    PUSH32(esp, esi); /* 0x150498D9: push esi */
    PUSH32(esp, esi); /* 0x150498DA: push esi */
    PUSH32(esp, esi); /* 0x150498DB: push esi */
    PUSH32(esp, esi); /* 0x150498DC: push esi */
    PUSH32(esp, esi); /* 0x150498DD: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x150498DE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150498E3: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x150498E6: mov eax, edi */
    goto L_15049A53; /* 0x150498E8: jmp 0x15049a53 */
L_150498ED:
    edi = MEM32(ebp + 0xC); /* 0x150498ED: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x150498F0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150498C8; /* 0x150498F2: je 0x150498c8 */
L_150498F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150498F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x150498F6: mov word ptr [ebx], ax */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x150498F9: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150498C8; /* 0x150498FC: je 0x150498c8 */
L_150498FE:
    PUSH32(esp, 3); /* 0x150498FE: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x15049900: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049905: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15049906: mov dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15049909: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edi; /* 0x1504990A: mov dword ptr [ebp + 0xc], edi */
    ecx = MEM32(ebp + 0x10); /* 0x1504990D: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = esi; /* 0x15049910: mov dword ptr [ecx], esi */
    /* cmp MEM32(0x150BDB7C), 0 */ /* 0x15049912: cmp dword ptr [0x150bdb7c], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDB7C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1504994D; /* 0x15049919: je 0x1504994d */
L_1504991B:
    /* test edi, edi */ /* 0x1504991B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049A3A; /* 0x1504991D: je 0x15049a3a */
L_15049923:
    SET_LO16(eax, MEM16(0x150BEBA8)); /* 0x15049923: mov ax, word ptr [0x150beba8] */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x15049929: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1504992C: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x1504992F: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15049932: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(0x150BEBA8) = (uint16_t)(LO16(eax)); /* 0x15049934: mov word ptr [0x150beba8], ax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1504993A: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edi; /* 0x1504993B: mov dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1504993E: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    /* cmp MEM16(0x150BEBA8), LO16(eax) */ /* 0x15049940: cmp word ptr [0x150beba8], ax */
    _flag_a = (uint32_t)(MEM16(0x150BEBA8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) { edi = eax; } /* 0x15049947: cmove edi, eax */
    MEM32(ebp + 0xC) = edi; /* 0x1504994A: mov dword ptr [ebp + 0xc], edi */
L_1504994D:
    /* test edi, edi */ /* 0x1504994D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049A3A; /* 0x1504994F: je 0x15049a3a */
L_15049955:
    eax = MEM32(0x150BCED0); /* 0x15049955: mov eax, dword ptr [0x150bced0] */
    /* cmp eax, 0xFFFFFFFEu */ /* 0x1504995A: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049969; /* 0x1504995D: jne 0x15049969 */
L_1504995F:
    RECOMP_CALL(sub_1504F773); /* 0x1504995F: call 0x1504f773 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x150BCED0); /* 0x15049964: mov eax, dword ptr [0x150bced0] */
L_15049969:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15049969: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049A23; /* 0x1504996C: je 0x15049a23 */
L_15049972:
    ecx = ebp + (-0x24); /* 0x15049972: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x15049975: push ecx */
    PUSH32(esp, eax); /* 0x15049976: push eax */
    RECOMP_ICALL(MEM32(0x150C0020)); /* 0x15049977: call dword ptr [0x150c0020] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1504997D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049A23; /* 0x1504997F: je 0x15049a23 */
L_15049985:
    PUSH32(esp, 7); /* 0x15049985: push 7 */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x15049987: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0030)); /* 0x1504998D: call dword ptr [0x150c0030] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15049993: push esi */
    eax = ebp + (-0x20); /* 0x15049994: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x15049997: push eax */
    PUSH32(esp, edi); /* 0x15049998: push edi */
    PUSH32(esp, ebx); /* 0x15049999: push ebx */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x1504999A: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0010)); /* 0x150499A0: call dword ptr [0x150c0010] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150499A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049A12; /* 0x150499A8: je 0x15049a12 */
L_150499AA:
    ecx = MEM32(ebp + (-0x20)); /* 0x150499AA: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0xDu); /* 0x150499AD: push 0xd */
    eax = POP32_VAL(esp); /* 0x150499AF: pop eax */
    /* cmp ecx, 2 */ /* 0x150499B0: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150499CD; /* 0x150499B3: jb 0x150499cd */
L_150499B5:
    /* cmp MEM16(ebx + ecx * 2 + (-0x4)), LO16(eax) */ /* 0x150499B5: cmp word ptr [ebx + ecx*2 - 4], ax */
    _flag_a = (uint32_t)(MEM16(ebx + ecx * 2 + (-0x4))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150499CD; /* 0x150499BA: jne 0x150499cd */
L_150499BC:
    eax = ecx + (-0x2); /* 0x150499BC: lea eax, [ecx - 2] */
    edx = MEM32(ebp + 0x10); /* 0x150499BF: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x150499C2: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150499C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + ecx * 2 + (-0x4)) = (uint16_t)(LO16(eax)); /* 0x150499C6: mov word ptr [ebx + ecx*2 - 4], ax */
    goto L_15049A12; /* 0x150499CB: jmp 0x15049a12 */
L_150499CD:
    /* cmp ecx, edi */ /* 0x150499CD: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150499EE; /* 0x150499CF: jne 0x150499ee */
L_150499D1:
    /* cmp ecx, 1 */ /* 0x150499D1: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15049A07; /* 0x150499D4: jb 0x15049a07 */
L_150499D6:
    /* cmp MEM16(ebx + ecx * 2 + (-0x2)), LO16(eax) */ /* 0x150499D6: cmp word ptr [ebx + ecx*2 - 2], ax */
    _flag_a = (uint32_t)(MEM16(ebx + ecx * 2 + (-0x2))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150499EE; /* 0x150499DB: jne 0x150499ee */
L_150499DD:
    eax = ecx + (-0x1); /* 0x150499DD: lea eax, [ecx - 1] */
    edx = MEM32(ebp + 0x10); /* 0x150499E0: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + eax; /* 0x150499E3: add dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150499E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + ecx * 2 + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x150499E7: mov word ptr [ebx + ecx*2 - 2], ax */
    goto L_15049A12; /* 0x150499EC: jmp 0x15049a12 */
L_150499EE:
    /* cmp ecx, 1 */ /* 0x150499EE: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049A07; /* 0x150499F1: jne 0x15049a07 */
L_150499F3:
    /* cmp MEM16(ebx), 0xAu */ /* 0x150499F3: cmp word ptr [ebx], 0xa */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(0xAu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049A07; /* 0x150499F7: jne 0x15049a07 */
L_150499F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150499F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x150499FB: mov word ptr [ebx], ax */
    edx = MEM32(ebp + 0x10); /* 0x150499FE: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(edx); /* 0x15049A01: mov eax, dword ptr [edx] */
    MEM32(edx) = eax; /* 0x15049A03: mov dword ptr [edx], eax */
    goto L_15049A12; /* 0x15049A05: jmp 0x15049a12 */
L_15049A07:
    edx = MEM32(ebp + 0x10); /* 0x15049A07: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + ecx; /* 0x15049A0A: add dword ptr [edx], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15049A0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x15049A0E: mov word ptr [ebx + ecx*2], ax */
L_15049A12:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15049A12: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(0x150BCED0)); /* 0x15049A15: push dword ptr [0x150bced0] */
    RECOMP_ICALL(MEM32(0x150C0030)); /* 0x15049A1B: call dword ptr [0x150c0030] */
    RECOMP_FLAGS_IN();
    goto L_15049A3A; /* 0x15049A21: jmp 0x15049a3a */
L_15049A23:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15049A23: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15049A29: push eax */
    RECOMP_CALL(sub_150363FB); /* 0x15049A2A: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049A2F: pop ecx */
    RECOMP_CALL(sub_15036430); /* 0x15049A30: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x15049A35: mov esi, dword ptr [eax] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15049A37: mov dword ptr [ebp - 0x1c], esi */
L_15049A3A:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15049A3A: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15049A66); /* 0x15049A41: call 0x15049a66 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x15049A46: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049A51; /* 0x15049A48: je 0x15049a51 */
L_15049A4A:
    RECOMP_CALL(sub_15036430); /* 0x15049A4A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15049A4F: mov dword ptr [eax], esi */
L_15049A51:
    eax = esi; /* 0x15049A51: mov eax, esi */
L_15049A53:
    ecx = MEM32(ebp + (-0x10)); /* 0x15049A53: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15049A56: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15049A5D: pop ecx */
    edi = POP32_VAL(esp); /* 0x15049A5E: pop edi */
    esi = POP32_VAL(esp); /* 0x15049A5F: pop esi */
    ebx = POP32_VAL(esp); /* 0x15049A60: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15049A61: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049A62: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049A66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049A66u);

L_15049A66:
    PUSH32(esp, 3); /* 0x15049A66: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x15049A68: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049A6D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049A6E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049A80u);

L_15049A80:
    edi = edi; /* 0x15049A80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15049A82: push ebp */
    ebp = esp; /* 0x15049A83: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15049A85: mov eax, dword ptr [ebp + 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15049A88: cdq  */
    PUSH32(esp, edx); /* 0x15049A89: push edx */
    PUSH32(esp, eax); /* 0x15049A8A: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15049A8B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15049C50); /* 0x15049A8E: call 0x15049c50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15049A93: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15049A96: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15049A98: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = POP32_VAL(esp); /* 0x15049A9A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049A9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049AA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049AA2u);

L_15049AA2:
    edi = edi; /* 0x15049AA2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15049AA4: push ebp */
    ebp = esp; /* 0x15049AA5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15049AA7: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15049AAA: push ebx */
    PUSH32(esp, esi); /* 0x15049AAB: push esi */
    PUSH32(esp, edi); /* 0x15049AAC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15049AAD: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15049AB0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x15049AB2: push 1 */
    PUSH32(esp, ebx); /* 0x15049AB4: push ebx */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x15049AB5: xorps xmm0, xmm0 */
    PUSH32(esp, ebx); /* 0x15049AB8: push ebx */
    PUSH32(esp, edi); /* 0x15049AB9: push edi */
    MEM64(ebp + (-0x18)) = _xmm[0].u64[0]; /* 0x15049ABA: movlpd qword ptr [ebp - 0x18], xmm0 */
    RECOMP_CALL(sub_1504C7BB); /* 0x15049ABF: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15049AC4: mov ecx, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x15049AC6: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x15049AC9: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x15049ACB: mov dword ptr [ebp - 0xc], edx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15049ACE: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x15049AD1: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049B2C; /* 0x15049AD4: je 0x15049b2c */
L_15049AD6:
    PUSH32(esp, 2); /* 0x15049AD6: push 2 */
    PUSH32(esp, ebx); /* 0x15049AD8: push ebx */
    PUSH32(esp, ebx); /* 0x15049AD9: push ebx */
    PUSH32(esp, edi); /* 0x15049ADA: push edi */
    RECOMP_CALL(sub_1504C7BB); /* 0x15049ADB: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15049AE0: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15049AE2: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x15049AE5: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0xFFFFFFFFu */ /* 0x15049AE7: cmp ecx, -1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049B2C; /* 0x15049AEA: je 0x15049b2c */
L_15049AEC:
    esi = MEM32(ebp + 0xC); /* 0x15049AEC: mov esi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x15049AEF: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x15049AF2: sub esi, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15049AF4: sbb ebx, edx */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_15049BE7; /* 0x15049AF6: js 0x15049be7 */
L_15049AFC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_15049B06; /* 0x15049AFC: jg 0x15049b06 */
L_15049AFE:
    /* test esi, esi */ /* 0x15049AFE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049BE7; /* 0x15049B00: je 0x15049be7 */
L_15049B06:
    PUSH32(esp, 0x1000u); /* 0x15049B06: push 0x1000 */
    PUSH32(esp, 8); /* 0x15049B0B: push 8 */
    RECOMP_ICALL(MEM32(0x150C014C)); /* 0x15049B0D: call dword ptr [0x150c014c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15049B13: push eax */
    RECOMP_ICALL(MEM32(0x150C013C)); /* 0x15049B14: call dword ptr [0x150c013c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x15049B1A: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x15049B1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049B38; /* 0x15049B1F: jne 0x15049b38 */
L_15049B21:
    RECOMP_CALL(sub_15036430); /* 0x15049B21: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x15049B26: mov dword ptr [eax], 0xc */
L_15049B2C:
    RECOMP_CALL(sub_15036430); /* 0x15049B2C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax); /* 0x15049B31: mov eax, dword ptr [eax] */
L_15049B33:
    edi = POP32_VAL(esp); /* 0x15049B33: pop edi */
    esi = POP32_VAL(esp); /* 0x15049B34: pop esi */
    ebx = POP32_VAL(esp); /* 0x15049B35: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15049B36: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049B37: ret  */
L_15049B38:
    PUSH32(esp, 0x8000u); /* 0x15049B38: push 0x8000 */
    PUSH32(esp, edi); /* 0x15049B3D: push edi */
    RECOMP_CALL(sub_1504B96E); /* 0x15049B3E: call 0x1504b96e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049B43: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15049B44: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x15049B45: mov dword ptr [ebp - 8], eax */
L_15049B48:
    /* test ebx, ebx */ /* 0x15049B48: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049B56; /* 0x15049B4A: jne 0x15049b56 */
L_15049B4C:
    eax = esi; /* 0x15049B4C: mov eax, esi */
    /* cmp esi, 0x1000u */ /* 0x15049B4E: cmp esi, 0x1000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15049B5B; /* 0x15049B54: jb 0x15049b5b */
L_15049B56:
    eax = 0x1000u; /* 0x15049B56: mov eax, 0x1000 */
L_15049B5B:
    PUSH32(esp, eax); /* 0x15049B5B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15049B5C: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x15049B5F: push edi */
    RECOMP_CALL(sub_1504EED1); /* 0x15049B60: call 0x1504eed1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15049B65: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15049B68: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049B82; /* 0x15049B6B: je 0x15049b82 */
L_15049B6D:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15049B6D: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x15049B6E: sub esi, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15049B70: sbb ebx, edx */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_15049B7A; /* 0x15049B72: js 0x15049b7a */
L_15049B74:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_G, _cf)) goto L_15049B48; /* 0x15049B74: jg 0x15049b48 */
L_15049B76:
    /* test esi, esi */ /* 0x15049B76: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049B48; /* 0x15049B78: jne 0x15049b48 */
L_15049B7A:
    ebx = MEM32(ebp + (-0x14)); /* 0x15049B7A: mov ebx, dword ptr [ebp - 0x14] */
    esi = MEM32(ebp + (-0x18)); /* 0x15049B7D: mov esi, dword ptr [ebp - 0x18] */
    goto L_15049B9C; /* 0x15049B80: jmp 0x15049b9c */
L_15049B82:
    RECOMP_CALL(sub_150363E0); /* 0x15049B82: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax), 5 */ /* 0x15049B87: cmp dword ptr [eax], 5 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049B97; /* 0x15049B8A: jne 0x15049b97 */
L_15049B8C:
    RECOMP_CALL(sub_15036430); /* 0x15049B8C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x15049B91: mov dword ptr [eax], 0xd */
L_15049B97:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15049B97: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | esi)); _flag_b = (uint32_t)((ebx | esi));
    ebx = ebx | esi; /* 0x15049B9A: or ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15049B9C:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15049B9C: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x15049B9F: push edi */
    RECOMP_CALL(sub_1504B96E); /* 0x15049BA0: call 0x1504b96e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049BA5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15049BA6: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15049BA7: push dword ptr [ebp - 4] */
    PUSH32(esp, 0); /* 0x15049BAA: push 0 */
    RECOMP_ICALL(MEM32(0x150C014C)); /* 0x15049BAC: call dword ptr [0x150c014c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x15049BB2: push eax */
    RECOMP_ICALL(MEM32(0x150C0154)); /* 0x15049BB3: call dword ptr [0x150c0154] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    esi = esi & ebx; /* 0x15049BB9: and esi, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15049BBB: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049B2C; /* 0x15049BBE: je 0x15049b2c */
L_15049BC4:
    PUSH32(esp, 0); /* 0x15049BC4: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x15049BC6: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x15049BC9: push dword ptr [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x15049BCC: push edi */
    RECOMP_CALL(sub_1504C7BB); /* 0x15049BCD: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x15049BD2: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15049BD4: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15049BD7: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049B2C; /* 0x15049BDA: je 0x15049b2c */
L_15049BE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15049BE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15049B33; /* 0x15049BE2: jmp 0x15049b33 */
L_15049BE7:
    /* test ebx, ebx */ /* 0x15049BE7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15049BC4; /* 0x15049BE9: jg 0x15049bc4 */
L_15049BEB:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15049BF1; /* 0x15049BEB: jl 0x15049bf1 */
L_15049BED:
    /* test esi, esi */ /* 0x15049BED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (1) goto L_15049BC4; /* 0x15049BEF: jae 0x15049bc4 */
L_15049BF1:
    PUSH32(esp, 0); /* 0x15049BF1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15049BF3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15049BF6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15049BF9: push edi */
    RECOMP_CALL(sub_1504C7BB); /* 0x15049BFA: call 0x1504c7bb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x15049BFF: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15049C01: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15049C04: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049B2C; /* 0x15049C07: je 0x15049b2c */
L_15049C0D:
    PUSH32(esp, edi); /* 0x15049C0D: push edi */
    RECOMP_CALL(sub_1504BD60); /* 0x15049C0E: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049C13: pop ecx */
    PUSH32(esp, eax); /* 0x15049C14: push eax */
    RECOMP_ICALL(MEM32(0x150C00EC)); /* 0x15049C15: call dword ptr [0x150c00ec] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15049C1B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15049C1D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15049C1F: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15049C21: dec eax */
    _flag_k = FK_DEC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15049C22: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x15049C23: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15049C25: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049BC4; /* 0x15049C28: jne 0x15049bc4 */
L_15049C2A:
    RECOMP_CALL(sub_15036430); /* 0x15049C2A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xDu; /* 0x15049C2F: mov dword ptr [eax], 0xd */
    RECOMP_CALL(sub_150363E0); /* 0x15049C35: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15049C3A: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15049C3C: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x15049C42: mov dword ptr [esi], eax */
    RECOMP_BACKEDGE();
    goto L_15049B2C; /* 0x15049C44: jmp 0x15049b2c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15049C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049C50u);

L_15049C50:
    PUSH32(esp, 0x10u); /* 0x15049C50: push 0x10 */
    PUSH32(esp, 0x150B0508u); /* 0x15049C52: push 0x150b0508 */
    RECOMP_CALL(sub_1505E988); /* 0x15049C57: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x15049C5C: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0xFFFFFFFEu */ /* 0x15049C5F: cmp ebx, -2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049C71; /* 0x15049C62: jne 0x15049c71 */
L_15049C64:
    RECOMP_CALL(sub_150363E0); /* 0x15049C64: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15049C69: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 9); /* 0x15049C6C: push 9 */
    eax = POP32_VAL(esp); /* 0x15049C6E: pop eax */
    goto L_15049CB1; /* 0x15049C6F: jmp 0x15049cb1 */
L_15049C71:
    /* test ebx, ebx */ /* 0x15049C71: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15049C86; /* 0x15049C73: js 0x15049c86 */
L_15049C75:
    /* cmp ebx, MEM32(0x150BEBAC) */ /* 0x15049C75: cmp ebx, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15049C86; /* 0x15049C7B: jae 0x15049c86 */
L_15049C7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15049C7D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15049C7F: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x15049C80: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15049C82: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049C8D; /* 0x15049C84: jmp 0x15049c8d */
L_15049C86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15049C86: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x15049C88: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15049C8A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15049C8C: inc ecx */
    _flag_k = FK_INC;
L_15049C8D:
    /* test eax, eax */ /* 0x15049C8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049CC1; /* 0x15049C8F: jne 0x15049cc1 */
L_15049C91:
    RECOMP_CALL(sub_150363E0); /* 0x15049C91: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15049C96: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15049C98: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x15049C9D: push 9 */
L_15049C9F:
    edi = POP32_VAL(esp); /* 0x15049C9F: pop edi */
    MEM32(eax) = edi; /* 0x15049CA0: mov dword ptr [eax], edi */
    PUSH32(esp, esi); /* 0x15049CA2: push esi */
    PUSH32(esp, esi); /* 0x15049CA3: push esi */
    PUSH32(esp, esi); /* 0x15049CA4: push esi */
    PUSH32(esp, esi); /* 0x15049CA5: push esi */
    PUSH32(esp, esi); /* 0x15049CA6: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x15049CA7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15049CAC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15049CAF:
    eax = edi; /* 0x15049CAF: mov eax, edi */
L_15049CB1:
    ecx = MEM32(ebp + (-0x10)); /* 0x15049CB1: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15049CB4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15049CBB: pop ecx */
    edi = POP32_VAL(esp); /* 0x15049CBC: pop edi */
    esi = POP32_VAL(esp); /* 0x15049CBD: pop esi */
    ebx = POP32_VAL(esp); /* 0x15049CBE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15049CBF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049CC0: ret  */
L_15049CC1:
    edi = ebx; /* 0x15049CC1: mov edi, ebx */
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x15049CC3: sar edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 5u);
    eax = ebx; /* 0x15049CC6: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15049CC8: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x15049CCB: imul edx, eax, 0x24 */
    MEM32(ebp + (-0x20)) = edx; /* 0x15049CCE: mov dword ptr [ebp - 0x20], edx */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x15049CD1: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    /* test MEM8(edx + eax + 0x4), 1 */ /* 0x15049CD8: test byte ptr [edx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049C91; /* 0x15049CDD: je 0x15049c91 */
L_15049CDF:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x15049CDF: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15049CEB; /* 0x15049CE2: jl 0x15049ceb */
L_15049CE4:
    if (CMP_G(_flag_a, _flag_b)) goto L_15049CED; /* 0x15049CE4: jg 0x15049ced */
L_15049CE6:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x15049CE6: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15049CED; /* 0x15049CE9: jae 0x15049ced */
L_15049CEB:
    ecx = esi; /* 0x15049CEB: mov ecx, esi */
L_15049CED:
    /* test ecx, ecx */ /* 0x15049CED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049D01; /* 0x15049CEF: jne 0x15049d01 */
L_15049CF1:
    RECOMP_CALL(sub_150363E0); /* 0x15049CF1: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15049CF6: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15049CF8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15049CFD: push 0x16 */
    RECOMP_BACKEDGE();
    goto L_15049C9F; /* 0x15049CFF: jmp 0x15049c9f */
L_15049D01:
    PUSH32(esp, ebx); /* 0x15049D01: push ebx */
    RECOMP_CALL(sub_1504BA49); /* 0x15049D02: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049D07: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15049D08: mov dword ptr [ebp - 4], esi */
    eax = MEM32(edi * 4 + 0x150BEBC0); /* 0x15049D0B: mov eax, dword ptr [edi*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x20)); /* 0x15049D12: mov ecx, dword ptr [ebp - 0x20] */
    /* test MEM8(ecx + eax + 0x4), 1 */ /* 0x15049D15: test byte ptr [ecx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(ecx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049D2F; /* 0x15049D1A: je 0x15049d2f */
L_15049D1C:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15049D1C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15049D1F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x15049D22: push ebx */
    RECOMP_CALL(sub_15049AA2); /* 0x15049D23: call 0x15049aa2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15049D28: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15049D2B: mov edi, eax */
    goto L_15049D39; /* 0x15049D2D: jmp 0x15049d39 */
L_15049D2F:
    RECOMP_CALL(sub_15036430); /* 0x15049D2F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x15049D34: push 9 */
    edi = POP32_VAL(esp); /* 0x15049D36: pop edi */
    MEM32(eax) = edi; /* 0x15049D37: mov dword ptr [eax], edi */
L_15049D39:
    MEM32(ebp + (-0x1C)) = edi; /* 0x15049D39: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15049D3C: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15049D53); /* 0x15049D43: call 0x15049d53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15049CAF; /* 0x15049D48: jmp 0x15049caf */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15049D53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049D53u);

L_15049D53:
    PUSH32(esp, ebx); /* 0x15049D53: push ebx */
    RECOMP_CALL(sub_1504C004); /* 0x15049D54: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049D59: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049D5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049D70u);

L_15049D70:
    PUSH32(esp, 0x14u); /* 0x15049D70: push 0x14 */
    PUSH32(esp, 0x150B0528u); /* 0x15049D72: push 0x150b0528 */
    RECOMP_CALL(sub_1505E988); /* 0x15049D77: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x15049D7C: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x15049D7F: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x15049D82: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049DAB; /* 0x15049D84: jne 0x15049dab */
L_15049D86:
    RECOMP_CALL(sub_15036430); /* 0x15049D86: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15049D8B: mov dword ptr [eax], 9 */
    RECOMP_CALL(sub_150363E0); /* 0x15049D91: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15049D96: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15049D99:
    eax = ebx; /* 0x15049D99: mov eax, ebx */
    ecx = MEM32(ebp + (-0x10)); /* 0x15049D9B: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15049D9E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15049DA5: pop ecx */
    edi = POP32_VAL(esp); /* 0x15049DA6: pop edi */
    esi = POP32_VAL(esp); /* 0x15049DA7: pop esi */
    ebx = POP32_VAL(esp); /* 0x15049DA8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15049DA9: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049DAA: ret  */
L_15049DAB:
    /* cmp edi, 0xFFFFFFFEu */ /* 0x15049DAB: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049DC5; /* 0x15049DAE: jne 0x15049dc5 */
L_15049DB0:
    RECOMP_CALL(sub_150363E0); /* 0x15049DB0: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x15049DB5: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15036430); /* 0x15049DB8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15049DBD: mov dword ptr [eax], 9 */
    RECOMP_BACKEDGE();
    goto L_15049D99; /* 0x15049DC3: jmp 0x15049d99 */
L_15049DC5:
    /* test edi, edi */ /* 0x15049DC5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15049DD8; /* 0x15049DC7: js 0x15049dd8 */
L_15049DC9:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x15049DC9: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15049DD8; /* 0x15049DCF: jae 0x15049dd8 */
L_15049DD1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15049DD1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15049DD3: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15049DD4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049DDC; /* 0x15049DD6: jmp 0x15049ddc */
L_15049DD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15049DD8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x15049DDA: mov eax, esi */
L_15049DDC:
    /* test eax, eax */ /* 0x15049DDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049E01; /* 0x15049DDE: jne 0x15049e01 */
L_15049DE0:
    RECOMP_CALL(sub_150363E0); /* 0x15049DE0: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15049DE5: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x15049DE7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15049DEC: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x15049DF2: push esi */
    PUSH32(esp, esi); /* 0x15049DF3: push esi */
    PUSH32(esp, esi); /* 0x15049DF4: push esi */
    PUSH32(esp, esi); /* 0x15049DF5: push esi */
    PUSH32(esp, esi); /* 0x15049DF6: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x15049DF7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15049DFC: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15049D99; /* 0x15049DFF: jmp 0x15049d99 */
L_15049E01:
    ecx = edi; /* 0x15049E01: mov ecx, edi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x15049E03: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    MEM32(ebp + (-0x20)) = ecx; /* 0x15049E06: mov dword ptr [ebp - 0x20], ecx */
    eax = edi; /* 0x15049E09: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15049E0B: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x15049E0E: imul edx, eax, 0x24 */
    MEM32(ebp + (-0x24)) = edx; /* 0x15049E11: mov dword ptr [ebp - 0x24], edx */
    eax = MEM32(ecx * 4 + 0x150BEBC0); /* 0x15049E14: mov eax, dword ptr [ecx*4 + 0x150bebc0] */
    /* test MEM8(edx + eax + 0x4), 1 */ /* 0x15049E1B: test byte ptr [edx + eax + 4], 1 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049DE0; /* 0x15049E20: je 0x15049de0 */
L_15049E22:
    PUSH32(esp, edi); /* 0x15049E22: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x15049E23: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049E28: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15049E29: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebp + (-0x20)); /* 0x15049E2C: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax * 4 + 0x150BEBC0); /* 0x15049E2F: mov eax, dword ptr [eax*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x24)); /* 0x15049E36: mov ecx, dword ptr [ebp - 0x24] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x15049E39: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049E4B; /* 0x15049E3E: je 0x15049e4b */
L_15049E40:
    PUSH32(esp, edi); /* 0x15049E40: push edi */
    RECOMP_CALL(sub_15049E7E); /* 0x15049E41: call 0x15049e7e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049E46: pop ecx */
    ebx = eax; /* 0x15049E47: mov ebx, eax */
    goto L_15049E56; /* 0x15049E49: jmp 0x15049e56 */
L_15049E4B:
    RECOMP_CALL(sub_15036430); /* 0x15049E4B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15049E50: mov dword ptr [eax], 9 */
L_15049E56:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15049E56: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15049E59: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15049E70); /* 0x15049E60: call 0x15049e70 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_15049D99; /* 0x15049E65: jmp 0x15049d99 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15049E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049E70u);

L_15049E70:
    PUSH32(esp, edi); /* 0x15049E70: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x15049E71: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049E76: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049E77: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049E7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049E7Eu);

L_15049E7E:
    edi = edi; /* 0x15049E7E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15049E80: push ebp */
    ebp = esp; /* 0x15049E81: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15049E83: push esi */
    PUSH32(esp, edi); /* 0x15049E84: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15049E85: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15049E88: push edi */
    RECOMP_CALL(sub_1504BD60); /* 0x15049E89: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049E8E: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x15049E8F: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049EE1; /* 0x15049E92: je 0x15049ee1 */
L_15049E94:
    eax = MEM32(0x150BEBC0); /* 0x15049E94: mov eax, dword ptr [0x150bebc0] */
    /* cmp edi, 1 */ /* 0x15049E99: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049EA4; /* 0x15049E9C: jne 0x15049ea4 */
L_15049E9E:
    /* test MEM8(eax + 0x4C), 1 */ /* 0x15049E9E: test byte ptr [eax + 0x4c], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049EAF; /* 0x15049EA2: jne 0x15049eaf */
L_15049EA4:
    /* cmp edi, 2 */ /* 0x15049EA4: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049EC5; /* 0x15049EA7: jne 0x15049ec5 */
L_15049EA9:
    /* test MEM8(eax + 0x28), 1 */ /* 0x15049EA9: test byte ptr [eax + 0x28], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x28)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049EC5; /* 0x15049EAD: je 0x15049ec5 */
L_15049EAF:
    PUSH32(esp, 2); /* 0x15049EAF: push 2 */
    RECOMP_CALL(sub_1504BD60); /* 0x15049EB1: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x15049EB6: push 1 */
    esi = eax; /* 0x15049EB8: mov esi, eax */
    RECOMP_CALL(sub_1504BD60); /* 0x15049EBA: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049EBF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15049EC0: pop ecx */
    /* cmp eax, esi */ /* 0x15049EC1: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15049EE1; /* 0x15049EC3: je 0x15049ee1 */
L_15049EC5:
    PUSH32(esp, edi); /* 0x15049EC5: push edi */
    RECOMP_CALL(sub_1504BD60); /* 0x15049EC6: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049ECB: pop ecx */
    PUSH32(esp, eax); /* 0x15049ECC: push eax */
    RECOMP_ICALL(MEM32(0x150C0124)); /* 0x15049ECD: call dword ptr [0x150c0124] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15049ED3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049EE1; /* 0x15049ED5: jne 0x15049ee1 */
L_15049ED7:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15049ED7: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15049EDD: mov esi, eax */
    goto L_15049EE3; /* 0x15049EDF: jmp 0x15049ee3 */
L_15049EE1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15049EE1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15049EE3:
    PUSH32(esp, edi); /* 0x15049EE3: push edi */
    RECOMP_CALL(sub_1504BCCA); /* 0x15049EE4: call 0x1504bcca */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049EE9: pop ecx */
    ecx = edi; /* 0x15049EEA: mov ecx, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    edi = edi & 0x1Fu; /* 0x15049EEC: and edi, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x15049EEF: sar ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 5u);
    edx = (uint32_t)((int32_t)edi * (int32_t)0x24u); /* 0x15049EF2: imul edx, edi, 0x24 */
    ecx = MEM32(ecx * 4 + 0x150BEBC0); /* 0x15049EF5: mov ecx, dword ptr [ecx*4 + 0x150bebc0] */
    MEM8(ecx + edx + 0x4) = (uint8_t)(0); /* 0x15049EFC: mov byte ptr [ecx + edx + 4], 0 */
    /* test esi, esi */ /* 0x15049F01: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049F11; /* 0x15049F03: je 0x15049f11 */
L_15049F05:
    PUSH32(esp, esi); /* 0x15049F05: push esi */
    RECOMP_CALL(sub_150363FB); /* 0x15049F06: call 0x150363fb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049F0B: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15049F0C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049F13; /* 0x15049F0F: jmp 0x15049f13 */
L_15049F11:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15049F11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15049F13:
    edi = POP32_VAL(esp); /* 0x15049F13: pop edi */
    esi = POP32_VAL(esp); /* 0x15049F14: pop esi */
    ebp = POP32_VAL(esp); /* 0x15049F15: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15049F16: ret  */
    RECOMP_REGS_OUT();
}

void sub_15049F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15049F20u);

L_15049F20:
    PUSH32(esp, 0x10u); /* 0x15049F20: push 0x10 */
    PUSH32(esp, 0x150B0548u); /* 0x15049F22: push 0x150b0548 */
    RECOMP_CALL(sub_1505E988); /* 0x15049F27: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x15049F2C: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 0xFFFFFFFEu */ /* 0x15049F2F: cmp edi, -2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15049F47; /* 0x15049F32: jne 0x15049f47 */
L_15049F34:
    RECOMP_CALL(sub_15036430); /* 0x15049F34: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15049F39: mov dword ptr [eax], 9 */
L_15049F3F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15049F3F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049FFC; /* 0x15049F42: jmp 0x15049ffc */
L_15049F47:
    /* test edi, edi */ /* 0x15049F47: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15049F5A; /* 0x15049F49: js 0x15049f5a */
L_15049F4B:
    /* cmp edi, MEM32(0x150BEBAC) */ /* 0x15049F4B: cmp edi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15049F5A; /* 0x15049F51: jae 0x15049f5a */
L_15049F53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15049F53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15049F55: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15049F56: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15049F5E; /* 0x15049F58: jmp 0x15049f5e */
L_15049F5A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15049F5A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x15049F5C: mov eax, esi */
L_15049F5E:
    /* test eax, eax */ /* 0x15049F5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049F7C; /* 0x15049F60: jne 0x15049f7c */
L_15049F62:
    RECOMP_CALL(sub_15036430); /* 0x15049F62: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15049F67: mov dword ptr [eax], 9 */
    PUSH32(esp, esi); /* 0x15049F6D: push esi */
    PUSH32(esp, esi); /* 0x15049F6E: push esi */
    PUSH32(esp, esi); /* 0x15049F6F: push esi */
    PUSH32(esp, esi); /* 0x15049F70: push esi */
    PUSH32(esp, esi); /* 0x15049F71: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x15049F72: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15049F77: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15049F3F; /* 0x15049F7A: jmp 0x15049f3f */
L_15049F7C:
    ebx = edi; /* 0x15049F7C: mov ebx, edi */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x15049F7E: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    eax = edi; /* 0x15049F81: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15049F83: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x15049F86: imul ecx, eax, 0x24 */
    MEM32(ebp + (-0x20)) = ecx; /* 0x15049F89: mov dword ptr [ebp - 0x20], ecx */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x15049F8C: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x15049F93: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049F62; /* 0x15049F98: je 0x15049f62 */
L_15049F9A:
    PUSH32(esp, edi); /* 0x15049F9A: push edi */
    RECOMP_CALL(sub_1504BA49); /* 0x15049F9B: call 0x1504ba49 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049FA0: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x15049FA1: mov dword ptr [ebp - 4], esi */
    eax = MEM32(ebx * 4 + 0x150BEBC0); /* 0x15049FA4: mov eax, dword ptr [ebx*4 + 0x150bebc0] */
    ecx = MEM32(ebp + (-0x20)); /* 0x15049FAB: mov ecx, dword ptr [ebp - 0x20] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x15049FAE: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049FDD; /* 0x15049FB3: je 0x15049fdd */
L_15049FB5:
    PUSH32(esp, edi); /* 0x15049FB5: push edi */
    RECOMP_CALL(sub_1504BD60); /* 0x15049FB6: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15049FBB: pop ecx */
    PUSH32(esp, eax); /* 0x15049FBC: push eax */
    RECOMP_ICALL(MEM32(0x150C00F0)); /* 0x15049FBD: call dword ptr [0x150c00f0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15049FC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15049FCF; /* 0x15049FC5: jne 0x15049fcf */
L_15049FC7:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15049FC7: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15049FCD: mov esi, eax */
L_15049FCF:
    MEM32(ebp + (-0x1C)) = esi; /* 0x15049FCF: mov dword ptr [ebp - 0x1c], esi */
    /* test esi, esi */ /* 0x15049FD2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15049FEE; /* 0x15049FD4: je 0x15049fee */
L_15049FD6:
    RECOMP_CALL(sub_150363E0); /* 0x15049FD6: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15049FDB: mov dword ptr [eax], esi */
L_15049FDD:
    RECOMP_CALL(sub_15036430); /* 0x15049FDD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15049FE2: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x15049FE8: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x15049FEB: mov dword ptr [ebp - 0x1c], esi */
L_15049FEE:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15049FEE: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504A012); /* 0x15049FF5: call 0x1504a012 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15049FFA: mov eax, esi */
L_15049FFC:
    ecx = MEM32(ebp + (-0x10)); /* 0x15049FFC: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15049FFF: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504A006: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504A007: pop edi */
    esi = POP32_VAL(esp); /* 0x1504A008: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504A009: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A00A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A00B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A012(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A012u);

L_1504A012:
    PUSH32(esp, edi); /* 0x1504A012: push edi */
    RECOMP_CALL(sub_1504C004); /* 0x1504A013: call 0x1504c004 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A018: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A019: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A020u);

L_1504A020:
    PUSH32(esp, 0xCu); /* 0x1504A020: push 0xc */
    PUSH32(esp, 0x150B0568u); /* 0x1504A022: push 0x150b0568 */
    RECOMP_CALL(sub_1505E988); /* 0x1504A027: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1504A02C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504A02E: mov dword ptr [ebp - 0x1c], esi */
    edi = MEM32(ebp + 0x8); /* 0x1504A031: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1504A034: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1504A05C; /* 0x1504A036: jne 0x1504a05c */
L_1504A038:
    RECOMP_CALL(sub_150363E0); /* 0x1504A038: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x1504A03D: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_15036430); /* 0x1504A03F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1504A044: mov dword ptr [eax], 0x16 */
    PUSH32(esp, esi); /* 0x1504A04A: push esi */
    PUSH32(esp, esi); /* 0x1504A04B: push esi */
    PUSH32(esp, esi); /* 0x1504A04C: push esi */
    PUSH32(esp, esi); /* 0x1504A04D: push esi */
    PUSH32(esp, esi); /* 0x1504A04E: push esi */
    RECOMP_CALL(sub_1505A110); /* 0x1504A04F: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1504A054: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1504A057: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1504A0A1; /* 0x1504A05A: jmp 0x1504a0a1 */
L_1504A05C:
    PUSH32(esp, 3); /* 0x1504A05C: push 3 */
    RECOMP_CALL(sub_15068D80); /* 0x1504A05E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A063: pop ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x1504A064: mov dword ptr [ebp - 4], esi */
    /* cmp MEM32(0x150BCED4), 0xFFFFFFFEu */ /* 0x1504A067: cmp dword ptr [0x150bced4], -2 */
    _flag_a = (uint32_t)(MEM32(0x150BCED4)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A075; /* 0x1504A06E: jne 0x1504a075 */
L_1504A070:
    RECOMP_CALL(sub_1504F798); /* 0x1504A070: call 0x1504f798 */
    RECOMP_FLAGS_IN();
L_1504A075:
    SET_LO8(eax, MEM8(edi)); /* 0x1504A075: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x1504A077: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1504A093; /* 0x1504A079: je 0x1504a093 */
L_1504A07B:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1504A07B: movsx eax, al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1504A07E: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x1504A07F: mov dword ptr [ebp + 8], edi */
    PUSH32(esp, eax); /* 0x1504A082: push eax */
    RECOMP_CALL(sub_1504D706); /* 0x1504A083: call 0x1504d706 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A088: pop ecx */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1504A089: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1504A075; /* 0x1504A08C: jne 0x1504a075 */
L_1504A08E:
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x1504A08E: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = esi; /* 0x1504A090: mov dword ptr [ebp - 0x1c], esi */
L_1504A093:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1504A093: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1504A0B4); /* 0x1504A09A: call 0x1504a0b4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1504A09F: mov eax, esi */
L_1504A0A1:
    ecx = MEM32(ebp + (-0x10)); /* 0x1504A0A1: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1504A0A4: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1504A0AB: pop ecx */
    edi = POP32_VAL(esp); /* 0x1504A0AC: pop edi */
    esi = POP32_VAL(esp); /* 0x1504A0AD: pop esi */
    ebx = POP32_VAL(esp); /* 0x1504A0AE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1504A0AF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A0B0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1504A0B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1504A0B4u);

L_1504A0B4:
    PUSH32(esp, 3); /* 0x1504A0B4: push 3 */
    RECOMP_CALL(sub_15068F50); /* 0x1504A0B6: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1504A0BB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1504A0BC: ret  */
    RECOMP_REGS_OUT();
}
