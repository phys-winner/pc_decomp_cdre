#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1508B730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508B730u);

L_1508B730:
    ecx = MEM32(esp + 0x10); /* 0x1508B730: mov ecx, dword ptr [esp + 0x10] */
    PUSH32(esp, ebx); /* 0x1508B734: push ebx */
    /* test ecx, ecx */ /* 0x1508B735: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508B77F; /* 0x1508B737: je 0x1508b77f */
L_1508B739:
    SET_HI8(ebx, MEM8(esp + 0x10)); /* 0x1508B739: mov bh, byte ptr [esp + 0x10] */
    PUSH32(esp, esi); /* 0x1508B73D: push esi */
    /* test ecx, 1 */ /* 0x1508B73E: test ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0xC); /* 0x1508B744: mov eax, dword ptr [esp + 0xc] */
    esi = MEM32(esp + 0x10); /* 0x1508B748: mov esi, dword ptr [esp + 0x10] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508B761; /* 0x1508B74C: je 0x1508b761 */
L_1508B74E:
    SET_LO8(ebx, MEM8(esi)); /* 0x1508B74E: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508B750: add esi, 1 */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1508B753: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1508B755: add eax, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x1508B758: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508B788; /* 0x1508B75A: je 0x1508b788 */
L_1508B75C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508B75C: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508B77E; /* 0x1508B75F: je 0x1508b77e */
L_1508B761:
    SET_LO8(ebx, MEM8(esi)); /* 0x1508B761: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508B763: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x1508B766: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508B783; /* 0x1508B768: je 0x1508b783 */
L_1508B76A:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1508B76A: mov byte ptr [eax], bl */
    SET_LO8(ebx, MEM8(esi + (-0x1))); /* 0x1508B76C: mov bl, byte ptr [esi - 1] */
    MEM8(eax + 0x1) = (uint8_t)(LO8(ebx)); /* 0x1508B76F: mov byte ptr [eax + 1], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1508B772: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x1508B775: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508B788; /* 0x1508B777: je 0x1508b788 */
L_1508B779:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x1508B779: sub ecx, 2 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508B761; /* 0x1508B77C: jne 0x1508b761 */
L_1508B77E:
    esi = POP32_VAL(esp); /* 0x1508B77E: pop esi */
L_1508B77F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508B77F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1508B781: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B782: ret  */
L_1508B783:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1508B783: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1508B785: add eax, 1 */
    _flag_k = FK_ADD;
L_1508B788:
    esi = POP32_VAL(esp); /* 0x1508B788: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508B789: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B78A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508B7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508B7A0u);

L_1508B7A0:
    edi = edi; /* 0x1508B7A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508B7A2: push ebp */
    ebp = esp; /* 0x1508B7A3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508B7A5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B7F7; /* 0x1508B7AC: jne 0x1508b7f7 */
L_1508B7AE:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508B7AE: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1508B7B2: mov eax, dword ptr [ebp + 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B7DC; /* 0x1508B7B5: jne 0x1508b7dc */
L_1508B7B7:
    /* test eax, eax */ /* 0x1508B7B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508B7DC; /* 0x1508B7B9: je 0x1508b7dc */
L_1508B7BB:
    RECOMP_CALL(sub_15036430); /* 0x1508B7BB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508B7C0: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508B7C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508B7C8: push eax */
    PUSH32(esp, eax); /* 0x1508B7C9: push eax */
    PUSH32(esp, eax); /* 0x1508B7CA: push eax */
    PUSH32(esp, eax); /* 0x1508B7CB: push eax */
    PUSH32(esp, eax); /* 0x1508B7CC: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508B7CD: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508B7D2: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508B7D5: mov eax, 0x7fffffff */
    ebp = POP32_VAL(esp); /* 0x1508B7DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B7DB: ret  */
L_1508B7DC:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508B7DC: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B7E6; /* 0x1508B7E0: jne 0x1508b7e6 */
L_1508B7E2:
    /* test eax, eax */ /* 0x1508B7E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508B7BB; /* 0x1508B7E4: jne 0x1508b7bb */
L_1508B7E6:
    PUSH32(esp, eax); /* 0x1508B7E6: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508B7E7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508B7EA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508FA90); /* 0x1508B7ED: call 0x1508fa90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508B7F2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508B7F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B7F6: ret  */
L_1508B7F7:
    PUSH32(esp, 0); /* 0x1508B7F7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508B7F9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508B7FC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508B7FF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508B820); /* 0x1508B802: call 0x1508b820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508B807: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508B80A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B80B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508B820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508B820u);

L_1508B820:
    edi = edi; /* 0x1508B820: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508B822: push ebp */
    ebp = esp; /* 0x1508B823: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1508B825: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1508B828: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1508B82B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1508B82C: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1508B82F: push esi */
    PUSH32(esp, edi); /* 0x1508B830: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508B831: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508B834: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1502F870); /* 0x1508B836: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1508B83B: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x10); /* 0x1508B83E: mov edi, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1508B841: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508B849; /* 0x1508B843: jne 0x1508b849 */
L_1508B845:
    /* test edi, edi */ /* 0x1508B845: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508B851; /* 0x1508B847: jne 0x1508b851 */
L_1508B849:
    /* test ebx, ebx */ /* 0x1508B849: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508B870; /* 0x1508B84B: jne 0x1508b870 */
L_1508B84D:
    /* test edi, edi */ /* 0x1508B84D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508B870; /* 0x1508B84F: je 0x1508b870 */
L_1508B851:
    RECOMP_CALL(sub_15036430); /* 0x1508B851: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1508B856: push esi */
    PUSH32(esp, esi); /* 0x1508B857: push esi */
    PUSH32(esp, esi); /* 0x1508B858: push esi */
    PUSH32(esp, esi); /* 0x1508B859: push esi */
    PUSH32(esp, esi); /* 0x1508B85A: push esi */
    MEM32(eax) = 0x16u; /* 0x1508B85B: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508B861: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508B866: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = 0x7FFFFFFFu; /* 0x1508B869: mov esi, 0x7fffffff */
    goto L_1508B8BD; /* 0x1508B86E: jmp 0x1508b8bd */
L_1508B870:
    eax = MEM32(ebp + (-0x14)); /* 0x1508B870: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x14), esi */ /* 0x1508B873: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B887; /* 0x1508B876: jne 0x1508b887 */
L_1508B878:
    PUSH32(esp, edi); /* 0x1508B878: push edi */
    PUSH32(esp, ebx); /* 0x1508B879: push ebx */
    PUSH32(esp, ecx); /* 0x1508B87A: push ecx */
    RECOMP_CALL(sub_1508FA90); /* 0x1508B87B: call 0x1508fa90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508B880: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1508B883: mov esi, eax */
    goto L_1508B8BD; /* 0x1508B885: jmp 0x1508b8bd */
L_1508B887:
    eax = esi; /* 0x1508B887: mov eax, esi */
L_1508B889:
    /* test edi, edi */ /* 0x1508B889: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508B8BB; /* 0x1508B88B: je 0x1508b8bb */
L_1508B88D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1508B88D: dec edi */
    _flag_k = FK_DEC;
    /* cmp esi, eax */ /* 0x1508B88E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B8BB; /* 0x1508B890: jne 0x1508b8bb */
L_1508B892:
    eax = (uint32_t)MEM8(ecx); /* 0x1508B892: movzx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1508B895: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x1508B896: mov dword ptr [ebp + 8], ecx */
    ecx = ebp + (-0x14); /* 0x1508B899: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1508B89C: push ecx */
    PUSH32(esp, eax); /* 0x1508B89D: push eax */
    RECOMP_CALL(sub_15032A50); /* 0x1508B89E: call 0x15032a50 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x1508B8A3: lea ecx, [ebp - 0x14] */
    esi = eax; /* 0x1508B8A6: mov esi, eax */
    eax = (uint32_t)MEM8(ebx); /* 0x1508B8A8: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1508B8AB: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1508B8AC: push ecx */
    PUSH32(esp, eax); /* 0x1508B8AD: push eax */
    RECOMP_CALL(sub_15032A50); /* 0x1508B8AE: call 0x15032a50 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1508B8B3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508B8B6: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1508B889; /* 0x1508B8B9: jmp 0x1508b889 */
L_1508B8BB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1508B8BB: sub esi, eax */
    _flag_k = FK_CMP;
L_1508B8BD:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1508B8BD: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508B8CA; /* 0x1508B8C1: je 0x1508b8ca */
L_1508B8C3:
    ecx = MEM32(ebp + (-0xC)); /* 0x1508B8C3: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508B8C6: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508B8CA:
    edi = POP32_VAL(esp); /* 0x1508B8CA: pop edi */
    eax = esi; /* 0x1508B8CB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508B8CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508B8CE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508B8CF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B8D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508B8E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508B8E0u);

L_1508B8E0:
    edi = edi; /* 0x1508B8E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508B8E2: push ebp */
    ebp = esp; /* 0x1508B8E3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508B8E5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B921; /* 0x1508B8EC: jne 0x1508b921 */
L_1508B8EE:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508B8EE: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B915; /* 0x1508B8F2: jne 0x1508b915 */
L_1508B8F4:
    RECOMP_CALL(sub_15036430); /* 0x1508B8F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508B8F9: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508B8FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508B901: push eax */
    PUSH32(esp, eax); /* 0x1508B902: push eax */
    PUSH32(esp, eax); /* 0x1508B903: push eax */
    PUSH32(esp, eax); /* 0x1508B904: push eax */
    PUSH32(esp, eax); /* 0x1508B905: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508B906: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508B90B: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508B90E: mov eax, 0x7fffffff */
    ebp = POP32_VAL(esp); /* 0x1508B913: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B914: ret  */
L_1508B915:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508B915: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508B8F4; /* 0x1508B919: je 0x1508b8f4 */
L_1508B91B:
    ebp = POP32_VAL(esp); /* 0x1508B91B: pop ebp */
    goto L_1508FAF0; /* 0x1508B91C: jmp 0x1508faf0 */
L_1508B921:
    PUSH32(esp, 0); /* 0x1508B921: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508B923: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508B926: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508B940); /* 0x1508B929: call 0x1508b940 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508B92E: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508B931: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B932: ret  */
L_1508FAF0:
    PUSH32(esp, ebp); /* 0x1508FAF0: push ebp */
    ebp = esp; /* 0x1508FAF1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508FAF3: push edi */
    PUSH32(esp, esi); /* 0x1508FAF4: push esi */
    PUSH32(esp, ebx); /* 0x1508FAF5: push ebx */
    esi = MEM32(ebp + 0xC); /* 0x1508FAF6: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1508FAF9: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, 0xFFu); /* 0x1508FAFC: mov al, 0xff */
    edi = edi; /* 0x1508FAFE: mov edi, edi */
L_1508FB00:
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508FB00: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FB36; /* 0x1508FB02: je 0x1508fb36 */
L_1508FB04:
    SET_LO8(eax, MEM8(esi)); /* 0x1508FB04: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508FB06: add esi, 1 */
    _flag_k = FK_ADD;
    SET_HI8(eax, MEM8(edi)); /* 0x1508FB09: mov ah, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508FB0B: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp HI8(eax), LO8(eax) */ /* 0x1508FB0E: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FB00; /* 0x1508FB10: je 0x1508fb00 */
L_1508FB12:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x41u); /* 0x1508FB12: sub al, 0x41 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(eax), 0x1Au */ /* 0x1508FB14: cmp al, 0x1a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(ecx), _sb = LO8(ecx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508FB16: sbb cl, cl */
      SET_LO8(ecx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x20u); /* 0x1508FB18: and cl, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x1508FB1B: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x41u); /* 0x1508FB1D: add al, 0x41 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = LO8(eax); /* 0x1508FB1F: xchg al, ah */
      SET_LO8(eax, HI8(eax));
      SET_HI8(eax, _tmp); }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x41u); /* 0x1508FB21: sub al, 0x41 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(eax), 0x1Au */ /* 0x1508FB23: cmp al, 0x1a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(ecx), _sb = LO8(ecx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508FB25: sbb cl, cl */
      SET_LO8(ecx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x20u); /* 0x1508FB27: and cl, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x1508FB2A: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x41u); /* 0x1508FB2C: add al, 0x41 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), HI8(eax) */ /* 0x1508FB2E: cmp al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FB00; /* 0x1508FB30: je 0x1508fb00 */
L_1508FB32:
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508FB32: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = LO8(eax), _sb = 0xFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1508FB34: sbb al, 0xff */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1508FB36:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1508FB36: movsx eax, al */
    ebx = POP32_VAL(esp); /* 0x1508FB39: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508FB3A: pop esi */
    edi = POP32_VAL(esp); /* 0x1508FB3B: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508FB3C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FB3D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508B940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508B940u);

L_1508B940:
    edi = edi; /* 0x1508B940: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508B942: push ebp */
    ebp = esp; /* 0x1508B943: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508B945: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1508B948: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1508B94B: push ebx */
    PUSH32(esp, esi); /* 0x1508B94C: push esi */
    PUSH32(esp, edi); /* 0x1508B94D: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508B94E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508B951: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1508B956: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508B959: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508B964; /* 0x1508B95B: je 0x1508b964 */
L_1508B95D:
    ebx = MEM32(ebp + 0xC); /* 0x1508B95D: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508B960: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508B985; /* 0x1508B962: jne 0x1508b985 */
L_1508B964:
    RECOMP_CALL(sub_15036430); /* 0x1508B964: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508B969: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508B96F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508B971: push eax */
    PUSH32(esp, eax); /* 0x1508B972: push eax */
    PUSH32(esp, eax); /* 0x1508B973: push eax */
    PUSH32(esp, eax); /* 0x1508B974: push eax */
    PUSH32(esp, eax); /* 0x1508B975: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508B976: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508B97B: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = 0x7FFFFFFFu; /* 0x1508B97E: mov esi, 0x7fffffff */
    goto L_1508B9C8; /* 0x1508B983: jmp 0x1508b9c8 */
L_1508B985:
    eax = MEM32(ebp + (-0x10)); /* 0x1508B985: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1508B988: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B99B; /* 0x1508B98C: jne 0x1508b99b */
L_1508B98E:
    PUSH32(esp, ebx); /* 0x1508B98E: push ebx */
    PUSH32(esp, edi); /* 0x1508B98F: push edi */
    RECOMP_CALL(sub_1508FAF0); /* 0x1508B990: call 0x1508faf0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508B995: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508B996: pop ecx */
    esi = eax; /* 0x1508B997: mov esi, eax */
    goto L_1508B9C8; /* 0x1508B999: jmp 0x1508b9c8 */
L_1508B99B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508B99B: sub edi, ebx */
    _flag_k = FK_CMP;
L_1508B99D:
    eax = (uint32_t)MEM8(edi + ebx); /* 0x1508B99D: movzx eax, byte ptr [edi + ebx] */
    ecx = ebp + (-0x10); /* 0x1508B9A1: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1508B9A4: push ecx */
    PUSH32(esp, eax); /* 0x1508B9A5: push eax */
    RECOMP_CALL(sub_15032A50); /* 0x1508B9A6: call 0x15032a50 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x1508B9AB: lea ecx, [ebp - 0x10] */
    esi = eax; /* 0x1508B9AE: mov esi, eax */
    eax = (uint32_t)MEM8(ebx); /* 0x1508B9B0: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1508B9B3: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1508B9B4: push ecx */
    PUSH32(esp, eax); /* 0x1508B9B5: push eax */
    RECOMP_CALL(sub_15032A50); /* 0x1508B9B6: call 0x15032a50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508B9BB: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1508B9BE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508B9C6; /* 0x1508B9C0: je 0x1508b9c6 */
L_1508B9C2:
    /* cmp esi, eax */ /* 0x1508B9C2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508B99D; /* 0x1508B9C4: je 0x1508b99d */
L_1508B9C6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1508B9C6: sub esi, eax */
    _flag_k = FK_CMP;
L_1508B9C8:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508B9C8: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508B9D5; /* 0x1508B9CC: je 0x1508b9d5 */
L_1508B9CE:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508B9CE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508B9D1: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508B9D5:
    edi = POP32_VAL(esp); /* 0x1508B9D5: pop edi */
    eax = esi; /* 0x1508B9D6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508B9D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508B9D9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508B9DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B9DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508B9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508B9F0u);

L_1508B9F0:
    edi = edi; /* 0x1508B9F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508B9F2: push ebp */
    ebp = esp; /* 0x1508B9F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508B9F5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1508B9F8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508B9FB: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508B9FE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1508BA03: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1508BA06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508BA11; /* 0x1508BA08: je 0x1508ba11 */
L_1508BA0A:
    eax = MEM32(ebp + 0xC); /* 0x1508BA0A: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1508BA0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BA2D; /* 0x1508BA0F: jne 0x1508ba2d */
L_1508BA11:
    RECOMP_CALL(sub_15036430); /* 0x1508BA11: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BA16: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BA1C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BA1E: push eax */
    PUSH32(esp, eax); /* 0x1508BA1F: push eax */
    PUSH32(esp, eax); /* 0x1508BA20: push eax */
    PUSH32(esp, eax); /* 0x1508BA21: push eax */
    PUSH32(esp, eax); /* 0x1508BA22: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BA23: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BA28: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508BA89; /* 0x1508BA2B: jmp 0x1508ba89 */
L_1508BA2D:
    edx = MEM32(ebp + (-0x10)); /* 0x1508BA2D: mov edx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x1508BA30: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BA5D; /* 0x1508BA34: jne 0x1508ba5d */
L_1508BA36:
    SET_LO8(edx, MEM8(ecx)); /* 0x1508BA36: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x1508BA38: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BA56; /* 0x1508BA3A: jne 0x1508ba56 */
L_1508BA3C:
    /* test LO8(edx), LO8(edx) */ /* 0x1508BA3C: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508BA52; /* 0x1508BA3E: je 0x1508ba52 */
L_1508BA40:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x1508BA40: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x1508BA43: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BA56; /* 0x1508BA46: jne 0x1508ba56 */
L_1508BA48:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508BA48: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1508BA4B: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1508BA4E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BA36; /* 0x1508BA50: jne 0x1508ba36 */
L_1508BA52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BA52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508BA93; /* 0x1508BA54: jmp 0x1508ba93 */
L_1508BA56:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1508BA56: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1508BA58: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508BA93; /* 0x1508BA5B: jmp 0x1508ba93 */
L_1508BA5D:
    PUSH32(esp, MEM32(edx + 0x8)); /* 0x1508BA5D: push dword ptr [edx + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508BA60: push -1 */
    PUSH32(esp, eax); /* 0x1508BA62: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508BA63: push -1 */
    PUSH32(esp, ecx); /* 0x1508BA65: push ecx */
    PUSH32(esp, 0x1000u); /* 0x1508BA66: push 0x1000 */
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x1508BA6B: push dword ptr [edx + 0x10] */
    eax = ebp + (-0x10); /* 0x1508BA6E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508BA71: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x1508BA72: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508BA77: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508BA7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BA90; /* 0x1508BA7C: jne 0x1508ba90 */
L_1508BA7E:
    RECOMP_CALL(sub_15036430); /* 0x1508BA7E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BA83: mov dword ptr [eax], 0x16 */
L_1508BA89:
    eax = 0x7FFFFFFFu; /* 0x1508BA89: mov eax, 0x7fffffff */
    goto L_1508BA93; /* 0x1508BA8E: jmp 0x1508ba93 */
L_1508BA90:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1508BA90: add eax, -2 */
    _flag_k = FK_ADD;
L_1508BA93:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508BA93: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BAA0; /* 0x1508BA97: je 0x1508baa0 */
L_1508BA99:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508BA99: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508BA9C: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508BAA0:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508BAA0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BAA1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BAB0u);

L_1508BAB0:
    edi = edi; /* 0x1508BAB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BAB2: push ebp */
    ebp = esp; /* 0x1508BAB3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1508BAB5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BAB7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BABA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508B9F0); /* 0x1508BABD: call 0x1508b9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508BAC2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508BAC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BAC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BAD0u);

    goto L_1508BAD0;
L_1508B8E0:
    edi = edi; /* 0x1508B8E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508B8E2: push ebp */
    ebp = esp; /* 0x1508B8E3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508B8E5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B921; /* 0x1508B8EC: jne 0x1508b921 */
L_1508B8EE:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508B8EE: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508B915; /* 0x1508B8F2: jne 0x1508b915 */
L_1508B8F4:
    RECOMP_CALL(sub_15036430); /* 0x1508B8F4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508B8F9: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508B8FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508B901: push eax */
    PUSH32(esp, eax); /* 0x1508B902: push eax */
    PUSH32(esp, eax); /* 0x1508B903: push eax */
    PUSH32(esp, eax); /* 0x1508B904: push eax */
    PUSH32(esp, eax); /* 0x1508B905: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508B906: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508B90B: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508B90E: mov eax, 0x7fffffff */
    ebp = POP32_VAL(esp); /* 0x1508B913: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B914: ret  */
L_1508B915:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508B915: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508B8F4; /* 0x1508B919: je 0x1508b8f4 */
L_1508B91B:
    ebp = POP32_VAL(esp); /* 0x1508B91B: pop ebp */
    goto L_1508FAF0; /* 0x1508B91C: jmp 0x1508faf0 */
L_1508B921:
    PUSH32(esp, 0); /* 0x1508B921: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508B923: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508B926: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508B940); /* 0x1508B929: call 0x1508b940 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508B92E: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508B931: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508B932: ret  */
L_1508BAD0:
    edi = edi; /* 0x1508BAD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BAD2: push ebp */
    ebp = esp; /* 0x1508BAD3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508BAD5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BAE4; /* 0x1508BADC: jne 0x1508bae4 */
L_1508BADE:
    ebp = POP32_VAL(esp); /* 0x1508BADE: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1508B8E0; /* 0x1508BADF: jmp 0x1508b8e0 */
L_1508BAE4:
    PUSH32(esp, 0); /* 0x1508BAE4: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BAE6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BAE9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BB00); /* 0x1508BAEC: call 0x1508bb00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508BAF1: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508BAF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BAF5: ret  */
L_1508FAF0:
    PUSH32(esp, ebp); /* 0x1508FAF0: push ebp */
    ebp = esp; /* 0x1508FAF1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508FAF3: push edi */
    PUSH32(esp, esi); /* 0x1508FAF4: push esi */
    PUSH32(esp, ebx); /* 0x1508FAF5: push ebx */
    esi = MEM32(ebp + 0xC); /* 0x1508FAF6: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1508FAF9: mov edi, dword ptr [ebp + 8] */
    SET_LO8(eax, 0xFFu); /* 0x1508FAFC: mov al, 0xff */
    edi = edi; /* 0x1508FAFE: mov edi, edi */
L_1508FB00:
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508FB00: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FB36; /* 0x1508FB02: je 0x1508fb36 */
L_1508FB04:
    SET_LO8(eax, MEM8(esi)); /* 0x1508FB04: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508FB06: add esi, 1 */
    _flag_k = FK_ADD;
    SET_HI8(eax, MEM8(edi)); /* 0x1508FB09: mov ah, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508FB0B: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp HI8(eax), LO8(eax) */ /* 0x1508FB0E: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FB00; /* 0x1508FB10: je 0x1508fb00 */
L_1508FB12:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x41u); /* 0x1508FB12: sub al, 0x41 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(eax), 0x1Au */ /* 0x1508FB14: cmp al, 0x1a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(ecx), _sb = LO8(ecx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508FB16: sbb cl, cl */
      SET_LO8(ecx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x20u); /* 0x1508FB18: and cl, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x1508FB1B: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x41u); /* 0x1508FB1D: add al, 0x41 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = LO8(eax); /* 0x1508FB1F: xchg al, ah */
      SET_LO8(eax, HI8(eax));
      SET_HI8(eax, _tmp); }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - 0x41u); /* 0x1508FB21: sub al, 0x41 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    /* cmp LO8(eax), 0x1Au */ /* 0x1508FB23: cmp al, 0x1a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x1Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(ecx), _sb = LO8(ecx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508FB25: sbb cl, cl */
      SET_LO8(ecx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x20u); /* 0x1508FB27: and cl, 0x20 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x1508FB2A: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x41u); /* 0x1508FB2C: add al, 0x41 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp LO8(eax), HI8(eax) */ /* 0x1508FB2E: cmp al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FB00; /* 0x1508FB30: je 0x1508fb00 */
L_1508FB32:
    { uint32_t _sa = LO8(eax), _sb = LO8(eax), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508FB32: sbb al, al */
      SET_LO8(eax, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = LO8(eax), _sb = 0xFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1508FB34: sbb al, 0xff */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1508FB36:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1508FB36: movsx eax, al */
    ebx = POP32_VAL(esp); /* 0x1508FB39: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508FB3A: pop esi */
    edi = POP32_VAL(esp); /* 0x1508FB3B: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508FB3C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FB3D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BB00u);

L_1508BB00:
    edi = edi; /* 0x1508BB00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BB02: push ebp */
    ebp = esp; /* 0x1508BB03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508BB05: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1508BB08: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508BB0B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508BB0E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1508BB13: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1508BB16: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508BB21; /* 0x1508BB18: je 0x1508bb21 */
L_1508BB1A:
    eax = MEM32(ebp + 0xC); /* 0x1508BB1A: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1508BB1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BB3D; /* 0x1508BB1F: jne 0x1508bb3d */
L_1508BB21:
    RECOMP_CALL(sub_15036430); /* 0x1508BB21: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BB26: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BB2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BB2E: push eax */
    PUSH32(esp, eax); /* 0x1508BB2F: push eax */
    PUSH32(esp, eax); /* 0x1508BB30: push eax */
    PUSH32(esp, eax); /* 0x1508BB31: push eax */
    PUSH32(esp, eax); /* 0x1508BB32: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BB33: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BB38: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508BB7D; /* 0x1508BB3B: jmp 0x1508bb7d */
L_1508BB3D:
    edx = MEM32(ebp + (-0x10)); /* 0x1508BB3D: mov edx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x1508BB40: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BB51; /* 0x1508BB44: jne 0x1508bb51 */
L_1508BB46:
    PUSH32(esp, eax); /* 0x1508BB46: push eax */
    PUSH32(esp, ecx); /* 0x1508BB47: push ecx */
    RECOMP_CALL(sub_1508B8E0); /* 0x1508BB48: call 0x1508b8e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508BB4D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508BB4E: pop ecx */
    goto L_1508BB87; /* 0x1508BB4F: jmp 0x1508bb87 */
L_1508BB51:
    PUSH32(esp, MEM32(edx + 0x8)); /* 0x1508BB51: push dword ptr [edx + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508BB54: push -1 */
    PUSH32(esp, eax); /* 0x1508BB56: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508BB57: push -1 */
    PUSH32(esp, ecx); /* 0x1508BB59: push ecx */
    PUSH32(esp, 0x1001u); /* 0x1508BB5A: push 0x1001 */
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x1508BB5F: push dword ptr [edx + 0x10] */
    eax = ebp + (-0x10); /* 0x1508BB62: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508BB65: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x1508BB66: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508BB6B: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508BB6E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BB84; /* 0x1508BB70: jne 0x1508bb84 */
L_1508BB72:
    RECOMP_CALL(sub_15036430); /* 0x1508BB72: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BB77: mov dword ptr [eax], 0x16 */
L_1508BB7D:
    eax = 0x7FFFFFFFu; /* 0x1508BB7D: mov eax, 0x7fffffff */
    goto L_1508BB87; /* 0x1508BB82: jmp 0x1508bb87 */
L_1508BB84:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1508BB84: add eax, -2 */
    _flag_k = FK_ADD;
L_1508BB87:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508BB87: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BB94; /* 0x1508BB8B: je 0x1508bb94 */
L_1508BB8D:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508BB8D: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508BB90: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508BB94:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508BB94: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BB95: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BB9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BB9Cu);

L_1508BB9C:
    edi = edi; /* 0x1508BB9C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BB9E: push ebp */
    ebp = esp; /* 0x1508BB9F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508BBA1: push ecx */
    PUSH32(esp, ecx); /* 0x1508BBA2: push ecx */
    eax = MEM32(0x150BD340); /* 0x1508BBA3: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1508BBA8: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508BBAA: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1508BBAD: push ebx */
    PUSH32(esp, esi); /* 0x1508BBAE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508BBAF: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1508BBB2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BBD6; /* 0x1508BBB4: jne 0x1508bbd6 */
L_1508BBB6:
    RECOMP_CALL(sub_15036430); /* 0x1508BBB6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508BBBB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508BBBD:
    PUSH32(esp, 0x16u); /* 0x1508BBBD: push 0x16 */
L_1508BBBF:
    esi = POP32_VAL(esp); /* 0x1508BBBF: pop esi */
    PUSH32(esp, ebx); /* 0x1508BBC0: push ebx */
    PUSH32(esp, ebx); /* 0x1508BBC1: push ebx */
    PUSH32(esp, ebx); /* 0x1508BBC2: push ebx */
    PUSH32(esp, ebx); /* 0x1508BBC3: push ebx */
    PUSH32(esp, ebx); /* 0x1508BBC4: push ebx */
    MEM32(eax) = esi; /* 0x1508BBC5: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1508BBC7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BBCC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508BBCF:
    eax = esi; /* 0x1508BBCF: mov eax, esi */
    goto L_1508BD08; /* 0x1508BBD1: jmp 0x1508bd08 */
L_1508BBD6:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BBD6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1508BBD9: push esi */
    RECOMP_CALL(sub_1508ECC0); /* 0x1508BBDA: call 0x1508ecc0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508BBDF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508BBE0: pop ecx */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1508BBE1: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508BBF1; /* 0x1508BBE4: jb 0x1508bbf1 */
L_1508BBE6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508BBE6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1508BBE8: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508BBEA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508BBBD; /* 0x1508BBEF: jmp 0x1508bbbd */
L_1508BBF1:
    ecx = MEM32(ebp + 0x10); /* 0x1508BBF1: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x1508BBF4: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1508BBF6: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BC3B; /* 0x1508BBFA: je 0x1508bc3b */
L_1508BBFC:
    PUSH32(esp, 1); /* 0x1508BBFC: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508BBFE: push dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508BC01: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1508BC03: push ebx */
    PUSH32(esp, ebx); /* 0x1508BC04: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508BC05: push -1 */
    PUSH32(esp, esi); /* 0x1508BC07: push esi */
    PUSH32(esp, 0x100u); /* 0x1508BC08: push 0x100 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1508BC0D: push dword ptr [eax + 0x14] */
    PUSH32(esp, ecx); /* 0x1508BC10: push ecx */
    RECOMP_CALL(sub_15058910); /* 0x1508BC11: call 0x15058910 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1508BC16: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1508BC18: add esp, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1508BC1B: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x1508BC1E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BC48; /* 0x1508BC20: jne 0x1508bc48 */
L_1508BC22:
    RECOMP_CALL(sub_15036430); /* 0x1508BC22: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1508BC27: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1508BC29: pop esi */
    MEM32(eax) = esi; /* 0x1508BC2A: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1508BBCF; /* 0x1508BC2C: jmp 0x1508bbcf */
L_1508BC2E:
    eax = ecx + (-0x41); /* 0x1508BC2E: lea eax, [ecx - 0x41] */
    /* cmp LO8(eax), 0x19u */ /* 0x1508BC31: cmp al, 0x19 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508BC3A; /* 0x1508BC33: ja 0x1508bc3a */
L_1508BC35:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x20u); /* 0x1508BC35: add cl, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1508BC38: mov byte ptr [esi], cl */
L_1508BC3A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508BC3A: inc esi */
    _flag_k = FK_INC;
L_1508BC3B:
    SET_LO8(ecx, MEM8(esi)); /* 0x1508BC3B: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1508BC3D: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BC2E; /* 0x1508BC3F: jne 0x1508bc2e */
L_1508BC41:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BC41: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508BD08; /* 0x1508BC43: jmp 0x1508bd08 */
L_1508BC48:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1508BC48: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508BC5B; /* 0x1508BC4B: jae 0x1508bc5b */
L_1508BC4D:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1508BC4D: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508BC4F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508BC54: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508BBBF; /* 0x1508BC56: jmp 0x1508bbbf */
L_1508BC5B:
    /* test ecx, ecx */ /* 0x1508BC5B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1508BCFC; /* 0x1508BC5D: jle 0x1508bcfc */
L_1508BC63:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x1508BC63: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1508BC65: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1508BC67: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1508BC68: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 1 */ /* 0x1508BC6A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508BCFC; /* 0x1508BC6D: jb 0x1508bcfc */
L_1508BC73:
    eax = ecx + 0x8; /* 0x1508BC73: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x1508BC76: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508BCAD; /* 0x1508BC78: jbe 0x1508bcad */
L_1508BC7A:
    /* cmp eax, 0x400u */ /* 0x1508BC7A: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1508BC94; /* 0x1508BC7F: ja 0x1508bc94 */
L_1508BC81:
    RECOMP_CALL(sub_15069EB0); /* 0x1508BC81: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x1508BC86: mov ebx, esp */
    /* test ebx, ebx */ /* 0x1508BC88: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508BCAA; /* 0x1508BC8A: je 0x1508bcaa */
L_1508BC8C:
    MEM32(ebx) = 0xCCCCu; /* 0x1508BC8C: mov dword ptr [ebx], 0xcccc */
    goto L_1508BCA7; /* 0x1508BC92: jmp 0x1508bca7 */
L_1508BC94:
    PUSH32(esp, eax); /* 0x1508BC94: push eax */
    RECOMP_CALL(sub_15048A30); /* 0x1508BC95: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1508BC9A: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1508BC9C: pop ecx */
    /* test ebx, ebx */ /* 0x1508BC9D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508BCAA; /* 0x1508BC9F: je 0x1508bcaa */
L_1508BCA1:
    MEM32(ebx) = 0xDDDDu; /* 0x1508BCA1: mov dword ptr [ebx], 0xdddd */
L_1508BCA7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1508BCA7: add ebx, 8 */
    _flag_k = FK_ADD;
L_1508BCAA:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508BCAA: mov ecx, dword ptr [ebp - 8] */
L_1508BCAD:
    /* test ebx, ebx */ /* 0x1508BCAD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508BCFC; /* 0x1508BCAF: je 0x1508bcfc */
L_1508BCB1:
    edx = MEM32(ebp + 0x10); /* 0x1508BCB1: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x1508BCB4: push 1 */
    eax = MEM32(edx); /* 0x1508BCB6: mov eax, dword ptr [edx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508BCB8: push dword ptr [eax + 4] */
    PUSH32(esp, ecx); /* 0x1508BCBB: push ecx */
    PUSH32(esp, ebx); /* 0x1508BCBC: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508BCBD: push -1 */
    PUSH32(esp, esi); /* 0x1508BCBF: push esi */
    PUSH32(esp, 0x100u); /* 0x1508BCC0: push 0x100 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1508BCC5: push dword ptr [eax + 0x14] */
    PUSH32(esp, edx); /* 0x1508BCC8: push edx */
    RECOMP_CALL(sub_15058910); /* 0x1508BCC9: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1508BCCE: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508BCD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508BCE6; /* 0x1508BCD3: je 0x1508bce6 */
L_1508BCD5:
    PUSH32(esp, ebx); /* 0x1508BCD5: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BCD6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1508BCD9: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1508BCDA: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508BCDF: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1508BCE2: mov esi, eax */
    goto L_1508BCF0; /* 0x1508BCE4: jmp 0x1508bcf0 */
L_1508BCE6:
    RECOMP_CALL(sub_15036430); /* 0x1508BCE6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1508BCEB: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1508BCED: pop esi */
    MEM32(eax) = esi; /* 0x1508BCEE: mov dword ptr [eax], esi */
L_1508BCF0:
    PUSH32(esp, ebx); /* 0x1508BCF0: push ebx */
    RECOMP_CALL(sub_1504ABA0); /* 0x1508BCF1: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508BCF6: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1508BBCF; /* 0x1508BCF7: jmp 0x1508bbcf */
L_1508BCFC:
    RECOMP_CALL(sub_15036430); /* 0x1508BCFC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1508BD01: push 0xc */
    ecx = POP32_VAL(esp); /* 0x1508BD03: pop ecx */
    MEM32(eax) = ecx; /* 0x1508BD04: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1508BD06: mov eax, ecx */
L_1508BD08:
    esp = ebp + (-0x10); /* 0x1508BD08: lea esp, [ebp - 0x10] */
    esi = POP32_VAL(esp); /* 0x1508BD0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508BD0C: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1508BD0D: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1508BD10: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1508BD12: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508BD17: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BD18: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BD20u);

L_1508BD20:
    edi = edi; /* 0x1508BD20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BD22: push ebp */
    ebp = esp; /* 0x1508BD23: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508BD25: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BD72; /* 0x1508BD2C: jne 0x1508bd72 */
L_1508BD2E:
    edx = MEM32(ebp + 0x8); /* 0x1508BD2E: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1508BD31: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BD53; /* 0x1508BD33: jne 0x1508bd53 */
L_1508BD35:
    RECOMP_CALL(sub_15036430); /* 0x1508BD35: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BD3A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BD40: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BD42: push eax */
    PUSH32(esp, eax); /* 0x1508BD43: push eax */
    PUSH32(esp, eax); /* 0x1508BD44: push eax */
    PUSH32(esp, eax); /* 0x1508BD45: push eax */
    PUSH32(esp, eax); /* 0x1508BD46: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BD47: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BD4C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BD4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1508BD51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BD52: ret  */
L_1508BD53:
    SET_LO8(ecx, MEM8(edx)); /* 0x1508BD53: mov cl, byte ptr [edx] */
    PUSH32(esp, esi); /* 0x1508BD55: push esi */
    esi = edx; /* 0x1508BD56: mov esi, edx */
    goto L_1508BD69; /* 0x1508BD58: jmp 0x1508bd69 */
L_1508BD5A:
    eax = ecx + (-0x41); /* 0x1508BD5A: lea eax, [ecx - 0x41] */
    /* cmp LO8(eax), 0x19u */ /* 0x1508BD5D: cmp al, 0x19 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508BD66; /* 0x1508BD5F: ja 0x1508bd66 */
L_1508BD61:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x20u); /* 0x1508BD61: add cl, 0x20 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1508BD64: mov byte ptr [esi], cl */
L_1508BD66:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508BD66: inc esi */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(esi)); /* 0x1508BD67: mov cl, byte ptr [esi] */
L_1508BD69:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1508BD69: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BD5A; /* 0x1508BD6B: jne 0x1508bd5a */
L_1508BD6D:
    eax = edx; /* 0x1508BD6D: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x1508BD6F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508BD70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BD71: ret  */
L_1508BD72:
    PUSH32(esp, 0); /* 0x1508BD72: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508BD74: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BD76: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BDD0); /* 0x1508BD79: call 0x1508bdd0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508BD7E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508BD81: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508BD84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BD85: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BD90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BD90u);

L_1508BD90:
    edi = edi; /* 0x1508BD90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BD92: push ebp */
    ebp = esp; /* 0x1508BD93: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BD95: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508BD98: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BD9A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BDD0); /* 0x1508BD9D: call 0x1508bdd0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508BDA2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508BDA5: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508BDA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BDA9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BDB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BDB0u);

L_1508BDB0:
    edi = edi; /* 0x1508BDB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BDB2: push ebp */
    ebp = esp; /* 0x1508BDB3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1508BDB5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BDB7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BDBA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BDD0); /* 0x1508BDBD: call 0x1508bdd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508BDC2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508BDC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BDC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BDD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BDD0u);

L_1508BDD0:
    edi = edi; /* 0x1508BDD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BDD2: push ebp */
    ebp = esp; /* 0x1508BDD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508BDD5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508BDD8: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1508BDDB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508BDDE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1508BDE3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508BDE6: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BDE7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BDEA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BB9C); /* 0x1508BDED: call 0x1508bb9c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508BDF2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508BDF5: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BE02; /* 0x1508BDF9: je 0x1508be02 */
L_1508BDFB:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508BDFB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508BDFE: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508BE02:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508BE02: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BE03: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BE10u);

L_1508BE10:
    edi = edi; /* 0x1508BE10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BE12: push ebp */
    ebp = esp; /* 0x1508BE13: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508BE15: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508BE1C: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BE7B; /* 0x1508BE1D: jne 0x1508be7b */
L_1508BE1F:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508BE1F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BE46; /* 0x1508BE23: jne 0x1508be46 */
L_1508BE25:
    RECOMP_CALL(sub_15036430); /* 0x1508BE25: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BE2A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BE30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BE32: push eax */
    PUSH32(esp, eax); /* 0x1508BE33: push eax */
    PUSH32(esp, eax); /* 0x1508BE34: push eax */
    PUSH32(esp, eax); /* 0x1508BE35: push eax */
    PUSH32(esp, eax); /* 0x1508BE36: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BE37: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BE3C: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508BE3F: mov eax, 0x7fffffff */
    goto L_1508BE8E; /* 0x1508BE44: jmp 0x1508be8e */
L_1508BE46:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508BE46: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BE25; /* 0x1508BE4A: je 0x1508be25 */
L_1508BE4C:
    esi = 0x7FFFFFFFu; /* 0x1508BE4C: mov esi, 0x7fffffff */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1508BE51: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508BE74; /* 0x1508BE54: jbe 0x1508be74 */
L_1508BE56:
    RECOMP_CALL(sub_15036430); /* 0x1508BE56: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BE5B: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BE61: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BE63: push eax */
    PUSH32(esp, eax); /* 0x1508BE64: push eax */
    PUSH32(esp, eax); /* 0x1508BE65: push eax */
    PUSH32(esp, eax); /* 0x1508BE66: push eax */
    PUSH32(esp, eax); /* 0x1508BE67: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BE68: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BE6D: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508BE70: mov eax, esi */
    goto L_1508BE8E; /* 0x1508BE72: jmp 0x1508be8e */
L_1508BE74:
    esi = POP32_VAL(esp); /* 0x1508BE74: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508BE75: pop ebp */
    goto L_1508E9E0; /* 0x1508BE76: jmp 0x1508e9e0 */
L_1508BE7B:
    PUSH32(esp, 0); /* 0x1508BE7B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508BE7D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BE80: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BE83: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508BEA0); /* 0x1508BE86: call 0x1508bea0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508BE8B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1508BE8E:
    esi = POP32_VAL(esp); /* 0x1508BE8E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508BE8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BE90: ret  */
L_1508E9E0:
    edi = edi; /* 0x1508E9E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508E9E2: push ebp */
    ebp = esp; /* 0x1508E9E3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508E9E5: push ecx */
    PUSH32(esp, ebx); /* 0x1508E9E6: push ebx */
    PUSH32(esp, esi); /* 0x1508E9E7: push esi */
    PUSH32(esp, edi); /* 0x1508E9E8: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1508E9E9: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508E9EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1508E9EE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA5F; /* 0x1508E9F0: je 0x1508ea5f */
L_1508E9F2:
    ecx = MEM32(ebp + 0xC); /* 0x1508E9F2: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1508E9F5: mov edx, dword ptr [ebp + 8] */
    /* cmp edi, 4 */ /* 0x1508E9F8: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508EA48; /* 0x1508E9FB: jb 0x1508ea48 */
L_1508E9FD:
    ebx = edi + (-0x4); /* 0x1508E9FD: lea ebx, [edi - 4] */
    /* test ebx, ebx */ /* 0x1508EA00: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA4C; /* 0x1508EA02: je 0x1508ea4c */
L_1508EA04:
    SET_LO8(eax, MEM8(edx)); /* 0x1508EA04: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1508EA06: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1508EA09: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1508EA0C: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA0F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA78; /* 0x1508EA11: je 0x1508ea78 */
L_1508EA13:
    edi = MEM32(ebp + (-0x4)); /* 0x1508EA13: mov edi, dword ptr [ebp - 4] */
    /* cmp LO8(eax), MEM8(edi) */ /* 0x1508EA16: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(ebp + 0x10); /* 0x1508EA18: mov edi, dword ptr [ebp + 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA78; /* 0x1508EA1B: jne 0x1508ea78 */
L_1508EA1D:
    SET_LO8(eax, MEM8(edx + (-0x3))); /* 0x1508EA1D: mov al, byte ptr [edx - 3] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA20: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA72; /* 0x1508EA22: je 0x1508ea72 */
L_1508EA24:
    /* cmp LO8(eax), MEM8(ecx + (-0x3)) */ /* 0x1508EA24: cmp al, byte ptr [ecx - 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + (-0x3))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA72; /* 0x1508EA27: jne 0x1508ea72 */
L_1508EA29:
    SET_LO8(eax, MEM8(edx + (-0x2))); /* 0x1508EA29: mov al, byte ptr [edx - 2] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA2C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA6C; /* 0x1508EA2E: je 0x1508ea6c */
L_1508EA30:
    /* cmp LO8(eax), MEM8(ecx + (-0x2)) */ /* 0x1508EA30: cmp al, byte ptr [ecx - 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + (-0x2))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA6C; /* 0x1508EA33: jne 0x1508ea6c */
L_1508EA35:
    SET_LO8(eax, MEM8(edx + (-0x1))); /* 0x1508EA35: mov al, byte ptr [edx - 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA38: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA66; /* 0x1508EA3A: je 0x1508ea66 */
L_1508EA3C:
    /* cmp LO8(eax), MEM8(ecx + (-0x1)) */ /* 0x1508EA3C: cmp al, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + (-0x1))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA66; /* 0x1508EA3F: jne 0x1508ea66 */
L_1508EA41:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1508EA41: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x1508EA44: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508EA04; /* 0x1508EA46: jb 0x1508ea04 */
L_1508EA48:
    /* cmp esi, edi */ /* 0x1508EA48: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508EA5F; /* 0x1508EA4A: jae 0x1508ea5f */
L_1508EA4C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508EA4C: sub edx, ecx */
    _flag_k = FK_CMP;
L_1508EA4E:
    SET_LO8(eax, MEM8(edx + ecx)); /* 0x1508EA4E: mov al, byte ptr [edx + ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA51: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA7B; /* 0x1508EA53: je 0x1508ea7b */
L_1508EA55:
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1508EA55: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA7B; /* 0x1508EA57: jne 0x1508ea7b */
L_1508EA59:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508EA59: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1508EA5A: inc ecx */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1508EA5B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508EA4E; /* 0x1508EA5D: jb 0x1508ea4e */
L_1508EA5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EA5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508EA61:
    edi = POP32_VAL(esp); /* 0x1508EA61: pop edi */
    esi = POP32_VAL(esp); /* 0x1508EA62: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508EA63: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508EA64: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EA65: ret  */
L_1508EA66:
    ecx = (uint32_t)MEM8(ecx + (-0x1)); /* 0x1508EA66: movzx ecx, byte ptr [ecx - 1] */
    goto L_1508EA7E; /* 0x1508EA6A: jmp 0x1508ea7e */
L_1508EA6C:
    ecx = (uint32_t)MEM8(ecx + (-0x2)); /* 0x1508EA6C: movzx ecx, byte ptr [ecx - 2] */
    goto L_1508EA7E; /* 0x1508EA70: jmp 0x1508ea7e */
L_1508EA72:
    ecx = (uint32_t)MEM8(ecx + (-0x3)); /* 0x1508EA72: movzx ecx, byte ptr [ecx - 3] */
    goto L_1508EA7E; /* 0x1508EA76: jmp 0x1508ea7e */
L_1508EA78:
    ecx = MEM32(ebp + (-0x4)); /* 0x1508EA78: mov ecx, dword ptr [ebp - 4] */
L_1508EA7B:
    ecx = (uint32_t)MEM8(ecx); /* 0x1508EA7B: movzx ecx, byte ptr [ecx] */
L_1508EA7E:
    eax = (uint32_t)LO8(eax); /* 0x1508EA7E: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508EA81: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1508EA61; /* 0x1508EA83: jmp 0x1508ea61 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508BEA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BEA0u);

L_1508BEA0:
    edi = edi; /* 0x1508BEA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BEA2: push ebp */
    ebp = esp; /* 0x1508BEA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508BEA5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1508BEA8: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1508BEA9: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1508BEAC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BEB7; /* 0x1508BEAE: jne 0x1508beb7 */
L_1508BEB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BEB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508BF77; /* 0x1508BEB2: jmp 0x1508bf77 */
L_1508BEB7:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508BEB7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BEE1; /* 0x1508BEBB: jne 0x1508bee1 */
L_1508BEBD:
    RECOMP_CALL(sub_15036430); /* 0x1508BEBD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BEC2: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BEC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BECA: push eax */
    PUSH32(esp, eax); /* 0x1508BECB: push eax */
    PUSH32(esp, eax); /* 0x1508BECC: push eax */
    PUSH32(esp, eax); /* 0x1508BECD: push eax */
    PUSH32(esp, eax); /* 0x1508BECE: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BECF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BED4: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508BED7: mov eax, 0x7fffffff */
    goto L_1508BF77; /* 0x1508BEDC: jmp 0x1508bf77 */
L_1508BEE1:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508BEE1: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BEBD; /* 0x1508BEE5: je 0x1508bebd */
L_1508BEE7:
    PUSH32(esp, esi); /* 0x1508BEE7: push esi */
    esi = 0x7FFFFFFFu; /* 0x1508BEE8: mov esi, 0x7fffffff */
    /* cmp edi, esi */ /* 0x1508BEED: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508BF0D; /* 0x1508BEEF: jbe 0x1508bf0d */
L_1508BEF1:
    RECOMP_CALL(sub_15036430); /* 0x1508BEF1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BEF6: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BEFC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BEFE: push eax */
    PUSH32(esp, eax); /* 0x1508BEFF: push eax */
    PUSH32(esp, eax); /* 0x1508BF00: push eax */
    PUSH32(esp, eax); /* 0x1508BF01: push eax */
    PUSH32(esp, eax); /* 0x1508BF02: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BF03: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BF08: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508BF74; /* 0x1508BF0B: jmp 0x1508bf74 */
L_1508BF0D:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508BF0D: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x1508BF10: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508BF13: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1508BF18: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1508BF1B: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BF34; /* 0x1508BF1F: jne 0x1508bf34 */
L_1508BF21:
    PUSH32(esp, edi); /* 0x1508BF21: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BF22: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BF25: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508E9E0); /* 0x1508BF28: call 0x1508e9e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508BF2D: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1508BF30: mov esi, eax */
    goto L_1508BF67; /* 0x1508BF32: jmp 0x1508bf67 */
L_1508BF34:
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1508BF34: push dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x1508BF37: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BF38: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1508BF3B: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BF3C: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x1000u); /* 0x1508BF3F: push 0x1000 */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1508BF44: push dword ptr [eax + 0x10] */
    eax = ebp + (-0x10); /* 0x1508BF47: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508BF4A: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x1508BF4B: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508BF50: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508BF53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508BF64; /* 0x1508BF55: jne 0x1508bf64 */
L_1508BF57:
    RECOMP_CALL(sub_15036430); /* 0x1508BF57: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BF5C: mov dword ptr [eax], 0x16 */
    goto L_1508BF67; /* 0x1508BF62: jmp 0x1508bf67 */
L_1508BF64:
    esi = eax + (-0x2); /* 0x1508BF64: lea esi, [eax - 2] */
L_1508BF67:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508BF67: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BF74; /* 0x1508BF6B: je 0x1508bf74 */
L_1508BF6D:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508BF6D: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508BF70: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508BF74:
    eax = esi; /* 0x1508BF74: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508BF76: pop esi */
L_1508BF77:
    edi = POP32_VAL(esp); /* 0x1508BF77: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508BF78: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508BF79: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508BF80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508BF80u);

L_1508BF80:
    edi = edi; /* 0x1508BF80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BF82: push ebp */
    ebp = esp; /* 0x1508BF83: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508BF85: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508BF8C: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BFEB; /* 0x1508BF8D: jne 0x1508bfeb */
L_1508BF8F:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508BF8F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BFB6; /* 0x1508BF93: jne 0x1508bfb6 */
L_1508BF95:
    RECOMP_CALL(sub_15036430); /* 0x1508BF95: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BF9A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BFA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BFA2: push eax */
    PUSH32(esp, eax); /* 0x1508BFA3: push eax */
    PUSH32(esp, eax); /* 0x1508BFA4: push eax */
    PUSH32(esp, eax); /* 0x1508BFA5: push eax */
    PUSH32(esp, eax); /* 0x1508BFA6: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BFA7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BFAC: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508BFAF: mov eax, 0x7fffffff */
    goto L_1508BFFE; /* 0x1508BFB4: jmp 0x1508bffe */
L_1508BFB6:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508BFB6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BF95; /* 0x1508BFBA: je 0x1508bf95 */
L_1508BFBC:
    esi = 0x7FFFFFFFu; /* 0x1508BFBC: mov esi, 0x7fffffff */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1508BFC1: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508BFE4; /* 0x1508BFC4: jbe 0x1508bfe4 */
L_1508BFC6:
    RECOMP_CALL(sub_15036430); /* 0x1508BFC6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BFCB: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BFD1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BFD3: push eax */
    PUSH32(esp, eax); /* 0x1508BFD4: push eax */
    PUSH32(esp, eax); /* 0x1508BFD5: push eax */
    PUSH32(esp, eax); /* 0x1508BFD6: push eax */
    PUSH32(esp, eax); /* 0x1508BFD7: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BFD8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BFDD: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508BFE0: mov eax, esi */
    goto L_1508BFFE; /* 0x1508BFE2: jmp 0x1508bffe */
L_1508BFE4:
    esi = POP32_VAL(esp); /* 0x1508BFE4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508BFE5: pop ebp */
    goto L_1508FB50; /* 0x1508BFE6: jmp 0x1508fb50 */
L_1508BFEB:
    PUSH32(esp, 0); /* 0x1508BFEB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508BFED: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BFF0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BFF3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C010); /* 0x1508BFF6: call 0x1508c010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508BFFB: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1508BFFE:
    esi = POP32_VAL(esp); /* 0x1508BFFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508BFFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C000: ret  */
L_1508FB50:
    PUSH32(esp, ebp); /* 0x1508FB50: push ebp */
    ebp = esp; /* 0x1508FB51: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508FB53: push edi */
    PUSH32(esp, esi); /* 0x1508FB54: push esi */
    PUSH32(esp, ebx); /* 0x1508FB55: push ebx */
    ecx = MEM32(ebp + 0x10); /* 0x1508FB56: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x1508FB59: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FBAA; /* 0x1508FB5B: je 0x1508fbaa */
L_1508FB5D:
    esi = MEM32(ebp + 0x8); /* 0x1508FB5D: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x1508FB60: mov edi, dword ptr [ebp + 0xc] */
    SET_HI8(ebx, 0x41u); /* 0x1508FB63: mov bh, 0x41 */
    SET_LO8(ebx, 0x5Au); /* 0x1508FB65: mov bl, 0x5a */
    SET_HI8(edx, 0x20u); /* 0x1508FB67: mov dh, 0x20 */
    ecx = ecx; /* 0x1508FB69: lea ecx, [ecx] */
L_1508FB6C:
    SET_HI8(eax, MEM8(esi)); /* 0x1508FB6C: mov ah, byte ptr [esi] */
    _flag_a = (uint32_t)((HI8(eax) | HI8(eax))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(eax))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(eax)); /* 0x1508FB6E: or ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(edi)); /* 0x1508FB70: mov al, byte ptr [edi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FB9B; /* 0x1508FB72: je 0x1508fb9b */
L_1508FB74:
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508FB74: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FB9B; /* 0x1508FB76: je 0x1508fb9b */
L_1508FB78:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508FB78: add esi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508FB7B: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp HI8(eax), HI8(ebx) */ /* 0x1508FB7E: cmp ah, bh */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1508FB88; /* 0x1508FB80: jb 0x1508fb88 */
L_1508FB82:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1508FB82: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508FB88; /* 0x1508FB84: ja 0x1508fb88 */
L_1508FB86:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + HI8(edx)); /* 0x1508FB86: add ah, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1508FB88:
    /* cmp LO8(eax), HI8(ebx) */ /* 0x1508FB88: cmp al, bh */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1508FB92; /* 0x1508FB8A: jb 0x1508fb92 */
L_1508FB8C:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1508FB8C: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508FB92; /* 0x1508FB8E: ja 0x1508fb92 */
L_1508FB90:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x1508FB90: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1508FB92:
    /* cmp HI8(eax), LO8(eax) */ /* 0x1508FB92: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508FBA1; /* 0x1508FB94: jne 0x1508fba1 */
L_1508FB96:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508FB96: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508FB6C; /* 0x1508FB99: jne 0x1508fb6c */
L_1508FB9B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508FB9B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp HI8(eax), LO8(eax) */ /* 0x1508FB9D: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FBAA; /* 0x1508FB9F: je 0x1508fbaa */
L_1508FBA1:
    ecx = 0xFFFFFFFFu; /* 0x1508FBA1: mov ecx, 0xffffffff */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1508FBAA; /* 0x1508FBA6: jb 0x1508fbaa */
L_1508FBA8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508FBA8: neg ecx */
    _flag_k = FK_CMP;
L_1508FBAA:
    eax = ecx; /* 0x1508FBAA: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1508FBAC: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508FBAD: pop esi */
    edi = POP32_VAL(esp); /* 0x1508FBAE: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508FBAF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FBB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C010u);

L_1508C010:
    edi = edi; /* 0x1508C010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C012: push ebp */
    ebp = esp; /* 0x1508C013: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508C015: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1508C018: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C0C5; /* 0x1508C01C: je 0x1508c0c5 */
L_1508C022:
    PUSH32(esp, ebx); /* 0x1508C022: push ebx */
    PUSH32(esp, esi); /* 0x1508C023: push esi */
    PUSH32(esp, edi); /* 0x1508C024: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508C025: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x1508C028: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508C02B: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1508C030: mov edi, dword ptr [ebp + 8] */
    esi = 0x7FFFFFFFu; /* 0x1508C033: mov esi, 0x7fffffff */
    /* test edi, edi */ /* 0x1508C038: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C04A; /* 0x1508C03A: je 0x1508c04a */
L_1508C03C:
    ebx = MEM32(ebp + 0xC); /* 0x1508C03C: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508C03F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C04A; /* 0x1508C041: je 0x1508c04a */
L_1508C043:
    ecx = MEM32(ebp + 0x10); /* 0x1508C043: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, esi */ /* 0x1508C046: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508C066; /* 0x1508C048: jbe 0x1508c066 */
L_1508C04A:
    RECOMP_CALL(sub_15036430); /* 0x1508C04A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C04F: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C055: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508C057: push eax */
    PUSH32(esp, eax); /* 0x1508C058: push eax */
    PUSH32(esp, eax); /* 0x1508C059: push eax */
    PUSH32(esp, eax); /* 0x1508C05A: push eax */
    PUSH32(esp, eax); /* 0x1508C05B: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508C05C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C061: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508C0B1; /* 0x1508C064: jmp 0x1508c0b1 */
L_1508C066:
    eax = MEM32(ebp + (-0x10)); /* 0x1508C066: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1508C069: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C07E; /* 0x1508C06D: jne 0x1508c07e */
L_1508C06F:
    PUSH32(esp, ecx); /* 0x1508C06F: push ecx */
    PUSH32(esp, ebx); /* 0x1508C070: push ebx */
    PUSH32(esp, edi); /* 0x1508C071: push edi */
    RECOMP_CALL(sub_1508FB50); /* 0x1508C072: call 0x1508fb50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C077: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1508C07A: mov esi, eax */
    goto L_1508C0B1; /* 0x1508C07C: jmp 0x1508c0b1 */
L_1508C07E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508C07E: sub edi, ebx */
    _flag_k = FK_CMP;
L_1508C080:
    eax = (uint32_t)MEM8(edi + ebx); /* 0x1508C080: movzx eax, byte ptr [edi + ebx] */
    ecx = ebp + (-0x10); /* 0x1508C084: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1508C087: push ecx */
    PUSH32(esp, eax); /* 0x1508C088: push eax */
    RECOMP_CALL(sub_15032A50); /* 0x1508C089: call 0x15032a50 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x10); /* 0x1508C08E: lea ecx, [ebp - 0x10] */
    esi = eax; /* 0x1508C091: mov esi, eax */
    eax = (uint32_t)MEM8(ebx); /* 0x1508C093: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1508C096: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x1508C097: push ecx */
    PUSH32(esp, eax); /* 0x1508C098: push eax */
    RECOMP_CALL(sub_15032A50); /* 0x1508C099: call 0x15032a50 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508C09E: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1508C0A1: sub dword ptr [ebp + 0x10], 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508C0AF; /* 0x1508C0A5: je 0x1508c0af */
L_1508C0A7:
    /* test esi, esi */ /* 0x1508C0A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C0AF; /* 0x1508C0A9: je 0x1508c0af */
L_1508C0AB:
    /* cmp esi, eax */ /* 0x1508C0AB: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C080; /* 0x1508C0AD: je 0x1508c080 */
L_1508C0AF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1508C0AF: sub esi, eax */
    _flag_k = FK_CMP;
L_1508C0B1:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508C0B1: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C0BE; /* 0x1508C0B5: je 0x1508c0be */
L_1508C0B7:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508C0B7: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508C0BA: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C0BE:
    edi = POP32_VAL(esp); /* 0x1508C0BE: pop edi */
    eax = esi; /* 0x1508C0BF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508C0C1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508C0C2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C0C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C0C4: ret  */
L_1508C0C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C0C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C0C7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C0C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C0D0u);

    goto L_1508C0D0;
L_1508BF80:
    edi = edi; /* 0x1508BF80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508BF82: push ebp */
    ebp = esp; /* 0x1508BF83: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508BF85: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508BF8C: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BFEB; /* 0x1508BF8D: jne 0x1508bfeb */
L_1508BF8F:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508BF8F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508BFB6; /* 0x1508BF93: jne 0x1508bfb6 */
L_1508BF95:
    RECOMP_CALL(sub_15036430); /* 0x1508BF95: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BF9A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BFA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BFA2: push eax */
    PUSH32(esp, eax); /* 0x1508BFA3: push eax */
    PUSH32(esp, eax); /* 0x1508BFA4: push eax */
    PUSH32(esp, eax); /* 0x1508BFA5: push eax */
    PUSH32(esp, eax); /* 0x1508BFA6: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BFA7: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BFAC: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508BFAF: mov eax, 0x7fffffff */
    goto L_1508BFFE; /* 0x1508BFB4: jmp 0x1508bffe */
L_1508BFB6:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508BFB6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508BF95; /* 0x1508BFBA: je 0x1508bf95 */
L_1508BFBC:
    esi = 0x7FFFFFFFu; /* 0x1508BFBC: mov esi, 0x7fffffff */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1508BFC1: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508BFE4; /* 0x1508BFC4: jbe 0x1508bfe4 */
L_1508BFC6:
    RECOMP_CALL(sub_15036430); /* 0x1508BFC6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508BFCB: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508BFD1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508BFD3: push eax */
    PUSH32(esp, eax); /* 0x1508BFD4: push eax */
    PUSH32(esp, eax); /* 0x1508BFD5: push eax */
    PUSH32(esp, eax); /* 0x1508BFD6: push eax */
    PUSH32(esp, eax); /* 0x1508BFD7: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508BFD8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508BFDD: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508BFE0: mov eax, esi */
    goto L_1508BFFE; /* 0x1508BFE2: jmp 0x1508bffe */
L_1508BFE4:
    esi = POP32_VAL(esp); /* 0x1508BFE4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508BFE5: pop ebp */
    goto L_1508FB50; /* 0x1508BFE6: jmp 0x1508fb50 */
L_1508BFEB:
    PUSH32(esp, 0); /* 0x1508BFEB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508BFED: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508BFF0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508BFF3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C010); /* 0x1508BFF6: call 0x1508c010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508BFFB: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1508BFFE:
    esi = POP32_VAL(esp); /* 0x1508BFFE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508BFFF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C000: ret  */
L_1508C0D0:
    edi = edi; /* 0x1508C0D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C0D2: push ebp */
    ebp = esp; /* 0x1508C0D3: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508C0D5: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C0E4; /* 0x1508C0DC: jne 0x1508c0e4 */
L_1508C0DE:
    ebp = POP32_VAL(esp); /* 0x1508C0DE: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1508BF80; /* 0x1508C0DF: jmp 0x1508bf80 */
L_1508C0E4:
    PUSH32(esp, 0); /* 0x1508C0E4: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508C0E6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C0E9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C0EC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C100); /* 0x1508C0EF: call 0x1508c100 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508C0F4: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508C0F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C0F8: ret  */
L_1508FB50:
    PUSH32(esp, ebp); /* 0x1508FB50: push ebp */
    ebp = esp; /* 0x1508FB51: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508FB53: push edi */
    PUSH32(esp, esi); /* 0x1508FB54: push esi */
    PUSH32(esp, ebx); /* 0x1508FB55: push ebx */
    ecx = MEM32(ebp + 0x10); /* 0x1508FB56: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x1508FB59: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FBAA; /* 0x1508FB5B: je 0x1508fbaa */
L_1508FB5D:
    esi = MEM32(ebp + 0x8); /* 0x1508FB5D: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x1508FB60: mov edi, dword ptr [ebp + 0xc] */
    SET_HI8(ebx, 0x41u); /* 0x1508FB63: mov bh, 0x41 */
    SET_LO8(ebx, 0x5Au); /* 0x1508FB65: mov bl, 0x5a */
    SET_HI8(edx, 0x20u); /* 0x1508FB67: mov dh, 0x20 */
    ecx = ecx; /* 0x1508FB69: lea ecx, [ecx] */
L_1508FB6C:
    SET_HI8(eax, MEM8(esi)); /* 0x1508FB6C: mov ah, byte ptr [esi] */
    _flag_a = (uint32_t)((HI8(eax) | HI8(eax))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(eax))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(eax)); /* 0x1508FB6E: or ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(edi)); /* 0x1508FB70: mov al, byte ptr [edi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FB9B; /* 0x1508FB72: je 0x1508fb9b */
L_1508FB74:
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508FB74: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FB9B; /* 0x1508FB76: je 0x1508fb9b */
L_1508FB78:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508FB78: add esi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508FB7B: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp HI8(eax), HI8(ebx) */ /* 0x1508FB7E: cmp ah, bh */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1508FB88; /* 0x1508FB80: jb 0x1508fb88 */
L_1508FB82:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1508FB82: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508FB88; /* 0x1508FB84: ja 0x1508fb88 */
L_1508FB86:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + HI8(edx)); /* 0x1508FB86: add ah, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1508FB88:
    /* cmp LO8(eax), HI8(ebx) */ /* 0x1508FB88: cmp al, bh */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1508FB92; /* 0x1508FB8A: jb 0x1508fb92 */
L_1508FB8C:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1508FB8C: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508FB92; /* 0x1508FB8E: ja 0x1508fb92 */
L_1508FB90:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x1508FB90: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1508FB92:
    /* cmp HI8(eax), LO8(eax) */ /* 0x1508FB92: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508FBA1; /* 0x1508FB94: jne 0x1508fba1 */
L_1508FB96:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508FB96: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508FB6C; /* 0x1508FB99: jne 0x1508fb6c */
L_1508FB9B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508FB9B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp HI8(eax), LO8(eax) */ /* 0x1508FB9D: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FBAA; /* 0x1508FB9F: je 0x1508fbaa */
L_1508FBA1:
    ecx = 0xFFFFFFFFu; /* 0x1508FBA1: mov ecx, 0xffffffff */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1508FBAA; /* 0x1508FBA6: jb 0x1508fbaa */
L_1508FBA8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508FBA8: neg ecx */
    _flag_k = FK_CMP;
L_1508FBAA:
    eax = ecx; /* 0x1508FBAA: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1508FBAC: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508FBAD: pop esi */
    edi = POP32_VAL(esp); /* 0x1508FBAE: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508FBAF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FBB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C100u);

L_1508C100:
    edi = edi; /* 0x1508C100: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C102: push ebp */
    ebp = esp; /* 0x1508C103: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508C105: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1508C108: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1508C10B: push esi */
    PUSH32(esp, edi); /* 0x1508C10C: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508C10D: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x1508C110: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1508C115: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1508C118: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C123; /* 0x1508C11A: jne 0x1508c123 */
L_1508C11C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508C11C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508C1C2; /* 0x1508C11E: jmp 0x1508c1c2 */
L_1508C123:
    ecx = MEM32(ebp + 0x8); /* 0x1508C123: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1508C126: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C131; /* 0x1508C128: je 0x1508c131 */
L_1508C12A:
    edx = MEM32(ebp + 0xC); /* 0x1508C12A: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1508C12D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C152; /* 0x1508C12F: jne 0x1508c152 */
L_1508C131:
    RECOMP_CALL(sub_15036430); /* 0x1508C131: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C136: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C13C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508C13E: push eax */
    PUSH32(esp, eax); /* 0x1508C13F: push eax */
    PUSH32(esp, eax); /* 0x1508C140: push eax */
    PUSH32(esp, eax); /* 0x1508C141: push eax */
    PUSH32(esp, eax); /* 0x1508C142: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508C143: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C148: add esp, 0x14 */
    _flag_k = FK_ADD;
    esi = 0x7FFFFFFFu; /* 0x1508C14B: mov esi, 0x7fffffff */
    goto L_1508C1C2; /* 0x1508C150: jmp 0x1508c1c2 */
L_1508C152:
    esi = 0x7FFFFFFFu; /* 0x1508C152: mov esi, 0x7fffffff */
    /* cmp eax, esi */ /* 0x1508C157: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508C177; /* 0x1508C159: jbe 0x1508c177 */
L_1508C15B:
    RECOMP_CALL(sub_15036430); /* 0x1508C15B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C160: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C166: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508C168: push eax */
    PUSH32(esp, eax); /* 0x1508C169: push eax */
    PUSH32(esp, eax); /* 0x1508C16A: push eax */
    PUSH32(esp, eax); /* 0x1508C16B: push eax */
    PUSH32(esp, eax); /* 0x1508C16C: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508C16D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C172: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508C1C2; /* 0x1508C175: jmp 0x1508c1c2 */
L_1508C177:
    edi = MEM32(ebp + (-0x10)); /* 0x1508C177: mov edi, dword ptr [ebp - 0x10] */
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x1508C17A: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C193; /* 0x1508C17E: jne 0x1508c193 */
L_1508C180:
    esi = ebp + (-0x10); /* 0x1508C180: lea esi, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1508C183: push esi */
    PUSH32(esp, eax); /* 0x1508C184: push eax */
    PUSH32(esp, edx); /* 0x1508C185: push edx */
    PUSH32(esp, ecx); /* 0x1508C186: push ecx */
    RECOMP_CALL(sub_1508C010); /* 0x1508C187: call 0x1508c010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508C18C: add esp, 0x10 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1508C18F: mov esi, eax */
    goto L_1508C1C2; /* 0x1508C191: jmp 0x1508c1c2 */
L_1508C193:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1508C193: push dword ptr [edi + 8] */
    PUSH32(esp, eax); /* 0x1508C196: push eax */
    PUSH32(esp, edx); /* 0x1508C197: push edx */
    PUSH32(esp, eax); /* 0x1508C198: push eax */
    PUSH32(esp, ecx); /* 0x1508C199: push ecx */
    PUSH32(esp, 0x1001u); /* 0x1508C19A: push 0x1001 */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x1508C19F: push dword ptr [edi + 0x10] */
    eax = ebp + (-0x10); /* 0x1508C1A2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508C1A5: push eax */
    RECOMP_CALL(sub_150584C0); /* 0x1508C1A6: call 0x150584c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508C1AB: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508C1AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C1BF; /* 0x1508C1B0: jne 0x1508c1bf */
L_1508C1B2:
    RECOMP_CALL(sub_15036430); /* 0x1508C1B2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C1B7: mov dword ptr [eax], 0x16 */
    goto L_1508C1C2; /* 0x1508C1BD: jmp 0x1508c1c2 */
L_1508C1BF:
    esi = eax + (-0x2); /* 0x1508C1BF: lea esi, [eax - 2] */
L_1508C1C2:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508C1C2: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C1CF; /* 0x1508C1C6: je 0x1508c1cf */
L_1508C1C8:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508C1C8: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508C1CB: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C1CF:
    edi = POP32_VAL(esp); /* 0x1508C1CF: pop edi */
    eax = esi; /* 0x1508C1D0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508C1D2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C1D3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C1D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C1E0u);

L_1508C1E0:
    PUSH32(esp, ebp); /* 0x1508C1E0: push ebp */
    ebp = esp; /* 0x1508C1E1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508C1E3: push edi */
    PUSH32(esp, ebx); /* 0x1508C1E4: push ebx */
    edi = MEM32(ebp + 0x8); /* 0x1508C1E5: mov edi, dword ptr [ebp + 8] */
    edx = edi; /* 0x1508C1E8: mov edx, edi */
    ebx = MEM32(ebp + 0x10); /* 0x1508C1EA: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C1ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1508C1EF: mov ecx, ebx */
    if (ecx == 0) goto L_1508C205; /* 0x1508C1F1: jecxz 0x1508c205 */
L_1508C1F3:
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1508C1F3: repne scasb al, byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1508C1FA; /* 0x1508C1F5: jne 0x1508c1fa */
L_1508C1F7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1508C1F7: add ecx, 1 */
    _flag_k = FK_ADD;
L_1508C1FA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1508C1FA: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x1508C1FC: mov ecx, ebx */
    edi = edx; /* 0x1508C1FE: mov edi, edx */
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x1508C200: mov al, byte ptr [ebp + 0xc] */
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1508C203: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
L_1508C205:
    eax = edx; /* 0x1508C205: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1508C207: pop ebx */
    edi = POP32_VAL(esp); /* 0x1508C208: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C209: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C20A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C220u);

L_1508C220:
    edi = edi; /* 0x1508C220: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C222: push ebp */
    ebp = esp; /* 0x1508C223: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1508C225: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1508C228: push ebx */
    PUSH32(esp, esi); /* 0x1508C229: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1508C22A: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x1508C22D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C259; /* 0x1508C22F: jne 0x1508c259 */
L_1508C231:
    /* test edx, edx */ /* 0x1508C231: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C25D; /* 0x1508C233: jne 0x1508c25d */
L_1508C235:
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1508C235: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C2A0; /* 0x1508C238: je 0x1508c2a0 */
L_1508C23A:
    RECOMP_CALL(sub_15036430); /* 0x1508C23A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C23F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C241:
    PUSH32(esp, 0x16u); /* 0x1508C241: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1508C243: pop esi */
    PUSH32(esp, ebx); /* 0x1508C244: push ebx */
    PUSH32(esp, ebx); /* 0x1508C245: push ebx */
    PUSH32(esp, ebx); /* 0x1508C246: push ebx */
    PUSH32(esp, ebx); /* 0x1508C247: push ebx */
    PUSH32(esp, ebx); /* 0x1508C248: push ebx */
    MEM32(eax) = esi; /* 0x1508C249: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1508C24B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1508C250: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C252: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508C255:
    esi = POP32_VAL(esp); /* 0x1508C255: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508C256: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508C257: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C258: ret  */
L_1508C259:
    /* test edx, edx */ /* 0x1508C259: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C23A; /* 0x1508C25B: je 0x1508c23a */
L_1508C25D:
    ecx = MEM32(ebp + 0xC); /* 0x1508C25D: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1508C260: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C23A; /* 0x1508C262: je 0x1508c23a */
L_1508C264:
    /* cmp MEM8(edx), 0 */ /* 0x1508C264: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = edx; /* 0x1508C267: mov eax, edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C280; /* 0x1508C269: je 0x1508c280 */
L_1508C26B:
    ebx = MEM32(ebp + 0x10); /* 0x1508C26B: mov ebx, dword ptr [ebp + 0x10] */
L_1508C26E:
    /* test esi, esi */ /* 0x1508C26E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C28C; /* 0x1508C270: je 0x1508c28c */
L_1508C272:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508C272: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508C291; /* 0x1508C275: je 0x1508c291 */
L_1508C277:
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1508C277: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508C279: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1508C27A: dec esi */
    _flag_k = FK_DEC;
    /* cmp MEM8(eax), 0 */ /* 0x1508C27B: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C26E; /* 0x1508C27E: jne 0x1508c26e */
L_1508C280:
    /* test esi, esi */ /* 0x1508C280: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C291; /* 0x1508C282: jne 0x1508c291 */
L_1508C284:
    goto L_1508C28C; /* 0x1508C284: jmp 0x1508c28c */
L_1508C286:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508C286: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508C291; /* 0x1508C289: je 0x1508c291 */
L_1508C28B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508C28B: inc eax */
    _flag_k = FK_INC;
L_1508C28C:
    /* cmp MEM8(eax), 0 */ /* 0x1508C28C: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C286; /* 0x1508C28F: jne 0x1508c286 */
L_1508C291:
    /* test ecx, ecx */ /* 0x1508C291: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C2A0; /* 0x1508C293: jne 0x1508c2a0 */
L_1508C295:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C295: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1508C297: mov byte ptr [edx], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508C299: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508C241; /* 0x1508C29E: jmp 0x1508c241 */
L_1508C2A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C2A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508C255; /* 0x1508C2A2: jmp 0x1508c255 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508C2B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C2B0u);

L_1508C2B0:
    PUSH32(esp, ebp); /* 0x1508C2B0: push ebp */
    ebp = esp; /* 0x1508C2B1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508C2B3: push edi */
    PUSH32(esp, esi); /* 0x1508C2B4: push esi */
    edi = MEM32(ebp + 0x8); /* 0x1508C2B5: mov edi, dword ptr [ebp + 8] */
    edx = edi; /* 0x1508C2B8: mov edx, edi */
    esi = edi; /* 0x1508C2BA: mov esi, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C2BC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1508C2BE: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1508C2C1: repne scasb al, byte ptr es:[edi] */
    /* cmp ecx, 0xFFFFFFFEu */ /* 0x1508C2C3: cmp ecx, -2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C2DF; /* 0x1508C2C6: je 0x1508c2df */
L_1508C2C8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1508C2C8: sub edi, 2 */
    _flag_k = FK_CMP;
L_1508C2CB:
    /* cmp esi, edi */ /* 0x1508C2CB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508C2DF; /* 0x1508C2CD: jae 0x1508c2df */
L_1508C2CF:
    SET_HI8(eax, MEM8(esi)); /* 0x1508C2CF: mov ah, byte ptr [esi] */
    SET_LO8(eax, MEM8(edi)); /* 0x1508C2D1: mov al, byte ptr [edi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1508C2D3: mov byte ptr [esi], al */
    MEM8(edi) = (uint8_t)(HI8(eax)); /* 0x1508C2D5: mov byte ptr [edi], ah */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508C2D7: add esi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508C2DA: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1508C2CB; /* 0x1508C2DD: jmp 0x1508c2cb */
L_1508C2DF:
    eax = edx; /* 0x1508C2DF: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x1508C2E1: pop esi */
    edi = POP32_VAL(esp); /* 0x1508C2E2: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C2E3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C2E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C2F0u);

L_1508C2F0:
    PUSH32(esp, ebp); /* 0x1508C2F0: push ebp */
    ebp = esp; /* 0x1508C2F1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508C2F3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1508C2F4: mov edi, dword ptr [ebp + 8] */
    edx = edi; /* 0x1508C2F7: mov edx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C2F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1508C2FB: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1508C2FE: repne scasb al, byte ptr es:[edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508C300: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508C303: neg ecx */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x1508C305: mov al, byte ptr [ebp + 0xc] */
    edi = edx; /* 0x1508C308: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1508C30A: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = edx; /* 0x1508C30C: mov eax, edx */
    edi = POP32_VAL(esp); /* 0x1508C30E: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C30F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C310: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C320u);

L_1508C320:
    edi = edi; /* 0x1508C320: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C322: push ebp */
    ebp = esp; /* 0x1508C323: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1508C325: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1508C328: push ebx */
    PUSH32(esp, esi); /* 0x1508C329: push esi */
    /* test ecx, ecx */ /* 0x1508C32A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C35F; /* 0x1508C32C: je 0x1508c35f */
L_1508C32E:
    eax = MEM32(ebp + 0xC); /* 0x1508C32E: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1508C331: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C35F; /* 0x1508C333: je 0x1508c35f */
L_1508C335:
    /* cmp MEM8(ecx), 0 */ /* 0x1508C335: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = ecx; /* 0x1508C338: mov edx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C35B; /* 0x1508C33A: je 0x1508c35b */
L_1508C33C:
    ebx = MEM32(ebp + 0x10); /* 0x1508C33C: mov ebx, dword ptr [ebp + 0x10] */
L_1508C33F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1508C33F: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508C34C; /* 0x1508C342: je 0x1508c34c */
L_1508C344:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1508C344: mov byte ptr [edx], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1508C346: inc edx */
    _flag_k = FK_INC;
    /* cmp MEM8(edx), 0 */ /* 0x1508C347: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C33F; /* 0x1508C34A: jne 0x1508c33f */
L_1508C34C:
    /* test eax, eax */ /* 0x1508C34C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C35B; /* 0x1508C34E: jne 0x1508c35b */
L_1508C350:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C350: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1508C352: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508C354: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1508C366; /* 0x1508C359: jmp 0x1508c366 */
L_1508C35B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C35B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508C37A; /* 0x1508C35D: jmp 0x1508c37a */
L_1508C35F:
    RECOMP_CALL(sub_15036430); /* 0x1508C35F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C364: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C366:
    PUSH32(esp, 0x16u); /* 0x1508C366: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1508C368: pop esi */
    PUSH32(esp, ebx); /* 0x1508C369: push ebx */
    PUSH32(esp, ebx); /* 0x1508C36A: push ebx */
    PUSH32(esp, ebx); /* 0x1508C36B: push ebx */
    PUSH32(esp, ebx); /* 0x1508C36C: push ebx */
    PUSH32(esp, ebx); /* 0x1508C36D: push ebx */
    MEM32(eax) = esi; /* 0x1508C36E: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1508C370: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1508C375: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C377: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508C37A:
    esi = POP32_VAL(esp); /* 0x1508C37A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508C37B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508C37C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C37D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C384(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C384u);

L_1508C384:
    edi = edi; /* 0x1508C384: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C386: push ebp */
    ebp = esp; /* 0x1508C387: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508C389: push ecx */
    PUSH32(esp, ecx); /* 0x1508C38A: push ecx */
    eax = MEM32(0x150BD340); /* 0x1508C38B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1508C390: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508C392: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1508C395: push ebx */
    PUSH32(esp, esi); /* 0x1508C396: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508C397: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1508C39A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C3BE; /* 0x1508C39C: jne 0x1508c3be */
L_1508C39E:
    RECOMP_CALL(sub_15036430); /* 0x1508C39E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C3A3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C3A5:
    PUSH32(esp, 0x16u); /* 0x1508C3A5: push 0x16 */
L_1508C3A7:
    esi = POP32_VAL(esp); /* 0x1508C3A7: pop esi */
    PUSH32(esp, ebx); /* 0x1508C3A8: push ebx */
    PUSH32(esp, ebx); /* 0x1508C3A9: push ebx */
    PUSH32(esp, ebx); /* 0x1508C3AA: push ebx */
    PUSH32(esp, ebx); /* 0x1508C3AB: push ebx */
    PUSH32(esp, ebx); /* 0x1508C3AC: push ebx */
    MEM32(eax) = esi; /* 0x1508C3AD: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1508C3AF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C3B4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508C3B7:
    eax = esi; /* 0x1508C3B7: mov eax, esi */
    goto L_1508C4F0; /* 0x1508C3B9: jmp 0x1508c4f0 */
L_1508C3BE:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C3BE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1508C3C1: push esi */
    RECOMP_CALL(sub_1508ECC0); /* 0x1508C3C2: call 0x1508ecc0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508C3C7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508C3C8: pop ecx */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1508C3C9: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508C3D9; /* 0x1508C3CC: jb 0x1508c3d9 */
L_1508C3CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C3CE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1508C3D0: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508C3D2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508C3A5; /* 0x1508C3D7: jmp 0x1508c3a5 */
L_1508C3D9:
    ecx = MEM32(ebp + 0x10); /* 0x1508C3D9: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x1508C3DC: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1508C3DE: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C423; /* 0x1508C3E2: je 0x1508c423 */
L_1508C3E4:
    PUSH32(esp, 1); /* 0x1508C3E4: push 1 */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508C3E6: push dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C3E9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1508C3EB: push ebx */
    PUSH32(esp, ebx); /* 0x1508C3EC: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508C3ED: push -1 */
    PUSH32(esp, esi); /* 0x1508C3EF: push esi */
    PUSH32(esp, 0x200u); /* 0x1508C3F0: push 0x200 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1508C3F5: push dword ptr [eax + 0x14] */
    PUSH32(esp, ecx); /* 0x1508C3F8: push ecx */
    RECOMP_CALL(sub_15058910); /* 0x1508C3F9: call 0x15058910 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1508C3FE: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1508C400: add esp, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1508C403: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x1508C406: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C430; /* 0x1508C408: jne 0x1508c430 */
L_1508C40A:
    RECOMP_CALL(sub_15036430); /* 0x1508C40A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1508C40F: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1508C411: pop esi */
    MEM32(eax) = esi; /* 0x1508C412: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1508C3B7; /* 0x1508C414: jmp 0x1508c3b7 */
L_1508C416:
    eax = ecx + (-0x61); /* 0x1508C416: lea eax, [ecx - 0x61] */
    /* cmp LO8(eax), 0x19u */ /* 0x1508C419: cmp al, 0x19 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508C422; /* 0x1508C41B: ja 0x1508c422 */
L_1508C41D:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x20u); /* 0x1508C41D: sub cl, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1508C420: mov byte ptr [esi], cl */
L_1508C422:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508C422: inc esi */
    _flag_k = FK_INC;
L_1508C423:
    SET_LO8(ecx, MEM8(esi)); /* 0x1508C423: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1508C425: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C416; /* 0x1508C427: jne 0x1508c416 */
L_1508C429:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C429: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508C4F0; /* 0x1508C42B: jmp 0x1508c4f0 */
L_1508C430:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1508C430: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508C443; /* 0x1508C433: jae 0x1508c443 */
L_1508C435:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1508C435: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508C437: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508C43C: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508C3A7; /* 0x1508C43E: jmp 0x1508c3a7 */
L_1508C443:
    /* test ecx, ecx */ /* 0x1508C443: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1508C4E4; /* 0x1508C445: jle 0x1508c4e4 */
L_1508C44B:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x1508C44B: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1508C44D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1508C44F: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1508C450: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 1 */ /* 0x1508C452: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508C4E4; /* 0x1508C455: jb 0x1508c4e4 */
L_1508C45B:
    eax = ecx + 0x8; /* 0x1508C45B: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x1508C45E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508C495; /* 0x1508C460: jbe 0x1508c495 */
L_1508C462:
    /* cmp eax, 0x400u */ /* 0x1508C462: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1508C47C; /* 0x1508C467: ja 0x1508c47c */
L_1508C469:
    RECOMP_CALL(sub_15069EB0); /* 0x1508C469: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    ebx = esp; /* 0x1508C46E: mov ebx, esp */
    /* test ebx, ebx */ /* 0x1508C470: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C492; /* 0x1508C472: je 0x1508c492 */
L_1508C474:
    MEM32(ebx) = 0xCCCCu; /* 0x1508C474: mov dword ptr [ebx], 0xcccc */
    goto L_1508C48F; /* 0x1508C47A: jmp 0x1508c48f */
L_1508C47C:
    PUSH32(esp, eax); /* 0x1508C47C: push eax */
    RECOMP_CALL(sub_15048A30); /* 0x1508C47D: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1508C482: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x1508C484: pop ecx */
    /* test ebx, ebx */ /* 0x1508C485: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C492; /* 0x1508C487: je 0x1508c492 */
L_1508C489:
    MEM32(ebx) = 0xDDDDu; /* 0x1508C489: mov dword ptr [ebx], 0xdddd */
L_1508C48F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1508C48F: add ebx, 8 */
    _flag_k = FK_ADD;
L_1508C492:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508C492: mov ecx, dword ptr [ebp - 8] */
L_1508C495:
    /* test ebx, ebx */ /* 0x1508C495: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C4E4; /* 0x1508C497: je 0x1508c4e4 */
L_1508C499:
    edx = MEM32(ebp + 0x10); /* 0x1508C499: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x1508C49C: push 1 */
    eax = MEM32(edx); /* 0x1508C49E: mov eax, dword ptr [edx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508C4A0: push dword ptr [eax + 4] */
    PUSH32(esp, ecx); /* 0x1508C4A3: push ecx */
    PUSH32(esp, ebx); /* 0x1508C4A4: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508C4A5: push -1 */
    PUSH32(esp, esi); /* 0x1508C4A7: push esi */
    PUSH32(esp, 0x200u); /* 0x1508C4A8: push 0x200 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1508C4AD: push dword ptr [eax + 0x14] */
    PUSH32(esp, edx); /* 0x1508C4B0: push edx */
    RECOMP_CALL(sub_15058910); /* 0x1508C4B1: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1508C4B6: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508C4B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C4CE; /* 0x1508C4BB: je 0x1508c4ce */
L_1508C4BD:
    PUSH32(esp, ebx); /* 0x1508C4BD: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C4BE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1508C4C1: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1508C4C2: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C4C7: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1508C4CA: mov esi, eax */
    goto L_1508C4D8; /* 0x1508C4CC: jmp 0x1508c4d8 */
L_1508C4CE:
    RECOMP_CALL(sub_15036430); /* 0x1508C4CE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1508C4D3: push 0x2a */
    esi = POP32_VAL(esp); /* 0x1508C4D5: pop esi */
    MEM32(eax) = esi; /* 0x1508C4D6: mov dword ptr [eax], esi */
L_1508C4D8:
    PUSH32(esp, ebx); /* 0x1508C4D8: push ebx */
    RECOMP_CALL(sub_1504ABA0); /* 0x1508C4D9: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508C4DE: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1508C3B7; /* 0x1508C4DF: jmp 0x1508c3b7 */
L_1508C4E4:
    RECOMP_CALL(sub_15036430); /* 0x1508C4E4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1508C4E9: push 0xc */
    ecx = POP32_VAL(esp); /* 0x1508C4EB: pop ecx */
    MEM32(eax) = ecx; /* 0x1508C4EC: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1508C4EE: mov eax, ecx */
L_1508C4F0:
    esp = ebp + (-0x10); /* 0x1508C4F0: lea esp, [ebp - 0x10] */
    esi = POP32_VAL(esp); /* 0x1508C4F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508C4F4: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1508C4F5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1508C4F8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1508C4FA: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C4FF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C500: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C510u);

L_1508C510:
    edi = edi; /* 0x1508C510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C512: push ebp */
    ebp = esp; /* 0x1508C513: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508C515: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C562; /* 0x1508C51C: jne 0x1508c562 */
L_1508C51E:
    edx = MEM32(ebp + 0x8); /* 0x1508C51E: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1508C521: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C543; /* 0x1508C523: jne 0x1508c543 */
L_1508C525:
    RECOMP_CALL(sub_15036430); /* 0x1508C525: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C52A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C530: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508C532: push eax */
    PUSH32(esp, eax); /* 0x1508C533: push eax */
    PUSH32(esp, eax); /* 0x1508C534: push eax */
    PUSH32(esp, eax); /* 0x1508C535: push eax */
    PUSH32(esp, eax); /* 0x1508C536: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508C537: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C53C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C53F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1508C541: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C542: ret  */
L_1508C543:
    SET_LO8(ecx, MEM8(edx)); /* 0x1508C543: mov cl, byte ptr [edx] */
    PUSH32(esp, esi); /* 0x1508C545: push esi */
    esi = edx; /* 0x1508C546: mov esi, edx */
    goto L_1508C559; /* 0x1508C548: jmp 0x1508c559 */
L_1508C54A:
    eax = ecx + (-0x61); /* 0x1508C54A: lea eax, [ecx - 0x61] */
    /* cmp LO8(eax), 0x19u */ /* 0x1508C54D: cmp al, 0x19 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x19u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508C556; /* 0x1508C54F: ja 0x1508c556 */
L_1508C551:
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(ecx, LO8(ecx) - 0x20u); /* 0x1508C551: sub cl, 0x20 */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1508C554: mov byte ptr [esi], cl */
L_1508C556:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508C556: inc esi */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(esi)); /* 0x1508C557: mov cl, byte ptr [esi] */
L_1508C559:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1508C559: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C54A; /* 0x1508C55B: jne 0x1508c54a */
L_1508C55D:
    eax = edx; /* 0x1508C55D: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x1508C55F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508C560: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C561: ret  */
L_1508C562:
    PUSH32(esp, 0); /* 0x1508C562: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508C564: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C566: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C5C0); /* 0x1508C569: call 0x1508c5c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508C56E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C571: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508C574: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C575: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C580u);

L_1508C580:
    edi = edi; /* 0x1508C580: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C582: push ebp */
    ebp = esp; /* 0x1508C583: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C585: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508C588: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C58A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C5C0); /* 0x1508C58D: call 0x1508c5c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508C592: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C595: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508C598: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C599: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C5A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C5A0u);

L_1508C5A0:
    edi = edi; /* 0x1508C5A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C5A2: push ebp */
    ebp = esp; /* 0x1508C5A3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1508C5A5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C5A7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C5AA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C5C0); /* 0x1508C5AD: call 0x1508c5c0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C5B2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508C5B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C5B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C5C0u);

L_1508C5C0:
    edi = edi; /* 0x1508C5C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C5C2: push ebp */
    ebp = esp; /* 0x1508C5C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508C5C5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508C5C8: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1508C5CB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508C5CE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1508C5D3: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508C5D6: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C5D7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C5DA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C384); /* 0x1508C5DD: call 0x1508c384 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C5E2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508C5E5: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C5F2; /* 0x1508C5E9: je 0x1508c5f2 */
L_1508C5EB:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508C5EB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508C5EE: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C5F2:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C5F2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C5F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C600u);

L_1508C600:
    edi = edi; /* 0x1508C600: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C602: push ebp */
    ebp = esp; /* 0x1508C603: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1508C605: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1508C608: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1508C60B: push ebx */
    PUSH32(esp, esi); /* 0x1508C60C: push esi */
    PUSH32(esp, edi); /* 0x1508C60D: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508C60E: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x1508C611: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1508C616: mov eax, dword ptr [ebp + 0x10] */
    esi = 0x7FFFFFFFu; /* 0x1508C619: mov esi, 0x7fffffff */
    /* cmp eax, esi */ /* 0x1508C61E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1508C634; /* 0x1508C620: ja 0x1508c634 */
L_1508C622:
    edi = MEM32(ebp + 0x8); /* 0x1508C622: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508C625: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C62D; /* 0x1508C627: jne 0x1508c62d */
L_1508C629:
    /* test eax, eax */ /* 0x1508C629: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C634; /* 0x1508C62B: jne 0x1508c634 */
L_1508C62D:
    ecx = MEM32(ebp + 0xC); /* 0x1508C62D: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1508C630: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C653; /* 0x1508C632: jne 0x1508c653 */
L_1508C634:
    RECOMP_CALL(sub_15036430); /* 0x1508C634: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C639: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1508C63B: push ebx */
    PUSH32(esp, ebx); /* 0x1508C63C: push ebx */
    PUSH32(esp, ebx); /* 0x1508C63D: push ebx */
    PUSH32(esp, ebx); /* 0x1508C63E: push ebx */
    PUSH32(esp, ebx); /* 0x1508C63F: push ebx */
    MEM32(eax) = 0x16u; /* 0x1508C640: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508C646: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C64B: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508C70C; /* 0x1508C64E: jmp 0x1508c70c */
L_1508C653:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508C653: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1508C655: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C65F; /* 0x1508C657: je 0x1508c65f */
L_1508C659:
    /* test eax, eax */ /* 0x1508C659: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C65F; /* 0x1508C65B: je 0x1508c65f */
L_1508C65D:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1508C65D: mov byte ptr [edi], bl */
L_1508C65F:
    edx = MEM32(ebp + (-0x14)); /* 0x1508C65F: mov edx, dword ptr [ebp - 0x14] */
    /* cmp MEM32(edx + 0x10), ebx */ /* 0x1508C662: cmp dword ptr [edx + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C68B; /* 0x1508C665: jne 0x1508c68b */
L_1508C667:
    /* cmp MEM32(edx + 0x8), ebx */ /* 0x1508C667: cmp dword ptr [edx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C68B; /* 0x1508C66A: jne 0x1508c68b */
L_1508C66C:
    PUSH32(esp, eax); /* 0x1508C66C: push eax */
    PUSH32(esp, ecx); /* 0x1508C66D: push ecx */
    PUSH32(esp, edi); /* 0x1508C66E: push edi */
    RECOMP_CALL(sub_1508EA90); /* 0x1508C66F: call 0x1508ea90 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x1508C674: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C677: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi + 0x1; /* 0x1508C67A: lea ecx, [esi + 1] */
L_1508C67D:
    SET_LO8(eax, MEM8(esi)); /* 0x1508C67D: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508C67F: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1508C680: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C67D; /* 0x1508C682: jne 0x1508c67d */
L_1508C684:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1508C684: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_1508C70C; /* 0x1508C686: jmp 0x1508c70c */
L_1508C68B:
    PUSH32(esp, 1); /* 0x1508C68B: push 1 */
    PUSH32(esp, MEM32(edx + 0x8)); /* 0x1508C68D: push dword ptr [edx + 8] */
    eax = ebp + (-0x14); /* 0x1508C690: lea eax, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1508C693: push ebx */
    PUSH32(esp, ebx); /* 0x1508C694: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508C695: push -1 */
    PUSH32(esp, ecx); /* 0x1508C697: push ecx */
    PUSH32(esp, 0x400u); /* 0x1508C698: push 0x400 */
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x1508C69D: push dword ptr [edx + 0x10] */
    PUSH32(esp, eax); /* 0x1508C6A0: push eax */
    RECOMP_CALL(sub_15058910); /* 0x1508C6A1: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1508C6A6: add esp, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508C6A9: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1508C6AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C6FB; /* 0x1508C6AE: je 0x1508c6fb */
L_1508C6B0:
    ecx = MEM32(ebp + 0x10); /* 0x1508C6B0: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp eax, ecx */ /* 0x1508C6B3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508C6D4; /* 0x1508C6B5: jbe 0x1508c6d4 */
L_1508C6B7:
    /* test edi, edi */ /* 0x1508C6B7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C6CF; /* 0x1508C6B9: je 0x1508c6cf */
L_1508C6BB:
    /* test ecx, ecx */ /* 0x1508C6BB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C6CF; /* 0x1508C6BD: je 0x1508c6cf */
L_1508C6BF:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1508C6BF: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508C6C1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1508C6C6: mov dword ptr [eax], 0x22 */
    eax = MEM32(ebp + (-0x4)); /* 0x1508C6CC: mov eax, dword ptr [ebp - 4] */
L_1508C6CF:
    esi = eax + (-0x1); /* 0x1508C6CF: lea esi, [eax - 1] */
    goto L_1508C70C; /* 0x1508C6D2: jmp 0x1508c70c */
L_1508C6D4:
    eax = MEM32(ebp + (-0x14)); /* 0x1508C6D4: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, 1); /* 0x1508C6D7: push 1 */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1508C6D9: push dword ptr [eax + 8] */
    PUSH32(esp, ecx); /* 0x1508C6DC: push ecx */
    PUSH32(esp, edi); /* 0x1508C6DD: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508C6DE: push -1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C6E0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x400u); /* 0x1508C6E3: push 0x400 */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1508C6E8: push dword ptr [eax + 0x10] */
    eax = ebp + (-0x14); /* 0x1508C6EB: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1508C6EE: push eax */
    RECOMP_CALL(sub_15058910); /* 0x1508C6EF: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1508C6F4: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508C6F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C708; /* 0x1508C6F9: jne 0x1508c708 */
L_1508C6FB:
    RECOMP_CALL(sub_15036430); /* 0x1508C6FB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1508C700: mov dword ptr [eax], 0x2a */
    goto L_1508C70C; /* 0x1508C706: jmp 0x1508c70c */
L_1508C708:
    esi = MEM32(ebp + (-0x4)); /* 0x1508C708: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1508C70B: dec esi */
    _flag_k = FK_DEC;
L_1508C70C:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1508C70C: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C719; /* 0x1508C710: je 0x1508c719 */
L_1508C712:
    ecx = MEM32(ebp + (-0xC)); /* 0x1508C712: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508C715: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C719:
    edi = POP32_VAL(esp); /* 0x1508C719: pop edi */
    eax = esi; /* 0x1508C71A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508C71C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508C71D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C71E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C71F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C730u);

L_1508C730:
    edi = edi; /* 0x1508C730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C732: push ebp */
    ebp = esp; /* 0x1508C733: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1508C735: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508C737: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C73A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C73D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C600); /* 0x1508C740: call 0x1508c600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508C745: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508C748: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C749: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C750u);

L_1508C750:
    edi = edi; /* 0x1508C750: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C752: push ebp */
    ebp = esp; /* 0x1508C753: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508C755: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x1508C758: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508C75B: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508C75E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1508C763: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1508C766: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C771; /* 0x1508C768: je 0x1508c771 */
L_1508C76A:
    eax = MEM32(ebp + 0xC); /* 0x1508C76A: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1508C76D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C78D; /* 0x1508C76F: jne 0x1508c78d */
L_1508C771:
    RECOMP_CALL(sub_15036430); /* 0x1508C771: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C776: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C77C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508C77E: push eax */
    PUSH32(esp, eax); /* 0x1508C77F: push eax */
    PUSH32(esp, eax); /* 0x1508C780: push eax */
    PUSH32(esp, eax); /* 0x1508C781: push eax */
    PUSH32(esp, eax); /* 0x1508C782: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508C783: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C788: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508C7EF; /* 0x1508C78B: jmp 0x1508c7ef */
L_1508C78D:
    edx = MEM32(ebp + (-0x10)); /* 0x1508C78D: mov edx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x1508C790: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C7C3; /* 0x1508C794: jne 0x1508c7c3 */
L_1508C796:
    SET_LO16(edx, MEM16(ecx)); /* 0x1508C796: mov dx, word ptr [ecx] */
    /* cmp LO16(edx), MEM16(eax) */ /* 0x1508C799: cmp dx, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C7BC; /* 0x1508C79C: jne 0x1508c7bc */
L_1508C79E:
    /* test LO16(edx), LO16(edx) */ /* 0x1508C79E: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C7B8; /* 0x1508C7A1: je 0x1508c7b8 */
L_1508C7A3:
    SET_LO16(edx, MEM16(ecx + 0x2)); /* 0x1508C7A3: mov dx, word ptr [ecx + 2] */
    /* cmp LO16(edx), MEM16(eax + 0x2) */ /* 0x1508C7A7: cmp dx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(eax + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C7BC; /* 0x1508C7AB: jne 0x1508c7bc */
L_1508C7AD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1508C7AD: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1508C7B0: add eax, 4 */
    _flag_k = FK_ADD;
    /* test LO16(edx), LO16(edx) */ /* 0x1508C7B3: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C796; /* 0x1508C7B6: jne 0x1508c796 */
L_1508C7B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C7B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508C7F9; /* 0x1508C7BA: jmp 0x1508c7f9 */
L_1508C7BC:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1508C7BC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1508C7BE: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508C7F9; /* 0x1508C7C1: jmp 0x1508c7f9 */
L_1508C7C3:
    PUSH32(esp, MEM32(edx + 0x8)); /* 0x1508C7C3: push dword ptr [edx + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508C7C6: push -1 */
    PUSH32(esp, eax); /* 0x1508C7C8: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508C7C9: push -1 */
    PUSH32(esp, ecx); /* 0x1508C7CB: push ecx */
    PUSH32(esp, 0x1000u); /* 0x1508C7CC: push 0x1000 */
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x1508C7D1: push dword ptr [edx + 0x10] */
    eax = ebp + (-0x10); /* 0x1508C7D4: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508C7D7: push eax */
    RECOMP_CALL(sub_15058510); /* 0x1508C7D8: call 0x15058510 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508C7DD: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508C7E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C7F6; /* 0x1508C7E2: jne 0x1508c7f6 */
L_1508C7E4:
    RECOMP_CALL(sub_15036430); /* 0x1508C7E4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C7E9: mov dword ptr [eax], 0x16 */
L_1508C7EF:
    eax = 0x7FFFFFFFu; /* 0x1508C7EF: mov eax, 0x7fffffff */
    goto L_1508C7F9; /* 0x1508C7F4: jmp 0x1508c7f9 */
L_1508C7F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1508C7F6: add eax, -2 */
    _flag_k = FK_ADD;
L_1508C7F9:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508C7F9: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C806; /* 0x1508C7FD: je 0x1508c806 */
L_1508C7FF:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508C7FF: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508C802: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C806:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C806: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C807: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C810u);

L_1508C810:
    edi = edi; /* 0x1508C810: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C812: push ebp */
    ebp = esp; /* 0x1508C813: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508C815: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C87A; /* 0x1508C81C: jne 0x1508c87a */
L_1508C81E:
    eax = MEM32(ebp + 0x8); /* 0x1508C81E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1508C821: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C846; /* 0x1508C823: jne 0x1508c846 */
L_1508C825:
    RECOMP_CALL(sub_15036430); /* 0x1508C825: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C82A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C830: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508C832: push eax */
    PUSH32(esp, eax); /* 0x1508C833: push eax */
    PUSH32(esp, eax); /* 0x1508C834: push eax */
    PUSH32(esp, eax); /* 0x1508C835: push eax */
    PUSH32(esp, eax); /* 0x1508C836: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508C837: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C83C: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508C83F: mov eax, 0x7fffffff */
    ebp = POP32_VAL(esp); /* 0x1508C844: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C845: ret  */
L_1508C846:
    ecx = MEM32(ebp + 0xC); /* 0x1508C846: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1508C849: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C825; /* 0x1508C84B: je 0x1508c825 */
L_1508C84D:
    SET_LO16(edx, MEM16(eax)); /* 0x1508C84D: mov dx, word ptr [eax] */
    /* cmp LO16(edx), MEM16(ecx) */ /* 0x1508C850: cmp dx, word ptr [ecx] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C873; /* 0x1508C853: jne 0x1508c873 */
L_1508C855:
    /* test LO16(edx), LO16(edx) */ /* 0x1508C855: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C86F; /* 0x1508C858: je 0x1508c86f */
L_1508C85A:
    SET_LO16(edx, MEM16(eax + 0x2)); /* 0x1508C85A: mov dx, word ptr [eax + 2] */
    /* cmp LO16(edx), MEM16(ecx + 0x2) */ /* 0x1508C85E: cmp dx, word ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x2)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C873; /* 0x1508C862: jne 0x1508c873 */
L_1508C864:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1508C864: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1508C867: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test LO16(edx), LO16(edx) */ /* 0x1508C86A: test dx, dx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C84D; /* 0x1508C86D: jne 0x1508c84d */
L_1508C86F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C86F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1508C871: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C872: ret  */
L_1508C873:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1508C873: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x1508C875: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1508C878: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C879: ret  */
L_1508C87A:
    PUSH32(esp, 0); /* 0x1508C87A: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C87C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C87F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C750); /* 0x1508C882: call 0x1508c750 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C887: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508C88A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C88B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C8A0u);

L_1508C8A0:
    edi = edi; /* 0x1508C8A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C8A2: push ebp */
    ebp = esp; /* 0x1508C8A3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508C8A5: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1508C8A9: push ebx */
    PUSH32(esp, edi); /* 0x1508C8AA: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C8FB; /* 0x1508C8AB: je 0x1508c8fb */
L_1508C8AD:
    ecx = MEM32(ebp + 0x8); /* 0x1508C8AD: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1508C8B0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x2; /* 0x1508C8B2: lea edx, [ecx + 2] */
L_1508C8B5:
    SET_LO16(eax, MEM16(ecx)); /* 0x1508C8B5: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508C8B8: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x1508C8BB: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C8B5; /* 0x1508C8BE: jne 0x1508c8b5 */
L_1508C8C0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1508C8C0: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1508C8C2: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 2); /* 0x1508C8C4: push 2 */
    ebx = ecx + 0x1; /* 0x1508C8C6: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x1508C8C9: push ebx */
    RECOMP_CALL(sub_150487F0); /* 0x1508C8CA: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1508C8CF: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1508C8D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508C8D2: pop ecx */
    /* test edi, edi */ /* 0x1508C8D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C8FB; /* 0x1508C8D5: je 0x1508c8fb */
L_1508C8D7:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C8D7: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1508C8DA: push ebx */
    PUSH32(esp, edi); /* 0x1508C8DB: push edi */
    RECOMP_CALL(sub_1508F250); /* 0x1508C8DC: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C8E1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508C8E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C8F7; /* 0x1508C8E6: je 0x1508c8f7 */
L_1508C8E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C8E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508C8EA: push eax */
    PUSH32(esp, eax); /* 0x1508C8EB: push eax */
    PUSH32(esp, eax); /* 0x1508C8EC: push eax */
    PUSH32(esp, eax); /* 0x1508C8ED: push eax */
    PUSH32(esp, eax); /* 0x1508C8EE: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1508C8EF: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C8F4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508C8F7:
    eax = edi; /* 0x1508C8F7: mov eax, edi */
    goto L_1508C8FD; /* 0x1508C8F9: jmp 0x1508c8fd */
L_1508C8FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C8FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508C8FD:
    edi = POP32_VAL(esp); /* 0x1508C8FD: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508C8FE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508C8FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C900: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C910u);

L_1508C910:
    edi = edi; /* 0x1508C910: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C912: push ebp */
    ebp = esp; /* 0x1508C913: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C915: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C8A0); /* 0x1508C918: call 0x1508c8a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508C91D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1508C91E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C91F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C930u);

L_1508C930:
    edi = edi; /* 0x1508C930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C932: push ebp */
    ebp = esp; /* 0x1508C933: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508C935: push ecx */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508C936: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1508C93D: push ebx */
    PUSH32(esp, edi); /* 0x1508C93E: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508C9CB; /* 0x1508C93F: jne 0x1508c9cb */
L_1508C945:
    edi = MEM32(ebp + 0x8); /* 0x1508C945: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508C948: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508C96D; /* 0x1508C94A: jne 0x1508c96d */
L_1508C94C:
    RECOMP_CALL(sub_15036430); /* 0x1508C94C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508C951: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508C957: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508C959: push eax */
    PUSH32(esp, eax); /* 0x1508C95A: push eax */
    PUSH32(esp, eax); /* 0x1508C95B: push eax */
    PUSH32(esp, eax); /* 0x1508C95C: push eax */
    PUSH32(esp, eax); /* 0x1508C95D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508C95E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508C963: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508C966: mov eax, 0x7fffffff */
    goto L_1508C9DB; /* 0x1508C96B: jmp 0x1508c9db */
L_1508C96D:
    ebx = MEM32(ebp + 0xC); /* 0x1508C96D: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508C970: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C94C; /* 0x1508C972: je 0x1508c94c */
L_1508C974:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508C974: sub edi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508C976: push esi */
L_1508C977:
    esi = (uint32_t)MEM16(edi + ebx); /* 0x1508C977: movzx esi, word ptr [edi + ebx] */
    eax = esi; /* 0x1508C97B: mov eax, esi */
    PUSH32(esp, 0x19u); /* 0x1508C97D: push 0x19 */
    ecx = eax + (-0x41); /* 0x1508C97F: lea ecx, [eax - 0x41] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1508C982: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x1508C985: movzx edx, ax */
    eax = esi; /* 0x1508C988: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508C98A: pop esi */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1508C98B: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x19u); /* 0x1508C98E: push 0x19 */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x1508C990: cmova edx, eax */
    eax = (uint32_t)LO16(edx); /* 0x1508C993: movzx eax, dx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508C996: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508C999: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508C99C: lea ebx, [ebx + 2] */
    ecx = eax; /* 0x1508C99F: mov ecx, eax */
    edx = eax + (-0x41); /* 0x1508C9A1: lea edx, [eax - 0x41] */
    eax = ecx + 0x20; /* 0x1508C9A4: lea eax, [ecx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x1508C9A7: movzx esi, ax */
    eax = ecx; /* 0x1508C9AA: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508C9AC: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1508C9AD: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x1508C9B0: cmova esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1508C9B3: mov eax, dword ptr [ebp - 4] */
    ecx = (uint32_t)LO16(esi); /* 0x1508C9B6: movzx ecx, si */
    /* test LO16(eax), LO16(eax) */ /* 0x1508C9B9: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508C9C3; /* 0x1508C9BC: je 0x1508c9c3 */
L_1508C9BE:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1508C9BE: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508C977; /* 0x1508C9C1: je 0x1508c977 */
L_1508C9C3:
    eax = (uint32_t)LO16(eax); /* 0x1508C9C3: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508C9C6: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508C9C8: pop esi */
    goto L_1508C9DB; /* 0x1508C9C9: jmp 0x1508c9db */
L_1508C9CB:
    PUSH32(esp, 0); /* 0x1508C9CB: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508C9CD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508C9D0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508C9F0); /* 0x1508C9D3: call 0x1508c9f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508C9D8: add esp, 0xc */
    _flag_k = FK_ADD;
L_1508C9DB:
    edi = POP32_VAL(esp); /* 0x1508C9DB: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508C9DC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508C9DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508C9DE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508C9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508C9F0u);

L_1508C9F0:
    edi = edi; /* 0x1508C9F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508C9F2: push ebp */
    ebp = esp; /* 0x1508C9F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1508C9F5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1508C9F8: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1508C9FB: push ebx */
    PUSH32(esp, edi); /* 0x1508C9FC: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508C9FD: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508CA00: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1508CA05: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508CA08: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CA13; /* 0x1508CA0A: je 0x1508ca13 */
L_1508CA0C:
    ebx = MEM32(ebp + 0xC); /* 0x1508CA0C: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508CA0F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CA37; /* 0x1508CA11: jne 0x1508ca37 */
L_1508CA13:
    RECOMP_CALL(sub_15036430); /* 0x1508CA13: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508CA18: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CA1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508CA20: push eax */
    PUSH32(esp, eax); /* 0x1508CA21: push eax */
    PUSH32(esp, eax); /* 0x1508CA22: push eax */
    PUSH32(esp, eax); /* 0x1508CA23: push eax */
    PUSH32(esp, eax); /* 0x1508CA24: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508CA25: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508CA2A: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = 0x7FFFFFFFu; /* 0x1508CA2D: mov edx, 0x7fffffff */
    goto L_1508CAD2; /* 0x1508CA32: jmp 0x1508cad2 */
L_1508CA37:
    eax = MEM32(ebp + (-0x14)); /* 0x1508CA37: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1508CA3A: push esi */
    /* cmp MEM32(eax + 0x14), 0 */ /* 0x1508CA3B: cmp dword ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508CA96; /* 0x1508CA3F: jne 0x1508ca96 */
L_1508CA41:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508CA41: sub edi, ebx */
    _flag_k = FK_CMP;
L_1508CA43:
    esi = (uint32_t)MEM16(edi + ebx); /* 0x1508CA43: movzx esi, word ptr [edi + ebx] */
    eax = esi; /* 0x1508CA47: mov eax, esi */
    PUSH32(esp, 0x19u); /* 0x1508CA49: push 0x19 */
    ecx = eax + (-0x41); /* 0x1508CA4B: lea ecx, [eax - 0x41] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1508CA4E: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x1508CA51: movzx edx, ax */
    eax = esi; /* 0x1508CA54: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508CA56: pop esi */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1508CA57: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x19u); /* 0x1508CA5A: push 0x19 */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x1508CA5C: cmova edx, eax */
    eax = (uint32_t)LO16(edx); /* 0x1508CA5F: movzx eax, dx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508CA62: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508CA65: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508CA68: lea ebx, [ebx + 2] */
    ecx = eax; /* 0x1508CA6B: mov ecx, eax */
    edx = eax + (-0x41); /* 0x1508CA6D: lea edx, [eax - 0x41] */
    eax = ecx + 0x20; /* 0x1508CA70: lea eax, [ecx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x1508CA73: movzx esi, ax */
    eax = ecx; /* 0x1508CA76: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508CA78: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1508CA79: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x1508CA7C: cmova esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1508CA7F: mov eax, dword ptr [ebp - 4] */
    ecx = (uint32_t)LO16(esi); /* 0x1508CA82: movzx ecx, si */
    /* test LO16(eax), LO16(eax) */ /* 0x1508CA85: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CA8F; /* 0x1508CA88: je 0x1508ca8f */
L_1508CA8A:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1508CA8A: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508CA43; /* 0x1508CA8D: je 0x1508ca43 */
L_1508CA8F:
    esi = (uint32_t)LO16(eax); /* 0x1508CA8F: movzx esi, ax */
    eax = ecx; /* 0x1508CA92: mov eax, ecx */
    goto L_1508CAC9; /* 0x1508CA94: jmp 0x1508cac9 */
L_1508CA96:
    eax = (uint32_t)MEM16(edi); /* 0x1508CA96: movzx eax, word ptr [edi] */
    ecx = ebp + (-0x14); /* 0x1508CA99: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1508CA9C: push ecx */
    PUSH32(esp, eax); /* 0x1508CA9D: push eax */
    edi = edi + 0x2; /* 0x1508CA9E: lea edi, [edi + 2] */
    RECOMP_CALL(sub_15032D90); /* 0x1508CAA1: call 0x15032d90 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x1508CAA6: lea ecx, [ebp - 0x14] */
    esi = (uint32_t)LO16(eax); /* 0x1508CAA9: movzx esi, ax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508CAAC: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508CAAF: lea ebx, [ebx + 2] */
    PUSH32(esp, ecx); /* 0x1508CAB2: push ecx */
    PUSH32(esp, eax); /* 0x1508CAB3: push eax */
    RECOMP_CALL(sub_15032D90); /* 0x1508CAB4: call 0x15032d90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508CAB9: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x1508CABC: movzx eax, ax */
    /* test LO16(esi), LO16(esi) */ /* 0x1508CABF: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CAC9; /* 0x1508CAC2: je 0x1508cac9 */
L_1508CAC4:
    /* cmp LO16(esi), LO16(eax) */ /* 0x1508CAC4: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508CA96; /* 0x1508CAC7: je 0x1508ca96 */
L_1508CAC9:
    edx = (uint32_t)LO16(esi); /* 0x1508CAC9: movzx edx, si */
    eax = (uint32_t)LO16(eax); /* 0x1508CACC: movzx eax, ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1508CACF: sub edx, eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508CAD1: pop esi */
L_1508CAD2:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1508CAD2: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1508CAD6: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508CAD7: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508CAE1; /* 0x1508CAD8: je 0x1508cae1 */
L_1508CADA:
    ecx = MEM32(ebp + (-0xC)); /* 0x1508CADA: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508CADD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508CAE1:
    eax = edx; /* 0x1508CAE1: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508CAE3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CAE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CAF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CAF0u);

L_1508CAF0:
    edi = edi; /* 0x1508CAF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CAF2: push ebp */
    ebp = esp; /* 0x1508CAF3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508CAF5: push ecx */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508CAF6: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1508CAFD: push ebx */
    PUSH32(esp, edi); /* 0x1508CAFE: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508CB8B; /* 0x1508CAFF: jne 0x1508cb8b */
L_1508CB05:
    edi = MEM32(ebp + 0x8); /* 0x1508CB05: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508CB08: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CB2D; /* 0x1508CB0A: jne 0x1508cb2d */
L_1508CB0C:
    RECOMP_CALL(sub_15036430); /* 0x1508CB0C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508CB11: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CB17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508CB19: push eax */
    PUSH32(esp, eax); /* 0x1508CB1A: push eax */
    PUSH32(esp, eax); /* 0x1508CB1B: push eax */
    PUSH32(esp, eax); /* 0x1508CB1C: push eax */
    PUSH32(esp, eax); /* 0x1508CB1D: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508CB1E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508CB23: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508CB26: mov eax, 0x7fffffff */
    goto L_1508CB9B; /* 0x1508CB2B: jmp 0x1508cb9b */
L_1508CB2D:
    ebx = MEM32(ebp + 0xC); /* 0x1508CB2D: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508CB30: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CB0C; /* 0x1508CB32: je 0x1508cb0c */
L_1508CB34:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508CB34: sub edi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508CB36: push esi */
L_1508CB37:
    esi = (uint32_t)MEM16(edi + ebx); /* 0x1508CB37: movzx esi, word ptr [edi + ebx] */
    eax = esi; /* 0x1508CB3B: mov eax, esi */
    PUSH32(esp, 0x19u); /* 0x1508CB3D: push 0x19 */
    ecx = eax + (-0x41); /* 0x1508CB3F: lea ecx, [eax - 0x41] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1508CB42: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x1508CB45: movzx edx, ax */
    eax = esi; /* 0x1508CB48: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508CB4A: pop esi */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1508CB4B: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x19u); /* 0x1508CB4E: push 0x19 */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x1508CB50: cmova edx, eax */
    eax = (uint32_t)LO16(edx); /* 0x1508CB53: movzx eax, dx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508CB56: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508CB59: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508CB5C: lea ebx, [ebx + 2] */
    ecx = eax; /* 0x1508CB5F: mov ecx, eax */
    edx = eax + (-0x41); /* 0x1508CB61: lea edx, [eax - 0x41] */
    eax = ecx + 0x20; /* 0x1508CB64: lea eax, [ecx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x1508CB67: movzx esi, ax */
    eax = ecx; /* 0x1508CB6A: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508CB6C: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1508CB6D: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x1508CB70: cmova esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1508CB73: mov eax, dword ptr [ebp - 4] */
    ecx = (uint32_t)LO16(esi); /* 0x1508CB76: movzx ecx, si */
    /* test LO16(eax), LO16(eax) */ /* 0x1508CB79: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CB83; /* 0x1508CB7C: je 0x1508cb83 */
L_1508CB7E:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1508CB7E: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508CB37; /* 0x1508CB81: je 0x1508cb37 */
L_1508CB83:
    eax = (uint32_t)LO16(eax); /* 0x1508CB83: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508CB86: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508CB88: pop esi */
    goto L_1508CB9B; /* 0x1508CB89: jmp 0x1508cb9b */
L_1508CB8B:
    PUSH32(esp, 0); /* 0x1508CB8B: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508CB8D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508CB90: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508CBB0); /* 0x1508CB93: call 0x1508cbb0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508CB98: add esp, 0xc */
    _flag_k = FK_ADD;
L_1508CB9B:
    edi = POP32_VAL(esp); /* 0x1508CB9B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508CB9C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508CB9D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CB9E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CBB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CBB0u);

L_1508CBB0:
    edi = edi; /* 0x1508CBB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CBB2: push ebp */
    ebp = esp; /* 0x1508CBB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1508CBB5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x14); /* 0x1508CBB8: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1508CBBB: push ebx */
    PUSH32(esp, edi); /* 0x1508CBBC: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508CBBD: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508CBC0: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1508CBC5: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508CBC8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CBD3; /* 0x1508CBCA: je 0x1508cbd3 */
L_1508CBCC:
    ebx = MEM32(ebp + 0xC); /* 0x1508CBCC: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508CBCF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CBF2; /* 0x1508CBD1: jne 0x1508cbf2 */
L_1508CBD3:
    RECOMP_CALL(sub_15036430); /* 0x1508CBD3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508CBD8: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CBDE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508CBE0: push eax */
    PUSH32(esp, eax); /* 0x1508CBE1: push eax */
    PUSH32(esp, eax); /* 0x1508CBE2: push eax */
    PUSH32(esp, eax); /* 0x1508CBE3: push eax */
    PUSH32(esp, eax); /* 0x1508CBE4: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508CBE5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508CBEA: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508CC7E; /* 0x1508CBED: jmp 0x1508cc7e */
L_1508CBF2:
    eax = MEM32(ebp + (-0x14)); /* 0x1508CBF2: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1508CBF5: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508CC52; /* 0x1508CBF9: jne 0x1508cc52 */
L_1508CBFB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508CBFB: sub edi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508CBFD: push esi */
L_1508CBFE:
    esi = (uint32_t)MEM16(edi + ebx); /* 0x1508CBFE: movzx esi, word ptr [edi + ebx] */
    eax = esi; /* 0x1508CC02: mov eax, esi */
    PUSH32(esp, 0x19u); /* 0x1508CC04: push 0x19 */
    ecx = eax + (-0x41); /* 0x1508CC06: lea ecx, [eax - 0x41] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1508CC09: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x1508CC0C: movzx edx, ax */
    eax = esi; /* 0x1508CC0F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508CC11: pop esi */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1508CC12: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x19u); /* 0x1508CC15: push 0x19 */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x1508CC17: cmova edx, eax */
    eax = (uint32_t)LO16(edx); /* 0x1508CC1A: movzx eax, dx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508CC1D: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508CC20: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508CC23: lea ebx, [ebx + 2] */
    ecx = eax; /* 0x1508CC26: mov ecx, eax */
    edx = eax + (-0x41); /* 0x1508CC28: lea edx, [eax - 0x41] */
    eax = ecx + 0x20; /* 0x1508CC2B: lea eax, [ecx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x1508CC2E: movzx esi, ax */
    eax = ecx; /* 0x1508CC31: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508CC33: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1508CC34: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(ebp + (-0x4)); /* 0x1508CC37: mov ecx, dword ptr [ebp - 4] */
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x1508CC3A: cmova esi, eax */
    eax = (uint32_t)LO16(esi); /* 0x1508CC3D: movzx eax, si */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1508CC40: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CC4A; /* 0x1508CC43: je 0x1508cc4a */
L_1508CC45:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1508CC45: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508CBFE; /* 0x1508CC48: je 0x1508cbfe */
L_1508CC4A:
    edx = (uint32_t)LO16(ecx); /* 0x1508CC4A: movzx edx, cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1508CC4D: sub edx, eax */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508CC4F: pop esi */
    goto L_1508CC88; /* 0x1508CC50: jmp 0x1508cc88 */
L_1508CC52:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508CC52: push dword ptr [eax + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508CC55: push -1 */
    PUSH32(esp, ebx); /* 0x1508CC57: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508CC58: push -1 */
    PUSH32(esp, edi); /* 0x1508CC5A: push edi */
    PUSH32(esp, 0x1001u); /* 0x1508CC5B: push 0x1001 */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1508CC60: push dword ptr [eax + 0x10] */
    eax = ebp + (-0x14); /* 0x1508CC63: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1508CC66: push eax */
    RECOMP_CALL(sub_15058510); /* 0x1508CC67: call 0x15058510 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508CC6C: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508CC6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CC85; /* 0x1508CC71: jne 0x1508cc85 */
L_1508CC73:
    RECOMP_CALL(sub_15036430); /* 0x1508CC73: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508CC78: mov dword ptr [eax], 0x16 */
L_1508CC7E:
    edx = 0x7FFFFFFFu; /* 0x1508CC7E: mov edx, 0x7fffffff */
    goto L_1508CC88; /* 0x1508CC83: jmp 0x1508cc88 */
L_1508CC85:
    edx = eax + (-0x2); /* 0x1508CC85: lea edx, [eax - 2] */
L_1508CC88:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1508CC88: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x1508CC8C: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508CC8D: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508CC97; /* 0x1508CC8E: je 0x1508cc97 */
L_1508CC90:
    ecx = MEM32(ebp + (-0xC)); /* 0x1508CC90: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508CC93: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508CC97:
    eax = edx; /* 0x1508CC97: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508CC99: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CC9A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CCA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CCA1u);

L_1508CCA1:
    edi = edi; /* 0x1508CCA1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CCA3: push ebp */
    ebp = esp; /* 0x1508CCA4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508CCA6: push ecx */
    PUSH32(esp, ecx); /* 0x1508CCA7: push ecx */
    eax = MEM32(0x150BD340); /* 0x1508CCA8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1508CCAD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508CCAF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x1508CCB2: push esi */
    PUSH32(esp, edi); /* 0x1508CCB3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1508CCB4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508CCB7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CCDB; /* 0x1508CCB9: jne 0x1508ccdb */
L_1508CCBB:
    RECOMP_CALL(sub_15036430); /* 0x1508CCBB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508CCC0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508CCC2:
    PUSH32(esp, 0x16u); /* 0x1508CCC2: push 0x16 */
L_1508CCC4:
    edi = POP32_VAL(esp); /* 0x1508CCC4: pop edi */
    PUSH32(esp, esi); /* 0x1508CCC5: push esi */
    PUSH32(esp, esi); /* 0x1508CCC6: push esi */
    PUSH32(esp, esi); /* 0x1508CCC7: push esi */
    PUSH32(esp, esi); /* 0x1508CCC8: push esi */
    PUSH32(esp, esi); /* 0x1508CCC9: push esi */
    MEM32(eax) = edi; /* 0x1508CCCA: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1508CCCC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508CCD1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508CCD4:
    eax = edi; /* 0x1508CCD4: mov eax, edi */
    goto L_1508CE27; /* 0x1508CCD6: jmp 0x1508ce27 */
L_1508CCDB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508CCDB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1508CCDE: push edi */
    RECOMP_CALL(sub_1508F6A0); /* 0x1508CCDF: call 0x1508f6a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508CCE4: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508CCE5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1508CCE7: pop ecx */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1508CCE8: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508CCF9; /* 0x1508CCEB: jb 0x1508ccf9 */
L_1508CCED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CCED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1508CCEF: mov word ptr [edi], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508CCF2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508CCC2; /* 0x1508CCF7: jmp 0x1508ccc2 */
L_1508CCF9:
    ecx = MEM32(ebp + 0x10); /* 0x1508CCF9: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x1508CCFC: mov eax, dword ptr [ecx] */
    /* cmp MEM32(eax + 0x14), esi */ /* 0x1508CCFE: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508CD30; /* 0x1508CD01: jne 0x1508cd30 */
L_1508CD03:
    eax = (uint32_t)MEM16(edi); /* 0x1508CD03: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508CD06: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CD29; /* 0x1508CD09: je 0x1508cd29 */
L_1508CD0B:
    ecx = eax; /* 0x1508CD0B: mov ecx, eax */
L_1508CD0D:
    eax = ecx + (-0x41); /* 0x1508CD0D: lea eax, [ecx - 0x41] */
    /* cmp LO16(eax), 0x19u */ /* 0x1508CD10: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508CD1C; /* 0x1508CD14: ja 0x1508cd1c */
L_1508CD16:
    eax = ecx + 0x20; /* 0x1508CD16: lea eax, [ecx + 0x20] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1508CD19: mov word ptr [edi], ax */
L_1508CD1C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1508CD1C: add edi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edi); /* 0x1508CD1F: movzx eax, word ptr [edi] */
    ecx = eax; /* 0x1508CD22: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508CD24: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CD0D; /* 0x1508CD27: jne 0x1508cd0d */
L_1508CD29:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CD29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508CE27; /* 0x1508CD2B: jmp 0x1508ce27 */
L_1508CD30:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508CD30: push dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x1508CD33: push esi */
    PUSH32(esp, esi); /* 0x1508CD34: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508CD35: push -1 */
    PUSH32(esp, edi); /* 0x1508CD37: push edi */
    PUSH32(esp, 0x100u); /* 0x1508CD38: push 0x100 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1508CD3D: push dword ptr [eax + 0x14] */
    PUSH32(esp, ecx); /* 0x1508CD40: push ecx */
    RECOMP_CALL(sub_15058960); /* 0x1508CD41: call 0x15058960 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1508CD46: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508CD48: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1508CD4B: mov dword ptr [ebp - 8], ecx */
    /* test ecx, ecx */ /* 0x1508CD4E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CD61; /* 0x1508CD50: jne 0x1508cd61 */
L_1508CD52:
    RECOMP_CALL(sub_15036430); /* 0x1508CD52: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1508CD57: push 0x2a */
    edi = POP32_VAL(esp); /* 0x1508CD59: pop edi */
    MEM32(eax) = edi; /* 0x1508CD5A: mov dword ptr [eax], edi */
    RECOMP_BACKEDGE();
    goto L_1508CCD4; /* 0x1508CD5C: jmp 0x1508ccd4 */
L_1508CD61:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1508CD61: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508CD77; /* 0x1508CD64: jae 0x1508cd77 */
L_1508CD66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CD66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1508CD68: mov word ptr [edi], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508CD6B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508CD70: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508CCC4; /* 0x1508CD72: jmp 0x1508ccc4 */
L_1508CD77:
    /* test ecx, ecx */ /* 0x1508CD77: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1508CE1B; /* 0x1508CD79: jle 0x1508ce1b */
L_1508CD7F:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x1508CD7F: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1508CD81: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1508CD83: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1508CD84: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 2 */ /* 0x1508CD86: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508CE1B; /* 0x1508CD89: jb 0x1508ce1b */
L_1508CD8F:
    eax = ecx * 2 + 0x8; /* 0x1508CD8F: lea eax, [ecx*2 + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1508CD96: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x1508CD98: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508CDCC; /* 0x1508CD9A: jbe 0x1508cdcc */
L_1508CD9C:
    /* cmp eax, 0x400u */ /* 0x1508CD9C: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1508CDB6; /* 0x1508CDA1: ja 0x1508cdb6 */
L_1508CDA3:
    RECOMP_CALL(sub_15069EB0); /* 0x1508CDA3: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x1508CDA8: mov esi, esp */
    /* test esi, esi */ /* 0x1508CDAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CE1B; /* 0x1508CDAC: je 0x1508ce1b */
L_1508CDAE:
    MEM32(esi) = 0xCCCCu; /* 0x1508CDAE: mov dword ptr [esi], 0xcccc */
    goto L_1508CDC9; /* 0x1508CDB4: jmp 0x1508cdc9 */
L_1508CDB6:
    PUSH32(esp, eax); /* 0x1508CDB6: push eax */
    RECOMP_CALL(sub_15048A30); /* 0x1508CDB7: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1508CDBC: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1508CDBE: pop ecx */
    /* test esi, esi */ /* 0x1508CDBF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CE1B; /* 0x1508CDC1: je 0x1508ce1b */
L_1508CDC3:
    MEM32(esi) = 0xDDDDu; /* 0x1508CDC3: mov dword ptr [esi], 0xdddd */
L_1508CDC9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1508CDC9: add esi, 8 */
    _flag_k = FK_ADD;
L_1508CDCC:
    /* test esi, esi */ /* 0x1508CDCC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CE1B; /* 0x1508CDCE: je 0x1508ce1b */
L_1508CDD0:
    ecx = MEM32(ebp + 0x10); /* 0x1508CDD0: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x1508CDD3: mov eax, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508CDD5: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1508CDD8: push dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x1508CDDB: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508CDDC: push -1 */
    PUSH32(esp, edi); /* 0x1508CDDE: push edi */
    PUSH32(esp, 0x100u); /* 0x1508CDDF: push 0x100 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1508CDE4: push dword ptr [eax + 0x14] */
    PUSH32(esp, ecx); /* 0x1508CDE7: push ecx */
    RECOMP_CALL(sub_15058960); /* 0x1508CDE8: call 0x15058960 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508CDED: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508CDF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CE05; /* 0x1508CDF2: je 0x1508ce05 */
L_1508CDF4:
    PUSH32(esp, esi); /* 0x1508CDF4: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508CDF5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1508CDF8: push edi */
    RECOMP_CALL(sub_1508F250); /* 0x1508CDF9: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508CDFE: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1508CE01: mov edi, eax */
    goto L_1508CE0F; /* 0x1508CE03: jmp 0x1508ce0f */
L_1508CE05:
    RECOMP_CALL(sub_15036430); /* 0x1508CE05: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1508CE0A: push 0x2a */
    edi = POP32_VAL(esp); /* 0x1508CE0C: pop edi */
    MEM32(eax) = edi; /* 0x1508CE0D: mov dword ptr [eax], edi */
L_1508CE0F:
    PUSH32(esp, esi); /* 0x1508CE0F: push esi */
    RECOMP_CALL(sub_1504ABA0); /* 0x1508CE10: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508CE15: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1508CCD4; /* 0x1508CE16: jmp 0x1508ccd4 */
L_1508CE1B:
    RECOMP_CALL(sub_15036430); /* 0x1508CE1B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1508CE20: push 0xc */
    ecx = POP32_VAL(esp); /* 0x1508CE22: pop ecx */
    MEM32(eax) = ecx; /* 0x1508CE23: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1508CE25: mov eax, ecx */
L_1508CE27:
    esp = ebp + (-0x10); /* 0x1508CE27: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x1508CE2A: pop edi */
    esi = POP32_VAL(esp); /* 0x1508CE2B: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x1508CE2C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1508CE2F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1508CE31: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508CE36: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CE37: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CE40u);

L_1508CE40:
    edi = edi; /* 0x1508CE40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CE42: push ebp */
    ebp = esp; /* 0x1508CE43: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508CE45: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508CEA3; /* 0x1508CE4C: jne 0x1508cea3 */
L_1508CE4E:
    edx = MEM32(ebp + 0x8); /* 0x1508CE4E: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1508CE51: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CE73; /* 0x1508CE53: jne 0x1508ce73 */
L_1508CE55:
    RECOMP_CALL(sub_15036430); /* 0x1508CE55: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508CE5A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CE60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508CE62: push eax */
    PUSH32(esp, eax); /* 0x1508CE63: push eax */
    PUSH32(esp, eax); /* 0x1508CE64: push eax */
    PUSH32(esp, eax); /* 0x1508CE65: push eax */
    PUSH32(esp, eax); /* 0x1508CE66: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508CE67: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508CE6C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CE6F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1508CE71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CE72: ret  */
L_1508CE73:
    eax = (uint32_t)MEM16(edx); /* 0x1508CE73: movzx eax, word ptr [edx] */
    PUSH32(esp, esi); /* 0x1508CE76: push esi */
    esi = edx; /* 0x1508CE77: mov esi, edx */
    /* test LO16(eax), LO16(eax) */ /* 0x1508CE79: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508CE9E; /* 0x1508CE7C: je 0x1508ce9e */
L_1508CE7E:
    PUSH32(esp, edi); /* 0x1508CE7E: push edi */
    edi = eax; /* 0x1508CE7F: mov edi, eax */
L_1508CE81:
    eax = edi + (-0x41); /* 0x1508CE81: lea eax, [edi - 0x41] */
    /* cmp LO16(eax), 0x19u */ /* 0x1508CE84: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508CE90; /* 0x1508CE88: ja 0x1508ce90 */
L_1508CE8A:
    eax = edi + 0x20; /* 0x1508CE8A: lea eax, [edi + 0x20] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1508CE8D: mov word ptr [esi], ax */
L_1508CE90:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508CE90: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(esi); /* 0x1508CE93: movzx ecx, word ptr [esi] */
    edi = ecx; /* 0x1508CE96: mov edi, ecx */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1508CE98: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CE81; /* 0x1508CE9B: jne 0x1508ce81 */
L_1508CE9D:
    edi = POP32_VAL(esp); /* 0x1508CE9D: pop edi */
L_1508CE9E:
    eax = edx; /* 0x1508CE9E: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x1508CEA0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508CEA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CEA2: ret  */
L_1508CEA3:
    PUSH32(esp, 0); /* 0x1508CEA3: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508CEA5: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508CEA7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508CF00); /* 0x1508CEAA: call 0x1508cf00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508CEAF: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508CEB2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508CEB5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CEB6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CEC0u);

L_1508CEC0:
    edi = edi; /* 0x1508CEC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CEC2: push ebp */
    ebp = esp; /* 0x1508CEC3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508CEC5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508CEC8: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508CECA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508CF00); /* 0x1508CECD: call 0x1508cf00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508CED2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508CED5: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508CED8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CED9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CEE0u);

L_1508CEE0:
    edi = edi; /* 0x1508CEE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CEE2: push ebp */
    ebp = esp; /* 0x1508CEE3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1508CEE5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508CEE7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508CEEA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508CF00); /* 0x1508CEED: call 0x1508cf00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508CEF2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508CEF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CEF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CF00u);

L_1508CF00:
    edi = edi; /* 0x1508CF00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CF02: push ebp */
    ebp = esp; /* 0x1508CF03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508CF05: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508CF08: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1508CF0B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508CF0E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1508CF13: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508CF16: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508CF17: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508CF1A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508CCA1); /* 0x1508CF1D: call 0x1508cca1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508CF22: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508CF25: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508CF32; /* 0x1508CF29: je 0x1508cf32 */
L_1508CF2B:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508CF2B: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508CF2E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508CF32:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508CF32: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CF33: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CF40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CF40u);

L_1508CF40:
    edi = edi; /* 0x1508CF40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CF42: push ebp */
    ebp = esp; /* 0x1508CF43: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508CF45: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508CF4C: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508CFAB; /* 0x1508CF4D: jne 0x1508cfab */
L_1508CF4F:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508CF4F: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508CF76; /* 0x1508CF53: jne 0x1508cf76 */
L_1508CF55:
    RECOMP_CALL(sub_15036430); /* 0x1508CF55: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508CF5A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CF60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508CF62: push eax */
    PUSH32(esp, eax); /* 0x1508CF63: push eax */
    PUSH32(esp, eax); /* 0x1508CF64: push eax */
    PUSH32(esp, eax); /* 0x1508CF65: push eax */
    PUSH32(esp, eax); /* 0x1508CF66: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508CF67: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508CF6C: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508CF6F: mov eax, 0x7fffffff */
    goto L_1508CFBE; /* 0x1508CF74: jmp 0x1508cfbe */
L_1508CF76:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508CF76: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508CF55; /* 0x1508CF7A: je 0x1508cf55 */
L_1508CF7C:
    esi = 0x7FFFFFFFu; /* 0x1508CF7C: mov esi, 0x7fffffff */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1508CF81: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508CFA4; /* 0x1508CF84: jbe 0x1508cfa4 */
L_1508CF86:
    RECOMP_CALL(sub_15036430); /* 0x1508CF86: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508CF8B: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CF91: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508CF93: push eax */
    PUSH32(esp, eax); /* 0x1508CF94: push eax */
    PUSH32(esp, eax); /* 0x1508CF95: push eax */
    PUSH32(esp, eax); /* 0x1508CF96: push eax */
    PUSH32(esp, eax); /* 0x1508CF97: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508CF98: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508CF9D: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508CFA0: mov eax, esi */
    goto L_1508CFBE; /* 0x1508CFA2: jmp 0x1508cfbe */
L_1508CFA4:
    esi = POP32_VAL(esp); /* 0x1508CFA4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508CFA5: pop ebp */
    goto L_1508F500; /* 0x1508CFA6: jmp 0x1508f500 */
L_1508CFAB:
    PUSH32(esp, 0); /* 0x1508CFAB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508CFAD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508CFB0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508CFB3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508CFD0); /* 0x1508CFB6: call 0x1508cfd0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508CFBB: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1508CFBE:
    esi = POP32_VAL(esp); /* 0x1508CFBE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508CFBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508CFC0: ret  */
L_1508F500:
    edi = edi; /* 0x1508F500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F502: push ebp */
    ebp = esp; /* 0x1508F503: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1508F505: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1508F508: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F50E; /* 0x1508F50A: jne 0x1508f50e */
L_1508F50C:
    ebp = POP32_VAL(esp); /* 0x1508F50C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F50D: ret  */
L_1508F50E:
    ecx = MEM32(ebp + 0xC); /* 0x1508F50E: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1508F511: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508F514: push esi */
L_1508F515:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1508F515: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508F52F; /* 0x1508F518: je 0x1508f52f */
L_1508F51A:
    esi = (uint32_t)MEM16(edx); /* 0x1508F51A: movzx esi, word ptr [edx] */
    /* test LO16(esi), LO16(esi) */ /* 0x1508F51D: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F52F; /* 0x1508F520: je 0x1508f52f */
L_1508F522:
    /* cmp LO16(esi), MEM16(ecx) */ /* 0x1508F522: cmp si, word ptr [ecx] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F52F; /* 0x1508F525: jne 0x1508f52f */
L_1508F527:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508F527: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508F52A: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1508F515; /* 0x1508F52D: jmp 0x1508f515 */
L_1508F52F:
    eax = (uint32_t)MEM16(edx); /* 0x1508F52F: movzx eax, word ptr [edx] */
    ecx = (uint32_t)MEM16(ecx); /* 0x1508F532: movzx ecx, word ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508F535: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508F537: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F538: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F539: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508CFD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508CFD0u);

L_1508CFD0:
    edi = edi; /* 0x1508CFD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508CFD2: push ebp */
    ebp = esp; /* 0x1508CFD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508CFD5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1508CFD8: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1508CFD9: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1508CFDC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508CFE7; /* 0x1508CFDE: jne 0x1508cfe7 */
L_1508CFE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508CFE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508D07D; /* 0x1508CFE2: jmp 0x1508d07d */
L_1508CFE7:
    PUSH32(esp, esi); /* 0x1508CFE7: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508CFE8: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x1508CFEB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508CFEE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1508CFF3: mov ecx, dword ptr [ebp + 8] */
    esi = 0x7FFFFFFFu; /* 0x1508CFF6: mov esi, 0x7fffffff */
    /* test ecx, ecx */ /* 0x1508CFFB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D00A; /* 0x1508CFFD: je 0x1508d00a */
L_1508CFFF:
    eax = MEM32(ebp + 0xC); /* 0x1508CFFF: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1508D002: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D00A; /* 0x1508D004: je 0x1508d00a */
L_1508D006:
    /* cmp edi, esi */ /* 0x1508D006: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508D026; /* 0x1508D008: jbe 0x1508d026 */
L_1508D00A:
    RECOMP_CALL(sub_15036430); /* 0x1508D00A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508D00F: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D015: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508D017: push eax */
    PUSH32(esp, eax); /* 0x1508D018: push eax */
    PUSH32(esp, eax); /* 0x1508D019: push eax */
    PUSH32(esp, eax); /* 0x1508D01A: push eax */
    PUSH32(esp, eax); /* 0x1508D01B: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508D01C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D021: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508D06D; /* 0x1508D024: jmp 0x1508d06d */
L_1508D026:
    edx = MEM32(ebp + (-0x10)); /* 0x1508D026: mov edx, dword ptr [ebp - 0x10] */
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x1508D029: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D03E; /* 0x1508D02D: jne 0x1508d03e */
L_1508D02F:
    PUSH32(esp, edi); /* 0x1508D02F: push edi */
    PUSH32(esp, eax); /* 0x1508D030: push eax */
    PUSH32(esp, ecx); /* 0x1508D031: push ecx */
    RECOMP_CALL(sub_1508F500); /* 0x1508D032: call 0x1508f500 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508D037: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1508D03A: mov esi, eax */
    goto L_1508D06D; /* 0x1508D03C: jmp 0x1508d06d */
L_1508D03E:
    PUSH32(esp, MEM32(edx + 0x8)); /* 0x1508D03E: push dword ptr [edx + 8] */
    PUSH32(esp, edi); /* 0x1508D041: push edi */
    PUSH32(esp, eax); /* 0x1508D042: push eax */
    PUSH32(esp, edi); /* 0x1508D043: push edi */
    PUSH32(esp, ecx); /* 0x1508D044: push ecx */
    PUSH32(esp, 0x1000u); /* 0x1508D045: push 0x1000 */
    PUSH32(esp, MEM32(edx + 0x10)); /* 0x1508D04A: push dword ptr [edx + 0x10] */
    eax = ebp + (-0x10); /* 0x1508D04D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508D050: push eax */
    RECOMP_CALL(sub_15058510); /* 0x1508D051: call 0x15058510 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508D056: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508D059: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D06A; /* 0x1508D05B: jne 0x1508d06a */
L_1508D05D:
    RECOMP_CALL(sub_15036430); /* 0x1508D05D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508D062: mov dword ptr [eax], 0x16 */
    goto L_1508D06D; /* 0x1508D068: jmp 0x1508d06d */
L_1508D06A:
    esi = eax + (-0x2); /* 0x1508D06A: lea esi, [eax - 2] */
L_1508D06D:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508D06D: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D07A; /* 0x1508D071: je 0x1508d07a */
L_1508D073:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508D073: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508D076: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508D07A:
    eax = esi; /* 0x1508D07A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508D07C: pop esi */
L_1508D07D:
    edi = POP32_VAL(esp); /* 0x1508D07D: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508D07E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D07F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D090u);

L_1508D090:
    edi = edi; /* 0x1508D090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D092: push ebp */
    ebp = esp; /* 0x1508D093: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508D095: push ecx */
    PUSH32(esp, ecx); /* 0x1508D096: push ecx */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508D097: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1508D09E: push ebx */
    PUSH32(esp, esi); /* 0x1508D09F: push esi */
    PUSH32(esp, edi); /* 0x1508D0A0: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D141; /* 0x1508D0A1: jne 0x1508d141 */
L_1508D0A7:
    eax = MEM32(ebp + 0x10); /* 0x1508D0A7: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D0AA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508D0AC: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x1508D0AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D13D; /* 0x1508D0B1: je 0x1508d13d */
L_1508D0B7:
    edi = MEM32(ebp + 0x8); /* 0x1508D0B7: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508D0BA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D0DD; /* 0x1508D0BC: jne 0x1508d0dd */
L_1508D0BE:
    RECOMP_CALL(sub_15036430); /* 0x1508D0BE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1508D0C3: push esi */
    PUSH32(esp, esi); /* 0x1508D0C4: push esi */
    PUSH32(esp, esi); /* 0x1508D0C5: push esi */
    PUSH32(esp, esi); /* 0x1508D0C6: push esi */
    PUSH32(esp, esi); /* 0x1508D0C7: push esi */
    MEM32(eax) = 0x16u; /* 0x1508D0C8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508D0CE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D0D3: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508D0D6: mov eax, 0x7fffffff */
    goto L_1508D154; /* 0x1508D0DB: jmp 0x1508d154 */
L_1508D0DD:
    ebx = MEM32(ebp + 0xC); /* 0x1508D0DD: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508D0E0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D0BE; /* 0x1508D0E2: je 0x1508d0be */
L_1508D0E4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508D0E4: sub edi, ebx */
    _flag_k = FK_CMP;
L_1508D0E6:
    esi = (uint32_t)MEM16(edi + ebx); /* 0x1508D0E6: movzx esi, word ptr [edi + ebx] */
    eax = esi; /* 0x1508D0EA: mov eax, esi */
    PUSH32(esp, 0x19u); /* 0x1508D0EC: push 0x19 */
    ecx = eax + (-0x41); /* 0x1508D0EE: lea ecx, [eax - 0x41] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1508D0F1: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x1508D0F4: movzx edx, ax */
    eax = esi; /* 0x1508D0F7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508D0F9: pop esi */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1508D0FA: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x19u); /* 0x1508D0FD: push 0x19 */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x1508D0FF: cmova edx, eax */
    eax = (uint32_t)LO16(edx); /* 0x1508D102: movzx eax, dx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1508D105: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508D108: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508D10B: lea ebx, [ebx + 2] */
    ecx = eax; /* 0x1508D10E: mov ecx, eax */
    edx = eax + (-0x41); /* 0x1508D110: lea edx, [eax - 0x41] */
    eax = ecx + 0x20; /* 0x1508D113: lea eax, [ecx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x1508D116: movzx esi, ax */
    eax = ecx; /* 0x1508D119: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508D11B: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1508D11C: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x1508D11F: cmova esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1508D122: sub dword ptr [ebp - 4], 1 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x8)); /* 0x1508D126: mov eax, dword ptr [ebp - 8] */
    ecx = (uint32_t)LO16(esi); /* 0x1508D129: movzx ecx, si */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508D138; /* 0x1508D12C: je 0x1508d138 */
L_1508D12E:
    /* test LO16(eax), LO16(eax) */ /* 0x1508D12E: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D138; /* 0x1508D131: je 0x1508d138 */
L_1508D133:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1508D133: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D0E6; /* 0x1508D136: je 0x1508d0e6 */
L_1508D138:
    esi = (uint32_t)LO16(eax); /* 0x1508D138: movzx esi, ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1508D13B: sub esi, ecx */
    _flag_k = FK_CMP;
L_1508D13D:
    eax = esi; /* 0x1508D13D: mov eax, esi */
    goto L_1508D154; /* 0x1508D13F: jmp 0x1508d154 */
L_1508D141:
    PUSH32(esp, 0); /* 0x1508D141: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508D143: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508D146: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508D149: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508D160); /* 0x1508D14C: call 0x1508d160 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508D151: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1508D154:
    edi = POP32_VAL(esp); /* 0x1508D154: pop edi */
    esi = POP32_VAL(esp); /* 0x1508D155: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508D156: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508D157: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D158: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D160u);

L_1508D160:
    edi = edi; /* 0x1508D160: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D162: push ebp */
    ebp = esp; /* 0x1508D163: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1508D165: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1508D168: push ebx */
    PUSH32(esp, esi); /* 0x1508D169: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D16A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1508D16C: push edi */
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1508D16D: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D262; /* 0x1508D170: je 0x1508d262 */
L_1508D176:
    edi = MEM32(ebp + 0x8); /* 0x1508D176: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508D179: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D19F; /* 0x1508D17B: jne 0x1508d19f */
L_1508D17D:
    RECOMP_CALL(sub_15036430); /* 0x1508D17D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1508D182: push esi */
    PUSH32(esp, esi); /* 0x1508D183: push esi */
    PUSH32(esp, esi); /* 0x1508D184: push esi */
    PUSH32(esp, esi); /* 0x1508D185: push esi */
    PUSH32(esp, esi); /* 0x1508D186: push esi */
    MEM32(eax) = 0x16u; /* 0x1508D187: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508D18D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D192: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508D195: mov eax, 0x7fffffff */
    goto L_1508D264; /* 0x1508D19A: jmp 0x1508d264 */
L_1508D19F:
    ebx = MEM32(ebp + 0xC); /* 0x1508D19F: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508D1A2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D17D; /* 0x1508D1A4: je 0x1508d17d */
L_1508D1A6:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508D1A6: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x1508D1A9: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x1508D1AC: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1508D1B1: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x14), esi */ /* 0x1508D1B4: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D214; /* 0x1508D1B7: jne 0x1508d214 */
L_1508D1B9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508D1B9: sub edi, ebx */
    _flag_k = FK_CMP;
L_1508D1BB:
    esi = (uint32_t)MEM16(edi + ebx); /* 0x1508D1BB: movzx esi, word ptr [edi + ebx] */
    eax = esi; /* 0x1508D1BF: mov eax, esi */
    PUSH32(esp, 0x19u); /* 0x1508D1C1: push 0x19 */
    ecx = eax + (-0x41); /* 0x1508D1C3: lea ecx, [eax - 0x41] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1508D1C6: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x1508D1C9: movzx edx, ax */
    eax = esi; /* 0x1508D1CC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508D1CE: pop esi */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1508D1CF: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x19u); /* 0x1508D1D2: push 0x19 */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x1508D1D4: cmova edx, eax */
    eax = (uint32_t)LO16(edx); /* 0x1508D1D7: movzx eax, dx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508D1DA: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508D1DD: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508D1E0: lea ebx, [ebx + 2] */
    ecx = eax; /* 0x1508D1E3: mov ecx, eax */
    edx = eax + (-0x41); /* 0x1508D1E5: lea edx, [eax - 0x41] */
    eax = ecx + 0x20; /* 0x1508D1E8: lea eax, [ecx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x1508D1EB: movzx esi, ax */
    eax = ecx; /* 0x1508D1EE: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508D1F0: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1508D1F1: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x1508D1F4: cmova esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1508D1F7: sub dword ptr [ebp + 0x10], 1 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x1508D1FB: mov eax, dword ptr [ebp - 4] */
    ecx = (uint32_t)LO16(esi); /* 0x1508D1FE: movzx ecx, si */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508D20D; /* 0x1508D201: je 0x1508d20d */
L_1508D203:
    /* test LO16(eax), LO16(eax) */ /* 0x1508D203: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D20D; /* 0x1508D206: je 0x1508d20d */
L_1508D208:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1508D208: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D1BB; /* 0x1508D20B: je 0x1508d1bb */
L_1508D20D:
    esi = (uint32_t)LO16(eax); /* 0x1508D20D: movzx esi, ax */
    eax = ecx; /* 0x1508D210: mov eax, ecx */
    goto L_1508D24D; /* 0x1508D212: jmp 0x1508d24d */
L_1508D214:
    eax = (uint32_t)MEM16(edi); /* 0x1508D214: movzx eax, word ptr [edi] */
    ecx = ebp + (-0x14); /* 0x1508D217: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1508D21A: push ecx */
    PUSH32(esp, eax); /* 0x1508D21B: push eax */
    RECOMP_CALL(sub_15032D90); /* 0x1508D21C: call 0x15032d90 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x14); /* 0x1508D221: lea ecx, [ebp - 0x14] */
    esi = (uint32_t)LO16(eax); /* 0x1508D224: movzx esi, ax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508D227: movzx eax, word ptr [ebx] */
    PUSH32(esp, ecx); /* 0x1508D22A: push ecx */
    PUSH32(esp, eax); /* 0x1508D22B: push eax */
    RECOMP_CALL(sub_15032D90); /* 0x1508D22C: call 0x15032d90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508D231: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(eax); /* 0x1508D234: movzx eax, ax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1508D237: sub dword ptr [ebp + 0x10], 1 */
    _flag_k = FK_CMP;
    edi = edi + 0x2; /* 0x1508D23B: lea edi, [edi + 2] */
    ebx = ebx + 0x2; /* 0x1508D23E: lea ebx, [ebx + 2] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508D24D; /* 0x1508D241: je 0x1508d24d */
L_1508D243:
    /* test LO16(esi), LO16(esi) */ /* 0x1508D243: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D24D; /* 0x1508D246: je 0x1508d24d */
L_1508D248:
    /* cmp LO16(esi), LO16(eax) */ /* 0x1508D248: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D214; /* 0x1508D24B: je 0x1508d214 */
L_1508D24D:
    eax = (uint32_t)LO16(eax); /* 0x1508D24D: movzx eax, ax */
    esi = (uint32_t)LO16(esi); /* 0x1508D250: movzx esi, si */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1508D253: sub esi, eax */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1508D255: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D262; /* 0x1508D259: je 0x1508d262 */
L_1508D25B:
    ecx = MEM32(ebp + (-0xC)); /* 0x1508D25B: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508D25E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508D262:
    eax = esi; /* 0x1508D262: mov eax, esi */
L_1508D264:
    edi = POP32_VAL(esp); /* 0x1508D264: pop edi */
    esi = POP32_VAL(esp); /* 0x1508D265: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508D266: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508D267: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D268: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D270u);

L_1508D270:
    edi = edi; /* 0x1508D270: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D272: push ebp */
    ebp = esp; /* 0x1508D273: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508D275: push ecx */
    PUSH32(esp, ecx); /* 0x1508D276: push ecx */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508D277: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1508D27E: push ebx */
    PUSH32(esp, esi); /* 0x1508D27F: push esi */
    PUSH32(esp, edi); /* 0x1508D280: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D341; /* 0x1508D281: jne 0x1508d341 */
L_1508D287:
    edi = MEM32(ebp + 0x8); /* 0x1508D287: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508D28A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D2B2; /* 0x1508D28C: jne 0x1508d2b2 */
L_1508D28E:
    RECOMP_CALL(sub_15036430); /* 0x1508D28E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508D293: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D299: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508D29B: push eax */
    PUSH32(esp, eax); /* 0x1508D29C: push eax */
    PUSH32(esp, eax); /* 0x1508D29D: push eax */
    PUSH32(esp, eax); /* 0x1508D29E: push eax */
    PUSH32(esp, eax); /* 0x1508D29F: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508D2A0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D2A5: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508D2A8: mov eax, 0x7fffffff */
    goto L_1508D354; /* 0x1508D2AD: jmp 0x1508d354 */
L_1508D2B2:
    ebx = MEM32(ebp + 0xC); /* 0x1508D2B2: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508D2B5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D28E; /* 0x1508D2B7: je 0x1508d28e */
L_1508D2B9:
    eax = MEM32(ebp + 0x10); /* 0x1508D2B9: mov eax, dword ptr [ebp + 0x10] */
    esi = 0x7FFFFFFFu; /* 0x1508D2BC: mov esi, 0x7fffffff */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508D2C1: mov dword ptr [ebp - 4], eax */
    /* cmp eax, esi */ /* 0x1508D2C4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508D2E6; /* 0x1508D2C6: jbe 0x1508d2e6 */
L_1508D2C8:
    RECOMP_CALL(sub_15036430); /* 0x1508D2C8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508D2CD: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D2D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508D2D5: push eax */
    PUSH32(esp, eax); /* 0x1508D2D6: push eax */
    PUSH32(esp, eax); /* 0x1508D2D7: push eax */
    PUSH32(esp, eax); /* 0x1508D2D8: push eax */
    PUSH32(esp, eax); /* 0x1508D2D9: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508D2DA: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D2DF: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508D2E2: mov eax, esi */
    goto L_1508D354; /* 0x1508D2E4: jmp 0x1508d354 */
L_1508D2E6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508D2E6: sub edi, ebx */
    _flag_k = FK_CMP;
L_1508D2E8:
    esi = (uint32_t)MEM16(edi + ebx); /* 0x1508D2E8: movzx esi, word ptr [edi + ebx] */
    eax = esi; /* 0x1508D2EC: mov eax, esi */
    PUSH32(esp, 0x19u); /* 0x1508D2EE: push 0x19 */
    ecx = eax + (-0x41); /* 0x1508D2F0: lea ecx, [eax - 0x41] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1508D2F3: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x1508D2F6: movzx edx, ax */
    eax = esi; /* 0x1508D2F9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508D2FB: pop esi */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1508D2FC: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x19u); /* 0x1508D2FF: push 0x19 */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x1508D301: cmova edx, eax */
    eax = (uint32_t)LO16(edx); /* 0x1508D304: movzx eax, dx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1508D307: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)MEM16(ebx); /* 0x1508D30A: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508D30D: lea ebx, [ebx + 2] */
    ecx = eax; /* 0x1508D310: mov ecx, eax */
    edx = eax + (-0x41); /* 0x1508D312: lea edx, [eax - 0x41] */
    eax = ecx + 0x20; /* 0x1508D315: lea eax, [ecx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x1508D318: movzx esi, ax */
    eax = ecx; /* 0x1508D31B: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508D31D: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1508D31E: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x1508D321: cmova esi, eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x1508D324: sub dword ptr [ebp - 4], 1 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x8)); /* 0x1508D328: mov eax, dword ptr [ebp - 8] */
    ecx = (uint32_t)LO16(esi); /* 0x1508D32B: movzx ecx, si */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508D33A; /* 0x1508D32E: je 0x1508d33a */
L_1508D330:
    /* test LO16(eax), LO16(eax) */ /* 0x1508D330: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D33A; /* 0x1508D333: je 0x1508d33a */
L_1508D335:
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1508D335: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D2E8; /* 0x1508D338: je 0x1508d2e8 */
L_1508D33A:
    eax = (uint32_t)LO16(eax); /* 0x1508D33A: movzx eax, ax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508D33D: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_1508D354; /* 0x1508D33F: jmp 0x1508d354 */
L_1508D341:
    PUSH32(esp, 0); /* 0x1508D341: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508D343: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508D346: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508D349: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508D360); /* 0x1508D34C: call 0x1508d360 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508D351: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1508D354:
    edi = POP32_VAL(esp); /* 0x1508D354: pop edi */
    esi = POP32_VAL(esp); /* 0x1508D355: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508D356: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508D357: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D358: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D360(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D360u);

L_1508D360:
    edi = edi; /* 0x1508D360: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D362: push ebp */
    ebp = esp; /* 0x1508D363: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1508D365: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1508D368: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1508D369: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1508D36C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D377; /* 0x1508D36E: jne 0x1508d377 */
L_1508D370:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D370: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508D490; /* 0x1508D372: jmp 0x1508d490 */
L_1508D377:
    PUSH32(esp, ebx); /* 0x1508D377: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1508D378: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1508D37B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D385; /* 0x1508D37D: je 0x1508d385 */
L_1508D37F:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1508D37F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D3A9; /* 0x1508D383: jne 0x1508d3a9 */
L_1508D385:
    RECOMP_CALL(sub_15036430); /* 0x1508D385: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508D38A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D390: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508D392: push eax */
    PUSH32(esp, eax); /* 0x1508D393: push eax */
    PUSH32(esp, eax); /* 0x1508D394: push eax */
    PUSH32(esp, eax); /* 0x1508D395: push eax */
    PUSH32(esp, eax); /* 0x1508D396: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508D397: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D39C: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508D39F: mov eax, 0x7fffffff */
    goto L_1508D48F; /* 0x1508D3A4: jmp 0x1508d48f */
L_1508D3A9:
    PUSH32(esp, esi); /* 0x1508D3A9: push esi */
    esi = 0x7FFFFFFFu; /* 0x1508D3AA: mov esi, 0x7fffffff */
    /* cmp edi, esi */ /* 0x1508D3AF: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508D3D2; /* 0x1508D3B1: jbe 0x1508d3d2 */
L_1508D3B3:
    RECOMP_CALL(sub_15036430); /* 0x1508D3B3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508D3B8: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D3BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508D3C0: push eax */
    PUSH32(esp, eax); /* 0x1508D3C1: push eax */
    PUSH32(esp, eax); /* 0x1508D3C2: push eax */
    PUSH32(esp, eax); /* 0x1508D3C3: push eax */
    PUSH32(esp, eax); /* 0x1508D3C4: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508D3C5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D3CA: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508D48C; /* 0x1508D3CD: jmp 0x1508d48c */
L_1508D3D2:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508D3D2: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x14); /* 0x1508D3D5: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x1508D3D8: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1508D3DD: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1508D3E0: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D44E; /* 0x1508D3E4: jne 0x1508d44e */
L_1508D3E6:
    eax = MEM32(ebp + 0xC); /* 0x1508D3E6: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1508D3E9: sub ebx, eax */
    _flag_k = FK_CMP;
L_1508D3EB:
    esi = (uint32_t)MEM16(ebx + eax); /* 0x1508D3EB: movzx esi, word ptr [ebx + eax] */
    eax = esi; /* 0x1508D3EF: mov eax, esi */
    PUSH32(esp, 0x19u); /* 0x1508D3F1: push 0x19 */
    ecx = eax + (-0x41); /* 0x1508D3F3: lea ecx, [eax - 0x41] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1508D3F6: add eax, 0x20 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(eax); /* 0x1508D3F9: movzx edx, ax */
    eax = esi; /* 0x1508D3FC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508D3FE: pop esi */
    /* cmp LO16(ecx), LO16(esi) */ /* 0x1508D3FF: cmp cx, si */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 0x19u); /* 0x1508D402: push 0x19 */
    if (CMP_A(_flag_a, _flag_b)) { edx = eax; } /* 0x1508D404: cmova edx, eax */
    eax = (uint32_t)LO16(edx); /* 0x1508D407: movzx eax, dx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508D40A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1508D40D: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax); /* 0x1508D410: movzx eax, word ptr [eax] */
    ecx = eax; /* 0x1508D413: mov ecx, eax */
    edx = eax + (-0x41); /* 0x1508D415: lea edx, [eax - 0x41] */
    eax = ecx + 0x20; /* 0x1508D418: lea eax, [ecx + 0x20] */
    esi = (uint32_t)LO16(eax); /* 0x1508D41B: movzx esi, ax */
    eax = ecx; /* 0x1508D41E: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508D420: pop ecx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x1508D421: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(ebp + (-0x4)); /* 0x1508D424: mov ecx, dword ptr [ebp - 4] */
    if (CMP_A(_flag_a, _flag_b)) { esi = eax; } /* 0x1508D427: cmova esi, eax */
    eax = MEM32(ebp + 0xC); /* 0x1508D42A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1508D42D: add eax, 2 */
    _flag_k = FK_ADD;
    edx = (uint32_t)LO16(esi); /* 0x1508D430: movzx edx, si */
    MEM32(ebp + 0xC) = eax; /* 0x1508D433: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508D436: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508D445; /* 0x1508D439: je 0x1508d445 */
L_1508D43B:
    /* test LO16(ecx), LO16(ecx) */ /* 0x1508D43B: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D445; /* 0x1508D43E: je 0x1508d445 */
L_1508D440:
    /* cmp LO16(ecx), LO16(edx) */ /* 0x1508D440: cmp cx, dx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D3EB; /* 0x1508D443: je 0x1508d3eb */
L_1508D445:
    eax = edx; /* 0x1508D445: mov eax, edx */
    esi = (uint32_t)LO16(ecx); /* 0x1508D447: movzx esi, cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1508D44A: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_1508D47F; /* 0x1508D44C: jmp 0x1508d47f */
L_1508D44E:
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1508D44E: push dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x1508D451: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508D452: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1508D455: push edi */
    PUSH32(esp, ebx); /* 0x1508D456: push ebx */
    PUSH32(esp, 0x1001u); /* 0x1508D457: push 0x1001 */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1508D45C: push dword ptr [eax + 0x10] */
    eax = ebp + (-0x14); /* 0x1508D45F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1508D462: push eax */
    RECOMP_CALL(sub_15058510); /* 0x1508D463: call 0x15058510 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508D468: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508D46B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D47C; /* 0x1508D46D: jne 0x1508d47c */
L_1508D46F:
    RECOMP_CALL(sub_15036430); /* 0x1508D46F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508D474: mov dword ptr [eax], 0x16 */
    goto L_1508D47F; /* 0x1508D47A: jmp 0x1508d47f */
L_1508D47C:
    esi = eax + (-0x2); /* 0x1508D47C: lea esi, [eax - 2] */
L_1508D47F:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x1508D47F: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D48C; /* 0x1508D483: je 0x1508d48c */
L_1508D485:
    ecx = MEM32(ebp + (-0xC)); /* 0x1508D485: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508D488: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508D48C:
    eax = esi; /* 0x1508D48C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508D48E: pop esi */
L_1508D48F:
    ebx = POP32_VAL(esp); /* 0x1508D48F: pop ebx */
L_1508D490:
    edi = POP32_VAL(esp); /* 0x1508D490: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508D491: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D492: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D4A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D4A0u);

L_1508D4A0:
    edi = edi; /* 0x1508D4A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D4A2: push ebp */
    ebp = esp; /* 0x1508D4A3: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x1508D4A5: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1508D4A8: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1508D4AB: mov eax, ecx */
    /* test edx, edx */ /* 0x1508D4AD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D4C8; /* 0x1508D4AF: je 0x1508d4c8 */
L_1508D4B1:
    PUSH32(esp, esi); /* 0x1508D4B1: push esi */
    SET_LO16(esi, MEM16(ebp + 0xC)); /* 0x1508D4B2: mov si, word ptr [ebp + 0xc] */
L_1508D4B6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1508D4B6: dec edx */
    _flag_k = FK_DEC;
    /* cmp MEM16(ecx), 0 */ /* 0x1508D4B7: cmp word ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D4C7; /* 0x1508D4BB: je 0x1508d4c7 */
L_1508D4BD:
    MEM16(ecx) = (uint16_t)(LO16(esi)); /* 0x1508D4BD: mov word ptr [ecx], si */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508D4C0: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x1508D4C3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D4B6; /* 0x1508D4C5: jne 0x1508d4b6 */
L_1508D4C7:
    esi = POP32_VAL(esp); /* 0x1508D4C7: pop esi */
L_1508D4C8:
    ebp = POP32_VAL(esp); /* 0x1508D4C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D4C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D4D0u);

L_1508D4D0:
    edi = edi; /* 0x1508D4D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D4D2: push ebp */
    ebp = esp; /* 0x1508D4D3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1508D4D5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508D4D8: push esi */
    PUSH32(esp, edi); /* 0x1508D4D9: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1508D4DA: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1508D4DD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D509; /* 0x1508D4DF: jne 0x1508d509 */
L_1508D4E1:
    /* test eax, eax */ /* 0x1508D4E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D50D; /* 0x1508D4E3: jne 0x1508d50d */
L_1508D4E5:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1508D4E5: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D55B; /* 0x1508D4E8: je 0x1508d55b */
L_1508D4EA:
    RECOMP_CALL(sub_15036430); /* 0x1508D4EA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D4EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508D4F1:
    PUSH32(esp, 0x16u); /* 0x1508D4F1: push 0x16 */
    edi = POP32_VAL(esp); /* 0x1508D4F3: pop edi */
    PUSH32(esp, esi); /* 0x1508D4F4: push esi */
    PUSH32(esp, esi); /* 0x1508D4F5: push esi */
    PUSH32(esp, esi); /* 0x1508D4F6: push esi */
    PUSH32(esp, esi); /* 0x1508D4F7: push esi */
    PUSH32(esp, esi); /* 0x1508D4F8: push esi */
    MEM32(eax) = edi; /* 0x1508D4F9: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1508D4FB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1508D500: mov eax, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D502: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508D505:
    edi = POP32_VAL(esp); /* 0x1508D505: pop edi */
    esi = POP32_VAL(esp); /* 0x1508D506: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508D507: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D508: ret  */
L_1508D509:
    /* test eax, eax */ /* 0x1508D509: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D4EA; /* 0x1508D50B: je 0x1508d4ea */
L_1508D50D:
    edx = MEM32(ebp + 0xC); /* 0x1508D50D: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1508D510: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D4EA; /* 0x1508D512: je 0x1508d4ea */
L_1508D514:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D514: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x1508D516: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x1508D518: push ebx */
    /* cmp MEM16(eax), LO16(esi) */ /* 0x1508D519: cmp word ptr [eax], si */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D537; /* 0x1508D51C: je 0x1508d537 */
L_1508D51E:
    SET_LO16(ebx, MEM16(ebp + 0x10)); /* 0x1508D51E: mov bx, word ptr [ebp + 0x10] */
L_1508D522:
    /* test edi, edi */ /* 0x1508D522: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D545; /* 0x1508D524: je 0x1508d545 */
L_1508D526:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x1508D526: sub edx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508D54A; /* 0x1508D529: je 0x1508d54a */
L_1508D52B:
    MEM16(ecx) = (uint16_t)(LO16(ebx)); /* 0x1508D52B: mov word ptr [ecx], bx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508D52E: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1508D531: dec edi */
    _flag_k = FK_DEC;
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1508D532: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D522; /* 0x1508D535: jne 0x1508d522 */
L_1508D537:
    /* test edi, edi */ /* 0x1508D537: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D54A; /* 0x1508D539: jne 0x1508d54a */
L_1508D53B:
    goto L_1508D545; /* 0x1508D53B: jmp 0x1508d545 */
L_1508D53D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x1508D53D: sub edx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508D54A; /* 0x1508D540: je 0x1508d54a */
L_1508D542:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508D542: add ecx, 2 */
    _flag_k = FK_ADD;
L_1508D545:
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1508D545: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D53D; /* 0x1508D548: jne 0x1508d53d */
L_1508D54A:
    ebx = POP32_VAL(esp); /* 0x1508D54A: pop ebx */
    /* test edx, edx */ /* 0x1508D54B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D55B; /* 0x1508D54D: jne 0x1508d55b */
L_1508D54F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508D54F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1508D551: mov word ptr [eax], cx */
    RECOMP_CALL(sub_15036430); /* 0x1508D554: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508D4F1; /* 0x1508D559: jmp 0x1508d4f1 */
L_1508D55B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D55B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508D505; /* 0x1508D55D: jmp 0x1508d505 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508D570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D570u);

L_1508D570:
    edi = edi; /* 0x1508D570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D572: push ebp */
    ebp = esp; /* 0x1508D573: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1508D575: push ebx */
    PUSH32(esp, esi); /* 0x1508D576: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508D577: mov esi, dword ptr [ebp + 8] */
    ebx = esi; /* 0x1508D57A: mov ebx, esi */
    PUSH32(esp, edi); /* 0x1508D57C: push edi */
    edi = esi; /* 0x1508D57D: mov edi, esi */
L_1508D57F:
    SET_LO16(eax, MEM16(esi)); /* 0x1508D57F: mov ax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508D582: add esi, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x1508D585: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D57F; /* 0x1508D588: jne 0x1508d57f */
L_1508D58A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 4; /* 0x1508D58A: sub esi, 4 */
    _flag_k = FK_CMP;
    goto L_1508D5A1; /* 0x1508D58D: jmp 0x1508d5a1 */
L_1508D58F:
    SET_LO16(ecx, MEM16(esi)); /* 0x1508D58F: mov cx, word ptr [esi] */
    edx = (uint32_t)MEM16(edi); /* 0x1508D592: movzx edx, word ptr [edi] */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1508D595: mov word ptr [edi], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1508D598: add edi, 2 */
    _flag_k = FK_ADD;
    MEM16(esi) = (uint16_t)(LO16(edx)); /* 0x1508D59B: mov word ptr [esi], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1508D59E: sub esi, 2 */
    _flag_k = FK_CMP;
L_1508D5A1:
    /* cmp edi, esi */ /* 0x1508D5A1: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508D58F; /* 0x1508D5A3: jb 0x1508d58f */
L_1508D5A5:
    edi = POP32_VAL(esp); /* 0x1508D5A5: pop edi */
    esi = POP32_VAL(esp); /* 0x1508D5A6: pop esi */
    eax = ebx; /* 0x1508D5A7: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1508D5A9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508D5AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D5AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D5C0u);

L_1508D5C0:
    edi = edi; /* 0x1508D5C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D5C2: push ebp */
    ebp = esp; /* 0x1508D5C3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1508D5C5: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1508D5C8: mov eax, ecx */
    PUSH32(esp, esi); /* 0x1508D5CA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D5CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1508D5CD: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D5E1; /* 0x1508D5D0: je 0x1508d5e1 */
L_1508D5D2:
    SET_LO16(edx, MEM16(ebp + 0xC)); /* 0x1508D5D2: mov dx, word ptr [ebp + 0xc] */
L_1508D5D6:
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x1508D5D6: mov word ptr [ecx], dx */
    ecx = ecx + 0x2; /* 0x1508D5D9: lea ecx, [ecx + 2] */
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1508D5DC: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D5D6; /* 0x1508D5DF: jne 0x1508d5d6 */
L_1508D5E1:
    esi = POP32_VAL(esp); /* 0x1508D5E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508D5E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D5E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D5F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D5F0u);

L_1508D5F0:
    edi = edi; /* 0x1508D5F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D5F2: push ebp */
    ebp = esp; /* 0x1508D5F3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1508D5F5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508D5F8: push esi */
    PUSH32(esp, edi); /* 0x1508D5F9: push edi */
    /* test ecx, ecx */ /* 0x1508D5FA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D634; /* 0x1508D5FC: je 0x1508d634 */
L_1508D5FE:
    eax = MEM32(ebp + 0xC); /* 0x1508D5FE: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1508D601: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D634; /* 0x1508D603: je 0x1508d634 */
L_1508D605:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D605: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx; /* 0x1508D607: mov edx, ecx */
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1508D609: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D630; /* 0x1508D60C: je 0x1508d630 */
L_1508D60E:
    SET_LO16(edi, MEM16(ebp + 0x10)); /* 0x1508D60E: mov di, word ptr [ebp + 0x10] */
L_1508D612:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1508D612: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508D622; /* 0x1508D615: je 0x1508d622 */
L_1508D617:
    MEM16(edx) = (uint16_t)(LO16(edi)); /* 0x1508D617: mov word ptr [edx], di */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508D61A: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(edx), LO16(esi) */ /* 0x1508D61D: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D612; /* 0x1508D620: jne 0x1508d612 */
L_1508D622:
    /* test eax, eax */ /* 0x1508D622: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D630; /* 0x1508D624: jne 0x1508d630 */
L_1508D626:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1508D626: mov word ptr [ecx], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508D629: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1508D63B; /* 0x1508D62E: jmp 0x1508d63b */
L_1508D630:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D630: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508D64F; /* 0x1508D632: jmp 0x1508d64f */
L_1508D634:
    RECOMP_CALL(sub_15036430); /* 0x1508D634: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D639: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508D63B:
    PUSH32(esp, 0x16u); /* 0x1508D63B: push 0x16 */
    edi = POP32_VAL(esp); /* 0x1508D63D: pop edi */
    PUSH32(esp, esi); /* 0x1508D63E: push esi */
    PUSH32(esp, esi); /* 0x1508D63F: push esi */
    PUSH32(esp, esi); /* 0x1508D640: push esi */
    PUSH32(esp, esi); /* 0x1508D641: push esi */
    PUSH32(esp, esi); /* 0x1508D642: push esi */
    MEM32(eax) = edi; /* 0x1508D643: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1508D645: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1508D64A: mov eax, edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D64C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508D64F:
    edi = POP32_VAL(esp); /* 0x1508D64F: pop edi */
    esi = POP32_VAL(esp); /* 0x1508D650: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508D651: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D652: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D659(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D659u);

L_1508D659:
    edi = edi; /* 0x1508D659: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D65B: push ebp */
    ebp = esp; /* 0x1508D65C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10Cu; /* 0x1508D65E: sub esp, 0x10c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1508D664: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1508D669: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508D66B: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1508D66E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1508D66F: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508D672: push esi */
    PUSH32(esp, edi); /* 0x1508D673: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1508D674: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D677: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10C)) = edi; /* 0x1508D679: mov dword ptr [ebp - 0x10c], edi */
    /* test ebx, ebx */ /* 0x1508D67F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D6A1; /* 0x1508D681: jne 0x1508d6a1 */
L_1508D683:
    RECOMP_CALL(sub_15036430); /* 0x1508D683: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1508D688: push 0x16 */
L_1508D68A:
    edi = POP32_VAL(esp); /* 0x1508D68A: pop edi */
    PUSH32(esp, esi); /* 0x1508D68B: push esi */
    PUSH32(esp, esi); /* 0x1508D68C: push esi */
    PUSH32(esp, esi); /* 0x1508D68D: push esi */
    PUSH32(esp, esi); /* 0x1508D68E: push esi */
    PUSH32(esp, esi); /* 0x1508D68F: push esi */
    MEM32(eax) = edi; /* 0x1508D690: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1508D692: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D697: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1508D69A: mov eax, edi */
    goto L_1508D80F; /* 0x1508D69C: jmp 0x1508d80f */
L_1508D6A1:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508D6A1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1508D6A4: push ebx */
    RECOMP_CALL(sub_1508F6A0); /* 0x1508D6A5: call 0x1508f6a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508D6AA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508D6AB: pop ecx */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1508D6AC: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508D6B8; /* 0x1508D6AF: jb 0x1508d6b8 */
L_1508D6B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D6B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1508D6B3: mov word ptr [ebx], ax */
    RECOMP_BACKEDGE();
    goto L_1508D683; /* 0x1508D6B6: jmp 0x1508d683 */
L_1508D6B8:
    eax = MEM32(edi); /* 0x1508D6B8: mov eax, dword ptr [edi] */
    /* cmp MEM32(eax + 0x14), esi */ /* 0x1508D6BA: cmp dword ptr [eax + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D6EC; /* 0x1508D6BD: jne 0x1508d6ec */
L_1508D6BF:
    eax = (uint32_t)MEM16(ebx); /* 0x1508D6BF: movzx eax, word ptr [ebx] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508D6C2: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D6E5; /* 0x1508D6C5: je 0x1508d6e5 */
L_1508D6C7:
    ecx = eax; /* 0x1508D6C7: mov ecx, eax */
L_1508D6C9:
    eax = ecx + (-0x61); /* 0x1508D6C9: lea eax, [ecx - 0x61] */
    /* cmp LO16(eax), 0x19u */ /* 0x1508D6CC: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508D6D8; /* 0x1508D6D0: ja 0x1508d6d8 */
L_1508D6D2:
    eax = ecx + (-0x20); /* 0x1508D6D2: lea eax, [ecx - 0x20] */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1508D6D5: mov word ptr [ebx], ax */
L_1508D6D8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1508D6D8: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ebx); /* 0x1508D6DB: movzx eax, word ptr [ebx] */
    ecx = eax; /* 0x1508D6DE: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508D6E0: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D6C9; /* 0x1508D6E3: jne 0x1508d6c9 */
L_1508D6E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D6E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508D80F; /* 0x1508D6E7: jmp 0x1508d80f */
L_1508D6EC:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508D6EC: push dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x1508D6EF: push esi */
    PUSH32(esp, esi); /* 0x1508D6F0: push esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508D6F1: push -1 */
    PUSH32(esp, ebx); /* 0x1508D6F3: push ebx */
    PUSH32(esp, 0x200u); /* 0x1508D6F4: push 0x200 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1508D6F9: push dword ptr [eax + 0x14] */
    PUSH32(esp, edi); /* 0x1508D6FC: push edi */
    RECOMP_CALL(sub_15058960); /* 0x1508D6FD: call 0x15058960 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1508D702: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508D704: add esp, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x108)) = ecx; /* 0x1508D707: mov dword ptr [ebp - 0x108], ecx */
    /* test ecx, ecx */ /* 0x1508D70D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D722; /* 0x1508D70F: jne 0x1508d722 */
L_1508D711:
    RECOMP_CALL(sub_15036430); /* 0x1508D711: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1508D716: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1508D718: pop ebx */
    MEM32(eax) = ebx; /* 0x1508D719: mov dword ptr [eax], ebx */
L_1508D71B:
    eax = ebx; /* 0x1508D71B: mov eax, ebx */
    goto L_1508D80F; /* 0x1508D71D: jmp 0x1508d80f */
L_1508D722:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1508D722: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508D738; /* 0x1508D725: jae 0x1508d738 */
L_1508D727:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D727: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1508D729: mov word ptr [ebx], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508D72C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508D731: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508D68A; /* 0x1508D733: jmp 0x1508d68a */
L_1508D738:
    edi = ecx + ecx; /* 0x1508D738: lea edi, [ecx + ecx] */
    /* cmp edi, 0x100u */ /* 0x1508D73B: cmp edi, 0x100 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508D74B; /* 0x1508D741: jae 0x1508d74b */
L_1508D743:
    edi = ebp + (-0x104); /* 0x1508D743: lea edi, [ebp - 0x104] */
    goto L_1508D7AF; /* 0x1508D749: jmp 0x1508d7af */
L_1508D74B:
    /* test ecx, ecx */ /* 0x1508D74B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1508D803; /* 0x1508D74D: jle 0x1508d803 */
L_1508D753:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x1508D753: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1508D755: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x1508D757: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1508D758: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 2 */ /* 0x1508D75A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508D803; /* 0x1508D75D: jb 0x1508d803 */
L_1508D763:
    eax = ecx * 2 + 0x8; /* 0x1508D763: lea eax, [ecx*2 + 8] */
    /* cmp eax, edi */ /* 0x1508D76A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508D7A6; /* 0x1508D76C: jbe 0x1508d7a6 */
L_1508D76E:
    /* cmp eax, 0x400u */ /* 0x1508D76E: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1508D788; /* 0x1508D773: ja 0x1508d788 */
L_1508D775:
    RECOMP_CALL(sub_15069EB0); /* 0x1508D775: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x1508D77A: mov edi, esp */
    /* test edi, edi */ /* 0x1508D77C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D79E; /* 0x1508D77E: je 0x1508d79e */
L_1508D780:
    MEM32(edi) = 0xCCCCu; /* 0x1508D780: mov dword ptr [edi], 0xcccc */
    goto L_1508D79B; /* 0x1508D786: jmp 0x1508d79b */
L_1508D788:
    PUSH32(esp, eax); /* 0x1508D788: push eax */
    RECOMP_CALL(sub_15048A30); /* 0x1508D789: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1508D78E: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1508D790: pop ecx */
    /* test edi, edi */ /* 0x1508D791: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D79E; /* 0x1508D793: je 0x1508d79e */
L_1508D795:
    MEM32(edi) = 0xDDDDu; /* 0x1508D795: mov dword ptr [edi], 0xdddd */
L_1508D79B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1508D79B: add edi, 8 */
    _flag_k = FK_ADD;
L_1508D79E:
    ecx = MEM32(ebp + (-0x108)); /* 0x1508D79E: mov ecx, dword ptr [ebp - 0x108] */
    goto L_1508D7A8; /* 0x1508D7A4: jmp 0x1508d7a8 */
L_1508D7A6:
    edi = esi; /* 0x1508D7A6: mov edi, esi */
L_1508D7A8:
    /* test edi, edi */ /* 0x1508D7A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D803; /* 0x1508D7AA: je 0x1508d803 */
L_1508D7AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508D7AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508D7AE: inc esi */
    _flag_k = FK_INC;
L_1508D7AF:
    edx = MEM32(ebp + (-0x10C)); /* 0x1508D7AF: mov edx, dword ptr [ebp - 0x10c] */
    eax = MEM32(edx); /* 0x1508D7B5: mov eax, dword ptr [edx] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1508D7B7: push dword ptr [eax + 4] */
    PUSH32(esp, ecx); /* 0x1508D7BA: push ecx */
    PUSH32(esp, edi); /* 0x1508D7BB: push edi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508D7BC: push -1 */
    PUSH32(esp, ebx); /* 0x1508D7BE: push ebx */
    PUSH32(esp, 0x200u); /* 0x1508D7BF: push 0x200 */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1508D7C4: push dword ptr [eax + 0x14] */
    PUSH32(esp, edx); /* 0x1508D7C7: push edx */
    RECOMP_CALL(sub_15058960); /* 0x1508D7C8: call 0x15058960 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508D7CD: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508D7D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D7E5; /* 0x1508D7D2: je 0x1508d7e5 */
L_1508D7D4:
    PUSH32(esp, edi); /* 0x1508D7D4: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508D7D5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1508D7D8: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x1508D7D9: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508D7DE: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = eax; /* 0x1508D7E1: mov ebx, eax */
    goto L_1508D7EF; /* 0x1508D7E3: jmp 0x1508d7ef */
L_1508D7E5:
    RECOMP_CALL(sub_15036430); /* 0x1508D7E5: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x1508D7EA: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x1508D7EC: pop ebx */
    MEM32(eax) = ebx; /* 0x1508D7ED: mov dword ptr [eax], ebx */
L_1508D7EF:
    /* test esi, esi */ /* 0x1508D7EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D71B; /* 0x1508D7F1: je 0x1508d71b */
L_1508D7F7:
    PUSH32(esp, edi); /* 0x1508D7F7: push edi */
    RECOMP_CALL(sub_1504ABA0); /* 0x1508D7F8: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508D7FD: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1508D71B; /* 0x1508D7FE: jmp 0x1508d71b */
L_1508D803:
    RECOMP_CALL(sub_15036430); /* 0x1508D803: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1508D808: push 0xc */
    ecx = POP32_VAL(esp); /* 0x1508D80A: pop ecx */
    MEM32(eax) = ecx; /* 0x1508D80B: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1508D80D: mov eax, ecx */
L_1508D80F:
    esp = ebp + (-0x118); /* 0x1508D80F: lea esp, [ebp - 0x118] */
    edi = POP32_VAL(esp); /* 0x1508D815: pop edi */
    esi = POP32_VAL(esp); /* 0x1508D816: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508D817: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1508D818: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1508D81B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1508D81D: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508D822: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D823: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D830u);

L_1508D830:
    edi = edi; /* 0x1508D830: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D832: push ebp */
    ebp = esp; /* 0x1508D833: mov ebp, esp */
    /* cmp MEM32(0x150BDBA0), 0 */ /* 0x1508D835: cmp dword ptr [0x150bdba0], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBA0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D893; /* 0x1508D83C: jne 0x1508d893 */
L_1508D83E:
    edx = MEM32(ebp + 0x8); /* 0x1508D83E: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x1508D841: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D863; /* 0x1508D843: jne 0x1508d863 */
L_1508D845:
    RECOMP_CALL(sub_15036430); /* 0x1508D845: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508D84A: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D850: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508D852: push eax */
    PUSH32(esp, eax); /* 0x1508D853: push eax */
    PUSH32(esp, eax); /* 0x1508D854: push eax */
    PUSH32(esp, eax); /* 0x1508D855: push eax */
    PUSH32(esp, eax); /* 0x1508D856: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508D857: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D85C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D85F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1508D861: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D862: ret  */
L_1508D863:
    eax = (uint32_t)MEM16(edx); /* 0x1508D863: movzx eax, word ptr [edx] */
    PUSH32(esp, esi); /* 0x1508D866: push esi */
    esi = edx; /* 0x1508D867: mov esi, edx */
    /* test LO16(eax), LO16(eax) */ /* 0x1508D869: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D88E; /* 0x1508D86C: je 0x1508d88e */
L_1508D86E:
    PUSH32(esp, edi); /* 0x1508D86E: push edi */
    edi = eax; /* 0x1508D86F: mov edi, eax */
L_1508D871:
    eax = edi + (-0x61); /* 0x1508D871: lea eax, [edi - 0x61] */
    /* cmp LO16(eax), 0x19u */ /* 0x1508D874: cmp ax, 0x19 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x19u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508D880; /* 0x1508D878: ja 0x1508d880 */
L_1508D87A:
    eax = edi + (-0x20); /* 0x1508D87A: lea eax, [edi - 0x20] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1508D87D: mov word ptr [esi], ax */
L_1508D880:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508D880: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(esi); /* 0x1508D883: movzx ecx, word ptr [esi] */
    edi = ecx; /* 0x1508D886: mov edi, ecx */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1508D888: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D871; /* 0x1508D88B: jne 0x1508d871 */
L_1508D88D:
    edi = POP32_VAL(esp); /* 0x1508D88D: pop edi */
L_1508D88E:
    eax = edx; /* 0x1508D88E: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x1508D890: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508D891: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D892: ret  */
L_1508D893:
    PUSH32(esp, 0); /* 0x1508D893: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508D895: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508D897: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508D8F0); /* 0x1508D89A: call 0x1508d8f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508D89F: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508D8A2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508D8A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D8A6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D8B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D8B0u);

L_1508D8B0:
    edi = edi; /* 0x1508D8B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D8B2: push ebp */
    ebp = esp; /* 0x1508D8B3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508D8B5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508D8B8: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508D8BA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508D8F0); /* 0x1508D8BD: call 0x1508d8f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508D8C2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508D8C5: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508D8C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D8C9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D8D0u);

L_1508D8D0:
    edi = edi; /* 0x1508D8D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D8D2: push ebp */
    ebp = esp; /* 0x1508D8D3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1508D8D5: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508D8D7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508D8DA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508D8F0); /* 0x1508D8DD: call 0x1508d8f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508D8E2: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508D8E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D8E6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D8F0u);

L_1508D8F0:
    edi = edi; /* 0x1508D8F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D8F2: push ebp */
    ebp = esp; /* 0x1508D8F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508D8F5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508D8F8: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x1508D8FB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508D8FE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x1508D903: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508D906: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508D907: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508D90A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508D659); /* 0x1508D90D: call 0x1508d659 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508D912: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508D915: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508D922; /* 0x1508D919: je 0x1508d922 */
L_1508D91B:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508D91B: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508D91E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508D922:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508D922: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508D923: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508D930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508D930u);

L_1508D930:
    edi = edi; /* 0x1508D930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508D932: push ebp */
    ebp = esp; /* 0x1508D933: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508D935: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508D938: push esi */
    PUSH32(esp, edi); /* 0x1508D939: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1508D93A: mov edi, dword ptr [ebp + 0x10] */
    esi = 0x7FFFFFFFu; /* 0x1508D93D: mov esi, 0x7fffffff */
    /* cmp edi, esi */ /* 0x1508D942: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508D967; /* 0x1508D944: jbe 0x1508d967 */
L_1508D946:
    RECOMP_CALL(sub_15036430); /* 0x1508D946: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508D94B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1508D94D: push ecx */
    PUSH32(esp, ecx); /* 0x1508D94E: push ecx */
    PUSH32(esp, ecx); /* 0x1508D94F: push ecx */
    PUSH32(esp, ecx); /* 0x1508D950: push ecx */
    PUSH32(esp, ecx); /* 0x1508D951: push ecx */
    MEM32(eax) = 0x16u; /* 0x1508D952: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508D958: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D95D: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508D960: mov eax, esi */
    goto L_1508DAA1; /* 0x1508D962: jmp 0x1508daa1 */
L_1508D967:
    PUSH32(esp, ebx); /* 0x1508D967: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1508D968: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x1508D96B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D992; /* 0x1508D96D: jne 0x1508d992 */
L_1508D96F:
    /* test edi, edi */ /* 0x1508D96F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D992; /* 0x1508D971: je 0x1508d992 */
L_1508D973:
    RECOMP_CALL(sub_15036430); /* 0x1508D973: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508D978: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1508D97A: push ecx */
    PUSH32(esp, ecx); /* 0x1508D97B: push ecx */
    PUSH32(esp, ecx); /* 0x1508D97C: push ecx */
    PUSH32(esp, ecx); /* 0x1508D97D: push ecx */
    PUSH32(esp, ecx); /* 0x1508D97E: push ecx */
    MEM32(eax) = 0x16u; /* 0x1508D97F: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508D985: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D98A: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1508DA9E; /* 0x1508D98D: jmp 0x1508da9e */
L_1508D992:
    esi = MEM32(ebp + 0xC); /* 0x1508D992: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x1508D995: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508D9BD; /* 0x1508D997: jne 0x1508d9bd */
L_1508D999:
    RECOMP_CALL(sub_15036430); /* 0x1508D999: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508D99E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1508D9A0: push ecx */
    PUSH32(esp, ecx); /* 0x1508D9A1: push ecx */
    PUSH32(esp, ecx); /* 0x1508D9A2: push ecx */
    PUSH32(esp, ecx); /* 0x1508D9A3: push ecx */
    PUSH32(esp, ecx); /* 0x1508D9A4: push ecx */
    MEM32(eax) = 0x16u; /* 0x1508D9A5: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508D9AB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508D9B0: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = 0x7FFFFFFFu; /* 0x1508D9B3: mov eax, 0x7fffffff */
    goto L_1508DAA0; /* 0x1508D9B8: jmp 0x1508daa0 */
L_1508D9BD:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508D9BD: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x10); /* 0x1508D9C0: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1508D9C3: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1508D9C8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D9D5; /* 0x1508D9CA: je 0x1508d9d5 */
L_1508D9CC:
    /* test edi, edi */ /* 0x1508D9CC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508D9D5; /* 0x1508D9CE: je 0x1508d9d5 */
L_1508D9D0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508D9D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1508D9D2: mov word ptr [ebx], ax */
L_1508D9D5:
    eax = MEM32(ebp + (-0x10)); /* 0x1508D9D5: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax + 0x10), 0 */ /* 0x1508D9D8: cmp dword ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508DA02; /* 0x1508D9DC: jne 0x1508da02 */
L_1508D9DE:
    PUSH32(esp, edi); /* 0x1508D9DE: push edi */
    PUSH32(esp, esi); /* 0x1508D9DF: push esi */
    PUSH32(esp, ebx); /* 0x1508D9E0: push ebx */
    RECOMP_CALL(sub_1508F540); /* 0x1508D9E1: call 0x1508f540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508D9E6: add esp, 0xc */
    _flag_k = FK_ADD;
    edx = esi + 0x2; /* 0x1508D9E9: lea edx, [esi + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508D9EC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508D9EE:
    SET_LO16(eax, MEM16(esi)); /* 0x1508D9EE: mov ax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508D9F1: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x1508D9F4: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508D9EE; /* 0x1508D9F7: jne 0x1508d9ee */
L_1508D9F9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1508D9F9: sub esi, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1508D9FB: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    goto L_1508DA91; /* 0x1508D9FD: jmp 0x1508da91 */
L_1508DA02:
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1508DA02: push dword ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508DA05: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1508DA07: push ecx */
    PUSH32(esp, ecx); /* 0x1508DA08: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508DA09: push -1 */
    PUSH32(esp, esi); /* 0x1508DA0B: push esi */
    PUSH32(esp, 0x400u); /* 0x1508DA0C: push 0x400 */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1508DA11: push dword ptr [eax + 0x10] */
    eax = ebp + (-0x10); /* 0x1508DA14: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508DA17: push eax */
    RECOMP_CALL(sub_15058960); /* 0x1508DA18: call 0x15058960 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1508DA1D: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508DA1F: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1508DA22: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508DA38; /* 0x1508DA24: jne 0x1508da38 */
L_1508DA26:
    RECOMP_CALL(sub_15036430); /* 0x1508DA26: call 0x15036430 */
    RECOMP_FLAGS_IN();
    edi = 0x7FFFFFFFu; /* 0x1508DA2B: mov edi, 0x7fffffff */
    MEM32(eax) = 0x2Au; /* 0x1508DA30: mov dword ptr [eax], 0x2a */
    goto L_1508DA8F; /* 0x1508DA36: jmp 0x1508da8f */
L_1508DA38:
    ecx = MEM32(ebp + 0x10); /* 0x1508DA38: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp edi, ecx */ /* 0x1508DA3B: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1508DA76; /* 0x1508DA3D: jg 0x1508da76 */
L_1508DA3F:
    eax = MEM32(ebp + (-0x10)); /* 0x1508DA3F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1508DA42: push dword ptr [eax + 8] */
    PUSH32(esp, ecx); /* 0x1508DA45: push ecx */
    PUSH32(esp, ebx); /* 0x1508DA46: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1508DA47: push -1 */
    PUSH32(esp, esi); /* 0x1508DA49: push esi */
    PUSH32(esp, 0x400u); /* 0x1508DA4A: push 0x400 */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1508DA4F: push dword ptr [eax + 0x10] */
    eax = ebp + (-0x10); /* 0x1508DA52: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1508DA55: push eax */
    RECOMP_CALL(sub_15058960); /* 0x1508DA56: call 0x15058960 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1508DA5B: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508DA5D: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1508DA60: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DA26; /* 0x1508DA62: je 0x1508da26 */
L_1508DA64:
    ecx = edi; /* 0x1508DA64: mov ecx, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1508DA66: dec edi */
    _flag_k = FK_DEC;
L_1508DA67:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508DA67: sub ecx, 1 */
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM8(ebx + ecx); /* 0x1508DA6A: movzx eax, byte ptr [ebx + ecx] */
    MEM16(ebx + ecx * 2) = (uint16_t)(LO16(eax)); /* 0x1508DA6E: mov word ptr [ebx + ecx*2], ax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508DA67; /* 0x1508DA72: jne 0x1508da67 */
L_1508DA74:
    goto L_1508DA8F; /* 0x1508DA74: jmp 0x1508da8f */
L_1508DA76:
    /* test ebx, ebx */ /* 0x1508DA76: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DA8E; /* 0x1508DA78: je 0x1508da8e */
L_1508DA7A:
    /* test ecx, ecx */ /* 0x1508DA7A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DA8E; /* 0x1508DA7C: je 0x1508da8e */
L_1508DA7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508DA7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1508DA80: mov word ptr [ebx], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508DA83: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x1508DA88: mov dword ptr [eax], 0x22 */
L_1508DA8E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1508DA8E: dec edi */
    _flag_k = FK_DEC;
L_1508DA8F:
    esi = edi; /* 0x1508DA8F: mov esi, edi */
L_1508DA91:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1508DA91: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508DA9E; /* 0x1508DA95: je 0x1508da9e */
L_1508DA97:
    ecx = MEM32(ebp + (-0x8)); /* 0x1508DA97: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1508DA9A: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508DA9E:
    eax = esi; /* 0x1508DA9E: mov eax, esi */
L_1508DAA0:
    ebx = POP32_VAL(esp); /* 0x1508DAA0: pop ebx */
L_1508DAA1:
    edi = POP32_VAL(esp); /* 0x1508DAA1: pop edi */
    esi = POP32_VAL(esp); /* 0x1508DAA2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DAA3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DAA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508DAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508DAB0u);

L_1508DAB0:
    edi = edi; /* 0x1508DAB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508DAB2: push ebp */
    ebp = esp; /* 0x1508DAB3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1508DAB5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508DAB7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508DABA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508DABD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508D930); /* 0x1508DAC0: call 0x1508d930 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508DAC5: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508DAC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DAC9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508DAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508DAD0u);

L_1508DAD0:
    eax = MEM32(esp + 0xC); /* 0x1508DAD0: mov eax, dword ptr [esp + 0xc] */
    PUSH32(esp, ebx); /* 0x1508DAD4: push ebx */
    /* test eax, eax */ /* 0x1508DAD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB2B; /* 0x1508DAD7: je 0x1508db2b */
L_1508DAD9:
    edx = MEM32(esp + 0x8); /* 0x1508DAD9: mov edx, dword ptr [esp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508DADD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(esp + 0xC)); /* 0x1508DADF: mov bl, byte ptr [esp + 0xc] */
    /* test edx, 3 */ /* 0x1508DAE3: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB01; /* 0x1508DAE9: je 0x1508db01 */
L_1508DAEB:
    SET_LO8(ecx, MEM8(edx)); /* 0x1508DAEB: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1508DAED: add edx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx)); /* 0x1508DAF0: xor cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB66; /* 0x1508DAF2: je 0x1508db66 */
L_1508DAF4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1508DAF4: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508DB2B; /* 0x1508DAF7: je 0x1508db2b */
L_1508DAF9:
    /* test edx, 3 */ /* 0x1508DAF9: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508DAEB; /* 0x1508DAFF: jne 0x1508daeb */
L_1508DB01:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1508DB01: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_1508DB18; /* 0x1508DB04: jb 0x1508db18 */
L_1508DB06:
    PUSH32(esp, edi); /* 0x1508DB06: push edi */
    edi = ebx; /* 0x1508DB07: mov edi, ebx */
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x1508DB09: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x1508DB09: shl ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x1508DB0C: add ebx, edi */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x1508DB0E: mov edi, ebx */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x1508DB10: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x1508DB10: shl ebx, 0x10 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x1508DB13: add ebx, edi */
    _flag_k = FK_ADD;
    goto L_1508DB32; /* 0x1508DB15: jmp 0x1508db32 */
L_1508DB17:
    edi = POP32_VAL(esp); /* 0x1508DB17: pop edi */
L_1508DB18:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1508DB18: add eax, 4 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1508DB2B; /* 0x1508DB1B: je 0x1508db2b */
L_1508DB1D:
    SET_LO8(ecx, MEM8(edx)); /* 0x1508DB1D: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1508DB1F: add edx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx)); /* 0x1508DB22: xor cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB66; /* 0x1508DB24: je 0x1508db66 */
L_1508DB26:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1508DB26: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508DB1D; /* 0x1508DB29: jne 0x1508db1d */
L_1508DB2B:
    ebx = POP32_VAL(esp); /* 0x1508DB2B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DB2C: ret  */
L_1508DB2D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1508DB2D: sub eax, 4 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_1508DB17; /* 0x1508DB30: jb 0x1508db17 */
L_1508DB32:
    ecx = MEM32(edx); /* 0x1508DB32: mov ecx, dword ptr [edx] */
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x1508DB34: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0x7EFEFEFFu; /* 0x1508DB36: mov edi, 0x7efefeff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1508DB3B: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx ^ 0xFFFFFFFFu));
    ecx = ecx ^ 0xFFFFFFFFu; /* 0x1508DB3D: xor ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x1508DB40: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1508DB42: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x81010100u);
    ecx = ecx & 0x81010100u; /* 0x1508DB45: and ecx, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB2D; /* 0x1508DB4B: je 0x1508db2d */
L_1508DB4D:
    ecx = MEM32(edx + (-0x4)); /* 0x1508DB4D: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx)); /* 0x1508DB50: xor cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB77; /* 0x1508DB52: je 0x1508db77 */
L_1508DB54:
    _flag_a = (uint32_t)((HI8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((HI8(ecx) ^ LO8(ebx))) << 24;
    SET_HI8(ecx, HI8(ecx) ^ LO8(ebx)); /* 0x1508DB54: xor ch, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB71; /* 0x1508DB56: je 0x1508db71 */
L_1508DB58:
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x1508DB58: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x1508DB58: shr ecx, 0x10 */
    _flag_a = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((LO8(ecx) ^ LO8(ebx))) << 24;
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx)); /* 0x1508DB5B: xor cl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB6B; /* 0x1508DB5D: je 0x1508db6b */
L_1508DB5F:
    _flag_a = (uint32_t)((HI8(ecx) ^ LO8(ebx))) << 24; _flag_b = (uint32_t)((HI8(ecx) ^ LO8(ebx))) << 24;
    SET_HI8(ecx, HI8(ecx) ^ LO8(ebx)); /* 0x1508DB5F: xor ch, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DB65; /* 0x1508DB61: je 0x1508db65 */
L_1508DB63:
    RECOMP_BACKEDGE();
    goto L_1508DB2D; /* 0x1508DB63: jmp 0x1508db2d */
L_1508DB65:
    edi = POP32_VAL(esp); /* 0x1508DB65: pop edi */
L_1508DB66:
    eax = edx + (-0x1); /* 0x1508DB66: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1508DB69: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DB6A: ret  */
L_1508DB6B:
    eax = edx + (-0x2); /* 0x1508DB6B: lea eax, [edx - 2] */
    edi = POP32_VAL(esp); /* 0x1508DB6E: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508DB6F: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DB70: ret  */
L_1508DB71:
    eax = edx + (-0x3); /* 0x1508DB71: lea eax, [edx - 3] */
    edi = POP32_VAL(esp); /* 0x1508DB74: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508DB75: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DB76: ret  */
L_1508DB77:
    eax = edx + (-0x4); /* 0x1508DB77: lea eax, [edx - 4] */
    edi = POP32_VAL(esp); /* 0x1508DB7A: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508DB7B: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DB7C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508DB90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508DB90u);

L_1508DB90:
    edi = edi; /* 0x1508DB90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508DB92: push ebp */
    ebp = esp; /* 0x1508DB93: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1508DB95: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1508DB98: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1508DB9B: push ebx */
    PUSH32(esp, esi); /* 0x1508DB9C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1508DB9D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1508DBA0: push edi */
    PUSH32(esp, 4); /* 0x1508DBA1: push 4 */
    edi = POP32_VAL(esp); /* 0x1508DBA3: pop edi */
    goto L_1508DBB2; /* 0x1508DBA4: jmp 0x1508dbb2 */
L_1508DBA6:
    eax = MEM32(edx); /* 0x1508DBA6: mov eax, dword ptr [edx] */
    /* cmp eax, MEM32(esi) */ /* 0x1508DBA8: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508DBD4; /* 0x1508DBAA: jne 0x1508dbd4 */
L_1508DBAC:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x1508DBAC: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1508DBAE: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1508DBB0: sub ecx, edi */
    _flag_k = FK_CMP;
L_1508DBB2:
    /* cmp ecx, edi */ /* 0x1508DBB2: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508DBA6; /* 0x1508DBB4: jae 0x1508dba6 */
L_1508DBB6:
    eax = edx; /* 0x1508DBB6: mov eax, edx */
    /* test ecx, ecx */ /* 0x1508DBB8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DBCD; /* 0x1508DBBA: je 0x1508dbcd */
L_1508DBBC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1508DBBC: sub esi, edx */
    _flag_k = FK_CMP;
L_1508DBBE:
    SET_LO8(edx, MEM8(eax)); /* 0x1508DBBE: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(esi + eax) */ /* 0x1508DBC0: cmp dl, byte ptr [esi + eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DBDF; /* 0x1508DBC3: jb 0x1508dbdf */
L_1508DBC5:
    if (CMP_A(_flag_a, _flag_b)) goto L_1508DBDA; /* 0x1508DBC5: ja 0x1508dbda */
L_1508DBC7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508DBC7: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508DBC8: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508DBBE; /* 0x1508DBCB: jne 0x1508dbbe */
L_1508DBCD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508DBCD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508DBCF:
    edi = POP32_VAL(esp); /* 0x1508DBCF: pop edi */
    esi = POP32_VAL(esp); /* 0x1508DBD0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508DBD1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508DBD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DBD3: ret  */
L_1508DBD4:
    ecx = edi; /* 0x1508DBD4: mov ecx, edi */
    eax = edx; /* 0x1508DBD6: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_1508DBBC; /* 0x1508DBD8: jmp 0x1508dbbc */
L_1508DBDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508DBDA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508DBDC: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1508DBCF; /* 0x1508DBDD: jmp 0x1508dbcf */
L_1508DBDF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1508DBDF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508DBCF; /* 0x1508DBE2: jmp 0x1508dbcf */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508DBF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508DBF0u);

L_1508DBF0:
    PUSH32(esp, ebp); /* 0x1508DBF0: push ebp */
    ebp = esp; /* 0x1508DBF1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508DBF3: push edi */
    PUSH32(esp, esi); /* 0x1508DBF4: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1508DBF5: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1508DBF8: mov ecx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x1508DBFB: mov edi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1508DBFE: mov eax, ecx */
    edx = ecx; /* 0x1508DC00: mov edx, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1508DC02: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp edi, esi */ /* 0x1508DC04: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508DC10; /* 0x1508DC06: jbe 0x1508dc10 */
L_1508DC08:
    /* cmp edi, eax */ /* 0x1508DC08: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DDB4; /* 0x1508DC0A: jb 0x1508ddb4 */
L_1508DC10:
    /* cmp ecx, 0x100u */ /* 0x1508DC10: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DC37; /* 0x1508DC16: jb 0x1508dc37 */
L_1508DC18:
    /* cmp MEM32(0x150BFCE8), 0 */ /* 0x1508DC18: cmp dword ptr [0x150bfce8], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BFCE8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508DC37; /* 0x1508DC1F: je 0x1508dc37 */
L_1508DC21:
    PUSH32(esp, edi); /* 0x1508DC21: push edi */
    PUSH32(esp, esi); /* 0x1508DC22: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x1508DC23: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x1508DC26: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x1508DC29: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508DC2B: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DC2C: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508DC37; /* 0x1508DC2D: jne 0x1508dc37 */
L_1508DC2F:
    esi = POP32_VAL(esp); /* 0x1508DC2F: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DC30: pop edi */
    ebp = POP32_VAL(esp); /* 0x1508DC31: pop ebp */
    goto L_1508FBB7; /* 0x1508DC32: jmp 0x1508fbb7 */
L_1508DC37:
    /* test edi, 3 */ /* 0x1508DC37: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508DC54; /* 0x1508DC3D: jne 0x1508dc54 */
L_1508DC3F:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508DC3F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508DC3F: shr ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1508DC42: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 8 */ /* 0x1508DC45: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DC74; /* 0x1508DC48: jb 0x1508dc74 */
L_1508DC4A:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508DC4A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DD64)); goto _ljump; }
L_1508DC54:
    eax = edi; /* 0x1508DC54: mov eax, edi */
    edx = 3; /* 0x1508DC56: mov edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1508DC5B: sub ecx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_1508DC6C; /* 0x1508DC5E: jb 0x1508dc6c */
L_1508DC60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1508DC60: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1508DC63: add ecx, eax */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1508DC78)); goto _ljump; }
L_1508DC6C:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1508DD74)); goto _ljump; }
L_1508DC74:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1508DCF8)); goto _ljump; }
L_1508DC88:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508DC88: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi)); /* 0x1508DC8A: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508DC8C: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508DC8E: mov al, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508DC91: mov byte ptr [edi + 1], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508DC94: mov al, byte ptr [esi + 2] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508DC97: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508DC97: shr ecx, 2 */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508DC9A: mov byte ptr [edi + 2], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x1508DC9D: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 3; /* 0x1508DCA0: add edi, 3 */
    _flag_k = FK_ADD;
    /* cmp ecx, 8 */ /* 0x1508DCA3: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DC74; /* 0x1508DCA6: jb 0x1508dc74 */
L_1508DCA8:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508DCA8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DD64)); goto _ljump; }
L_1508DCB4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508DCB4: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi)); /* 0x1508DCB6: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508DCB8: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508DCBA: mov al, byte ptr [esi + 1] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508DCBD: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508DCBD: shr ecx, 2 */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508DCC0: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508DCC3: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1508DCC6: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp ecx, 8 */ /* 0x1508DCC9: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DC74; /* 0x1508DCCC: jb 0x1508dc74 */
L_1508DCCE:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508DCCE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DD64)); goto _ljump; }
L_1508DCD8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508DCD8: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi)); /* 0x1508DCDA: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508DCDC: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508DCDE: add esi, 1 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508DCE1: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508DCE1: shr ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508DCE4: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp ecx, 8 */ /* 0x1508DCE7: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DC74; /* 0x1508DCEA: jb 0x1508dc74 */
L_1508DCEC:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508DCEC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DD64)); goto _ljump; }
L_1508DD18:
    eax = MEM32(esi + ecx * 4 + (-0x1C)); /* 0x1508DD18: mov eax, dword ptr [esi + ecx*4 - 0x1c] */
    MEM32(edi + ecx * 4 + (-0x1C)) = eax; /* 0x1508DD1C: mov dword ptr [edi + ecx*4 - 0x1c], eax */
L_1508DD20:
    eax = MEM32(esi + ecx * 4 + (-0x18)); /* 0x1508DD20: mov eax, dword ptr [esi + ecx*4 - 0x18] */
    MEM32(edi + ecx * 4 + (-0x18)) = eax; /* 0x1508DD24: mov dword ptr [edi + ecx*4 - 0x18], eax */
L_1508DD28:
    eax = MEM32(esi + ecx * 4 + (-0x14)); /* 0x1508DD28: mov eax, dword ptr [esi + ecx*4 - 0x14] */
    MEM32(edi + ecx * 4 + (-0x14)) = eax; /* 0x1508DD2C: mov dword ptr [edi + ecx*4 - 0x14], eax */
L_1508DD30:
    eax = MEM32(esi + ecx * 4 + (-0x10)); /* 0x1508DD30: mov eax, dword ptr [esi + ecx*4 - 0x10] */
    MEM32(edi + ecx * 4 + (-0x10)) = eax; /* 0x1508DD34: mov dword ptr [edi + ecx*4 - 0x10], eax */
L_1508DD38:
    eax = MEM32(esi + ecx * 4 + (-0xC)); /* 0x1508DD38: mov eax, dword ptr [esi + ecx*4 - 0xc] */
    MEM32(edi + ecx * 4 + (-0xC)) = eax; /* 0x1508DD3C: mov dword ptr [edi + ecx*4 - 0xc], eax */
L_1508DD40:
    eax = MEM32(esi + ecx * 4 + (-0x8)); /* 0x1508DD40: mov eax, dword ptr [esi + ecx*4 - 8] */
    MEM32(edi + ecx * 4 + (-0x8)) = eax; /* 0x1508DD44: mov dword ptr [edi + ecx*4 - 8], eax */
L_1508DD48:
    eax = MEM32(esi + ecx * 4 + (-0x4)); /* 0x1508DD48: mov eax, dword ptr [esi + ecx*4 - 4] */
    MEM32(edi + ecx * 4 + (-0x4)) = eax; /* 0x1508DD4C: mov dword ptr [edi + ecx*4 - 4], eax */
    eax = ecx * 4; /* 0x1508DD50: lea eax, [ecx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1508DD57: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1508DD59: add edi, eax */
    _flag_k = FK_ADD;
L_1508DD5B:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DD64)); goto _ljump; }
L_1508DD74:
    eax = MEM32(ebp + 0x8); /* 0x1508DD74: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508DD77: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DD78: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DD79: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DD7A: ret  */
L_1508DD7C:
    SET_LO8(eax, MEM8(esi)); /* 0x1508DD7C: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508DD7E: mov byte ptr [edi], al */
    eax = MEM32(ebp + 0x8); /* 0x1508DD80: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508DD83: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DD84: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DD85: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DD86: ret  */
L_1508DD88:
    SET_LO8(eax, MEM8(esi)); /* 0x1508DD88: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508DD8A: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508DD8C: mov al, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508DD8F: mov byte ptr [edi + 1], al */
    eax = MEM32(ebp + 0x8); /* 0x1508DD92: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508DD95: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DD96: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DD97: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DD98: ret  */
L_1508DD9C:
    SET_LO8(eax, MEM8(esi)); /* 0x1508DD9C: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508DD9E: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508DDA0: mov al, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508DDA3: mov byte ptr [edi + 1], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508DDA6: mov al, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508DDA9: mov byte ptr [edi + 2], al */
    eax = MEM32(ebp + 0x8); /* 0x1508DDAC: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508DDAF: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DDB0: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DDB1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DDB2: ret  */
L_1508DDB4:
    esi = esi + ecx + (-0x4); /* 0x1508DDB4: lea esi, [esi + ecx - 4] */
    edi = edi + ecx + (-0x4); /* 0x1508DDB8: lea edi, [edi + ecx - 4] */
    /* test edi, 3 */ /* 0x1508DDBC: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508DDE8; /* 0x1508DDC2: jne 0x1508dde8 */
L_1508DDC4:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508DDC4: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508DDC4: shr ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1508DDC7: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 8 */ /* 0x1508DDCA: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DDDC; /* 0x1508DDCD: jb 0x1508dddc */
L_1508DDCF:
    _df = -1; /* 0x1508DDCF: std  */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508DDD0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _df = 1; /* 0x1508DDD2: cld  */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DF00)); goto _ljump; }
L_1508DDDC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508DDDC: neg ecx */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1508DEB0)); goto _ljump; }
L_1508DDE8:
    eax = edi; /* 0x1508DDE8: mov eax, edi */
    edx = 3; /* 0x1508DDEA: mov edx, 3 */
    /* cmp ecx, 4 */ /* 0x1508DDEF: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DE00; /* 0x1508DDF2: jb 0x1508de00 */
L_1508DDF4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1508DDF4: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1508DDF7: sub ecx, eax */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1508DE04)); goto _ljump; }
L_1508DE00:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1508DF00)); goto _ljump; }
L_1508DE14:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508DE14: mov al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508DE17: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508DE19: mov byte ptr [edi + 3], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1508DE1C: sub esi, 1 */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508DE1F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508DE1F: shr ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508DE22: sub edi, 1 */
    _flag_k = FK_CMP;
    /* cmp ecx, 8 */ /* 0x1508DE25: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DDDC; /* 0x1508DE28: jb 0x1508dddc */
L_1508DE2A:
    _df = -1; /* 0x1508DE2A: std  */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508DE2B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _df = 1; /* 0x1508DE2D: cld  */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DF00)); goto _ljump; }
L_1508DE38:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508DE38: mov al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508DE3B: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508DE3D: mov byte ptr [edi + 3], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508DE40: mov al, byte ptr [esi + 2] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508DE43: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508DE43: shr ecx, 2 */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508DE46: mov byte ptr [edi + 2], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1508DE49: sub esi, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1508DE4C: sub edi, 2 */
    _flag_k = FK_CMP;
    /* cmp ecx, 8 */ /* 0x1508DE4F: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DDDC; /* 0x1508DE52: jb 0x1508dddc */
L_1508DE54:
    _df = -1; /* 0x1508DE54: std  */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508DE55: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _df = 1; /* 0x1508DE57: cld  */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DF00)); goto _ljump; }
L_1508DE60:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508DE60: mov al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508DE63: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508DE65: mov byte ptr [edi + 3], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508DE68: mov al, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508DE6B: mov byte ptr [edi + 2], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508DE6E: mov al, byte ptr [esi + 1] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508DE71: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508DE71: shr ecx, 2 */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508DE74: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 3; /* 0x1508DE77: sub esi, 3 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 3; /* 0x1508DE7A: sub edi, 3 */
    _flag_k = FK_CMP;
    /* cmp ecx, 8 */ /* 0x1508DE7D: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DDDC; /* 0x1508DE80: jb 0x1508dddc */
L_1508DE86:
    _df = -1; /* 0x1508DE86: std  */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508DE87: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _df = 1; /* 0x1508DE89: cld  */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DF00)); goto _ljump; }
L_1508DEF7:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508DF00)); goto _ljump; }
L_1508DF10:
    eax = MEM32(ebp + 0x8); /* 0x1508DF10: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508DF13: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DF14: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DF15: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DF16: ret  */
L_1508DF18:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508DF18: mov al, byte ptr [esi + 3] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508DF1B: mov byte ptr [edi + 3], al */
    eax = MEM32(ebp + 0x8); /* 0x1508DF1E: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508DF21: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DF22: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DF23: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DF24: ret  */
L_1508DF28:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508DF28: mov al, byte ptr [esi + 3] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508DF2B: mov byte ptr [edi + 3], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508DF2E: mov al, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508DF31: mov byte ptr [edi + 2], al */
    eax = MEM32(ebp + 0x8); /* 0x1508DF34: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508DF37: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DF38: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DF39: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DF3A: ret  */
L_1508DF3C:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508DF3C: mov al, byte ptr [esi + 3] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508DF3F: mov byte ptr [edi + 3], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508DF42: mov al, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508DF45: mov byte ptr [edi + 2], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508DF48: mov al, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508DF4B: mov byte ptr [edi + 1], al */
    eax = MEM32(ebp + 0x8); /* 0x1508DF4E: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508DF51: pop esi */
    edi = POP32_VAL(esp); /* 0x1508DF52: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508DF53: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DF54: ret  */
L_1508FBB7:
    PUSH32(esp, ebp); /* 0x1508FBB7: push ebp */
    ebp = esp; /* 0x1508FBB8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1508FBBA: sub esp, 0x1c */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x1508FBBD: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1508FBC0: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1508FBC3: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1508FBC6: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x1508FBC9: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1508FBCB: cdq  */
    ecx = eax; /* 0x1508FBCC: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1508FBCE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1508FBD1: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1508FBD3: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x1508FBD5: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1508FBD8: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1508FBDA: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1508FBDC: cdq  */
    edi = eax; /* 0x1508FBDD: mov edi, eax */
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x1508FBDF: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1508FBE1: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x1508FBE3: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x1508FBE6: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1508FBE8: sub edi, edx */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x1508FBEA: mov edx, ecx */
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x1508FBEC: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508FC3A; /* 0x1508FBEE: jne 0x1508fc3a */
L_1508FBF0:
    esi = MEM32(ebp + 0x10); /* 0x1508FBF0: mov esi, dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x1508FBF3: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    ecx = ecx & 0x7Fu; /* 0x1508FBF5: and ecx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1508FBF8: mov dword ptr [ebp - 0x18], ecx */
    /* cmp esi, ecx */ /* 0x1508FBFB: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FC12; /* 0x1508FBFD: je 0x1508fc12 */
L_1508FBFF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1508FBFF: sub esi, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508FC01: push esi */
    PUSH32(esp, ebx); /* 0x1508FC02: push ebx */
    PUSH32(esp, eax); /* 0x1508FC03: push eax */
    RECOMP_CALL(sub_1508FCA0); /* 0x1508FC04: call 0x1508fca0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508FC09: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1508FC0C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1508FC0F: mov ecx, dword ptr [ebp - 0x18] */
L_1508FC12:
    /* test ecx, ecx */ /* 0x1508FC12: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FC8D; /* 0x1508FC14: je 0x1508fc8d */
L_1508FC16:
    ebx = MEM32(ebp + 0x10); /* 0x1508FC16: mov ebx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1508FC19: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x1508FC1C: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508FC1E: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edx; /* 0x1508FC20: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1508FC23: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1508FC25: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1508FC27: mov dword ptr [ebp - 0x10], ebx */
    esi = MEM32(ebp + (-0x14)); /* 0x1508FC2A: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x10)); /* 0x1508FC2D: mov edi, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1508FC30: mov ecx, dword ptr [ebp - 0x18] */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1508FC33: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x1508FC35: mov eax, dword ptr [ebp + 8] */
    goto L_1508FC8D; /* 0x1508FC38: jmp 0x1508fc8d */
L_1508FC3A:
    /* cmp ecx, edi */ /* 0x1508FC3A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508FC73; /* 0x1508FC3C: jne 0x1508fc73 */
L_1508FC3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508FC3E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1508FC40: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1508FC43: mov dword ptr [ebp - 0x1c], ecx */
    esi = MEM32(ebp + 0xC); /* 0x1508FC46: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1508FC49: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1508FC4C: mov ecx, dword ptr [ebp - 0x1c] */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1508FC4F: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x1508FC51: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x1C)); /* 0x1508FC54: add ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0xC); /* 0x1508FC57: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x1C)); /* 0x1508FC5A: add edx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x1508FC5D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x1C)); /* 0x1508FC60: sub eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1508FC63: push eax */
    PUSH32(esp, edx); /* 0x1508FC64: push edx */
    PUSH32(esp, ecx); /* 0x1508FC65: push ecx */
    RECOMP_CALL(sub_1508FBB7); /* 0x1508FC66: call 0x1508fbb7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508FC6B: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1508FC6E: mov eax, dword ptr [ebp + 8] */
    goto L_1508FC8D; /* 0x1508FC71: jmp 0x1508fc8d */
L_1508FC73:
    esi = MEM32(ebp + 0xC); /* 0x1508FC73: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1508FC76: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1508FC79: mov ecx, dword ptr [ebp + 0x10] */
    edx = ecx; /* 0x1508FC7C: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508FC7E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508FC7E: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508FC81: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1508FC83: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1508FC85: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1508FC88: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x1508FC8A: mov eax, dword ptr [ebp + 8] */
L_1508FC8D:
    ebx = MEM32(ebp + (-0x4)); /* 0x1508FC8D: mov ebx, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x8)); /* 0x1508FC90: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0xC)); /* 0x1508FC93: mov edi, dword ptr [ebp - 0xc] */
    esp = ebp; /* 0x1508FC96: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1508FC98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FC99: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1508DC88u: goto L_1508DC88;
      case 0x1508DCB4u: goto L_1508DCB4;
      case 0x1508DCD8u: goto L_1508DCD8;
      case 0x1508DD18u: goto L_1508DD18;
      case 0x1508DD20u: goto L_1508DD20;
      case 0x1508DD28u: goto L_1508DD28;
      case 0x1508DD30u: goto L_1508DD30;
      case 0x1508DD38u: goto L_1508DD38;
      case 0x1508DD40u: goto L_1508DD40;
      case 0x1508DD48u: goto L_1508DD48;
      case 0x1508DD5Bu: goto L_1508DD5B;
      case 0x1508DD74u: goto L_1508DD74;
      case 0x1508DD7Cu: goto L_1508DD7C;
      case 0x1508DD88u: goto L_1508DD88;
      case 0x1508DD9Cu: goto L_1508DD9C;
      case 0x1508DE14u: goto L_1508DE14;
      case 0x1508DE38u: goto L_1508DE38;
      case 0x1508DE60u: goto L_1508DE60;
      case 0x1508DEF7u: goto L_1508DEF7;
      case 0x1508DF10u: goto L_1508DF10;
      case 0x1508DF18u: goto L_1508DF18;
      case 0x1508DF28u: goto L_1508DF28;
      case 0x1508DF3Cu: goto L_1508DF3C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1508DF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508DF60u);

L_1508DF60:
    edi = edi; /* 0x1508DF60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508DF62: push ebp */
    ebp = esp; /* 0x1508DF63: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508DF65: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1508DF66: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1508DF69: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508DF74; /* 0x1508DF6B: jne 0x1508df74 */
L_1508DF6D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508DF6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508DFF6; /* 0x1508DF6F: jmp 0x1508dff6 */
L_1508DF74:
    eax = MEM32(ebp + 0x8); /* 0x1508DF74: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508DF77: push esi */
    /* test eax, eax */ /* 0x1508DF78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508DF99; /* 0x1508DF7A: jne 0x1508df99 */
L_1508DF7C:
    RECOMP_CALL(sub_15036430); /* 0x1508DF7C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1508DF81: push 0x16 */
    edi = POP32_VAL(esp); /* 0x1508DF83: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508DF84: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1508DF86: push esi */
    PUSH32(esp, esi); /* 0x1508DF87: push esi */
    PUSH32(esp, esi); /* 0x1508DF88: push esi */
    PUSH32(esp, esi); /* 0x1508DF89: push esi */
    PUSH32(esp, esi); /* 0x1508DF8A: push esi */
    MEM32(eax) = edi; /* 0x1508DF8B: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1508DF8D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508DF92: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1508DF95: mov eax, edi */
    goto L_1508DFF5; /* 0x1508DF97: jmp 0x1508dff5 */
L_1508DF99:
    PUSH32(esp, ebx); /* 0x1508DF99: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1508DF9A: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1508DF9D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508DFB5; /* 0x1508DF9F: je 0x1508dfb5 */
L_1508DFA1:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1508DFA1: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508DFB5; /* 0x1508DFA4: jb 0x1508dfb5 */
L_1508DFA6:
    PUSH32(esp, edi); /* 0x1508DFA6: push edi */
    PUSH32(esp, ebx); /* 0x1508DFA7: push ebx */
    PUSH32(esp, eax); /* 0x1508DFA8: push eax */
    RECOMP_CALL(sub_1508DBF0); /* 0x1508DFA9: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508DFAE: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508DFB1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508DFF4; /* 0x1508DFB3: jmp 0x1508dff4 */
L_1508DFB5:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508DFB5: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508DFB8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1508DFBA: push esi */
    PUSH32(esp, eax); /* 0x1508DFBB: push eax */
    RECOMP_CALL(sub_1508E3D0); /* 0x1508DFBC: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508DFC1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1508DFC4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508DFD1; /* 0x1508DFC6: jne 0x1508dfd1 */
L_1508DFC8:
    RECOMP_CALL(sub_15036430); /* 0x1508DFC8: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1508DFCD: push 0x16 */
    goto L_1508DFDD; /* 0x1508DFCF: jmp 0x1508dfdd */
L_1508DFD1:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1508DFD1: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508DFF1; /* 0x1508DFD4: jae 0x1508dff1 */
L_1508DFD6:
    RECOMP_CALL(sub_15036430); /* 0x1508DFD6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508DFDB: push 0x22 */
L_1508DFDD:
    edi = POP32_VAL(esp); /* 0x1508DFDD: pop edi */
    PUSH32(esp, esi); /* 0x1508DFDE: push esi */
    PUSH32(esp, esi); /* 0x1508DFDF: push esi */
    PUSH32(esp, esi); /* 0x1508DFE0: push esi */
    PUSH32(esp, esi); /* 0x1508DFE1: push esi */
    PUSH32(esp, esi); /* 0x1508DFE2: push esi */
    MEM32(eax) = edi; /* 0x1508DFE3: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1508DFE5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508DFEA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1508DFED: mov eax, edi */
    goto L_1508DFF4; /* 0x1508DFEF: jmp 0x1508dff4 */
L_1508DFF1:
    PUSH32(esp, 0x16u); /* 0x1508DFF1: push 0x16 */
    eax = POP32_VAL(esp); /* 0x1508DFF3: pop eax */
L_1508DFF4:
    ebx = POP32_VAL(esp); /* 0x1508DFF4: pop ebx */
L_1508DFF5:
    esi = POP32_VAL(esp); /* 0x1508DFF5: pop esi */
L_1508DFF6:
    edi = POP32_VAL(esp); /* 0x1508DFF6: pop edi */
    ebp = POP32_VAL(esp); /* 0x1508DFF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508DFF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E000u);

L_1508E000:
    PUSH32(esp, ebp); /* 0x1508E000: push ebp */
    ebp = esp; /* 0x1508E001: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508E003: push edi */
    PUSH32(esp, esi); /* 0x1508E004: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1508E005: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1508E008: mov ecx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x8); /* 0x1508E00B: mov edi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1508E00E: mov eax, ecx */
    edx = ecx; /* 0x1508E010: mov edx, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1508E012: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp edi, esi */ /* 0x1508E014: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1508E020; /* 0x1508E016: jbe 0x1508e020 */
L_1508E018:
    /* cmp edi, eax */ /* 0x1508E018: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E1C4; /* 0x1508E01A: jb 0x1508e1c4 */
L_1508E020:
    /* cmp ecx, 0x100u */ /* 0x1508E020: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E047; /* 0x1508E026: jb 0x1508e047 */
L_1508E028:
    /* cmp MEM32(0x150BFCE8), 0 */ /* 0x1508E028: cmp dword ptr [0x150bfce8], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BFCE8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E047; /* 0x1508E02F: je 0x1508e047 */
L_1508E031:
    PUSH32(esp, edi); /* 0x1508E031: push edi */
    PUSH32(esp, esi); /* 0x1508E032: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x1508E033: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x1508E036: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x1508E039: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508E03B: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E03C: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E047; /* 0x1508E03D: jne 0x1508e047 */
L_1508E03F:
    esi = POP32_VAL(esp); /* 0x1508E03F: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E040: pop edi */
    ebp = POP32_VAL(esp); /* 0x1508E041: pop ebp */
    goto L_1508FBB7; /* 0x1508E042: jmp 0x1508fbb7 */
L_1508E047:
    /* test edi, 3 */ /* 0x1508E047: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E064; /* 0x1508E04D: jne 0x1508e064 */
L_1508E04F:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E04F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E04F: shr ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1508E052: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 8 */ /* 0x1508E055: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E084; /* 0x1508E058: jb 0x1508e084 */
L_1508E05A:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508E05A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E174)); goto _ljump; }
L_1508E064:
    eax = edi; /* 0x1508E064: mov eax, edi */
    edx = 3; /* 0x1508E066: mov edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x1508E06B: sub ecx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_1508E07C; /* 0x1508E06E: jb 0x1508e07c */
L_1508E070:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1508E070: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1508E073: add ecx, eax */
    _flag_k = FK_ADD;
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1508E088)); goto _ljump; }
L_1508E07C:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1508E184)); goto _ljump; }
L_1508E084:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1508E108)); goto _ljump; }
L_1508E098:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508E098: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi)); /* 0x1508E09A: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508E09C: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508E09E: mov al, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508E0A1: mov byte ptr [edi + 1], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508E0A4: mov al, byte ptr [esi + 2] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E0A7: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E0A7: shr ecx, 2 */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508E0AA: mov byte ptr [edi + 2], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x1508E0AD: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 3; /* 0x1508E0B0: add edi, 3 */
    _flag_k = FK_ADD;
    /* cmp ecx, 8 */ /* 0x1508E0B3: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E084; /* 0x1508E0B6: jb 0x1508e084 */
L_1508E0B8:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508E0B8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E174)); goto _ljump; }
L_1508E0C4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508E0C4: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi)); /* 0x1508E0C6: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508E0C8: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508E0CA: mov al, byte ptr [esi + 1] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E0CD: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E0CD: shr ecx, 2 */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508E0D0: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508E0D3: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1508E0D6: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp ecx, 8 */ /* 0x1508E0D9: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E084; /* 0x1508E0DC: jb 0x1508e084 */
L_1508E0DE:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508E0DE: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E174)); goto _ljump; }
L_1508E0E8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508E0E8: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi)); /* 0x1508E0EA: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508E0EC: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508E0EE: add esi, 1 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E0F1: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E0F1: shr ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508E0F4: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp ecx, 8 */ /* 0x1508E0F7: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E084; /* 0x1508E0FA: jb 0x1508e084 */
L_1508E0FC:
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508E0FC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E174)); goto _ljump; }
L_1508E128:
    eax = MEM32(esi + ecx * 4 + (-0x1C)); /* 0x1508E128: mov eax, dword ptr [esi + ecx*4 - 0x1c] */
    MEM32(edi + ecx * 4 + (-0x1C)) = eax; /* 0x1508E12C: mov dword ptr [edi + ecx*4 - 0x1c], eax */
L_1508E130:
    eax = MEM32(esi + ecx * 4 + (-0x18)); /* 0x1508E130: mov eax, dword ptr [esi + ecx*4 - 0x18] */
    MEM32(edi + ecx * 4 + (-0x18)) = eax; /* 0x1508E134: mov dword ptr [edi + ecx*4 - 0x18], eax */
L_1508E138:
    eax = MEM32(esi + ecx * 4 + (-0x14)); /* 0x1508E138: mov eax, dword ptr [esi + ecx*4 - 0x14] */
    MEM32(edi + ecx * 4 + (-0x14)) = eax; /* 0x1508E13C: mov dword ptr [edi + ecx*4 - 0x14], eax */
L_1508E140:
    eax = MEM32(esi + ecx * 4 + (-0x10)); /* 0x1508E140: mov eax, dword ptr [esi + ecx*4 - 0x10] */
    MEM32(edi + ecx * 4 + (-0x10)) = eax; /* 0x1508E144: mov dword ptr [edi + ecx*4 - 0x10], eax */
L_1508E148:
    eax = MEM32(esi + ecx * 4 + (-0xC)); /* 0x1508E148: mov eax, dword ptr [esi + ecx*4 - 0xc] */
    MEM32(edi + ecx * 4 + (-0xC)) = eax; /* 0x1508E14C: mov dword ptr [edi + ecx*4 - 0xc], eax */
L_1508E150:
    eax = MEM32(esi + ecx * 4 + (-0x8)); /* 0x1508E150: mov eax, dword ptr [esi + ecx*4 - 8] */
    MEM32(edi + ecx * 4 + (-0x8)) = eax; /* 0x1508E154: mov dword ptr [edi + ecx*4 - 8], eax */
L_1508E158:
    eax = MEM32(esi + ecx * 4 + (-0x4)); /* 0x1508E158: mov eax, dword ptr [esi + ecx*4 - 4] */
    MEM32(edi + ecx * 4 + (-0x4)) = eax; /* 0x1508E15C: mov dword ptr [edi + ecx*4 - 4], eax */
    eax = ecx * 4; /* 0x1508E160: lea eax, [ecx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1508E167: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1508E169: add edi, eax */
    _flag_k = FK_ADD;
L_1508E16B:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E174)); goto _ljump; }
L_1508E184:
    eax = MEM32(ebp + 0x8); /* 0x1508E184: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508E187: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E188: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E189: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E18A: ret  */
L_1508E18C:
    SET_LO8(eax, MEM8(esi)); /* 0x1508E18C: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508E18E: mov byte ptr [edi], al */
    eax = MEM32(ebp + 0x8); /* 0x1508E190: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508E193: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E194: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E195: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E196: ret  */
L_1508E198:
    SET_LO8(eax, MEM8(esi)); /* 0x1508E198: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508E19A: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508E19C: mov al, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508E19F: mov byte ptr [edi + 1], al */
    eax = MEM32(ebp + 0x8); /* 0x1508E1A2: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508E1A5: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E1A6: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E1A7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E1A8: ret  */
L_1508E1AC:
    SET_LO8(eax, MEM8(esi)); /* 0x1508E1AC: mov al, byte ptr [esi] */
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508E1AE: mov byte ptr [edi], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508E1B0: mov al, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508E1B3: mov byte ptr [edi + 1], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508E1B6: mov al, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508E1B9: mov byte ptr [edi + 2], al */
    eax = MEM32(ebp + 0x8); /* 0x1508E1BC: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508E1BF: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E1C0: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E1C1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E1C2: ret  */
L_1508E1C4:
    esi = esi + ecx + (-0x4); /* 0x1508E1C4: lea esi, [esi + ecx - 4] */
    edi = edi + ecx + (-0x4); /* 0x1508E1C8: lea edi, [edi + ecx - 4] */
    /* test edi, 3 */ /* 0x1508E1CC: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E1F8; /* 0x1508E1D2: jne 0x1508e1f8 */
L_1508E1D4:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E1D4: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E1D4: shr ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1508E1D7: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 8 */ /* 0x1508E1DA: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E1EC; /* 0x1508E1DD: jb 0x1508e1ec */
L_1508E1DF:
    _df = -1; /* 0x1508E1DF: std  */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508E1E0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _df = 1; /* 0x1508E1E2: cld  */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E310)); goto _ljump; }
L_1508E1EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508E1EC: neg ecx */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1508E2C0)); goto _ljump; }
L_1508E1F8:
    eax = edi; /* 0x1508E1F8: mov eax, edi */
    edx = 3; /* 0x1508E1FA: mov edx, 3 */
    /* cmp ecx, 4 */ /* 0x1508E1FF: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E210; /* 0x1508E202: jb 0x1508e210 */
L_1508E204:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x1508E204: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1508E207: sub ecx, eax */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1508E214)); goto _ljump; }
L_1508E210:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x1508E310)); goto _ljump; }
L_1508E224:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508E224: mov al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508E227: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508E229: mov byte ptr [edi + 3], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1508E22C: sub esi, 1 */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E22F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E22F: shr ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508E232: sub edi, 1 */
    _flag_k = FK_CMP;
    /* cmp ecx, 8 */ /* 0x1508E235: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E1EC; /* 0x1508E238: jb 0x1508e1ec */
L_1508E23A:
    _df = -1; /* 0x1508E23A: std  */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508E23B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _df = 1; /* 0x1508E23D: cld  */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E310)); goto _ljump; }
L_1508E248:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508E248: mov al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508E24B: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508E24D: mov byte ptr [edi + 3], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508E250: mov al, byte ptr [esi + 2] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E253: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E253: shr ecx, 2 */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508E256: mov byte ptr [edi + 2], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1508E259: sub esi, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1508E25C: sub edi, 2 */
    _flag_k = FK_CMP;
    /* cmp ecx, 8 */ /* 0x1508E25F: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E1EC; /* 0x1508E262: jb 0x1508e1ec */
L_1508E264:
    _df = -1; /* 0x1508E264: std  */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508E265: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _df = 1; /* 0x1508E267: cld  */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E310)); goto _ljump; }
L_1508E270:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508E270: mov al, byte ptr [esi + 3] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    edx = edx & ecx; /* 0x1508E273: and edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508E275: mov byte ptr [edi + 3], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508E278: mov al, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508E27B: mov byte ptr [edi + 2], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508E27E: mov al, byte ptr [esi + 1] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E281: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E281: shr ecx, 2 */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508E284: mov byte ptr [edi + 1], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 3; /* 0x1508E287: sub esi, 3 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 3; /* 0x1508E28A: sub edi, 3 */
    _flag_k = FK_CMP;
    /* cmp ecx, 8 */ /* 0x1508E28D: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E1EC; /* 0x1508E290: jb 0x1508e1ec */
L_1508E296:
    _df = -1; /* 0x1508E296: std  */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508E297: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _df = 1; /* 0x1508E299: cld  */
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E310)); goto _ljump; }
L_1508E307:
    { _itail_tgt = (uint32_t)(MEM32(edx * 4 + 0x1508E310)); goto _ljump; }
L_1508E320:
    eax = MEM32(ebp + 0x8); /* 0x1508E320: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508E323: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E324: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E325: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E326: ret  */
L_1508E328:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508E328: mov al, byte ptr [esi + 3] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508E32B: mov byte ptr [edi + 3], al */
    eax = MEM32(ebp + 0x8); /* 0x1508E32E: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508E331: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E332: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E333: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E334: ret  */
L_1508E338:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508E338: mov al, byte ptr [esi + 3] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508E33B: mov byte ptr [edi + 3], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508E33E: mov al, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508E341: mov byte ptr [edi + 2], al */
    eax = MEM32(ebp + 0x8); /* 0x1508E344: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508E347: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E348: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E349: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E34A: ret  */
L_1508E34C:
    SET_LO8(eax, MEM8(esi + 0x3)); /* 0x1508E34C: mov al, byte ptr [esi + 3] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x1508E34F: mov byte ptr [edi + 3], al */
    SET_LO8(eax, MEM8(esi + 0x2)); /* 0x1508E352: mov al, byte ptr [esi + 2] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x1508E355: mov byte ptr [edi + 2], al */
    SET_LO8(eax, MEM8(esi + 0x1)); /* 0x1508E358: mov al, byte ptr [esi + 1] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(eax)); /* 0x1508E35B: mov byte ptr [edi + 1], al */
    eax = MEM32(ebp + 0x8); /* 0x1508E35E: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x1508E361: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E362: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E363: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E364: ret  */
L_1508FBB7:
    PUSH32(esp, ebp); /* 0x1508FBB7: push ebp */
    ebp = esp; /* 0x1508FBB8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1508FBBA: sub esp, 0x1c */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x1508FBBD: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1508FBC0: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1508FBC3: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1508FBC6: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx; /* 0x1508FBC9: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1508FBCB: cdq  */
    ecx = eax; /* 0x1508FBCC: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x1508FBCE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1508FBD1: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1508FBD3: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x1508FBD5: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edx)); _flag_b = (uint32_t)((ecx ^ edx));
    ecx = ecx ^ edx; /* 0x1508FBD8: xor ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1508FBDA: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1508FBDC: cdq  */
    edi = eax; /* 0x1508FBDD: mov edi, eax */
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x1508FBDF: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1508FBE1: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x1508FBE3: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x1508FBE6: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1508FBE8: sub edi, edx */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x1508FBEA: mov edx, ecx */
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x1508FBEC: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508FC3A; /* 0x1508FBEE: jne 0x1508fc3a */
L_1508FBF0:
    esi = MEM32(ebp + 0x10); /* 0x1508FBF0: mov esi, dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x1508FBF3: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    ecx = ecx & 0x7Fu; /* 0x1508FBF5: and ecx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1508FBF8: mov dword ptr [ebp - 0x18], ecx */
    /* cmp esi, ecx */ /* 0x1508FBFB: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FC12; /* 0x1508FBFD: je 0x1508fc12 */
L_1508FBFF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1508FBFF: sub esi, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508FC01: push esi */
    PUSH32(esp, ebx); /* 0x1508FC02: push ebx */
    PUSH32(esp, eax); /* 0x1508FC03: push eax */
    RECOMP_CALL(sub_1508FCA0); /* 0x1508FC04: call 0x1508fca0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508FC09: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1508FC0C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1508FC0F: mov ecx, dword ptr [ebp - 0x18] */
L_1508FC12:
    /* test ecx, ecx */ /* 0x1508FC12: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FC8D; /* 0x1508FC14: je 0x1508fc8d */
L_1508FC16:
    ebx = MEM32(ebp + 0x10); /* 0x1508FC16: mov ebx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1508FC19: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x1508FC1C: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508FC1E: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edx; /* 0x1508FC20: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1508FC23: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1508FC25: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1508FC27: mov dword ptr [ebp - 0x10], ebx */
    esi = MEM32(ebp + (-0x14)); /* 0x1508FC2A: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0x10)); /* 0x1508FC2D: mov edi, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1508FC30: mov ecx, dword ptr [ebp - 0x18] */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1508FC33: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x1508FC35: mov eax, dword ptr [ebp + 8] */
    goto L_1508FC8D; /* 0x1508FC38: jmp 0x1508fc8d */
L_1508FC3A:
    /* cmp ecx, edi */ /* 0x1508FC3A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508FC73; /* 0x1508FC3C: jne 0x1508fc73 */
L_1508FC3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508FC3E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1508FC40: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1508FC43: mov dword ptr [ebp - 0x1c], ecx */
    esi = MEM32(ebp + 0xC); /* 0x1508FC46: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1508FC49: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1508FC4C: mov ecx, dword ptr [ebp - 0x1c] */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1508FC4F: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x1508FC51: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x1C)); /* 0x1508FC54: add ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0xC); /* 0x1508FC57: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x1C)); /* 0x1508FC5A: add edx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x1508FC5D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x1C)); /* 0x1508FC60: sub eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1508FC63: push eax */
    PUSH32(esp, edx); /* 0x1508FC64: push edx */
    PUSH32(esp, ecx); /* 0x1508FC65: push ecx */
    RECOMP_CALL(sub_1508FBB7); /* 0x1508FC66: call 0x1508fbb7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508FC6B: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1508FC6E: mov eax, dword ptr [ebp + 8] */
    goto L_1508FC8D; /* 0x1508FC71: jmp 0x1508fc8d */
L_1508FC73:
    esi = MEM32(ebp + 0xC); /* 0x1508FC73: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1508FC76: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1508FC79: mov ecx, dword ptr [ebp + 0x10] */
    edx = ecx; /* 0x1508FC7C: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508FC7E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508FC7E: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1508FC81: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1508FC83: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1508FC85: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1508FC88: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x1508FC8A: mov eax, dword ptr [ebp + 8] */
L_1508FC8D:
    ebx = MEM32(ebp + (-0x4)); /* 0x1508FC8D: mov ebx, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x8)); /* 0x1508FC90: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0xC)); /* 0x1508FC93: mov edi, dword ptr [ebp - 0xc] */
    esp = ebp; /* 0x1508FC96: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1508FC98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FC99: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1508E098u: goto L_1508E098;
      case 0x1508E0C4u: goto L_1508E0C4;
      case 0x1508E0E8u: goto L_1508E0E8;
      case 0x1508E128u: goto L_1508E128;
      case 0x1508E130u: goto L_1508E130;
      case 0x1508E138u: goto L_1508E138;
      case 0x1508E140u: goto L_1508E140;
      case 0x1508E148u: goto L_1508E148;
      case 0x1508E150u: goto L_1508E150;
      case 0x1508E158u: goto L_1508E158;
      case 0x1508E16Bu: goto L_1508E16B;
      case 0x1508E184u: goto L_1508E184;
      case 0x1508E18Cu: goto L_1508E18C;
      case 0x1508E198u: goto L_1508E198;
      case 0x1508E1ACu: goto L_1508E1AC;
      case 0x1508E224u: goto L_1508E224;
      case 0x1508E248u: goto L_1508E248;
      case 0x1508E270u: goto L_1508E270;
      case 0x1508E307u: goto L_1508E307;
      case 0x1508E320u: goto L_1508E320;
      case 0x1508E328u: goto L_1508E328;
      case 0x1508E338u: goto L_1508E338;
      case 0x1508E34Cu: goto L_1508E34C;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1508E370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E370u);

L_1508E370:
    edi = edi; /* 0x1508E370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508E372: push ebp */
    ebp = esp; /* 0x1508E373: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x1508E375: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1508E378: push esi */
    /* test eax, eax */ /* 0x1508E379: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E3C3; /* 0x1508E37B: je 0x1508e3c3 */
L_1508E37D:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1508E37D: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E3A0; /* 0x1508E381: jne 0x1508e3a0 */
L_1508E383:
    RECOMP_CALL(sub_15036430); /* 0x1508E383: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1508E388: push 0x16 */
L_1508E38A:
    esi = POP32_VAL(esp); /* 0x1508E38A: pop esi */
    MEM32(eax) = esi; /* 0x1508E38B: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E38D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508E38F: push eax */
    PUSH32(esp, eax); /* 0x1508E390: push eax */
    PUSH32(esp, eax); /* 0x1508E391: push eax */
    PUSH32(esp, eax); /* 0x1508E392: push eax */
    PUSH32(esp, eax); /* 0x1508E393: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508E394: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508E399: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508E39C: mov eax, esi */
    goto L_1508E3C5; /* 0x1508E39E: jmp 0x1508e3c5 */
L_1508E3A0:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1508E3A0: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E383; /* 0x1508E3A4: je 0x1508e383 */
L_1508E3A6:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1508E3A6: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508E3B4; /* 0x1508E3A9: jae 0x1508e3b4 */
L_1508E3AB:
    RECOMP_CALL(sub_15036430); /* 0x1508E3AB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508E3B0: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508E38A; /* 0x1508E3B2: jmp 0x1508e38a */
L_1508E3B4:
    PUSH32(esp, eax); /* 0x1508E3B4: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508E3B5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508E3B8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508E000); /* 0x1508E3BB: call 0x1508e000 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508E3C0: add esp, 0xc */
    _flag_k = FK_ADD;
L_1508E3C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E3C3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508E3C5:
    esi = POP32_VAL(esp); /* 0x1508E3C5: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508E3C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E3C7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E3D0u);

L_1508E3D0:
    edx = MEM32(esp + 0xC); /* 0x1508E3D0: mov edx, dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x4); /* 0x1508E3D4: mov ecx, dword ptr [esp + 4] */
    /* test edx, edx */ /* 0x1508E3D8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E445; /* 0x1508E3DA: je 0x1508e445 */
L_1508E3DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E3DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esp + 0x8)); /* 0x1508E3DE: mov al, byte ptr [esp + 8] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508E3E2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E3FC; /* 0x1508E3E4: jne 0x1508e3fc */
L_1508E3E6:
    /* cmp edx, 0x100u */ /* 0x1508E3E6: cmp edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E3FC; /* 0x1508E3EC: jb 0x1508e3fc */
L_1508E3EE:
    /* cmp MEM32(0x150BFCE8), 0 */ /* 0x1508E3EE: cmp dword ptr [0x150bfce8], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BFCE8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E3FC; /* 0x1508E3F5: je 0x1508e3fc */
L_1508E3F7:
    goto L_1508FD2D; /* 0x1508E3F7: jmp 0x1508fd2d */
L_1508E3FC:
    PUSH32(esp, edi); /* 0x1508E3FC: push edi */
    edi = ecx; /* 0x1508E3FD: mov edi, ecx */
    /* cmp edx, 4 */ /* 0x1508E3FF: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508E435; /* 0x1508E402: jb 0x1508e435 */
L_1508E404:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508E404: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1508E406: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E417; /* 0x1508E409: je 0x1508e417 */
L_1508E40B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508E40B: sub edx, ecx */
    _flag_k = FK_CMP;
L_1508E40D:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508E40D: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508E40F: add edi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508E412: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E40D; /* 0x1508E415: jne 0x1508e40d */
L_1508E417:
    ecx = eax; /* 0x1508E417: mov ecx, eax */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1508E419: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1508E419: shl eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1508E41C: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1508E41E: mov ecx, eax */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x1508E420: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x1508E420: shl eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1508E423: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x1508E425: mov ecx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x1508E427: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E42A: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E42A: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1508E435; /* 0x1508E42D: je 0x1508e435 */
L_1508E42F:
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1508E42F: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* test edx, edx */ /* 0x1508E431: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E43F; /* 0x1508E433: je 0x1508e43f */
L_1508E435:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508E435: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508E437: add edi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x1508E43A: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E435; /* 0x1508E43D: jne 0x1508e435 */
L_1508E43F:
    eax = MEM32(esp + 0x8); /* 0x1508E43F: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x1508E443: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E444: ret  */
L_1508E445:
    eax = MEM32(esp + 0x4); /* 0x1508E445: mov eax, dword ptr [esp + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E449: ret  */
L_1508FD2D:
    PUSH32(esp, ebp); /* 0x1508FD2D: push ebp */
    ebp = esp; /* 0x1508FD2E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1508FD30: sub esp, 0x10 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1508FD33: mov dword ptr [ebp - 4], edi */
    eax = MEM32(ebp + 0x8); /* 0x1508FD36: mov eax, dword ptr [ebp + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1508FD39: cdq  */
    edi = eax; /* 0x1508FD3A: mov edi, eax */
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x1508FD3C: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1508FD3E: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x1508FD40: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi ^ edx)); _flag_b = (uint32_t)((edi ^ edx));
    edi = edi ^ edx; /* 0x1508FD43: xor edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x1508FD45: sub edi, edx */
    _flag_k = FK_CMP;
    /* test edi, edi */ /* 0x1508FD47: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508FD87; /* 0x1508FD49: jne 0x1508fd87 */
L_1508FD4B:
    ecx = MEM32(ebp + 0x10); /* 0x1508FD4B: mov ecx, dword ptr [ebp + 0x10] */
    edx = ecx; /* 0x1508FD4E: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x7Fu);
    edx = edx & 0x7Fu; /* 0x1508FD50: and edx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x1508FD53: mov dword ptr [ebp - 0xc], edx */
    /* cmp ecx, edx */ /* 0x1508FD56: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FD6C; /* 0x1508FD58: je 0x1508fd6c */
L_1508FD5A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1508FD5A: sub ecx, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1508FD5C: push ecx */
    PUSH32(esp, eax); /* 0x1508FD5D: push eax */
    RECOMP_CALL(sub_1508FDC2); /* 0x1508FD5E: call 0x1508fdc2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x1508FD63: add esp, 8 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1508FD66: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0xC)); /* 0x1508FD69: mov edx, dword ptr [ebp - 0xc] */
L_1508FD6C:
    /* test edx, edx */ /* 0x1508FD6C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FDB5; /* 0x1508FD6E: je 0x1508fdb5 */
L_1508FD70:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x1508FD70: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1508FD73: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1508FD75: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508FD78: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + (-0x8)); /* 0x1508FD7A: mov edi, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1508FD7D: mov ecx, dword ptr [ebp - 0xc] */
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1508FD80: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0x8); /* 0x1508FD82: mov eax, dword ptr [ebp + 8] */
    goto L_1508FDB5; /* 0x1508FD85: jmp 0x1508fdb5 */
L_1508FD87:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1508FD87: neg edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1508FD89: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edi; /* 0x1508FD8C: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508FD8F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x1508FD91: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1508FD94: mov ecx, dword ptr [ebp - 0x10] */
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1508FD97: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + (-0x10)); /* 0x1508FD99: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1508FD9C: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x1508FD9F: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1508FDA2: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1508FDA4: sub edx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edx); /* 0x1508FDA6: push edx */
    PUSH32(esp, 0); /* 0x1508FDA7: push 0 */
    PUSH32(esp, ecx); /* 0x1508FDA9: push ecx */
    RECOMP_CALL(sub_1508FD2D); /* 0x1508FDAA: call 0x1508fd2d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508FDAF: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1508FDB2: mov eax, dword ptr [ebp + 8] */
L_1508FDB5:
    edi = MEM32(ebp + (-0x4)); /* 0x1508FDB5: mov edi, dword ptr [ebp - 4] */
    esp = ebp; /* 0x1508FDB8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1508FDBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FDBB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E450u);

L_1508E450:
    edi = edi; /* 0x1508E450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508E452: push ebp */
    ebp = esp; /* 0x1508E453: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1508E455: push ebx */
    PUSH32(esp, esi); /* 0x1508E456: push esi */
    PUSH32(esp, edi); /* 0x1508E457: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1508E458: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1508E45B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E4A9; /* 0x1508E45D: je 0x1508e4a9 */
L_1508E45F:
    ecx = MEM32(ebp + 0xC); /* 0x1508E45F: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1508E462: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E4A9; /* 0x1508E464: je 0x1508e4a9 */
L_1508E466:
    edx = MEM32(ebp + 0x10); /* 0x1508E466: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x1508E469: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E478; /* 0x1508E46B: jne 0x1508e478 */
L_1508E46D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E46D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1508E46F: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508E471: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1508E4B0; /* 0x1508E476: jmp 0x1508e4b0 */
L_1508E478:
    esi = edi; /* 0x1508E478: mov esi, edi */
L_1508E47A:
    /* cmp MEM8(esi), 0 */ /* 0x1508E47A: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E487; /* 0x1508E47D: je 0x1508e487 */
L_1508E47F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508E47F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508E480: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E47A; /* 0x1508E483: jne 0x1508e47a */
L_1508E485:
    RECOMP_BACKEDGE();
    goto L_1508E46D; /* 0x1508E485: jmp 0x1508e46d */
L_1508E487:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x1508E487: sub esi, edx */
    _flag_k = FK_CMP;
L_1508E489:
    SET_LO8(eax, MEM8(edx)); /* 0x1508E489: mov al, byte ptr [edx] */
    MEM8(esi + edx) = (uint8_t)(LO8(eax)); /* 0x1508E48B: mov byte ptr [esi + edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1508E48E: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1508E48F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E4A5; /* 0x1508E491: je 0x1508e4a5 */
L_1508E493:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508E493: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E489; /* 0x1508E496: jne 0x1508e489 */
L_1508E498:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E498: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x1508E49A: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508E49C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508E4A1: push 0x22 */
    goto L_1508E4B2; /* 0x1508E4A3: jmp 0x1508e4b2 */
L_1508E4A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E4A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508E4C4; /* 0x1508E4A7: jmp 0x1508e4c4 */
L_1508E4A9:
    RECOMP_CALL(sub_15036430); /* 0x1508E4A9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E4AE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508E4B0:
    PUSH32(esp, 0x16u); /* 0x1508E4B0: push 0x16 */
L_1508E4B2:
    esi = POP32_VAL(esp); /* 0x1508E4B2: pop esi */
    PUSH32(esp, ebx); /* 0x1508E4B3: push ebx */
    PUSH32(esp, ebx); /* 0x1508E4B4: push ebx */
    PUSH32(esp, ebx); /* 0x1508E4B5: push ebx */
    PUSH32(esp, ebx); /* 0x1508E4B6: push ebx */
    PUSH32(esp, ebx); /* 0x1508E4B7: push ebx */
    MEM32(eax) = esi; /* 0x1508E4B8: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1508E4BA: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508E4BF: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508E4C2: mov eax, esi */
L_1508E4C4:
    edi = POP32_VAL(esp); /* 0x1508E4C4: pop edi */
    esi = POP32_VAL(esp); /* 0x1508E4C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508E4C6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508E4C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E4C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E4E0u);

    goto L_1508E4E0;
L_1508E4D0:
    eax = edx + (-0x1); /* 0x1508E4D0: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1508E4D3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E4D4: ret  */
L_1508E4E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E4E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esp + 0x8)); /* 0x1508E4E2: mov al, byte ptr [esp + 8] */
    PUSH32(esp, ebx); /* 0x1508E4E6: push ebx */
    ebx = eax; /* 0x1508E4E7: mov ebx, eax */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1508E4E9: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1508E4E9: shl eax, 8 */
    edx = MEM32(esp + 0x8); /* 0x1508E4EC: mov edx, dword ptr [esp + 8] */
    /* test edx, 3 */ /* 0x1508E4F0: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E50D; /* 0x1508E4F6: je 0x1508e50d */
L_1508E4F8:
    SET_LO8(ecx, MEM8(edx)); /* 0x1508E4F8: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1508E4FA: add edx, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x1508E4FD: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E4D0; /* 0x1508E4FF: je 0x1508e4d0 */
L_1508E501:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1508E501: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E556; /* 0x1508E503: je 0x1508e556 */
L_1508E505:
    /* test edx, 3 */ /* 0x1508E505: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E4F8; /* 0x1508E50B: jne 0x1508e4f8 */
L_1508E50D:
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x1508E50D: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1508E50F: push edi */
    eax = ebx; /* 0x1508E510: mov eax, ebx */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x1508E512: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x1508E512: shl ebx, 0x10 */
    PUSH32(esp, esi); /* 0x1508E515: push esi */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x1508E516: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508E518:
    ecx = MEM32(edx); /* 0x1508E518: mov ecx, dword ptr [edx] */
    edi = 0x7EFEFEFFu; /* 0x1508E51A: mov edi, 0x7efefeff */
    eax = ecx; /* 0x1508E51F: mov eax, ecx */
    esi = edi; /* 0x1508E521: mov esi, edi */
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x1508E523: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1508E525: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1508E527: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx ^ 0xFFFFFFFFu));
    ecx = ecx ^ 0xFFFFFFFFu; /* 0x1508E529: xor ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1508E52C: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x1508E52F: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x1508E531: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1508E533: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x81010100u);
    ecx = ecx & 0x81010100u; /* 0x1508E536: and ecx, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E55A; /* 0x1508E53C: jne 0x1508e55a */
L_1508E53E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    eax = eax & 0x81010100u; /* 0x1508E53E: and eax, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E518; /* 0x1508E543: je 0x1508e518 */
L_1508E545:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01010100u);
    eax = eax & 0x01010100u; /* 0x1508E545: and eax, 0x1010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E54A: jne 0x1508e554 */
L_1508E54C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80000000u);
    esi = esi & 0x80000000u; /* 0x1508E54C: and esi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E518; /* 0x1508E552: jne 0x1508e518 */
L_1508E554:
    esi = POP32_VAL(esp); /* 0x1508E554: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E555: pop edi */
L_1508E556:
    ebx = POP32_VAL(esp); /* 0x1508E556: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E557: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E559: ret  */
L_1508E55A:
    eax = MEM32(edx + (-0x4)); /* 0x1508E55A: mov eax, dword ptr [edx - 4] */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1508E55D: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E597; /* 0x1508E55F: je 0x1508e597 */
L_1508E561:
    /* test LO8(eax), LO8(eax) */ /* 0x1508E561: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E563: je 0x1508e554 */
L_1508E565:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1508E565: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E590; /* 0x1508E567: je 0x1508e590 */
L_1508E569:
    /* test HI8(eax), HI8(eax) */ /* 0x1508E569: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E56B: je 0x1508e554 */
L_1508E56D:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1508E56D: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x1508E56D: shr eax, 0x10 */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1508E570: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E589; /* 0x1508E572: je 0x1508e589 */
L_1508E574:
    /* test LO8(eax), LO8(eax) */ /* 0x1508E574: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E576: je 0x1508e554 */
L_1508E578:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1508E578: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E582; /* 0x1508E57A: je 0x1508e582 */
L_1508E57C:
    /* test HI8(eax), HI8(eax) */ /* 0x1508E57C: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E57E: je 0x1508e554 */
L_1508E580:
    RECOMP_BACKEDGE();
    goto L_1508E518; /* 0x1508E580: jmp 0x1508e518 */
L_1508E582:
    esi = POP32_VAL(esp); /* 0x1508E582: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E583: pop edi */
    eax = edx + (-0x1); /* 0x1508E584: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1508E587: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E588: ret  */
L_1508E589:
    eax = edx + (-0x2); /* 0x1508E589: lea eax, [edx - 2] */
    esi = POP32_VAL(esp); /* 0x1508E58C: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E58D: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508E58E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E58F: ret  */
L_1508E590:
    eax = edx + (-0x3); /* 0x1508E590: lea eax, [edx - 3] */
    esi = POP32_VAL(esp); /* 0x1508E593: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E594: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508E595: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E596: ret  */
L_1508E597:
    eax = edx + (-0x4); /* 0x1508E597: lea eax, [edx - 4] */
    esi = POP32_VAL(esp); /* 0x1508E59A: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E59B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508E59C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E59D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E5B0u);

L_1508E5B0:
    edx = MEM32(esp + 0x4); /* 0x1508E5B0: mov edx, dword ptr [esp + 4] */
    ecx = MEM32(esp + 0x8); /* 0x1508E5B4: mov ecx, dword ptr [esp + 8] */
    /* test edx, 3 */ /* 0x1508E5B8: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E5FC; /* 0x1508E5BE: jne 0x1508e5fc */
L_1508E5C0:
    eax = MEM32(edx); /* 0x1508E5C0: mov eax, dword ptr [edx] */
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1508E5C2: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E5F4; /* 0x1508E5C4: jne 0x1508e5f4 */
L_1508E5C6:
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508E5C6: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E5F0; /* 0x1508E5C8: je 0x1508e5f0 */
L_1508E5CA:
    /* cmp HI8(eax), MEM8(ecx + 0x1) */ /* 0x1508E5CA: cmp ah, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E5F4; /* 0x1508E5CD: jne 0x1508e5f4 */
L_1508E5CF:
    _flag_a = (uint32_t)((HI8(eax) | HI8(eax))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(eax))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(eax)); /* 0x1508E5CF: or ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E5F0; /* 0x1508E5D1: je 0x1508e5f0 */
L_1508E5D3:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1508E5D3: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x1508E5D3: shr eax, 0x10 */
    /* cmp LO8(eax), MEM8(ecx + 0x2) */ /* 0x1508E5D6: cmp al, byte ptr [ecx + 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E5F4; /* 0x1508E5D9: jne 0x1508e5f4 */
L_1508E5DB:
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508E5DB: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E5F0; /* 0x1508E5DD: je 0x1508e5f0 */
L_1508E5DF:
    /* cmp HI8(eax), MEM8(ecx + 0x3) */ /* 0x1508E5DF: cmp ah, byte ptr [ecx + 3] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x3)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E5F4; /* 0x1508E5E2: jne 0x1508e5f4 */
L_1508E5E4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1508E5E4: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1508E5E7: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((HI8(eax) | HI8(eax))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(eax))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(eax)); /* 0x1508E5EA: or ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E5C0; /* 0x1508E5EC: jne 0x1508e5c0 */
L_1508E5EE:
    edi = edi; /* 0x1508E5EE: mov edi, edi */
L_1508E5F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E5F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E5F2: ret  */
L_1508E5F4:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1508E5F4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x1508E5F6: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x1508E5F6: shl eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x1508E5F8: add eax, 1 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E5FB: ret  */
L_1508E5FC:
    /* test edx, 1 */ /* 0x1508E5FC: test edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E61C; /* 0x1508E602: je 0x1508e61c */
L_1508E604:
    SET_LO8(eax, MEM8(edx)); /* 0x1508E604: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1508E606: add edx, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1508E609: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E5F4; /* 0x1508E60B: jne 0x1508e5f4 */
L_1508E60D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1508E60D: add ecx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508E610: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E5F0; /* 0x1508E612: je 0x1508e5f0 */
L_1508E614:
    /* test edx, 2 */ /* 0x1508E614: test edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E5C0; /* 0x1508E61A: je 0x1508e5c0 */
L_1508E61C:
    SET_LO16(eax, MEM16(edx)); /* 0x1508E61C: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508E61F: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1508E622: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E5F4; /* 0x1508E624: jne 0x1508e5f4 */
L_1508E626:
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508E626: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E5F0; /* 0x1508E628: je 0x1508e5f0 */
L_1508E62A:
    /* cmp HI8(eax), MEM8(ecx + 0x1) */ /* 0x1508E62A: cmp ah, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E5F4; /* 0x1508E62D: jne 0x1508e5f4 */
L_1508E62F:
    _flag_a = (uint32_t)((HI8(eax) | HI8(eax))) << 24; _flag_b = (uint32_t)((HI8(eax) | HI8(eax))) << 24;
    SET_HI8(eax, HI8(eax) | HI8(eax)); /* 0x1508E62F: or ah, ah */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E5F0; /* 0x1508E631: je 0x1508e5f0 */
L_1508E633:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508E633: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1508E5C0; /* 0x1508E636: jmp 0x1508e5c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508E640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E640u);

L_1508E640:
    edi = edi; /* 0x1508E640: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508E642: push ebp */
    ebp = esp; /* 0x1508E643: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1508E645: push ebx */
    PUSH32(esp, esi); /* 0x1508E646: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508E647: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1508E64A: push edi */
    /* test esi, esi */ /* 0x1508E64B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E690; /* 0x1508E64D: je 0x1508e690 */
L_1508E64F:
    edx = MEM32(ebp + 0xC); /* 0x1508E64F: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1508E652: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E690; /* 0x1508E654: je 0x1508e690 */
L_1508E656:
    ecx = MEM32(ebp + 0x10); /* 0x1508E656: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1508E659: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E668; /* 0x1508E65B: jne 0x1508e668 */
L_1508E65D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E65D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1508E65F: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508E661: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1508E697; /* 0x1508E666: jmp 0x1508e697 */
L_1508E668:
    edi = esi; /* 0x1508E668: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1508E66A: sub edi, ecx */
    _flag_k = FK_CMP;
L_1508E66C:
    SET_LO8(eax, MEM8(ecx)); /* 0x1508E66C: mov al, byte ptr [ecx] */
    MEM8(edi + ecx) = (uint8_t)(LO8(eax)); /* 0x1508E66E: mov byte ptr [edi + ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1508E671: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1508E672: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E68C; /* 0x1508E674: je 0x1508e68c */
L_1508E676:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x1508E676: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E66C; /* 0x1508E679: jne 0x1508e66c */
L_1508E67B:
    /* test edx, edx */ /* 0x1508E67B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E68C; /* 0x1508E67D: jne 0x1508e68c */
L_1508E67F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E67F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1508E681: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508E683: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508E688: push 0x22 */
    goto L_1508E699; /* 0x1508E68A: jmp 0x1508e699 */
L_1508E68C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E68C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508E6AB; /* 0x1508E68E: jmp 0x1508e6ab */
L_1508E690:
    RECOMP_CALL(sub_15036430); /* 0x1508E690: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E695: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508E697:
    PUSH32(esp, 0x16u); /* 0x1508E697: push 0x16 */
L_1508E699:
    esi = POP32_VAL(esp); /* 0x1508E699: pop esi */
    PUSH32(esp, ebx); /* 0x1508E69A: push ebx */
    PUSH32(esp, ebx); /* 0x1508E69B: push ebx */
    PUSH32(esp, ebx); /* 0x1508E69C: push ebx */
    PUSH32(esp, ebx); /* 0x1508E69D: push ebx */
    PUSH32(esp, ebx); /* 0x1508E69E: push ebx */
    MEM32(eax) = esi; /* 0x1508E69F: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1508E6A1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1508E6A6: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508E6A8: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508E6AB:
    edi = POP32_VAL(esp); /* 0x1508E6AB: pop edi */
    esi = POP32_VAL(esp); /* 0x1508E6AC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508E6AD: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508E6AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E6AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E6C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E6C0u);

L_1508E6C0:
    PUSH32(esp, ebp); /* 0x1508E6C0: push ebp */
    ebp = esp; /* 0x1508E6C1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508E6C3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E6C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508E6C6: push eax */
    PUSH32(esp, eax); /* 0x1508E6C7: push eax */
    PUSH32(esp, eax); /* 0x1508E6C8: push eax */
    PUSH32(esp, eax); /* 0x1508E6C9: push eax */
    PUSH32(esp, eax); /* 0x1508E6CA: push eax */
    PUSH32(esp, eax); /* 0x1508E6CB: push eax */
    PUSH32(esp, eax); /* 0x1508E6CC: push eax */
    PUSH32(esp, eax); /* 0x1508E6CD: push eax */
    edx = MEM32(ebp + 0xC); /* 0x1508E6CE: mov edx, dword ptr [ebp + 0xc] */
    ecx = ecx; /* 0x1508E6D1: lea ecx, [ecx] */
L_1508E6D4:
    SET_LO8(eax, MEM8(edx)); /* 0x1508E6D4: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508E6D6: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E6E3; /* 0x1508E6D8: je 0x1508e6e3 */
L_1508E6DA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1508E6DA: add edx, 1 */
    _flag_k = FK_ADD;
    /* bts MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x1508E6DD: bts dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))) = _flag_a | (1u << _flag_b); /* 0x1508E6DD: bts dword ptr [esp], eax */
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    goto L_1508E6D4; /* 0x1508E6E1: jmp 0x1508e6d4 */
L_1508E6E3:
    esi = MEM32(ebp + 0x8); /* 0x1508E6E3: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1508E6E6: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x1508E6E9: lea ecx, [ecx] */
L_1508E6EC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1508E6EC: add ecx, 1 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(esi)); /* 0x1508E6EF: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508E6F1: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E6FE; /* 0x1508E6F3: je 0x1508e6fe */
L_1508E6F5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508E6F5: add esi, 1 */
    _flag_k = FK_ADD;
    /* bt MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x1508E6F8: bt dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    if ((!BT_CF(_flag_a, _flag_b))) goto L_1508E6EC; /* 0x1508E6FC: jae 0x1508e6ec */
L_1508E6FE:
    eax = ecx; /* 0x1508E6FE: mov eax, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508E700: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1508E703: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508E704: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E705: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E710u);

L_1508E710:
    ecx = MEM32(esp + 0x4); /* 0x1508E710: mov ecx, dword ptr [esp + 4] */
    /* test ecx, 3 */ /* 0x1508E714: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E740; /* 0x1508E71A: je 0x1508e740 */
L_1508E71C:
    SET_LO8(eax, MEM8(ecx)); /* 0x1508E71C: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1508E71E: add ecx, 1 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1508E721: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E773; /* 0x1508E723: je 0x1508e773 */
L_1508E725:
    /* test ecx, 3 */ /* 0x1508E725: test ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E71C; /* 0x1508E72B: jne 0x1508e71c */
L_1508E72D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0; /* 0x1508E72D: add eax, 0 */
    _flag_k = FK_ADD;
    esp = esp; /* 0x1508E732: lea esp, [esp] */
    esp = esp; /* 0x1508E739: lea esp, [esp] */
L_1508E740:
    eax = MEM32(ecx); /* 0x1508E740: mov eax, dword ptr [ecx] */
    edx = 0x7EFEFEFFu; /* 0x1508E742: mov edx, 0x7efefeff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1508E747: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1508E749: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1508E74C: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1508E74E: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x1508E751: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E740; /* 0x1508E756: je 0x1508e740 */
L_1508E758:
    eax = MEM32(ecx + (-0x4)); /* 0x1508E758: mov eax, dword ptr [ecx - 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508E75B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E791; /* 0x1508E75D: je 0x1508e791 */
L_1508E75F:
    /* test HI8(eax), HI8(eax) */ /* 0x1508E75F: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E787; /* 0x1508E761: je 0x1508e787 */
L_1508E763:
    /* test eax, 0x00FF0000u */ /* 0x1508E763: test eax, 0xff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E77D; /* 0x1508E768: je 0x1508e77d */
L_1508E76A:
    /* test eax, 0xFF000000u */ /* 0x1508E76A: test eax, 0xff000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E773; /* 0x1508E76F: je 0x1508e773 */
L_1508E771:
    RECOMP_BACKEDGE();
    goto L_1508E740; /* 0x1508E771: jmp 0x1508e740 */
L_1508E773:
    eax = ecx + (-0x1); /* 0x1508E773: lea eax, [ecx - 1] */
    ecx = MEM32(esp + 0x4); /* 0x1508E776: mov ecx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508E77A: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E77C: ret  */
L_1508E77D:
    eax = ecx + (-0x2); /* 0x1508E77D: lea eax, [ecx - 2] */
    ecx = MEM32(esp + 0x4); /* 0x1508E780: mov ecx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508E784: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E786: ret  */
L_1508E787:
    eax = ecx + (-0x3); /* 0x1508E787: lea eax, [ecx - 3] */
    ecx = MEM32(esp + 0x4); /* 0x1508E78A: mov ecx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508E78E: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E790: ret  */
L_1508E791:
    eax = ecx + (-0x4); /* 0x1508E791: lea eax, [ecx - 4] */
    ecx = MEM32(esp + 0x4); /* 0x1508E794: mov ecx, dword ptr [esp + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508E798: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E79A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E7B0u);

L_1508E7B0:
    ecx = MEM32(esp + 0xC); /* 0x1508E7B0: mov ecx, dword ptr [esp + 0xc] */
    PUSH32(esp, edi); /* 0x1508E7B4: push edi */
    /* test ecx, ecx */ /* 0x1508E7B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E874; /* 0x1508E7B7: je 0x1508e874 */
L_1508E7BD:
    edi = MEM32(esp + 0x8); /* 0x1508E7BD: mov edi, dword ptr [esp + 8] */
    PUSH32(esp, esi); /* 0x1508E7C1: push esi */
    /* test edi, 3 */ /* 0x1508E7C2: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1508E7C8: push ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E7DC; /* 0x1508E7C9: je 0x1508e7dc */
L_1508E7CB:
    SET_LO8(eax, MEM8(edi)); /* 0x1508E7CB: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508E7CD: add edi, 1 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1508E7D0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E80D; /* 0x1508E7D2: je 0x1508e80d */
L_1508E7D4:
    /* test edi, 3 */ /* 0x1508E7D4: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E7CB; /* 0x1508E7DA: jne 0x1508e7cb */
L_1508E7DC:
    eax = MEM32(edi); /* 0x1508E7DC: mov eax, dword ptr [edi] */
    edx = 0x7EFEFEFFu; /* 0x1508E7DE: mov edx, 0x7efefeff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1508E7E3: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1508E7E5: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1508E7E8: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1508E7EA: add edi, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x1508E7ED: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E7DC; /* 0x1508E7F2: je 0x1508e7dc */
L_1508E7F4:
    eax = MEM32(edi + (-0x4)); /* 0x1508E7F4: mov eax, dword ptr [edi - 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508E7F7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E81C; /* 0x1508E7F9: je 0x1508e81c */
L_1508E7FB:
    /* test HI8(eax), HI8(eax) */ /* 0x1508E7FB: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E817; /* 0x1508E7FD: je 0x1508e817 */
L_1508E7FF:
    /* test eax, 0x00FF0000u */ /* 0x1508E7FF: test eax, 0xff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E812; /* 0x1508E804: je 0x1508e812 */
L_1508E806:
    /* test eax, 0xFF000000u */ /* 0x1508E806: test eax, 0xff000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E7DC; /* 0x1508E80B: jne 0x1508e7dc */
L_1508E80D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508E80D: sub edi, 1 */
    _flag_k = FK_CMP;
    goto L_1508E81F; /* 0x1508E810: jmp 0x1508e81f */
L_1508E812:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 2; /* 0x1508E812: sub edi, 2 */
    _flag_k = FK_CMP;
    goto L_1508E81F; /* 0x1508E815: jmp 0x1508e81f */
L_1508E817:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 3; /* 0x1508E817: sub edi, 3 */
    _flag_k = FK_CMP;
    goto L_1508E81F; /* 0x1508E81A: jmp 0x1508e81f */
L_1508E81C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x1508E81C: sub edi, 4 */
    _flag_k = FK_CMP;
L_1508E81F:
    esi = MEM32(esp + 0x14); /* 0x1508E81F: mov esi, dword ptr [esp + 0x14] */
    /* test esi, 3 */ /* 0x1508E823: test esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E834; /* 0x1508E829: jne 0x1508e834 */
L_1508E82B:
    ebx = ecx; /* 0x1508E82B: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E82D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E82D: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1508E88E; /* 0x1508E830: jne 0x1508e88e */
L_1508E832:
    goto L_1508E856; /* 0x1508E832: jmp 0x1508e856 */
L_1508E834:
    SET_LO8(edx, MEM8(esi)); /* 0x1508E834: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508E836: add esi, 1 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1508E839: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E87A; /* 0x1508E83B: je 0x1508e87a */
L_1508E83D:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x1508E83D: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508E83F: add edi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508E842: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508E870; /* 0x1508E845: je 0x1508e870 */
L_1508E847:
    /* test esi, 3 */ /* 0x1508E847: test esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E834; /* 0x1508E84D: jne 0x1508e834 */
L_1508E84F:
    ebx = ecx; /* 0x1508E84F: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508E851: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508E851: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1508E88E; /* 0x1508E854: jne 0x1508e88e */
L_1508E856:
    ecx = ebx; /* 0x1508E856: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1508E858: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E870; /* 0x1508E85B: je 0x1508e870 */
L_1508E85D:
    SET_LO8(edx, MEM8(esi)); /* 0x1508E85D: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508E85F: add esi, 1 */
    _flag_k = FK_ADD;
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x1508E862: mov byte ptr [edi], dl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508E864: add edi, 1 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1508E867: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E872; /* 0x1508E869: je 0x1508e872 */
L_1508E86B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508E86B: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E85D; /* 0x1508E86E: jne 0x1508e85d */
L_1508E870:
    MEM8(edi) = (uint8_t)(LO8(ecx)); /* 0x1508E870: mov byte ptr [edi], cl */
L_1508E872:
    ebx = POP32_VAL(esp); /* 0x1508E872: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508E873: pop esi */
L_1508E874:
    eax = MEM32(esp + 0x8); /* 0x1508E874: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x1508E878: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E879: ret  */
L_1508E87A:
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x1508E87A: mov byte ptr [edi], dl */
    eax = MEM32(esp + 0x10); /* 0x1508E87C: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x1508E880: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508E881: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E882: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E883: ret  */
L_1508E884:
    MEM32(edi) = edx; /* 0x1508E884: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1508E886: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508E889: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508E856; /* 0x1508E88C: je 0x1508e856 */
L_1508E88E:
    edx = 0x7EFEFEFFu; /* 0x1508E88E: mov edx, 0x7efefeff */
    eax = MEM32(esi); /* 0x1508E893: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1508E895: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1508E897: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1508E89A: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi); /* 0x1508E89C: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1508E89E: add esi, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x1508E8A1: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E884; /* 0x1508E8A6: je 0x1508e884 */
L_1508E8A8:
    /* test LO8(edx), LO8(edx) */ /* 0x1508E8A8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E87A; /* 0x1508E8AA: je 0x1508e87a */
L_1508E8AC:
    /* test HI8(edx), HI8(edx) */ /* 0x1508E8AC: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E8DA; /* 0x1508E8AE: je 0x1508e8da */
L_1508E8B0:
    /* test edx, 0x00FF0000u */ /* 0x1508E8B0: test edx, 0xff0000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E8CA; /* 0x1508E8B6: je 0x1508e8ca */
L_1508E8B8:
    /* test edx, 0xFF000000u */ /* 0x1508E8B8: test edx, 0xff000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E884; /* 0x1508E8BE: jne 0x1508e884 */
L_1508E8C0:
    MEM32(edi) = edx; /* 0x1508E8C0: mov dword ptr [edi], edx */
    eax = MEM32(esp + 0x10); /* 0x1508E8C2: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x1508E8C6: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508E8C7: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E8C8: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E8C9: ret  */
L_1508E8CA:
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x1508E8CA: mov word ptr [edi], dx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1508E8CD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esp + 0x10); /* 0x1508E8CF: mov eax, dword ptr [esp + 0x10] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(edx)); /* 0x1508E8D3: mov byte ptr [edi + 2], dl */
    ebx = POP32_VAL(esp); /* 0x1508E8D6: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508E8D7: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E8D8: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E8D9: ret  */
L_1508E8DA:
    MEM16(edi) = (uint16_t)(LO16(edx)); /* 0x1508E8DA: mov word ptr [edi], dx */
    eax = MEM32(esp + 0x10); /* 0x1508E8DD: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x1508E8E1: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508E8E2: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E8E3: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E8E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508E8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E8F0u);

L_1508E8F0:
    edi = edi; /* 0x1508E8F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508E8F2: push ebp */
    ebp = esp; /* 0x1508E8F3: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1508E8F5: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1508E8F8: push ebx */
    PUSH32(esp, esi); /* 0x1508E8F9: push esi */
    PUSH32(esp, edi); /* 0x1508E8FA: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1508E8FB: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1508E8FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E92F; /* 0x1508E900: jne 0x1508e92f */
L_1508E902:
    /* test edx, edx */ /* 0x1508E902: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E933; /* 0x1508E904: jne 0x1508e933 */
L_1508E906:
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1508E906: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E9D3; /* 0x1508E909: je 0x1508e9d3 */
L_1508E90F:
    RECOMP_CALL(sub_15036430); /* 0x1508E90F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E914: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508E916:
    PUSH32(esp, 0x16u); /* 0x1508E916: push 0x16 */
L_1508E918:
    esi = POP32_VAL(esp); /* 0x1508E918: pop esi */
    PUSH32(esp, ebx); /* 0x1508E919: push ebx */
    PUSH32(esp, ebx); /* 0x1508E91A: push ebx */
    PUSH32(esp, ebx); /* 0x1508E91B: push ebx */
    PUSH32(esp, ebx); /* 0x1508E91C: push ebx */
    PUSH32(esp, ebx); /* 0x1508E91D: push ebx */
    MEM32(eax) = esi; /* 0x1508E91E: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1508E920: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508E925: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1508E928: mov eax, esi */
L_1508E92A:
    edi = POP32_VAL(esp); /* 0x1508E92A: pop edi */
    esi = POP32_VAL(esp); /* 0x1508E92B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508E92C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508E92D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E92E: ret  */
L_1508E92F:
    /* test edx, edx */ /* 0x1508E92F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E90F; /* 0x1508E931: je 0x1508e90f */
L_1508E933:
    ebx = MEM32(ebp + 0xC); /* 0x1508E933: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508E936: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E90F; /* 0x1508E938: je 0x1508e90f */
L_1508E93A:
    eax = MEM32(ebp + 0x10); /* 0x1508E93A: mov eax, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1508E93D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E950; /* 0x1508E93F: je 0x1508e950 */
L_1508E941:
    /* test eax, eax */ /* 0x1508E941: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E950; /* 0x1508E943: jne 0x1508e950 */
L_1508E945:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E945: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1508E947: mov byte ptr [edx], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508E949: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508E916; /* 0x1508E94E: jmp 0x1508e916 */
L_1508E950:
    ecx = edx; /* 0x1508E950: mov ecx, edx */
    esi = ebx; /* 0x1508E952: mov esi, ebx */
L_1508E954:
    /* cmp MEM8(ecx), 0 */ /* 0x1508E954: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E961; /* 0x1508E957: je 0x1508e961 */
L_1508E959:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1508E959: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1508E95A: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E954; /* 0x1508E95D: jne 0x1508e954 */
L_1508E95F:
    RECOMP_BACKEDGE();
    goto L_1508E945; /* 0x1508E95F: jmp 0x1508e945 */
L_1508E961:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508E961: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1508E963: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E987; /* 0x1508E966: jne 0x1508e987 */
L_1508E968:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1508E968: sub ecx, eax */
    _flag_k = FK_CMP;
L_1508E96A:
    edx = MEM32(ebp + 0x10); /* 0x1508E96A: mov edx, dword ptr [ebp + 0x10] */
    SET_LO8(eax, MEM8(eax)); /* 0x1508E96D: mov al, byte ptr [eax] */
    MEM8(ecx + edx) = (uint8_t)(LO8(eax)); /* 0x1508E96F: mov byte ptr [ecx + edx], al */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1508E972: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = edx; /* 0x1508E973: mov dword ptr [ebp + 0x10], edx */
    edx = MEM32(ebp + 0x8); /* 0x1508E976: mov edx, dword ptr [ebp + 8] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508E979: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E9AD; /* 0x1508E97B: je 0x1508e9ad */
L_1508E97D:
    eax = MEM32(ebp + 0x10); /* 0x1508E97D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1508E980: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E96A; /* 0x1508E983: jne 0x1508e96a */
L_1508E985:
    goto L_1508E9AD; /* 0x1508E985: jmp 0x1508e9ad */
L_1508E987:
    /* test edi, edi */ /* 0x1508E987: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E9AB; /* 0x1508E989: je 0x1508e9ab */
L_1508E98B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508E98B: sub eax, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x1508E98D: mov dword ptr [ebp + 0x10], eax */
L_1508E990:
    SET_LO8(eax, MEM8(eax + ecx)); /* 0x1508E990: mov al, byte ptr [eax + ecx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1508E993: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1508E995: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1508E996: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E9D3; /* 0x1508E998: je 0x1508e9d3 */
L_1508E99A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x1508E99A: sub esi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508E9A7; /* 0x1508E99D: je 0x1508e9a7 */
L_1508E99F:
    eax = MEM32(ebp + 0x10); /* 0x1508E99F: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508E9A2: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508E990; /* 0x1508E9A5: jne 0x1508e990 */
L_1508E9A7:
    /* test edi, edi */ /* 0x1508E9A7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E9AD; /* 0x1508E9A9: jne 0x1508e9ad */
L_1508E9AB:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1508E9AB: mov byte ptr [ecx], bl */
L_1508E9AD:
    /* test esi, esi */ /* 0x1508E9AD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E9D3; /* 0x1508E9AF: jne 0x1508e9d3 */
L_1508E9B1:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1508E9B1: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508E9C5; /* 0x1508E9B4: jne 0x1508e9c5 */
L_1508E9B6:
    eax = MEM32(ebp + 0xC); /* 0x1508E9B6: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x50u); /* 0x1508E9B9: push 0x50 */
    MEM8(edx + eax + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1508E9BB: mov byte ptr [edx + eax - 1], bl */
    eax = POP32_VAL(esp); /* 0x1508E9BF: pop eax */
    RECOMP_BACKEDGE();
    goto L_1508E92A; /* 0x1508E9C0: jmp 0x1508e92a */
L_1508E9C5:
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x1508E9C5: mov byte ptr [edx], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508E9C7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508E9CC: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508E918; /* 0x1508E9CE: jmp 0x1508e918 */
L_1508E9D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E9D3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508E92A; /* 0x1508E9D5: jmp 0x1508e92a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508E9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508E9E0u);

L_1508E9E0:
    edi = edi; /* 0x1508E9E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508E9E2: push ebp */
    ebp = esp; /* 0x1508E9E3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508E9E5: push ecx */
    PUSH32(esp, ebx); /* 0x1508E9E6: push ebx */
    PUSH32(esp, esi); /* 0x1508E9E7: push esi */
    PUSH32(esp, edi); /* 0x1508E9E8: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1508E9E9: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508E9EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1508E9EE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA5F; /* 0x1508E9F0: je 0x1508ea5f */
L_1508E9F2:
    ecx = MEM32(ebp + 0xC); /* 0x1508E9F2: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1508E9F5: mov edx, dword ptr [ebp + 8] */
    /* cmp edi, 4 */ /* 0x1508E9F8: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1508EA48; /* 0x1508E9FB: jb 0x1508ea48 */
L_1508E9FD:
    ebx = edi + (-0x4); /* 0x1508E9FD: lea ebx, [edi - 4] */
    /* test ebx, ebx */ /* 0x1508EA00: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA4C; /* 0x1508EA02: je 0x1508ea4c */
L_1508EA04:
    SET_LO8(eax, MEM8(edx)); /* 0x1508EA04: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1508EA06: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1508EA09: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1508EA0C: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA0F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA78; /* 0x1508EA11: je 0x1508ea78 */
L_1508EA13:
    edi = MEM32(ebp + (-0x4)); /* 0x1508EA13: mov edi, dword ptr [ebp - 4] */
    /* cmp LO8(eax), MEM8(edi) */ /* 0x1508EA16: cmp al, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(ebp + 0x10); /* 0x1508EA18: mov edi, dword ptr [ebp + 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA78; /* 0x1508EA1B: jne 0x1508ea78 */
L_1508EA1D:
    SET_LO8(eax, MEM8(edx + (-0x3))); /* 0x1508EA1D: mov al, byte ptr [edx - 3] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA20: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA72; /* 0x1508EA22: je 0x1508ea72 */
L_1508EA24:
    /* cmp LO8(eax), MEM8(ecx + (-0x3)) */ /* 0x1508EA24: cmp al, byte ptr [ecx - 3] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + (-0x3))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA72; /* 0x1508EA27: jne 0x1508ea72 */
L_1508EA29:
    SET_LO8(eax, MEM8(edx + (-0x2))); /* 0x1508EA29: mov al, byte ptr [edx - 2] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA2C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA6C; /* 0x1508EA2E: je 0x1508ea6c */
L_1508EA30:
    /* cmp LO8(eax), MEM8(ecx + (-0x2)) */ /* 0x1508EA30: cmp al, byte ptr [ecx - 2] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + (-0x2))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA6C; /* 0x1508EA33: jne 0x1508ea6c */
L_1508EA35:
    SET_LO8(eax, MEM8(edx + (-0x1))); /* 0x1508EA35: mov al, byte ptr [edx - 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA38: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA66; /* 0x1508EA3A: je 0x1508ea66 */
L_1508EA3C:
    /* cmp LO8(eax), MEM8(ecx + (-0x1)) */ /* 0x1508EA3C: cmp al, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + (-0x1))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA66; /* 0x1508EA3F: jne 0x1508ea66 */
L_1508EA41:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1508EA41: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, ebx */ /* 0x1508EA44: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508EA04; /* 0x1508EA46: jb 0x1508ea04 */
L_1508EA48:
    /* cmp esi, edi */ /* 0x1508EA48: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508EA5F; /* 0x1508EA4A: jae 0x1508ea5f */
L_1508EA4C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508EA4C: sub edx, ecx */
    _flag_k = FK_CMP;
L_1508EA4E:
    SET_LO8(eax, MEM8(edx + ecx)); /* 0x1508EA4E: mov al, byte ptr [edx + ecx] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EA51: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EA7B; /* 0x1508EA53: je 0x1508ea7b */
L_1508EA55:
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x1508EA55: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EA7B; /* 0x1508EA57: jne 0x1508ea7b */
L_1508EA59:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508EA59: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1508EA5A: inc ecx */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1508EA5B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1508EA4E; /* 0x1508EA5D: jb 0x1508ea4e */
L_1508EA5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EA5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508EA61:
    edi = POP32_VAL(esp); /* 0x1508EA61: pop edi */
    esi = POP32_VAL(esp); /* 0x1508EA62: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508EA63: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508EA64: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EA65: ret  */
L_1508EA66:
    ecx = (uint32_t)MEM8(ecx + (-0x1)); /* 0x1508EA66: movzx ecx, byte ptr [ecx - 1] */
    goto L_1508EA7E; /* 0x1508EA6A: jmp 0x1508ea7e */
L_1508EA6C:
    ecx = (uint32_t)MEM8(ecx + (-0x2)); /* 0x1508EA6C: movzx ecx, byte ptr [ecx - 2] */
    goto L_1508EA7E; /* 0x1508EA70: jmp 0x1508ea7e */
L_1508EA72:
    ecx = (uint32_t)MEM8(ecx + (-0x3)); /* 0x1508EA72: movzx ecx, byte ptr [ecx - 3] */
    goto L_1508EA7E; /* 0x1508EA76: jmp 0x1508ea7e */
L_1508EA78:
    ecx = MEM32(ebp + (-0x4)); /* 0x1508EA78: mov ecx, dword ptr [ebp - 4] */
L_1508EA7B:
    ecx = (uint32_t)MEM8(ecx); /* 0x1508EA7B: movzx ecx, byte ptr [ecx] */
L_1508EA7E:
    eax = (uint32_t)LO8(eax); /* 0x1508EA7E: movzx eax, al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508EA81: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1508EA61; /* 0x1508EA83: jmp 0x1508ea61 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508EA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508EA90u);

L_1508EA90:
    ecx = MEM32(esp + 0xC); /* 0x1508EA90: mov ecx, dword ptr [esp + 0xc] */
    PUSH32(esp, edi); /* 0x1508EA94: push edi */
    /* test ecx, ecx */ /* 0x1508EA95: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EB2F; /* 0x1508EA97: je 0x1508eb2f */
L_1508EA9D:
    PUSH32(esp, esi); /* 0x1508EA9D: push esi */
    PUSH32(esp, ebx); /* 0x1508EA9E: push ebx */
    ebx = ecx; /* 0x1508EA9F: mov ebx, ecx */
    esi = MEM32(esp + 0x14); /* 0x1508EAA1: mov esi, dword ptr [esp + 0x14] */
    /* test esi, 3 */ /* 0x1508EAA5: test esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(esp + 0x10); /* 0x1508EAAB: mov edi, dword ptr [esp + 0x10] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EABC; /* 0x1508EAAF: jne 0x1508eabc */
L_1508EAB1:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508EAB1: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508EAB1: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1508EB3F; /* 0x1508EAB4: jne 0x1508eb3f */
L_1508EABA:
    goto L_1508EAE3; /* 0x1508EABA: jmp 0x1508eae3 */
L_1508EABC:
    SET_LO8(eax, MEM8(esi)); /* 0x1508EABC: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508EABE: add esi, 1 */
    _flag_k = FK_ADD;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508EAC1: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508EAC3: add edi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508EAC6: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508EAF6; /* 0x1508EAC9: je 0x1508eaf6 */
L_1508EACB:
    /* test LO8(eax), LO8(eax) */ /* 0x1508EACB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EAFE; /* 0x1508EACD: je 0x1508eafe */
L_1508EACF:
    /* test esi, 3 */ /* 0x1508EACF: test esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EABC; /* 0x1508EAD5: jne 0x1508eabc */
L_1508EAD7:
    ebx = ecx; /* 0x1508EAD7: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508EAD9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508EAD9: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1508EB3F; /* 0x1508EADC: jne 0x1508eb3f */
L_1508EADE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1508EADE: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EAF6; /* 0x1508EAE1: je 0x1508eaf6 */
L_1508EAE3:
    SET_LO8(eax, MEM8(esi)); /* 0x1508EAE3: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508EAE5: add esi, 1 */
    _flag_k = FK_ADD;
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508EAE8: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508EAEA: add edi, 1 */
    _flag_k = FK_ADD;
    /* test LO8(eax), LO8(eax) */ /* 0x1508EAED: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EB28; /* 0x1508EAEF: je 0x1508eb28 */
L_1508EAF1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1508EAF1: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508EAE3; /* 0x1508EAF4: jne 0x1508eae3 */
L_1508EAF6:
    eax = MEM32(esp + 0x10); /* 0x1508EAF6: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x1508EAFA: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508EAFB: pop esi */
    edi = POP32_VAL(esp); /* 0x1508EAFC: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EAFD: ret  */
L_1508EAFE:
    /* test edi, 3 */ /* 0x1508EAFE: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EB1C; /* 0x1508EB04: je 0x1508eb1c */
L_1508EB06:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508EB06: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508EB08: add edi, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508EB0B: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508EBAC; /* 0x1508EB0E: je 0x1508ebac */
L_1508EB14:
    /* test edi, 3 */ /* 0x1508EB14: test edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EB06; /* 0x1508EB1A: jne 0x1508eb06 */
L_1508EB1C:
    ebx = ecx; /* 0x1508EB1C: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1508EB1E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1508EB1E: shr ecx, 2 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1508EB97; /* 0x1508EB21: jne 0x1508eb97 */
L_1508EB23:
    MEM8(edi) = (uint8_t)(LO8(eax)); /* 0x1508EB23: mov byte ptr [edi], al */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508EB25: add edi, 1 */
    _flag_k = FK_ADD;
L_1508EB28:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1508EB28: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508EB23; /* 0x1508EB2B: jne 0x1508eb23 */
L_1508EB2D:
    ebx = POP32_VAL(esp); /* 0x1508EB2D: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508EB2E: pop esi */
L_1508EB2F:
    eax = MEM32(esp + 0x8); /* 0x1508EB2F: mov eax, dword ptr [esp + 8] */
    edi = POP32_VAL(esp); /* 0x1508EB33: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EB34: ret  */
L_1508EB35:
    MEM32(edi) = edx; /* 0x1508EB35: mov dword ptr [edi], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1508EB37: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508EB3A: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508EADE; /* 0x1508EB3D: je 0x1508eade */
L_1508EB3F:
    edx = 0x7EFEFEFFu; /* 0x1508EB3F: mov edx, 0x7efefeff */
    eax = MEM32(esi); /* 0x1508EB44: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1508EB46: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1508EB48: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ edx)); _flag_b = (uint32_t)((eax ^ edx));
    eax = eax ^ edx; /* 0x1508EB4B: xor eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi); /* 0x1508EB4D: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1508EB4F: add esi, 4 */
    _flag_k = FK_ADD;
    /* test eax, 0x81010100u */ /* 0x1508EB52: test eax, 0x81010100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EB35; /* 0x1508EB57: je 0x1508eb35 */
L_1508EB59:
    /* test LO8(edx), LO8(edx) */ /* 0x1508EB59: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EB89; /* 0x1508EB5B: je 0x1508eb89 */
L_1508EB5D:
    /* test HI8(edx), HI8(edx) */ /* 0x1508EB5D: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EB7F; /* 0x1508EB5F: je 0x1508eb7f */
L_1508EB61:
    /* test edx, 0x00FF0000u */ /* 0x1508EB61: test edx, 0xff0000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00FF0000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EB75; /* 0x1508EB67: je 0x1508eb75 */
L_1508EB69:
    /* test edx, 0xFF000000u */ /* 0x1508EB69: test edx, 0xff000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFF000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EB35; /* 0x1508EB6F: jne 0x1508eb35 */
L_1508EB71:
    MEM32(edi) = edx; /* 0x1508EB71: mov dword ptr [edi], edx */
    goto L_1508EB8D; /* 0x1508EB73: jmp 0x1508eb8d */
L_1508EB75:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFu);
    edx = edx & 0xFFFFu; /* 0x1508EB75: and edx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = edx; /* 0x1508EB7B: mov dword ptr [edi], edx */
    goto L_1508EB8D; /* 0x1508EB7D: jmp 0x1508eb8d */
L_1508EB7F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    edx = edx & 0xFFu; /* 0x1508EB7F: and edx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = edx; /* 0x1508EB85: mov dword ptr [edi], edx */
    goto L_1508EB8D; /* 0x1508EB87: jmp 0x1508eb8d */
L_1508EB89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1508EB89: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = edx; /* 0x1508EB8B: mov dword ptr [edi], edx */
L_1508EB8D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1508EB8D: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EB90: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508EB92: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508EBA3; /* 0x1508EB95: je 0x1508eba3 */
L_1508EB97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EB97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508EB99:
    MEM32(edi) = eax; /* 0x1508EB99: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1508EB9B: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508EB9E: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508EB99; /* 0x1508EBA1: jne 0x1508eb99 */
L_1508EBA3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x1508EBA3: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EB23; /* 0x1508EBA6: jne 0x1508eb23 */
L_1508EBAC:
    eax = MEM32(esp + 0x10); /* 0x1508EBAC: mov eax, dword ptr [esp + 0x10] */
    ebx = POP32_VAL(esp); /* 0x1508EBB0: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508EBB1: pop esi */
    edi = POP32_VAL(esp); /* 0x1508EBB2: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EBB3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508EBC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508EBC0u);

L_1508EBC0:
    edi = edi; /* 0x1508EBC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508EBC2: push ebp */
    ebp = esp; /* 0x1508EBC3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508EBC5: push ecx */
    PUSH32(esp, ecx); /* 0x1508EBC6: push ecx */
    edx = MEM32(ebp + 0x14); /* 0x1508EBC7: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x1508EBCA: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1508EBCD: push ebx */
    PUSH32(esp, esi); /* 0x1508EBCE: push esi */
    PUSH32(esp, edi); /* 0x1508EBCF: push edi */
    /* test edx, edx */ /* 0x1508EBD0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EBFD; /* 0x1508EBD2: jne 0x1508ebfd */
L_1508EBD4:
    /* test ecx, ecx */ /* 0x1508EBD4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EC01; /* 0x1508EBD6: jne 0x1508ec01 */
L_1508EBD8:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1508EBD8: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508EC0E; /* 0x1508EBDB: je 0x1508ec0e */
L_1508EBDD:
    RECOMP_CALL(sub_15036430); /* 0x1508EBDD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508EBE2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508EBE4:
    PUSH32(esp, 0x16u); /* 0x1508EBE4: push 0x16 */
L_1508EBE6:
    esi = POP32_VAL(esp); /* 0x1508EBE6: pop esi */
    PUSH32(esp, ebx); /* 0x1508EBE7: push ebx */
    PUSH32(esp, ebx); /* 0x1508EBE8: push ebx */
    PUSH32(esp, ebx); /* 0x1508EBE9: push ebx */
    PUSH32(esp, ebx); /* 0x1508EBEA: push ebx */
    PUSH32(esp, ebx); /* 0x1508EBEB: push ebx */
    MEM32(eax) = esi; /* 0x1508EBEC: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1508EBEE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1508EBF3: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508EBF5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508EBF8:
    edi = POP32_VAL(esp); /* 0x1508EBF8: pop edi */
    esi = POP32_VAL(esp); /* 0x1508EBF9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508EBFA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508EBFB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EBFC: ret  */
L_1508EBFD:
    /* test ecx, ecx */ /* 0x1508EBFD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EBDD; /* 0x1508EBFF: je 0x1508ebdd */
L_1508EC01:
    ebx = MEM32(ebp + 0xC); /* 0x1508EC01: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508EC04: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EBDD; /* 0x1508EC06: je 0x1508ebdd */
L_1508EC08:
    /* test edx, edx */ /* 0x1508EC08: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EC12; /* 0x1508EC0A: jne 0x1508ec12 */
L_1508EC0C:
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x1508EC0C: mov byte ptr [ecx], dl */
L_1508EC0E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EC0E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508EBF8; /* 0x1508EC10: jmp 0x1508ebf8 */
L_1508EC12:
    esi = MEM32(ebp + 0x10); /* 0x1508EC12: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1508EC15: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EC24; /* 0x1508EC17: jne 0x1508ec24 */
L_1508EC19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508EC19: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1508EC1B: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508EC1D: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508EBE4; /* 0x1508EC22: jmp 0x1508ebe4 */
L_1508EC24:
    edi = ebx; /* 0x1508EC24: mov edi, ebx */
    eax = ecx; /* 0x1508EC26: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508EC28: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508EC2A: mov dword ptr [ebp - 4], eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1508EC2D: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EC4E; /* 0x1508EC30: jne 0x1508ec4e */
L_1508EC32:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1508EC32: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508EC34: mov dword ptr [ebp - 4], eax */
L_1508EC37:
    edx = MEM32(ebp + (-0x4)); /* 0x1508EC37: mov edx, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(esi)); /* 0x1508EC3A: mov al, byte ptr [esi] */
    MEM8(edx + esi) = (uint8_t)(LO8(eax)); /* 0x1508EC3C: mov byte ptr [edx + esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508EC3F: inc esi */
    _flag_k = FK_INC;
    edx = MEM32(ebp + 0x14); /* 0x1508EC40: mov edx, dword ptr [ebp + 0x14] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EC43: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EC0E; /* 0x1508EC45: je 0x1508ec0e */
L_1508EC47:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508EC47: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508EC37; /* 0x1508EC4A: jne 0x1508ec37 */
L_1508EC4C:
    goto L_1508EC89; /* 0x1508EC4C: jmp 0x1508ec89 */
L_1508EC4E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1508EC4E: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_1508EC55; /* 0x1508EC50: jmp 0x1508ec55 */
L_1508EC52:
    eax = MEM32(ebp + (-0x4)); /* 0x1508EC52: mov eax, dword ptr [ebp - 4] */
L_1508EC55:
    ecx = MEM32(ebp + (-0x4)); /* 0x1508EC55: mov ecx, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(esi + eax)); /* 0x1508EC58: mov al, byte ptr [esi + eax] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1508EC5B: mov dword ptr [ebp - 8], edx */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1508EC5E: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1508EC60: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1508EC61: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1508EC64: mov ecx, dword ptr [ebp + 8] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EC67: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EC0E; /* 0x1508EC69: je 0x1508ec0e */
L_1508EC6B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508EC6B: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508EC75; /* 0x1508EC6E: je 0x1508ec75 */
L_1508EC70:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x1508EC70: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508EC52; /* 0x1508EC73: jne 0x1508ec52 */
L_1508EC75:
    eax = MEM32(ebp + (-0x8)); /* 0x1508EC75: mov eax, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x1508EC78: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax + (-0x1); /* 0x1508EC7A: lea edx, [eax - 1] */
    if (TEST_Z(_flag_a, _flag_b)) { edx = eax; } /* 0x1508EC7D: cmove edx, eax */
    /* test edx, edx */ /* 0x1508EC80: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EC89; /* 0x1508EC82: jne 0x1508ec89 */
L_1508EC84:
    eax = MEM32(ebp + (-0x4)); /* 0x1508EC84: mov eax, dword ptr [ebp - 4] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x1508EC87: mov byte ptr [eax], bl */
L_1508EC89:
    /* test edi, edi */ /* 0x1508EC89: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EC0E; /* 0x1508EC8B: jne 0x1508ec0e */
L_1508EC8D:
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1508EC8D: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508ECA1; /* 0x1508EC90: jne 0x1508eca1 */
L_1508EC92:
    eax = MEM32(ebp + 0xC); /* 0x1508EC92: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x50u); /* 0x1508EC95: push 0x50 */
    MEM8(ecx + eax + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1508EC97: mov byte ptr [ecx + eax - 1], bl */
    eax = POP32_VAL(esp); /* 0x1508EC9B: pop eax */
    RECOMP_BACKEDGE();
    goto L_1508EBF8; /* 0x1508EC9C: jmp 0x1508ebf8 */
L_1508ECA1:
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x1508ECA1: mov byte ptr [ecx], bl */
    RECOMP_CALL(sub_15036430); /* 0x1508ECA3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508ECA8: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508EBE6; /* 0x1508ECAA: jmp 0x1508ebe6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508ECC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508ECC0u);

L_1508ECC0:
    edi = edi; /* 0x1508ECC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508ECC2: push ebp */
    ebp = esp; /* 0x1508ECC3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1508ECC5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508ECC8: push esi */
    PUSH32(esp, edi); /* 0x1508ECC9: push edi */
    edi = ecx; /* 0x1508ECCA: mov edi, ecx */
    esi = ecx; /* 0x1508ECCC: mov esi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    edi = edi & 0xFu; /* 0x1508ECCE: and edi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1508ECD1: push 0x10 */
    eax = POP32_VAL(esp); /* 0x1508ECD3: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1508ECD4: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1508ECD6: neg edi */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508ECD8: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1508ECDA: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x1508ECDC: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, edi */ /* 0x1508ECDF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { edi = eax; } /* 0x1508ECE1: cmovb edi, eax */
    edx = edi + ecx; /* 0x1508ECE4: lea edx, [edi + ecx] */
    /* cmp ecx, edx */ /* 0x1508ECE7: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508ECF5; /* 0x1508ECE9: je 0x1508ecf5 */
L_1508ECEB:
    /* cmp MEM8(esi), 0 */ /* 0x1508ECEB: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508ECF5; /* 0x1508ECEE: je 0x1508ecf5 */
L_1508ECF0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508ECF0: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edx */ /* 0x1508ECF1: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508ECEB; /* 0x1508ECF3: jne 0x1508eceb */
L_1508ECF5:
    edx = esi; /* 0x1508ECF5: mov edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508ECF7: sub edx, ecx */
    _flag_k = FK_CMP;
    /* cmp edx, edi */ /* 0x1508ECF9: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508ED41; /* 0x1508ECFB: jne 0x1508ed41 */
L_1508ECFD:
    ecx = eax; /* 0x1508ECFD: mov ecx, eax */
    edx = esi; /* 0x1508ECFF: mov edx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x1508ED01: sub ecx, edi */
    _flag_k = FK_CMP;
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1508ED03: xorps xmm1, xmm1 */
    eax = ecx; /* 0x1508ED06: mov eax, ecx */
    edi = esi; /* 0x1508ED08: mov edi, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1508ED0A: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1508ED0D: sub edi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1508ED0F: add edi, ecx */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x1508ED11: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508ED2B; /* 0x1508ED13: je 0x1508ed2b */
L_1508ED15:
    _xmm[0] = _xmm[1]; /* 0x1508ED15: movaps xmm0, xmm1 */
    { xmm_t _s = xmm_ld(edx); for (int _k = 0; _k < 16; _k++) _xmm[0].u8[_k] = (_xmm[0].u8[_k] == _s.u8[_k]) ? (uint8_t)~0u : 0; } /* 0x1508ED18: pcmpeqb xmm0, xmmword ptr [edx] */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[0].u8[_k] >> 7) << _k; eax = _m; } /* 0x1508ED1C: pmovmskb eax, xmm0 */
    /* test eax, eax */ /* 0x1508ED20: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508ED2B; /* 0x1508ED22: jne 0x1508ed2b */
L_1508ED24:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x1508ED24: add edx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x1508ED27: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508ED15; /* 0x1508ED29: jne 0x1508ed15 */
L_1508ED2B:
    ecx = MEM32(ebp + 0xC); /* 0x1508ED2B: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1508ED2E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1508ED31: add ecx, eax */
    _flag_k = FK_ADD;
    goto L_1508ED3B; /* 0x1508ED33: jmp 0x1508ed3b */
L_1508ED35:
    /* cmp MEM8(edx), 0 */ /* 0x1508ED35: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508ED3F; /* 0x1508ED38: je 0x1508ed3f */
L_1508ED3A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1508ED3A: inc edx */
    _flag_k = FK_INC;
L_1508ED3B:
    /* cmp edx, ecx */ /* 0x1508ED3B: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508ED35; /* 0x1508ED3D: jne 0x1508ed35 */
L_1508ED3F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1508ED3F: sub edx, eax */
    _flag_k = FK_CMP;
L_1508ED41:
    edi = POP32_VAL(esp); /* 0x1508ED41: pop edi */
    eax = edx; /* 0x1508ED42: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x1508ED44: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508ED45: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508ED46: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508ED50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508ED50u);

L_1508ED50:
    PUSH32(esp, ebp); /* 0x1508ED50: push ebp */
    ebp = esp; /* 0x1508ED51: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508ED53: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508ED54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508ED56: push eax */
    PUSH32(esp, eax); /* 0x1508ED57: push eax */
    PUSH32(esp, eax); /* 0x1508ED58: push eax */
    PUSH32(esp, eax); /* 0x1508ED59: push eax */
    PUSH32(esp, eax); /* 0x1508ED5A: push eax */
    PUSH32(esp, eax); /* 0x1508ED5B: push eax */
    PUSH32(esp, eax); /* 0x1508ED5C: push eax */
    PUSH32(esp, eax); /* 0x1508ED5D: push eax */
    edx = MEM32(ebp + 0xC); /* 0x1508ED5E: mov edx, dword ptr [ebp + 0xc] */
    ecx = ecx; /* 0x1508ED61: lea ecx, [ecx] */
L_1508ED64:
    SET_LO8(eax, MEM8(edx)); /* 0x1508ED64: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508ED66: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508ED73; /* 0x1508ED68: je 0x1508ed73 */
L_1508ED6A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1508ED6A: add edx, 1 */
    _flag_k = FK_ADD;
    /* bts MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x1508ED6D: bts dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))) = _flag_a | (1u << _flag_b); /* 0x1508ED6D: bts dword ptr [esp], eax */
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    goto L_1508ED64; /* 0x1508ED71: jmp 0x1508ed64 */
L_1508ED73:
    esi = MEM32(ebp + 0x8); /* 0x1508ED73: mov esi, dword ptr [ebp + 8] */
    edi = edi; /* 0x1508ED76: mov edi, edi */
L_1508ED78:
    SET_LO8(eax, MEM8(esi)); /* 0x1508ED78: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508ED7A: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508ED8A; /* 0x1508ED7C: je 0x1508ed8a */
L_1508ED7E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508ED7E: add esi, 1 */
    _flag_k = FK_ADD;
    /* bt MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x1508ED81: bt dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    if ((!BT_CF(_flag_a, _flag_b))) goto L_1508ED78; /* 0x1508ED85: jae 0x1508ed78 */
L_1508ED87:
    eax = esi + (-0x1); /* 0x1508ED87: lea eax, [esi - 1] */
L_1508ED8A:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508ED8A: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1508ED8D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508ED8E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508ED8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508EDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508EDA0u);

L_1508EDA0:
    PUSH32(esp, ebp); /* 0x1508EDA0: push ebp */
    ebp = esp; /* 0x1508EDA1: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508EDA3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1508EDA4: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EDA7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1508EDA9: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1508EDAC: repne scasb al, byte ptr es:[edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1508EDAE: add ecx, 1 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508EDB1: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508EDB3: sub edi, 1 */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x1508EDB6: mov al, byte ptr [ebp + 0xc] */
    _df = -1; /* 0x1508EDB9: std  */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = LO8(eax); _b = MEM8(edi); edi += _df; ecx--; if (_a == _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1508EDBA: repne scasb al, byte ptr es:[edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508EDBC: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi), LO8(eax) */ /* 0x1508EDBF: cmp byte ptr [edi], al */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508EDC7; /* 0x1508EDC1: je 0x1508edc7 */
L_1508EDC3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EDC3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508EDC9; /* 0x1508EDC5: jmp 0x1508edc9 */
L_1508EDC7:
    eax = edi; /* 0x1508EDC7: mov eax, edi */
L_1508EDC9:
    _df = 1; /* 0x1508EDC9: cld  */
    edi = POP32_VAL(esp); /* 0x1508EDCA: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508EDCB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EDCC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508EDE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508EDE0u);

L_1508EDE0:
    PUSH32(esp, ebp); /* 0x1508EDE0: push ebp */
    ebp = esp; /* 0x1508EDE1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508EDE3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EDE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508EDE6: push eax */
    PUSH32(esp, eax); /* 0x1508EDE7: push eax */
    PUSH32(esp, eax); /* 0x1508EDE8: push eax */
    PUSH32(esp, eax); /* 0x1508EDE9: push eax */
    PUSH32(esp, eax); /* 0x1508EDEA: push eax */
    PUSH32(esp, eax); /* 0x1508EDEB: push eax */
    PUSH32(esp, eax); /* 0x1508EDEC: push eax */
    PUSH32(esp, eax); /* 0x1508EDED: push eax */
    edx = MEM32(ebp + 0xC); /* 0x1508EDEE: mov edx, dword ptr [ebp + 0xc] */
    ecx = ecx; /* 0x1508EDF1: lea ecx, [ecx] */
L_1508EDF4:
    SET_LO8(eax, MEM8(edx)); /* 0x1508EDF4: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508EDF6: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EE03; /* 0x1508EDF8: je 0x1508ee03 */
L_1508EDFA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1508EDFA: add edx, 1 */
    _flag_k = FK_ADD;
    /* bts MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x1508EDFD: bts dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))) = _flag_a | (1u << _flag_b); /* 0x1508EDFD: bts dword ptr [esp], eax */
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    goto L_1508EDF4; /* 0x1508EE01: jmp 0x1508edf4 */
L_1508EE03:
    esi = MEM32(ebp + 0x8); /* 0x1508EE03: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x1508EE06: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx; /* 0x1508EE09: lea ecx, [ecx] */
L_1508EE0C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 1; /* 0x1508EE0C: add ecx, 1 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(esi)); /* 0x1508EE0F: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)((LO8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(eax))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(eax)); /* 0x1508EE11: or al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EE1E; /* 0x1508EE13: je 0x1508ee1e */
L_1508EE15:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508EE15: add esi, 1 */
    _flag_k = FK_ADD;
    /* bt MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x1508EE18: bt dword ptr [esp], eax */
    _flag_a = (uint32_t)(MEM32(((esp) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    _flag_k = FK_BT;
    RECOMP_BACKEDGE();
    if (BT_CF(_flag_a, _flag_b)) goto L_1508EE0C; /* 0x1508EE1C: jb 0x1508ee0c */
L_1508EE1E:
    eax = ecx; /* 0x1508EE1E: mov eax, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x1508EE20: add esp, 0x20 */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1508EE23: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508EE24: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EE25: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508EE30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508EE30u);

    goto L_1508EE30;
L_1508E4D0:
    eax = edx + (-0x1); /* 0x1508E4D0: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1508E4D3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E4D4: ret  */
L_1508E4E6:
    PUSH32(esp, ebx); /* 0x1508E4E6: push ebx */
    ebx = eax; /* 0x1508E4E7: mov ebx, eax */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x1508E4E9: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x1508E4E9: shl eax, 8 */
    edx = MEM32(esp + 0x8); /* 0x1508E4EC: mov edx, dword ptr [esp + 8] */
    /* test edx, 3 */ /* 0x1508E4F0: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E50D; /* 0x1508E4F6: je 0x1508e50d */
L_1508E4F8:
    SET_LO8(ecx, MEM8(edx)); /* 0x1508E4F8: mov cl, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 1; /* 0x1508E4FA: add edx, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x1508E4FD: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E4D0; /* 0x1508E4FF: je 0x1508e4d0 */
L_1508E501:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1508E501: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E556; /* 0x1508E503: je 0x1508e556 */
L_1508E505:
    /* test edx, 3 */ /* 0x1508E505: test edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E4F8; /* 0x1508E50B: jne 0x1508e4f8 */
L_1508E50D:
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x1508E50D: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1508E50F: push edi */
    eax = ebx; /* 0x1508E510: mov eax, ebx */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x1508E512: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x1508E512: shl ebx, 0x10 */
    PUSH32(esp, esi); /* 0x1508E515: push esi */
    _flag_a = (uint32_t)((ebx | eax)); _flag_b = (uint32_t)((ebx | eax));
    ebx = ebx | eax; /* 0x1508E516: or ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508E518:
    ecx = MEM32(edx); /* 0x1508E518: mov ecx, dword ptr [edx] */
    edi = 0x7EFEFEFFu; /* 0x1508E51A: mov edi, 0x7efefeff */
    eax = ecx; /* 0x1508E51F: mov eax, ecx */
    esi = edi; /* 0x1508E521: mov esi, edi */
    _flag_a = (uint32_t)((ecx ^ ebx)); _flag_b = (uint32_t)((ecx ^ ebx));
    ecx = ecx ^ ebx; /* 0x1508E523: xor ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1508E525: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1508E527: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx ^ 0xFFFFFFFFu));
    ecx = ecx ^ 0xFFFFFFFFu; /* 0x1508E529: xor ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax ^ 0xFFFFFFFFu));
    eax = eax ^ 0xFFFFFFFFu; /* 0x1508E52C: xor eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx ^ edi)); _flag_b = (uint32_t)((ecx ^ edi));
    ecx = ecx ^ edi; /* 0x1508E52F: xor ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax ^ esi)); _flag_b = (uint32_t)((eax ^ esi));
    eax = eax ^ esi; /* 0x1508E531: xor eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1508E533: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x81010100u);
    ecx = ecx & 0x81010100u; /* 0x1508E536: and ecx, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E55A; /* 0x1508E53C: jne 0x1508e55a */
L_1508E53E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81010100u);
    eax = eax & 0x81010100u; /* 0x1508E53E: and eax, 0x81010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E518; /* 0x1508E543: je 0x1508e518 */
L_1508E545:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01010100u);
    eax = eax & 0x01010100u; /* 0x1508E545: and eax, 0x1010100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E54A: jne 0x1508e554 */
L_1508E54C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80000000u);
    esi = esi & 0x80000000u; /* 0x1508E54C: and esi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508E518; /* 0x1508E552: jne 0x1508e518 */
L_1508E554:
    esi = POP32_VAL(esp); /* 0x1508E554: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E555: pop edi */
L_1508E556:
    ebx = POP32_VAL(esp); /* 0x1508E556: pop ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508E557: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E559: ret  */
L_1508E55A:
    eax = MEM32(edx + (-0x4)); /* 0x1508E55A: mov eax, dword ptr [edx - 4] */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1508E55D: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E597; /* 0x1508E55F: je 0x1508e597 */
L_1508E561:
    /* test LO8(eax), LO8(eax) */ /* 0x1508E561: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E563: je 0x1508e554 */
L_1508E565:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1508E565: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E590; /* 0x1508E567: je 0x1508e590 */
L_1508E569:
    /* test HI8(eax), HI8(eax) */ /* 0x1508E569: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E56B: je 0x1508e554 */
L_1508E56D:
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x1508E56D: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x1508E56D: shr eax, 0x10 */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1508E570: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E589; /* 0x1508E572: je 0x1508e589 */
L_1508E574:
    /* test LO8(eax), LO8(eax) */ /* 0x1508E574: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E576: je 0x1508e554 */
L_1508E578:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1508E578: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508E582; /* 0x1508E57A: je 0x1508e582 */
L_1508E57C:
    /* test HI8(eax), HI8(eax) */ /* 0x1508E57C: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508E554; /* 0x1508E57E: je 0x1508e554 */
L_1508E580:
    RECOMP_BACKEDGE();
    goto L_1508E518; /* 0x1508E580: jmp 0x1508e518 */
L_1508E582:
    esi = POP32_VAL(esp); /* 0x1508E582: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E583: pop edi */
    eax = edx + (-0x1); /* 0x1508E584: lea eax, [edx - 1] */
    ebx = POP32_VAL(esp); /* 0x1508E587: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E588: ret  */
L_1508E589:
    eax = edx + (-0x2); /* 0x1508E589: lea eax, [edx - 2] */
    esi = POP32_VAL(esp); /* 0x1508E58C: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E58D: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508E58E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E58F: ret  */
L_1508E590:
    eax = edx + (-0x3); /* 0x1508E590: lea eax, [edx - 3] */
    esi = POP32_VAL(esp); /* 0x1508E593: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E594: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508E595: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E596: ret  */
L_1508E597:
    eax = edx + (-0x4); /* 0x1508E597: lea eax, [edx - 4] */
    esi = POP32_VAL(esp); /* 0x1508E59A: pop esi */
    edi = POP32_VAL(esp); /* 0x1508E59B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1508E59C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508E59D: ret  */
L_1508EE30:
    ecx = MEM32(esp + 0x8); /* 0x1508EE30: mov ecx, dword ptr [esp + 8] */
    PUSH32(esp, edi); /* 0x1508EE34: push edi */
    PUSH32(esp, ebx); /* 0x1508EE35: push ebx */
    PUSH32(esp, esi); /* 0x1508EE36: push esi */
    SET_LO8(edx, MEM8(ecx)); /* 0x1508EE37: mov dl, byte ptr [ecx] */
    edi = MEM32(esp + 0x10); /* 0x1508EE39: mov edi, dword ptr [esp + 0x10] */
    /* test LO8(edx), LO8(edx) */ /* 0x1508EE3D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EEB0; /* 0x1508EE3F: je 0x1508eeb0 */
L_1508EE41:
    SET_HI8(edx, MEM8(ecx + 0x1)); /* 0x1508EE41: mov dh, byte ptr [ecx + 1] */
    /* test HI8(edx), HI8(edx) */ /* 0x1508EE44: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EE9D; /* 0x1508EE46: je 0x1508ee9d */
L_1508EE48:
    esi = edi; /* 0x1508EE48: mov esi, edi */
    ecx = MEM32(esp + 0x14); /* 0x1508EE4A: mov ecx, dword ptr [esp + 0x14] */
    SET_LO8(eax, MEM8(edi)); /* 0x1508EE4E: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508EE50: add esi, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), LO8(edx) */ /* 0x1508EE53: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508EE6E; /* 0x1508EE55: je 0x1508ee6e */
L_1508EE57:
    /* test LO8(eax), LO8(eax) */ /* 0x1508EE57: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EE68; /* 0x1508EE59: je 0x1508ee68 */
L_1508EE5B:
    SET_LO8(eax, MEM8(esi)); /* 0x1508EE5B: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508EE5D: add esi, 1 */
    _flag_k = FK_ADD;
L_1508EE60:
    /* cmp LO8(eax), LO8(edx) */ /* 0x1508EE60: cmp al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508EE6E; /* 0x1508EE62: je 0x1508ee6e */
L_1508EE64:
    /* test LO8(eax), LO8(eax) */ /* 0x1508EE64: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EE5B; /* 0x1508EE66: jne 0x1508ee5b */
L_1508EE68:
    esi = POP32_VAL(esp); /* 0x1508EE68: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508EE69: pop ebx */
    edi = POP32_VAL(esp); /* 0x1508EE6A: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EE6B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EE6D: ret  */
L_1508EE6E:
    SET_LO8(eax, MEM8(esi)); /* 0x1508EE6E: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508EE70: add esi, 1 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), HI8(edx) */ /* 0x1508EE73: cmp al, dh */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EE60; /* 0x1508EE75: jne 0x1508ee60 */
L_1508EE77:
    edi = esi + (-0x1); /* 0x1508EE77: lea edi, [esi - 1] */
L_1508EE7A:
    SET_HI8(eax, MEM8(ecx + 0x2)); /* 0x1508EE7A: mov ah, byte ptr [ecx + 2] */
    /* test HI8(eax), HI8(eax) */ /* 0x1508EE7D: test ah, ah */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EEA9; /* 0x1508EE7F: je 0x1508eea9 */
L_1508EE81:
    SET_LO8(eax, MEM8(esi)); /* 0x1508EE81: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508EE83: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), HI8(eax) */ /* 0x1508EE86: cmp al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EE48; /* 0x1508EE88: jne 0x1508ee48 */
L_1508EE8A:
    SET_LO8(eax, MEM8(ecx + 0x3)); /* 0x1508EE8A: mov al, byte ptr [ecx + 3] */
    /* test LO8(eax), LO8(eax) */ /* 0x1508EE8D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EEA9; /* 0x1508EE8F: je 0x1508eea9 */
L_1508EE91:
    SET_HI8(eax, MEM8(esi + (-0x1))); /* 0x1508EE91: mov ah, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508EE94: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO8(eax), HI8(eax) */ /* 0x1508EE97: cmp al, ah */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508EE7A; /* 0x1508EE99: je 0x1508ee7a */
L_1508EE9B:
    RECOMP_BACKEDGE();
    goto L_1508EE48; /* 0x1508EE9B: jmp 0x1508ee48 */
L_1508EE9D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EE9D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1508EE9F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508EEA0: pop ebx */
    edi = POP32_VAL(esp); /* 0x1508EEA1: pop edi */
    SET_LO8(eax, LO8(edx)); /* 0x1508EEA2: mov al, dl */
    RECOMP_BACKEDGE();
    goto L_1508E4E6; /* 0x1508EEA4: jmp 0x1508e4e6 */
L_1508EEA9:
    eax = edi + (-0x1); /* 0x1508EEA9: lea eax, [edi - 1] */
    esi = POP32_VAL(esp); /* 0x1508EEAC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508EEAD: pop ebx */
    edi = POP32_VAL(esp); /* 0x1508EEAE: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EEAF: ret  */
L_1508EEB0:
    eax = edi; /* 0x1508EEB0: mov eax, edi */
    esi = POP32_VAL(esp); /* 0x1508EEB2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508EEB3: pop ebx */
    edi = POP32_VAL(esp); /* 0x1508EEB4: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EEB5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508EEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508EEC0u);

L_1508EEC0:
    edi = edi; /* 0x1508EEC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508EEC2: push ebp */
    ebp = esp; /* 0x1508EEC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1508EEC5: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1508EEC8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1508EECD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508EECF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x1508EED2: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1508EED3: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1508EED6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508EED7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1508EEDA: push edi */
    RECOMP_CALL(sub_15068820); /* 0x1508EEDB: call 0x15068820 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1508EEE0: mov edx, eax */
    edi = ebp + (-0x24); /* 0x1508EEE2: lea edi, [ebp - 0x24] */
    PUSH32(esp, 8); /* 0x1508EEE5: push 8 */
    ecx = POP32_VAL(esp); /* 0x1508EEE7: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EEE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = edx; /* 0x1508EEEA: mov dword ptr [ebp - 0x28], edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1508EEED: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    goto L_1508EEFB; /* 0x1508EEEF: jmp 0x1508eefb */
L_1508EEF1:
    eax = (uint32_t)LO8(ecx); /* 0x1508EEF1: movzx eax, cl */
    ecx = ebp + (-0x24); /* 0x1508EEF4: lea ecx, [ebp - 0x24] */
    /* bts MEM32(((ecx) + (uint32_t)(((int32_t)(eax) >> 5) * 4))), ((eax) & 31) */ /* 0x1508EEF7: bts dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(((ecx) + (uint32_t)(((int32_t)(eax) >> 5) * 4)))); _flag_b = (uint32_t)(((eax) & 31));
    MEM32(((ecx) + (uint32_t)(((int32_t)(eax) >> 5) * 4))) = _flag_a | (1u << _flag_b); /* 0x1508EEF7: bts dword ptr [ecx], eax */
    _flag_k = FK_BT;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1508EEFA: inc ebx */
    _flag_k = FK_INC;
L_1508EEFB:
    SET_LO8(ecx, MEM8(ebx)); /* 0x1508EEFB: mov cl, byte ptr [ebx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1508EEFD: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EEF1; /* 0x1508EEFF: jne 0x1508eef1 */
L_1508EF01:
    /* test esi, esi */ /* 0x1508EF01: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EF08; /* 0x1508EF03: jne 0x1508ef08 */
L_1508EF05:
    esi = MEM32(edx + 0x18); /* 0x1508EF05: mov esi, dword ptr [edx + 0x18] */
L_1508EF08:
    SET_LO8(edx, MEM8(esi)); /* 0x1508EF08: mov dl, byte ptr [esi] */
    /* test LO8(edx), LO8(edx) */ /* 0x1508EF0A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EF2E; /* 0x1508EF0C: je 0x1508ef2e */
L_1508EF0E:
    SET_LO8(ecx, LO8(edx)); /* 0x1508EF0E: mov cl, dl */
L_1508EF10:
    eax = (uint32_t)LO8(ecx); /* 0x1508EF10: movzx eax, cl */
    SET_LO8(edx, LO8(ecx)); /* 0x1508EF13: mov dl, cl */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1508EF15: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1508EF15: shr eax, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(ecx, LO8(ecx) & 7); /* 0x1508EF18: and cl, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(ebp + eax + (-0x24))); /* 0x1508EF1B: mov al, byte ptr [ebp + eax - 0x24] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1508EF1F: shr al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> ((LO8(ecx)) & 31)); /* 0x1508EF1F: shr al, cl */
    /* test LO8(eax), 1 */ /* 0x1508EF21: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EF2E; /* 0x1508EF23: je 0x1508ef2e */
L_1508EF25:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508EF25: inc esi */
    _flag_k = FK_INC;
    SET_LO8(edx, MEM8(esi)); /* 0x1508EF26: mov dl, byte ptr [esi] */
    SET_LO8(ecx, LO8(edx)); /* 0x1508EF28: mov cl, dl */
    /* test LO8(edx), LO8(edx) */ /* 0x1508EF2A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EF10; /* 0x1508EF2C: jne 0x1508ef10 */
L_1508EF2E:
    edi = esi; /* 0x1508EF2E: mov edi, esi */
    goto L_1508EF4A; /* 0x1508EF30: jmp 0x1508ef4a */
L_1508EF32:
    eax = (uint32_t)LO8(edx); /* 0x1508EF32: movzx eax, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(edx, LO8(edx) & 7); /* 0x1508EF35: and dl, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1508EF38: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1508EF38: shr eax, 3 */
    SET_LO8(ecx, LO8(edx)); /* 0x1508EF3B: mov cl, dl */
    SET_LO8(eax, MEM8(ebp + eax + (-0x24))); /* 0x1508EF3D: mov al, byte ptr [ebp + eax - 0x24] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(eax)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x1508EF41: shr al, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(eax) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(eax, LO8(eax) >> ((LO8(ecx)) & 31)); /* 0x1508EF41: shr al, cl */
    /* test LO8(eax), 1 */ /* 0x1508EF43: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EF50; /* 0x1508EF45: jne 0x1508ef50 */
L_1508EF47:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508EF47: inc esi */
    _flag_k = FK_INC;
    SET_LO8(edx, MEM8(esi)); /* 0x1508EF48: mov dl, byte ptr [esi] */
L_1508EF4A:
    /* test LO8(edx), LO8(edx) */ /* 0x1508EF4A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EF32; /* 0x1508EF4C: jne 0x1508ef32 */
L_1508EF4E:
    goto L_1508EF54; /* 0x1508EF4E: jmp 0x1508ef54 */
L_1508EF50:
    MEM8(esi) = (uint8_t)(0); /* 0x1508EF50: mov byte ptr [esi], 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508EF53: inc esi */
    _flag_k = FK_INC;
L_1508EF54:
    eax = MEM32(ebp + (-0x28)); /* 0x1508EF54: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1508EF57: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x18) = esi; /* 0x1508EF5A: mov dword ptr [eax + 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EF5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x1508EF5F: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { edi = eax; } /* 0x1508EF61: cmove edi, eax */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1508EF64: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1508EF66: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1508EF68: pop edi */
    esi = POP32_VAL(esp); /* 0x1508EF69: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508EF6A: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1508EF6B: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508EF70: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EF71: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508EF80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508EF80u);

L_1508EF80:
    edi = edi; /* 0x1508EF80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508EF82: push ebp */
    ebp = esp; /* 0x1508EF83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1508EF85: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1508EF88: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1508EF8D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508EF8F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1508EF92: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1508EF95: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508EF96: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1508EF99: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1508EF9A: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1508EF9D: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x28)) = edi; /* 0x1508EFA0: mov dword ptr [ebp - 0x28], edi */
    /* test edi, edi */ /* 0x1508EFA3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EFC5; /* 0x1508EFA5: jne 0x1508efc5 */
L_1508EFA7:
    RECOMP_CALL(sub_15036430); /* 0x1508EFA7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1508EFAC: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EFB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1508EFB4: push eax */
    PUSH32(esp, eax); /* 0x1508EFB5: push eax */
    PUSH32(esp, eax); /* 0x1508EFB6: push eax */
    PUSH32(esp, eax); /* 0x1508EFB7: push eax */
    PUSH32(esp, eax); /* 0x1508EFB8: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1508EFB9: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508EFBE: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EFC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508EFEF; /* 0x1508EFC3: jmp 0x1508efef */
L_1508EFC5:
    /* test eax, eax */ /* 0x1508EFC5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508EFA7; /* 0x1508EFC7: je 0x1508efa7 */
L_1508EFC9:
    PUSH32(esp, ebx); /* 0x1508EFC9: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1508EFCA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1508EFCC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508EFFD; /* 0x1508EFCE: jne 0x1508effd */
L_1508EFD0:
    /* cmp MEM32(edi), ebx */ /* 0x1508EFD0: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508EFFD; /* 0x1508EFD2: jne 0x1508effd */
L_1508EFD4:
    RECOMP_CALL(sub_15036430); /* 0x1508EFD4: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1508EFD9: push ebx */
    PUSH32(esp, ebx); /* 0x1508EFDA: push ebx */
    PUSH32(esp, ebx); /* 0x1508EFDB: push ebx */
    PUSH32(esp, ebx); /* 0x1508EFDC: push ebx */
    PUSH32(esp, ebx); /* 0x1508EFDD: push ebx */
    MEM32(eax) = 0x16u; /* 0x1508EFDE: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508EFE4: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508EFE9: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508EFEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508EFEE:
    ebx = POP32_VAL(esp); /* 0x1508EFEE: pop ebx */
L_1508EFEF:
    ecx = MEM32(ebp + (-0x4)); /* 0x1508EFEF: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1508EFF2: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1508EFF3: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1508EFF5: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x1508EFF6: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508EFFB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508EFFC: ret  */
L_1508EFFD:
    eax = ebx; /* 0x1508EFFD: mov eax, ebx */
    /* cmp eax, 0x20u */ /* 0x1508EFFF: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1508F002:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1508F0B2; /* 0x1508F002: jae 0x1508f0b2 */
L_1508F008:
    MEM8(ebp + eax + (-0x24)) = (uint8_t)(LO8(ebx)); /* 0x1508F008: mov byte ptr [ebp + eax - 0x24], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508F00C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x20u */ /* 0x1508F00D: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1508F002; /* 0x1508F010: jl 0x1508f002 */
L_1508F012:
    edi = MEM32(ebp + (-0x2C)); /* 0x1508F012: mov edi, dword ptr [ebp - 0x2c] */
L_1508F015:
    SET_LO8(ebx, MEM8(edi)); /* 0x1508F015: mov bl, byte ptr [edi] */
    edx = (uint32_t)LO8(ebx); /* 0x1508F017: movzx edx, bl */
    ecx = edx; /* 0x1508F01A: mov ecx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    edx = edx & 7; /* 0x1508F01C: and edx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x1508F01F: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x1508F01F: shr ecx, 3 */
    eax = (uint32_t)MEM8(ebp + ecx + (-0x24)); /* 0x1508F022: movzx eax, byte ptr [ebp + ecx - 0x24] */
    /* bts eax, ((edx) & 31) */ /* 0x1508F027: bts eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(((edx) & 31));
    eax = _flag_a | (1u << _flag_b); /* 0x1508F027: bts eax, edx */
    _flag_k = FK_BT;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1508F02A: inc edi */
    _flag_k = FK_INC;
    MEM8(ebp + ecx + (-0x24)) = (uint8_t)(LO8(eax)); /* 0x1508F02B: mov byte ptr [ebp + ecx - 0x24], al */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1508F02F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F015; /* 0x1508F031: jne 0x1508f015 */
L_1508F033:
    edi = MEM32(ebp + (-0x28)); /* 0x1508F033: mov edi, dword ptr [ebp - 0x28] */
    /* test esi, esi */ /* 0x1508F036: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F03C; /* 0x1508F038: jne 0x1508f03c */
L_1508F03A:
    esi = MEM32(edi); /* 0x1508F03A: mov esi, dword ptr [edi] */
L_1508F03C:
    SET_LO8(ebx, MEM8(esi)); /* 0x1508F03C: mov bl, byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F03E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = (uint32_t)LO8(ebx); /* 0x1508F040: movzx edx, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508F043: inc eax */
    _flag_k = FK_INC;
    ecx = edx; /* 0x1508F044: mov ecx, edx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x1508F046: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x1508F046: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1508F049: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1508F04C: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1508F04C: shl eax, cl */
    /* test MEM8(ebp + edx + (-0x24)), LO8(eax) */ /* 0x1508F04E: test byte ptr [ebp + edx - 0x24], al */
    _flag_a = (uint32_t)(MEM8(ebp + edx + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F077; /* 0x1508F052: je 0x1508f077 */
L_1508F054:
    SET_HI8(ebx, LO8(ebx)); /* 0x1508F054: mov bh, bl */
L_1508F056:
    SET_LO8(ebx, HI8(ebx)); /* 0x1508F056: mov bl, bh */
    /* test HI8(ebx), HI8(ebx) */ /* 0x1508F058: test bh, bh */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F077; /* 0x1508F05A: je 0x1508f077 */
L_1508F05C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508F05C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F05D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508F05F: inc eax */
    _flag_k = FK_INC;
    SET_LO8(ebx, MEM8(esi)); /* 0x1508F060: mov bl, byte ptr [esi] */
    edx = (uint32_t)LO8(ebx); /* 0x1508F062: movzx edx, bl */
    SET_HI8(ebx, LO8(ebx)); /* 0x1508F065: mov bh, bl */
    ecx = edx; /* 0x1508F067: mov ecx, edx */
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x1508F069: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x1508F069: shr edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1508F06C: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1508F06F: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1508F06F: shl eax, cl */
    /* test MEM8(ebp + edx + (-0x24)), LO8(eax) */ /* 0x1508F071: test byte ptr [ebp + edx - 0x24], al */
    _flag_a = (uint32_t)(MEM8(ebp + edx + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F056; /* 0x1508F075: jne 0x1508f056 */
L_1508F077:
    edi = esi; /* 0x1508F077: mov edi, esi */
    goto L_1508F094; /* 0x1508F079: jmp 0x1508f094 */
L_1508F07B:
    edx = (uint32_t)LO8(ebx); /* 0x1508F07B: movzx edx, bl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F07E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x1508F080: mov ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508F082: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x1508F083: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x1508F086: shr edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 3u; /* 0x1508F086: shr edx, 3 */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x1508F089: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x1508F089: shl eax, cl */
    /* test MEM8(ebp + edx + (-0x24)), LO8(eax) */ /* 0x1508F08B: test byte ptr [ebp + edx - 0x24], al */
    _flag_a = (uint32_t)(MEM8(ebp + edx + (-0x24))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F09A; /* 0x1508F08F: jne 0x1508f09a */
L_1508F091:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508F091: inc esi */
    _flag_k = FK_INC;
    SET_LO8(ebx, MEM8(esi)); /* 0x1508F092: mov bl, byte ptr [esi] */
L_1508F094:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1508F094: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F07B; /* 0x1508F096: jne 0x1508f07b */
L_1508F098:
    goto L_1508F09F; /* 0x1508F098: jmp 0x1508f09f */
L_1508F09A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F09A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1508F09C: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1508F09E: inc esi */
    _flag_k = FK_INC;
L_1508F09F:
    eax = MEM32(ebp + (-0x28)); /* 0x1508F09F: mov eax, dword ptr [ebp - 0x28] */
    MEM32(eax) = esi; /* 0x1508F0A2: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F0A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x1508F0A6: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { edi = eax; } /* 0x1508F0A8: cmove edi, eax */
    eax = edi; /* 0x1508F0AB: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_1508EFEE; /* 0x1508F0AD: jmp 0x1508efee */
L_1508F0B2:
    RECOMP_CALL(sub_150602E7); /* 0x1508F0B2: call 0x150602e7 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1508F0B7u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508F0C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F0C0u);

L_1508F0C0:
    edi = edi; /* 0x1508F0C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F0C2: push ebp */
    ebp = esp; /* 0x1508F0C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508F0C5: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F0C6: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x1508F0C9: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508F0CC: push esi */
    RECOMP_CALL(sub_1508F320); /* 0x1508F0CD: call 0x1508f320 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508F0D2: pop ecx */
    ecx = esi + eax * 2; /* 0x1508F0D3: lea ecx, [esi + eax*2] */
    PUSH32(esp, ecx); /* 0x1508F0D6: push ecx */
    RECOMP_CALL(sub_1508F0F0); /* 0x1508F0D7: call 0x1508f0f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508F0DC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508F0DD: pop ecx */
    eax = esi; /* 0x1508F0DE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508F0E0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F0E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F0E2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F0F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F0F0u);

L_1508F0F0:
    edi = edi; /* 0x1508F0F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F0F2: push ebp */
    ebp = esp; /* 0x1508F0F3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F0F5: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1508F320); /* 0x1508F0F8: call 0x1508f320 */
    RECOMP_FLAGS_IN();
    eax = eax * 2 + 0x2; /* 0x1508F0FD: lea eax, [eax*2 + 2] */
    PUSH32(esp, eax); /* 0x1508F104: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F105: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508F108: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508DBF0); /* 0x1508F10B: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1508F110: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1508F113: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1508F116: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F117: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F120u);

L_1508F120:
    edi = edi; /* 0x1508F120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F122: push ebp */
    ebp = esp; /* 0x1508F123: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1508F125: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1508F128: push ebx */
    PUSH32(esp, esi); /* 0x1508F129: push esi */
    PUSH32(esp, edi); /* 0x1508F12A: push edi */
    /* test edx, edx */ /* 0x1508F12B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F142; /* 0x1508F12D: je 0x1508f142 */
L_1508F12F:
    ecx = MEM32(ebp + 0xC); /* 0x1508F12F: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1508F132: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F142; /* 0x1508F134: je 0x1508f142 */
L_1508F136:
    ebx = MEM32(ebp + 0x10); /* 0x1508F136: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1508F139: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F162; /* 0x1508F13B: jne 0x1508f162 */
L_1508F13D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F13D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1508F13F: mov word ptr [edx], ax */
L_1508F142:
    RECOMP_CALL(sub_15036430); /* 0x1508F142: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F147: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F149:
    PUSH32(esp, 0x16u); /* 0x1508F149: push 0x16 */
L_1508F14B:
    edi = POP32_VAL(esp); /* 0x1508F14B: pop edi */
    PUSH32(esp, esi); /* 0x1508F14C: push esi */
    PUSH32(esp, esi); /* 0x1508F14D: push esi */
    PUSH32(esp, esi); /* 0x1508F14E: push esi */
    PUSH32(esp, esi); /* 0x1508F14F: push esi */
    PUSH32(esp, esi); /* 0x1508F150: push esi */
    MEM32(eax) = edi; /* 0x1508F151: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1508F153: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508F158: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1508F15B: mov eax, edi */
L_1508F15D:
    edi = POP32_VAL(esp); /* 0x1508F15D: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F15E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508F15F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508F160: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F161: ret  */
L_1508F162:
    edi = edx; /* 0x1508F162: mov edi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F164: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F166:
    /* cmp MEM16(edi), LO16(esi) */ /* 0x1508F166: cmp word ptr [edi], si */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F17F; /* 0x1508F169: je 0x1508f17f */
L_1508F16B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1508F16B: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508F16E: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F166; /* 0x1508F171: jne 0x1508f166 */
L_1508F173:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F173: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1508F175: mov word ptr [edx], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508F178: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508F149; /* 0x1508F17D: jmp 0x1508f149 */
L_1508F17F:
    eax = (uint32_t)MEM16(ebx); /* 0x1508F17F: movzx eax, word ptr [ebx] */
    ebx = ebx + 0x2; /* 0x1508F182: lea ebx, [ebx + 2] */
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1508F185: mov word ptr [edi], ax */
    edi = edi + 0x2; /* 0x1508F188: lea edi, [edi + 2] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F18B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F1A3; /* 0x1508F18E: je 0x1508f1a3 */
L_1508F190:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508F190: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F17F; /* 0x1508F193: jne 0x1508f17f */
L_1508F195:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F195: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1508F197: mov word ptr [edx], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508F19A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508F19F: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508F14B; /* 0x1508F1A1: jmp 0x1508f14b */
L_1508F1A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F1A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508F15D; /* 0x1508F1A5: jmp 0x1508f15d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508F1B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F1B0u);

L_1508F1B0:
    edi = edi; /* 0x1508F1B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F1B2: push ebp */
    ebp = esp; /* 0x1508F1B3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1508F1B5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508F1B8: push esi */
    eax = (uint32_t)MEM16(ecx); /* 0x1508F1B9: movzx eax, word ptr [ecx] */
    esi = eax; /* 0x1508F1BC: mov esi, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F1BE: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F1DD; /* 0x1508F1C1: je 0x1508f1dd */
L_1508F1C3:
    edx = eax; /* 0x1508F1C3: mov edx, eax */
L_1508F1C5:
    esi = (uint32_t)LO16(edx); /* 0x1508F1C5: movzx esi, dx */
    /* cmp LO16(edx), MEM16(ebp + 0xC) */ /* 0x1508F1C8: cmp dx, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F1DD; /* 0x1508F1CC: je 0x1508f1dd */
L_1508F1CE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508F1CE: add ecx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ecx); /* 0x1508F1D1: movzx eax, word ptr [ecx] */
    edx = eax; /* 0x1508F1D4: mov edx, eax */
    esi = eax; /* 0x1508F1D6: mov esi, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F1D8: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F1C5; /* 0x1508F1DB: jne 0x1508f1c5 */
L_1508F1DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F1DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(esi), MEM16(ebp + 0xC) */ /* 0x1508F1DF: cmp si, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ebp + 0xC)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = POP32_VAL(esp); /* 0x1508F1E3: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) { ecx = eax; } /* 0x1508F1E4: cmovne ecx, eax */
    eax = ecx; /* 0x1508F1E7: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x1508F1E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F1EA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F200u);

L_1508F200:
    edi = edi; /* 0x1508F200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F202: push ebp */
    ebp = esp; /* 0x1508F203: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508F205: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1508F206: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1508F209: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1508F20A: mov edi, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(esi); /* 0x1508F20D: movzx ecx, word ptr [esi] */
    edx = (uint32_t)MEM16(edi); /* 0x1508F210: movzx edx, word ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508F213: sub edx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F230; /* 0x1508F215: jne 0x1508f230 */
L_1508F217:
    eax = ecx; /* 0x1508F217: mov eax, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x1508F219: sub edi, esi */
    _flag_k = FK_CMP;
L_1508F21B:
    /* test LO16(eax), LO16(eax) */ /* 0x1508F21B: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F230; /* 0x1508F21E: je 0x1508f230 */
L_1508F220:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508F220: add esi, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(esi); /* 0x1508F223: movzx ecx, word ptr [esi] */
    edx = (uint32_t)MEM16(edi + esi); /* 0x1508F226: movzx edx, word ptr [edi + esi] */
    eax = ecx; /* 0x1508F22A: mov eax, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508F22C: sub edx, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508F21B; /* 0x1508F22E: je 0x1508f21b */
L_1508F230:
    eax = edx; /* 0x1508F230: mov eax, edx */
    if (31u) _cf = (((edx) >> 30) & 1u); /* 0x1508F232: shr edx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((edx >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 31u; /* 0x1508F232: shr edx, 0x1f */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1508F235: neg eax */
    _flag_k = FK_CMP;
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x1508F237: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x1508F237: shr eax, 0x1f */
    edi = POP32_VAL(esp); /* 0x1508F23A: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1508F23B: sub eax, edx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508F23D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F23E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F23F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F250u);

L_1508F250:
    edi = edi; /* 0x1508F250: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F252: push ebp */
    ebp = esp; /* 0x1508F253: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508F255: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508F256: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1508F259: push edi */
    /* test esi, esi */ /* 0x1508F25A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F271; /* 0x1508F25C: je 0x1508f271 */
L_1508F25E:
    edx = MEM32(ebp + 0xC); /* 0x1508F25E: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1508F261: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F271; /* 0x1508F263: je 0x1508f271 */
L_1508F265:
    ecx = MEM32(ebp + 0x10); /* 0x1508F265: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1508F268: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F290; /* 0x1508F26A: jne 0x1508f290 */
L_1508F26C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F26C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1508F26E: mov word ptr [esi], ax */
L_1508F271:
    RECOMP_CALL(sub_15036430); /* 0x1508F271: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1508F276: push 0x16 */
L_1508F278:
    esi = POP32_VAL(esp); /* 0x1508F278: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508F279: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x1508F27B: mov dword ptr [eax], esi */
    PUSH32(esp, ecx); /* 0x1508F27D: push ecx */
    PUSH32(esp, ecx); /* 0x1508F27E: push ecx */
    PUSH32(esp, ecx); /* 0x1508F27F: push ecx */
    PUSH32(esp, ecx); /* 0x1508F280: push ecx */
    PUSH32(esp, ecx); /* 0x1508F281: push ecx */
    RECOMP_CALL(sub_1505A110); /* 0x1508F282: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1508F287: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508F289: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508F28C:
    edi = POP32_VAL(esp); /* 0x1508F28C: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F28D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F28E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F28F: ret  */
L_1508F290:
    edi = esi; /* 0x1508F290: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1508F292: sub edi, ecx */
    _flag_k = FK_CMP;
L_1508F294:
    eax = (uint32_t)MEM16(ecx); /* 0x1508F294: movzx eax, word ptr [ecx] */
    MEM16(edi + ecx) = (uint16_t)(LO16(eax)); /* 0x1508F297: mov word ptr [edi + ecx], ax */
    ecx = ecx + 0x2; /* 0x1508F29B: lea ecx, [ecx + 2] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F29E: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F2BA; /* 0x1508F2A1: je 0x1508f2ba */
L_1508F2A3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x1508F2A3: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F294; /* 0x1508F2A6: jne 0x1508f294 */
L_1508F2A8:
    /* test edx, edx */ /* 0x1508F2A8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F2BA; /* 0x1508F2AA: jne 0x1508f2ba */
L_1508F2AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F2AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1508F2AE: mov word ptr [esi], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508F2B1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508F2B6: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508F278; /* 0x1508F2B8: jmp 0x1508f278 */
L_1508F2BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F2BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508F28C; /* 0x1508F2BC: jmp 0x1508f28c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508F2D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F2D0u);

L_1508F2D0:
    edi = edi; /* 0x1508F2D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F2D2: push ebp */
    ebp = esp; /* 0x1508F2D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508F2D5: push esi */
    PUSH32(esp, edi); /* 0x1508F2D6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1508F2D7: mov edi, dword ptr [ebp + 8] */
    esi = edi; /* 0x1508F2DA: mov esi, edi */
    eax = (uint32_t)MEM16(edi); /* 0x1508F2DC: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F2DF: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F302; /* 0x1508F2E2: je 0x1508f302 */
L_1508F2E4:
    ecx = eax; /* 0x1508F2E4: mov ecx, eax */
L_1508F2E6:
    PUSH32(esp, ecx); /* 0x1508F2E6: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F2E7: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1508F1B0); /* 0x1508F2EA: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508F2EF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508F2F0: pop ecx */
    /* test eax, eax */ /* 0x1508F2F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F302; /* 0x1508F2F3: jne 0x1508f302 */
L_1508F2F5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508F2F5: add esi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x1508F2F8: movzx eax, word ptr [esi] */
    ecx = eax; /* 0x1508F2FB: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F2FD: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F2E6; /* 0x1508F300: jne 0x1508f2e6 */
L_1508F302:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1508F302: sub esi, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1508F304: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    edi = POP32_VAL(esp); /* 0x1508F306: pop edi */
    eax = esi; /* 0x1508F307: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508F309: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F30A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F30B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F320u);

L_1508F320:
    edi = edi; /* 0x1508F320: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F322: push ebp */
    ebp = esp; /* 0x1508F323: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1508F325: mov edx, dword ptr [ebp + 8] */
    ecx = edx; /* 0x1508F328: mov ecx, edx */
    PUSH32(esp, edi); /* 0x1508F32A: push edi */
    /* test LO8(edx), 1 */ /* 0x1508F32B: test dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F33C; /* 0x1508F32E: je 0x1508f33c */
L_1508F330:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1508F330: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F332:
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1508F332: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F391; /* 0x1508F335: je 0x1508f391 */
L_1508F337:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508F337: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1508F332; /* 0x1508F33A: jmp 0x1508f332 */
L_1508F33C:
    PUSH32(esp, esi); /* 0x1508F33C: push esi */
    esi = edx; /* 0x1508F33D: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x1508F33F: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1508F342: push 0x10 */
    eax = POP32_VAL(esp); /* 0x1508F344: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1508F345: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1508F347: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508F349: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1508F34B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1508F34D: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1508F34F: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1508F34F: shr esi, 1 */
    eax = edx + esi * 2; /* 0x1508F351: lea eax, [edx + esi*2] */
    /* cmp edx, eax */ /* 0x1508F354: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F364; /* 0x1508F356: je 0x1508f364 */
L_1508F358:
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1508F358: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F364; /* 0x1508F35B: je 0x1508f364 */
L_1508F35D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508F35D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x1508F360: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F358; /* 0x1508F362: jne 0x1508f358 */
L_1508F364:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1508F364: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1508F366: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, esi */ /* 0x1508F368: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508F36A: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F395; /* 0x1508F36B: jne 0x1508f395 */
L_1508F36D:
    ecx = edx + ecx * 2; /* 0x1508F36D: lea ecx, [edx + ecx*2] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1508F370: xorps xmm1, xmm1 */
L_1508F373:
    _xmm[0] = _xmm[1]; /* 0x1508F373: movaps xmm0, xmm1 */
    { xmm_t _s = xmm_ld(ecx); for (int _k = 0; _k < 8; _k++) _xmm[0].u16[_k] = (_xmm[0].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x1508F376: pcmpeqw xmm0, xmmword ptr [ecx] */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[0].u8[_k] >> 7) << _k; eax = _m; } /* 0x1508F37A: pmovmskb eax, xmm0 */
    /* test eax, eax */ /* 0x1508F37E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F387; /* 0x1508F380: jne 0x1508f387 */
L_1508F382:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1508F382: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1508F373; /* 0x1508F385: jmp 0x1508f373 */
L_1508F387:
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1508F387: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F391; /* 0x1508F38A: je 0x1508f391 */
L_1508F38C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508F38C: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1508F387; /* 0x1508F38F: jmp 0x1508f387 */
L_1508F391:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1508F391: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1508F393: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
L_1508F395:
    eax = ecx; /* 0x1508F395: mov eax, ecx */
    edi = POP32_VAL(esp); /* 0x1508F397: pop edi */
    ebp = POP32_VAL(esp); /* 0x1508F398: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F399: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F3A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F3A0u);

L_1508F3A0:
    edi = edi; /* 0x1508F3A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F3A2: push ebp */
    ebp = esp; /* 0x1508F3A3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1508F3A5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1508F3A6: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508F3A9: push esi */
    PUSH32(esp, edi); /* 0x1508F3AA: push edi */
    PUSH32(esp, ebx); /* 0x1508F3AB: push ebx */
    RECOMP_CALL(sub_1508F320); /* 0x1508F3AC: call 0x1508f320 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508F3B1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F3B4: push dword ptr [ebp + 0xc] */
    edi = ebx + eax * 2; /* 0x1508F3B7: lea edi, [ebx + eax*2] */
    RECOMP_CALL(sub_1508F6A0); /* 0x1508F3BA: call 0x1508f6a0 */
    RECOMP_FLAGS_IN();
    esi = eax + eax; /* 0x1508F3BF: lea esi, [eax + eax] */
    PUSH32(esp, esi); /* 0x1508F3C2: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F3C3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1508F3C6: push edi */
    RECOMP_CALL(sub_1508DBF0); /* 0x1508F3C7: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1508F3CC: add esp, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F3CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + edi) = (uint16_t)(LO16(eax)); /* 0x1508F3D1: mov word ptr [esi + edi], ax */
    eax = ebx; /* 0x1508F3D5: mov eax, ebx */
    edi = POP32_VAL(esp); /* 0x1508F3D7: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F3D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508F3D9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508F3DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F3DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F3F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F3F0u);

L_1508F3F0:
    edi = edi; /* 0x1508F3F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F3F2: push ebp */
    ebp = esp; /* 0x1508F3F3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1508F3F5: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1508F3F8: push ebx */
    PUSH32(esp, esi); /* 0x1508F3F9: push esi */
    PUSH32(esp, edi); /* 0x1508F3FA: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1508F3FB: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1508F3FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F42F; /* 0x1508F400: jne 0x1508f42f */
L_1508F402:
    /* test ecx, ecx */ /* 0x1508F402: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F433; /* 0x1508F404: jne 0x1508f433 */
L_1508F406:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1508F406: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F4EA; /* 0x1508F409: je 0x1508f4ea */
L_1508F40F:
    RECOMP_CALL(sub_15036430); /* 0x1508F40F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F414: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F416:
    PUSH32(esp, 0x16u); /* 0x1508F416: push 0x16 */
L_1508F418:
    edi = POP32_VAL(esp); /* 0x1508F418: pop edi */
    PUSH32(esp, esi); /* 0x1508F419: push esi */
    PUSH32(esp, esi); /* 0x1508F41A: push esi */
    PUSH32(esp, esi); /* 0x1508F41B: push esi */
    PUSH32(esp, esi); /* 0x1508F41C: push esi */
    PUSH32(esp, esi); /* 0x1508F41D: push esi */
    MEM32(eax) = edi; /* 0x1508F41E: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x1508F420: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508F425: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x1508F428: mov eax, edi */
L_1508F42A:
    edi = POP32_VAL(esp); /* 0x1508F42A: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F42B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508F42C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508F42D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F42E: ret  */
L_1508F42F:
    /* test ecx, ecx */ /* 0x1508F42F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F40F; /* 0x1508F431: je 0x1508f40f */
L_1508F433:
    ebx = MEM32(ebp + 0xC); /* 0x1508F433: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508F436: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F40F; /* 0x1508F438: je 0x1508f40f */
L_1508F43A:
    eax = MEM32(ebp + 0x10); /* 0x1508F43A: mov eax, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1508F43D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F44A; /* 0x1508F43F: je 0x1508f44a */
L_1508F441:
    /* test eax, eax */ /* 0x1508F441: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F44A; /* 0x1508F443: jne 0x1508f44a */
L_1508F445:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1508F445: mov word ptr [ecx], ax */
    RECOMP_BACKEDGE();
    goto L_1508F40F; /* 0x1508F448: jmp 0x1508f40f */
L_1508F44A:
    edx = ecx; /* 0x1508F44A: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F44C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F44E:
    /* cmp MEM16(edx), LO16(esi) */ /* 0x1508F44E: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F467; /* 0x1508F451: je 0x1508f467 */
L_1508F453:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508F453: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1508F456: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F44E; /* 0x1508F459: jne 0x1508f44e */
L_1508F45B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F45B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1508F45D: mov word ptr [ecx], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508F460: call 0x15036430 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1508F416; /* 0x1508F465: jmp 0x1508f416 */
L_1508F467:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1508F467: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F490; /* 0x1508F46A: jne 0x1508f490 */
L_1508F46C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1508F46C: sub edx, eax */
    _flag_k = FK_CMP;
L_1508F46E:
    ecx = MEM32(ebp + 0x10); /* 0x1508F46E: mov ecx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM16(eax); /* 0x1508F471: movzx eax, word ptr [eax] */
    MEM16(edx + ecx) = (uint16_t)(LO16(eax)); /* 0x1508F474: mov word ptr [edx + ecx], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508F478: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ecx; /* 0x1508F47B: mov dword ptr [ebp + 0x10], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1508F47E: mov ecx, dword ptr [ebp + 8] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F481: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F4BE; /* 0x1508F484: je 0x1508f4be */
L_1508F486:
    eax = MEM32(ebp + 0x10); /* 0x1508F486: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1508F489: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F46E; /* 0x1508F48C: jne 0x1508f46e */
L_1508F48E:
    goto L_1508F4BE; /* 0x1508F48E: jmp 0x1508f4be */
L_1508F490:
    /* test edi, edi */ /* 0x1508F490: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F4B9; /* 0x1508F492: je 0x1508f4b9 */
L_1508F494:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1508F494: sub eax, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x1508F496: mov dword ptr [ebp + 0x10], eax */
L_1508F499:
    eax = (uint32_t)MEM16(eax + edx); /* 0x1508F499: movzx eax, word ptr [eax + edx] */
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1508F49D: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508F4A0: add edx, 2 */
    _flag_k = FK_ADD;
    /* test LO16(eax), LO16(eax) */ /* 0x1508F4A3: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F4EA; /* 0x1508F4A6: je 0x1508f4ea */
L_1508F4A8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x1508F4A8: sub ebx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508F4B5; /* 0x1508F4AB: je 0x1508f4b5 */
L_1508F4AD:
    eax = MEM32(ebp + 0x10); /* 0x1508F4AD: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508F4B0: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F499; /* 0x1508F4B3: jne 0x1508f499 */
L_1508F4B5:
    /* test edi, edi */ /* 0x1508F4B5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F4BE; /* 0x1508F4B7: jne 0x1508f4be */
L_1508F4B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F4B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x1508F4BB: mov word ptr [edx], ax */
L_1508F4BE:
    /* test ebx, ebx */ /* 0x1508F4BE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F4EA; /* 0x1508F4C0: jne 0x1508f4ea */
L_1508F4C2:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1508F4C2: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F4D9; /* 0x1508F4C5: jne 0x1508f4d9 */
L_1508F4C7:
    eax = MEM32(ebp + 0xC); /* 0x1508F4C7: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1508F4CA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x50u); /* 0x1508F4CC: push 0x50 */
    MEM16(ecx + eax * 2 + (-0x2)) = (uint16_t)(LO16(edx)); /* 0x1508F4CE: mov word ptr [ecx + eax*2 - 2], dx */
    eax = POP32_VAL(esp); /* 0x1508F4D3: pop eax */
    RECOMP_BACKEDGE();
    goto L_1508F42A; /* 0x1508F4D4: jmp 0x1508f42a */
L_1508F4D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F4D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1508F4DB: mov word ptr [ecx], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508F4DE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508F4E3: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508F418; /* 0x1508F4E5: jmp 0x1508f418 */
L_1508F4EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F4EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508F42A; /* 0x1508F4EC: jmp 0x1508f42a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508F500(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F500u);

L_1508F500:
    edi = edi; /* 0x1508F500: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F502: push ebp */
    ebp = esp; /* 0x1508F503: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1508F505: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1508F508: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F50E; /* 0x1508F50A: jne 0x1508f50e */
L_1508F50C:
    ebp = POP32_VAL(esp); /* 0x1508F50C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F50D: ret  */
L_1508F50E:
    ecx = MEM32(ebp + 0xC); /* 0x1508F50E: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1508F511: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1508F514: push esi */
L_1508F515:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1508F515: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508F52F; /* 0x1508F518: je 0x1508f52f */
L_1508F51A:
    esi = (uint32_t)MEM16(edx); /* 0x1508F51A: movzx esi, word ptr [edx] */
    /* test LO16(esi), LO16(esi) */ /* 0x1508F51D: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F52F; /* 0x1508F520: je 0x1508f52f */
L_1508F522:
    /* cmp LO16(esi), MEM16(ecx) */ /* 0x1508F522: cmp si, word ptr [ecx] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F52F; /* 0x1508F525: jne 0x1508f52f */
L_1508F527:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508F527: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508F52A: add ecx, 2 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1508F515; /* 0x1508F52D: jmp 0x1508f515 */
L_1508F52F:
    eax = (uint32_t)MEM16(edx); /* 0x1508F52F: movzx eax, word ptr [edx] */
    ecx = (uint32_t)MEM16(ecx); /* 0x1508F532: movzx ecx, word ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508F535: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1508F537: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F538: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F539: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F540u);

L_1508F540:
    edi = edi; /* 0x1508F540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F542: push ebp */
    ebp = esp; /* 0x1508F543: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1508F545: push ebx */
    PUSH32(esp, esi); /* 0x1508F546: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1508F547: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1508F54A: push edi */
    PUSH32(esp, esi); /* 0x1508F54B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F54C: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1508F6A0); /* 0x1508F54F: call 0x1508f6a0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1508F554: mov edi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x1508F557: mov ebx, eax */
    eax = ebx + ebx; /* 0x1508F559: lea eax, [ebx + ebx] */
    PUSH32(esp, eax); /* 0x1508F55C: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F55D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1508F560: push edi */
    RECOMP_CALL(sub_1508DBF0); /* 0x1508F561: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508F566: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ebx, esi */ /* 0x1508F569: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1508F580; /* 0x1508F56B: jae 0x1508f580 */
L_1508F56D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1508F56D: sub esi, ebx */
    _flag_k = FK_CMP;
    ecx = edi + ebx * 2; /* 0x1508F56F: lea ecx, [edi + ebx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x1508F572: add esi, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1508F574: push esi */
    PUSH32(esp, 0); /* 0x1508F575: push 0 */
    PUSH32(esp, ecx); /* 0x1508F577: push ecx */
    RECOMP_CALL(sub_1508E3D0); /* 0x1508F578: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1508F57D: add esp, 0xc */
    _flag_k = FK_ADD;
L_1508F580:
    eax = edi; /* 0x1508F580: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1508F582: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F583: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508F584: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508F585: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F586: ret  */
    RECOMP_REGS_OUT();
}
