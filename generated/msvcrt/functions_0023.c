#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1508F590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F590u);

L_1508F590:
    edi = edi; /* 0x1508F590: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F592: push ebp */
    ebp = esp; /* 0x1508F593: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508F595: push ecx */
    PUSH32(esp, ecx); /* 0x1508F596: push ecx */
    edx = MEM32(ebp + 0x14); /* 0x1508F597: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x1508F59A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1508F59D: push ebx */
    PUSH32(esp, esi); /* 0x1508F59E: push esi */
    PUSH32(esp, edi); /* 0x1508F59F: push edi */
    /* test edx, edx */ /* 0x1508F5A0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F5CD; /* 0x1508F5A2: jne 0x1508f5cd */
L_1508F5A4:
    /* test ecx, ecx */ /* 0x1508F5A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F5D1; /* 0x1508F5A6: jne 0x1508f5d1 */
L_1508F5A8:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1508F5A8: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F5E1; /* 0x1508F5AB: je 0x1508f5e1 */
L_1508F5AD:
    RECOMP_CALL(sub_15036430); /* 0x1508F5AD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1508F5B2: push 0x16 */
L_1508F5B4:
    esi = POP32_VAL(esp); /* 0x1508F5B4: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1508F5B5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x1508F5B7: mov dword ptr [eax], esi */
    PUSH32(esp, ecx); /* 0x1508F5B9: push ecx */
    PUSH32(esp, ecx); /* 0x1508F5BA: push ecx */
    PUSH32(esp, ecx); /* 0x1508F5BB: push ecx */
    PUSH32(esp, ecx); /* 0x1508F5BC: push ecx */
    PUSH32(esp, ecx); /* 0x1508F5BD: push ecx */
    RECOMP_CALL(sub_1505A110); /* 0x1508F5BE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1508F5C3: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508F5C5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1508F5C8:
    edi = POP32_VAL(esp); /* 0x1508F5C8: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F5C9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508F5CA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508F5CB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F5CC: ret  */
L_1508F5CD:
    /* test ecx, ecx */ /* 0x1508F5CD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F5AD; /* 0x1508F5CF: je 0x1508f5ad */
L_1508F5D1:
    ebx = MEM32(ebp + 0xC); /* 0x1508F5D1: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1508F5D4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F5AD; /* 0x1508F5D6: je 0x1508f5ad */
L_1508F5D8:
    /* test edx, edx */ /* 0x1508F5D8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F5E5; /* 0x1508F5DA: jne 0x1508f5e5 */
L_1508F5DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F5DC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1508F5DE: mov word ptr [ecx], ax */
L_1508F5E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F5E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1508F5C8; /* 0x1508F5E3: jmp 0x1508f5c8 */
L_1508F5E5:
    esi = MEM32(ebp + 0x10); /* 0x1508F5E5: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1508F5E8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F5F3; /* 0x1508F5EA: jne 0x1508f5f3 */
L_1508F5EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F5EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1508F5EE: mov word ptr [ecx], ax */
    RECOMP_BACKEDGE();
    goto L_1508F5AD; /* 0x1508F5F1: jmp 0x1508f5ad */
L_1508F5F3:
    eax = ecx; /* 0x1508F5F3: mov eax, ecx */
    edi = ebx; /* 0x1508F5F5: mov edi, ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508F5F7: mov dword ptr [ebp - 4], eax */
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1508F5FA: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F620; /* 0x1508F5FD: jne 0x1508f620 */
L_1508F5FF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1508F5FF: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508F601: mov dword ptr [ebp - 4], eax */
L_1508F604:
    edx = MEM32(ebp + (-0x4)); /* 0x1508F604: mov edx, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(esi); /* 0x1508F607: movzx eax, word ptr [esi] */
    MEM16(edx + esi) = (uint16_t)(LO16(eax)); /* 0x1508F60A: mov word ptr [edx + esi], ax */
    esi = esi + 0x2; /* 0x1508F60E: lea esi, [esi + 2] */
    edx = MEM32(ebp + 0x14); /* 0x1508F611: mov edx, dword ptr [ebp + 0x14] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F614: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F5E1; /* 0x1508F617: je 0x1508f5e1 */
L_1508F619:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508F619: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F604; /* 0x1508F61C: jne 0x1508f604 */
L_1508F61E:
    goto L_1508F663; /* 0x1508F61E: jmp 0x1508f663 */
L_1508F620:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x1508F620: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_1508F627; /* 0x1508F622: jmp 0x1508f627 */
L_1508F624:
    eax = MEM32(ebp + (-0x4)); /* 0x1508F624: mov eax, dword ptr [ebp - 4] */
L_1508F627:
    ebx = MEM32(ebp + (-0x4)); /* 0x1508F627: mov ebx, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(esi + eax); /* 0x1508F62A: movzx eax, word ptr [esi + eax] */
    MEM32(ebp + (-0x8)) = edx; /* 0x1508F62E: mov dword ptr [ebp - 8], edx */
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1508F631: mov word ptr [ebx], ax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1508F634: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1508F637: mov dword ptr [ebp - 4], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1508F63A: mov ebx, dword ptr [ebp + 0xc] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F63D: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F5E1; /* 0x1508F640: je 0x1508f5e1 */
L_1508F642:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x1508F642: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508F64C; /* 0x1508F645: je 0x1508f64c */
L_1508F647:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 1; /* 0x1508F647: sub edx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F624; /* 0x1508F64A: jne 0x1508f624 */
L_1508F64C:
    eax = MEM32(ebp + (-0x8)); /* 0x1508F64C: mov eax, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x1508F64F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax + (-0x1); /* 0x1508F651: lea edx, [eax - 1] */
    if (TEST_Z(_flag_a, _flag_b)) { edx = eax; } /* 0x1508F654: cmove edx, eax */
    /* test edx, edx */ /* 0x1508F657: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F663; /* 0x1508F659: jne 0x1508f663 */
L_1508F65B:
    eax = MEM32(ebp + (-0x4)); /* 0x1508F65B: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F65E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x1508F660: mov word ptr [eax], si */
L_1508F663:
    /* test edi, edi */ /* 0x1508F663: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F5E1; /* 0x1508F665: jne 0x1508f5e1 */
L_1508F66B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F66B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 0xFFFFFFFFu */ /* 0x1508F66D: cmp edx, -1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F67F; /* 0x1508F670: jne 0x1508f67f */
L_1508F672:
    PUSH32(esp, 0x50u); /* 0x1508F672: push 0x50 */
    MEM16(ecx + ebx * 2 + (-0x2)) = (uint16_t)(LO16(eax)); /* 0x1508F674: mov word ptr [ecx + ebx*2 - 2], ax */
    eax = POP32_VAL(esp); /* 0x1508F679: pop eax */
    RECOMP_BACKEDGE();
    goto L_1508F5C8; /* 0x1508F67A: jmp 0x1508f5c8 */
L_1508F67F:
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x1508F67F: mov word ptr [ecx], ax */
    RECOMP_CALL(sub_15036430); /* 0x1508F682: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1508F687: push 0x22 */
    RECOMP_BACKEDGE();
    goto L_1508F5B4; /* 0x1508F689: jmp 0x1508f5b4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508F6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F6A0u);

L_1508F6A0:
    edi = edi; /* 0x1508F6A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F6A2: push ebp */
    ebp = esp; /* 0x1508F6A3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1508F6A5: mov ecx, dword ptr [ebp + 8] */
    edx = ecx; /* 0x1508F6A8: mov edx, ecx */
    PUSH32(esp, esi); /* 0x1508F6AA: push esi */
    /* test LO8(ecx), 1 */ /* 0x1508F6AB: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F6D1; /* 0x1508F6AE: je 0x1508f6d1 */
L_1508F6B0:
    eax = MEM32(ebp + 0xC); /* 0x1508F6B0: mov eax, dword ptr [ebp + 0xc] */
    esi = ecx + eax * 2; /* 0x1508F6B3: lea esi, [ecx + eax*2] */
    /* cmp ecx, esi */ /* 0x1508F6B6: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F6C8; /* 0x1508F6B8: je 0x1508f6c8 */
L_1508F6BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F6BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F6BC:
    /* cmp MEM16(edx), LO16(eax) */ /* 0x1508F6BC: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F6C8; /* 0x1508F6BF: je 0x1508f6c8 */
L_1508F6C1:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508F6C1: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x1508F6C4: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F6BC; /* 0x1508F6C6: jne 0x1508f6bc */
L_1508F6C8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508F6C8: sub edx, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1508F6CA: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    goto L_1508F759; /* 0x1508F6CC: jmp 0x1508f759 */
L_1508F6D1:
    PUSH32(esp, edi); /* 0x1508F6D1: push edi */
    esi = ecx; /* 0x1508F6D2: mov esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x1508F6D4: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x10u); /* 0x1508F6D7: push 0x10 */
    eax = POP32_VAL(esp); /* 0x1508F6D9: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1508F6DA: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1508F6DC: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1508F6DE: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1508F6E0: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1508F6E2: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1508F6E2: shr esi, 1 */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1508F6E4: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { esi = MEM32(ebp + 0xC); } /* 0x1508F6E7: cmovb esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F6EB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ecx + esi * 2; /* 0x1508F6ED: lea edi, [ecx + esi*2] */
    /* cmp ecx, edi */ /* 0x1508F6F0: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F700; /* 0x1508F6F2: je 0x1508f700 */
L_1508F6F4:
    /* cmp MEM16(edx), LO16(eax) */ /* 0x1508F6F4: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F700; /* 0x1508F6F7: je 0x1508f700 */
L_1508F6F9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508F6F9: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x1508F6FC: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F6F4; /* 0x1508F6FE: jne 0x1508f6f4 */
L_1508F700:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1508F700: sub edx, ecx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1508F702: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    /* cmp edx, esi */ /* 0x1508F704: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F758; /* 0x1508F706: jne 0x1508f758 */
L_1508F708:
    edi = ecx + edx * 2; /* 0x1508F708: lea edi, [ecx + edx*2] */
    { xmm_t _s = _xmm[1]; for (int _k = 0; _k < 4; _k++) _xmm[1].u32[_k] = _xmm[1].u32[_k] ^ _s.u32[_k]; } /* 0x1508F70B: xorps xmm1, xmm1 */
    ecx = MEM32(ebp + 0xC); /* 0x1508F70E: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1508F711: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x1508F713: mov esi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1508F716: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1508F718: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1508F71B: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1508F71D: add ecx, edx */
    _flag_k = FK_ADD;
    ecx = esi + ecx * 2; /* 0x1508F71F: lea ecx, [esi + ecx*2] */
    goto L_1508F736; /* 0x1508F722: jmp 0x1508f736 */
L_1508F724:
    _xmm[0] = _xmm[1]; /* 0x1508F724: movaps xmm0, xmm1 */
    { xmm_t _s = xmm_ld(edi); for (int _k = 0; _k < 8; _k++) _xmm[0].u16[_k] = (_xmm[0].u16[_k] == _s.u16[_k]) ? (uint16_t)~0u : 0; } /* 0x1508F727: pcmpeqw xmm0, xmmword ptr [edi] */
    { uint32_t _m = 0; for (int _k = 0; _k < 16; _k++) _m |= (uint32_t)(_xmm[0].u8[_k] >> 7) << _k; eax = _m; } /* 0x1508F72B: pmovmskb eax, xmm0 */
    /* test eax, eax */ /* 0x1508F72F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F73A; /* 0x1508F731: jne 0x1508f73a */
L_1508F733:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1508F733: add edi, 0x10 */
    _flag_k = FK_ADD;
L_1508F736:
    /* cmp edi, ecx */ /* 0x1508F736: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F724; /* 0x1508F738: jne 0x1508f724 */
L_1508F73A:
    eax = MEM32(ebp + 0xC); /* 0x1508F73A: mov eax, dword ptr [ebp + 0xc] */
    ecx = esi + eax * 2; /* 0x1508F73D: lea ecx, [esi + eax*2] */
    /* cmp edi, ecx */ /* 0x1508F740: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F752; /* 0x1508F742: je 0x1508f752 */
L_1508F744:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F744: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F746:
    /* cmp MEM16(edi), LO16(eax) */ /* 0x1508F746: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F752; /* 0x1508F749: je 0x1508f752 */
L_1508F74B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1508F74B: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp edi, ecx */ /* 0x1508F74E: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F746; /* 0x1508F750: jne 0x1508f746 */
L_1508F752:
    edx = edi; /* 0x1508F752: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x1508F754: sub edx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1508F756: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
L_1508F758:
    edi = POP32_VAL(esp); /* 0x1508F758: pop edi */
L_1508F759:
    eax = edx; /* 0x1508F759: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x1508F75B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F75C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F75D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F770u);

L_1508F770:
    edi = edi; /* 0x1508F770: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F772: push ebp */
    ebp = esp; /* 0x1508F773: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508F775: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508F776: mov esi, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(esi); /* 0x1508F779: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F77C: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F79F; /* 0x1508F77F: je 0x1508f79f */
L_1508F781:
    ecx = eax; /* 0x1508F781: mov ecx, eax */
L_1508F783:
    PUSH32(esp, ecx); /* 0x1508F783: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F784: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1508F1B0); /* 0x1508F787: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508F78C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508F78D: pop ecx */
    /* test eax, eax */ /* 0x1508F78E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F7A4; /* 0x1508F790: jne 0x1508f7a4 */
L_1508F792:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508F792: add esi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x1508F795: movzx eax, word ptr [esi] */
    ecx = eax; /* 0x1508F798: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F79A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F783; /* 0x1508F79D: jne 0x1508f783 */
L_1508F79F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F79F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F7A1:
    esi = POP32_VAL(esp); /* 0x1508F7A1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F7A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F7A3: ret  */
L_1508F7A4:
    eax = esi; /* 0x1508F7A4: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_1508F7A1; /* 0x1508F7A6: jmp 0x1508f7a1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508F7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F7B0u);

L_1508F7B0:
    edi = edi; /* 0x1508F7B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F7B2: push ebp */
    ebp = esp; /* 0x1508F7B3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1508F7B5: push ebx */
    PUSH32(esp, esi); /* 0x1508F7B6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1508F7B7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1508F7BA: push edi */
    SET_LO16(edi, MEM16(ebp + 0xC)); /* 0x1508F7BB: mov di, word ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1508F7BF: push esi */
    ebx = (uint32_t)LO16(edi); /* 0x1508F7C0: movzx ebx, di */
    RECOMP_CALL(sub_1508F320); /* 0x1508F7C3: call 0x1508f320 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508F7C8: pop ecx */
    ecx = esi + 0x2; /* 0x1508F7C9: lea ecx, [esi + 2] */
    ecx = ecx + eax * 2; /* 0x1508F7CC: lea ecx, [ecx + eax*2] */
L_1508F7CF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x1508F7CF: sub ecx, 2 */
    _flag_k = FK_CMP;
    /* cmp ecx, esi */ /* 0x1508F7D2: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F7DF; /* 0x1508F7D4: je 0x1508f7df */
L_1508F7D6:
    /* cmp MEM16(ecx), LO16(edi) */ /* 0x1508F7D6: cmp word ptr [ecx], di */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F7CF; /* 0x1508F7D9: jne 0x1508f7cf */
L_1508F7DB:
    eax = ecx; /* 0x1508F7DB: mov eax, ecx */
    goto L_1508F7E7; /* 0x1508F7DD: jmp 0x1508f7e7 */
L_1508F7DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F7DF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ecx), LO16(ebx) */ /* 0x1508F7E1: cmp word ptr [ecx], bx */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x1508F7E4: cmove eax, ecx */
L_1508F7E7:
    edi = POP32_VAL(esp); /* 0x1508F7E7: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F7E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508F7E9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508F7EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F7EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F800u);

L_1508F800:
    edi = edi; /* 0x1508F800: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F802: push ebp */
    ebp = esp; /* 0x1508F803: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1508F805: push esi */
    PUSH32(esp, edi); /* 0x1508F806: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1508F807: mov edi, dword ptr [ebp + 8] */
    esi = edi; /* 0x1508F80A: mov esi, edi */
    eax = (uint32_t)MEM16(edi); /* 0x1508F80C: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F80F: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F832; /* 0x1508F812: je 0x1508f832 */
L_1508F814:
    ecx = eax; /* 0x1508F814: mov ecx, eax */
L_1508F816:
    PUSH32(esp, ecx); /* 0x1508F816: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F817: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1508F1B0); /* 0x1508F81A: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508F81F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508F820: pop ecx */
    /* test eax, eax */ /* 0x1508F821: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F832; /* 0x1508F823: je 0x1508f832 */
L_1508F825:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508F825: add esi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x1508F828: movzx eax, word ptr [esi] */
    ecx = eax; /* 0x1508F82B: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F82D: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F816; /* 0x1508F830: jne 0x1508f816 */
L_1508F832:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1508F832: sub esi, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1508F834: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    edi = POP32_VAL(esp); /* 0x1508F836: pop edi */
    eax = esi; /* 0x1508F837: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1508F839: pop esi */
    ebp = POP32_VAL(esp); /* 0x1508F83A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F83B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F850u);

L_1508F850:
    edi = edi; /* 0x1508F850: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F852: push ebp */
    ebp = esp; /* 0x1508F853: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1508F855: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F858: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1508F85A: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1508F85B: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp MEM16(ebx), LO16(eax) */ /* 0x1508F85E: cmp word ptr [ebx], ax */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F867; /* 0x1508F861: jne 0x1508f867 */
L_1508F863:
    eax = edx; /* 0x1508F863: mov eax, edx */
    goto L_1508F8A7; /* 0x1508F865: jmp 0x1508f8a7 */
L_1508F867:
    PUSH32(esp, esi); /* 0x1508F867: push esi */
    PUSH32(esp, edi); /* 0x1508F868: push edi */
    /* cmp MEM16(edx), LO16(eax) */ /* 0x1508F869: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F8A3; /* 0x1508F86C: je 0x1508f8a3 */
L_1508F86E:
    edi = edx; /* 0x1508F86E: mov edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1508F870: sub edi, ebx */
    _flag_k = FK_CMP;
L_1508F872:
    esi = ebx; /* 0x1508F872: mov esi, ebx */
L_1508F874:
    eax = (uint32_t)MEM16(esi); /* 0x1508F874: movzx eax, word ptr [esi] */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F877: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F8AA; /* 0x1508F87A: je 0x1508f8aa */
L_1508F87C:
    ecx = (uint32_t)MEM16(edi + esi); /* 0x1508F87C: movzx ecx, word ptr [edi + esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1508F880: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508F891; /* 0x1508F882: jne 0x1508f891 */
L_1508F884:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508F884: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F887: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + esi), LO16(eax) */ /* 0x1508F889: cmp word ptr [edi + esi], ax */
    _flag_a = (uint32_t)(MEM16(edi + esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F874; /* 0x1508F88D: jne 0x1508f874 */
L_1508F88F:
    goto L_1508F893; /* 0x1508F88F: jmp 0x1508f893 */
L_1508F891:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F891: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F893:
    /* cmp MEM16(esi), LO16(eax) */ /* 0x1508F893: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F8AA; /* 0x1508F896: je 0x1508f8aa */
L_1508F898:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1508F898: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1508F89B: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(edx), LO16(eax) */ /* 0x1508F89E: cmp word ptr [edx], ax */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F872; /* 0x1508F8A1: jne 0x1508f872 */
L_1508F8A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F8A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508F8A5:
    edi = POP32_VAL(esp); /* 0x1508F8A5: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F8A6: pop esi */
L_1508F8A7:
    ebx = POP32_VAL(esp); /* 0x1508F8A7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1508F8A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F8A9: ret  */
L_1508F8AA:
    eax = edx; /* 0x1508F8AA: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_1508F8A5; /* 0x1508F8AC: jmp 0x1508f8a5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1508F8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F8C0u);

L_1508F8C0:
    edi = edi; /* 0x1508F8C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F8C2: push ebp */
    ebp = esp; /* 0x1508F8C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1508F8C5: push ecx */
    PUSH32(esp, ebx); /* 0x1508F8C6: push ebx */
    PUSH32(esp, esi); /* 0x1508F8C7: push esi */
    PUSH32(esp, edi); /* 0x1508F8C8: push edi */
    RECOMP_CALL(sub_15068820); /* 0x1508F8C9: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1508F8CE: mov esi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x1508F8D1: mov ebx, eax */
    /* test esi, esi */ /* 0x1508F8D3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F8DA; /* 0x1508F8D5: jne 0x1508f8da */
L_1508F8D7:
    esi = MEM32(ebx + 0x1C); /* 0x1508F8D7: mov esi, dword ptr [ebx + 0x1c] */
L_1508F8DA:
    ecx = (uint32_t)MEM16(esi); /* 0x1508F8DA: movzx ecx, word ptr [esi] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x1508F8DD: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F8FE; /* 0x1508F8E0: je 0x1508f8fe */
L_1508F8E2:
    PUSH32(esp, ecx); /* 0x1508F8E2: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F8E3: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1508F1B0); /* 0x1508F8E6: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508F8EB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508F8EC: pop ecx */
    /* test eax, eax */ /* 0x1508F8ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F8FE; /* 0x1508F8EF: je 0x1508f8fe */
L_1508F8F1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1508F8F1: add esi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi); /* 0x1508F8F4: movzx eax, word ptr [esi] */
    ecx = eax; /* 0x1508F8F7: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F8F9: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F8E2; /* 0x1508F8FC: jne 0x1508f8e2 */
L_1508F8FE:
    eax = (uint32_t)MEM16(esi); /* 0x1508F8FE: movzx eax, word ptr [esi] */
    edi = esi; /* 0x1508F901: mov edi, esi */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F903: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F936; /* 0x1508F906: je 0x1508f936 */
L_1508F908:
    ecx = eax; /* 0x1508F908: mov ecx, eax */
L_1508F90A:
    PUSH32(esp, ecx); /* 0x1508F90A: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1508F90B: push dword ptr [ebp + 0xc] */
    eax = esi + 0x2; /* 0x1508F90E: lea eax, [esi + 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508F911: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1508F1B0); /* 0x1508F914: call 0x1508f1b0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1508F919: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1508F91A: pop ecx */
    /* test eax, eax */ /* 0x1508F91B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F92E; /* 0x1508F91D: jne 0x1508f92e */
L_1508F91F:
    esi = MEM32(ebp + (-0x4)); /* 0x1508F91F: mov esi, dword ptr [ebp - 4] */
    eax = (uint32_t)MEM16(esi); /* 0x1508F922: movzx eax, word ptr [esi] */
    ecx = eax; /* 0x1508F925: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F927: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F90A; /* 0x1508F92A: jne 0x1508f90a */
L_1508F92C:
    goto L_1508F936; /* 0x1508F92C: jmp 0x1508f936 */
L_1508F92E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F92E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1508F930: mov word ptr [esi], ax */
    esi = MEM32(ebp + (-0x4)); /* 0x1508F933: mov esi, dword ptr [ebp - 4] */
L_1508F936:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F936: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x1C) = esi; /* 0x1508F938: mov dword ptr [ebx + 0x1c], esi */
    /* cmp edi, esi */ /* 0x1508F93B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { edi = eax; } /* 0x1508F93D: cmove edi, eax */
    eax = edi; /* 0x1508F940: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1508F942: pop edi */
    esi = POP32_VAL(esp); /* 0x1508F943: pop esi */
    ebx = POP32_VAL(esp); /* 0x1508F944: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508F945: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508F946: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508F950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508F950u);

L_1508F950:
    edi = edi; /* 0x1508F950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508F952: push ebp */
    ebp = esp; /* 0x1508F953: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x1508F955: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1508F958: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1508F95B: push esi */
    /* test edx, edx */ /* 0x1508F95C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F981; /* 0x1508F95E: jne 0x1508f981 */
L_1508F960:
    RECOMP_CALL(sub_15036430); /* 0x1508F960: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F965: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1508F967: push esi */
    PUSH32(esp, esi); /* 0x1508F968: push esi */
    PUSH32(esp, esi); /* 0x1508F969: push esi */
    PUSH32(esp, esi); /* 0x1508F96A: push esi */
    PUSH32(esp, esi); /* 0x1508F96B: push esi */
    MEM32(eax) = 0x16u; /* 0x1508F96C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508F972: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508F977: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F97A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508FA78; /* 0x1508F97C: jmp 0x1508fa78 */
L_1508F981:
    PUSH32(esp, edi); /* 0x1508F981: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1508F982: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1508F985: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F992; /* 0x1508F987: jne 0x1508f992 */
L_1508F989:
    RECOMP_CALL(sub_15036430); /* 0x1508F989: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F98E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508F9A4; /* 0x1508F990: jmp 0x1508f9a4 */
L_1508F992:
    ecx = MEM32(ebp + 0x8); /* 0x1508F992: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F995: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1508F997: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F9C0; /* 0x1508F999: jne 0x1508f9c0 */
L_1508F99B:
    /* cmp MEM32(edx), esi */ /* 0x1508F99B: cmp dword ptr [edx], esi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508F9BE; /* 0x1508F99D: jne 0x1508f9be */
L_1508F99F:
    RECOMP_CALL(sub_15036430); /* 0x1508F99F: call 0x15036430 */
    RECOMP_FLAGS_IN();
L_1508F9A4:
    PUSH32(esp, esi); /* 0x1508F9A4: push esi */
    PUSH32(esp, esi); /* 0x1508F9A5: push esi */
    PUSH32(esp, esi); /* 0x1508F9A6: push esi */
    PUSH32(esp, esi); /* 0x1508F9A7: push esi */
    PUSH32(esp, esi); /* 0x1508F9A8: push esi */
    MEM32(eax) = 0x16u; /* 0x1508F9A9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1508F9AF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1508F9B4: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508F9B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508FA77; /* 0x1508F9B9: jmp 0x1508fa77 */
L_1508F9BE:
    ecx = MEM32(edx); /* 0x1508F9BE: mov ecx, dword ptr [edx] */
L_1508F9C0:
    eax = (uint32_t)MEM16(ecx); /* 0x1508F9C0: movzx eax, word ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1508F9C3: push ebx */
    ebx = eax; /* 0x1508F9C4: mov ebx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F9C6: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FA01; /* 0x1508F9C9: je 0x1508fa01 */
L_1508F9CB:
    esi = (uint32_t)MEM16(edi); /* 0x1508F9CB: movzx esi, word ptr [edi] */
L_1508F9CE:
    eax = edi; /* 0x1508F9CE: mov eax, edi */
    /* test LO16(esi), LO16(esi) */ /* 0x1508F9D0: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F9FC; /* 0x1508F9D3: je 0x1508f9fc */
L_1508F9D5:
    edx = esi; /* 0x1508F9D5: mov edx, esi */
L_1508F9D7:
    /* cmp LO16(edx), LO16(ebx) */ /* 0x1508F9D7: cmp dx, bx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508F9F1; /* 0x1508F9DA: je 0x1508f9f1 */
L_1508F9DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1508F9DC: add eax, 2 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x1508F9DF: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(eax); /* 0x1508F9E2: movzx eax, word ptr [eax] */
    edx = eax; /* 0x1508F9E5: mov edx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1508F9E7: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508F9FC; /* 0x1508F9EA: je 0x1508f9fc */
L_1508F9EC:
    eax = MEM32(ebp + (-0x4)); /* 0x1508F9EC: mov eax, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_1508F9D7; /* 0x1508F9EF: jmp 0x1508f9d7 */
L_1508F9F1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508F9F1: add ecx, 2 */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM16(ecx); /* 0x1508F9F4: movzx ebx, word ptr [ecx] */
    /* test LO16(ebx), LO16(ebx) */ /* 0x1508F9F7: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508F9CE; /* 0x1508F9FA: jne 0x1508f9ce */
L_1508F9FC:
    edx = MEM32(ebp + 0x10); /* 0x1508F9FC: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508F9FF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1508FA01:
    ebx = ecx; /* 0x1508FA01: mov ebx, ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1508FA03: mov dword ptr [ebp - 0xc], ebx */
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1508FA06: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FA6B; /* 0x1508FA09: je 0x1508fa6b */
L_1508FA0B:
    eax = (uint32_t)MEM16(edi); /* 0x1508FA0B: movzx eax, word ptr [edi] */
L_1508FA0E:
    eax = (uint32_t)LO16(eax); /* 0x1508FA0E: movzx eax, ax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508FA11: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(edi); /* 0x1508FA14: movzx eax, word ptr [edi] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1508FA17: mov dword ptr [ebp - 8], edi */
    /* test LO16(eax), LO16(eax) */ /* 0x1508FA1A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FA4F; /* 0x1508FA1D: je 0x1508fa4f */
L_1508FA1F:
    esi = (uint32_t)MEM16(ecx); /* 0x1508FA1F: movzx esi, word ptr [ecx] */
    edi = eax; /* 0x1508FA22: mov edi, eax */
    ebx = MEM32(ebp + (-0x8)); /* 0x1508FA24: mov ebx, dword ptr [ebp - 8] */
L_1508FA27:
    eax = (uint32_t)LO16(edi); /* 0x1508FA27: movzx eax, di */
    MEM32(ebp + (-0x4)) = eax; /* 0x1508FA2A: mov dword ptr [ebp - 4], eax */
    /* cmp LO16(edi), LO16(esi) */ /* 0x1508FA2D: cmp di, si */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FA44; /* 0x1508FA30: je 0x1508fa44 */
L_1508FA32:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1508FA32: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(ebx); /* 0x1508FA35: movzx eax, word ptr [ebx] */
    edx = eax; /* 0x1508FA38: mov edx, eax */
    edi = eax; /* 0x1508FA3A: mov edi, eax */
    MEM32(ebp + (-0x4)) = edx; /* 0x1508FA3C: mov dword ptr [ebp - 4], edx */
    /* test LO16(eax), LO16(eax) */ /* 0x1508FA3F: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1508FA27; /* 0x1508FA42: jne 0x1508fa27 */
L_1508FA44:
    edx = MEM32(ebp + 0x10); /* 0x1508FA44: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508FA47: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0xC); /* 0x1508FA49: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + (-0xC)); /* 0x1508FA4C: mov ebx, dword ptr [ebp - 0xc] */
L_1508FA4F:
    /* cmp MEM16(ebp + (-0x4)), 0 */ /* 0x1508FA4F: cmp word ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508FA63; /* 0x1508FA54: jne 0x1508fa63 */
L_1508FA56:
    eax = (uint32_t)MEM16(edi); /* 0x1508FA56: movzx eax, word ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508FA59: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM16(ecx), LO16(esi) */ /* 0x1508FA5C: cmp word ptr [ecx], si */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508FA0E; /* 0x1508FA5F: jne 0x1508fa0e */
L_1508FA61:
    goto L_1508FA6B; /* 0x1508FA61: jmp 0x1508fa6b */
L_1508FA63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1508FA63: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx) = (uint16_t)(LO16(esi)); /* 0x1508FA65: mov word ptr [ecx], si */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1508FA68: add ecx, 2 */
    _flag_k = FK_ADD;
L_1508FA6B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508FA6B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx) = ecx; /* 0x1508FA6D: mov dword ptr [edx], ecx */
    /* cmp ebx, ecx */ /* 0x1508FA6F: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { ebx = eax; } /* 0x1508FA71: cmove ebx, eax */
    eax = ebx; /* 0x1508FA74: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1508FA76: pop ebx */
L_1508FA77:
    edi = POP32_VAL(esp); /* 0x1508FA77: pop edi */
L_1508FA78:
    esi = POP32_VAL(esp); /* 0x1508FA78: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508FA79: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FA7A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508FA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508FA90u);

L_1508FA90:
    PUSH32(esp, ebp); /* 0x1508FA90: push ebp */
    ebp = esp; /* 0x1508FA91: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1508FA93: push edi */
    PUSH32(esp, esi); /* 0x1508FA94: push esi */
    PUSH32(esp, ebx); /* 0x1508FA95: push ebx */
    ecx = MEM32(ebp + 0x10); /* 0x1508FA96: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((ecx | ecx)); _flag_b = (uint32_t)((ecx | ecx));
    ecx = ecx | ecx; /* 0x1508FA99: or ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FAE2; /* 0x1508FA9B: je 0x1508fae2 */
L_1508FA9D:
    esi = MEM32(ebp + 0x8); /* 0x1508FA9D: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x1508FAA0: mov edi, dword ptr [ebp + 0xc] */
    SET_HI8(ebx, 0x41u); /* 0x1508FAA3: mov bh, 0x41 */
    SET_LO8(ebx, 0x5Au); /* 0x1508FAA5: mov bl, 0x5a */
    SET_HI8(edx, 0x20u); /* 0x1508FAA7: mov dh, 0x20 */
    ecx = ecx; /* 0x1508FAA9: lea ecx, [ecx] */
L_1508FAAC:
    SET_HI8(eax, MEM8(esi)); /* 0x1508FAAC: mov ah, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 1; /* 0x1508FAAE: add esi, 1 */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(edi)); /* 0x1508FAB1: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 1; /* 0x1508FAB3: add edi, 1 */
    _flag_k = FK_ADD;
    /* cmp HI8(eax), LO8(eax) */ /* 0x1508FAB6: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FAD2; /* 0x1508FAB8: je 0x1508fad2 */
L_1508FABA:
    /* cmp HI8(eax), HI8(ebx) */ /* 0x1508FABA: cmp ah, bh */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1508FAC4; /* 0x1508FABC: jb 0x1508fac4 */
L_1508FABE:
    /* cmp HI8(eax), LO8(ebx) */ /* 0x1508FABE: cmp ah, bl */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508FAC4; /* 0x1508FAC0: ja 0x1508fac4 */
L_1508FAC2:
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(eax, HI8(eax) + HI8(edx)); /* 0x1508FAC2: add ah, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1508FAC4:
    /* cmp LO8(eax), HI8(ebx) */ /* 0x1508FAC4: cmp al, bh */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1508FACE; /* 0x1508FAC6: jb 0x1508face */
L_1508FAC8:
    /* cmp LO8(eax), LO8(ebx) */ /* 0x1508FAC8: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1508FACE; /* 0x1508FACA: ja 0x1508face */
L_1508FACC:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + HI8(edx)); /* 0x1508FACC: add al, dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1508FACE:
    /* cmp HI8(eax), LO8(eax) */ /* 0x1508FACE: cmp ah, al */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1508FAD9; /* 0x1508FAD0: jne 0x1508fad9 */
L_1508FAD2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1508FAD2: sub ecx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1508FAAC; /* 0x1508FAD5: jne 0x1508faac */
L_1508FAD7:
    goto L_1508FAE2; /* 0x1508FAD7: jmp 0x1508fae2 */
L_1508FAD9:
    ecx = 0xFFFFFFFFu; /* 0x1508FAD9: mov ecx, 0xffffffff */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1508FAE2; /* 0x1508FADE: jb 0x1508fae2 */
L_1508FAE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1508FAE0: neg ecx */
    _flag_k = FK_CMP;
L_1508FAE2:
    eax = ecx; /* 0x1508FAE2: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1508FAE4: pop ebx */
    esi = POP32_VAL(esp); /* 0x1508FAE5: pop esi */
    edi = POP32_VAL(esp); /* 0x1508FAE6: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1508FAE7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FAE8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508FAF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508FAF0u);

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

void sub_1508FB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508FB50u);

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

void sub_1508FBB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508FBB7u);

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
    RECOMP_REGS_OUT();
}

void sub_1508FCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508FCA0u);

L_1508FCA0:
    PUSH32(esp, ebp); /* 0x1508FCA0: push ebp */
    ebp = esp; /* 0x1508FCA1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x1508FCA3: sub esp, 8 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1508FCA6: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = esi; /* 0x1508FCA9: mov dword ptr [ebp - 8], esi */
    esi = MEM32(ebp + 0xC); /* 0x1508FCAC: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1508FCAF: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1508FCB2: mov ecx, dword ptr [ebp + 0x10] */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x1508FCB5: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x1508FCB5: shr ecx, 7 */
    /* nop */ /* 0x1508FCB8: nop dword ptr [eax + eax] */
L_1508FCC0:
    _xmm[0] = xmm_ld(esi); /* 0x1508FCC0: movdqa xmm0, xmmword ptr [esi] */
    _xmm[1] = xmm_ld(esi + 0x10); /* 0x1508FCC4: movdqa xmm1, xmmword ptr [esi + 0x10] */
    _xmm[2] = xmm_ld(esi + 0x20); /* 0x1508FCC9: movdqa xmm2, xmmword ptr [esi + 0x20] */
    _xmm[3] = xmm_ld(esi + 0x30); /* 0x1508FCCE: movdqa xmm3, xmmword ptr [esi + 0x30] */
    xmm_st(edi, _xmm[0]); /* 0x1508FCD3: movdqa xmmword ptr [edi], xmm0 */
    xmm_st(edi + 0x10, _xmm[1]); /* 0x1508FCD7: movdqa xmmword ptr [edi + 0x10], xmm1 */
    xmm_st(edi + 0x20, _xmm[2]); /* 0x1508FCDC: movdqa xmmword ptr [edi + 0x20], xmm2 */
    xmm_st(edi + 0x30, _xmm[3]); /* 0x1508FCE1: movdqa xmmword ptr [edi + 0x30], xmm3 */
    _xmm[4] = xmm_ld(esi + 0x40); /* 0x1508FCE6: movdqa xmm4, xmmword ptr [esi + 0x40] */
    _xmm[5] = xmm_ld(esi + 0x50); /* 0x1508FCEB: movdqa xmm5, xmmword ptr [esi + 0x50] */
    _xmm[6] = xmm_ld(esi + 0x60); /* 0x1508FCF0: movdqa xmm6, xmmword ptr [esi + 0x60] */
    _xmm[7] = xmm_ld(esi + 0x70); /* 0x1508FCF5: movdqa xmm7, xmmword ptr [esi + 0x70] */
    xmm_st(edi + 0x40, _xmm[4]); /* 0x1508FCFA: movdqa xmmword ptr [edi + 0x40], xmm4 */
    xmm_st(edi + 0x50, _xmm[5]); /* 0x1508FCFF: movdqa xmmword ptr [edi + 0x50], xmm5 */
    xmm_st(edi + 0x60, _xmm[6]); /* 0x1508FD04: movdqa xmmword ptr [edi + 0x60], xmm6 */
    xmm_st(edi + 0x70, _xmm[7]); /* 0x1508FD09: movdqa xmmword ptr [edi + 0x70], xmm7 */
    esi = esi + 0x80; /* 0x1508FD0E: lea esi, [esi + 0x80] */
    edi = edi + 0x80; /* 0x1508FD14: lea edi, [edi + 0x80] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1508FD1A: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1508FCC0; /* 0x1508FD1B: jne 0x1508fcc0 */
L_1508FD1D:
    esi = MEM32(ebp + (-0x8)); /* 0x1508FD1D: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x1508FD20: mov edi, dword ptr [ebp - 4] */
    esp = ebp; /* 0x1508FD23: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1508FD25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FD26: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508FD2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508FD2Du);

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

void sub_1508FDC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508FDC2u);

L_1508FDC2:
    PUSH32(esp, ebp); /* 0x1508FDC2: push ebp */
    ebp = esp; /* 0x1508FDC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 4; /* 0x1508FDC5: sub esp, 4 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1508FDC8: mov dword ptr [ebp - 4], edi */
    edi = MEM32(ebp + 0x8); /* 0x1508FDCB: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1508FDCE: mov ecx, dword ptr [ebp + 0xc] */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x1508FDD1: shr ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 7u; /* 0x1508FDD1: shr ecx, 7 */
    { xmm_t _s = _xmm[0]; for (int _k = 0; _k < 4; _k++) _xmm[0].u32[_k] = _xmm[0].u32[_k] ^ _s.u32[_k]; } /* 0x1508FDD4: pxor xmm0, xmm0 */
    /* nop */ /* 0x1508FDD8: nop word ptr [eax + eax] */
L_1508FDE2:
    xmm_st(edi, _xmm[0]); /* 0x1508FDE2: movdqa xmmword ptr [edi], xmm0 */
    xmm_st(edi + 0x10, _xmm[0]); /* 0x1508FDE6: movdqa xmmword ptr [edi + 0x10], xmm0 */
    xmm_st(edi + 0x20, _xmm[0]); /* 0x1508FDEB: movdqa xmmword ptr [edi + 0x20], xmm0 */
    xmm_st(edi + 0x30, _xmm[0]); /* 0x1508FDF0: movdqa xmmword ptr [edi + 0x30], xmm0 */
    xmm_st(edi + 0x40, _xmm[0]); /* 0x1508FDF5: movdqa xmmword ptr [edi + 0x40], xmm0 */
    xmm_st(edi + 0x50, _xmm[0]); /* 0x1508FDFA: movdqa xmmword ptr [edi + 0x50], xmm0 */
    xmm_st(edi + 0x60, _xmm[0]); /* 0x1508FDFF: movdqa xmmword ptr [edi + 0x60], xmm0 */
    xmm_st(edi + 0x70, _xmm[0]); /* 0x1508FE04: movdqa xmmword ptr [edi + 0x70], xmm0 */
    edi = edi + 0x80; /* 0x1508FE09: lea edi, [edi + 0x80] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1508FE0F: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1508FDE2; /* 0x1508FE10: jne 0x1508fde2 */
L_1508FE12:
    edi = MEM32(ebp + (-0x4)); /* 0x1508FE12: mov edi, dword ptr [ebp - 4] */
    esp = ebp; /* 0x1508FE15: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1508FE17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1508FE18: ret  */
    RECOMP_REGS_OUT();
}

void sub_1508FE1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1508FE1Fu);

L_1508FE1F:
    edi = edi; /* 0x1508FE1F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1508FE21: push ebp */
    ebp = esp; /* 0x1508FE22: mov ebp, esp */
    eax = (int32_t)(int8_t)MEM8(ebp + 0xC); /* 0x1508FE24: movsx eax, byte ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1508FE28: push ebx */
    PUSH32(esp, esi); /* 0x1508FE29: push esi */
    PUSH32(esp, edi); /* 0x1508FE2A: push edi */
    /* cmp eax, 0x59u */ /* 0x1508FE2B: cmp eax, 0x59 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15090003; /* 0x1508FE2E: jg 0x15090003 */
L_1508FE34:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FFCC; /* 0x1508FE34: je 0x1508ffcc */
L_1508FE3A:
    /* cmp eax, 0x49u */ /* 0x1508FE3A: cmp eax, 0x49 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1508FF14; /* 0x1508FE3D: jg 0x1508ff14 */
L_1508FE43:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1508FEE9; /* 0x1508FE43: je 0x1508fee9 */
L_1508FE49:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x1508FE49: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090244; /* 0x1508FE4C: je 0x15090244 */
L_1508FE52:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 9; /* 0x1508FE52: sub eax, 9 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090244; /* 0x1508FE55: je 0x15090244 */
L_1508FE5B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x18u; /* 0x1508FE5B: sub eax, 0x18 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508FED5; /* 0x1508FE5E: je 0x1508fed5 */
L_1508FE60:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Cu; /* 0x1508FE60: sub eax, 0x1c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508FEB4; /* 0x1508FE63: je 0x1508feb4 */
L_1508FE65:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1508FE65: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508FE93; /* 0x1508FE68: je 0x1508fe93 */
L_1508FE6A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x1508FE6A: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1509014A; /* 0x1508FE6D: jne 0x1509014a */
L_1508FE73:
    eax = MEM32(ebp + 0x10); /* 0x1508FE73: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x1508FE76: mov eax, dword ptr [eax + 8] */
    /* cmp eax, 0x17u */ /* 0x1508FE79: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1508FE7C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_15090130; /* 0x1508FE7C: ja 0x15090130 */
L_1508FE82:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1508FE82: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1508FE85: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508FE88: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1508FE8B: push 2 */
L_1508FE8D:
    PUSH32(esp, eax); /* 0x1508FE8D: push eax */
    goto L_15090080; /* 0x1508FE8E: jmp 0x15090080 */
L_1508FE93:
    eax = MEM32(ebp + 0x10); /* 0x1508FE93: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x1508FE96: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 0xBu */ /* 0x1508FE99: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1508FE9C: ja 0x15090130 */
L_1508FEA2:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1508FEA2: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1508FEA5: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508FEA8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0x68)); /* 0x1508FEAB: push dword ptr [eax + ecx*4 + 0x68] */
    goto L_1509023C; /* 0x1508FEAF: jmp 0x1509023c */
L_1508FEB4:
    eax = MEM32(ebp + 0x10); /* 0x1508FEB4: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x18); /* 0x1508FEB7: mov ecx, dword ptr [eax + 0x18] */
    /* cmp ecx, 6 */ /* 0x1508FEBA: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1508FEBD: ja 0x15090130 */
L_1508FEC3:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1508FEC3: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1508FEC6: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508FEC9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0x1C)); /* 0x1508FECC: push dword ptr [eax + ecx*4 + 0x1c] */
    goto L_1509023C; /* 0x1508FED0: jmp 0x1509023c */
L_1508FED5:
    ecx = MEM32(ebp + 0x14); /* 0x1508FED5: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ecx); /* 0x1508FED8: mov eax, dword ptr [ecx] */
    MEM8(eax) = (uint8_t)(0x25u); /* 0x1508FEDA: mov byte ptr [eax], 0x25 */
    eax = MEM32(ebp + 0x18); /* 0x1508FEDD: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1508FEE0: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1508FEE2: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    goto L_15090244; /* 0x1508FEE4: jmp 0x15090244 */
L_1508FEE9:
    eax = MEM32(ebp + 0x10); /* 0x1508FEE9: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x1508FEEC: mov eax, dword ptr [eax + 8] */
    /* cmp eax, 0x17u */ /* 0x1508FEEF: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1508FEF2: ja 0x15090130 */
L_1508FEF8:
    PUSH32(esp, 0xCu); /* 0x1508FEF8: push 0xc */
    ecx = POP32_VAL(esp); /* 0x1508FEFA: pop ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1508FEFB: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1508FEFC: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1508FEFE: push dword ptr [ebp + 0x20] */
    /* test edx, edx */ /* 0x1508FF01: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1508FF03: push dword ptr [ebp + 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) { edx = ecx; } /* 0x1508FF06: cmove edx, ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508FF09: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1508FF0C: push 2 */
L_1508FF0E:
    PUSH32(esp, edx); /* 0x1508FF0E: push edx */
    goto L_15090080; /* 0x1508FF0F: jmp 0x15090080 */
L_1508FF14:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Du; /* 0x1508FF14: sub eax, 0x4d */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508FFBE; /* 0x1508FF17: je 0x1508ffbe */
L_1508FF1D:
    PUSH32(esp, 6); /* 0x1508FF1D: push 6 */
    ecx = POP32_VAL(esp); /* 0x1508FF1F: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1508FF20: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508FFB7; /* 0x1508FF22: je 0x1508ffb7 */
L_1508FF28:
    PUSH32(esp, 2); /* 0x1508FF28: push 2 */
    edi = POP32_VAL(esp); /* 0x1508FF2A: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1508FF2B: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508FF78; /* 0x1508FF2D: je 0x1508ff78 */
L_1508FF2F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1508FF2F: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1508FF61; /* 0x1508FF31: je 0x1508ff61 */
L_1508FF33:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1508FF33: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1509014A; /* 0x1508FF36: jne 0x1509014a */
L_1508FF3C:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1508FF3C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1508FF3F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508FF42: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1508FF45: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1508FF48: push edi */
L_1508FF49:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1508FF49: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1509034B); /* 0x1508FF4C: call 0x1509034b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1508FF51: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1508FF54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509014A; /* 0x1508FF56: je 0x1509014a */
L_1508FF5C:
    goto L_15090244; /* 0x1508FF5C: jmp 0x15090244 */
L_1508FF61:
    eax = MEM32(ebp + 0x10); /* 0x1508FF61: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(eax + 0x18); /* 0x1508FF64: mov edx, dword ptr [eax + 0x18] */
    /* cmp edx, ecx */ /* 0x1508FF67: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1508FF69: ja 0x15090130 */
L_1508FF6F:
    /* test edx, edx */ /* 0x1508FF6F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1508FF87; /* 0x1508FF71: je 0x1508ff87 */
L_1508FF73:
    ecx = edx + (-0x1); /* 0x1508FF73: lea ecx, [edx - 1] */
    goto L_1508FF87; /* 0x1508FF76: jmp 0x1508ff87 */
L_1508FF78:
    eax = MEM32(ebp + 0x10); /* 0x1508FF78: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax + 0x18), ecx */ /* 0x1508FF7B: cmp dword ptr [eax + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1508FF7E: ja 0x15090130 */
L_1508FF84:
    ecx = MEM32(eax + 0x18); /* 0x1508FF84: mov ecx, dword ptr [eax + 0x18] */
L_1508FF87:
    eax = MEM32(eax + 0x1C); /* 0x1508FF87: mov eax, dword ptr [eax + 0x1c] */
    /* cmp eax, 0x16Du */ /* 0x1508FF8A: cmp eax, 0x16d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1508FF8F: ja 0x15090130 */
L_1508FF95:
    /* cmp eax, ecx */ /* 0x1508FF95: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1508FF9D; /* 0x1508FF97: jge 0x1508ff9d */
L_1508FF99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1508FF99: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1508FFA8; /* 0x1508FF9B: jmp 0x1508ffa8 */
L_1508FF9D:
    PUSH32(esp, 7); /* 0x1508FF9D: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1508FF9F: cdq  */
    esi = POP32_VAL(esp); /* 0x1508FFA0: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x1508FFA1: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, ecx */ /* 0x1508FFA3: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1508FFA8; /* 0x1508FFA5: jl 0x1508ffa8 */
L_1508FFA7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1508FFA7: inc eax */
    _flag_k = FK_INC;
L_1508FFA8:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1508FFA8: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1508FFAB: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508FFAE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1508FFB1: push edi */
    RECOMP_BACKEDGE();
    goto L_1508FE8D; /* 0x1508FFB2: jmp 0x1508fe8d */
L_1508FFB7:
    eax = MEM32(ebp + 0x10); /* 0x1508FFB7: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x1508FFBA: mov eax, dword ptr [eax] */
    goto L_1508FFC4; /* 0x1508FFBC: jmp 0x1508ffc4 */
L_1508FFBE:
    eax = MEM32(ebp + 0x10); /* 0x1508FFBE: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x1508FFC1: mov eax, dword ptr [eax + 4] */
L_1508FFC4:
    /* cmp eax, 0x3Bu */ /* 0x1508FFC4: cmp eax, 0x3b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1508FE7C; /* 0x1508FFC7: jmp 0x1508fe7c */
L_1508FFCC:
    eax = MEM32(ebp + 0x10); /* 0x1508FFCC: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x14); /* 0x1508FFCF: mov ecx, dword ptr [eax + 0x14] */
    eax = ecx + 0x76C; /* 0x1508FFD2: lea eax, [ecx + 0x76c] */
    /* cmp eax, 0x270Fu */ /* 0x1508FFD8: cmp eax, 0x270f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x270Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1508FFDD: ja 0x15090130 */
L_1508FFE3:
    PUSH32(esp, 0x64u); /* 0x1508FFE3: push 0x64 */
    eax = ecx; /* 0x1508FFE5: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x1508FFE7: pop ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1508FFE8: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1508FFE9: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1508FFEB: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x13u; /* 0x1508FFEE: add eax, 0x13 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1508FFF1: push dword ptr [ebp + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x1508FFF4: imul eax, eax, 0x64 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1508FFF7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 4); /* 0x1508FFFA: push 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1508FFFC: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1508FE8D; /* 0x1508FFFE: jmp 0x1508fe8d */
L_15090003:
    /* cmp eax, 0x6Du */ /* 0x15090003: cmp eax, 0x6d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15090173; /* 0x15090006: jg 0x15090173 */
L_1509000C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090162; /* 0x1509000C: je 0x15090162 */
L_15090012:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x5Au; /* 0x15090012: sub eax, 0x5a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090190; /* 0x15090015: je 0x15090190 */
L_1509001B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x1509001B: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090125; /* 0x1509001E: je 0x15090125 */
L_15090024:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090024: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090108; /* 0x15090027: je 0x15090108 */
L_1509002D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509002D: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509008D; /* 0x15090030: je 0x1509008d */
L_15090032:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090032: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090062; /* 0x15090035: je 0x15090062 */
L_15090037:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x15090037: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1509014A; /* 0x1509003A: jne 0x1509014a */
L_15090040:
    eax = MEM32(ebp + 0x10); /* 0x15090040: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x1C); /* 0x15090043: mov eax, dword ptr [eax + 0x1c] */
    /* cmp eax, 0x16Du */ /* 0x15090046: cmp eax, 0x16d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1509004B: ja 0x15090130 */
L_15090051:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15090051: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15090054: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15090055: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090058: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 3); /* 0x1509005B: push 3 */
    RECOMP_BACKEDGE();
    goto L_1508FE8D; /* 0x1509005D: jmp 0x1508fe8d */
L_15090062:
    eax = MEM32(ebp + 0x10); /* 0x15090062: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0xC); /* 0x15090065: mov ecx, dword ptr [eax + 0xc] */
    eax = ecx + (-0x1); /* 0x15090068: lea eax, [ecx - 1] */
    /* cmp eax, 0x1Eu */ /* 0x1509006B: cmp eax, 0x1e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1509006E: ja 0x15090130 */
L_15090074:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15090074: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15090077: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509007A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1509007D: push 2 */
    PUSH32(esp, ecx); /* 0x1509007F: push ecx */
L_15090080:
    RECOMP_CALL(sub_15090252); /* 0x15090080: call 0x15090252 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090085: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15090244; /* 0x15090088: jmp 0x15090244 */
L_1509008D:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1509008D: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15090091: push dword ptr [ebp + 0x1c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150900D7; /* 0x15090094: je 0x150900d7 */
L_15090096:
    esi = MEM32(ebp + 0x18); /* 0x15090096: mov esi, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0x14); /* 0x15090099: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1509009C: push esi */
    PUSH32(esp, edi); /* 0x1509009D: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1509009E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x150900A1: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150900A3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1509034B); /* 0x150900A6: call 0x1509034b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150900AB: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150900AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509014A; /* 0x150900B0: je 0x1509014a */
L_150900B6:
    /* cmp MEM32(esi), 0 */ /* 0x150900B6: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509014A; /* 0x150900B9: je 0x1509014a */
L_150900BF:
    eax = MEM32(edi); /* 0x150900BF: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150900C1: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x150900C4: push esi */
    MEM8(eax) = (uint8_t)(0x20u); /* 0x150900C5: mov byte ptr [eax], 0x20 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x150900C8: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x150900CA: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x150900CC: push edi */
L_150900CD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150900CD: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x150900D0: push 2 */
    RECOMP_BACKEDGE();
    goto L_1508FF49; /* 0x150900D2: jmp 0x1508ff49 */
L_150900D7:
    edi = MEM32(ebp + 0x18); /* 0x150900D7: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150900DA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x14); /* 0x150900DC: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x150900DF: push edi */
    PUSH32(esp, ebx); /* 0x150900E0: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150900E1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x150900E4: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150900E5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1509034B); /* 0x150900E8: call 0x1509034b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150900ED: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150900F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509014A; /* 0x150900F2: je 0x1509014a */
L_150900F4:
    /* cmp MEM32(edi), esi */ /* 0x150900F4: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509014A; /* 0x150900F6: je 0x1509014a */
L_150900F8:
    eax = MEM32(ebx); /* 0x150900F8: mov eax, dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150900FA: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x150900FD: push edi */
    MEM8(eax) = (uint8_t)(0x20u); /* 0x150900FE: mov byte ptr [eax], 0x20 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) + 1; /* 0x15090101: inc dword ptr [ebx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) - 1; /* 0x15090103: dec dword ptr [edi] */
    _flag_k = FK_DEC;
    PUSH32(esp, ebx); /* 0x15090105: push ebx */
    RECOMP_BACKEDGE();
    goto L_150900CD; /* 0x15090106: jmp 0x150900cd */
L_15090108:
    eax = MEM32(ebp + 0x10); /* 0x15090108: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x1509010B: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 0xBu */ /* 0x1509010E: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x15090111: ja 0x15090130 */
L_15090113:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15090113: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x15090116: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090119: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0x38)); /* 0x1509011C: push dword ptr [eax + ecx*4 + 0x38] */
    goto L_1509023C; /* 0x15090120: jmp 0x1509023c */
L_15090125:
    eax = MEM32(ebp + 0x10); /* 0x15090125: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x18); /* 0x15090128: mov ecx, dword ptr [eax + 0x18] */
    /* cmp ecx, 6 */ /* 0x1509012B: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15090151; /* 0x1509012E: jbe 0x15090151 */
L_15090130:
    RECOMP_CALL(sub_15036430); /* 0x15090130: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15090135: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15090137: push esi */
    PUSH32(esp, esi); /* 0x15090138: push esi */
    PUSH32(esp, esi); /* 0x15090139: push esi */
    PUSH32(esp, esi); /* 0x1509013A: push esi */
    PUSH32(esp, esi); /* 0x1509013B: push esi */
    MEM32(eax) = 0x16u; /* 0x1509013C: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15090142: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090147: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1509014A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509014A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15090247; /* 0x1509014C: jmp 0x15090247 */
L_15090151:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15090151: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x15090154: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090157: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x1509015A: push dword ptr [eax + ecx*4] */
    goto L_1509023C; /* 0x1509015D: jmp 0x1509023c */
L_15090162:
    eax = MEM32(ebp + 0x10); /* 0x15090162: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x10); /* 0x15090165: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, 0xBu */ /* 0x15090168: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x1509016B: ja 0x15090130 */
L_1509016D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1509016D: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1508FE82; /* 0x1509016E: jmp 0x1508fe82 */
L_15090173:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x15090173: sub eax, 0x70 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509020E; /* 0x15090176: je 0x1509020e */
L_1509017C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x1509017C: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150901EF; /* 0x1509017F: je 0x150901ef */
L_15090181:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090181: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150901CF; /* 0x15090184: je 0x150901cf */
L_15090186:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090186: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150901B3; /* 0x15090189: je 0x150901b3 */
L_1509018B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509018B: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1509014A; /* 0x1509018E: jne 0x1509014a */
L_15090190:
    RECOMP_CALL(sub_150943C7); /* 0x15090190: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x15090195: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15090198: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509019B: push dword ptr [ebp + 0x14] */
    eax = MEM32(eax + 0x20); /* 0x1509019E: mov eax, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150901A1: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150901A3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x150901A5: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + 0x150BC9EC)); /* 0x150901A8: push dword ptr [eax + 0x150bc9ec] */
    goto L_1509023C; /* 0x150901AE: jmp 0x1509023c */
L_150901B3:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x150901B3: push dword ptr [ebp + 0x20] */
    eax = MEM32(ebp + 0x10); /* 0x150901B6: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150901B9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150901BC: push dword ptr [ebp + 0x14] */
    eax = MEM32(eax + 0x14); /* 0x150901BF: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, 2); /* 0x150901C2: push 2 */
    PUSH32(esp, 0x64u); /* 0x150901C4: push 0x64 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150901C6: cdq  */
    ecx = POP32_VAL(esp); /* 0x150901C7: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x150901C8: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    RECOMP_BACKEDGE();
    goto L_1508FF0E; /* 0x150901CA: jmp 0x1508ff0e */
L_150901CF:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x150901CF: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150901D3: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150901D6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150901D9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150901DC: push dword ptr [ebp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150901E8; /* 0x150901DF: je 0x150901e8 */
L_150901E1:
    PUSH32(esp, 1); /* 0x150901E1: push 1 */
    RECOMP_BACKEDGE();
    goto L_1508FF49; /* 0x150901E3: jmp 0x1508ff49 */
L_150901E8:
    PUSH32(esp, 0); /* 0x150901E8: push 0 */
    RECOMP_BACKEDGE();
    goto L_1508FF49; /* 0x150901EA: jmp 0x1508ff49 */
L_150901EF:
    eax = MEM32(ebp + 0x10); /* 0x150901EF: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x18); /* 0x150901F2: mov eax, dword ptr [eax + 0x18] */
    /* cmp eax, 6 */ /* 0x150901F5: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x150901F8: ja 0x15090130 */
L_150901FE:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x150901FE: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15090201: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090204: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 1); /* 0x15090207: push 1 */
    RECOMP_BACKEDGE();
    goto L_1508FE8D; /* 0x15090209: jmp 0x1508fe8d */
L_1509020E:
    eax = MEM32(ebp + 0x10); /* 0x1509020E: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x15090211: mov eax, dword ptr [eax + 8] */
    /* cmp eax, 0x17u */ /* 0x15090214: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15090130; /* 0x15090217: ja 0x15090130 */
L_1509021D:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1509021D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090220: push dword ptr [ebp + 0x14] */
    /* cmp eax, 0xBu */ /* 0x15090223: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15090233; /* 0x15090226: jg 0x15090233 */
L_15090228:
    eax = MEM32(ebp + 0x1C); /* 0x15090228: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(eax + 0x98)); /* 0x1509022B: push dword ptr [eax + 0x98] */
    goto L_1509023C; /* 0x15090231: jmp 0x1509023c */
L_15090233:
    ecx = MEM32(ebp + 0x1C); /* 0x15090233: mov ecx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ecx + 0x9C)); /* 0x15090236: push dword ptr [ecx + 0x9c] */
L_1509023C:
    RECOMP_CALL(sub_1509031A); /* 0x1509023C: call 0x1509031a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090241: add esp, 0xc */
    _flag_k = FK_ADD;
L_15090244:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090244: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15090246: inc eax */
    _flag_k = FK_INC;
L_15090247:
    edi = POP32_VAL(esp); /* 0x15090247: pop edi */
    esi = POP32_VAL(esp); /* 0x15090248: pop esi */
    ebx = POP32_VAL(esp); /* 0x15090249: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1509024A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509024B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15090252(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15090252u);

L_15090252:
    edi = edi; /* 0x15090252: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15090254: push ebp */
    ebp = esp; /* 0x15090255: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15090257: push ecx */
    PUSH32(esp, ebx); /* 0x15090258: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15090259: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1509025B: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1509025C: mov esi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x1509025F: mov eax, esi */
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x15090261: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090279; /* 0x15090264: je 0x15090279 */
L_15090266:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090266: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15090269: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1509026C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150902C6); /* 0x1509026F: call 0x150902c6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090274: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_150902BC; /* 0x15090277: jmp 0x150902bc */
L_15090279:
    PUSH32(esp, edi); /* 0x15090279: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1509027A: mov edi, dword ptr [ebp + 0x14] */
    /* cmp esi, MEM32(edi) */ /* 0x1509027D: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150902B9; /* 0x1509027F: jae 0x150902b9 */
L_15090281:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15090281: dec esi */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x15090282: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150902B0; /* 0x15090284: je 0x150902b0 */
L_15090286:
    eax = MEM32(ebp + 0x8); /* 0x15090286: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x10); /* 0x15090289: mov edi, dword ptr [ebp + 0x10] */
L_1509028C:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509028C: cdq  */
    ecx = esi; /* 0x1509028D: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x1509028F: mov dword ptr [ebp - 4], 0xa */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x15090296: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x4)) = eax; /* 0x15090299: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x1509029C: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = MEM32(edi); /* 0x1509029F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x150902A1: inc ebx */
    _flag_k = FK_INC;
    MEM8(esi + eax) = (uint8_t)(LO8(edx)); /* 0x150902A2: mov byte ptr [esi + eax], dl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150902A5: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x4)); /* 0x150902A6: mov eax, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x150902A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509028C; /* 0x150902AB: jne 0x1509028c */
L_150902AD:
    edi = MEM32(ebp + 0x14); /* 0x150902AD: mov edi, dword ptr [ebp + 0x14] */
L_150902B0:
    eax = MEM32(ebp + 0x10); /* 0x150902B0: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax) = MEM32(eax) + ebx; /* 0x150902B3: add dword ptr [eax], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi) = MEM32(edi) - ebx; /* 0x150902B5: sub dword ptr [edi], ebx */
    _flag_k = FK_CMP;
    goto L_150902BB; /* 0x150902B7: jmp 0x150902bb */
L_150902B9:
    MEM32(edi) = ebx; /* 0x150902B9: mov dword ptr [edi], ebx */
L_150902BB:
    edi = POP32_VAL(esp); /* 0x150902BB: pop edi */
L_150902BC:
    esi = POP32_VAL(esp); /* 0x150902BC: pop esi */
    ebx = POP32_VAL(esp); /* 0x150902BD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150902BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150902BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150902C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150902C6u);

L_150902C6:
    edi = edi; /* 0x150902C6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150902C8: push ebp */
    ebp = esp; /* 0x150902C9: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x150902CB: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x150902CE: push esi */
    PUSH32(esp, edi); /* 0x150902CF: push edi */
    edi = MEM32(ebp + 0x10); /* 0x150902D0: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ecx); /* 0x150902D3: mov esi, dword ptr [ecx] */
    /* cmp MEM32(edi), 1 */ /* 0x150902D5: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150902FD; /* 0x150902D8: jbe 0x150902fd */
L_150902DA:
    PUSH32(esp, ebx); /* 0x150902DA: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x150902DB: mov ebx, dword ptr [ebp + 8] */
L_150902DE:
    eax = ebx; /* 0x150902DE: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150902E0: cdq  */
    PUSH32(esp, 0xAu); /* 0x150902E1: push 0xa */
    ebx = POP32_VAL(esp); /* 0x150902E3: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x150902E4: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x150902E6: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    ebx = eax; /* 0x150902E9: mov ebx, eax */
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x150902EB: mov byte ptr [esi], dl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150902ED: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(edi); /* 0x150902EE: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150902F0: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = eax; /* 0x150902F1: mov dword ptr [edi], eax */
    /* test ebx, ebx */ /* 0x150902F3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150902FC; /* 0x150902F5: jle 0x150902fc */
L_150902F7:
    /* cmp eax, 1 */ /* 0x150902F7: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150902DE; /* 0x150902FA: ja 0x150902de */
L_150902FC:
    ebx = POP32_VAL(esp); /* 0x150902FC: pop ebx */
L_150902FD:
    edx = MEM32(ecx); /* 0x150902FD: mov edx, dword ptr [ecx] */
    MEM32(ecx) = esi; /* 0x150902FF: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15090301: dec esi */
    _flag_k = FK_DEC;
L_15090302:
    SET_LO8(eax, MEM8(edx)); /* 0x15090302: mov al, byte ptr [edx] */
    SET_LO8(ecx, MEM8(esi)); /* 0x15090304: mov cl, byte ptr [esi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15090306: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15090308: dec esi */
    _flag_k = FK_DEC;
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x15090309: mov byte ptr [edx], cl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1509030B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x1509030C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15090302; /* 0x1509030E: jb 0x15090302 */
L_15090310:
    edi = POP32_VAL(esp); /* 0x15090310: pop edi */
    esi = POP32_VAL(esp); /* 0x15090311: pop esi */
    ebp = POP32_VAL(esp); /* 0x15090312: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090313: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509031A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509031Au);

L_1509031A:
    edi = edi; /* 0x1509031A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1509031C: push ebp */
    ebp = esp; /* 0x1509031D: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1509031F: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(ecx), 0 */ /* 0x15090322: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090343; /* 0x15090325: je 0x15090343 */
L_15090327:
    edx = MEM32(ebp + 0x8); /* 0x15090327: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1509032A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1509032B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1509032E: push ebx */
L_1509032F:
    SET_LO8(ebx, MEM8(edx)); /* 0x1509032F: mov bl, byte ptr [edx] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x15090331: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090341; /* 0x15090333: je 0x15090341 */
L_15090335:
    eax = MEM32(esi); /* 0x15090335: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15090337: inc edx */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15090338: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1509033A: inc dword ptr [esi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x1509033C: sub dword ptr [ecx], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1509032F; /* 0x1509033F: jne 0x1509032f */
L_15090341:
    ebx = POP32_VAL(esp); /* 0x15090341: pop ebx */
    esi = POP32_VAL(esp); /* 0x15090342: pop esi */
L_15090343:
    ebp = POP32_VAL(esp); /* 0x15090343: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090344: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509034B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509034Bu);

L_1509034B:
    edi = edi; /* 0x1509034B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1509034D: push ebp */
    ebp = esp; /* 0x1509034E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x15090350: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15090353: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15090358: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1509035A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1509035D: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x15090360: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x15090363: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x15090364: mov ebx, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x15090367: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1509036A: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1509036D: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0xC); /* 0x15090370: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x28)) = edx; /* 0x15090373: mov dword ptr [ebp - 0x28], edx */
    PUSH32(esp, esi); /* 0x15090376: push esi */
    PUSH32(esp, edi); /* 0x15090377: push edi */
    edi = MEM32(ebp + 0x14); /* 0x15090378: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x18)) = edi; /* 0x1509037B: mov dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1509037E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090398; /* 0x15090381: je 0x15090398 */
L_15090383:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090383: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090390; /* 0x15090386: je 0x15090390 */
L_15090388:
    esi = MEM32(edx + 0xA8); /* 0x15090388: mov esi, dword ptr [edx + 0xa8] */
    goto L_1509039E; /* 0x1509038E: jmp 0x1509039e */
L_15090390:
    esi = MEM32(edx + 0xA4); /* 0x15090390: mov esi, dword ptr [edx + 0xa4] */
    goto L_1509039E; /* 0x15090396: jmp 0x1509039e */
L_15090398:
    esi = MEM32(edx + 0xA0); /* 0x15090398: mov esi, dword ptr [edx + 0xa0] */
L_1509039E:
    /* cmp MEM32(edx + 0xB0), 1 */ /* 0x1509039E: cmp dword ptr [edx + 0xb0], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0xB0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150907EF; /* 0x150903A5: je 0x150907ef */
L_150903AB:
    edi = MEM32(ebp + (-0x24)); /* 0x150903AB: mov edi, dword ptr [ebp - 0x24] */
    eax = 0x76Cu; /* 0x150903AE: mov eax, 0x76c */
    /* cmp MEM32(ebp + 0xC), 2 */ /* 0x150903B3: cmp dword ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(0x150C0048); /* 0x150903B7: mov ecx, dword ptr [0x150c0048] */
    if (CMP_NE(_flag_a, _flag_b)) { ecx = MEM32(0x150C004C); } /* 0x150903BD: cmovne ecx, dword ptr [0x150c004c] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(edi + 0x14)); /* 0x150903C4: add ax, word ptr [edi + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x150903C8: mov word ptr [ebp - 0x14], ax */
    eax = edi; /* 0x150903CC: mov eax, edi */
    MEM32(ebp + (-0x20)) = ecx; /* 0x150903CE: mov dword ptr [ebp - 0x20], ecx */
    SET_LO16(eax, MEM16(eax + 0x10)); /* 0x150903D1: mov ax, word ptr [eax + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x150903D5: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x150903D7: mov word ptr [ebp - 0x12], ax */
    eax = edi; /* 0x150903DB: mov eax, edi */
    SET_LO16(eax, MEM16(eax + 0xC)); /* 0x150903DD: mov ax, word ptr [eax + 0xc] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x150903E1: mov word ptr [ebp - 0xe], ax */
    eax = edi; /* 0x150903E5: mov eax, edi */
    SET_LO16(eax, MEM16(eax + 0x8)); /* 0x150903E7: mov ax, word ptr [eax + 8] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x150903EB: mov word ptr [ebp - 0xc], ax */
    eax = edi; /* 0x150903EF: mov eax, edi */
    SET_LO16(eax, MEM16(eax + 0x4)); /* 0x150903F1: mov ax, word ptr [eax + 4] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x150903F5: mov word ptr [ebp - 0xa], ax */
    eax = edi; /* 0x150903F9: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150903FB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x150903FD: push edi */
    PUSH32(esp, edi); /* 0x150903FE: push edi */
    SET_LO16(eax, MEM16(eax)); /* 0x150903FF: mov ax, word ptr [eax] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15090402: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090406: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15090408: push esi */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15090409: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x14); /* 0x1509040D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15090410: push eax */
    PUSH32(esp, edi); /* 0x15090411: push edi */
    PUSH32(esp, MEM32(edx + 0xAC)); /* 0x15090412: push dword ptr [edx + 0xac] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15090418: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(MEM32(ebp + (-0x20))); /* 0x1509041E: call dword ptr [ebp - 0x20] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x18)); /* 0x15090421: mov edi, dword ptr [ebp - 0x18] */
    ecx = eax; /* 0x15090424: mov ecx, eax */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x15090426: mov dword ptr [ebp - 0x1c], ecx */
    /* test ecx, ecx */ /* 0x15090429: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150907EF; /* 0x1509042B: je 0x150907ef */
L_15090431:
    eax = ecx + 0x8; /* 0x15090431: lea eax, [ecx + 8] */
    /* cmp eax, ecx */ /* 0x15090434: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_150907EF; /* 0x15090436: jle 0x150907ef */
L_1509043C:
    /* cmp eax, 0x400u */ /* 0x1509043C: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1509045A; /* 0x15090441: jg 0x1509045a */
L_15090443:
    RECOMP_CALL(sub_15069EB0); /* 0x15090443: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    edi = esp; /* 0x15090448: mov edi, esp */
    /* test edi, edi */ /* 0x1509044A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150904D8; /* 0x1509044C: je 0x150904d8 */
L_15090452:
    MEM32(edi) = 0xCCCCu; /* 0x15090452: mov dword ptr [edi], 0xcccc */
    goto L_1509046D; /* 0x15090458: jmp 0x1509046d */
L_1509045A:
    PUSH32(esp, eax); /* 0x1509045A: push eax */
    RECOMP_CALL(sub_15048A30); /* 0x1509045B: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15090460: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15090462: pop ecx */
    /* test edi, edi */ /* 0x15090463: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150904D8; /* 0x15090465: je 0x150904d8 */
L_15090467:
    MEM32(edi) = 0xDDDDu; /* 0x15090467: mov dword ptr [edi], 0xdddd */
L_1509046D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1509046D: add edi, 8 */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x15090470: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150904D8; /* 0x15090472: je 0x150904d8 */
L_15090474:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x15090474: push dword ptr [ebp - 0x1c] */
    eax = ebp + (-0x14); /* 0x15090477: lea eax, [ebp - 0x14] */
    PUSH32(esp, edi); /* 0x1509047A: push edi */
    PUSH32(esp, esi); /* 0x1509047B: push esi */
    esi = MEM32(ebp + (-0x20)); /* 0x1509047C: mov esi, dword ptr [ebp - 0x20] */
    ecx = esi; /* 0x1509047F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x15090481: push eax */
    eax = MEM32(ebp + (-0x28)); /* 0x15090482: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, 0); /* 0x15090485: push 0 */
    PUSH32(esp, MEM32(eax + 0xAC)); /* 0x15090487: push dword ptr [eax + 0xac] */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1509048D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15090493: call esi */
    RECOMP_FLAGS_IN();
    esi = eax + (-0x1); /* 0x15090495: lea esi, [eax - 1] */
    eax = edi; /* 0x15090498: mov eax, edi */
    /* test esi, esi */ /* 0x1509049A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150904BC; /* 0x1509049C: jle 0x150904bc */
L_1509049E:
    edx = MEM32(ebp + (-0x18)); /* 0x1509049E: mov edx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x28)) = edi; /* 0x150904A1: mov dword ptr [ebp - 0x28], edi */
L_150904A4:
    /* cmp MEM32(ebx), 0 */ /* 0x150904A4: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150904B9; /* 0x150904A7: jbe 0x150904b9 */
L_150904A9:
    eax = MEM32(edx); /* 0x150904A9: mov eax, dword ptr [edx] */
    SET_LO8(ecx, MEM8(edi)); /* 0x150904AB: mov cl, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150904AD: inc edi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x150904AE: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x150904B0: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x150904B2: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150904B4: dec esi */
    _flag_k = FK_DEC;
    /* test esi, esi */ /* 0x150904B5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150904A4; /* 0x150904B7: jg 0x150904a4 */
L_150904B9:
    eax = MEM32(ebp + (-0x28)); /* 0x150904B9: mov eax, dword ptr [ebp - 0x28] */
L_150904BC:
    PUSH32(esp, eax); /* 0x150904BC: push eax */
    RECOMP_CALL(sub_1504ABA0); /* 0x150904BD: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150904C2: pop ecx */
L_150904C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150904C3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150904C5: inc eax */
    _flag_k = FK_INC;
L_150904C6:
    esp = ebp + (-0x38); /* 0x150904C6: lea esp, [ebp - 0x38] */
    edi = POP32_VAL(esp); /* 0x150904C9: pop edi */
    esi = POP32_VAL(esp); /* 0x150904CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x150904CB: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x150904CC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150904CF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150904D1: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150904D6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150904D7: ret  */
L_150904D8:
    edi = MEM32(ebp + (-0x18)); /* 0x150904D8: mov edi, dword ptr [ebp - 0x18] */
    goto L_150907EF; /* 0x150904DB: jmp 0x150907ef */
L_150904E0:
    /* cmp MEM32(ebx), 0 */ /* 0x150904E0: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150904C3; /* 0x150904E3: je 0x150904c3 */
L_150904E5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x150904E5: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi; /* 0x150904E9: mov edx, esi */
    SET_LO8(ecx, MEM8(esi)); /* 0x150904EB: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150904ED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150904EF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150904EF: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150904F0: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(edx), LO8(ecx) */ /* 0x150904F1: cmp byte ptr [edx], cl */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150904EF; /* 0x150904F3: je 0x150904ef */
L_150904F5:
    MEM32(ebp + (-0x1C)) = edx; /* 0x150904F5: mov dword ptr [ebp - 0x1c], edx */
    SET_LO8(edx, LO8(ecx)); /* 0x150904F8: mov dl, cl */
    ecx = (int32_t)(int8_t)LO8(edx); /* 0x150904FA: movsx ecx, dl */
    /* cmp ecx, 0x64u */ /* 0x150904FD: cmp ecx, 0x64 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15090666; /* 0x15090500: jg 0x15090666 */
L_15090506:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509062B; /* 0x15090506: je 0x1509062b */
L_1509050C:
    /* cmp ecx, 0x27u */ /* 0x1509050C: cmp ecx, 0x27 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x27u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150905C2; /* 0x1509050F: je 0x150905c2 */
L_15090515:
    /* cmp ecx, 0x41u */ /* 0x15090515: cmp ecx, 0x41 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509052D; /* 0x15090518: je 0x1509052d */
L_1509051A:
    /* cmp ecx, 0x48u */ /* 0x1509051A: cmp ecx, 0x48 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509057E; /* 0x1509051D: je 0x1509057e */
L_1509051F:
    /* cmp ecx, 0x4Du */ /* 0x1509051F: cmp ecx, 0x4d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090543; /* 0x15090522: je 0x15090543 */
L_15090524:
    /* cmp ecx, 0x61u */ /* 0x15090524: cmp ecx, 0x61 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15090790; /* 0x15090527: jne 0x15090790 */
L_1509052D:
    PUSH32(esp, 0x15007790u); /* 0x1509052D: push 0x15007790 */
    PUSH32(esp, esi); /* 0x15090532: push esi */
    RECOMP_CALL(sub_1508FAF0); /* 0x15090533: call 0x1508faf0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15090538: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15090539: pop ecx */
    /* test eax, eax */ /* 0x1509053A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509059D; /* 0x1509053C: jne 0x1509059d */
L_1509053E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 5; /* 0x1509053E: add esi, 5 */
    _flag_k = FK_ADD;
    goto L_150905B6; /* 0x15090541: jmp 0x150905b6 */
L_15090543:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090543: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509056D; /* 0x15090546: je 0x1509056d */
L_15090548:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090548: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090572; /* 0x1509054B: je 0x15090572 */
L_1509054D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509054D: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090567; /* 0x15090550: je 0x15090567 */
L_15090552:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090552: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090790; /* 0x15090555: jne 0x15090790 */
L_1509055B:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x42u); /* 0x1509055B: mov byte ptr [ebp - 0x18], 0x42 */
L_1509055F:
    eax = MEM32(ebp + (-0x20)); /* 0x1509055F: mov eax, dword ptr [ebp - 0x20] */
    goto L_150907D1; /* 0x15090562: jmp 0x150907d1 */
L_15090567:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x62u); /* 0x15090567: mov byte ptr [ebp - 0x18], 0x62 */
    RECOMP_BACKEDGE();
    goto L_1509055F; /* 0x1509056B: jmp 0x1509055f */
L_1509056D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509056D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1509056F: inc eax */
    _flag_k = FK_INC;
    goto L_15090575; /* 0x15090570: jmp 0x15090575 */
L_15090572:
    eax = MEM32(ebp + (-0x20)); /* 0x15090572: mov eax, dword ptr [ebp - 0x20] */
L_15090575:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x6Du); /* 0x15090575: mov byte ptr [ebp - 0x18], 0x6d */
    goto L_150907D1; /* 0x15090579: jmp 0x150907d1 */
L_1509057E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509057E: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090598; /* 0x15090581: je 0x15090598 */
L_15090583:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090583: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090790; /* 0x15090586: jne 0x15090790 */
L_1509058C:
    eax = MEM32(ebp + (-0x20)); /* 0x1509058C: mov eax, dword ptr [ebp - 0x20] */
L_1509058F:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x48u); /* 0x1509058F: mov byte ptr [ebp - 0x18], 0x48 */
    goto L_150907D1; /* 0x15090593: jmp 0x150907d1 */
L_15090598:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090598: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1509059A: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1509058F; /* 0x1509059B: jmp 0x1509058f */
L_1509059D:
    PUSH32(esp, 0x15007798u); /* 0x1509059D: push 0x15007798 */
    PUSH32(esp, esi); /* 0x150905A2: push esi */
    RECOMP_CALL(sub_1508FAF0); /* 0x150905A3: call 0x1508faf0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150905A8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150905A9: pop ecx */
    /* test eax, eax */ /* 0x150905AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150905B3; /* 0x150905AC: jne 0x150905b3 */
L_150905AE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x150905AE: add esi, 3 */
    _flag_k = FK_ADD;
    goto L_150905B6; /* 0x150905B1: jmp 0x150905b6 */
L_150905B3:
    esi = MEM32(ebp + (-0x1C)); /* 0x150905B3: mov esi, dword ptr [ebp - 0x1c] */
L_150905B6:
    eax = MEM32(ebp + (-0x20)); /* 0x150905B6: mov eax, dword ptr [ebp - 0x20] */
    MEM8(ebp + (-0x18)) = (uint8_t)(0x70u); /* 0x150905B9: mov byte ptr [ebp - 0x18], 0x70 */
    goto L_150907D4; /* 0x150905BD: jmp 0x150907d4 */
L_150905C2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x150905C2: add esi, eax */
    _flag_k = FK_ADD;
    /* test LO8(eax), 1 */ /* 0x150905C4: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150907EF; /* 0x150905C6: je 0x150907ef */
L_150905CC:
    /* cmp MEM8(esi), 0 */ /* 0x150905CC: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150904C3; /* 0x150905CF: je 0x150904c3 */
L_150905D5:
    /* cmp MEM32(ebx), 0 */ /* 0x150905D5: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150907EF; /* 0x150905D8: je 0x150907ef */
L_150905DE:
    SET_LO8(eax, MEM8(esi)); /* 0x150905DE: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x27u */ /* 0x150905E0: cmp al, 0x27 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090625; /* 0x150905E2: je 0x15090625 */
L_150905E4:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x150905E4: push dword ptr [ebp - 0x2c] */
    eax = (int32_t)(int8_t)LO8(eax); /* 0x150905E7: movsx eax, al */
    PUSH32(esp, eax); /* 0x150905EA: push eax */
    RECOMP_CALL(sub_15031550); /* 0x150905EB: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150905F0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150905F1: pop ecx */
    /* test eax, eax */ /* 0x150905F2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090610; /* 0x150905F4: je 0x15090610 */
L_150905F6:
    /* cmp MEM32(ebx), 1 */ /* 0x150905F6: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15090610; /* 0x150905F9: jbe 0x15090610 */
L_150905FB:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x150905FB: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150907FD; /* 0x150905FF: je 0x150907fd */
L_15090605:
    eax = MEM32(edi); /* 0x15090605: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x15090607: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090609: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x1509060A: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x1509060C: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x1509060E: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
L_15090610:
    eax = MEM32(edi); /* 0x15090610: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x15090612: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090614: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x15090615: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x15090617: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x15090619: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    /* cmp MEM8(esi), 0 */ /* 0x1509061B: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150905D5; /* 0x1509061E: jne 0x150905d5 */
L_15090620:
    goto L_150907EF; /* 0x15090620: jmp 0x150907ef */
L_15090625:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090625: inc esi */
    _flag_k = FK_INC;
    goto L_150907EF; /* 0x15090626: jmp 0x150907ef */
L_1509062B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509062B: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090655; /* 0x1509062E: je 0x15090655 */
L_15090630:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090630: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509065A; /* 0x15090633: je 0x1509065a */
L_15090635:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090635: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509064C; /* 0x15090638: je 0x1509064c */
L_1509063A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509063A: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090790; /* 0x1509063D: jne 0x15090790 */
L_15090643:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x41u); /* 0x15090643: mov byte ptr [ebp - 0x18], 0x41 */
    RECOMP_BACKEDGE();
    goto L_1509055F; /* 0x15090647: jmp 0x1509055f */
L_1509064C:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x61u); /* 0x1509064C: mov byte ptr [ebp - 0x18], 0x61 */
    RECOMP_BACKEDGE();
    goto L_1509055F; /* 0x15090650: jmp 0x1509055f */
L_15090655:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090655: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15090657: inc eax */
    _flag_k = FK_INC;
    goto L_1509065D; /* 0x15090658: jmp 0x1509065d */
L_1509065A:
    eax = MEM32(ebp + (-0x20)); /* 0x1509065A: mov eax, dword ptr [ebp - 0x20] */
L_1509065D:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x64u); /* 0x1509065D: mov byte ptr [ebp - 0x18], 0x64 */
    goto L_150907D1; /* 0x15090661: jmp 0x150907d1 */
L_15090666:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x68u; /* 0x15090666: sub ecx, 0x68 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090786; /* 0x15090669: je 0x15090786 */
L_1509066F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x1509066F: sub ecx, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509076E; /* 0x15090672: je 0x1509076e */
L_15090678:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 6; /* 0x15090678: sub ecx, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090756; /* 0x1509067B: je 0x15090756 */
L_15090681:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15090681: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150906B1; /* 0x15090684: je 0x150906b1 */
L_15090686:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x15090686: sub ecx, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090790; /* 0x15090689: jne 0x15090790 */
L_1509068F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1509068F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090690: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150906A8; /* 0x15090693: je 0x150906a8 */
L_15090695:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15090695: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090696: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090790; /* 0x15090699: jne 0x15090790 */
L_1509069F:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x59u); /* 0x1509069F: mov byte ptr [ebp - 0x18], 0x59 */
    RECOMP_BACKEDGE();
    goto L_1509055F; /* 0x150906A3: jmp 0x1509055f */
L_150906A8:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x79u); /* 0x150906A8: mov byte ptr [ebp - 0x18], 0x79 */
    RECOMP_BACKEDGE();
    goto L_1509055F; /* 0x150906AC: jmp 0x1509055f */
L_150906B1:
    ecx = MEM32(ebp + (-0x24)); /* 0x150906B1: mov ecx, dword ptr [ebp - 0x24] */
    /* cmp MEM32(ecx + 0x8), 0xBu */ /* 0x150906B4: cmp dword ptr [ecx + 8], 0xb */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x28)); /* 0x150906B8: mov ecx, dword ptr [ebp - 0x28] */
    if (CMP_G(_flag_a, _flag_b)) goto L_150906C5; /* 0x150906BB: jg 0x150906c5 */
L_150906BD:
    esi = MEM32(ecx + 0x98); /* 0x150906BD: mov esi, dword ptr [ecx + 0x98] */
    goto L_150906CB; /* 0x150906C3: jmp 0x150906cb */
L_150906C5:
    esi = MEM32(ecx + 0x9C); /* 0x150906C5: mov esi, dword ptr [ecx + 0x9c] */
L_150906CB:
    /* cmp eax, 1 */ /* 0x150906CB: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15090749; /* 0x150906CE: jne 0x15090749 */
L_150906D0:
    /* cmp MEM32(ebx), 0 */ /* 0x150906D0: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15090749; /* 0x150906D3: jbe 0x15090749 */
L_150906D5:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x150906D5: push dword ptr [ebp - 0x2c] */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x150906D8: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x150906DB: push eax */
    RECOMP_CALL(sub_15031550); /* 0x150906DC: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150906E1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150906E2: pop ecx */
    /* test eax, eax */ /* 0x150906E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090701; /* 0x150906E5: je 0x15090701 */
L_150906E7:
    /* cmp MEM32(ebx), 1 */ /* 0x150906E7: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15090701; /* 0x150906EA: jbe 0x15090701 */
L_150906EC:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x150906EC: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150907FD; /* 0x150906F0: je 0x150907fd */
L_150906F6:
    eax = MEM32(edi); /* 0x150906F6: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x150906F8: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150906FA: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x150906FB: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x150906FD: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x150906FF: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
L_15090701:
    ecx = MEM32(edi); /* 0x15090701: mov ecx, dword ptr [edi] */
    SET_LO8(eax, MEM8(esi)); /* 0x15090703: mov al, byte ptr [esi] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x15090705: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x15090707: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x15090709: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    goto L_1509074E; /* 0x1509070B: jmp 0x1509074e */
L_1509070D:
    /* cmp MEM32(ebx), 0 */ /* 0x1509070D: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509074E; /* 0x15090710: jbe 0x1509074e */
L_15090712:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x15090712: push dword ptr [ebp - 0x2c] */
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x15090715: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x15090718: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15090719: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509071E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1509071F: pop ecx */
    /* test eax, eax */ /* 0x15090720: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509073E; /* 0x15090722: je 0x1509073e */
L_15090724:
    /* cmp MEM32(ebx), 1 */ /* 0x15090724: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509073E; /* 0x15090727: jbe 0x1509073e */
L_15090729:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x15090729: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150907FD; /* 0x1509072D: je 0x150907fd */
L_15090733:
    eax = MEM32(edi); /* 0x15090733: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x15090735: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090737: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x15090738: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x1509073A: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x1509073C: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
L_1509073E:
    eax = MEM32(edi); /* 0x1509073E: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x15090740: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090742: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x15090743: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x15090745: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x15090747: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
L_15090749:
    /* cmp MEM8(esi), 0 */ /* 0x15090749: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509070D; /* 0x1509074C: jne 0x1509070d */
L_1509074E:
    esi = MEM32(ebp + (-0x1C)); /* 0x1509074E: mov esi, dword ptr [ebp - 0x1c] */
    goto L_150907EF; /* 0x15090751: jmp 0x150907ef */
L_15090756:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090756: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090769; /* 0x15090759: je 0x15090769 */
L_1509075B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509075B: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090790; /* 0x1509075E: jne 0x15090790 */
L_15090760:
    eax = MEM32(ebp + (-0x20)); /* 0x15090760: mov eax, dword ptr [ebp - 0x20] */
L_15090763:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x53u); /* 0x15090763: mov byte ptr [ebp - 0x18], 0x53 */
    goto L_150907D1; /* 0x15090767: jmp 0x150907d1 */
L_15090769:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090769: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1509076B: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15090763; /* 0x1509076C: jmp 0x15090763 */
L_1509076E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509076E: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15090781; /* 0x15090771: je 0x15090781 */
L_15090773:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090773: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090790; /* 0x15090776: jne 0x15090790 */
L_15090778:
    eax = MEM32(ebp + (-0x20)); /* 0x15090778: mov eax, dword ptr [ebp - 0x20] */
L_1509077B:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x4Du); /* 0x1509077B: mov byte ptr [ebp - 0x18], 0x4d */
    goto L_150907D1; /* 0x1509077F: jmp 0x150907d1 */
L_15090781:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090781: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15090783: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1509077B; /* 0x15090784: jmp 0x1509077b */
L_15090786:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15090786: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150907C5; /* 0x15090789: je 0x150907c5 */
L_1509078B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509078B: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150907CA; /* 0x1509078E: je 0x150907ca */
L_15090790:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x15090790: push dword ptr [ebp - 0x2c] */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x15090793: movsx eax, dl */
    PUSH32(esp, eax); /* 0x15090796: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15090797: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509079C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1509079D: pop ecx */
    /* test eax, eax */ /* 0x1509079E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150907B8; /* 0x150907A0: je 0x150907b8 */
L_150907A2:
    /* cmp MEM32(ebx), 1 */ /* 0x150907A2: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150907B8; /* 0x150907A5: jbe 0x150907b8 */
L_150907A7:
    /* cmp MEM8(esi + 0x1), 0 */ /* 0x150907A7: cmp byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150907FD; /* 0x150907AB: je 0x150907fd */
L_150907AD:
    eax = MEM32(edi); /* 0x150907AD: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x150907AF: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150907B1: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x150907B2: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x150907B4: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x150907B6: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
L_150907B8:
    eax = MEM32(edi); /* 0x150907B8: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(esi)); /* 0x150907BA: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150907BC: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x150907BD: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) + 1; /* 0x150907BF: inc dword ptr [edi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x150907C1: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    goto L_150907EF; /* 0x150907C3: jmp 0x150907ef */
L_150907C5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150907C5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150907C7: inc eax */
    _flag_k = FK_INC;
    goto L_150907CD; /* 0x150907C8: jmp 0x150907cd */
L_150907CA:
    eax = MEM32(ebp + (-0x20)); /* 0x150907CA: mov eax, dword ptr [ebp - 0x20] */
L_150907CD:
    MEM8(ebp + (-0x18)) = (uint8_t)(0x49u); /* 0x150907CD: mov byte ptr [ebp - 0x18], 0x49 */
L_150907D1:
    esi = MEM32(ebp + (-0x1C)); /* 0x150907D1: mov esi, dword ptr [ebp - 0x1c] */
L_150907D4:
    PUSH32(esp, eax); /* 0x150907D4: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x150907D5: push dword ptr [ebp - 0x28] */
    PUSH32(esp, ebx); /* 0x150907D8: push ebx */
    PUSH32(esp, edi); /* 0x150907D9: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x150907DA: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x150907DD: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x150907E0: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1508FE1F); /* 0x150907E3: call 0x1508fe1f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150907E8: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150907EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150907FD; /* 0x150907ED: je 0x150907fd */
L_150907EF:
    /* cmp MEM8(esi), 0 */ /* 0x150907EF: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150904E0; /* 0x150907F2: jne 0x150904e0 */
L_150907F8:
    RECOMP_BACKEDGE();
    goto L_150904C3; /* 0x150907F8: jmp 0x150904c3 */
L_150907FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150907FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_150904C6; /* 0x150907FF: jmp 0x150904c6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15090810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15090810u);

L_15090810:
    PUSH32(esp, 0); /* 0x15090810: push 0 */
    RECOMP_CALL(sub_1509081F); /* 0x15090812: call 0x1509081f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15090817: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090818: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509081F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509081Fu);

L_1509081F:
    edi = edi; /* 0x1509081F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15090821: push ebp */
    ebp = esp; /* 0x15090822: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15090824: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15090827: push ebx */
    PUSH32(esp, esi); /* 0x15090828: push esi */
    PUSH32(esp, edi); /* 0x15090829: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1509082A: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x18); /* 0x1509082D: lea ecx, [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15090830: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1502F870); /* 0x15090832: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x15090837: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1509083A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(eax + 0xD4); /* 0x1509083C: mov edi, dword ptr [eax + 0xd4] */
    MEM32(ebp + (-0x4)) = edi; /* 0x15090842: mov dword ptr [ebp - 4], edi */
L_15090845:
    edx = MEM32(edi + esi * 4); /* 0x15090845: mov edx, dword ptr [edi + esi*4] */
    ecx = edx + 0x1; /* 0x15090848: lea ecx, [edx + 1] */
L_1509084B:
    SET_LO8(eax, MEM8(edx)); /* 0x1509084B: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1509084D: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1509084E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509084B; /* 0x15090850: jne 0x1509084b */
L_15090852:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15090852: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(edi + esi * 4 + 0x1C); /* 0x15090854: mov ecx, dword ptr [edi + esi*4 + 0x1c] */
    edi = ecx + 0x1; /* 0x15090858: lea edi, [ecx + 1] */
L_1509085B:
    SET_LO8(eax, MEM8(ecx)); /* 0x1509085B: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1509085D: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1509085E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509085B; /* 0x15090860: jne 0x1509085b */
L_15090862:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x15090862: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15090864: add ebx, 2 */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x15090867: mov edi, dword ptr [ebp - 4] */
    eax = ecx + edx; /* 0x1509086A: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1509086D: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1509086F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 7 */ /* 0x15090870: cmp esi, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15090845; /* 0x15090873: jb 0x15090845 */
L_15090875:
    eax = ebx + 0x1; /* 0x15090875: lea eax, [ebx + 1] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15090878: mov dword ptr [ebp - 8], ebx */
    PUSH32(esp, eax); /* 0x1509087B: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x1509087C: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15090881: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15090883: pop ecx */
    /* test edi, edi */ /* 0x15090884: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509091F; /* 0x15090886: je 0x1509091f */
L_1509088C:
    esi = edi; /* 0x1509088C: mov esi, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1509088E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15090890:
    eax = MEM32(ebp + (-0x4)); /* 0x15090890: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x15090893: mov ecx, dword ptr [ebp - 8] */
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x15090896: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090899: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1509089A: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x1509089B: push dword ptr [eax + ebx*4] */
    eax = edi; /* 0x1509089E: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x150908A0: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x150908A2: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x150908A4: push eax */
    PUSH32(esp, esi); /* 0x150908A5: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x150908A6: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150908AB: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150908AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150908C1; /* 0x150908B0: je 0x150908c1 */
L_150908B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150908B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150908B4: push eax */
    PUSH32(esp, eax); /* 0x150908B5: push eax */
    PUSH32(esp, eax); /* 0x150908B6: push eax */
    PUSH32(esp, eax); /* 0x150908B7: push eax */
    PUSH32(esp, eax); /* 0x150908B8: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150908B9: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150908BE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150908C1:
    ecx = esi; /* 0x150908C1: mov ecx, esi */
    edx = ecx + 0x1; /* 0x150908C3: lea edx, [ecx + 1] */
L_150908C6:
    SET_LO8(eax, MEM8(ecx)); /* 0x150908C6: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150908C8: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150908C9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150908C6; /* 0x150908CB: jne 0x150908c6 */
L_150908CD:
    eax = MEM32(ebp + (-0x4)); /* 0x150908CD: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150908D0: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x150908D2: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x150908D4: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150908D7: inc ecx */
    _flag_k = FK_INC;
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x150908D8: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150908DB: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax + ebx * 4 + 0x1C)); /* 0x150908DC: push dword ptr [eax + ebx*4 + 0x1c] */
    eax = edi; /* 0x150908E0: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x150908E2: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x150908E4: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x150908E6: push eax */
    PUSH32(esp, esi); /* 0x150908E7: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x150908E8: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150908ED: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150908F0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090903; /* 0x150908F2: je 0x15090903 */
L_150908F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150908F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150908F6: push eax */
    PUSH32(esp, eax); /* 0x150908F7: push eax */
    PUSH32(esp, eax); /* 0x150908F8: push eax */
    PUSH32(esp, eax); /* 0x150908F9: push eax */
    PUSH32(esp, eax); /* 0x150908FA: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150908FB: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090900: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090903:
    ecx = esi; /* 0x15090903: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090905: lea edx, [ecx + 1] */
L_15090908:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090908: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1509090A: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1509090B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090908; /* 0x1509090D: jne 0x15090908 */
L_1509090F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509090F: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090911: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15090913: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 7 */ /* 0x15090914: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15090890; /* 0x15090917: jb 0x15090890 */
L_1509091D:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1509091D: mov byte ptr [esi], al */
L_1509091F:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1509091F: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509092C; /* 0x15090923: je 0x1509092c */
L_15090925:
    eax = MEM32(ebp + (-0x10)); /* 0x15090925: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15090928: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1509092C:
    eax = edi; /* 0x1509092C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1509092E: pop edi */
    esi = POP32_VAL(esp); /* 0x1509092F: pop esi */
    ebx = POP32_VAL(esp); /* 0x15090930: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15090931: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090932: ret  */
    RECOMP_REGS_OUT();
}

void sub_15090940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15090940u);

L_15090940:
    PUSH32(esp, 0); /* 0x15090940: push 0 */
    RECOMP_CALL(sub_1509094F); /* 0x15090942: call 0x1509094f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15090947: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090948: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509094F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509094Fu);

L_1509094F:
    edi = edi; /* 0x1509094F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15090951: push ebp */
    ebp = esp; /* 0x15090952: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15090954: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15090957: push ebx */
    PUSH32(esp, esi); /* 0x15090958: push esi */
    PUSH32(esp, edi); /* 0x15090959: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1509095A: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x1509095D: lea ecx, [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15090960: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1502F870); /* 0x15090962: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x15090967: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0xCu); /* 0x1509096A: push 0xc */
    eax = MEM32(eax + 0xD4); /* 0x1509096C: mov eax, dword ptr [eax + 0xd4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x68u; /* 0x15090972: add eax, 0x68 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x15090975: mov dword ptr [ebp - 4], eax */
    esi = eax; /* 0x15090978: mov esi, eax */
    eax = POP32_VAL(esp); /* 0x1509097A: pop eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1509097B: mov dword ptr [ebp - 8], eax */
    edi = eax; /* 0x1509097E: mov edi, eax */
L_15090980:
    ecx = MEM32(esi + (-0x30)); /* 0x15090980: mov ecx, dword ptr [esi - 0x30] */
    edx = ecx + 0x1; /* 0x15090983: lea edx, [ecx + 1] */
L_15090986:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090986: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090988: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090989: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090986; /* 0x1509098B: jne 0x15090986 */
L_1509098D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509098D: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(esi); /* 0x1509098F: mov edx, dword ptr [esi] */
    eax = edx + 0x1; /* 0x15090991: lea eax, [edx + 1] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15090994: mov dword ptr [ebp - 0xc], eax */
L_15090997:
    SET_LO8(eax, MEM8(edx)); /* 0x15090997: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15090999: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1509099A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090997; /* 0x1509099C: jne 0x15090997 */
L_1509099E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0xC)); /* 0x1509099E: sub edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x150909A1: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x150909A4: add esi, 4 */
    _flag_k = FK_ADD;
    eax = edx + ecx; /* 0x150909A7: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x150909AA: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150909AC: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090980; /* 0x150909AF: jne 0x15090980 */
L_150909B1:
    eax = ebx + 0x1; /* 0x150909B1: lea eax, [ebx + 1] */
    PUSH32(esp, eax); /* 0x150909B4: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x150909B5: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150909BA: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x150909BC: pop ecx */
    /* test edi, edi */ /* 0x150909BD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090A58; /* 0x150909BF: je 0x15090a58 */
L_150909C5:
    eax = MEM32(ebp + (-0x4)); /* 0x150909C5: mov eax, dword ptr [ebp - 4] */
    esi = edi; /* 0x150909C8: mov esi, edi */
L_150909CA:
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x150909CA: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150909CD: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x150909CE: push dword ptr [eax - 0x30] */
    eax = edi; /* 0x150909D1: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x150909D3: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150909D5: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x150909D6: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x150909D8: push eax */
    PUSH32(esp, esi); /* 0x150909D9: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x150909DA: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150909DF: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150909E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150909F5; /* 0x150909E4: je 0x150909f5 */
L_150909E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150909E6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150909E8: push eax */
    PUSH32(esp, eax); /* 0x150909E9: push eax */
    PUSH32(esp, eax); /* 0x150909EA: push eax */
    PUSH32(esp, eax); /* 0x150909EB: push eax */
    PUSH32(esp, eax); /* 0x150909EC: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150909ED: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150909F2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150909F5:
    ecx = esi; /* 0x150909F5: mov ecx, esi */
    edx = ecx + 0x1; /* 0x150909F7: lea edx, [ecx + 1] */
L_150909FA:
    SET_LO8(eax, MEM8(ecx)); /* 0x150909FA: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150909FC: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150909FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150909FA; /* 0x150909FF: jne 0x150909fa */
L_15090A01:
    eax = MEM32(ebp + (-0x4)); /* 0x15090A01: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090A04: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090A06: add esi, ecx */
    _flag_k = FK_ADD;
    MEM8(esi) = (uint8_t)(0x3Au); /* 0x15090A08: mov byte ptr [esi], 0x3a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090A0B: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax)); /* 0x15090A0C: push dword ptr [eax] */
    eax = edi; /* 0x15090A0E: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090A10: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15090A12: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x15090A13: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090A15: push eax */
    PUSH32(esp, esi); /* 0x15090A16: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090A17: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090A1C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090A1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090A32; /* 0x15090A21: je 0x15090a32 */
L_15090A23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090A23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090A25: push eax */
    PUSH32(esp, eax); /* 0x15090A26: push eax */
    PUSH32(esp, eax); /* 0x15090A27: push eax */
    PUSH32(esp, eax); /* 0x15090A28: push eax */
    PUSH32(esp, eax); /* 0x15090A29: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090A2A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090A2F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090A32:
    ecx = esi; /* 0x15090A32: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090A34: lea edx, [ecx + 1] */
L_15090A37:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090A37: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090A39: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090A3A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090A37; /* 0x15090A3C: jne 0x15090a37 */
L_15090A3E:
    eax = MEM32(ebp + (-0x4)); /* 0x15090A3E: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090A41: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x15090A43: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090A46: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x15090A48: sub dword ptr [ebp - 8], 1 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x15090A4C: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150909CA; /* 0x15090A4F: jne 0x150909ca */
L_15090A55:
    MEM8(esi) = (uint8_t)(0); /* 0x15090A55: mov byte ptr [esi], 0 */
L_15090A58:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x15090A58: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090A65; /* 0x15090A5C: je 0x15090a65 */
L_15090A5E:
    eax = MEM32(ebp + (-0x14)); /* 0x15090A5E: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15090A61: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15090A65:
    eax = edi; /* 0x15090A65: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15090A67: pop edi */
    esi = POP32_VAL(esp); /* 0x15090A68: pop esi */
    ebx = POP32_VAL(esp); /* 0x15090A69: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15090A6A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090A6B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15090A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15090A80u);

L_15090A80:
    PUSH32(esp, 0); /* 0x15090A80: push 0 */
    RECOMP_CALL(sub_15090A8F); /* 0x15090A82: call 0x15090a8f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15090A87: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090A88: ret  */
    RECOMP_REGS_OUT();
}

void sub_15090A8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15090A8Fu);

L_15090A8F:
    edi = edi; /* 0x15090A8F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15090A91: push ebp */
    ebp = esp; /* 0x15090A92: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x15090A94: sub esp, 0x28 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15090A97: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x15090A9B: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ebx); /* 0x15090A9E: push ebx */
    PUSH32(esp, esi); /* 0x15090A9F: push esi */
    PUSH32(esp, edi); /* 0x15090AA0: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15090AA1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502F870); /* 0x15090AA4: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x15090AA9: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15090AAC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(eax + 0xD4); /* 0x15090AAE: mov edi, dword ptr [eax + 0xd4] */
    MEM32(ebp + (-0x8)) = edi; /* 0x15090AB4: mov dword ptr [ebp - 8], edi */
    ebx = edi + 0x1C; /* 0x15090AB7: lea ebx, [edi + 0x1c] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x15090ABA: mov dword ptr [ebp - 0xc], ebx */
L_15090ABD:
    edx = MEM32(edi + esi * 4); /* 0x15090ABD: mov edx, dword ptr [edi + esi*4] */
    ecx = edx + 0x1; /* 0x15090AC0: lea ecx, [edx + 1] */
L_15090AC3:
    SET_LO8(eax, MEM8(edx)); /* 0x15090AC3: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15090AC5: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090AC6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090AC3; /* 0x15090AC8: jne 0x15090ac3 */
L_15090ACA:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15090ACA: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + esi * 4); /* 0x15090ACC: mov ecx, dword ptr [ebx + esi*4] */
    ebx = ecx + 0x1; /* 0x15090ACF: lea ebx, [ecx + 1] */
L_15090AD2:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090AD2: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090AD4: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090AD5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090AD2; /* 0x15090AD7: jne 0x15090ad2 */
L_15090AD9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x15090AD9: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x15090ADB: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15090ADE: add ebx, 2 */
    _flag_k = FK_ADD;
    eax = ecx + edx; /* 0x15090AE1: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15090AE4: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090AE6: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x15090AE7: mov dword ptr [ebp - 4], ebx */
    ebx = edi + 0x1C; /* 0x15090AEA: lea ebx, [edi + 0x1c] */
    /* cmp esi, 7 */ /* 0x15090AED: cmp esi, 7 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15090ABD; /* 0x15090AF0: jb 0x15090abd */
L_15090AF2:
    PUSH32(esp, 0xCu); /* 0x15090AF2: push 0xc */
    eax = POP32_VAL(esp); /* 0x15090AF4: pop eax */
    esi = edi + 0x68; /* 0x15090AF5: lea esi, [edi + 0x68] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15090AF8: mov dword ptr [ebp - 0x18], eax */
    edi = MEM32(ebp + (-0x4)); /* 0x15090AFB: mov edi, dword ptr [ebp - 4] */
    ebx = eax; /* 0x15090AFE: mov ebx, eax */
L_15090B00:
    ecx = MEM32(esi + (-0x30)); /* 0x15090B00: mov ecx, dword ptr [esi - 0x30] */
    edx = ecx + 0x1; /* 0x15090B03: lea edx, [ecx + 1] */
L_15090B06:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090B06: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090B08: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090B09: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090B06; /* 0x15090B0B: jne 0x15090b06 */
L_15090B0D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090B0D: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(esi); /* 0x15090B0F: mov edx, dword ptr [esi] */
    eax = edx + 0x1; /* 0x15090B11: lea eax, [edx + 1] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15090B14: mov dword ptr [ebp - 0x14], eax */
L_15090B17:
    SET_LO8(eax, MEM8(edx)); /* 0x15090B17: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15090B19: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090B1A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090B17; /* 0x15090B1C: jne 0x15090b17 */
L_15090B1E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x14)); /* 0x15090B1E: sub edx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15090B21: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15090B24: add esi, 4 */
    _flag_k = FK_ADD;
    eax = edx + ecx; /* 0x15090B27: lea eax, [edx + ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x15090B2A: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15090B2C: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090B00; /* 0x15090B2F: jne 0x15090b00 */
L_15090B31:
    MEM32(ebp + (-0x4)) = edi; /* 0x15090B31: mov dword ptr [ebp - 4], edi */
    edi = MEM32(ebp + (-0x8)); /* 0x15090B34: mov edi, dword ptr [ebp - 8] */
    ecx = MEM32(edi + 0x98); /* 0x15090B37: mov ecx, dword ptr [edi + 0x98] */
    edx = ecx + 0x1; /* 0x15090B3D: lea edx, [ecx + 1] */
L_15090B40:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090B40: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090B42: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090B43: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090B40; /* 0x15090B45: jne 0x15090b40 */
L_15090B47:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090B47: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(edi + 0x9C); /* 0x15090B49: mov edx, dword ptr [edi + 0x9c] */
    esi = edx + 0x1; /* 0x15090B4F: lea esi, [edx + 1] */
L_15090B52:
    SET_LO8(eax, MEM8(edx)); /* 0x15090B52: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15090B54: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090B55: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090B52; /* 0x15090B57: jne 0x15090b52 */
L_15090B59:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x15090B59: sub edx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(edi + 0xA0); /* 0x15090B5B: mov esi, dword ptr [edi + 0xa0] */
    ebx = esi + 0x1; /* 0x15090B61: lea ebx, [esi + 1] */
L_15090B64:
    SET_LO8(eax, MEM8(esi)); /* 0x15090B64: mov al, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090B66: inc esi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090B67: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090B64; /* 0x15090B69: jne 0x15090b64 */
L_15090B6B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x15090B6B: sub esi, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(edi + 0xA4); /* 0x15090B6D: mov ebx, dword ptr [edi + 0xa4] */
    eax = ebx + 0x1; /* 0x15090B73: lea eax, [ebx + 1] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15090B76: mov dword ptr [ebp - 0x14], eax */
L_15090B79:
    SET_LO8(eax, MEM8(ebx)); /* 0x15090B79: mov al, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15090B7B: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090B7C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090B79; /* 0x15090B7E: jne 0x15090b79 */
L_15090B80:
    edi = MEM32(edi + 0xA8); /* 0x15090B80: mov edi, dword ptr [edi + 0xa8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x14)); /* 0x15090B86: sub ebx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    eax = edi + 0x1; /* 0x15090B89: lea eax, [edi + 1] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15090B8C: mov dword ptr [ebp - 0x14], eax */
L_15090B8F:
    SET_LO8(eax, MEM8(edi)); /* 0x15090B8F: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15090B91: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090B92: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090B8F; /* 0x15090B94: jne 0x15090b8f */
L_15090B96:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x14)); /* 0x15090B96: sub edi, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    eax = edi + ebx; /* 0x15090B99: lea eax, [edi + ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15090B9C: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x15090B9E: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15090BA0: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x15090BA2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x169u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x169u; /* 0x15090BA5: add ecx, 0x169 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15090BAB: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090BAD: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x15090BAE: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15090BB1: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x15090BB6: mov edi, dword ptr [ebp - 8] */
    ebx = eax; /* 0x15090BB9: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x15090BBB: pop ecx */
    /* test ebx, ebx */ /* 0x15090BBC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090E48; /* 0x15090BBE: je 0x15090e48 */
L_15090BC4:
    esi = edi; /* 0x15090BC4: mov esi, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090BC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x59u); /* 0x15090BC8: push 0x59 */
    ecx = POP32_VAL(esp); /* 0x15090BCA: pop ecx */
    edi = ebx; /* 0x15090BCB: mov edi, ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x15090BCD: mov dword ptr [ebp - 0x10], eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15090BD0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x4)); /* 0x15090BD2: mov edi, dword ptr [ebp - 4] */
    esi = ebx + 0x164; /* 0x15090BD5: lea esi, [ebx + 0x164] */
    ecx = ebx; /* 0x15090BDB: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x15090BDD: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x15090BE0: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x15090BE3: mov ecx, dword ptr [ebp - 0xc] */
L_15090BE6:
    MEM32(ebx + eax * 4) = esi; /* 0x15090BE6: mov dword ptr [ebx + eax*4], esi */
    eax = ebx; /* 0x15090BE9: mov eax, ebx */
    PUSH32(esp, MEM32(ecx + (-0x1C))); /* 0x15090BEB: push dword ptr [ecx - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090BEE: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15090BF0: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090BF2: push eax */
    PUSH32(esp, esi); /* 0x15090BF3: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090BF4: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090BF9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090BFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090C0F; /* 0x15090BFE: je 0x15090c0f */
L_15090C00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090C00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090C02: push eax */
    PUSH32(esp, eax); /* 0x15090C03: push eax */
    PUSH32(esp, eax); /* 0x15090C04: push eax */
    PUSH32(esp, eax); /* 0x15090C05: push eax */
    PUSH32(esp, eax); /* 0x15090C06: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090C07: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090C0C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090C0F:
    ecx = esi; /* 0x15090C0F: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090C11: lea edx, [ecx + 1] */
L_15090C14:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090C14: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090C16: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090C17: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090C14; /* 0x15090C19: jne 0x15090c14 */
L_15090C1B:
    eax = MEM32(ebp + (-0x14)); /* 0x15090C1B: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090C1E: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090C20: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090C21: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x15090C23: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax + ecx) = esi; /* 0x15090C26: mov dword ptr [eax + ecx], esi */
    eax = ebx; /* 0x15090C29: mov eax, ebx */
    PUSH32(esp, MEM32(ecx)); /* 0x15090C2B: push dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090C2D: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15090C2F: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090C31: push eax */
    PUSH32(esp, esi); /* 0x15090C32: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090C33: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090C38: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090C3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090C4E; /* 0x15090C3D: je 0x15090c4e */
L_15090C3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090C3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090C41: push eax */
    PUSH32(esp, eax); /* 0x15090C42: push eax */
    PUSH32(esp, eax); /* 0x15090C43: push eax */
    PUSH32(esp, eax); /* 0x15090C44: push eax */
    PUSH32(esp, eax); /* 0x15090C45: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090C46: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090C4B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090C4E:
    ecx = esi; /* 0x15090C4E: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090C50: lea edx, [ecx + 1] */
L_15090C53:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090C53: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090C55: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090C56: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090C53; /* 0x15090C58: jne 0x15090c53 */
L_15090C5A:
    eax = MEM32(ebp + (-0x10)); /* 0x15090C5A: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090C5D: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090C5F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090C60: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x15090C62: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15090C65: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x15090C66: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x15090C69: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x15090C6C: mov dword ptr [ebp - 0xc], ecx */
    /* cmp eax, 7 */ /* 0x15090C6F: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15090BE6; /* 0x15090C72: jb 0x15090be6 */
L_15090C78:
    eax = ebx + 0x68; /* 0x15090C78: lea eax, [ebx + 0x68] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15090C7B: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x15090C7E: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x15090C81: add eax, 0x38 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x15090C84: mov edi, eax */
L_15090C86:
    eax = MEM32(ebp + (-0x14)); /* 0x15090C86: mov eax, dword ptr [ebp - 0x14] */
    MEM32(edi + eax) = esi; /* 0x15090C89: mov dword ptr [edi + eax], esi */
    eax = ebx; /* 0x15090C8C: mov eax, ebx */
    PUSH32(esp, MEM32(edi)); /* 0x15090C8E: push dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090C90: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x15090C92: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090C95: push eax */
    PUSH32(esp, esi); /* 0x15090C96: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090C97: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090C9C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090C9F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090CB2; /* 0x15090CA1: je 0x15090cb2 */
L_15090CA3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090CA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090CA5: push eax */
    PUSH32(esp, eax); /* 0x15090CA6: push eax */
    PUSH32(esp, eax); /* 0x15090CA7: push eax */
    PUSH32(esp, eax); /* 0x15090CA8: push eax */
    PUSH32(esp, eax); /* 0x15090CA9: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090CAA: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090CAF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090CB2:
    ecx = esi; /* 0x15090CB2: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090CB4: lea edx, [ecx + 1] */
L_15090CB7:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090CB7: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090CB9: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090CBA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090CB7; /* 0x15090CBC: jne 0x15090cb7 */
L_15090CBE:
    eax = MEM32(ebp + (-0xC)); /* 0x15090CBE: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090CC1: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090CC3: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090CC4: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x15090CC6: mov dword ptr [eax], esi */
    eax = ebx; /* 0x15090CC8: mov eax, ebx */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x15090CCA: push dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090CCD: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x15090CCF: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090CD2: push eax */
    PUSH32(esp, esi); /* 0x15090CD3: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090CD4: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090CD9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090CDC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090CEF; /* 0x15090CDE: je 0x15090cef */
L_15090CE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090CE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090CE2: push eax */
    PUSH32(esp, eax); /* 0x15090CE3: push eax */
    PUSH32(esp, eax); /* 0x15090CE4: push eax */
    PUSH32(esp, eax); /* 0x15090CE5: push eax */
    PUSH32(esp, eax); /* 0x15090CE6: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090CE7: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090CEC: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090CEF:
    ecx = esi; /* 0x15090CEF: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090CF1: lea edx, [ecx + 1] */
L_15090CF4:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090CF4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090CF6: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090CF7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090CF4; /* 0x15090CF9: jne 0x15090cf4 */
L_15090CFB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x15090CFB: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090CFF: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090D01: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x15090D02: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090D05: add esi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x15090D07: sub dword ptr [ebp - 0x18], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15090C86; /* 0x15090D0B: jne 0x15090c86 */
L_15090D11:
    edi = MEM32(ebp + (-0x8)); /* 0x15090D11: mov edi, dword ptr [ebp - 8] */
    eax = ebx; /* 0x15090D14: mov eax, ebx */
    MEM32(ebx + 0x98) = esi; /* 0x15090D16: mov dword ptr [ebx + 0x98], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090D1C: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x15090D1E: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + 0x98)); /* 0x15090D21: push dword ptr [edi + 0x98] */
    PUSH32(esp, eax); /* 0x15090D27: push eax */
    PUSH32(esp, esi); /* 0x15090D28: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090D29: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090D2E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090D31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090D44; /* 0x15090D33: je 0x15090d44 */
L_15090D35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090D35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090D37: push eax */
    PUSH32(esp, eax); /* 0x15090D38: push eax */
    PUSH32(esp, eax); /* 0x15090D39: push eax */
    PUSH32(esp, eax); /* 0x15090D3A: push eax */
    PUSH32(esp, eax); /* 0x15090D3B: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090D3C: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090D41: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090D44:
    ecx = esi; /* 0x15090D44: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090D46: lea edx, [ecx + 1] */
L_15090D49:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090D49: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090D4B: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090D4C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090D49; /* 0x15090D4E: jne 0x15090d49 */
L_15090D50:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090D50: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x15090D52: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090D54: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090D55: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x9C) = esi; /* 0x15090D57: mov dword ptr [ebx + 0x9c], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090D5D: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0x9C)); /* 0x15090D5F: push dword ptr [edi + 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x15090D65: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090D68: push eax */
    PUSH32(esp, esi); /* 0x15090D69: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090D6A: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090D6F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090D72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090D85; /* 0x15090D74: je 0x15090d85 */
L_15090D76:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090D76: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090D78: push eax */
    PUSH32(esp, eax); /* 0x15090D79: push eax */
    PUSH32(esp, eax); /* 0x15090D7A: push eax */
    PUSH32(esp, eax); /* 0x15090D7B: push eax */
    PUSH32(esp, eax); /* 0x15090D7C: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090D7D: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090D82: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090D85:
    ecx = esi; /* 0x15090D85: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090D87: lea edx, [ecx + 1] */
L_15090D8A:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090D8A: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090D8C: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090D8D: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090D8A; /* 0x15090D8F: jne 0x15090d8a */
L_15090D91:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090D91: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x15090D93: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090D95: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090D96: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0xA0) = esi; /* 0x15090D98: mov dword ptr [ebx + 0xa0], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090D9E: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0xA0)); /* 0x15090DA0: push dword ptr [edi + 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x15090DA6: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090DA9: push eax */
    PUSH32(esp, esi); /* 0x15090DAA: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090DAB: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090DB0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090DB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090DC6; /* 0x15090DB5: je 0x15090dc6 */
L_15090DB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090DB7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090DB9: push eax */
    PUSH32(esp, eax); /* 0x15090DBA: push eax */
    PUSH32(esp, eax); /* 0x15090DBB: push eax */
    PUSH32(esp, eax); /* 0x15090DBC: push eax */
    PUSH32(esp, eax); /* 0x15090DBD: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090DBE: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090DC3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090DC6:
    ecx = esi; /* 0x15090DC6: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090DC8: lea edx, [ecx + 1] */
L_15090DCB:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090DCB: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090DCD: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090DCE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090DCB; /* 0x15090DD0: jne 0x15090dcb */
L_15090DD2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090DD2: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x15090DD4: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090DD6: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x15090DD7: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0xA4) = esi; /* 0x15090DD9: mov dword ptr [ebx + 0xa4], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15090DDF: sub eax, esi */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0xA4)); /* 0x15090DE1: push dword ptr [edi + 0xa4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x15090DE7: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090DEA: push eax */
    PUSH32(esp, esi); /* 0x15090DEB: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x15090DEC: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090DF1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090DF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090E07; /* 0x15090DF6: je 0x15090e07 */
L_15090DF8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090DF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090DFA: push eax */
    PUSH32(esp, eax); /* 0x15090DFB: push eax */
    PUSH32(esp, eax); /* 0x15090DFC: push eax */
    PUSH32(esp, eax); /* 0x15090DFD: push eax */
    PUSH32(esp, eax); /* 0x15090DFE: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090DFF: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090E04: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090E07:
    ecx = esi; /* 0x15090E07: mov ecx, esi */
    edx = ecx + 0x1; /* 0x15090E09: lea edx, [ecx + 1] */
L_15090E0C:
    SET_LO8(eax, MEM8(ecx)); /* 0x15090E0C: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090E0E: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15090E0F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090E0C; /* 0x15090E11: jne 0x15090e0c */
L_15090E13:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15090E13: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ebx; /* 0x15090E15: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090E17: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x15090E18: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebx + 0xA8) = ecx; /* 0x15090E1A: mov dword ptr [ebx + 0xa8], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15090E20: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(edi + 0xA8)); /* 0x15090E22: push dword ptr [edi + 0xa8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x15090E28: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15090E2B: push eax */
    PUSH32(esp, ecx); /* 0x15090E2C: push ecx */
    RECOMP_CALL(sub_1508E640); /* 0x15090E2D: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15090E32: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090E35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090E48; /* 0x15090E37: je 0x15090e48 */
L_15090E39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15090E39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15090E3B: push eax */
    PUSH32(esp, eax); /* 0x15090E3C: push eax */
    PUSH32(esp, eax); /* 0x15090E3D: push eax */
    PUSH32(esp, eax); /* 0x15090E3E: push eax */
    PUSH32(esp, eax); /* 0x15090E3F: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15090E40: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090E45: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090E48:
    /* cmp MEM8(ebp + (-0x1C)), 0 */ /* 0x15090E48: cmp byte ptr [ebp - 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090E55; /* 0x15090E4C: je 0x15090e55 */
L_15090E4E:
    eax = MEM32(ebp + (-0x20)); /* 0x15090E4E: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15090E51: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15090E55:
    edi = POP32_VAL(esp); /* 0x15090E55: pop edi */
    esi = POP32_VAL(esp); /* 0x15090E56: pop esi */
    eax = ebx; /* 0x15090E57: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15090E59: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15090E5A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090E5B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15090E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15090E70u);

L_15090E70:
    edi = edi; /* 0x15090E70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15090E72: push ebp */
    ebp = esp; /* 0x15090E73: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15090E75: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15090E77: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090E7A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15090E7D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15090E80: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15090E83: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15090E96); /* 0x15090E86: call 0x15090e96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15090E8B: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15090E8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090E8F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15090E96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15090E96u);

L_15090E96:
    edi = edi; /* 0x15090E96: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15090E98: push ebp */
    ebp = esp; /* 0x15090E99: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15090E9B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x18); /* 0x15090E9E: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x15090EA1: push ebx */
    PUSH32(esp, esi); /* 0x15090EA2: push esi */
    PUSH32(esp, edi); /* 0x15090EA3: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15090EA4: push dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0x8); /* 0x15090EA7: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15090EAA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1502F870); /* 0x15090EAC: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x15090EB1: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15090EB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090FA3; /* 0x15090EB6: je 0x15090fa3 */
L_15090EBC:
    ecx = MEM32(ebp + 0xC); /* 0x15090EBC: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x15090EBF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090FA3; /* 0x15090EC1: je 0x15090fa3 */
L_15090EC7:
    esi = MEM32(ebp + 0x10); /* 0x15090EC7: mov esi, dword ptr [ebp + 0x10] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15090ECA: mov byte ptr [eax], bl */
    /* test esi, esi */ /* 0x15090ECC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090FA3; /* 0x15090ECE: je 0x15090fa3 */
L_15090ED4:
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x15090ED4: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15090EE5; /* 0x15090ED7: jne 0x15090ee5 */
L_15090ED9:
    eax = MEM32(ebp + (-0x18)); /* 0x15090ED9: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0xD4); /* 0x15090EDC: mov eax, dword ptr [eax + 0xd4] */
    MEM32(ebp + 0x18) = eax; /* 0x15090EE2: mov dword ptr [ebp + 0x18], eax */
L_15090EE5:
    eax = ecx; /* 0x15090EE5: mov eax, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x15090EE7: mov dword ptr [ebp - 4], eax */
L_15090EEA:
    SET_LO8(edx, MEM8(esi)); /* 0x15090EEA: mov dl, byte ptr [esi] */
    SET_LO8(ecx, LO8(edx)); /* 0x15090EEC: mov cl, dl */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15090EEE: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090F8C; /* 0x15090EF0: je 0x15090f8c */
L_15090EF6:
    /* cmp LO8(ecx), 0x25u */ /* 0x15090EF6: cmp cl, 0x25 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x25u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090F44; /* 0x15090EF9: je 0x15090f44 */
L_15090EFB:
    eax = ebp + (-0x18); /* 0x15090EFB: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15090EFE: push eax */
    eax = (int32_t)(int8_t)LO8(edx); /* 0x15090EFF: movsx eax, dl */
    PUSH32(esp, eax); /* 0x15090F02: push eax */
    RECOMP_CALL(sub_15031550); /* 0x15090F03: call 0x15031550 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15090F08: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15090F09: pop ecx */
    /* test eax, eax */ /* 0x15090F0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090F31; /* 0x15090F0C: je 0x15090f31 */
L_15090F0E:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x15090F0E: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15090F31; /* 0x15090F12: jbe 0x15090f31 */
L_15090F14:
    /* cmp MEM8(esi + 0x1), LO8(ebx) */ /* 0x15090F14: cmp byte ptr [esi + 1], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090FA1; /* 0x15090F17: je 0x15090fa1 */
L_15090F1D:
    eax = MEM32(ebp + 0x8); /* 0x15090F1D: mov eax, dword ptr [ebp + 8] */
    SET_LO8(ecx, MEM8(esi)); /* 0x15090F20: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090F22: inc esi */
    _flag_k = FK_INC;
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x15090F23: mov byte ptr [eax], cl */
    ecx = MEM32(ebp + 0x8); /* 0x15090F25: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090F28: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x15090F29: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = ecx; /* 0x15090F2C: mov dword ptr [ebp + 8], ecx */
    goto L_15090F34; /* 0x15090F2F: jmp 0x15090f34 */
L_15090F31:
    ecx = MEM32(ebp + 0x8); /* 0x15090F31: mov ecx, dword ptr [ebp + 8] */
L_15090F34:
    SET_LO8(eax, MEM8(esi)); /* 0x15090F34: mov al, byte ptr [esi] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x15090F36: mov byte ptr [ecx], al */
    eax = MEM32(ebp + (-0x4)); /* 0x15090F38: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x15090F3B: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15090F3E: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x15090F3F: mov dword ptr [ebp - 4], eax */
    goto L_15090F83; /* 0x15090F42: jmp 0x15090f83 */
L_15090F44:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x15090F44: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090FA3; /* 0x15090F47: je 0x15090fa3 */
L_15090F49:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090F49: inc esi */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x15090F4A: mov ecx, ebx */
    SET_LO8(eax, MEM8(esi)); /* 0x15090F4C: mov al, byte ptr [esi] */
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(eax)); /* 0x15090F4E: mov byte ptr [ebp - 8], al */
    /* cmp LO8(eax), 0x23u */ /* 0x15090F51: cmp al, 0x23 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15090F5E; /* 0x15090F53: jne 0x15090f5e */
L_15090F55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15090F55: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15090F57: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090F58: inc esi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(esi)); /* 0x15090F59: mov al, byte ptr [esi] */
    MEM8(ebp + (-0x8)) = (uint8_t)(LO8(eax)); /* 0x15090F5B: mov byte ptr [ebp - 8], al */
L_15090F5E:
    PUSH32(esp, ecx); /* 0x15090F5E: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15090F5F: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x4); /* 0x15090F62: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15090F65: push eax */
    eax = ebp + 0x8; /* 0x15090F66: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x15090F69: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090F6A: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x18); /* 0x15090F6D: lea eax, [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x15090F70: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x15090F73: push eax */
    RECOMP_CALL(sub_1508FE1F); /* 0x15090F74: call 0x1508fe1f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x15090F79: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15090F7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x15090F7E: mov eax, dword ptr [ebp - 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090F9D; /* 0x15090F81: je 0x15090f9d */
L_15090F83:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15090F83: inc esi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x15090F84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15090EEA; /* 0x15090F86: jne 0x15090eea */
L_15090F8C:
    /* test eax, eax */ /* 0x15090F8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090FCF; /* 0x15090F8E: je 0x15090fcf */
L_15090F90:
    eax = MEM32(ebp + 0x8); /* 0x15090F90: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15090F93: mov byte ptr [eax], bl */
    ebx = MEM32(ebp + 0xC); /* 0x15090F95: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x4)); /* 0x15090F98: sub ebx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    goto L_15090FBB; /* 0x15090F9B: jmp 0x15090fbb */
L_15090F9D:
    /* test eax, eax */ /* 0x15090F9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15090FCF; /* 0x15090F9F: je 0x15090fcf */
L_15090FA1:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15090FA1: mov byte ptr [edi], bl */
L_15090FA3:
    RECOMP_CALL(sub_15036430); /* 0x15090FA3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x15090FA8: push ebx */
    PUSH32(esp, ebx); /* 0x15090FA9: push ebx */
    PUSH32(esp, ebx); /* 0x15090FAA: push ebx */
    PUSH32(esp, ebx); /* 0x15090FAB: push ebx */
    PUSH32(esp, ebx); /* 0x15090FAC: push ebx */
    MEM32(eax) = 0x16u; /* 0x15090FAD: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15090FB3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15090FB8: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15090FBB:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x15090FBB: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15090FC8; /* 0x15090FBF: je 0x15090fc8 */
L_15090FC1:
    ecx = MEM32(ebp + (-0x10)); /* 0x15090FC1: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15090FC4: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15090FC8:
    edi = POP32_VAL(esp); /* 0x15090FC8: pop edi */
    esi = POP32_VAL(esp); /* 0x15090FC9: pop esi */
    eax = ebx; /* 0x15090FCA: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x15090FCC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15090FCD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15090FCE: ret  */
L_15090FCF:
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x15090FCF: mov byte ptr [edi], bl */
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x15090FD1: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15090FA3; /* 0x15090FD4: ja 0x15090fa3 */
L_15090FD6:
    RECOMP_CALL(sub_15036430); /* 0x15090FD6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x15090FDB: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_15090FBB; /* 0x15090FE1: jmp 0x15090fbb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15090FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15090FF0u);

L_15090FF0:
    edi = edi; /* 0x15090FF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15090FF2: push ebp */
    ebp = esp; /* 0x15090FF3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15090FF5: push 0 */
    PUSH32(esp, 0); /* 0x15090FF7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15090FF9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15090FFC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15090FFF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15091002: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15090E96); /* 0x15091005: call 0x15090e96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1509100A: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1509100D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509100E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15091015(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091015u);

L_15091015:
    edi = edi; /* 0x15091015: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15091017: push ebp */
    ebp = esp; /* 0x15091018: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1509101A: push ecx */
    eax = (uint32_t)MEM16(ebp + 0xC); /* 0x1509101B: movzx eax, word ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1509101F: push ebx */
    PUSH32(esp, esi); /* 0x15091020: push esi */
    PUSH32(esp, edi); /* 0x15091021: push edi */
    /* cmp eax, 0x59u */ /* 0x15091022: cmp eax, 0x59 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x59u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091203; /* 0x15091025: ja 0x15091203 */
L_1509102B:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150911CC; /* 0x1509102B: je 0x150911cc */
L_15091031:
    /* cmp eax, 0x49u */ /* 0x15091031: cmp eax, 0x49 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091115; /* 0x15091034: ja 0x15091115 */
L_1509103A:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150910EA; /* 0x1509103A: je 0x150910ea */
L_15091040:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x15091040: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509149E; /* 0x15091043: je 0x1509149e */
L_15091049:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 9; /* 0x15091049: sub eax, 9 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509149E; /* 0x1509104C: je 0x1509149e */
L_15091052:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x18u; /* 0x15091052: sub eax, 0x18 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150910D2; /* 0x15091055: je 0x150910d2 */
L_15091057:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Cu; /* 0x15091057: sub eax, 0x1c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150910AE; /* 0x1509105A: je 0x150910ae */
L_1509105C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509105C: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509108A; /* 0x1509105F: je 0x1509108a */
L_15091061:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x15091061: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091353; /* 0x15091064: jne 0x15091353 */
L_1509106A:
    eax = MEM32(ebp + 0x10); /* 0x1509106A: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x1509106D: mov eax, dword ptr [eax + 8] */
    /* cmp eax, 0x17u */ /* 0x15091070: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_15091073:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_15091339; /* 0x15091073: ja 0x15091339 */
L_15091079:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15091079: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1509107C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509107F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x15091082: push 2 */
L_15091084:
    PUSH32(esp, eax); /* 0x15091084: push eax */
    goto L_15091280; /* 0x15091085: jmp 0x15091280 */
L_1509108A:
    eax = MEM32(ebp + 0x10); /* 0x1509108A: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x1509108D: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 0xBu */ /* 0x15091090: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x15091093: ja 0x15091339 */
L_15091099:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091099: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1509109C: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509109F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0x120)); /* 0x150910A2: push dword ptr [eax + ecx*4 + 0x120] */
    goto L_15091496; /* 0x150910A9: jmp 0x15091496 */
L_150910AE:
    eax = MEM32(ebp + 0x10); /* 0x150910AE: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x18); /* 0x150910B1: mov ecx, dword ptr [eax + 0x18] */
    /* cmp ecx, 6 */ /* 0x150910B4: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x150910B7: ja 0x15091339 */
L_150910BD:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150910BD: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x150910C0: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150910C3: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0xD4)); /* 0x150910C6: push dword ptr [eax + ecx*4 + 0xd4] */
    goto L_15091496; /* 0x150910CD: jmp 0x15091496 */
L_150910D2:
    ecx = MEM32(ebp + 0x14); /* 0x150910D2: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x25u); /* 0x150910D5: push 0x25 */
    edx = POP32_VAL(esp); /* 0x150910D7: pop edx */
    eax = MEM32(ecx); /* 0x150910D8: mov eax, dword ptr [ecx] */
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x150910DA: mov word ptr [eax], dx */
    eax = MEM32(ebp + 0x18); /* 0x150910DD: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + 2; /* 0x150910E0: add dword ptr [ecx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x150910E3: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    goto L_1509149E; /* 0x150910E5: jmp 0x1509149e */
L_150910EA:
    eax = MEM32(ebp + 0x10); /* 0x150910EA: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x150910ED: mov eax, dword ptr [eax + 8] */
    /* cmp eax, 0x17u */ /* 0x150910F0: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x150910F3: ja 0x15091339 */
L_150910F9:
    PUSH32(esp, 0xCu); /* 0x150910F9: push 0xc */
    ecx = POP32_VAL(esp); /* 0x150910FB: pop ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150910FC: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x150910FD: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x150910FF: push dword ptr [ebp + 0x20] */
    /* test edx, edx */ /* 0x15091102: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091104: push dword ptr [ebp + 0x18] */
    if (TEST_Z(_flag_a, _flag_b)) { edx = ecx; } /* 0x15091107: cmove edx, ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509110A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1509110D: push 2 */
L_1509110F:
    PUSH32(esp, edx); /* 0x1509110F: push edx */
    goto L_15091280; /* 0x15091110: jmp 0x15091280 */
L_15091115:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x4Du; /* 0x15091115: sub eax, 0x4d */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150911BE; /* 0x15091118: je 0x150911be */
L_1509111E:
    PUSH32(esp, 6); /* 0x1509111E: push 6 */
    ecx = POP32_VAL(esp); /* 0x15091120: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091121: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150911B7; /* 0x15091123: je 0x150911b7 */
L_15091129:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15091129: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509112A: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509117B; /* 0x1509112D: je 0x1509117b */
L_1509112F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1509112F: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15091130: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091164; /* 0x15091133: je 0x15091164 */
L_15091135:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15091135: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091353; /* 0x15091138: jne 0x15091353 */
L_1509113E:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1509113E: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091141: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15091144: push dword ptr [ebp + 0x14] */
L_15091147:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15091147: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 2); /* 0x1509114A: push 2 */
L_1509114C:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1509114C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150915BE); /* 0x1509114F: call 0x150915be */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15091154: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15091157: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091353; /* 0x15091159: je 0x15091353 */
L_1509115F:
    goto L_1509149E; /* 0x1509115F: jmp 0x1509149e */
L_15091164:
    eax = MEM32(ebp + 0x10); /* 0x15091164: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(eax + 0x18); /* 0x15091167: mov edx, dword ptr [eax + 0x18] */
    /* cmp edx, ecx */ /* 0x1509116A: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x1509116C: ja 0x15091339 */
L_15091172:
    /* test edx, edx */ /* 0x15091172: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509118A; /* 0x15091174: je 0x1509118a */
L_15091176:
    ecx = edx + (-0x1); /* 0x15091176: lea ecx, [edx - 1] */
    goto L_1509118A; /* 0x15091179: jmp 0x1509118a */
L_1509117B:
    eax = MEM32(ebp + 0x10); /* 0x1509117B: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM32(eax + 0x18), ecx */ /* 0x1509117E: cmp dword ptr [eax + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x15091181: ja 0x15091339 */
L_15091187:
    ecx = MEM32(eax + 0x18); /* 0x15091187: mov ecx, dword ptr [eax + 0x18] */
L_1509118A:
    eax = MEM32(eax + 0x1C); /* 0x1509118A: mov eax, dword ptr [eax + 0x1c] */
    /* cmp eax, 0x16Du */ /* 0x1509118D: cmp eax, 0x16d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x15091192: ja 0x15091339 */
L_15091198:
    /* cmp eax, ecx */ /* 0x15091198: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150911A3; /* 0x1509119A: jge 0x150911a3 */
L_1509119C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509119C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15091079; /* 0x1509119E: jmp 0x15091079 */
L_150911A3:
    PUSH32(esp, 7); /* 0x150911A3: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150911A5: cdq  */
    esi = POP32_VAL(esp); /* 0x150911A6: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x150911A7: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, ecx */ /* 0x150911A9: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15091079; /* 0x150911AB: jl 0x15091079 */
L_150911B1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150911B1: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15091079; /* 0x150911B2: jmp 0x15091079 */
L_150911B7:
    eax = MEM32(ebp + 0x10); /* 0x150911B7: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax); /* 0x150911BA: mov eax, dword ptr [eax] */
    goto L_150911C4; /* 0x150911BC: jmp 0x150911c4 */
L_150911BE:
    eax = MEM32(ebp + 0x10); /* 0x150911BE: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x150911C1: mov eax, dword ptr [eax + 4] */
L_150911C4:
    /* cmp eax, 0x3Bu */ /* 0x150911C4: cmp eax, 0x3b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_15091073; /* 0x150911C7: jmp 0x15091073 */
L_150911CC:
    eax = MEM32(ebp + 0x10); /* 0x150911CC: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x14); /* 0x150911CF: mov ecx, dword ptr [eax + 0x14] */
    eax = ecx + 0x76C; /* 0x150911D2: lea eax, [ecx + 0x76c] */
    /* cmp eax, 0x270Fu */ /* 0x150911D8: cmp eax, 0x270f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x270Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x150911DD: ja 0x15091339 */
L_150911E3:
    PUSH32(esp, 0x64u); /* 0x150911E3: push 0x64 */
    eax = ecx; /* 0x150911E5: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x150911E7: pop ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150911E8: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x150911E9: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x150911EB: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x13u; /* 0x150911EE: add eax, 0x13 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150911F1: push dword ptr [ebp + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64u); /* 0x150911F4: imul eax, eax, 0x64 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150911F7: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 4); /* 0x150911FA: push 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x150911FC: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15091084; /* 0x150911FE: jmp 0x15091084 */
L_15091203:
    /* cmp eax, 0x6Du */ /* 0x15091203: cmp eax, 0x6d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1509137F; /* 0x15091206: ja 0x1509137f */
L_1509120C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509136F; /* 0x1509120C: je 0x1509136f */
L_15091212:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x5Au; /* 0x15091212: sub eax, 0x5a */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150913A4; /* 0x15091215: je 0x150913a4 */
L_1509121B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x1509121B: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509132E; /* 0x1509121E: je 0x1509132e */
L_15091224:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15091224: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509130E; /* 0x15091227: je 0x1509130e */
L_1509122D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509122D: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509128D; /* 0x15091230: je 0x1509128d */
L_15091232:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15091232: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091262; /* 0x15091235: je 0x15091262 */
L_15091237:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x15091237: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091353; /* 0x1509123A: jne 0x15091353 */
L_15091240:
    eax = MEM32(ebp + 0x10); /* 0x15091240: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x1C); /* 0x15091243: mov eax, dword ptr [eax + 0x1c] */
    /* cmp eax, 0x16Du */ /* 0x15091246: cmp eax, 0x16d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x1509124B: ja 0x15091339 */
L_15091251:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15091251: push dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15091254: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091255: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15091258: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 3); /* 0x1509125B: push 3 */
    RECOMP_BACKEDGE();
    goto L_15091084; /* 0x1509125D: jmp 0x15091084 */
L_15091262:
    eax = MEM32(ebp + 0x10); /* 0x15091262: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0xC); /* 0x15091265: mov ecx, dword ptr [eax + 0xc] */
    eax = ecx + (-0x1); /* 0x15091268: lea eax, [ecx - 1] */
    /* cmp eax, 0x1Eu */ /* 0x1509126B: cmp eax, 0x1e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x1509126E: ja 0x15091339 */
L_15091274:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15091274: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091277: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509127A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1509127D: push 2 */
    PUSH32(esp, ecx); /* 0x1509127F: push ecx */
L_15091280:
    RECOMP_CALL(sub_150914AC); /* 0x15091280: call 0x150914ac */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091285: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1509149E; /* 0x15091288: jmp 0x1509149e */
L_1509128D:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1509128D: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15091291: push dword ptr [ebp + 0x1c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150912D6; /* 0x15091294: je 0x150912d6 */
L_15091296:
    esi = MEM32(ebp + 0x18); /* 0x15091296: mov esi, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0x14); /* 0x15091299: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1509129C: push esi */
    PUSH32(esp, edi); /* 0x1509129D: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1509129E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x150912A1: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150912A3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150915BE); /* 0x150912A6: call 0x150915be */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150912AB: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150912AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091353; /* 0x150912B0: je 0x15091353 */
L_150912B6:
    /* cmp MEM32(esi), 0 */ /* 0x150912B6: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091353; /* 0x150912B9: je 0x15091353 */
L_150912BF:
    eax = MEM32(edi); /* 0x150912BF: mov eax, dword ptr [edi] */
    PUSH32(esp, 0x20u); /* 0x150912C1: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x150912C3: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150912C4: push dword ptr [ebp + 0x1c] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x150912C7: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 2; /* 0x150912CA: add dword ptr [edi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x150912CD: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x150912CF: push esi */
    PUSH32(esp, edi); /* 0x150912D0: push edi */
    RECOMP_BACKEDGE();
    goto L_15091147; /* 0x150912D1: jmp 0x15091147 */
L_150912D6:
    edi = MEM32(ebp + 0x18); /* 0x150912D6: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150912D9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + 0x14); /* 0x150912DB: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x150912DE: push edi */
    PUSH32(esp, ebx); /* 0x150912DF: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150912E0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x150912E3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150912E4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150915BE); /* 0x150912E7: call 0x150915be */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150912EC: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150912EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091353; /* 0x150912F1: je 0x15091353 */
L_150912F3:
    /* cmp MEM32(edi), esi */ /* 0x150912F3: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091353; /* 0x150912F5: je 0x15091353 */
L_150912F7:
    eax = MEM32(ebx); /* 0x150912F7: mov eax, dword ptr [ebx] */
    PUSH32(esp, 0x20u); /* 0x150912F9: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x150912FB: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150912FC: push dword ptr [ebp + 0x1c] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x150912FF: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + 2; /* 0x15091302: add dword ptr [ebx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    MEM32(edi) = MEM32(edi) - 1; /* 0x15091305: dec dword ptr [edi] */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x15091307: push edi */
    PUSH32(esp, ebx); /* 0x15091308: push ebx */
    RECOMP_BACKEDGE();
    goto L_15091147; /* 0x15091309: jmp 0x15091147 */
L_1509130E:
    eax = MEM32(ebp + 0x10); /* 0x1509130E: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x15091311: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 0xBu */ /* 0x15091314: cmp ecx, 0xb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x15091317: ja 0x15091339 */
L_15091319:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091319: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1509131C: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509131F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0xF0)); /* 0x15091322: push dword ptr [eax + ecx*4 + 0xf0] */
    goto L_15091496; /* 0x15091329: jmp 0x15091496 */
L_1509132E:
    eax = MEM32(ebp + 0x10); /* 0x1509132E: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x18); /* 0x15091331: mov ecx, dword ptr [eax + 0x18] */
    /* cmp ecx, 6 */ /* 0x15091334: cmp ecx, 6 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509135A; /* 0x15091337: jbe 0x1509135a */
L_15091339:
    RECOMP_CALL(sub_15036430); /* 0x15091339: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1509133E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15091340: push esi */
    PUSH32(esp, esi); /* 0x15091341: push esi */
    PUSH32(esp, esi); /* 0x15091342: push esi */
    PUSH32(esp, esi); /* 0x15091343: push esi */
    PUSH32(esp, esi); /* 0x15091344: push esi */
    MEM32(eax) = 0x16u; /* 0x15091345: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1509134B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091350: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15091353:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091353: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150914A1; /* 0x15091355: jmp 0x150914a1 */
L_1509135A:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1509135A: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x1C); /* 0x1509135D: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15091360: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + ecx * 4 + 0xB8)); /* 0x15091363: push dword ptr [eax + ecx*4 + 0xb8] */
    goto L_15091496; /* 0x1509136A: jmp 0x15091496 */
L_1509136F:
    eax = MEM32(ebp + 0x10); /* 0x1509136F: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x10); /* 0x15091372: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, 0xBu */ /* 0x15091375: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x15091378: ja 0x15091339 */
L_1509137A:
    RECOMP_BACKEDGE();
    goto L_150911B1; /* 0x1509137A: jmp 0x150911b1 */
L_1509137F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x70u; /* 0x1509137F: sub eax, 0x70 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091468; /* 0x15091382: je 0x15091468 */
L_15091388:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 7; /* 0x15091388: sub eax, 7 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091449; /* 0x1509138B: je 0x15091449 */
L_15091391:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15091391: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091429; /* 0x15091394: je 0x15091429 */
L_1509139A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509139A: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091405; /* 0x1509139D: je 0x15091405 */
L_1509139F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1509139F: sub eax, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091353; /* 0x150913A2: jne 0x15091353 */
L_150913A4:
    RECOMP_CALL(sub_150943C7); /* 0x150913A4: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x150913A9: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150913AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150913AE: push dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x18); /* 0x150913B1: mov edi, dword ptr [ebp + 0x18] */
    ebx = MEM32(ebp + 0x14); /* 0x150913B4: mov ebx, dword ptr [ebp + 0x14] */
    eax = MEM32(eax + 0x20); /* 0x150913B7: mov eax, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x150913BA: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x150913BC: mov dword ptr [ebp - 4], esi */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x150913BF: push -1 */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x150913C1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x150913C3: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + 0x150BC9EC)); /* 0x150913C6: push dword ptr [eax + 0x150bc9ec] */
    eax = ebp + (-0x4); /* 0x150913CC: lea eax, [ebp - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x150913CF: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebx)); /* 0x150913D1: push dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x150913D3: push eax */
    RECOMP_CALL(sub_15031C60); /* 0x150913D4: call 0x15031c60 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150913D9: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150913DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150913ED; /* 0x150913DE: je 0x150913ed */
L_150913E0:
    PUSH32(esp, esi); /* 0x150913E0: push esi */
    PUSH32(esp, esi); /* 0x150913E1: push esi */
    PUSH32(esp, esi); /* 0x150913E2: push esi */
    PUSH32(esp, esi); /* 0x150913E3: push esi */
    PUSH32(esp, esi); /* 0x150913E4: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150913E5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150913EA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150913ED:
    ecx = MEM32(ebp + (-0x4)); /* 0x150913ED: mov ecx, dword ptr [ebp - 4] */
    eax = ecx * 2 + (-0x2); /* 0x150913F0: lea eax, [ecx*2 - 2] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x150913F7: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150913F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150913FB: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x150913FC: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + eax; /* 0x150913FE: add dword ptr [edi], eax */
    _flag_k = FK_ADD;
    goto L_1509149E; /* 0x15091400: jmp 0x1509149e */
L_15091405:
    eax = MEM32(ebp + 0x10); /* 0x15091405: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x14); /* 0x15091408: mov eax, dword ptr [eax + 0x14] */
    /* test eax, eax */ /* 0x1509140B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15091339; /* 0x1509140D: js 0x15091339 */
L_15091413:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15091413: push dword ptr [ebp + 0x20] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15091416: cdq  */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091417: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509141A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 2); /* 0x1509141D: push 2 */
    PUSH32(esp, 0x64u); /* 0x1509141F: push 0x64 */
    ecx = POP32_VAL(esp); /* 0x15091421: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15091422: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    RECOMP_BACKEDGE();
    goto L_1509110F; /* 0x15091424: jmp 0x1509110f */
L_15091429:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x15091429: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1509142D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091430: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15091433: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15091436: push dword ptr [ebp + 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091442; /* 0x15091439: je 0x15091442 */
L_1509143B:
    PUSH32(esp, 1); /* 0x1509143B: push 1 */
    RECOMP_BACKEDGE();
    goto L_1509114C; /* 0x1509143D: jmp 0x1509114c */
L_15091442:
    PUSH32(esp, 0); /* 0x15091442: push 0 */
    RECOMP_BACKEDGE();
    goto L_1509114C; /* 0x15091444: jmp 0x1509114c */
L_15091449:
    eax = MEM32(ebp + 0x10); /* 0x15091449: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x18); /* 0x1509144C: mov eax, dword ptr [eax + 0x18] */
    /* cmp eax, 6 */ /* 0x1509144F: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x15091452: ja 0x15091339 */
L_15091458:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15091458: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1509145B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509145E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 1); /* 0x15091461: push 1 */
    RECOMP_BACKEDGE();
    goto L_15091084; /* 0x15091463: jmp 0x15091084 */
L_15091468:
    eax = MEM32(ebp + 0x10); /* 0x15091468: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x8); /* 0x1509146B: mov eax, dword ptr [eax + 8] */
    /* cmp eax, 0x17u */ /* 0x1509146E: cmp eax, 0x17 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_15091339; /* 0x15091471: ja 0x15091339 */
L_15091477:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15091477: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509147A: push dword ptr [ebp + 0x14] */
    /* cmp eax, 0xBu */ /* 0x1509147D: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1509148D; /* 0x15091480: jg 0x1509148d */
L_15091482:
    eax = MEM32(ebp + 0x1C); /* 0x15091482: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(eax + 0x150)); /* 0x15091485: push dword ptr [eax + 0x150] */
    goto L_15091496; /* 0x1509148B: jmp 0x15091496 */
L_1509148D:
    ecx = MEM32(ebp + 0x1C); /* 0x1509148D: mov ecx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ecx + 0x154)); /* 0x15091490: push dword ptr [ecx + 0x154] */
L_15091496:
    RECOMP_CALL(sub_15091585); /* 0x15091496: call 0x15091585 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509149B: add esp, 0xc */
    _flag_k = FK_ADD;
L_1509149E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509149E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150914A0: inc eax */
    _flag_k = FK_INC;
L_150914A1:
    edi = POP32_VAL(esp); /* 0x150914A1: pop edi */
    esi = POP32_VAL(esp); /* 0x150914A2: pop esi */
    ebx = POP32_VAL(esp); /* 0x150914A3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150914A4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150914A5: ret  */
    RECOMP_REGS_OUT();
}

void sub_150914AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150914ACu);

L_150914AC:
    edi = edi; /* 0x150914AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150914AE: push ebp */
    ebp = esp; /* 0x150914AF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150914B1: push ecx */
    PUSH32(esp, ebx); /* 0x150914B2: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150914B3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150914B5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150914B6: mov esi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x150914B9: mov eax, esi */
    /* cmp MEM32(ebp + 0x18), ebx */ /* 0x150914BB: cmp dword ptr [ebp + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150914D3; /* 0x150914BE: je 0x150914d3 */
L_150914C0:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150914C0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150914C3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150914C6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15091524); /* 0x150914C9: call 0x15091524 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150914CE: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1509151A; /* 0x150914D1: jmp 0x1509151a */
L_150914D3:
    PUSH32(esp, edi); /* 0x150914D3: push edi */
    edi = MEM32(ebp + 0x14); /* 0x150914D4: mov edi, dword ptr [ebp + 0x14] */
    /* cmp esi, MEM32(edi) */ /* 0x150914D7: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15091517; /* 0x150914D9: jae 0x15091517 */
L_150914DB:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x150914DB: dec esi */
    _flag_k = FK_DEC;
    /* test eax, eax */ /* 0x150914DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509150B; /* 0x150914DE: je 0x1509150b */
L_150914E0:
    eax = MEM32(ebp + 0x8); /* 0x150914E0: mov eax, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0x10); /* 0x150914E3: mov edi, dword ptr [ebp + 0x10] */
L_150914E6:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150914E6: cdq  */
    ecx = esi; /* 0x150914E7: mov ecx, esi */
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x150914E9: mov dword ptr [ebp - 4], 0xa */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x150914F0: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebp + (-0x4)) = eax; /* 0x150914F3: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x30u; /* 0x150914F6: add edx, 0x30 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x150914F9: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x150914FB: inc ebx */
    _flag_k = FK_INC;
    MEM16(eax + esi * 2) = (uint16_t)(LO16(edx)); /* 0x150914FC: mov word ptr [eax + esi*2], dx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x15091500: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(ebp + (-0x4)); /* 0x15091501: mov eax, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x15091504: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150914E6; /* 0x15091506: jne 0x150914e6 */
L_15091508:
    edi = MEM32(ebp + 0x14); /* 0x15091508: mov edi, dword ptr [ebp + 0x14] */
L_1509150B:
    ecx = MEM32(ebp + 0x10); /* 0x1509150B: mov ecx, dword ptr [ebp + 0x10] */
    eax = ebx + ebx; /* 0x1509150E: lea eax, [ebx + ebx] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx) = MEM32(ecx) + eax; /* 0x15091511: add dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi) = MEM32(edi) - ebx; /* 0x15091513: sub dword ptr [edi], ebx */
    _flag_k = FK_CMP;
    goto L_15091519; /* 0x15091515: jmp 0x15091519 */
L_15091517:
    MEM32(edi) = ebx; /* 0x15091517: mov dword ptr [edi], ebx */
L_15091519:
    edi = POP32_VAL(esp); /* 0x15091519: pop edi */
L_1509151A:
    esi = POP32_VAL(esp); /* 0x1509151A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1509151B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509151C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509151D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15091524(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091524u);

L_15091524:
    edi = edi; /* 0x15091524: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15091526: push ebp */
    ebp = esp; /* 0x15091527: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x15091529: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1509152C: push esi */
    PUSH32(esp, edi); /* 0x1509152D: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1509152E: mov edi, dword ptr [ebp + 0x10] */
    esi = MEM32(ecx); /* 0x15091531: mov esi, dword ptr [ecx] */
    /* cmp MEM32(edi), 1 */ /* 0x15091533: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509155E; /* 0x15091536: jbe 0x1509155e */
L_15091538:
    PUSH32(esp, ebx); /* 0x15091538: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15091539: mov ebx, dword ptr [ebp + 8] */
L_1509153C:
    eax = ebx; /* 0x1509153C: mov eax, ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509153E: cdq  */
    PUSH32(esp, 0xAu); /* 0x1509153F: push 0xa */
    ebx = POP32_VAL(esp); /* 0x15091541: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x15091542: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x15091544: mov ebx, eax */
    eax = edx + 0x30; /* 0x15091546: lea eax, [edx + 0x30] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15091549: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1509154C: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x1509154F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15091551: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = eax; /* 0x15091552: mov dword ptr [edi], eax */
    /* test ebx, ebx */ /* 0x15091554: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1509155D; /* 0x15091556: jle 0x1509155d */
L_15091558:
    /* cmp eax, 1 */ /* 0x15091558: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1509153C; /* 0x1509155B: ja 0x1509153c */
L_1509155D:
    ebx = POP32_VAL(esp); /* 0x1509155D: pop ebx */
L_1509155E:
    edx = MEM32(ecx); /* 0x1509155E: mov edx, dword ptr [ecx] */
    MEM32(ecx) = esi; /* 0x15091560: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x15091562: sub esi, 2 */
    _flag_k = FK_CMP;
L_15091565:
    SET_LO16(eax, MEM16(edx)); /* 0x15091565: mov ax, word ptr [edx] */
    ecx = (uint32_t)MEM16(esi); /* 0x15091568: movzx ecx, word ptr [esi] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1509156B: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 2; /* 0x1509156E: sub esi, 2 */
    _flag_k = FK_CMP;
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x15091571: mov word ptr [edx], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15091574: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x15091577: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15091565; /* 0x15091579: jb 0x15091565 */
L_1509157B:
    edi = POP32_VAL(esp); /* 0x1509157B: pop edi */
    esi = POP32_VAL(esp); /* 0x1509157C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1509157D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509157E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15091585(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091585u);

L_15091585:
    edi = edi; /* 0x15091585: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15091587: push ebp */
    ebp = esp; /* 0x15091588: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x1509158A: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM32(ecx), 0 */ /* 0x1509158D: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150915B6; /* 0x15091590: je 0x150915b6 */
L_15091592:
    edx = MEM32(ebp + 0x8); /* 0x15091592: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15091595: push esi */
    esi = MEM32(ebp + 0xC); /* 0x15091596: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x15091599: push edi */
L_1509159A:
    eax = (uint32_t)MEM16(edx); /* 0x1509159A: movzx eax, word ptr [edx] */
    edi = eax; /* 0x1509159D: mov edi, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x1509159F: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150915B4; /* 0x150915A2: je 0x150915b4 */
L_150915A4:
    eax = MEM32(esi); /* 0x150915A4: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x150915A6: add edx, 2 */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x150915A9: mov word ptr [eax], di */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x150915AC: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x150915AF: sub dword ptr [ecx], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1509159A; /* 0x150915B2: jne 0x1509159a */
L_150915B4:
    edi = POP32_VAL(esp); /* 0x150915B4: pop edi */
    esi = POP32_VAL(esp); /* 0x150915B5: pop esi */
L_150915B6:
    ebp = POP32_VAL(esp); /* 0x150915B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150915B7: ret  */
    RECOMP_REGS_OUT();
}

void sub_150915BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150915BEu);

L_150915BE:
    edi = edi; /* 0x150915BE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150915C0: push ebp */
    ebp = esp; /* 0x150915C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x150915C3: sub esp, 0x38 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150915C6: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150915CB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150915CD: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150915D0: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x150915D3: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0x1C); /* 0x150915D6: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x150915D9: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x150915DA: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x150915DD: push esi */
    esi = MEM32(ebp + 0x14); /* 0x150915DE: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x38)) = eax; /* 0x150915E1: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + 0xC); /* 0x150915E4: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x150915E7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150915E8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = ecx; /* 0x150915EA: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + (-0x2C)) = esi; /* 0x150915ED: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x150915F0: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x20)) = edx; /* 0x150915F3: mov dword ptr [ebp - 0x20], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x150915F6: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509160F; /* 0x150915F8: je 0x1509160f */
L_150915FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150915FA: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091607; /* 0x150915FD: je 0x15091607 */
L_150915FF:
    edi = MEM32(edx + 0x160); /* 0x150915FF: mov edi, dword ptr [edx + 0x160] */
    goto L_15091615; /* 0x15091605: jmp 0x15091615 */
L_15091607:
    edi = MEM32(edx + 0x15C); /* 0x15091607: mov edi, dword ptr [edx + 0x15c] */
    goto L_15091615; /* 0x1509160D: jmp 0x15091615 */
L_1509160F:
    edi = MEM32(edx + 0x158); /* 0x1509160F: mov edi, dword ptr [edx + 0x158] */
L_15091615:
    /* cmp MEM32(edx + 0xB0), 1 */ /* 0x15091615: cmp dword ptr [edx + 0xb0], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0xB0)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091755; /* 0x1509161C: je 0x15091755 */
L_15091622:
    /* cmp MEM32(ebp + 0xC), 2 */ /* 0x15091622: cmp dword ptr [ebp + 0xc], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = 0x76Cu; /* 0x15091626: mov eax, 0x76c */
    ebx = MEM32(0x150C0044); /* 0x1509162B: mov ebx, dword ptr [0x150c0044] */
    if (CMP_NE(_flag_a, _flag_b)) { ebx = MEM32(0x150C0040); } /* 0x15091631: cmovne ebx, dword ptr [0x150c0040] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x14)); /* 0x15091638: add ax, word ptr [ecx + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x1509163C: mov word ptr [ebp - 0x14], ax */
    SET_LO16(eax, MEM16(ecx + 0x10)); /* 0x15091640: mov ax, word ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x15091644: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15091646: mov dword ptr [ebp - 0x1c], ebx */
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x15091649: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ecx + 0xC)); /* 0x1509164D: mov ax, word ptr [ecx + 0xc] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x15091651: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ecx + 0x8)); /* 0x15091655: mov ax, word ptr [ecx + 8] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15091659: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ecx + 0x4)); /* 0x1509165D: mov ax, word ptr [ecx + 4] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15091661: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ecx)); /* 0x15091665: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15091668: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1509166A: push ecx */
    PUSH32(esp, ecx); /* 0x1509166B: push ecx */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x1509166C: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091670: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15091672: push edi */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15091673: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x14); /* 0x15091677: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1509167A: push eax */
    PUSH32(esp, ecx); /* 0x1509167B: push ecx */
    PUSH32(esp, MEM32(edx + 0xAC)); /* 0x1509167C: push dword ptr [edx + 0xac] */
    ecx = ebx; /* 0x15091682: mov ecx, ebx */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15091684: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x1509168A: call ebx */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1509168C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1509168E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509174F; /* 0x15091690: je 0x1509174f */
L_15091696:
    ecx = ebx * 2 + 0x8; /* 0x15091696: lea ecx, [ebx*2 + 8] */
    eax = ebx + ebx; /* 0x1509169D: lea eax, [ebx + ebx] */
    /* cmp ecx, eax */ /* 0x150916A0: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509174F; /* 0x150916A2: jbe 0x1509174f */
L_150916A8:
    /* cmp ecx, 0x400u */ /* 0x150916A8: cmp ecx, 0x400 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150916C9; /* 0x150916AE: ja 0x150916c9 */
L_150916B0:
    eax = ecx; /* 0x150916B0: mov eax, ecx */
    RECOMP_CALL(sub_15069EB0); /* 0x150916B2: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x150916B7: mov esi, esp */
    /* test esi, esi */ /* 0x150916B9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509174F; /* 0x150916BB: je 0x1509174f */
L_150916C1:
    MEM32(esi) = 0xCCCCu; /* 0x150916C1: mov dword ptr [esi], 0xcccc */
    goto L_150916DC; /* 0x150916C7: jmp 0x150916dc */
L_150916C9:
    PUSH32(esp, ecx); /* 0x150916C9: push ecx */
    RECOMP_CALL(sub_15048A30); /* 0x150916CA: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150916CF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x150916D1: pop ecx */
    /* test esi, esi */ /* 0x150916D2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509174F; /* 0x150916D4: je 0x1509174f */
L_150916D6:
    MEM32(esi) = 0xDDDDu; /* 0x150916D6: mov dword ptr [esi], 0xdddd */
L_150916DC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x150916DC: add esi, 8 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x150916DF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509174F; /* 0x150916E1: je 0x1509174f */
L_150916E3:
    ecx = MEM32(ebp + (-0x20)); /* 0x150916E3: mov ecx, dword ptr [ebp - 0x20] */
    eax = ebp + (-0x14); /* 0x150916E6: lea eax, [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x150916E9: push ebx */
    PUSH32(esp, esi); /* 0x150916EA: push esi */
    PUSH32(esp, edi); /* 0x150916EB: push edi */
    edi = MEM32(ebp + (-0x1C)); /* 0x150916EC: mov edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150916EF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150916F1: push eax */
    PUSH32(esp, edx); /* 0x150916F2: push edx */
    PUSH32(esp, MEM32(ecx + 0xAC)); /* 0x150916F3: push dword ptr [ecx + 0xac] */
    ecx = edi; /* 0x150916F9: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x150916FB: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x15091701: call edi */
    RECOMP_FLAGS_IN();
    edi = esi; /* 0x15091703: mov edi, esi */
    edx = eax + (-0x1); /* 0x15091705: lea edx, [eax - 1] */
    /* test edx, edx */ /* 0x15091708: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15091733; /* 0x1509170A: jle 0x15091733 */
L_1509170C:
    ebx = MEM32(ebp + (-0x24)); /* 0x1509170C: mov ebx, dword ptr [ebp - 0x24] */
    edi = MEM32(ebp + (-0x2C)); /* 0x1509170F: mov edi, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x28)) = esi; /* 0x15091712: mov dword ptr [ebp - 0x28], esi */
L_15091715:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091715: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx), eax */ /* 0x15091717: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15091730; /* 0x15091719: jbe 0x15091730 */
L_1509171B:
    eax = MEM32(edi); /* 0x1509171B: mov eax, dword ptr [edi] */
    ecx = (uint32_t)MEM16(esi); /* 0x1509171D: movzx ecx, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15091720: add esi, 2 */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15091723: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi) = MEM32(edi) + 2; /* 0x15091726: add dword ptr [edi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x15091729: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1509172B: dec edx */
    _flag_k = FK_DEC;
    /* test edx, edx */ /* 0x1509172C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15091715; /* 0x1509172E: jg 0x15091715 */
L_15091730:
    edi = MEM32(ebp + (-0x28)); /* 0x15091730: mov edi, dword ptr [ebp - 0x28] */
L_15091733:
    PUSH32(esp, edi); /* 0x15091733: push edi */
    RECOMP_CALL(sub_1504ABA0); /* 0x15091734: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15091739: pop ecx */
L_1509173A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509173A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1509173C: inc eax */
    _flag_k = FK_INC;
L_1509173D:
    esp = ebp + (-0x44); /* 0x1509173D: lea esp, [ebp - 0x44] */
    edi = POP32_VAL(esp); /* 0x15091740: pop edi */
    esi = POP32_VAL(esp); /* 0x15091741: pop esi */
    ebx = POP32_VAL(esp); /* 0x15091742: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x15091743: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15091746: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x15091748: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509174D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509174E: ret  */
L_1509174F:
    ebx = MEM32(ebp + (-0x24)); /* 0x1509174F: mov ebx, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x20)); /* 0x15091752: mov edx, dword ptr [ebp - 0x20] */
L_15091755:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091755: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi), LO16(eax) */ /* 0x15091757: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509173A; /* 0x1509175A: je 0x1509173a */
L_1509175C:
    MEM32(ebp + (-0x30)) = 0x27u; /* 0x1509175C: mov dword ptr [ebp - 0x30], 0x27 */
L_15091763:
    /* cmp MEM32(ebx), eax */ /* 0x15091763: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509173A; /* 0x15091765: je 0x1509173a */
L_15091767:
    MEM32(ebp + (-0x18)) = eax; /* 0x15091767: mov dword ptr [ebp - 0x18], eax */
    ecx = eax; /* 0x1509176A: mov ecx, eax */
    eax = (uint32_t)MEM16(edi); /* 0x1509176C: movzx eax, word ptr [edi] */
    esi = edi; /* 0x1509176F: mov esi, edi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x15091771: mov dword ptr [ebp - 0x1c], edi */
L_15091774:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15091774: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15091777: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM16(esi), LO16(eax) */ /* 0x15091778: cmp word ptr [esi], ax */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091774; /* 0x1509177B: je 0x15091774 */
L_1509177D:
    eax = (uint32_t)MEM16(edi); /* 0x1509177D: movzx eax, word ptr [edi] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15091780: mov dword ptr [ebp - 0x1c], esi */
    ebx = eax; /* 0x15091783: mov ebx, eax */
    esi = MEM32(ebp + (-0x2C)); /* 0x15091785: mov esi, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x34)) = ebx; /* 0x15091788: mov dword ptr [ebp - 0x34], ebx */
    ebx = MEM32(ebp + (-0x24)); /* 0x1509178B: mov ebx, dword ptr [ebp - 0x24] */
    /* cmp eax, 0x64u */ /* 0x1509178E: cmp eax, 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150918C6; /* 0x15091791: ja 0x150918c6 */
L_15091797:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091891; /* 0x15091797: je 0x15091891 */
L_1509179D:
    PUSH32(esp, 0x27u); /* 0x1509179D: push 0x27 */
    edx = POP32_VAL(esp); /* 0x1509179F: pop edx */
    /* cmp eax, edx */ /* 0x150917A0: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091846; /* 0x150917A2: je 0x15091846 */
L_150917A8:
    /* cmp eax, 0x41u */ /* 0x150917A8: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150917C0; /* 0x150917AB: je 0x150917c0 */
L_150917AD:
    /* cmp eax, 0x48u */ /* 0x150917AD: cmp eax, 0x48 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509180E; /* 0x150917B0: je 0x1509180e */
L_150917B2:
    /* cmp eax, 0x4Du */ /* 0x150917B2: cmp eax, 0x4d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150917D9; /* 0x150917B5: je 0x150917d9 */
L_150917B7:
    /* cmp eax, 0x61u */ /* 0x150917B7: cmp eax, 0x61 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150919A7; /* 0x150917BA: jne 0x150919a7 */
L_150917C0:
    PUSH32(esp, 0x1500779Cu); /* 0x150917C0: push 0x1500779c */
    PUSH32(esp, edi); /* 0x150917C5: push edi */
    RECOMP_CALL(sub_1508C930); /* 0x150917C6: call 0x1508c930 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150917CB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150917CC: pop ecx */
    /* test eax, eax */ /* 0x150917CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509182B; /* 0x150917CF: jne 0x1509182b */
L_150917D1:
    ecx = edi + 0xA; /* 0x150917D1: lea ecx, [edi + 0xa] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x150917D4: mov dword ptr [ebp - 0x1c], ecx */
    goto L_15091842; /* 0x150917D7: jmp 0x15091842 */
L_150917D9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150917D9: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150917FF; /* 0x150917DC: je 0x150917ff */
L_150917DE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150917DE: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091804; /* 0x150917E1: je 0x15091804 */
L_150917E3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150917E3: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150917FB; /* 0x150917E6: je 0x150917fb */
L_150917E8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150917E8: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150919A7; /* 0x150917EB: jne 0x150919a7 */
L_150917F1:
    PUSH32(esp, 0x42u); /* 0x150917F1: push 0x42 */
L_150917F3:
    ecx = MEM32(ebp + (-0x18)); /* 0x150917F3: mov ecx, dword ptr [ebp - 0x18] */
    goto L_150919C6; /* 0x150917F6: jmp 0x150919c6 */
L_150917FB:
    PUSH32(esp, 0x62u); /* 0x150917FB: push 0x62 */
    RECOMP_BACKEDGE();
    goto L_150917F3; /* 0x150917FD: jmp 0x150917f3 */
L_150917FF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150917FF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15091801: inc ecx */
    _flag_k = FK_INC;
    goto L_15091807; /* 0x15091802: jmp 0x15091807 */
L_15091804:
    ecx = MEM32(ebp + (-0x18)); /* 0x15091804: mov ecx, dword ptr [ebp - 0x18] */
L_15091807:
    PUSH32(esp, 0x6Du); /* 0x15091807: push 0x6d */
    goto L_150919C6; /* 0x15091809: jmp 0x150919c6 */
L_1509180E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1509180E: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091826; /* 0x15091811: je 0x15091826 */
L_15091813:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15091813: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150919A7; /* 0x15091816: jne 0x150919a7 */
L_1509181C:
    ecx = MEM32(ebp + (-0x18)); /* 0x1509181C: mov ecx, dword ptr [ebp - 0x18] */
L_1509181F:
    PUSH32(esp, 0x48u); /* 0x1509181F: push 0x48 */
    goto L_150919C6; /* 0x15091821: jmp 0x150919c6 */
L_15091826:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15091826: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15091828: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1509181F; /* 0x15091829: jmp 0x1509181f */
L_1509182B:
    PUSH32(esp, 0x150077A8u); /* 0x1509182B: push 0x150077a8 */
    PUSH32(esp, edi); /* 0x15091830: push edi */
    RECOMP_CALL(sub_1508C930); /* 0x15091831: call 0x1508c930 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15091836: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15091837: pop ecx */
    /* test eax, eax */ /* 0x15091838: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15091842; /* 0x1509183A: jne 0x15091842 */
L_1509183C:
    eax = edi + 0x6; /* 0x1509183C: lea eax, [edi + 6] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1509183F: mov dword ptr [ebp - 0x1c], eax */
L_15091842:
    PUSH32(esp, 0x70u); /* 0x15091842: push 0x70 */
    RECOMP_BACKEDGE();
    goto L_150917F3; /* 0x15091844: jmp 0x150917f3 */
L_15091846:
    edi = edi + ecx * 2; /* 0x15091846: lea edi, [edi + ecx*2] */
    /* test LO8(ecx), 1 */ /* 0x15091849: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150919E4; /* 0x1509184C: je 0x150919e4 */
L_15091852:
    eax = (uint32_t)MEM16(edi); /* 0x15091852: movzx eax, word ptr [edi] */
    ecx = eax; /* 0x15091855: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15091857: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509173A; /* 0x1509185A: je 0x1509173a */
L_15091860:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15091860: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15091862:
    /* cmp MEM32(ebx), edx */ /* 0x15091862: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150919E4; /* 0x15091864: je 0x150919e4 */
L_1509186A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1509186A: add edi, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)LO16(eax); /* 0x1509186D: movzx ecx, ax */
    /* cmp LO16(eax), MEM16(ebp + (-0x30)) */ /* 0x15091870: cmp ax, word ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x30))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150919E4; /* 0x15091874: je 0x150919e4 */
L_1509187A:
    eax = MEM32(esi); /* 0x1509187A: mov eax, dword ptr [esi] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1509187C: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x1509187F: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x15091882: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    eax = (uint32_t)MEM16(edi); /* 0x15091884: movzx eax, word ptr [edi] */
    /* test LO16(eax), LO16(eax) */ /* 0x15091887: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15091862; /* 0x1509188A: jne 0x15091862 */
L_1509188C:
    goto L_150919E4; /* 0x1509188C: jmp 0x150919e4 */
L_15091891:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15091891: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150918B7; /* 0x15091894: je 0x150918b7 */
L_15091896:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15091896: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150918BC; /* 0x15091899: je 0x150918bc */
L_1509189B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1509189B: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150918B0; /* 0x1509189E: je 0x150918b0 */
L_150918A0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150918A0: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150919A7; /* 0x150918A3: jne 0x150919a7 */
L_150918A9:
    PUSH32(esp, 0x41u); /* 0x150918A9: push 0x41 */
    RECOMP_BACKEDGE();
    goto L_150917F3; /* 0x150918AB: jmp 0x150917f3 */
L_150918B0:
    PUSH32(esp, 0x61u); /* 0x150918B0: push 0x61 */
    RECOMP_BACKEDGE();
    goto L_150917F3; /* 0x150918B2: jmp 0x150917f3 */
L_150918B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150918B7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150918B9: inc ecx */
    _flag_k = FK_INC;
    goto L_150918BF; /* 0x150918BA: jmp 0x150918bf */
L_150918BC:
    ecx = MEM32(ebp + (-0x18)); /* 0x150918BC: mov ecx, dword ptr [ebp - 0x18] */
L_150918BF:
    PUSH32(esp, 0x64u); /* 0x150918BF: push 0x64 */
    goto L_150919C6; /* 0x150918C1: jmp 0x150919c6 */
L_150918C6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x68u; /* 0x150918C6: sub eax, 0x68 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509199D; /* 0x150918C9: je 0x1509199d */
L_150918CF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x150918CF: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091987; /* 0x150918D2: je 0x15091987 */
L_150918D8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x150918D8: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091971; /* 0x150918DB: je 0x15091971 */
L_150918E1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x150918E1: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1509190D; /* 0x150918E4: je 0x1509190d */
L_150918E6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 5; /* 0x150918E6: sub eax, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150919A7; /* 0x150918E9: jne 0x150919a7 */
L_150918EF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150918EF: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150918F0: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091906; /* 0x150918F3: je 0x15091906 */
L_150918F5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150918F5: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150918F6: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150919A7; /* 0x150918F9: jne 0x150919a7 */
L_150918FF:
    PUSH32(esp, 0x59u); /* 0x150918FF: push 0x59 */
    RECOMP_BACKEDGE();
    goto L_150917F3; /* 0x15091901: jmp 0x150917f3 */
L_15091906:
    PUSH32(esp, 0x79u); /* 0x15091906: push 0x79 */
    RECOMP_BACKEDGE();
    goto L_150917F3; /* 0x15091908: jmp 0x150917f3 */
L_1509190D:
    eax = MEM32(ebp + (-0x28)); /* 0x1509190D: mov eax, dword ptr [ebp - 0x28] */
    /* cmp MEM32(eax + 0x8), 0xBu */ /* 0x15091910: cmp dword ptr [eax + 8], 0xb */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1509191E; /* 0x15091914: jg 0x1509191e */
L_15091916:
    edx = MEM32(edx + 0x150); /* 0x15091916: mov edx, dword ptr [edx + 0x150] */
    goto L_15091924; /* 0x1509191C: jmp 0x15091924 */
L_1509191E:
    edx = MEM32(edx + 0x154); /* 0x1509191E: mov edx, dword ptr [edx + 0x154] */
L_15091924:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15091924: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x15091926: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091941; /* 0x15091929: jne 0x15091941 */
L_1509192B:
    /* cmp MEM32(ebx), edi */ /* 0x1509192B: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15091941; /* 0x1509192D: jbe 0x15091941 */
L_1509192F:
    ecx = MEM32(esi); /* 0x1509192F: mov ecx, dword ptr [esi] */
    SET_LO16(eax, MEM16(edx)); /* 0x15091931: mov ax, word ptr [edx] */
    MEM16(ecx) = (uint16_t)(LO16(eax)); /* 0x15091934: mov word ptr [ecx], ax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x15091937: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x1509193A: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    goto L_150919E1; /* 0x1509193C: jmp 0x150919e1 */
L_15091941:
    eax = (uint32_t)MEM16(edx); /* 0x15091941: movzx eax, word ptr [edx] */
    ecx = eax; /* 0x15091944: mov ecx, eax */
    /* test LO16(eax), LO16(eax) */ /* 0x15091946: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150919E1; /* 0x15091949: je 0x150919e1 */
L_1509194F:
    /* cmp MEM32(ebx), edi */ /* 0x1509194F: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150919E1; /* 0x15091951: jbe 0x150919e1 */
L_15091957:
    ecx = (uint32_t)LO16(eax); /* 0x15091957: movzx ecx, ax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x1509195A: add edx, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1509195D: mov eax, dword ptr [esi] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1509195F: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x15091962: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x15091965: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    eax = (uint32_t)MEM16(edx); /* 0x15091967: movzx eax, word ptr [edx] */
    /* test LO16(eax), LO16(eax) */ /* 0x1509196A: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509194F; /* 0x1509196D: jne 0x1509194f */
L_1509196F:
    goto L_150919E1; /* 0x1509196F: jmp 0x150919e1 */
L_15091971:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15091971: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091982; /* 0x15091974: je 0x15091982 */
L_15091976:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15091976: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150919A7; /* 0x15091979: jne 0x150919a7 */
L_1509197B:
    ecx = MEM32(ebp + (-0x18)); /* 0x1509197B: mov ecx, dword ptr [ebp - 0x18] */
L_1509197E:
    PUSH32(esp, 0x53u); /* 0x1509197E: push 0x53 */
    goto L_150919C6; /* 0x15091980: jmp 0x150919c6 */
L_15091982:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15091982: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15091984: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_1509197E; /* 0x15091985: jmp 0x1509197e */
L_15091987:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x15091987: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15091998; /* 0x1509198A: je 0x15091998 */
L_1509198C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1509198C: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150919A7; /* 0x1509198F: jne 0x150919a7 */
L_15091991:
    ecx = MEM32(ebp + (-0x18)); /* 0x15091991: mov ecx, dword ptr [ebp - 0x18] */
L_15091994:
    PUSH32(esp, 0x4Du); /* 0x15091994: push 0x4d */
    goto L_150919C6; /* 0x15091996: jmp 0x150919c6 */
L_15091998:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15091998: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1509199A: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15091994; /* 0x1509199B: jmp 0x15091994 */
L_1509199D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x1509199D: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150919BC; /* 0x150919A0: je 0x150919bc */
L_150919A2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 1; /* 0x150919A2: sub ecx, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150919C1; /* 0x150919A5: je 0x150919c1 */
L_150919A7:
    eax = MEM32(ebp + (-0x34)); /* 0x150919A7: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x150919AA: add edi, 2 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)LO16(eax); /* 0x150919AD: movzx ecx, ax */
    eax = MEM32(esi); /* 0x150919B0: mov eax, dword ptr [esi] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x150919B2: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 2; /* 0x150919B5: add dword ptr [esi], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    MEM32(ebx) = MEM32(ebx) - 1; /* 0x150919B8: dec dword ptr [ebx] */
    _flag_k = FK_DEC;
    goto L_150919E4; /* 0x150919BA: jmp 0x150919e4 */
L_150919BC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150919BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150919BE: inc ecx */
    _flag_k = FK_INC;
    goto L_150919C4; /* 0x150919BF: jmp 0x150919c4 */
L_150919C1:
    ecx = MEM32(ebp + (-0x18)); /* 0x150919C1: mov ecx, dword ptr [ebp - 0x18] */
L_150919C4:
    PUSH32(esp, 0x49u); /* 0x150919C4: push 0x49 */
L_150919C6:
    eax = POP32_VAL(esp); /* 0x150919C6: pop eax */
    PUSH32(esp, ecx); /* 0x150919C7: push ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x150919C8: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x150919CB: push ecx */
    PUSH32(esp, ebx); /* 0x150919CC: push ebx */
    PUSH32(esp, esi); /* 0x150919CD: push esi */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x150919CE: push dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150919D1: push eax */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x150919D2: push dword ptr [ebp - 0x38] */
    RECOMP_CALL(sub_15091015); /* 0x150919D5: call 0x15091015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150919DA: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150919DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150919F7; /* 0x150919DF: je 0x150919f7 */
L_150919E1:
    edi = MEM32(ebp + (-0x1C)); /* 0x150919E1: mov edi, dword ptr [ebp - 0x1c] */
L_150919E4:
    edx = MEM32(ebp + (-0x20)); /* 0x150919E4: mov edx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150919E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi), LO16(eax) */ /* 0x150919E9: cmp word ptr [edi], ax */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091763; /* 0x150919EC: jne 0x15091763 */
L_150919F2:
    RECOMP_BACKEDGE();
    goto L_1509173A; /* 0x150919F2: jmp 0x1509173a */
L_150919F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150919F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1509173D; /* 0x150919F9: jmp 0x1509173d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15091A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091A10u);

L_15091A10:
    PUSH32(esp, 0); /* 0x15091A10: push 0 */
    RECOMP_CALL(sub_15091A1F); /* 0x15091A12: call 0x15091a1f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15091A17: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15091A18: ret  */
    RECOMP_REGS_OUT();
}

void sub_15091A1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091A1Fu);

L_15091A1F:
    edi = edi; /* 0x15091A1F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15091A21: push ebp */
    ebp = esp; /* 0x15091A22: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15091A24: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15091A27: push ebx */
    PUSH32(esp, esi); /* 0x15091A28: push esi */
    PUSH32(esp, edi); /* 0x15091A29: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15091A2A: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091A2D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x15091A2F: lea ecx, [ebp - 0x20] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15091A32: mov dword ptr [ebp - 4], eax */
    ebx = eax; /* 0x15091A35: mov ebx, eax */
    RECOMP_CALL(sub_1502F870); /* 0x15091A37: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x15091A3C: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, 7); /* 0x15091A3F: push 7 */
    eax = MEM32(eax + 0xD4); /* 0x15091A41: mov eax, dword ptr [eax + 0xd4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD4u; /* 0x15091A47: add eax, 0xd4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x15091A4C: mov dword ptr [ebp - 8], eax */
    esi = eax; /* 0x15091A4F: mov esi, eax */
    eax = POP32_VAL(esp); /* 0x15091A51: pop eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x15091A52: mov dword ptr [ebp - 0xc], eax */
    edi = eax; /* 0x15091A55: mov edi, eax */
L_15091A57:
    edx = MEM32(esi + (-0x1C)); /* 0x15091A57: mov edx, dword ptr [esi - 0x1c] */
    ecx = edx + 0x2; /* 0x15091A5A: lea ecx, [edx + 2] */
L_15091A5D:
    SET_LO16(eax, MEM16(edx)); /* 0x15091A5D: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15091A60: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091A63: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091A5D; /* 0x15091A67: jne 0x15091a5d */
L_15091A69:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15091A69: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x15091A6B: mov ecx, dword ptr [esi] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15091A6D: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = ecx + 0x2; /* 0x15091A6F: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x15091A72: mov dword ptr [ebp - 0x10], eax */
L_15091A75:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091A75: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091A78: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091A7B: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091A75; /* 0x15091A7F: jne 0x15091a75 */
L_15091A81:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x10)); /* 0x15091A81: sub ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15091A84: add ebx, 2 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091A87: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15091A89: add esi, 4 */
    _flag_k = FK_ADD;
    eax = ecx + edx; /* 0x15091A8C: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15091A8F: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15091A91: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091A57; /* 0x15091A94: jne 0x15091a57 */
L_15091A96:
    eax = ebx * 2 + 0x2; /* 0x15091A96: lea eax, [ebx*2 + 2] */
    PUSH32(esp, eax); /* 0x15091A9D: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15091A9E: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15091AA3: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15091AA5: pop ecx */
    /* test edi, edi */ /* 0x15091AA6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091B68; /* 0x15091AA8: je 0x15091b68 */
L_15091AAE:
    eax = MEM32(ebp + (-0x8)); /* 0x15091AAE: mov eax, dword ptr [ebp - 8] */
    esi = edi; /* 0x15091AB1: mov esi, edi */
    PUSH32(esp, 0x3Au); /* 0x15091AB3: push 0x3a */
    ecx = POP32_VAL(esp); /* 0x15091AB5: pop ecx */
L_15091AB6:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x15091AB6: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15091AB9: add esi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + (-0x1C))); /* 0x15091ABC: push dword ptr [eax - 0x1c] */
    ecx = esi; /* 0x15091ABF: mov ecx, esi */
    eax = ebx; /* 0x15091AC1: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x15091AC3: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091AC5: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091AC7: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15091AC9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15091ACA: push eax */
    PUSH32(esp, esi); /* 0x15091ACB: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15091ACC: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15091AD1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15091AD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091AE7; /* 0x15091AD6: je 0x15091ae7 */
L_15091AD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091AD8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15091ADA: push eax */
    PUSH32(esp, eax); /* 0x15091ADB: push eax */
    PUSH32(esp, eax); /* 0x15091ADC: push eax */
    PUSH32(esp, eax); /* 0x15091ADD: push eax */
    PUSH32(esp, eax); /* 0x15091ADE: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15091ADF: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091AE4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15091AE7:
    ecx = esi; /* 0x15091AE7: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15091AE9: lea edx, [ecx + 2] */
L_15091AEC:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091AEC: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091AEF: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091AF2: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091AEC; /* 0x15091AF6: jne 0x15091aec */
L_15091AF8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15091AF8: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091AFA: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 0x3Au); /* 0x15091AFC: push 0x3a */
    eax = POP32_VAL(esp); /* 0x15091AFE: pop eax */
    esi = esi + ecx * 2; /* 0x15091AFF: lea esi, [esi + ecx*2] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15091B02: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15091B05: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x15091B08: mov eax, dword ptr [ebp - 8] */
    ecx = esi; /* 0x15091B0B: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x15091B0D: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091B0F: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, MEM32(eax)); /* 0x15091B11: push dword ptr [eax] */
    eax = ebx; /* 0x15091B13: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091B15: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15091B17: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15091B18: push eax */
    PUSH32(esp, esi); /* 0x15091B19: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15091B1A: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15091B1F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15091B22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091B35; /* 0x15091B24: je 0x15091b35 */
L_15091B26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091B26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15091B28: push eax */
    PUSH32(esp, eax); /* 0x15091B29: push eax */
    PUSH32(esp, eax); /* 0x15091B2A: push eax */
    PUSH32(esp, eax); /* 0x15091B2B: push eax */
    PUSH32(esp, eax); /* 0x15091B2C: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15091B2D: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091B32: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15091B35:
    ecx = esi; /* 0x15091B35: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15091B37: lea edx, [ecx + 2] */
L_15091B3A:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091B3A: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091B3D: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091B40: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091B3A; /* 0x15091B44: jne 0x15091b3a */
L_15091B46:
    eax = MEM32(ebp + (-0x8)); /* 0x15091B46: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15091B49: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091B4B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x15091B4D: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x15091B50: sub dword ptr [ebp - 0xc], 1 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x3Au); /* 0x15091B54: push 0x3a */
    MEM32(ebp + (-0x8)) = eax; /* 0x15091B56: mov dword ptr [ebp - 8], eax */
    esi = esi + ecx * 2; /* 0x15091B59: lea esi, [esi + ecx*2] */
    ecx = POP32_VAL(esp); /* 0x15091B5C: pop ecx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091AB6; /* 0x15091B5D: jne 0x15091ab6 */
L_15091B63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091B63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15091B65: mov word ptr [esi], ax */
L_15091B68:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x15091B68: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091B75; /* 0x15091B6C: je 0x15091b75 */
L_15091B6E:
    eax = MEM32(ebp + (-0x18)); /* 0x15091B6E: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15091B71: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15091B75:
    eax = edi; /* 0x15091B75: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15091B77: pop edi */
    esi = POP32_VAL(esp); /* 0x15091B78: pop esi */
    ebx = POP32_VAL(esp); /* 0x15091B79: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15091B7A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15091B7B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15091B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091B90u);

L_15091B90:
    PUSH32(esp, 0); /* 0x15091B90: push 0 */
    RECOMP_CALL(sub_15091B9F); /* 0x15091B92: call 0x15091b9f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15091B97: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15091B98: ret  */
    RECOMP_REGS_OUT();
}

void sub_15091B9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091B9Fu);

L_15091B9F:
    edi = edi; /* 0x15091B9F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15091BA1: push ebp */
    ebp = esp; /* 0x15091BA2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x15091BA4: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15091BA7: push ebx */
    PUSH32(esp, esi); /* 0x15091BA8: push esi */
    PUSH32(esp, edi); /* 0x15091BA9: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15091BAA: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091BAD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x15091BAF: lea ecx, [ebp - 0x20] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15091BB2: mov dword ptr [ebp - 4], eax */
    ebx = eax; /* 0x15091BB5: mov ebx, eax */
    RECOMP_CALL(sub_1502F870); /* 0x15091BB7: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x15091BBC: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, 0xCu); /* 0x15091BBF: push 0xc */
    eax = MEM32(eax + 0xD4); /* 0x15091BC1: mov eax, dword ptr [eax + 0xd4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x120u; /* 0x15091BC7: add eax, 0x120 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x15091BCC: mov dword ptr [ebp - 8], eax */
    esi = eax; /* 0x15091BCF: mov esi, eax */
    eax = POP32_VAL(esp); /* 0x15091BD1: pop eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x15091BD2: mov dword ptr [ebp - 0xc], eax */
    edi = eax; /* 0x15091BD5: mov edi, eax */
L_15091BD7:
    edx = MEM32(esi + (-0x30)); /* 0x15091BD7: mov edx, dword ptr [esi - 0x30] */
    ecx = edx + 0x2; /* 0x15091BDA: lea ecx, [edx + 2] */
L_15091BDD:
    SET_LO16(eax, MEM16(edx)); /* 0x15091BDD: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15091BE0: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091BE3: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091BDD; /* 0x15091BE7: jne 0x15091bdd */
L_15091BE9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15091BE9: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x15091BEB: mov ecx, dword ptr [esi] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15091BED: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = ecx + 0x2; /* 0x15091BEF: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x10)) = eax; /* 0x15091BF2: mov dword ptr [ebp - 0x10], eax */
L_15091BF5:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091BF5: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091BF8: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091BFB: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091BF5; /* 0x15091BFF: jne 0x15091bf5 */
L_15091C01:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x10)); /* 0x15091C01: sub ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15091C04: add ebx, 2 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091C07: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15091C09: add esi, 4 */
    _flag_k = FK_ADD;
    eax = ecx + edx; /* 0x15091C0C: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15091C0F: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15091C11: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091BD7; /* 0x15091C14: jne 0x15091bd7 */
L_15091C16:
    eax = ebx * 2 + 0x2; /* 0x15091C16: lea eax, [ebx*2 + 2] */
    PUSH32(esp, eax); /* 0x15091C1D: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15091C1E: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15091C23: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15091C25: pop ecx */
    /* test edi, edi */ /* 0x15091C26: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091CE8; /* 0x15091C28: je 0x15091ce8 */
L_15091C2E:
    eax = MEM32(ebp + (-0x8)); /* 0x15091C2E: mov eax, dword ptr [ebp - 8] */
    esi = edi; /* 0x15091C31: mov esi, edi */
    PUSH32(esp, 0x3Au); /* 0x15091C33: push 0x3a */
    ecx = POP32_VAL(esp); /* 0x15091C35: pop ecx */
L_15091C36:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x15091C36: mov word ptr [esi], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15091C39: add esi, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x15091C3C: push dword ptr [eax - 0x30] */
    ecx = esi; /* 0x15091C3F: mov ecx, esi */
    eax = ebx; /* 0x15091C41: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x15091C43: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091C45: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091C47: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15091C49: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15091C4A: push eax */
    PUSH32(esp, esi); /* 0x15091C4B: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15091C4C: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15091C51: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15091C54: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091C67; /* 0x15091C56: je 0x15091c67 */
L_15091C58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091C58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15091C5A: push eax */
    PUSH32(esp, eax); /* 0x15091C5B: push eax */
    PUSH32(esp, eax); /* 0x15091C5C: push eax */
    PUSH32(esp, eax); /* 0x15091C5D: push eax */
    PUSH32(esp, eax); /* 0x15091C5E: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15091C5F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091C64: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15091C67:
    ecx = esi; /* 0x15091C67: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15091C69: lea edx, [ecx + 2] */
L_15091C6C:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091C6C: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091C6F: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091C72: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091C6C; /* 0x15091C76: jne 0x15091c6c */
L_15091C78:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15091C78: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091C7A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, 0x3Au); /* 0x15091C7C: push 0x3a */
    eax = POP32_VAL(esp); /* 0x15091C7E: pop eax */
    esi = esi + ecx * 2; /* 0x15091C7F: lea esi, [esi + ecx*2] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15091C82: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15091C85: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x15091C88: mov eax, dword ptr [ebp - 8] */
    ecx = esi; /* 0x15091C8B: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x15091C8D: sub ecx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091C8F: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, MEM32(eax)); /* 0x15091C91: push dword ptr [eax] */
    eax = ebx; /* 0x15091C93: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091C95: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15091C97: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x15091C98: push eax */
    PUSH32(esp, esi); /* 0x15091C99: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15091C9A: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15091C9F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15091CA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091CB5; /* 0x15091CA4: je 0x15091cb5 */
L_15091CA6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091CA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15091CA8: push eax */
    PUSH32(esp, eax); /* 0x15091CA9: push eax */
    PUSH32(esp, eax); /* 0x15091CAA: push eax */
    PUSH32(esp, eax); /* 0x15091CAB: push eax */
    PUSH32(esp, eax); /* 0x15091CAC: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15091CAD: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091CB2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15091CB5:
    ecx = esi; /* 0x15091CB5: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15091CB7: lea edx, [ecx + 2] */
L_15091CBA:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091CBA: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091CBD: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091CC0: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091CBA; /* 0x15091CC4: jne 0x15091cba */
L_15091CC6:
    eax = MEM32(ebp + (-0x8)); /* 0x15091CC6: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15091CC9: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091CCB: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x15091CCD: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x15091CD0: sub dword ptr [ebp - 0xc], 1 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x3Au); /* 0x15091CD4: push 0x3a */
    MEM32(ebp + (-0x8)) = eax; /* 0x15091CD6: mov dword ptr [ebp - 8], eax */
    esi = esi + ecx * 2; /* 0x15091CD9: lea esi, [esi + ecx*2] */
    ecx = POP32_VAL(esp); /* 0x15091CDC: pop ecx */
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091C36; /* 0x15091CDD: jne 0x15091c36 */
L_15091CE3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091CE3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x15091CE5: mov word ptr [esi], ax */
L_15091CE8:
    /* cmp MEM8(ebp + (-0x14)), 0 */ /* 0x15091CE8: cmp byte ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x14))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15091CF5; /* 0x15091CEC: je 0x15091cf5 */
L_15091CEE:
    eax = MEM32(ebp + (-0x18)); /* 0x15091CEE: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x15091CF1: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15091CF5:
    eax = edi; /* 0x15091CF5: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15091CF7: pop edi */
    esi = POP32_VAL(esp); /* 0x15091CF8: pop esi */
    ebx = POP32_VAL(esp); /* 0x15091CF9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15091CFA: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15091CFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_15091D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091D10u);

L_15091D10:
    PUSH32(esp, 0); /* 0x15091D10: push 0 */
    RECOMP_CALL(sub_15091D1F); /* 0x15091D12: call 0x15091d1f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15091D17: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15091D18: ret  */
    RECOMP_REGS_OUT();
}

void sub_15091D1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15091D1Fu);

L_15091D1F:
    edi = edi; /* 0x15091D1F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15091D21: push ebp */
    ebp = esp; /* 0x15091D22: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x38u; /* 0x15091D24: sub esp, 0x38 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15091D27: push ebx */
    PUSH32(esp, esi); /* 0x15091D28: push esi */
    PUSH32(esp, edi); /* 0x15091D29: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15091D2A: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091D2D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x38); /* 0x15091D2F: lea ecx, [ebp - 0x38] */
    MEM32(ebp + (-0x4)) = eax; /* 0x15091D32: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x15091D35: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_1502F870); /* 0x15091D38: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x38)); /* 0x15091D3D: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, 7); /* 0x15091D40: push 7 */
    ebx = MEM32(eax + 0xD4); /* 0x15091D42: mov ebx, dword ptr [eax + 0xd4] */
    eax = POP32_VAL(esp); /* 0x15091D48: pop eax */
    MEM32(ebp + (-0x10)) = ebx; /* 0x15091D49: mov dword ptr [ebp - 0x10], ebx */
    edi = eax; /* 0x15091D4C: mov edi, eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15091D4E: mov dword ptr [ebp - 0x1c], eax */
    esi = ebx + 0xD4; /* 0x15091D51: lea esi, [ebx + 0xd4] */
    ebx = MEM32(ebp + (-0xC)); /* 0x15091D57: mov ebx, dword ptr [ebp - 0xc] */
L_15091D5A:
    edx = MEM32(esi + (-0x1C)); /* 0x15091D5A: mov edx, dword ptr [esi - 0x1c] */
    ecx = edx + 0x2; /* 0x15091D5D: lea ecx, [edx + 2] */
L_15091D60:
    SET_LO16(eax, MEM16(edx)); /* 0x15091D60: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15091D63: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091D66: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091D60; /* 0x15091D6A: jne 0x15091d60 */
L_15091D6C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15091D6C: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x15091D6E: mov ecx, dword ptr [esi] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15091D70: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = ecx + 0x2; /* 0x15091D72: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x24)) = eax; /* 0x15091D75: mov dword ptr [ebp - 0x24], eax */
L_15091D78:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091D78: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091D7B: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091D7E: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091D78; /* 0x15091D82: jne 0x15091d78 */
L_15091D84:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x24)); /* 0x15091D84: sub ecx, dword ptr [ebp - 0x24] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15091D87: add ebx, 2 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091D8A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15091D8C: add esi, 4 */
    _flag_k = FK_ADD;
    eax = ecx + edx; /* 0x15091D8F: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15091D92: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15091D94: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091D5A; /* 0x15091D97: jne 0x15091d5a */
L_15091D99:
    esi = MEM32(ebp + (-0x10)); /* 0x15091D99: mov esi, dword ptr [ebp - 0x10] */
    PUSH32(esp, 0xCu); /* 0x15091D9C: push 0xc */
    eax = POP32_VAL(esp); /* 0x15091D9E: pop eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x15091D9F: mov dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x120u; /* 0x15091DA2: add esi, 0x120 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x15091DA8: mov dword ptr [ebp - 0x24], eax */
    edi = eax; /* 0x15091DAB: mov edi, eax */
L_15091DAD:
    edx = MEM32(esi + (-0x30)); /* 0x15091DAD: mov edx, dword ptr [esi - 0x30] */
    ecx = edx + 0x2; /* 0x15091DB0: lea ecx, [edx + 2] */
L_15091DB3:
    SET_LO16(eax, MEM16(edx)); /* 0x15091DB3: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15091DB6: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091DB9: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091DB3; /* 0x15091DBD: jne 0x15091db3 */
L_15091DBF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x15091DBF: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(esi); /* 0x15091DC1: mov ecx, dword ptr [esi] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15091DC3: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = ecx + 0x2; /* 0x15091DC5: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15091DC8: mov dword ptr [ebp - 0x20], eax */
L_15091DCB:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091DCB: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091DCE: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091DD1: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091DCB; /* 0x15091DD5: jne 0x15091dcb */
L_15091DD7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x20)); /* 0x15091DD7: sub ecx, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15091DDA: add ebx, 2 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091DDD: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x15091DDF: add esi, 4 */
    _flag_k = FK_ADD;
    eax = ecx + edx; /* 0x15091DE2: lea eax, [ecx + edx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15091DE5: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15091DE7: sub edi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091DAD; /* 0x15091DEA: jne 0x15091dad */
L_15091DEC:
    MEM32(ebp + (-0xC)) = ebx; /* 0x15091DEC: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x15091DEF: mov ebx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebx + 0x150); /* 0x15091DF2: mov ecx, dword ptr [ebx + 0x150] */
    edx = ecx + 0x2; /* 0x15091DF8: lea edx, [ecx + 2] */
L_15091DFB:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091DFB: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091DFE: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x15091E01: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091DFB; /* 0x15091E04: jne 0x15091dfb */
L_15091E06:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15091E06: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebx + 0x154); /* 0x15091E08: mov edx, dword ptr [ebx + 0x154] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091E0E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    esi = edx + 0x2; /* 0x15091E10: lea esi, [edx + 2] */
L_15091E13:
    SET_LO16(eax, MEM16(edx)); /* 0x15091E13: mov ax, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15091E16: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(edi) */ /* 0x15091E19: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091E13; /* 0x15091E1C: jne 0x15091e13 */
L_15091E1E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x15091E1E: sub edx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebx + 0x158); /* 0x15091E20: mov esi, dword ptr [ebx + 0x158] */
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x15091E26: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    edi = esi + 0x2; /* 0x15091E28: lea edi, [esi + 2] */
L_15091E2B:
    SET_LO16(eax, MEM16(esi)); /* 0x15091E2B: mov ax, word ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x15091E2E: add esi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091E31: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091E2B; /* 0x15091E35: jne 0x15091e2b */
L_15091E37:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x15091E37: sub esi, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebx + 0x15C); /* 0x15091E39: mov edi, dword ptr [ebx + 0x15c] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x15091E3F: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    eax = edi + 0x2; /* 0x15091E41: lea eax, [edi + 2] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15091E44: mov dword ptr [ebp - 0x20], eax */
L_15091E47:
    SET_LO16(eax, MEM16(edi)); /* 0x15091E47: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x15091E4A: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091E4D: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091E47; /* 0x15091E51: jne 0x15091e47 */
L_15091E53:
    ebx = MEM32(ebx + 0x160); /* 0x15091E53: mov ebx, dword ptr [ebx + 0x160] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x20)); /* 0x15091E59: sub edi, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x15091E5C: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    eax = ebx + 0x2; /* 0x15091E5E: lea eax, [ebx + 2] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15091E61: mov dword ptr [ebp - 0x20], eax */
L_15091E64:
    SET_LO16(eax, MEM16(ebx)); /* 0x15091E64: mov ax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15091E67: add ebx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091E6A: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091E64; /* 0x15091E6E: jne 0x15091e64 */
L_15091E70:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x20)); /* 0x15091E70: sub ebx, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x15091E73: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    eax = ebx + edi; /* 0x15091E75: lea eax, [ebx + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x15091E78: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x15091E7A: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15091E7C: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x15091E7E: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 5; /* 0x15091E81: add ecx, 5 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15091E84: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x15091E86: mov dword ptr [ebp - 0x28], eax */
    eax = eax * 2 + 0x164; /* 0x15091E89: lea eax, [eax*2 + 0x164] */
    PUSH32(esp, eax); /* 0x15091E90: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15091E91: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x15091E96: mov edx, eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x15091E98: mov dword ptr [ebp - 0xc], edx */
    ecx = POP32_VAL(esp); /* 0x15091E9B: pop ecx */
    /* test edx, edx */ /* 0x15091E9C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150921C3; /* 0x15091E9E: je 0x150921c3 */
L_15091EA4:
    esi = MEM32(ebp + (-0x10)); /* 0x15091EA4: mov esi, dword ptr [ebp - 0x10] */
    eax = edx + 0xD4; /* 0x15091EA7: lea eax, [edx + 0xd4] */
    PUSH32(esp, 0x59u); /* 0x15091EAD: push 0x59 */
    ecx = POP32_VAL(esp); /* 0x15091EAF: pop ecx */
    edi = edx; /* 0x15091EB0: mov edi, edx */
    MEM32(ebp + (-0x18)) = eax; /* 0x15091EB2: mov dword ptr [ebp - 0x18], eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15091EB5: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x10)); /* 0x15091EB7: mov esi, dword ptr [ebp - 0x10] */
    ebx = edx + 0x164; /* 0x15091EBA: lea ebx, [edx + 0x164] */
    edi = MEM32(ebp + (-0x28)); /* 0x15091EC0: mov edi, dword ptr [ebp - 0x28] */
    ecx = edx; /* 0x15091EC3: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15091EC5: sub ecx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x15091EC7: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x15091ECA: mov dword ptr [ebp - 0x20], ecx */
    eax = esi + 0xB8; /* 0x15091ECD: lea eax, [esi + 0xb8] */
    esi = ebx; /* 0x15091ED3: mov esi, ebx */
    MEM32(ebp + (-0x14)) = eax; /* 0x15091ED5: mov dword ptr [ebp - 0x14], eax */
L_15091ED8:
    MEM32(ecx + eax) = ebx; /* 0x15091ED8: mov dword ptr [ecx + eax], ebx */
    ecx = ebx; /* 0x15091EDB: mov ecx, ebx */
    PUSH32(esp, MEM32(eax)); /* 0x15091EDD: push dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15091EDF: sub ecx, esi */
    _flag_k = FK_CMP;
    eax = edi; /* 0x15091EE1: mov eax, edi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091EE3: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091EE5: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15091EE7: push eax */
    PUSH32(esp, ebx); /* 0x15091EE8: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x15091EE9: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15091EEE: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15091EF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091F04; /* 0x15091EF3: je 0x15091f04 */
L_15091EF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091EF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15091EF7: push eax */
    PUSH32(esp, eax); /* 0x15091EF8: push eax */
    PUSH32(esp, eax); /* 0x15091EF9: push eax */
    PUSH32(esp, eax); /* 0x15091EFA: push eax */
    PUSH32(esp, eax); /* 0x15091EFB: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15091EFC: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091F01: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15091F04:
    ecx = ebx; /* 0x15091F04: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x15091F06: lea edx, [ecx + 2] */
L_15091F09:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091F09: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091F0C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091F0F: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091F09; /* 0x15091F13: jne 0x15091f09 */
L_15091F15:
    eax = MEM32(ebp + (-0x18)); /* 0x15091F15: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15091F18: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091F1A: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    ebx = ebx + ecx * 2; /* 0x15091F1C: lea ebx, [ebx + ecx*2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15091F1F: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x15091F22: mov dword ptr [eax], ebx */
    ecx = ebx; /* 0x15091F24: mov ecx, ebx */
    eax = MEM32(ebp + (-0x14)); /* 0x15091F26: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x15091F29: sub ecx, esi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091F2B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, MEM32(eax + 0x1C)); /* 0x15091F2D: push dword ptr [eax + 0x1c] */
    eax = edi; /* 0x15091F30: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091F32: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15091F34: push eax */
    PUSH32(esp, ebx); /* 0x15091F35: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x15091F36: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15091F3B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15091F3E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091F51; /* 0x15091F40: je 0x15091f51 */
L_15091F42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091F42: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15091F44: push eax */
    PUSH32(esp, eax); /* 0x15091F45: push eax */
    PUSH32(esp, eax); /* 0x15091F46: push eax */
    PUSH32(esp, eax); /* 0x15091F47: push eax */
    PUSH32(esp, eax); /* 0x15091F48: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15091F49: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091F4E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15091F51:
    ecx = ebx; /* 0x15091F51: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x15091F53: lea edx, [ecx + 2] */
L_15091F56:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091F56: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091F59: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091F5C: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091F56; /* 0x15091F60: jne 0x15091f56 */
L_15091F62:
    eax = MEM32(ebp + (-0x14)); /* 0x15091F62: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15091F65: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 4; /* 0x15091F67: add dword ptr [ebp - 0x18], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x15091F6B: add eax, 4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091F6E: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(ebp + (-0x14)) = eax; /* 0x15091F70: mov dword ptr [ebp - 0x14], eax */
    ebx = ebx + ecx * 2; /* 0x15091F73: lea ebx, [ebx + ecx*2] */
    ecx = MEM32(ebp + (-0x20)); /* 0x15091F76: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15091F79: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x15091F7C: sub dword ptr [ebp - 0x1c], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091ED8; /* 0x15091F80: jne 0x15091ed8 */
L_15091F86:
    eax = MEM32(ebp + (-0xC)); /* 0x15091F86: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x120u; /* 0x15091F89: add eax, 0x120 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x15091F8E: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x15091F91: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xF0u; /* 0x15091F94: add eax, 0xf0 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15091F99: mov esi, eax */
L_15091F9B:
    eax = MEM32(ebp + (-0x20)); /* 0x15091F9B: mov eax, dword ptr [ebp - 0x20] */
    ecx = ebx; /* 0x15091F9E: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x15091FA0: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091FA3: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax + esi) = ebx; /* 0x15091FA5: mov dword ptr [eax + esi], ebx */
    eax = edi; /* 0x15091FA8: mov eax, edi */
    PUSH32(esp, MEM32(esi)); /* 0x15091FAA: push dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091FAC: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15091FAE: push eax */
    PUSH32(esp, ebx); /* 0x15091FAF: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x15091FB0: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15091FB5: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15091FB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15091FCB; /* 0x15091FBA: je 0x15091fcb */
L_15091FBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15091FBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15091FBE: push eax */
    PUSH32(esp, eax); /* 0x15091FBF: push eax */
    PUSH32(esp, eax); /* 0x15091FC0: push eax */
    PUSH32(esp, eax); /* 0x15091FC1: push eax */
    PUSH32(esp, eax); /* 0x15091FC2: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15091FC3: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15091FC8: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15091FCB:
    ecx = ebx; /* 0x15091FCB: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x15091FCD: lea edx, [ecx + 2] */
L_15091FD0:
    SET_LO16(eax, MEM16(ecx)); /* 0x15091FD0: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15091FD3: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15091FD6: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15091FD0; /* 0x15091FDA: jne 0x15091fd0 */
L_15091FDC:
    eax = MEM32(ebp + (-0x18)); /* 0x15091FDC: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15091FDF: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091FE1: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    ebx = ebx + ecx * 2; /* 0x15091FE3: lea ebx, [ebx + ecx*2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15091FE6: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(eax) = ebx; /* 0x15091FE9: mov dword ptr [eax], ebx */
    ecx = ebx; /* 0x15091FEB: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x15091FED: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x15091FF0: mov eax, edi */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x15091FF2: push dword ptr [esi + 0x30] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15091FF5: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15091FF7: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15091FF9: push eax */
    PUSH32(esp, ebx); /* 0x15091FFA: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x15091FFB: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15092000: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15092003: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092016; /* 0x15092005: je 0x15092016 */
L_15092007:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092007: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092009: push eax */
    PUSH32(esp, eax); /* 0x1509200A: push eax */
    PUSH32(esp, eax); /* 0x1509200B: push eax */
    PUSH32(esp, eax); /* 0x1509200C: push eax */
    PUSH32(esp, eax); /* 0x1509200D: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1509200E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092013: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092016:
    ecx = ebx; /* 0x15092016: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x15092018: lea edx, [ecx + 2] */
L_1509201B:
    SET_LO16(eax, MEM16(ecx)); /* 0x1509201B: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1509201E: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x15092021: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509201B; /* 0x15092025: jne 0x1509201b */
L_15092027:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 4; /* 0x15092027: add dword ptr [ebp - 0x18], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509202B: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1509202D: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1509202F: add esi, 4 */
    _flag_k = FK_ADD;
    ebx = ebx + ecx * 2; /* 0x15092032: lea ebx, [ebx + ecx*2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x15092035: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) - 1; /* 0x15092038: sub dword ptr [ebp - 0x24], 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15091F9B; /* 0x1509203C: jne 0x15091f9b */
L_15092042:
    eax = MEM32(ebp + (-0xC)); /* 0x15092042: mov eax, dword ptr [ebp - 0xc] */
    ecx = ebx; /* 0x15092045: mov ecx, ebx */
    esi = MEM32(ebp + (-0x10)); /* 0x15092047: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x1509204A: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1509204D: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(eax + 0x150) = ebx; /* 0x1509204F: mov dword ptr [eax + 0x150], ebx */
    eax = edi; /* 0x15092055: mov eax, edi */
    PUSH32(esp, MEM32(esi + 0x150)); /* 0x15092057: push dword ptr [esi + 0x150] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1509205D: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1509205F: push eax */
    PUSH32(esp, ebx); /* 0x15092060: push ebx */
    RECOMP_CALL(sub_1508F250); /* 0x15092061: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15092066: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15092069: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1509206B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509207C; /* 0x1509206D: je 0x1509207c */
L_1509206F:
    PUSH32(esp, esi); /* 0x1509206F: push esi */
    PUSH32(esp, esi); /* 0x15092070: push esi */
    PUSH32(esp, esi); /* 0x15092071: push esi */
    PUSH32(esp, esi); /* 0x15092072: push esi */
    PUSH32(esp, esi); /* 0x15092073: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15092074: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092079: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1509207C:
    ecx = ebx; /* 0x1509207C: mov ecx, ebx */
    edx = ecx + 0x2; /* 0x1509207E: lea edx, [ecx + 2] */
L_15092081:
    SET_LO16(eax, MEM16(ecx)); /* 0x15092081: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15092084: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15092087: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092081; /* 0x1509208A: jne 0x15092081 */
L_1509208C:
    eax = MEM32(ebp + (-0xC)); /* 0x1509208C: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1509208F: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15092091: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15092093: inc ecx */
    _flag_k = FK_INC;
    esi = ebx + ecx * 2; /* 0x15092094: lea esi, [ebx + ecx*2] */
    ebx = MEM32(ebp + (-0x10)); /* 0x15092097: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(eax + 0x154) = esi; /* 0x1509209A: mov dword ptr [eax + 0x154], esi */
    ecx = esi; /* 0x150920A0: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x150920A2: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x150920A5: mov eax, edi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150920A7: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    PUSH32(esp, MEM32(ebx + 0x154)); /* 0x150920A9: push dword ptr [ebx + 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x150920AF: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x150920B1: push eax */
    PUSH32(esp, esi); /* 0x150920B2: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x150920B3: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150920B8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150920BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150920CE; /* 0x150920BD: je 0x150920ce */
L_150920BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150920BF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150920C1: push eax */
    PUSH32(esp, eax); /* 0x150920C2: push eax */
    PUSH32(esp, eax); /* 0x150920C3: push eax */
    PUSH32(esp, eax); /* 0x150920C4: push eax */
    PUSH32(esp, eax); /* 0x150920C5: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150920C6: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150920CB: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150920CE:
    ecx = esi; /* 0x150920CE: mov ecx, esi */
    edx = ecx + 0x2; /* 0x150920D0: lea edx, [ecx + 2] */
L_150920D3:
    SET_LO16(eax, MEM16(ecx)); /* 0x150920D3: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150920D6: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x150920D9: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150920D3; /* 0x150920DD: jne 0x150920d3 */
L_150920DF:
    eax = MEM32(ebp + (-0xC)); /* 0x150920DF: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150920E2: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150920E4: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    esi = esi + ecx * 2; /* 0x150920E6: lea esi, [esi + ecx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x150920E9: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x158) = esi; /* 0x150920EC: mov dword ptr [eax + 0x158], esi */
    ecx = esi; /* 0x150920F2: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x150920F4: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x150920F7: mov eax, edi */
    PUSH32(esp, MEM32(ebx + 0x158)); /* 0x150920F9: push dword ptr [ebx + 0x158] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150920FF: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15092101: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15092103: push eax */
    PUSH32(esp, esi); /* 0x15092104: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15092105: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509210A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1509210D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092120; /* 0x1509210F: je 0x15092120 */
L_15092111:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092111: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092113: push eax */
    PUSH32(esp, eax); /* 0x15092114: push eax */
    PUSH32(esp, eax); /* 0x15092115: push eax */
    PUSH32(esp, eax); /* 0x15092116: push eax */
    PUSH32(esp, eax); /* 0x15092117: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15092118: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509211D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092120:
    ecx = esi; /* 0x15092120: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15092122: lea edx, [ecx + 2] */
L_15092125:
    SET_LO16(eax, MEM16(ecx)); /* 0x15092125: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15092128: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1509212B: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092125; /* 0x1509212F: jne 0x15092125 */
L_15092131:
    eax = MEM32(ebp + (-0xC)); /* 0x15092131: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15092134: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15092136: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    esi = esi + ecx * 2; /* 0x15092138: lea esi, [esi + ecx*2] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1509213B: add esi, 2 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x15C) = esi; /* 0x1509213E: mov dword ptr [eax + 0x15c], esi */
    ecx = esi; /* 0x15092144: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x15092146: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    eax = edi; /* 0x15092149: mov eax, edi */
    PUSH32(esp, MEM32(ebx + 0x15C)); /* 0x1509214B: push dword ptr [ebx + 0x15c] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15092151: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15092153: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15092155: push eax */
    PUSH32(esp, esi); /* 0x15092156: push esi */
    RECOMP_CALL(sub_1508F250); /* 0x15092157: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1509215C: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1509215F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092172; /* 0x15092161: je 0x15092172 */
L_15092163:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092163: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092165: push eax */
    PUSH32(esp, eax); /* 0x15092166: push eax */
    PUSH32(esp, eax); /* 0x15092167: push eax */
    PUSH32(esp, eax); /* 0x15092168: push eax */
    PUSH32(esp, eax); /* 0x15092169: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x1509216A: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509216F: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092172:
    ecx = esi; /* 0x15092172: mov ecx, esi */
    edx = ecx + 0x2; /* 0x15092174: lea edx, [ecx + 2] */
L_15092177:
    SET_LO16(eax, MEM16(ecx)); /* 0x15092177: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1509217A: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x1509217D: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092177; /* 0x15092181: jne 0x15092177 */
L_15092183:
    eax = MEM32(ebp + (-0xC)); /* 0x15092183: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15092186: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x15092188: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1509218A: inc ecx */
    _flag_k = FK_INC;
    ecx = esi + ecx * 2; /* 0x1509218B: lea ecx, [esi + ecx*2] */
    MEM32(eax + 0x160) = ecx; /* 0x1509218E: mov dword ptr [eax + 0x160], ecx */
    eax = ecx; /* 0x15092194: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x8)); /* 0x15092196: sub eax, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebx + 0x160)); /* 0x15092199: push dword ptr [ebx + 0x160] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1509219F: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x150921A1: sub edi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x150921A3: push edi */
    PUSH32(esp, ecx); /* 0x150921A4: push ecx */
    RECOMP_CALL(sub_1508F250); /* 0x150921A5: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150921AA: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150921AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150921C0; /* 0x150921AF: je 0x150921c0 */
L_150921B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150921B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150921B3: push eax */
    PUSH32(esp, eax); /* 0x150921B4: push eax */
    PUSH32(esp, eax); /* 0x150921B5: push eax */
    PUSH32(esp, eax); /* 0x150921B6: push eax */
    PUSH32(esp, eax); /* 0x150921B7: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x150921B8: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150921BD: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150921C0:
    edx = MEM32(ebp + (-0xC)); /* 0x150921C0: mov edx, dword ptr [ebp - 0xc] */
L_150921C3:
    /* cmp MEM8(ebp + (-0x2C)), 0 */ /* 0x150921C3: cmp byte ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x2C))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x150921C7: pop edi */
    esi = POP32_VAL(esp); /* 0x150921C8: pop esi */
    ebx = POP32_VAL(esp); /* 0x150921C9: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150921D3; /* 0x150921CA: je 0x150921d3 */
L_150921CC:
    eax = MEM32(ebp + (-0x30)); /* 0x150921CC: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x150921CF: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150921D3:
    eax = edx; /* 0x150921D3: mov eax, edx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150921D5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150921D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_150921E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150921E0u);

L_150921E0:
    edi = edi; /* 0x150921E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150921E2: push ebp */
    ebp = esp; /* 0x150921E3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x150921E5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150921E7: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150921EA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150921ED: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150921F0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150921F3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15092206); /* 0x150921F6: call 0x15092206 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150921FB: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150921FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150921FF: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092206(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092206u);

L_15092206:
    edi = edi; /* 0x15092206: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092208: push ebp */
    ebp = esp; /* 0x15092209: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1509220B: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1509220E: mov eax, dword ptr [ebp + 8] */
    ecx = ebp + (-0x1C); /* 0x15092211: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ebx); /* 0x15092214: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15092215: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15092218: push esi */
    PUSH32(esp, edi); /* 0x15092219: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1509221A: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1509221D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x1509221F: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1502F870); /* 0x15092222: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x15092227: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1509222A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150922F2; /* 0x1509222C: je 0x150922f2 */
L_15092232:
    /* test ebx, ebx */ /* 0x15092232: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150922F2; /* 0x15092234: je 0x150922f2 */
L_1509223A:
    edi = MEM32(ebp + 0x10); /* 0x1509223A: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1509223D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1509223F: mov word ptr [eax], cx */
    /* test edi, edi */ /* 0x15092242: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150922F2; /* 0x15092244: je 0x150922f2 */
L_1509224A:
    edx = MEM32(ebp + 0x18); /* 0x1509224A: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x1509224D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509225D; /* 0x1509224F: jne 0x1509225d */
L_15092251:
    eax = MEM32(ebp + (-0x1C)); /* 0x15092251: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(eax + 0xD4); /* 0x15092254: mov edx, dword ptr [eax + 0xd4] */
    MEM32(ebp + 0x18) = edx; /* 0x1509225A: mov dword ptr [ebp + 0x18], edx */
L_1509225D:
    eax = ebx; /* 0x1509225D: mov eax, ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1509225F: mov dword ptr [ebp - 4], eax */
L_15092262:
    ecx = (uint32_t)MEM16(edi); /* 0x15092262: movzx ecx, word ptr [edi] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x15092265: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150922D3; /* 0x15092268: je 0x150922d3 */
L_1509226A:
    /* cmp ecx, 0x25u */ /* 0x1509226A: cmp ecx, 0x25 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x25u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092282; /* 0x1509226D: je 0x15092282 */
L_1509226F:
    eax = MEM32(ebp + 0x8); /* 0x1509226F: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15092272: mov word ptr [eax], cx */
    eax = MEM32(ebp + (-0x4)); /* 0x15092275: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 2; /* 0x15092278: add dword ptr [ebp + 8], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1509227C: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1509227D: mov dword ptr [ebp - 4], eax */
    goto L_150922C9; /* 0x15092280: jmp 0x150922c9 */
L_15092282:
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x15092282: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150922F2; /* 0x15092285: je 0x150922f2 */
L_15092287:
    ebx = MEM32(ebp + 0xC); /* 0x15092287: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1509228A: add edi, 2 */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x1509228D: mov ecx, esi */
    eax = (uint32_t)MEM16(edi); /* 0x1509228F: movzx eax, word ptr [edi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x15092292: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, 0x23u */ /* 0x15092295: cmp eax, 0x23 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150922A5; /* 0x15092298: jne 0x150922a5 */
L_1509229A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1509229A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1509229C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1509229D: add edi, 2 */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edi); /* 0x150922A0: movzx eax, word ptr [edi] */
    goto L_150922A8; /* 0x150922A3: jmp 0x150922a8 */
L_150922A5:
    eax = MEM32(ebp + (-0xC)); /* 0x150922A5: mov eax, dword ptr [ebp - 0xc] */
L_150922A8:
    PUSH32(esp, ecx); /* 0x150922A8: push ecx */
    PUSH32(esp, edx); /* 0x150922A9: push edx */
    ecx = ebp + (-0x4); /* 0x150922AA: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x150922AD: push ecx */
    ecx = ebp + 0x8; /* 0x150922AE: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x150922B1: push ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150922B2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x150922B5: push eax */
    eax = ebp + (-0x1C); /* 0x150922B6: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x150922B9: push eax */
    RECOMP_CALL(sub_15091015); /* 0x150922BA: call 0x15091015 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x150922BF: add esp, 0x1c */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150922C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x150922C4: mov eax, dword ptr [ebp - 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_150922E6; /* 0x150922C7: je 0x150922e6 */
L_150922C9:
    edx = MEM32(ebp + 0x18); /* 0x150922C9: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x150922CC: add edi, 2 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150922CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092262; /* 0x150922D1: jne 0x15092262 */
L_150922D3:
    /* test eax, eax */ /* 0x150922D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509231E; /* 0x150922D5: je 0x1509231e */
L_150922D7:
    eax = MEM32(ebp + 0x8); /* 0x150922D7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150922DA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx; /* 0x150922DC: mov esi, ebx */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x150922DE: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x4)); /* 0x150922E1: sub esi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    goto L_1509230A; /* 0x150922E4: jmp 0x1509230a */
L_150922E6:
    /* test eax, eax */ /* 0x150922E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509231E; /* 0x150922E8: je 0x1509231e */
L_150922EA:
    eax = MEM32(ebp + (-0x8)); /* 0x150922EA: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150922ED: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x150922EF: mov word ptr [eax], cx */
L_150922F2:
    RECOMP_CALL(sub_15036430); /* 0x150922F2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150922F7: push esi */
    PUSH32(esp, esi); /* 0x150922F8: push esi */
    PUSH32(esp, esi); /* 0x150922F9: push esi */
    PUSH32(esp, esi); /* 0x150922FA: push esi */
    PUSH32(esp, esi); /* 0x150922FB: push esi */
    MEM32(eax) = 0x16u; /* 0x150922FC: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15092302: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092307: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1509230A:
    /* cmp MEM8(ebp + (-0x10)), 0 */ /* 0x1509230A: cmp byte ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x10))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092317; /* 0x1509230E: je 0x15092317 */
L_15092310:
    ecx = MEM32(ebp + (-0x14)); /* 0x15092310: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15092313: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092317:
    edi = POP32_VAL(esp); /* 0x15092317: pop edi */
    eax = esi; /* 0x15092318: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1509231A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1509231B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509231C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509231D: ret  */
L_1509231E:
    eax = MEM32(ebp + (-0x8)); /* 0x1509231E: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15092321: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x15092323: mov word ptr [eax], cx */
    /* cmp MEM32(ebp + (-0x4)), ecx */ /* 0x15092326: cmp dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_150922F2; /* 0x15092329: ja 0x150922f2 */
L_1509232B:
    RECOMP_CALL(sub_15036430); /* 0x1509232B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x22u; /* 0x15092330: mov dword ptr [eax], 0x22 */
    RECOMP_BACKEDGE();
    goto L_1509230A; /* 0x15092336: jmp 0x1509230a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15092340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092340u);

L_15092340:
    edi = edi; /* 0x15092340: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092342: push ebp */
    ebp = esp; /* 0x15092343: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15092345: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x15092348: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1509234A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1509234D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15092350: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15092353: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15092206); /* 0x15092356: call 0x15092206 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1509235B: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1509235E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509235F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092370u);

L_15092370:
    edi = edi; /* 0x15092370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092372: push ebp */
    ebp = esp; /* 0x15092373: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15092375: push 0 */
    PUSH32(esp, 0); /* 0x15092377: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15092379: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1509237C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1509237F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15092382: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15092206); /* 0x15092385: call 0x15092206 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1509238A: add esp, 0x18 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1509238D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509238E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092395(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092395u);

L_15092395:
    edi = edi; /* 0x15092395: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092397: push ebp */
    ebp = esp; /* 0x15092398: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1509239A: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1509239D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150923C0; /* 0x1509239F: jne 0x150923c0 */
L_150923A1:
    RECOMP_CALL(sub_15036430); /* 0x150923A1: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150923A6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x150923A8: push ecx */
    PUSH32(esp, ecx); /* 0x150923A9: push ecx */
    PUSH32(esp, ecx); /* 0x150923AA: push ecx */
    PUSH32(esp, ecx); /* 0x150923AB: push ecx */
    PUSH32(esp, ecx); /* 0x150923AC: push ecx */
    MEM32(eax) = 0x16u; /* 0x150923AD: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150923B3: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150923B8: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x150923BB: push 0x16 */
    eax = POP32_VAL(esp); /* 0x150923BD: pop eax */
    ebp = POP32_VAL(esp); /* 0x150923BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150923BF: ret  */
L_150923C0:
    eax = MEM32(0x150BD690); /* 0x150923C0: mov eax, dword ptr [0x150bd690] */
    MEM32(ecx) = eax; /* 0x150923C5: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150923C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x150923C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150923CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_150923D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150923D1u);

L_150923D1:
    edi = edi; /* 0x150923D1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150923D3: push ebp */
    ebp = esp; /* 0x150923D4: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x150923D6: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150923D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150923FC; /* 0x150923DB: jne 0x150923fc */
L_150923DD:
    RECOMP_CALL(sub_15036430); /* 0x150923DD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150923E2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x150923E4: push ecx */
    PUSH32(esp, ecx); /* 0x150923E5: push ecx */
    PUSH32(esp, ecx); /* 0x150923E6: push ecx */
    PUSH32(esp, ecx); /* 0x150923E7: push ecx */
    PUSH32(esp, ecx); /* 0x150923E8: push ecx */
    MEM32(eax) = 0x16u; /* 0x150923E9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150923EF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150923F4: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x150923F7: push 0x16 */
    eax = POP32_VAL(esp); /* 0x150923F9: pop eax */
    ebp = POP32_VAL(esp); /* 0x150923FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150923FB: ret  */
L_150923FC:
    eax = MEM32(0x150BD694); /* 0x150923FC: mov eax, dword ptr [0x150bd694] */
    MEM32(ecx) = eax; /* 0x15092401: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092403: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15092405: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092406: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509240D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509240Du);

L_1509240D:
    edi = edi; /* 0x1509240D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1509240F: push ebp */
    ebp = esp; /* 0x15092410: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15092412: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15092415: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092438; /* 0x15092417: jne 0x15092438 */
L_15092419:
    RECOMP_CALL(sub_15036430); /* 0x15092419: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1509241E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x15092420: push ecx */
    PUSH32(esp, ecx); /* 0x15092421: push ecx */
    PUSH32(esp, ecx); /* 0x15092422: push ecx */
    PUSH32(esp, ecx); /* 0x15092423: push ecx */
    PUSH32(esp, ecx); /* 0x15092424: push ecx */
    MEM32(eax) = 0x16u; /* 0x15092425: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x1509242B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092430: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x16u); /* 0x15092433: push 0x16 */
    eax = POP32_VAL(esp); /* 0x15092435: pop eax */
    ebp = POP32_VAL(esp); /* 0x15092436: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092437: ret  */
L_15092438:
    eax = MEM32(0x150BD698); /* 0x15092438: mov eax, dword ptr [0x150bd698] */
    MEM32(ecx) = eax; /* 0x1509243D: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509243F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15092441: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092442: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092450u);

L_15092450:
    edi = edi; /* 0x15092450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092452: push ebp */
    ebp = esp; /* 0x15092453: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x15092455: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15092458: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1509245D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1509245F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15092462: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15092465: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092491; /* 0x15092467: jne 0x15092491 */
L_15092469:
    RECOMP_CALL(sub_15036430); /* 0x15092469: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1509246E: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092474: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092476: push eax */
    PUSH32(esp, eax); /* 0x15092477: push eax */
    PUSH32(esp, eax); /* 0x15092478: push eax */
    PUSH32(esp, eax); /* 0x15092479: push eax */
    PUSH32(esp, eax); /* 0x1509247A: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1509247B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092480: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092483:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092483: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092485:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092485: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092488: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1509248A: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509248F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092490: ret  */
L_15092491:
    /* cmp MEM32(eax), 0 */ /* 0x15092491: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150924A3; /* 0x15092494: jge 0x150924a3 */
L_15092496:
    RECOMP_CALL(sub_15036430); /* 0x15092496: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1509249B: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_15092483; /* 0x150924A1: jmp 0x15092483 */
L_150924A3:
    PUSH32(esp, eax); /* 0x150924A3: push eax */
    eax = ebp + (-0x28); /* 0x150924A4: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150924A7: push eax */
    RECOMP_CALL(sub_15093520); /* 0x150924A8: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150924AD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150924AE: pop ecx */
    /* test eax, eax */ /* 0x150924AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092483; /* 0x150924B1: jne 0x15092483 */
L_150924B3:
    eax = ebp + (-0x28); /* 0x150924B3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150924B6: push eax */
    RECOMP_CALL(sub_150954E0); /* 0x150924B7: call 0x150954e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150924BC: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15092485; /* 0x150924BD: jmp 0x15092485 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150924D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150924D0u);

L_150924D0:
    edi = edi; /* 0x150924D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150924D2: push ebp */
    ebp = esp; /* 0x150924D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x150924D5: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150924D8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150924DD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150924DF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x150924E2: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x150924E5: push ebx */
    PUSH32(esp, esi); /* 0x150924E6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150924E7: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x150924EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092535; /* 0x150924EC: je 0x15092535 */
L_150924EE:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150924EE: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15092535; /* 0x150924F2: jbe 0x15092535 */
L_150924F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150924F4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150924F6: mov byte ptr [esi], bl */
    /* test eax, eax */ /* 0x150924F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092503; /* 0x150924FA: jne 0x15092503 */
L_150924FC:
    RECOMP_CALL(sub_15036430); /* 0x150924FC: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1509253C; /* 0x15092501: jmp 0x1509253c */
L_15092503:
    /* cmp MEM32(eax), ebx */ /* 0x15092503: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15092513; /* 0x15092505: jge 0x15092513 */
L_15092507:
    RECOMP_CALL(sub_15036430); /* 0x15092507: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1509250C: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1509250E: pop esi */
    MEM32(eax) = esi; /* 0x1509250F: mov dword ptr [eax], esi */
    goto L_1509254E; /* 0x15092511: jmp 0x1509254e */
L_15092513:
    PUSH32(esp, eax); /* 0x15092513: push eax */
    eax = ebp + (-0x28); /* 0x15092514: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15092517: push eax */
    RECOMP_CALL(sub_15093520); /* 0x15092518: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509251D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1509251E: pop ecx */
    /* test eax, eax */ /* 0x1509251F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092550; /* 0x15092521: jne 0x15092550 */
L_15092523:
    eax = ebp + (-0x28); /* 0x15092523: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15092526: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15092527: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1509252A: push esi */
    RECOMP_CALL(sub_15095540); /* 0x1509252B: call 0x15095540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15092530: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15092550; /* 0x15092533: jmp 0x15092550 */
L_15092535:
    RECOMP_CALL(sub_15036430); /* 0x15092535: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1509253A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1509253C:
    PUSH32(esp, 0x16u); /* 0x1509253C: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1509253E: pop esi */
    PUSH32(esp, ebx); /* 0x1509253F: push ebx */
    PUSH32(esp, ebx); /* 0x15092540: push ebx */
    PUSH32(esp, ebx); /* 0x15092541: push ebx */
    PUSH32(esp, ebx); /* 0x15092542: push ebx */
    PUSH32(esp, ebx); /* 0x15092543: push ebx */
    MEM32(eax) = esi; /* 0x15092544: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15092546: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509254B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1509254E:
    eax = esi; /* 0x1509254E: mov eax, esi */
L_15092550:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092550: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x15092553: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092554: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15092556: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15092557: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509255C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509255D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092570u);

    goto L_15092570;
L_15092450:
    edi = edi; /* 0x15092450: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092452: push ebp */
    ebp = esp; /* 0x15092453: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x15092455: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15092458: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1509245D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1509245F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15092462: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15092465: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092491; /* 0x15092467: jne 0x15092491 */
L_15092469:
    RECOMP_CALL(sub_15036430); /* 0x15092469: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1509246E: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092474: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092476: push eax */
    PUSH32(esp, eax); /* 0x15092477: push eax */
    PUSH32(esp, eax); /* 0x15092478: push eax */
    PUSH32(esp, eax); /* 0x15092479: push eax */
    PUSH32(esp, eax); /* 0x1509247A: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x1509247B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092480: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092483:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092483: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092485:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092485: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092488: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1509248A: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509248F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092490: ret  */
L_15092491:
    /* cmp MEM32(eax), 0 */ /* 0x15092491: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150924A3; /* 0x15092494: jge 0x150924a3 */
L_15092496:
    RECOMP_CALL(sub_15036430); /* 0x15092496: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1509249B: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_15092483; /* 0x150924A1: jmp 0x15092483 */
L_150924A3:
    PUSH32(esp, eax); /* 0x150924A3: push eax */
    eax = ebp + (-0x28); /* 0x150924A4: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150924A7: push eax */
    RECOMP_CALL(sub_15093520); /* 0x150924A8: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150924AD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150924AE: pop ecx */
    /* test eax, eax */ /* 0x150924AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092483; /* 0x150924B1: jne 0x15092483 */
L_150924B3:
    eax = ebp + (-0x28); /* 0x150924B3: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150924B6: push eax */
    RECOMP_CALL(sub_150954E0); /* 0x150924B7: call 0x150954e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150924BC: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15092485; /* 0x150924BD: jmp 0x15092485 */
L_15092570:
    edi = edi; /* 0x15092570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092572: push ebp */
    ebp = esp; /* 0x15092573: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15092575: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15092450; /* 0x15092576: jmp 0x15092450 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15092590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092590u);

L_15092590:
    edi = edi; /* 0x15092590: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092592: push ebp */
    ebp = esp; /* 0x15092593: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x15092595: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15092598: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1509259D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1509259F: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x150925A2: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150925A5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150925D1; /* 0x150925A7: jne 0x150925d1 */
L_150925A9:
    RECOMP_CALL(sub_15036430); /* 0x150925A9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150925AE: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150925B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150925B6: push eax */
    PUSH32(esp, eax); /* 0x150925B7: push eax */
    PUSH32(esp, eax); /* 0x150925B8: push eax */
    PUSH32(esp, eax); /* 0x150925B9: push eax */
    PUSH32(esp, eax); /* 0x150925BA: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x150925BB: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150925C0: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150925C3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150925C3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150925C5:
    ecx = MEM32(ebp + (-0x4)); /* 0x150925C5: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150925C8: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150925CA: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150925CF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150925D0: ret  */
L_150925D1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150925D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x150925D3: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150925EB; /* 0x150925D6: jg 0x150925eb */
L_150925D8:
    if (CMP_L(_flag_a, _flag_b)) goto L_150925DE; /* 0x150925D8: jl 0x150925de */
L_150925DA:
    /* cmp MEM32(ecx), eax */ /* 0x150925DA: cmp dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150925EB; /* 0x150925DC: jae 0x150925eb */
L_150925DE:
    RECOMP_CALL(sub_15036430); /* 0x150925DE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x150925E3: mov dword ptr [eax], 0x16 */
    RECOMP_BACKEDGE();
    goto L_150925C3; /* 0x150925E9: jmp 0x150925c3 */
L_150925EB:
    PUSH32(esp, ecx); /* 0x150925EB: push ecx */
    eax = ebp + (-0x28); /* 0x150925EC: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150925EF: push eax */
    RECOMP_CALL(sub_150937C0); /* 0x150925F0: call 0x150937c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150925F5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150925F6: pop ecx */
    /* test eax, eax */ /* 0x150925F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150925C3; /* 0x150925F9: jne 0x150925c3 */
L_150925FB:
    eax = ebp + (-0x28); /* 0x150925FB: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x150925FE: push eax */
    RECOMP_CALL(sub_150954E0); /* 0x150925FF: call 0x150954e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092604: pop ecx */
    RECOMP_BACKEDGE();
    goto L_150925C5; /* 0x15092605: jmp 0x150925c5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15092610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092610u);

L_15092610:
    edi = edi; /* 0x15092610: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092612: push ebp */
    ebp = esp; /* 0x15092613: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x15092615: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15092618: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1509261D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1509261F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x15092622: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x15092625: push ebx */
    PUSH32(esp, esi); /* 0x15092626: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092627: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1509262A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509268C; /* 0x1509262C: je 0x1509268c */
L_1509262E:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1509262E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1509268C; /* 0x15092632: jbe 0x1509268c */
L_15092634:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15092634: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x15092636: mov byte ptr [esi], bl */
    /* test eax, eax */ /* 0x15092638: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092643; /* 0x1509263A: jne 0x15092643 */
L_1509263C:
    RECOMP_CALL(sub_15036430); /* 0x1509263C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_15092693; /* 0x15092641: jmp 0x15092693 */
L_15092643:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x15092643: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1509265A; /* 0x15092646: jg 0x1509265a */
L_15092648:
    if (CMP_L(_flag_a, _flag_b)) goto L_1509264E; /* 0x15092648: jl 0x1509264e */
L_1509264A:
    /* cmp MEM32(eax), ebx */ /* 0x1509264A: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1509265A; /* 0x1509264C: jae 0x1509265a */
L_1509264E:
    RECOMP_CALL(sub_15036430); /* 0x1509264E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15092653: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15092655: pop esi */
    MEM32(eax) = esi; /* 0x15092656: mov dword ptr [eax], esi */
    goto L_150926A5; /* 0x15092658: jmp 0x150926a5 */
L_1509265A:
    /* cmp MEM32(eax + 0x4), 7 */ /* 0x1509265A: cmp dword ptr [eax + 4], 7 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1509266A; /* 0x1509265E: jl 0x1509266a */
L_15092660:
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1509264E; /* 0x15092660: jg 0x1509264e */
L_15092662:
    /* cmp MEM32(eax), 0x93406FFFu */ /* 0x15092662: cmp dword ptr [eax], 0x93406fff */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x93406FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1509264E; /* 0x15092668: ja 0x1509264e */
L_1509266A:
    PUSH32(esp, eax); /* 0x1509266A: push eax */
    eax = ebp + (-0x28); /* 0x1509266B: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1509266E: push eax */
    RECOMP_CALL(sub_150937C0); /* 0x1509266F: call 0x150937c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092674: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092675: pop ecx */
    /* test eax, eax */ /* 0x15092676: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150926A7; /* 0x15092678: jne 0x150926a7 */
L_1509267A:
    eax = ebp + (-0x28); /* 0x1509267A: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1509267D: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1509267E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15092681: push esi */
    RECOMP_CALL(sub_15095540); /* 0x15092682: call 0x15095540 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15092687: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_150926A7; /* 0x1509268A: jmp 0x150926a7 */
L_1509268C:
    RECOMP_CALL(sub_15036430); /* 0x1509268C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15092691: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092693:
    PUSH32(esp, 0x16u); /* 0x15092693: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15092695: pop esi */
    PUSH32(esp, ebx); /* 0x15092696: push ebx */
    PUSH32(esp, ebx); /* 0x15092697: push ebx */
    PUSH32(esp, ebx); /* 0x15092698: push ebx */
    PUSH32(esp, ebx); /* 0x15092699: push ebx */
    PUSH32(esp, ebx); /* 0x1509269A: push ebx */
    MEM32(eax) = esi; /* 0x1509269B: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1509269D: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150926A2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150926A5:
    eax = esi; /* 0x150926A5: mov eax, esi */
L_150926A7:
    ecx = MEM32(ebp + (-0x4)); /* 0x150926A7: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x150926AA: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150926AB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150926AD: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150926AE: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150926B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150926B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_150926C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150926C0u);

L_150926C0:
    edi = edi; /* 0x150926C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150926C2: push ebp */
    ebp = esp; /* 0x150926C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150926C5: push ecx */
    PUSH32(esp, ecx); /* 0x150926C6: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150926C7: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150926E9; /* 0x150926CB: jl 0x150926e9 */
L_150926CD:
    eax = MEM32(ebp + 0x8); /* 0x150926CD: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x150926D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150926E9; /* 0x150926D2: js 0x150926e9 */
L_150926D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x150926D4: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x150926D7: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x150926DB: cvtdq2pd xmm0, xmm0 */
    MEM64(ebp + (-0x8)) = _xmm[0].u64[0]; /* 0x150926DF: movsd qword ptr [ebp - 8], xmm0 */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x150926E4: fld qword ptr [ebp - 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150926E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150926E8: ret  */
L_150926E9:
    RECOMP_CALL(sub_15036430); /* 0x150926E9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x150926EE: fldz  */
    MEM32(eax) = 0x16u; /* 0x150926F0: mov dword ptr [eax], 0x16 */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150926F6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150926F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092700u);

    goto L_15092700;
L_150926C0:
    edi = edi; /* 0x150926C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150926C2: push ebp */
    ebp = esp; /* 0x150926C3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150926C5: push ecx */
    PUSH32(esp, ecx); /* 0x150926C6: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150926C7: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150926E9; /* 0x150926CB: jl 0x150926e9 */
L_150926CD:
    eax = MEM32(ebp + 0x8); /* 0x150926CD: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x150926D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150926E9; /* 0x150926D2: js 0x150926e9 */
L_150926D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x150926D4: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    _xmm[0].u64[0] = (uint32_t)(eax); _xmm[0].u64[1] = 0; /* 0x150926D7: movd xmm0, eax */
    { int32_t _a = (int32_t)_xmm[0].u32[0], _b = (int32_t)_xmm[0].u32[1]; _xmm[0].f64[0] = _a; _xmm[0].f64[1] = _b; } /* 0x150926DB: cvtdq2pd xmm0, xmm0 */
    MEM64(ebp + (-0x8)) = _xmm[0].u64[0]; /* 0x150926DF: movsd qword ptr [ebp - 8], xmm0 */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x150926E4: fld qword ptr [ebp - 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150926E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150926E8: ret  */
L_150926E9:
    RECOMP_CALL(sub_15036430); /* 0x150926E9: call 0x15036430 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x150926EE: fldz  */
    MEM32(eax) = 0x16u; /* 0x150926F0: mov dword ptr [eax], 0x16 */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150926F6: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150926F7: ret  */
L_15092700:
    edi = edi; /* 0x15092700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092702: push ebp */
    ebp = esp; /* 0x15092703: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15092705: pop ebp */
    RECOMP_BACKEDGE();
    goto L_150926C0; /* 0x15092706: jmp 0x150926c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15092720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092720u);

L_15092720:
    edi = edi; /* 0x15092720: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092722: push ebp */
    ebp = esp; /* 0x15092723: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15092725: push ecx */
    PUSH32(esp, ecx); /* 0x15092726: push ecx */
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x15092727: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1509275A; /* 0x1509272B: jl 0x1509275a */
L_1509272D:
    if (CMP_G(_flag_a, _flag_b)) goto L_15092735; /* 0x1509272D: jg 0x15092735 */
L_1509272F:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1509272F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1509275A; /* 0x15092733: jb 0x1509275a */
L_15092735:
    edx = MEM32(ebp + 0xC); /* 0x15092735: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x15092738: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1509275A; /* 0x1509273A: jl 0x1509275a */
L_1509273C:
    ecx = MEM32(ebp + 0x8); /* 0x1509273C: mov ecx, dword ptr [ebp + 8] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15092745; /* 0x1509273F: jg 0x15092745 */
L_15092741:
    /* test ecx, ecx */ /* 0x15092741: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_1509275A; /* 0x15092743: jb 0x1509275a */
L_15092745:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x10); /* 0x15092745: sub ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = MEM32(ebp + 0x14), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15092748: sbb edx, dword ptr [ebp + 0x14] */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_CALL(sub_150A4DB0); /* 0x1509274B: call 0x150a4db0 */
    RECOMP_FLAGS_IN();
    MEM64(ebp + (-0x8)) = _xmm[0].u64[0]; /* 0x15092750: movsd qword ptr [ebp - 8], xmm0 */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x15092755: fld qword ptr [ebp - 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092758: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092759: ret  */
L_1509275A:
    RECOMP_CALL(sub_15036430); /* 0x1509275A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1509275F: fldz  */
    MEM32(eax) = 0x16u; /* 0x15092761: mov dword ptr [eax], 0x16 */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092767: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092768: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092770u);

L_15092770:
    goto L_15092780; /* 0x15092770: jmp 0x15092780 */
L_15092780:
    edi = edi; /* 0x15092780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092782: push ebp */
    ebp = esp; /* 0x15092783: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x15092785: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1509278B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15092790: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15092792: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15092795: push ebx */
    PUSH32(esp, esi); /* 0x15092796: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092797: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1509279A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x1509279C: mov dword ptr [ebp - 0xb4], ebx */
    /* test esi, esi */ /* 0x150927A2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150927C4; /* 0x150927A4: jne 0x150927c4 */
L_150927A6:
    RECOMP_CALL(sub_15036430); /* 0x150927A6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150927AB: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150927AD: pop esi */
    PUSH32(esp, ebx); /* 0x150927AE: push ebx */
    PUSH32(esp, ebx); /* 0x150927AF: push ebx */
    PUSH32(esp, ebx); /* 0x150927B0: push ebx */
    PUSH32(esp, ebx); /* 0x150927B1: push ebx */
    PUSH32(esp, ebx); /* 0x150927B2: push ebx */
    MEM32(eax) = esi; /* 0x150927B3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150927B5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150927BA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150927BD: mov eax, esi */
    goto L_150928C1; /* 0x150927BF: jmp 0x150928c1 */
L_150927C4:
    RECOMP_CALL(sub_150943C7); /* 0x150927C4: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB4); /* 0x150927C9: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x150927CF: push eax */
    RECOMP_CALL(sub_1509240D); /* 0x150927D0: call 0x1509240d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150927D5: pop ecx */
    /* test eax, eax */ /* 0x150927D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150927E7; /* 0x150927D8: je 0x150927e7 */
L_150927DA:
    PUSH32(esp, ebx); /* 0x150927DA: push ebx */
    PUSH32(esp, ebx); /* 0x150927DB: push ebx */
    PUSH32(esp, ebx); /* 0x150927DC: push ebx */
    PUSH32(esp, ebx); /* 0x150927DD: push ebx */
    PUSH32(esp, ebx); /* 0x150927DE: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150927DF: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150927E4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150927E7:
    eax = MEM32(ebp + (-0xB4)); /* 0x150927E7: mov eax, dword ptr [ebp - 0xb4] */
    PUSH32(esp, edi); /* 0x150927ED: push edi */
    PUSH32(esp, 0x3Cu); /* 0x150927EE: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150927F0: cdq  */
    ecx = POP32_VAL(esp); /* 0x150927F1: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x150927F2: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x150927F4: mov word ptr [esi + 6], ax */
    eax = ebp + (-0xBC); /* 0x150927F8: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x150927FE: push eax */
    RECOMP_ICALL(MEM32(0x150C0288)); /* 0x150927FF: call dword ptr [0x150c0288] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xB8)); /* 0x15092805: mov edi, dword ptr [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x1509280B: push ebx */
    ebx = MEM32(ebp + (-0xBC)); /* 0x1509280C: mov ebx, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 0x23C34600u); /* 0x15092812: push 0x23c34600 */
    PUSH32(esp, edi); /* 0x15092817: push edi */
    PUSH32(esp, ebx); /* 0x15092818: push ebx */
    RECOMP_CALL(sub_15049320); /* 0x15092819: call 0x15049320 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC0)) = eax; /* 0x1509281E: mov dword ptr [ebp - 0xc0], eax */
    /* cmp eax, MEM32(0x150BEA20) */ /* 0x15092824: cmp eax, dword ptr [0x150bea20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BEA20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092878; /* 0x1509282A: je 0x15092878 */
L_1509282C:
    eax = ebp + (-0xB0); /* 0x1509282C: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x15092832: push eax */
    RECOMP_ICALL(MEM32(0x150C0004)); /* 0x15092833: call dword ptr [0x150c0004] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x15092839: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1509283C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092859; /* 0x1509283E: je 0x15092859 */
L_15092840:
    /* cmp eax, 2 */ /* 0x15092840: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092857; /* 0x15092843: jne 0x15092857 */
L_15092845:
    /* cmp MEM16(ebp + (-0x16)), 0 */ /* 0x15092845: cmp word ptr [ebp - 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x16))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092857; /* 0x1509284A: je 0x15092857 */
L_1509284C:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1509284C: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092857; /* 0x15092850: je 0x15092857 */
L_15092852:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15092852: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15092854: inc ecx */
    _flag_k = FK_INC;
    goto L_15092859; /* 0x15092855: jmp 0x15092859 */
L_15092857:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15092857: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092859:
    eax = MEM32(ebp + (-0xC0)); /* 0x15092859: mov eax, dword ptr [ebp - 0xc0] */
    edi = MEM32(ebp + (-0xB8)); /* 0x1509285F: mov edi, dword ptr [ebp - 0xb8] */
    ebx = MEM32(ebp + (-0xBC)); /* 0x15092865: mov ebx, dword ptr [ebp - 0xbc] */
    MEM32(0x150BD720) = ecx; /* 0x1509286B: mov dword ptr [0x150bd720], ecx */
    MEM32(0x150BEA20) = eax; /* 0x15092871: mov dword ptr [0x150bea20], eax */
    goto L_1509287E; /* 0x15092876: jmp 0x1509287e */
L_15092878:
    ecx = MEM32(0x150BD720); /* 0x15092878: mov ecx, dword ptr [0x150bd720] */
L_1509287E:
    PUSH32(esp, 0); /* 0x1509287E: push 0 */
    PUSH32(esp, 0x2710u); /* 0x15092880: push 0x2710 */
    PUSH32(esp, edi); /* 0x15092885: push edi */
    PUSH32(esp, ebx); /* 0x15092886: push ebx */
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x15092887: mov word ptr [esi + 8], cx */
    RECOMP_CALL(sub_15049320); /* 0x1509288B: call 0x15049320 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15092890: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x15092892: push 0x3e8 */
    PUSH32(esp, edx); /* 0x15092897: push edx */
    PUSH32(esp, eax); /* 0x15092898: push eax */
    RECOMP_CALL(sub_15049390); /* 0x15092899: call 0x15049390 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1509289E: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2AC18000u; /* 0x150928A0: add ebx, 0x2ac18000 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x150928A6: mov word ptr [esi + 4], ax */
    PUSH32(esp, 0x00989680u); /* 0x150928AA: push 0x989680 */
    { uint32_t _aa = edi, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150928AF: adc edi, 0xfe624e21 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x150928B5: push edi */
    PUSH32(esp, ebx); /* 0x150928B6: push ebx */
    RECOMP_CALL(sub_15049320); /* 0x150928B7: call 0x15049320 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x150928BC: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150928BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x150928C0: pop edi */
L_150928C1:
    ecx = MEM32(ebp + (-0x4)); /* 0x150928C1: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x150928C4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150928C5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150928C7: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150928C8: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150928CD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150928CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092780u);

L_15092780:
    edi = edi; /* 0x15092780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092782: push ebp */
    ebp = esp; /* 0x15092783: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC0u; /* 0x15092785: sub esp, 0xc0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1509278B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15092790: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15092792: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15092795: push ebx */
    PUSH32(esp, esi); /* 0x15092796: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092797: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1509279A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x1509279C: mov dword ptr [ebp - 0xb4], ebx */
    /* test esi, esi */ /* 0x150927A2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150927C4; /* 0x150927A4: jne 0x150927c4 */
L_150927A6:
    RECOMP_CALL(sub_15036430); /* 0x150927A6: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150927AB: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150927AD: pop esi */
    PUSH32(esp, ebx); /* 0x150927AE: push ebx */
    PUSH32(esp, ebx); /* 0x150927AF: push ebx */
    PUSH32(esp, ebx); /* 0x150927B0: push ebx */
    PUSH32(esp, ebx); /* 0x150927B1: push ebx */
    PUSH32(esp, ebx); /* 0x150927B2: push ebx */
    MEM32(eax) = esi; /* 0x150927B3: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150927B5: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150927BA: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x150927BD: mov eax, esi */
    goto L_150928C1; /* 0x150927BF: jmp 0x150928c1 */
L_150927C4:
    RECOMP_CALL(sub_150943C7); /* 0x150927C4: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB4); /* 0x150927C9: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x150927CF: push eax */
    RECOMP_CALL(sub_1509240D); /* 0x150927D0: call 0x1509240d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150927D5: pop ecx */
    /* test eax, eax */ /* 0x150927D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150927E7; /* 0x150927D8: je 0x150927e7 */
L_150927DA:
    PUSH32(esp, ebx); /* 0x150927DA: push ebx */
    PUSH32(esp, ebx); /* 0x150927DB: push ebx */
    PUSH32(esp, ebx); /* 0x150927DC: push ebx */
    PUSH32(esp, ebx); /* 0x150927DD: push ebx */
    PUSH32(esp, ebx); /* 0x150927DE: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150927DF: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150927E4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150927E7:
    eax = MEM32(ebp + (-0xB4)); /* 0x150927E7: mov eax, dword ptr [ebp - 0xb4] */
    PUSH32(esp, edi); /* 0x150927ED: push edi */
    PUSH32(esp, 0x3Cu); /* 0x150927EE: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150927F0: cdq  */
    ecx = POP32_VAL(esp); /* 0x150927F1: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x150927F2: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0x6) = (uint16_t)(LO16(eax)); /* 0x150927F4: mov word ptr [esi + 6], ax */
    eax = ebp + (-0xBC); /* 0x150927F8: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x150927FE: push eax */
    RECOMP_ICALL(MEM32(0x150C0288)); /* 0x150927FF: call dword ptr [0x150c0288] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xB8)); /* 0x15092805: mov edi, dword ptr [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x1509280B: push ebx */
    ebx = MEM32(ebp + (-0xBC)); /* 0x1509280C: mov ebx, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 0x23C34600u); /* 0x15092812: push 0x23c34600 */
    PUSH32(esp, edi); /* 0x15092817: push edi */
    PUSH32(esp, ebx); /* 0x15092818: push ebx */
    RECOMP_CALL(sub_15049320); /* 0x15092819: call 0x15049320 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC0)) = eax; /* 0x1509281E: mov dword ptr [ebp - 0xc0], eax */
    /* cmp eax, MEM32(0x150BEA20) */ /* 0x15092824: cmp eax, dword ptr [0x150bea20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BEA20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092878; /* 0x1509282A: je 0x15092878 */
L_1509282C:
    eax = ebp + (-0xB0); /* 0x1509282C: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x15092832: push eax */
    RECOMP_ICALL(MEM32(0x150C0004)); /* 0x15092833: call dword ptr [0x150c0004] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x15092839: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1509283C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092859; /* 0x1509283E: je 0x15092859 */
L_15092840:
    /* cmp eax, 2 */ /* 0x15092840: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092857; /* 0x15092843: jne 0x15092857 */
L_15092845:
    /* cmp MEM16(ebp + (-0x16)), 0 */ /* 0x15092845: cmp word ptr [ebp - 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x16))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092857; /* 0x1509284A: je 0x15092857 */
L_1509284C:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1509284C: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15092857; /* 0x15092850: je 0x15092857 */
L_15092852:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15092852: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15092854: inc ecx */
    _flag_k = FK_INC;
    goto L_15092859; /* 0x15092855: jmp 0x15092859 */
L_15092857:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15092857: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092859:
    eax = MEM32(ebp + (-0xC0)); /* 0x15092859: mov eax, dword ptr [ebp - 0xc0] */
    edi = MEM32(ebp + (-0xB8)); /* 0x1509285F: mov edi, dword ptr [ebp - 0xb8] */
    ebx = MEM32(ebp + (-0xBC)); /* 0x15092865: mov ebx, dword ptr [ebp - 0xbc] */
    MEM32(0x150BD720) = ecx; /* 0x1509286B: mov dword ptr [0x150bd720], ecx */
    MEM32(0x150BEA20) = eax; /* 0x15092871: mov dword ptr [0x150bea20], eax */
    goto L_1509287E; /* 0x15092876: jmp 0x1509287e */
L_15092878:
    ecx = MEM32(0x150BD720); /* 0x15092878: mov ecx, dword ptr [0x150bd720] */
L_1509287E:
    PUSH32(esp, 0); /* 0x1509287E: push 0 */
    PUSH32(esp, 0x2710u); /* 0x15092880: push 0x2710 */
    PUSH32(esp, edi); /* 0x15092885: push edi */
    PUSH32(esp, ebx); /* 0x15092886: push ebx */
    MEM16(esi + 0x8) = (uint16_t)(LO16(ecx)); /* 0x15092887: mov word ptr [esi + 8], cx */
    RECOMP_CALL(sub_15049320); /* 0x1509288B: call 0x15049320 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15092890: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x15092892: push 0x3e8 */
    PUSH32(esp, edx); /* 0x15092897: push edx */
    PUSH32(esp, eax); /* 0x15092898: push eax */
    RECOMP_CALL(sub_15049390); /* 0x15092899: call 0x15049390 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1509289E: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2AC18000u; /* 0x150928A0: add ebx, 0x2ac18000 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x150928A6: mov word ptr [esi + 4], ax */
    PUSH32(esp, 0x00989680u); /* 0x150928AA: push 0x989680 */
    { uint32_t _aa = edi, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150928AF: adc edi, 0xfe624e21 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x150928B5: push edi */
    PUSH32(esp, ebx); /* 0x150928B6: push ebx */
    RECOMP_CALL(sub_15049320); /* 0x150928B7: call 0x15049320 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x150928BC: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150928BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x150928C0: pop edi */
L_150928C1:
    ecx = MEM32(ebp + (-0x4)); /* 0x150928C1: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x150928C4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150928C5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150928C7: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150928C8: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150928CD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150928CE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150928E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150928E0u);

L_150928E0:
    goto L_150928F0; /* 0x150928E0: jmp 0x150928f0 */
L_150928F0:
    edi = edi; /* 0x150928F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150928F2: push ebp */
    ebp = esp; /* 0x150928F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x150928F5: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150928FB: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15092900: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15092902: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15092905: push ebx */
    PUSH32(esp, esi); /* 0x15092906: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092907: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1509290A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x1509290C: mov dword ptr [ebp - 0xb4], ebx */
    /* test esi, esi */ /* 0x15092912: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092934; /* 0x15092914: jne 0x15092934 */
L_15092916:
    RECOMP_CALL(sub_15036430); /* 0x15092916: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1509291B: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1509291D: pop esi */
    PUSH32(esp, ebx); /* 0x1509291E: push ebx */
    PUSH32(esp, ebx); /* 0x1509291F: push ebx */
    PUSH32(esp, ebx); /* 0x15092920: push ebx */
    PUSH32(esp, ebx); /* 0x15092921: push ebx */
    PUSH32(esp, ebx); /* 0x15092922: push ebx */
    MEM32(eax) = esi; /* 0x15092923: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15092925: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509292A: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1509292D: mov eax, esi */
    goto L_15092A53; /* 0x1509292F: jmp 0x15092a53 */
L_15092934:
    RECOMP_CALL(sub_150943C7); /* 0x15092934: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB4); /* 0x15092939: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x1509293F: push eax */
    RECOMP_CALL(sub_1509240D); /* 0x15092940: call 0x1509240d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092945: pop ecx */
    /* test eax, eax */ /* 0x15092946: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092957; /* 0x15092948: je 0x15092957 */
L_1509294A:
    PUSH32(esp, ebx); /* 0x1509294A: push ebx */
    PUSH32(esp, ebx); /* 0x1509294B: push ebx */
    PUSH32(esp, ebx); /* 0x1509294C: push ebx */
    PUSH32(esp, ebx); /* 0x1509294D: push ebx */
    PUSH32(esp, ebx); /* 0x1509294E: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1509294F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092954: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092957:
    eax = MEM32(ebp + (-0xB4)); /* 0x15092957: mov eax, dword ptr [ebp - 0xb4] */
    PUSH32(esp, edi); /* 0x1509295D: push edi */
    PUSH32(esp, 0x3Cu); /* 0x1509295E: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15092960: cdq  */
    ecx = POP32_VAL(esp); /* 0x15092961: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15092962: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0xA) = (uint16_t)(LO16(eax)); /* 0x15092964: mov word ptr [esi + 0xa], ax */
    eax = ebp + (-0xBC); /* 0x15092968: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x1509296E: push eax */
    RECOMP_ICALL(MEM32(0x150C0288)); /* 0x1509296F: call dword ptr [0x150c0288] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xB8)); /* 0x15092975: mov edi, dword ptr [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x1509297B: push ebx */
    ebx = MEM32(ebp + (-0xBC)); /* 0x1509297C: mov ebx, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 0x23C34600u); /* 0x15092982: push 0x23c34600 */
    PUSH32(esp, edi); /* 0x15092987: push edi */
    PUSH32(esp, ebx); /* 0x15092988: push ebx */
    RECOMP_CALL(sub_15049320); /* 0x15092989: call 0x15049320 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1509298E: mov ecx, eax */
    eax = edx; /* 0x15092990: mov eax, edx */
    MEM32(ebp + (-0xC0)) = ecx; /* 0x15092992: mov dword ptr [ebp - 0xc0], ecx */
    MEM32(ebp + (-0xC4)) = eax; /* 0x15092998: mov dword ptr [ebp - 0xc4], eax */
    /* cmp ecx, MEM32(0x150BEA28) */ /* 0x1509299E: cmp ecx, dword ptr [0x150bea28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x150BEA28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150929B5; /* 0x150929A4: jne 0x150929b5 */
L_150929A6:
    /* cmp eax, MEM32(0x150BEA2C) */ /* 0x150929A6: cmp eax, dword ptr [0x150bea2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BEA2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150929B5; /* 0x150929AC: jne 0x150929b5 */
L_150929AE:
    eax = MEM32(0x150BD724); /* 0x150929AE: mov eax, dword ptr [0x150bd724] */
    goto L_15092A0D; /* 0x150929B3: jmp 0x15092a0d */
L_150929B5:
    eax = ebp + (-0xB0); /* 0x150929B5: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x150929BB: push eax */
    RECOMP_ICALL(MEM32(0x150C0004)); /* 0x150929BC: call dword ptr [0x150c0004] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150929C2: mov ecx, eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150929C4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x150929C7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150929E4; /* 0x150929C9: je 0x150929e4 */
L_150929CB:
    /* cmp ecx, 2 */ /* 0x150929CB: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150929E2; /* 0x150929CE: jne 0x150929e2 */
L_150929D0:
    /* cmp MEM16(ebp + (-0x16)), 0 */ /* 0x150929D0: cmp word ptr [ebp - 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x16))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150929E2; /* 0x150929D5: je 0x150929e2 */
L_150929D7:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x150929D7: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150929E2; /* 0x150929DB: je 0x150929e2 */
L_150929DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150929DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150929DF: inc eax */
    _flag_k = FK_INC;
    goto L_150929E4; /* 0x150929E0: jmp 0x150929e4 */
L_150929E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150929E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150929E4:
    ecx = MEM32(ebp + (-0xC0)); /* 0x150929E4: mov ecx, dword ptr [ebp - 0xc0] */
    edi = MEM32(ebp + (-0xB8)); /* 0x150929EA: mov edi, dword ptr [ebp - 0xb8] */
    ebx = MEM32(ebp + (-0xBC)); /* 0x150929F0: mov ebx, dword ptr [ebp - 0xbc] */
    MEM32(0x150BEA28) = ecx; /* 0x150929F6: mov dword ptr [0x150bea28], ecx */
    ecx = MEM32(ebp + (-0xC4)); /* 0x150929FC: mov ecx, dword ptr [ebp - 0xc4] */
    MEM32(0x150BD724) = eax; /* 0x15092A02: mov dword ptr [0x150bd724], eax */
    MEM32(0x150BEA2C) = ecx; /* 0x15092A07: mov dword ptr [0x150bea2c], ecx */
L_15092A0D:
    PUSH32(esp, 0); /* 0x15092A0D: push 0 */
    PUSH32(esp, 0x2710u); /* 0x15092A0F: push 0x2710 */
    PUSH32(esp, edi); /* 0x15092A14: push edi */
    PUSH32(esp, ebx); /* 0x15092A15: push ebx */
    MEM16(esi + 0xC) = (uint16_t)(LO16(eax)); /* 0x15092A16: mov word ptr [esi + 0xc], ax */
    RECOMP_CALL(sub_15049320); /* 0x15092A1A: call 0x15049320 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15092A1F: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x15092A21: push 0x3e8 */
    PUSH32(esp, edx); /* 0x15092A26: push edx */
    PUSH32(esp, eax); /* 0x15092A27: push eax */
    RECOMP_CALL(sub_15049390); /* 0x15092A28: call 0x15049390 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15092A2D: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2AC18000u; /* 0x15092A2F: add ebx, 0x2ac18000 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x15092A35: mov word ptr [esi + 8], ax */
    PUSH32(esp, 0x00989680u); /* 0x15092A39: push 0x989680 */
    { uint32_t _aa = edi, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15092A3E: adc edi, 0xfe624e21 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x15092A44: push edi */
    PUSH32(esp, ebx); /* 0x15092A45: push ebx */
    RECOMP_CALL(sub_15049320); /* 0x15092A46: call 0x15049320 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x15092A4B: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092A4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x15092A4F: mov dword ptr [esi + 4], edx */
    edi = POP32_VAL(esp); /* 0x15092A52: pop edi */
L_15092A53:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092A53: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x15092A56: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092A57: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15092A59: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15092A5A: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092A5F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092A60: ret  */
    RECOMP_REGS_OUT();
}

void sub_150928F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150928F0u);

L_150928F0:
    edi = edi; /* 0x150928F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150928F2: push ebp */
    ebp = esp; /* 0x150928F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC4u; /* 0x150928F5: sub esp, 0xc4 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150928FB: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15092900: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15092902: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15092905: push ebx */
    PUSH32(esp, esi); /* 0x15092906: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092907: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1509290A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB4)) = ebx; /* 0x1509290C: mov dword ptr [ebp - 0xb4], ebx */
    /* test esi, esi */ /* 0x15092912: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092934; /* 0x15092914: jne 0x15092934 */
L_15092916:
    RECOMP_CALL(sub_15036430); /* 0x15092916: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1509291B: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1509291D: pop esi */
    PUSH32(esp, ebx); /* 0x1509291E: push ebx */
    PUSH32(esp, ebx); /* 0x1509291F: push ebx */
    PUSH32(esp, ebx); /* 0x15092920: push ebx */
    PUSH32(esp, ebx); /* 0x15092921: push ebx */
    PUSH32(esp, ebx); /* 0x15092922: push ebx */
    MEM32(eax) = esi; /* 0x15092923: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15092925: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509292A: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1509292D: mov eax, esi */
    goto L_15092A53; /* 0x1509292F: jmp 0x15092a53 */
L_15092934:
    RECOMP_CALL(sub_150943C7); /* 0x15092934: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xB4); /* 0x15092939: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x1509293F: push eax */
    RECOMP_CALL(sub_1509240D); /* 0x15092940: call 0x1509240d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092945: pop ecx */
    /* test eax, eax */ /* 0x15092946: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092957; /* 0x15092948: je 0x15092957 */
L_1509294A:
    PUSH32(esp, ebx); /* 0x1509294A: push ebx */
    PUSH32(esp, ebx); /* 0x1509294B: push ebx */
    PUSH32(esp, ebx); /* 0x1509294C: push ebx */
    PUSH32(esp, ebx); /* 0x1509294D: push ebx */
    PUSH32(esp, ebx); /* 0x1509294E: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1509294F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092954: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092957:
    eax = MEM32(ebp + (-0xB4)); /* 0x15092957: mov eax, dword ptr [ebp - 0xb4] */
    PUSH32(esp, edi); /* 0x1509295D: push edi */
    PUSH32(esp, 0x3Cu); /* 0x1509295E: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15092960: cdq  */
    ecx = POP32_VAL(esp); /* 0x15092961: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15092962: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM16(esi + 0xA) = (uint16_t)(LO16(eax)); /* 0x15092964: mov word ptr [esi + 0xa], ax */
    eax = ebp + (-0xBC); /* 0x15092968: lea eax, [ebp - 0xbc] */
    PUSH32(esp, eax); /* 0x1509296E: push eax */
    RECOMP_ICALL(MEM32(0x150C0288)); /* 0x1509296F: call dword ptr [0x150c0288] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xB8)); /* 0x15092975: mov edi, dword ptr [ebp - 0xb8] */
    PUSH32(esp, ebx); /* 0x1509297B: push ebx */
    ebx = MEM32(ebp + (-0xBC)); /* 0x1509297C: mov ebx, dword ptr [ebp - 0xbc] */
    PUSH32(esp, 0x23C34600u); /* 0x15092982: push 0x23c34600 */
    PUSH32(esp, edi); /* 0x15092987: push edi */
    PUSH32(esp, ebx); /* 0x15092988: push ebx */
    RECOMP_CALL(sub_15049320); /* 0x15092989: call 0x15049320 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1509298E: mov ecx, eax */
    eax = edx; /* 0x15092990: mov eax, edx */
    MEM32(ebp + (-0xC0)) = ecx; /* 0x15092992: mov dword ptr [ebp - 0xc0], ecx */
    MEM32(ebp + (-0xC4)) = eax; /* 0x15092998: mov dword ptr [ebp - 0xc4], eax */
    /* cmp ecx, MEM32(0x150BEA28) */ /* 0x1509299E: cmp ecx, dword ptr [0x150bea28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x150BEA28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150929B5; /* 0x150929A4: jne 0x150929b5 */
L_150929A6:
    /* cmp eax, MEM32(0x150BEA2C) */ /* 0x150929A6: cmp eax, dword ptr [0x150bea2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BEA2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150929B5; /* 0x150929AC: jne 0x150929b5 */
L_150929AE:
    eax = MEM32(0x150BD724); /* 0x150929AE: mov eax, dword ptr [0x150bd724] */
    goto L_15092A0D; /* 0x150929B3: jmp 0x15092a0d */
L_150929B5:
    eax = ebp + (-0xB0); /* 0x150929B5: lea eax, [ebp - 0xb0] */
    PUSH32(esp, eax); /* 0x150929BB: push eax */
    RECOMP_ICALL(MEM32(0x150C0004)); /* 0x150929BC: call dword ptr [0x150c0004] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150929C2: mov ecx, eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150929C4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x150929C7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150929E4; /* 0x150929C9: je 0x150929e4 */
L_150929CB:
    /* cmp ecx, 2 */ /* 0x150929CB: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150929E2; /* 0x150929CE: jne 0x150929e2 */
L_150929D0:
    /* cmp MEM16(ebp + (-0x16)), 0 */ /* 0x150929D0: cmp word ptr [ebp - 0x16], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x16))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150929E2; /* 0x150929D5: je 0x150929e2 */
L_150929D7:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x150929D7: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150929E2; /* 0x150929DB: je 0x150929e2 */
L_150929DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150929DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150929DF: inc eax */
    _flag_k = FK_INC;
    goto L_150929E4; /* 0x150929E0: jmp 0x150929e4 */
L_150929E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150929E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150929E4:
    ecx = MEM32(ebp + (-0xC0)); /* 0x150929E4: mov ecx, dword ptr [ebp - 0xc0] */
    edi = MEM32(ebp + (-0xB8)); /* 0x150929EA: mov edi, dword ptr [ebp - 0xb8] */
    ebx = MEM32(ebp + (-0xBC)); /* 0x150929F0: mov ebx, dword ptr [ebp - 0xbc] */
    MEM32(0x150BEA28) = ecx; /* 0x150929F6: mov dword ptr [0x150bea28], ecx */
    ecx = MEM32(ebp + (-0xC4)); /* 0x150929FC: mov ecx, dword ptr [ebp - 0xc4] */
    MEM32(0x150BD724) = eax; /* 0x15092A02: mov dword ptr [0x150bd724], eax */
    MEM32(0x150BEA2C) = ecx; /* 0x15092A07: mov dword ptr [0x150bea2c], ecx */
L_15092A0D:
    PUSH32(esp, 0); /* 0x15092A0D: push 0 */
    PUSH32(esp, 0x2710u); /* 0x15092A0F: push 0x2710 */
    PUSH32(esp, edi); /* 0x15092A14: push edi */
    PUSH32(esp, ebx); /* 0x15092A15: push ebx */
    MEM16(esi + 0xC) = (uint16_t)(LO16(eax)); /* 0x15092A16: mov word ptr [esi + 0xc], ax */
    RECOMP_CALL(sub_15049320); /* 0x15092A1A: call 0x15049320 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15092A1F: push 0 */
    PUSH32(esp, 0x3E8u); /* 0x15092A21: push 0x3e8 */
    PUSH32(esp, edx); /* 0x15092A26: push edx */
    PUSH32(esp, eax); /* 0x15092A27: push eax */
    RECOMP_CALL(sub_15049390); /* 0x15092A28: call 0x15049390 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15092A2D: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x2AC18000u; /* 0x15092A2F: add ebx, 0x2ac18000 */
    _flag_k = FK_ADD;
    MEM16(esi + 0x8) = (uint16_t)(LO16(eax)); /* 0x15092A35: mov word ptr [esi + 8], ax */
    PUSH32(esp, 0x00989680u); /* 0x15092A39: push 0x989680 */
    { uint32_t _aa = edi, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15092A3E: adc edi, 0xfe624e21 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x15092A44: push edi */
    PUSH32(esp, ebx); /* 0x15092A45: push ebx */
    RECOMP_CALL(sub_15049320); /* 0x15092A46: call 0x15049320 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x15092A4B: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092A4D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = edx; /* 0x15092A4F: mov dword ptr [esi + 4], edx */
    edi = POP32_VAL(esp); /* 0x15092A52: pop edi */
L_15092A53:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092A53: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x15092A56: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092A57: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15092A59: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15092A5A: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092A5F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092A60: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092A70u);

L_15092A70:
    edi = edi; /* 0x15092A70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092A72: push ebp */
    ebp = esp; /* 0x15092A73: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15092A75: pop ebp */
    goto L_15092A90; /* 0x15092A76: jmp 0x15092a90 */
L_15092A90:
    edi = edi; /* 0x15092A90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092A92: push ebp */
    ebp = esp; /* 0x15092A93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x15092A95: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15092A98: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15092A9D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15092A9F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15092AA2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092AA3: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15092AA6: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15092AA7: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x15092AAA: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092ABF; /* 0x15092AAD: jne 0x15092abf */
L_15092AAF:
    RECOMP_CALL(sub_15036430); /* 0x15092AAF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15092AB4: mov dword ptr [eax], 9 */
    goto L_15092C3E; /* 0x15092ABA: jmp 0x15092c3e */
L_15092ABF:
    /* test esi, esi */ /* 0x15092ABF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15092C24; /* 0x15092AC1: js 0x15092c24 */
L_15092AC7:
    /* cmp esi, MEM32(0x150BEBAC) */ /* 0x15092AC7: cmp esi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15092C24; /* 0x15092ACD: jae 0x15092c24 */
L_15092AD3:
    eax = esi; /* 0x15092AD3: mov eax, esi */
    edx = esi; /* 0x15092AD5: mov edx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15092AD7: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x15092ADA: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x15092ADA: shr edx, 5 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x15092ADD: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x15092AE0: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x15092AE7: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092C24; /* 0x15092AEC: je 0x15092c24 */
L_15092AF2:
    /* test edi, edi */ /* 0x15092AF2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092B09; /* 0x15092AF4: jne 0x15092b09 */
L_15092AF6:
    eax = ebp + (-0x3C); /* 0x15092AF6: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x15092AF9: push eax */
    RECOMP_CALL(sub_150942F0); /* 0x15092AFA: call 0x150942f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x3C)); /* 0x15092AFF: mov eax, dword ptr [ebp - 0x3c] */
    edi = ebp + (-0x40); /* 0x15092B02: lea edi, [ebp - 0x40] */
    ecx = POP32_VAL(esp); /* 0x15092B05: pop ecx */
    MEM32(ebp + (-0x40)) = eax; /* 0x15092B06: mov dword ptr [ebp - 0x40], eax */
L_15092B09:
    eax = edi + 0x4; /* 0x15092B09: lea eax, [edi + 4] */
    PUSH32(esp, eax); /* 0x15092B0C: push eax */
    eax = ebp + (-0x38); /* 0x15092B0D: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x15092B10: push eax */
    RECOMP_CALL(sub_15093520); /* 0x15092B11: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092B16: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092B17: pop ecx */
    /* test eax, eax */ /* 0x15092B18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B2C; /* 0x15092B1A: je 0x15092b2c */
L_15092B1C:
    RECOMP_CALL(sub_15036430); /* 0x15092B1C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15092B21: mov dword ptr [eax], 0x16 */
    goto L_15092C3E; /* 0x15092B27: jmp 0x15092c3e */
L_15092B2C:
    eax = MEM32(ebp + (-0x24)); /* 0x15092B2C: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x15092B2F: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x15092B34: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x15092B38: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15092B3B: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x15092B3C: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x15092B40: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x15092B44: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x15092B48: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15092B4C: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x15092B50: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15092B54: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x15092B58: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15092B5C: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092B60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15092B62: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x48); /* 0x15092B66: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15092B69: push eax */
    eax = ebp + (-0x14); /* 0x15092B6A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15092B6D: push eax */
    RECOMP_ICALL(MEM32(0x150C0008)); /* 0x15092B6E: call dword ptr [0x150c0008] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092B74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092B76: je 0x15092b1c */
L_15092B78:
    eax = ebp + (-0x50); /* 0x15092B78: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15092B7B: push eax */
    eax = ebp + (-0x48); /* 0x15092B7C: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15092B7F: push eax */
    RECOMP_ICALL(MEM32(0x150C010C)); /* 0x15092B80: call dword ptr [0x150c010c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092B86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092B88: je 0x15092b1c */
L_15092B8A:
    eax = ebp + (-0x38); /* 0x15092B8A: lea eax, [ebp - 0x38] */
    PUSH32(esp, edi); /* 0x15092B8D: push edi */
    PUSH32(esp, eax); /* 0x15092B8E: push eax */
    RECOMP_CALL(sub_15093520); /* 0x15092B8F: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092B94: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092B95: pop ecx */
    /* test eax, eax */ /* 0x15092B96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092B98: jne 0x15092b1c */
L_15092B9A:
    eax = MEM32(ebp + (-0x24)); /* 0x15092B9A: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x15092B9D: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x15092BA2: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x15092BA6: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15092BA9: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x15092BAA: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x15092BAE: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x15092BB2: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x15092BB6: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15092BBA: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x15092BBE: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15092BC2: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x15092BC6: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15092BCA: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092BCE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15092BD0: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x48); /* 0x15092BD4: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15092BD7: push eax */
    eax = ebp + (-0x14); /* 0x15092BD8: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15092BDB: push eax */
    RECOMP_ICALL(MEM32(0x150C0008)); /* 0x15092BDC: call dword ptr [0x150c0008] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092BE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092BE4: je 0x15092b1c */
L_15092BEA:
    eax = ebp + (-0x58); /* 0x15092BEA: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x15092BED: push eax */
    eax = ebp + (-0x48); /* 0x15092BEE: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15092BF1: push eax */
    RECOMP_ICALL(MEM32(0x150C010C)); /* 0x15092BF2: call dword ptr [0x150c010c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092BF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092BFA: je 0x15092b1c */
L_15092C00:
    eax = ebp + (-0x50); /* 0x15092C00: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15092C03: push eax */
    eax = ebp + (-0x58); /* 0x15092C04: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x15092C07: push eax */
    PUSH32(esp, 0); /* 0x15092C08: push 0 */
    PUSH32(esp, esi); /* 0x15092C0A: push esi */
    RECOMP_CALL(sub_1504BD60); /* 0x15092C0B: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092C10: pop ecx */
    PUSH32(esp, eax); /* 0x15092C11: push eax */
    RECOMP_ICALL(MEM32(0x150C0110)); /* 0x15092C12: call dword ptr [0x150c0110] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092C18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092C1A: je 0x15092b1c */
L_15092C20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092C20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15092C41; /* 0x15092C22: jmp 0x15092c41 */
L_15092C24:
    RECOMP_CALL(sub_15036430); /* 0x15092C24: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15092C29: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092C2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092C31: push eax */
    PUSH32(esp, eax); /* 0x15092C32: push eax */
    PUSH32(esp, eax); /* 0x15092C33: push eax */
    PUSH32(esp, eax); /* 0x15092C34: push eax */
    PUSH32(esp, eax); /* 0x15092C35: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15092C36: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092C3B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092C3E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15092C3E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092C41:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092C41: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15092C44: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092C45: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15092C47: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15092C48: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092C4D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092C4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092A90u);

L_15092A90:
    edi = edi; /* 0x15092A90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092A92: push ebp */
    ebp = esp; /* 0x15092A93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x15092A95: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15092A98: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15092A9D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15092A9F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15092AA2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092AA3: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15092AA6: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15092AA7: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x15092AAA: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092ABF; /* 0x15092AAD: jne 0x15092abf */
L_15092AAF:
    RECOMP_CALL(sub_15036430); /* 0x15092AAF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15092AB4: mov dword ptr [eax], 9 */
    goto L_15092C3E; /* 0x15092ABA: jmp 0x15092c3e */
L_15092ABF:
    /* test esi, esi */ /* 0x15092ABF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15092C24; /* 0x15092AC1: js 0x15092c24 */
L_15092AC7:
    /* cmp esi, MEM32(0x150BEBAC) */ /* 0x15092AC7: cmp esi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15092C24; /* 0x15092ACD: jae 0x15092c24 */
L_15092AD3:
    eax = esi; /* 0x15092AD3: mov eax, esi */
    edx = esi; /* 0x15092AD5: mov edx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15092AD7: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x15092ADA: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x15092ADA: shr edx, 5 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x15092ADD: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x15092AE0: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x15092AE7: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092C24; /* 0x15092AEC: je 0x15092c24 */
L_15092AF2:
    /* test edi, edi */ /* 0x15092AF2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092B09; /* 0x15092AF4: jne 0x15092b09 */
L_15092AF6:
    eax = ebp + (-0x3C); /* 0x15092AF6: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x15092AF9: push eax */
    RECOMP_CALL(sub_150942F0); /* 0x15092AFA: call 0x150942f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x3C)); /* 0x15092AFF: mov eax, dword ptr [ebp - 0x3c] */
    edi = ebp + (-0x40); /* 0x15092B02: lea edi, [ebp - 0x40] */
    ecx = POP32_VAL(esp); /* 0x15092B05: pop ecx */
    MEM32(ebp + (-0x40)) = eax; /* 0x15092B06: mov dword ptr [ebp - 0x40], eax */
L_15092B09:
    eax = edi + 0x4; /* 0x15092B09: lea eax, [edi + 4] */
    PUSH32(esp, eax); /* 0x15092B0C: push eax */
    eax = ebp + (-0x38); /* 0x15092B0D: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x15092B10: push eax */
    RECOMP_CALL(sub_15093520); /* 0x15092B11: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092B16: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092B17: pop ecx */
    /* test eax, eax */ /* 0x15092B18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B2C; /* 0x15092B1A: je 0x15092b2c */
L_15092B1C:
    RECOMP_CALL(sub_15036430); /* 0x15092B1C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15092B21: mov dword ptr [eax], 0x16 */
    goto L_15092C3E; /* 0x15092B27: jmp 0x15092c3e */
L_15092B2C:
    eax = MEM32(ebp + (-0x24)); /* 0x15092B2C: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x15092B2F: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x15092B34: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x15092B38: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15092B3B: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x15092B3C: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x15092B40: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x15092B44: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x15092B48: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15092B4C: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x15092B50: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15092B54: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x15092B58: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15092B5C: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092B60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15092B62: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x48); /* 0x15092B66: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15092B69: push eax */
    eax = ebp + (-0x14); /* 0x15092B6A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15092B6D: push eax */
    RECOMP_ICALL(MEM32(0x150C0008)); /* 0x15092B6E: call dword ptr [0x150c0008] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092B74: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092B76: je 0x15092b1c */
L_15092B78:
    eax = ebp + (-0x50); /* 0x15092B78: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15092B7B: push eax */
    eax = ebp + (-0x48); /* 0x15092B7C: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15092B7F: push eax */
    RECOMP_ICALL(MEM32(0x150C010C)); /* 0x15092B80: call dword ptr [0x150c010c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092B86: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092B88: je 0x15092b1c */
L_15092B8A:
    eax = ebp + (-0x38); /* 0x15092B8A: lea eax, [ebp - 0x38] */
    PUSH32(esp, edi); /* 0x15092B8D: push edi */
    PUSH32(esp, eax); /* 0x15092B8E: push eax */
    RECOMP_CALL(sub_15093520); /* 0x15092B8F: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092B94: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092B95: pop ecx */
    /* test eax, eax */ /* 0x15092B96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092B98: jne 0x15092b1c */
L_15092B9A:
    eax = MEM32(ebp + (-0x24)); /* 0x15092B9A: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x15092B9D: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x15092BA2: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x15092BA6: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15092BA9: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x15092BAA: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x15092BAE: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x15092BB2: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x15092BB6: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15092BBA: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x15092BBE: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15092BC2: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x15092BC6: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15092BCA: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092BCE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15092BD0: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x48); /* 0x15092BD4: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15092BD7: push eax */
    eax = ebp + (-0x14); /* 0x15092BD8: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15092BDB: push eax */
    RECOMP_ICALL(MEM32(0x150C0008)); /* 0x15092BDC: call dword ptr [0x150c0008] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092BE2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092BE4: je 0x15092b1c */
L_15092BEA:
    eax = ebp + (-0x58); /* 0x15092BEA: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x15092BED: push eax */
    eax = ebp + (-0x48); /* 0x15092BEE: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x15092BF1: push eax */
    RECOMP_ICALL(MEM32(0x150C010C)); /* 0x15092BF2: call dword ptr [0x150c010c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092BF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092BFA: je 0x15092b1c */
L_15092C00:
    eax = ebp + (-0x50); /* 0x15092C00: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15092C03: push eax */
    eax = ebp + (-0x58); /* 0x15092C04: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x15092C07: push eax */
    PUSH32(esp, 0); /* 0x15092C08: push 0 */
    PUSH32(esp, esi); /* 0x15092C0A: push esi */
    RECOMP_CALL(sub_1504BD60); /* 0x15092C0B: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092C10: pop ecx */
    PUSH32(esp, eax); /* 0x15092C11: push eax */
    RECOMP_ICALL(MEM32(0x150C0110)); /* 0x15092C12: call dword ptr [0x150c0110] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092C18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092B1C; /* 0x15092C1A: je 0x15092b1c */
L_15092C20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092C20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15092C41; /* 0x15092C22: jmp 0x15092c41 */
L_15092C24:
    RECOMP_CALL(sub_15036430); /* 0x15092C24: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15092C29: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092C2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092C31: push eax */
    PUSH32(esp, eax); /* 0x15092C32: push eax */
    PUSH32(esp, eax); /* 0x15092C33: push eax */
    PUSH32(esp, eax); /* 0x15092C34: push eax */
    PUSH32(esp, eax); /* 0x15092C35: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15092C36: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092C3B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092C3E:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15092C3E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092C41:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092C41: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15092C44: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092C45: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15092C47: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15092C48: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092C4D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092C4E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092C60u);

L_15092C60:
    edi = edi; /* 0x15092C60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092C62: push ebp */
    ebp = esp; /* 0x15092C63: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15092C65: pop ebp */
    goto L_15092C80; /* 0x15092C66: jmp 0x15092c80 */
L_15092C80:
    edi = edi; /* 0x15092C80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092C82: push ebp */
    ebp = esp; /* 0x15092C83: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15092C85: push ecx */
    PUSH32(esp, esi); /* 0x15092C86: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15092C87: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x15092C89: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092CAB; /* 0x15092C8C: jne 0x15092cab */
L_15092C8E:
    RECOMP_CALL(sub_15036430); /* 0x15092C8E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15092C93: push esi */
    PUSH32(esp, esi); /* 0x15092C94: push esi */
    PUSH32(esp, esi); /* 0x15092C95: push esi */
    PUSH32(esp, esi); /* 0x15092C96: push esi */
    PUSH32(esp, esi); /* 0x15092C97: push esi */
    MEM32(eax) = 0x16u; /* 0x15092C98: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15092C9E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092CA3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092CA6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15092CA6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15092CFA; /* 0x15092CA9: jmp 0x15092cfa */
L_15092CAB:
    PUSH32(esp, esi); /* 0x15092CAB: push esi */
    PUSH32(esp, 0x40u); /* 0x15092CAC: push 0x40 */
    PUSH32(esp, 0x8002u); /* 0x15092CAE: push 0x8002 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15092CB3: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x15092CB6: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15092CB9: push eax */
    RECOMP_CALL(sub_1504CC00); /* 0x15092CBA: call 0x1504cc00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092CBF: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15092CC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092CA6; /* 0x15092CC4: jne 0x15092ca6 */
L_15092CC6:
    PUSH32(esp, edi); /* 0x15092CC6: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15092CC7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15092CCA: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15092A90); /* 0x15092CCD: call 0x15092a90 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15092CD2: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15092CD4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092CD5: pop ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15092CD6: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092CE2; /* 0x15092CD9: jne 0x15092ce2 */
L_15092CDB:
    RECOMP_CALL(sub_15036430); /* 0x15092CDB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x15092CE0: mov esi, dword ptr [eax] */
L_15092CE2:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15092CE2: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15049D70); /* 0x15092CE5: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092CEA: pop ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15092CEB: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092CF7; /* 0x15092CEE: jne 0x15092cf7 */
L_15092CF0:
    RECOMP_CALL(sub_15036430); /* 0x15092CF0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15092CF5: mov dword ptr [eax], esi */
L_15092CF7:
    eax = edi; /* 0x15092CF7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15092CF9: pop edi */
L_15092CFA:
    esi = POP32_VAL(esp); /* 0x15092CFA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092CFB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092CFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092C80u);

L_15092C80:
    edi = edi; /* 0x15092C80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092C82: push ebp */
    ebp = esp; /* 0x15092C83: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15092C85: push ecx */
    PUSH32(esp, esi); /* 0x15092C86: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15092C87: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x15092C89: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092CAB; /* 0x15092C8C: jne 0x15092cab */
L_15092C8E:
    RECOMP_CALL(sub_15036430); /* 0x15092C8E: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15092C93: push esi */
    PUSH32(esp, esi); /* 0x15092C94: push esi */
    PUSH32(esp, esi); /* 0x15092C95: push esi */
    PUSH32(esp, esi); /* 0x15092C96: push esi */
    PUSH32(esp, esi); /* 0x15092C97: push esi */
    MEM32(eax) = 0x16u; /* 0x15092C98: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15092C9E: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092CA3: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092CA6:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15092CA6: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15092CFA; /* 0x15092CA9: jmp 0x15092cfa */
L_15092CAB:
    PUSH32(esp, esi); /* 0x15092CAB: push esi */
    PUSH32(esp, 0x40u); /* 0x15092CAC: push 0x40 */
    PUSH32(esp, 0x8002u); /* 0x15092CAE: push 0x8002 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15092CB3: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x15092CB6: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15092CB9: push eax */
    RECOMP_CALL(sub_1504CC00); /* 0x15092CBA: call 0x1504cc00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092CBF: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15092CC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092CA6; /* 0x15092CC4: jne 0x15092ca6 */
L_15092CC6:
    PUSH32(esp, edi); /* 0x15092CC6: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15092CC7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15092CCA: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15092A90); /* 0x15092CCD: call 0x15092a90 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15092CD2: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15092CD4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092CD5: pop ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15092CD6: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092CE2; /* 0x15092CD9: jne 0x15092ce2 */
L_15092CDB:
    RECOMP_CALL(sub_15036430); /* 0x15092CDB: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x15092CE0: mov esi, dword ptr [eax] */
L_15092CE2:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15092CE2: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15049D70); /* 0x15092CE5: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092CEA: pop ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15092CEB: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092CF7; /* 0x15092CEE: jne 0x15092cf7 */
L_15092CF0:
    RECOMP_CALL(sub_15036430); /* 0x15092CF0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15092CF5: mov dword ptr [eax], esi */
L_15092CF7:
    eax = edi; /* 0x15092CF7: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15092CF9: pop edi */
L_15092CFA:
    esi = POP32_VAL(esp); /* 0x15092CFA: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092CFB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092CFC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092D10u);

L_15092D10:
    edi = edi; /* 0x15092D10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092D12: push ebp */
    ebp = esp; /* 0x15092D13: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x15092D15: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15092D18: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15092D1D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15092D1F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15092D22: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092D23: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15092D26: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15092D27: mov edi, dword ptr [ebp + 0xc] */
    /* cmp esi, 0xFFFFFFFEu */ /* 0x15092D2A: cmp esi, -2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092D3F; /* 0x15092D2D: jne 0x15092d3f */
L_15092D2F:
    RECOMP_CALL(sub_15036430); /* 0x15092D2F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15092D34: mov dword ptr [eax], 9 */
    goto L_15092EC4; /* 0x15092D3A: jmp 0x15092ec4 */
L_15092D3F:
    /* test esi, esi */ /* 0x15092D3F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15092EAA; /* 0x15092D41: js 0x15092eaa */
L_15092D47:
    /* cmp esi, MEM32(0x150BEBAC) */ /* 0x15092D47: cmp esi, dword ptr [0x150bebac] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BEBAC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15092EAA; /* 0x15092D4D: jae 0x15092eaa */
L_15092D53:
    eax = esi; /* 0x15092D53: mov eax, esi */
    edx = esi; /* 0x15092D55: mov edx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x15092D57: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x15092D5A: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x15092D5A: shr edx, 5 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x24u); /* 0x15092D5D: imul ecx, eax, 0x24 */
    eax = MEM32(edx * 4 + 0x150BEBC0); /* 0x15092D60: mov eax, dword ptr [edx*4 + 0x150bebc0] */
    /* test MEM8(eax + ecx + 0x4), 1 */ /* 0x15092D67: test byte ptr [eax + ecx + 4], 1 */
    _flag_a = (uint32_t)(MEM8(eax + ecx + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092EAA; /* 0x15092D6C: je 0x15092eaa */
L_15092D72:
    /* test edi, edi */ /* 0x15092D72: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092D8F; /* 0x15092D74: jne 0x15092d8f */
L_15092D76:
    eax = ebp + (-0x40); /* 0x15092D76: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x15092D79: push eax */
    RECOMP_CALL(sub_15094370); /* 0x15092D7A: call 0x15094370 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x15092D7F: mov eax, dword ptr [ebp - 0x40] */
    edi = ebp + (-0x48); /* 0x15092D82: lea edi, [ebp - 0x48] */
    ecx = POP32_VAL(esp); /* 0x15092D85: pop ecx */
    ecx = MEM32(ebp + (-0x3C)); /* 0x15092D86: mov ecx, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x48)) = eax; /* 0x15092D89: mov dword ptr [ebp - 0x48], eax */
    MEM32(ebp + (-0x44)) = ecx; /* 0x15092D8C: mov dword ptr [ebp - 0x44], ecx */
L_15092D8F:
    eax = edi + 0x8; /* 0x15092D8F: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x15092D92: push eax */
    eax = ebp + (-0x38); /* 0x15092D93: lea eax, [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x15092D96: push eax */
    RECOMP_CALL(sub_150937C0); /* 0x15092D97: call 0x150937c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092D9C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092D9D: pop ecx */
    /* test eax, eax */ /* 0x15092D9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092DB2; /* 0x15092DA0: je 0x15092db2 */
L_15092DA2:
    RECOMP_CALL(sub_15036430); /* 0x15092DA2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15092DA7: mov dword ptr [eax], 0x16 */
    goto L_15092EC4; /* 0x15092DAD: jmp 0x15092ec4 */
L_15092DB2:
    eax = MEM32(ebp + (-0x24)); /* 0x15092DB2: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x15092DB5: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x15092DBA: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x15092DBE: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15092DC1: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x15092DC2: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x15092DC6: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x15092DCA: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x15092DCE: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15092DD2: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x15092DD6: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15092DDA: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x15092DDE: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15092DE2: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092DE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15092DE8: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x50); /* 0x15092DEC: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15092DEF: push eax */
    eax = ebp + (-0x14); /* 0x15092DF0: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15092DF3: push eax */
    RECOMP_ICALL(MEM32(0x150C0008)); /* 0x15092DF4: call dword ptr [0x150c0008] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092DFA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092DA2; /* 0x15092DFC: je 0x15092da2 */
L_15092DFE:
    eax = ebp + (-0x58); /* 0x15092DFE: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x15092E01: push eax */
    eax = ebp + (-0x50); /* 0x15092E02: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15092E05: push eax */
    RECOMP_ICALL(MEM32(0x150C010C)); /* 0x15092E06: call dword ptr [0x150c010c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092E0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092DA2; /* 0x15092E0E: je 0x15092da2 */
L_15092E10:
    eax = ebp + (-0x38); /* 0x15092E10: lea eax, [ebp - 0x38] */
    PUSH32(esp, edi); /* 0x15092E13: push edi */
    PUSH32(esp, eax); /* 0x15092E14: push eax */
    RECOMP_CALL(sub_150937C0); /* 0x15092E15: call 0x150937c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092E1A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092E1B: pop ecx */
    /* test eax, eax */ /* 0x15092E1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092DA2; /* 0x15092E1E: jne 0x15092da2 */
L_15092E20:
    eax = MEM32(ebp + (-0x24)); /* 0x15092E20: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x76Cu; /* 0x15092E23: add eax, 0x76c */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x15092E28: mov word ptr [ebp - 0x14], ax */
    eax = MEM32(ebp + (-0x28)); /* 0x15092E2C: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15092E2F: inc eax */
    _flag_k = FK_INC;
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x15092E30: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(ebp + (-0x2C))); /* 0x15092E34: mov ax, word ptr [ebp - 0x2c] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x15092E38: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(ebp + (-0x30))); /* 0x15092E3C: mov ax, word ptr [ebp - 0x30] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15092E40: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(ebp + (-0x34))); /* 0x15092E44: mov ax, word ptr [ebp - 0x34] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15092E48: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(ebp + (-0x38))); /* 0x15092E4C: mov ax, word ptr [ebp - 0x38] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15092E50: mov word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092E54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x15092E56: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x50); /* 0x15092E5A: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15092E5D: push eax */
    eax = ebp + (-0x14); /* 0x15092E5E: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15092E61: push eax */
    RECOMP_ICALL(MEM32(0x150C0008)); /* 0x15092E62: call dword ptr [0x150c0008] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092E68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092DA2; /* 0x15092E6A: je 0x15092da2 */
L_15092E70:
    eax = ebp + (-0x60); /* 0x15092E70: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x15092E73: push eax */
    eax = ebp + (-0x50); /* 0x15092E74: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15092E77: push eax */
    RECOMP_ICALL(MEM32(0x150C010C)); /* 0x15092E78: call dword ptr [0x150c010c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092E7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092DA2; /* 0x15092E80: je 0x15092da2 */
L_15092E86:
    eax = ebp + (-0x58); /* 0x15092E86: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x15092E89: push eax */
    eax = ebp + (-0x60); /* 0x15092E8A: lea eax, [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x15092E8D: push eax */
    PUSH32(esp, 0); /* 0x15092E8E: push 0 */
    PUSH32(esp, esi); /* 0x15092E90: push esi */
    RECOMP_CALL(sub_1504BD60); /* 0x15092E91: call 0x1504bd60 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092E96: pop ecx */
    PUSH32(esp, eax); /* 0x15092E97: push eax */
    RECOMP_ICALL(MEM32(0x150C0110)); /* 0x15092E98: call dword ptr [0x150c0110] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15092E9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15092DA2; /* 0x15092EA0: je 0x15092da2 */
L_15092EA6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092EA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15092EC7; /* 0x15092EA8: jmp 0x15092ec7 */
L_15092EAA:
    RECOMP_CALL(sub_15036430); /* 0x15092EAA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 9; /* 0x15092EAF: mov dword ptr [eax], 9 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092EB5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092EB7: push eax */
    PUSH32(esp, eax); /* 0x15092EB8: push eax */
    PUSH32(esp, eax); /* 0x15092EB9: push eax */
    PUSH32(esp, eax); /* 0x15092EBA: push eax */
    PUSH32(esp, eax); /* 0x15092EBB: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15092EBC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092EC1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092EC4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15092EC4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15092EC7:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092EC7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15092ECA: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092ECB: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15092ECD: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15092ECE: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092ED3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092ED4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092EE0u);

L_15092EE0:
    edi = edi; /* 0x15092EE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092EE2: push ebp */
    ebp = esp; /* 0x15092EE3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15092EE5: push ecx */
    PUSH32(esp, esi); /* 0x15092EE6: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15092EE7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x15092EE9: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092F0B; /* 0x15092EEC: jne 0x15092f0b */
L_15092EEE:
    RECOMP_CALL(sub_15036430); /* 0x15092EEE: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15092EF3: push esi */
    PUSH32(esp, esi); /* 0x15092EF4: push esi */
    PUSH32(esp, esi); /* 0x15092EF5: push esi */
    PUSH32(esp, esi); /* 0x15092EF6: push esi */
    PUSH32(esp, esi); /* 0x15092EF7: push esi */
    MEM32(eax) = 0x16u; /* 0x15092EF8: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15092EFE: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092F03: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15092F06:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15092F06: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15092F5A; /* 0x15092F09: jmp 0x15092f5a */
L_15092F0B:
    PUSH32(esp, esi); /* 0x15092F0B: push esi */
    PUSH32(esp, 0x40u); /* 0x15092F0C: push 0x40 */
    PUSH32(esp, 0x8002u); /* 0x15092F0E: push 0x8002 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15092F13: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x15092F16: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15092F19: push eax */
    RECOMP_CALL(sub_1504CC00); /* 0x15092F1A: call 0x1504cc00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092F1F: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15092F22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092F06; /* 0x15092F24: jne 0x15092f06 */
L_15092F26:
    PUSH32(esp, edi); /* 0x15092F26: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15092F27: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15092F2A: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15092D10); /* 0x15092F2D: call 0x15092d10 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15092F32: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15092F34: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15092F35: pop ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15092F36: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092F42; /* 0x15092F39: jne 0x15092f42 */
L_15092F3B:
    RECOMP_CALL(sub_15036430); /* 0x15092F3B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x15092F40: mov esi, dword ptr [eax] */
L_15092F42:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x15092F42: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_15049D70); /* 0x15092F45: call 0x15049d70 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15092F4A: pop ecx */
    /* cmp edi, 0xFFFFFFFFu */ /* 0x15092F4B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15092F57; /* 0x15092F4E: jne 0x15092f57 */
L_15092F50:
    RECOMP_CALL(sub_15036430); /* 0x15092F50: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = esi; /* 0x15092F55: mov dword ptr [eax], esi */
L_15092F57:
    eax = edi; /* 0x15092F57: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x15092F59: pop edi */
L_15092F5A:
    esi = POP32_VAL(esp); /* 0x15092F5A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15092F5B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15092F5C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15092F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15092F70u);

L_15092F70:
    edi = edi; /* 0x15092F70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15092F72: push ebp */
    ebp = esp; /* 0x15092F73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15092F75: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15092F78: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15092F7D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15092F7F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15092F82: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15092F83: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15092F86: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15092FA8; /* 0x15092F88: jne 0x15092fa8 */
L_15092F8A:
    RECOMP_CALL(sub_15036430); /* 0x15092F8A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15092F8F: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092F95: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15092F97: push eax */
    PUSH32(esp, eax); /* 0x15092F98: push eax */
    PUSH32(esp, eax); /* 0x15092F99: push eax */
    PUSH32(esp, eax); /* 0x15092F9A: push eax */
    PUSH32(esp, eax); /* 0x15092F9B: push eax */
    RECOMP_CALL(sub_1505A110); /* 0x15092F9C: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15092FA1: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15092FA4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15092FF7; /* 0x15092FA6: jmp 0x15092ff7 */
L_15092FA8:
    eax = ebp + (-0x14); /* 0x15092FA8: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15092FAB: push eax */
    RECOMP_ICALL(MEM32(0x150C027C)); /* 0x15092FAC: call dword ptr [0x150c027c] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x8)); /* 0x15092FB2: movzx eax, word ptr [ebp - 8] */
    _flag_a = (uint32_t)((MEM32(esi + 0x20) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x20) | 0xFFFFFFFFu));
    MEM32(esi + 0x20) = MEM32(esi + 0x20) | 0xFFFFFFFFu; /* 0x15092FB6: or dword ptr [esi + 0x20], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x15092FBA: mov dword ptr [esi], eax */
    eax = (uint32_t)MEM16(ebp + (-0xA)); /* 0x15092FBC: movzx eax, word ptr [ebp - 0xa] */
    MEM32(esi + 0x4) = eax; /* 0x15092FC0: mov dword ptr [esi + 4], eax */
    eax = (uint32_t)MEM16(ebp + (-0xC)); /* 0x15092FC3: movzx eax, word ptr [ebp - 0xc] */
    MEM32(esi + 0x8) = eax; /* 0x15092FC7: mov dword ptr [esi + 8], eax */
    eax = (uint32_t)MEM16(ebp + (-0xE)); /* 0x15092FCA: movzx eax, word ptr [ebp - 0xe] */
    MEM32(esi + 0xC) = eax; /* 0x15092FCE: mov dword ptr [esi + 0xc], eax */
    eax = (uint32_t)MEM16(ebp + (-0x12)); /* 0x15092FD1: movzx eax, word ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15092FD5: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x10) = eax; /* 0x15092FD6: mov dword ptr [esi + 0x10], eax */
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x15092FD9: movzx eax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x76Cu; /* 0x15092FDD: sub eax, 0x76c */
    _flag_k = FK_CMP;
    MEM32(esi + 0x14) = eax; /* 0x15092FE2: mov dword ptr [esi + 0x14], eax */
    eax = (uint32_t)MEM16(ebp + (-0x10)); /* 0x15092FE5: movzx eax, word ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x15092FE9: push esi */
    MEM32(esi + 0x18) = eax; /* 0x15092FEA: mov dword ptr [esi + 0x18], eax */
    RECOMP_CALL(sub_15093D10); /* 0x15092FED: call 0x15093d10 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x6)); /* 0x15092FF2: movzx eax, word ptr [ebp - 6] */
    ecx = POP32_VAL(esp); /* 0x15092FF6: pop ecx */
L_15092FF7:
    ecx = MEM32(ebp + (-0x4)); /* 0x15092FF7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15092FFA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15092FFC: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15092FFD: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15093002: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093003: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093010u);

L_15093010:
    edi = edi; /* 0x15093010: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093012: push ebp */
    ebp = esp; /* 0x15093013: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15093015: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15093018: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1509301D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1509301F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15093022: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15093023: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x15093026: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509302F; /* 0x15093028: jne 0x1509302f */
L_1509302A:
    PUSH32(esp, 0x57u); /* 0x1509302A: push 0x57 */
    eax = POP32_VAL(esp); /* 0x1509302C: pop eax */
    goto L_1509308C; /* 0x1509302D: jmp 0x1509308c */
L_1509302F:
    PUSH32(esp, esi); /* 0x1509302F: push esi */
    RECOMP_CALL(sub_15093D10); /* 0x15093030: call 0x15093d10 */
    RECOMP_FLAGS_IN();
    eax = 0x76Cu; /* 0x15093035: mov eax, 0x76c */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x14)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x14)); /* 0x1509303A: add ax, word ptr [esi + 0x14] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + (-0x14)) = (uint16_t)(LO16(eax)); /* 0x1509303E: mov word ptr [ebp - 0x14], ax */
    SET_LO16(eax, MEM16(esi + 0x10)); /* 0x15093042: mov ax, word ptr [esi + 0x10] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) + 1); /* 0x15093046: inc ax */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x15093048: mov word ptr [ebp - 0x12], ax */
    SET_LO16(eax, MEM16(esi + 0xC)); /* 0x1509304C: mov ax, word ptr [esi + 0xc] */
    MEM16(ebp + (-0xE)) = (uint16_t)(LO16(eax)); /* 0x15093050: mov word ptr [ebp - 0xe], ax */
    SET_LO16(eax, MEM16(esi + 0x8)); /* 0x15093054: mov ax, word ptr [esi + 8] */
    MEM16(ebp + (-0xC)) = (uint16_t)(LO16(eax)); /* 0x15093058: mov word ptr [ebp - 0xc], ax */
    SET_LO16(eax, MEM16(esi + 0x4)); /* 0x1509305C: mov ax, word ptr [esi + 4] */
    MEM16(ebp + (-0xA)) = (uint16_t)(LO16(eax)); /* 0x15093060: mov word ptr [ebp - 0xa], ax */
    SET_LO16(eax, MEM16(esi)); /* 0x15093064: mov ax, word ptr [esi] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(eax)); /* 0x15093067: mov word ptr [ebp - 8], ax */
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x1509306B: mov ax, word ptr [ebp + 0xc] */
    MEM16(ebp + (-0x6)) = (uint16_t)(LO16(eax)); /* 0x1509306F: mov word ptr [ebp - 6], ax */
    eax = ebp + (-0x14); /* 0x15093073: lea eax, [ebp - 0x14] */
    ecx = POP32_VAL(esp); /* 0x15093076: pop ecx */
    PUSH32(esp, eax); /* 0x15093077: push eax */
    RECOMP_ICALL(MEM32(0x150C028C)); /* 0x15093078: call dword ptr [0x150c028c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1509307E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509308A; /* 0x15093080: jne 0x1509308a */
L_15093082:
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x15093082: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    goto L_1509308C; /* 0x15093088: jmp 0x1509308c */
L_1509308A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509308A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1509308C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1509308C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1509308F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15093091: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15093092: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15093097: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093098: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509309F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509309Fu);

L_1509309F:
    edi = edi; /* 0x1509309F: mov edi, edi */
    PUSH32(esp, esi); /* 0x150930A1: push esi */
    RECOMP_CALL(sub_15068840); /* 0x150930A2: call 0x15068840 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150930A7: mov esi, eax */
    /* test esi, esi */ /* 0x150930A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150930C3; /* 0x150930AB: je 0x150930c3 */
L_150930AD:
    eax = MEM32(esi + 0x44); /* 0x150930AD: mov eax, dword ptr [esi + 0x44] */
    /* test eax, eax */ /* 0x150930B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150930D0; /* 0x150930B2: jne 0x150930d0 */
L_150930B4:
    PUSH32(esp, 0x24u); /* 0x150930B4: push 0x24 */
    RECOMP_CALL(sub_15048F2F); /* 0x150930B6: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x44) = eax; /* 0x150930BB: mov dword ptr [esi + 0x44], eax */
    ecx = POP32_VAL(esp); /* 0x150930BE: pop ecx */
    /* test eax, eax */ /* 0x150930BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150930D0; /* 0x150930C1: jne 0x150930d0 */
L_150930C3:
    RECOMP_CALL(sub_15036430); /* 0x150930C3: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x150930C8: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150930CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150930D0:
    esi = POP32_VAL(esp); /* 0x150930D0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150930D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150930E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150930E0u);

L_150930E0:
    edi = edi; /* 0x150930E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150930E2: push ebp */
    ebp = esp; /* 0x150930E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150930E5: push esi */
    RECOMP_CALL(sub_1509309F); /* 0x150930E6: call 0x1509309f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150930EB: mov esi, eax */
    /* test esi, esi */ /* 0x150930ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093107; /* 0x150930EF: je 0x15093107 */
L_150930F1:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150930F1: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150930F4: push esi */
    RECOMP_CALL(sub_15093120); /* 0x150930F5: call 0x15093120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150930FA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150930FB: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150930FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x150930FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x15093100: cmovne esi, ecx */
    eax = esi; /* 0x15093103: mov eax, esi */
    goto L_15093109; /* 0x15093105: jmp 0x15093109 */
L_15093107:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15093107: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15093109:
    esi = POP32_VAL(esp); /* 0x15093109: pop esi */
    ebp = POP32_VAL(esp); /* 0x1509310A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509310B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093120u);

L_15093120:
    edi = edi; /* 0x15093120: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093122: push ebp */
    ebp = esp; /* 0x15093123: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15093125: push ecx */
    PUSH32(esp, ebx); /* 0x15093126: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x15093127: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1509312A: push esi */
    PUSH32(esp, edi); /* 0x1509312B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1509312C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x1509312E: mov dword ptr [ebp - 4], edi */
    /* test ebx, ebx */ /* 0x15093131: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093153; /* 0x15093133: jne 0x15093153 */
L_15093135:
    RECOMP_CALL(sub_15036430); /* 0x15093135: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1509313A: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1509313C: pop esi */
    PUSH32(esp, edi); /* 0x1509313D: push edi */
    PUSH32(esp, edi); /* 0x1509313E: push edi */
    PUSH32(esp, edi); /* 0x1509313F: push edi */
    PUSH32(esp, edi); /* 0x15093140: push edi */
    MEM32(eax) = esi; /* 0x15093141: mov dword ptr [eax], esi */
    PUSH32(esp, edi); /* 0x15093143: push edi */
L_15093144:
    RECOMP_CALL(sub_1505A110); /* 0x15093144: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093149: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1509314C:
    eax = esi; /* 0x1509314C: mov eax, esi */
    goto L_15093250; /* 0x1509314E: jmp 0x15093250 */
L_15093153:
    PUSH32(esp, 9); /* 0x15093153: push 9 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15093155: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x15093158: mov edi, ebx */
    ecx = POP32_VAL(esp); /* 0x1509315A: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1509315B: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0xC); /* 0x1509315D: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15093160: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093177; /* 0x15093162: jne 0x15093177 */
L_15093164:
    RECOMP_CALL(sub_15036430); /* 0x15093164: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15093169: push 0x16 */
    esi = POP32_VAL(esp); /* 0x1509316B: pop esi */
    MEM32(eax) = esi; /* 0x1509316C: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509316E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15093170: push eax */
    PUSH32(esp, eax); /* 0x15093171: push eax */
    PUSH32(esp, eax); /* 0x15093172: push eax */
    PUSH32(esp, eax); /* 0x15093173: push eax */
    PUSH32(esp, eax); /* 0x15093174: push eax */
    RECOMP_BACKEDGE();
    goto L_15093144; /* 0x15093175: jmp 0x15093144 */
L_15093177:
    esi = MEM32(eax); /* 0x15093177: mov esi, dword ptr [eax] */
    /* cmp esi, 0xFFFF5740u */ /* 0x15093179: cmp esi, 0xffff5740 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFF5740u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1509318D; /* 0x1509317F: jge 0x1509318d */
L_15093181:
    RECOMP_CALL(sub_15036430); /* 0x15093181: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15093186: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15093188: pop esi */
    MEM32(eax) = esi; /* 0x15093189: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_1509314C; /* 0x1509318B: jmp 0x1509314c */
L_1509318D:
    eax = esi; /* 0x1509318D: mov eax, esi */
    ecx = 0x07861F80u; /* 0x1509318F: mov ecx, 0x7861f80 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093194: cdq  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15093195: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15093197: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15093199: inc edi */
    _flag_k = FK_INC;
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xF879E080u); /* 0x1509319A: imul ecx, eax, 0xf879e080 */
    eax = eax * 4 + 0x46; /* 0x150931A0: lea eax, [eax*4 + 0x46] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x150931A7: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = 0x01E13380u; /* 0x150931A9: mov ecx, 0x1e13380 */
    /* cmp esi, ecx */ /* 0x150931AE: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150931CD; /* 0x150931B0: jl 0x150931cd */
L_150931B2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x150931B2: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150931B4: inc eax */
    _flag_k = FK_INC;
    /* cmp esi, ecx */ /* 0x150931B5: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150931CD; /* 0x150931B7: jl 0x150931cd */
L_150931B9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x150931B9: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150931BB: inc eax */
    _flag_k = FK_INC;
    ecx = 0x01E28500u; /* 0x150931BC: mov ecx, 0x1e28500 */
    /* cmp esi, ecx */ /* 0x150931C1: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150931CA; /* 0x150931C3: jl 0x150931ca */
L_150931C5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150931C5: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x150931C6: sub esi, ecx */
    _flag_k = FK_CMP;
    goto L_150931CD; /* 0x150931C8: jmp 0x150931cd */
L_150931CA:
    MEM32(ebp + (-0x4)) = edi; /* 0x150931CA: mov dword ptr [ebp - 4], edi */
L_150931CD:
    MEM32(ebx + 0x14) = eax; /* 0x150931CD: mov dword ptr [ebx + 0x14], eax */
    ecx = 0x00015180u; /* 0x150931D0: mov ecx, 0x15180 */
    eax = esi; /* 0x150931D5: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150931D7: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x150931D8: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edx = 0x15007828u; /* 0x150931DA: mov edx, 0x15007828 */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xFFFEAE80u); /* 0x150931DF: imul ecx, eax, 0xfffeae80 */
    MEM32(ebx + 0x1C) = eax; /* 0x150931E5: mov dword ptr [ebx + 0x1c], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x150931E8: add esi, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x150931EA: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = 0x150077F4u; /* 0x150931EE: mov ecx, 0x150077f4 */
    if (CMP_NE(_flag_a, _flag_b)) { ecx = edx; } /* 0x150931F3: cmovne ecx, edx */
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x150931F6: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15093201; /* 0x150931F9: jge 0x15093201 */
L_150931FB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150931FB: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ecx + edi * 4), eax */ /* 0x150931FC: cmp dword ptr [ecx + edi*4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + edi * 4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_150931FB; /* 0x150931FF: jl 0x150931fb */
L_15093201:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15093201: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x10) = edi; /* 0x15093202: mov dword ptr [ebx + 0x10], edi */
    PUSH32(esp, 7); /* 0x15093205: push 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + edi * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + edi * 4); /* 0x15093207: sub eax, dword ptr [ecx + edi*4] */
    _flag_k = FK_CMP;
    ecx = 0x00015180u; /* 0x1509320A: mov ecx, 0x15180 */
    MEM32(ebx + 0xC) = eax; /* 0x1509320F: mov dword ptr [ebx + 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x15093212: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x15093215: mov eax, dword ptr [eax] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093217: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15093218: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = POP32_VAL(esp); /* 0x1509321A: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1509321B: add eax, 4 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509321E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1509321F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = esi; /* 0x15093221: mov eax, esi */
    ecx = 0xE10u; /* 0x15093223: mov ecx, 0xe10 */
    MEM32(ebx + 0x18) = edx; /* 0x15093228: mov dword ptr [ebx + 0x18], edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509322B: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1509322C: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x3Cu); /* 0x1509322E: push 0x3c */
    MEM32(ebx + 0x8) = eax; /* 0x15093230: mov dword ptr [ebx + 8], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFFF1F0u); /* 0x15093233: imul eax, eax, 0xfffff1f0 */
    ecx = POP32_VAL(esp); /* 0x15093239: pop ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1509323A: add esi, eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1509323C: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509323E: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1509323F: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(ebx + 0x4) = eax; /* 0x15093241: mov dword ptr [ebx + 4], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x15093244: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x15093247: sub esi, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15093249: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = esi; /* 0x1509324B: mov dword ptr [ebx], esi */
    MEM32(ebx + 0x20) = eax; /* 0x1509324D: mov dword ptr [ebx + 0x20], eax */
L_15093250:
    edi = POP32_VAL(esp); /* 0x15093250: pop edi */
    esi = POP32_VAL(esp); /* 0x15093251: pop esi */
    ebx = POP32_VAL(esp); /* 0x15093252: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15093253: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093254: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093260u);

    goto L_15093260;
L_150930E0:
    edi = edi; /* 0x150930E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150930E2: push ebp */
    ebp = esp; /* 0x150930E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150930E5: push esi */
    RECOMP_CALL(sub_1509309F); /* 0x150930E6: call 0x1509309f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150930EB: mov esi, eax */
    /* test esi, esi */ /* 0x150930ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093107; /* 0x150930EF: je 0x15093107 */
L_150930F1:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150930F1: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150930F4: push esi */
    RECOMP_CALL(sub_15093120); /* 0x150930F5: call 0x15093120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150930FA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150930FB: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150930FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x150930FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x15093100: cmovne esi, ecx */
    eax = esi; /* 0x15093103: mov eax, esi */
    goto L_15093109; /* 0x15093105: jmp 0x15093109 */
L_15093107:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15093107: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15093109:
    esi = POP32_VAL(esp); /* 0x15093109: pop esi */
    ebp = POP32_VAL(esp); /* 0x1509310A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509310B: ret  */
L_15093260:
    edi = edi; /* 0x15093260: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093262: push ebp */
    ebp = esp; /* 0x15093263: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15093265: pop ebp */
    RECOMP_BACKEDGE();
    goto L_150930E0; /* 0x15093266: jmp 0x150930e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15093280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093280u);

L_15093280:
    edi = edi; /* 0x15093280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093282: push ebp */
    ebp = esp; /* 0x15093283: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15093285: push esi */
    RECOMP_CALL(sub_1509309F); /* 0x15093286: call 0x1509309f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1509328B: mov esi, eax */
    /* test esi, esi */ /* 0x1509328D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150932A7; /* 0x1509328F: je 0x150932a7 */
L_15093291:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15093291: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15093294: push esi */
    RECOMP_CALL(sub_150932C0); /* 0x15093295: call 0x150932c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509329A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1509329B: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1509329C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1509329E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x150932A0: cmovne esi, ecx */
    eax = esi; /* 0x150932A3: mov eax, esi */
    goto L_150932A9; /* 0x150932A5: jmp 0x150932a9 */
L_150932A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150932A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150932A9:
    esi = POP32_VAL(esp); /* 0x150932A9: pop esi */
    ebp = POP32_VAL(esp); /* 0x150932AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150932AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150932C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150932C0u);

L_150932C0:
    edi = edi; /* 0x150932C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150932C2: push ebp */
    ebp = esp; /* 0x150932C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x150932C5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150932C8: push ebx */
    PUSH32(esp, esi); /* 0x150932C9: push esi */
    PUSH32(esp, edi); /* 0x150932CA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x150932CB: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150932CE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x150932D0: mov dword ptr [ebp - 0xc], ebx */
    /* test edi, edi */ /* 0x150932D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150932F5; /* 0x150932D5: jne 0x150932f5 */
L_150932D7:
    RECOMP_CALL(sub_15036430); /* 0x150932D7: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150932DC: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150932DE: pop esi */
    PUSH32(esp, ebx); /* 0x150932DF: push ebx */
    PUSH32(esp, ebx); /* 0x150932E0: push ebx */
    PUSH32(esp, ebx); /* 0x150932E1: push ebx */
    PUSH32(esp, ebx); /* 0x150932E2: push ebx */
    PUSH32(esp, ebx); /* 0x150932E3: push ebx */
    MEM32(eax) = esi; /* 0x150932E4: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150932E6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150932EB: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150932EE:
    eax = esi; /* 0x150932EE: mov eax, esi */
    goto L_150934CD; /* 0x150932F0: jmp 0x150934cd */
L_150932F5:
    PUSH32(esp, 9); /* 0x150932F5: push 9 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150932F7: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150932FA: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x150932FB: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebp + 0xC); /* 0x150932FD: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x15093300: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150932D7; /* 0x15093302: je 0x150932d7 */
L_15093304:
    ebx = MEM32(eax); /* 0x15093304: mov ebx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x15093306: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x15093309: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1509330C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15093327; /* 0x1509330F: jg 0x15093327 */
L_15093311:
    if (CMP_L(_flag_a, _flag_b)) goto L_1509331B; /* 0x15093311: jl 0x1509331b */
L_15093313:
    /* cmp ebx, 0xFFFF5740u */ /* 0x15093313: cmp ebx, 0xffff5740 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFF5740u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15093327; /* 0x15093319: jae 0x15093327 */
L_1509331B:
    RECOMP_CALL(sub_15036430); /* 0x1509331B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15093320: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15093322: pop esi */
    MEM32(eax) = esi; /* 0x15093323: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_150932EE; /* 0x15093325: jmp 0x150932ee */
L_15093327:
    PUSH32(esp, 7); /* 0x15093327: push 7 */
    ecx = POP32_VAL(esp); /* 0x15093329: pop ecx */
    /* cmp eax, ecx */ /* 0x1509332A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15093338; /* 0x1509332C: jl 0x15093338 */
L_1509332E:
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1509331B; /* 0x1509332E: jg 0x1509331b */
L_15093330:
    /* cmp ebx, 0x934126CFu */ /* 0x15093330: cmp ebx, 0x934126cf */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x934126CFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1509331B; /* 0x15093336: ja 0x1509331b */
L_15093338:
    PUSH32(esp, 0); /* 0x15093338: push 0 */
    ecx = 0x01E13380u; /* 0x1509333A: mov ecx, 0x1e13380 */
    PUSH32(esp, ecx); /* 0x1509333F: push ecx */
    PUSH32(esp, eax); /* 0x15093340: push eax */
    PUSH32(esp, ebx); /* 0x15093341: push ebx */
    RECOMP_CALL(sub_150AF600); /* 0x15093342: call 0x150af600 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15093347: mov edi, eax */
    MEM32(ebp + (-0x4)) = 0x64u; /* 0x15093349: mov dword ptr [ebp - 4], 0x64 */
    PUSH32(esp, 4); /* 0x15093350: push 4 */
    esi = POP32_VAL(esp); /* 0x15093352: pop esi */
    ecx = edi + 0x46; /* 0x15093353: lea ecx, [edi + 0x46] */
    eax = ecx + (-0x1); /* 0x15093356: lea eax, [ecx - 1] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x15093359: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1509335C: mov dword ptr [ebp - 0x10], eax */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509335F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x15093360: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x15093362: mov esi, eax */
    MEM32(ebp + (-0x18)) = edx; /* 0x15093364: mov dword ptr [ebp - 0x18], edx */
    eax = ecx + 0x12B; /* 0x15093367: lea eax, [ecx + 0x12b] */
    ecx = 0x190u; /* 0x1509336D: mov ecx, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093372: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15093373: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x15093375: mov ecx, eax */
    eax = MEM32(ebp + (-0x10)); /* 0x15093377: mov eax, dword ptr [ebp - 0x10] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509337A: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x1509337B: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1509337E: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = esi + (-0x11); /* 0x15093380: lea eax, [esi - 0x11] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15093383: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = 0x00015180u; /* 0x15093385: mov ecx, 0x15180 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x1509338A: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    ecx = eax; /* 0x1509338C: mov ecx, eax */
    esi = edx; /* 0x1509338E: mov esi, edx */
    eax = edi; /* 0x15093390: mov eax, edi */
    edx = 0x01E13380u; /* 0x15093392: mov edx, 0x1e13380 */
    edi = MEM32(ebp + (-0x14)); /* 0x15093397: mov edi, dword ptr [ebp - 0x14] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x1509339A: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1509339C: add ecx, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1509339E: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x150933A0: sub ebx, ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edi, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150933A2: sbb edi, esi */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150933A4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150933A6: inc ecx */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x150933A7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150933EF; /* 0x150933A9: jg 0x150933ef */
L_150933AB:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150933B1; /* 0x150933AB: jl 0x150933b1 */
L_150933AD:
    /* test ebx, ebx */ /* 0x150933AD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_150933EF; /* 0x150933AF: jae 0x150933ef */
L_150933B1:
    esi = MEM32(ebp + (-0x10)); /* 0x150933B1: mov esi, dword ptr [ebp - 0x10] */
    eax = 0x01E13380u; /* 0x150933B4: mov eax, 0x1e13380 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x150933B9: add ebx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = esi; /* 0x150933BB: mov dword ptr [ebp - 8], esi */
    { uint32_t _aa = edi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150933BE: adc edi, 0 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x150933C1: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150933D1; /* 0x150933C5: jne 0x150933d1 */
L_150933C7:
    eax = esi; /* 0x150933C7: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150933C9: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x150933CA: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x150933CD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150933E3; /* 0x150933CF: jne 0x150933e3 */
L_150933D1:
    eax = esi + 0x76C; /* 0x150933D1: lea eax, [esi + 0x76c] */
    esi = 0x190u; /* 0x150933D7: mov esi, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150933DC: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x150933DD: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x150933DF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093423; /* 0x150933E1: jne 0x15093423 */
L_150933E3:
    edx = 0x00015180u; /* 0x150933E3: mov edx, 0x15180 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x150933E8: add ebx, edx */
    _flag_k = FK_ADD;
    { uint32_t _aa = edi, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150933EA: adc edi, 0 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_15093420; /* 0x150933ED: jmp 0x15093420 */
L_150933EF:
    esi = MEM32(ebp + (-0x8)); /* 0x150933EF: mov esi, dword ptr [ebp - 8] */
    eax = esi; /* 0x150933F2: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000003u);
    eax = eax & 0x80000003u; /* 0x150933F4: and eax, 0x80000003 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093402; /* 0x150933F9: jns 0x15093402 */
L_150933FB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150933FB: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFCu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFCu));
    eax = eax | 0xFFFFFFFCu; /* 0x150933FC: or eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 1; /* 0x150933FF: add eax, 1 */
    _flag_k = FK_ADD;
L_15093402:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1509340E; /* 0x15093402: jne 0x1509340e */
L_15093404:
    eax = esi; /* 0x15093404: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093406: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x4)); /* 0x15093407: idiv dword ptr [ebp - 4] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1509340A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093420; /* 0x1509340C: jne 0x15093420 */
L_1509340E:
    eax = esi + 0x76C; /* 0x1509340E: lea eax, [esi + 0x76c] */
    esi = 0x190u; /* 0x15093414: mov esi, 0x190 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093419: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x1509341A: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1509341C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093423; /* 0x1509341E: jne 0x15093423 */
L_15093420:
    MEM32(ebp + (-0xC)) = ecx; /* 0x15093420: mov dword ptr [ebp - 0xc], ecx */
L_15093423:
    esi = MEM32(ebp + 0x8); /* 0x15093423: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x15093426: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, 0); /* 0x15093429: push 0 */
    MEM32(esi + 0x14) = eax; /* 0x1509342B: mov dword ptr [esi + 0x14], eax */
    eax = 0x00015180u; /* 0x1509342E: mov eax, 0x15180 */
    PUSH32(esp, eax); /* 0x15093433: push eax */
    PUSH32(esp, edi); /* 0x15093434: push edi */
    PUSH32(esp, ebx); /* 0x15093435: push ebx */
    RECOMP_CALL(sub_150AF600); /* 0x15093436: call 0x150af600 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1509343B: mov ecx, eax */
    edx = 0x00015180u; /* 0x1509343D: mov edx, 0x15180 */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x15093442: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(esi + 0x1C) = ecx; /* 0x15093444: mov dword ptr [esi + 0x1c], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x15093447: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = 0x15007828u; /* 0x15093449: mov eax, 0x15007828 */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1509344E: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x15093450: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = 0x150077F4u; /* 0x15093454: mov edx, 0x150077f4 */
    if (CMP_NE(_flag_a, _flag_b)) { edx = eax; } /* 0x15093459: cmovne edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509345C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1509345E: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(edx + 0x4), ecx */ /* 0x1509345F: cmp dword ptr [edx + 4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1509346A; /* 0x15093462: jge 0x1509346a */
L_15093464:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15093464: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(edx + eax * 4), ecx */ /* 0x15093465: cmp dword ptr [edx + eax*4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + eax * 4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15093464; /* 0x15093468: jl 0x15093464 */
L_1509346A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1509346A: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x10) = eax; /* 0x1509346B: mov dword ptr [esi + 0x10], eax */
    PUSH32(esp, 0); /* 0x1509346E: push 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + eax * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + eax * 4); /* 0x15093470: sub ecx, dword ptr [edx + eax*4] */
    _flag_k = FK_CMP;
    eax = 0x00015180u; /* 0x15093473: mov eax, 0x15180 */
    PUSH32(esp, eax); /* 0x15093478: push eax */
    eax = MEM32(ebp + 0xC); /* 0x15093479: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0xC) = ecx; /* 0x1509347C: mov dword ptr [esi + 0xc], ecx */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1509347F: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax)); /* 0x15093482: push dword ptr [eax] */
    RECOMP_CALL(sub_150AF600); /* 0x15093484: call 0x150af600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 7); /* 0x15093489: push 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1509348B: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1509348E: pop ecx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509348F: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15093490: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0); /* 0x15093492: push 0 */
    eax = 0xE10u; /* 0x15093494: mov eax, 0xe10 */
    MEM32(esi + 0x18) = edx; /* 0x15093499: mov dword ptr [esi + 0x18], edx */
    PUSH32(esp, eax); /* 0x1509349C: push eax */
    PUSH32(esp, edi); /* 0x1509349D: push edi */
    PUSH32(esp, ebx); /* 0x1509349E: push ebx */
    RECOMP_CALL(sub_150AF600); /* 0x1509349F: call 0x150af600 */
    RECOMP_FLAGS_IN();
    ecx = 0xE10u; /* 0x150934A4: mov ecx, 0xe10 */
    MEM32(esi + 0x8) = eax; /* 0x150934A9: mov dword ptr [esi + 8], eax */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ecx); /* 0x150934AC: imul ecx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, 0); /* 0x150934AE: push 0 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x150934B0: sub ebx, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x3Cu); /* 0x150934B2: push 0x3c */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150934B4: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x150934B6: push edi */
    PUSH32(esp, ebx); /* 0x150934B7: push ebx */
    RECOMP_CALL(sub_150AF600); /* 0x150934B8: call 0x150af600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0; /* 0x150934BD: and dword ptr [esi + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x150934C1: mov dword ptr [esi + 4], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x150934C4: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x150934C7: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150934C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ebx; /* 0x150934CB: mov dword ptr [esi], ebx */
L_150934CD:
    edi = POP32_VAL(esp); /* 0x150934CD: pop edi */
    esi = POP32_VAL(esp); /* 0x150934CE: pop esi */
    ebx = POP32_VAL(esp); /* 0x150934CF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150934D0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150934D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150934E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150934E0u);

L_150934E0:
    edi = edi; /* 0x150934E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150934E2: push ebp */
    ebp = esp; /* 0x150934E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150934E5: push esi */
    PUSH32(esp, edi); /* 0x150934E6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x150934E7: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), 0 */ /* 0x150934EA: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1509350E; /* 0x150934ED: jl 0x1509350e */
L_150934EF:
    RECOMP_CALL(sub_1509309F); /* 0x150934EF: call 0x1509309f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150934F4: mov esi, eax */
    /* test esi, esi */ /* 0x150934F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509350E; /* 0x150934F8: je 0x1509350e */
L_150934FA:
    PUSH32(esp, edi); /* 0x150934FA: push edi */
    PUSH32(esp, esi); /* 0x150934FB: push esi */
    RECOMP_CALL(sub_15093520); /* 0x150934FC: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093501: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093502: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15093503: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15093505: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x15093507: cmovne esi, ecx */
    eax = esi; /* 0x1509350A: mov eax, esi */
    goto L_15093510; /* 0x1509350C: jmp 0x15093510 */
L_1509350E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509350E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15093510:
    edi = POP32_VAL(esp); /* 0x15093510: pop edi */
    esi = POP32_VAL(esp); /* 0x15093511: pop esi */
    ebp = POP32_VAL(esp); /* 0x15093512: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093513: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093520u);

L_15093520:
    edi = edi; /* 0x15093520: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093522: push ebp */
    ebp = esp; /* 0x15093523: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15093525: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15093528: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15093529: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1509352B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1509352C: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1509352F: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x15093532: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x15093535: mov dword ptr [ebp - 8], ebx */
    /* test esi, esi */ /* 0x15093538: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509355A; /* 0x1509353A: jne 0x1509355a */
L_1509353C:
    RECOMP_CALL(sub_15036430); /* 0x1509353C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15093541: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15093543: pop esi */
    PUSH32(esp, ebx); /* 0x15093544: push ebx */
    PUSH32(esp, ebx); /* 0x15093545: push ebx */
    PUSH32(esp, ebx); /* 0x15093546: push ebx */
    PUSH32(esp, ebx); /* 0x15093547: push ebx */
    PUSH32(esp, ebx); /* 0x15093548: push ebx */
    MEM32(eax) = esi; /* 0x15093549: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1509354B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093550: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x15093553: mov eax, esi */
    goto L_1509374B; /* 0x15093555: jmp 0x1509374b */
L_1509355A:
    PUSH32(esp, edi); /* 0x1509355A: push edi */
    PUSH32(esp, 9); /* 0x1509355B: push 9 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1509355D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x15093560: mov edi, esi */
    ecx = POP32_VAL(esp); /* 0x15093562: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x15093563: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + 0xC); /* 0x15093565: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15093568: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093585; /* 0x1509356A: jne 0x15093585 */
L_1509356C:
    RECOMP_CALL(sub_15036430); /* 0x1509356C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15093571: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15093573: pop esi */
    PUSH32(esp, ebx); /* 0x15093574: push ebx */
    PUSH32(esp, ebx); /* 0x15093575: push ebx */
    PUSH32(esp, ebx); /* 0x15093576: push ebx */
    PUSH32(esp, ebx); /* 0x15093577: push ebx */
    PUSH32(esp, ebx); /* 0x15093578: push ebx */
    MEM32(eax) = esi; /* 0x15093579: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x1509357B: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093580: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15093593; /* 0x15093583: jmp 0x15093593 */
L_15093585:
    /* cmp MEM32(edi), ebx */ /* 0x15093585: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1509359A; /* 0x15093587: jge 0x1509359a */
L_15093589:
    RECOMP_CALL(sub_15036430); /* 0x15093589: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1509358E: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15093590: pop esi */
    MEM32(eax) = esi; /* 0x15093591: mov dword ptr [eax], esi */
L_15093593:
    eax = esi; /* 0x15093593: mov eax, esi */
    goto L_1509374A; /* 0x15093595: jmp 0x1509374a */
L_1509359A:
    RECOMP_CALL(sub_150943C7); /* 0x1509359A: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x1509359F: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x150935A2: push eax */
    RECOMP_CALL(sub_15092395); /* 0x150935A3: call 0x15092395 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150935A8: pop ecx */
    /* test eax, eax */ /* 0x150935A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150935BA; /* 0x150935AB: je 0x150935ba */
L_150935AD:
    PUSH32(esp, ebx); /* 0x150935AD: push ebx */
    PUSH32(esp, ebx); /* 0x150935AE: push ebx */
    PUSH32(esp, ebx); /* 0x150935AF: push ebx */
    PUSH32(esp, ebx); /* 0x150935B0: push ebx */
    PUSH32(esp, ebx); /* 0x150935B1: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150935B2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150935B7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150935BA:
    eax = ebp + (-0x10); /* 0x150935BA: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x150935BD: push eax */
    RECOMP_CALL(sub_150923D1); /* 0x150935BE: call 0x150923d1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150935C3: pop ecx */
    /* test eax, eax */ /* 0x150935C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150935D5; /* 0x150935C6: je 0x150935d5 */
L_150935C8:
    PUSH32(esp, ebx); /* 0x150935C8: push ebx */
    PUSH32(esp, ebx); /* 0x150935C9: push ebx */
    PUSH32(esp, ebx); /* 0x150935CA: push ebx */
    PUSH32(esp, ebx); /* 0x150935CB: push ebx */
    PUSH32(esp, ebx); /* 0x150935CC: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150935CD: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150935D2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150935D5:
    eax = ebp + (-0x8); /* 0x150935D5: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150935D8: push eax */
    RECOMP_CALL(sub_1509240D); /* 0x150935D9: call 0x1509240d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150935DE: pop ecx */
    /* test eax, eax */ /* 0x150935DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150935F0; /* 0x150935E1: je 0x150935f0 */
L_150935E3:
    PUSH32(esp, ebx); /* 0x150935E3: push ebx */
    PUSH32(esp, ebx); /* 0x150935E4: push ebx */
    PUSH32(esp, ebx); /* 0x150935E5: push ebx */
    PUSH32(esp, ebx); /* 0x150935E6: push ebx */
    PUSH32(esp, ebx); /* 0x150935E7: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150935E8: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150935ED: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150935F0:
    ecx = MEM32(edi); /* 0x150935F0: mov ecx, dword ptr [edi] */
    eax = ecx + (-0x3F481); /* 0x150935F2: lea eax, [ecx - 0x3f481] */
    /* cmp eax, 0x7FF816FDu */ /* 0x150935F8: cmp eax, 0x7ff816fd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF816FDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15093657; /* 0x150935FD: ja 0x15093657 */
L_150935FF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x8)); /* 0x150935FF: sub ecx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x15093602: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15093605: push eax */
    PUSH32(esp, esi); /* 0x15093606: push esi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15093607: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_15093120); /* 0x1509360A: call 0x15093120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509360F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093610: pop ecx */
    /* test eax, eax */ /* 0x15093611: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509374A; /* 0x15093613: jne 0x1509374a */
L_15093619:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x15093619: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15093748; /* 0x1509361C: je 0x15093748 */
L_15093622:
    PUSH32(esp, esi); /* 0x15093622: push esi */
    RECOMP_CALL(sub_15094427); /* 0x15093623: call 0x15094427 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093628: pop ecx */
    /* test eax, eax */ /* 0x15093629: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093748; /* 0x1509362B: je 0x15093748 */
L_15093631:
    eax = MEM32(ebp + (-0x10)); /* 0x15093631: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - eax; /* 0x15093634: sub dword ptr [ebp - 4], eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x15093637: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1509363A: push eax */
    PUSH32(esp, esi); /* 0x1509363B: push esi */
    RECOMP_CALL(sub_15093120); /* 0x1509363C: call 0x15093120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093641: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093642: pop ecx */
    /* test eax, eax */ /* 0x15093643: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509374A; /* 0x15093645: jne 0x1509374a */
L_1509364B:
    MEM32(esi + 0x20) = 1; /* 0x1509364B: mov dword ptr [esi + 0x20], 1 */
    goto L_15093748; /* 0x15093652: jmp 0x15093748 */
L_15093657:
    PUSH32(esp, edi); /* 0x15093657: push edi */
    PUSH32(esp, esi); /* 0x15093658: push esi */
    RECOMP_CALL(sub_15093120); /* 0x15093659: call 0x15093120 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509365E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1509365F: pop ecx */
    /* test eax, eax */ /* 0x15093660: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509374A; /* 0x15093662: jne 0x1509374a */
L_15093668:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x15093668: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15093689; /* 0x1509366B: je 0x15093689 */
L_1509366D:
    PUSH32(esp, esi); /* 0x1509366D: push esi */
    RECOMP_CALL(sub_15094427); /* 0x1509366E: call 0x15094427 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093673: pop ecx */
    /* test eax, eax */ /* 0x15093674: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093689; /* 0x15093676: je 0x15093689 */
L_15093678:
    edi = MEM32(esi); /* 0x15093678: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x8)); /* 0x1509367A: sub edi, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x10)); /* 0x1509367D: sub edi, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    MEM32(esi + 0x20) = 1; /* 0x15093680: mov dword ptr [esi + 0x20], 1 */
    goto L_1509368E; /* 0x15093687: jmp 0x1509368e */
L_15093689:
    edi = MEM32(esi); /* 0x15093689: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x8)); /* 0x1509368B: sub edi, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
L_1509368E:
    eax = edi; /* 0x1509368E: mov eax, edi */
    PUSH32(esp, 0x3Cu); /* 0x15093690: push 0x3c */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093692: cdq  */
    ebx = POP32_VAL(esp); /* 0x15093693: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x15093694: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi) = edx; /* 0x15093696: mov dword ptr [esi], edx */
    /* test edx, edx */ /* 0x15093698: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150936A4; /* 0x1509369A: jns 0x150936a4 */
L_1509369C:
    ecx = edx + 0x3C; /* 0x1509369C: lea ecx, [edx + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFC4u; /* 0x1509369F: add edi, -0x3c */
    _flag_k = FK_ADD;
    MEM32(esi) = ecx; /* 0x150936A2: mov dword ptr [esi], ecx */
L_150936A4:
    eax = edi; /* 0x150936A4: mov eax, edi */
    edi = MEM32(esi + 0x4); /* 0x150936A6: mov edi, dword ptr [esi + 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150936A9: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x150936AA: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x150936AC: add edi, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x150936AE: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150936B0: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x150936B1: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x4) = edx; /* 0x150936B3: mov dword ptr [esi + 4], edx */
    /* test edx, edx */ /* 0x150936B6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150936C3; /* 0x150936B8: jns 0x150936c3 */
L_150936BA:
    ecx = edx + 0x3C; /* 0x150936BA: lea ecx, [edx + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFC4u; /* 0x150936BD: add edi, -0x3c */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = ecx; /* 0x150936C0: mov dword ptr [esi + 4], ecx */
L_150936C3:
    eax = edi; /* 0x150936C3: mov eax, edi */
    edi = MEM32(esi + 0x8); /* 0x150936C5: mov edi, dword ptr [esi + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150936C8: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x150936C9: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x18u); /* 0x150936CB: push 0x18 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x150936CD: add edi, eax */
    _flag_k = FK_ADD;
    eax = edi; /* 0x150936CF: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150936D1: cdq  */
    ebx = POP32_VAL(esp); /* 0x150936D2: pop ebx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x150936D3: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    MEM32(esi + 0x8) = edx; /* 0x150936D5: mov dword ptr [esi + 8], edx */
    /* test edx, edx */ /* 0x150936D8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150936E5; /* 0x150936DA: jns 0x150936e5 */
L_150936DC:
    ecx = edx + 0x18; /* 0x150936DC: lea ecx, [edx + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFE8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFE8u; /* 0x150936DF: add edi, -0x18 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8) = ecx; /* 0x150936E2: mov dword ptr [esi + 8], ecx */
L_150936E5:
    eax = edi; /* 0x150936E5: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150936E7: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ebx; /* 0x150936E8: idiv ebx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x150936EA: mov ecx, eax */
    /* test ecx, ecx */ /* 0x150936EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093706; /* 0x150936EE: jle 0x15093706 */
L_150936F0:
    eax = MEM32(esi + 0x18); /* 0x150936F0: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x150936F3: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + ecx; /* 0x150936F5: add dword ptr [esi + 0xc], ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x150936F8: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150936FA: cdq  */
    edi = POP32_VAL(esp); /* 0x150936FB: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x150936FC: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + ecx; /* 0x150936FE: add dword ptr [esi + 0x1c], ecx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = edx; /* 0x15093701: mov dword ptr [esi + 0x18], edx */
    goto L_15093748; /* 0x15093704: jmp 0x15093748 */
L_15093706:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_15093748; /* 0x15093706: jns 0x15093748 */
L_15093708:
    eax = MEM32(esi + 0x18); /* 0x15093708: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x1509370B: add eax, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1509370E: add eax, ecx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093710: cdq  */
    PUSH32(esp, 7); /* 0x15093711: push 7 */
    edi = POP32_VAL(esp); /* 0x15093713: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x15093714: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(esi + 0xC); /* 0x15093716: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15093719: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = edx; /* 0x1509371B: mov dword ptr [esi + 0x18], edx */
    edx = MEM32(esi + 0x1C); /* 0x1509371E: mov edx, dword ptr [esi + 0x1c] */
    MEM32(esi + 0xC) = eax; /* 0x15093721: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x15093724: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093742; /* 0x15093726: jg 0x15093742 */
L_15093728:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x15093728: add eax, 0x1f */
    _flag_k = FK_ADD;
    MEM32(esi + 0x10) = 0xBu; /* 0x1509372B: mov dword ptr [esi + 0x10], 0xb */
    MEM32(esi + 0xC) = eax; /* 0x15093732: mov dword ptr [esi + 0xc], eax */
    eax = edx + 0x16D; /* 0x15093735: lea eax, [edx + 0x16d] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1509373B: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) - 1; /* 0x1509373D: dec dword ptr [esi + 0x14] */
    _flag_k = FK_DEC;
    goto L_15093745; /* 0x15093740: jmp 0x15093745 */
L_15093742:
    eax = ecx + edx; /* 0x15093742: lea eax, [ecx + edx] */
L_15093745:
    MEM32(esi + 0x1C) = eax; /* 0x15093745: mov dword ptr [esi + 0x1c], eax */
L_15093748:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15093748: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1509374A:
    edi = POP32_VAL(esp); /* 0x1509374A: pop edi */
L_1509374B:
    esi = POP32_VAL(esp); /* 0x1509374B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1509374C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509374D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509374E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093760u);

    goto L_15093760;
L_150934E0:
    edi = edi; /* 0x150934E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150934E2: push ebp */
    ebp = esp; /* 0x150934E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150934E5: push esi */
    PUSH32(esp, edi); /* 0x150934E6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x150934E7: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), 0 */ /* 0x150934EA: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1509350E; /* 0x150934ED: jl 0x1509350e */
L_150934EF:
    RECOMP_CALL(sub_1509309F); /* 0x150934EF: call 0x1509309f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150934F4: mov esi, eax */
    /* test esi, esi */ /* 0x150934F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509350E; /* 0x150934F8: je 0x1509350e */
L_150934FA:
    PUSH32(esp, edi); /* 0x150934FA: push edi */
    PUSH32(esp, esi); /* 0x150934FB: push esi */
    RECOMP_CALL(sub_15093520); /* 0x150934FC: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093501: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093502: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15093503: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15093505: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x15093507: cmovne esi, ecx */
    eax = esi; /* 0x1509350A: mov eax, esi */
    goto L_15093510; /* 0x1509350C: jmp 0x15093510 */
L_1509350E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509350E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15093510:
    edi = POP32_VAL(esp); /* 0x15093510: pop edi */
    esi = POP32_VAL(esp); /* 0x15093511: pop esi */
    ebp = POP32_VAL(esp); /* 0x15093512: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093513: ret  */
L_15093760:
    edi = edi; /* 0x15093760: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093762: push ebp */
    ebp = esp; /* 0x15093763: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15093765: pop ebp */
    RECOMP_BACKEDGE();
    goto L_150934E0; /* 0x15093766: jmp 0x150934e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15093780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093780u);

L_15093780:
    edi = edi; /* 0x15093780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093782: push ebp */
    ebp = esp; /* 0x15093783: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15093785: push esi */
    RECOMP_CALL(sub_1509309F); /* 0x15093786: call 0x1509309f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1509378B: mov esi, eax */
    /* test esi, esi */ /* 0x1509378D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150937A7; /* 0x1509378F: je 0x150937a7 */
L_15093791:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15093791: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x15093794: push esi */
    RECOMP_CALL(sub_150937C0); /* 0x15093795: call 0x150937c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509379A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1509379B: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1509379C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1509379E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x150937A0: cmovne esi, ecx */
    eax = esi; /* 0x150937A3: mov eax, esi */
    goto L_150937A9; /* 0x150937A5: jmp 0x150937a9 */
L_150937A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150937A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150937A9:
    esi = POP32_VAL(esp); /* 0x150937A9: pop esi */
    ebp = POP32_VAL(esp); /* 0x150937AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150937AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_150937C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150937C0u);

L_150937C0:
    edi = edi; /* 0x150937C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150937C2: push ebp */
    ebp = esp; /* 0x150937C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x150937C5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150937C8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x150937C9: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150937CC: push esi */
    PUSH32(esp, edi); /* 0x150937CD: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x150937CE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x150937D0: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x150937D3: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x150937D6: mov dword ptr [ebp - 4], edi */
    /* test ebx, ebx */ /* 0x150937D9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150937FB; /* 0x150937DB: jne 0x150937fb */
L_150937DD:
    RECOMP_CALL(sub_15036430); /* 0x150937DD: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150937E2: push 0x16 */
    esi = POP32_VAL(esp); /* 0x150937E4: pop esi */
    PUSH32(esp, edi); /* 0x150937E5: push edi */
    PUSH32(esp, edi); /* 0x150937E6: push edi */
    PUSH32(esp, edi); /* 0x150937E7: push edi */
    PUSH32(esp, edi); /* 0x150937E8: push edi */
    MEM32(eax) = esi; /* 0x150937E9: mov dword ptr [eax], esi */
    PUSH32(esp, edi); /* 0x150937EB: push edi */
L_150937EC:
    RECOMP_CALL(sub_1505A110); /* 0x150937EC: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150937F1: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150937F4:
    eax = esi; /* 0x150937F4: mov eax, esi */
    goto L_15093A68; /* 0x150937F6: jmp 0x15093a68 */
L_150937FB:
    esi = MEM32(ebp + 0xC); /* 0x150937FB: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150937FE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx; /* 0x15093801: mov edi, ebx */
    PUSH32(esp, 9); /* 0x15093803: push 9 */
    ecx = POP32_VAL(esp); /* 0x15093805: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x15093806: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    /* test esi, esi */ /* 0x15093808: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1509381F; /* 0x1509380A: jne 0x1509381f */
L_1509380C:
    RECOMP_CALL(sub_15036430); /* 0x1509380C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15093811: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15093813: pop esi */
    MEM32(eax) = esi; /* 0x15093814: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15093816: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15093818: push eax */
    PUSH32(esp, eax); /* 0x15093819: push eax */
    PUSH32(esp, eax); /* 0x1509381A: push eax */
    PUSH32(esp, eax); /* 0x1509381B: push eax */
    PUSH32(esp, eax); /* 0x1509381C: push eax */
    RECOMP_BACKEDGE();
    goto L_150937EC; /* 0x1509381D: jmp 0x150937ec */
L_1509381F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1509381F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), edi */ /* 0x15093821: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15093838; /* 0x15093824: jg 0x15093838 */
L_15093826:
    if (CMP_L(_flag_a, _flag_b)) goto L_1509382C; /* 0x15093826: jl 0x1509382c */
L_15093828:
    /* cmp MEM32(esi), edi */ /* 0x15093828: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15093838; /* 0x1509382A: jae 0x15093838 */
L_1509382C:
    RECOMP_CALL(sub_15036430); /* 0x1509382C: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15093831: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15093833: pop esi */
    MEM32(eax) = esi; /* 0x15093834: mov dword ptr [eax], esi */
    RECOMP_BACKEDGE();
    goto L_150937F4; /* 0x15093836: jmp 0x150937f4 */
L_15093838:
    PUSH32(esp, 7); /* 0x15093838: push 7 */
    eax = POP32_VAL(esp); /* 0x1509383A: pop eax */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x1509383B: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1509384A; /* 0x1509383E: jl 0x1509384a */
L_15093840:
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1509382C; /* 0x15093840: jg 0x1509382c */
L_15093842:
    /* cmp MEM32(esi), 0x93406FFFu */ /* 0x15093842: cmp dword ptr [esi], 0x93406fff */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x93406FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1509382C; /* 0x15093848: ja 0x1509382c */
L_1509384A:
    RECOMP_CALL(sub_150943C7); /* 0x1509384A: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x1509384F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x15093852: push eax */
    RECOMP_CALL(sub_15092395); /* 0x15093853: call 0x15092395 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093858: pop ecx */
    /* test eax, eax */ /* 0x15093859: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509386A; /* 0x1509385B: je 0x1509386a */
L_1509385D:
    PUSH32(esp, edi); /* 0x1509385D: push edi */
    PUSH32(esp, edi); /* 0x1509385E: push edi */
    PUSH32(esp, edi); /* 0x1509385F: push edi */
    PUSH32(esp, edi); /* 0x15093860: push edi */
    PUSH32(esp, edi); /* 0x15093861: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15093862: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093867: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1509386A:
    eax = ebp + (-0xC); /* 0x1509386A: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1509386D: push eax */
    RECOMP_CALL(sub_150923D1); /* 0x1509386E: call 0x150923d1 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093873: pop ecx */
    /* test eax, eax */ /* 0x15093874: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093885; /* 0x15093876: je 0x15093885 */
L_15093878:
    PUSH32(esp, edi); /* 0x15093878: push edi */
    PUSH32(esp, edi); /* 0x15093879: push edi */
    PUSH32(esp, edi); /* 0x1509387A: push edi */
    PUSH32(esp, edi); /* 0x1509387B: push edi */
    PUSH32(esp, edi); /* 0x1509387C: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x1509387D: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093882: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15093885:
    eax = ebp + (-0x4); /* 0x15093885: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x15093888: push eax */
    RECOMP_CALL(sub_1509240D); /* 0x15093889: call 0x1509240d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509388E: pop ecx */
    /* test eax, eax */ /* 0x1509388F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150938A0; /* 0x15093891: je 0x150938a0 */
L_15093893:
    PUSH32(esp, edi); /* 0x15093893: push edi */
    PUSH32(esp, edi); /* 0x15093894: push edi */
    PUSH32(esp, edi); /* 0x15093895: push edi */
    PUSH32(esp, edi); /* 0x15093896: push edi */
    PUSH32(esp, edi); /* 0x15093897: push edi */
    RECOMP_CALL(sub_1505A11B); /* 0x15093898: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1509389D: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150938A0:
    edi = MEM32(esi + 0x4); /* 0x150938A0: mov edi, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x150938A3: mov ecx, dword ptr [esi] */
    /* test edi, edi */ /* 0x150938A5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093917; /* 0x150938A7: jl 0x15093917 */
L_150938A9:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150938B3; /* 0x150938A9: jg 0x150938b3 */
L_150938AB:
    /* cmp ecx, 0x0003F480u */ /* 0x150938AB: cmp ecx, 0x3f480 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0003F480u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15093917; /* 0x150938B1: jbe 0x15093917 */
L_150938B3:
    eax = MEM32(ebp + (-0x4)); /* 0x150938B3: mov eax, dword ptr [ebp - 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150938B6: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x150938B7: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x14); /* 0x150938B9: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x150938BC: push eax */
    { uint32_t _sa = edi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150938BD: sbb edi, edx */
      edi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x14)) = ecx; /* 0x150938BF: mov dword ptr [ebp - 0x14], ecx */
    PUSH32(esp, ebx); /* 0x150938C2: push ebx */
    MEM32(ebp + (-0x10)) = edi; /* 0x150938C3: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_150932C0); /* 0x150938C6: call 0x150932c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150938CB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150938CC: pop ecx */
    /* test eax, eax */ /* 0x150938CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093A68; /* 0x150938CF: jne 0x15093a68 */
L_150938D5:
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x150938D5: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15093A66; /* 0x150938D8: je 0x15093a66 */
L_150938DE:
    PUSH32(esp, ebx); /* 0x150938DE: push ebx */
    RECOMP_CALL(sub_15094427); /* 0x150938DF: call 0x15094427 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150938E4: pop ecx */
    /* test eax, eax */ /* 0x150938E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093A66; /* 0x150938E7: je 0x15093a66 */
L_150938ED:
    eax = MEM32(ebp + (-0xC)); /* 0x150938ED: mov eax, dword ptr [ebp - 0xc] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150938F0: cdq  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - eax; /* 0x150938F1: sub dword ptr [ebp - 0x14], eax */
    _flag_k = FK_CMP;
    eax = ebp + (-0x14); /* 0x150938F4: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x150938F7: push eax */
    { uint32_t _sa = MEM32(ebp + (-0x10)), _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150938F8: sbb dword ptr [ebp - 0x10], edx */
      MEM32(ebp + (-0x10)) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x150938FB: push ebx */
    RECOMP_CALL(sub_150932C0); /* 0x150938FC: call 0x150932c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093901: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093902: pop ecx */
    /* test eax, eax */ /* 0x15093903: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093A68; /* 0x15093905: jne 0x15093a68 */
L_1509390B:
    MEM32(ebx + 0x20) = 1; /* 0x1509390B: mov dword ptr [ebx + 0x20], 1 */
    goto L_15093A66; /* 0x15093912: jmp 0x15093a66 */
L_15093917:
    PUSH32(esp, esi); /* 0x15093917: push esi */
    PUSH32(esp, ebx); /* 0x15093918: push ebx */
    RECOMP_CALL(sub_150932C0); /* 0x15093919: call 0x150932c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509391E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1509391F: pop ecx */
    /* test eax, eax */ /* 0x15093920: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093A68; /* 0x15093922: jne 0x15093a68 */
L_15093928:
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x15093928: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509395A; /* 0x1509392B: je 0x1509395a */
L_1509392D:
    PUSH32(esp, ebx); /* 0x1509392D: push ebx */
    RECOMP_CALL(sub_15094427); /* 0x1509392E: call 0x15094427 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093933: pop ecx */
    /* test eax, eax */ /* 0x15093934: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1509395A; /* 0x15093936: je 0x1509395a */
L_15093938:
    eax = MEM32(ebp + (-0x4)); /* 0x15093938: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x1509393B: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509393E: cdq  */
    ecx = eax; /* 0x1509393F: mov ecx, eax */
    MEM32(ebx + 0x20) = 1; /* 0x15093941: mov dword ptr [ebx + 0x20], 1 */
    eax = MEM32(ebx); /* 0x15093948: mov eax, dword ptr [ebx] */
    esi = edx; /* 0x1509394A: mov esi, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509394C: cdq  */
    edi = eax; /* 0x1509394D: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x1509394F: sub edi, ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = esi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093951: sbb edx, esi */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0xC)) = edx; /* 0x15093953: mov dword ptr [ebp - 0xc], edx */
    esi = edx; /* 0x15093956: mov esi, edx */
    goto L_15093969; /* 0x15093958: jmp 0x15093969 */
L_1509395A:
    eax = MEM32(ebx); /* 0x1509395A: mov eax, dword ptr [ebx] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509395C: cdq  */
    edi = eax; /* 0x1509395D: mov edi, eax */
    esi = edx; /* 0x1509395F: mov esi, edx */
    eax = MEM32(ebp + (-0x4)); /* 0x15093961: mov eax, dword ptr [ebp - 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093964: cdq  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x15093965: sub edi, eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093967: sbb esi, edx */
      esi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_15093969:
    PUSH32(esp, 0); /* 0x15093969: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x1509396B: push 0x3c */
    PUSH32(esp, esi); /* 0x1509396D: push esi */
    PUSH32(esp, edi); /* 0x1509396E: push edi */
    RECOMP_CALL(sub_150AF6B0); /* 0x1509396F: call 0x150af6b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x15093974: mov dword ptr [ebx], eax */
    /* test eax, eax */ /* 0x15093976: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093985; /* 0x15093978: jns 0x15093985 */
L_1509397A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3Cu; /* 0x1509397A: add eax, 0x3c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFC4u; /* 0x1509397D: add edi, -0x3c */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x15093980: mov dword ptr [ebx], eax */
    { uint32_t _aa = esi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093982: adc esi, -1 */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_15093985:
    PUSH32(esp, 0); /* 0x15093985: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x15093987: push 0x3c */
    PUSH32(esp, esi); /* 0x15093989: push esi */
    PUSH32(esp, edi); /* 0x1509398A: push edi */
    RECOMP_CALL(sub_150AF600); /* 0x1509398B: call 0x150af600 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15093990: mov esi, eax */
    edi = edx; /* 0x15093992: mov edi, edx */
    eax = MEM32(ebx + 0x4); /* 0x15093994: mov eax, dword ptr [ebx + 4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093997: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15093998: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1509399A: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x1509399C: push 0x3c */
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1509399E: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x150939A0: push edi */
    PUSH32(esp, esi); /* 0x150939A1: push esi */
    RECOMP_CALL(sub_150AF6B0); /* 0x150939A2: call 0x150af6b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x4) = eax; /* 0x150939A7: mov dword ptr [ebx + 4], eax */
    /* test eax, eax */ /* 0x150939AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150939BA; /* 0x150939AC: jns 0x150939ba */
L_150939AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3Cu; /* 0x150939AE: add eax, 0x3c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFC4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFC4u; /* 0x150939B1: add esi, -0x3c */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x4) = eax; /* 0x150939B4: mov dword ptr [ebx + 4], eax */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150939B7: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_150939BA:
    PUSH32(esp, 0); /* 0x150939BA: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x150939BC: push 0x3c */
    PUSH32(esp, edi); /* 0x150939BE: push edi */
    PUSH32(esp, esi); /* 0x150939BF: push esi */
    RECOMP_CALL(sub_150AF600); /* 0x150939C0: call 0x150af600 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150939C5: mov esi, eax */
    edi = edx; /* 0x150939C7: mov edi, edx */
    eax = MEM32(ebx + 0x8); /* 0x150939C9: mov eax, dword ptr [ebx + 8] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x150939CC: cdq  */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x150939CD: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x150939CF: push 0 */
    PUSH32(esp, 0x18u); /* 0x150939D1: push 0x18 */
    { uint32_t _aa = edi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150939D3: adc edi, edx */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, edi); /* 0x150939D5: push edi */
    PUSH32(esp, esi); /* 0x150939D6: push esi */
    RECOMP_CALL(sub_150AF6B0); /* 0x150939D7: call 0x150af6b0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x8) = eax; /* 0x150939DC: mov dword ptr [ebx + 8], eax */
    /* test eax, eax */ /* 0x150939DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_150939EF; /* 0x150939E1: jns 0x150939ef */
L_150939E3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x150939E3: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFE8u; /* 0x150939E6: add esi, -0x18 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x150939E9: mov dword ptr [ebx + 8], eax */
    { uint32_t _aa = edi, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150939EC: adc edi, -1 */
      edi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_150939EF:
    PUSH32(esp, 0); /* 0x150939EF: push 0 */
    PUSH32(esp, 0x18u); /* 0x150939F1: push 0x18 */
    PUSH32(esp, edi); /* 0x150939F3: push edi */
    PUSH32(esp, esi); /* 0x150939F4: push esi */
    RECOMP_CALL(sub_150AF600); /* 0x150939F5: call 0x150af600 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150939FA: mov ecx, eax */
    /* test edx, edx */ /* 0x150939FC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093A26; /* 0x150939FE: jl 0x15093a26 */
L_15093A00:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093A06; /* 0x15093A00: jg 0x15093a06 */
L_15093A02:
    /* test ecx, ecx */ /* 0x15093A02: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093A1C; /* 0x15093A04: je 0x15093a1c */
L_15093A06:
    eax = MEM32(ebx + 0x18); /* 0x15093A06: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15093A09: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) + ecx; /* 0x15093A0B: add dword ptr [ebx + 0xc], ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, 7); /* 0x15093A0E: push 7 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093A10: cdq  */
    esi = POP32_VAL(esp); /* 0x15093A11: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x15093A12: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x1C) = MEM32(ebx + 0x1C) + ecx; /* 0x15093A14: add dword ptr [ebx + 0x1c], ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x18) = edx; /* 0x15093A17: mov dword ptr [ebx + 0x18], edx */
    goto L_15093A66; /* 0x15093A1A: jmp 0x15093a66 */
L_15093A1C:
    /* test edx, edx */ /* 0x15093A1C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093A66; /* 0x15093A1E: jg 0x15093a66 */
L_15093A20:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093A26; /* 0x15093A20: jl 0x15093a26 */
L_15093A22:
    /* test ecx, ecx */ /* 0x15093A22: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (1) goto L_15093A66; /* 0x15093A24: jae 0x15093a66 */
L_15093A26:
    eax = MEM32(ebx + 0x18); /* 0x15093A26: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x15093A29: add eax, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15093A2C: add eax, ecx */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093A2E: cdq  */
    PUSH32(esp, 7); /* 0x15093A2F: push 7 */
    esi = POP32_VAL(esp); /* 0x15093A31: pop esi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x15093A32: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebx + 0xC); /* 0x15093A34: mov eax, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15093A37: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x18) = edx; /* 0x15093A39: mov dword ptr [ebx + 0x18], edx */
    edx = MEM32(ebx + 0x1C); /* 0x15093A3C: mov edx, dword ptr [ebx + 0x1c] */
    MEM32(ebx + 0xC) = eax; /* 0x15093A3F: mov dword ptr [ebx + 0xc], eax */
    /* test eax, eax */ /* 0x15093A42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093A60; /* 0x15093A44: jg 0x15093a60 */
L_15093A46:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Fu; /* 0x15093A46: add eax, 0x1f */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x10) = 0xBu; /* 0x15093A49: mov dword ptr [ebx + 0x10], 0xb */
    MEM32(ebx + 0xC) = eax; /* 0x15093A50: mov dword ptr [ebx + 0xc], eax */
    eax = edx + 0x16D; /* 0x15093A53: lea eax, [edx + 0x16d] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x15093A59: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - 1; /* 0x15093A5B: dec dword ptr [ebx + 0x14] */
    _flag_k = FK_DEC;
    goto L_15093A63; /* 0x15093A5E: jmp 0x15093a63 */
L_15093A60:
    eax = edx + ecx; /* 0x15093A60: lea eax, [edx + ecx] */
L_15093A63:
    MEM32(ebx + 0x1C) = eax; /* 0x15093A63: mov dword ptr [ebx + 0x1c], eax */
L_15093A66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15093A66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15093A68:
    edi = POP32_VAL(esp); /* 0x15093A68: pop edi */
    esi = POP32_VAL(esp); /* 0x15093A69: pop esi */
    ebx = POP32_VAL(esp); /* 0x15093A6A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15093A6B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093A6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093A73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093A73u);

L_15093A73:
    edi = edi; /* 0x15093A73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093A75: push ebp */
    ebp = esp; /* 0x15093A76: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x15093A78: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15093A7B: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15093A80: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15093A82: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x15093A85: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15093A86: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15093A88: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15093A89: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x34)) = esi; /* 0x15093A8C: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x30)) = esi; /* 0x15093A8F: mov dword ptr [ebp - 0x30], esi */
    /* test edi, edi */ /* 0x15093A92: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093AB6; /* 0x15093A94: jne 0x15093ab6 */
L_15093A96:
    RECOMP_CALL(sub_15036430); /* 0x15093A96: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15093A9B: push esi */
    PUSH32(esp, esi); /* 0x15093A9C: push esi */
    PUSH32(esp, esi); /* 0x15093A9D: push esi */
    PUSH32(esp, esi); /* 0x15093A9E: push esi */
    PUSH32(esp, esi); /* 0x15093A9F: push esi */
    MEM32(eax) = 0x16u; /* 0x15093AA0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15093AA6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093AAB: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15093AAE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15093B4E; /* 0x15093AB1: jmp 0x15093b4e */
L_15093AB6:
    esi = MEM32(edi + 0x14); /* 0x15093AB6: mov esi, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x2C)) = esi; /* 0x15093AB9: mov dword ptr [ebp - 0x2c], esi */
    PUSH32(esp, ebx); /* 0x15093ABC: push ebx */
    /* cmp esi, 0x45u */ /* 0x15093ABD: cmp esi, 0x45 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093AC0: jl 0x15093b3f */
L_15093AC2:
    ebx = 0x8Bu; /* 0x15093AC2: mov ebx, 0x8b */
    /* cmp esi, ebx */ /* 0x15093AC7: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093AC9: jg 0x15093b3f */
L_15093ACB:
    edx = MEM32(edi + 0x10); /* 0x15093ACB: mov edx, dword ptr [edi + 0x10] */
    /* test edx, edx */ /* 0x15093ACE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093AD9; /* 0x15093AD0: js 0x15093ad9 */
L_15093AD2:
    eax = esi; /* 0x15093AD2: mov eax, esi */
    /* cmp edx, 0xBu */ /* 0x15093AD4: cmp edx, 0xb */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15093B05; /* 0x15093AD7: jle 0x15093b05 */
L_15093AD9:
    eax = edx; /* 0x15093AD9: mov eax, edx */
    PUSH32(esp, 0xCu); /* 0x15093ADB: push 0xc */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093ADD: cdq  */
    ecx = POP32_VAL(esp); /* 0x15093ADE: pop ecx */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15093ADF: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15093AE1: add esi, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = edx; /* 0x15093AE3: mov dword ptr [edi + 0x10], edx */
    MEM32(ebp + (-0x2C)) = esi; /* 0x15093AE6: mov dword ptr [ebp - 0x2c], esi */
    eax = esi; /* 0x15093AE9: mov eax, esi */
    /* test edx, edx */ /* 0x15093AEB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093AFC; /* 0x15093AED: jns 0x15093afc */
L_15093AEF:
    esi = eax + (-0x1); /* 0x15093AEF: lea esi, [eax - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x15093AF2: add edx, ecx */
    _flag_k = FK_ADD;
    MEM32(edi + 0x10) = edx; /* 0x15093AF4: mov dword ptr [edi + 0x10], edx */
    eax = esi; /* 0x15093AF7: mov eax, esi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x15093AF9: mov dword ptr [ebp - 0x2c], esi */
L_15093AFC:
    /* cmp eax, 0x45u */ /* 0x15093AFC: cmp eax, 0x45 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093AFF: jl 0x15093b3f */
L_15093B01:
    /* cmp eax, ebx */ /* 0x15093B01: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093B03: jg 0x15093b3f */
L_15093B05:
    ebx = MEM32(edx * 4 + 0x150077F4); /* 0x15093B05: mov ebx, dword ptr [edx*4 + 0x150077f4] */
    /* test LO8(eax), 3 */ /* 0x15093B0C: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093B16; /* 0x15093B0E: jne 0x15093b16 */
L_15093B10:
    /* cmp edx, 1 */ /* 0x15093B10: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15093B16; /* 0x15093B13: jle 0x15093b16 */
L_15093B15:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15093B15: inc ebx */
    _flag_k = FK_INC;
L_15093B16:
    edx = MEM32(edi + 0xC); /* 0x15093B16: mov edx, dword ptr [edi + 0xc] */
    ecx = esi + (-0x1); /* 0x15093B19: lea ecx, [esi - 1] */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x15093B1C: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    eax = (uint32_t)((int32_t)esi * (int32_t)0x16Du); /* 0x15093B1F: imul eax, esi, 0x16d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF9C21u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFF9C21u; /* 0x15093B25: add ecx, 0xffff9c21 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x15093B2B: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x15093B2D: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = ecx + edx; /* 0x15093B2F: lea ecx, [ecx + edx] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x15093B32: mov dword ptr [ebp - 0x2c], ecx */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_15093B5C; /* 0x15093B35: js 0x15093b5c */
L_15093B37:
    /* test edx, edx */ /* 0x15093B37: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093B64; /* 0x15093B39: js 0x15093b64 */
L_15093B3B:
    /* test ecx, ecx */ /* 0x15093B3B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093B64; /* 0x15093B3D: jns 0x15093b64 */
L_15093B3F:
    RECOMP_CALL(sub_15036430); /* 0x15093B3F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15093B44: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15093B4A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15093B4D:
    ebx = POP32_VAL(esp); /* 0x15093B4D: pop ebx */
L_15093B4E:
    ecx = MEM32(ebp + (-0x4)); /* 0x15093B4E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15093B51: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15093B52: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x15093B54: pop esi */
    RECOMP_CALL(sub_1505E540); /* 0x15093B55: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15093B5A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093B5B: ret  */
L_15093B5C:
    /* test edx, edx */ /* 0x15093B5C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093B64; /* 0x15093B5E: jns 0x15093b64 */
L_15093B60:
    /* test ecx, ecx */ /* 0x15093B60: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093B3F; /* 0x15093B62: jns 0x15093b3f */
L_15093B64:
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x18u); /* 0x15093B64: imul esi, ecx, 0x18 */
    /* test ecx, ecx */ /* 0x15093B67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093B75; /* 0x15093B69: je 0x15093b75 */
L_15093B6B:
    eax = esi; /* 0x15093B6B: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093B6D: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15093B6E: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 0x18u */ /* 0x15093B70: cmp eax, 0x18 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093B73: jne 0x15093b3f */
L_15093B75:
    eax = MEM32(edi + 0x8); /* 0x15093B75: mov eax, dword ptr [edi + 8] */
    ecx = eax + esi; /* 0x15093B78: lea ecx, [eax + esi] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x15093B7B: mov dword ptr [ebp - 0x2c], ecx */
    /* test esi, esi */ /* 0x15093B7E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093B8C; /* 0x15093B80: js 0x15093b8c */
L_15093B82:
    /* test eax, eax */ /* 0x15093B82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093B94; /* 0x15093B84: js 0x15093b94 */
L_15093B86:
    /* test ecx, ecx */ /* 0x15093B86: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093B3F; /* 0x15093B88: js 0x15093b3f */
L_15093B8A:
    goto L_15093B94; /* 0x15093B8A: jmp 0x15093b94 */
L_15093B8C:
    /* test eax, eax */ /* 0x15093B8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093B94; /* 0x15093B8E: jns 0x15093b94 */
L_15093B90:
    /* test ecx, ecx */ /* 0x15093B90: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093B3F; /* 0x15093B92: jns 0x15093b3f */
L_15093B94:
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x3Cu); /* 0x15093B94: imul esi, ecx, 0x3c */
    /* test ecx, ecx */ /* 0x15093B97: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093BA5; /* 0x15093B99: je 0x15093ba5 */
L_15093B9B:
    eax = esi; /* 0x15093B9B: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093B9D: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15093B9E: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 0x3Cu */ /* 0x15093BA0: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093BA3: jne 0x15093b3f */
L_15093BA5:
    eax = MEM32(edi + 0x4); /* 0x15093BA5: mov eax, dword ptr [edi + 4] */
    ecx = eax + esi; /* 0x15093BA8: lea ecx, [eax + esi] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x15093BAB: mov dword ptr [ebp - 0x2c], ecx */
    /* test esi, esi */ /* 0x15093BAE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093BBC; /* 0x15093BB0: js 0x15093bbc */
L_15093BB2:
    /* test eax, eax */ /* 0x15093BB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093BC8; /* 0x15093BB4: js 0x15093bc8 */
L_15093BB6:
    /* test ecx, ecx */ /* 0x15093BB6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093B3F; /* 0x15093BB8: js 0x15093b3f */
L_15093BBA:
    goto L_15093BC8; /* 0x15093BBA: jmp 0x15093bc8 */
L_15093BBC:
    /* test eax, eax */ /* 0x15093BBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093BC8; /* 0x15093BBE: jns 0x15093bc8 */
L_15093BC0:
    /* test ecx, ecx */ /* 0x15093BC0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093B3F; /* 0x15093BC2: jns 0x15093b3f */
L_15093BC8:
    esi = (uint32_t)((int32_t)ecx * (int32_t)0x3Cu); /* 0x15093BC8: imul esi, ecx, 0x3c */
    /* test ecx, ecx */ /* 0x15093BCB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093BDD; /* 0x15093BCD: je 0x15093bdd */
L_15093BCF:
    eax = esi; /* 0x15093BCF: mov eax, esi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093BD1: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x15093BD2: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 0x3Cu */ /* 0x15093BD4: cmp eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093BD7: jne 0x15093b3f */
L_15093BDD:
    ecx = MEM32(edi); /* 0x15093BDD: mov ecx, dword ptr [edi] */
    eax = ecx + esi; /* 0x15093BDF: lea eax, [ecx + esi] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x15093BE2: mov dword ptr [ebp - 0x2c], eax */
    /* test esi, esi */ /* 0x15093BE5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093BF7; /* 0x15093BE7: js 0x15093bf7 */
L_15093BE9:
    /* test ecx, ecx */ /* 0x15093BE9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093C03; /* 0x15093BEB: js 0x15093c03 */
L_15093BED:
    /* test eax, eax */ /* 0x15093BED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093B3F; /* 0x15093BEF: js 0x15093b3f */
L_15093BF5:
    goto L_15093C03; /* 0x15093BF5: jmp 0x15093c03 */
L_15093BF7:
    /* test ecx, ecx */ /* 0x15093BF7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093C03; /* 0x15093BF9: jns 0x15093c03 */
L_15093BFB:
    /* test eax, eax */ /* 0x15093BFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093B3F; /* 0x15093BFD: jns 0x15093b3f */
L_15093C03:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15093C03: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15093C99; /* 0x15093C07: je 0x15093c99 */
L_15093C0D:
    RECOMP_CALL(sub_150943C7); /* 0x15093C0D: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x34); /* 0x15093C12: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x15093C15: push eax */
    RECOMP_CALL(sub_150923D1); /* 0x15093C16: call 0x150923d1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15093C1B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15093C1D: pop ecx */
    /* test eax, eax */ /* 0x15093C1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093C2F; /* 0x15093C20: je 0x15093c2f */
L_15093C22:
    PUSH32(esp, ebx); /* 0x15093C22: push ebx */
    PUSH32(esp, ebx); /* 0x15093C23: push ebx */
    PUSH32(esp, ebx); /* 0x15093C24: push ebx */
    PUSH32(esp, ebx); /* 0x15093C25: push ebx */
    PUSH32(esp, ebx); /* 0x15093C26: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15093C27: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093C2C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15093C2F:
    eax = ebp + (-0x30); /* 0x15093C2F: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x15093C32: push eax */
    RECOMP_CALL(sub_1509240D); /* 0x15093C33: call 0x1509240d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093C38: pop ecx */
    /* test eax, eax */ /* 0x15093C39: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093C4A; /* 0x15093C3B: je 0x15093c4a */
L_15093C3D:
    PUSH32(esp, ebx); /* 0x15093C3D: push ebx */
    PUSH32(esp, ebx); /* 0x15093C3E: push ebx */
    PUSH32(esp, ebx); /* 0x15093C3F: push ebx */
    PUSH32(esp, ebx); /* 0x15093C40: push ebx */
    PUSH32(esp, ebx); /* 0x15093C41: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15093C42: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093C47: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15093C4A:
    eax = MEM32(ebp + (-0x30)); /* 0x15093C4A: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x15093C4D: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x2C); /* 0x15093C50: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x15093C53: push eax */
    eax = ebp + (-0x28); /* 0x15093C54: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15093C57: push eax */
    RECOMP_CALL(sub_15093520); /* 0x15093C58: call 0x15093520 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093C5D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093C5E: pop ecx */
    /* test eax, eax */ /* 0x15093C5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093C61: jne 0x15093b3f */
L_15093C67:
    RECOMP_CALL(sub_1509309F); /* 0x15093C67: call 0x1509309f */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x15093C6C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x8)); /* 0x15093C6E: mov eax, dword ptr [ebp - 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15093C77; /* 0x15093C71: jne 0x15093c77 */
L_15093C73:
    /* test eax, eax */ /* 0x15093C73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093C84; /* 0x15093C75: jg 0x15093c84 */
L_15093C77:
    ecx = MEM32(edi + 0x20); /* 0x15093C77: mov ecx, dword ptr [edi + 0x20] */
    /* test ecx, ecx */ /* 0x15093C7A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093C84; /* 0x15093C7C: jg 0x15093c84 */
L_15093C7E:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093CB0; /* 0x15093C7E: jns 0x15093cb0 */
L_15093C80:
    /* test eax, eax */ /* 0x15093C80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093CB0; /* 0x15093C82: jle 0x15093cb0 */
L_15093C84:
    eax = MEM32(ebp + (-0x34)); /* 0x15093C84: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x15093C87: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x2C); /* 0x15093C8A: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x15093C8D: push eax */
    eax = ebp + (-0x28); /* 0x15093C8E: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15093C91: push eax */
    RECOMP_CALL(sub_15093520); /* 0x15093C92: call 0x15093520 */
    RECOMP_FLAGS_IN();
    goto L_15093CA6; /* 0x15093C97: jmp 0x15093ca6 */
L_15093C99:
    eax = ebp + (-0x2C); /* 0x15093C99: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x15093C9C: push eax */
    eax = ebp + (-0x28); /* 0x15093C9D: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15093CA0: push eax */
    RECOMP_CALL(sub_15093120); /* 0x15093CA1: call 0x15093120 */
    RECOMP_FLAGS_IN();
L_15093CA6:
    ecx = POP32_VAL(esp); /* 0x15093CA6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093CA7: pop ecx */
    /* test eax, eax */ /* 0x15093CA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093B3F; /* 0x15093CAA: jne 0x15093b3f */
L_15093CB0:
    eax = MEM32(ebp + (-0x2C)); /* 0x15093CB0: mov eax, dword ptr [ebp - 0x2c] */
    esi = ebp + (-0x28); /* 0x15093CB3: lea esi, [ebp - 0x28] */
    PUSH32(esp, 9); /* 0x15093CB6: push 9 */
    ecx = POP32_VAL(esp); /* 0x15093CB8: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15093CB9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_15093B4D; /* 0x15093CBB: jmp 0x15093b4d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15093CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093CD0u);

L_15093CD0:
    edi = edi; /* 0x15093CD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093CD2: push ebp */
    ebp = esp; /* 0x15093CD3: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15093CD5: pop ebp */
    goto L_15093CF0; /* 0x15093CD6: jmp 0x15093cf0 */
L_15093CF0:
    edi = edi; /* 0x15093CF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093CF2: push ebp */
    ebp = esp; /* 0x15093CF3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15093CF5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15093CF7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15093A73); /* 0x15093CFA: call 0x15093a73 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093CFF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093D00: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15093D01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093D02: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093CF0u);

L_15093CF0:
    edi = edi; /* 0x15093CF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093CF2: push ebp */
    ebp = esp; /* 0x15093CF3: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15093CF5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15093CF7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15093A73); /* 0x15093CFA: call 0x15093a73 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093CFF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093D00: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15093D01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093D02: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093D10u);

L_15093D10:
    edi = edi; /* 0x15093D10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093D12: push ebp */
    ebp = esp; /* 0x15093D13: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15093D15: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15093D17: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15093A73); /* 0x15093D1A: call 0x15093a73 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093D1F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093D20: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15093D21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093D22: ret  */
    RECOMP_REGS_OUT();
}

void sub_15093D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093D30u);

    goto L_15093D30;
L_15093D10:
    edi = edi; /* 0x15093D10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093D12: push ebp */
    ebp = esp; /* 0x15093D13: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15093D15: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15093D17: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15093A73); /* 0x15093D1A: call 0x15093a73 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093D1F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093D20: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15093D21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15093D22: ret  */
L_15093D30:
    edi = edi; /* 0x15093D30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093D32: push ebp */
    ebp = esp; /* 0x15093D33: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15093D35: pop ebp */
    RECOMP_BACKEDGE();
    goto L_15093D10; /* 0x15093D36: jmp 0x15093d10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15093D41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15093D41u);

L_15093D41:
    edi = edi; /* 0x15093D41: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15093D43: push ebp */
    ebp = esp; /* 0x15093D44: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x15093D46: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15093D49: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15093D4E: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15093D50: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x8); /* 0x15093D53: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15093D56: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15093D57: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x54)) = ecx; /* 0x15093D59: mov dword ptr [ebp - 0x54], ecx */
    MEM32(ebp + (-0x50)) = edi; /* 0x15093D5C: mov dword ptr [ebp - 0x50], edi */
    MEM32(ebp + (-0x4C)) = edi; /* 0x15093D5F: mov dword ptr [ebp - 0x4c], edi */
    /* test ecx, ecx */ /* 0x15093D62: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093D88; /* 0x15093D64: jne 0x15093d88 */
L_15093D66:
    RECOMP_CALL(sub_15036430); /* 0x15093D66: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15093D6B: push edi */
    PUSH32(esp, edi); /* 0x15093D6C: push edi */
    PUSH32(esp, edi); /* 0x15093D6D: push edi */
    PUSH32(esp, edi); /* 0x15093D6E: push edi */
    PUSH32(esp, edi); /* 0x15093D6F: push edi */
    MEM32(eax) = 0x16u; /* 0x15093D70: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15093D76: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15093D7B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093D7E: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x15093D81: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15094042; /* 0x15093D83: jmp 0x15094042 */
L_15093D88:
    eax = MEM32(ecx + 0x14); /* 0x15093D88: mov eax, dword ptr [ecx + 0x14] */
    PUSH32(esp, ebx); /* 0x15093D8B: push ebx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093D8C: cdq  */
    PUSH32(esp, esi); /* 0x15093D8D: push esi */
    esi = edx; /* 0x15093D8E: mov esi, edx */
    ebx = eax; /* 0x15093D90: mov ebx, eax */
    MEM32(ebp + (-0x40)) = ebx; /* 0x15093D92: mov dword ptr [ebp - 0x40], ebx */
    MEM32(ebp + (-0x3C)) = esi; /* 0x15093D95: mov dword ptr [ebp - 0x3c], esi */
    MEM32(ebp + (-0x30)) = ebx; /* 0x15093D98: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x2C)) = esi; /* 0x15093D9B: mov dword ptr [ebp - 0x2c], esi */
    /* cmp esi, edi */ /* 0x15093D9E: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15094030; /* 0x15093DA0: jl 0x15094030 */
L_15093DA6:
    if (CMP_G(_flag_a, _flag_b)) goto L_15094030; /* 0x15093DA6: jg 0x15094030 */
L_15093DAC:
    /* cmp ebx, 0x45u */ /* 0x15093DAC: cmp ebx, 0x45 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15094030; /* 0x15093DAF: jb 0x15094030 */
L_15093DB5:
    /* cmp esi, edi */ /* 0x15093DB5: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15094030; /* 0x15093DB7: jg 0x15094030 */
L_15093DBD:
    if (CMP_L(_flag_a, _flag_b)) goto L_15093DCB; /* 0x15093DBD: jl 0x15093dcb */
L_15093DBF:
    /* cmp ebx, 0x44Du */ /* 0x15093DBF: cmp ebx, 0x44d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x44Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15094030; /* 0x15093DC5: ja 0x15094030 */
L_15093DCB:
    edi = MEM32(ecx + 0x10); /* 0x15093DCB: mov edi, dword ptr [ecx + 0x10] */
    /* test edi, edi */ /* 0x15093DCE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093DDD; /* 0x15093DD0: js 0x15093ddd */
L_15093DD2:
    MEM32(ebp + (-0x34)) = ebx; /* 0x15093DD2: mov dword ptr [ebp - 0x34], ebx */
    MEM32(ebp + (-0x38)) = esi; /* 0x15093DD5: mov dword ptr [ebp - 0x38], esi */
    /* cmp edi, 0xBu */ /* 0x15093DD8: cmp edi, 0xb */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15093E57; /* 0x15093DDB: jle 0x15093e57 */
L_15093DDD:
    eax = edi; /* 0x15093DDD: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093DDF: cdq  */
    PUSH32(esp, 0xCu); /* 0x15093DE0: push 0xc */
    edi = POP32_VAL(esp); /* 0x15093DE2: pop edi */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)edi; /* 0x15093DE3: idiv edi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edi = edx; /* 0x15093DE5: mov edi, edx */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093DE7: cdq  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x15093DE8: add ebx, eax */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x10) = edi; /* 0x15093DEA: mov dword ptr [ecx + 0x10], edi */
    eax = ebx; /* 0x15093DED: mov eax, ebx */
    MEM32(ebp + (-0x40)) = ebx; /* 0x15093DEF: mov dword ptr [ebp - 0x40], ebx */
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093DF2: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x34)) = eax; /* 0x15093DF4: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x3C)) = esi; /* 0x15093DF7: mov dword ptr [ebp - 0x3c], esi */
    edx = esi; /* 0x15093DFA: mov edx, esi */
    MEM32(ebp + (-0x38)) = edx; /* 0x15093DFC: mov dword ptr [ebp - 0x38], edx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x15093DFF: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x2C)) = esi; /* 0x15093E02: mov dword ptr [ebp - 0x2c], esi */
    /* test edi, edi */ /* 0x15093E05: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093E2B; /* 0x15093E07: jns 0x15093e2b */
L_15093E09:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x15093E09: add edi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15093E0C: sub ebx, 1 */
    _flag_k = FK_CMP;
    MEM32(ecx + 0x10) = edi; /* 0x15093E0F: mov dword ptr [ecx + 0x10], edi */
    eax = ebx; /* 0x15093E12: mov eax, ebx */
    { uint32_t _sa = esi, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093E14: sbb esi, 0 */
      esi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x40)) = ebx; /* 0x15093E17: mov dword ptr [ebp - 0x40], ebx */
    MEM32(ebp + (-0x3C)) = esi; /* 0x15093E1A: mov dword ptr [ebp - 0x3c], esi */
    edx = esi; /* 0x15093E1D: mov edx, esi */
    MEM32(ebp + (-0x30)) = ebx; /* 0x15093E1F: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x2C)) = esi; /* 0x15093E22: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x34)) = ebx; /* 0x15093E25: mov dword ptr [ebp - 0x34], ebx */
    MEM32(ebp + (-0x38)) = esi; /* 0x15093E28: mov dword ptr [ebp - 0x38], esi */
L_15093E2B:
    /* test edx, edx */ /* 0x15093E2B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15094030; /* 0x15093E2D: jl 0x15094030 */
L_15093E33:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15094030; /* 0x15093E33: jg 0x15094030 */
L_15093E39:
    /* cmp eax, 0x45u */ /* 0x15093E39: cmp eax, 0x45 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15094030; /* 0x15093E3C: jb 0x15094030 */
L_15093E42:
    /* test edx, edx */ /* 0x15093E42: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15094030; /* 0x15093E44: jg 0x15094030 */
L_15093E4A:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15093E57; /* 0x15093E4A: jl 0x15093e57 */
L_15093E4C:
    /* cmp eax, 0x44Du */ /* 0x15093E4C: cmp eax, 0x44d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15094030; /* 0x15093E51: ja 0x15094030 */
L_15093E57:
    eax = MEM32(edi * 4 + 0x150077F4); /* 0x15093E57: mov eax, dword ptr [edi*4 + 0x150077f4] */
    PUSH32(esp, 0); /* 0x15093E5E: push 0 */
    PUSH32(esp, 4); /* 0x15093E60: push 4 */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x15093E62: push dword ptr [ebp - 0x38] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093E65: cdq  */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x15093E66: push dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x44)) = eax; /* 0x15093E69: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x48)) = edx; /* 0x15093E6C: mov dword ptr [ebp - 0x48], edx */
    RECOMP_CALL(sub_150AF6B0); /* 0x15093E6F: call 0x150af6b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x15093E74: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093E8A; /* 0x15093E76: jne 0x15093e8a */
L_15093E78:
    PUSH32(esp, eax); /* 0x15093E78: push eax */
    PUSH32(esp, 0x64u); /* 0x15093E79: push 0x64 */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x15093E7B: push dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x15093E7E: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_150AF6B0); /* 0x15093E81: call 0x150af6b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x15093E86: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093EA9; /* 0x15093E88: jne 0x15093ea9 */
L_15093E8A:
    ecx = ebx; /* 0x15093E8A: mov ecx, ebx */
    eax = esi; /* 0x15093E8C: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x76Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x76Cu; /* 0x15093E8E: add ecx, 0x76c */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x15093E94: push 0 */
    PUSH32(esp, 0x190u); /* 0x15093E96: push 0x190 */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093E9B: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x15093E9E: push eax */
    PUSH32(esp, ecx); /* 0x15093E9F: push ecx */
    RECOMP_CALL(sub_150AF6B0); /* 0x15093EA0: call 0x150af6b0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x15093EA5: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15093EB6; /* 0x15093EA7: jne 0x15093eb6 */
L_15093EA9:
    /* cmp edi, 1 */ /* 0x15093EA9: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15093EB6; /* 0x15093EAC: jle 0x15093eb6 */
L_15093EAE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) + 1; /* 0x15093EAE: add dword ptr [ebp - 0x44], 1 */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM32(ebp + (-0x48)), _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093EB2: adc dword ptr [ebp - 0x48], 0 */
      MEM32(ebp + (-0x48)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_15093EB6:
    eax = MEM32(ebp + (-0x3C)); /* 0x15093EB6: mov eax, dword ptr [ebp - 0x3c] */
    edi = ebx; /* 0x15093EB9: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x15093EBB: sub edi, 1 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x15093EBE: push 0 */
    { uint32_t _sa = esi, _sb = 0, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093EC0: sbb esi, 0 */
      esi = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x12Bu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x12Bu; /* 0x15093EC3: add ebx, 0x12b */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x190u); /* 0x15093EC9: push 0x190 */
    { uint32_t _aa = eax, _ab = 0, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093ECE: adc eax, 0 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x15093ED1: push eax */
    PUSH32(esp, ebx); /* 0x15093ED2: push ebx */
    RECOMP_CALL(sub_150AF600); /* 0x15093ED3: call 0x150af600 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x15093ED8: push 0 */
    PUSH32(esp, 0x64u); /* 0x15093EDA: push 0x64 */
    PUSH32(esp, esi); /* 0x15093EDC: push esi */
    PUSH32(esp, edi); /* 0x15093EDD: push edi */
    MEM32(ebp + (-0x34)) = eax; /* 0x15093EDE: mov dword ptr [ebp - 0x34], eax */
    ebx = edx; /* 0x15093EE1: mov ebx, edx */
    RECOMP_CALL(sub_150AF600); /* 0x15093EE3: call 0x150af600 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) - eax; /* 0x15093EE8: sub dword ptr [ebp - 0x34], eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x15093EEB: push 0 */
    PUSH32(esp, 4); /* 0x15093EED: push 4 */
    PUSH32(esp, esi); /* 0x15093EEF: push esi */
    PUSH32(esp, edi); /* 0x15093EF0: push edi */
    { uint32_t _sa = ebx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093EF1: sbb ebx, edx */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    RECOMP_CALL(sub_150AF600); /* 0x15093EF3: call 0x150af600 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x34)); /* 0x15093EF8: mov esi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15093EFB: add esi, eax */
    _flag_k = FK_ADD;
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093EFD: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15093EFF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15093F01: push edi */
    PUSH32(esp, 0x16Du); /* 0x15093F02: push 0x16d */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x15093F07: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x15093F0A: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_150492E0); /* 0x15093F0D: call 0x150492e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15093F12: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x15093F14: push edi */
    { uint32_t _aa = ebx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093F15: adc ebx, edx */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x44)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x44)); /* 0x15093F17: add esi, dword ptr [ebp - 0x44] */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x18u); /* 0x15093F1A: push 0x18 */
    { uint32_t _aa = ebx, _ab = MEM32(ebp + (-0x48)), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093F1C: adc ebx, dword ptr [ebp - 0x48] */
      ebx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x63DFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x63DFu; /* 0x15093F1F: sub esi, 0x63df */
    _flag_k = FK_CMP;
    eax = POP32_VAL(esp); /* 0x15093F25: pop eax */
    PUSH32(esp, eax); /* 0x15093F26: push eax */
    { uint32_t _sa = ebx, _sb = edi, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093F27: sbb ebx, edi */
      ebx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ebx); /* 0x15093F29: push ebx */
    PUSH32(esp, esi); /* 0x15093F2A: push esi */
    RECOMP_CALL(sub_150492E0); /* 0x15093F2B: call 0x150492e0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x54)); /* 0x15093F30: mov edi, dword ptr [ebp - 0x54] */
    esi = eax; /* 0x15093F33: mov esi, eax */
    PUSH32(esp, 0x18u); /* 0x15093F35: push 0x18 */
    ecx = edx; /* 0x15093F37: mov ecx, edx */
    edx = POP32_VAL(esp); /* 0x15093F39: pop edx */
    eax = MEM32(edi + 0xC); /* 0x15093F3A: mov eax, dword ptr [edi + 0xc] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(edx); /* 0x15093F3D: imul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, 0); /* 0x15093F3F: push 0 */
    PUSH32(esp, 0x3Cu); /* 0x15093F41: push 0x3c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15093F43: add esi, eax */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x15093F45: pop ebx */
    PUSH32(esp, ebx); /* 0x15093F46: push ebx */
    { uint32_t _aa = ecx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093F47: adc ecx, edx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x15093F49: push ecx */
    PUSH32(esp, esi); /* 0x15093F4A: push esi */
    RECOMP_CALL(sub_150492E0); /* 0x15093F4B: call 0x150492e0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x15093F50: mov esi, eax */
    ecx = edx; /* 0x15093F52: mov ecx, edx */
    eax = MEM32(edi + 0x8); /* 0x15093F54: mov eax, dword ptr [edi + 8] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x15093F57: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, 0); /* 0x15093F59: push 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x15093F5B: add esi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x15093F5D: push ebx */
    { uint32_t _aa = ecx, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093F5E: adc ecx, edx */
      ecx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, ecx); /* 0x15093F60: push ecx */
    PUSH32(esp, esi); /* 0x15093F61: push esi */
    RECOMP_CALL(sub_150492E0); /* 0x15093F62: call 0x150492e0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15093F67: mov ecx, eax */
    esi = edx; /* 0x15093F69: mov esi, edx */
    eax = MEM32(edi + 0x4); /* 0x15093F6B: mov eax, dword ptr [edi + 4] */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(ebx); /* 0x15093F6E: imul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x15093F70: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x15093F72: mov eax, dword ptr [edi] */
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093F74: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093F76: cdq  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x15093F77: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = ecx; /* 0x15093F79: mov dword ptr [ebp - 0x30], ecx */
    { uint32_t _aa = esi, _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093F7C: adc esi, edx */
      esi = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15093F7E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = esi; /* 0x15093F82: mov dword ptr [ebp - 0x2c], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1509400D; /* 0x15093F85: je 0x1509400d */
L_15093F8B:
    RECOMP_CALL(sub_150943C7); /* 0x15093F8B: call 0x150943c7 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x15093F90: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x15093F93: push eax */
    RECOMP_CALL(sub_150923D1); /* 0x15093F94: call 0x150923d1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15093F99: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x15093F9B: pop ecx */
    /* test eax, eax */ /* 0x15093F9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093FAD; /* 0x15093F9E: je 0x15093fad */
L_15093FA0:
    PUSH32(esp, ebx); /* 0x15093FA0: push ebx */
    PUSH32(esp, ebx); /* 0x15093FA1: push ebx */
    PUSH32(esp, ebx); /* 0x15093FA2: push ebx */
    PUSH32(esp, ebx); /* 0x15093FA3: push ebx */
    PUSH32(esp, ebx); /* 0x15093FA4: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15093FA5: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093FAA: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15093FAD:
    eax = ebp + (-0x4C); /* 0x15093FAD: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x15093FB0: push eax */
    RECOMP_CALL(sub_1509240D); /* 0x15093FB1: call 0x1509240d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093FB6: pop ecx */
    /* test eax, eax */ /* 0x15093FB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15093FC8; /* 0x15093FB9: je 0x15093fc8 */
L_15093FBB:
    PUSH32(esp, ebx); /* 0x15093FBB: push ebx */
    PUSH32(esp, ebx); /* 0x15093FBC: push ebx */
    PUSH32(esp, ebx); /* 0x15093FBD: push ebx */
    PUSH32(esp, ebx); /* 0x15093FBE: push ebx */
    PUSH32(esp, ebx); /* 0x15093FBF: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15093FC0: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15093FC5: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15093FC8:
    eax = MEM32(ebp + (-0x4C)); /* 0x15093FC8: mov eax, dword ptr [ebp - 0x4c] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093FCB: cdq  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + eax; /* 0x15093FCC: add dword ptr [ebp - 0x30], eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x30); /* 0x15093FCF: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x15093FD2: push eax */
    { uint32_t _aa = MEM32(ebp + (-0x2C)), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093FD3: adc dword ptr [ebp - 0x2c], edx */
      MEM32(ebp + (-0x2C)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x28); /* 0x15093FD6: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15093FD9: push eax */
    RECOMP_CALL(sub_150937C0); /* 0x15093FDA: call 0x150937c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15093FDF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15093FE0: pop ecx */
    /* test eax, eax */ /* 0x15093FE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15094030; /* 0x15093FE3: jne 0x15094030 */
L_15093FE5:
    eax = MEM32(edi + 0x20); /* 0x15093FE5: mov eax, dword ptr [edi + 0x20] */
    /* test eax, eax */ /* 0x15093FE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15093FF4; /* 0x15093FEA: jg 0x15093ff4 */
L_15093FEC:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_15094020; /* 0x15093FEC: jns 0x15094020 */
L_15093FEE:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x15093FEE: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15094020; /* 0x15093FF2: jle 0x15094020 */
L_15093FF4:
    eax = MEM32(ebp + (-0x50)); /* 0x15093FF4: mov eax, dword ptr [ebp - 0x50] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15093FF7: cdq  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + eax; /* 0x15093FF8: add dword ptr [ebp - 0x30], eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x30); /* 0x15093FFB: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x15093FFE: push eax */
    { uint32_t _aa = MEM32(ebp + (-0x2C)), _ab = edx, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15093FFF: adc dword ptr [ebp - 0x2c], edx */
      MEM32(ebp + (-0x2C)) = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    eax = ebp + (-0x28); /* 0x15094002: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15094005: push eax */
    RECOMP_CALL(sub_150937C0); /* 0x15094006: call 0x150937c0 */
    RECOMP_FLAGS_IN();
    goto L_1509401A; /* 0x1509400B: jmp 0x1509401a */
L_1509400D:
    eax = ebp + (-0x30); /* 0x1509400D: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x15094010: push eax */
    eax = ebp + (-0x28); /* 0x15094011: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x15094014: push eax */
    RECOMP_CALL(sub_150932C0); /* 0x15094015: call 0x150932c0 */
    RECOMP_FLAGS_IN();
L_1509401A:
    ecx = POP32_VAL(esp); /* 0x1509401A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1509401B: pop ecx */
    /* test eax, eax */ /* 0x1509401C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15094030; /* 0x1509401E: jne 0x15094030 */
L_15094020:
    eax = MEM32(ebp + (-0x30)); /* 0x15094020: mov eax, dword ptr [ebp - 0x30] */
    esi = ebp + (-0x28); /* 0x15094023: lea esi, [ebp - 0x28] */
    edx = MEM32(ebp + (-0x2C)); /* 0x15094026: mov edx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, 9); /* 0x15094029: push 9 */
    ecx = POP32_VAL(esp); /* 0x1509402B: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1509402C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_15094040; /* 0x1509402E: jmp 0x15094040 */
L_15094030:
    RECOMP_CALL(sub_15036430); /* 0x15094030: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15094035: mov dword ptr [eax], 0x16 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1509403B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1509403E: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15094040:
    esi = POP32_VAL(esp); /* 0x15094040: pop esi */
    ebx = POP32_VAL(esp); /* 0x15094041: pop ebx */
L_15094042:
    ecx = MEM32(ebp + (-0x4)); /* 0x15094042: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15094045: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x15094047: pop edi */
    RECOMP_CALL(sub_1505E540); /* 0x15094048: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509404D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509404E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15094060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15094060u);

L_15094060:
    edi = edi; /* 0x15094060: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15094062: push ebp */
    ebp = esp; /* 0x15094063: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15094065: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15094067: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15093D41); /* 0x1509406A: call 0x15093d41 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509406F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15094070: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15094071: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15094072: ret  */
    RECOMP_REGS_OUT();
}

void sub_15094080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15094080u);

L_15094080:
    edi = edi; /* 0x15094080: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15094082: push ebp */
    ebp = esp; /* 0x15094083: mov ebp, esp */
    PUSH32(esp, 1); /* 0x15094085: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15094087: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15093D41); /* 0x1509408A: call 0x15093d41 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509408F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15094090: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15094091: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15094092: ret  */
    RECOMP_REGS_OUT();
}

void sub_150940A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150940A0u);

L_150940A0:
    edi = edi; /* 0x150940A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150940A2: push ebp */
    ebp = esp; /* 0x150940A3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150940A5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150940A6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 9); /* 0x150940A9: push 9 */
    PUSH32(esp, esi); /* 0x150940AB: push esi */
    RECOMP_CALL(sub_150940D0); /* 0x150940AC: call 0x150940d0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150940B1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150940B2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150940B3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x150940B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x150940B7: cmovne esi, ecx */
    eax = esi; /* 0x150940BA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150940BC: pop esi */
    ebp = POP32_VAL(esp); /* 0x150940BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150940BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150940D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150940D0u);

L_150940D0:
    edi = edi; /* 0x150940D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150940D2: push ebp */
    ebp = esp; /* 0x150940D3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x150940D5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150940D8: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150940DD: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150940DF: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x150940E2: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x150940E5: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, ebx); /* 0x150940E8: push ebx */
    PUSH32(esp, esi); /* 0x150940E9: push esi */
    /* test eax, eax */ /* 0x150940EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15094197; /* 0x150940EC: je 0x15094197 */
L_150940F2:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150940F2: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15094197; /* 0x150940F6: jbe 0x15094197 */
L_150940FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150940FC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 9 */ /* 0x150940FE: cmp dword ptr [ebp + 0xc], 9 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15094102: mov byte ptr [eax], bl */
    if (CMP_AE(_flag_a, _flag_b)) goto L_15094112; /* 0x15094104: jae 0x15094112 */
L_15094106:
    RECOMP_CALL(sub_15036430); /* 0x15094106: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1509410B: push 0x22 */
    goto L_150941A0; /* 0x1509410D: jmp 0x150941a0 */
L_15094112:
    PUSH32(esp, edi); /* 0x15094112: push edi */
    eax = ebp + (-0x14); /* 0x15094113: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15094116: push eax */
    RECOMP_ICALL(MEM32(0x150C027C)); /* 0x15094117: call dword ptr [0x150c027c] */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(ebp + (-0x14)); /* 0x1509411D: movzx eax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15094121: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x64u); /* 0x15094123: push 0x64 */
    edi = POP32_VAL(esp); /* 0x15094125: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x15094126: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x18)); /* 0x15094128: mov eax, dword ptr [ebp - 0x18] */
    ecx = (uint32_t)MEM16(ebp + (-0x12)); /* 0x1509412B: movzx ecx, word ptr [ebp - 0x12] */
    edi = edx; /* 0x1509412F: mov edi, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15094131: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)MEM16(ebp + (-0xE)); /* 0x15094133: movzx esi, word ptr [ebp - 0xe] */
    PUSH32(esp, 0xAu); /* 0x15094137: push 0xa */
    MEM8(eax + 0x8) = (uint8_t)(LO8(ebx)); /* 0x15094139: mov byte ptr [eax + 8], bl */
    MEM8(eax + 0x5) = (uint8_t)(0x2Fu); /* 0x1509413C: mov byte ptr [eax + 5], 0x2f */
    MEM8(eax + 0x2) = (uint8_t)(0x2Fu); /* 0x15094140: mov byte ptr [eax + 2], 0x2f */
    eax = ecx; /* 0x15094144: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x15094146: pop ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x15094147: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15094149: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1509414B: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + (-0x18)); /* 0x1509414E: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x15094151: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0xAu); /* 0x15094153: push 0xa */
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x15094155: mov byte ptr [ebx], al */
    eax = ecx; /* 0x15094157: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x15094159: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1509415A: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x30u); /* 0x1509415C: push 0x30 */
    ecx = POP32_VAL(esp); /* 0x1509415E: pop ecx */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x1509415F: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = esi; /* 0x15094161: mov eax, esi */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(edx)); /* 0x15094163: mov byte ptr [ebx + 1], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15094166: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x1C)); /* 0x15094168: div dword ptr [ebp - 0x1c] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1509416B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x1509416D: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x3) = (uint8_t)(LO8(eax)); /* 0x1509416F: mov byte ptr [ebx + 3], al */
    eax = esi; /* 0x15094172: mov eax, esi */
    PUSH32(esp, 0xAu); /* 0x15094174: push 0xa */
    esi = POP32_VAL(esp); /* 0x15094176: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x15094177: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edi; /* 0x15094179: mov eax, edi */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x1509417B: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x4) = (uint8_t)(LO8(edx)); /* 0x1509417D: mov byte ptr [ebx + 4], dl */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x15094180: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x15094181: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x15094183: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x6) = (uint8_t)(LO8(eax)); /* 0x15094185: mov byte ptr [ebx + 6], al */
    eax = edi; /* 0x15094188: mov eax, edi */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1509418A: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)esi; /* 0x1509418B: idiv esi */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    edi = POP32_VAL(esp); /* 0x1509418D: pop edi */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x1509418E: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15094190: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebx + 0x7) = (uint8_t)(LO8(edx)); /* 0x15094192: mov byte ptr [ebx + 7], dl */
    goto L_150941B2; /* 0x15094195: jmp 0x150941b2 */
L_15094197:
    RECOMP_CALL(sub_15036430); /* 0x15094197: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1509419C: push 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1509419E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150941A0:
    esi = POP32_VAL(esp); /* 0x150941A0: pop esi */
    PUSH32(esp, ebx); /* 0x150941A1: push ebx */
    PUSH32(esp, ebx); /* 0x150941A2: push ebx */
    PUSH32(esp, ebx); /* 0x150941A3: push ebx */
    PUSH32(esp, ebx); /* 0x150941A4: push ebx */
    PUSH32(esp, ebx); /* 0x150941A5: push ebx */
    MEM32(eax) = esi; /* 0x150941A6: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150941A8: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x150941AD: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150941AF: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150941B2:
    ecx = MEM32(ebp + (-0x4)); /* 0x150941B2: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x150941B5: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150941B6: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150941B8: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150941B9: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150941BE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150941BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150941D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150941D0u);

L_150941D0:
    edi = edi; /* 0x150941D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150941D2: push ebp */
    ebp = esp; /* 0x150941D3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150941D5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x150941D6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 9); /* 0x150941D9: push 9 */
    PUSH32(esp, esi); /* 0x150941DB: push esi */
    RECOMP_CALL(sub_15094200); /* 0x150941DC: call 0x15094200 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150941E1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150941E2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150941E3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x150941E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) { esi = ecx; } /* 0x150941E7: cmovne esi, ecx */
    eax = esi; /* 0x150941EA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x150941EC: pop esi */
    ebp = POP32_VAL(esp); /* 0x150941ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150941EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15094200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15094200u);

L_15094200:
    edi = edi; /* 0x15094200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15094202: push ebp */
    ebp = esp; /* 0x15094203: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x15094205: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15094208: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1509420D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1509420F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x15094212: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x15094215: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, ebx); /* 0x15094218: push ebx */
    PUSH32(esp, esi); /* 0x15094219: push esi */
    /* test eax, eax */ /* 0x1509421A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150942C0; /* 0x1509421C: je 0x150942c0 */
L_15094222:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15094222: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150942C0; /* 0x15094226: jbe 0x150942c0 */
L_1509422C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1509422C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 9 */ /* 0x1509422E: cmp dword ptr [ebp + 0xc], 9 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x15094232: mov byte ptr [eax], bl */
    if (CMP_AE(_flag_a, _flag_b)) goto L_15094242; /* 0x15094234: jae 0x15094242 */
L_15094236:
    RECOMP_CALL(sub_15036430); /* 0x15094236: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x22u); /* 0x1509423B: push 0x22 */
    goto L_150942C9; /* 0x1509423D: jmp 0x150942c9 */
L_15094242:
    PUSH32(esp, edi); /* 0x15094242: push edi */
    eax = ebp + (-0x14); /* 0x15094243: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x15094246: push eax */
    RECOMP_ICALL(MEM32(0x150C027C)); /* 0x15094247: call dword ptr [0x150c027c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x1509424D: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15094250: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM16(ebp + (-0xC)); /* 0x15094252: movzx ecx, word ptr [ebp - 0xc] */
    PUSH32(esp, 0xAu); /* 0x15094256: push 0xa */
    esi = (uint32_t)MEM16(ebp + (-0xA)); /* 0x15094258: movzx esi, word ptr [ebp - 0xa] */
    MEM8(eax + 0x8) = (uint8_t)(LO8(ebx)); /* 0x1509425C: mov byte ptr [eax + 8], bl */
    MEM8(eax + 0x5) = (uint8_t)(0x3Au); /* 0x1509425F: mov byte ptr [eax + 5], 0x3a */
    MEM8(eax + 0x2) = (uint8_t)(0x3Au); /* 0x15094263: mov byte ptr [eax + 2], 0x3a */
    eax = ecx; /* 0x15094267: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x15094269: pop ebx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x1509426A: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1509426C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1509426E: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + (-0x18)); /* 0x15094271: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x30u); /* 0x15094274: add al, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0xAu); /* 0x15094276: push 0xa */
    edi = (uint32_t)MEM16(ebp + (-0x8)); /* 0x15094278: movzx edi, word ptr [ebp - 8] */
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x1509427C: mov byte ptr [ebx], al */
    eax = ecx; /* 0x1509427E: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x15094280: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x15094281: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 0x30u); /* 0x15094283: push 0x30 */
    ecx = POP32_VAL(esp); /* 0x15094285: pop ecx */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x15094286: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = esi; /* 0x15094288: mov eax, esi */
    MEM8(ebx + 0x1) = (uint8_t)(LO8(edx)); /* 0x1509428A: mov byte ptr [ebx + 1], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1509428D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x1C)); /* 0x1509428F: div dword ptr [ebp - 0x1c] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15094292: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x15094294: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x3) = (uint8_t)(LO8(eax)); /* 0x15094296: mov byte ptr [ebx + 3], al */
    eax = esi; /* 0x15094299: mov eax, esi */
    PUSH32(esp, 0xAu); /* 0x1509429B: push 0xa */
    esi = POP32_VAL(esp); /* 0x1509429D: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x1509429E: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edi; /* 0x150942A0: mov eax, edi */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x150942A2: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x4) = (uint8_t)(LO8(edx)); /* 0x150942A4: mov byte ptr [ebx + 4], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150942A7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x150942A9: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150942AB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(ecx)); /* 0x150942AD: add al, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx + 0x6) = (uint8_t)(LO8(eax)); /* 0x150942AF: mov byte ptr [ebx + 6], al */
    eax = edi; /* 0x150942B2: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x150942B4: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = POP32_VAL(esp); /* 0x150942B6: pop edi */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + LO8(ecx)); /* 0x150942B7: add dl, cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150942B9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebx + 0x7) = (uint8_t)(LO8(edx)); /* 0x150942BB: mov byte ptr [ebx + 7], dl */
    goto L_150942DB; /* 0x150942BE: jmp 0x150942db */
L_150942C0:
    RECOMP_CALL(sub_15036430); /* 0x150942C0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x150942C5: push 0x16 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150942C7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_150942C9:
    esi = POP32_VAL(esp); /* 0x150942C9: pop esi */
    PUSH32(esp, ebx); /* 0x150942CA: push ebx */
    PUSH32(esp, ebx); /* 0x150942CB: push ebx */
    PUSH32(esp, ebx); /* 0x150942CC: push ebx */
    PUSH32(esp, ebx); /* 0x150942CD: push ebx */
    PUSH32(esp, ebx); /* 0x150942CE: push ebx */
    MEM32(eax) = esi; /* 0x150942CF: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x150942D1: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x150942D6: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150942D8: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150942DB:
    ecx = MEM32(ebp + (-0x4)); /* 0x150942DB: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x150942DE: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x150942DF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150942E1: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x150942E2: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150942E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150942E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150942F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150942F0u);

L_150942F0:
    edi = edi; /* 0x150942F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150942F2: push ebp */
    ebp = esp; /* 0x150942F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150942F5: push ecx */
    PUSH32(esp, ecx); /* 0x150942F6: push ecx */
    eax = ebp + (-0x8); /* 0x150942F7: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150942FA: push eax */
    RECOMP_ICALL(MEM32(0x150C0288)); /* 0x150942FB: call dword ptr [0x150c0288] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x15094301: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x15094304: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2AC18000u; /* 0x15094307: add ecx, 0x2ac18000 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1509430D: push 0 */
    PUSH32(esp, 0x00989680u); /* 0x1509430F: push 0x989680 */
    { uint32_t _aa = eax, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15094314: adc eax, 0xfe624e21 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x15094319: push eax */
    PUSH32(esp, ecx); /* 0x1509431A: push ecx */
    RECOMP_CALL(sub_15049320); /* 0x1509431B: call 0x15049320 */
    RECOMP_FLAGS_IN();
    /* test edx, edx */ /* 0x15094320: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15094330; /* 0x15094322: jl 0x15094330 */
L_15094324:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1509432D; /* 0x15094324: jg 0x1509432d */
L_15094326:
    /* cmp eax, 0x7FFFD27Fu */ /* 0x15094326: cmp eax, 0x7fffd27f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFD27Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15094330; /* 0x1509432B: jbe 0x15094330 */
L_1509432D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1509432D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15094330:
    ecx = MEM32(ebp + 0x8); /* 0x15094330: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15094333: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15094339; /* 0x15094335: je 0x15094339 */
L_15094337:
    MEM32(ecx) = eax; /* 0x15094337: mov dword ptr [ecx], eax */
L_15094339:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15094339: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509433A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15094350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15094350u);

    goto L_15094350;
L_150942F0:
    edi = edi; /* 0x150942F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150942F2: push ebp */
    ebp = esp; /* 0x150942F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150942F5: push ecx */
    PUSH32(esp, ecx); /* 0x150942F6: push ecx */
    eax = ebp + (-0x8); /* 0x150942F7: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x150942FA: push eax */
    RECOMP_ICALL(MEM32(0x150C0288)); /* 0x150942FB: call dword ptr [0x150c0288] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x15094301: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x15094304: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2AC18000u; /* 0x15094307: add ecx, 0x2ac18000 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1509430D: push 0 */
    PUSH32(esp, 0x00989680u); /* 0x1509430F: push 0x989680 */
    { uint32_t _aa = eax, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15094314: adc eax, 0xfe624e21 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x15094319: push eax */
    PUSH32(esp, ecx); /* 0x1509431A: push ecx */
    RECOMP_CALL(sub_15049320); /* 0x1509431B: call 0x15049320 */
    RECOMP_FLAGS_IN();
    /* test edx, edx */ /* 0x15094320: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15094330; /* 0x15094322: jl 0x15094330 */
L_15094324:
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1509432D; /* 0x15094324: jg 0x1509432d */
L_15094326:
    /* cmp eax, 0x7FFFD27Fu */ /* 0x15094326: cmp eax, 0x7fffd27f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFD27Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15094330; /* 0x1509432B: jbe 0x15094330 */
L_1509432D:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1509432D: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_15094330:
    ecx = MEM32(ebp + 0x8); /* 0x15094330: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x15094333: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15094339; /* 0x15094335: je 0x15094339 */
L_15094337:
    MEM32(ecx) = eax; /* 0x15094337: mov dword ptr [ecx], eax */
L_15094339:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15094339: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509433A: ret  */
L_15094350:
    edi = edi; /* 0x15094350: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15094352: push ebp */
    ebp = esp; /* 0x15094353: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x15094355: pop ebp */
    RECOMP_BACKEDGE();
    goto L_150942F0; /* 0x15094356: jmp 0x150942f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15094370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15094370u);

L_15094370:
    edi = edi; /* 0x15094370: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15094372: push ebp */
    ebp = esp; /* 0x15094373: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15094375: push ecx */
    PUSH32(esp, ecx); /* 0x15094376: push ecx */
    eax = ebp + (-0x8); /* 0x15094377: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1509437A: push eax */
    RECOMP_ICALL(MEM32(0x150C0288)); /* 0x1509437B: call dword ptr [0x150c0288] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x15094381: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x15094384: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2AC18000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2AC18000u; /* 0x15094387: add ecx, 0x2ac18000 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0); /* 0x1509438D: push 0 */
    PUSH32(esp, 0x00989680u); /* 0x1509438F: push 0x989680 */
    { uint32_t _aa = eax, _ab = 0xFE624E21u, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15094394: adc eax, 0xfe624e21 */
      eax = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x15094399: push eax */
    PUSH32(esp, ecx); /* 0x1509439A: push ecx */
    RECOMP_CALL(sub_15049320); /* 0x1509439B: call 0x15049320 */
    RECOMP_FLAGS_IN();
    /* cmp edx, 7 */ /* 0x150943A0: cmp edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_150943B3; /* 0x150943A3: jl 0x150943b3 */
L_150943A5:
    if (CMP_G(_flag_a, _flag_b)) goto L_150943AE; /* 0x150943A5: jg 0x150943ae */
L_150943A7:
    /* cmp eax, 0x93406FFFu */ /* 0x150943A7: cmp eax, 0x93406fff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x93406FFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_150943B3; /* 0x150943AC: jbe 0x150943b3 */
L_150943AE:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150943AE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = eax; /* 0x150943B1: mov edx, eax */
L_150943B3:
    ecx = MEM32(ebp + 0x8); /* 0x150943B3: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150943B6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150943BF; /* 0x150943B8: je 0x150943bf */
L_150943BA:
    MEM32(ecx) = eax; /* 0x150943BA: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x4) = edx; /* 0x150943BC: mov dword ptr [ecx + 4], edx */
L_150943BF:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150943BF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150943C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150943C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150943C7u);

L_150943C7:
    PUSH32(esp, 8); /* 0x150943C7: push 8 */
    PUSH32(esp, 0x150B15C8u); /* 0x150943C9: push 0x150b15c8 */
    RECOMP_CALL(sub_1505E988); /* 0x150943CE: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x150BEA34), 0 */ /* 0x150943D3: cmp dword ptr [0x150bea34], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BEA34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15094408; /* 0x150943DA: jne 0x15094408 */
L_150943DC:
    PUSH32(esp, 6); /* 0x150943DC: push 6 */
    RECOMP_CALL(sub_15068D80); /* 0x150943DE: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150943E3: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150943E4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x150BEA34), 0 */ /* 0x150943E8: cmp dword ptr [0x150bea34], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BEA34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150943FC; /* 0x150943EF: jne 0x150943fc */
L_150943F1:
    RECOMP_CALL(sub_150946D8); /* 0x150943F1: call 0x150946d8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x150BEA34)); _flag_b = (uint32_t)(1);
    MEM32(0x150BEA34) = MEM32(0x150BEA34) + 1; /* 0x150943F6: inc dword ptr [0x150bea34] */
    _flag_k = FK_INC;
L_150943FC:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150943FC: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15094418); /* 0x15094403: call 0x15094418 */
    RECOMP_FLAGS_IN();
L_15094408:
    ecx = MEM32(ebp + (-0x10)); /* 0x15094408: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1509440B: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15094412: pop ecx */
    edi = POP32_VAL(esp); /* 0x15094413: pop edi */
    esi = POP32_VAL(esp); /* 0x15094414: pop esi */
    ebx = POP32_VAL(esp); /* 0x15094415: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15094416: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15094417: ret  */
    RECOMP_REGS_OUT();
}

void sub_15094418(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15094418u);

L_15094418:
    PUSH32(esp, 6); /* 0x15094418: push 6 */
    RECOMP_CALL(sub_15068F50); /* 0x1509441A: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509441F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15094420: ret  */
    RECOMP_REGS_OUT();
}

void sub_15094427(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15094427u);

L_15094427:
    PUSH32(esp, 0xCu); /* 0x15094427: push 0xc */
    PUSH32(esp, 0x150B15A8u); /* 0x15094429: push 0x150b15a8 */
    RECOMP_CALL(sub_1505E988); /* 0x1509442E: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x15094433: push 6 */
    RECOMP_CALL(sub_15068D80); /* 0x15094435: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1509443A: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1509443B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1509443F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1509447D); /* 0x15094442: call 0x1509447d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15094447: pop ecx */
    esi = eax; /* 0x15094448: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1509444A: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1509444D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_1509446E); /* 0x15094454: call 0x1509446e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15094459: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x1509445B: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1509445E: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15094465: pop ecx */
    edi = POP32_VAL(esp); /* 0x15094466: pop edi */
    esi = POP32_VAL(esp); /* 0x15094467: pop esi */
    ebx = POP32_VAL(esp); /* 0x15094468: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15094469: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509446A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509446E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509446Eu);

L_1509446E:
    PUSH32(esp, 6); /* 0x1509446E: push 6 */
    RECOMP_CALL(sub_15068F50); /* 0x15094470: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15094475: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15094476: ret  */
    RECOMP_REGS_OUT();
}

void sub_1509447D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1509447Du);

L_1509447D:
    edi = edi; /* 0x1509447D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1509447F: push ebp */
    ebp = esp; /* 0x15094480: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15094482: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15094485: push ebx */
    eax = ebp + (-0x4); /* 0x15094486: lea eax, [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15094489: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1509448B: push edi */
    PUSH32(esp, eax); /* 0x1509448C: push eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1509448D: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_15092395); /* 0x15094490: call 0x15092395 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15094495: pop ecx */
    /* test eax, eax */ /* 0x15094496: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150944A7; /* 0x15094498: je 0x150944a7 */
L_1509449A:
    PUSH32(esp, ebx); /* 0x1509449A: push ebx */
    PUSH32(esp, ebx); /* 0x1509449B: push ebx */
    PUSH32(esp, ebx); /* 0x1509449C: push ebx */
    PUSH32(esp, ebx); /* 0x1509449D: push ebx */
    PUSH32(esp, ebx); /* 0x1509449E: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1509449F: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150944A4: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150944A7:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x150944A7: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15094677; /* 0x150944AA: je 0x15094677 */
L_150944B0:
    edi = MEM32(ebp + 0x8); /* 0x150944B0: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150944B3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x150944B5: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150944B6: inc ecx */
    _flag_k = FK_INC;
    esi = MEM32(edi + 0x14); /* 0x150944B7: mov esi, dword ptr [edi + 0x14] */
    /* cmp esi, MEM32(0x150BD728) */ /* 0x150944BA: cmp esi, dword ptr [0x150bd728] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BD728));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150944CE; /* 0x150944C0: jne 0x150944ce */
L_150944C2:
    /* cmp esi, MEM32(0x150BD734) */ /* 0x150944C2: cmp esi, dword ptr [0x150bd734] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x150BD734));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15094624; /* 0x150944C8: je 0x15094624 */
L_150944CE:
    /* cmp MEM32(0x150BEA38), ebx */ /* 0x150944CE: cmp dword ptr [0x150bea38], ebx */
    _flag_a = (uint32_t)(MEM32(0x150BEA38)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150945D1; /* 0x150944D4: je 0x150945d1 */
L_150944DA:
    /* cmp MEM16(0x150BEAD8), LO16(ebx) */ /* 0x150944DA: cmp word ptr [0x150bead8], bx */
    _flag_a = (uint32_t)(MEM16(0x150BEAD8)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150944F9; /* 0x150944E1: jne 0x150944f9 */
L_150944E3:
    edx = (uint32_t)MEM16(0x150BEADE); /* 0x150944E3: movzx edx, word ptr [0x150beade] */
    eax = ecx; /* 0x150944EA: mov eax, ecx */
    ebx = (uint32_t)MEM16(0x150BEADC); /* 0x150944EC: movzx ebx, word ptr [0x150beadc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x150944F3: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15094507; /* 0x150944F7: jmp 0x15094507 */
L_150944F9:
    edi = (uint32_t)MEM16(0x150BEADE); /* 0x150944F9: movzx edi, word ptr [0x150beade] */
    eax = ebx; /* 0x15094500: mov eax, ebx */
    edx = ebx; /* 0x15094502: mov edx, ebx */
    MEM32(ebp + (-0x18)) = edi; /* 0x15094504: mov dword ptr [ebp - 0x18], edi */
L_15094507:
    edi = (uint32_t)MEM16(0x150BEAE0); /* 0x15094507: movzx edi, word ptr [0x150beae0] */
    ecx = (uint32_t)MEM16(0x150BEADA); /* 0x1509450E: movzx ecx, word ptr [0x150beada] */
    MEM32(ebp + (-0x14)) = edi; /* 0x15094515: mov dword ptr [ebp - 0x14], edi */
    edi = (uint32_t)MEM16(0x150BEAE2); /* 0x15094518: movzx edi, word ptr [0x150beae2] */
    MEM32(ebp + (-0x10)) = edi; /* 0x1509451F: mov dword ptr [ebp - 0x10], edi */
    edi = (uint32_t)MEM16(0x150BEAE4); /* 0x15094522: movzx edi, word ptr [0x150beae4] */
    MEM32(ebp + (-0xC)) = edi; /* 0x15094529: mov dword ptr [ebp - 0xc], edi */
    edi = (uint32_t)MEM16(0x150BEAE6); /* 0x1509452C: movzx edi, word ptr [0x150beae6] */
    PUSH32(esp, edi); /* 0x15094533: push edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x15094534: push dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = edi; /* 0x15094537: mov dword ptr [ebp - 8], edi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1509453A: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1509453D: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x15094540: push dword ptr [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x15094543: push ebx */
    PUSH32(esp, edx); /* 0x15094544: push edx */
    PUSH32(esp, ecx); /* 0x15094545: push ecx */
    PUSH32(esp, esi); /* 0x15094546: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15094547: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15094549: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1509454A: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x1509454B: push ebx */
    RECOMP_CALL(sub_15094A97); /* 0x1509454C: call 0x15094a97 */
    RECOMP_FLAGS_IN();
    edi = (uint32_t)MEM16(0x150BEA8C); /* 0x15094551: movzx edi, word ptr [0x150bea8c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x15094558: add esp, 0x2c */
    _flag_k = FK_ADD;
    /* cmp MEM16(0x150BEA84), 0 */ /* 0x1509455B: cmp word ptr [0x150bea84], 0 */
    _flag_a = (uint32_t)(MEM16(0x150BEA84)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = (uint32_t)MEM16(0x150BEA86); /* 0x15094563: movzx ecx, word ptr [0x150bea86] */
    MEM32(ebp + (-0xC)) = edi; /* 0x1509456A: mov dword ptr [ebp - 0xc], edi */
    edi = (uint32_t)MEM16(0x150BEA8E); /* 0x1509456D: movzx edi, word ptr [0x150bea8e] */
    MEM32(ebp + (-0x10)) = edi; /* 0x15094574: mov dword ptr [ebp - 0x10], edi */
    edi = (uint32_t)MEM16(0x150BEA90); /* 0x15094577: movzx edi, word ptr [0x150bea90] */
    MEM32(ebp + (-0x14)) = edi; /* 0x1509457E: mov dword ptr [ebp - 0x14], edi */
    edi = (uint32_t)MEM16(0x150BEA92); /* 0x15094581: movzx edi, word ptr [0x150bea92] */
    MEM32(ebp + (-0x18)) = edi; /* 0x15094588: mov dword ptr [ebp - 0x18], edi */
    edi = MEM32(ebp + 0x8); /* 0x1509458B: mov edi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150945A4; /* 0x1509458E: jne 0x150945a4 */
L_15094590:
    edx = (uint32_t)MEM16(0x150BEA8A); /* 0x15094590: movzx edx, word ptr [0x150bea8a] */
    eax = ebx; /* 0x15094597: mov eax, ebx */
    esi = (uint32_t)MEM16(0x150BEA88); /* 0x15094599: movzx esi, word ptr [0x150bea88] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150945A0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150945B1; /* 0x150945A2: jmp 0x150945b1 */
L_150945A4:
    ebx = (uint32_t)MEM16(0x150BEA8A); /* 0x150945A4: movzx ebx, word ptr [0x150bea8a] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150945AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150945AD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150945AF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_150945B1:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x150945B1: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x150945B4: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x150945B7: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x150945BA: push dword ptr [ebp - 0xc] */
    PUSH32(esp, ebx); /* 0x150945BD: push ebx */
    PUSH32(esp, esi); /* 0x150945BE: push esi */
    PUSH32(esp, edx); /* 0x150945BF: push edx */
    PUSH32(esp, ecx); /* 0x150945C0: push ecx */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x150945C1: push dword ptr [edi + 0x14] */
    PUSH32(esp, eax); /* 0x150945C4: push eax */
    PUSH32(esp, 0); /* 0x150945C5: push 0 */
    RECOMP_CALL(sub_15094A97); /* 0x150945C7: call 0x15094a97 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x150945CC: add esp, 0x2c */
    _flag_k = FK_ADD;
    goto L_15094624; /* 0x150945CF: jmp 0x15094624 */
L_150945D1:
    PUSH32(esp, ebx); /* 0x150945D1: push ebx */
    PUSH32(esp, ebx); /* 0x150945D2: push ebx */
    PUSH32(esp, ebx); /* 0x150945D3: push ebx */
    PUSH32(esp, 2); /* 0x150945D4: push 2 */
    PUSH32(esp, ebx); /* 0x150945D6: push ebx */
    PUSH32(esp, ebx); /* 0x150945D7: push ebx */
    PUSH32(esp, 0x6Bu); /* 0x150945D8: push 0x6b */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150945DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x150945DC: pop ebx */
    /* cmp esi, ebx */ /* 0x150945DD: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x150945DF: setge al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150945E2: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x150945E3: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150945E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x150945E6: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x150945E8: setl al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x150945EB: add eax, 3 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x150945EE: push eax */
    PUSH32(esp, esi); /* 0x150945EF: push esi */
    PUSH32(esp, ecx); /* 0x150945F0: push ecx */
    PUSH32(esp, ecx); /* 0x150945F1: push ecx */
    RECOMP_CALL(sub_15094A97); /* 0x150945F2: call 0x15094a97 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150945F7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x150945F9: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x150945FB: push ecx */
    PUSH32(esp, ecx); /* 0x150945FC: push ecx */
    PUSH32(esp, ecx); /* 0x150945FD: push ecx */
    PUSH32(esp, 2); /* 0x150945FE: push 2 */
    PUSH32(esp, ecx); /* 0x15094600: push ecx */
    PUSH32(esp, ecx); /* 0x15094601: push ecx */
    PUSH32(esp, 5); /* 0x15094602: push 5 */
    eax = POP32_VAL(esp); /* 0x15094604: pop eax */
    PUSH32(esp, 1); /* 0x15094605: push 1 */
    edx = POP32_VAL(esp); /* 0x15094607: pop edx */
    if (CMP_GE(_flag_a, _flag_b)) { eax = edx; } /* 0x15094608: cmovge eax, edx */
    PUSH32(esp, eax); /* 0x1509460B: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1509460C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x1509460E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_GE(_flag_a, _flag_b)) ? 1 : 0); /* 0x15094610: setge al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xAu; /* 0x15094613: add eax, 0xa */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15094616: push eax */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x15094617: push dword ptr [edi + 0x14] */
    PUSH32(esp, edx); /* 0x1509461A: push edx */
    PUSH32(esp, ecx); /* 0x1509461B: push ecx */
    RECOMP_CALL(sub_15094A97); /* 0x1509461C: call 0x15094a97 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x58u; /* 0x15094621: add esp, 0x58 */
    _flag_k = FK_ADD;
L_15094624:
    edx = MEM32(0x150BD72C); /* 0x15094624: mov edx, dword ptr [0x150bd72c] */
    eax = MEM32(0x150BD738); /* 0x1509462A: mov eax, dword ptr [0x150bd738] */
    ecx = MEM32(edi + 0x1C); /* 0x1509462F: mov ecx, dword ptr [edi + 0x1c] */
    esi = POP32_VAL(esp); /* 0x15094632: pop esi */
    /* cmp edx, eax */ /* 0x15094633: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15094649; /* 0x15094635: jge 0x15094649 */
L_15094637:
    /* cmp ecx, edx */ /* 0x15094637: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15094677; /* 0x15094639: jl 0x15094677 */
L_1509463B:
    /* cmp ecx, eax */ /* 0x1509463B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15094677; /* 0x1509463D: jg 0x15094677 */
L_1509463F:
    /* cmp ecx, edx */ /* 0x1509463F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15094659; /* 0x15094641: jle 0x15094659 */
L_15094643:
    /* cmp ecx, eax */ /* 0x15094643: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15094685; /* 0x15094645: jl 0x15094685 */
L_15094647:
    goto L_15094659; /* 0x15094647: jmp 0x15094659 */
L_15094649:
    /* cmp ecx, eax */ /* 0x15094649: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15094685; /* 0x1509464B: jl 0x15094685 */
L_1509464D:
    /* cmp ecx, edx */ /* 0x1509464D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15094685; /* 0x1509464F: jg 0x15094685 */
L_15094651:
    /* cmp ecx, eax */ /* 0x15094651: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_15094659; /* 0x15094653: jle 0x15094659 */
L_15094655:
    /* cmp ecx, edx */ /* 0x15094655: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15094677; /* 0x15094657: jl 0x15094677 */
L_15094659:
    eax = (uint32_t)((int32_t)MEM32(edi + 0x8) * (int32_t)0x3Cu); /* 0x15094659: imul eax, dword ptr [edi + 8], 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0x4); /* 0x1509465D: add eax, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x15094660: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x15094663: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8u); /* 0x15094665: imul eax, eax, 0x3e8 */
    /* cmp ecx, edx */ /* 0x1509466B: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1509467D; /* 0x1509466D: jne 0x1509467d */
L_1509466F:
    /* cmp eax, MEM32(0x150BD730) */ /* 0x1509466F: cmp eax, dword ptr [0x150bd730] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BD730));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_15094685; /* 0x15094675: jge 0x15094685 */
L_15094677:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15094677: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15094679:
    edi = POP32_VAL(esp); /* 0x15094679: pop edi */
    ebx = POP32_VAL(esp); /* 0x1509467A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1509467B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1509467C: ret  */
L_1509467D:
    /* cmp eax, MEM32(0x150BD73C) */ /* 0x1509467D: cmp eax, dword ptr [0x150bd73c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BD73C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_15094677; /* 0x15094683: jge 0x15094677 */
L_15094685:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15094685: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15094687: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15094679; /* 0x15094688: jmp 0x15094679 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15094690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15094690u);

L_15094690:
    PUSH32(esp, 8); /* 0x15094690: push 8 */
    PUSH32(esp, 0x150B1588u); /* 0x15094692: push 0x150b1588 */
    RECOMP_CALL(sub_1505E988); /* 0x15094697: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 6); /* 0x1509469C: push 6 */
    RECOMP_CALL(sub_15068D80); /* 0x1509469E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150946A3: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x150946A4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_150946D8); /* 0x150946A8: call 0x150946d8 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150946AD: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150946C9); /* 0x150946B4: call 0x150946c9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x150946B9: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150946BC: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150946C3: pop ecx */
    edi = POP32_VAL(esp); /* 0x150946C4: pop edi */
    esi = POP32_VAL(esp); /* 0x150946C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x150946C6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150946C7: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150946C8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150946C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150946C9u);

L_150946C9:
    PUSH32(esp, 6); /* 0x150946C9: push 6 */
    RECOMP_CALL(sub_15068F50); /* 0x150946CB: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150946D0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150946D1: ret  */
    RECOMP_REGS_OUT();
}
