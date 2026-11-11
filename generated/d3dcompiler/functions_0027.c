#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_141E54A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E54A2u);

L_141E54A2:
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0; /* 0x141E54A2: and dword ptr [ecx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x141E54A6: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x140017C0u; /* 0x141E54AA: mov dword ptr [ecx], 0x140017c0 */
    MEM32(ecx + 0x4) = 1; /* 0x141E54B0: mov dword ptr [ecx + 4], 1 */
    eax = ecx; /* 0x141E54B7: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E54B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E54BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E54BFu);

L_141E54BF:
    edi = edi; /* 0x141E54BF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E54C1: push ebp */
    ebp = esp; /* 0x141E54C2: mov ebp, esp */
    PUSH32(esp, edi); /* 0x141E54C4: push edi */
    edi = MEM32(ebp + 0xC); /* 0x141E54C5: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x141E54C8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E54D3; /* 0x141E54CA: jne 0x141e54d3 */
L_141E54CC:
    eax = 0x8876086Cu; /* 0x141E54CC: mov eax, 0x8876086c */
    goto L_141E551C; /* 0x141E54D1: jmp 0x141e551c */
L_141E54D3:
    PUSH32(esp, esi); /* 0x141E54D3: push esi */
    PUSH32(esp, 0x10u); /* 0x141E54D4: push 0x10 */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E54D6: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E54DB: pop ecx */
    /* test eax, eax */ /* 0x141E54DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E54EB; /* 0x141E54DE: je 0x141e54eb */
L_141E54E0:
    ecx = eax; /* 0x141E54E0: mov ecx, eax */
    RECOMP_CALL(sub_141E54A2); /* 0x141E54E2: call 0x141e54a2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E54E7: mov esi, eax */
    goto L_141E54ED; /* 0x141E54E9: jmp 0x141e54ed */
L_141E54EB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141E54EB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E54ED:
    /* test esi, esi */ /* 0x141E54ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E54F8; /* 0x141E54EF: jne 0x141e54f8 */
L_141E54F1:
    eax = 0x8007000Eu; /* 0x141E54F1: mov eax, 0x8007000e */
    goto L_141E551B; /* 0x141E54F6: jmp 0x141e551b */
L_141E54F8:
    eax = MEM32(esi); /* 0x141E54F8: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x141E54FA: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E54FB: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x141E54FE: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x141E5500: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x141E5503: mov ebx, eax */
    /* test ebx, ebx */ /* 0x141E5505: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141E5516; /* 0x141E5507: jns 0x141e5516 */
L_141E5509:
    edx = MEM32(esi); /* 0x141E5509: mov edx, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x141E550B: push 1 */
    ecx = esi; /* 0x141E550D: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x141E550F: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x141E5512: mov eax, ebx */
    goto L_141E551A; /* 0x141E5514: jmp 0x141e551a */
L_141E5516:
    MEM32(edi) = esi; /* 0x141E5516: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5518: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E551A:
    ebx = POP32_VAL(esp); /* 0x141E551A: pop ebx */
L_141E551B:
    esi = POP32_VAL(esp); /* 0x141E551B: pop esi */
L_141E551C:
    edi = POP32_VAL(esp); /* 0x141E551C: pop edi */
    ebp = POP32_VAL(esp); /* 0x141E551D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E551E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E5526(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5526u);

L_141E5526:
    edi = edi; /* 0x141E5526: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5528: push ebp */
    ebp = esp; /* 0x141E5529: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141E552B: push ebx */
    PUSH32(esp, esi); /* 0x141E552C: push esi */
    esi = MEM32(ecx + 0xC); /* 0x141E552D: mov esi, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5530: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141E5532: push edi */
    /* test esi, esi */ /* 0x141E5533: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E555C; /* 0x141E5535: je 0x141e555c */
L_141E5537:
    ebx = MEM32(ebp + 0xC); /* 0x141E5537: mov ebx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x141E553A: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x141E553D: add ecx, 0x18 */
    _flag_k = FK_ADD;
L_141E5540:
    /* cmp MEM32(ecx + (-0x8)), edi */ /* 0x141E5540: cmp dword ptr [ecx - 8], edi */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5554; /* 0x141E5543: jne 0x141e5554 */
L_141E5545:
    edx = MEM32(ecx); /* 0x141E5545: mov edx, dword ptr [ecx] */
    goto L_141E5550; /* 0x141E5547: jmp 0x141e5550 */
L_141E5549:
    /* cmp MEM32(edx + 0x8), ebx */ /* 0x141E5549: cmp dword ptr [edx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E5565; /* 0x141E554C: je 0x141e5565 */
L_141E554E:
    edx = MEM32(edx); /* 0x141E554E: mov edx, dword ptr [edx] */
L_141E5550:
    /* test edx, edx */ /* 0x141E5550: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5549; /* 0x141E5552: jne 0x141e5549 */
L_141E5554:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141E5554: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x141E5555: add ecx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x141E5558: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E5540; /* 0x141E555A: jb 0x141e5540 */
L_141E555C:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E555C: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_141E555E:
    edi = POP32_VAL(esp); /* 0x141E555E: pop edi */
    esi = POP32_VAL(esp); /* 0x141E555F: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E5560: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E5561: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141E5562: ret 0x10 */
L_141E5565:
    ecx = MEM32(edx + 0xC); /* 0x141E5565: mov ecx, dword ptr [edx + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x141E5568: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x141E556B: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + 0x14); /* 0x141E556D: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx + 0x4); /* 0x141E5570: mov ecx, dword ptr [edx + 4] */
    MEM32(eax) = ecx; /* 0x141E5573: mov dword ptr [eax], ecx */
    SET_LO8(eax, 1); /* 0x141E5575: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_141E555E; /* 0x141E5577: jmp 0x141e555e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E557E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E557Eu);

L_141E557E:
    edi = edi; /* 0x141E557E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5580: push ebp */
    ebp = esp; /* 0x141E5581: mov ebp, esp */
    edx = MEM32(ebp + 0x14); /* 0x141E5583: mov edx, dword ptr [ebp + 0x14] */
    /* cmp edx, 6 */ /* 0x141E5586: cmp edx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E558F; /* 0x141E5589: jae 0x141e558f */
L_141E558B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E558B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_141E55E6; /* 0x141E558D: jmp 0x141e55e6 */
L_141E558F:
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x141E558F: mov al, byte ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x141E5592: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x141E5595: push esi */
    esi = MEM32(ebp + 0x18); /* 0x141E5596: mov esi, dword ptr [ebp + 0x18] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x141E5599: mov byte ptr [esi], al */
    SET_LO8(eax, LO8(ecx)); /* 0x141E559B: mov al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x141E559D: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x1) = (uint8_t)(LO8(eax)); /* 0x141E559F: mov byte ptr [esi + 1], al */
    eax = ecx; /* 0x141E55A2: mov eax, ecx */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x141E55A4: sar eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 8u);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x141E55A7: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x2) = (uint8_t)(LO8(eax)); /* 0x141E55A9: mov byte ptr [esi + 2], al */
    eax = ecx; /* 0x141E55AC: mov eax, ecx */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x141E55AE: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    if (24u) _cf = (((ecx) >> 23) & 1u); /* 0x141E55B1: sar ecx, 0x18 */
    if (24u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 24u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 24u);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x7Fu); /* 0x141E55B4: and al, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x7Fu) << 24;
    SET_LO8(ecx, LO8(ecx) & 0x7Fu); /* 0x141E55B6: and cl, 0x7f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(esi + 0x3) = (uint8_t)(LO8(eax)); /* 0x141E55B9: mov byte ptr [esi + 3], al */
    MEM8(esi + 0x4) = (uint8_t)(LO8(ecx)); /* 0x141E55BC: mov byte ptr [esi + 4], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 5; /* 0x141E55BF: sub edx, 5 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 5; /* 0x141E55C2: add esi, 5 */
    _flag_k = FK_ADD;
    /* cmp edx, 2 */ /* 0x141E55C5: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E55E3; /* 0x141E55C8: jb 0x141e55e3 */
L_141E55CA:
    ecx = MEM32(ebp + 0x8); /* 0x141E55CA: mov ecx, dword ptr [ebp + 8] */
L_141E55CD:
    SET_LO8(eax, LO8(ecx)); /* 0x141E55CD: mov al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Fu); /* 0x141E55CF: and al, 0x3f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x21u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x21u); /* 0x141E55D1: add al, 0x21 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x141E55D3: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E55D5: inc esi */
    _flag_k = FK_INC;
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x141E55D6: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x141E55D6: shr ecx, 6 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E55D9: dec edx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x141E55DA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E55EA; /* 0x141E55DC: je 0x141e55ea */
L_141E55DE:
    /* cmp edx, 2 */ /* 0x141E55DE: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E55CD; /* 0x141E55E1: jae 0x141e55cd */
L_141E55E3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x141E55E3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_141E55E5:
    esi = POP32_VAL(esp); /* 0x141E55E5: pop esi */
L_141E55E6:
    ebp = POP32_VAL(esp); /* 0x141E55E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141E55E7: ret 0x14 */
L_141E55EA:
    /* cmp edx, 1 */ /* 0x141E55EA: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E55E3; /* 0x141E55ED: jb 0x141e55e3 */
L_141E55EF:
    MEM8(esi) = (uint8_t)(0); /* 0x141E55EF: mov byte ptr [esi], 0 */
    SET_LO8(eax, 1); /* 0x141E55F2: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_141E55E5; /* 0x141E55F4: jmp 0x141e55e5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E55FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E55FBu);

L_141E55FB:
    edi = edi; /* 0x141E55FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E55FD: push ebp */
    ebp = esp; /* 0x141E55FE: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141E5600: mov edx, dword ptr [ebp + 8] */
    ecx = (int32_t)(int8_t)MEM8(edx + 0x4); /* 0x141E5603: movsx ecx, byte ptr [edx + 4] */
    eax = (int32_t)(int8_t)MEM8(edx + 0x3); /* 0x141E5607: movsx eax, byte ptr [edx + 3] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x141E560B: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x141E560B: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E560E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (int32_t)(int8_t)MEM8(edx + 0x2); /* 0x141E5610: movsx eax, byte ptr [edx + 2] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x141E5614: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x141E5614: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E5617: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (int32_t)(int8_t)MEM8(edx + 0x1); /* 0x141E5619: movsx eax, byte ptr [edx + 1] */
    if (8u) _cf = (((ecx) >> 24) & 1u); /* 0x141E561D: shl ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ecx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 8u; /* 0x141E561D: shl ecx, 8 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E5620: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x141E5622: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141E5625: push ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 5; /* 0x141E5626: add edx, 5 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x141E5629: push esi */
    MEM32(eax) = ecx; /* 0x141E562A: mov dword ptr [eax], ecx */
    ecx = edx; /* 0x141E562C: mov ecx, edx */
    PUSH32(esp, edi); /* 0x141E562E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141E562F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x141E5631: mov edi, edx */
    ebx = ecx + 0x1; /* 0x141E5633: lea ebx, [ecx + 1] */
L_141E5636:
    SET_LO8(eax, MEM8(ecx)); /* 0x141E5636: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E5638: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x141E5639: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5636; /* 0x141E563B: jne 0x141e5636 */
L_141E563D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x141E563D: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x141E563F: add edx, ecx */
    _flag_k = FK_ADD;
    goto L_141E564F; /* 0x141E5641: jmp 0x141e564f */
L_141E5643:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E5643: dec edx */
    _flag_k = FK_DEC;
    ecx = (int32_t)(int8_t)MEM8(edx); /* 0x141E5644: movsx ecx, byte ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x21u; /* 0x141E5647: sub ecx, 0x21 */
    _flag_k = FK_CMP;
    if (6u) _cf = (((esi) >> 26) & 1u); /* 0x141E564A: shl esi, 6 */
    if (6u) { _flag_a = recomp_flags_pack((esi << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 6u; /* 0x141E564A: shl esi, 6 */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x141E564D: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E564F:
    /* cmp edx, edi */ /* 0x141E564F: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_141E5643; /* 0x141E5651: ja 0x141e5643 */
L_141E5653:
    edi = POP32_VAL(esp); /* 0x141E5653: pop edi */
    eax = esi; /* 0x141E5654: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E5656: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E5657: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E5658: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E5659: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E5661(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5661u);

L_141E5661:
    edi = edi; /* 0x141E5661: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5663: push ebp */
    ebp = esp; /* 0x141E5664: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x141E5666: pop ebp */
    goto L_141EC7E6; /* 0x141E5667: jmp 0x141ec7e6 */
L_141EC7E6:
    { _itail_tgt = (uint32_t)(MEM32(0x14001154)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141E5671(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5671u);

L_141E5671:
    edi = edi; /* 0x141E5671: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5673: push ebp */
    ebp = esp; /* 0x141E5674: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x141E5676: pop ebp */
    goto L_141EC7F2; /* 0x141E5677: jmp 0x141ec7f2 */
L_141EC7F2:
    { _itail_tgt = (uint32_t)(MEM32(0x14001150)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_141E5681(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5681u);

L_141E5681:
    edi = edi; /* 0x141E5681: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E5683: push esi */
    PUSH32(esp, 0x14001838u); /* 0x141E5684: push 0x14001838 */
    esi = ecx; /* 0x141E5689: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x14001058)); /* 0x141E568B: call dword ptr [0x14001058] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1C) = eax; /* 0x141E5691: mov dword ptr [esi + 0x1c], eax */
    /* test eax, eax */ /* 0x141E5694: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E56B2; /* 0x141E5696: jne 0x141e56b2 */
L_141E5698:
    RECOMP_ICALL(MEM32(0x14001040)); /* 0x141E5698: call dword ptr [0x14001040] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E569E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5744; /* 0x141E56A0: jle 0x141e5744 */
L_141E56A6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x141E56A6: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x141E56AB: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141E56B0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E56B1: ret  */
L_141E56B2:
    PUSH32(esp, edi); /* 0x141E56B2: push edi */
    edi = MEM32(0x1400108C); /* 0x141E56B3: mov edi, dword ptr [0x1400108c] */
    PUSH32(esp, 0x1400182Cu); /* 0x141E56B9: push 0x1400182c */
    PUSH32(esp, eax); /* 0x141E56BE: push eax */
    RECOMP_ICALL(edi); /* 0x141E56BF: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x141E56C1: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x141E56C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5731; /* 0x141E56C5: je 0x141e5731 */
L_141E56C7:
    PUSH32(esp, 0x14001820u); /* 0x141E56C7: push 0x14001820 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x141E56CC: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(edi); /* 0x141E56CF: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x141E56D1: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x141E56D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5731; /* 0x141E56D6: je 0x141e5731 */
L_141E56D8:
    PUSH32(esp, 0x14001810u); /* 0x141E56D8: push 0x14001810 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x141E56DD: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(edi); /* 0x141E56E0: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x141E56E2: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x141E56E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5731; /* 0x141E56E7: je 0x141e5731 */
L_141E56E9:
    PUSH32(esp, 0x14001804u); /* 0x141E56E9: push 0x14001804 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x141E56EE: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(edi); /* 0x141E56F1: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x141E56F3: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x141E56F6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5731; /* 0x141E56F8: je 0x141e5731 */
L_141E56FA:
    PUSH32(esp, 0x140017F8u); /* 0x141E56FA: push 0x140017f8 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x141E56FF: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(edi); /* 0x141E5702: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x10) = eax; /* 0x141E5704: mov dword ptr [esi + 0x10], eax */
    /* test eax, eax */ /* 0x141E5707: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5731; /* 0x141E5709: je 0x141e5731 */
L_141E570B:
    PUSH32(esp, 0x140017F0u); /* 0x141E570B: push 0x140017f0 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x141E5710: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(edi); /* 0x141E5713: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = eax; /* 0x141E5715: mov dword ptr [esi + 0x14], eax */
    /* test eax, eax */ /* 0x141E5718: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5731; /* 0x141E571A: je 0x141e5731 */
L_141E571C:
    PUSH32(esp, 0x140017E4u); /* 0x141E571C: push 0x140017e4 */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x141E5721: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(edi); /* 0x141E5724: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = eax; /* 0x141E5726: mov dword ptr [esi + 0x18], eax */
    /* test eax, eax */ /* 0x141E5729: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5731; /* 0x141E572B: je 0x141e5731 */
L_141E572D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E572D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E5743; /* 0x141E572F: jmp 0x141e5743 */
L_141E5731:
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x141E5731: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(MEM32(0x14001084)); /* 0x141E5734: call dword ptr [0x14001084] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0; /* 0x141E573A: and dword ptr [esi + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x80004005u; /* 0x141E573E: mov eax, 0x80004005 */
L_141E5743:
    edi = POP32_VAL(esp); /* 0x141E5743: pop edi */
L_141E5744:
    esi = POP32_VAL(esp); /* 0x141E5744: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5745: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E574B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E574Bu);

L_141E574B:
    edi = edi; /* 0x141E574B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E574D: push ebp */
    ebp = esp; /* 0x141E574E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5750: push esi */
    esi = MEM32(ecx + 0x24); /* 0x141E5751: mov esi, dword ptr [ecx + 0x24] */
    PUSH32(esp, edi); /* 0x141E5754: push edi */
    edi = ecx + 0x2C; /* 0x141E5755: lea edi, [ecx + 0x2c] */
    edx = MEM32(edi); /* 0x141E5758: mov edx, dword ptr [edi] */
    /* cmp edx, esi */ /* 0x141E575A: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E5762; /* 0x141E575C: jb 0x141e5762 */
L_141E575E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141E575E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E5789; /* 0x141E5760: jmp 0x141e5789 */
L_141E5762:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x141E5762: sub esi, edx */
    _flag_k = FK_CMP;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x141E5764: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E576C; /* 0x141E5767: jbe 0x141e576c */
L_141E5769:
    esi = MEM32(ebp + 0xC); /* 0x141E5769: mov esi, dword ptr [ebp + 0xc] */
L_141E576C:
    /* cmp edx, MEM32(ecx + 0x24) */ /* 0x141E576C: cmp edx, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E5778; /* 0x141E576F: jae 0x141e5778 */
L_141E5771:
    eax = MEM32(ecx + 0x1C); /* 0x141E5771: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x141E5774: add eax, edx */
    _flag_k = FK_ADD;
    goto L_141E577A; /* 0x141E5776: jmp 0x141e577a */
L_141E5778:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5778: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E577A:
    PUSH32(esp, esi); /* 0x141E577A: push esi */
    PUSH32(esp, eax); /* 0x141E577B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E577C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E577F: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5784: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + esi; /* 0x141E5787: add dword ptr [edi], esi */
    _flag_k = FK_ADD;
L_141E5789:
    eax = MEM32(ebp + 0x10); /* 0x141E5789: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x141E578C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5793; /* 0x141E578E: je 0x141e5793 */
L_141E5790:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x141E5790: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5793:
    edi = POP32_VAL(esp); /* 0x141E5793: pop edi */
    eax = esi; /* 0x141E5794: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E5796: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5797: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E5798: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E57A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E57A0u);

L_141E57A0:
    edi = edi; /* 0x141E57A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E57A2: push ebp */
    ebp = esp; /* 0x141E57A3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E57A5: push ecx */
    eax = ebp + (-0x4); /* 0x141E57A6: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E57A9: push eax */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x141E57AA: push dword ptr [ecx + 4] */
    goto L_141E57BC; /* 0x141E57AD: jmp 0x141e57bc */
L_141E57AF:
    ecx = MEM32(ebp + (-0x4)); /* 0x141E57AF: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x141E57B2: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E57C7; /* 0x141E57B5: jae 0x141e57c7 */
L_141E57B7:
    eax = ebp + (-0x4); /* 0x141E57B7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E57BA: push eax */
    PUSH32(esp, ecx); /* 0x141E57BB: push ecx */
L_141E57BC:
    RECOMP_CALL(sub_14068340); /* 0x141E57BC: call 0x14068340 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E57C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E57AF; /* 0x141E57C3: je 0x141e57af */
L_141E57C5:
    goto L_141E57CE; /* 0x141E57C5: jmp 0x141e57ce */
L_141E57C7:
    eax = MEM32(ebp + 0xC); /* 0x141E57C7: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x141E57CA: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E57CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E57CE:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E57CE: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E57CF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E57D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E57D7u);

L_141E57D7:
    edi = edi; /* 0x141E57D7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E57D9: push ebp */
    ebp = esp; /* 0x141E57DA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E57DC: push ecx */
    PUSH32(esp, esi); /* 0x141E57DD: push esi */
    esi = ecx; /* 0x141E57DE: mov esi, ecx */
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x141E57E0: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E57F0; /* 0x141E57E4: jne 0x141e57f0 */
L_141E57E6:
    eax = 0x8000FFFFu; /* 0x141E57E6: mov eax, 0x8000ffff */
    goto L_141E5876; /* 0x141E57EB: jmp 0x141e5876 */
L_141E57F0:
    PUSH32(esp, ebx); /* 0x141E57F0: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E57F1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141E57F3: push edi */
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x141E57F4: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E5818; /* 0x141E57F7: jbe 0x141e5818 */
L_141E57F9:
    eax = ebp + (-0x4); /* 0x141E57F9: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E57FC: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E57FD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E57A0); /* 0x141E5800: call 0x141e57a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5805: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5874; /* 0x141E5807: jne 0x141e5874 */
L_141E5809:
    edi = MEM32(ebp + (-0x4)); /* 0x141E5809: mov edi, dword ptr [ebp - 4] */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x141E580C: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E581A; /* 0x141E580F: jbe 0x141e581a */
L_141E5811:
    eax = 0x80070216u; /* 0x141E5811: mov eax, 0x80070216 */
    goto L_141E5874; /* 0x141E5816: jmp 0x141e5874 */
L_141E5818:
    edi = ebx; /* 0x141E5818: mov edi, ebx */
L_141E581A:
    /* test edi, edi */ /* 0x141E581A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5853; /* 0x141E581C: je 0x141e5853 */
L_141E581E:
    PUSH32(esp, edi); /* 0x141E581E: push edi */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E581F: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5824: pop ecx */
    ecx = eax; /* 0x141E5825: mov ecx, eax */
    MEM32(ebp + 0x8) = ecx; /* 0x141E5827: mov dword ptr [ebp + 8], ecx */
    /* test ecx, ecx */ /* 0x141E582A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5835; /* 0x141E582C: jne 0x141e5835 */
L_141E582E:
    eax = 0x8007000Eu; /* 0x141E582E: mov eax, 0x8007000e */
    goto L_141E5874; /* 0x141E5833: jmp 0x141e5874 */
L_141E5835:
    edx = edi; /* 0x141E5835: mov edx, edi */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x141E5837: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E583F; /* 0x141E583A: jbe 0x141e583f */
L_141E583C:
    edx = MEM32(esi + 0x8); /* 0x141E583C: mov edx, dword ptr [esi + 8] */
L_141E583F:
    /* test edx, edx */ /* 0x141E583F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5850; /* 0x141E5841: je 0x141e5850 */
L_141E5843:
    eax = MEM32(esi); /* 0x141E5843: mov eax, dword ptr [esi] */
    SET_LO8(eax, MEM8(ebx + eax)); /* 0x141E5845: mov al, byte ptr [ebx + eax] */
    MEM8(ebx + ecx) = (uint8_t)(LO8(eax)); /* 0x141E5848: mov byte ptr [ebx + ecx], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E584B: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edx */ /* 0x141E584C: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E5843; /* 0x141E584E: jb 0x141e5843 */
L_141E5850:
    ebx = MEM32(ebp + 0x8); /* 0x141E5850: mov ebx, dword ptr [ebp + 8] */
L_141E5853:
    /* cmp MEM8(esi + 0xC), 0 */ /* 0x141E5853: cmp byte ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E5861; /* 0x141E5857: je 0x141e5861 */
L_141E5859:
    PUSH32(esp, MEM32(esi)); /* 0x141E5859: push dword ptr [esi] */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E585B: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5860: pop ecx */
L_141E5861:
    MEM32(esi) = ebx; /* 0x141E5861: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = edi; /* 0x141E5863: mov dword ptr [esi + 4], edi */
    /* cmp MEM32(esi + 0x8), edi */ /* 0x141E5866: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E586E; /* 0x141E5869: jbe 0x141e586e */
L_141E586B:
    MEM32(esi + 0x8) = edi; /* 0x141E586B: mov dword ptr [esi + 8], edi */
L_141E586E:
    MEM8(esi + 0xC) = (uint8_t)(1); /* 0x141E586E: mov byte ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5872: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5874:
    edi = POP32_VAL(esp); /* 0x141E5874: pop edi */
    ebx = POP32_VAL(esp); /* 0x141E5875: pop ebx */
L_141E5876:
    esi = POP32_VAL(esp); /* 0x141E5876: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E5877: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E5878: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E5880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5880u);

L_141E5880:
    edi = edi; /* 0x141E5880: mov edi, edi */
    PUSH32(esp, ebx); /* 0x141E5882: push ebx */
    PUSH32(esp, esi); /* 0x141E5883: push esi */
    esi = ecx; /* 0x141E5884: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E5886: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = ebx; /* 0x141E5888: mov dword ptr [esi + 8], ebx */
    /* cmp MEM8(esi + 0xC), LO8(ebx) */ /* 0x141E588B: cmp byte ptr [esi + 0xc], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E589B; /* 0x141E588E: je 0x141e589b */
L_141E5890:
    PUSH32(esp, MEM32(esi)); /* 0x141E5890: push dword ptr [esi] */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E5892: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5897: pop ecx */
    MEM8(esi + 0xC) = (uint8_t)(LO8(ebx)); /* 0x141E5898: mov byte ptr [esi + 0xc], bl */
L_141E589B:
    MEM32(esi) = ebx; /* 0x141E589B: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = ebx; /* 0x141E589D: mov dword ptr [esi + 4], ebx */
    esi = POP32_VAL(esp); /* 0x141E58A0: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E58A1: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E58A2: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E58A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E58A8u);

L_141E58A8:
    edi = edi; /* 0x141E58A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E58AA: push ebp */
    ebp = esp; /* 0x141E58AB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E58AD: push esi */
    PUSH32(esp, edi); /* 0x141E58AE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x141E58AF: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x141E58B2: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x141E58B4: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E58D2; /* 0x141E58B7: jbe 0x141e58d2 */
L_141E58B9:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x141E58B9: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E58C6; /* 0x141E58BD: jne 0x141e58c6 */
L_141E58BF:
    eax = 0x8007000Eu; /* 0x141E58BF: mov eax, 0x8007000e */
    goto L_141E58E8; /* 0x141E58C4: jmp 0x141e58e8 */
L_141E58C6:
    PUSH32(esp, edi); /* 0x141E58C6: push edi */
    RECOMP_CALL(sub_141E57D7); /* 0x141E58C7: call 0x141e57d7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E58CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E58E3; /* 0x141E58CE: je 0x141e58e3 */
L_141E58D0:
    goto L_141E58E8; /* 0x141E58D0: jmp 0x141e58e8 */
L_141E58D2:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x141E58D2: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E58E3; /* 0x141E58D6: je 0x141e58e3 */
L_141E58D8:
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x141E58D8: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E58E3; /* 0x141E58DB: jae 0x141e58e3 */
L_141E58DD:
    /* cmp MEM8(esi + 0xD), 0 */ /* 0x141E58DD: cmp byte ptr [esi + 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xD)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E58C6; /* 0x141E58E1: jne 0x141e58c6 */
L_141E58E3:
    MEM32(esi + 0x8) = edi; /* 0x141E58E3: mov dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E58E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E58E8:
    edi = POP32_VAL(esp); /* 0x141E58E8: pop edi */
    esi = POP32_VAL(esp); /* 0x141E58E9: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E58EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E58EB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E58F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E58F3u);

L_141E58F3:
    edi = edi; /* 0x141E58F3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E58F5: push ebp */
    ebp = esp; /* 0x141E58F6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E58F8: push esi */
    esi = ecx; /* 0x141E58F9: mov esi, ecx */
    RECOMP_CALL(sub_141E5880); /* 0x141E58FB: call 0x141e5880 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x141E5900: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x141E5903: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x141E5905: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x141E5908: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0x18); /* 0x141E590B: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x8) = eax; /* 0x141E590E: mov dword ptr [esi + 8], eax */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x141E5911: mov al, byte ptr [ebp + 0x10] */
    MEM8(esi + 0xC) = (uint8_t)(LO8(eax)); /* 0x141E5914: mov byte ptr [esi + 0xc], al */
    SET_LO8(eax, MEM8(ebp + 0x14)); /* 0x141E5917: mov al, byte ptr [ebp + 0x14] */
    MEM8(esi + 0xD) = (uint8_t)(LO8(eax)); /* 0x141E591A: mov byte ptr [esi + 0xd], al */
    esi = POP32_VAL(esp); /* 0x141E591D: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E591E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141E591F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_141E5927(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5927u);

L_141E5927:
    edi = edi; /* 0x141E5927: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5929: push ebp */
    ebp = esp; /* 0x141E592A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E592C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E592D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E5930: push edi */
    edi = ecx; /* 0x141E5931: mov edi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x141E5933: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E5936: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x141E5939: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x141E593B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E5946; /* 0x141E593D: jae 0x141e5946 */
L_141E593F:
    eax = 0x80070216u; /* 0x141E593F: mov eax, 0x80070216 */
    goto L_141E5966; /* 0x141E5944: jmp 0x141e5966 */
L_141E5946:
    eax = esi + ecx; /* 0x141E5946: lea eax, [esi + ecx] */
    PUSH32(esp, 0); /* 0x141E5949: push 0 */
    PUSH32(esp, eax); /* 0x141E594B: push eax */
    ecx = edi; /* 0x141E594C: mov ecx, edi */
    RECOMP_CALL(sub_14086160); /* 0x141E594E: call 0x14086160 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5953: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5966; /* 0x141E5955: jne 0x141e5966 */
L_141E5957:
    ecx = MEM32(ebp + 0x10); /* 0x141E5957: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x141E595A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5964; /* 0x141E595C: je 0x141e5964 */
L_141E595E:
    eax = MEM32(edi); /* 0x141E595E: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141E5960: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x141E5962: mov dword ptr [ecx], eax */
L_141E5964:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5964: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5966:
    edi = POP32_VAL(esp); /* 0x141E5966: pop edi */
    esi = POP32_VAL(esp); /* 0x141E5967: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5968: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E5969: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E5971(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5971u);

L_141E5971:
    edi = edi; /* 0x141E5971: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5973: push ebp */
    ebp = esp; /* 0x141E5974: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5976: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E5977: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E597A: push edi */
    edi = ecx; /* 0x141E597B: mov edi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x141E597D: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E5980: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x141E5983: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x141E5985: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E5990; /* 0x141E5987: jae 0x141e5990 */
L_141E5989:
    eax = 0x80070216u; /* 0x141E5989: mov eax, 0x80070216 */
    goto L_141E59B0; /* 0x141E598E: jmp 0x141e59b0 */
L_141E5990:
    eax = esi + ecx; /* 0x141E5990: lea eax, [esi + ecx] */
    PUSH32(esp, 0); /* 0x141E5993: push 0 */
    PUSH32(esp, eax); /* 0x141E5995: push eax */
    ecx = edi; /* 0x141E5996: mov ecx, edi */
    RECOMP_CALL(sub_141E58A8); /* 0x141E5998: call 0x141e58a8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E599D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E59B0; /* 0x141E599F: jne 0x141e59b0 */
L_141E59A1:
    ecx = MEM32(ebp + 0x10); /* 0x141E59A1: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x141E59A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E59AE; /* 0x141E59A6: je 0x141e59ae */
L_141E59A8:
    eax = MEM32(edi); /* 0x141E59A8: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141E59AA: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x141E59AC: mov dword ptr [ecx], eax */
L_141E59AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E59AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E59B0:
    edi = POP32_VAL(esp); /* 0x141E59B0: pop edi */
    esi = POP32_VAL(esp); /* 0x141E59B1: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E59B2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E59B3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E59BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E59BBu);

L_141E59BB:
    edi = edi; /* 0x141E59BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E59BD: push ebp */
    ebp = esp; /* 0x141E59BE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E59C0: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E59C1: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x141E59C4: mov esi, ecx */
    PUSH32(esp, 0); /* 0x141E59C6: push 0 */
    PUSH32(esp, 0); /* 0x141E59C8: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E59CA: push dword ptr [ebp + 8] */
    ecx = esi + 0x1C; /* 0x141E59CD: lea ecx, [esi + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E59D0: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_141E58F3); /* 0x141E59D3: call 0x141e58f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0; /* 0x141E59D8: and dword ptr [esi + 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x30) = (uint8_t)(1); /* 0x141E59DC: mov byte ptr [esi + 0x30], 1 */
    esi = POP32_VAL(esp); /* 0x141E59E0: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E59E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E59E2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E59EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E59EAu);

L_141E59EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E59EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xC) = eax; /* 0x141E59EC: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x141E59EF: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x14) = eax; /* 0x141E59F2: mov dword ptr [ecx + 0x14], eax */
    MEM16(ecx + 0x18) = (uint16_t)(0x100u); /* 0x141E59F5: mov word ptr [ecx + 0x18], 0x100 */
    MEM32(ecx + 0x1C) = eax; /* 0x141E59FB: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x20) = eax; /* 0x141E59FE: mov dword ptr [ecx + 0x20], eax */
    MEM32(ecx + 0x24) = eax; /* 0x141E5A01: mov dword ptr [ecx + 0x24], eax */
    MEM16(ecx + 0x28) = (uint16_t)(0x100u); /* 0x141E5A04: mov word ptr [ecx + 0x28], 0x100 */
    eax = ecx; /* 0x141E5A0A: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5A0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E5A12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5A12u);

L_141E5A12:
    edi = edi; /* 0x141E5A12: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5A14: push ebp */
    ebp = esp; /* 0x141E5A15: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5A17: push esi */
    esi = ecx; /* 0x141E5A18: mov esi, ecx */
    ecx = esi + 0x1C; /* 0x141E5A1A: lea ecx, [esi + 0x1c] */
    RECOMP_CALL(sub_141E5880); /* 0x141E5A1D: call 0x141e5880 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0xC; /* 0x141E5A22: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_14085DD0); /* 0x141E5A25: call 0x14085dd0 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x141E5A2A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5A37; /* 0x141E5A2E: je 0x141e5a37 */
L_141E5A30:
    PUSH32(esp, esi); /* 0x141E5A30: push esi */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E5A31: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5A36: pop ecx */
L_141E5A37:
    eax = esi; /* 0x141E5A37: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E5A39: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5A3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E5A3B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E5A43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5A43u);

L_141E5A43:
    edi = edi; /* 0x141E5A43: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5A45: push ebp */
    ebp = esp; /* 0x141E5A46: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E5A48: push ecx */
    PUSH32(esp, ecx); /* 0x141E5A49: push ecx */
    PUSH32(esp, ebx); /* 0x141E5A4A: push ebx */
    PUSH32(esp, esi); /* 0x141E5A4B: push esi */
    ebx = ecx; /* 0x141E5A4C: mov ebx, ecx */
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x141E5A4E: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebx + 0x30), 0 */ /* 0x141E5A51: cmp byte ptr [ebx + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x141E5A55: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5AC8; /* 0x141E5A56: jne 0x141e5ac8 */
L_141E5A58:
    edx = MEM32(ebx + 0x2C); /* 0x141E5A58: mov edx, dword ptr [ebx + 0x2c] */
    ecx = MEM32(ebp + 0xC); /* 0x141E5A5B: mov ecx, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x141E5A5E: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x141E5A60: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x141E5A62: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E5AC8; /* 0x141E5A64: jb 0x141e5ac8 */
L_141E5A66:
    eax = edx + ecx; /* 0x141E5A66: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E5A69: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebx + 0x24) */ /* 0x141E5A6B: cmp eax, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E5AA2; /* 0x141E5A6E: jbe 0x141e5aa2 */
L_141E5A70:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebx + 0x24); /* 0x141E5A70: sub edx, dword ptr [ebx + 0x24] */
    _flag_k = FK_CMP;
    eax = ebp + (-0x8); /* 0x141E5A73: lea eax, [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x141E5A76: add edx, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141E5A78: push eax */
    ecx = ebx + 0x1C; /* 0x141E5A79: lea ecx, [ebx + 0x1c] */
    PUSH32(esp, edx); /* 0x141E5A7C: push edx */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x141E5A7D: push dword ptr [ecx + 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x141E5A80: mov dword ptr [ebp - 4], edx */
    RECOMP_CALL(sub_141E5971); /* 0x141E5A83: call 0x141e5971 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5A88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5A90; /* 0x141E5A8A: je 0x141e5a90 */
L_141E5A8C:
    PUSH32(esp, 0xCu); /* 0x141E5A8C: push 0xc */
    goto L_141E5ACA; /* 0x141E5A8E: jmp 0x141e5aca */
L_141E5A90:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x141E5A90: push dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x141E5A93: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x141E5A94: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E5A97: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x141E5A9C: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5A9F: add esp, 0xc */
    _flag_k = FK_ADD;
L_141E5AA2:
    edx = MEM32(ebx + 0x2C); /* 0x141E5AA2: mov edx, dword ptr [ebx + 0x2c] */
    /* cmp edx, MEM32(ebx + 0x24) */ /* 0x141E5AA5: cmp edx, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E5AB1; /* 0x141E5AA8: jae 0x141e5ab1 */
L_141E5AAA:
    eax = MEM32(ebx + 0x1C); /* 0x141E5AAA: mov eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x141E5AAD: add eax, edx */
    _flag_k = FK_ADD;
    goto L_141E5AB3; /* 0x141E5AAF: jmp 0x141e5ab3 */
L_141E5AB1:
    eax = edi; /* 0x141E5AB1: mov eax, edi */
L_141E5AB3:
    PUSH32(esp, ecx); /* 0x141E5AB3: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E5AB4: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E5AB7: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E5AB8: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x141E5ABD: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5AC0: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) + esi; /* 0x141E5AC3: add dword ptr [ebx + 0x2c], esi */
    _flag_k = FK_ADD;
    goto L_141E5ACB; /* 0x141E5AC6: jmp 0x141e5acb */
L_141E5AC8:
    PUSH32(esp, 0x16u); /* 0x141E5AC8: push 0x16 */
L_141E5ACA:
    edi = POP32_VAL(esp); /* 0x141E5ACA: pop edi */
L_141E5ACB:
    eax = MEM32(ebp + 0x10); /* 0x141E5ACB: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x141E5ACE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5AD4; /* 0x141E5AD0: je 0x141e5ad4 */
L_141E5AD2:
    MEM32(eax) = edi; /* 0x141E5AD2: mov dword ptr [eax], edi */
L_141E5AD4:
    edi = POP32_VAL(esp); /* 0x141E5AD4: pop edi */
    eax = esi; /* 0x141E5AD5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E5AD7: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E5AD8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E5AD9: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E5ADA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E5AE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5AE2u);

L_141E5AE2:
    edi = edi; /* 0x141E5AE2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5AE4: push ebp */
    ebp = esp; /* 0x141E5AE5: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x141E5AE7: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141E5AEA: push ebx */
    PUSH32(esp, esi); /* 0x141E5AEB: push esi */
    PUSH32(esp, edi); /* 0x141E5AEC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E5AED: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x141E5AEF: sub eax, edi */
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x141E5AF1: mov ebx, ecx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E5B29; /* 0x141E5AF3: je 0x141e5b29 */
L_141E5AF5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E5AF5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E5B11; /* 0x141E5AF6: je 0x141e5b11 */
L_141E5AF8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E5AF8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E5AFF; /* 0x141E5AF9: je 0x141e5aff */
L_141E5AFB:
    PUSH32(esp, 0x16u); /* 0x141E5AFB: push 0x16 */
    goto L_141E5B4F; /* 0x141E5AFD: jmp 0x141e5b4f */
L_141E5AFF:
    eax = MEM32(ebp + 0x8); /* 0x141E5AFF: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x141E5B02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5AFB; /* 0x141E5B04: js 0x141e5afb */
L_141E5B06:
    esi = MEM32(ebx + 0x24); /* 0x141E5B06: mov esi, dword ptr [ebx + 0x24] */
    /* cmp eax, esi */ /* 0x141E5B09: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_141E5AFB; /* 0x141E5B0B: ja 0x141e5afb */
L_141E5B0D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x141E5B0D: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_141E5B2C; /* 0x141E5B0F: jmp 0x141e5b2c */
L_141E5B11:
    ecx = MEM32(ebp + 0x8); /* 0x141E5B11: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x141E5B14: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5AFB; /* 0x141E5B16: js 0x141e5afb */
L_141E5B18:
    edx = MEM32(ebx + 0x2C); /* 0x141E5B18: mov edx, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E5B1B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x141E5B1E: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x141E5B20: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E5AFB; /* 0x141E5B22: jb 0x141e5afb */
L_141E5B24:
    esi = edx + ecx; /* 0x141E5B24: lea esi, [edx + ecx] */
    goto L_141E5B2C; /* 0x141E5B27: jmp 0x141e5b2c */
L_141E5B29:
    esi = MEM32(ebp + 0x8); /* 0x141E5B29: mov esi, dword ptr [ebp + 8] */
L_141E5B2C:
    /* cmp esi, MEM32(ebx + 0x24) */ /* 0x141E5B2C: cmp esi, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E5B64; /* 0x141E5B2F: jbe 0x141e5b64 */
L_141E5B31:
    eax = esi; /* 0x141E5B31: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx + 0x24); /* 0x141E5B33: sub eax, dword ptr [ebx + 0x24] */
    _flag_k = FK_CMP;
    edx = ebp + 0xC; /* 0x141E5B36: lea edx, [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x141E5B39: push edx */
    ecx = ebx + 0x1C; /* 0x141E5B3A: lea ecx, [ebx + 0x1c] */
    PUSH32(esp, eax); /* 0x141E5B3D: push eax */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x141E5B3E: push dword ptr [ecx + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x141E5B41: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_141E5971); /* 0x141E5B44: call 0x141e5971 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5B49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5B55; /* 0x141E5B4B: je 0x141e5b55 */
L_141E5B4D:
    PUSH32(esp, 0xCu); /* 0x141E5B4D: push 0xc */
L_141E5B4F:
    _flag_a = (uint32_t)((esi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((esi | 0xFFFFFFFFu));
    esi = esi | 0xFFFFFFFFu; /* 0x141E5B4F: or esi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141E5B52: pop edi */
    goto L_141E5B67; /* 0x141E5B53: jmp 0x141e5b67 */
L_141E5B55:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E5B55: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E5B58: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5B59: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E5B5C: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5B61: add esp, 0xc */
    _flag_k = FK_ADD;
L_141E5B64:
    MEM32(ebx + 0x2C) = esi; /* 0x141E5B64: mov dword ptr [ebx + 0x2c], esi */
L_141E5B67:
    eax = MEM32(ebp + 0x10); /* 0x141E5B67: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x141E5B6A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5B70; /* 0x141E5B6C: je 0x141e5b70 */
L_141E5B6E:
    MEM32(eax) = edi; /* 0x141E5B6E: mov dword ptr [eax], edi */
L_141E5B70:
    edi = POP32_VAL(esp); /* 0x141E5B70: pop edi */
    eax = esi; /* 0x141E5B71: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E5B73: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E5B74: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E5B75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E5B76: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E5B7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5B7Eu);

L_141E5B7E:
    edi = edi; /* 0x141E5B7E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5B80: push ebp */
    ebp = esp; /* 0x141E5B81: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141E5B83: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x141E5B86: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5BA1; /* 0x141E5B88: je 0x141e5ba1 */
L_141E5B8A:
    /* cmp MEM32(ecx + 0x14), 0 */ /* 0x141E5B8A: cmp dword ptr [ecx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E5B95; /* 0x141E5B8E: jbe 0x141e5b95 */
L_141E5B90:
    eax = MEM32(ecx + 0xC); /* 0x141E5B90: mov eax, dword ptr [ecx + 0xc] */
    goto L_141E5B97; /* 0x141E5B93: jmp 0x141e5b97 */
L_141E5B95:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5B95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5B97:
    /* cmp MEM8(eax), 0x44u */ /* 0x141E5B97: cmp byte ptr [eax], 0x44 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5BA1; /* 0x141E5B9A: jne 0x141e5ba1 */
L_141E5B9C:
    MEM32(edx + 0x14) = ecx; /* 0x141E5B9C: mov dword ptr [edx + 0x14], ecx */
    goto L_141E5BAC; /* 0x141E5B9F: jmp 0x141e5bac */
L_141E5BA1:
    /* test ecx, ecx */ /* 0x141E5BA1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5BAC; /* 0x141E5BA3: je 0x141e5bac */
L_141E5BA5:
    PUSH32(esp, 1); /* 0x141E5BA5: push 1 */
    RECOMP_CALL(sub_141E5A12); /* 0x141E5BA7: call 0x141e5a12 */
    RECOMP_FLAGS_IN();
L_141E5BAC:
    eax = MEM32(ebp + 0xC); /* 0x141E5BAC: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x141E5BAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5BB6; /* 0x141E5BB1: je 0x141e5bb6 */
L_141E5BB3:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x141E5BB3: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5BB6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5BB6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141E5BB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E5BB9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E5BC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5BC1u);

L_141E5BC1:
    edi = edi; /* 0x141E5BC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5BC3: push ebp */
    ebp = esp; /* 0x141E5BC4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5BC6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E5BC7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E5BCA: push edi */
    edi = ecx; /* 0x141E5BCB: mov edi, ecx */
    edx = MEM32(edi + 0x24); /* 0x141E5BCD: mov edx, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E5BD0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x141E5BD3: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, esi */ /* 0x141E5BD5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E5BE0; /* 0x141E5BD7: jae 0x141e5be0 */
L_141E5BD9:
    eax = 0x80004005u; /* 0x141E5BD9: mov eax, 0x80004005 */
    goto L_141E5C2C; /* 0x141E5BDE: jmp 0x141e5c2c */
L_141E5BE0:
    PUSH32(esp, ebx); /* 0x141E5BE0: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x141E5BE1: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x141E5BE4: push ebx */
    eax = edx + esi; /* 0x141E5BE5: lea eax, [edx + esi] */
    PUSH32(esp, eax); /* 0x141E5BE8: push eax */
    RECOMP_CALL(sub_141E54BF); /* 0x141E5BE9: call 0x141e54bf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5BEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5C2B; /* 0x141E5BF0: js 0x141e5c2b */
L_141E5BF2:
    ecx = MEM32(ebx); /* 0x141E5BF2: mov ecx, dword ptr [ebx] */
    eax = MEM32(ecx); /* 0x141E5BF4: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x141E5BF6: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5BF7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x141E5BFA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x141E5BFB: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x141E5BFE: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E5BFF: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx); /* 0x141E5C04: mov ecx, dword ptr [ebx] */
    eax = MEM32(ecx); /* 0x141E5C06: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5C08: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x141E5C0B: push dword ptr [edi + 0x24] */
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x141E5C0E: push dword ptr [edi + 0x1c] */
    PUSH32(esp, ecx); /* 0x141E5C11: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x141E5C12: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141E5C15: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141E5C17: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E5C18: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5C1D: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x141E5C20: push 1 */
    ecx = edi; /* 0x141E5C22: mov ecx, edi */
    RECOMP_CALL(sub_141E5A12); /* 0x141E5C24: call 0x141e5a12 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5C29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5C2B:
    ebx = POP32_VAL(esp); /* 0x141E5C2B: pop ebx */
L_141E5C2C:
    edi = POP32_VAL(esp); /* 0x141E5C2C: pop edi */
    esi = POP32_VAL(esp); /* 0x141E5C2D: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5C2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E5C2F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E5C37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5C37u);

L_141E5C37:
    edi = edi; /* 0x141E5C37: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5C39: push ebp */
    ebp = esp; /* 0x141E5C3A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E5C3C: push ecx */
    PUSH32(esp, ebx); /* 0x141E5C3D: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x141E5C3E: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x141E5C41: push esi */
    PUSH32(esp, edi); /* 0x141E5C42: push edi */
    PUSH32(esp, 0x16u); /* 0x141E5C43: push 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E5C45: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x141E5C48: mov esi, ecx */
    edi = POP32_VAL(esp); /* 0x141E5C4A: pop edi */
    /* test ebx, 0x8000u */ /* 0x141E5C4B: test ebx, 0x8000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x8000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5D16; /* 0x141E5C51: je 0x141e5d16 */
L_141E5C57:
    /* test ebx, 0xFFFF68FCu */ /* 0x141E5C57: test ebx, 0xffff68fc */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF68FCu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5D16; /* 0x141E5C5D: jne 0x141e5d16 */
L_141E5C63:
    ecx = MEM32(ebp + 0xC); /* 0x141E5C63: mov ecx, dword ptr [ebp + 0xc] */
    edx = ecx + 0x1; /* 0x141E5C66: lea edx, [ecx + 1] */
L_141E5C69:
    SET_LO8(eax, MEM8(ecx)); /* 0x141E5C69: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E5C6B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x141E5C6C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5C69; /* 0x141E5C6E: jne 0x141e5c69 */
L_141E5C70:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x141E5C70: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x141E5C72: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E5C75: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141E5C77: push edi */
    PUSH32(esp, eax); /* 0x141E5C78: push eax */
    ecx = esi + 0xC; /* 0x141E5C79: lea ecx, [esi + 0xc] */
    PUSH32(esp, edi); /* 0x141E5C7C: push edi */
    MEM32(ebp + 0x10) = eax; /* 0x141E5C7D: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_141E5927); /* 0x141E5C80: call 0x141e5927 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5C85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5C8D; /* 0x141E5C87: je 0x141e5c8d */
L_141E5C89:
    PUSH32(esp, 0xCu); /* 0x141E5C89: push 0xc */
    goto L_141E5CF0; /* 0x141E5C8B: jmp 0x141e5cf0 */
L_141E5C8D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E5C8D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5C90: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x141E5C93: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E5C96: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x141E5C9B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(ebx, LO8(ebx) & 3); /* 0x141E5C9E: and bl, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5CA1: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (LO8(ebx)) != 0;
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx))); /* 0x141E5CA4: neg bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    { uint32_t _sa = LO8(ebx), _sb = LO8(ebx), _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E5CA6: sbb bl, bl */
      SET_LO8(ebx, _sc ? 0xFFFFFFFFu : 0);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x141E5CA8: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(esi + 0x30) = (uint8_t)(LO8(ebx)); /* 0x141E5CAA: mov byte ptr [esi + 0x30], bl */
    MEM32(esi + 0x2C) = edi; /* 0x141E5CAD: mov dword ptr [esi + 0x2c], edi */
    /* test eax, eax */ /* 0x141E5CB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5D14; /* 0x141E5CB2: je 0x141e5d14 */
L_141E5CB4:
    ecx = MEM32(ebp + 0xC); /* 0x141E5CB4: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM8(ecx), 0x53u */ /* 0x141E5CB7: cmp byte ptr [ecx], 0x53 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x53u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5CFE; /* 0x141E5CBA: jne 0x141e5cfe */
L_141E5CBC:
    /* test LO8(ebx), LO8(ebx) */ /* 0x141E5CBC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5CFE; /* 0x141E5CBE: je 0x141e5cfe */
L_141E5CC0:
    eax = ebp + 0xC; /* 0x141E5CC0: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x141E5CC3: push eax */
    PUSH32(esp, ecx); /* 0x141E5CC4: push ecx */
    RECOMP_CALL(sub_141E55FB); /* 0x141E5CC5: call 0x141e55fb */
    RECOMP_FLAGS_IN();
    ecx = ebp + 0x10; /* 0x141E5CCA: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x141E5CCD: push ecx */
    ecx = ebp + (-0x4); /* 0x141E5CCE: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x141E5CD1: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x141E5CD2: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x141E5CD5: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, eax); /* 0x141E5CD8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5CD9: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_141E5526); /* 0x141E5CDC: call 0x141e5526 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x141E5CE1: mov ecx, esi */
    /* test LO8(eax), LO8(eax) */ /* 0x141E5CE3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5CF6; /* 0x141E5CE5: jne 0x141e5cf6 */
L_141E5CE7:
    PUSH32(esp, 1); /* 0x141E5CE7: push 1 */
    RECOMP_CALL(sub_141E5A12); /* 0x141E5CE9: call 0x141e5a12 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x141E5CEE: push 9 */
L_141E5CF0:
    edi = POP32_VAL(esp); /* 0x141E5CF0: pop edi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E5CF1: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E5D16; /* 0x141E5CF4: jmp 0x141e5d16 */
L_141E5CF6:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E5CF6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x141E5CF9: push dword ptr [ebp - 4] */
    goto L_141E5D0F; /* 0x141E5CFC: jmp 0x141e5d0f */
L_141E5CFE:
    /* cmp MEM8(ecx), 0x44u */ /* 0x141E5CFE: cmp byte ptr [ecx], 0x44 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5D14; /* 0x141E5D01: jne 0x141e5d14 */
L_141E5D03:
    /* test LO8(ebx), LO8(ebx) */ /* 0x141E5D03: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5D14; /* 0x141E5D05: je 0x141e5d14 */
L_141E5D07:
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x141E5D07: push dword ptr [eax + 0xc] */
    ecx = esi; /* 0x141E5D0A: mov ecx, esi */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x141E5D0C: push dword ptr [eax + 0x10] */
L_141E5D0F:
    RECOMP_CALL(sub_141E59BB); /* 0x141E5D0F: call 0x141e59bb */
    RECOMP_FLAGS_IN();
L_141E5D14:
    eax = esi; /* 0x141E5D14: mov eax, esi */
L_141E5D16:
    ecx = MEM32(ebp + 0x14); /* 0x141E5D16: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x141E5D19: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5D1F; /* 0x141E5D1B: je 0x141e5d1f */
L_141E5D1D:
    MEM32(ecx) = edi; /* 0x141E5D1D: mov dword ptr [ecx], edi */
L_141E5D1F:
    edi = POP32_VAL(esp); /* 0x141E5D1F: pop edi */
    esi = POP32_VAL(esp); /* 0x141E5D20: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E5D21: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E5D22: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141E5D23: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141E5D2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5D2Bu);

L_141E5D2B:
    edi = edi; /* 0x141E5D2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5D2D: push ebp */
    ebp = esp; /* 0x141E5D2E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5D30: push esi */
    PUSH32(esp, 0x34u); /* 0x141E5D31: push 0x34 */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E5D33: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E5D38: pop ecx */
    /* test eax, eax */ /* 0x141E5D39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5D48; /* 0x141E5D3B: je 0x141e5d48 */
L_141E5D3D:
    ecx = eax; /* 0x141E5D3D: mov ecx, eax */
    RECOMP_CALL(sub_141E59EA); /* 0x141E5D3F: call 0x141e59ea */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E5D44: mov esi, eax */
    goto L_141E5D4A; /* 0x141E5D46: jmp 0x141e5d4a */
L_141E5D48:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141E5D48: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5D4A:
    /* test esi, esi */ /* 0x141E5D4A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5D60; /* 0x141E5D4C: jne 0x141e5d60 */
L_141E5D4E:
    eax = MEM32(ebp + 0x14); /* 0x141E5D4E: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x141E5D51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5D5B; /* 0x141E5D53: je 0x141e5d5b */
L_141E5D55:
    MEM32(eax) = 0xCu; /* 0x141E5D55: mov dword ptr [eax], 0xc */
L_141E5D5B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E5D5B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E5D87; /* 0x141E5D5E: jmp 0x141e5d87 */
L_141E5D60:
    PUSH32(esp, edi); /* 0x141E5D60: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E5D61: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x141E5D64: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E5D66: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5D69: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E5D6C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E5C37); /* 0x141E5D6F: call 0x141e5c37 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E5D74: mov edi, eax */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x141E5D76: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5D84; /* 0x141E5D79: jne 0x141e5d84 */
L_141E5D7B:
    PUSH32(esp, 1); /* 0x141E5D7B: push 1 */
    ecx = esi; /* 0x141E5D7D: mov ecx, esi */
    RECOMP_CALL(sub_141E5A12); /* 0x141E5D7F: call 0x141e5a12 */
    RECOMP_FLAGS_IN();
L_141E5D84:
    eax = edi; /* 0x141E5D84: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x141E5D86: pop edi */
L_141E5D87:
    esi = POP32_VAL(esp); /* 0x141E5D87: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5D88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141E5D89: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141E5D91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5D91u);

L_141E5D91:
    edi = edi; /* 0x141E5D91: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5D93: push ebp */
    ebp = esp; /* 0x141E5D94: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5D96: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E5D97: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5D9A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(esi), 0x44u */ /* 0x141E5D9C: cmp byte ptr [esi], 0x44 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5DAF; /* 0x141E5D9F: jne 0x141e5daf */
L_141E5DA1:
    PUSH32(esp, eax); /* 0x141E5DA1: push eax */
    PUSH32(esp, eax); /* 0x141E5DA2: push eax */
    eax = esi + 0x1; /* 0x141E5DA3: lea eax, [esi + 1] */
    PUSH32(esp, eax); /* 0x141E5DA6: push eax */
    RECOMP_CALL(sub_141EC7AF); /* 0x141E5DA7: call 0x141ec7af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5DAC: add esp, 0xc */
    _flag_k = FK_ADD;
L_141E5DAF:
    PUSH32(esp, 0); /* 0x141E5DAF: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5DB1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x141E5DB4: push esi */
    PUSH32(esp, eax); /* 0x141E5DB5: push eax */
    RECOMP_CALL(sub_141E5D2B); /* 0x141E5DB6: call 0x141e5d2b */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x141E5DBB: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5DBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5DBD: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E5DC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5DC3u);

L_141E5DC3:
    edi = edi; /* 0x141E5DC3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5DC5: push ebp */
    ebp = esp; /* 0x141E5DC6: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E5DC8: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x141E5DCB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E5DCD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5DD0: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_141E574B); /* 0x141E5DD3: call 0x141e574b */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x141E5DD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5DD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E5DDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5DDFu);

L_141E5DDF:
    edi = edi; /* 0x141E5DDF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5DE1: push ebp */
    ebp = esp; /* 0x141E5DE2: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E5DE4: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x141E5DE7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E5DE9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5DEC: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_141E5A43); /* 0x141E5DEF: call 0x141e5a43 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x141E5DF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5DF5: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E5DFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5DFBu);

L_141E5DFB:
    edi = edi; /* 0x141E5DFB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5DFD: push ebp */
    ebp = esp; /* 0x141E5DFE: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E5E00: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x141E5E03: push 0 */
    PUSH32(esp, 0); /* 0x141E5E05: push 0 */
    RECOMP_CALL(sub_141E5B7E); /* 0x141E5E07: call 0x141e5b7e */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x141E5E0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5E0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E5E13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5E13u);

L_141E5E13:
    edi = edi; /* 0x141E5E13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5E15: push ebp */
    ebp = esp; /* 0x141E5E16: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x141E5E18: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x141E5E1B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E5E1D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E5E20: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_141E5AE2); /* 0x141E5E23: call 0x141e5ae2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x141E5E28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E5E29: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E5E2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5E2Fu);

L_141E5E2F:
    edi = edi; /* 0x141E5E2F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5E31: push ebp */
    ebp = esp; /* 0x141E5E32: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E5E34: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x24) = eax; /* 0x141E5E37: mov dword ptr [ecx + 0x24], eax */
    eax = MEM32(ebp + 0xC); /* 0x141E5E3A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x28) = eax; /* 0x141E5E3D: mov dword ptr [ecx + 0x28], eax */
    eax = MEM32(ebp + 0x10); /* 0x141E5E40: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x2C) = eax; /* 0x141E5E43: mov dword ptr [ecx + 0x2c], eax */
    eax = MEM32(ebp + 0x14); /* 0x141E5E46: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x30) = eax; /* 0x141E5E49: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(ebp + 0x18); /* 0x141E5E4C: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0x34) = eax; /* 0x141E5E4F: mov dword ptr [ecx + 0x34], eax */
    eax = MEM32(ebp + 0x1C); /* 0x141E5E52: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ecx + 0x38) = eax; /* 0x141E5E55: mov dword ptr [ecx + 0x38], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x141E5E58: add ecx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_141E5681); /* 0x141E5E5B: call 0x141e5681 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x141E5E60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x141E5E61: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_141E5E69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5E69u);

L_141E5E69:
    edi = edi; /* 0x141E5E69: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5E6B: push ebp */
    ebp = esp; /* 0x141E5E6C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E5E6E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x141E5E6F: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x141E5E72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E5E7D; /* 0x141E5E74: jne 0x141e5e7d */
L_141E5E76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5E76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E5F2F; /* 0x141E5E78: jmp 0x141e5f2f */
L_141E5E7D:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x141E5E7D: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E5E81: push ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E5EAE; /* 0x141E5E82: je 0x141e5eae */
L_141E5E84:
    PUSH32(esp, esi); /* 0x141E5E84: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E5E85: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_141E54BF); /* 0x141E5E88: call 0x141e54bf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5E8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5F2E; /* 0x141E5E8F: js 0x141e5f2e */
L_141E5E95:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E5E95: push dword ptr [ebp + 0x10] */
    ecx = MEM32(esi); /* 0x141E5E98: mov ecx, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E5E9A: push dword ptr [ebp + 0x14] */
    eax = MEM32(ecx); /* 0x141E5E9D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x141E5E9F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x141E5EA0: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x141E5EA3: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E5EA4: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E5EA9: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_141E5F2C; /* 0x141E5EAC: jmp 0x141e5f2c */
L_141E5EAE:
    /* cmp MEM8(ebp + 0x18), 0 */ /* 0x141E5EAE: cmp byte ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E5EED; /* 0x141E5EB2: je 0x141e5eed */
L_141E5EB4:
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x141E5EB4: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = 0x140017DCu; /* 0x141E5EB8: mov ebx, 0x140017dc */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5ED3; /* 0x141E5EBD: jne 0x141e5ed3 */
L_141E5EBF:
    ecx = MEM32(ebp + 0x8); /* 0x141E5EBF: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x141E5EC2: push ebx */
    PUSH32(esp, 8); /* 0x141E5EC3: push 8 */
    PUSH32(esp, 0x4E475349u); /* 0x141E5EC5: push 0x4e475349 */
    RECOMP_CALL(sub_141E9C14); /* 0x141E5ECA: call 0x141e9c14 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5ECF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5F2E; /* 0x141E5ED1: js 0x141e5f2e */
L_141E5ED3:
    /* cmp MEM8(ebp + 0x20), 0 */ /* 0x141E5ED3: cmp byte ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x20)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E5EED; /* 0x141E5ED7: jne 0x141e5eed */
L_141E5ED9:
    ecx = MEM32(ebp + 0x8); /* 0x141E5ED9: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x141E5EDC: push ebx */
    PUSH32(esp, 8); /* 0x141E5EDD: push 8 */
    PUSH32(esp, 0x4E47534Fu); /* 0x141E5EDF: push 0x4e47534f */
    RECOMP_CALL(sub_141E9C14); /* 0x141E5EE4: call 0x141e9c14 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5EE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5F2E; /* 0x141E5EEB: js 0x141e5f2e */
L_141E5EED:
    ecx = MEM32(ebp + 0x8); /* 0x141E5EED: mov ecx, dword ptr [ebp + 8] */
    ebx = 0x141EA0CBu; /* 0x141E5EF0: mov ebx, 0x141ea0cb */
    PUSH32(esp, ebx); /* 0x141E5EF5: push ebx */
    eax = ebp + 0x18; /* 0x141E5EF6: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x141E5EF9: push eax */
    PUSH32(esp, 0); /* 0x141E5EFA: push 0 */
    RECOMP_CALL(sub_141E9CE8); /* 0x141E5EFC: call 0x141e9ce8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5F01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5F2E; /* 0x141E5F03: js 0x141e5f2e */
L_141E5F05:
    PUSH32(esp, esi); /* 0x141E5F05: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x141E5F06: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_141E54BF); /* 0x141E5F09: call 0x141e54bf */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5F0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5F2E; /* 0x141E5F10: js 0x141e5f2e */
L_141E5F12:
    edx = MEM32(esi); /* 0x141E5F12: mov edx, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x141E5F14: push ebx */
    eax = ebp + 0x18; /* 0x141E5F15: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x141E5F18: push eax */
    eax = MEM32(edx); /* 0x141E5F19: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x141E5F1B: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x141E5F1C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x141E5F1F: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E5F22: push eax */
    RECOMP_CALL(sub_141E9CE8); /* 0x141E5F23: call 0x141e9ce8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E5F28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5F2E; /* 0x141E5F2A: js 0x141e5f2e */
L_141E5F2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5F2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5F2E:
    ebx = POP32_VAL(esp); /* 0x141E5F2E: pop ebx */
L_141E5F2F:
    esi = POP32_VAL(esp); /* 0x141E5F2F: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5F30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x141E5F31: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_141E5F39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5F39u);

L_141E5F39:
    edi = edi; /* 0x141E5F39: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5F3B: push ebp */
    ebp = esp; /* 0x141E5F3C: mov ebp, esp */
    eax = MEM32(ecx + 0x34); /* 0x141E5F3E: mov eax, dword ptr [ecx + 0x34] */
    PUSH32(esp, esi); /* 0x141E5F41: push esi */
    /* test eax, eax */ /* 0x141E5F42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5F6C; /* 0x141E5F44: je 0x141e5f6c */
L_141E5F46:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E5F46: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x2C), edx */ /* 0x141E5F48: cmp dword ptr [ecx + 0x2c], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E5F5D; /* 0x141E5F4B: jbe 0x141e5f5d */
L_141E5F4D:
    esi = MEM32(ebp + 0x8); /* 0x141E5F4D: mov esi, dword ptr [ebp + 8] */
L_141E5F50:
    /* cmp MEM32(eax), esi */ /* 0x141E5F50: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E5F64; /* 0x141E5F52: je 0x141e5f64 */
L_141E5F54:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E5F54: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x141E5F55: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ecx + 0x2C) */ /* 0x141E5F58: cmp edx, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E5F50; /* 0x141E5F5B: jb 0x141e5f50 */
L_141E5F5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E5F5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E5F5F:
    esi = POP32_VAL(esp); /* 0x141E5F5F: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E5F60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E5F61: ret 4 */
L_141E5F64:
    eax = MEM32(ecx + 0x38); /* 0x141E5F64: mov eax, dword ptr [ecx + 0x38] */
    eax = eax + edx * 4; /* 0x141E5F67: lea eax, [eax + edx*4] */
    RECOMP_BACKEDGE();
    goto L_141E5F5F; /* 0x141E5F6A: jmp 0x141e5f5f */
L_141E5F6C:
    edx = MEM32(ebp + 0x8); /* 0x141E5F6C: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ecx + 0x30) */ /* 0x141E5F6F: cmp edx, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E5F5D; /* 0x141E5F72: jb 0x141e5f5d */
L_141E5F74:
    eax = MEM32(ecx + 0x2C); /* 0x141E5F74: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x30); /* 0x141E5F77: add eax, dword ptr [ecx + 0x30] */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x141E5F7A: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E5F5D; /* 0x141E5F7C: jae 0x141e5f5d */
L_141E5F7E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + 0x30); /* 0x141E5F7E: sub edx, dword ptr [ecx + 0x30] */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_141E5F64; /* 0x141E5F81: jmp 0x141e5f64 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E5F88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5F88u);

L_141E5F88:
    edi = edi; /* 0x141E5F88: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5F8A: push ebp */
    ebp = esp; /* 0x141E5F8B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E5F8D: push ecx */
    PUSH32(esp, esi); /* 0x141E5F8E: push esi */
    PUSH32(esp, edi); /* 0x141E5F8F: push edi */
    eax = ebp + (-0x4); /* 0x141E5F90: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E5F93: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E5F94: push dword ptr [ebp + 8] */
    edi = ecx; /* 0x141E5F97: mov edi, ecx */
    RECOMP_CALL(sub_141E55FB); /* 0x141E5F99: call 0x141e55fb */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E5F9E: mov esi, eax */
    /* cmp esi, MEM32(edi) */ /* 0x141E5FA0: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E5FA9; /* 0x141E5FA2: jb 0x141e5fa9 */
L_141E5FA4:
    ecx = esi + 0x1; /* 0x141E5FA4: lea ecx, [esi + 1] */
    MEM32(edi) = ecx; /* 0x141E5FA7: mov dword ptr [edi], ecx */
L_141E5FA9:
    PUSH32(esp, esi); /* 0x141E5FA9: push esi */
    ecx = edi; /* 0x141E5FAA: mov ecx, edi */
    RECOMP_CALL(sub_141E5F39); /* 0x141E5FAC: call 0x141e5f39 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E5FB1: mov edi, eax */
    /* test edi, edi */ /* 0x141E5FB3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E5FDB; /* 0x141E5FB5: je 0x141e5fdb */
L_141E5FB7:
    PUSH32(esp, 0); /* 0x141E5FB7: push 0 */
    PUSH32(esp, 0x8002u); /* 0x141E5FB9: push 0x8002 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E5FBE: push dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x141E5FC1: push 0 */
    RECOMP_CALL(sub_141E5D2B); /* 0x141E5FC3: call 0x141e5d2b */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141E5FC8: mov ecx, eax */
    /* test ecx, ecx */ /* 0x141E5FCA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E5FDB; /* 0x141E5FCC: jle 0x141e5fdb */
L_141E5FCE:
    MEM32(ecx) = edi; /* 0x141E5FCE: mov dword ptr [ecx], edi */
    MEM32(ecx + 0x4) = esi; /* 0x141E5FD0: mov dword ptr [ecx + 4], esi */
    eax = MEM32(ebp + (-0x4)); /* 0x141E5FD3: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E5FD6: mov dword ptr [ecx + 8], eax */
    eax = ecx; /* 0x141E5FD9: mov eax, ecx */
L_141E5FDB:
    edi = POP32_VAL(esp); /* 0x141E5FDB: pop edi */
    esi = POP32_VAL(esp); /* 0x141E5FDC: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E5FDD: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E5FDE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E5FE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E5FE6u);

L_141E5FE6:
    edi = edi; /* 0x141E5FE6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E5FE8: push ebp */
    ebp = esp; /* 0x141E5FE9: mov ebp, esp */
    edx = MEM32(ecx + 0x3C); /* 0x141E5FEB: mov edx, dword ptr [ecx + 0x3c] */
    PUSH32(esp, esi); /* 0x141E5FEE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E5FEF: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E5FF2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E5FF3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x141E5FF5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E6019; /* 0x141E5FF7: je 0x141e6019 */
L_141E5FF9:
    eax = MEM32(esi + 0x4); /* 0x141E5FF9: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, ebx); /* 0x141E5FFC: push ebx */
    ebx = MEM32(eax + 0x4); /* 0x141E5FFD: mov ebx, dword ptr [eax + 4] */
L_141E6000:
    eax = MEM32(edx + 0x4); /* 0x141E6000: mov eax, dword ptr [edx + 4] */
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x141E6003: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E6010; /* 0x141E6006: je 0x141e6010 */
L_141E6008:
    edi = edx; /* 0x141E6008: mov edi, edx */
    edx = MEM32(edx); /* 0x141E600A: mov edx, dword ptr [edx] */
    /* test edx, edx */ /* 0x141E600C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E6000; /* 0x141E600E: jne 0x141e6000 */
L_141E6010:
    ebx = POP32_VAL(esp); /* 0x141E6010: pop ebx */
    /* test edi, edi */ /* 0x141E6011: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E6019; /* 0x141E6013: je 0x141e6019 */
L_141E6015:
    MEM32(edi) = esi; /* 0x141E6015: mov dword ptr [edi], esi */
    goto L_141E601C; /* 0x141E6017: jmp 0x141e601c */
L_141E6019:
    MEM32(ecx + 0x3C) = esi; /* 0x141E6019: mov dword ptr [ecx + 0x3c], esi */
L_141E601C:
    edi = POP32_VAL(esp); /* 0x141E601C: pop edi */
    MEM32(esi) = edx; /* 0x141E601D: mov dword ptr [esi], edx */
    esi = POP32_VAL(esp); /* 0x141E601F: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E6020: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E6021: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E6029(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6029u);

L_141E6029:
    edi = edi; /* 0x141E6029: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E602B: push ebp */
    ebp = esp; /* 0x141E602C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E602E: push esi */
    PUSH32(esp, 8); /* 0x141E602F: push 8 */
    esi = ecx; /* 0x141E6031: mov esi, ecx */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E6033: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x141E6038: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x141E603A: pop ecx */
    /* test edx, edx */ /* 0x141E603B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E6052; /* 0x141E603D: jne 0x141e6052 */
L_141E603F:
    ecx = MEM32(ebp + 0xC); /* 0x141E603F: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x141E6042: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E604D; /* 0x141E6044: je 0x141e604d */
L_141E6046:
    PUSH32(esp, 1); /* 0x141E6046: push 1 */
    RECOMP_CALL(sub_141E5A12); /* 0x141E6048: call 0x141e5a12 */
    RECOMP_FLAGS_IN();
L_141E604D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E604D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E6063; /* 0x141E6050: jmp 0x141e6063 */
L_141E6052:
    eax = MEM32(ebp + 0xC); /* 0x141E6052: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edx); /* 0x141E6055: push edx */
    ecx = esi; /* 0x141E6056: mov ecx, esi */
    MEM32(edx + 0x4) = eax; /* 0x141E6058: mov dword ptr [edx + 4], eax */
    RECOMP_CALL(sub_141E5FE6); /* 0x141E605B: call 0x141e5fe6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E6060: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141E6062: inc eax */
    _flag_k = FK_INC;
L_141E6063:
    esi = POP32_VAL(esp); /* 0x141E6063: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E6064: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E6065: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E606D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E606Du);

L_141E606D:
    edi = edi; /* 0x141E606D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E606F: push ebp */
    ebp = esp; /* 0x141E6070: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E6072: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x141E6075: sub eax, 0 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x141E6078: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ecx + 0x10); /* 0x141E607B: mov edx, dword ptr [ecx + 0x10] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E60B1; /* 0x141E607E: je 0x141e60b1 */
L_141E6080:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E6080: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E608F; /* 0x141E6081: je 0x141e608f */
L_141E6083:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E6083: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E60A4; /* 0x141E6084: je 0x141e60a4 */
L_141E6086:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E6086: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E6094; /* 0x141E6087: je 0x141e6094 */
L_141E6089:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E6089: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E608F; /* 0x141E608A: je 0x141e608f */
L_141E608C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E608C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E60B1; /* 0x141E608D: je 0x141e60b1 */
L_141E608F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x141E608F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141E6092: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6093: ret  */
L_141E6094:
    PUSH32(esp, MEM32(ecx + 0x14)); /* 0x141E6094: push dword ptr [ecx + 0x14] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x141E6097: push dword ptr [ecx + 4] */
    ecx = MEM32(edx + 0x8); /* 0x141E609A: mov ecx, dword ptr [edx + 8] */
    RECOMP_CALL(sub_141E6029); /* 0x141E609D: call 0x141e6029 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x141E60A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E60A3: ret  */
L_141E60A4:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x141E60A4: push dword ptr [ecx + 4] */
    ecx = MEM32(edx + 0x8); /* 0x141E60A7: mov ecx, dword ptr [edx + 8] */
    RECOMP_CALL(sub_141E5F88); /* 0x141E60AA: call 0x141e5f88 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x141E60AF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E60B0: ret  */
L_141E60B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E60B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141E60B3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E60B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E60BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E60BAu);

L_141E60BA:
    edi = edi; /* 0x141E60BA: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E60BC: push esi */
    PUSH32(esp, edi); /* 0x141E60BD: push edi */
    edi = ecx; /* 0x141E60BE: mov edi, ecx */
    goto L_141E60DC; /* 0x141E60C0: jmp 0x141e60dc */
L_141E60C2:
    eax = MEM32(esi); /* 0x141E60C2: mov eax, dword ptr [esi] */
    MEM32(edi + 0x3C) = eax; /* 0x141E60C4: mov dword ptr [edi + 0x3c], eax */
    ecx = MEM32(esi + 0x4); /* 0x141E60C7: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x141E60CA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E60D5; /* 0x141E60CC: je 0x141e60d5 */
L_141E60CE:
    PUSH32(esp, 1); /* 0x141E60CE: push 1 */
    RECOMP_CALL(sub_141E5A12); /* 0x141E60D0: call 0x141e5a12 */
    RECOMP_FLAGS_IN();
L_141E60D5:
    PUSH32(esp, esi); /* 0x141E60D5: push esi */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E60D6: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E60DB: pop ecx */
L_141E60DC:
    esi = MEM32(edi + 0x3C); /* 0x141E60DC: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x141E60DF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E60C2; /* 0x141E60E1: jne 0x141e60c2 */
L_141E60E3:
    /* cmp MEM32(edi + 0x20), esi */ /* 0x141E60E3: cmp dword ptr [edi + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E60F1; /* 0x141E60E6: je 0x141e60f1 */
L_141E60E8:
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x141E60E8: push dword ptr [edi + 0x20] */
    RECOMP_ICALL(MEM32(0x14001084)); /* 0x141E60EB: call dword ptr [0x14001084] */
    RECOMP_FLAGS_IN();
L_141E60F1:
    edi = POP32_VAL(esp); /* 0x141E60F1: pop edi */
    esi = POP32_VAL(esp); /* 0x141E60F2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E60F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E60F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E60F9u);

L_141E60F9:
    edi = edi; /* 0x141E60F9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E60FB: push ebp */
    ebp = esp; /* 0x141E60FC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x88u; /* 0x141E60FE: sub esp, 0x88 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141E6104: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141E6109: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141E610B: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x88)) = MEM32(ebp + (-0x88)) & 0; /* 0x141E610E: and dword ptr [ebp - 0x88], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x141E6115: push ebx */
    PUSH32(esp, esi); /* 0x141E6116: push esi */
    PUSH32(esp, edi); /* 0x141E6117: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E6118: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x84); /* 0x141E611A: lea edi, [ebp - 0x84] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E6120: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E6121: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E6122: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E6123: stosd dword ptr es:[edi], eax */
    ebx = ecx; /* 0x141E6124: mov ebx, ecx */
    ecx = ebp + (-0x70); /* 0x141E6126: lea ecx, [ebp - 0x70] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x141E6129: stosd dword ptr es:[edi], eax */
    MEM8(ebp + (-0x70)) = (uint8_t)(0); /* 0x141E612A: mov byte ptr [ebp - 0x70], 0 */
    RECOMP_CALL(sub_141E9B96); /* 0x141E612E: call 0x141e9b96 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x2C); /* 0x141E6133: mov eax, dword ptr [ebx + 0x2c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x141E6136: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x141E6136: shl eax, 2 */
    PUSH32(esp, eax); /* 0x141E6139: push eax */
    PUSH32(esp, 0); /* 0x141E613A: push 0 */
    PUSH32(esp, MEM32(ebx + 0x38)); /* 0x141E613C: push dword ptr [ebx + 0x38] */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E613F: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x24); /* 0x141E6144: mov eax, dword ptr [ebx + 0x24] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x141E6147: mov dword ptr [ebp - 0x7c], eax */
    eax = MEM32(ebx + 0x28); /* 0x141E614A: mov eax, dword ptr [ebx + 0x28] */
    MEM32(ebp + (-0x78)) = eax; /* 0x141E614D: mov dword ptr [ebp - 0x78], eax */
    eax = ebp + (-0x44); /* 0x141E6150: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x141E6153: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x141E6154: push -1 */
    PUSH32(esp, 0x141E5E13u); /* 0x141E6156: push 0x141e5e13 */
    PUSH32(esp, 0x141E5DFBu); /* 0x141E615B: push 0x141e5dfb */
    PUSH32(esp, 0x141E5DDFu); /* 0x141E6160: push 0x141e5ddf */
    PUSH32(esp, 0x141E5DC3u); /* 0x141E6165: push 0x141e5dc3 */
    PUSH32(esp, 0x141E5D91u); /* 0x141E616A: push 0x141e5d91 */
    PUSH32(esp, 0x141E5671u); /* 0x141E616F: push 0x141e5671 */
    PUSH32(esp, 0x141E5661u); /* 0x141E6174: push 0x141e5661 */
    MEM32(ebp + (-0x80)) = ebx; /* 0x141E6179: mov dword ptr [ebp - 0x80], ebx */
    RECOMP_ICALL(MEM32(ebx + 0x14)); /* 0x141E617C: call dword ptr [ebx + 0x14] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E617F: mov edi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x30u; /* 0x141E6181: add esp, 0x30 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x141E6184: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E6192; /* 0x141E6186: jne 0x141e6192 */
L_141E6188:
    esi = 0x8007000Eu; /* 0x141E6188: mov esi, 0x8007000e */
    goto L_141E62FF; /* 0x141E618D: jmp 0x141e62ff */
L_141E6192:
    PUSH32(esp, 0); /* 0x141E6192: push 0 */
    eax = ebp + (-0x88); /* 0x141E6194: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x141E619A: push eax */
    PUSH32(esp, 0x14001844u); /* 0x141E619B: push 0x14001844 */
    eax = ebp + (-0x38); /* 0x141E61A0: lea eax, [ebp - 0x38] */
    PUSH32(esp, 0x32u); /* 0x141E61A3: push 0x32 */
    PUSH32(esp, eax); /* 0x141E61A5: push eax */
    RECOMP_CALL(sub_140683B0); /* 0x141E61A6: call 0x140683b0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E61AB: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x141E61AD: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x141E61B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E62FD; /* 0x141E61B2: js 0x141e62fd */
L_141E61B8:
    eax = ebp + (-0x88); /* 0x141E61B8: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x141E61BE: push eax */
    PUSH32(esp, 0); /* 0x141E61BF: push 0 */
    PUSH32(esp, 0x141E606Du); /* 0x141E61C1: push 0x141e606d */
    PUSH32(esp, 0); /* 0x141E61C6: push 0 */
    eax = ebp + (-0x38); /* 0x141E61C8: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x141E61CB: push eax */
    PUSH32(esp, 0x14033E93u); /* 0x141E61CC: push 0x14033e93 */
    PUSH32(esp, edi); /* 0x141E61D1: push edi */
    RECOMP_ICALL(MEM32(ebx + 0x18)); /* 0x141E61D2: call dword ptr [ebx + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x141E61D5: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141E61D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E61E6; /* 0x141E61DA: jne 0x141e61e6 */
L_141E61DC:
    esi = 0x80004005u; /* 0x141E61DC: mov esi, 0x80004005 */
    goto L_141E62FF; /* 0x141E61E1: jmp 0x141e62ff */
L_141E61E6:
    PUSH32(esp, edi); /* 0x141E61E6: push edi */
    RECOMP_ICALL(MEM32(ebx + 0x1C)); /* 0x141E61E7: call dword ptr [ebx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x3C); /* 0x141E61EA: mov edi, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E61ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x141E61EF: pop ecx */
    edx = eax; /* 0x141E61F0: mov edx, eax */
    ecx = eax; /* 0x141E61F2: mov ecx, eax */
    esi = eax; /* 0x141E61F4: mov esi, eax */
    MEM32(ebp + (-0x5C)) = edx; /* 0x141E61F6: mov dword ptr [ebp - 0x5c], edx */
    MEM32(ebp + (-0x54)) = ecx; /* 0x141E61F9: mov dword ptr [ebp - 0x54], ecx */
    MEM8(ebp + (-0x48)) = (uint8_t)(LO8(eax)); /* 0x141E61FC: mov byte ptr [ebp - 0x48], al */
    MEM8(ebp + (-0x50)) = (uint8_t)(LO8(eax)); /* 0x141E61FF: mov byte ptr [ebp - 0x50], al */
    MEM8(ebp + (-0x4C)) = (uint8_t)(LO8(eax)); /* 0x141E6202: mov byte ptr [ebp - 0x4c], al */
    MEM32(ebp + (-0x58)) = esi; /* 0x141E6205: mov dword ptr [ebp - 0x58], esi */
    /* test edi, edi */ /* 0x141E6208: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E62DC; /* 0x141E620A: je 0x141e62dc */
L_141E6210:
    eax = MEM32(edi + 0x4); /* 0x141E6210: mov eax, dword ptr [edi + 4] */
    /* cmp MEM32(eax), esi */ /* 0x141E6213: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E625B; /* 0x141E6215: je 0x141e625b */
L_141E6217:
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x141E6217: push dword ptr [ebp - 0x4c] */
    eax = ebp + (-0x70); /* 0x141E621A: lea eax, [ebp - 0x70] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x141E621D: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x141E6220: push dword ptr [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x141E6223: push ecx */
    PUSH32(esp, edx); /* 0x141E6224: push edx */
    PUSH32(esp, esi); /* 0x141E6225: push esi */
    PUSH32(esp, eax); /* 0x141E6226: push eax */
    ecx = ebx; /* 0x141E6227: mov ecx, ebx */
    RECOMP_CALL(sub_141E5E69); /* 0x141E6229: call 0x141e5e69 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E622E: mov esi, eax */
    /* test esi, esi */ /* 0x141E6230: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E62FD; /* 0x141E6232: js 0x141e62fd */
L_141E6238:
    ecx = ebp + (-0x70); /* 0x141E6238: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_141E9BF1); /* 0x141E623B: call 0x141e9bf1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x141E6240: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax); /* 0x141E6243: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E6245: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x58)) = ecx; /* 0x141E6247: mov dword ptr [ebp - 0x58], ecx */
    ecx = edx; /* 0x141E624A: mov ecx, edx */
    MEM32(ebp + (-0x5C)) = edx; /* 0x141E624C: mov dword ptr [ebp - 0x5c], edx */
    MEM32(ebp + (-0x54)) = ecx; /* 0x141E624F: mov dword ptr [ebp - 0x54], ecx */
    MEM8(ebp + (-0x48)) = (uint8_t)(LO8(edx)); /* 0x141E6252: mov byte ptr [ebp - 0x48], dl */
    MEM8(ebp + (-0x50)) = (uint8_t)(LO8(edx)); /* 0x141E6255: mov byte ptr [ebp - 0x50], dl */
    MEM8(ebp + (-0x4C)) = (uint8_t)(LO8(edx)); /* 0x141E6258: mov byte ptr [ebp - 0x4c], dl */
L_141E625B:
    /* test ecx, ecx */ /* 0x141E625B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E61DC; /* 0x141E625D: jne 0x141e61dc */
L_141E6263:
    eax = MEM32(eax + 0x8); /* 0x141E6263: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30303030u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x30303030u; /* 0x141E6266: sub eax, 0x30303030 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E62C0; /* 0x141E626B: je 0x141e62c0 */
L_141E626D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0517231Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x0517231Fu; /* 0x141E626D: sub eax, 0x517231f */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E629A; /* 0x141E6272: je 0x141e629a */
L_141E6274:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18FFFFFAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x18FFFFFAu; /* 0x141E6274: sub eax, 0x18fffffa */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E6294; /* 0x141E6279: je 0x141e6294 */
L_141E627B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x141E627B: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E629A; /* 0x141E627E: je 0x141e629a */
L_141E6280:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x03FCF504u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x03FCF504u; /* 0x141E6280: sub eax, 0x3fcf504 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E628E; /* 0x141E6285: je 0x141e628e */
L_141E6287:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x06010000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x06010000u; /* 0x141E6287: sub eax, 0x6010000 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_141E629E; /* 0x141E628C: jne 0x141e629e */
L_141E628E:
    MEM8(ebp + (-0x48)) = (uint8_t)(1); /* 0x141E628E: mov byte ptr [ebp - 0x48], 1 */
    goto L_141E629E; /* 0x141E6292: jmp 0x141e629e */
L_141E6294:
    MEM8(ebp + (-0x50)) = (uint8_t)(1); /* 0x141E6294: mov byte ptr [ebp - 0x50], 1 */
    goto L_141E629E; /* 0x141E6298: jmp 0x141e629e */
L_141E629A:
    MEM8(ebp + (-0x4C)) = (uint8_t)(1); /* 0x141E629A: mov byte ptr [ebp - 0x4c], 1 */
L_141E629E:
    eax = MEM32(edi + 0x4); /* 0x141E629E: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(eax + 0x1C)); /* 0x141E62A1: push dword ptr [eax + 0x1c] */
    ecx = ebp + (-0x70); /* 0x141E62A4: lea ecx, [ebp - 0x70] */
    PUSH32(esp, MEM32(eax + 0x24)); /* 0x141E62A7: push dword ptr [eax + 0x24] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x141E62AA: push dword ptr [eax + 8] */
    RECOMP_CALL(sub_141E9C14); /* 0x141E62AD: call 0x141e9c14 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E62B2: mov esi, eax */
    /* test esi, esi */ /* 0x141E62B4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E62FD; /* 0x141E62B6: js 0x141e62fd */
L_141E62B8:
    ecx = MEM32(ebp + (-0x54)); /* 0x141E62B8: mov ecx, dword ptr [ebp - 0x54] */
    edx = MEM32(ebp + (-0x5C)); /* 0x141E62BB: mov edx, dword ptr [ebp - 0x5c] */
    goto L_141E62CF; /* 0x141E62BE: jmp 0x141e62cf */
L_141E62C0:
    eax = MEM32(edi + 0x4); /* 0x141E62C0: mov eax, dword ptr [edi + 4] */
    edx = MEM32(eax + 0x24); /* 0x141E62C3: mov edx, dword ptr [eax + 0x24] */
    ecx = MEM32(eax + 0x1C); /* 0x141E62C6: mov ecx, dword ptr [eax + 0x1c] */
    MEM32(ebp + (-0x5C)) = edx; /* 0x141E62C9: mov dword ptr [ebp - 0x5c], edx */
    MEM32(ebp + (-0x54)) = ecx; /* 0x141E62CC: mov dword ptr [ebp - 0x54], ecx */
L_141E62CF:
    edi = MEM32(edi); /* 0x141E62CF: mov edi, dword ptr [edi] */
    esi = MEM32(ebp + (-0x58)); /* 0x141E62D1: mov esi, dword ptr [ebp - 0x58] */
    /* test edi, edi */ /* 0x141E62D4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E6210; /* 0x141E62D6: jne 0x141e6210 */
L_141E62DC:
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x141E62DC: push dword ptr [ebp - 0x4c] */
    eax = ebp + (-0x70); /* 0x141E62DF: lea eax, [ebp - 0x70] */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x141E62E2: push dword ptr [ebp - 0x50] */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x141E62E5: push dword ptr [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x141E62E8: push ecx */
    PUSH32(esp, edx); /* 0x141E62E9: push edx */
    PUSH32(esp, esi); /* 0x141E62EA: push esi */
    PUSH32(esp, eax); /* 0x141E62EB: push eax */
    ecx = ebx; /* 0x141E62EC: mov ecx, ebx */
    RECOMP_CALL(sub_141E5E69); /* 0x141E62EE: call 0x141e5e69 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E62F3: mov esi, eax */
    /* test esi, esi */ /* 0x141E62F5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E62FD; /* 0x141E62F7: js 0x141e62fd */
L_141E62F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141E62F9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x141E62FB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
L_141E62FD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E6325; /* 0x141E62FD: je 0x141e6325 */
L_141E62FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E62FF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x2C), edi */ /* 0x141E6301: cmp dword ptr [ebx + 0x2c], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E6325; /* 0x141E6304: jbe 0x141e6325 */
L_141E6306:
    eax = MEM32(ebx + 0x38); /* 0x141E6306: mov eax, dword ptr [ebx + 0x38] */
    /* cmp MEM32(eax + edi * 4), 0 */ /* 0x141E6309: cmp dword ptr [eax + edi*4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E631F; /* 0x141E630D: je 0x141e631f */
L_141E630F:
    eax = MEM32(eax + edi * 4); /* 0x141E630F: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(eax); /* 0x141E6312: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x141E6314: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x141E6315: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x38); /* 0x141E6318: mov eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0; /* 0x141E631B: and dword ptr [eax + edi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E631F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141E631F: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebx + 0x2C) */ /* 0x141E6320: cmp edi, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E6306; /* 0x141E6323: jb 0x141e6306 */
L_141E6325:
    ecx = ebp + (-0x70); /* 0x141E6325: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_141E9BAE); /* 0x141E6328: call 0x141e9bae */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x141E632D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x141E6330: pop edi */
    eax = esi; /* 0x141E6331: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E6333: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141E6334: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141E6336: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x141E6337: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E633C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E633D: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6343(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6343u);

L_141E6343:
    edi = edi; /* 0x141E6343: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6345: push ebp */
    ebp = esp; /* 0x141E6346: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x141E6348: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x141E634B: push esi */
    PUSH32(esp, edi); /* 0x141E634C: push edi */
    PUSH32(esp, 8); /* 0x141E634D: push 8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E634F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x141E6351: pop ecx */
    edi = ebp + (-0x3C); /* 0x141E6352: lea edi, [ebp - 0x3c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x141E6355: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + 0x8); /* 0x141E6357: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E635A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = edi; /* 0x141E635C: mov dword ptr [ebp - 0x40], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x141E635F: mov dword ptr [ebp - 4], edi */
    /* test ecx, ecx */ /* 0x141E6362: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E6364: je 0x141e63f2 */
L_141E636A:
    eax = MEM32(ebp + 0xC); /* 0x141E636A: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 0x7FFFFFFFu */ /* 0x141E636D: cmp eax, 0x7fffffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E6372: ja 0x141e63f2 */
L_141E6374:
    /* cmp MEM32(ebp + 0x20), edi */ /* 0x141E6374: cmp dword ptr [ebp + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E6377: je 0x141e63f2 */
L_141E6379:
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x141E6379: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E637C: jne 0x141e63f2 */
L_141E637E:
    /* cmp eax, 0x20u */ /* 0x141E637E: cmp eax, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E6381: jb 0x141e63f2 */
L_141E6383:
    /* cmp MEM32(ecx), 0x44435342u */ /* 0x141E6383: cmp dword ptr [ecx], 0x44435342 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0x44435342u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E6389: jne 0x141e63f2 */
L_141E638B:
    /* cmp MEM16(ecx + 0x4), 1 */ /* 0x141E638B: cmp word ptr [ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM16(ecx + 0x4)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E6390: jne 0x141e63f2 */
L_141E6392:
    /* cmp MEM16(ecx + 0x6), 1 */ /* 0x141E6392: cmp word ptr [ecx + 6], 1 */
    _flag_a = (uint32_t)(MEM16(ecx + 0x6)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E6397: jne 0x141e63f2 */
L_141E6399:
    /* cmp MEM32(ecx + 0x8), edi */ /* 0x141E6399: cmp dword ptr [ecx + 8], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E639C: jne 0x141e63f2 */
L_141E639E:
    /* cmp MEM32(ecx + 0x10), edi */ /* 0x141E639E: cmp dword ptr [ecx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E63A1: jne 0x141e63f2 */
L_141E63A3:
    /* cmp MEM32(ecx + 0x14), edi */ /* 0x141E63A3: cmp dword ptr [ecx + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E63A6: jne 0x141e63f2 */
L_141E63A8:
    /* cmp MEM32(ecx + 0x18), edi */ /* 0x141E63A8: cmp dword ptr [ecx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E63AB: jne 0x141e63f2 */
L_141E63AD:
    /* cmp MEM32(ecx + 0x1C), edi */ /* 0x141E63AD: cmp dword ptr [ecx + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E63F2; /* 0x141E63B0: jne 0x141e63f2 */
L_141E63B2:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x141E63B2: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFE0u; /* 0x141E63B5: add eax, -0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x141E63B8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x141E63BB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E63BE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x141E63C1: push eax */
    eax = ecx + 0x20; /* 0x141E63C2: lea eax, [ecx + 0x20] */
    PUSH32(esp, eax); /* 0x141E63C5: push eax */
    ecx = ebp + (-0x40); /* 0x141E63C6: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_141E5E2F); /* 0x141E63C9: call 0x141e5e2f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E63CE: mov esi, eax */
    /* test esi, esi */ /* 0x141E63D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E63F7; /* 0x141E63D2: js 0x141e63f7 */
L_141E63D4:
    ecx = ebp + (-0x40); /* 0x141E63D4: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_141E60F9); /* 0x141E63D7: call 0x141e60f9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E63DC: mov esi, eax */
    /* test esi, esi */ /* 0x141E63DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E63F7; /* 0x141E63E0: js 0x141e63f7 */
L_141E63E2:
    ecx = MEM32(ebp + 0x24); /* 0x141E63E2: mov ecx, dword ptr [ebp + 0x24] */
    /* test ecx, ecx */ /* 0x141E63E5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E63EE; /* 0x141E63E7: je 0x141e63ee */
L_141E63E9:
    eax = MEM32(ebp + (-0x40)); /* 0x141E63E9: mov eax, dword ptr [ebp - 0x40] */
    MEM32(ecx) = eax; /* 0x141E63EC: mov dword ptr [ecx], eax */
L_141E63EE:
    esi = edi; /* 0x141E63EE: mov esi, edi */
    goto L_141E63F7; /* 0x141E63F0: jmp 0x141e63f7 */
L_141E63F2:
    esi = 0x80004005u; /* 0x141E63F2: mov esi, 0x80004005 */
L_141E63F7:
    ecx = ebp + (-0x40); /* 0x141E63F7: lea ecx, [ebp - 0x40] */
    RECOMP_CALL(sub_141E60BA); /* 0x141E63FA: call 0x141e60ba */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x141E63FF: pop edi */
    eax = esi; /* 0x141E6400: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E6402: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E6403: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x141E6404: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_141E640C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E640Cu);

L_141E640C:
    edi = edi; /* 0x141E640C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E640E: push ebp */
    ebp = esp; /* 0x141E640F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x141E6411: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E6414: push ebx */
    PUSH32(esp, esi); /* 0x141E6415: push esi */
    PUSH32(esp, edi); /* 0x141E6416: push edi */
    eax = ebp + (-0x24); /* 0x141E6417: lea eax, [ebp - 0x24] */
    esi = ecx; /* 0x141E641A: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E641C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141E641E: push eax */
    MEM32(esi) = ebx; /* 0x141E641F: mov dword ptr [esi], ebx */
    RECOMP_ICALL(MEM32(0x14001088)); /* 0x141E6421: call dword ptr [0x14001088] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x20)); /* 0x141E6427: mov edx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + 0xC); /* 0x141E642A: mov eax, dword ptr [ebp + 0xc] */
    edi = edx + eax + (-0x1); /* 0x141E642D: lea edi, [edx + eax - 1] */
    eax = MEM32(ebp + 0x8); /* 0x141E6431: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E6434: dec edx */
    _flag_k = FK_DEC;
    edx = ~edx; /* 0x141E6435: not edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    edi = edi & edx; /* 0x141E6437: and edi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edi; /* 0x141E6439: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x8) = ebx; /* 0x141E643C: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0xC) = ebx; /* 0x141E643F: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x141E6442: mov dword ptr [esi + 0x10], ebx */
    /* test eax, eax */ /* 0x141E6445: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E644E; /* 0x141E6447: jne 0x141e644e */
L_141E6449:
    eax = 0x00100000u; /* 0x141E6449: mov eax, 0x100000 */
L_141E644E:
    ecx = edi + eax + (-0x1); /* 0x141E644E: lea ecx, [edi + eax - 1] */
    eax = edi + (-0x1); /* 0x141E6452: lea eax, [edi - 1] */
    eax = ~eax; /* 0x141E6455: not eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x141E6457: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141E6459: pop edi */
    MEM32(esi + 0x14) = ecx; /* 0x141E645A: mov dword ptr [esi + 0x14], ecx */
    eax = esi; /* 0x141E645D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E645F: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E6460: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E6461: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E6462: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E646A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E646Au);

L_141E646A:
    edi = edi; /* 0x141E646A: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E646C: push esi */
    esi = ecx; /* 0x141E646D: mov esi, ecx */
    goto L_141E6485; /* 0x141E646F: jmp 0x141e6485 */
L_141E6471:
    ecx = MEM32(esi); /* 0x141E6471: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x141E6473: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x8000u); /* 0x141E6475: push 0x8000 */
    PUSH32(esp, 0); /* 0x141E647A: push 0 */
    PUSH32(esp, ecx); /* 0x141E647C: push ecx */
    MEM32(esi) = eax; /* 0x141E647D: mov dword ptr [esi], eax */
    RECOMP_ICALL(MEM32(0x1400103C)); /* 0x141E647F: call dword ptr [0x1400103c] */
    RECOMP_FLAGS_IN();
L_141E6485:
    /* cmp MEM32(esi), 0 */ /* 0x141E6485: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E6471; /* 0x141E6488: jne 0x141e6471 */
L_141E648A:
    esi = POP32_VAL(esp); /* 0x141E648A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E648B: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6491(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6491u);

L_141E6491:
    edi = edi; /* 0x141E6491: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6493: push ebp */
    ebp = esp; /* 0x141E6494: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E6496: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x141E6497: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141E649A: push ebx */
    PUSH32(esp, esi); /* 0x141E649B: push esi */
    PUSH32(esp, edi); /* 0x141E649C: push edi */
    edi = ecx; /* 0x141E649D: mov edi, ecx */
    eax = MEM32(edi + 0x8); /* 0x141E649F: mov eax, dword ptr [edi + 8] */
    ecx = edx + (-0x1); /* 0x141E64A2: lea ecx, [edx - 1] */
    ecx = ~ecx; /* 0x141E64A5: not ecx */
    esi = edx + eax + (-0x1); /* 0x141E64A7: lea esi, [edx + eax - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    esi = esi & ecx; /* 0x141E64AB: and esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x8); /* 0x141E64AD: add esi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edi + 0x10) */ /* 0x141E64B0: cmp esi, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E652D; /* 0x141E64B3: jbe 0x141e652d */
L_141E64B5:
    ebx = MEM32(edi + 0x14); /* 0x141E64B5: mov ebx, dword ptr [edi + 0x14] */
    esi = edx + 0x3; /* 0x141E64B8: lea esi, [edx + 3] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    esi = esi & ecx; /* 0x141E64BB: and esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x8); /* 0x141E64BD: add esi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    goto L_141E64C4; /* 0x141E64C0: jmp 0x141e64c4 */
L_141E64C2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x141E64C2: add ebx, ebx */
    _flag_k = FK_ADD;
L_141E64C4:
    /* cmp esi, ebx */ /* 0x141E64C4: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_141E64C2; /* 0x141E64C6: ja 0x141e64c2 */
L_141E64C8:
    PUSH32(esp, 4); /* 0x141E64C8: push 4 */
    PUSH32(esp, 0x2000u); /* 0x141E64CA: push 0x2000 */
    PUSH32(esp, ebx); /* 0x141E64CF: push ebx */
    PUSH32(esp, 0); /* 0x141E64D0: push 0 */
    RECOMP_ICALL(MEM32(0x14001090)); /* 0x141E64D2: call dword ptr [0x14001090] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x141E64D8: mov ecx, eax */
    MEM32(ebp + 0xC) = ecx; /* 0x141E64DA: mov dword ptr [ebp + 0xc], ecx */
    /* test ecx, ecx */ /* 0x141E64DD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E64E8; /* 0x141E64DF: jne 0x141e64e8 */
L_141E64E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E64E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E656D; /* 0x141E64E3: jmp 0x141e656d */
L_141E64E8:
    eax = MEM32(edi + 0x4); /* 0x141E64E8: mov eax, dword ptr [edi + 4] */
    edx = eax + esi + (-0x1); /* 0x141E64EB: lea edx, [eax + esi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E64EF: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, 4); /* 0x141E64F0: push 4 */
    eax = ~eax; /* 0x141E64F2: not eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x141E64F4: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1000u); /* 0x141E64F6: push 0x1000 */
    PUSH32(esp, edx); /* 0x141E64FB: push edx */
    PUSH32(esp, ecx); /* 0x141E64FC: push ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x141E64FD: mov dword ptr [ebp - 4], edx */
    RECOMP_ICALL(MEM32(0x14001090)); /* 0x141E6500: call dword ptr [0x14001090] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x141E6506: mov ecx, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x141E6509: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E651C; /* 0x141E650B: jne 0x141e651c */
L_141E650D:
    PUSH32(esp, 0x8000u); /* 0x141E650D: push 0x8000 */
    PUSH32(esp, eax); /* 0x141E6512: push eax */
    PUSH32(esp, ecx); /* 0x141E6513: push ecx */
    RECOMP_ICALL(MEM32(0x1400103C)); /* 0x141E6514: call dword ptr [0x1400103c] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_141E64E1; /* 0x141E651A: jmp 0x141e64e1 */
L_141E651C:
    eax = MEM32(edi); /* 0x141E651C: mov eax, dword ptr [edi] */
    MEM32(ecx) = eax; /* 0x141E651E: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x141E6520: mov eax, dword ptr [ebp - 4] */
    MEM32(edi) = ecx; /* 0x141E6523: mov dword ptr [edi], ecx */
    MEM32(edi + 0x10) = ebx; /* 0x141E6525: mov dword ptr [edi + 0x10], ebx */
    MEM32(edi + 0xC) = eax; /* 0x141E6528: mov dword ptr [edi + 0xc], eax */
    goto L_141E6563; /* 0x141E652B: jmp 0x141e6563 */
L_141E652D:
    ecx = MEM32(edi + 0xC); /* 0x141E652D: mov ecx, dword ptr [edi + 0xc] */
    /* cmp esi, ecx */ /* 0x141E6530: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E6563; /* 0x141E6532: jbe 0x141e6563 */
L_141E6534:
    eax = MEM32(edi + 0x4); /* 0x141E6534: mov eax, dword ptr [edi + 4] */
    ebx = eax + esi + (-0x1); /* 0x141E6537: lea ebx, [eax + esi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E653B: dec eax */
    _flag_k = FK_DEC;
    eax = ~eax; /* 0x141E653C: not eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    ebx = ebx & eax; /* 0x141E653E: and ebx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x141E6540: mov eax, dword ptr [edi] */
    edx = ecx + eax; /* 0x141E6542: lea edx, [ecx + eax] */
    /* test edx, edx */ /* 0x141E6545: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E64E1; /* 0x141E6547: je 0x141e64e1 */
L_141E6549:
    PUSH32(esp, 4); /* 0x141E6549: push 4 */
    PUSH32(esp, 0x1000u); /* 0x141E654B: push 0x1000 */
    eax = ebx; /* 0x141E6550: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x141E6552: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x141E6554: push eax */
    PUSH32(esp, edx); /* 0x141E6555: push edx */
    RECOMP_ICALL(MEM32(0x14001090)); /* 0x141E6556: call dword ptr [0x14001090] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E655C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E64E1; /* 0x141E655E: je 0x141e64e1 */
L_141E6560:
    MEM32(edi + 0xC) = ebx; /* 0x141E6560: mov dword ptr [edi + 0xc], ebx */
L_141E6563:
    eax = MEM32(edi); /* 0x141E6563: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x141E6565: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    MEM32(edi + 0x8) = esi; /* 0x141E6568: mov dword ptr [edi + 8], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141E656B: add eax, esi */
    _flag_k = FK_ADD;
L_141E656D:
    edi = POP32_VAL(esp); /* 0x141E656D: pop edi */
    esi = POP32_VAL(esp); /* 0x141E656E: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E656F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E6570: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E6571: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E659C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E659Cu);

L_141E659C:
    edi = edi; /* 0x141E659C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E659E: push ebp */
    ebp = esp; /* 0x141E659F: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x141E65A1: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x141E65A5: push ebx */
    PUSH32(esp, esi); /* 0x141E65A6: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E65C0; /* 0x141E65A7: jne 0x141e65c0 */
L_141E65A9:
    PUSH32(esp, 1); /* 0x141E65A9: push 1 */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E65AB: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E65B0: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x141E65B2: pop ecx */
    /* test esi, esi */ /* 0x141E65B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E65BB; /* 0x141E65B5: jne 0x141e65bb */
L_141E65B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E65B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E65EE; /* 0x141E65B9: jmp 0x141e65ee */
L_141E65BB:
    MEM8(esi) = (uint8_t)(0); /* 0x141E65BB: mov byte ptr [esi], 0 */
    goto L_141E65EC; /* 0x141E65BE: jmp 0x141e65ec */
L_141E65C0:
    ecx = MEM32(ebp + 0x8); /* 0x141E65C0: mov ecx, dword ptr [ebp + 8] */
    edx = ecx + 0x1; /* 0x141E65C3: lea edx, [ecx + 1] */
L_141E65C6:
    SET_LO8(eax, MEM8(ecx)); /* 0x141E65C6: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E65C8: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x141E65C9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E65C6; /* 0x141E65CB: jne 0x141e65c6 */
L_141E65CD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x141E65CD: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x141E65CF: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x141E65D2: push ebx */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E65D3: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E65D8: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x141E65DA: pop ecx */
    /* test esi, esi */ /* 0x141E65DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E65B7; /* 0x141E65DD: je 0x141e65b7 */
L_141E65DF:
    PUSH32(esp, ebx); /* 0x141E65DF: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E65E0: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x141E65E3: push esi */
    RECOMP_CALL(sub_141EC80A); /* 0x141E65E4: call 0x141ec80a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E65E9: add esp, 0xc */
    _flag_k = FK_ADD;
L_141E65EC:
    eax = esi; /* 0x141E65EC: mov eax, esi */
L_141E65EE:
    esi = POP32_VAL(esp); /* 0x141E65EE: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E65EF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E65F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E65F1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E65F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E65F9u);

L_141E65F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E65F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x141E65FB: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x141E65FD: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x141E6600: mov dword ptr [ecx + 8], eax */
    eax = ecx; /* 0x141E6603: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6605: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E660B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E660Bu);

L_141E660B:
    edi = edi; /* 0x141E660B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E660D: push ebp */
    ebp = esp; /* 0x141E660E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E6610: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x141E6613: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x141E6617: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0xC); /* 0x141E6619: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x4) = eax; /* 0x141E661C: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E661F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141E6621: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E6622: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E662A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E662Au);

L_141E662A:
    edi = edi; /* 0x141E662A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E662C: push ebp */
    ebp = esp; /* 0x141E662D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x141E662F: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x141E6632: push esi */
    edx = ecx; /* 0x141E6633: mov edx, ecx */
    PUSH32(esp, edi); /* 0x141E6635: push edi */
    edi = MEM32(edx + 0x8); /* 0x141E6636: mov edi, dword ptr [edx + 8] */
    esi = edi + eax; /* 0x141E6639: lea esi, [edi + eax] */
    /* cmp esi, edi */ /* 0x141E663C: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E6655; /* 0x141E663E: jb 0x141e6655 */
L_141E6640:
    /* cmp esi, MEM32(edx + 0x4) */ /* 0x141E6640: cmp esi, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E6655; /* 0x141E6643: ja 0x141e6655 */
L_141E6645:
    ecx = MEM32(edx); /* 0x141E6645: mov ecx, dword ptr [edx] */
    eax = MEM32(ebp + 0x8); /* 0x141E6647: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141E664A: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x141E664C: mov dword ptr [eax], ecx */
    MEM32(edx + 0x8) = esi; /* 0x141E664E: mov dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E6651: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E665A; /* 0x141E6653: jmp 0x141e665a */
L_141E6655:
    eax = 0x80004005u; /* 0x141E6655: mov eax, 0x80004005 */
L_141E665A:
    edi = POP32_VAL(esp); /* 0x141E665A: pop edi */
    esi = POP32_VAL(esp); /* 0x141E665B: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E665C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E665D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E6665(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6665u);

L_141E6665:
    edi = edi; /* 0x141E6665: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6667: push ebp */
    ebp = esp; /* 0x141E6668: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E666A: push ecx */
    PUSH32(esp, 4); /* 0x141E666B: push 4 */
    eax = ebp + (-0x4); /* 0x141E666D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E6670: push eax */
    RECOMP_CALL(sub_141E662A); /* 0x141E6671: call 0x141e662a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E6676: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_141E6681; /* 0x141E6678: jns 0x141e6681 */
L_141E667A:
    eax = 0x80004005u; /* 0x141E667A: mov eax, 0x80004005 */
    goto L_141E668D; /* 0x141E667F: jmp 0x141e668d */
L_141E6681:
    eax = MEM32(ebp + (-0x4)); /* 0x141E6681: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x141E6684: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x141E6686: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x141E6689: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E668B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E668D:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E668D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E668E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E6696(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6696u);

L_141E6696:
    edi = edi; /* 0x141E6696: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6698: push ebp */
    ebp = esp; /* 0x141E6699: mov ebp, esp */
    edx = ecx; /* 0x141E669B: mov edx, ecx */
    ecx = MEM32(edx + 0x8); /* 0x141E669D: mov ecx, dword ptr [edx + 8] */
    PUSH32(esp, esi); /* 0x141E66A0: push esi */
    PUSH32(esp, edi); /* 0x141E66A1: push edi */
    edi = MEM32(edx); /* 0x141E66A2: mov edi, dword ptr [edx] */
    esi = ecx; /* 0x141E66A4: mov esi, ecx */
    /* cmp MEM8(edi + esi), 0 */ /* 0x141E66A6: cmp byte ptr [edi + esi], 0 */
    _flag_a = (uint32_t)(MEM8(edi + esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E66B8; /* 0x141E66AA: je 0x141e66b8 */
L_141E66AC:
    /* cmp esi, MEM32(edx + 0x4) */ /* 0x141E66AC: cmp esi, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E66CA; /* 0x141E66AF: ja 0x141e66ca */
L_141E66B1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E66B1: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi + edi), 0 */ /* 0x141E66B2: cmp byte ptr [esi + edi], 0 */
    _flag_a = (uint32_t)(MEM8(esi + edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E66AC; /* 0x141E66B6: jne 0x141e66ac */
L_141E66B8:
    eax = MEM32(ebp + 0x8); /* 0x141E66B8: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x141E66BB: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x141E66BD: mov dword ptr [eax], ecx */
    MEM32(edx + 0x8) = esi; /* 0x141E66BF: mov dword ptr [edx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E66C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E66C4:
    edi = POP32_VAL(esp); /* 0x141E66C4: pop edi */
    esi = POP32_VAL(esp); /* 0x141E66C5: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E66C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E66C7: ret 4 */
L_141E66CA:
    eax = 0x80004005u; /* 0x141E66CA: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_141E66C4; /* 0x141E66CF: jmp 0x141e66c4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E66D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E66D6u);

L_141E66D6:
    edi = edi; /* 0x141E66D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E66D8: push ebp */
    ebp = esp; /* 0x141E66D9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E66DB: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x141E66DE: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E66EA; /* 0x141E66E1: jbe 0x141e66ea */
L_141E66E3:
    eax = 0x80004005u; /* 0x141E66E3: mov eax, 0x80004005 */
    goto L_141E66EF; /* 0x141E66E8: jmp 0x141e66ef */
L_141E66EA:
    MEM32(ecx + 0x8) = eax; /* 0x141E66EA: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E66ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E66EF:
    ebp = POP32_VAL(esp); /* 0x141E66EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E66F0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E66F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E66F8u);

L_141E66F8:
    edi = edi; /* 0x141E66F8: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E66FA: push esi */
    esi = ecx; /* 0x141E66FB: mov esi, ecx */
    PUSH32(esp, edi); /* 0x141E66FD: push edi */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E66FE: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E6701: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0xC); /* 0x141E6706: mov edi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x141E6709: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x141E670D: pop ecx */
    /* test edi, edi */ /* 0x141E670E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E6720; /* 0x141E6710: je 0x141e6720 */
L_141E6712:
    ecx = edi; /* 0x141E6712: mov ecx, edi */
    RECOMP_CALL(sub_141E66F8); /* 0x141E6714: call 0x141e66f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x141E6719: push edi */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E671A: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E671F: pop ecx */
L_141E6720:
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x141E6720: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141E6724: pop edi */
    esi = POP32_VAL(esp); /* 0x141E6725: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6726: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E672C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E672Cu);

L_141E672C:
    edi = edi; /* 0x141E672C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E672E: push ebp */
    ebp = esp; /* 0x141E672F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E6731: push ecx */
    PUSH32(esp, ebx); /* 0x141E6732: push ebx */
    PUSH32(esp, esi); /* 0x141E6733: push esi */
    esi = MEM32(ebp + 0xC); /* 0x141E6734: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x141E6737: push edi */
    ebx = ecx; /* 0x141E6738: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E673A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x4), edi */ /* 0x141E673C: cmp dword ptr [ebx + 4], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E675D; /* 0x141E673F: jne 0x141e675d */
L_141E6741:
    eax = 0x2000u; /* 0x141E6741: mov eax, 0x2000 */
    /* cmp esi, eax */ /* 0x141E6746: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E674C; /* 0x141E6748: jb 0x141e674c */
L_141E674A:
    eax = esi; /* 0x141E674A: mov eax, esi */
L_141E674C:
    PUSH32(esp, eax); /* 0x141E674C: push eax */
    MEM32(ebx + 0x4) = eax; /* 0x141E674D: mov dword ptr [ebx + 4], eax */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E6750: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E6755: pop ecx */
    MEM32(ebx + 0x8) = eax; /* 0x141E6756: mov dword ptr [ebx + 8], eax */
    /* test eax, eax */ /* 0x141E6759: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E67CC; /* 0x141E675B: je 0x141e67cc */
L_141E675D:
    eax = MEM32(ebx + 0x4); /* 0x141E675D: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx); /* 0x141E6760: sub eax, dword ptr [ebx] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x141E6762: mov dword ptr [ebp - 4], eax */
    /* cmp eax, esi */ /* 0x141E6765: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E676E; /* 0x141E6767: jb 0x141e676e */
L_141E6769:
    eax = esi; /* 0x141E6769: mov eax, esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x141E676B: mov dword ptr [ebp - 4], esi */
L_141E676E:
    esi = MEM32(ebp + 0x8); /* 0x141E676E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E6771: push eax */
    eax = MEM32(ebx + 0x8); /* 0x141E6772: mov eax, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x141E6775: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x141E6777: push esi */
    PUSH32(esp, eax); /* 0x141E6778: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E6779: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x141E677E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E6781: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ecx + esi; /* 0x141E6784: lea eax, [ecx + esi] */
    MEM32(ebp + 0x8) = eax; /* 0x141E6787: mov dword ptr [ebp + 8], eax */
    /* cmp MEM32(ebx + 0x10), edi */ /* 0x141E678A: cmp dword ptr [ebx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E6799; /* 0x141E678D: je 0x141e6799 */
L_141E678F:
    eax = ecx + 0x3; /* 0x141E678F: lea eax, [ecx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x141E6792: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x141E6795: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    goto L_141E679B; /* 0x141E6797: jmp 0x141e679b */
L_141E6799:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + ecx; /* 0x141E6799: add dword ptr [ebx], ecx */
    _flag_k = FK_ADD;
L_141E679B:
    esi = MEM32(ebp + 0xC); /* 0x141E679B: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x141E679E: sub esi, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x141E67A0: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ebx; /* 0x141E67A3: mov dword ptr [eax], ebx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E67F0; /* 0x141E67A5: je 0x141e67f0 */
L_141E67A7:
    PUSH32(esp, 0x14u); /* 0x141E67A7: push 0x14 */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E67A9: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E67AE: pop ecx */
    /* test eax, eax */ /* 0x141E67AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E67C3; /* 0x141E67B1: je 0x141e67c3 */
L_141E67B3:
    MEM32(eax) = edi; /* 0x141E67B3: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = edi; /* 0x141E67B5: mov dword ptr [eax + 4], edi */
    MEM32(eax + 0x8) = edi; /* 0x141E67B8: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x141E67BB: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = edi; /* 0x141E67BE: mov dword ptr [eax + 0x10], edi */
    goto L_141E67C5; /* 0x141E67C1: jmp 0x141e67c5 */
L_141E67C3:
    eax = edi; /* 0x141E67C3: mov eax, edi */
L_141E67C5:
    MEM32(ebx + 0xC) = eax; /* 0x141E67C5: mov dword ptr [ebx + 0xc], eax */
    /* test eax, eax */ /* 0x141E67C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E67D3; /* 0x141E67CA: jne 0x141e67d3 */
L_141E67CC:
    edi = 0x8007000Eu; /* 0x141E67CC: mov edi, 0x8007000e */
    goto L_141E67F0; /* 0x141E67D1: jmp 0x141e67f0 */
L_141E67D3:
    /* cmp MEM32(ebx + 0x10), edi */ /* 0x141E67D3: cmp dword ptr [ebx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E67DF; /* 0x141E67D6: je 0x141e67df */
L_141E67D8:
    MEM32(eax + 0x10) = 1; /* 0x141E67D8: mov dword ptr [eax + 0x10], 1 */
L_141E67DF:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E67DF: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebx + 0xC); /* 0x141E67E2: mov ecx, dword ptr [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x141E67E5: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E67E6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E672C); /* 0x141E67E9: call 0x141e672c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E67EE: mov edi, eax */
L_141E67F0:
    eax = edi; /* 0x141E67F0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x141E67F2: pop edi */
    esi = POP32_VAL(esp); /* 0x141E67F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E67F4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E67F5: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E67F6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E67FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E67FEu);

L_141E67FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E67FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x141E6800: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x141E6802: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x141E6805: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x141E6808: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x141E680B: mov dword ptr [ecx + 0x10], eax */
    eax = ecx; /* 0x141E680E: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6810: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6816(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6816u);

L_141E6816:
    edi = edi; /* 0x141E6816: mov edi, edi */
    PUSH32(esp, edi); /* 0x141E6818: push edi */
    edi = MEM32(ecx); /* 0x141E6819: mov edi, dword ptr [ecx] */
    /* test edi, edi */ /* 0x141E681B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E683D; /* 0x141E681D: je 0x141e683d */
L_141E681F:
    PUSH32(esp, esi); /* 0x141E681F: push esi */
L_141E6820:
    eax = edi + 0xC; /* 0x141E6820: lea eax, [edi + 0xc] */
    esi = edi; /* 0x141E6823: mov esi, edi */
    edi = MEM32(eax); /* 0x141E6825: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x141E6827: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x141E682A: mov ecx, esi */
    RECOMP_CALL(sub_141E66F8); /* 0x141E682C: call 0x141e66f8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x141E6831: push esi */
    RECOMP_CALL(sub_141EC7CE); /* 0x141E6832: call 0x141ec7ce */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E6837: pop ecx */
    /* test edi, edi */ /* 0x141E6838: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E6820; /* 0x141E683A: jne 0x141e6820 */
L_141E683C:
    esi = POP32_VAL(esp); /* 0x141E683C: pop esi */
L_141E683D:
    edi = POP32_VAL(esp); /* 0x141E683D: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E683E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6844(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6844u);

L_141E6844:
    edi = edi; /* 0x141E6844: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6846: push ebp */
    ebp = esp; /* 0x141E6847: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E6849: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x141E684C: mov dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E684F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x141E6851: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E6852: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E685A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E685Au);

L_141E685A:
    edi = edi; /* 0x141E685A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E685C: push ebp */
    ebp = esp; /* 0x141E685D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E685F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E6860: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x141E6863: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = ecx; /* 0x141E6867: mov edx, ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E688B; /* 0x141E6869: jbe 0x141e688b */
L_141E686B:
    /* cmp MEM32(edx), 0 */ /* 0x141E686B: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x141E686E: mov eax, dword ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E6876; /* 0x141E6870: jne 0x141e6876 */
L_141E6872:
    MEM32(edx) = eax; /* 0x141E6872: mov dword ptr [edx], eax */
    goto L_141E687C; /* 0x141E6874: jmp 0x141e687c */
L_141E6876:
    ecx = MEM32(edx + 0x4); /* 0x141E6876: mov ecx, dword ptr [edx + 4] */
    MEM32(ecx + 0xC) = eax; /* 0x141E6879: mov dword ptr [ecx + 0xc], eax */
L_141E687C:
    eax = MEM32(esi + 0x4); /* 0x141E687C: mov eax, dword ptr [esi + 4] */
    MEM32(edx + 0x4) = eax; /* 0x141E687F: mov dword ptr [edx + 4], eax */
    eax = MEM32(esi + 0x8); /* 0x141E6882: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x141E6885: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0x8) = MEM32(edx + 0x8) + eax; /* 0x141E6888: add dword ptr [edx + 8], eax */
    _flag_k = FK_ADD;
L_141E688B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E688B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141E688D: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E688E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E688F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E6897(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6897u);

L_141E6897:
    edi = edi; /* 0x141E6897: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6899: push ebp */
    ebp = esp; /* 0x141E689A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141E689C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x141E689D: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x141E68A0: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141E68A1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141E68A3: push edi */
    edi = ecx; /* 0x141E68A4: mov edi, ecx */
    /* test ebx, ebx */ /* 0x141E68A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E68B5; /* 0x141E68A8: jne 0x141e68b5 */
L_141E68AA:
    eax = MEM32(ebp + 0x10); /* 0x141E68AA: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x141E68AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E691C; /* 0x141E68AF: je 0x141e691c */
L_141E68B1:
    MEM32(eax) = esi; /* 0x141E68B1: mov dword ptr [eax], esi */
    goto L_141E691C; /* 0x141E68B3: jmp 0x141e691c */
L_141E68B5:
    /* cmp MEM32(edi), esi */ /* 0x141E68B5: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E68F5; /* 0x141E68B7: jne 0x141e68f5 */
L_141E68B9:
    PUSH32(esp, 0x14u); /* 0x141E68B9: push 0x14 */
    RECOMP_CALL(sub_141EC7DA); /* 0x141E68BB: call 0x141ec7da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E68C0: pop ecx */
    /* test eax, eax */ /* 0x141E68C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E68D5; /* 0x141E68C3: je 0x141e68d5 */
L_141E68C5:
    MEM32(eax) = esi; /* 0x141E68C5: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = esi; /* 0x141E68C7: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = esi; /* 0x141E68CA: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x141E68CD: mov dword ptr [eax + 0xc], esi */
    MEM32(eax + 0x10) = esi; /* 0x141E68D0: mov dword ptr [eax + 0x10], esi */
    goto L_141E68D7; /* 0x141E68D3: jmp 0x141e68d7 */
L_141E68D5:
    eax = esi; /* 0x141E68D5: mov eax, esi */
L_141E68D7:
    MEM32(edi) = eax; /* 0x141E68D7: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x141E68D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E68E4; /* 0x141E68DB: jne 0x141e68e4 */
L_141E68DD:
    esi = 0x8007000Eu; /* 0x141E68DD: mov esi, 0x8007000e */
    goto L_141E691C; /* 0x141E68E2: jmp 0x141e691c */
L_141E68E4:
    /* cmp MEM32(edi + 0x10), esi */ /* 0x141E68E4: cmp dword ptr [edi + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E68F0; /* 0x141E68E7: je 0x141e68f0 */
L_141E68E9:
    MEM32(eax + 0x10) = 1; /* 0x141E68E9: mov dword ptr [eax + 0x10], 1 */
L_141E68F0:
    eax = MEM32(edi); /* 0x141E68F0: mov eax, dword ptr [edi] */
    MEM32(edi + 0x4) = eax; /* 0x141E68F2: mov dword ptr [edi + 4], eax */
L_141E68F5:
    ecx = MEM32(ebp + 0x10); /* 0x141E68F5: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x141E68F8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E6904; /* 0x141E68FA: je 0x141e6904 */
L_141E68FC:
    eax = MEM32(edi + 0xC); /* 0x141E68FC: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x8); /* 0x141E68FF: add eax, dword ptr [edi + 8] */
    _flag_k = FK_ADD;
    MEM32(ecx) = eax; /* 0x141E6902: mov dword ptr [ecx], eax */
L_141E6904:
    ecx = edi + 0x4; /* 0x141E6904: lea ecx, [edi + 4] */
    PUSH32(esp, ecx); /* 0x141E6907: push ecx */
    ecx = MEM32(ecx); /* 0x141E6908: mov ecx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x141E690A: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E690B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E672C); /* 0x141E690E: call 0x141e672c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E6913: mov esi, eax */
    /* test esi, esi */ /* 0x141E6915: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E691C; /* 0x141E6917: js 0x141e691c */
L_141E6919:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + ebx; /* 0x141E6919: add dword ptr [edi + 8], ebx */
    _flag_k = FK_ADD;
L_141E691C:
    edi = POP32_VAL(esp); /* 0x141E691C: pop edi */
    eax = esi; /* 0x141E691D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E691F: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E6920: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E6921: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E6922: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E692A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E692Au);

L_141E692A:
    edi = edi; /* 0x141E692A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E692C: push ebp */
    ebp = esp; /* 0x141E692D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E692F: push ecx */
    PUSH32(esp, ecx); /* 0x141E6930: push ecx */
    edx = MEM32(ecx); /* 0x141E6931: mov edx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x141E6933: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E6934: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x141E6936: push esi */
    PUSH32(esp, edi); /* 0x141E6937: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x141E6938: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E693B: mov dword ptr [ebp - 4], eax */
    /* test edx, edx */ /* 0x141E693E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E698E; /* 0x141E6940: je 0x141e698e */
L_141E6942:
    ecx = MEM32(ebp + 0xC); /* 0x141E6942: mov ecx, dword ptr [ebp + 0xc] */
L_141E6945:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E6945: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(edx) */ /* 0x141E6947: cmp ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E697F; /* 0x141E6949: ja 0x141e697f */
L_141E694B:
    eax = MEM32(edx + 0x8); /* 0x141E694B: mov eax, dword ptr [edx + 8] */
L_141E694E:
    edi = MEM32(ebp + 0x8); /* 0x141E694E: mov edi, dword ptr [ebp + 8] */
    esi = eax + ebx; /* 0x141E6951: lea esi, [eax + ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E6954: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x141E6956: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E69A3; /* 0x141E6958: je 0x141e69a3 */
L_141E695A:
    /* cmp MEM32(edx), 0x2000u */ /* 0x141E695A: cmp dword ptr [edx], 0x2000 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x2000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x141E6960: mov ecx, dword ptr [ebp + 0xc] */
    if (CMP_A(_flag_a, _flag_b)) goto L_141E697C; /* 0x141E6963: ja 0x141e697c */
L_141E6965:
    eax = MEM32(edx + 0x10); /* 0x141E6965: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141E6968: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E696A: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E696C: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141E696F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x141E6970: add ebx, eax */
    _flag_k = FK_ADD;
    eax = ebx + ecx; /* 0x141E6972: lea eax, [ebx + ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x141E6975: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x8); /* 0x141E6977: mov eax, dword ptr [edx + 8] */
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E694E; /* 0x141E697A: jbe 0x141e694e */
L_141E697C:
    eax = MEM32(ebp + (-0x4)); /* 0x141E697C: mov eax, dword ptr [ebp - 4] */
L_141E697F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edx); /* 0x141E697F: add eax, dword ptr [edx] */
    _flag_k = FK_ADD;
    edx = MEM32(edx + 0xC); /* 0x141E6981: mov edx, dword ptr [edx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E6984: mov dword ptr [ebp - 4], eax */
    /* test edx, edx */ /* 0x141E6987: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E6945; /* 0x141E6989: jne 0x141e6945 */
L_141E698B:
    ecx = MEM32(ebp + (-0x8)); /* 0x141E698B: mov ecx, dword ptr [ebp - 8] */
L_141E698E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E698E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E6991: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E6994: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E6897); /* 0x141E6997: call 0x141e6897 */
    RECOMP_FLAGS_IN();
L_141E699C:
    edi = POP32_VAL(esp); /* 0x141E699C: pop edi */
    esi = POP32_VAL(esp); /* 0x141E699D: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E699E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E699F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E69A0: ret 0xc */
L_141E69A3:
    eax = MEM32(ebp + (-0x4)); /* 0x141E69A3: mov eax, dword ptr [ebp - 4] */
    ecx = ebx + eax; /* 0x141E69A6: lea ecx, [ebx + eax] */
    eax = MEM32(ebp + 0x10); /* 0x141E69A9: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x141E69AC: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E69AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E699C; /* 0x141E69B0: jmp 0x141e699c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E69B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E69B7u);

L_141E69B7:
    edi = edi; /* 0x141E69B7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E69B9: push ebp */
    ebp = esp; /* 0x141E69BA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E69BC: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x141E69BD: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141E69C0: push ebx */
    PUSH32(esp, esi); /* 0x141E69C1: push esi */
    esi = MEM32(ecx); /* 0x141E69C2: mov esi, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x141E69C4: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E69C5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x141E69C7: mov dword ptr [ebp - 4], edi */
    ebx = edi; /* 0x141E69CA: mov ebx, edi */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x141E69CC: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E69D8; /* 0x141E69CF: jae 0x141e69d8 */
L_141E69D1:
    edi = 0x80004005u; /* 0x141E69D1: mov edi, 0x80004005 */
    goto L_141E69FC; /* 0x141E69D6: jmp 0x141e69fc */
L_141E69D8:
    /* test esi, esi */ /* 0x141E69D8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E69FC; /* 0x141E69DA: je 0x141e69fc */
L_141E69DC:
    edi = MEM32(ebp + 0x8); /* 0x141E69DC: mov edi, dword ptr [ebp + 8] */
L_141E69DF:
    PUSH32(esp, MEM32(esi)); /* 0x141E69DF: push dword ptr [esi] */
    eax = ebx + edi; /* 0x141E69E1: lea eax, [ebx + edi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E69E4: push dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x141E69E7: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E69E8: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi); /* 0x141E69ED: add ebx, dword ptr [esi] */
    _flag_k = FK_ADD;
    esi = MEM32(esi + 0xC); /* 0x141E69EF: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E69F2: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x141E69F5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E69DF; /* 0x141E69F7: jne 0x141e69df */
L_141E69F9:
    edi = MEM32(ebp + (-0x4)); /* 0x141E69F9: mov edi, dword ptr [ebp - 4] */
L_141E69FC:
    eax = edi; /* 0x141E69FC: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x141E69FE: pop edi */
    esi = POP32_VAL(esp); /* 0x141E69FF: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E6A00: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E6A01: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E6A02: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E6A0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6A0Au);

L_141E6A0A:
    eax = MEM32(ecx + 0x8); /* 0x141E6A0A: mov eax, dword ptr [ecx + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6A0D: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6A13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6A13u);

L_141E6A13:
    edi = edi; /* 0x141E6A13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6A15: push ebp */
    ebp = esp; /* 0x141E6A16: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E6A18: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x141E6A1B: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E6A27; /* 0x141E6A1E: jb 0x141e6a27 */
L_141E6A20:
    eax = 0x80004005u; /* 0x141E6A20: mov eax, 0x80004005 */
    goto L_141E6A35; /* 0x141E6A25: jmp 0x141e6a35 */
L_141E6A27:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E6A27: push dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x141E6A2A: mov dword ptr [ecx + 8], eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E6A2D: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_141E662A); /* 0x141E6A30: call 0x141e662a */
    RECOMP_FLAGS_IN();
L_141E6A35:
    ebp = POP32_VAL(esp); /* 0x141E6A35: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E6A36: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E6A3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6A3Eu);

L_141E6A3E:
    edi = edi; /* 0x141E6A3E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6A40: push ebp */
    ebp = esp; /* 0x141E6A41: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E6A43: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x141E6A46: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E6A52; /* 0x141E6A49: jb 0x141e6a52 */
L_141E6A4B:
    eax = 0x80004005u; /* 0x141E6A4B: mov eax, 0x80004005 */
    goto L_141E6A5D; /* 0x141E6A50: jmp 0x141e6a5d */
L_141E6A52:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E6A52: push dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x141E6A55: mov dword ptr [ecx + 8], eax */
    RECOMP_CALL(sub_141E6696); /* 0x141E6A58: call 0x141e6696 */
    RECOMP_FLAGS_IN();
L_141E6A5D:
    ebp = POP32_VAL(esp); /* 0x141E6A5D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E6A5E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E6A66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6A66u);

L_141E6A66:
    edi = edi; /* 0x141E6A66: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6A68: push ebp */
    ebp = esp; /* 0x141E6A69: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141E6A6B: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x141E6A6E: push esi */
    esi = edx + 0x1; /* 0x141E6A6F: lea esi, [edx + 1] */
L_141E6A72:
    SET_LO8(eax, MEM8(edx)); /* 0x141E6A72: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E6A74: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x141E6A75: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E6A72; /* 0x141E6A77: jne 0x141e6a72 */
L_141E6A79:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E6A79: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x141E6A7C: sub edx, esi */
    _flag_k = FK_CMP;
    eax = edx + 0x1; /* 0x141E6A7E: lea eax, [edx + 1] */
    PUSH32(esp, eax); /* 0x141E6A81: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E6A82: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E6897); /* 0x141E6A85: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x141E6A8A: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E6A8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E6A8C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E6A94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6A94u);

L_141E6A94:
    edi = edi; /* 0x141E6A94: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6A96: push ebp */
    ebp = esp; /* 0x141E6A97: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E6A99: push dword ptr [ebp + 0xc] */
    eax = ebp + 0x8; /* 0x141E6A9C: lea eax, [ebp + 8] */
    PUSH32(esp, 4); /* 0x141E6A9F: push 4 */
    PUSH32(esp, eax); /* 0x141E6AA1: push eax */
    RECOMP_CALL(sub_141E6897); /* 0x141E6AA2: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x141E6AA7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E6AA8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E6AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6AB0u);

L_141E6AB0:
    edi = edi; /* 0x141E6AB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6AB2: push ebp */
    ebp = esp; /* 0x141E6AB3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E6AB5: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E6AB6: push dword ptr [ebp + 0x10] */
    eax = ebp + 0xC; /* 0x141E6AB9: lea eax, [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x141E6ABC: push 4 */
    PUSH32(esp, eax); /* 0x141E6ABE: push eax */
    esi = ecx; /* 0x141E6ABF: mov esi, ecx */
    RECOMP_CALL(sub_141E6897); /* 0x141E6AC1: call 0x141e6897 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E6AC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E6AD9; /* 0x141E6AC8: js 0x141e6ad9 */
L_141E6ACA:
    PUSH32(esp, 0); /* 0x141E6ACA: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E6ACC: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x141E6ACF: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E6AD1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141E6897); /* 0x141E6AD4: call 0x141e6897 */
    RECOMP_FLAGS_IN();
L_141E6AD9:
    esi = POP32_VAL(esp); /* 0x141E6AD9: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E6ADA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E6ADB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E6AE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6AE3u);

L_141E6AE3:
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x141E6AE3: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x4) | 0xFFFFFFFFu));
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) | 0xFFFFFFFFu; /* 0x141E6AE6: or dword ptr [ecx + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) & 0; /* 0x141E6AEA: and dword ptr [ecx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0; /* 0x141E6AEE: and dword ptr [ecx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x141E6AF2: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6AF4: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6B52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6B52u);

L_141E6B52:
    /* cmp MEM32(ecx), 0 */ /* 0x141E6B52: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E6B5F; /* 0x141E6B55: je 0x141e6b5f */
L_141E6B57:
    PUSH32(esp, MEM32(ecx)); /* 0x141E6B57: push dword ptr [ecx] */
    RECOMP_ICALL(MEM32(0x14001000)); /* 0x141E6B59: call dword ptr [0x14001000] */
    RECOMP_FLAGS_IN();
L_141E6B5F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6B5F: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6B65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6B65u);

L_141E6B65:
    edi = edi; /* 0x141E6B65: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6B67: push ebp */
    ebp = esp; /* 0x141E6B68: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x141E6B6A: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0xD1u */ /* 0x141E6B6D: cmp eax, 0xd1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_141E6B82; /* 0x141E6B72: jge 0x141e6b82 */
L_141E6B74:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x48u); /* 0x141E6B74: imul eax, eax, 0x48 */
    eax = (uint32_t)MEM8(eax + 0x141F4098); /* 0x141E6B77: movzx eax, byte ptr [eax + 0x141f4098] */
    ebp = POP32_VAL(esp); /* 0x141E6B7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E6B7F: ret 4 */
L_141E6B82:
    PUSH32(esp, 0x141EDD08u); /* 0x141E6B82: push 0x141edd08 */
    eax = ebp + 0x8; /* 0x141E6B87: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E6B8A: push eax */
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x141E6B8B: mov dword ptr [ebp + 8], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E6B92: call 0x141eca6c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x141E6B97u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E6B9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6B9Du);

L_141E6B9D:
    edi = edi; /* 0x141E6B9D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6B9F: push ebp */
    ebp = esp; /* 0x141E6BA0: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141E6BA2: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = edx; /* 0x141E6BA5: mov dword ptr [ecx + 4], edx */
    eax = MEM32(edx + 0x4); /* 0x141E6BA8: mov eax, dword ptr [edx + 4] */
    eax = edx + eax * 4; /* 0x141E6BAB: lea eax, [edx + eax*4] */
    MEM32(ecx + 0x8) = eax; /* 0x141E6BAE: mov dword ptr [ecx + 8], eax */
    eax = edx + 0x8; /* 0x141E6BB1: lea eax, [edx + 8] */
    MEM32(ecx) = eax; /* 0x141E6BB4: mov dword ptr [ecx], eax */
    ebp = POP32_VAL(esp); /* 0x141E6BB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E6BB7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E6BBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6BBFu);

L_141E6BBF:
    eax = MEM32(ecx + 0x4); /* 0x141E6BBF: mov eax, dword ptr [ecx + 4] */
    eax = (uint32_t)MEM16(eax + 0x2); /* 0x141E6BC2: movzx eax, word ptr [eax + 2] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6BC6: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6BCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6BCCu);

L_141E6BCC:
    eax = MEM32(ecx + 0x4); /* 0x141E6BCC: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax); /* 0x141E6BCF: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x141E6BD1: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6BD4: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6BDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6BDAu);

L_141E6BDA:
    eax = MEM32(ecx + 0x4); /* 0x141E6BDA: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax); /* 0x141E6BDD: mov eax, dword ptr [eax] */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x141E6BDF: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x141E6BDF: shr eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x141E6BE2: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E6BE5: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E6BEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6BEBu);

L_141E6BEB:
    edi = edi; /* 0x141E6BEB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6BED: push ebp */
    ebp = esp; /* 0x141E6BEE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E6BF0: push esi */
    PUSH32(esp, edi); /* 0x141E6BF1: push edi */
    PUSH32(esp, 0xC0u); /* 0x141E6BF2: push 0xc0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E6BF7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x141E6BF9: mov esi, ecx */
    PUSH32(esp, edi); /* 0x141E6BFB: push edi */
    PUSH32(esp, esi); /* 0x141E6BFC: push esi */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E6BFD: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x141E6C02: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E6C05: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x98) = eax; /* 0x141E6C08: mov dword ptr [esi + 0x98], eax */
    eax = MEM32(ebp + 0x8); /* 0x141E6C0E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x141E6C11: push 2 */
    ecx = POP32_VAL(esp); /* 0x141E6C13: pop ecx */
    MEM32(esi) = eax; /* 0x141E6C14: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x141E6C16: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x8C) = edi; /* 0x141E6C19: mov dword ptr [esi + 0x8c], edi */
    MEM32(esi + 0x88) = edi; /* 0x141E6C1F: mov dword ptr [esi + 0x88], edi */
    MEM32(esi + 0xB0) = edi; /* 0x141E6C25: mov dword ptr [esi + 0xb0], edi */
    MEM32(esi + 0x8) = eax; /* 0x141E6C2B: mov dword ptr [esi + 8], eax */
    edi = POP32_VAL(esp); /* 0x141E6C2E: pop edi */
    MEM32(esi + 0x84) = ecx; /* 0x141E6C2F: mov dword ptr [esi + 0x84], ecx */
    MEM32(esi + 0x80) = ecx; /* 0x141E6C35: mov dword ptr [esi + 0x80], ecx */
    MEM32(esi + 0xBC) = 1; /* 0x141E6C3B: mov dword ptr [esi + 0xbc], 1 */
    eax = esi; /* 0x141E6C45: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E6C47: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E6C48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E6C49: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E6C51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6C51u);

L_141E6C51:
    edi = edi; /* 0x141E6C51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E6C53: push ebp */
    ebp = esp; /* 0x141E6C54: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E6C56: push esi */
    PUSH32(esp, edi); /* 0x141E6C57: push edi */
    PUSH32(esp, 0xC0u); /* 0x141E6C58: push 0xc0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E6C5D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x141E6C5F: mov esi, ecx */
    PUSH32(esp, edi); /* 0x141E6C61: push edi */
    PUSH32(esp, esi); /* 0x141E6C62: push esi */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E6C63: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x141E6C68: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x98) = eax; /* 0x141E6C6B: mov dword ptr [esi + 0x98], eax */
    eax = MEM32(ebp + 0x8); /* 0x141E6C71: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E6C74: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi) = eax; /* 0x141E6C77: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x141E6C79: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, 2); /* 0x141E6C7C: push 2 */
    ecx = POP32_VAL(esp); /* 0x141E6C7E: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x141E6C7F: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x141E6C82: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x8C) = edi; /* 0x141E6C85: mov dword ptr [esi + 0x8c], edi */
    MEM32(esi + 0x88) = edi; /* 0x141E6C8B: mov dword ptr [esi + 0x88], edi */
    MEM32(esi + 0xB0) = edi; /* 0x141E6C91: mov dword ptr [esi + 0xb0], edi */
    MEM32(esi + 0xB4) = edi; /* 0x141E6C97: mov dword ptr [esi + 0xb4], edi */
    MEM32(esi + 0x30) = eax; /* 0x141E6C9D: mov dword ptr [esi + 0x30], eax */
    edi = POP32_VAL(esp); /* 0x141E6CA0: pop edi */
    MEM32(esi + 0x84) = ecx; /* 0x141E6CA1: mov dword ptr [esi + 0x84], ecx */
    MEM32(esi + 0x80) = ecx; /* 0x141E6CA7: mov dword ptr [esi + 0x80], ecx */
    MEM32(esi + 0xBC) = ecx; /* 0x141E6CAD: mov dword ptr [esi + 0xbc], ecx */
    eax = esi; /* 0x141E6CB3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E6CB5: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E6CB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141E6CB7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141E6CBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E6CBFu);

L_141E6CBF:
    edi = edi; /* 0x141E6CBF: mov edi, edi */
    PUSH32(esp, ebx); /* 0x141E6CC1: push ebx */
    PUSH32(esp, esi); /* 0x141E6CC2: push esi */
    PUSH32(esp, edi); /* 0x141E6CC3: push edi */
    PUSH32(esp, 0x14033048u); /* 0x141E6CC4: push 0x14033048 */
    PUSH32(esp, 0x40u); /* 0x141E6CC9: push 0x40 */
    edi = POP32_VAL(esp); /* 0x141E6CCB: pop edi */
    PUSH32(esp, edi); /* 0x141E6CCC: push edi */
    PUSH32(esp, 0x141F4058u); /* 0x141E6CCD: push 0x141f4058 */
    MEM8(0x141F4098) = (uint8_t)(3); /* 0x141E6CD2: mov byte ptr [0x141f4098], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E6CD9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F409C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F409C) = MEM32(0x141F409C) & 0; /* 0x141E6CDE: and dword ptr [0x141f409c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403C42Cu); /* 0x141E6CE5: push 0x1403c42c */
    PUSH32(esp, edi); /* 0x141E6CEA: push edi */
    PUSH32(esp, 0x141F40A0u); /* 0x141E6CEB: push 0x141f40a0 */
    MEM8(0x141F40E0) = (uint8_t)(3); /* 0x141E6CF0: mov byte ptr [0x141f40e0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E6CF7: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14032F68u); /* 0x141E6CFC: push 0x14032f68 */
    PUSH32(esp, edi); /* 0x141E6D01: push edi */
    PUSH32(esp, 0x141F40E8u); /* 0x141E6D02: push 0x141f40e8 */
    MEM32(0x141F40E4) = 3; /* 0x141E6D07: mov dword ptr [0x141f40e4], 3 */
    MEM8(0x141F4128) = (uint8_t)(0); /* 0x141E6D11: mov byte ptr [0x141f4128], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6D18: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001DE0u); /* 0x141E6D1D: push 0x14001de0 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E6D22: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x141E6D24: push edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E6D25: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, 0x141F4130u); /* 0x141E6D26: push 0x141f4130 */
    MEM32(0x141F412C) = 4; /* 0x141E6D2B: mov dword ptr [0x141f412c], 4 */
    MEM8(0x141F4170) = (uint8_t)(LO8(ebx)); /* 0x141E6D35: mov byte ptr [0x141f4170], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E6D3B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x141E6D40: push 4 */
    esi = POP32_VAL(esp); /* 0x141E6D42: pop esi */
    PUSH32(esp, 0x14032FD4u); /* 0x141E6D43: push 0x14032fd4 */
    PUSH32(esp, edi); /* 0x141E6D48: push edi */
    PUSH32(esp, 0x141F4178u); /* 0x141E6D49: push 0x141f4178 */
    MEM32(0x141F4174) = esi; /* 0x141E6D4E: mov dword ptr [0x141f4174], esi */
    MEM8(0x141F41B8) = (uint8_t)(LO8(ebx)); /* 0x141E6D54: mov byte ptr [0x141f41b8], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E6D5A: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001DD8u); /* 0x141E6D5F: push 0x14001dd8 */
    PUSH32(esp, edi); /* 0x141E6D64: push edi */
    PUSH32(esp, 0x141F41C0u); /* 0x141E6D65: push 0x141f41c0 */
    MEM32(0x141F41BC) = esi; /* 0x141E6D6A: mov dword ptr [0x141f41bc], esi */
    MEM8(0x141F4200) = (uint8_t)(2); /* 0x141E6D70: mov byte ptr [0x141f4200], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E6D77: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403F374u); /* 0x141E6D7C: push 0x1403f374 */
    PUSH32(esp, edi); /* 0x141E6D81: push edi */
    PUSH32(esp, 0x141F4250u); /* 0x141E6D82: push 0x141f4250 */
    MEM32(0x141F4204) = esi; /* 0x141E6D87: mov dword ptr [0x141f4204], esi */
    MEM8(0x141F4290) = (uint8_t)(0); /* 0x141E6D8D: mov byte ptr [0x141f4290], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6D94: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001DCCu); /* 0x141E6D99: push 0x14001dcc */
    PUSH32(esp, edi); /* 0x141E6D9E: push edi */
    PUSH32(esp, 0x141F4298u); /* 0x141E6D9F: push 0x141f4298 */
    MEM32(0x141F4294) = esi; /* 0x141E6DA4: mov dword ptr [0x141f4294], esi */
    MEM8(0x141F42D8) = (uint8_t)(LO8(ebx)); /* 0x141E6DAA: mov byte ptr [0x141f42d8], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E6DB0: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403F31Cu); /* 0x141E6DB5: push 0x1403f31c */
    PUSH32(esp, edi); /* 0x141E6DBA: push edi */
    PUSH32(esp, 0x141F4208u); /* 0x141E6DBB: push 0x141f4208 */
    MEM32(0x141F42DC) = esi; /* 0x141E6DC0: mov dword ptr [0x141f42dc], esi */
    MEM8(0x141F4248) = (uint8_t)(LO8(ebx)); /* 0x141E6DC6: mov byte ptr [0x141f4248], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E6DCC: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001468u); /* 0x141E6DD1: push 0x14001468 */
    PUSH32(esp, edi); /* 0x141E6DD6: push edi */
    PUSH32(esp, 0x141F42E0u); /* 0x141E6DD7: push 0x141f42e0 */
    MEM32(0x141F424C) = esi; /* 0x141E6DDC: mov dword ptr [0x141f424c], esi */
    MEM8(0x141F4320) = (uint8_t)(0); /* 0x141E6DE2: mov byte ptr [0x141f4320], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6DE9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403F390u); /* 0x141E6DEE: push 0x1403f390 */
    PUSH32(esp, edi); /* 0x141E6DF3: push edi */
    PUSH32(esp, 0x141F4328u); /* 0x141E6DF4: push 0x141f4328 */
    MEM32(0x141F4324) = esi; /* 0x141E6DF9: mov dword ptr [0x141f4324], esi */
    MEM8(0x141F4368) = (uint8_t)(0); /* 0x141E6DFF: mov byte ptr [0x141f4368], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6E06: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403F3A0u); /* 0x141E6E0B: push 0x1403f3a0 */
    PUSH32(esp, edi); /* 0x141E6E10: push edi */
    PUSH32(esp, 0x141F4400u); /* 0x141E6E11: push 0x141f4400 */
    MEM32(0x141F436C) = esi; /* 0x141E6E16: mov dword ptr [0x141f436c], esi */
    MEM8(0x141F4440) = (uint8_t)(LO8(ebx)); /* 0x141E6E1C: mov byte ptr [0x141f4440], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E6E22: call 0x14086600 */
    RECOMP_FLAGS_IN();
    MEM32(0x141F4444) = esi; /* 0x141E6E27: mov dword ptr [0x141f4444], esi */
    PUSH32(esp, 0x1403C3A8u); /* 0x141E6E2D: push 0x1403c3a8 */
    PUSH32(esp, edi); /* 0x141E6E32: push edi */
    PUSH32(esp, 0x141F4448u); /* 0x141E6E33: push 0x141f4448 */
    MEM8(0x141F4488) = (uint8_t)(3); /* 0x141E6E38: mov byte ptr [0x141f4488], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E6E3F: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F448C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F448C) = MEM32(0x141F448C) & 0; /* 0x141E6E44: and dword ptr [0x141f448c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001DC8u); /* 0x141E6E4B: push 0x14001dc8 */
    PUSH32(esp, edi); /* 0x141E6E50: push edi */
    PUSH32(esp, 0x141F4490u); /* 0x141E6E51: push 0x141f4490 */
    MEM8(0x141F44D0) = (uint8_t)(3); /* 0x141E6E56: mov byte ptr [0x141f44d0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E6E5D: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F44D4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F44D4) = MEM32(0x141F44D4) & 0; /* 0x141E6E62: and dword ptr [0x141f44d4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14033030u); /* 0x141E6E69: push 0x14033030 */
    PUSH32(esp, edi); /* 0x141E6E6E: push edi */
    PUSH32(esp, 0x141F44D8u); /* 0x141E6E6F: push 0x141f44d8 */
    MEM8(0x141F4518) = (uint8_t)(3); /* 0x141E6E74: mov byte ptr [0x141f4518], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E6E7B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F451C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F451C) = MEM32(0x141F451C) & 0; /* 0x141E6E80: and dword ptr [0x141f451c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403302Cu); /* 0x141E6E87: push 0x1403302c */
    PUSH32(esp, edi); /* 0x141E6E8C: push edi */
    PUSH32(esp, 0x141F4520u); /* 0x141E6E8D: push 0x141f4520 */
    MEM8(0x141F4560) = (uint8_t)(3); /* 0x141E6E92: mov byte ptr [0x141f4560], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E6E99: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F4564)); _flag_b = (uint32_t)(0);
    MEM32(0x141F4564) = MEM32(0x141F4564) & 0; /* 0x141E6E9E: and dword ptr [0x141f4564], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14032F78u); /* 0x141E6EA5: push 0x14032f78 */
    PUSH32(esp, edi); /* 0x141E6EAA: push edi */
    PUSH32(esp, 0x141F4568u); /* 0x141E6EAB: push 0x141f4568 */
    MEM8(0x141F45A8) = (uint8_t)(0); /* 0x141E6EB0: mov byte ptr [0x141f45a8], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6EB7: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001460u); /* 0x141E6EBC: push 0x14001460 */
    PUSH32(esp, edi); /* 0x141E6EC1: push edi */
    PUSH32(esp, 0x141F45B0u); /* 0x141E6EC2: push 0x141f45b0 */
    MEM32(0x141F45AC) = esi; /* 0x141E6EC7: mov dword ptr [0x141f45ac], esi */
    MEM8(0x141F45F0) = (uint8_t)(0); /* 0x141E6ECD: mov byte ptr [0x141f45f0], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6ED4: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001DB8u); /* 0x141E6ED9: push 0x14001db8 */
    PUSH32(esp, edi); /* 0x141E6EDE: push edi */
    PUSH32(esp, 0x141F45F8u); /* 0x141E6EDF: push 0x141f45f8 */
    MEM32(0x141F45F4) = esi; /* 0x141E6EE4: mov dword ptr [0x141f45f4], esi */
    MEM8(0x141F4638) = (uint8_t)(0); /* 0x141E6EEA: mov byte ptr [0x141f4638], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6EF1: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14032F70u); /* 0x141E6EF6: push 0x14032f70 */
    PUSH32(esp, edi); /* 0x141E6EFB: push edi */
    PUSH32(esp, 0x141F4640u); /* 0x141E6EFC: push 0x141f4640 */
    MEM32(0x141F463C) = esi; /* 0x141E6F01: mov dword ptr [0x141f463c], esi */
    MEM8(0x141F4680) = (uint8_t)(0); /* 0x141E6F07: mov byte ptr [0x141f4680], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6F0E: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14032FB8u); /* 0x141E6F13: push 0x14032fb8 */
    PUSH32(esp, edi); /* 0x141E6F18: push edi */
    PUSH32(esp, 0x141F4688u); /* 0x141E6F19: push 0x141f4688 */
    MEM32(0x141F4684) = esi; /* 0x141E6F1E: mov dword ptr [0x141f4684], esi */
    MEM8(0x141F46C8) = (uint8_t)(0); /* 0x141E6F24: mov byte ptr [0x141f46c8], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6F2B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001DACu); /* 0x141E6F30: push 0x14001dac */
    PUSH32(esp, edi); /* 0x141E6F35: push edi */
    PUSH32(esp, 0x141F46D0u); /* 0x141E6F36: push 0x141f46d0 */
    MEM32(0x141F46CC) = esi; /* 0x141E6F3B: mov dword ptr [0x141f46cc], esi */
    MEM8(0x141F4710) = (uint8_t)(0); /* 0x141E6F41: mov byte ptr [0x141f4710], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6F48: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140339D0u); /* 0x141E6F4D: push 0x140339d0 */
    PUSH32(esp, edi); /* 0x141E6F52: push edi */
    PUSH32(esp, 0x141F4718u); /* 0x141E6F53: push 0x141f4718 */
    MEM32(0x141F4714) = esi; /* 0x141E6F58: mov dword ptr [0x141f4714], esi */
    MEM8(0x141F4758) = (uint8_t)(3); /* 0x141E6F5E: mov byte ptr [0x141f4758], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E6F65: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F475C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F475C) = MEM32(0x141F475C) & 0; /* 0x141E6F6A: and dword ptr [0x141f475c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14033018u); /* 0x141E6F71: push 0x14033018 */
    PUSH32(esp, edi); /* 0x141E6F76: push edi */
    PUSH32(esp, 0x141F4760u); /* 0x141E6F77: push 0x141f4760 */
    MEM8(0x141F47A0) = (uint8_t)(2); /* 0x141E6F7C: mov byte ptr [0x141f47a0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E6F83: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F47A4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F47A4) = MEM32(0x141F47A4) & 0; /* 0x141E6F88: and dword ptr [0x141f47a4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14033004u); /* 0x141E6F8F: push 0x14033004 */
    PUSH32(esp, edi); /* 0x141E6F94: push edi */
    PUSH32(esp, 0x141F47A8u); /* 0x141E6F95: push 0x141f47a8 */
    MEM8(0x141F47E8) = (uint8_t)(2); /* 0x141E6F9A: mov byte ptr [0x141f47e8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E6FA1: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F47EC)); _flag_b = (uint32_t)(0);
    MEM32(0x141F47EC) = MEM32(0x141F47EC) & 0; /* 0x141E6FA6: and dword ptr [0x141f47ec], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403C358u); /* 0x141E6FAD: push 0x1403c358 */
    MEM8(0x141F4830) = (uint8_t)(2); /* 0x141E6FB2: mov byte ptr [0x141f4830], 2 */
    PUSH32(esp, edi); /* 0x141E6FB9: push edi */
    PUSH32(esp, 0x141F47F0u); /* 0x141E6FBA: push 0x141f47f0 */
    RECOMP_CALL(sub_14086600); /* 0x141E6FBF: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F4834)); _flag_b = (uint32_t)(0);
    MEM32(0x141F4834) = MEM32(0x141F4834) & 0; /* 0x141E6FC4: and dword ptr [0x141f4834], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403C360u); /* 0x141E6FCB: push 0x1403c360 */
    PUSH32(esp, edi); /* 0x141E6FD0: push edi */
    PUSH32(esp, 0x141F4838u); /* 0x141E6FD1: push 0x141f4838 */
    MEM8(0x141F4878) = (uint8_t)(2); /* 0x141E6FD6: mov byte ptr [0x141f4878], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E6FDD: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F487C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F487C) = MEM32(0x141F487C) & 0; /* 0x141E6FE2: and dword ptr [0x141f487c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x140339D4u); /* 0x141E6FE9: push 0x140339d4 */
    PUSH32(esp, edi); /* 0x141E6FEE: push edi */
    PUSH32(esp, 0x141F4880u); /* 0x141E6FEF: push 0x141f4880 */
    MEM8(0x141F48C0) = (uint8_t)(3); /* 0x141E6FF4: mov byte ptr [0x141f48c0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E6FFB: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F48C4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F48C4) = MEM32(0x141F48C4) & 0; /* 0x141E7000: and dword ptr [0x141f48c4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001DA0u); /* 0x141E7007: push 0x14001da0 */
    PUSH32(esp, edi); /* 0x141E700C: push edi */
    PUSH32(esp, 0x141F4370u); /* 0x141E700D: push 0x141f4370 */
    MEM8(0x141F43B0) = (uint8_t)(2); /* 0x141E7012: mov byte ptr [0x141f43b0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7019: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F43B4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F43B4) = MEM32(0x141F43B4) & 0; /* 0x141E701E: and dword ptr [0x141f43b4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001D94u); /* 0x141E7025: push 0x14001d94 */
    PUSH32(esp, edi); /* 0x141E702A: push edi */
    PUSH32(esp, 0x141F43B8u); /* 0x141E702B: push 0x141f43b8 */
    MEM8(0x141F43F8) = (uint8_t)(2); /* 0x141E7030: mov byte ptr [0x141f43f8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7037: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F43FC)); _flag_b = (uint32_t)(0);
    MEM32(0x141F43FC) = MEM32(0x141F43FC) & 0; /* 0x141E703C: and dword ptr [0x141f43fc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403C3DCu); /* 0x141E7043: push 0x1403c3dc */
    PUSH32(esp, edi); /* 0x141E7048: push edi */
    PUSH32(esp, 0x141F48C8u); /* 0x141E7049: push 0x141f48c8 */
    MEM8(0x141F4908) = (uint8_t)(3); /* 0x141E704E: mov byte ptr [0x141f4908], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7055: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14032F80u); /* 0x141E705A: push 0x14032f80 */
    PUSH32(esp, edi); /* 0x141E705F: push edi */
    PUSH32(esp, 0x141F4910u); /* 0x141E7060: push 0x141f4910 */
    MEM32(0x141F490C) = ebx; /* 0x141E7065: mov dword ptr [0x141f490c], ebx */
    MEM8(0x141F4950) = (uint8_t)(LO8(ebx)); /* 0x141E706B: mov byte ptr [0x141f4950], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E7071: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D90u); /* 0x141E7076: push 0x14001d90 */
    PUSH32(esp, edi); /* 0x141E707B: push edi */
    PUSH32(esp, 0x141F4958u); /* 0x141E707C: push 0x141f4958 */
    MEM32(0x141F4954) = esi; /* 0x141E7081: mov dword ptr [0x141f4954], esi */
    MEM8(0x141F4998) = (uint8_t)(3); /* 0x141E7087: mov byte ptr [0x141f4998], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E708E: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D8Cu); /* 0x141E7093: push 0x14001d8c */
    PUSH32(esp, edi); /* 0x141E7098: push edi */
    PUSH32(esp, 0x141F49A0u); /* 0x141E7099: push 0x141f49a0 */
    MEM32(0x141F499C) = ebx; /* 0x141E709E: mov dword ptr [0x141f499c], ebx */
    MEM8(0x141F49E0) = (uint8_t)(3); /* 0x141E70A4: mov byte ptr [0x141f49e0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E70AB: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D88u); /* 0x141E70B0: push 0x14001d88 */
    PUSH32(esp, edi); /* 0x141E70B5: push edi */
    PUSH32(esp, 0x141F49E8u); /* 0x141E70B6: push 0x141f49e8 */
    MEM32(0x141F49E4) = ebx; /* 0x141E70BB: mov dword ptr [0x141f49e4], ebx */
    MEM8(0x141F4A28) = (uint8_t)(3); /* 0x141E70C1: mov byte ptr [0x141f4a28], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E70C8: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140014C4u); /* 0x141E70CD: push 0x140014c4 */
    PUSH32(esp, edi); /* 0x141E70D2: push edi */
    PUSH32(esp, 0x141F4A30u); /* 0x141E70D3: push 0x141f4a30 */
    MEM32(0x141F4A2C) = ebx; /* 0x141E70D8: mov dword ptr [0x141f4a2c], ebx */
    MEM8(0x141F4A70) = (uint8_t)(4); /* 0x141E70DE: mov byte ptr [0x141f4a70], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E70E5: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C414u); /* 0x141E70EA: push 0x1403c414 */
    PUSH32(esp, edi); /* 0x141E70EF: push edi */
    PUSH32(esp, 0x141F4A78u); /* 0x141E70F0: push 0x141f4a78 */
    MEM32(0x141F4A74) = ebx; /* 0x141E70F5: mov dword ptr [0x141f4a74], ebx */
    MEM8(0x141F4AB8) = (uint8_t)(3); /* 0x141E70FB: mov byte ptr [0x141f4ab8], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7102: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C40Cu); /* 0x141E7107: push 0x1403c40c */
    PUSH32(esp, edi); /* 0x141E710C: push edi */
    PUSH32(esp, 0x141F4AC0u); /* 0x141E710D: push 0x141f4ac0 */
    MEM32(0x141F4ABC) = ebx; /* 0x141E7112: mov dword ptr [0x141f4abc], ebx */
    MEM8(0x141F4B00) = (uint8_t)(3); /* 0x141E7118: mov byte ptr [0x141f4b00], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E711F: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C3ECu); /* 0x141E7124: push 0x1403c3ec */
    PUSH32(esp, edi); /* 0x141E7129: push edi */
    PUSH32(esp, 0x141F4B08u); /* 0x141E712A: push 0x141f4b08 */
    MEM32(0x141F4B04) = ebx; /* 0x141E712F: mov dword ptr [0x141f4b04], ebx */
    MEM8(0x141F4B48) = (uint8_t)(4); /* 0x141E7135: mov byte ptr [0x141f4b48], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E713C: call 0x14086600 */
    RECOMP_FLAGS_IN();
    MEM32(0x141F4B4C) = ebx; /* 0x141E7141: mov dword ptr [0x141f4b4c], ebx */
    PUSH32(esp, 0x14001D84u); /* 0x141E7147: push 0x14001d84 */
    PUSH32(esp, edi); /* 0x141E714C: push edi */
    PUSH32(esp, 0x141F4B50u); /* 0x141E714D: push 0x141f4b50 */
    MEM8(0x141F4B90) = (uint8_t)(3); /* 0x141E7152: mov byte ptr [0x141f4b90], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7159: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C33Cu); /* 0x141E715E: push 0x1403c33c */
    PUSH32(esp, edi); /* 0x141E7163: push edi */
    PUSH32(esp, 0x141F4B98u); /* 0x141E7164: push 0x141f4b98 */
    MEM32(0x141F4B94) = ebx; /* 0x141E7169: mov dword ptr [0x141f4b94], ebx */
    MEM8(0x141F4BD8) = (uint8_t)(2); /* 0x141E716F: mov byte ptr [0x141f4bd8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7176: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C438u); /* 0x141E717B: push 0x1403c438 */
    PUSH32(esp, edi); /* 0x141E7180: push edi */
    PUSH32(esp, 0x141F4BE0u); /* 0x141E7181: push 0x141f4be0 */
    MEM32(0x141F4BDC) = ebx; /* 0x141E7186: mov dword ptr [0x141f4bdc], ebx */
    MEM8(0x141F4C20) = (uint8_t)(3); /* 0x141E718C: mov byte ptr [0x141f4c20], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7193: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C440u); /* 0x141E7198: push 0x1403c440 */
    PUSH32(esp, edi); /* 0x141E719D: push edi */
    PUSH32(esp, 0x141F4C28u); /* 0x141E719E: push 0x141f4c28 */
    MEM32(0x141F4C24) = ebx; /* 0x141E71A3: mov dword ptr [0x141f4c24], ebx */
    MEM8(0x141F4C68) = (uint8_t)(3); /* 0x141E71A9: mov byte ptr [0x141f4c68], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E71B0: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C348u); /* 0x141E71B5: push 0x1403c348 */
    PUSH32(esp, edi); /* 0x141E71BA: push edi */
    PUSH32(esp, 0x141F4C70u); /* 0x141E71BB: push 0x141f4c70 */
    MEM32(0x141F4C6C) = ebx; /* 0x141E71C0: mov dword ptr [0x141f4c6c], ebx */
    MEM8(0x141F4CB0) = (uint8_t)(2); /* 0x141E71C6: mov byte ptr [0x141f4cb0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E71CD: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14032FB0u); /* 0x141E71D2: push 0x14032fb0 */
    PUSH32(esp, edi); /* 0x141E71D7: push edi */
    PUSH32(esp, 0x141F4CB8u); /* 0x141E71D8: push 0x141f4cb8 */
    MEM32(0x141F4CB4) = ebx; /* 0x141E71DD: mov dword ptr [0x141f4cb4], ebx */
    MEM8(0x141F4CF8) = (uint8_t)(LO8(ebx)); /* 0x141E71E3: mov byte ptr [0x141f4cf8], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E71E9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D80u); /* 0x141E71EE: push 0x14001d80 */
    PUSH32(esp, edi); /* 0x141E71F3: push edi */
    PUSH32(esp, 0x141F4D00u); /* 0x141E71F4: push 0x141f4d00 */
    MEM32(0x141F4CFC) = esi; /* 0x141E71F9: mov dword ptr [0x141f4cfc], esi */
    MEM8(0x141F4D40) = (uint8_t)(3); /* 0x141E71FF: mov byte ptr [0x141f4d40], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7206: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x141E720B: push 5 */
    ebx = POP32_VAL(esp); /* 0x141E720D: pop ebx */
    PUSH32(esp, 0x14001D78u); /* 0x141E720E: push 0x14001d78 */
    PUSH32(esp, edi); /* 0x141E7213: push edi */
    PUSH32(esp, 0x141F4D48u); /* 0x141E7214: push 0x141f4d48 */
    MEM32(0x141F4D44) = ebx; /* 0x141E7219: mov dword ptr [0x141f4d44], ebx */
    MEM8(0x141F4D88) = (uint8_t)(4); /* 0x141E721F: mov byte ptr [0x141f4d88], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E7226: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14033014u); /* 0x141E722B: push 0x14033014 */
    PUSH32(esp, edi); /* 0x141E7230: push edi */
    PUSH32(esp, 0x141F4D90u); /* 0x141E7231: push 0x141f4d90 */
    MEM32(0x141F4D8C) = ebx; /* 0x141E7236: mov dword ptr [0x141f4d8c], ebx */
    MEM8(0x141F4DD0) = (uint8_t)(2); /* 0x141E723C: mov byte ptr [0x141f4dd0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7243: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F4DD4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F4DD4) = MEM32(0x141F4DD4) & 0; /* 0x141E7248: and dword ptr [0x141f4dd4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14032FC4u); /* 0x141E724F: push 0x14032fc4 */
    PUSH32(esp, edi); /* 0x141E7254: push edi */
    PUSH32(esp, 0x141F4DD8u); /* 0x141E7255: push 0x141f4dd8 */
    MEM8(0x141F4E18) = (uint8_t)(0); /* 0x141E725A: mov byte ptr [0x141f4e18], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7261: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140339D8u); /* 0x141E7266: push 0x140339d8 */
    PUSH32(esp, edi); /* 0x141E726B: push edi */
    PUSH32(esp, 0x141F4E20u); /* 0x141E726C: push 0x141f4e20 */
    MEM32(0x141F4E1C) = esi; /* 0x141E7271: mov dword ptr [0x141f4e1c], esi */
    MEM8(0x141F4E60) = (uint8_t)(3); /* 0x141E7277: mov byte ptr [0x141f4e60], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E727E: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F4E64)); _flag_b = (uint32_t)(0);
    MEM32(0x141F4E64) = MEM32(0x141F4E64) & 0; /* 0x141E7283: and dword ptr [0x141f4e64], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14033040u); /* 0x141E728A: push 0x14033040 */
    PUSH32(esp, edi); /* 0x141E728F: push edi */
    PUSH32(esp, 0x141F4E68u); /* 0x141E7290: push 0x141f4e68 */
    MEM8(0x141F4EA8) = (uint8_t)(4); /* 0x141E7295: mov byte ptr [0x141f4ea8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E729C: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F4EAC)); _flag_b = (uint32_t)(0);
    MEM32(0x141F4EAC) = MEM32(0x141F4EAC) & 0; /* 0x141E72A1: and dword ptr [0x141f4eac], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14033024u); /* 0x141E72A8: push 0x14033024 */
    PUSH32(esp, edi); /* 0x141E72AD: push edi */
    PUSH32(esp, 0x141F4EF8u); /* 0x141E72AE: push 0x141f4ef8 */
    MEM8(0x141F4F38) = (uint8_t)(3); /* 0x141E72B3: mov byte ptr [0x141f4f38], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E72BA: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F4F3C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F4F3C) = MEM32(0x141F4F3C) & 0; /* 0x141E72BF: and dword ptr [0x141f4f3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x141F4EF0) = (uint8_t)(3); /* 0x141E72C6: mov byte ptr [0x141f4ef0], 3 */
    PUSH32(esp, 0x14033028u); /* 0x141E72CD: push 0x14033028 */
    PUSH32(esp, edi); /* 0x141E72D2: push edi */
    PUSH32(esp, 0x141F4EB0u); /* 0x141E72D3: push 0x141f4eb0 */
    RECOMP_CALL(sub_14086600); /* 0x141E72D8: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F4EF4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F4EF4) = MEM32(0x141F4EF4) & 0; /* 0x141E72DD: and dword ptr [0x141f4ef4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403304Cu); /* 0x141E72E4: push 0x1403304c */
    PUSH32(esp, edi); /* 0x141E72E9: push edi */
    PUSH32(esp, 0x141F4F88u); /* 0x141E72EA: push 0x141f4f88 */
    MEM8(0x141F4FC8) = (uint8_t)(2); /* 0x141E72EF: mov byte ptr [0x141f4fc8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E72F6: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F4FCC)); _flag_b = (uint32_t)(0);
    MEM32(0x141F4FCC) = MEM32(0x141F4FCC) & 0; /* 0x141E72FB: and dword ptr [0x141f4fcc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403C450u); /* 0x141E7302: push 0x1403c450 */
    PUSH32(esp, edi); /* 0x141E7307: push edi */
    PUSH32(esp, 0x141F4FD0u); /* 0x141E7308: push 0x141f4fd0 */
    MEM8(0x141F5010) = (uint8_t)(4); /* 0x141E730D: mov byte ptr [0x141f5010], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E7314: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F5014)); _flag_b = (uint32_t)(0);
    MEM32(0x141F5014) = MEM32(0x141F5014) & 0; /* 0x141E7319: and dword ptr [0x141f5014], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403303Cu); /* 0x141E7320: push 0x1403303c */
    PUSH32(esp, edi); /* 0x141E7325: push edi */
    PUSH32(esp, 0x141F5018u); /* 0x141E7326: push 0x141f5018 */
    MEM8(0x141F5058) = (uint8_t)(3); /* 0x141E732B: mov byte ptr [0x141f5058], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7332: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F505C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F505C) = MEM32(0x141F505C) & 0; /* 0x141E7337: and dword ptr [0x141f505c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x140339DCu); /* 0x141E733E: push 0x140339dc */
    PUSH32(esp, edi); /* 0x141E7343: push edi */
    PUSH32(esp, 0x141F5060u); /* 0x141E7344: push 0x141f5060 */
    MEM8(0x141F50A0) = (uint8_t)(3); /* 0x141E7349: mov byte ptr [0x141f50a0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7350: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F50A4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F50A4) = MEM32(0x141F50A4) & 0; /* 0x141E7355: and dword ptr [0x141f50a4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14033050u); /* 0x141E735C: push 0x14033050 */
    PUSH32(esp, edi); /* 0x141E7361: push edi */
    PUSH32(esp, 0x141F50A8u); /* 0x141E7362: push 0x141f50a8 */
    MEM8(0x141F50E8) = (uint8_t)(0); /* 0x141E7367: mov byte ptr [0x141f50e8], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E736E: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C344u); /* 0x141E7373: push 0x1403c344 */
    PUSH32(esp, edi); /* 0x141E7378: push edi */
    PUSH32(esp, 0x141F50F0u); /* 0x141E7379: push 0x141f50f0 */
    MEM32(0x141F50EC) = esi; /* 0x141E737E: mov dword ptr [0x141f50ec], esi */
    MEM8(0x141F5130) = (uint8_t)(2); /* 0x141E7384: mov byte ptr [0x141f5130], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E738B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C430u); /* 0x141E7390: push 0x1403c430 */
    PUSH32(esp, edi); /* 0x141E7395: push edi */
    PUSH32(esp, 0x141F5138u); /* 0x141E7396: push 0x141f5138 */
    MEM32(0x141F5134) = 3; /* 0x141E739B: mov dword ptr [0x141f5134], 3 */
    MEM8(0x141F5178) = (uint8_t)(3); /* 0x141E73A5: mov byte ptr [0x141f5178], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E73AC: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400148Cu); /* 0x141E73B1: push 0x1400148c */
    PUSH32(esp, edi); /* 0x141E73B6: push edi */
    PUSH32(esp, 0x141F5180u); /* 0x141E73B7: push 0x141f5180 */
    MEM32(0x141F517C) = 3; /* 0x141E73BC: mov dword ptr [0x141f517c], 3 */
    MEM8(0x141F51C0) = (uint8_t)(3); /* 0x141E73C6: mov byte ptr [0x141f51c0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E73CD: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14032FC0u); /* 0x141E73D2: push 0x14032fc0 */
    PUSH32(esp, edi); /* 0x141E73D7: push edi */
    PUSH32(esp, 0x141F51C8u); /* 0x141E73D8: push 0x141f51c8 */
    MEM32(0x141F51C4) = esi; /* 0x141E73DD: mov dword ptr [0x141f51c4], esi */
    MEM8(0x141F5208) = (uint8_t)(0); /* 0x141E73E3: mov byte ptr [0x141f5208], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E73EA: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D70u); /* 0x141E73EF: push 0x14001d70 */
    PUSH32(esp, edi); /* 0x141E73F4: push edi */
    PUSH32(esp, 0x141F5210u); /* 0x141E73F5: push 0x141f5210 */
    MEM32(0x141F520C) = esi; /* 0x141E73FA: mov dword ptr [0x141f520c], esi */
    MEM8(0x141F5250) = (uint8_t)(1); /* 0x141E7400: mov byte ptr [0x141f5250], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7407: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D64u); /* 0x141E740C: push 0x14001d64 */
    PUSH32(esp, edi); /* 0x141E7411: push edi */
    PUSH32(esp, 0x141F5258u); /* 0x141E7412: push 0x141f5258 */
    MEM32(0x141F5254) = esi; /* 0x141E7417: mov dword ptr [0x141f5254], esi */
    MEM8(0x141F5298) = (uint8_t)(2); /* 0x141E741D: mov byte ptr [0x141f5298], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7424: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F529C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F529C) = MEM32(0x141F529C) & 0; /* 0x141E7429: and dword ptr [0x141f529c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001D58u); /* 0x141E7430: push 0x14001d58 */
    PUSH32(esp, edi); /* 0x141E7435: push edi */
    PUSH32(esp, 0x141F52A0u); /* 0x141E7436: push 0x141f52a0 */
    MEM8(0x141F52E0) = (uint8_t)(2); /* 0x141E743B: mov byte ptr [0x141f52e0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7442: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F52E4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F52E4) = MEM32(0x141F52E4) & 0; /* 0x141E7447: and dword ptr [0x141f52e4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001D4Cu); /* 0x141E744E: push 0x14001d4c */
    PUSH32(esp, edi); /* 0x141E7453: push edi */
    MEM8(0x141F5328) = (uint8_t)(2); /* 0x141E7454: mov byte ptr [0x141f5328], 2 */
    PUSH32(esp, 0x141F52E8u); /* 0x141E745B: push 0x141f52e8 */
    RECOMP_CALL(sub_14086600); /* 0x141E7460: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F532C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F532C) = MEM32(0x141F532C) & 0; /* 0x141E7465: and dword ptr [0x141f532c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001D44u); /* 0x141E746C: push 0x14001d44 */
    PUSH32(esp, edi); /* 0x141E7471: push edi */
    PUSH32(esp, 0x141F5330u); /* 0x141E7472: push 0x141f5330 */
    MEM8(0x141F5370) = (uint8_t)(2); /* 0x141E7477: mov byte ptr [0x141f5370], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E747E: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F5374)); _flag_b = (uint32_t)(0);
    MEM32(0x141F5374) = MEM32(0x141F5374) & 0; /* 0x141E7483: and dword ptr [0x141f5374], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14033034u); /* 0x141E748A: push 0x14033034 */
    PUSH32(esp, edi); /* 0x141E748F: push edi */
    PUSH32(esp, 0x141F5378u); /* 0x141E7490: push 0x141f5378 */
    MEM8(0x141F53B8) = (uint8_t)(2); /* 0x141E7495: mov byte ptr [0x141f53b8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E749C: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F53BC)); _flag_b = (uint32_t)(0);
    MEM32(0x141F53BC) = MEM32(0x141F53BC) & 0; /* 0x141E74A1: and dword ptr [0x141f53bc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x140339C4u); /* 0x141E74A8: push 0x140339c4 */
    PUSH32(esp, edi); /* 0x141E74AD: push edi */
    PUSH32(esp, 0x141F53C0u); /* 0x141E74AE: push 0x141f53c0 */
    MEM8(0x141F5400) = (uint8_t)(4); /* 0x141E74B3: mov byte ptr [0x141f5400], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E74BA: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D38u); /* 0x141E74BF: push 0x14001d38 */
    PUSH32(esp, edi); /* 0x141E74C4: push edi */
    PUSH32(esp, 0x141F5528u); /* 0x141E74C5: push 0x141f5528 */
    MEM32(0x141F5404) = ebx; /* 0x141E74CA: mov dword ptr [0x141f5404], ebx */
    MEM8(0x141F5568) = (uint8_t)(LO8(ebx)); /* 0x141E74D0: mov byte ptr [0x141f5568], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E74D6: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D2Cu); /* 0x141E74DB: push 0x14001d2c */
    PUSH32(esp, edi); /* 0x141E74E0: push edi */
    PUSH32(esp, 0x141F5498u); /* 0x141E74E1: push 0x141f5498 */
    MEM32(0x141F556C) = ebx; /* 0x141E74E6: mov dword ptr [0x141f556c], ebx */
    MEM8(0x141F54D8) = (uint8_t)(LO8(ebx)); /* 0x141E74EC: mov byte ptr [0x141f54d8], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E74F2: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x141E74F7: push 6 */
    MEM32(0x141F54DC) = ebx; /* 0x141E74F9: mov dword ptr [0x141f54dc], ebx */
    ebx = POP32_VAL(esp); /* 0x141E74FF: pop ebx */
    PUSH32(esp, 0x14001D20u); /* 0x141E7500: push 0x14001d20 */
    PUSH32(esp, edi); /* 0x141E7505: push edi */
    PUSH32(esp, 0x141F54E0u); /* 0x141E7506: push 0x141f54e0 */
    MEM8(0x141F5520) = (uint8_t)(LO8(ebx)); /* 0x141E750B: mov byte ptr [0x141f5520], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E7511: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D14u); /* 0x141E7516: push 0x14001d14 */
    PUSH32(esp, edi); /* 0x141E751B: push edi */
    PUSH32(esp, 0x141F5408u); /* 0x141E751C: push 0x141f5408 */
    MEM32(0x141F5524) = 5; /* 0x141E7521: mov dword ptr [0x141f5524], 5 */
    MEM8(0x141F5448) = (uint8_t)(5); /* 0x141E752B: mov byte ptr [0x141f5448], 5 */
    RECOMP_CALL(sub_14086600); /* 0x141E7532: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D08u); /* 0x141E7537: push 0x14001d08 */
    PUSH32(esp, edi); /* 0x141E753C: push edi */
    PUSH32(esp, 0x141F5450u); /* 0x141E753D: push 0x141f5450 */
    MEM32(0x141F544C) = 5; /* 0x141E7542: mov dword ptr [0x141f544c], 5 */
    MEM8(0x141F5490) = (uint8_t)(5); /* 0x141E754C: mov byte ptr [0x141f5490], 5 */
    RECOMP_CALL(sub_14086600); /* 0x141E7553: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x141E7558: push 5 */
    esi = POP32_VAL(esp); /* 0x141E755A: pop esi */
    PUSH32(esp, 0x1403C334u); /* 0x141E755B: push 0x1403c334 */
    PUSH32(esp, edi); /* 0x141E7560: push edi */
    PUSH32(esp, 0x141F5570u); /* 0x141E7561: push 0x141f5570 */
    MEM32(0x141F5494) = esi; /* 0x141E7566: mov dword ptr [0x141f5494], esi */
    MEM8(0x141F55B0) = (uint8_t)(2); /* 0x141E756C: mov byte ptr [0x141f55b0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7573: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F55B4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F55B4) = MEM32(0x141F55B4) & 0; /* 0x141E7578: and dword ptr [0x141f55b4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403F5A4u); /* 0x141E757F: push 0x1403f5a4 */
    PUSH32(esp, edi); /* 0x141E7584: push edi */
    PUSH32(esp, 0x141F55B8u); /* 0x141E7585: push 0x141f55b8 */
    MEM8(0x141F55F8) = (uint8_t)(1); /* 0x141E758A: mov byte ptr [0x141f55f8], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7591: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14032F90u); /* 0x141E7596: push 0x14032f90 */
    PUSH32(esp, edi); /* 0x141E759B: push edi */
    PUSH32(esp, 0x141F5600u); /* 0x141E759C: push 0x141f5600 */
    MEM32(0x141F55FC) = 4; /* 0x141E75A1: mov dword ptr [0x141f55fc], 4 */
    MEM8(0x141F5640) = (uint8_t)(3); /* 0x141E75AB: mov byte ptr [0x141f5640], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E75B2: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F5644)); _flag_b = (uint32_t)(0);
    MEM32(0x141F5644) = MEM32(0x141F5644) & 0; /* 0x141E75B7: and dword ptr [0x141f5644], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1403C3F4u); /* 0x141E75BE: push 0x1403c3f4 */
    PUSH32(esp, edi); /* 0x141E75C3: push edi */
    PUSH32(esp, 0x141F5648u); /* 0x141E75C4: push 0x141f5648 */
    MEM8(0x141F5688) = (uint8_t)(4); /* 0x141E75C9: mov byte ptr [0x141f5688], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E75D0: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D04u); /* 0x141E75D5: push 0x14001d04 */
    MEM32(0x141F568C) = 2; /* 0x141E75DA: mov dword ptr [0x141f568c], 2 */
    MEM8(0x141F56D0) = (uint8_t)(3); /* 0x141E75E4: mov byte ptr [0x141f56d0], 3 */
    PUSH32(esp, edi); /* 0x141E75EB: push edi */
    PUSH32(esp, 0x141F5690u); /* 0x141E75EC: push 0x141f5690 */
    RECOMP_CALL(sub_14086600); /* 0x141E75F1: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001D00u); /* 0x141E75F6: push 0x14001d00 */
    PUSH32(esp, edi); /* 0x141E75FB: push edi */
    PUSH32(esp, 0x141F56D8u); /* 0x141E75FC: push 0x141f56d8 */
    MEM32(0x141F56D4) = 2; /* 0x141E7601: mov dword ptr [0x141f56d4], 2 */
    MEM8(0x141F5718) = (uint8_t)(3); /* 0x141E760B: mov byte ptr [0x141f5718], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7612: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C424u); /* 0x141E7617: push 0x1403c424 */
    PUSH32(esp, edi); /* 0x141E761C: push edi */
    PUSH32(esp, 0x141F57B0u); /* 0x141E761D: push 0x141f57b0 */
    MEM32(0x141F571C) = 2; /* 0x141E7622: mov dword ptr [0x141f571c], 2 */
    MEM8(0x141F57F0) = (uint8_t)(3); /* 0x141E762C: mov byte ptr [0x141f57f0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7633: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C41Cu); /* 0x141E7638: push 0x1403c41c */
    PUSH32(esp, edi); /* 0x141E763D: push edi */
    PUSH32(esp, 0x141F57F8u); /* 0x141E763E: push 0x141f57f8 */
    MEM32(0x141F57F4) = 2; /* 0x141E7643: mov dword ptr [0x141f57f4], 2 */
    MEM8(0x141F5838) = (uint8_t)(3); /* 0x141E764D: mov byte ptr [0x141f5838], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7654: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C404u); /* 0x141E7659: push 0x1403c404 */
    PUSH32(esp, edi); /* 0x141E765E: push edi */
    PUSH32(esp, 0x141F5720u); /* 0x141E765F: push 0x141f5720 */
    MEM32(0x141F583C) = 2; /* 0x141E7664: mov dword ptr [0x141f583c], 2 */
    MEM8(0x141F5760) = (uint8_t)(4); /* 0x141E766E: mov byte ptr [0x141f5760], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E7675: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001CF8u); /* 0x141E767A: push 0x14001cf8 */
    PUSH32(esp, edi); /* 0x141E767F: push edi */
    PUSH32(esp, 0x141F5768u); /* 0x141E7680: push 0x141f5768 */
    MEM32(0x141F5764) = 2; /* 0x141E7685: mov dword ptr [0x141f5764], 2 */
    MEM8(0x141F57A8) = (uint8_t)(4); /* 0x141E768F: mov byte ptr [0x141f57a8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E7696: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C448u); /* 0x141E769B: push 0x1403c448 */
    PUSH32(esp, edi); /* 0x141E76A0: push edi */
    PUSH32(esp, 0x141F5840u); /* 0x141E76A1: push 0x141f5840 */
    MEM32(0x141F57AC) = 2; /* 0x141E76A6: mov dword ptr [0x141f57ac], 2 */
    MEM8(0x141F5880) = (uint8_t)(3); /* 0x141E76B0: mov byte ptr [0x141f5880], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E76B7: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C350u); /* 0x141E76BC: push 0x1403c350 */
    PUSH32(esp, edi); /* 0x141E76C1: push edi */
    PUSH32(esp, 0x141F5888u); /* 0x141E76C2: push 0x141f5888 */
    MEM32(0x141F5884) = 2; /* 0x141E76C7: mov dword ptr [0x141f5884], 2 */
    MEM8(0x141F58C8) = (uint8_t)(2); /* 0x141E76D1: mov byte ptr [0x141f58c8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E76D8: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1403C434u); /* 0x141E76DD: push 0x1403c434 */
    PUSH32(esp, edi); /* 0x141E76E2: push edi */
    PUSH32(esp, 0x141F58D0u); /* 0x141E76E3: push 0x141f58d0 */
    MEM32(0x141F58CC) = 2; /* 0x141E76E8: mov dword ptr [0x141f58cc], 2 */
    MEM8(0x141F5910) = (uint8_t)(3); /* 0x141E76F2: mov byte ptr [0x141f5910], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E76F9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001CF4u); /* 0x141E76FE: push 0x14001cf4 */
    PUSH32(esp, edi); /* 0x141E7703: push edi */
    PUSH32(esp, 0x141F5E70u); /* 0x141E7704: push 0x141f5e70 */
    MEM32(0x141F5914) = 3; /* 0x141E7709: mov dword ptr [0x141f5914], 3 */
    MEM8(0x141F5EB0) = (uint8_t)(0); /* 0x141E7713: mov byte ptr [0x141f5eb0], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E771A: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001CE8u); /* 0x141E771F: push 0x14001ce8 */
    PUSH32(esp, edi); /* 0x141E7724: push edi */
    PUSH32(esp, 0x141F5B10u); /* 0x141E7725: push 0x141f5b10 */
    MEM32(0x141F5EB4) = 4; /* 0x141E772A: mov dword ptr [0x141f5eb4], 4 */
    MEM8(0x141F5B50) = (uint8_t)(1); /* 0x141E7734: mov byte ptr [0x141f5b50], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E773B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001CDCu); /* 0x141E7740: push 0x14001cdc */
    PUSH32(esp, edi); /* 0x141E7745: push edi */
    PUSH32(esp, 0x141F5CC0u); /* 0x141E7746: push 0x141f5cc0 */
    MEM32(0x141F5B54) = ebx; /* 0x141E774B: mov dword ptr [0x141f5b54], ebx */
    MEM8(0x141F5D00) = (uint8_t)(1); /* 0x141E7751: mov byte ptr [0x141f5d00], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7758: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001CCCu); /* 0x141E775D: push 0x14001ccc */
    PUSH32(esp, edi); /* 0x141E7762: push edi */
    PUSH32(esp, 0x141F5B58u); /* 0x141E7763: push 0x141f5b58 */
    MEM32(0x141F5D04) = ebx; /* 0x141E7768: mov dword ptr [0x141f5d04], ebx */
    MEM8(0x141F5B98) = (uint8_t)(1); /* 0x141E776E: mov byte ptr [0x141f5b98], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7775: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001CB8u); /* 0x141E777A: push 0x14001cb8 */
    PUSH32(esp, edi); /* 0x141E777F: push edi */
    PUSH32(esp, 0x141F5C30u); /* 0x141E7780: push 0x141f5c30 */
    MEM32(0x141F5B9C) = ebx; /* 0x141E7785: mov dword ptr [0x141f5b9c], ebx */
    MEM8(0x141F5C70) = (uint8_t)(1); /* 0x141E778B: mov byte ptr [0x141f5c70], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7792: call 0x14086600 */
    RECOMP_FLAGS_IN();
    MEM32(0x141F5C74) = ebx; /* 0x141E7797: mov dword ptr [0x141f5c74], ebx */
    PUSH32(esp, 0x14001CA4u); /* 0x141E779D: push 0x14001ca4 */
    PUSH32(esp, edi); /* 0x141E77A2: push edi */
    PUSH32(esp, 0x141F5A80u); /* 0x141E77A3: push 0x141f5a80 */
    MEM8(0x141F5AC0) = (uint8_t)(0); /* 0x141E77A8: mov byte ptr [0x141f5ac0], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E77AF: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C90u); /* 0x141E77B4: push 0x14001c90 */
    PUSH32(esp, edi); /* 0x141E77B9: push edi */
    PUSH32(esp, 0x141F5A38u); /* 0x141E77BA: push 0x141f5a38 */
    MEM32(0x141F5AC4) = ebx; /* 0x141E77BF: mov dword ptr [0x141f5ac4], ebx */
    MEM8(0x141F5A78) = (uint8_t)(0); /* 0x141E77C5: mov byte ptr [0x141f5a78], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E77CC: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C84u); /* 0x141E77D1: push 0x14001c84 */
    PUSH32(esp, edi); /* 0x141E77D6: push edi */
    PUSH32(esp, 0x141F5AC8u); /* 0x141E77D7: push 0x141f5ac8 */
    MEM32(0x141F5A7C) = ebx; /* 0x141E77DC: mov dword ptr [0x141f5a7c], ebx */
    MEM8(0x141F5B08) = (uint8_t)(0); /* 0x141E77E2: mov byte ptr [0x141f5b08], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E77E9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C74u); /* 0x141E77EE: push 0x14001c74 */
    PUSH32(esp, edi); /* 0x141E77F3: push edi */
    PUSH32(esp, 0x141F5BE8u); /* 0x141E77F4: push 0x141f5be8 */
    MEM32(0x141F5B0C) = ebx; /* 0x141E77F9: mov dword ptr [0x141f5b0c], ebx */
    MEM8(0x141F5C28) = (uint8_t)(1); /* 0x141E77FF: mov byte ptr [0x141f5c28], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7806: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C60u); /* 0x141E780B: push 0x14001c60 */
    PUSH32(esp, edi); /* 0x141E7810: push edi */
    PUSH32(esp, 0x141F5960u); /* 0x141E7811: push 0x141f5960 */
    MEM32(0x141F5C2C) = ebx; /* 0x141E7816: mov dword ptr [0x141f5c2c], ebx */
    MEM8(0x141F59A0) = (uint8_t)(1); /* 0x141E781C: mov byte ptr [0x141f59a0], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7823: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C54u); /* 0x141E7828: push 0x14001c54 */
    PUSH32(esp, edi); /* 0x141E782D: push edi */
    PUSH32(esp, 0x141F59A8u); /* 0x141E782E: push 0x141f59a8 */
    MEM32(0x141F59A4) = ebx; /* 0x141E7833: mov dword ptr [0x141f59a4], ebx */
    MEM8(0x141F59E8) = (uint8_t)(1); /* 0x141E7839: mov byte ptr [0x141f59e8], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7840: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C44u); /* 0x141E7845: push 0x14001c44 */
    PUSH32(esp, edi); /* 0x141E784A: push edi */
    PUSH32(esp, 0x141F5918u); /* 0x141E784B: push 0x141f5918 */
    MEM32(0x141F59EC) = ebx; /* 0x141E7850: mov dword ptr [0x141f59ec], ebx */
    MEM8(0x141F5958) = (uint8_t)(1); /* 0x141E7856: mov byte ptr [0x141f5958], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E785D: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C34u); /* 0x141E7862: push 0x14001c34 */
    PUSH32(esp, edi); /* 0x141E7867: push edi */
    PUSH32(esp, 0x141F5BA0u); /* 0x141E7868: push 0x141f5ba0 */
    MEM32(0x141F595C) = ebx; /* 0x141E786D: mov dword ptr [0x141f595c], ebx */
    MEM8(0x141F5BE0) = (uint8_t)(1); /* 0x141E7873: mov byte ptr [0x141f5be0], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E787A: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C20u); /* 0x141E787F: push 0x14001c20 */
    PUSH32(esp, edi); /* 0x141E7884: push edi */
    PUSH32(esp, 0x141F5C78u); /* 0x141E7885: push 0x141f5c78 */
    MEM32(0x141F5BE4) = ebx; /* 0x141E788A: mov dword ptr [0x141f5be4], ebx */
    MEM8(0x141F5CB8) = (uint8_t)(1); /* 0x141E7890: mov byte ptr [0x141f5cb8], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7897: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C10u); /* 0x141E789C: push 0x14001c10 */
    PUSH32(esp, edi); /* 0x141E78A1: push edi */
    PUSH32(esp, 0x141F5D50u); /* 0x141E78A2: push 0x141f5d50 */
    MEM32(0x141F5CBC) = ebx; /* 0x141E78A7: mov dword ptr [0x141f5cbc], ebx */
    MEM8(0x141F5D90) = (uint8_t)(1); /* 0x141E78AD: mov byte ptr [0x141f5d90], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E78B4: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001C00u); /* 0x141E78B9: push 0x14001c00 */
    PUSH32(esp, edi); /* 0x141E78BE: push edi */
    PUSH32(esp, 0x141F5D08u); /* 0x141E78BF: push 0x141f5d08 */
    MEM32(0x141F5D94) = ebx; /* 0x141E78C4: mov dword ptr [0x141f5d94], ebx */
    MEM8(0x141F5D48) = (uint8_t)(1); /* 0x141E78CA: mov byte ptr [0x141f5d48], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E78D1: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001BF4u); /* 0x141E78D6: push 0x14001bf4 */
    PUSH32(esp, edi); /* 0x141E78DB: push edi */
    PUSH32(esp, 0x141F5D98u); /* 0x141E78DC: push 0x141f5d98 */
    MEM32(0x141F5D4C) = ebx; /* 0x141E78E1: mov dword ptr [0x141f5d4c], ebx */
    MEM8(0x141F5DD8) = (uint8_t)(0); /* 0x141E78E7: mov byte ptr [0x141f5dd8], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E78EE: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001BE0u); /* 0x141E78F3: push 0x14001be0 */
    PUSH32(esp, edi); /* 0x141E78F8: push edi */
    PUSH32(esp, 0x141F5DE0u); /* 0x141E78F9: push 0x141f5de0 */
    MEM32(0x141F5DDC) = ebx; /* 0x141E78FE: mov dword ptr [0x141f5ddc], ebx */
    MEM8(0x141F5E20) = (uint8_t)(0); /* 0x141E7904: mov byte ptr [0x141f5e20], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E790B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001BD0u); /* 0x141E7910: push 0x14001bd0 */
    MEM32(0x141F5E24) = ebx; /* 0x141E7915: mov dword ptr [0x141f5e24], ebx */
    MEM8(0x141F5A30) = (uint8_t)(1); /* 0x141E791B: mov byte ptr [0x141f5a30], 1 */
    PUSH32(esp, edi); /* 0x141E7922: push edi */
    PUSH32(esp, 0x141F59F0u); /* 0x141E7923: push 0x141f59f0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7928: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001BC0u); /* 0x141E792D: push 0x14001bc0 */
    PUSH32(esp, edi); /* 0x141E7932: push edi */
    PUSH32(esp, 0x141F5E28u); /* 0x141E7933: push 0x141f5e28 */
    MEM32(0x141F5A34) = ebx; /* 0x141E7938: mov dword ptr [0x141f5a34], ebx */
    MEM8(0x141F5E68) = (uint8_t)(0); /* 0x141E793E: mov byte ptr [0x141f5e68], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7945: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400146Cu); /* 0x141E794A: push 0x1400146c */
    PUSH32(esp, edi); /* 0x141E794F: push edi */
    PUSH32(esp, 0x141F5F90u); /* 0x141E7950: push 0x141f5f90 */
    MEM32(0x141F5E6C) = ebx; /* 0x141E7955: mov dword ptr [0x141f5e6c], ebx */
    MEM8(0x141F5FD0) = (uint8_t)(2); /* 0x141E795B: mov byte ptr [0x141f5fd0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7962: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001478u); /* 0x141E7967: push 0x14001478 */
    PUSH32(esp, edi); /* 0x141E796C: push edi */
    PUSH32(esp, 0x141F5F48u); /* 0x141E796D: push 0x141f5f48 */
    MEM32(0x141F5FD4) = esi; /* 0x141E7972: mov dword ptr [0x141f5fd4], esi */
    MEM8(0x141F5F88) = (uint8_t)(3); /* 0x141E7978: mov byte ptr [0x141f5f88], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E797F: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14062584u); /* 0x141E7984: push 0x14062584 */
    PUSH32(esp, edi); /* 0x141E7989: push edi */
    PUSH32(esp, 0x141F5F00u); /* 0x141E798A: push 0x141f5f00 */
    MEM32(0x141F5F8C) = esi; /* 0x141E798F: mov dword ptr [0x141f5f8c], esi */
    MEM8(0x141F5F40) = (uint8_t)(4); /* 0x141E7995: mov byte ptr [0x141f5f40], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E799C: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001BBCu); /* 0x141E79A1: push 0x14001bbc */
    PUSH32(esp, edi); /* 0x141E79A6: push edi */
    PUSH32(esp, 0x141F5EB8u); /* 0x141E79A7: push 0x141f5eb8 */
    MEM32(0x141F5F44) = esi; /* 0x141E79AC: mov dword ptr [0x141f5f44], esi */
    MEM8(0x141F5EF8) = (uint8_t)(4); /* 0x141E79B2: mov byte ptr [0x141f5ef8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E79B9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001BB0u); /* 0x141E79BE: push 0x14001bb0 */
    PUSH32(esp, edi); /* 0x141E79C3: push edi */
    PUSH32(esp, 0x141F6140u); /* 0x141E79C4: push 0x141f6140 */
    MEM32(0x141F5EFC) = esi; /* 0x141E79C9: mov dword ptr [0x141f5efc], esi */
    MEM8(0x141F6180) = (uint8_t)(1); /* 0x141E79CF: mov byte ptr [0x141f6180], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E79D6: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001BA4u); /* 0x141E79DB: push 0x14001ba4 */
    PUSH32(esp, edi); /* 0x141E79E0: push edi */
    PUSH32(esp, 0x141F6188u); /* 0x141E79E1: push 0x141f6188 */
    MEM32(0x141F6184) = 4; /* 0x141E79E6: mov dword ptr [0x141f6184], 4 */
    MEM8(0x141F61C8) = (uint8_t)(1); /* 0x141E79F0: mov byte ptr [0x141f61c8], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E79F7: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001B8Cu); /* 0x141E79FC: push 0x14001b8c */
    PUSH32(esp, edi); /* 0x141E7A01: push edi */
    PUSH32(esp, 0x141F61D0u); /* 0x141E7A02: push 0x141f61d0 */
    MEM32(0x141F61CC) = 4; /* 0x141E7A07: mov dword ptr [0x141f61cc], 4 */
    MEM8(0x141F6210) = (uint8_t)(1); /* 0x141E7A11: mov byte ptr [0x141f6210], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7A18: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140014D8u); /* 0x141E7A1D: push 0x140014d8 */
    PUSH32(esp, edi); /* 0x141E7A22: push edi */
    PUSH32(esp, 0x141F6218u); /* 0x141E7A23: push 0x141f6218 */
    MEM32(0x141F6214) = 4; /* 0x141E7A28: mov dword ptr [0x141f6214], 4 */
    MEM8(0x141F6258) = (uint8_t)(1); /* 0x141E7A32: mov byte ptr [0x141f6258], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7A39: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001B80u); /* 0x141E7A3E: push 0x14001b80 */
    PUSH32(esp, edi); /* 0x141E7A43: push edi */
    PUSH32(esp, 0x141F6890u); /* 0x141E7A44: push 0x141f6890 */
    MEM32(0x141F625C) = 4; /* 0x141E7A49: mov dword ptr [0x141f625c], 4 */
    MEM8(0x141F68D0) = (uint8_t)(1); /* 0x141E7A53: mov byte ptr [0x141f68d0], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7A5A: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001B6Cu); /* 0x141E7A5F: push 0x14001b6c */
    PUSH32(esp, edi); /* 0x141E7A64: push edi */
    PUSH32(esp, 0x141F68D8u); /* 0x141E7A65: push 0x141f68d8 */
    MEM32(0x141F68D4) = ebx; /* 0x141E7A6A: mov dword ptr [0x141f68d4], ebx */
    MEM8(0x141F6918) = (uint8_t)(0); /* 0x141E7A70: mov byte ptr [0x141f6918], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7A77: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001B58u); /* 0x141E7A7C: push 0x14001b58 */
    PUSH32(esp, edi); /* 0x141E7A81: push edi */
    PUSH32(esp, 0x141F6920u); /* 0x141E7A82: push 0x141f6920 */
    MEM32(0x141F691C) = ebx; /* 0x141E7A87: mov dword ptr [0x141f691c], ebx */
    MEM8(0x141F6960) = (uint8_t)(0); /* 0x141E7A8D: mov byte ptr [0x141f6960], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7A94: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001B48u); /* 0x141E7A99: push 0x14001b48 */
    PUSH32(esp, edi); /* 0x141E7A9E: push edi */
    PUSH32(esp, 0x141F6968u); /* 0x141E7A9F: push 0x141f6968 */
    MEM32(0x141F6964) = ebx; /* 0x141E7AA4: mov dword ptr [0x141f6964], ebx */
    MEM8(0x141F69A8) = (uint8_t)(0); /* 0x141E7AAA: mov byte ptr [0x141f69a8], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7AB1: call 0x14086600 */
    RECOMP_FLAGS_IN();
    MEM32(0x141F69AC) = ebx; /* 0x141E7AB6: mov dword ptr [0x141f69ac], ebx */
    PUSH32(esp, 0x14001484u); /* 0x141E7ABC: push 0x14001484 */
    PUSH32(esp, edi); /* 0x141E7AC1: push edi */
    PUSH32(esp, 0x141F6260u); /* 0x141E7AC2: push 0x141f6260 */
    MEM8(0x141F62A0) = (uint8_t)(2); /* 0x141E7AC7: mov byte ptr [0x141f62a0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7ACE: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001B34u); /* 0x141E7AD3: push 0x14001b34 */
    PUSH32(esp, edi); /* 0x141E7AD8: push edi */
    PUSH32(esp, 0x141F62A8u); /* 0x141E7AD9: push 0x141f62a8 */
    MEM32(0x141F62A4) = 4; /* 0x141E7ADE: mov dword ptr [0x141f62a4], 4 */
    MEM8(0x141F62E8) = (uint8_t)(2); /* 0x141E7AE8: mov byte ptr [0x141f62e8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7AEF: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F62EC)); _flag_b = (uint32_t)(0);
    MEM32(0x141F62EC) = MEM32(0x141F62EC) & 0; /* 0x141E7AF4: and dword ptr [0x141f62ec], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001B24u); /* 0x141E7AFB: push 0x14001b24 */
    PUSH32(esp, edi); /* 0x141E7B00: push edi */
    PUSH32(esp, 0x141F62F0u); /* 0x141E7B01: push 0x141f62f0 */
    MEM8(0x141F6330) = (uint8_t)(2); /* 0x141E7B06: mov byte ptr [0x141f6330], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7B0D: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F6334)); _flag_b = (uint32_t)(0);
    MEM32(0x141F6334) = MEM32(0x141F6334) & 0; /* 0x141E7B12: and dword ptr [0x141f6334], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001B10u); /* 0x141E7B19: push 0x14001b10 */
    PUSH32(esp, edi); /* 0x141E7B1E: push edi */
    PUSH32(esp, 0x141F6338u); /* 0x141E7B1F: push 0x141f6338 */
    MEM8(0x141F6378) = (uint8_t)(2); /* 0x141E7B24: mov byte ptr [0x141f6378], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7B2B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F637C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F637C) = MEM32(0x141F637C) & 0; /* 0x141E7B30: and dword ptr [0x141f637c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001B00u); /* 0x141E7B37: push 0x14001b00 */
    PUSH32(esp, edi); /* 0x141E7B3C: push edi */
    PUSH32(esp, 0x141F6380u); /* 0x141E7B3D: push 0x141f6380 */
    MEM8(0x141F63C0) = (uint8_t)(2); /* 0x141E7B42: mov byte ptr [0x141f63c0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7B49: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F63C4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F63C4) = MEM32(0x141F63C4) & 0; /* 0x141E7B4E: and dword ptr [0x141f63c4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1406258Cu); /* 0x141E7B55: push 0x1406258c */
    PUSH32(esp, edi); /* 0x141E7B5A: push edi */
    PUSH32(esp, 0x141F63C8u); /* 0x141E7B5B: push 0x141f63c8 */
    MEM8(0x141F6408) = (uint8_t)(5); /* 0x141E7B60: mov byte ptr [0x141f6408], 5 */
    RECOMP_CALL(sub_14086600); /* 0x141E7B67: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140625A4u); /* 0x141E7B6C: push 0x140625a4 */
    PUSH32(esp, edi); /* 0x141E7B71: push edi */
    PUSH32(esp, 0x141F6410u); /* 0x141E7B72: push 0x141f6410 */
    MEM32(0x141F640C) = esi; /* 0x141E7B77: mov dword ptr [0x141f640c], esi */
    MEM8(0x141F6450) = (uint8_t)(5); /* 0x141E7B7D: mov byte ptr [0x141f6450], 5 */
    RECOMP_CALL(sub_14086600); /* 0x141E7B84: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140625B0u); /* 0x141E7B89: push 0x140625b0 */
    PUSH32(esp, edi); /* 0x141E7B8E: push edi */
    PUSH32(esp, 0x141F6458u); /* 0x141E7B8F: push 0x141f6458 */
    MEM32(0x141F6454) = esi; /* 0x141E7B94: mov dword ptr [0x141f6454], esi */
    MEM8(0x141F6498) = (uint8_t)(LO8(ebx)); /* 0x141E7B9A: mov byte ptr [0x141f6498], bl */
    RECOMP_CALL(sub_14086600); /* 0x141E7BA0: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14033038u); /* 0x141E7BA5: push 0x14033038 */
    PUSH32(esp, edi); /* 0x141E7BAA: push edi */
    PUSH32(esp, 0x141F64A0u); /* 0x141E7BAB: push 0x141f64a0 */
    MEM32(0x141F649C) = esi; /* 0x141E7BB0: mov dword ptr [0x141f649c], esi */
    MEM8(0x141F64E0) = (uint8_t)(2); /* 0x141E7BB6: mov byte ptr [0x141f64e0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7BBD: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F64E4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F64E4) = MEM32(0x141F64E4) & 0; /* 0x141E7BC2: and dword ptr [0x141f64e4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x140448D4u); /* 0x141E7BC9: push 0x140448d4 */
    PUSH32(esp, edi); /* 0x141E7BCE: push edi */
    PUSH32(esp, 0x141F64E8u); /* 0x141E7BCF: push 0x141f64e8 */
    MEM8(0x141F6528) = (uint8_t)(2); /* 0x141E7BD4: mov byte ptr [0x141f6528], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7BDB: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F652C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F652C) = MEM32(0x141F652C) & 0; /* 0x141E7BE0: and dword ptr [0x141f652c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x140448E0u); /* 0x141E7BE7: push 0x140448e0 */
    PUSH32(esp, edi); /* 0x141E7BEC: push edi */
    PUSH32(esp, 0x141F6530u); /* 0x141E7BED: push 0x141f6530 */
    MEM8(0x141F6570) = (uint8_t)(2); /* 0x141E7BF2: mov byte ptr [0x141f6570], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7BF9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F6574)); _flag_b = (uint32_t)(0);
    MEM32(0x141F6574) = MEM32(0x141F6574) & 0; /* 0x141E7BFE: and dword ptr [0x141f6574], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x140014E8u); /* 0x141E7C05: push 0x140014e8 */
    PUSH32(esp, edi); /* 0x141E7C0A: push edi */
    PUSH32(esp, 0x141F6578u); /* 0x141E7C0B: push 0x141f6578 */
    MEM8(0x141F65B8) = (uint8_t)(4); /* 0x141E7C10: mov byte ptr [0x141f65b8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E7C17: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140014E0u); /* 0x141E7C1C: push 0x140014e0 */
    PUSH32(esp, edi); /* 0x141E7C21: push edi */
    PUSH32(esp, 0x141F65C0u); /* 0x141E7C22: push 0x141f65c0 */
    MEM32(0x141F65BC) = 2; /* 0x141E7C27: mov dword ptr [0x141f65bc], 2 */
    MEM8(0x141F6600) = (uint8_t)(4); /* 0x141E7C31: mov byte ptr [0x141f6600], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E7C38: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1404492Cu); /* 0x141E7C3D: push 0x1404492c */
    MEM32(0x141F6604) = 2; /* 0x141E7C42: mov dword ptr [0x141f6604], 2 */
    MEM8(0x141F6648) = (uint8_t)(2); /* 0x141E7C4C: mov byte ptr [0x141f6648], 2 */
    PUSH32(esp, edi); /* 0x141E7C53: push edi */
    PUSH32(esp, 0x141F6608u); /* 0x141E7C54: push 0x141f6608 */
    RECOMP_CALL(sub_14086600); /* 0x141E7C59: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001530u); /* 0x141E7C5E: push 0x14001530 */
    PUSH32(esp, edi); /* 0x141E7C63: push edi */
    PUSH32(esp, 0x141F6650u); /* 0x141E7C64: push 0x141f6650 */
    MEM32(0x141F664C) = 3; /* 0x141E7C69: mov dword ptr [0x141f664c], 3 */
    MEM8(0x141F6690) = (uint8_t)(2); /* 0x141E7C73: mov byte ptr [0x141f6690], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7C7A: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001AF4u); /* 0x141E7C7F: push 0x14001af4 */
    PUSH32(esp, edi); /* 0x141E7C84: push edi */
    PUSH32(esp, 0x141F6698u); /* 0x141E7C85: push 0x141f6698 */
    MEM32(0x141F6694) = 3; /* 0x141E7C8A: mov dword ptr [0x141f6694], 3 */
    MEM8(0x141F66D8) = (uint8_t)(2); /* 0x141E7C94: mov byte ptr [0x141f66d8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7C9B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001520u); /* 0x141E7CA0: push 0x14001520 */
    PUSH32(esp, edi); /* 0x141E7CA5: push edi */
    PUSH32(esp, 0x141F66E0u); /* 0x141E7CA6: push 0x141f66e0 */
    MEM32(0x141F66DC) = 3; /* 0x141E7CAB: mov dword ptr [0x141f66dc], 3 */
    MEM8(0x141F6720) = (uint8_t)(2); /* 0x141E7CB5: mov byte ptr [0x141f6720], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7CBC: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140014B4u); /* 0x141E7CC1: push 0x140014b4 */
    PUSH32(esp, edi); /* 0x141E7CC6: push edi */
    PUSH32(esp, 0x141F6728u); /* 0x141E7CC7: push 0x141f6728 */
    MEM32(0x141F6724) = 3; /* 0x141E7CCC: mov dword ptr [0x141f6724], 3 */
    MEM8(0x141F6768) = (uint8_t)(4); /* 0x141E7CD6: mov byte ptr [0x141f6768], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E7CDD: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140014BCu); /* 0x141E7CE2: push 0x140014bc */
    PUSH32(esp, edi); /* 0x141E7CE7: push edi */
    PUSH32(esp, 0x141F6770u); /* 0x141E7CE8: push 0x141f6770 */
    MEM32(0x141F676C) = 3; /* 0x141E7CED: mov dword ptr [0x141f676c], 3 */
    MEM8(0x141F67B0) = (uint8_t)(4); /* 0x141E7CF7: mov byte ptr [0x141f67b0], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E7CFE: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140014CCu); /* 0x141E7D03: push 0x140014cc */
    PUSH32(esp, edi); /* 0x141E7D08: push edi */
    PUSH32(esp, 0x141F67B8u); /* 0x141E7D09: push 0x141f67b8 */
    MEM32(0x141F67B4) = 3; /* 0x141E7D0E: mov dword ptr [0x141f67b4], 3 */
    MEM8(0x141F67F8) = (uint8_t)(5); /* 0x141E7D18: mov byte ptr [0x141f67f8], 5 */
    RECOMP_CALL(sub_14086600); /* 0x141E7D1F: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001AECu); /* 0x141E7D24: push 0x14001aec */
    PUSH32(esp, edi); /* 0x141E7D29: push edi */
    PUSH32(esp, 0x141F6800u); /* 0x141E7D2A: push 0x141f6800 */
    MEM32(0x141F67FC) = 3; /* 0x141E7D2F: mov dword ptr [0x141f67fc], 3 */
    MEM8(0x141F6840) = (uint8_t)(2); /* 0x141E7D39: mov byte ptr [0x141f6840], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E7D40: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001AE4u); /* 0x141E7D45: push 0x14001ae4 */
    PUSH32(esp, edi); /* 0x141E7D4A: push edi */
    PUSH32(esp, 0x141F6848u); /* 0x141E7D4B: push 0x141f6848 */
    MEM32(0x141F6844) = 3; /* 0x141E7D50: mov dword ptr [0x141f6844], 3 */
    MEM8(0x141F6888) = (uint8_t)(5); /* 0x141E7D5A: mov byte ptr [0x141f6888], 5 */
    RECOMP_CALL(sub_14086600); /* 0x141E7D61: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F688C)); _flag_b = (uint32_t)(0);
    MEM32(0x141F688C) = MEM32(0x141F688C) & 0; /* 0x141E7D66: and dword ptr [0x141f688c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x14001AD8u); /* 0x141E7D6D: push 0x14001ad8 */
    PUSH32(esp, edi); /* 0x141E7D72: push edi */
    PUSH32(esp, 0x141F6020u); /* 0x141E7D73: push 0x141f6020 */
    MEM8(0x141F6060) = (uint8_t)(0); /* 0x141E7D78: mov byte ptr [0x141f6060], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7D7F: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001AC0u); /* 0x141E7D84: push 0x14001ac0 */
    PUSH32(esp, edi); /* 0x141E7D89: push edi */
    PUSH32(esp, 0x141F6068u); /* 0x141E7D8A: push 0x141f6068 */
    MEM32(0x141F6064) = ebx; /* 0x141E7D8F: mov dword ptr [0x141f6064], ebx */
    MEM8(0x141F60A8) = (uint8_t)(0); /* 0x141E7D95: mov byte ptr [0x141f60a8], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7D9C: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001AB0u); /* 0x141E7DA1: push 0x14001ab0 */
    PUSH32(esp, edi); /* 0x141E7DA6: push edi */
    PUSH32(esp, 0x141F60B0u); /* 0x141E7DA7: push 0x141f60b0 */
    MEM32(0x141F60AC) = ebx; /* 0x141E7DAC: mov dword ptr [0x141f60ac], ebx */
    MEM8(0x141F60F0) = (uint8_t)(0); /* 0x141E7DB2: mov byte ptr [0x141f60f0], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7DB9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001AA0u); /* 0x141E7DBE: push 0x14001aa0 */
    PUSH32(esp, edi); /* 0x141E7DC3: push edi */
    PUSH32(esp, 0x141F60F8u); /* 0x141E7DC4: push 0x141f60f8 */
    MEM32(0x141F60F4) = ebx; /* 0x141E7DC9: mov dword ptr [0x141f60f4], ebx */
    MEM8(0x141F6138) = (uint8_t)(0); /* 0x141E7DCF: mov byte ptr [0x141f6138], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7DD6: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001A80u); /* 0x141E7DDB: push 0x14001a80 */
    PUSH32(esp, edi); /* 0x141E7DE0: push edi */
    PUSH32(esp, 0x141F69B0u); /* 0x141E7DE1: push 0x141f69b0 */
    MEM32(0x141F613C) = ebx; /* 0x141E7DE6: mov dword ptr [0x141f613c], ebx */
    MEM8(0x141F69F0) = (uint8_t)(0); /* 0x141E7DEC: mov byte ptr [0x141f69f0], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7DF3: call 0x14086600 */
    RECOMP_FLAGS_IN();
    MEM32(0x141F69F4) = ebx; /* 0x141E7DF8: mov dword ptr [0x141f69f4], ebx */
    PUSH32(esp, 0x14001A60u); /* 0x141E7DFE: push 0x14001a60 */
    PUSH32(esp, edi); /* 0x141E7E03: push edi */
    PUSH32(esp, 0x141F69F8u); /* 0x141E7E04: push 0x141f69f8 */
    MEM8(0x141F6A38) = (uint8_t)(0); /* 0x141E7E09: mov byte ptr [0x141f6a38], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7E10: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001A48u); /* 0x141E7E15: push 0x14001a48 */
    PUSH32(esp, edi); /* 0x141E7E1A: push edi */
    PUSH32(esp, 0x141F6A40u); /* 0x141E7E1B: push 0x141f6a40 */
    MEM32(0x141F6A3C) = ebx; /* 0x141E7E20: mov dword ptr [0x141f6a3c], ebx */
    MEM8(0x141F6A80) = (uint8_t)(0); /* 0x141E7E26: mov byte ptr [0x141f6a80], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7E2D: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001A28u); /* 0x141E7E32: push 0x14001a28 */
    PUSH32(esp, edi); /* 0x141E7E37: push edi */
    PUSH32(esp, 0x141F6A88u); /* 0x141E7E38: push 0x141f6a88 */
    MEM32(0x141F6A84) = ebx; /* 0x141E7E3D: mov dword ptr [0x141f6a84], ebx */
    MEM8(0x141F6AC8) = (uint8_t)(0); /* 0x141E7E43: mov byte ptr [0x141f6ac8], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7E4A: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001A04u); /* 0x141E7E4F: push 0x14001a04 */
    PUSH32(esp, edi); /* 0x141E7E54: push edi */
    PUSH32(esp, 0x141F6AD0u); /* 0x141E7E55: push 0x141f6ad0 */
    MEM32(0x141F6ACC) = ebx; /* 0x141E7E5A: mov dword ptr [0x141f6acc], ebx */
    MEM8(0x141F6B10) = (uint8_t)(0); /* 0x141E7E60: mov byte ptr [0x141f6b10], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7E67: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140019ECu); /* 0x141E7E6C: push 0x140019ec */
    PUSH32(esp, edi); /* 0x141E7E71: push edi */
    PUSH32(esp, 0x141F6B18u); /* 0x141E7E72: push 0x141f6b18 */
    MEM32(0x141F6B14) = ebx; /* 0x141E7E77: mov dword ptr [0x141f6b14], ebx */
    MEM8(0x141F6B58) = (uint8_t)(0); /* 0x141E7E7D: mov byte ptr [0x141f6b58], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7E84: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140019C8u); /* 0x141E7E89: push 0x140019c8 */
    PUSH32(esp, edi); /* 0x141E7E8E: push edi */
    PUSH32(esp, 0x141F6B60u); /* 0x141E7E8F: push 0x141f6b60 */
    MEM32(0x141F6B5C) = ebx; /* 0x141E7E94: mov dword ptr [0x141f6b5c], ebx */
    MEM8(0x141F6BA0) = (uint8_t)(0); /* 0x141E7E9A: mov byte ptr [0x141f6ba0], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7EA1: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140019A4u); /* 0x141E7EA6: push 0x140019a4 */
    PUSH32(esp, edi); /* 0x141E7EAB: push edi */
    PUSH32(esp, 0x141F6BA8u); /* 0x141E7EAC: push 0x141f6ba8 */
    MEM32(0x141F6BA4) = ebx; /* 0x141E7EB1: mov dword ptr [0x141f6ba4], ebx */
    MEM8(0x141F6BE8) = (uint8_t)(0); /* 0x141E7EB7: mov byte ptr [0x141f6be8], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7EBE: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001990u); /* 0x141E7EC3: push 0x14001990 */
    PUSH32(esp, edi); /* 0x141E7EC8: push edi */
    PUSH32(esp, 0x141F6BF0u); /* 0x141E7EC9: push 0x141f6bf0 */
    MEM32(0x141F6BEC) = ebx; /* 0x141E7ECE: mov dword ptr [0x141f6bec], ebx */
    MEM8(0x141F6C30) = (uint8_t)(0); /* 0x141E7ED4: mov byte ptr [0x141f6c30], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7EDB: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001980u); /* 0x141E7EE0: push 0x14001980 */
    PUSH32(esp, edi); /* 0x141E7EE5: push edi */
    PUSH32(esp, 0x141F6C38u); /* 0x141E7EE6: push 0x141f6c38 */
    MEM32(0x141F6C34) = ebx; /* 0x141E7EEB: mov dword ptr [0x141f6c34], ebx */
    MEM8(0x141F6C78) = (uint8_t)(1); /* 0x141E7EF1: mov byte ptr [0x141f6c78], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7EF8: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001974u); /* 0x141E7EFD: push 0x14001974 */
    PUSH32(esp, edi); /* 0x141E7F02: push edi */
    PUSH32(esp, 0x141F6C80u); /* 0x141E7F03: push 0x141f6c80 */
    MEM32(0x141F6C7C) = ebx; /* 0x141E7F08: mov dword ptr [0x141f6c7c], ebx */
    MEM8(0x141F6CC0) = (uint8_t)(1); /* 0x141E7F0E: mov byte ptr [0x141f6cc0], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7F15: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001960u); /* 0x141E7F1A: push 0x14001960 */
    PUSH32(esp, edi); /* 0x141E7F1F: push edi */
    PUSH32(esp, 0x141F6CC8u); /* 0x141E7F20: push 0x141f6cc8 */
    MEM32(0x141F6CC4) = ebx; /* 0x141E7F25: mov dword ptr [0x141f6cc4], ebx */
    MEM8(0x141F6D08) = (uint8_t)(1); /* 0x141E7F2B: mov byte ptr [0x141f6d08], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7F32: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001950u); /* 0x141E7F37: push 0x14001950 */
    PUSH32(esp, edi); /* 0x141E7F3C: push edi */
    PUSH32(esp, 0x141F6D10u); /* 0x141E7F3D: push 0x141f6d10 */
    MEM32(0x141F6D0C) = ebx; /* 0x141E7F42: mov dword ptr [0x141f6d0c], ebx */
    MEM8(0x141F6D50) = (uint8_t)(1); /* 0x141E7F48: mov byte ptr [0x141f6d50], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7F4F: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400193Cu); /* 0x141E7F54: push 0x1400193c */
    PUSH32(esp, edi); /* 0x141E7F59: push edi */
    PUSH32(esp, 0x141F6D58u); /* 0x141E7F5A: push 0x141f6d58 */
    MEM32(0x141F6D54) = ebx; /* 0x141E7F5F: mov dword ptr [0x141f6d54], ebx */
    MEM8(0x141F6D98) = (uint8_t)(1); /* 0x141E7F65: mov byte ptr [0x141f6d98], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7F6C: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001928u); /* 0x141E7F71: push 0x14001928 */
    MEM32(0x141F6D9C) = ebx; /* 0x141E7F76: mov dword ptr [0x141f6d9c], ebx */
    MEM8(0x141F6DE0) = (uint8_t)(1); /* 0x141E7F7C: mov byte ptr [0x141f6de0], 1 */
    PUSH32(esp, edi); /* 0x141E7F83: push edi */
    PUSH32(esp, 0x141F6DA0u); /* 0x141E7F84: push 0x141f6da0 */
    RECOMP_CALL(sub_14086600); /* 0x141E7F89: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001910u); /* 0x141E7F8E: push 0x14001910 */
    PUSH32(esp, edi); /* 0x141E7F93: push edi */
    PUSH32(esp, 0x141F6DE8u); /* 0x141E7F94: push 0x141f6de8 */
    MEM32(0x141F6DE4) = ebx; /* 0x141E7F99: mov dword ptr [0x141f6de4], ebx */
    MEM8(0x141F6E28) = (uint8_t)(1); /* 0x141E7F9F: mov byte ptr [0x141f6e28], 1 */
    RECOMP_CALL(sub_14086600); /* 0x141E7FA6: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001900u); /* 0x141E7FAB: push 0x14001900 */
    PUSH32(esp, edi); /* 0x141E7FB0: push edi */
    PUSH32(esp, 0x141F6E30u); /* 0x141E7FB1: push 0x141f6e30 */
    MEM32(0x141F6E2C) = ebx; /* 0x141E7FB6: mov dword ptr [0x141f6e2c], ebx */
    MEM8(0x141F6E70) = (uint8_t)(3); /* 0x141E7FBC: mov byte ptr [0x141f6e70], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7FC3: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 8); /* 0x141E7FC8: push 8 */
    esi = POP32_VAL(esp); /* 0x141E7FCA: pop esi */
    PUSH32(esp, 0x140018F0u); /* 0x141E7FCB: push 0x140018f0 */
    PUSH32(esp, edi); /* 0x141E7FD0: push edi */
    PUSH32(esp, 0x141F6E78u); /* 0x141E7FD1: push 0x141f6e78 */
    MEM32(0x141F6E74) = esi; /* 0x141E7FD6: mov dword ptr [0x141f6e74], esi */
    MEM8(0x141F6EB8) = (uint8_t)(3); /* 0x141E7FDC: mov byte ptr [0x141f6eb8], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E7FE3: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140018E8u); /* 0x141E7FE8: push 0x140018e8 */
    PUSH32(esp, edi); /* 0x141E7FED: push edi */
    PUSH32(esp, 0x141F6EC0u); /* 0x141E7FEE: push 0x141f6ec0 */
    MEM32(0x141F6EBC) = esi; /* 0x141E7FF3: mov dword ptr [0x141f6ebc], esi */
    MEM8(0x141F6F00) = (uint8_t)(3); /* 0x141E7FF9: mov byte ptr [0x141f6f00], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8000: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140018DCu); /* 0x141E8005: push 0x140018dc */
    PUSH32(esp, edi); /* 0x141E800A: push edi */
    PUSH32(esp, 0x141F6F08u); /* 0x141E800B: push 0x141f6f08 */
    MEM32(0x141F6F04) = esi; /* 0x141E8010: mov dword ptr [0x141f6f04], esi */
    MEM8(0x141F6F48) = (uint8_t)(3); /* 0x141E8016: mov byte ptr [0x141f6f48], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E801D: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140018CCu); /* 0x141E8022: push 0x140018cc */
    PUSH32(esp, edi); /* 0x141E8027: push edi */
    PUSH32(esp, 0x141F6F50u); /* 0x141E8028: push 0x141f6f50 */
    MEM32(0x141F6F4C) = esi; /* 0x141E802D: mov dword ptr [0x141f6f4c], esi */
    MEM8(0x141F6F90) = (uint8_t)(4); /* 0x141E8033: mov byte ptr [0x141f6f90], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E803A: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140018B8u); /* 0x141E803F: push 0x140018b8 */
    PUSH32(esp, edi); /* 0x141E8044: push edi */
    PUSH32(esp, 0x141F6F98u); /* 0x141E8045: push 0x141f6f98 */
    MEM32(0x141F6F94) = esi; /* 0x141E804A: mov dword ptr [0x141f6f94], esi */
    MEM8(0x141F6FD8) = (uint8_t)(4); /* 0x141E8050: mov byte ptr [0x141f6fd8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E8057: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001454u); /* 0x141E805C: push 0x14001454 */
    PUSH32(esp, edi); /* 0x141E8061: push edi */
    PUSH32(esp, 0x141F6FE0u); /* 0x141E8062: push 0x141f6fe0 */
    MEM32(0x141F6FDC) = esi; /* 0x141E8067: mov dword ptr [0x141f6fdc], esi */
    MEM8(0x141F7020) = (uint8_t)(3); /* 0x141E806D: mov byte ptr [0x141f7020], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8074: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x141E8079: push 7 */
    esi = POP32_VAL(esp); /* 0x141E807B: pop esi */
    PUSH32(esp, 0x14001448u); /* 0x141E807C: push 0x14001448 */
    PUSH32(esp, edi); /* 0x141E8081: push edi */
    PUSH32(esp, 0x141F7028u); /* 0x141E8082: push 0x141f7028 */
    MEM32(0x141F7024) = esi; /* 0x141E8087: mov dword ptr [0x141f7024], esi */
    MEM8(0x141F7068) = (uint8_t)(3); /* 0x141E808D: mov byte ptr [0x141f7068], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8094: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001400u); /* 0x141E8099: push 0x14001400 */
    PUSH32(esp, edi); /* 0x141E809E: push edi */
    PUSH32(esp, 0x141F7070u); /* 0x141E809F: push 0x141f7070 */
    MEM32(0x141F706C) = esi; /* 0x141E80A4: mov dword ptr [0x141f706c], esi */
    MEM8(0x141F70B0) = (uint8_t)(3); /* 0x141E80AA: mov byte ptr [0x141f70b0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E80B1: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140013ECu); /* 0x141E80B6: push 0x140013ec */
    PUSH32(esp, edi); /* 0x141E80BB: push edi */
    PUSH32(esp, 0x141F70B8u); /* 0x141E80BC: push 0x141f70b8 */
    MEM32(0x141F70B4) = esi; /* 0x141E80C1: mov dword ptr [0x141f70b4], esi */
    MEM8(0x141F70F8) = (uint8_t)(4); /* 0x141E80C7: mov byte ptr [0x141f70f8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E80CE: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400140Cu); /* 0x141E80D3: push 0x1400140c */
    PUSH32(esp, edi); /* 0x141E80D8: push edi */
    PUSH32(esp, 0x141F7100u); /* 0x141E80D9: push 0x141f7100 */
    MEM32(0x141F70FC) = esi; /* 0x141E80DE: mov dword ptr [0x141f70fc], esi */
    MEM8(0x141F7140) = (uint8_t)(3); /* 0x141E80E4: mov byte ptr [0x141f7140], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E80EB: call 0x14086600 */
    RECOMP_FLAGS_IN();
    MEM32(0x141F7144) = esi; /* 0x141E80F0: mov dword ptr [0x141f7144], esi */
    MEM8(0x141F7188) = (uint8_t)(3); /* 0x141E80F6: mov byte ptr [0x141f7188], 3 */
    PUSH32(esp, 0x14001418u); /* 0x141E80FD: push 0x14001418 */
    PUSH32(esp, edi); /* 0x141E8102: push edi */
    PUSH32(esp, 0x141F7148u); /* 0x141E8103: push 0x141f7148 */
    RECOMP_CALL(sub_14086600); /* 0x141E8108: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001424u); /* 0x141E810D: push 0x14001424 */
    PUSH32(esp, edi); /* 0x141E8112: push edi */
    PUSH32(esp, 0x141F7190u); /* 0x141E8113: push 0x141f7190 */
    MEM32(0x141F718C) = esi; /* 0x141E8118: mov dword ptr [0x141f718c], esi */
    MEM8(0x141F71D0) = (uint8_t)(3); /* 0x141E811E: mov byte ptr [0x141f71d0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8125: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001430u); /* 0x141E812A: push 0x14001430 */
    PUSH32(esp, edi); /* 0x141E812F: push edi */
    PUSH32(esp, 0x141F71D8u); /* 0x141E8130: push 0x141f71d8 */
    MEM32(0x141F71D4) = esi; /* 0x141E8135: mov dword ptr [0x141f71d4], esi */
    MEM8(0x141F7218) = (uint8_t)(3); /* 0x141E813B: mov byte ptr [0x141f7218], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8142: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400143Cu); /* 0x141E8147: push 0x1400143c */
    PUSH32(esp, edi); /* 0x141E814C: push edi */
    PUSH32(esp, 0x141F7220u); /* 0x141E814D: push 0x141f7220 */
    MEM32(0x141F721C) = esi; /* 0x141E8152: mov dword ptr [0x141f721c], esi */
    MEM8(0x141F7260) = (uint8_t)(3); /* 0x141E8158: mov byte ptr [0x141f7260], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E815F: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001354u); /* 0x141E8164: push 0x14001354 */
    PUSH32(esp, edi); /* 0x141E8169: push edi */
    PUSH32(esp, 0x141F7268u); /* 0x141E816A: push 0x141f7268 */
    MEM32(0x141F7264) = esi; /* 0x141E816F: mov dword ptr [0x141f7264], esi */
    MEM8(0x141F72A8) = (uint8_t)(2); /* 0x141E8175: mov byte ptr [0x141f72a8], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E817C: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001368u); /* 0x141E8181: push 0x14001368 */
    PUSH32(esp, edi); /* 0x141E8186: push edi */
    PUSH32(esp, 0x141F72B0u); /* 0x141E8187: push 0x141f72b0 */
    MEM32(0x141F72AC) = esi; /* 0x141E818C: mov dword ptr [0x141f72ac], esi */
    MEM8(0x141F72F0) = (uint8_t)(2); /* 0x141E8192: mov byte ptr [0x141f72f0], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E8199: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140013BCu); /* 0x141E819E: push 0x140013bc */
    PUSH32(esp, edi); /* 0x141E81A3: push edi */
    PUSH32(esp, 0x141F72F8u); /* 0x141E81A4: push 0x141f72f8 */
    MEM32(0x141F72F4) = esi; /* 0x141E81A9: mov dword ptr [0x141f72f4], esi */
    MEM8(0x141F7338) = (uint8_t)(4); /* 0x141E81AF: mov byte ptr [0x141f7338], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E81B6: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400138Cu); /* 0x141E81BB: push 0x1400138c */
    PUSH32(esp, edi); /* 0x141E81C0: push edi */
    PUSH32(esp, 0x141F7340u); /* 0x141E81C1: push 0x141f7340 */
    MEM32(0x141F733C) = esi; /* 0x141E81C6: mov dword ptr [0x141f733c], esi */
    MEM8(0x141F7380) = (uint8_t)(4); /* 0x141E81CC: mov byte ptr [0x141f7380], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E81D3: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400139Cu); /* 0x141E81D8: push 0x1400139c */
    PUSH32(esp, edi); /* 0x141E81DD: push edi */
    PUSH32(esp, 0x141F7388u); /* 0x141E81DE: push 0x141f7388 */
    MEM32(0x141F7384) = esi; /* 0x141E81E3: mov dword ptr [0x141f7384], esi */
    MEM8(0x141F73C8) = (uint8_t)(4); /* 0x141E81E9: mov byte ptr [0x141f73c8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E81F0: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140013ACu); /* 0x141E81F5: push 0x140013ac */
    PUSH32(esp, edi); /* 0x141E81FA: push edi */
    PUSH32(esp, 0x141F73D0u); /* 0x141E81FB: push 0x141f73d0 */
    MEM32(0x141F73CC) = esi; /* 0x141E8200: mov dword ptr [0x141f73cc], esi */
    MEM8(0x141F7410) = (uint8_t)(4); /* 0x141E8206: mov byte ptr [0x141f7410], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E820D: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001330u); /* 0x141E8212: push 0x14001330 */
    PUSH32(esp, edi); /* 0x141E8217: push edi */
    PUSH32(esp, 0x141F7418u); /* 0x141E8218: push 0x141f7418 */
    MEM32(0x141F7414) = esi; /* 0x141E821D: mov dword ptr [0x141f7414], esi */
    MEM8(0x141F7458) = (uint8_t)(4); /* 0x141E8223: mov byte ptr [0x141f7458], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E822A: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001340u); /* 0x141E822F: push 0x14001340 */
    PUSH32(esp, edi); /* 0x141E8234: push edi */
    PUSH32(esp, 0x141F7460u); /* 0x141E8235: push 0x141f7460 */
    MEM32(0x141F745C) = esi; /* 0x141E823A: mov dword ptr [0x141f745c], esi */
    MEM8(0x141F74A0) = (uint8_t)(5); /* 0x141E8240: mov byte ptr [0x141f74a0], 5 */
    RECOMP_CALL(sub_14086600); /* 0x141E8247: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140013CCu); /* 0x141E824C: push 0x140013cc */
    PUSH32(esp, edi); /* 0x141E8251: push edi */
    PUSH32(esp, 0x141F74A8u); /* 0x141E8252: push 0x141f74a8 */
    MEM32(0x141F74A4) = esi; /* 0x141E8257: mov dword ptr [0x141f74a4], esi */
    MEM8(0x141F74E8) = (uint8_t)(4); /* 0x141E825D: mov byte ptr [0x141f74e8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E8264: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140013DCu); /* 0x141E8269: push 0x140013dc */
    PUSH32(esp, edi); /* 0x141E826E: push edi */
    PUSH32(esp, 0x141F74F0u); /* 0x141E826F: push 0x141f74f0 */
    MEM32(0x141F74EC) = esi; /* 0x141E8274: mov dword ptr [0x141f74ec], esi */
    MEM8(0x141F7530) = (uint8_t)(4); /* 0x141E827A: mov byte ptr [0x141f7530], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E8281: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400137Cu); /* 0x141E8286: push 0x1400137c */
    PUSH32(esp, edi); /* 0x141E828B: push edi */
    PUSH32(esp, 0x141F7538u); /* 0x141E828C: push 0x141f7538 */
    MEM32(0x141F7534) = esi; /* 0x141E8291: mov dword ptr [0x141f7534], esi */
    MEM8(0x141F7578) = (uint8_t)(4); /* 0x141E8297: mov byte ptr [0x141f7578], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E829E: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001320u); /* 0x141E82A3: push 0x14001320 */
    PUSH32(esp, edi); /* 0x141E82A8: push edi */
    PUSH32(esp, 0x141F7580u); /* 0x141E82A9: push 0x141f7580 */
    MEM32(0x141F757C) = esi; /* 0x141E82AE: mov dword ptr [0x141f757c], esi */
    MEM8(0x141F75C0) = (uint8_t)(4); /* 0x141E82B4: mov byte ptr [0x141f75c0], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E82BB: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140018B0u); /* 0x141E82C0: push 0x140018b0 */
    PUSH32(esp, edi); /* 0x141E82C5: push edi */
    PUSH32(esp, 0x141F75C8u); /* 0x141E82C6: push 0x141f75c8 */
    MEM32(0x141F75C4) = esi; /* 0x141E82CB: mov dword ptr [0x141f75c4], esi */
    MEM8(0x141F7608) = (uint8_t)(0); /* 0x141E82D1: mov byte ptr [0x141f7608], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E82D8: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001494u); /* 0x141E82DD: push 0x14001494 */
    PUSH32(esp, edi); /* 0x141E82E2: push edi */
    PUSH32(esp, 0x141F7970u); /* 0x141E82E3: push 0x141f7970 */
    MEM32(0x141F760C) = 4; /* 0x141E82E8: mov dword ptr [0x141f760c], 4 */
    MEM8(0x141F79B0) = (uint8_t)(3); /* 0x141E82F2: mov byte ptr [0x141f79b0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E82F9: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F79B4)); _flag_b = (uint32_t)(0);
    MEM32(0x141F79B4) = MEM32(0x141F79B4) & 0; /* 0x141E82FE: and dword ptr [0x141f79b4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1400189Cu); /* 0x141E8305: push 0x1400189c */
    PUSH32(esp, edi); /* 0x141E830A: push edi */
    PUSH32(esp, 0x141F79B8u); /* 0x141E830B: push 0x141f79b8 */
    MEM8(0x141F79F8) = (uint8_t)(3); /* 0x141E8310: mov byte ptr [0x141f79f8], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8317: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F79FC)); _flag_b = (uint32_t)(0);
    MEM32(0x141F79FC) = MEM32(0x141F79FC) & 0; /* 0x141E831C: and dword ptr [0x141f79fc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x140014A4u); /* 0x141E8323: push 0x140014a4 */
    PUSH32(esp, edi); /* 0x141E8328: push edi */
    PUSH32(esp, 0x141F7A00u); /* 0x141E8329: push 0x141f7a00 */
    MEM8(0x141F7A40) = (uint8_t)(2); /* 0x141E832E: mov byte ptr [0x141f7a40], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E8335: call 0x14086600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x141F7A44)); _flag_b = (uint32_t)(0);
    MEM32(0x141F7A44) = MEM32(0x141F7A44) & 0; /* 0x141E833A: and dword ptr [0x141f7a44], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x1400188Cu); /* 0x141E8341: push 0x1400188c */
    PUSH32(esp, edi); /* 0x141E8346: push edi */
    PUSH32(esp, 0x141F7A48u); /* 0x141E8347: push 0x141f7a48 */
    MEM8(0x141F7A88) = (uint8_t)(0); /* 0x141E834C: mov byte ptr [0x141f7a88], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E8353: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001518u); /* 0x141E8358: push 0x14001518 */
    PUSH32(esp, edi); /* 0x141E835D: push edi */
    PUSH32(esp, 0x141F7610u); /* 0x141E835E: push 0x141f7610 */
    MEM32(0x141F7A8C) = ebx; /* 0x141E8363: mov dword ptr [0x141f7a8c], ebx */
    MEM8(0x141F7650) = (uint8_t)(3); /* 0x141E8369: mov byte ptr [0x141f7650], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8370: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x141E8375: push 9 */
    esi = POP32_VAL(esp); /* 0x141E8377: pop esi */
    PUSH32(esp, 0x140014F0u); /* 0x141E8378: push 0x140014f0 */
    PUSH32(esp, edi); /* 0x141E837D: push edi */
    PUSH32(esp, 0x141F7658u); /* 0x141E837E: push 0x141f7658 */
    MEM32(0x141F7654) = esi; /* 0x141E8383: mov dword ptr [0x141f7654], esi */
    MEM8(0x141F7698) = (uint8_t)(3); /* 0x141E8389: mov byte ptr [0x141f7698], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8390: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140014F8u); /* 0x141E8395: push 0x140014f8 */
    PUSH32(esp, edi); /* 0x141E839A: push edi */
    PUSH32(esp, 0x141F76A0u); /* 0x141E839B: push 0x141f76a0 */
    MEM32(0x141F769C) = esi; /* 0x141E83A0: mov dword ptr [0x141f769c], esi */
    MEM8(0x141F76E0) = (uint8_t)(3); /* 0x141E83A6: mov byte ptr [0x141f76e0], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E83AD: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001500u); /* 0x141E83B2: push 0x14001500 */
    PUSH32(esp, edi); /* 0x141E83B7: push edi */
    PUSH32(esp, 0x141F76E8u); /* 0x141E83B8: push 0x141f76e8 */
    MEM32(0x141F76E4) = esi; /* 0x141E83BD: mov dword ptr [0x141f76e4], esi */
    MEM8(0x141F7728) = (uint8_t)(3); /* 0x141E83C3: mov byte ptr [0x141f7728], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E83CA: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001888u); /* 0x141E83CF: push 0x14001888 */
    PUSH32(esp, edi); /* 0x141E83D4: push edi */
    PUSH32(esp, 0x141F7730u); /* 0x141E83D5: push 0x141f7730 */
    MEM32(0x141F772C) = esi; /* 0x141E83DA: mov dword ptr [0x141f772c], esi */
    MEM8(0x141F7770) = (uint8_t)(3); /* 0x141E83E0: mov byte ptr [0x141f7770], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E83E7: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001884u); /* 0x141E83EC: push 0x14001884 */
    PUSH32(esp, edi); /* 0x141E83F1: push edi */
    PUSH32(esp, 0x141F7778u); /* 0x141E83F2: push 0x141f7778 */
    MEM32(0x141F7774) = esi; /* 0x141E83F7: mov dword ptr [0x141f7774], esi */
    MEM8(0x141F77B8) = (uint8_t)(3); /* 0x141E83FD: mov byte ptr [0x141f77b8], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8404: call 0x14086600 */
    RECOMP_FLAGS_IN();
    MEM32(0x141F77BC) = esi; /* 0x141E8409: mov dword ptr [0x141f77bc], esi */
    PUSH32(esp, 0x14001880u); /* 0x141E840F: push 0x14001880 */
    PUSH32(esp, edi); /* 0x141E8414: push edi */
    PUSH32(esp, 0x141F77C0u); /* 0x141E8415: push 0x141f77c0 */
    MEM8(0x141F7800) = (uint8_t)(3); /* 0x141E841A: mov byte ptr [0x141f7800], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E8421: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400187Cu); /* 0x141E8426: push 0x1400187c */
    PUSH32(esp, edi); /* 0x141E842B: push edi */
    PUSH32(esp, 0x141F7808u); /* 0x141E842C: push 0x141f7808 */
    MEM32(0x141F7804) = esi; /* 0x141E8431: mov dword ptr [0x141f7804], esi */
    MEM8(0x141F7848) = (uint8_t)(3); /* 0x141E8437: mov byte ptr [0x141f7848], 3 */
    RECOMP_CALL(sub_14086600); /* 0x141E843E: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1400153Cu); /* 0x141E8443: push 0x1400153c */
    PUSH32(esp, edi); /* 0x141E8448: push edi */
    PUSH32(esp, 0x141F7850u); /* 0x141E8449: push 0x141f7850 */
    MEM32(0x141F784C) = esi; /* 0x141E844E: mov dword ptr [0x141f784c], esi */
    MEM8(0x141F7890) = (uint8_t)(2); /* 0x141E8454: mov byte ptr [0x141f7890], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E845B: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x140014D0u); /* 0x141E8460: push 0x140014d0 */
    PUSH32(esp, edi); /* 0x141E8465: push edi */
    PUSH32(esp, 0x141F7898u); /* 0x141E8466: push 0x141f7898 */
    MEM32(0x141F7894) = esi; /* 0x141E846B: mov dword ptr [0x141f7894], esi */
    MEM8(0x141F78D8) = (uint8_t)(4); /* 0x141E8471: mov byte ptr [0x141f78d8], 4 */
    RECOMP_CALL(sub_14086600); /* 0x141E8478: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001510u); /* 0x141E847D: push 0x14001510 */
    PUSH32(esp, edi); /* 0x141E8482: push edi */
    PUSH32(esp, 0x141F78E0u); /* 0x141E8483: push 0x141f78e0 */
    MEM32(0x141F78DC) = esi; /* 0x141E8488: mov dword ptr [0x141f78dc], esi */
    MEM8(0x141F7920) = (uint8_t)(2); /* 0x141E848E: mov byte ptr [0x141f7920], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E8495: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x14001508u); /* 0x141E849A: push 0x14001508 */
    PUSH32(esp, edi); /* 0x141E849F: push edi */
    PUSH32(esp, 0x141F7928u); /* 0x141E84A0: push 0x141f7928 */
    MEM32(0x141F7924) = 0xBu; /* 0x141E84A5: mov dword ptr [0x141f7924], 0xb */
    MEM8(0x141F7968) = (uint8_t)(2); /* 0x141E84AF: mov byte ptr [0x141f7968], 2 */
    RECOMP_CALL(sub_14086600); /* 0x141E84B6: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1404497Cu); /* 0x141E84BB: push 0x1404497c */
    PUSH32(esp, edi); /* 0x141E84C0: push edi */
    PUSH32(esp, 0x141F7A90u); /* 0x141E84C1: push 0x141f7a90 */
    MEM32(0x141F796C) = 0xAu; /* 0x141E84C6: mov dword ptr [0x141f796c], 0xa */
    MEM8(0x141F7AD0) = (uint8_t)(0); /* 0x141E84D0: mov byte ptr [0x141f7ad0], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E84D7: call 0x14086600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x141E84DC: push 0xc */
    esi = POP32_VAL(esp); /* 0x141E84DE: pop esi */
    PUSH32(esp, 0x14001870u); /* 0x141E84DF: push 0x14001870 */
    PUSH32(esp, edi); /* 0x141E84E4: push edi */
    PUSH32(esp, 0x141F7AD8u); /* 0x141E84E5: push 0x141f7ad8 */
    MEM32(0x141F7AD4) = esi; /* 0x141E84EA: mov dword ptr [0x141f7ad4], esi */
    MEM8(0x141F7B18) = (uint8_t)(0); /* 0x141E84F0: mov byte ptr [0x141f7b18], 0 */
    RECOMP_CALL(sub_14086600); /* 0x141E84F7: call 0x14086600 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x141E84FC: pop edi */
    MEM32(0x141F7B1C) = esi; /* 0x141E84FD: mov dword ptr [0x141f7b1c], esi */
    esi = POP32_VAL(esp); /* 0x141E8503: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E8504: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E8505: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E850B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E850Bu);

L_141E850B:
    edi = edi; /* 0x141E850B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E850D: push ebp */
    ebp = esp; /* 0x141E850E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x141E8510: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141E8516: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141E851B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141E851D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x141E8520: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x141E8523: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E8524: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E8527: push edi */
    edi = ecx; /* 0x141E8528: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x141E852A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x141E852C: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E85C9; /* 0x141E852E: je 0x141e85c9 */
L_141E8534:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8534: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E85AD; /* 0x141E8535: je 0x141e85ad */
L_141E8537:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8537: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8561; /* 0x141E8538: je 0x141e8561 */
L_141E853A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E853A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8558; /* 0x141E853B: je 0x141e8558 */
L_141E853D:
    PUSH32(esp, 0x141EDD08u); /* 0x141E853D: push 0x141edd08 */
    eax = ebp + (-0xC8); /* 0x141E8542: lea eax, [ebp - 0xc8] */
    PUSH32(esp, eax); /* 0x141E8548: push eax */
    MEM32(ebp + (-0xC8)) = 0x80004005u; /* 0x141E8549: mov dword ptr [ebp - 0xc8], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E8553: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E8558:
    eax = MEM32(edi); /* 0x141E8558: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x141E855A: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x141E855C: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x141E855E: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
L_141E8561:
    PUSH32(esp, 0xC0u); /* 0x141E8561: push 0xc0 */
    PUSH32(esp, ecx); /* 0x141E8566: push ecx */
    eax = ebp + (-0xC4); /* 0x141E8567: lea eax, [ebp - 0xc4] */
    PUSH32(esp, eax); /* 0x141E856D: push eax */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E856E: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E8573: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebp + (-0xC4); /* 0x141E8576: lea eax, [ebp - 0xc4] */
    PUSH32(esp, eax); /* 0x141E857C: push eax */
    ecx = edi; /* 0x141E857D: mov ecx, edi */
    RECOMP_CALL(sub_141E85F1); /* 0x141E857F: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xBC)); /* 0x141E8584: mov eax, dword ptr [ebp - 0xbc] */
    MEM32(esi + 0x18) = eax; /* 0x141E858A: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + (-0x94)); /* 0x141E858D: mov eax, dword ptr [ebp - 0x94] */
    MEM32(esi + 0x20) = eax; /* 0x141E8593: mov dword ptr [esi + 0x20], eax */
    eax = MEM32(ebp + (-0xC4)); /* 0x141E8596: mov eax, dword ptr [ebp - 0xc4] */
    MEM32(esi + 0x8) = eax; /* 0x141E859C: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x141E859F: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x10) = eax; /* 0x141E85A2: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x141E85A5: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(esi + 0xC) = eax; /* 0x141E85A8: mov dword ptr [esi + 0xc], eax */
    goto L_141E85DC; /* 0x141E85AB: jmp 0x141e85dc */
L_141E85AD:
    eax = MEM32(edi); /* 0x141E85AD: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x141E85AF: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x141E85B1: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x141E85B3: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x141E85B6: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x141E85B8: mov eax, dword ptr [eax] */
    MEM32(esi + 0x4) = eax; /* 0x141E85BA: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x141E85BD: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 5; /* 0x141E85C0: mov dword ptr [esi + 8], 5 */
    goto L_141E85D9; /* 0x141E85C7: jmp 0x141e85d9 */
L_141E85C9:
    eax = MEM32(edi); /* 0x141E85C9: mov eax, dword ptr [edi] */
    eax = MEM32(eax); /* 0x141E85CB: mov eax, dword ptr [eax] */
    MEM32(esi) = eax; /* 0x141E85CD: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 4; /* 0x141E85CF: add dword ptr [edi], 4 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = 4; /* 0x141E85D2: mov dword ptr [esi + 8], 4 */
L_141E85D9:
    MEM32(esi + 0xC) = ecx; /* 0x141E85D9: mov dword ptr [esi + 0xc], ecx */
L_141E85DC:
    ecx = MEM32(ebp + (-0x4)); /* 0x141E85DC: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x141E85DF: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141E85E0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141E85E2: pop esi */
    RECOMP_CALL(sub_141EC0B6); /* 0x141E85E3: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E85E8: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x141E85E9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_141E85F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E85F1u);

L_141E85F1:
    edi = edi; /* 0x141E85F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E85F3: push ebp */
    ebp = esp; /* 0x141E85F4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x141E85F6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x141E85F9: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x141E85FC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x141E8600: push ebx */
    ebx = ecx; /* 0x141E8601: mov ebx, ecx */
    eax = MEM32(ebx); /* 0x141E8603: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x141E8605: push esi */
    PUSH32(esp, edi); /* 0x141E8606: push edi */
    edi = MEM32(eax); /* 0x141E8607: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x141E8609: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x141E860C: mov dword ptr [ebx], eax */
    eax = edi; /* 0x141E860E: mov eax, edi */
    if (31u) _cf = (((eax) >> 30) & 1u); /* 0x141E8610: shr eax, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack((eax >> 31u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 31u; /* 0x141E8610: shr eax, 0x1f */
    esi = edi; /* 0x141E8613: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    esi = esi & 3; /* 0x141E8615: and esi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x141E8618: mov ecx, edi */
    if (12u) _cf = (((ecx) >> 11) & 1u); /* 0x141E861A: shr ecx, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((ecx >> 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 12u; /* 0x141E861A: shr ecx, 0xc */
    MEM32(edx + 0x88) = eax; /* 0x141E861D: mov dword ptr [edx + 0x88], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x141E8623: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x141E8629: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E862B: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = ebx; /* 0x141E862C: mov dword ptr [ebp - 8], ebx */
    MEM32(edx) = ecx; /* 0x141E862F: mov dword ptr [edx], ecx */
    MEM32(edx + 0x80) = esi; /* 0x141E8631: mov dword ptr [edx + 0x80], esi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8645; /* 0x141E8637: je 0x141e8645 */
L_141E8639:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8639: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E864C; /* 0x141E863A: jne 0x141e864c */
L_141E863C:
    MEM32(ebp + (-0x4)) = 4; /* 0x141E863C: mov dword ptr [ebp - 4], 4 */
    goto L_141E864C; /* 0x141E8643: jmp 0x141e864c */
L_141E8645:
    MEM32(ebp + (-0x4)) = 1; /* 0x141E8645: mov dword ptr [ebp - 4], 1 */
L_141E864C:
    /* cmp ecx, 4 */ /* 0x141E864C: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_141E865A; /* 0x141E864F: jl 0x141e865a */
L_141E8651:
    /* cmp ecx, 5 */ /* 0x141E8651: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_141E8743; /* 0x141E8654: jle 0x141e8743 */
L_141E865A:
    /* cmp esi, 2 */ /* 0x141E865A: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E86FC; /* 0x141E865D: jne 0x141e86fc */
L_141E8663:
    eax = edi; /* 0x141E8663: mov eax, edi */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x141E8665: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x141E8665: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E8668: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x84) = eax; /* 0x141E866B: mov dword ptr [edx + 0x84], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x141E8671: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E86EF; /* 0x141E8674: je 0x141e86ef */
L_141E8676:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8676: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E86B9; /* 0x141E8677: je 0x141e86b9 */
L_141E8679:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8679: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8691; /* 0x141E867A: je 0x141e8691 */
L_141E867C:
    PUSH32(esp, 0x141EDD08u); /* 0x141E867C: push 0x141edd08 */
    eax = ebp + 0x8; /* 0x141E8681: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E8684: push eax */
    MEM32(ebp + 0x8) = 0x80004005u; /* 0x141E8685: mov dword ptr [ebp + 8], 0x80004005 */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E868C: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E8691:
    eax = edi; /* 0x141E8691: mov eax, edi */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x141E8693: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x141E8693: shr eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E8696: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edx + 0x94) = (uint8_t)(LO8(eax)); /* 0x141E8699: mov byte ptr [edx + 0x94], al */
    MEM8(edx + 0x95) = (uint8_t)(LO8(eax)); /* 0x141E869F: mov byte ptr [edx + 0x95], al */
    MEM8(edx + 0x96) = (uint8_t)(LO8(eax)); /* 0x141E86A5: mov byte ptr [edx + 0x96], al */
    MEM8(edx + 0x97) = (uint8_t)(LO8(eax)); /* 0x141E86AB: mov byte ptr [edx + 0x97], al */
    MEM32(edx + 0x98) = eax; /* 0x141E86B1: mov dword ptr [edx + 0x98], eax */
    goto L_141E86FC; /* 0x141E86B7: jmp 0x141e86fc */
L_141E86B9:
    eax = edi; /* 0x141E86B9: mov eax, edi */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x141E86BB: shr eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 4u; /* 0x141E86BB: shr eax, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x141E86BE: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x94) = (uint8_t)(LO8(eax)); /* 0x141E86C0: mov byte ptr [edx + 0x94], al */
    eax = edi; /* 0x141E86C6: mov eax, edi */
    if (6u) _cf = (((eax) >> 5) & 1u); /* 0x141E86C8: shr eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 6u; /* 0x141E86C8: shr eax, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x141E86CB: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x95) = (uint8_t)(LO8(eax)); /* 0x141E86CD: mov byte ptr [edx + 0x95], al */
    eax = edi; /* 0x141E86D3: mov eax, edi */
    if (8u) _cf = (((eax) >> 7) & 1u); /* 0x141E86D5: shr eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax >> 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 8u; /* 0x141E86D5: shr eax, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x141E86D8: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x96) = (uint8_t)(LO8(eax)); /* 0x141E86DA: mov byte ptr [edx + 0x96], al */
    eax = edi; /* 0x141E86E0: mov eax, edi */
    if (10u) _cf = (((eax) >> 9) & 1u); /* 0x141E86E2: shr eax, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((eax >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 10u; /* 0x141E86E2: shr eax, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x141E86E5: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(edx + 0x97) = (uint8_t)(LO8(eax)); /* 0x141E86E7: mov byte ptr [edx + 0x97], al */
    goto L_141E86FC; /* 0x141E86ED: jmp 0x141e86fc */
L_141E86EF:
    eax = edi; /* 0x141E86EF: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0u);
    eax = eax & 0xF0u; /* 0x141E86F1: and eax, 0xf0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x94) = eax; /* 0x141E86F6: mov dword ptr [edx + 0x94], eax */
L_141E86FC:
    esi = edi; /* 0x141E86FC: mov esi, edi */
    if (20u) _cf = (((esi) >> 19) & 1u); /* 0x141E86FE: shr esi, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((esi >> 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 20u; /* 0x141E86FE: shr esi, 0x14 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    esi = esi & 3; /* 0x141E8701: and esi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0xBC) = esi; /* 0x141E8704: mov dword ptr [edx + 0xbc], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E8743; /* 0x141E870A: je 0x141e8743 */
L_141E870C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x141E870C: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x141E8710: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E8743; /* 0x141E8712: je 0x141e8743 */
L_141E8714:
    ebx = MEM32(ebp + (-0xC)); /* 0x141E8714: mov ebx, dword ptr [ebp - 0xc] */
    eax = edx + 0xB0; /* 0x141E8717: lea eax, [edx + 0xb0] */
    edx = eax; /* 0x141E871D: mov edx, eax */
L_141E871F:
    ecx = ebx; /* 0x141E871F: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x141E8721: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x141E8724: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x16u; /* 0x141E8727: add ecx, 0x16 */
    _flag_k = FK_ADD;
    PUSH32(esp, 3); /* 0x141E872A: push 3 */
    eax = POP32_VAL(esp); /* 0x141E872C: pop eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141E872D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x141E872D: shl eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x141E872F: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x141E8731: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x141E8731: shr eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E8733: inc ebx */
    _flag_k = FK_INC;
    MEM32(edx) = eax; /* 0x141E8734: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x141E8736: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp ebx, esi */ /* 0x141E8739: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E871F; /* 0x141E873B: jb 0x141e871f */
L_141E873D:
    edx = MEM32(ebp + 0x8); /* 0x141E873D: mov edx, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x141E8740: mov ebx, dword ptr [ebp - 8] */
L_141E8743:
    /* cmp MEM32(edx + 0x88), 0 */ /* 0x141E8743: cmp dword ptr [edx + 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E8774; /* 0x141E874A: je 0x141e8774 */
L_141E874C:
    eax = MEM32(ebx); /* 0x141E874C: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax); /* 0x141E874E: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x141E8750: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x141E8753: mov dword ptr [ebx], eax */
    eax = ecx; /* 0x141E8755: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    eax = eax & 0x3Fu; /* 0x141E8757: and eax, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x90) = eax; /* 0x141E875A: mov dword ptr [edx + 0x90], eax */
    /* cmp eax, 1 */ /* 0x141E8760: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E8774; /* 0x141E8763: jne 0x141e8774 */
L_141E8765:
    if (6u) _cf = (((ecx) >> 5) & 1u); /* 0x141E8765: shr ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx >> 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 6u; /* 0x141E8765: shr ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    ecx = ecx & 0xFFu; /* 0x141E8768: and ecx, 0xff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x8C) = ecx; /* 0x141E876E: mov dword ptr [edx + 0x8c], ecx */
L_141E8774:
    eax = MEM32(edx); /* 0x141E8774: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x141E8776: add eax, -4 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x141E8779: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E879A; /* 0x141E877C: ja 0x141e879a */
L_141E877E:
    esi = MEM32(ebp + (-0x4)); /* 0x141E877E: mov esi, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x141E8781: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E879A; /* 0x141E8783: je 0x141e879a */
L_141E8785:
    ecx = edx + 0xA0; /* 0x141E8785: lea ecx, [edx + 0xa0] */
L_141E878B:
    eax = MEM32(ebx); /* 0x141E878B: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x141E878D: mov eax, dword ptr [eax] */
    MEM32(ecx) = eax; /* 0x141E878F: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 4; /* 0x141E8791: add dword ptr [ebx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x141E8794: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x141E8797: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E878B; /* 0x141E8798: jne 0x141e878b */
L_141E879A:
    esi = MEM32(edx + 0xBC); /* 0x141E879A: mov esi, dword ptr [edx + 0xbc] */
    /* test esi, esi */ /* 0x141E87A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E87C1; /* 0x141E87A2: je 0x141e87c1 */
L_141E87A4:
    edi = edx + 0x8; /* 0x141E87A4: lea edi, [edx + 8] */
    ebx = edx + 0xB0; /* 0x141E87A7: lea ebx, [edx + 0xb0] */
L_141E87AD:
    PUSH32(esp, MEM32(ebx)); /* 0x141E87AD: push dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x8)); /* 0x141E87AF: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x141E87B2: push edi */
    RECOMP_CALL(sub_141E850B); /* 0x141E87B3: call 0x141e850b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x141E87B8: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x28u; /* 0x141E87BB: add edi, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x141E87BE: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E87AD; /* 0x141E87BF: jne 0x141e87ad */
L_141E87C1:
    edi = POP32_VAL(esp); /* 0x141E87C1: pop edi */
    esi = POP32_VAL(esp); /* 0x141E87C2: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E87C3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E87C4: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E87C5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E87CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E87CDu);

L_141E87CD:
    edi = edi; /* 0x141E87CD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E87CF: push ebp */
    ebp = esp; /* 0x141E87D0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x198u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x198u; /* 0x141E87D2: sub esp, 0x198 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141E87D8: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141E87DD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141E87DF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x141E87E2: push ebx */
    PUSH32(esp, esi); /* 0x141E87E3: push esi */
    PUSH32(esp, edi); /* 0x141E87E4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x141E87E5: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x88); /* 0x141E87E8: mov eax, dword ptr [edi + 0x88] */
    edx = ecx; /* 0x141E87EE: mov edx, ecx */
    ecx = MEM32(edi); /* 0x141E87F0: mov ecx, dword ptr [edi] */
    esi = (uint32_t)LO8(ecx); /* 0x141E87F2: movzx esi, cl */
    if (12u) _cf = (((esi) >> 20) & 1u); /* 0x141E87F5: shl esi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack((esi << 12u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 12u; /* 0x141E87F5: shl esi, 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141E87F8: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E87FA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x190))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x190)) = MEM32(ebp + (-0x190)) & 0; /* 0x141E87FC: and dword ptr [ebp - 0x190], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x141E8803: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141E8808: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x80); /* 0x141E880A: mov eax, dword ptr [edi + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E8810: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E8813: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141E8815: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E8817: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x188)) = edx; /* 0x141E8818: mov dword ptr [ebp - 0x188], edx */
    MEM32(ebp + (-0x194)) = edi; /* 0x141E881E: mov dword ptr [ebp - 0x194], edi */
    /* cmp ecx, 4 */ /* 0x141E8824: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E893E; /* 0x141E8827: je 0x141e893e */
L_141E882D:
    /* cmp ecx, 5 */ /* 0x141E882D: cmp ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E893E; /* 0x141E8830: je 0x141e893e */
L_141E8836:
    eax = MEM32(edi + 0xBC); /* 0x141E8836: mov eax, dword ptr [edi + 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E883C: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (20u) _cf = (((eax) >> 12) & 1u); /* 0x141E883F: shl eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack((eax << 20u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 20u; /* 0x141E883F: shl eax, 0x14 */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141E8842: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x80), 2 */ /* 0x141E8844: cmp dword ptr [edi + 0x80], 2 */
    _flag_a = (uint32_t)(MEM32(edi + 0x80)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E88E0; /* 0x141E884B: jne 0x141e88e0 */
L_141E8851:
    ecx = MEM32(edi + 0x84); /* 0x141E8851: mov ecx, dword ptr [edi + 0x84] */
    eax = ecx; /* 0x141E8857: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E8859: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x141E885C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x141E885C: shl eax, 2 */
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141E885F: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x141E8861: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E88D3; /* 0x141E8864: je 0x141e88d3 */
L_141E8866:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x141E8866: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8895; /* 0x141E8867: je 0x141e8895 */
L_141E8869:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x141E8869: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8887; /* 0x141E886A: je 0x141e8887 */
L_141E886C:
    MEM32(ebp + (-0x18C)) = 0x80004005u; /* 0x141E886C: mov dword ptr [ebp - 0x18c], 0x80004005 */
    PUSH32(esp, 0x141EDD08u); /* 0x141E8876: push 0x141edd08 */
    eax = ebp + (-0x18C); /* 0x141E887B: lea eax, [ebp - 0x18c] */
L_141E8881:
    PUSH32(esp, eax); /* 0x141E8881: push eax */
    RECOMP_CALL(sub_141ECA6C); /* 0x141E8882: call 0x141eca6c */
    RECOMP_FLAGS_IN();
L_141E8887:
    eax = MEM32(edi + 0x98); /* 0x141E8887: mov eax, dword ptr [edi + 0x98] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E888D: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x141E8890: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x141E8890: shl eax, 4 */
    goto L_141E88DE; /* 0x141E8893: jmp 0x141e88de */
L_141E8895:
    ecx = (uint32_t)MEM8(edi + 0x97); /* 0x141E8895: movzx ecx, byte ptr [edi + 0x97] */
    eax = (uint32_t)MEM8(edi + 0x96); /* 0x141E889C: movzx eax, byte ptr [edi + 0x96] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x141E88A3: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x141E88A6: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x141E88A6: shl ecx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E88A9: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E88AC: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edi + 0x95); /* 0x141E88AE: movzx eax, byte ptr [edi + 0x95] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x141E88B5: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x141E88B5: shl ecx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E88B8: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E88BB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edi + 0x94); /* 0x141E88BD: movzx eax, byte ptr [edi + 0x94] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x141E88C4: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x141E88C4: shl ecx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E88C7: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E88CA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x141E88CC: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x141E88CC: shl ecx, 4 */
    _flag_a = (uint32_t)((esi | ecx)); _flag_b = (uint32_t)((esi | ecx));
    esi = esi | ecx; /* 0x141E88CF: or esi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E88E0; /* 0x141E88D1: jmp 0x141e88e0 */
L_141E88D3:
    eax = MEM32(edi + 0x94); /* 0x141E88D3: mov eax, dword ptr [edi + 0x94] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0u);
    eax = eax & 0xF0u; /* 0x141E88D9: and eax, 0xf0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E88DE:
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141E88DE: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E88E0:
    eax = MEM32(edi + 0xBC); /* 0x141E88E0: mov eax, dword ptr [edi + 0xbc] */
    /* test eax, eax */ /* 0x141E88E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E8930; /* 0x141E88E8: je 0x141e8930 */
L_141E88EA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18C)) = MEM32(ebp + (-0x18C)) & 0; /* 0x141E88EA: and dword ptr [ebp - 0x18c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x190)) = ebx; /* 0x141E88F1: mov dword ptr [ebp - 0x190], ebx */
    /* test eax, eax */ /* 0x141E88F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E8930; /* 0x141E88F9: je 0x141e8930 */
L_141E88FB:
    edx = MEM32(ebp + (-0x18C)); /* 0x141E88FB: mov edx, dword ptr [ebp - 0x18c] */
    ebx = edi + 0xB0; /* 0x141E8901: lea ebx, [edi + 0xb0] */
L_141E8907:
    eax = MEM32(ebx); /* 0x141E8907: mov eax, dword ptr [ebx] */
    ecx = edx; /* 0x141E8909: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x141E890B: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)3); /* 0x141E890E: imul ecx, ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x16u; /* 0x141E8911: add ecx, 0x16 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x141E8914: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141E8917: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x141E8917: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x141E8919: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141E891C: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E891E: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(edi + 0xBC) */ /* 0x141E891F: cmp edx, dword ptr [edi + 0xbc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0xBC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E8907; /* 0x141E8925: jb 0x141e8907 */
L_141E8927:
    edx = MEM32(ebp + (-0x188)); /* 0x141E8927: mov edx, dword ptr [ebp - 0x188] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E892D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E892F: inc ebx */
    _flag_k = FK_INC;
L_141E8930:
    PUSH32(esp, esi); /* 0x141E8930: push esi */
    ecx = edx; /* 0x141E8931: mov ecx, edx */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8933: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x188)); /* 0x141E8938: mov edx, dword ptr [ebp - 0x188] */
L_141E893E:
    /* cmp MEM32(edi + 0x88), 0 */ /* 0x141E893E: cmp dword ptr [edi + 0x88], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x88)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E896C; /* 0x141E8945: je 0x141e896c */
L_141E8947:
    eax = MEM32(edi + 0x90); /* 0x141E8947: mov eax, dword ptr [edi + 0x90] */
    esi = eax; /* 0x141E894D: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3Fu);
    esi = esi & 0x3Fu; /* 0x141E894F: and esi, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x141E8952: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E8964; /* 0x141E8954: jne 0x141e8964 */
L_141E8956:
    eax = (uint32_t)MEM8(edi + 0x8C); /* 0x141E8956: movzx eax, byte ptr [edi + 0x8c] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x141E895D: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x141E895D: shl eax, 6 */
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x141E8960: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | eax)); _flag_b = (uint32_t)((esi | eax));
    esi = esi | eax; /* 0x141E8962: or esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E8964:
    PUSH32(esp, esi); /* 0x141E8964: push esi */
    ecx = edx; /* 0x141E8965: mov ecx, edx */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8967: call 0x140caef0 */
    RECOMP_FLAGS_IN();
L_141E896C:
    /* cmp MEM32(edi), 4 */ /* 0x141E896C: cmp dword ptr [edi], 4 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E8976; /* 0x141E896F: je 0x141e8976 */
L_141E8971:
    /* cmp MEM32(edi), 5 */ /* 0x141E8971: cmp dword ptr [edi], 5 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E89BD; /* 0x141E8974: jne 0x141e89bd */
L_141E8976:
    PUSH32(esp, esi); /* 0x141E8976: push esi */
    esi = MEM32(ebp + (-0x188)); /* 0x141E8977: mov esi, dword ptr [ebp - 0x188] */
    ecx = esi; /* 0x141E897D: mov ecx, esi */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E897F: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x80); /* 0x141E8984: mov eax, dword ptr [edi + 0x80] */
    /* cmp eax, 2 */ /* 0x141E898A: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E8994; /* 0x141E898D: jne 0x141e8994 */
L_141E898F:
    PUSH32(esp, 4); /* 0x141E898F: push 4 */
    ebx = POP32_VAL(esp); /* 0x141E8991: pop ebx */
    goto L_141E899C; /* 0x141E8992: jmp 0x141e899c */
L_141E8994:
    /* cmp eax, ebx */ /* 0x141E8994: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E8ACD; /* 0x141E8996: jne 0x141e8acd */
L_141E899C:
    /* test ebx, ebx */ /* 0x141E899C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E89BD; /* 0x141E899E: je 0x141e89bd */
L_141E89A0:
    eax = edi + 0xA0; /* 0x141E89A0: lea eax, [edi + 0xa0] */
    edi = eax; /* 0x141E89A6: mov edi, eax */
L_141E89A8:
    PUSH32(esp, MEM32(edi)); /* 0x141E89A8: push dword ptr [edi] */
    ecx = esi; /* 0x141E89AA: mov ecx, esi */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E89AC: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x141E89B1: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x141E89B4: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E89A8; /* 0x141E89B5: jne 0x141e89a8 */
L_141E89B7:
    edi = MEM32(ebp + (-0x194)); /* 0x141E89B7: mov edi, dword ptr [ebp - 0x194] */
L_141E89BD:
    /* cmp MEM32(ebp + (-0x190)), 0 */ /* 0x141E89BD: cmp dword ptr [ebp - 0x190], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x190))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E8ABC; /* 0x141E89C4: je 0x141e8abc */
L_141E89CA:
    eax = MEM32(edi + 0xBC); /* 0x141E89CA: mov eax, dword ptr [edi + 0xbc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x190))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x190)) = MEM32(ebp + (-0x190)) & 0; /* 0x141E89D0: and dword ptr [ebp - 0x190], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x194)) = eax; /* 0x141E89D7: mov dword ptr [ebp - 0x194], eax */
    /* test eax, eax */ /* 0x141E89DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E8ABC; /* 0x141E89DF: je 0x141e8abc */
L_141E89E5:
    eax = edi + 0xB0; /* 0x141E89E5: lea eax, [edi + 0xb0] */
    esi = edi + 0x18; /* 0x141E89EB: lea esi, [edi + 0x18] */
    edi = MEM32(ebp + (-0x188)); /* 0x141E89EE: mov edi, dword ptr [ebp - 0x188] */
    MEM32(ebp + (-0x18C)) = eax; /* 0x141E89F4: mov dword ptr [ebp - 0x18c], eax */
L_141E89FA:
    eax = MEM32(eax); /* 0x141E89FA: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x141E89FC: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8A87; /* 0x141E89FF: je 0x141e8a87 */
L_141E8A05:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8A05: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8A69; /* 0x141E8A06: je 0x141e8a69 */
L_141E8A08:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8A08: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8A24; /* 0x141E8A09: je 0x141e8a24 */
L_141E8A0B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8A0B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E8ACD; /* 0x141E8A0C: jne 0x141e8acd */
L_141E8A12:
    ebx = MEM32(ebp + (-0x188)); /* 0x141E8A12: mov ebx, dword ptr [ebp - 0x188] */
    PUSH32(esp, MEM32(esi + (-0x10))); /* 0x141E8A18: push dword ptr [esi - 0x10] */
    ecx = ebx; /* 0x141E8A1B: mov ecx, ebx */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8A1D: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    goto L_141E8A2A; /* 0x141E8A22: jmp 0x141e8a2a */
L_141E8A24:
    ebx = MEM32(ebp + (-0x188)); /* 0x141E8A24: mov ebx, dword ptr [ebp - 0x188] */
L_141E8A2A:
    /* cmp MEM32(esi), 2 */ /* 0x141E8A2A: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x141E8A2D: push dword ptr [esi - 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E8A48; /* 0x141E8A30: jne 0x141e8a48 */
L_141E8A32:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x141E8A32: push dword ptr [esi + 0x10] */
    ecx = ebp + (-0x184); /* 0x141E8A35: lea ecx, [ebp - 0x184] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E8A3B: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + (-0x8))); /* 0x141E8A3E: push dword ptr [esi - 8] */
    RECOMP_CALL(sub_141E6C51); /* 0x141E8A41: call 0x141e6c51 */
    RECOMP_FLAGS_IN();
    goto L_141E8A59; /* 0x141E8A46: jmp 0x141e8a59 */
L_141E8A48:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E8A48: push dword ptr [esi + 8] */
    ecx = ebp + (-0xC4); /* 0x141E8A4B: lea ecx, [ebp - 0xc4] */
    PUSH32(esp, MEM32(esi + (-0x8))); /* 0x141E8A51: push dword ptr [esi - 8] */
    RECOMP_CALL(sub_141E6BEB); /* 0x141E8A54: call 0x141e6beb */
    RECOMP_FLAGS_IN();
L_141E8A59:
    PUSH32(esp, eax); /* 0x141E8A59: push eax */
    ecx = ebx; /* 0x141E8A5A: mov ecx, ebx */
    RECOMP_CALL(sub_141E87CD); /* 0x141E8A5C: call 0x141e87cd */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x188)); /* 0x141E8A61: mov edi, dword ptr [ebp - 0x188] */
    goto L_141E8A91; /* 0x141E8A67: jmp 0x141e8a91 */
L_141E8A69:
    ebx = MEM32(ebp + (-0x188)); /* 0x141E8A69: mov ebx, dword ptr [ebp - 0x188] */
    PUSH32(esp, MEM32(esi + (-0x10))); /* 0x141E8A6F: push dword ptr [esi - 0x10] */
    ecx = ebx; /* 0x141E8A72: mov ecx, ebx */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8A74: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + (-0xC))); /* 0x141E8A79: push dword ptr [esi - 0xc] */
    ecx = ebx; /* 0x141E8A7C: mov ecx, ebx */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8A7E: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x141E8A83: mov edi, ebx */
    goto L_141E8A91; /* 0x141E8A85: jmp 0x141e8a91 */
L_141E8A87:
    PUSH32(esp, MEM32(esi + (-0x10))); /* 0x141E8A87: push dword ptr [esi - 0x10] */
    ecx = edi; /* 0x141E8A8A: mov ecx, edi */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8A8C: call 0x140caef0 */
    RECOMP_FLAGS_IN();
L_141E8A91:
    ecx = MEM32(ebp + (-0x190)); /* 0x141E8A91: mov ecx, dword ptr [ebp - 0x190] */
    eax = MEM32(ebp + (-0x18C)); /* 0x141E8A97: mov eax, dword ptr [ebp - 0x18c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x141E8A9D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x141E8A9E: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x28u; /* 0x141E8AA1: add esi, 0x28 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x190)) = ecx; /* 0x141E8AA4: mov dword ptr [ebp - 0x190], ecx */
    MEM32(ebp + (-0x18C)) = eax; /* 0x141E8AAA: mov dword ptr [ebp - 0x18c], eax */
    /* cmp ecx, MEM32(ebp + (-0x194)) */ /* 0x141E8AB0: cmp ecx, dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x194)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E89FA; /* 0x141E8AB6: jb 0x141e89fa */
L_141E8ABC:
    ecx = MEM32(ebp + (-0x4)); /* 0x141E8ABC: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x141E8ABF: pop edi */
    esi = POP32_VAL(esp); /* 0x141E8AC0: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141E8AC1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141E8AC3: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x141E8AC4: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E8AC9: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E8ACA: ret 4 */
L_141E8ACD:
    MEM32(ebp + (-0x198)) = 0x80004005u; /* 0x141E8ACD: mov dword ptr [ebp - 0x198], 0x80004005 */
    PUSH32(esp, 0x141EDD08u); /* 0x141E8AD7: push 0x141edd08 */
    eax = ebp + (-0x198); /* 0x141E8ADC: lea eax, [ebp - 0x198] */
    RECOMP_BACKEDGE();
    goto L_141E8881; /* 0x141E8AE2: jmp 0x141e8881 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E8AEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E8AECu);

L_141E8AEC:
    edi = edi; /* 0x141E8AEC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E8AEE: push ebp */
    ebp = esp; /* 0x141E8AEF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E8AF1: push ecx */
    PUSH32(esp, ecx); /* 0x141E8AF2: push ecx */
    PUSH32(esp, ebx); /* 0x141E8AF3: push ebx */
    PUSH32(esp, esi); /* 0x141E8AF4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E8AF5: mov esi, dword ptr [ebp + 8] */
    edx = MEM32(esi); /* 0x141E8AF8: mov edx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x141E8AFA: push edi */
    ebx = ecx; /* 0x141E8AFB: mov ebx, ecx */
    /* cmp edx, 0x35u */ /* 0x141E8AFD: cmp edx, 0x35 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x35u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E8B51; /* 0x141E8B00: jne 0x141e8b51 */
L_141E8B02:
    PUSH32(esp, edx); /* 0x141E8B02: push edx */
    RECOMP_CALL(sub_140CB120); /* 0x141E8B03: call 0x140cb120 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4CC); /* 0x141E8B08: mov eax, dword ptr [esi + 0x4cc] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x141E8B0E: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x141E8B0E: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x141E8B11: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141E8B14: push eax */
    ecx = ebx; /* 0x141E8B15: mov ecx, ebx */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8B17: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x141E8B1C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM32(esi + 0x4CC), 0xFFFFFFFCu */ /* 0x141E8B1E: test dword ptr [esi + 0x4cc], 0xfffffffc */
    _flag_a = (uint32_t)(MEM32(esi + 0x4CC)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E8D21; /* 0x141E8B28: jbe 0x141e8d21 */
L_141E8B2E:
    eax = MEM32(esi + 0x4D0); /* 0x141E8B2E: mov eax, dword ptr [esi + 0x4d0] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x141E8B34: push dword ptr [eax + edi*4] */
    ecx = ebx; /* 0x141E8B37: mov ecx, ebx */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8B39: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4CC); /* 0x141E8B3E: mov eax, dword ptr [esi + 0x4cc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141E8B44: inc edi */
    _flag_k = FK_INC;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x141E8B45: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x141E8B45: shr eax, 2 */
    /* cmp edi, eax */ /* 0x141E8B48: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E8B2E; /* 0x141E8B4A: jb 0x141e8b2e */
L_141E8B4C:
    goto L_141E8D21; /* 0x141E8B4C: jmp 0x141e8d21 */
L_141E8B51:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E8B51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(esi + 0x48C) */ /* 0x141E8B53: cmp eax, dword ptr [esi + 0x48c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x48C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edx; /* 0x141E8B59: mov eax, edx */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E8B5B: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80000000u);
    edi = edi & 0x80000000u; /* 0x141E8B5D: and edi, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFu);
    eax = eax & 0x7FFu; /* 0x141E8B63: and eax, 0x7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x141E8B68: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 3); /* 0x141E8B6A: push 3 */
    ecx = POP32_VAL(esp); /* 0x141E8B6C: pop ecx */
    /* cmp edx, 0x1Fu */ /* 0x141E8B6D: cmp edx, 0x1f */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_141E8B93; /* 0x141E8B70: jg 0x141e8b93 */
L_141E8B72:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E8B85; /* 0x141E8B72: je 0x141e8b85 */
L_141E8B74:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x141E8B74: sub edx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8B85; /* 0x141E8B76: je 0x141e8b85 */
L_141E8B78:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E8B78: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E8B79: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8B85; /* 0x141E8B7A: je 0x141e8b85 */
L_141E8B7C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x141E8B7C: sub edx, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8B85; /* 0x141E8B7E: je 0x141e8b85 */
L_141E8B80:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 5; /* 0x141E8B80: sub edx, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_141E8C04; /* 0x141E8B83: jne 0x141e8c04 */
L_141E8B85:
    eax = MEM32(esi + 0x4C8); /* 0x141E8B85: mov eax, dword ptr [esi + 0x4c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x141E8B8B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (18u) _cf = (((eax) >> 14) & 1u); /* 0x141E8B8E: shl eax, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack((eax << 18u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 18u; /* 0x141E8B8E: shl eax, 0x12 */
    goto L_141E8C02; /* 0x141E8B91: jmp 0x141e8c02 */
L_141E8B93:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x3Du; /* 0x141E8B93: sub edx, 0x3d */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8BF7; /* 0x141E8B96: je 0x141e8bf7 */
L_141E8B98:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E8B98: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x141E8B99: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8B85; /* 0x141E8B9A: je 0x141e8b85 */
L_141E8B9C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x30u; /* 0x141E8B9C: sub edx, 0x30 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8BF7; /* 0x141E8B9F: je 0x141e8bf7 */
L_141E8BA1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x4Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x4Fu; /* 0x141E8BA1: sub edx, 0x4f */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_141E8C04; /* 0x141E8BA4: jne 0x141e8c04 */
L_141E8BA6:
    ecx = (uint32_t)MEM8(esi + 0x4CA); /* 0x141E8BA6: movzx ecx, byte ptr [esi + 0x4ca] */
    eax = (uint32_t)MEM8(esi + 0x4CB); /* 0x141E8BAD: movzx eax, byte ptr [esi + 0x4cb] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E8BB4: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E8BB6: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    ecx = ecx & 0x4000u; /* 0x141E8BB8: and ecx, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141E8BBE: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E8BC0: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    eax = eax & 0x2000u; /* 0x141E8BC2: and eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E8BC7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(esi + 0x4C9); /* 0x141E8BC9: movzx eax, byte ptr [esi + 0x4c9] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141E8BD0: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E8BD2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x141E8BD4: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E8BD9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(esi + 0x4C8); /* 0x141E8BDB: movzx eax, byte ptr [esi + 0x4c8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x141E8BE2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E8BE4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x141E8BE6: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E8BEB: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7800u);
    ecx = ecx & 0x7800u; /* 0x141E8BED: and ecx, 0x7800 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edi | ecx)); _flag_b = (uint32_t)((edi | ecx));
    edi = edi | ecx; /* 0x141E8BF3: or edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E8C04; /* 0x141E8BF5: jmp 0x141e8c04 */
L_141E8BF7:
    eax = MEM32(esi + 0x4C8); /* 0x141E8BF7: mov eax, dword ptr [esi + 0x4c8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x141E8BFD: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (11u) _cf = (((eax) >> 21) & 1u); /* 0x141E8BFF: shl eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack((eax << 11u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 11u; /* 0x141E8BFF: shl eax, 0xb */
L_141E8C02:
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x141E8C02: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E8C04:
    ecx = MEM32(esi + 0x4C4); /* 0x141E8C04: mov ecx, dword ptr [esi + 0x4c4] */
    eax = MEM32(esi + 0x490); /* 0x141E8C0A: mov eax, dword ptr [esi + 0x490] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x141E8C10: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E8C12: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2000u);
    ecx = ecx & 0x2000u; /* 0x141E8C14: and ecx, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x141E8C1A: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (19u) _cf = (((eax) >> 13) & 1u); /* 0x141E8C1D: shl eax, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack((eax << 19u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 19u; /* 0x141E8C1D: shl eax, 0x13 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E8C20: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x141E8C22: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x141E8C24: push ecx */
    ecx = ebx; /* 0x141E8C25: mov ecx, ebx */
    RECOMP_CALL(sub_140CB120); /* 0x141E8C27: call 0x140cb120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E8C2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x141E8C2E: mov ecx, eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x141E8C30: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + 0x8) = ecx; /* 0x141E8C33: mov dword ptr [ebp + 8], ecx */
    edx = esi + 0x494; /* 0x141E8C36: lea edx, [esi + 0x494] */
L_141E8C3C:
    edi = MEM32(esi + 0x48C); /* 0x141E8C3C: mov edi, dword ptr [esi + 0x48c] */
    MEM32(ebp + (-0x4)) = edx; /* 0x141E8C42: mov dword ptr [ebp - 4], edx */
    /* cmp edi, 3 */ /* 0x141E8C45: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E8C4E; /* 0x141E8C48: jae 0x141e8c4e */
L_141E8C4A:
    eax = edi; /* 0x141E8C4A: mov eax, edi */
    goto L_141E8C51; /* 0x141E8C4C: jmp 0x141e8c51 */
L_141E8C4E:
    PUSH32(esp, 3); /* 0x141E8C4E: push 3 */
    eax = POP32_VAL(esp); /* 0x141E8C50: pop eax */
L_141E8C51:
    /* cmp ecx, eax */ /* 0x141E8C51: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E8CF8; /* 0x141E8C53: jae 0x141e8cf8 */
L_141E8C59:
    eax = MEM32(edx); /* 0x141E8C59: mov eax, dword ptr [edx] */
    edx = eax; /* 0x141E8C5B: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3Fu);
    edx = edx & 0x3Fu; /* 0x141E8C5D: and edx, 0x3f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8C60: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8CA3; /* 0x141E8C61: je 0x141e8ca3 */
L_141E8C63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8C63: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_141E8C84; /* 0x141E8C64: je 0x141e8c84 */
L_141E8C66:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E8C66: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E8CD0; /* 0x141E8C67: jne 0x141e8cd0 */
L_141E8C69:
    PUSH32(esp, 6); /* 0x141E8C69: push 6 */
    ecx = POP32_VAL(esp); /* 0x141E8C6B: pop ecx */
L_141E8C6C:
    eax = MEM32(esi + ecx + 0x4A6); /* 0x141E8C6C: mov eax, dword ptr [esi + ecx + 0x4a6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x141E8C73: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x141E8C76: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x141E8C76: shl eax, cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x141E8C78: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x141E8C7B: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x16u */ /* 0x141E8C7D: cmp ecx, 0x16 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E8C6C; /* 0x141E8C80: jb 0x141e8c6c */
L_141E8C82:
    goto L_141E8CD0; /* 0x141E8C82: jmp 0x141e8cd0 */
L_141E8C84:
    ecx = MEM32(esi + 0x4A8); /* 0x141E8C84: mov ecx, dword ptr [esi + 0x4a8] */
    eax = MEM32(esi + 0x4A4); /* 0x141E8C8A: mov eax, dword ptr [esi + 0x4a4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFu);
    ecx = ecx & 0xFFFu; /* 0x141E8C90: and ecx, 0xfff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x141E8C96: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x141E8C96: shl ecx, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x141E8C99: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E8C9C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x141E8C9E: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x141E8C9E: shl ecx, 6 */
    goto L_141E8CCE; /* 0x141E8CA1: jmp 0x141e8cce */
L_141E8CA3:
    ecx = (int32_t)(int8_t)MEM8(esi + 0x4A2); /* 0x141E8CA3: movsx ecx, byte ptr [esi + 0x4a2] */
    eax = (int32_t)(int8_t)MEM8(esi + 0x4A1); /* 0x141E8CAA: movsx eax, byte ptr [esi + 0x4a1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x141E8CB1: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x141E8CB4: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x141E8CB4: shl ecx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x141E8CB7: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E8CBA: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (int32_t)(int8_t)MEM8(esi + 0x4A0); /* 0x141E8CBC: movsx eax, byte ptr [esi + 0x4a0] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x141E8CC3: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x141E8CC3: shl ecx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x141E8CC6: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x141E8CC9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (9u) _cf = (((ecx) >> 23) & 1u); /* 0x141E8CCB: shl ecx, 9 */
    if (9u) { _flag_a = recomp_flags_pack((ecx << 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 9u; /* 0x141E8CCB: shl ecx, 9 */
L_141E8CCE:
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x141E8CCE: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E8CD0:
    eax = MEM32(ebp + 0x8); /* 0x141E8CD0: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141E8CD3: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x141E8CD4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x141E8CD6: mov dword ptr [ebp + 8], eax */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x141E8CD9: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x141E8CDB: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x141E8CE0: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x141E8CE2: push eax */
    ecx = ebx; /* 0x141E8CE3: mov ecx, ebx */
    RECOMP_CALL(sub_140CAEF0); /* 0x141E8CE5: call 0x140caef0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x141E8CEA: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x141E8CED: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x141E8CF0: add edx, 4 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_141E8C3C; /* 0x141E8CF3: jmp 0x141e8c3c */
L_141E8CF8:
    /* cmp MEM32(esi + 0x488), 0 */ /* 0x141E8CF8: cmp dword ptr [esi + 0x488], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x488)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E8D21; /* 0x141E8CFF: jbe 0x141e8d21 */
L_141E8D01:
    edi = esi + 0x8; /* 0x141E8D01: lea edi, [esi + 8] */
L_141E8D04:
    PUSH32(esp, edi); /* 0x141E8D04: push edi */
    ecx = ebx; /* 0x141E8D05: mov ecx, ebx */
    RECOMP_CALL(sub_141E87CD); /* 0x141E8D07: call 0x141e87cd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x141E8D0C: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141E8D0F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xC0u; /* 0x141E8D10: add edi, 0xc0 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x141E8D16: mov dword ptr [ebp - 8], eax */
    /* cmp eax, MEM32(esi + 0x488) */ /* 0x141E8D19: cmp eax, dword ptr [esi + 0x488] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x488));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E8D04; /* 0x141E8D1F: jb 0x141e8d04 */
L_141E8D21:
    ecx = ebx; /* 0x141E8D21: mov ecx, ebx */
    RECOMP_CALL(sub_140CB050); /* 0x141E8D23: call 0x140cb050 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x141E8D28: pop edi */
    esi = POP32_VAL(esp); /* 0x141E8D29: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E8D2A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E8D2B: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E8D2C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E8D34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E8D34u);

L_141E8D34:
    edi = edi; /* 0x141E8D34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E8D36: push ebp */
    ebp = esp; /* 0x141E8D37: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x141E8D39: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x141E8D3C: push ebx */
    PUSH32(esp, esi); /* 0x141E8D3D: push esi */
    ebx = ecx; /* 0x141E8D3E: mov ebx, ecx */
    esi = MEM32(ebx + 0x8); /* 0x141E8D40: mov esi, dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x141E8D43: push edi */
    edi = MEM32(ebx); /* 0x141E8D44: mov edi, dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E8D46: push dword ptr [ebp + 8] */
    MEM32(ebx) = eax; /* 0x141E8D49: mov dword ptr [ebx], eax */
    eax = MEM32(ebp + 0x10); /* 0x141E8D4B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x8) = eax; /* 0x141E8D4E: mov dword ptr [ebx + 8], eax */
    RECOMP_CALL(sub_141E85F1); /* 0x141E8D51: call 0x141e85f1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x141E8D56: mov eax, dword ptr [ebx] */
    MEM32(ebx) = edi; /* 0x141E8D58: mov dword ptr [ebx], edi */
    edi = POP32_VAL(esp); /* 0x141E8D5A: pop edi */
    MEM32(ebx + 0x8) = esi; /* 0x141E8D5B: mov dword ptr [ebx + 8], esi */
    esi = POP32_VAL(esp); /* 0x141E8D5E: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E8D5F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E8D60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E8D61: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E9682(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9682u);

L_141E9682:
    edi = edi; /* 0x141E9682: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9684: push ebp */
    ebp = esp; /* 0x141E9685: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141E9687: push ebx */
    PUSH32(esp, esi); /* 0x141E9688: push esi */
    PUSH32(esp, edi); /* 0x141E9689: push edi */
    edi = MEM32(ebp + 0x10); /* 0x141E968A: mov edi, dword ptr [ebp + 0x10] */
    esi = 0x14002048u; /* 0x141E968D: mov esi, 0x14002048 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E9692: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E9694:
    eax = MEM32(esi + 0x10); /* 0x141E9694: mov eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x141E9697: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x141E969A: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E96D2; /* 0x141E969D: jne 0x141e96d2 */
L_141E969F:
    /* test MEM32(esi + 0x10), edi */ /* 0x141E969F: test dword ptr [esi + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E96D2; /* 0x141E96A2: jne 0x141e96d2 */
L_141E96A4:
    ecx = MEM32(esi); /* 0x141E96A4: mov ecx, dword ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x141E96A6: mov eax, dword ptr [ebp + 8] */
L_141E96A9:
    SET_LO8(ebx, MEM8(eax)); /* 0x141E96A9: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x141E96AB: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E96C9; /* 0x141E96AD: jne 0x141e96c9 */
L_141E96AF:
    /* test LO8(ebx), LO8(ebx) */ /* 0x141E96AF: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E96C5; /* 0x141E96B1: je 0x141e96c5 */
L_141E96B3:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x141E96B3: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(ecx + 0x1) */ /* 0x141E96B6: cmp bl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E96C9; /* 0x141E96B9: jne 0x141e96c9 */
L_141E96BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x141E96BB: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x141E96BE: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x141E96C1: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E96A9; /* 0x141E96C3: jne 0x141e96a9 */
L_141E96C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E96C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E96CE; /* 0x141E96C7: jmp 0x141e96ce */
L_141E96C9:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141E96C9: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141E96CB: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_141E96CE:
    /* test eax, eax */ /* 0x141E96CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E96EC; /* 0x141E96D0: je 0x141e96ec */
L_141E96D2:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x18u; /* 0x141E96D2: add edx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x141E96D5: add esi, 0x18 */
    _flag_k = FK_ADD;
    /* cmp edx, 0x6C0u */ /* 0x141E96D8: cmp edx, 0x6c0 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x6C0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9694; /* 0x141E96DE: jb 0x141e9694 */
L_141E96E0:
    eax = 0x80070057u; /* 0x141E96E0: mov eax, 0x80070057 */
L_141E96E5:
    edi = POP32_VAL(esp); /* 0x141E96E5: pop edi */
    esi = POP32_VAL(esp); /* 0x141E96E6: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E96E7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E96E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141E96E9: ret 0x10 */
L_141E96EC:
    edi = MEM32(ebp + 0x14); /* 0x141E96EC: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x141E96EF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E96F8; /* 0x141E96F1: je 0x141e96f8 */
L_141E96F3:
    PUSH32(esp, 6); /* 0x141E96F3: push 6 */
    ecx = POP32_VAL(esp); /* 0x141E96F5: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E96F6: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_141E96F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E96F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E96E5; /* 0x141E96FA: jmp 0x141e96e5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E9701(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9701u);

L_141E9701:
    edi = edi; /* 0x141E9701: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9703: push ebp */
    ebp = esp; /* 0x141E9704: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E9706: push esi */
    PUSH32(esp, edi); /* 0x141E9707: push edi */
    edi = MEM32(ebp + 0x14); /* 0x141E9708: mov edi, dword ptr [ebp + 0x14] */
    ecx = 0x14002700u; /* 0x141E970B: mov ecx, 0x14002700 */
    edx = 0x14002708u; /* 0x141E9710: mov edx, 0x14002708 */
L_141E9715:
    eax = MEM32(ecx); /* 0x141E9715: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    eax = eax & MEM32(ebp + 0x10); /* 0x141E9717: and eax, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx + (-0x10); /* 0x141E971A: lea esi, [ecx - 0x10] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x141E971D: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9731; /* 0x141E9720: jne 0x141e9731 */
L_141E9722:
    /* test MEM32(ecx), edi */ /* 0x141E9722: test dword ptr [ecx], edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9731; /* 0x141E9724: jne 0x141e9731 */
L_141E9726:
    eax = MEM32(ecx + (-0xC)); /* 0x141E9726: mov eax, dword ptr [ecx - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    eax = eax & MEM32(ebp + 0xC); /* 0x141E9729: and eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x141E972C: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E974A; /* 0x141E972F: je 0x141e974a */
L_141E9731:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x18u; /* 0x141E9731: sub edx, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x18u; /* 0x141E9734: sub ecx, 0x18 */
    _flag_k = FK_CMP;
    /* cmp edx, 0x14002048u */ /* 0x141E9737: cmp edx, 0x14002048 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14002048u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_141E9715; /* 0x141E973D: ja 0x141e9715 */
L_141E973F:
    eax = 0x80070057u; /* 0x141E973F: mov eax, 0x80070057 */
L_141E9744:
    edi = POP32_VAL(esp); /* 0x141E9744: pop edi */
    esi = POP32_VAL(esp); /* 0x141E9745: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E9746: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x141E9747: ret 0x14 */
L_141E974A:
    edi = MEM32(ebp + 0x18); /* 0x141E974A: mov edi, dword ptr [ebp + 0x18] */
    /* test edi, edi */ /* 0x141E974D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9756; /* 0x141E974F: je 0x141e9756 */
L_141E9751:
    PUSH32(esp, 6); /* 0x141E9751: push 6 */
    ecx = POP32_VAL(esp); /* 0x141E9753: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x141E9754: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_141E9756:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9756: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_141E9744; /* 0x141E9758: jmp 0x141e9744 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E975F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E975Fu);

L_141E975F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E975F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x141E9761: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = eax; /* 0x141E9763: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x141E9766: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x141E9769: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x141E976C: mov dword ptr [ecx + 0x10], eax */
    MEM8(ecx + 0x14) = (uint8_t)(LO8(eax)); /* 0x141E976F: mov byte ptr [ecx + 0x14], al */
    MEM32(ecx + 0x18) = eax; /* 0x141E9772: mov dword ptr [ecx + 0x18], eax */
    eax = ecx; /* 0x141E9775: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9777: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E977D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E977Du);

L_141E977D:
    edi = edi; /* 0x141E977D: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E977F: push esi */
    esi = ecx; /* 0x141E9780: mov esi, ecx */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x141E9782: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E979D; /* 0x141E9786: je 0x141e979d */
L_141E9788:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x141E9788: push dword ptr [esi + 0xc] */
    PUSH32(esp, 4); /* 0x141E978B: push 4 */
    RECOMP_CALL(sub_141EC854); /* 0x141E978D: call 0x141ec854 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x141E9792: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9795: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E979A: add esp, 0xc */
    _flag_k = FK_ADD;
L_141E979D:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E979D: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E97A0: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E97A5: pop ecx */
    esi = POP32_VAL(esp); /* 0x141E97A6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E97A7: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E97AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E97ADu);

L_141E97AD:
    edi = edi; /* 0x141E97AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E97AF: push ebp */
    ebp = esp; /* 0x141E97B0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E97B2: push ecx */
    PUSH32(esp, ecx); /* 0x141E97B3: push ecx */
    PUSH32(esp, ebx); /* 0x141E97B4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x141E97B5: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x141E97B8: push esi */
    PUSH32(esp, edi); /* 0x141E97B9: push edi */
    esi = ecx; /* 0x141E97BA: mov esi, ecx */
    edi = ebx; /* 0x141E97BC: mov edi, ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x141E97BE: mov dword ptr [ebp - 4], esi */
    ecx = edi + 0x1; /* 0x141E97C1: lea ecx, [edi + 1] */
L_141E97C4:
    SET_LO8(eax, MEM8(edi)); /* 0x141E97C4: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141E97C6: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x141E97C7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E97C4; /* 0x141E97C9: jne 0x141e97c4 */
L_141E97CB:
    eax = MEM32(ebp + 0xC); /* 0x141E97CB: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x141E97CE: sub edi, ecx */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x141E97D0: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + 0x8) = edi; /* 0x141E97D4: mov dword ptr [ebp + 8], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E97E9; /* 0x141E97D7: jne 0x141e97e9 */
L_141E97D9:
    ecx = edi + eax; /* 0x141E97D9: lea ecx, [edi + eax] */
    /* cmp ecx, edi */ /* 0x141E97DC: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E98AA; /* 0x141E97DE: jb 0x141e98aa */
L_141E97E4:
    edi = ecx; /* 0x141E97E4: mov edi, ecx */
    MEM32(ebp + 0x8) = edi; /* 0x141E97E6: mov dword ptr [ebp + 8], edi */
L_141E97E9:
    SET_LO8(ecx, MEM8(ebx)); /* 0x141E97E9: mov cl, byte ptr [ebx] */
    edx = ebx; /* 0x141E97EB: mov edx, ebx */
    goto L_141E9807; /* 0x141E97ED: jmp 0x141e9807 */
L_141E97EF:
    /* cmp LO8(ecx), 0xAu */ /* 0x141E97EF: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9804; /* 0x141E97F2: jne 0x141e9804 */
L_141E97F4:
    ecx = edi + eax; /* 0x141E97F4: lea ecx, [edi + eax] */
    /* cmp ecx, edi */ /* 0x141E97F7: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E98AA; /* 0x141E97F9: jb 0x141e98aa */
L_141E97FF:
    edi = ecx; /* 0x141E97FF: mov edi, ecx */
    MEM32(ebp + 0x8) = edi; /* 0x141E9801: mov dword ptr [ebp + 8], edi */
L_141E9804:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E9804: inc edx */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(edx)); /* 0x141E9805: mov cl, byte ptr [edx] */
L_141E9807:
    /* test LO8(ecx), LO8(ecx) */ /* 0x141E9807: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E97EF; /* 0x141E9809: jne 0x141e97ef */
L_141E980B:
    eax = MEM32(esi); /* 0x141E980B: mov eax, dword ptr [esi] */
    ecx = eax + edi; /* 0x141E980D: lea ecx, [eax + edi] */
    /* cmp ecx, eax */ /* 0x141E9810: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E98AA; /* 0x141E9812: jb 0x141e98aa */
L_141E9818:
    eax = MEM32(esi + 0x4); /* 0x141E9818: mov eax, dword ptr [esi + 4] */
    /* cmp eax, ecx */ /* 0x141E981B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E9859; /* 0x141E981D: jae 0x141e9859 */
L_141E981F:
    eax = eax + edi + 0x800; /* 0x141E981F: lea eax, [eax + edi + 0x800] */
    PUSH32(esp, eax); /* 0x141E9826: push eax */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E9827: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E982C: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x141E982D: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x141E9830: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E98AA; /* 0x141E9832: je 0x141e98aa */
L_141E9834:
    PUSH32(esp, MEM32(esi)); /* 0x141E9834: push dword ptr [esi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E9836: push dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x141E9839: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E983A: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E983F: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9842: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x141E9847: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x8) = eax; /* 0x141E984A: mov dword ptr [esi + 8], eax */
    eax = edi + 0x800; /* 0x141E984D: lea eax, [edi + 0x800] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E9853: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x141E9856: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
L_141E9859:
    esi = MEM32(esi + 0x8); /* 0x141E9859: mov esi, dword ptr [esi + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x141E985C: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax); /* 0x141E985F: add esi, dword ptr [eax] */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x141E9861: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9878; /* 0x141E9865: jne 0x141e9878 */
L_141E9867:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E9867: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0x20u); /* 0x141E986A: push 0x20 */
    PUSH32(esp, esi); /* 0x141E986C: push esi */
    RECOMP_CALL(sub_141EC9B0); /* 0x141E986D: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E9872: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x141E9875: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
L_141E9878:
    /* cmp MEM8(ebx), 0 */ /* 0x141E9878: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E98A5; /* 0x141E987B: je 0x141e98a5 */
L_141E987D:
    edi = MEM32(ebp + 0xC); /* 0x141E987D: mov edi, dword ptr [ebp + 0xc] */
L_141E9880:
    SET_LO8(eax, MEM8(ebx)); /* 0x141E9880: mov al, byte ptr [ebx] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x141E9882: mov byte ptr [esi], al */
    /* cmp MEM8(ebx), 0xAu */ /* 0x141E9884: cmp byte ptr [ebx], 0xa */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E989B; /* 0x141E9887: jne 0x141e989b */
L_141E9889:
    PUSH32(esp, edi); /* 0x141E9889: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E988A: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, 0x20u); /* 0x141E988B: push 0x20 */
    PUSH32(esp, esi); /* 0x141E988D: push esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E988E: inc ebx */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_141EC9B0); /* 0x141E988F: call 0x141ec9b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E9894: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x141E9897: add esi, edi */
    _flag_k = FK_ADD;
    goto L_141E989D; /* 0x141E9899: jmp 0x141e989d */
L_141E989B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E989B: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E989C: inc esi */
    _flag_k = FK_INC;
L_141E989D:
    /* cmp MEM8(ebx), 0 */ /* 0x141E989D: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9880; /* 0x141E98A0: jne 0x141e9880 */
L_141E98A2:
    edi = MEM32(ebp + 0x8); /* 0x141E98A2: mov edi, dword ptr [ebp + 8] */
L_141E98A5:
    eax = MEM32(ebp + (-0x4)); /* 0x141E98A5: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + edi; /* 0x141E98A8: add dword ptr [eax], edi */
    _flag_k = FK_ADD;
L_141E98AA:
    edi = POP32_VAL(esp); /* 0x141E98AA: pop edi */
    esi = POP32_VAL(esp); /* 0x141E98AB: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E98AC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E98AD: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E98AE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E98B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E98B6u);

L_141E98B6:
    edi = edi; /* 0x141E98B6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E98B8: push ebp */
    ebp = esp; /* 0x141E98B9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E98BB: push ecx */
    PUSH32(esp, esi); /* 0x141E98BC: push esi */
    PUSH32(esp, edi); /* 0x141E98BD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x141E98BE: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x141E98C1: mov esi, ecx */
    ecx = edi + 0x1; /* 0x141E98C3: lea ecx, [edi + 1] */
L_141E98C6:
    SET_LO8(eax, MEM8(edi)); /* 0x141E98C6: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x141E98C8: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x141E98C9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E98C6; /* 0x141E98CB: jne 0x141e98c6 */
L_141E98CD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x141E98CD: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x141E98CF: mov ecx, dword ptr [esi] */
    eax = ecx + edi; /* 0x141E98D1: lea eax, [ecx + edi] */
    /* cmp eax, ecx */ /* 0x141E98D4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E992F; /* 0x141E98D6: jb 0x141e992f */
L_141E98D8:
    ecx = MEM32(esi + 0x4); /* 0x141E98D8: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, ebx); /* 0x141E98DB: push ebx */
    /* cmp ecx, eax */ /* 0x141E98DC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E991A; /* 0x141E98DE: jae 0x141e991a */
L_141E98E0:
    eax = ecx + edi + 0x800; /* 0x141E98E0: lea eax, [ecx + edi + 0x800] */
    PUSH32(esp, eax); /* 0x141E98E7: push eax */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E98E8: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E98ED: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E98EE: mov dword ptr [ebp - 4], eax */
    /* test eax, eax */ /* 0x141E98F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E992E; /* 0x141E98F3: je 0x141e992e */
L_141E98F5:
    PUSH32(esp, MEM32(esi)); /* 0x141E98F5: push dword ptr [esi] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E98F7: push dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x141E98FA: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E98FB: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x141E9900: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9903: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x141E9908: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x8) = eax; /* 0x141E990B: mov dword ptr [esi + 8], eax */
    eax = edi + 0x800; /* 0x141E990E: lea eax, [edi + 0x800] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x141E9914: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + eax; /* 0x141E9917: add dword ptr [esi + 4], eax */
    _flag_k = FK_ADD;
L_141E991A:
    eax = MEM32(esi + 0x8); /* 0x141E991A: mov eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi); /* 0x141E991D: add eax, dword ptr [esi] */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x141E991F: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E9920: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x141E9923: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E9924: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E9929: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + edi; /* 0x141E992C: add dword ptr [esi], edi */
    _flag_k = FK_ADD;
L_141E992E:
    ebx = POP32_VAL(esp); /* 0x141E992E: pop ebx */
L_141E992F:
    edi = POP32_VAL(esp); /* 0x141E992F: pop edi */
    esi = POP32_VAL(esp); /* 0x141E9930: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E9931: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E9932: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E993A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E993Au);

L_141E993A:
    edi = edi; /* 0x141E993A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E993C: push ebp */
    ebp = esp; /* 0x141E993D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E993F: push ecx */
    PUSH32(esp, ebx); /* 0x141E9940: push ebx */
    PUSH32(esp, esi); /* 0x141E9941: push esi */
    ebx = ecx; /* 0x141E9942: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x141E9944: push edi */
    edi = MEM32(ebx); /* 0x141E9945: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9947: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141E9949: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x141E994C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9A03; /* 0x141E994E: je 0x141e9a03 */
L_141E9954:
    esi = edi + (-0x1); /* 0x141E9954: lea esi, [edi - 1] */
    /* test esi, esi */ /* 0x141E9957: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E99FB; /* 0x141E9959: je 0x141e99fb */
L_141E995F:
    ecx = MEM32(ebx + 0x8); /* 0x141E995F: mov ecx, dword ptr [ebx + 8] */
L_141E9962:
    /* cmp MEM8(ecx + esi), 0xAu */ /* 0x141E9962: cmp byte ptr [ecx + esi], 0xa */
    _flag_a = (uint32_t)(MEM8(ecx + esi)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E996C; /* 0x141E9966: je 0x141e996c */
L_141E9968:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x141E9968: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x141E9969: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E9962; /* 0x141E996A: jne 0x141e9962 */
L_141E996C:
    MEM32(ebp + (-0x4)) = eax; /* 0x141E996C: mov dword ptr [ebp - 4], eax */
    goto L_141E99FB; /* 0x141E996F: jmp 0x141e99fb */
L_141E9974:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x141E9974: sub edi, esi */
    _flag_k = FK_CMP;
    /* cmp edi, 0x10u */ /* 0x141E9976: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9995; /* 0x141E9979: jb 0x141e9995 */
L_141E997B:
    eax = MEM32(ebx + 0x8); /* 0x141E997B: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 0x10u); /* 0x141E997E: push 0x10 */
    PUSH32(esp, MEM32(0x141F0070)); /* 0x141E9980: push dword ptr [0x141f0070] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141E9986: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141E9988: push eax */
    RECOMP_CALL(sub_141EC816); /* 0x141E9989: call 0x141ec816 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E998E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141E9991: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E99D3; /* 0x141E9993: je 0x141e99d3 */
L_141E9995:
    /* cmp edi, 7 */ /* 0x141E9995: cmp edi, 7 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E99B4; /* 0x141E9998: jb 0x141e99b4 */
L_141E999A:
    eax = MEM32(ebx + 0x8); /* 0x141E999A: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 7); /* 0x141E999D: push 7 */
    PUSH32(esp, MEM32(0x141F0074)); /* 0x141E999F: push dword ptr [0x141f0074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141E99A5: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141E99A7: push eax */
    RECOMP_CALL(sub_141EC816); /* 0x141E99A8: call 0x141ec816 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E99AD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141E99B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E99D3; /* 0x141E99B2: je 0x141e99d3 */
L_141E99B4:
    /* cmp edi, 4 */ /* 0x141E99B4: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E99F5; /* 0x141E99B7: jb 0x141e99f5 */
L_141E99B9:
    eax = MEM32(ebx + 0x8); /* 0x141E99B9: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, 4); /* 0x141E99BC: push 4 */
    PUSH32(esp, MEM32(0x141F0078)); /* 0x141E99BE: push dword ptr [0x141f0078] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x141E99C4: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x141E99C6: push eax */
    RECOMP_CALL(sub_141EC816); /* 0x141E99C7: call 0x141ec816 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E99CC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x141E99CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E99F5; /* 0x141E99D1: jne 0x141e99f5 */
L_141E99D3:
    ecx = esi; /* 0x141E99D3: mov ecx, esi */
    /* cmp esi, MEM32(ebx) */ /* 0x141E99D5: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E99E7; /* 0x141E99D7: jae 0x141e99e7 */
L_141E99D9:
    eax = MEM32(ebx + 0x8); /* 0x141E99D9: mov eax, dword ptr [ebx + 8] */
L_141E99DC:
    /* cmp MEM8(eax + esi), 0x3Eu */ /* 0x141E99DC: cmp byte ptr [eax + esi], 0x3e */
    _flag_a = (uint32_t)(MEM8(eax + esi)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E99E7; /* 0x141E99E0: je 0x141e99e7 */
L_141E99E2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E99E2: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx) */ /* 0x141E99E3: cmp esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E99DC; /* 0x141E99E5: jb 0x141e99dc */
L_141E99E7:
    eax = MEM32(ebp + (-0x4)); /* 0x141E99E7: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x141E99EA: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = eax + ecx + (-0x1); /* 0x141E99EC: lea eax, [eax + ecx - 1] */
    MEM32(ebp + (-0x4)) = eax; /* 0x141E99F0: mov dword ptr [ebp - 4], eax */
    goto L_141E99F8; /* 0x141E99F3: jmp 0x141e99f8 */
L_141E99F5:
    eax = MEM32(ebp + (-0x4)); /* 0x141E99F5: mov eax, dword ptr [ebp - 4] */
L_141E99F8:
    edi = MEM32(ebx); /* 0x141E99F8: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E99FA: inc esi */
    _flag_k = FK_INC;
L_141E99FB:
    /* cmp esi, edi */ /* 0x141E99FB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9974; /* 0x141E99FD: jb 0x141e9974 */
L_141E9A03:
    esi = MEM32(ebp + 0x8); /* 0x141E9A03: mov esi, dword ptr [ebp + 8] */
    /* cmp eax, esi */ /* 0x141E9A06: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E9A1B; /* 0x141E9A08: jae 0x141e9a1b */
L_141E9A0A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x141E9A0A: sub esi, eax */
    _flag_k = FK_CMP;
L_141E9A0C:
    PUSH32(esp, 0x14034EFCu); /* 0x141E9A0C: push 0x14034efc */
    ecx = ebx; /* 0x141E9A11: mov ecx, ebx */
    RECOMP_CALL(sub_141E98B6); /* 0x141E9A13: call 0x141e98b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x141E9A18: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_141E9A0C; /* 0x141E9A19: jne 0x141e9a0c */
L_141E9A1B:
    edi = POP32_VAL(esp); /* 0x141E9A1B: pop edi */
    esi = POP32_VAL(esp); /* 0x141E9A1C: pop esi */
    ebx = POP32_VAL(esp); /* 0x141E9A1D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E9A1E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E9A1F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E9A27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9A27u);

L_141E9A27:
    edi = edi; /* 0x141E9A27: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9A29: push ebp */
    ebp = esp; /* 0x141E9A2A: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x141E9A2C: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x141E9A2F: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x141E9A30: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x141E9A32: inc ebx */
    _flag_k = FK_INC;
    SET_LO8(eax, LO8(edx)); /* 0x141E9A33: mov al, dl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(eax, LO8(eax) & LO8(ebx)); /* 0x141E9A35: and al, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x10) = (uint8_t)(LO8(eax)); /* 0x141E9A37: mov byte ptr [ecx + 0x10], al */
    eax = edx; /* 0x141E9A3A: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x141E9A3C: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x141E9A3C: shr eax, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(eax, LO8(eax) & LO8(ebx)); /* 0x141E9A3E: and al, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x11) = (uint8_t)(LO8(eax)); /* 0x141E9A40: mov byte ptr [ecx + 0x11], al */
    eax = edx; /* 0x141E9A43: mov eax, edx */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x141E9A45: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x141E9A45: shr eax, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(eax, LO8(eax) & LO8(ebx)); /* 0x141E9A48: and al, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x12) = (uint8_t)(LO8(eax)); /* 0x141E9A4A: mov byte ptr [ecx + 0x12], al */
    eax = edx; /* 0x141E9A4D: mov eax, edx */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x141E9A4F: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x141E9A4F: shr eax, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(eax, LO8(eax) & LO8(ebx)); /* 0x141E9A52: and al, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x141E9A54: shr edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 4u; /* 0x141E9A54: shr edx, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    SET_LO8(edx, LO8(edx) & LO8(ebx)); /* 0x141E9A57: and dl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ecx + 0x13) = (uint8_t)(LO8(eax)); /* 0x141E9A59: mov byte ptr [ecx + 0x13], al */
    MEM8(ecx + 0x14) = (uint8_t)(LO8(edx)); /* 0x141E9A5C: mov byte ptr [ecx + 0x14], dl */
    ebx = POP32_VAL(esp); /* 0x141E9A5F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E9A60: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E9A61: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E9A69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9A69u);

L_141E9A69:
    edi = edi; /* 0x141E9A69: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9A6B: push ebp */
    ebp = esp; /* 0x141E9A6C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x141E9A6E: push ecx */
    PUSH32(esp, ebx); /* 0x141E9A6F: push ebx */
    PUSH32(esp, edi); /* 0x141E9A70: push edi */
    PUSH32(esp, 0); /* 0x141E9A71: push 0 */
    PUSH32(esp, 4); /* 0x141E9A73: push 4 */
    ebx = ecx; /* 0x141E9A75: mov ebx, ecx */
    RECOMP_CALL(sub_141EC854); /* 0x141E9A77: call 0x141ec854 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x141E9A7C: mov edi, eax */
    /* cmp MEM8(edi), 0x43u */ /* 0x141E9A7E: cmp byte ptr [edi], 0x43 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = POP32_VAL(esp); /* 0x141E9A81: pop ecx */
    ecx = POP32_VAL(esp); /* 0x141E9A82: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9A8F; /* 0x141E9A83: jne 0x141e9a8f */
L_141E9A85:
    /* cmp MEM8(edi + 0x1), 0 */ /* 0x141E9A85: cmp byte ptr [edi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9A8F; /* 0x141E9A89: jne 0x141e9a8f */
L_141E9A8B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9A8B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E9ACC; /* 0x141E9A8D: jmp 0x141e9acc */
L_141E9A8F:
    PUSH32(esp, esi); /* 0x141E9A8F: push esi */
    eax = ebp + (-0x4); /* 0x141E9A90: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x141E9A93: push eax */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x141E9A94: push 0x7fffffff */
    PUSH32(esp, edi); /* 0x141E9A99: push edi */
    RECOMP_CALL(sub_140E35C0); /* 0x141E9A9A: call 0x140e35c0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E9A9F: mov esi, eax */
    /* test esi, esi */ /* 0x141E9AA1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E9ABC; /* 0x141E9AA3: js 0x141e9abc */
L_141E9AA5:
    esi = MEM32(ebp + (-0x4)); /* 0x141E9AA5: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E9AA8: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x141E9AA9: push esi */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E9AAA: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9AAF: pop ecx */
    MEM32(ebx + 0xC) = eax; /* 0x141E9AB0: mov dword ptr [ebx + 0xc], eax */
    /* test eax, eax */ /* 0x141E9AB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9AD0; /* 0x141E9AB5: jne 0x141e9ad0 */
L_141E9AB7:
    esi = 0x8007000Eu; /* 0x141E9AB7: mov esi, 0x8007000e */
L_141E9ABC:
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x141E9ABC: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9ABF: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0; /* 0x141E9AC4: and dword ptr [ebx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E9AC8:
    ecx = POP32_VAL(esp); /* 0x141E9AC8: pop ecx */
    eax = esi; /* 0x141E9AC9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x141E9ACB: pop esi */
L_141E9ACC:
    edi = POP32_VAL(esp); /* 0x141E9ACC: pop edi */
    ebx = POP32_VAL(esp); /* 0x141E9ACD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E9ACE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9ACF: ret  */
L_141E9AD0:
    PUSH32(esp, edi); /* 0x141E9AD0: push edi */
    PUSH32(esp, esi); /* 0x141E9AD1: push esi */
    PUSH32(esp, eax); /* 0x141E9AD2: push eax */
    RECOMP_CALL(sub_14086600); /* 0x141E9AD3: call 0x14086600 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E9AD8: mov esi, eax */
    /* test esi, esi */ /* 0x141E9ADA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E9ABC; /* 0x141E9ADC: js 0x141e9abc */
L_141E9ADE:
    PUSH32(esp, 0x14058AD0u); /* 0x141E9ADE: push 0x14058ad0 */
    PUSH32(esp, 4); /* 0x141E9AE3: push 4 */
    RECOMP_CALL(sub_141EC854); /* 0x141E9AE5: call 0x141ec854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9AEA: pop ecx */
    RECOMP_BACKEDGE();
    goto L_141E9AC8; /* 0x141E9AEB: jmp 0x141e9ac8 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_141E9AF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9AF2u);

L_141E9AF2:
    edi = edi; /* 0x141E9AF2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9AF4: push ebp */
    ebp = esp; /* 0x141E9AF5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x204u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x204u; /* 0x141E9AF7: sub esp, 0x204 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141E9AFD: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141E9B02: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141E9B04: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x141E9B07: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E9B08: mov esi, dword ptr [ebp + 8] */
    eax = ebp + 0x10; /* 0x141E9B0B: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x141E9B0E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E9B0F: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x204); /* 0x141E9B12: lea eax, [ebp - 0x204] */
    PUSH32(esp, 0x200u); /* 0x141E9B18: push 0x200 */
    PUSH32(esp, eax); /* 0x141E9B1D: push eax */
    RECOMP_CALL(sub_141C56F0); /* 0x141E9B1E: call 0x141c56f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x141E9B23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_141E9B35; /* 0x141E9B25: js 0x141e9b35 */
L_141E9B27:
    eax = ebp + (-0x204); /* 0x141E9B27: lea eax, [ebp - 0x204] */
    PUSH32(esp, eax); /* 0x141E9B2D: push eax */
    ecx = esi; /* 0x141E9B2E: mov ecx, esi */
    RECOMP_CALL(sub_141E98B6); /* 0x141E9B30: call 0x141e98b6 */
    RECOMP_FLAGS_IN();
L_141E9B35:
    ecx = MEM32(ebp + (-0x4)); /* 0x141E9B35: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141E9B38: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x141E9B3A: pop esi */
    RECOMP_CALL(sub_141EC0B6); /* 0x141E9B3B: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E9B40: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9B41: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E9B47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9B47u);

L_141E9B47:
    edi = edi; /* 0x141E9B47: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9B49: push ebp */
    ebp = esp; /* 0x141E9B4A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E9B4C: push esi */
    esi = ecx; /* 0x141E9B4D: mov esi, ecx */
    /* cmp MEM8(esi + 0x10), 0 */ /* 0x141E9B4F: cmp byte ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E9B70; /* 0x141E9B53: je 0x141e9b70 */
L_141E9B55:
    eax = MEM32(ebp + 0x8); /* 0x141E9B55: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax * 4 + 0x141F007C)); /* 0x141E9B58: push dword ptr [eax*4 + 0x141f007c] */
    PUSH32(esp, 0x1400274Cu); /* 0x141E9B5F: push 0x1400274c */
    PUSH32(esp, esi); /* 0x141E9B64: push esi */
    RECOMP_CALL(sub_141E9AF2); /* 0x141E9B65: call 0x141e9af2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E9B6A: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1; /* 0x141E9B6D: inc dword ptr [esi + 0x18] */
    _flag_k = FK_INC;
L_141E9B70:
    esi = POP32_VAL(esp); /* 0x141E9B70: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E9B71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x141E9B72: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_141E9B7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9B7Au);

L_141E9B7A:
    /* cmp MEM8(ecx + 0x10), 0 */ /* 0x141E9B7A: cmp byte ptr [ecx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E9B90; /* 0x141E9B7E: je 0x141e9b90 */
L_141E9B80:
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) - 1; /* 0x141E9B80: dec dword ptr [ecx + 0x18] */
    _flag_k = FK_DEC;
    PUSH32(esp, 0x14002730u); /* 0x141E9B83: push 0x14002730 */
    PUSH32(esp, ecx); /* 0x141E9B88: push ecx */
    RECOMP_CALL(sub_141E9AF2); /* 0x141E9B89: call 0x141e9af2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9B8E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x141E9B8F: pop ecx */
L_141E9B90:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9B90: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E9B96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9B96u);

L_141E9B96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9B96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = 0x20u; /* 0x141E9B98: mov dword ptr [ecx + 4], 0x20 */
    MEM32(ecx + 0xC) = eax; /* 0x141E9B9F: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x141E9BA2: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x8) = eax; /* 0x141E9BA5: mov dword ptr [ecx + 8], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9BA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E9BAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9BAEu);

L_141E9BAE:
    edi = edi; /* 0x141E9BAE: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E9BB0: push esi */
    esi = ecx; /* 0x141E9BB1: mov esi, ecx */
    PUSH32(esp, edi); /* 0x141E9BB3: push edi */
    edi = MEM32(esi + 0xC); /* 0x141E9BB4: mov edi, dword ptr [esi + 0xc] */
    /* test edi, edi */ /* 0x141E9BB7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9BDB; /* 0x141E9BB9: je 0x141e9bdb */
L_141E9BBB:
    PUSH32(esp, ebx); /* 0x141E9BBB: push ebx */
L_141E9BBC:
    /* cmp MEM8(esi), 0 */ /* 0x141E9BBC: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = edi; /* 0x141E9BBF: mov ebx, edi */
    edi = MEM32(edi + 0xC); /* 0x141E9BC1: mov edi, dword ptr [edi + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E9BCF; /* 0x141E9BC4: je 0x141e9bcf */
L_141E9BC6:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x141E9BC6: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9BC9: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9BCE: pop ecx */
L_141E9BCF:
    PUSH32(esp, ebx); /* 0x141E9BCF: push ebx */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9BD0: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9BD5: pop ecx */
    /* test edi, edi */ /* 0x141E9BD6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9BBC; /* 0x141E9BD8: jne 0x141e9bbc */
L_141E9BDA:
    ebx = POP32_VAL(esp); /* 0x141E9BDA: pop ebx */
L_141E9BDB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9BDB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x141E9BDD: pop edi */
    MEM32(esi + 0xC) = eax; /* 0x141E9BDE: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x141E9BE1: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x4) = eax; /* 0x141E9BE4: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x141E9BE7: mov dword ptr [esi + 8], eax */
    esi = POP32_VAL(esp); /* 0x141E9BEA: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9BEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E9BF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9BF1u);

L_141E9BF1:
    edi = edi; /* 0x141E9BF1: mov edi, edi */
    PUSH32(esp, esi); /* 0x141E9BF3: push esi */
    esi = ecx; /* 0x141E9BF4: mov esi, ecx */
    RECOMP_CALL(sub_141E9BAE); /* 0x141E9BF6: call 0x141e9bae */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9BFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = 0x20u; /* 0x141E9BFD: mov dword ptr [esi + 4], 0x20 */
    MEM32(esi + 0xC) = eax; /* 0x141E9C04: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x141E9C07: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x8) = eax; /* 0x141E9C0A: mov dword ptr [esi + 8], eax */
    esi = POP32_VAL(esp); /* 0x141E9C0D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9C0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E9C14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9C14u);

L_141E9C14:
    edi = edi; /* 0x141E9C14: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9C16: push ebp */
    ebp = esp; /* 0x141E9C17: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x141E9C19: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x141E9C1A: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x141E9C1D: push edi */
    edi = ecx; /* 0x141E9C1E: mov edi, ecx */
    /* test ebx, ebx */ /* 0x141E9C20: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9C34; /* 0x141E9C22: je 0x141e9c34 */
L_141E9C24:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x141E9C24: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9C34; /* 0x141E9C28: jne 0x141e9c34 */
L_141E9C2A:
    eax = 0x80004005u; /* 0x141E9C2A: mov eax, 0x80004005 */
    goto L_141E9CDD; /* 0x141E9C2F: jmp 0x141e9cdd */
L_141E9C34:
    PUSH32(esp, esi); /* 0x141E9C34: push esi */
    PUSH32(esp, 0x10u); /* 0x141E9C35: push 0x10 */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E9C37: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x141E9C3C: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x141E9C3E: pop ecx */
    /* test esi, esi */ /* 0x141E9C3F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9C4D; /* 0x141E9C41: jne 0x141e9c4d */
L_141E9C43:
    eax = 0x8007000Eu; /* 0x141E9C43: mov eax, 0x8007000e */
    goto L_141E9CDC; /* 0x141E9C48: jmp 0x141e9cdc */
L_141E9C4D:
    eax = MEM32(edi + 0x4); /* 0x141E9C4D: mov eax, dword ptr [edi + 4] */
    ecx = eax + ebx + 0xC; /* 0x141E9C50: lea ecx, [eax + ebx + 0xc] */
    MEM32(ebp + 0xC) = ecx; /* 0x141E9C54: mov dword ptr [ebp + 0xc], ecx */
    /* cmp ecx, 0x80000000u */ /* 0x141E9C57: cmp ecx, 0x80000000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80000000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E9CD0; /* 0x141E9C5D: ja 0x141e9cd0 */
L_141E9C5F:
    /* cmp ecx, eax */ /* 0x141E9C5F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9CD0; /* 0x141E9C61: jb 0x141e9cd0 */
L_141E9C63:
    eax = MEM32(ebp + 0x8); /* 0x141E9C63: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x141E9C66: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x141E9C6A: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = ebx; /* 0x141E9C6C: mov dword ptr [esi + 4], ebx */
    /* test ebx, ebx */ /* 0x141E9C6F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9C78; /* 0x141E9C71: jne 0x141e9c78 */
L_141E9C73:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & ebx; /* 0x141E9C73: and dword ptr [esi + 8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E9CB0; /* 0x141E9C76: jmp 0x141e9cb0 */
L_141E9C78:
    /* cmp MEM8(edi), 0 */ /* 0x141E9C78: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E9CAA; /* 0x141E9C7B: je 0x141e9caa */
L_141E9C7D:
    PUSH32(esp, ebx); /* 0x141E9C7D: push ebx */
    RECOMP_CALL(sub_141EC7E6); /* 0x141E9C7E: call 0x141ec7e6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x141E9C83: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x141E9C84: mov dword ptr [esi + 8], eax */
    /* test eax, eax */ /* 0x141E9C87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9C98; /* 0x141E9C89: jne 0x141e9c98 */
L_141E9C8B:
    PUSH32(esp, esi); /* 0x141E9C8B: push esi */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9C8C: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    eax = 0x8007000Eu; /* 0x141E9C91: mov eax, 0x8007000e */
    goto L_141E9CDB; /* 0x141E9C96: jmp 0x141e9cdb */
L_141E9C98:
    PUSH32(esp, ebx); /* 0x141E9C98: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E9C99: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x141E9C9C: push eax */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E9C9D: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x141E9CA2: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E9CA5: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_141E9CB0; /* 0x141E9CA8: jmp 0x141e9cb0 */
L_141E9CAA:
    eax = MEM32(ebp + 0x10); /* 0x141E9CAA: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x8) = eax; /* 0x141E9CAD: mov dword ptr [esi + 8], eax */
L_141E9CB0:
    eax = MEM32(edi + 0x10); /* 0x141E9CB0: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x141E9CB3: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
    MEM32(edi + 0x4) = ecx; /* 0x141E9CB6: mov dword ptr [edi + 4], ecx */
    /* test eax, eax */ /* 0x141E9CB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9CC0; /* 0x141E9CBB: je 0x141e9cc0 */
L_141E9CBD:
    MEM32(eax + 0xC) = esi; /* 0x141E9CBD: mov dword ptr [eax + 0xc], esi */
L_141E9CC0:
    /* cmp MEM32(edi + 0xC), 0 */ /* 0x141E9CC0: cmp dword ptr [edi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9CC9; /* 0x141E9CC4: jne 0x141e9cc9 */
L_141E9CC6:
    MEM32(edi + 0xC) = esi; /* 0x141E9CC6: mov dword ptr [edi + 0xc], esi */
L_141E9CC9:
    MEM32(edi + 0x10) = esi; /* 0x141E9CC9: mov dword ptr [edi + 0x10], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9CCC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E9CDC; /* 0x141E9CCE: jmp 0x141e9cdc */
L_141E9CD0:
    PUSH32(esp, esi); /* 0x141E9CD0: push esi */
    RECOMP_CALL(sub_141EC7F2); /* 0x141E9CD1: call 0x141ec7f2 */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x141E9CD6: mov eax, 0x80004005 */
L_141E9CDB:
    ecx = POP32_VAL(esp); /* 0x141E9CDB: pop ecx */
L_141E9CDC:
    esi = POP32_VAL(esp); /* 0x141E9CDC: pop esi */
L_141E9CDD:
    edi = POP32_VAL(esp); /* 0x141E9CDD: pop edi */
    ebx = POP32_VAL(esp); /* 0x141E9CDE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x141E9CDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E9CE0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E9CE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9CE8u);

L_141E9CE8:
    edi = edi; /* 0x141E9CE8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9CEA: push ebp */
    ebp = esp; /* 0x141E9CEB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x141E9CED: push esi */
    esi = MEM32(ebp + 0x8); /* 0x141E9CEE: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E9CF1: push edi */
    edi = ecx; /* 0x141E9CF2: mov edi, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x141E9CF4: mov ecx, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x141E9CF7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9D09; /* 0x141E9CF9: jne 0x141e9d09 */
L_141E9CFB:
    /* test ecx, ecx */ /* 0x141E9CFB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9D17; /* 0x141E9CFD: je 0x141e9d17 */
L_141E9CFF:
    eax = MEM32(edi + 0x4); /* 0x141E9CFF: mov eax, dword ptr [edi + 4] */
    MEM32(ecx) = eax; /* 0x141E9D02: mov dword ptr [ecx], eax */
    goto L_141E9DA8; /* 0x141E9D04: jmp 0x141e9da8 */
L_141E9D09:
    /* test ecx, ecx */ /* 0x141E9D09: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9D17; /* 0x141E9D0B: je 0x141e9d17 */
L_141E9D0D:
    eax = MEM32(ecx); /* 0x141E9D0D: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x141E9D0F: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_141E9D21; /* 0x141E9D12: jae 0x141e9d21 */
L_141E9D14:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x141E9D14: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E9D17:
    eax = 0x80004005u; /* 0x141E9D17: mov eax, 0x80004005 */
    goto L_141E9DAA; /* 0x141E9D1C: jmp 0x141e9daa */
L_141E9D21:
    eax = MEM32(edi + 0x8); /* 0x141E9D21: mov eax, dword ptr [edi + 8] */
    ecx = esi + eax * 4 + 0x20; /* 0x141E9D24: lea ecx, [esi + eax*4 + 0x20] */
    edx = ecx + 0x8; /* 0x141E9D28: lea edx, [ecx + 8] */
    MEM32(ebp + 0xC) = edx; /* 0x141E9D2B: mov dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x141E9D2E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x141E9D30: push ebx */
    ebx = MEM32(edi + 0xC); /* 0x141E9D31: mov ebx, dword ptr [edi + 0xc] */
    MEM32(ebp + 0x8) = edx; /* 0x141E9D34: mov dword ptr [ebp + 8], edx */
    /* test eax, eax */ /* 0x141E9D37: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9D79; /* 0x141E9D39: je 0x141e9d79 */
L_141E9D3B:
    eax = ecx; /* 0x141E9D3B: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x141E9D3D: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(esi + edx * 4 + 0x20) = eax; /* 0x141E9D3F: mov dword ptr [esi + edx*4 + 0x20], eax */
    eax = MEM32(ebx); /* 0x141E9D43: mov eax, dword ptr [ebx] */
    MEM32(ecx) = eax; /* 0x141E9D45: mov dword ptr [ecx], eax */
    eax = MEM32(ebx + 0x4); /* 0x141E9D47: mov eax, dword ptr [ebx + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x141E9D4A: mov dword ptr [ecx + 4], eax */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x141E9D4D: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x141E9D50: push dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E9D53: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_141EC9A4); /* 0x141E9D56: call 0x141ec9a4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x141E9D5B: mov ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x141E9D5E: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x8); /* 0x141E9D61: mov edx, dword ptr [ebp + 8] */
    ebx = MEM32(ebx + 0xC); /* 0x141E9D64: mov ebx, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x141E9D67: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x141E9D6A: inc edx */
    _flag_k = FK_INC;
    eax = ecx + 0x8; /* 0x141E9D6B: lea eax, [ecx + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x141E9D6E: mov dword ptr [ebp + 0xc], eax */
    MEM32(ebp + 0x8) = edx; /* 0x141E9D71: mov dword ptr [ebp + 8], edx */
    /* cmp edx, MEM32(edi + 0x8) */ /* 0x141E9D74: cmp edx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9D3B; /* 0x141E9D77: jb 0x141e9d3b */
L_141E9D79:
    eax = MEM32(edi + 0x8); /* 0x141E9D79: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x1C) = eax; /* 0x141E9D7C: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(edi + 0x4); /* 0x141E9D7F: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(MEM16(esi + 0x16)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(esi + 0x16) = (uint16_t)(MEM16(esi + 0x16) & 0); /* 0x141E9D82: and word ptr [esi + 0x16], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(esi + 0x18) = eax; /* 0x141E9D87: mov dword ptr [esi + 0x18], eax */
    eax = esi + 0x4; /* 0x141E9D8A: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x141E9D8D: push eax */
    eax = MEM32(esi + 0x18); /* 0x141E9D8E: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x14u; /* 0x141E9D91: sub eax, 0x14 */
    _flag_k = FK_CMP;
    ecx = esi + 0x14; /* 0x141E9D94: lea ecx, [esi + 0x14] */
    PUSH32(esp, eax); /* 0x141E9D97: push eax */
    PUSH32(esp, ecx); /* 0x141E9D98: push ecx */
    MEM32(esi) = 0x43425844u; /* 0x141E9D99: mov dword ptr [esi], 0x43425844 */
    MEM16(ecx) = (uint16_t)(1); /* 0x141E9D9F: mov word ptr [ecx], 1 */
    RECOMP_ICALL(MEM32(ebp + 0x10)); /* 0x141E9DA4: call dword ptr [ebp + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x141E9DA7: pop ebx */
L_141E9DA8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9DA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_141E9DAA:
    edi = POP32_VAL(esp); /* 0x141E9DAA: pop edi */
    esi = POP32_VAL(esp); /* 0x141E9DAB: pop esi */
    ebp = POP32_VAL(esp); /* 0x141E9DAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E9DAD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_141E9DB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9DB5u);

L_141E9DB5:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x141E9DB5: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x141E9DB8: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x141E9DBC: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x141E9DBE: ret  */
    RECOMP_REGS_OUT();
}

void sub_141E9DC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9DC4u);

L_141E9DC4:
    edi = edi; /* 0x141E9DC4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9DC6: push ebp */
    ebp = esp; /* 0x141E9DC7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x141E9DC9: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x141F0098); /* 0x141E9DCC: mov eax, dword ptr [0x141f0098] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x141E9DD1: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x141E9DD3: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x141E9DD6: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x141E9DD9: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x141E9DDA: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x141E9DDD: push edi */
    MEM32(ebp + (-0x24)) = ecx; /* 0x141E9DDE: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x141E9DE1: mov dword ptr [ebp - 0x20], eax */
    /* test ebx, ebx */ /* 0x141E9DE4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9DF2; /* 0x141E9DE6: jne 0x141e9df2 */
L_141E9DE8:
    eax = 0x80004005u; /* 0x141E9DE8: mov eax, 0x80004005 */
    goto L_141E9F34; /* 0x141E9DED: jmp 0x141e9f34 */
L_141E9DF2:
    edx = MEM32(ebp + 0xC); /* 0x141E9DF2: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, 0x20u */ /* 0x141E9DF5: cmp edx, 0x20 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9DE8; /* 0x141E9DF8: jb 0x141e9de8 */
L_141E9DFA:
    /* cmp MEM32(ebx + 0x18), edx */ /* 0x141E9DFA: cmp dword ptr [ebx + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9DE8; /* 0x141E9DFD: jne 0x141e9de8 */
L_141E9DFF:
    /* cmp MEM32(ebx), 0x43425844u */ /* 0x141E9DFF: cmp dword ptr [ebx], 0x43425844 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0x43425844u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x141E9E05: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E06: jne 0x141e9f2e */
L_141E9E0C:
    /* cmp MEM16(ebx + 0x14), 1 */ /* 0x141E9E0C: cmp word ptr [ebx + 0x14], 1 */
    _flag_a = (uint32_t)(MEM16(ebx + 0x14)) << 16; _flag_b = (uint32_t)(1) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E11: jne 0x141e9f2e */
L_141E9E17:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x141E9E17: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0x16), LO16(esi) */ /* 0x141E9E19: cmp word ptr [ebx + 0x16], si */
    _flag_a = (uint32_t)(MEM16(ebx + 0x16)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E1D: jne 0x141e9f2e */
L_141E9E23:
    eax = ebx + edx; /* 0x141E9E23: lea eax, [ebx + edx] */
    MEM32(ebp + (-0x28)) = eax; /* 0x141E9E26: mov dword ptr [ebp - 0x28], eax */
    /* cmp eax, ebx */ /* 0x141E9E29: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E2B: jb 0x141e9f2e */
L_141E9E31:
    ecx = MEM32(ebx + 0x1C); /* 0x141E9E31: mov ecx, dword ptr [ebx + 0x1c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x141E9E34: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x141E9E34: shl ecx, 2 */
    eax = ecx + ebx; /* 0x141E9E37: lea eax, [ecx + ebx] */
    edi = ebx + 0x20; /* 0x141E9E3A: lea edi, [ebx + 0x20] */
    /* cmp eax, ebx */ /* 0x141E9E3D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E3F: jb 0x141e9f2e */
L_141E9E45:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x141E9E45: sub ecx, ebx */
    _flag_k = FK_CMP;
    eax = ecx + edi + (-0x1); /* 0x141E9E47: lea eax, [ecx + edi - 1] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x141E9E4B: mov dword ptr [ebp - 0x1c], eax */
    /* cmp eax, edx */ /* 0x141E9E4E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E50: ja 0x141e9f2e */
L_141E9E56:
    /* cmp MEM32(ebx + 0x1C), esi */ /* 0x141E9E56: cmp dword ptr [ebx + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_141E9EBE; /* 0x141E9E59: jbe 0x141e9ebe */
L_141E9E5B:
    eax = MEM32(edi + esi * 4); /* 0x141E9E5B: mov eax, dword ptr [edi + esi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x141E9E5E: add eax, ebx */
    _flag_k = FK_ADD;
    ecx = eax + 0x8; /* 0x141E9E60: lea ecx, [eax + 8] */
    /* cmp ecx, eax */ /* 0x141E9E63: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E65: jb 0x141e9f2e */
L_141E9E6B:
    /* cmp ecx, MEM32(ebp + (-0x28)) */ /* 0x141E9E6B: cmp ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E6E: ja 0x141e9f2e */
L_141E9E74:
    /* cmp eax, ebx */ /* 0x141E9E74: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E76: jb 0x141e9f2e */
L_141E9E7C:
    ecx = MEM32(edi + esi * 4); /* 0x141E9E7C: mov ecx, dword ptr [edi + esi*4] */
    eax = ecx + 0x8; /* 0x141E9E7F: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x141E9E82: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E84: jb 0x141e9f2e */
L_141E9E8A:
    eax = ecx; /* 0x141E9E8A: mov eax, ecx */
    eax = MEM32(eax + ebx + 0x4); /* 0x141E9E8C: mov eax, dword ptr [eax + ebx + 4] */
    eax = eax + ecx + 0x8; /* 0x141E9E90: lea eax, [eax + ecx + 8] */
    /* cmp eax, ecx */ /* 0x141E9E94: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9E96: jb 0x141e9f2e */
L_141E9E9C:
    eax = MEM32(ecx + ebx + 0x4); /* 0x141E9E9C: mov eax, dword ptr [ecx + ebx + 4] */
    ecx = eax + ecx + 0x7; /* 0x141E9EA0: lea ecx, [eax + ecx + 7] */
    /* cmp ecx, edx */ /* 0x141E9EA4: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9EA6: ja 0x141e9f2e */
L_141E9EAC:
    eax = MEM32(edi + esi * 4); /* 0x141E9EAC: mov eax, dword ptr [edi + esi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x141E9EAF: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + (-0x1C)), eax */ /* 0x141E9EB0: cmp dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9EB3: jne 0x141e9f2e */
L_141E9EB5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x141E9EB5: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x141E9EB6: mov dword ptr [ebp - 0x1c], ecx */
    /* cmp esi, MEM32(ebx + 0x1C) */ /* 0x141E9EB9: cmp esi, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_141E9E5B; /* 0x141E9EBC: jb 0x141e9e5b */
L_141E9EBE:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x141E9EBE: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_141E9F22; /* 0x141E9EC2: je 0x141e9f22 */
L_141E9EC4:
    eax = MEM32(ebx + 0x18); /* 0x141E9EC4: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFECu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFECu; /* 0x141E9EC7: add eax, -0x14 */
    _flag_k = FK_ADD;
    ecx = ebp + (-0x14); /* 0x141E9ECA: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x141E9ECD: push ecx */
    PUSH32(esp, eax); /* 0x141E9ECE: push eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x141E9ECF: mov dword ptr [ebp - 0x18], eax */
    eax = ebx + 0x14; /* 0x141E9ED2: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x141E9ED5: push eax */
    RECOMP_CALL(sub_141EA0CB); /* 0x141E9ED6: call 0x141ea0cb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x141E9EDB: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x141E9EDD: pop ecx */
    edi = ebp + (-0x14); /* 0x141E9EDE: lea edi, [ebp - 0x14] */
    esi = ebx + 0x4; /* 0x141E9EE1: lea esi, [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9EE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x141E9EE6: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E9EEF; /* 0x141E9EE8: je 0x141e9eef */
L_141E9EEA:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141E9EEA: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141E9EEC: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_141E9EEF:
    /* test eax, eax */ /* 0x141E9EEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9F1F; /* 0x141E9EF1: je 0x141e9f1f */
L_141E9EF3:
    edx = MEM32(ebp + (-0x20)); /* 0x141E9EF3: mov edx, dword ptr [ebp - 0x20] */
    /* test edx, edx */ /* 0x141E9EF6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9EF8: je 0x141e9f2e */
L_141E9EFA:
    eax = ebp + (-0x14); /* 0x141E9EFA: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x141E9EFD: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x141E9EFE: push dword ptr [ebp - 0x18] */
    eax = ebx + 0x14; /* 0x141E9F01: lea eax, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x141E9F04: push eax */
    RECOMP_ICALL(edx); /* 0x141E9F05: call edx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x141E9F07: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x141E9F09: pop ecx */
    edi = ebp + (-0x14); /* 0x141E9F0A: lea edi, [ebp - 0x14] */
    esi = ebx + 0x4; /* 0x141E9F0D: lea esi, [ebx + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9F10: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x141E9F12: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_141E9F1B; /* 0x141E9F14: je 0x141e9f1b */
L_141E9F16:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141E9F16: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x141E9F18: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_141E9F1B:
    /* test eax, eax */ /* 0x141E9F1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_141E9F2E; /* 0x141E9F1D: jne 0x141e9f2e */
L_141E9F1F:
    edi = ebx + 0x20; /* 0x141E9F1F: lea edi, [ebx + 0x20] */
L_141E9F22:
    eax = MEM32(ebp + (-0x24)); /* 0x141E9F22: mov eax, dword ptr [ebp - 0x24] */
    MEM32(eax) = ebx; /* 0x141E9F25: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = edi; /* 0x141E9F27: mov dword ptr [eax + 4], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x141E9F2A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_141E9F33; /* 0x141E9F2C: jmp 0x141e9f33 */
L_141E9F2E:
    eax = 0x80004005u; /* 0x141E9F2E: mov eax, 0x80004005 */
L_141E9F33:
    esi = POP32_VAL(esp); /* 0x141E9F33: pop esi */
L_141E9F34:
    ecx = MEM32(ebp + (-0x4)); /* 0x141E9F34: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x141E9F37: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x141E9F38: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x141E9F3A: pop ebx */
    RECOMP_CALL(sub_141EC0B6); /* 0x141E9F3B: call 0x141ec0b6 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x141E9F40: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x141E9F41: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_141E9F49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x141E9F49u);

L_141E9F49:
    edi = edi; /* 0x141E9F49: mov edi, edi */
    PUSH32(esp, ebp); /* 0x141E9F4B: push ebp */
    ebp = esp; /* 0x141E9F4C: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x141E9F4E: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x141E9F52: push edi */
    edi = ecx; /* 0x141E9F53: mov edi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_141E9F5E; /* 0x141E9F55: jne 0x141e9f5e */
L_141E9F57:
    eax = 0x80004005u; /* 0x141E9F57: mov eax, 0x80004005 */
    goto L_141E9F77; /* 0x141E9F5C: jmp 0x141e9f77 */
L_141E9F5E:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x141E9F5E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x141E9F61: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E9F64: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_141EB31D); /* 0x141E9F67: call 0x141eb31d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x141E9F6C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x141E9F6D: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x141E9F70: mov ecx, edi */
    RECOMP_CALL(sub_141E9DC4); /* 0x141E9F72: call 0x141e9dc4 */
    RECOMP_FLAGS_IN();
L_141E9F77:
    edi = POP32_VAL(esp); /* 0x141E9F77: pop edi */
    ebp = POP32_VAL(esp); /* 0x141E9F78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x141E9F79: ret 0xc */
    RECOMP_REGS_OUT();
}
