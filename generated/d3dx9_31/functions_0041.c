#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171AC730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC730u);

L_171AC730:
    edi = edi; /* 0x171AC730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC732: push ebp */
    ebp = esp; /* 0x171AC733: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171AC735: push ebx */
    PUSH32(esp, esi); /* 0x171AC736: push esi */
    PUSH32(esp, edi); /* 0x171AC737: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171AC738: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x171AC73B: mov ebx, ecx */
    PUSH32(esp, 4); /* 0x171AC73D: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AC73F: pop ecx */
    esi = ebx + 0x10; /* 0x171AC740: lea esi, [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC743: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AC745: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171AC75B; /* 0x171AC747: jne 0x171ac75b */
L_171AC749:
    ecx = MEM32(ebp + 0xC); /* 0x171AC749: mov ecx, dword ptr [ebp + 0xc] */
    eax = ebx + (-0x4); /* 0x171AC74C: lea eax, [ebx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171AC74F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171AC751: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x171AC753: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x171AC755: mov dword ptr [ecx], eax */
L_171AC757:
    SET_LO8(eax, 1); /* 0x171AC757: mov al, 1 */
    goto L_171AC77F; /* 0x171AC759: jmp 0x171ac77f */
L_171AC75B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AC75B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x34), esi */ /* 0x171AC75D: cmp dword ptr [ebx + 0x34], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x34)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC77D; /* 0x171AC760: jbe 0x171ac77d */
L_171AC762:
    eax = MEM32(ebx + 0x40); /* 0x171AC762: mov eax, dword ptr [ebx + 0x40] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AC765: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x171AC768: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AC76B: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171AC76E: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171AC770: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171AC773: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC757; /* 0x171AC775: jne 0x171ac757 */
L_171AC777:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AC777: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x34) */ /* 0x171AC778: cmp esi, dword ptr [ebx + 0x34] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AC762; /* 0x171AC77B: jb 0x171ac762 */
L_171AC77D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171AC77D: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171AC77F:
    edi = POP32_VAL(esp); /* 0x171AC77F: pop edi */
    esi = POP32_VAL(esp); /* 0x171AC780: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AC781: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AC782: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AC783: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AC78B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC78Bu);

L_171AC78B:
    edi = edi; /* 0x171AC78B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC78D: push ebp */
    ebp = esp; /* 0x171AC78E: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171AC790: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171AC791: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171AC794: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC7B6; /* 0x171AC796: je 0x171ac7b6 */
L_171AC798:
    eax = MEM32(ebp + 0x8); /* 0x171AC798: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x171AC79B: mov eax, dword ptr [eax + 0x10] */
    /* test eax, eax */ /* 0x171AC79E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC7AF; /* 0x171AC7A0: je 0x171ac7af */
L_171AC7A2:
    PUSH32(esp, esi); /* 0x171AC7A2: push esi */
    esi = eax + 0x8; /* 0x171AC7A3: lea esi, [eax + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AC7A6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AC7A7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AC7A8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AC7A9: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC7AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AC7AC: pop esi */
    goto L_171AC7BB; /* 0x171AC7AD: jmp 0x171ac7bb */
L_171AC7AF:
    eax = 0x88760384u; /* 0x171AC7AF: mov eax, 0x88760384 */
    goto L_171AC7BB; /* 0x171AC7B4: jmp 0x171ac7bb */
L_171AC7B6:
    eax = 0x88760385u; /* 0x171AC7B6: mov eax, 0x88760385 */
L_171AC7BB:
    edi = POP32_VAL(esp); /* 0x171AC7BB: pop edi */
    ebp = POP32_VAL(esp); /* 0x171AC7BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AC7BD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AC7C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AC7C5u);

L_171AC7C5:
    edi = edi; /* 0x171AC7C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AC7C7: push ebp */
    ebp = esp; /* 0x171AC7C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB8u; /* 0x171AC7CA: sub esp, 0xb8 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AC7D0: push ebx */
    PUSH32(esp, esi); /* 0x171AC7D1: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171AC7D2: mov esi, dword ptr [ebp + 8] */
    /* test MEM8(esi + 0x48), 0x80u */ /* 0x171AC7D5: test byte ptr [esi + 0x48], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi + 0x48)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x171AC7D9: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AC7E8; /* 0x171AC7DA: je 0x171ac7e8 */
L_171AC7DC:
    MEM32(ebp + 0x8) = 0x88760384u; /* 0x171AC7DC: mov dword ptr [ebp + 8], 0x88760384 */
    goto L_171ACA03; /* 0x171AC7E3: jmp 0x171aca03 */
L_171AC7E8:
    edi = MEM32(0x17001084); /* 0x171AC7E8: mov edi, dword ptr [0x17001084] */
    eax = ebp + (-0x4); /* 0x171AC7EE: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AC7F1: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AC7F2: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(edi); /* 0x171AC7F5: call edi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x171AC7F7: mov dword ptr [ebp - 8], eax */
    MEM32(esi + 0x40) = eax; /* 0x171AC7FA: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x171AC7FD: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x44) = eax; /* 0x171AC800: mov dword ptr [esi + 0x44], eax */
    eax = ebp + (-0x24); /* 0x171AC803: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171AC806: push eax */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AC807: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(edi); /* 0x171AC80A: call edi */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x28)) = eax; /* 0x171AC80C: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0xB8); /* 0x171AC80F: lea eax, [ebp - 0xb8] */
    PUSH32(esp, eax); /* 0x171AC815: push eax */
    MEM32(ebp + (-0xB8)) = 0x40u; /* 0x171AC816: mov dword ptr [ebp - 0xb8], 0x40 */
    RECOMP_CALL(sub_171AC314); /* 0x171AC820: call 0x171ac314 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x54); /* 0x171AC825: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x171AC828: push eax */
    RECOMP_ICALL(MEM32(0x1700110C)); /* 0x171AC829: call dword ptr [0x1700110c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xA8)); /* 0x171AC82F: mov eax, dword ptr [ebp - 0xa8] */
    ecx = MEM32(ebp + (-0xA4)); /* 0x171AC835: mov ecx, dword ptr [ebp - 0xa4] */
    if (1) _cf = (((eax) >> 2) & 1u); /* 0x171AC83B: shrd eax, ecx, 3 */
    if (1) { _flag_a = recomp_flags_pack(((1) ? (((eax) >> (3u)) | ((uint32_t)(ecx) << (32 - (3u)))) : (eax)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = ((1) ? (((eax) >> (3u)) | ((uint32_t)(ecx) << (32 - (3u)))) : (eax));
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x171AC83F: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x171AC83F: shr ecx, 3 */
    PUSH32(esp, 0); /* 0x171AC842: push 0 */
    MEM32(ebp + (-0xA8)) = eax; /* 0x171AC844: mov dword ptr [ebp - 0xa8], eax */
    MEM32(ebp + (-0xA4)) = ecx; /* 0x171AC84A: mov dword ptr [ebp - 0xa4], ecx */
    edi = POP32_VAL(esp); /* 0x171AC850: pop edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171AC858; /* 0x171AC851: jne 0x171ac858 */
L_171AC853:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171AC853: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC867; /* 0x171AC856: jbe 0x171ac867 */
L_171AC858:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171AC858: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xA8)) = eax; /* 0x171AC85B: mov dword ptr [ebp - 0xa8], eax */
    MEM32(ebp + (-0xA4)) = edi; /* 0x171AC861: mov dword ptr [ebp - 0xa4], edi */
L_171AC867:
    ecx = MEM32(ebp + (-0x24)); /* 0x171AC867: mov ecx, dword ptr [ebp - 0x24] */
    /* cmp ecx, edi */ /* 0x171AC86A: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171AC878; /* 0x171AC86C: jg 0x171ac878 */
L_171AC86E:
    if (CMP_L(_flag_a, _flag_b)) goto L_171AC875; /* 0x171AC86E: jl 0x171ac875 */
L_171AC870:
    /* cmp MEM32(ebp + (-0x28)), eax */ /* 0x171AC870: cmp dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AC878; /* 0x171AC873: jae 0x171ac878 */
L_171AC875:
    eax = MEM32(ebp + (-0x28)); /* 0x171AC875: mov eax, dword ptr [ebp - 0x28] */
L_171AC878:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AC878: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x50)); /* 0x171AC87A: div dword ptr [ebp - 0x50] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 4); /* 0x171AC87D: push 4 */
    PUSH32(esp, 0x1000u); /* 0x171AC87F: push 0x1000 */
    ebx = eax; /* 0x171AC884: mov ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171AC886: inc ebx */
    _flag_k = FK_INC;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x50))); /* 0x171AC887: imul ebx, dword ptr [ebp - 0x50] */
    PUSH32(esp, ebx); /* 0x171AC88B: push ebx */
    PUSH32(esp, edi); /* 0x171AC88C: push edi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171AC88D: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_ICALL(MEM32(0x17001110)); /* 0x171AC890: call dword ptr [0x17001110] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171AC896: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x171AC898: mov dword ptr [ebp - 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AC8D2; /* 0x171AC89B: jne 0x171ac8d2 */
L_171AC89D:
    goto L_171AC8A2; /* 0x171AC89D: jmp 0x171ac8a2 */
L_171AC89F:
    ebx = MEM32(ebp + (-0x10)); /* 0x171AC89F: mov ebx, dword ptr [ebp - 0x10] */
L_171AC8A2:
    /* cmp ebx, MEM32(ebp + (-0x50)) */ /* 0x171AC8A2: cmp ebx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AC9FC; /* 0x171AC8A5: je 0x171ac9fc */
L_171AC8AB:
    eax = ebx; /* 0x171AC8AB: mov eax, ebx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x171AC8AD: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x171AC8AD: shr eax, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AC8AF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x50)); /* 0x171AC8B1: div dword ptr [ebp - 0x50] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 4); /* 0x171AC8B4: push 4 */
    PUSH32(esp, 0x1000u); /* 0x171AC8B6: push 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AC8BB: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x50))); /* 0x171AC8BC: imul eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x171AC8C0: push eax */
    PUSH32(esp, edi); /* 0x171AC8C1: push edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x171AC8C2: mov dword ptr [ebp - 0x10], eax */
    RECOMP_ICALL(MEM32(0x17001110)); /* 0x171AC8C5: call dword ptr [0x17001110] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171AC8CB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x171AC8CD: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AC89F; /* 0x171AC8D0: je 0x171ac89f */
L_171AC8D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AC8D2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x20), edi */ /* 0x171AC8D4: cmp dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC8F6; /* 0x171AC8D7: jbe 0x171ac8f6 */
L_171AC8D9:
    eax = MEM32(esi + 0x2C); /* 0x171AC8D9: mov eax, dword ptr [esi + 0x2c] */
    ecx = MEM32(eax + ebx * 4); /* 0x171AC8DC: mov ecx, dword ptr [eax + ebx*4] */
    eax = MEM32(ecx); /* 0x171AC8DF: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x171AC8E1: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AC8E2: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171AC8E5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171AC8E7: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171ACA3D; /* 0x171AC8EA: jl 0x171aca3d */
L_171AC8F0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171AC8F0: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0x20) */ /* 0x171AC8F1: cmp ebx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AC8D9; /* 0x171AC8F4: jb 0x171ac8d9 */
L_171AC8F6:
    ebx = MEM32(0x170010E4); /* 0x171AC8F6: mov ebx, dword ptr [0x170010e4] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x30)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x30)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) | 0xFFFFFFFFu; /* 0x171AC8FC: or dword ptr [ebp - 0x30], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) | 0xFFFFFFFFu; /* 0x171AC900: or dword ptr [ebp - 0x2c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171AC904: push edi */
    eax = ebp + (-0x18); /* 0x171AC905: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171AC908: push eax */
    PUSH32(esp, 8); /* 0x171AC909: push 8 */
    eax = ebp + (-0x30); /* 0x171AC90B: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x171AC90E: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AC90F: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AC912: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC914: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC935; /* 0x171AC916: jne 0x171ac935 */
L_171AC918:
    PUSH32(esp, edi); /* 0x171AC918: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC919: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AC91C: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AC91F: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC922: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AC927: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AC92A: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    goto L_171AC9ED; /* 0x171AC930: jmp 0x171ac9ed */
L_171AC935:
    /* cmp MEM32(esi + 0x20), edi */ /* 0x171AC935: cmp dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = edi; /* 0x171AC938: mov dword ptr [ebp - 0x14], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AC963; /* 0x171AC93B: jbe 0x171ac963 */
L_171AC93D:
    eax = MEM32(esi + 0x2C); /* 0x171AC93D: mov eax, dword ptr [esi + 0x2c] */
    ecx = MEM32(ebp + (-0x14)); /* 0x171AC940: mov ecx, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax + ecx * 4); /* 0x171AC943: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx); /* 0x171AC946: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171AC948: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AC94A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171AC94D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171AC94F: mov dword ptr [ebp + 8], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_171ACA3D; /* 0x171AC952: jl 0x171aca3d */
L_171AC958:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x171AC958: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x14)); /* 0x171AC95B: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(esi + 0x20) */ /* 0x171AC95E: cmp eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AC93D; /* 0x171AC961: jb 0x171ac93d */
L_171AC963:
    eax = ebp + (-0x1C); /* 0x171AC963: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171AC966: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AC967: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171AC96A: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x171AC970: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x171AC973: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) - eax; /* 0x171AC976: sub dword ptr [ebp - 0x20], eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x171AC979: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x171AC97C: push edi */
    { uint32_t _sa = MEM32(ebp + (-0x1C)), _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171AC97D: sbb dword ptr [ebp - 0x1c], eax */
      MEM32(ebp + (-0x1C)) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AC980: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x171AC982: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC983: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171AC985: push eax */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AC986: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC989: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
L_171AC98E:
    PUSH32(esp, edi); /* 0x171AC98E: push edi */
    eax = ebp + 0x8; /* 0x171AC98F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171AC992: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171AC993: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AC996: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AC999: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x170010F4)); /* 0x171AC99C: call dword ptr [0x170010f4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171AC9A2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACB84; /* 0x171AC9A4: je 0x171acb84 */
L_171AC9AA:
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x171AC9AA: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACA66; /* 0x171AC9AD: je 0x171aca66 */
L_171AC9B3:
    PUSH32(esp, edi); /* 0x171AC9B3: push edi */
    eax = ebp + (-0x18); /* 0x171AC9B4: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171AC9B7: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AC9B8: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AC9BB: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AC9BE: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AC9C1: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AC9C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AC98E; /* 0x171AC9C5: jne 0x171ac98e */
L_171AC9C7:
    PUSH32(esp, edi); /* 0x171AC9C7: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AC9C8: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AC9CB: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AC9CE: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC9D1: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AC9D6: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AC9D9: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171AC9DF: push 2 */
    PUSH32(esp, edi); /* 0x171AC9E1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AC9E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171AC9E4: push eax */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AC9E5: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AC9E8: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
L_171AC9ED:
    PUSH32(esp, 0x8000u); /* 0x171AC9ED: push 0x8000 */
    PUSH32(esp, edi); /* 0x171AC9F2: push edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AC9F3: push dword ptr [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x17001114)); /* 0x171AC9F6: call dword ptr [0x17001114] */
    RECOMP_FLAGS_IN();
L_171AC9FC:
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x171AC9FC: mov dword ptr [ebp + 8], 0x8007000e */
L_171ACA03:
    eax = MEM32(esi + 0x30); /* 0x171ACA03: mov eax, dword ptr [esi + 0x30] */
    edi = MEM32(0x170010F8); /* 0x171ACA06: mov edi, dword ptr [0x170010f8] */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x171ACA0C: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171ACA0F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACA19; /* 0x171ACA11: je 0x171aca19 */
L_171ACA13:
    PUSH32(esp, eax); /* 0x171ACA13: push eax */
    RECOMP_ICALL(edi); /* 0x171ACA14: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x30) = ebx; /* 0x171ACA16: mov dword ptr [esi + 0x30], ebx */
L_171ACA19:
    eax = MEM32(esi + 0x38); /* 0x171ACA19: mov eax, dword ptr [esi + 0x38] */
    /* cmp eax, ebx */ /* 0x171ACA1C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACA26; /* 0x171ACA1E: je 0x171aca26 */
L_171ACA20:
    PUSH32(esp, eax); /* 0x171ACA20: push eax */
    RECOMP_ICALL(edi); /* 0x171ACA21: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x38) = ebx; /* 0x171ACA23: mov dword ptr [esi + 0x38], ebx */
L_171ACA26:
    eax = MEM32(esi + 0x34); /* 0x171ACA26: mov eax, dword ptr [esi + 0x34] */
    /* cmp eax, ebx */ /* 0x171ACA29: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACA33; /* 0x171ACA2B: je 0x171aca33 */
L_171ACA2D:
    PUSH32(esp, eax); /* 0x171ACA2D: push eax */
    RECOMP_ICALL(edi); /* 0x171ACA2E: call edi */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x34) = ebx; /* 0x171ACA30: mov dword ptr [esi + 0x34], ebx */
L_171ACA33:
    eax = MEM32(ebp + 0x8); /* 0x171ACA33: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x171ACA36: pop edi */
    esi = POP32_VAL(esp); /* 0x171ACA37: pop esi */
    ebx = POP32_VAL(esp); /* 0x171ACA38: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171ACA39: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ACA3A: ret 4 */
L_171ACA3D:
    PUSH32(esp, edi); /* 0x171ACA3D: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171ACA3E: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171ACA41: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACA44: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACA47: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACA4C: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171ACA4F: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8000u); /* 0x171ACA55: push 0x8000 */
    PUSH32(esp, edi); /* 0x171ACA5A: push edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171ACA5B: push dword ptr [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x17001114)); /* 0x171ACA5E: call dword ptr [0x17001114] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171ACA03; /* 0x171ACA64: jmp 0x171aca03 */
L_171ACA66:
    PUSH32(esp, 0x8000u); /* 0x171ACA66: push 0x8000 */
    PUSH32(esp, edi); /* 0x171ACA6B: push edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171ACA6C: push dword ptr [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x17001114)); /* 0x171ACA6F: call dword ptr [0x17001114] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x171ACA75: push 0x10 */
    eax = POP32_VAL(esp); /* 0x171ACA77: pop eax */
    PUSH32(esp, edi); /* 0x171ACA78: push edi */
    PUSH32(esp, edi); /* 0x171ACA79: push edi */
    PUSH32(esp, eax); /* 0x171ACA7A: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACA7B: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACA7E: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171ACA83: push edi */
    eax = ebp + (-0x18); /* 0x171ACA84: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171ACA87: push eax */
    PUSH32(esp, 8); /* 0x171ACA88: push 8 */
    eax = esi + 0x40; /* 0x171ACA8A: lea eax, [esi + 0x40] */
    PUSH32(esp, eax); /* 0x171ACA8D: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACA8E: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171ACA91: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACA93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACB60; /* 0x171ACA95: je 0x171acb60 */
L_171ACA9B:
    PUSH32(esp, edi); /* 0x171ACA9B: push edi */
    eax = ebp + (-0x18); /* 0x171ACA9C: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171ACA9F: push eax */
    PUSH32(esp, 8); /* 0x171ACAA0: push 8 */
    eax = ebp + (-0x20); /* 0x171ACAA2: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x171ACAA5: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACAA6: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171ACAA9: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACAAB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACB60; /* 0x171ACAAD: je 0x171acb60 */
L_171ACAB3:
    /* test MEM8(esi + 0x48), 2 */ /* 0x171ACAB3: test byte ptr [esi + 0x48], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x48)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACB54; /* 0x171ACAB7: je 0x171acb54 */
L_171ACABD:
    ecx = ebp + (-0x78); /* 0x171ACABD: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_171A9D9A); /* 0x171ACAC0: call 0x171a9d9a */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x78); /* 0x171ACAC5: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_171A9E4B); /* 0x171ACAC8: call 0x171a9e4b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACACD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171ACACF: push edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ACAF2; /* 0x171ACAD0: jne 0x171acaf2 */
L_171ACAD2:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171ACAD2: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171ACAD5: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACAD8: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACADB: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACAE0: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171ACAE3: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = 0x8007000Eu; /* 0x171ACAE9: mov dword ptr [ebp + 8], 0x8007000e */
    goto L_171ACB3F; /* 0x171ACAF0: jmp 0x171acb3f */
L_171ACAF2:
    PUSH32(esp, edi); /* 0x171ACAF2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACAF3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171ACAF5: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACAF6: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACAF9: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x171ACAFE: push dword ptr [esi + 0x38] */
    ecx = ebp + (-0x78); /* 0x171ACB01: lea ecx, [ebp - 0x78] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACB04: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171A9F08); /* 0x171ACB07: call 0x171a9f08 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171ACB0C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171ACB0E: mov dword ptr [ebp + 8], eax */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171ACB4C; /* 0x171ACB11: jge 0x171acb4c */
L_171ACB13:
    PUSH32(esp, edi); /* 0x171ACB13: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171ACB14: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171ACB17: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACB1A: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACB1D: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACB22: push dword ptr [esi + 0x30] */
    ebx = MEM32(0x17001140); /* 0x171ACB25: mov ebx, dword ptr [0x17001140] */
    RECOMP_ICALL(ebx); /* 0x171ACB2B: call ebx */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171ACB2D: push edi */
    PUSH32(esp, edi); /* 0x171ACB2E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACB2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171ACB31: push eax */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x171ACB32: push dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACB35: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x171ACB3A: push dword ptr [esi + 0x38] */
    RECOMP_ICALL(ebx); /* 0x171ACB3D: call ebx */
    RECOMP_FLAGS_IN();
L_171ACB3F:
    ecx = ebp + (-0x78); /* 0x171ACB3F: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_171A9DBE); /* 0x171ACB42: call 0x171a9dbe */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171ACA03; /* 0x171ACB47: jmp 0x171aca03 */
L_171ACB4C:
    ecx = ebp + (-0x78); /* 0x171ACB4C: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_171A9DBE); /* 0x171ACB4F: call 0x171a9dbe */
    RECOMP_FLAGS_IN();
L_171ACB54:
    _flag_a = (uint32_t)((MEM8(esi + 0x48) | 0x80u)) << 24; _flag_b = (uint32_t)((MEM8(esi + 0x48) | 0x80u)) << 24;
    MEM8(esi + 0x48) = (uint8_t)(MEM8(esi + 0x48) | 0x80u); /* 0x171ACB54: or byte ptr [esi + 0x48], 0x80 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + 0x8) = edi; /* 0x171ACB58: mov dword ptr [ebp + 8], edi */
    RECOMP_BACKEDGE();
    goto L_171ACA03; /* 0x171ACB5B: jmp 0x171aca03 */
L_171ACB60:
    PUSH32(esp, edi); /* 0x171ACB60: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171ACB61: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171ACB64: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACB67: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACB6A: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACB6F: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171ACB72: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = 0x8876038Fu; /* 0x171ACB78: mov dword ptr [ebp + 8], 0x8876038f */
    RECOMP_BACKEDGE();
    goto L_171ACA03; /* 0x171ACB7F: jmp 0x171aca03 */
L_171ACB84:
    PUSH32(esp, edi); /* 0x171ACB84: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171ACB85: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171ACB88: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACB8B: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACB8E: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACB93: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171ACB96: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171ACB9C: push 2 */
    PUSH32(esp, edi); /* 0x171ACB9E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACB9F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171ACBA1: push eax */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171ACBA2: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171ACBA5: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x8000u); /* 0x171ACBAA: push 0x8000 */
    PUSH32(esp, edi); /* 0x171ACBAF: push edi */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171ACBB0: push dword ptr [ebp - 0xc] */
    RECOMP_ICALL(MEM32(0x17001114)); /* 0x171ACBB3: call dword ptr [0x17001114] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = 0x88760395u; /* 0x171ACBB9: mov dword ptr [ebp + 8], 0x88760395 */
    RECOMP_BACKEDGE();
    goto L_171ACA03; /* 0x171ACBC0: jmp 0x171aca03 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171ACBCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACBCAu);

L_171ACBCA:
    edi = edi; /* 0x171ACBCA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACBCC: push ebp */
    ebp = esp; /* 0x171ACBCD: mov ebp, esp */
    eax = ecx; /* 0x171ACBCF: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171ACBD1: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0; /* 0x171ACBD4: and dword ptr [eax + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0; /* 0x171ACBD8: and dword ptr [eax + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x171ACBDC: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171ACBDF: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x17023C4Cu; /* 0x171ACBE2: mov dword ptr [eax], 0x17023c4c */
    MEM32(eax + 0x8) = ecx; /* 0x171ACBE8: mov dword ptr [eax + 8], ecx */
    ebp = POP32_VAL(esp); /* 0x171ACBEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171ACBEC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171ACBF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACBF4u);

L_171ACBF4:
    edi = edi; /* 0x171ACBF4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACBF6: push ebp */
    ebp = esp; /* 0x171ACBF7: mov ebp, esp */
    PUSH32(esp, 0x18u); /* 0x171ACBF9: push 0x18 */
    RECOMP_CALL(sub_1721B01C); /* 0x171ACBFB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACC00: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ACC02: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACC14; /* 0x171ACC03: je 0x171acc14 */
L_171ACC05:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ACC05: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x171ACC08: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ACC0A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171ACBCA); /* 0x171ACC0D: call 0x171acbca */
    RECOMP_FLAGS_IN();
    goto L_171ACC16; /* 0x171ACC12: jmp 0x171acc16 */
L_171ACC14:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACC14: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ACC16:
    /* test eax, eax */ /* 0x171ACC16: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x171ACC18: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x171ACC1B: mov dword ptr [ecx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ACC26; /* 0x171ACC1D: jne 0x171acc26 */
L_171ACC1F:
    eax = 0x8007000Eu; /* 0x171ACC1F: mov eax, 0x8007000e */
    goto L_171ACC28; /* 0x171ACC24: jmp 0x171acc28 */
L_171ACC26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACC26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ACC28:
    ebp = POP32_VAL(esp); /* 0x171ACC28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171ACC29: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171ACC31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACC31u);

L_171ACC31:
    edi = edi; /* 0x171ACC31: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACC33: push ebp */
    ebp = esp; /* 0x171ACC34: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171ACC36: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171ACC39: push ebx */
    PUSH32(esp, esi); /* 0x171ACC3A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171ACC3B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171ACC3E: push edi */
    edi = ecx; /* 0x171ACC3F: mov edi, ecx */
    ecx = esi; /* 0x171ACC41: mov ecx, esi */
    RECOMP_CALL(sub_171A93F2); /* 0x171ACC43: call 0x171a93f2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x171ACC48: mov ecx, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171ACC4A: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(esi + 0xC); /* 0x171ACC4D: mov ecx, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171ACC50: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171ACC52: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171ACC54: mov dword ptr [ebp - 8], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ACC63; /* 0x171ACC57: jne 0x171acc63 */
L_171ACC59:
    eax = 0x80004005u; /* 0x171ACC59: mov eax, 0x80004005 */
    goto L_171ACD79; /* 0x171ACC5E: jmp 0x171acd79 */
L_171ACC63:
    ecx = eax; /* 0x171ACC63: mov ecx, eax */
    MEM32(ebp + 0x8) = ebx; /* 0x171ACC65: mov dword ptr [ebp + 8], ebx */
    esi = ecx + 0x1; /* 0x171ACC68: lea esi, [ecx + 1] */
L_171ACC6B:
    SET_LO8(edx, MEM8(ecx)); /* 0x171ACC6B: mov dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171ACC6D: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO8(edx), LO8(ebx) */ /* 0x171ACC6E: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ACC6B; /* 0x171ACC70: jne 0x171acc6b */
L_171ACC72:
    PUSH32(esp, ebx); /* 0x171ACC72: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171ACC73: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(0x170010E4); /* 0x171ACC75: mov esi, dword ptr [0x170010e4] */
    edx = ebp + 0x8; /* 0x171ACC7B: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x171ACC7E: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171ACC7F: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, ecx); /* 0x171ACC80: push ecx */
    PUSH32(esp, eax); /* 0x171ACC81: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x171ACC82: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(esi); /* 0x171ACC85: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACC87: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ACC95; /* 0x171ACC89: jne 0x171acc95 */
L_171ACC8B:
    eax = 0x8007000Eu; /* 0x171ACC8B: mov eax, 0x8007000e */
    goto L_171ACD79; /* 0x171ACC90: jmp 0x171acd79 */
L_171ACC95:
    eax = MEM32(ebp + (-0x4)); /* 0x171ACC95: mov eax, dword ptr [ebp - 4] */
    ecx = eax + 0x1; /* 0x171ACC98: lea ecx, [eax + 1] */
L_171ACC9B:
    SET_LO8(edx, MEM8(eax)); /* 0x171ACC9B: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ACC9D: inc eax */
    _flag_k = FK_INC;
    /* cmp LO8(edx), LO8(ebx) */ /* 0x171ACC9E: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ACC9B; /* 0x171ACCA0: jne 0x171acc9b */
L_171ACCA2:
    PUSH32(esp, ebx); /* 0x171ACCA2: push ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171ACCA3: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + 0x8; /* 0x171ACCA5: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171ACCA8: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ACCA9: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171ACCAA: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171ACCAB: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x171ACCAE: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(esi); /* 0x171ACCB1: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACCB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACC8B; /* 0x171ACCB5: je 0x171acc8b */
L_171ACCB7:
    ecx = MEM32(ebp + (-0x8)); /* 0x171ACCB7: mov ecx, dword ptr [ebp - 8] */
    /* cmp ecx, ebx */ /* 0x171ACCBA: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACD5A; /* 0x171ACCBC: je 0x171acd5a */
L_171ACCC2:
    /* cmp MEM32(ecx), ebx */ /* 0x171ACCC2: cmp dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171ACCC4: mov dword ptr [ebp - 4], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171ACD5A; /* 0x171ACCC7: jbe 0x171acd5a */
L_171ACCCD:
    eax = MEM32(ecx + 0xC); /* 0x171ACCCD: mov eax, dword ptr [ecx + 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x171ACCD0: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(eax + edx * 4); /* 0x171ACCD3: mov eax, dword ptr [eax + edx*4] */
    /* cmp MEM32(eax), ebx */ /* 0x171ACCD6: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x171ACCD8: mov dword ptr [ebp - 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACCFE; /* 0x171ACCDB: je 0x171accfe */
L_171ACCDD:
    PUSH32(esp, ebx); /* 0x171ACCDD: push ebx */
    eax = ebp + 0x8; /* 0x171ACCDE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171ACCE1: push eax */
    PUSH32(esp, 1); /* 0x171ACCE2: push 1 */
    PUSH32(esp, 0x170239FCu); /* 0x171ACCE4: push 0x170239fc */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x171ACCE9: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(esi); /* 0x171ACCEC: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACCEE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACC8B; /* 0x171ACCF0: je 0x171acc8b */
L_171ACCF2:
    PUSH32(esp, ebx); /* 0x171ACCF2: push ebx */
    eax = ebp + 0x8; /* 0x171ACCF3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171ACCF6: push eax */
    PUSH32(esp, 4); /* 0x171ACCF7: push 4 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171ACCF9: push dword ptr [ebp - 0xc] */
    goto L_171ACD3C; /* 0x171ACCFC: jmp 0x171acd3c */
L_171ACCFE:
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x171ACCFE: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACD4C; /* 0x171ACD01: je 0x171acd4c */
L_171ACD03:
    PUSH32(esp, ebx); /* 0x171ACD03: push ebx */
    eax = ebp + 0x8; /* 0x171ACD04: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171ACD07: push eax */
    PUSH32(esp, 1); /* 0x171ACD08: push 1 */
    PUSH32(esp, 0x170239FBu); /* 0x171ACD0A: push 0x170239fb */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x171ACD0F: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(esi); /* 0x171ACD12: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACD14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACC8B; /* 0x171ACD16: je 0x171acc8b */
L_171ACD1C:
    eax = MEM32(ebp + (-0xC)); /* 0x171ACD1C: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax + 0x4); /* 0x171ACD1F: mov ecx, dword ptr [eax + 4] */
    eax = ecx; /* 0x171ACD22: mov eax, ecx */
    edx = eax + 0x1; /* 0x171ACD24: lea edx, [eax + 1] */
    MEM32(ebp + (-0xC)) = edx; /* 0x171ACD27: mov dword ptr [ebp - 0xc], edx */
L_171ACD2A:
    SET_LO8(edx, MEM8(eax)); /* 0x171ACD2A: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ACD2C: inc eax */
    _flag_k = FK_INC;
    /* cmp LO8(edx), LO8(ebx) */ /* 0x171ACD2D: cmp dl, bl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ACD2A; /* 0x171ACD2F: jne 0x171acd2a */
L_171ACD31:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xC)); /* 0x171ACD31: sub eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171ACD34: push ebx */
    edx = ebp + 0x8; /* 0x171ACD35: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x171ACD38: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ACD39: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171ACD3A: push eax */
    PUSH32(esp, ecx); /* 0x171ACD3B: push ecx */
L_171ACD3C:
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x171ACD3C: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(esi); /* 0x171ACD3F: call esi */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACD41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACC8B; /* 0x171ACD43: je 0x171acc8b */
L_171ACD49:
    ecx = MEM32(ebp + (-0x8)); /* 0x171ACD49: mov ecx, dword ptr [ebp - 8] */
L_171ACD4C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171ACD4C: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x171ACD4F: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ecx) */ /* 0x171ACD52: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171ACCCD; /* 0x171ACD54: jb 0x171acccd */
L_171ACD5A:
    PUSH32(esp, ebx); /* 0x171ACD5A: push ebx */
    eax = ebp + 0x8; /* 0x171ACD5B: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171ACD5E: push eax */
    PUSH32(esp, 1); /* 0x171ACD5F: push 1 */
    PUSH32(esp, 0x170239FAu); /* 0x171ACD61: push 0x170239fa */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x171ACD66: push dword ptr [edi + 0x30] */
    RECOMP_ICALL(esi); /* 0x171ACD69: call esi */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171ACD6B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171ACD6D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x171ACD6F: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x171ACD74: add eax, 0x8007000e */
    _flag_k = FK_ADD;
L_171ACD79:
    edi = POP32_VAL(esp); /* 0x171ACD79: pop edi */
    esi = POP32_VAL(esp); /* 0x171ACD7A: pop esi */
    ebx = POP32_VAL(esp); /* 0x171ACD7B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171ACD7C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ACD7D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171ACD85(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACD85u);

L_171ACD85:
    edi = edi; /* 0x171ACD85: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACD87: push ebp */
    ebp = esp; /* 0x171ACD88: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171ACD8A: push esi */
    PUSH32(esp, edi); /* 0x171ACD8B: push edi */
    esi = ecx; /* 0x171ACD8C: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171ACD8E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x20), edi */ /* 0x171ACD90: cmp dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171ACDB0; /* 0x171ACD93: jbe 0x171acdb0 */
L_171ACD95:
    eax = MEM32(esi + 0x2C); /* 0x171ACD95: mov eax, dword ptr [esi + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ACD98: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171ACD9B: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ACD9E: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171ACDA1: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171ACDA3: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171ACDA6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ACDB8; /* 0x171ACDA8: jne 0x171acdb8 */
L_171ACDAA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171ACDAA: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x20) */ /* 0x171ACDAB: cmp edi, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171ACD95; /* 0x171ACDAE: jb 0x171acd95 */
L_171ACDB0:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171ACDB0: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171ACDB2:
    edi = POP32_VAL(esp); /* 0x171ACDB2: pop edi */
    esi = POP32_VAL(esp); /* 0x171ACDB3: pop esi */
    ebp = POP32_VAL(esp); /* 0x171ACDB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171ACDB5: ret 8 */
L_171ACDB8:
    SET_LO8(eax, 1); /* 0x171ACDB8: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_171ACDB2; /* 0x171ACDBA: jmp 0x171acdb2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171ACDC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACDC1u);

L_171ACDC1:
    edi = edi; /* 0x171ACDC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACDC3: push ebp */
    ebp = esp; /* 0x171ACDC4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171ACDC6: push esi */
    PUSH32(esp, edi); /* 0x171ACDC7: push edi */
    esi = ecx; /* 0x171ACDC8: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171ACDCA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x20), edi */ /* 0x171ACDCC: cmp dword ptr [esi + 0x20], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171ACDEC; /* 0x171ACDCF: jbe 0x171acdec */
L_171ACDD1:
    eax = MEM32(esi + 0x2C); /* 0x171ACDD1: mov eax, dword ptr [esi + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171ACDD4: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x171ACDD7: mov ecx, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ACDDA: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171ACDDD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171ACDDF: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171ACDE2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ACDF4; /* 0x171ACDE4: jne 0x171acdf4 */
L_171ACDE6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171ACDE6: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x20) */ /* 0x171ACDE7: cmp edi, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171ACDD1; /* 0x171ACDEA: jb 0x171acdd1 */
L_171ACDEC:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171ACDEC: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171ACDEE:
    edi = POP32_VAL(esp); /* 0x171ACDEE: pop edi */
    esi = POP32_VAL(esp); /* 0x171ACDEF: pop esi */
    ebp = POP32_VAL(esp); /* 0x171ACDF0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171ACDF1: ret 8 */
L_171ACDF4:
    SET_LO8(eax, 1); /* 0x171ACDF4: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_171ACDEE; /* 0x171ACDF6: jmp 0x171acdee */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171ACDFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACDFDu);

L_171ACDFD:
    edi = edi; /* 0x171ACDFD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACDFF: push ebp */
    ebp = esp; /* 0x171ACE00: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171ACE02: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171ACE03: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0xC); /* 0x171ACE06: mov eax, dword ptr [ebx + 0xc] */
    /* test MEM8(eax + 0x48), 0x80u */ /* 0x171ACE09: test byte ptr [eax + 0x48], 0x80 */
    _flag_a = (uint32_t)(MEM8(eax + 0x48)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACE16; /* 0x171ACE0D: je 0x171ace16 */
L_171ACE0F:
    eax = 0x88760384u; /* 0x171ACE0F: mov eax, 0x88760384 */
    goto L_171ACE59; /* 0x171ACE14: jmp 0x171ace59 */
L_171ACE16:
    eax = MEM32(ebp + 0xC); /* 0x171ACE16: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171ACE19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171ACE1B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171ACE1C: mov esi, dword ptr [ebp + 0x10] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACE26; /* 0x171ACE1F: je 0x171ace26 */
L_171ACE21:
    /* cmp MEM8(eax), 0 */ /* 0x171ACE21: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ACE3A; /* 0x171ACE24: jne 0x171ace3a */
L_171ACE26:
    /* test esi, esi */ /* 0x171ACE26: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACE53; /* 0x171ACE28: je 0x171ace53 */
L_171ACE2A:
    PUSH32(esp, edi); /* 0x171ACE2A: push edi */
    PUSH32(esp, 4); /* 0x171ACE2B: push 4 */
    ecx = POP32_VAL(esp); /* 0x171ACE2D: pop ecx */
    edi = 0x1700B4A4u; /* 0x171ACE2E: mov edi, 0x1700b4a4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171ACE33: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171ACE35: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    edi = POP32_VAL(esp); /* 0x171ACE37: pop edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171ACE53; /* 0x171ACE38: je 0x171ace53 */
L_171ACE3A:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171ACE3A: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACE5E; /* 0x171ACE3E: je 0x171ace5e */
L_171ACE40:
    ecx = MEM32(ebx + 0xC); /* 0x171ACE40: mov ecx, dword ptr [ebx + 0xc] */
    eax = ebp + 0x10; /* 0x171ACE43: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171ACE46: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171ACE47: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_171ACDC1); /* 0x171ACE4A: call 0x171acdc1 */
    RECOMP_FLAGS_IN();
L_171ACE4F:
    /* test LO8(eax), LO8(eax) */ /* 0x171ACE4F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ACE6D; /* 0x171ACE51: jne 0x171ace6d */
L_171ACE53:
    eax = 0x88760385u; /* 0x171ACE53: mov eax, 0x88760385 */
L_171ACE58:
    esi = POP32_VAL(esp); /* 0x171ACE58: pop esi */
L_171ACE59:
    ebx = POP32_VAL(esp); /* 0x171ACE59: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171ACE5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171ACE5B: ret 0xc */
L_171ACE5E:
    ecx = ebp + 0x10; /* 0x171ACE5E: lea ecx, [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x171ACE61: push ecx */
    ecx = MEM32(ebx + 0xC); /* 0x171ACE62: mov ecx, dword ptr [ebx + 0xc] */
    PUSH32(esp, eax); /* 0x171ACE65: push eax */
    RECOMP_CALL(sub_171ACD85); /* 0x171ACE66: call 0x171acd85 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171ACE4F; /* 0x171ACE6B: jmp 0x171ace4f */
L_171ACE6D:
    eax = ebp + 0x8; /* 0x171ACE6D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171ACE70: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171ACE71: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x171ACE74: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_171ACBF4); /* 0x171ACE77: call 0x171acbf4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACE7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171ACE58; /* 0x171ACE7E: jl 0x171ace58 */
L_171ACE80:
    esi = MEM32(ebp + 0x8); /* 0x171ACE80: mov esi, dword ptr [ebp + 8] */
    eax = ebp + 0x8; /* 0x171ACE83: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171ACE86: push eax */
    ecx = ebx + 0x38; /* 0x171ACE87: lea ecx, [ebx + 0x38] */
    MEM32(ebp + 0x8) = esi; /* 0x171ACE8A: mov dword ptr [ebp + 8], esi */
    RECOMP_CALL(sub_171A902A); /* 0x171ACE8D: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACE92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACE9A; /* 0x171ACE94: je 0x171ace9a */
L_171ACE96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACE96: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171ACE58; /* 0x171ACE98: jmp 0x171ace58 */
L_171ACE9A:
    /* test esi, esi */ /* 0x171ACE9A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACEA6; /* 0x171ACE9C: je 0x171acea6 */
L_171ACE9E:
    eax = MEM32(esi); /* 0x171ACE9E: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171ACEA0: push 1 */
    ecx = esi; /* 0x171ACEA2: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171ACEA4: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171ACEA6:
    eax = 0x8007000Eu; /* 0x171ACEA6: mov eax, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171ACE58; /* 0x171ACEAB: jmp 0x171ace58 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171ACEB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACEB2u);

L_171ACEB2:
    edi = edi; /* 0x171ACEB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACEB4: push ebp */
    ebp = esp; /* 0x171ACEB5: mov ebp, esp */
    eax = ecx; /* 0x171ACEB7: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171ACEB9: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = 0x17023C38u; /* 0x171ACEBC: mov dword ptr [eax + 4], 0x17023c38 */
    MEM32(eax + 0xC) = ecx; /* 0x171ACEC3: mov dword ptr [eax + 0xc], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171ACEC6: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x10) = ecx; /* 0x171ACEC9: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x171ACECC: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x171ACECF: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171ACED0: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x171ACED3: push edi */
    MEM32(eax) = 0x17023C74u; /* 0x171ACED4: mov dword ptr [eax], 0x17023c74 */
    MEM32(eax + 0x4) = 0x17023C60u; /* 0x171ACEDA: mov dword ptr [eax + 4], 0x17023c60 */
    MEM32(eax + 0x8) = 1; /* 0x171ACEE1: mov dword ptr [eax + 8], 1 */
    edi = eax + 0x14; /* 0x171ACEE8: lea edi, [eax + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171ACEEB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171ACEEC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171ACEED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171ACEEE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(eax + 0x28) = ecx; /* 0x171ACEEF: mov dword ptr [eax + 0x28], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x171ACEF2: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(eax + 0x2C) = ecx; /* 0x171ACEF5: mov dword ptr [eax + 0x2c], ecx */
    ecx = MEM32(ebp + 0x20); /* 0x171ACEF8: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(eax + 0x30) = ecx; /* 0x171ACEFB: mov dword ptr [eax + 0x30], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171ACEFE: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x34) = ecx; /* 0x171ACF01: mov dword ptr [eax + 0x34], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171ACF04: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x38) = ecx; /* 0x171ACF06: mov dword ptr [eax + 0x38], ecx */
    MEM32(eax + 0x3C) = ecx; /* 0x171ACF09: mov dword ptr [eax + 0x3c], ecx */
    MEM32(eax + 0x40) = 0xAu; /* 0x171ACF0C: mov dword ptr [eax + 0x40], 0xa */
    MEM32(eax + 0x44) = ecx; /* 0x171ACF13: mov dword ptr [eax + 0x44], ecx */
    edi = POP32_VAL(esp); /* 0x171ACF16: pop edi */
    MEM32(eax + 0x48) = ecx; /* 0x171ACF17: mov dword ptr [eax + 0x48], ecx */
    MEM32(eax + 0x4C) = ecx; /* 0x171ACF1A: mov dword ptr [eax + 0x4c], ecx */
    esi = POP32_VAL(esp); /* 0x171ACF1D: pop esi */
    ebp = POP32_VAL(esp); /* 0x171ACF1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171ACF1F: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171ACF27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACF27u);

L_171ACF27:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x171ACF27: sub ecx, 4 */
    _flag_k = FK_CMP;
    goto L_171AD1AF; /* 0x171ACF2A: jmp 0x171ad1af */
L_171AD1AF:
    edi = edi; /* 0x171AD1AF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD1B1: push ebp */
    ebp = esp; /* 0x171AD1B2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AD1B4: push esi */
    esi = ecx; /* 0x171AD1B5: mov esi, ecx */
    RECOMP_CALL(sub_171AD1D5); /* 0x171AD1B7: call 0x171ad1d5 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AD1BC: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD1C9; /* 0x171AD1C0: je 0x171ad1c9 */
L_171AD1C2:
    PUSH32(esp, esi); /* 0x171AD1C2: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AD1C3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AD1C8: pop ecx */
L_171AD1C9:
    eax = esi; /* 0x171AD1C9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AD1CB: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AD1CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AD1CD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171ACF34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACF34u);

L_171ACF34:
    edi = edi; /* 0x171ACF34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACF36: push ebp */
    ebp = esp; /* 0x171ACF37: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171ACF39: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171ACF3A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x171ACF3C: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171ACF3F: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ACF78; /* 0x171ACF40: je 0x171acf78 */
L_171ACF42:
    eax = MEM32(ebp + 0xC); /* 0x171ACF42: mov eax, dword ptr [ebp + 0xc] */
    edx = eax + 0x1; /* 0x171ACF45: lea edx, [eax + 1] */
L_171ACF48:
    SET_LO8(ecx, MEM8(eax)); /* 0x171ACF48: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ACF4A: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171ACF4B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ACF48; /* 0x171ACF4D: jne 0x171acf48 */
L_171ACF4F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171ACF4F: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171ACF51: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171ACF54: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171ACF55: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ACF5A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171ACF5C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ACF5E: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACFB6; /* 0x171ACF5F: je 0x171acfb6 */
L_171ACF61:
    ecx = esi; /* 0x171ACF61: mov ecx, esi */
    esi = MEM32(ebp + 0xC); /* 0x171ACF63: mov esi, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x171ACF66: mov eax, ecx */
    PUSH32(esp, edi); /* 0x171ACF68: push edi */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171ACF69: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171ACF69: shr ecx, 2 */
    edi = ebx; /* 0x171ACF6C: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171ACF6E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171ACF70: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171ACF72: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171ACF75: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171ACF77: pop edi */
L_171ACF78:
    PUSH32(esp, 0x50u); /* 0x171ACF78: push 0x50 */
    RECOMP_CALL(sub_1721B01C); /* 0x171ACF7A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACF7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ACF81: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACFA0; /* 0x171ACF82: je 0x171acfa0 */
L_171ACF84:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x171ACF84: push dword ptr [ebp + 0x20] */
    ecx = eax; /* 0x171ACF87: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x171ACF89: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171ACF8C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171ACF8F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171ACF92: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171ACF95: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ACF96: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171ACEB2); /* 0x171ACF99: call 0x171aceb2 */
    RECOMP_FLAGS_IN();
    goto L_171ACFA2; /* 0x171ACF9E: jmp 0x171acfa2 */
L_171ACFA0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACFA0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ACFA2:
    /* test eax, eax */ /* 0x171ACFA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x24); /* 0x171ACFA4: mov ecx, dword ptr [ebp + 0x24] */
    MEM32(ecx) = eax; /* 0x171ACFA7: mov dword ptr [ecx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ACFBD; /* 0x171ACFA9: jne 0x171acfbd */
L_171ACFAB:
    /* test ebx, ebx */ /* 0x171ACFAB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ACFB6; /* 0x171ACFAD: je 0x171acfb6 */
L_171ACFAF:
    PUSH32(esp, ebx); /* 0x171ACFAF: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171ACFB0: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171ACFB5: pop ecx */
L_171ACFB6:
    eax = 0x8007000Eu; /* 0x171ACFB6: mov eax, 0x8007000e */
    goto L_171ACFBF; /* 0x171ACFBB: jmp 0x171acfbf */
L_171ACFBD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACFBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ACFBF:
    esi = POP32_VAL(esp); /* 0x171ACFBF: pop esi */
    ebx = POP32_VAL(esp); /* 0x171ACFC0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171ACFC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x171ACFC2: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_171ACFCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ACFCAu);

L_171ACFCA:
    edi = edi; /* 0x171ACFCA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ACFCC: push ebp */
    ebp = esp; /* 0x171ACFCD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171ACFCF: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171ACFD2: push ebx */
    ebx = MEM32(0x170010E4); /* 0x171ACFD3: mov ebx, dword ptr [0x170010e4] */
    PUSH32(esp, esi); /* 0x171ACFD9: push esi */
    PUSH32(esp, edi); /* 0x171ACFDA: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171ACFDB: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ACFDE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x171ACFE0: push eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x171ACFE1: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x171ACFE4: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x4); /* 0x171ACFE7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171ACFEA: push eax */
    PUSH32(esp, 0x10u); /* 0x171ACFEB: push 0x10 */
    eax = edi + 0x8; /* 0x171ACFED: lea eax, [edi + 8] */
    esi = ecx; /* 0x171ACFF0: mov esi, ecx */
    PUSH32(esp, eax); /* 0x171ACFF2: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171ACFF3: push dword ptr [esi + 0x30] */
    MEM32(ebp + (-0xC)) = esi; /* 0x171ACFF6: mov dword ptr [ebp - 0xc], esi */
    RECOMP_ICALL(ebx); /* 0x171ACFF9: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ACFFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0A6; /* 0x171ACFFD: je 0x171ad0a6 */
L_171AD003:
    ecx = MEM32(edi + 0x4); /* 0x171AD003: mov ecx, dword ptr [edi + 4] */
    eax = ecx; /* 0x171AD006: mov eax, ecx */
    edx = eax + 0x1; /* 0x171AD008: lea edx, [eax + 1] */
    MEM32(ebp + (-0x10)) = edx; /* 0x171AD00B: mov dword ptr [ebp - 0x10], edx */
L_171AD00E:
    SET_LO8(edx, MEM8(eax)); /* 0x171AD00E: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD010: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171AD011: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD00E; /* 0x171AD013: jne 0x171ad00e */
L_171AD015:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x10)); /* 0x171AD015: sub eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x171AD018: push 0 */
    edx = ebp + (-0x4); /* 0x171AD01A: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x171AD01D: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD01E: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171AD01F: push eax */
    PUSH32(esp, ecx); /* 0x171AD020: push ecx */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD021: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD024: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD026: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0A6; /* 0x171AD028: je 0x171ad0a6 */
L_171AD02A:
    edi = MEM32(edi + 0x1C); /* 0x171AD02A: mov edi, dword ptr [edi + 0x1c] */
    /* test edi, edi */ /* 0x171AD02D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD071; /* 0x171AD02F: je 0x171ad071 */
L_171AD031:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171AD031: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi), 0 */ /* 0x171AD035: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AD071; /* 0x171AD038: jbe 0x171ad071 */
L_171AD03A:
    PUSH32(esp, 0); /* 0x171AD03A: push 0 */
    eax = ebp + (-0x4); /* 0x171AD03C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AD03F: push eax */
    PUSH32(esp, 1); /* 0x171AD040: push 1 */
    PUSH32(esp, 0x170239FCu); /* 0x171AD042: push 0x170239fc */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD047: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD04A: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD04C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0A6; /* 0x171AD04E: je 0x171ad0a6 */
L_171AD050:
    eax = MEM32(edi + 0xC); /* 0x171AD050: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171AD053: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x171AD056: push dword ptr [eax + ecx*4] */
    ecx = esi; /* 0x171AD059: mov ecx, esi */
    RECOMP_CALL(sub_171ACC31); /* 0x171AD05B: call 0x171acc31 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD060: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x171AD062: mov dword ptr [ebp - 0x14], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AD0DB; /* 0x171AD065: jl 0x171ad0db */
L_171AD067:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171AD067: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x171AD06A: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(edi) */ /* 0x171AD06D: cmp eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AD03A; /* 0x171AD06F: jb 0x171ad03a */
L_171AD071:
    PUSH32(esp, 0); /* 0x171AD071: push 0 */
    eax = ebp + (-0x4); /* 0x171AD073: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AD076: push eax */
    PUSH32(esp, 1); /* 0x171AD077: push 1 */
    PUSH32(esp, 0x170239FAu); /* 0x171AD079: push 0x170239fa */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD07E: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD081: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD083: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0A6; /* 0x171AD085: je 0x171ad0a6 */
L_171AD087:
    eax = MEM32(ebp + 0x8); /* 0x171AD087: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AD08A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x24), ecx */ /* 0x171AD08C: cmp dword ptr [eax + 0x24], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD0AD; /* 0x171AD08F: jne 0x171ad0ad */
L_171AD091:
    PUSH32(esp, ecx); /* 0x171AD091: push ecx */
    eax = ebp + (-0x4); /* 0x171AD092: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AD095: push eax */
    PUSH32(esp, 1); /* 0x171AD096: push 1 */
    PUSH32(esp, 0x170239F9u); /* 0x171AD098: push 0x170239f9 */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD09D: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD0A0: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD0A2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD0D8; /* 0x171AD0A4: jne 0x171ad0d8 */
L_171AD0A6:
    eax = 0x8007000Eu; /* 0x171AD0A6: mov eax, 0x8007000e */
    goto L_171AD0DB; /* 0x171AD0AB: jmp 0x171ad0db */
L_171AD0AD:
    eax = MEM32(eax + 0x20); /* 0x171AD0AD: mov eax, dword ptr [eax + 0x20] */
    /* cmp eax, ecx */ /* 0x171AD0B0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x171AD0B2: mov dword ptr [ebp - 0x10], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD0BE; /* 0x171AD0B5: je 0x171ad0be */
L_171AD0B7:
    /* cmp MEM32(eax), ecx */ /* 0x171AD0B7: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x171AD0B9: mov dword ptr [ebp + 8], ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_171AD0E5; /* 0x171AD0BC: ja 0x171ad0e5 */
L_171AD0BE:
    PUSH32(esp, ecx); /* 0x171AD0BE: push ecx */
    eax = ebp + (-0x4); /* 0x171AD0BF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AD0C2: push eax */
    PUSH32(esp, 1); /* 0x171AD0C3: push 1 */
    PUSH32(esp, 0x170239FAu); /* 0x171AD0C5: push 0x170239fa */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD0CA: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD0CD: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD0CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x8007000Eu; /* 0x171AD0D1: mov eax, 0x8007000e */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0DB; /* 0x171AD0D6: je 0x171ad0db */
L_171AD0D8:
    eax = MEM32(ebp + (-0x14)); /* 0x171AD0D8: mov eax, dword ptr [ebp - 0x14] */
L_171AD0DB:
    edi = POP32_VAL(esp); /* 0x171AD0DB: pop edi */
    esi = POP32_VAL(esp); /* 0x171AD0DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AD0DD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD0DE: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AD0DF: ret 4 */
L_171AD0E2:
    eax = MEM32(ebp + (-0x10)); /* 0x171AD0E2: mov eax, dword ptr [ebp - 0x10] */
L_171AD0E5:
    eax = MEM32(eax + 0xC); /* 0x171AD0E5: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x171AD0E8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(eax + ecx * 4); /* 0x171AD0EB: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, 4); /* 0x171AD0EE: push 4 */
    esi = eax + 0x4; /* 0x171AD0F0: lea esi, [eax + 4] */
    ecx = POP32_VAL(esp); /* 0x171AD0F3: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x171AD0F4: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AD0F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x171AD0F9: push 0 */
    eax = ebp + (-0x4); /* 0x171AD0FB: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x18)) = esi; /* 0x171AD0FE: mov dword ptr [ebp - 0x18], esi */
    edi = 0x1700B4A4u; /* 0x171AD101: mov edi, 0x1700b4a4 */
    PUSH32(esp, eax); /* 0x171AD106: push eax */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AD107: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    esi = MEM32(ebp + (-0xC)); /* 0x171AD109: mov esi, dword ptr [ebp - 0xc] */
    PUSH32(esp, 1); /* 0x171AD10C: push 1 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AD154; /* 0x171AD10E: je 0x171ad154 */
L_171AD110:
    PUSH32(esp, 0x170239FCu); /* 0x171AD110: push 0x170239fc */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD115: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD118: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD11A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0A6; /* 0x171AD11C: je 0x171ad0a6 */
L_171AD11E:
    eax = MEM32(ebp + (-0x8)); /* 0x171AD11E: mov eax, dword ptr [ebp - 8] */
    edi = MEM32(eax); /* 0x171AD121: mov edi, dword ptr [eax] */
    eax = edi; /* 0x171AD123: mov eax, edi */
    ecx = eax + 0x1; /* 0x171AD125: lea ecx, [eax + 1] */
L_171AD128:
    SET_LO8(edx, MEM8(eax)); /* 0x171AD128: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD12A: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171AD12B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD128; /* 0x171AD12D: jne 0x171ad128 */
L_171AD12F:
    PUSH32(esp, 0); /* 0x171AD12F: push 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171AD131: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x4); /* 0x171AD133: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x171AD136: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD137: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171AD138: push eax */
    PUSH32(esp, edi); /* 0x171AD139: push edi */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD13A: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD13D: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD13F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0A6; /* 0x171AD141: je 0x171ad0a6 */
L_171AD147:
    PUSH32(esp, 0); /* 0x171AD147: push 0 */
    eax = ebp + (-0x4); /* 0x171AD149: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AD14C: push eax */
    PUSH32(esp, 0x10u); /* 0x171AD14D: push 0x10 */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171AD14F: push dword ptr [ebp - 0x18] */
    goto L_171AD182; /* 0x171AD152: jmp 0x171ad182 */
L_171AD154:
    PUSH32(esp, 0x170239FBu); /* 0x171AD154: push 0x170239fb */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD159: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD15C: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD15E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0A6; /* 0x171AD160: je 0x171ad0a6 */
L_171AD166:
    eax = MEM32(ebp + (-0x8)); /* 0x171AD166: mov eax, dword ptr [ebp - 8] */
    edi = MEM32(eax); /* 0x171AD169: mov edi, dword ptr [eax] */
    eax = edi; /* 0x171AD16B: mov eax, edi */
    ecx = eax + 0x1; /* 0x171AD16D: lea ecx, [eax + 1] */
L_171AD170:
    SET_LO8(edx, MEM8(eax)); /* 0x171AD170: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD172: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171AD173: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD170; /* 0x171AD175: jne 0x171ad170 */
L_171AD177:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171AD177: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x171AD179: push 0 */
    ecx = ebp + (-0x4); /* 0x171AD17B: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x171AD17E: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD17F: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171AD180: push eax */
    PUSH32(esp, edi); /* 0x171AD181: push edi */
L_171AD182:
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x171AD182: push dword ptr [esi + 0x30] */
    RECOMP_ICALL(ebx); /* 0x171AD185: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD187: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD0A6; /* 0x171AD189: je 0x171ad0a6 */
L_171AD18F:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171AD18F: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x171AD192: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x171AD195: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax) */ /* 0x171AD198: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AD0E2; /* 0x171AD19A: jb 0x171ad0e2 */
L_171AD1A0:
    esi = MEM32(ebp + (-0xC)); /* 0x171AD1A0: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AD1A3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171AD0BE; /* 0x171AD1A5: jmp 0x171ad0be */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AD1D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD1D5u);

L_171AD1D5:
    edi = edi; /* 0x171AD1D5: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AD1D7: push esi */
    esi = ecx; /* 0x171AD1D8: mov esi, ecx */
    eax = MEM32(esi + 0x34); /* 0x171AD1DA: mov eax, dword ptr [esi + 0x34] */
    /* test eax, eax */ /* 0x171AD1DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x17023C74u; /* 0x171AD1DF: mov dword ptr [esi], 0x17023c74 */
    MEM32(esi + 0x4) = 0x17023C60u; /* 0x171AD1E5: mov dword ptr [esi + 4], 0x17023c60 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD1F5; /* 0x171AD1EC: je 0x171ad1f5 */
L_171AD1EE:
    PUSH32(esp, eax); /* 0x171AD1EE: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171AD1EF: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AD1F4: pop ecx */
L_171AD1F5:
    ecx = esi + 0x38; /* 0x171AD1F5: lea ecx, [esi + 0x38] */
    RECOMP_CALL(sub_171A60BD); /* 0x171AD1F8: call 0x171a60bd */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = 0x17023C38u; /* 0x171AD1FD: mov dword ptr [esi + 4], 0x17023c38 */
    esi = POP32_VAL(esp); /* 0x171AD204: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AD205: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AD20B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD20Bu);

L_171AD20B:
    edi = edi; /* 0x171AD20B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD20D: push ebp */
    ebp = esp; /* 0x171AD20E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AD210: push ecx */
    PUSH32(esp, ecx); /* 0x171AD211: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171AD212: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171AD216: push ebx */
    ebx = ecx; /* 0x171AD217: mov ebx, ecx */
    edx = MEM32(ebx + 0x10); /* 0x171AD219: mov edx, dword ptr [ebx + 0x10] */
    /* test edx, edx */ /* 0x171AD21C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AD21E: push esi */
    PUSH32(esp, edi); /* 0x171AD21F: push edi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171AD220: mov dword ptr [ebp - 8], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD24A; /* 0x171AD223: jbe 0x171ad24a */
L_171AD225:
    eax = MEM32(ebx + 0x1C); /* 0x171AD225: mov eax, dword ptr [ebx + 0x1c] */
L_171AD228:
    edi = MEM32(eax); /* 0x171AD228: mov edi, dword ptr [eax] */
    esi = MEM32(ebp + 0x8); /* 0x171AD22A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x171AD22D: push 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171AD22F: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171AD232: add esi, 8 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x171AD235: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AD236: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AD238: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AD28E; /* 0x171AD23A: je 0x171ad28e */
L_171AD23C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171AD23C: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AD23F: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x171AD242: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AD228; /* 0x171AD245: jb 0x171ad228 */
L_171AD247:
    ebx = MEM32(ebp + (-0x8)); /* 0x171AD247: mov ebx, dword ptr [ebp - 8] */
L_171AD24A:
    eax = MEM32(ebp + 0x8); /* 0x171AD24A: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x1C); /* 0x171AD24D: mov esi, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AD250: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x171AD252: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD278; /* 0x171AD254: je 0x171ad278 */
L_171AD256:
    /* cmp MEM32(esi), edi */ /* 0x171AD256: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AD278; /* 0x171AD258: jbe 0x171ad278 */
L_171AD25A:
    eax = MEM32(esi + 0xC); /* 0x171AD25A: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + edi * 4); /* 0x171AD25D: mov eax, dword ptr [eax + edi*4] */
    eax = MEM32(eax + 0x8); /* 0x171AD260: mov eax, dword ptr [eax + 8] */
    /* test eax, eax */ /* 0x171AD263: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD273; /* 0x171AD265: je 0x171ad273 */
L_171AD267:
    PUSH32(esp, eax); /* 0x171AD267: push eax */
    ecx = ebx; /* 0x171AD268: mov ecx, ebx */
    RECOMP_CALL(sub_171AD20B); /* 0x171AD26A: call 0x171ad20b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD26F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AD29C; /* 0x171AD271: jl 0x171ad29c */
L_171AD273:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AD273: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x171AD274: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AD25A; /* 0x171AD276: jb 0x171ad25a */
L_171AD278:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AD278: push dword ptr [ebp + 8] */
    ecx = ebx + 0x10; /* 0x171AD27B: lea ecx, [ebx + 0x10] */
    RECOMP_CALL(sub_171A96E9); /* 0x171AD27E: call 0x171a96e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD283: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD292; /* 0x171AD285: jne 0x171ad292 */
L_171AD287:
    eax = 0x8007000Eu; /* 0x171AD287: mov eax, 0x8007000e */
    goto L_171AD29C; /* 0x171AD28C: jmp 0x171ad29c */
L_171AD28E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AD28E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AD29C; /* 0x171AD290: jmp 0x171ad29c */
L_171AD292:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AD292: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x171AD295: mov ecx, ebx */
    RECOMP_CALL(sub_171ACFCA); /* 0x171AD297: call 0x171acfca */
    RECOMP_FLAGS_IN();
L_171AD29C:
    edi = POP32_VAL(esp); /* 0x171AD29C: pop edi */
    esi = POP32_VAL(esp); /* 0x171AD29D: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AD29E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD29F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AD2A0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AD2A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD2A8u);

L_171AD2A8:
    edi = edi; /* 0x171AD2A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD2AA: push ebp */
    ebp = esp; /* 0x171AD2AB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171AD2AD: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171AD2B0: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171AD2B4: push ebx */
    edx = ecx; /* 0x171AD2B5: mov edx, ecx */
    /* cmp MEM32(edx + 0x10), 0 */ /* 0x171AD2B7: cmp dword ptr [edx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171AD2BB: push esi */
    PUSH32(esp, edi); /* 0x171AD2BC: push edi */
    MEM32(ebp + (-0xC)) = edx; /* 0x171AD2BD: mov dword ptr [ebp - 0xc], edx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AD2EB; /* 0x171AD2C0: jbe 0x171ad2eb */
L_171AD2C2:
    eax = MEM32(edx + 0x1C); /* 0x171AD2C2: mov eax, dword ptr [edx + 0x1c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171AD2C5: mov dword ptr [ebp - 4], eax */
L_171AD2C8:
    eax = MEM32(ebp + (-0x4)); /* 0x171AD2C8: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x171AD2CB: mov eax, dword ptr [eax] */
    esi = MEM32(ebp + 0x8); /* 0x171AD2CD: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x171AD2D0: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AD2D2: pop ecx */
    edi = eax + 0x8; /* 0x171AD2D3: lea edi, [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AD2D6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AD2D8: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AD338; /* 0x171AD2DA: je 0x171ad338 */
L_171AD2DC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171AD2DC: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x171AD2DF: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x171AD2E2: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x171AD2E6: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AD2C8; /* 0x171AD2E9: jb 0x171ad2c8 */
L_171AD2EB:
    ebx = MEM32(edx + 0x8); /* 0x171AD2EB: mov ebx, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171AD2EE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171AD2F2: add ebx, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebx), 0 */ /* 0x171AD2F5: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AD32C; /* 0x171AD2F8: jbe 0x171ad32c */
L_171AD2FA:
    ecx = MEM32(ebp + (-0x4)); /* 0x171AD2FA: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebx + 0xC); /* 0x171AD2FD: mov eax, dword ptr [ebx + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x171AD300: mov eax, dword ptr [eax + ecx*4] */
    esi = MEM32(ebp + 0x8); /* 0x171AD303: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x171AD306: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AD308: pop ecx */
    edi = eax + 0x8; /* 0x171AD309: lea edi, [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AD30C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AD30E: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171AD310: mov dword ptr [ebp - 8], eax */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171AD322; /* 0x171AD313: jne 0x171ad322 */
L_171AD315:
    ecx = MEM32(ebp + (-0xC)); /* 0x171AD315: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AD318: push eax */
    RECOMP_CALL(sub_171AD20B); /* 0x171AD319: call 0x171ad20b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD31E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AD33F; /* 0x171AD320: jge 0x171ad33f */
L_171AD322:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171AD322: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x171AD325: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ebx) */ /* 0x171AD328: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AD2FA; /* 0x171AD32A: jb 0x171ad2fa */
L_171AD32C:
    eax = 0x88760386u; /* 0x171AD32C: mov eax, 0x88760386 */
L_171AD331:
    edi = POP32_VAL(esp); /* 0x171AD331: pop edi */
    esi = POP32_VAL(esp); /* 0x171AD332: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AD333: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD334: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AD335: ret 8 */
L_171AD338:
    ecx = MEM32(ebp + 0xC); /* 0x171AD338: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x171AD33B: mov dword ptr [ecx], eax */
    goto L_171AD347; /* 0x171AD33D: jmp 0x171ad347 */
L_171AD33F:
    eax = MEM32(ebp + 0xC); /* 0x171AD33F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171AD342: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x171AD345: mov dword ptr [eax], ecx */
L_171AD347:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AD347: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171AD331; /* 0x171AD349: jmp 0x171ad331 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AD350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD350u);

L_171AD350:
    edi = edi; /* 0x171AD350: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD352: push ebp */
    ebp = esp; /* 0x171AD353: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171AD355: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AD358: push ebx */
    PUSH32(esp, esi); /* 0x171AD359: push esi */
    PUSH32(esp, edi); /* 0x171AD35A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171AD35B: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0xC); /* 0x171AD35E: mov ecx, dword ptr [edi + 0xc] */
    /* test MEM8(ecx + 0x48), 0x80u */ /* 0x171AD361: test byte ptr [ecx + 0x48], 0x80 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x48)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD371; /* 0x171AD365: je 0x171ad371 */
L_171AD367:
    eax = 0x88760384u; /* 0x171AD367: mov eax, 0x88760384 */
    goto L_171AD489; /* 0x171AD36C: jmp 0x171ad489 */
L_171AD371:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x171AD371: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD484; /* 0x171AD375: je 0x171ad484 */
L_171AD37B:
    eax = ebp + (-0x4); /* 0x171AD37B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AD37E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD37F: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171AD2A8); /* 0x171AD382: call 0x171ad2a8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD387: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AD489; /* 0x171AD389: jl 0x171ad489 */
L_171AD38F:
    eax = MEM32(edi + 0xC); /* 0x171AD38F: mov eax, dword ptr [edi + 0xc] */
    ebx = MEM32(eax + 0x34); /* 0x171AD392: mov ebx, dword ptr [eax + 0x34] */
    eax = ebp + (-0xC); /* 0x171AD395: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AD398: push eax */
    PUSH32(esp, ebx); /* 0x171AD399: push ebx */
    MEM32(ebp + 0xC) = ebx; /* 0x171AD39A: mov dword ptr [ebp + 0xc], ebx */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171AD39D: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x171AD3A3: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x18); /* 0x171AD3A6: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171AD3A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x171AD3AB: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD3DA; /* 0x171AD3AE: je 0x171ad3da */
L_171AD3B0:
    esi = 0x7FFFFFFFu; /* 0x171AD3B0: mov esi, 0x7fffffff */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x171AD3B5: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AD3BD; /* 0x171AD3B8: ja 0x171ad3bd */
L_171AD3BA:
    esi = MEM32(ebp + 0x8); /* 0x171AD3BA: mov esi, dword ptr [ebp + 8] */
L_171AD3BD:
    PUSH32(esp, 0); /* 0x171AD3BD: push 0 */
    eax = ebp + (-0x8); /* 0x171AD3BF: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AD3C2: push eax */
    PUSH32(esp, esi); /* 0x171AD3C3: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x171AD3C4: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x171AD3C7: push ebx */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x171AD3C8: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD3CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD421; /* 0x171AD3D0: je 0x171ad421 */
L_171AD3D2:
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + esi; /* 0x171AD3D2: add dword ptr [ebp + 0x1c], esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - esi; /* 0x171AD3D5: sub dword ptr [ebp + 8], esi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_171AD3B0; /* 0x171AD3D8: jne 0x171ad3b0 */
L_171AD3DA:
    eax = MEM32(ebp + 0x14); /* 0x171AD3DA: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x171AD3DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD3E6; /* 0x171AD3DF: jne 0x171ad3e6 */
L_171AD3E1:
    eax = 0x1700B4A4u; /* 0x171AD3E1: mov eax, 0x1700b4a4 */
L_171AD3E6:
    ecx = ebp + 0x1C; /* 0x171AD3E6: lea ecx, [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x171AD3E9: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171AD3EA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AD3ED: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171AD3F0: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AD3F3: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AD3F6: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AD3F7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171AD3FA: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_171ACF34); /* 0x171AD3FD: call 0x171acf34 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD402: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AD428; /* 0x171AD404: jge 0x171ad428 */
L_171AD406:
    esi = eax; /* 0x171AD406: mov esi, eax */
L_171AD408:
    PUSH32(esp, 0); /* 0x171AD408: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AD40A: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171AD40D: push dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x171AD410: push ebx */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AD411: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171AD416: push ebx */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AD417: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171AD41D: mov eax, esi */
    goto L_171AD489; /* 0x171AD41F: jmp 0x171ad489 */
L_171AD421:
    esi = 0x8007000Eu; /* 0x171AD421: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171AD408; /* 0x171AD426: jmp 0x171ad408 */
L_171AD428:
    esi = MEM32(ebp + 0x1C); /* 0x171AD428: mov esi, dword ptr [ebp + 0x1c] */
    eax = esi; /* 0x171AD42B: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171AD42D: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171AD42F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = esi + 0x4; /* 0x171AD431: lea ebx, [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x171AD434: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x1C) = eax; /* 0x171AD436: mov dword ptr [ebp + 0x1c], eax */
    eax = ebp + 0x1C; /* 0x171AD439: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x171AD43C: push eax */
    ecx = edi + 0x38; /* 0x171AD43D: lea ecx, [edi + 0x38] */
    RECOMP_CALL(sub_171A902A); /* 0x171AD440: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD445: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD458; /* 0x171AD447: je 0x171ad458 */
L_171AD449:
    eax = MEM32(ebp + 0x20); /* 0x171AD449: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = esi; /* 0x171AD44C: mov dword ptr [eax], esi */
    eax = MEM32(esi); /* 0x171AD44E: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171AD450: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AD451: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AD454: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AD489; /* 0x171AD456: jmp 0x171ad489 */
L_171AD458:
    PUSH32(esp, 0); /* 0x171AD458: push 0 */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AD45A: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171AD45D: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD460: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AD463: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD468: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AD46B: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x171AD471: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD47D; /* 0x171AD473: je 0x171ad47d */
L_171AD475:
    eax = MEM32(ebx); /* 0x171AD475: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x171AD477: push 1 */
    ecx = ebx; /* 0x171AD479: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171AD47B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171AD47D:
    eax = 0x8007000Eu; /* 0x171AD47D: mov eax, 0x8007000e */
    goto L_171AD489; /* 0x171AD482: jmp 0x171ad489 */
L_171AD484:
    eax = 0x88760385u; /* 0x171AD484: mov eax, 0x88760385 */
L_171AD489:
    edi = POP32_VAL(esp); /* 0x171AD489: pop edi */
    esi = POP32_VAL(esp); /* 0x171AD48A: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AD48B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD48C: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171AD48D: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171AD495(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD495u);

L_171AD495:
    edi = edi; /* 0x171AD495: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD497: push ebp */
    ebp = esp; /* 0x171AD498: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171AD49A: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AD49D: push ebx */
    PUSH32(esp, esi); /* 0x171AD49E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171AD49F: mov esi, dword ptr [ebp + 8] */
    /* test MEM8(esi + 0x48), 0x80u */ /* 0x171AD4A2: test byte ptr [esi + 0x48], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi + 0x48)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x171AD4A6: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD4B3; /* 0x171AD4A7: je 0x171ad4b3 */
L_171AD4A9:
    eax = 0x88760384u; /* 0x171AD4A9: mov eax, 0x88760384 */
    goto L_171AD5CB; /* 0x171AD4AE: jmp 0x171ad5cb */
L_171AD4B3:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x171AD4B3: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD5C6; /* 0x171AD4B7: je 0x171ad5c6 */
L_171AD4BD:
    eax = ebp + 0xC; /* 0x171AD4BD: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171AD4C0: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD4C1: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x171AD4C4: mov ecx, esi */
    RECOMP_CALL(sub_171AD2A8); /* 0x171AD4C6: call 0x171ad2a8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD4CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AD5CB; /* 0x171AD4CD: jl 0x171ad5cb */
L_171AD4D3:
    eax = ebp + (-0x8); /* 0x171AD4D3: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AD4D6: push eax */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AD4D7: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x17001084)); /* 0x171AD4DA: call dword ptr [0x17001084] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x171AD4E0: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x18); /* 0x171AD4E3: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x171AD4E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x171AD4E8: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD51A; /* 0x171AD4EB: je 0x171ad51a */
L_171AD4ED:
    ebx = 0x7FFFFFFFu; /* 0x171AD4ED: mov ebx, 0x7fffffff */
L_171AD4F2:
    edi = MEM32(ebp + 0x8); /* 0x171AD4F2: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, ebx */ /* 0x171AD4F5: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AD4FB; /* 0x171AD4F7: jbe 0x171ad4fb */
L_171AD4F9:
    edi = ebx; /* 0x171AD4F9: mov edi, ebx */
L_171AD4FB:
    PUSH32(esp, 0); /* 0x171AD4FB: push 0 */
    eax = ebp + (-0x4); /* 0x171AD4FD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AD500: push eax */
    PUSH32(esp, edi); /* 0x171AD501: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x171AD502: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AD505: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x171AD508: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD50E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD563; /* 0x171AD510: je 0x171ad563 */
L_171AD512:
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + edi; /* 0x171AD512: add dword ptr [ebp + 0x1c], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - edi; /* 0x171AD515: sub dword ptr [ebp + 8], edi */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_171AD4F2; /* 0x171AD518: jne 0x171ad4f2 */
L_171AD51A:
    eax = MEM32(ebp + 0x14); /* 0x171AD51A: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x171AD51D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD526; /* 0x171AD51F: jne 0x171ad526 */
L_171AD521:
    eax = 0x1700B4A4u; /* 0x171AD521: mov eax, 0x1700b4a4 */
L_171AD526:
    ecx = ebp + 0x1C; /* 0x171AD526: lea ecx, [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x171AD529: push ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171AD52A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AD52D: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AD530: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD533: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171AD536: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171AD537: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171AD53A: push esi */
    RECOMP_CALL(sub_171ACF34); /* 0x171AD53B: call 0x171acf34 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD540: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AD56A; /* 0x171AD542: jge 0x171ad56a */
L_171AD544:
    edi = eax; /* 0x171AD544: mov edi, eax */
L_171AD546:
    PUSH32(esp, 0); /* 0x171AD546: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AD548: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AD54B: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AD54E: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AD551: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AD556: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AD559: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171AD55F: mov eax, edi */
    goto L_171AD5CB; /* 0x171AD561: jmp 0x171ad5cb */
L_171AD563:
    edi = 0x8007000Eu; /* 0x171AD563: mov edi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_171AD546; /* 0x171AD568: jmp 0x171ad546 */
L_171AD56A:
    edi = MEM32(ebp + 0x1C); /* 0x171AD56A: mov edi, dword ptr [ebp + 0x1c] */
    eax = edi; /* 0x171AD56D: mov eax, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171AD56F: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171AD571: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebx = edi + 0x4; /* 0x171AD573: lea ebx, [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x171AD576: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x1C) = eax; /* 0x171AD578: mov dword ptr [ebp + 0x1c], eax */
    eax = ebp + 0x1C; /* 0x171AD57B: lea eax, [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x171AD57E: push eax */
    ecx = esi + 0x20; /* 0x171AD57F: lea ecx, [esi + 0x20] */
    RECOMP_CALL(sub_171A902A); /* 0x171AD582: call 0x171a902a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD587: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD59A; /* 0x171AD589: je 0x171ad59a */
L_171AD58B:
    eax = MEM32(ebp + 0x20); /* 0x171AD58B: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = edi; /* 0x171AD58E: mov dword ptr [eax], edi */
    eax = MEM32(edi); /* 0x171AD590: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171AD592: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AD593: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AD596: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AD5CB; /* 0x171AD598: jmp 0x171ad5cb */
L_171AD59A:
    PUSH32(esp, 0); /* 0x171AD59A: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AD59C: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AD59F: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AD5A2: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_171AC2EC); /* 0x171AD5A5: call 0x171ac2ec */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x171AD5AA: push dword ptr [esi + 0x34] */
    RECOMP_ICALL(MEM32(0x17001140)); /* 0x171AD5AD: call dword ptr [0x17001140] */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x171AD5B3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD5BF; /* 0x171AD5B5: je 0x171ad5bf */
L_171AD5B7:
    eax = MEM32(ebx); /* 0x171AD5B7: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x171AD5B9: push 1 */
    ecx = ebx; /* 0x171AD5BB: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171AD5BD: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171AD5BF:
    eax = 0x8007000Eu; /* 0x171AD5BF: mov eax, 0x8007000e */
    goto L_171AD5CB; /* 0x171AD5C4: jmp 0x171ad5cb */
L_171AD5C6:
    eax = 0x88760385u; /* 0x171AD5C6: mov eax, 0x88760385 */
L_171AD5CB:
    edi = POP32_VAL(esp); /* 0x171AD5CB: pop edi */
    esi = POP32_VAL(esp); /* 0x171AD5CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AD5CD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD5CE: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171AD5CF: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171AD5D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD5D7u);

L_171AD5D7:
    MEM32(0x172389F0) = 1; /* 0x171AD5D7: mov dword ptr [0x172389f0], 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AD5E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AD5E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD5E7u);

L_171AD5E7:
    edi = edi; /* 0x171AD5E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD5E9: push ebp */
    ebp = esp; /* 0x171AD5EA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AD5EC: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD5ED: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x171AD5F0: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AD5F2: push dword ptr [ebp + 8] */
    ecx = esi + 0x10; /* 0x171AD5F5: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_171A9246); /* 0x171AD5F8: call 0x171a9246 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD5FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD606; /* 0x171AD5FF: je 0x171ad606 */
L_171AD601:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AD601: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD603: inc eax */
    _flag_k = FK_INC;
    goto L_171AD617; /* 0x171AD604: jmp 0x171ad617 */
L_171AD606:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD606: push dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x171AD609: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AD60C: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171AD60F: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A9246); /* 0x171AD612: call 0x171a9246 */
    RECOMP_FLAGS_IN();
L_171AD617:
    esi = POP32_VAL(esp); /* 0x171AD617: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AD618: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AD619: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AD621(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD621u);

L_171AD621:
    edi = edi; /* 0x171AD621: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD623: push ebp */
    ebp = esp; /* 0x171AD624: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AD626: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD627: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x171AD62A: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AD62C: push dword ptr [ebp + 8] */
    ecx = esi + 0x10; /* 0x171AD62F: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_171A92A0); /* 0x171AD632: call 0x171a92a0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD637: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD640; /* 0x171AD639: je 0x171ad640 */
L_171AD63B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AD63B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD63D: inc eax */
    _flag_k = FK_INC;
    goto L_171AD651; /* 0x171AD63E: jmp 0x171ad651 */
L_171AD640:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171AD640: push dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x171AD643: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AD646: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171AD649: add ecx, 8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A92A0); /* 0x171AD64C: call 0x171a92a0 */
    RECOMP_FLAGS_IN();
L_171AD651:
    esi = POP32_VAL(esp); /* 0x171AD651: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AD652: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AD653: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AD65B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD65Bu);

L_171AD65B:
    edi = edi; /* 0x171AD65B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD65D: push ebp */
    ebp = esp; /* 0x171AD65E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AD660: push ecx */
    ecx = MEM32(ecx + 0xC); /* 0x171AD661: mov ecx, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx); /* 0x171AD664: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x1); /* 0x171AD666: lea edx, [ebp - 1] */
    PUSH32(esp, edx); /* 0x171AD669: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171AD66A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD66D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD676; /* 0x171AD66F: jne 0x171ad676 */
L_171AD671:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171AD671: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD674: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AD675: ret  */
L_171AD676:
    eax = (uint32_t)MEM8(ebp + (-0x1)); /* 0x171AD676: movzx eax, byte ptr [ebp - 1] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD67A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AD67B: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AD681(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD681u);

L_171AD681:
    edi = edi; /* 0x171AD681: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD683: push ebp */
    ebp = esp; /* 0x171AD684: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AD686: push ecx */
    ecx = MEM32(ecx + 0xC); /* 0x171AD687: mov ecx, dword ptr [ecx + 0xc] */
    eax = MEM32(ecx); /* 0x171AD68A: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x171AD68C: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x171AD68F: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171AD690: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD693: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD69C; /* 0x171AD695: jne 0x171ad69c */
L_171AD697:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171AD697: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD69A: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AD69B: ret  */
L_171AD69C:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x171AD69C: movzx eax, word ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD6A0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AD6A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AD967(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AD967u);

L_171AD967:
    edi = edi; /* 0x171AD967: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD969: push ebp */
    ebp = esp; /* 0x171AD96A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AD96C: push ecx */
    PUSH32(esp, ecx); /* 0x171AD96D: push ecx */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x171AD96E: mov al, byte ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171AD971: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AD972: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171AD974: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x171AD975: push esi */
    PUSH32(esp, edi); /* 0x171AD976: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171AD977: mov dword ptr [ebp - 4], ebx */
    MEM8(0x17250F18) = (uint8_t)(LO8(eax)); /* 0x171AD97A: mov byte ptr [0x17250f18], al */
    MEM32(0x17253488) = ebx; /* 0x171AD97F: mov dword ptr [0x17253488], ebx */
    goto L_171AD9BB; /* 0x171AD985: jmp 0x171ad9bb */
L_171AD987:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AD987: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B35C); /* 0x171AD98A: call 0x1721b35c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD98F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AD991: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD9A0; /* 0x171AD992: jne 0x171ad9a0 */
L_171AD994:
    /* cmp MEM32(ebp + 0x8), 0x5Fu */ /* 0x171AD994: cmp dword ptr [ebp + 8], 0x5f */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD9A0; /* 0x171AD998: je 0x171ad9a0 */
L_171AD99A:
    /* cmp MEM32(ebp + 0x8), 0x2Du */ /* 0x171AD99A: cmp dword ptr [ebp + 8], 0x2d */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD9CE; /* 0x171AD99E: jne 0x171ad9ce */
L_171AD9A0:
    eax = MEM32(0x17253488); /* 0x171AD9A0: mov eax, dword ptr [0x17253488] */
    /* cmp eax, 0x1FFu */ /* 0x171AD9A5: cmp eax, 0x1ff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AD9BB; /* 0x171AD9AA: jge 0x171ad9bb */
L_171AD9AC:
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x171AD9AC: mov cl, byte ptr [ebp + 8] */
    MEM8(eax + 0x17250F18) = (uint8_t)(LO8(ecx)); /* 0x171AD9AF: mov byte ptr [eax + 0x17250f18], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD9B5: inc eax */
    _flag_k = FK_INC;
    MEM32(0x17253488) = eax; /* 0x171AD9B6: mov dword ptr [0x17253488], eax */
L_171AD9BB:
    ecx = MEM32(0x17253478); /* 0x171AD9BB: mov ecx, dword ptr [0x17253478] */
    RECOMP_CALL(sub_171AD65B); /* 0x171AD9C1: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171AD9C6: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171AD9C9: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD987; /* 0x171AD9CC: jne 0x171ad987 */
L_171AD9CE:
    eax = MEM32(0x17253488); /* 0x171AD9CE: mov eax, dword ptr [0x17253488] */
    _flag_a = (uint32_t)(MEM32(0x17253488)); _flag_b = (uint32_t)(1);
    MEM32(0x17253488) = MEM32(0x17253488) + 1; /* 0x171AD9D3: inc dword ptr [0x17253488] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171AD9D9: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax + 0x17250F18) = (uint8_t)(0); /* 0x171AD9DD: mov byte ptr [eax + 0x17250f18], 0 */
    edi = 0x17238974u; /* 0x171AD9E4: mov edi, 0x17238974 */
    esi = 0x17250F18u; /* 0x171AD9E9: mov esi, 0x17250f18 */
L_171AD9EE:
    /* cmp edi, 0x172389F4u */ /* 0x171AD9EE: cmp edi, 0x172389f4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x172389F4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171ADA22; /* 0x171AD9F4: jge 0x171ada22 */
L_171AD9F6:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171AD9F6: push -1 */
    PUSH32(esp, MEM32(edi + (-0x4))); /* 0x171AD9F8: push dword ptr [edi - 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171AD9FB: push -1 */
    PUSH32(esp, esi); /* 0x171AD9FD: push esi */
    PUSH32(esp, ebx); /* 0x171AD9FE: push ebx */
    PUSH32(esp, 0x409u); /* 0x171AD9FF: push 0x409 */
    RECOMP_ICALL(MEM32(0x170010A8)); /* 0x171ADA04: call dword ptr [0x170010a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171ADA0A: push 2 */
    ecx = POP32_VAL(esp); /* 0x171ADA0C: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171ADA0D: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_171ADA19; /* 0x171ADA0F: jne 0x171ada19 */
L_171ADA11:
    eax = MEM32(edi); /* 0x171ADA11: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171ADA13: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171ADA16: mov dword ptr [ebp - 8], ebx */
L_171ADA19:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171ADA19: add edi, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x171ADA1C: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD9EE; /* 0x171ADA20: je 0x171ad9ee */
L_171ADA22:
    /* cmp MEM32(ebp + (-0x4)), 0x37u */ /* 0x171ADA22: cmp dword ptr [ebp - 4], 0x37 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADA62; /* 0x171ADA26: je 0x171ada62 */
L_171ADA28:
    eax = esi; /* 0x171ADA28: mov eax, esi */
    edx = eax + 0x1; /* 0x171ADA2A: lea edx, [eax + 1] */
L_171ADA2D:
    SET_LO8(ecx, MEM8(eax)); /* 0x171ADA2D: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ADA2F: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171ADA30: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADA2D; /* 0x171ADA32: jne 0x171ada2d */
L_171ADA34:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171ADA34: sub eax, edx */
    _flag_k = FK_CMP;
    edi = eax + 0x1; /* 0x171ADA36: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x171ADA39: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171ADA3A: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADA3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADA41: pop ecx */
    MEM32(0x17253440) = eax; /* 0x171ADA42: mov dword ptr [0x17253440], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADA50; /* 0x171ADA47: jne 0x171ada50 */
L_171ADA49:
    eax = 0xFFu; /* 0x171ADA49: mov eax, 0xff */
    goto L_171ADA93; /* 0x171ADA4E: jmp 0x171ada93 */
L_171ADA50:
    ecx = edi; /* 0x171ADA50: mov ecx, edi */
    edi = eax; /* 0x171ADA52: mov edi, eax */
    eax = ecx; /* 0x171ADA54: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171ADA56: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171ADA56: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171ADA59: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171ADA5B: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171ADA5D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171ADA60: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171ADA62:
    /* cmp MEM32(ebp + 0x8), 0xFFFFFFFFu */ /* 0x171ADA62: cmp dword ptr [ebp + 8], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADA84; /* 0x171ADA66: je 0x171ada84 */
L_171ADA68:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171ADA68: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B2F0); /* 0x171ADA6B: call 0x1721b2f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADA70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADA72: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADA84; /* 0x171ADA73: jne 0x171ada84 */
L_171ADA75:
    eax = MEM32(0x17253478); /* 0x171ADA75: mov eax, dword ptr [0x17253478] */
    ecx = MEM32(eax + 0xC); /* 0x171ADA7A: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x171ADA7D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171ADA7F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_171ADA90; /* 0x171ADA82: jmp 0x171ada90 */
L_171ADA84:
    /* cmp MEM32(ebp + 0x8), 0xAu */ /* 0x171ADA84: cmp dword ptr [ebp + 8], 0xa */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADA90; /* 0x171ADA88: jne 0x171ada90 */
L_171ADA8A:
    _flag_a = (uint32_t)(MEM32(0x172389F0)); _flag_b = (uint32_t)(1);
    MEM32(0x172389F0) = MEM32(0x172389F0) + 1; /* 0x171ADA8A: inc dword ptr [0x172389f0] */
    _flag_k = FK_INC;
L_171ADA90:
    eax = MEM32(ebp + (-0x4)); /* 0x171ADA90: mov eax, dword ptr [ebp - 4] */
L_171ADA93:
    edi = POP32_VAL(esp); /* 0x171ADA93: pop edi */
    esi = POP32_VAL(esp); /* 0x171ADA94: pop esi */
    ebx = POP32_VAL(esp); /* 0x171ADA95: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171ADA96: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ADA97: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171ADA9F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ADA9Fu);

L_171ADA9F:
    edi = edi; /* 0x171ADA9F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ADAA1: push ebp */
    ebp = esp; /* 0x171ADAA2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171ADAA4: push ecx */
    PUSH32(esp, ebx); /* 0x171ADAA5: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171ADAA6: mov ebx, dword ptr [ebp + 8] */
    /* cmp ebx, 0x2Du */ /* 0x171ADAA9: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171ADAAC: push esi */
    PUSH32(esp, edi); /* 0x171ADAAD: push edi */
    MEM32(ebp + (-0x4)) = 3; /* 0x171ADAAE: mov dword ptr [ebp - 4], 3 */
    esi = 0x17250F18u; /* 0x171ADAB5: mov esi, 0x17250f18 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADAC1; /* 0x171ADABA: je 0x171adac1 */
L_171ADABC:
    /* cmp ebx, 0x2Bu */ /* 0x171ADABC: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADAD9; /* 0x171ADABF: jne 0x171adad9 */
L_171ADAC1:
    ecx = MEM32(0x17253478); /* 0x171ADAC1: mov ecx, dword ptr [0x17253478] */
    MEM8(0x17250F18) = (uint8_t)(LO8(ebx)); /* 0x171ADAC7: mov byte ptr [0x17250f18], bl */
    esi = 0x17250F19u; /* 0x171ADACD: mov esi, 0x17250f19 */
    RECOMP_CALL(sub_171AD65B); /* 0x171ADAD2: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ADAD7: mov ebx, eax */
L_171ADAD9:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x171ADAD9: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171ADAF9; /* 0x171ADADC: jmp 0x171adaf9 */
L_171ADADE:
    PUSH32(esp, ebx); /* 0x171ADADE: push ebx */
    RECOMP_CALL(sub_1721B2E4); /* 0x171ADADF: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADAE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADAE6: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADAFD; /* 0x171ADAE7: je 0x171adafd */
L_171ADAE9:
    ecx = MEM32(0x17253478); /* 0x171ADAE9: mov ecx, dword ptr [0x17253478] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x171ADAEF: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171ADAF1: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_171AD65B); /* 0x171ADAF2: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ADAF7: mov ebx, eax */
L_171ADAF9:
    /* cmp ebx, edi */ /* 0x171ADAF9: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADADE; /* 0x171ADAFB: jne 0x171adade */
L_171ADAFD:
    /* cmp ebx, 0x2Eu */ /* 0x171ADAFD: cmp ebx, 0x2e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADB71; /* 0x171ADB00: jne 0x171adb71 */
L_171ADB02:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x171ADB02: mov byte ptr [esi], bl */
    goto L_171ADB13; /* 0x171ADB04: jmp 0x171adb13 */
L_171ADB06:
    PUSH32(esp, ebx); /* 0x171ADB06: push ebx */
    RECOMP_CALL(sub_1721B2E4); /* 0x171ADB07: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADB0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADB0E: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADB25; /* 0x171ADB0F: je 0x171adb25 */
L_171ADB11:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x171ADB11: mov byte ptr [esi], bl */
L_171ADB13:
    ecx = MEM32(0x17253478); /* 0x171ADB13: mov ecx, dword ptr [0x17253478] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171ADB19: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_171AD65B); /* 0x171ADB1A: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ADB1F: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171ADB21: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADB06; /* 0x171ADB23: jne 0x171adb06 */
L_171ADB25:
    /* cmp ebx, 0x65u */ /* 0x171ADB25: cmp ebx, 0x65 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADB2F; /* 0x171ADB28: je 0x171adb2f */
L_171ADB2A:
    /* cmp ebx, 0x45u */ /* 0x171ADB2A: cmp ebx, 0x45 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x45u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADB6A; /* 0x171ADB2D: jne 0x171adb6a */
L_171ADB2F:
    ecx = MEM32(0x17253478); /* 0x171ADB2F: mov ecx, dword ptr [0x17253478] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x171ADB35: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171ADB37: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_171AD65B); /* 0x171ADB38: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ADB3D: mov ebx, eax */
    /* cmp ebx, 0x2Bu */ /* 0x171ADB3F: cmp ebx, 0x2b */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADB56; /* 0x171ADB42: je 0x171adb56 */
L_171ADB44:
    /* cmp ebx, 0x2Du */ /* 0x171ADB44: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADB66; /* 0x171ADB47: jne 0x171adb66 */
L_171ADB49:
    goto L_171ADB56; /* 0x171ADB49: jmp 0x171adb56 */
L_171ADB4B:
    PUSH32(esp, ebx); /* 0x171ADB4B: push ebx */
    RECOMP_CALL(sub_1721B2E4); /* 0x171ADB4C: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADB51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADB53: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADB6A; /* 0x171ADB54: je 0x171adb6a */
L_171ADB56:
    ecx = MEM32(0x17253478); /* 0x171ADB56: mov ecx, dword ptr [0x17253478] */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x171ADB5C: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171ADB5E: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_171AD65B); /* 0x171ADB5F: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ADB64: mov ebx, eax */
L_171ADB66:
    /* cmp ebx, edi */ /* 0x171ADB66: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADB4B; /* 0x171ADB68: jne 0x171adb4b */
L_171ADB6A:
    MEM32(ebp + (-0x4)) = 4; /* 0x171ADB6A: mov dword ptr [ebp - 4], 4 */
L_171ADB71:
    /* cmp ebx, edi */ /* 0x171ADB71: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADB82; /* 0x171ADB73: je 0x171adb82 */
L_171ADB75:
    eax = MEM32(0x17253478); /* 0x171ADB75: mov eax, dword ptr [0x17253478] */
    ecx = MEM32(eax + 0xC); /* 0x171ADB7A: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x171ADB7D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171ADB7F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171ADB82:
    /* cmp MEM32(ebp + (-0x4)), 4 */ /* 0x171ADB82: cmp dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171ADB86: pop edi */
    MEM8(esi) = (uint8_t)(0); /* 0x171ADB87: mov byte ptr [esi], 0 */
    esi = POP32_VAL(esp); /* 0x171ADB8A: pop esi */
    ebx = POP32_VAL(esp); /* 0x171ADB8B: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADBA0; /* 0x171ADB8C: jne 0x171adba0 */
L_171ADB8E:
    PUSH32(esp, 0x17250F18u); /* 0x171ADB8E: push 0x17250f18 */
    RECOMP_CALL(sub_1721B3FE); /* 0x171ADB93: call 0x1721b3fe */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(0x17253440) = _v; } /* 0x171ADB98: fstp dword ptr [0x17253440] */
    goto L_171ADBB5; /* 0x171ADB9E: jmp 0x171adbb5 */
L_171ADBA0:
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x171ADBA0: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADBB6; /* 0x171ADBA4: jne 0x171adbb6 */
L_171ADBA6:
    PUSH32(esp, 0x17250F18u); /* 0x171ADBA6: push 0x17250f18 */
    RECOMP_CALL(sub_1721B5B4); /* 0x171ADBAB: call 0x1721b5b4 */
    RECOMP_FLAGS_IN();
    MEM32(0x17253440) = eax; /* 0x171ADBB0: mov dword ptr [0x17253440], eax */
L_171ADBB5:
    ecx = POP32_VAL(esp); /* 0x171ADBB5: pop ecx */
L_171ADBB6:
    eax = MEM32(ebp + (-0x4)); /* 0x171ADBB6: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171ADBB9: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171ADBBA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171ADBC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ADBC2u);

L_171ADBC2:
    edi = edi; /* 0x171ADBC2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ADBC4: push ebp */
    ebp = esp; /* 0x171ADBC5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171ADBC7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171ADBCA: push ebx */
    PUSH32(esp, esi); /* 0x171ADBCB: push esi */
    PUSH32(esp, edi); /* 0x171ADBCC: push edi */
    edi = eax; /* 0x171ADBCD: mov edi, eax */
    ecx = edi; /* 0x171ADBCF: mov ecx, edi */
    RECOMP_CALL(sub_171AD681); /* 0x171ADBD1: call 0x171ad681 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x171ADBD6: mov ecx, eax */
    /* cmp ecx, 0xFu */ /* 0x171ADBD8: cmp ecx, 0xf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171ADBDB: mov dword ptr [ebp - 8], ecx */
    if (CMP_G(_flag_a, _flag_b)) goto L_171ADE2F; /* 0x171ADBDE: jg 0x171ade2f */
L_171ADBE4:
    /* cmp ecx, 0xAu */ /* 0x171ADBE4: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171ADE17; /* 0x171ADBE7: jge 0x171ade17 */
L_171ADBED:
    eax = ecx + 0x1; /* 0x171ADBED: lea eax, [ecx + 1] */
    /* cmp eax, 8 */ /* 0x171ADBF0: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171ADE10; /* 0x171ADBF3: ja 0x171ade10 */
L_171ADBF9:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x171ADE96)); goto _ljump; }
L_171ADC00:
    ecx = MEM32(edi + 0xC); /* 0x171ADC00: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADC03: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x171ADC05: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x171ADC08: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171ADC09: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADC0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADC0E: je 0x171addbc */
L_171ADC14:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x171ADC14: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x171ADC18: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = 0x17250F18u; /* 0x171ADC1C: mov esi, 0x17250f18 */
    ebx = esi; /* 0x171ADC21: mov ebx, esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171ADC4C; /* 0x171ADC23: jbe 0x171adc4c */
L_171ADC25:
    ecx = edi; /* 0x171ADC25: mov ecx, edi */
    RECOMP_CALL(sub_171AD65B); /* 0x171ADC27: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171ADC2C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADC2F: je 0x171addbc */
L_171ADC35:
    /* cmp MEM32(ebp + (-0xC)), 0x1FFu */ /* 0x171ADC35: cmp dword ptr [ebp - 0xc], 0x1ff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171ADC41; /* 0x171ADC3C: jae 0x171adc41 */
L_171ADC3E:
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x171ADC3E: mov byte ptr [ebx], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171ADC40: inc ebx */
    _flag_k = FK_INC;
L_171ADC41:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x171ADC41: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x171ADC44: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x171ADC47: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171ADC25; /* 0x171ADC4A: jb 0x171adc25 */
L_171ADC4C:
    eax = esi; /* 0x171ADC4C: mov eax, esi */
    MEM8(ebx) = (uint8_t)(0); /* 0x171ADC4E: mov byte ptr [ebx], 0 */
    ecx = eax + 0x1; /* 0x171ADC51: lea ecx, [eax + 1] */
L_171ADC54:
    SET_LO8(edx, MEM8(eax)); /* 0x171ADC54: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ADC56: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171ADC57: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADC54; /* 0x171ADC59: jne 0x171adc54 */
L_171ADC5B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171ADC5B: sub eax, ecx */
    _flag_k = FK_CMP;
    edi = eax + 0x1; /* 0x171ADC5D: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x171ADC60: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171ADC61: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADC66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADC68: pop ecx */
    MEM32(0x17253440) = eax; /* 0x171ADC69: mov dword ptr [0x17253440], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADE10; /* 0x171ADC6E: je 0x171ade10 */
L_171ADC74:
    ecx = edi; /* 0x171ADC74: mov ecx, edi */
L_171ADC76:
    edi = eax; /* 0x171ADC76: mov edi, eax */
    eax = ecx; /* 0x171ADC78: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171ADC7A: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171ADC7A: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171ADC7D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171ADC7F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171ADC81: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171ADC84: rep movsb byte ptr es:[edi], byte ptr [esi] */
    goto L_171ADE17; /* 0x171ADC86: jmp 0x171ade17 */
L_171ADC8B:
    ecx = MEM32(edi + 0xC); /* 0x171ADC8B: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADC8E: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x171ADC90: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x171ADC93: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171ADC94: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADC97: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADC99: je 0x171addbc */
L_171ADC9F:
    eax = MEM32(ebp + (-0x4)); /* 0x171ADC9F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171ADCA2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x171ADCA4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADCA6: je 0x171addbc */
L_171ADCAC:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171ADCAC: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171ADCAC: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171ADCAF: push eax */
    RECOMP_CALL(sub_1721B254); /* 0x171ADCB0: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171ADCB5: mov ebx, eax */
    /* cmp ebx, esi */ /* 0x171ADCB7: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171ADCB9: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADCBA: je 0x171addbc */
L_171ADCC0:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x171ADCC0: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171ADCE5; /* 0x171ADCC3: jbe 0x171adce5 */
L_171ADCC5:
    ecx = MEM32(edi + 0xC); /* 0x171ADCC5: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADCC8: mov eax, dword ptr [ecx] */
    edx = ebp + (-0xC); /* 0x171ADCCA: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x171ADCCD: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171ADCCE: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADCD1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADCD3: je 0x171addbc */
L_171ADCD9:
    eax = MEM32(ebp + (-0xC)); /* 0x171ADCD9: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx + esi * 4) = eax; /* 0x171ADCDC: mov dword ptr [ebx + esi*4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171ADCDF: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x171ADCE0: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171ADCC5; /* 0x171ADCE3: jb 0x171adcc5 */
L_171ADCE5:
    MEM32(0x17253444) = ebx; /* 0x171ADCE5: mov dword ptr [0x17253444], ebx */
L_171ADCEB:
    eax = MEM32(ebp + (-0x4)); /* 0x171ADCEB: mov eax, dword ptr [ebp - 4] */
    goto L_171ADD92; /* 0x171ADCEE: jmp 0x171add92 */
L_171ADCF3:
    ecx = MEM32(edi + 0xC); /* 0x171ADCF3: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADCF6: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x171ADCF8: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x171ADCFB: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171ADCFC: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADCFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADD01: je 0x171addbc */
L_171ADD07:
    eax = MEM32(ebp + (-0x4)); /* 0x171ADD07: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171ADD0A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171ADD0C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADD0E: je 0x171addbc */
L_171ADD14:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171ADD14: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171ADD14: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171ADD17: push eax */
    RECOMP_CALL(sub_1721B254); /* 0x171ADD18: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171ADD1D: mov esi, eax */
    /* cmp esi, ebx */ /* 0x171ADD1F: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171ADD21: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADD22: je 0x171addbc */
L_171ADD28:
    /* cmp MEM32(edi + 0x24), 4 */ /* 0x171ADD28: cmp dword ptr [edi + 0x24], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADD51; /* 0x171ADD2C: jne 0x171add51 */
L_171ADD2E:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x171ADD2E: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171ADD72; /* 0x171ADD31: jbe 0x171add72 */
L_171ADD33:
    ecx = MEM32(edi + 0xC); /* 0x171ADD33: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADD36: mov eax, dword ptr [ecx] */
    edx = ebp + (-0xC); /* 0x171ADD38: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x171ADD3B: push edx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x171ADD3C: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADD3F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADD41: je 0x171addbc */
L_171ADD43:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171ADD43: fld dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ebx * 4) = _v; } /* 0x171ADD46: fstp dword ptr [esi + ebx*4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171ADD49: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x171ADD4A: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171ADD33; /* 0x171ADD4D: jb 0x171add33 */
L_171ADD4F:
    goto L_171ADD72; /* 0x171ADD4F: jmp 0x171add72 */
L_171ADD51:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x171ADD51: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171ADD72; /* 0x171ADD54: jbe 0x171add72 */
L_171ADD56:
    ecx = MEM32(edi + 0xC); /* 0x171ADD56: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADD59: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x10); /* 0x171ADD5B: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x171ADD5E: push edx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171ADD5F: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADD62: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADD64: je 0x171addbc */
L_171ADD66:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x171ADD66: fld qword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + ebx * 4) = _v; } /* 0x171ADD69: fstp dword ptr [esi + ebx*4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171ADD6C: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x171ADD6D: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171ADD56; /* 0x171ADD70: jb 0x171add56 */
L_171ADD72:
    MEM32(0x17253444) = esi; /* 0x171ADD72: mov dword ptr [0x17253444], esi */
    RECOMP_BACKEDGE();
    goto L_171ADCEB; /* 0x171ADD78: jmp 0x171adceb */
L_171ADD7D:
    edi = MEM32(edi + 0xC); /* 0x171ADD7D: mov edi, dword ptr [edi + 0xc] */
    eax = MEM32(edi); /* 0x171ADD80: mov eax, dword ptr [edi] */
    ecx = ebp + (-0xC); /* 0x171ADD82: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x171ADD85: push ecx */
    ecx = edi; /* 0x171ADD86: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171ADD88: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_171ADD8B:
    /* test eax, eax */ /* 0x171ADD8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADDBC; /* 0x171ADD8D: je 0x171addbc */
L_171ADD8F:
    eax = MEM32(ebp + (-0xC)); /* 0x171ADD8F: mov eax, dword ptr [ebp - 0xc] */
L_171ADD92:
    MEM32(0x17253440) = eax; /* 0x171ADD92: mov dword ptr [0x17253440], eax */
    goto L_171ADE17; /* 0x171ADD97: jmp 0x171ade17 */
L_171ADD99:
    /* cmp MEM32(edi + 0x24), 4 */ /* 0x171ADD99: cmp dword ptr [edi + 0x24], 4 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(edi + 0xC); /* 0x171ADD9D: mov edi, dword ptr [edi + 0xc] */
    eax = MEM32(edi); /* 0x171ADDA0: mov eax, dword ptr [edi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADDAF; /* 0x171ADDA2: jne 0x171addaf */
L_171ADDA4:
    ecx = ebp + (-0xC); /* 0x171ADDA4: lea ecx, [ebp - 0xc] */
    PUSH32(esp, ecx); /* 0x171ADDA7: push ecx */
    ecx = edi; /* 0x171ADDA8: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x171ADDAA: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171ADD8B; /* 0x171ADDAD: jmp 0x171add8b */
L_171ADDAF:
    ecx = ebp + (-0x10); /* 0x171ADDAF: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x171ADDB2: push ecx */
    ecx = edi; /* 0x171ADDB3: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171ADDB5: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADDB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADDC3; /* 0x171ADDBA: jne 0x171addc3 */
L_171ADDBC:
    eax = 0xFFu; /* 0x171ADDBC: mov eax, 0xff */
    goto L_171ADE1A; /* 0x171ADDC1: jmp 0x171ade1a */
L_171ADDC3:
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x171ADDC3: fld qword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(0x17253440) = _v; } /* 0x171ADDC6: fstp dword ptr [0x17253440] */
    goto L_171ADE17; /* 0x171ADDCC: jmp 0x171ade17 */
L_171ADDCE:
    ecx = MEM32(edi + 0xC); /* 0x171ADDCE: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADDD1: mov eax, dword ptr [ecx] */
    PUSH32(esp, 0x17253440u); /* 0x171ADDD3: push 0x17253440 */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171ADDD8: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x171ADDDB: mov ecx, edi */
    RECOMP_CALL(sub_171AD681); /* 0x171ADDDD: call 0x171ad681 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x171ADDE2: mov ecx, edi */
    MEM16(0x17253444) = (uint16_t)(LO16(eax)); /* 0x171ADDE4: mov word ptr [0x17253444], ax */
    RECOMP_CALL(sub_171AD681); /* 0x171ADDEA: call 0x171ad681 */
    RECOMP_FLAGS_IN();
    MEM16(0x17253446) = (uint16_t)(LO16(eax)); /* 0x171ADDEF: mov word ptr [0x17253446], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171ADDF5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ADDF7:
    ecx = MEM32(edi + 0xC); /* 0x171ADDF7: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADDFA: mov eax, dword ptr [ecx] */
    edx = esi + 0x17253448; /* 0x171ADDFC: lea edx, [esi + 0x17253448] */
    PUSH32(esp, edx); /* 0x171ADE02: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171ADE03: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171ADE06: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 8 */ /* 0x171ADE07: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171ADDF7; /* 0x171ADE0A: jl 0x171addf7 */
L_171ADE0C:
    /* test eax, eax */ /* 0x171ADE0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADE17; /* 0x171ADE0E: jne 0x171ade17 */
L_171ADE10:
    MEM32(ebp + (-0x8)) = 0xFFu; /* 0x171ADE10: mov dword ptr [ebp - 8], 0xff */
L_171ADE17:
    eax = MEM32(ebp + (-0x8)); /* 0x171ADE17: mov eax, dword ptr [ebp - 8] */
L_171ADE1A:
    edi = POP32_VAL(esp); /* 0x171ADE1A: pop edi */
    esi = POP32_VAL(esp); /* 0x171ADE1B: pop esi */
    ebx = POP32_VAL(esp); /* 0x171ADE1C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171ADE1D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171ADE1E: ret  */
L_171ADE1F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171ADE1F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253480) = 1; /* 0x171ADE23: mov dword ptr [0x17253480], 1 */
    RECOMP_BACKEDGE();
    goto L_171ADE17; /* 0x171ADE2D: jmp 0x171ade17 */
L_171ADE2F:
    /* cmp ecx, 0x36u */ /* 0x171ADE2F: cmp ecx, 0x36 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x36u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_171ADE10; /* 0x171ADE32: jg 0x171ade10 */
L_171ADE34:
    /* cmp ecx, 0x31u */ /* 0x171ADE34: cmp ecx, 0x31 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x31u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171ADE52; /* 0x171ADE37: jge 0x171ade52 */
L_171ADE39:
    /* cmp ecx, 0x12u */ /* 0x171ADE39: cmp ecx, 0x12 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x12u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171ADE10; /* 0x171ADE3C: jl 0x171ade10 */
L_171ADE3E:
    /* cmp ecx, 0x14u */ /* 0x171ADE3E: cmp ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171ADE17; /* 0x171ADE41: jle 0x171ade17 */
L_171ADE43:
    /* cmp ecx, 0x1Fu */ /* 0x171ADE43: cmp ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADE52; /* 0x171ADE46: je 0x171ade52 */
L_171ADE48:
    /* cmp ecx, 0x27u */ /* 0x171ADE48: cmp ecx, 0x27 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x27u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171ADE10; /* 0x171ADE4B: jle 0x171ade10 */
L_171ADE4D:
    /* cmp ecx, 0x2Fu */ /* 0x171ADE4D: cmp ecx, 0x2f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_171ADE10; /* 0x171ADE50: jg 0x171ade10 */
L_171ADE52:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171ADE52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171ADE54:
    /* cmp ecx, MEM32(eax * 8 + 0x17238974) */ /* 0x171ADE54: cmp ecx, dword ptr [eax*8 + 0x17238974] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax * 8 + 0x17238974));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADE65; /* 0x171ADE5B: je 0x171ade65 */
L_171ADE5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ADE5D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x10u */ /* 0x171ADE5E: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171ADE54; /* 0x171ADE61: jb 0x171ade54 */
L_171ADE63:
    RECOMP_BACKEDGE();
    goto L_171ADE17; /* 0x171ADE63: jmp 0x171ade17 */
L_171ADE65:
    edi = eax * 8 + 0x17238970; /* 0x171ADE65: lea edi, [eax*8 + 0x17238970] */
    eax = MEM32(edi); /* 0x171ADE6C: mov eax, dword ptr [edi] */
    ecx = eax + 0x1; /* 0x171ADE6E: lea ecx, [eax + 1] */
L_171ADE71:
    SET_LO8(edx, MEM8(eax)); /* 0x171ADE71: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171ADE73: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171ADE74: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADE71; /* 0x171ADE76: jne 0x171ade71 */
L_171ADE78:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171ADE78: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171ADE7A: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171ADE7D: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171ADE7E: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADE83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADE85: pop ecx */
    MEM32(0x17253440) = eax; /* 0x171ADE86: mov dword ptr [0x17253440], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171ADE10; /* 0x171ADE8B: je 0x171ade10 */
L_171ADE8D:
    ecx = esi; /* 0x171ADE8D: mov ecx, esi */
    esi = MEM32(edi); /* 0x171ADE8F: mov esi, dword ptr [edi] */
    RECOMP_BACKEDGE();
    goto L_171ADC76; /* 0x171ADE91: jmp 0x171adc76 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x171ADC00u: goto L_171ADC00;
      case 0x171ADC8Bu: goto L_171ADC8B;
      case 0x171ADCF3u: goto L_171ADCF3;
      case 0x171ADD7Du: goto L_171ADD7D;
      case 0x171ADD99u: goto L_171ADD99;
      case 0x171ADDCEu: goto L_171ADDCE;
      case 0x171ADE10u: goto L_171ADE10;
      case 0x171ADE1Fu: goto L_171ADE1F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171ADEBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ADEBFu);

    goto L_171ADEBF;
L_171AD6A7:
    edi = edi; /* 0x171AD6A7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AD6A9: push ebp */
    ebp = esp; /* 0x171AD6AA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x171AD6AC: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AD6AF: push ebx */
    PUSH32(esp, esi); /* 0x171AD6B0: push esi */
    PUSH32(esp, edi); /* 0x171AD6B1: push edi */
    edi = 0x17250F18u; /* 0x171AD6B2: mov edi, 0x17250f18 */
    MEM32(ebp + (-0x4)) = 0xFFu; /* 0x171AD6B7: mov dword ptr [ebp - 4], 0xff */
    esi = edi; /* 0x171AD6BE: mov esi, edi */
    goto L_171AD6DA; /* 0x171AD6C0: jmp 0x171ad6da */
L_171AD6C2:
    /* cmp ebx, 0x3Eu */ /* 0x171AD6C2: cmp ebx, 0x3e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD6EC; /* 0x171AD6C5: je 0x171ad6ec */
L_171AD6C7:
    /* cmp ebx, 0x2Du */ /* 0x171AD6C7: cmp ebx, 0x2d */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD6D7; /* 0x171AD6CA: je 0x171ad6d7 */
L_171AD6CC:
    PUSH32(esp, ebx); /* 0x171AD6CC: push ebx */
    RECOMP_CALL(sub_1721B40A); /* 0x171AD6CD: call 0x1721b40a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD6D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AD6D4: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD6EC; /* 0x171AD6D5: je 0x171ad6ec */
L_171AD6D7:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x171AD6D7: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AD6D9: inc esi */
    _flag_k = FK_INC;
L_171AD6DA:
    ecx = MEM32(0x17253478); /* 0x171AD6DA: mov ecx, dword ptr [0x17253478] */
    RECOMP_CALL(sub_171AD65B); /* 0x171AD6E0: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171AD6E5: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x171AD6E7: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD6C2; /* 0x171AD6EA: jne 0x171ad6c2 */
L_171AD6EC:
    /* cmp ebx, 0x3Eu */ /* 0x171AD6EC: cmp ebx, 0x3e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(esi) = (uint8_t)(0); /* 0x171AD6EF: mov byte ptr [esi], 0 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD798; /* 0x171AD6F2: jne 0x171ad798 */
L_171AD6F8:
    eax = edi; /* 0x171AD6F8: mov eax, edi */
    edx = eax + 0x1; /* 0x171AD6FA: lea edx, [eax + 1] */
L_171AD6FD:
    SET_LO8(ecx, MEM8(eax)); /* 0x171AD6FD: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD6FF: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AD700: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD6FD; /* 0x171AD702: jne 0x171ad6fd */
L_171AD704:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AD704: sub eax, edx */
    _flag_k = FK_CMP;
    /* cmp eax, 0x24u */ /* 0x171AD706: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD798; /* 0x171AD709: jne 0x171ad798 */
L_171AD70F:
    eax = ebp + (-0x8); /* 0x171AD70F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AD712: push eax */
    eax = ebp + (-0xC); /* 0x171AD713: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AD716: push eax */
    eax = ebp + (-0x10); /* 0x171AD717: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x171AD71A: push eax */
    eax = ebp + (-0x14); /* 0x171AD71B: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x171AD71E: push eax */
    eax = ebp + (-0x18); /* 0x171AD71F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171AD722: push eax */
    eax = ebp + (-0x1C); /* 0x171AD723: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x171AD726: push eax */
    eax = ebp + (-0x20); /* 0x171AD727: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x171AD72A: push eax */
    eax = ebp + (-0x24); /* 0x171AD72B: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171AD72E: push eax */
    PUSH32(esp, 0x17253446u); /* 0x171AD72F: push 0x17253446 */
    PUSH32(esp, 0x17253444u); /* 0x171AD734: push 0x17253444 */
    PUSH32(esp, 0x17253440u); /* 0x171AD739: push 0x17253440 */
    PUSH32(esp, 0x17023CC8u); /* 0x171AD73E: push 0x17023cc8 */
    PUSH32(esp, edi); /* 0x171AD743: push edi */
    RECOMP_CALL(sub_1721B2FC); /* 0x171AD744: call 0x1721b2fc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x34u; /* 0x171AD749: add esp, 0x34 */
    _flag_k = FK_ADD;
    /* cmp eax, 0xBu */ /* 0x171AD74C: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD798; /* 0x171AD74F: jne 0x171ad798 */
L_171AD751:
    SET_LO8(eax, MEM8(ebp + (-0x24))); /* 0x171AD751: mov al, byte ptr [ebp - 0x24] */
    MEM8(0x17253448) = (uint8_t)(LO8(eax)); /* 0x171AD754: mov byte ptr [0x17253448], al */
    SET_LO8(eax, MEM8(ebp + (-0x20))); /* 0x171AD759: mov al, byte ptr [ebp - 0x20] */
    MEM8(0x17253449) = (uint8_t)(LO8(eax)); /* 0x171AD75C: mov byte ptr [0x17253449], al */
    SET_LO8(eax, MEM8(ebp + (-0x1C))); /* 0x171AD761: mov al, byte ptr [ebp - 0x1c] */
    MEM8(0x1725344A) = (uint8_t)(LO8(eax)); /* 0x171AD764: mov byte ptr [0x1725344a], al */
    SET_LO8(eax, MEM8(ebp + (-0x18))); /* 0x171AD769: mov al, byte ptr [ebp - 0x18] */
    MEM8(0x1725344B) = (uint8_t)(LO8(eax)); /* 0x171AD76C: mov byte ptr [0x1725344b], al */
    SET_LO8(eax, MEM8(ebp + (-0x14))); /* 0x171AD771: mov al, byte ptr [ebp - 0x14] */
    MEM8(0x1725344C) = (uint8_t)(LO8(eax)); /* 0x171AD774: mov byte ptr [0x1725344c], al */
    SET_LO8(eax, MEM8(ebp + (-0x10))); /* 0x171AD779: mov al, byte ptr [ebp - 0x10] */
    MEM8(0x1725344D) = (uint8_t)(LO8(eax)); /* 0x171AD77C: mov byte ptr [0x1725344d], al */
    SET_LO8(eax, MEM8(ebp + (-0xC))); /* 0x171AD781: mov al, byte ptr [ebp - 0xc] */
    MEM8(0x1725344E) = (uint8_t)(LO8(eax)); /* 0x171AD784: mov byte ptr [0x1725344e], al */
    SET_LO8(eax, MEM8(ebp + (-0x8))); /* 0x171AD789: mov al, byte ptr [ebp - 8] */
    MEM8(0x1725344F) = (uint8_t)(LO8(eax)); /* 0x171AD78C: mov byte ptr [0x1725344f], al */
    MEM32(ebp + (-0x4)) = 5; /* 0x171AD791: mov dword ptr [ebp - 4], 5 */
L_171AD798:
    eax = MEM32(ebp + (-0x4)); /* 0x171AD798: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171AD79B: pop edi */
    esi = POP32_VAL(esp); /* 0x171AD79C: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AD79D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AD79E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AD79F: ret  */
L_171AD7A5:
    ecx = MEM32(0x17253478); /* 0x171AD7A5: mov ecx, dword ptr [0x17253478] */
    _flag_a = (uint32_t)(MEM32(0x17253488)); _flag_b = (uint32_t)(0);
    MEM32(0x17253488) = MEM32(0x17253488) & 0; /* 0x171AD7AB: and dword ptr [0x17253488], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171AD7B2: push ebx */
    PUSH32(esp, esi); /* 0x171AD7B3: push esi */
    PUSH32(esp, edi); /* 0x171AD7B4: push edi */
    RECOMP_CALL(sub_171AD65B); /* 0x171AD7B5: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x171AD7BA: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AD900; /* 0x171AD7BD: jmp 0x171ad900 */
L_171AD7C2:
    /* cmp ebx, 0x22u */ /* 0x171AD7C2: cmp ebx, 0x22 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD913; /* 0x171AD7C5: je 0x171ad913 */
L_171AD7CB:
    /* cmp ebx, 0x5Cu */ /* 0x171AD7CB: cmp ebx, 0x5c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD8DD; /* 0x171AD7CE: jne 0x171ad8dd */
L_171AD7D4:
    ecx = MEM32(0x17253478); /* 0x171AD7D4: mov ecx, dword ptr [0x17253478] */
    RECOMP_CALL(sub_171AD65B); /* 0x171AD7DA: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171AD7DF: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171AD7E1: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD90A; /* 0x171AD7E3: je 0x171ad90a */
L_171AD7E9:
    /* cmp ebx, 0x6Eu */ /* 0x171AD7E9: cmp ebx, 0x6e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD7F6; /* 0x171AD7EC: jne 0x171ad7f6 */
L_171AD7EE:
    PUSH32(esp, 0xAu); /* 0x171AD7EE: push 0xa */
L_171AD7F0:
    ebx = POP32_VAL(esp); /* 0x171AD7F0: pop ebx */
    goto L_171AD8DD; /* 0x171AD7F1: jmp 0x171ad8dd */
L_171AD7F6:
    /* cmp ebx, 0x74u */ /* 0x171AD7F6: cmp ebx, 0x74 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD7FF; /* 0x171AD7F9: jne 0x171ad7ff */
L_171AD7FB:
    PUSH32(esp, 9); /* 0x171AD7FB: push 9 */
    RECOMP_BACKEDGE();
    goto L_171AD7F0; /* 0x171AD7FD: jmp 0x171ad7f0 */
L_171AD7FF:
    /* cmp ebx, 0x76u */ /* 0x171AD7FF: cmp ebx, 0x76 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x76u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD808; /* 0x171AD802: jne 0x171ad808 */
L_171AD804:
    PUSH32(esp, 0xBu); /* 0x171AD804: push 0xb */
    RECOMP_BACKEDGE();
    goto L_171AD7F0; /* 0x171AD806: jmp 0x171ad7f0 */
L_171AD808:
    /* cmp ebx, 0x62u */ /* 0x171AD808: cmp ebx, 0x62 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x62u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD811; /* 0x171AD80B: jne 0x171ad811 */
L_171AD80D:
    PUSH32(esp, 8); /* 0x171AD80D: push 8 */
    RECOMP_BACKEDGE();
    goto L_171AD7F0; /* 0x171AD80F: jmp 0x171ad7f0 */
L_171AD811:
    /* cmp ebx, 0x72u */ /* 0x171AD811: cmp ebx, 0x72 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x72u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD81A; /* 0x171AD814: jne 0x171ad81a */
L_171AD816:
    PUSH32(esp, 0xDu); /* 0x171AD816: push 0xd */
    RECOMP_BACKEDGE();
    goto L_171AD7F0; /* 0x171AD818: jmp 0x171ad7f0 */
L_171AD81A:
    /* cmp ebx, 0x66u */ /* 0x171AD81A: cmp ebx, 0x66 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD823; /* 0x171AD81D: jne 0x171ad823 */
L_171AD81F:
    PUSH32(esp, 0xCu); /* 0x171AD81F: push 0xc */
    RECOMP_BACKEDGE();
    goto L_171AD7F0; /* 0x171AD821: jmp 0x171ad7f0 */
L_171AD823:
    /* cmp ebx, 0x65u */ /* 0x171AD823: cmp ebx, 0x65 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD82C; /* 0x171AD826: jne 0x171ad82c */
L_171AD828:
    PUSH32(esp, 0x1Bu); /* 0x171AD828: push 0x1b */
    RECOMP_BACKEDGE();
    goto L_171AD7F0; /* 0x171AD82A: jmp 0x171ad7f0 */
L_171AD82C:
    /* cmp ebx, 0x30u */ /* 0x171AD82C: cmp ebx, 0x30 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD8DD; /* 0x171AD82F: jne 0x171ad8dd */
L_171AD835:
    ecx = MEM32(0x17253478); /* 0x171AD835: mov ecx, dword ptr [0x17253478] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AD83B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_171AD65B); /* 0x171AD83D: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171AD842: mov esi, eax */
    /* cmp esi, edi */ /* 0x171AD844: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8B6; /* 0x171AD846: je 0x171ad8b6 */
L_171AD848:
    PUSH32(esp, esi); /* 0x171AD848: push esi */
    RECOMP_CALL(sub_1721B2E4); /* 0x171AD849: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD84E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AD850: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD8B6; /* 0x171AD851: je 0x171ad8b6 */
L_171AD853:
    /* cmp esi, 0x38u */ /* 0x171AD853: cmp esi, 0x38 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8B6; /* 0x171AD856: je 0x171ad8b6 */
L_171AD858:
    /* cmp esi, 0x39u */ /* 0x171AD858: cmp esi, 0x39 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8B6; /* 0x171AD85B: je 0x171ad8b6 */
L_171AD85D:
    ecx = MEM32(0x17253478); /* 0x171AD85D: mov ecx, dword ptr [0x17253478] */
    ebx = esi + (-0x30); /* 0x171AD863: lea ebx, [esi - 0x30] */
    RECOMP_CALL(sub_171AD65B); /* 0x171AD866: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171AD86B: mov esi, eax */
    /* cmp esi, edi */ /* 0x171AD86D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8C3; /* 0x171AD86F: je 0x171ad8c3 */
L_171AD871:
    PUSH32(esp, esi); /* 0x171AD871: push esi */
    RECOMP_CALL(sub_1721B2E4); /* 0x171AD872: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD877: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AD879: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD8C3; /* 0x171AD87A: je 0x171ad8c3 */
L_171AD87C:
    /* cmp esi, 0x38u */ /* 0x171AD87C: cmp esi, 0x38 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8C3; /* 0x171AD87F: je 0x171ad8c3 */
L_171AD881:
    /* cmp esi, 0x39u */ /* 0x171AD881: cmp esi, 0x39 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8C3; /* 0x171AD884: je 0x171ad8c3 */
L_171AD886:
    ecx = MEM32(0x17253478); /* 0x171AD886: mov ecx, dword ptr [0x17253478] */
    ebx = esi + ebx * 8 + (-0x30); /* 0x171AD88C: lea ebx, [esi + ebx*8 - 0x30] */
    RECOMP_CALL(sub_171AD65B); /* 0x171AD890: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171AD895: mov esi, eax */
    /* cmp esi, edi */ /* 0x171AD897: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8D0; /* 0x171AD899: je 0x171ad8d0 */
L_171AD89B:
    PUSH32(esp, esi); /* 0x171AD89B: push esi */
    RECOMP_CALL(sub_1721B2E4); /* 0x171AD89C: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AD8A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AD8A3: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD8D0; /* 0x171AD8A4: je 0x171ad8d0 */
L_171AD8A6:
    /* cmp esi, 0x38u */ /* 0x171AD8A6: cmp esi, 0x38 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8D0; /* 0x171AD8A9: je 0x171ad8d0 */
L_171AD8AB:
    /* cmp esi, 0x39u */ /* 0x171AD8AB: cmp esi, 0x39 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AD8D0; /* 0x171AD8AE: je 0x171ad8d0 */
L_171AD8B0:
    ebx = esi + ebx * 8 + (-0x30); /* 0x171AD8B0: lea ebx, [esi + ebx*8 - 0x30] */
    goto L_171AD8DD; /* 0x171AD8B4: jmp 0x171ad8dd */
L_171AD8B6:
    eax = MEM32(0x17253478); /* 0x171AD8B6: mov eax, dword ptr [0x17253478] */
    ecx = MEM32(eax + 0xC); /* 0x171AD8BB: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x171AD8BE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AD8C0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171AD8C3:
    eax = MEM32(0x17253478); /* 0x171AD8C3: mov eax, dword ptr [0x17253478] */
    ecx = MEM32(eax + 0xC); /* 0x171AD8C8: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x171AD8CB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AD8CD: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171AD8D0:
    eax = MEM32(0x17253478); /* 0x171AD8D0: mov eax, dword ptr [0x17253478] */
    ecx = MEM32(eax + 0xC); /* 0x171AD8D5: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(ecx); /* 0x171AD8D8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AD8DA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171AD8DD:
    eax = MEM32(0x17253488); /* 0x171AD8DD: mov eax, dword ptr [0x17253488] */
    /* cmp eax, 0x1FFu */ /* 0x171AD8E2: cmp eax, 0x1ff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AD8F5; /* 0x171AD8E7: jge 0x171ad8f5 */
L_171AD8E9:
    MEM8(eax + 0x17250F18) = (uint8_t)(LO8(ebx)); /* 0x171AD8E9: mov byte ptr [eax + 0x17250f18], bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD8EF: inc eax */
    _flag_k = FK_INC;
    MEM32(0x17253488) = eax; /* 0x171AD8F0: mov dword ptr [0x17253488], eax */
L_171AD8F5:
    ecx = MEM32(0x17253478); /* 0x171AD8F5: mov ecx, dword ptr [0x17253478] */
    RECOMP_CALL(sub_171AD65B); /* 0x171AD8FB: call 0x171ad65b */
    RECOMP_FLAGS_IN();
L_171AD900:
    ebx = eax; /* 0x171AD900: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x171AD902: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AD7C2; /* 0x171AD904: jne 0x171ad7c2 */
L_171AD90A:
    eax = 0xFFu; /* 0x171AD90A: mov eax, 0xff */
L_171AD90F:
    edi = POP32_VAL(esp); /* 0x171AD90F: pop edi */
    esi = POP32_VAL(esp); /* 0x171AD910: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AD911: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AD912: ret  */
L_171AD913:
    eax = MEM32(0x17253488); /* 0x171AD913: mov eax, dword ptr [0x17253488] */
    _flag_a = (uint32_t)(MEM32(0x17253488)); _flag_b = (uint32_t)(1);
    MEM32(0x17253488) = MEM32(0x17253488) + 1; /* 0x171AD918: inc dword ptr [0x17253488] */
    _flag_k = FK_INC;
    esi = 0x17250F18u; /* 0x171AD91E: mov esi, 0x17250f18 */
    MEM8(eax + 0x17250F18) = (uint8_t)(0); /* 0x171AD923: mov byte ptr [eax + 0x17250f18], 0 */
    eax = esi; /* 0x171AD92A: mov eax, esi */
    ecx = eax + 0x1; /* 0x171AD92C: lea ecx, [eax + 1] */
L_171AD92F:
    SET_LO8(edx, MEM8(eax)); /* 0x171AD92F: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AD931: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171AD932: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AD92F; /* 0x171AD934: jne 0x171ad92f */
L_171AD936:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171AD936: sub eax, ecx */
    _flag_k = FK_CMP;
    edi = eax + 0x1; /* 0x171AD938: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x171AD93B: push edi */
    RECOMP_CALL(sub_1721B254); /* 0x171AD93C: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AD941: pop ecx */
    MEM32(0x17253440) = eax; /* 0x171AD942: mov dword ptr [0x17253440], eax */
    /* test eax, eax */ /* 0x171AD947: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AD90A; /* 0x171AD949: je 0x171ad90a */
L_171AD94B:
    ecx = edi; /* 0x171AD94B: mov ecx, edi */
    edi = eax; /* 0x171AD94D: mov edi, eax */
    eax = ecx; /* 0x171AD94F: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AD951: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AD951: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AD954: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171AD956: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AD958: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x171AD95B: push 2 */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AD95D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = POP32_VAL(esp); /* 0x171AD95F: pop eax */
    RECOMP_BACKEDGE();
    goto L_171AD90F; /* 0x171AD960: jmp 0x171ad90f */
L_171ADEBF:
    edi = edi; /* 0x171ADEBF: mov edi, edi */
    PUSH32(esp, esi); /* 0x171ADEC1: push esi */
L_171ADEC2:
    ecx = edi; /* 0x171ADEC2: mov ecx, edi */
    RECOMP_CALL(sub_171AD65B); /* 0x171ADEC4: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171ADEC9: mov esi, eax */
    /* cmp esi, 0xAu */ /* 0x171ADECB: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADED8; /* 0x171ADECE: jne 0x171aded8 */
L_171ADED0:
    _flag_a = (uint32_t)(MEM32(0x172389F0)); _flag_b = (uint32_t)(1);
    MEM32(0x172389F0) = MEM32(0x172389F0) + 1; /* 0x171ADED0: inc dword ptr [0x172389f0] */
    _flag_k = FK_INC;
    goto L_171ADF2F; /* 0x171ADED6: jmp 0x171adf2f */
L_171ADED8:
    /* cmp esi, 0x23u */ /* 0x171ADED8: cmp esi, 0x23 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x23u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADEF8; /* 0x171ADEDB: jne 0x171adef8 */
L_171ADEDD:
    ecx = edi; /* 0x171ADEDD: mov ecx, edi */
    RECOMP_CALL(sub_171AD65B); /* 0x171ADEDF: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171ADEE4: mov esi, eax */
    /* cmp esi, 0xAu */ /* 0x171ADEE6: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADEF0; /* 0x171ADEE9: je 0x171adef0 */
L_171ADEEB:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171ADEEB: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADEDD; /* 0x171ADEEE: jne 0x171adedd */
L_171ADEF0:
    _flag_a = (uint32_t)(MEM32(0x172389F0)); _flag_b = (uint32_t)(1);
    MEM32(0x172389F0) = MEM32(0x172389F0) + 1; /* 0x171ADEF0: inc dword ptr [0x172389f0] */
    _flag_k = FK_INC;
    goto L_171ADF2A; /* 0x171ADEF6: jmp 0x171adf2a */
L_171ADEF8:
    /* cmp esi, 0x2Fu */ /* 0x171ADEF8: cmp esi, 0x2f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF2A; /* 0x171ADEFB: jne 0x171adf2a */
L_171ADEFD:
    ecx = edi; /* 0x171ADEFD: mov ecx, edi */
    RECOMP_CALL(sub_171AD65B); /* 0x171ADEFF: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x171ADF04: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF1D; /* 0x171ADF06: jne 0x171adf1d */
L_171ADF08:
    ecx = edi; /* 0x171ADF08: mov ecx, edi */
    RECOMP_CALL(sub_171AD65B); /* 0x171ADF0A: call 0x171ad65b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171ADF0F: mov esi, eax */
    /* cmp esi, 0xAu */ /* 0x171ADF11: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADEF0; /* 0x171ADF14: je 0x171adef0 */
L_171ADF16:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171ADF16: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF08; /* 0x171ADF19: jne 0x171adf08 */
L_171ADF1B:
    RECOMP_BACKEDGE();
    goto L_171ADEF0; /* 0x171ADF1B: jmp 0x171adef0 */
L_171ADF1D:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171ADF1D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADF2F; /* 0x171ADF20: je 0x171adf2f */
L_171ADF22:
    ecx = MEM32(edi + 0xC); /* 0x171ADF22: mov ecx, dword ptr [edi + 0xc] */
    eax = MEM32(ecx); /* 0x171ADF25: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171ADF27: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171ADF2A:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171ADF2A: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADF3A; /* 0x171ADF2D: je 0x171adf3a */
L_171ADF2F:
    PUSH32(esp, esi); /* 0x171ADF2F: push esi */
    RECOMP_CALL(sub_1721B2F0); /* 0x171ADF30: call 0x1721b2f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADF35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADF37: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADEC2; /* 0x171ADF38: jne 0x171adec2 */
L_171ADF3A:
    /* cmp esi, 0x7Bu */ /* 0x171ADF3A: cmp esi, 0x7b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF44; /* 0x171ADF3D: jne 0x171adf44 */
L_171ADF3F:
    PUSH32(esp, 0xAu); /* 0x171ADF3F: push 0xa */
L_171ADF41:
    eax = POP32_VAL(esp); /* 0x171ADF41: pop eax */
    esi = POP32_VAL(esp); /* 0x171ADF42: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171ADF43: ret  */
L_171ADF44:
    /* cmp esi, 0x7Du */ /* 0x171ADF44: cmp esi, 0x7d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF4D; /* 0x171ADF47: jne 0x171adf4d */
L_171ADF49:
    PUSH32(esp, 0xBu); /* 0x171ADF49: push 0xb */
    RECOMP_BACKEDGE();
    goto L_171ADF41; /* 0x171ADF4B: jmp 0x171adf41 */
L_171ADF4D:
    /* cmp esi, 0x28u */ /* 0x171ADF4D: cmp esi, 0x28 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF56; /* 0x171ADF50: jne 0x171adf56 */
L_171ADF52:
    PUSH32(esp, 0xCu); /* 0x171ADF52: push 0xc */
    RECOMP_BACKEDGE();
    goto L_171ADF41; /* 0x171ADF54: jmp 0x171adf41 */
L_171ADF56:
    /* cmp esi, 0x29u */ /* 0x171ADF56: cmp esi, 0x29 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF5F; /* 0x171ADF59: jne 0x171adf5f */
L_171ADF5B:
    PUSH32(esp, 0xDu); /* 0x171ADF5B: push 0xd */
    RECOMP_BACKEDGE();
    goto L_171ADF41; /* 0x171ADF5D: jmp 0x171adf41 */
L_171ADF5F:
    /* cmp esi, 0x5Bu */ /* 0x171ADF5F: cmp esi, 0x5b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF68; /* 0x171ADF62: jne 0x171adf68 */
L_171ADF64:
    PUSH32(esp, 0xEu); /* 0x171ADF64: push 0xe */
    RECOMP_BACKEDGE();
    goto L_171ADF41; /* 0x171ADF66: jmp 0x171adf41 */
L_171ADF68:
    /* cmp esi, 0x5Du */ /* 0x171ADF68: cmp esi, 0x5d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF71; /* 0x171ADF6B: jne 0x171adf71 */
L_171ADF6D:
    PUSH32(esp, 0xFu); /* 0x171ADF6D: push 0xf */
    RECOMP_BACKEDGE();
    goto L_171ADF41; /* 0x171ADF6F: jmp 0x171adf41 */
L_171ADF71:
    /* cmp esi, 0x2Eu */ /* 0x171ADF71: cmp esi, 0x2e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF7A; /* 0x171ADF74: jne 0x171adf7a */
L_171ADF76:
    PUSH32(esp, 0x12u); /* 0x171ADF76: push 0x12 */
    RECOMP_BACKEDGE();
    goto L_171ADF41; /* 0x171ADF78: jmp 0x171adf41 */
L_171ADF7A:
    /* cmp esi, 0x2Cu */ /* 0x171ADF7A: cmp esi, 0x2c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF83; /* 0x171ADF7D: jne 0x171adf83 */
L_171ADF7F:
    PUSH32(esp, 0x13u); /* 0x171ADF7F: push 0x13 */
    RECOMP_BACKEDGE();
    goto L_171ADF41; /* 0x171ADF81: jmp 0x171adf41 */
L_171ADF83:
    /* cmp esi, 0x3Bu */ /* 0x171ADF83: cmp esi, 0x3b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF8C; /* 0x171ADF86: jne 0x171adf8c */
L_171ADF88:
    PUSH32(esp, 0x14u); /* 0x171ADF88: push 0x14 */
    RECOMP_BACKEDGE();
    goto L_171ADF41; /* 0x171ADF8A: jmp 0x171adf41 */
L_171ADF8C:
    /* cmp esi, 0x22u */ /* 0x171ADF8C: cmp esi, 0x22 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x22u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADF97; /* 0x171ADF8F: jne 0x171adf97 */
L_171ADF91:
    esi = POP32_VAL(esp); /* 0x171ADF91: pop esi */
    RECOMP_BACKEDGE();
    goto L_171AD7A5; /* 0x171ADF92: jmp 0x171ad7a5 */
L_171ADF97:
    /* cmp esi, 0x3Cu */ /* 0x171ADF97: cmp esi, 0x3c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADFA2; /* 0x171ADF9A: jne 0x171adfa2 */
L_171ADF9C:
    esi = POP32_VAL(esp); /* 0x171ADF9C: pop esi */
    RECOMP_BACKEDGE();
    goto L_171AD6A7; /* 0x171ADF9D: jmp 0x171ad6a7 */
L_171ADFA2:
    PUSH32(esp, esi); /* 0x171ADFA2: push esi */
    RECOMP_CALL(sub_1721B350); /* 0x171ADFA3: call 0x1721b350 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADFA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADFAA: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADFEF; /* 0x171ADFAB: jne 0x171adfef */
L_171ADFAD:
    /* cmp esi, 0x5Fu */ /* 0x171ADFAD: cmp esi, 0x5f */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADFEF; /* 0x171ADFB0: je 0x171adfef */
L_171ADFB2:
    PUSH32(esp, esi); /* 0x171ADFB2: push esi */
    RECOMP_CALL(sub_1721B2E4); /* 0x171ADFB3: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171ADFB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171ADFBA: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171ADFE7; /* 0x171ADFBB: jne 0x171adfe7 */
L_171ADFBD:
    /* cmp esi, 0x2Du */ /* 0x171ADFBD: cmp esi, 0x2d */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADFE7; /* 0x171ADFC0: je 0x171adfe7 */
L_171ADFC2:
    /* cmp esi, 0x2Bu */ /* 0x171ADFC2: cmp esi, 0x2b */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADFE7; /* 0x171ADFC5: je 0x171adfe7 */
L_171ADFC7:
    /* cmp esi, 0xFEu */ /* 0x171ADFC7: cmp esi, 0xfe */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171ADFE0; /* 0x171ADFCD: je 0x171adfe0 */
L_171ADFCF:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171ADFCF: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171ADFE0; /* 0x171ADFD2: jne 0x171adfe0 */
L_171ADFD4:
    MEM32(0x17253480) = 1; /* 0x171ADFD4: mov dword ptr [0x17253480], 1 */
    esi = POP32_VAL(esp); /* 0x171ADFDE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171ADFDF: ret  */
L_171ADFE0:
    eax = 0xFFu; /* 0x171ADFE0: mov eax, 0xff */
    esi = POP32_VAL(esp); /* 0x171ADFE5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171ADFE6: ret  */
L_171ADFE7:
    PUSH32(esp, esi); /* 0x171ADFE7: push esi */
    RECOMP_CALL(sub_171ADA9F); /* 0x171ADFE8: call 0x171ada9f */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171ADFED: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171ADFEE: ret  */
L_171ADFEF:
    PUSH32(esp, esi); /* 0x171ADFEF: push esi */
    RECOMP_CALL(sub_171AD967); /* 0x171ADFF0: call 0x171ad967 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171ADFF5: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171ADFF6: ret  */
    RECOMP_REGS_OUT();
}

void sub_171ADFFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171ADFFCu);

L_171ADFFC:
    edi = edi; /* 0x171ADFFC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171ADFFE: push ebp */
    ebp = esp; /* 0x171ADFFF: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171AE001: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x171AE004: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE00F; /* 0x171AE006: je 0x171ae00f */
L_171AE008:
    eax = MEM32(ecx); /* 0x171AE008: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171AE00A: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171AE00C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171AE00F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE00F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x171AE011: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AE012: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AE01A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE01Au);

L_171AE01A:
    edi = edi; /* 0x171AE01A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AE01C: push ebp */
    ebp = esp; /* 0x171AE01D: mov ebp, esp */
    eax = ecx; /* 0x171AE01F: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171AE021: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x4); /* 0x171AE024: mov edx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx); /* 0x171AE027: mov ecx, dword ptr [ecx] */
    MEM32(eax + 0x4) = ecx; /* 0x171AE029: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x171AE02C: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = 0xAu; /* 0x171AE02F: mov dword ptr [eax + 0xc], 0xa */
    MEM32(eax + 0x10) = edx; /* 0x171AE036: mov dword ptr [eax + 0x10], edx */
    MEM32(eax) = 0x17023CFCu; /* 0x171AE039: mov dword ptr [eax], 0x17023cfc */
    ebp = POP32_VAL(esp); /* 0x171AE03F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AE040: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AE048(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE048u);

L_171AE048:
    edi = edi; /* 0x171AE048: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AE04A: push ebp */
    ebp = esp; /* 0x171AE04B: mov ebp, esp */
    eax = ecx; /* 0x171AE04D: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171AE04F: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x4); /* 0x171AE052: mov edx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx); /* 0x171AE055: mov ecx, dword ptr [ecx] */
    MEM32(eax + 0x4) = ecx; /* 0x171AE057: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x171AE05A: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = 0xFAu; /* 0x171AE05D: mov dword ptr [eax + 0xc], 0xfa */
    MEM32(eax + 0x10) = edx; /* 0x171AE064: mov dword ptr [eax + 0x10], edx */
    MEM32(eax) = 0x17023D08u; /* 0x171AE067: mov dword ptr [eax], 0x17023d08 */
    ebp = POP32_VAL(esp); /* 0x171AE06D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AE06E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AE076(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE076u);

L_171AE076:
    edi = edi; /* 0x171AE076: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AE078: push ebp */
    ebp = esp; /* 0x171AE079: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AE07B: push esi */
    esi = ecx; /* 0x171AE07C: mov esi, ecx */
    MEM32(esi) = 0x17023CFCu; /* 0x171AE07E: mov dword ptr [esi], 0x17023cfc */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171AE084: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE087: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AE08C: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x171AE090: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE09A; /* 0x171AE091: je 0x171ae09a */
L_171AE093:
    PUSH32(esp, esi); /* 0x171AE093: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AE094: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE099: pop ecx */
L_171AE09A:
    eax = esi; /* 0x171AE09A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AE09C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AE09D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AE09E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AE0A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE0A6u);

L_171AE0A6:
    edi = edi; /* 0x171AE0A6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AE0A8: push ebp */
    ebp = esp; /* 0x171AE0A9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AE0AB: push esi */
    esi = ecx; /* 0x171AE0AC: mov esi, ecx */
    MEM32(esi) = 0x17023D08u; /* 0x171AE0AE: mov dword ptr [esi], 0x17023d08 */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171AE0B4: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE0B7: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AE0BC: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x171AE0C0: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE0CA; /* 0x171AE0C1: je 0x171ae0ca */
L_171AE0C3:
    PUSH32(esp, esi); /* 0x171AE0C3: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AE0C4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE0C9: pop ecx */
L_171AE0CA:
    eax = esi; /* 0x171AE0CA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AE0CC: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AE0CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AE0CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AE0D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE0D6u);

L_171AE0D6:
    edi = edi; /* 0x171AE0D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AE0D8: push ebp */
    ebp = esp; /* 0x171AE0D9: mov ebp, esp */
    eax = MEM32(ecx + 0x4); /* 0x171AE0DB: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + 0x10); /* 0x171AE0DE: mov ecx, dword ptr [ecx + 0x10] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171AE0E1: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171AE0E1: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171AE0E4: push eax */
    PUSH32(esp, ecx); /* 0x171AE0E5: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171AE0E6: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171AAF74); /* 0x171AE0E9: call 0x171aaf74 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AE0EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AE0EF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AE0F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE0F7u);

L_171AE0F7:
    edi = edi; /* 0x171AE0F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AE0F9: push ebp */
    ebp = esp; /* 0x171AE0FA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AE0FC: push esi */
    esi = ecx; /* 0x171AE0FD: mov esi, ecx */
    MEM32(esi) = 0x17023CF0u; /* 0x171AE0FF: mov dword ptr [esi], 0x17023cf0 */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171AE105: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE108: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171AE10D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = POP32_VAL(esp); /* 0x171AE111: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE11B; /* 0x171AE112: je 0x171ae11b */
L_171AE114:
    PUSH32(esp, esi); /* 0x171AE114: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171AE115: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE11A: pop ecx */
L_171AE11B:
    eax = esi; /* 0x171AE11B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171AE11D: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AE11E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AE11F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AE127(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE127u);

L_171AE127:
    /* cmp MEM32(0x17253484), 0 */ /* 0x171AE127: cmp dword ptr [0x17253484], 0 */
    _flag_a = (uint32_t)(MEM32(0x17253484)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE13D; /* 0x171AE12E: je 0x171ae13d */
L_171AE130:
    _flag_a = (uint32_t)(MEM32(0x17253484)); _flag_b = (uint32_t)(0);
    MEM32(0x17253484) = MEM32(0x17253484) & 0; /* 0x171AE130: and dword ptr [0x17253484], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFu; /* 0x171AE137: mov eax, 0xff */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AE13C: ret  */
L_171AE13D:
    eax = MEM32(0x17253478); /* 0x171AE13D: mov eax, dword ptr [0x17253478] */
    ecx = MEM32(eax + 0x20); /* 0x171AE142: mov ecx, dword ptr [eax + 0x20] */
    /* test ecx, ecx */ /* 0x171AE145: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE150; /* 0x171AE147: jne 0x171ae150 */
L_171AE149:
    RECOMP_CALL(sub_171ADBC2); /* 0x171AE149: call 0x171adbc2 */
    RECOMP_FLAGS_IN();
    goto L_171AE165; /* 0x171AE14E: jmp 0x171ae165 */
L_171AE150:
    /* cmp ecx, 1 */ /* 0x171AE150: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AE160; /* 0x171AE153: jne 0x171ae160 */
L_171AE155:
    PUSH32(esp, edi); /* 0x171AE155: push edi */
    edi = eax; /* 0x171AE156: mov edi, eax */
    RECOMP_CALL(sub_171ADEBF); /* 0x171AE158: call 0x171adebf */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171AE15D: pop edi */
    goto L_171AE165; /* 0x171AE15E: jmp 0x171ae165 */
L_171AE160:
    eax = 0xFFu; /* 0x171AE160: mov eax, 0xff */
L_171AE165:
    /* cmp eax, 0x37u */ /* 0x171AE165: cmp eax, 0x37 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x37u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AE176; /* 0x171AE168: jne 0x171ae176 */
L_171AE16A:
    MEM32(0x17253480) = 1; /* 0x171AE16A: mov dword ptr [0x17253480], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE174: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE176:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AE176: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AE17C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE17Cu);

L_171AE17C:
    edi = edi; /* 0x171AE17C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AE17E: push ebp */
    ebp = esp; /* 0x171AE17F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AE181: push esi */
    esi = ecx; /* 0x171AE182: mov esi, ecx */
    /* cmp MEM32(esi + 0x2C), 0 */ /* 0x171AE184: cmp dword ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AE1B3; /* 0x171AE188: jne 0x171ae1b3 */
L_171AE18A:
    PUSH32(esp, 0x10u); /* 0x171AE18A: push 0x10 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE18C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE191: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AE193: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE1AA; /* 0x171AE194: je 0x171ae1aa */
L_171AE196:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171AE196: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x171AE199: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x171AE19D: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = 0x64u; /* 0x171AE1A1: mov dword ptr [eax + 8], 0x64 */
    goto L_171AE1AC; /* 0x171AE1A8: jmp 0x171ae1ac */
L_171AE1AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE1AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE1AC:
    /* test eax, eax */ /* 0x171AE1AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x2C) = eax; /* 0x171AE1AE: mov dword ptr [esi + 0x2c], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE1BF; /* 0x171AE1B1: je 0x171ae1bf */
L_171AE1B3:
    ecx = MEM32(esi + 0x2C); /* 0x171AE1B3: mov ecx, dword ptr [esi + 0x2c] */
    eax = ebp + 0x8; /* 0x171AE1B6: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171AE1B9: push eax */
    RECOMP_CALL(sub_171A902A); /* 0x171AE1BA: call 0x171a902a */
    RECOMP_FLAGS_IN();
L_171AE1BF:
    esi = POP32_VAL(esp); /* 0x171AE1BF: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AE1C0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AE1C1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AE1C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AE1C9u);

L_171AE1C9:
    edi = edi; /* 0x171AE1C9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AE1CB: push ebp */
    ebp = esp; /* 0x171AE1CC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171AE1CE: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AE1D1: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AE1D2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AE1D4: push esi */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171AE1D5: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = 0x17251118u; /* 0x171AE1D8: mov edx, 0x17251118 */
    PUSH32(esp, edi); /* 0x171AE1DD: push edi */
    MEM32(0x17253470) = ebx; /* 0x171AE1DE: mov dword ptr [0x17253470], ebx */
    MEM32(0x1725346C) = ebx; /* 0x171AE1E4: mov dword ptr [0x1725346c], ebx */
    MEM32(0x17253468) = eax; /* 0x171AE1EA: mov dword ptr [0x17253468], eax */
    MEM32(0x17253464) = 0x17253058u; /* 0x171AE1EF: mov dword ptr [0x17253464], 0x17253058 */
    MEM32(0x17253460) = edx; /* 0x171AE1F9: mov dword ptr [0x17253460], edx */
    MEM16(0x17253058) = (uint16_t)(LO16(ebx)); /* 0x171AE1FF: mov word ptr [0x17253058], bx */
    goto L_171AE20E; /* 0x171AE206: jmp 0x171ae20e */
L_171AE208:
    edx = MEM32(0x17253460); /* 0x171AE208: mov edx, dword ptr [0x17253460] */
L_171AE20E:
    ecx = (int32_t)(int16_t)MEM16(ebx * 2 + 0x17237F80); /* 0x171AE20E: movsx ecx, word ptr [ebx*2 + 0x17237f80] */
    /* test ecx, ecx */ /* 0x171AE216: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE2FC; /* 0x171AE218: jne 0x171ae2fc */
L_171AE21E:
    /* test eax, eax */ /* 0x171AE21E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AE23D; /* 0x171AE220: jge 0x171ae23d */
L_171AE222:
    RECOMP_CALL(sub_171AE127); /* 0x171AE222: call 0x171ae127 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE227: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(0x17253460); /* 0x171AE229: mov edx, dword ptr [0x17253460] */
    MEM32(0x17253468) = eax; /* 0x171AE22F: mov dword ptr [0x17253468], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AE23D; /* 0x171AE234: jge 0x171ae23d */
L_171AE236:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE236: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253468) = eax; /* 0x171AE238: mov dword ptr [0x17253468], eax */
L_171AE23D:
    ecx = (int32_t)(int16_t)MEM16(ebx * 2 + 0x172380D8); /* 0x171AE23D: movsx ecx, word ptr [ebx*2 + 0x172380d8] */
    /* test ecx, ecx */ /* 0x171AE245: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE2BF; /* 0x171AE247: je 0x171ae2bf */
L_171AE249:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171AE249: add ecx, eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_171AE2BF; /* 0x171AE24B: js 0x171ae2bf */
L_171AE24D:
    edi = 0x18Eu; /* 0x171AE24D: mov edi, 0x18e */
    /* cmp ecx, edi */ /* 0x171AE252: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171AE2C4; /* 0x171AE254: jg 0x171ae2c4 */
L_171AE256:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x171AE256: add ecx, ecx */
    _flag_k = FK_ADD;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x17238650); /* 0x171AE258: movsx esi, word ptr [ecx + 0x17238650] */
    /* cmp esi, eax */ /* 0x171AE25F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AE2C4; /* 0x171AE261: jne 0x171ae2c4 */
L_171AE263:
    /* cmp MEM32(0x17253464), 0x1725343Eu */ /* 0x171AE263: cmp dword ptr [0x17253464], 0x1725343e */
    _flag_a = (uint32_t)(MEM32(0x17253464)); _flag_b = (uint32_t)(0x1725343Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AED0C; /* 0x171AE26D: jae 0x171aed0c */
L_171AE273:
    _flag_a = (uint32_t)(MEM32(0x17253464)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x17253464) = MEM32(0x17253464) + 2; /* 0x171AE273: add dword ptr [0x17253464], 2 */
    _flag_k = FK_ADD;
    ebx = (int32_t)(int16_t)MEM16(ecx + 0x17238330); /* 0x171AE27A: movsx ebx, word ptr [ecx + 0x17238330] */
    eax = MEM32(0x17253464); /* 0x171AE281: mov eax, dword ptr [0x17253464] */
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x171AE286: mov word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM32(0x17253460)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x17253460) = MEM32(0x17253460) + 0x10u; /* 0x171AE289: add dword ptr [0x17253460], 0x10 */
    _flag_k = FK_ADD;
    edi = MEM32(0x17253460); /* 0x171AE290: mov edi, dword ptr [0x17253460] */
    esi = 0x17253440u; /* 0x171AE296: mov esi, 0x17253440 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE29B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE29C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE29D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE29E: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171AE29F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x1725346C), 0 */ /* 0x171AE2A2: cmp dword ptr [0x1725346c], 0 */
    _flag_a = (uint32_t)(MEM32(0x1725346C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17253468) = eax; /* 0x171AE2A9: mov dword ptr [0x17253468], eax */
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171AE208; /* 0x171AE2AE: jle 0x171ae208 */
L_171AE2B4:
    _flag_a = (uint32_t)(MEM32(0x1725346C)); _flag_b = (uint32_t)(1);
    MEM32(0x1725346C) = MEM32(0x1725346C) - 1; /* 0x171AE2B4: dec dword ptr [0x1725346c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_171AE208; /* 0x171AE2BA: jmp 0x171ae208 */
L_171AE2BF:
    edi = 0x18Eu; /* 0x171AE2BF: mov edi, 0x18e */
L_171AE2C4:
    ecx = (int32_t)(int16_t)MEM16(ebx * 2 + 0x172381D8); /* 0x171AE2C4: movsx ecx, word ptr [ebx*2 + 0x172381d8] */
    /* test ecx, ecx */ /* 0x171AE2CC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AEC54; /* 0x171AE2CE: je 0x171aec54 */
L_171AE2D4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171AE2D4: add ecx, eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_171AEC54; /* 0x171AE2D6: js 0x171aec54 */
L_171AE2DC:
    /* cmp ecx, edi */ /* 0x171AE2DC: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171AEC54; /* 0x171AE2DE: jg 0x171aec54 */
L_171AE2E4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x171AE2E4: add ecx, ecx */
    _flag_k = FK_ADD;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x17238650); /* 0x171AE2E6: movsx esi, word ptr [ecx + 0x17238650] */
    /* cmp esi, eax */ /* 0x171AE2ED: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AEC54; /* 0x171AE2EF: jne 0x171aec54 */
L_171AE2F5:
    ecx = (int32_t)(int16_t)MEM16(ecx + 0x17238330); /* 0x171AE2F5: movsx ecx, word ptr [ecx + 0x17238330] */
L_171AE2FC:
    eax = ecx + ecx; /* 0x171AE2FC: lea eax, [ecx + ecx] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171AE2FF: mov dword ptr [ebp - 0x1c], eax */
    eax = (int32_t)(int16_t)MEM16(eax + 0x17237ED0); /* 0x171AE302: movsx eax, word ptr [eax + 0x17237ed0] */
    MEM32(ebp + (-0x14)) = eax; /* 0x171AE309: mov dword ptr [ebp - 0x14], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x171AE30C: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x171AE30C: shl eax, 4 */
    esi = edx; /* 0x171AE30F: mov esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x171AE311: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x10u); /* 0x171AE313: push 0x10 */
    MEM32(ebp + (-0x18)) = eax; /* 0x171AE315: mov dword ptr [ebp - 0x18], eax */
    ebx = POP32_VAL(esp); /* 0x171AE318: pop ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x171AE319: add esi, ebx */
    _flag_k = FK_ADD;
    eax = 0x17253450u; /* 0x171AE31B: mov eax, 0x17253450 */
    edi = eax; /* 0x171AE320: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE322: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE323: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE324: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFBu; /* 0x171AE325: add ecx, -5 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x49u */ /* 0x171AE328: cmp ecx, 0x49 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE32B: movsd dword ptr es:[edi], dword ptr [esi] */
    if (CMP_A(_flag_a, _flag_b)) goto L_171AE3CF; /* 0x171AE32C: ja 0x171ae3cf */
L_171AE332:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x171AED14)); goto _ljump; }
L_171AE339:
    ecx = MEM32(0x17253478); /* 0x171AE339: mov ecx, dword ptr [0x17253478] */
    eax = ebp + (-0x8); /* 0x171AE33F: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x171AE342: push eax */
    PUSH32(esp, MEM32(edx + (-0x50))); /* 0x171AE343: push dword ptr [edx - 0x50] */
    RECOMP_CALL(sub_171AD5E7); /* 0x171AE346: call 0x171ad5e7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE34B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x17253460); /* 0x171AE34D: mov eax, dword ptr [0x17253460] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE36D; /* 0x171AE352: jne 0x171ae36d */
L_171AE354:
    ecx = MEM32(eax + (-0x10)); /* 0x171AE354: mov ecx, dword ptr [eax - 0x10] */
    /* test ecx, ecx */ /* 0x171AE357: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE362; /* 0x171AE359: je 0x171ae362 */
L_171AE35B:
    PUSH32(esp, 1); /* 0x171AE35B: push 1 */
    RECOMP_CALL(sub_171ABA0A); /* 0x171AE35D: call 0x171aba0a */
    RECOMP_FLAGS_IN();
L_171AE362:
    eax = MEM32(0x17253460); /* 0x171AE362: mov eax, dword ptr [0x17253460] */
    _flag_a = (uint32_t)(MEM32(eax + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(eax + (-0x10)) = MEM32(eax + (-0x10)) & 0; /* 0x171AE367: and dword ptr [eax - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AE3A3; /* 0x171AE36B: jmp 0x171ae3a3 */
L_171AE36D:
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x171AE36D: push dword ptr [eax - 0x10] */
    ecx = eax + (-0x20); /* 0x171AE370: lea ecx, [eax - 0x20] */
    PUSH32(esp, ecx); /* 0x171AE373: push ecx */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x171AE374: push dword ptr [eax - 0x40] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AE377: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(0x17253478)); /* 0x171AE37A: push dword ptr [0x17253478] */
    RECOMP_CALL(sub_171ABD50); /* 0x171AE380: call 0x171abd50 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE385: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE399; /* 0x171AE387: je 0x171ae399 */
L_171AE389:
    ecx = MEM32(0x17253478); /* 0x171AE389: mov ecx, dword ptr [0x17253478] */
    PUSH32(esp, eax); /* 0x171AE38F: push eax */
    RECOMP_CALL(sub_171AE17C); /* 0x171AE390: call 0x171ae17c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE395: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE3A3; /* 0x171AE397: jne 0x171ae3a3 */
L_171AE399:
    MEM32(0x17253484) = 1; /* 0x171AE399: mov dword ptr [0x17253484], 1 */
L_171AE3A3:
    eax = MEM32(0x17253460); /* 0x171AE3A3: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x50))); /* 0x171AE3A8: push dword ptr [eax - 0x50] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE3AB: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17253460); /* 0x171AE3B0: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x171AE3B5: push dword ptr [eax - 0x40] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE3B8: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE3BD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171AE3BE: pop ecx */
    MEM32(0x1725347C) = 1; /* 0x171AE3BF: mov dword ptr [0x1725347c], 1 */
L_171AE3C9:
    edx = MEM32(0x17253460); /* 0x171AE3C9: mov edx, dword ptr [0x17253460] */
L_171AE3CF:
    eax = MEM32(ebp + (-0x14)); /* 0x171AE3CF: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(0x17253464); /* 0x171AE3D2: mov ecx, dword ptr [0x17253464] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x18)); /* 0x171AE3D8: sub edx, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171AE3DB: neg eax */
    _flag_k = FK_CMP;
    eax = ecx + eax * 2; /* 0x171AE3DD: lea eax, [ecx + eax*2] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x171AE3E0: mov ecx, dword ptr [ebp - 0x1c] */
    ecx = (int32_t)(int16_t)MEM16(ecx + 0x17237E20); /* 0x171AE3E3: movsx ecx, word ptr [ecx + 0x17237e20] */
    MEM32(0x17253464) = eax; /* 0x171AE3EA: mov dword ptr [0x17253464], eax */
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171AE3EF: movsx esi, word ptr [eax] */
    /* test esi, esi */ /* 0x171AE3F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253460) = edx; /* 0x171AE3F4: mov dword ptr [0x17253460], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AEC01; /* 0x171AE3FA: jne 0x171aec01 */
L_171AE400:
    /* test ecx, ecx */ /* 0x171AE400: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AEC01; /* 0x171AE402: jne 0x171aec01 */
L_171AE408:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AE408: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AE409: inc eax */
    _flag_k = FK_INC;
    MEM32(0x17253464) = eax; /* 0x171AE40A: mov dword ptr [0x17253464], eax */
    PUSH32(esp, 0x10u); /* 0x171AE40F: push 0x10 */
    ebx = POP32_VAL(esp); /* 0x171AE411: pop ebx */
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x171AE412: mov word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM32(0x17253460)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x17253460) = MEM32(0x17253460) + ebx; /* 0x171AE415: add dword ptr [0x17253460], ebx */
    _flag_k = FK_ADD;
    edi = MEM32(0x17253460); /* 0x171AE41B: mov edi, dword ptr [0x17253460] */
    esi = 0x17253450u; /* 0x171AE421: mov esi, 0x17253450 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE426: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE427: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE428: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AE429: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(0x17253468); /* 0x171AE42A: mov eax, dword ptr [0x17253468] */
    /* test eax, eax */ /* 0x171AE42F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AE44A; /* 0x171AE431: jge 0x171ae44a */
L_171AE433:
    RECOMP_CALL(sub_171AE127); /* 0x171AE433: call 0x171ae127 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE438: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253468) = eax; /* 0x171AE43A: mov dword ptr [0x17253468], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AE44A; /* 0x171AE43F: jge 0x171ae44a */
L_171AE441:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE441: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253468) = eax; /* 0x171AE443: mov dword ptr [0x17253468], eax */
    /* test eax, eax */ /* 0x171AE448: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE44A:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171AE208; /* 0x171AE44A: jne 0x171ae208 */
L_171AE450:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE450: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AED0F; /* 0x171AE452: jmp 0x171aed0f */
L_171AE457:
    edx = MEM32(edx + (-0x40)); /* 0x171AE457: mov edx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AE45A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171AE45C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE4A7; /* 0x171AE45E: je 0x171ae4a7 */
L_171AE460:
    eax = edx; /* 0x171AE460: mov eax, edx */
    edx = eax + 0x1; /* 0x171AE462: lea edx, [eax + 1] */
L_171AE465:
    SET_LO8(ecx, MEM8(eax)); /* 0x171AE465: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AE467: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AE468: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE465; /* 0x171AE46A: jne 0x171ae465 */
L_171AE46C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AE46C: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171AE46E: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171AE471: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171AE472: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171AE477: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171AE479: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AE47B: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE48D; /* 0x171AE47C: jne 0x171ae48d */
L_171AE47E:
    MEM32(0x17253484) = 1; /* 0x171AE47E: mov dword ptr [0x17253484], 1 */
    goto L_171AE50D; /* 0x171AE488: jmp 0x171ae50d */
L_171AE48D:
    eax = MEM32(0x17253460); /* 0x171AE48D: mov eax, dword ptr [0x17253460] */
    ecx = esi; /* 0x171AE492: mov ecx, esi */
    esi = MEM32(eax + (-0x40)); /* 0x171AE494: mov esi, dword ptr [eax - 0x40] */
    eax = ecx; /* 0x171AE497: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AE499: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AE499: shr ecx, 2 */
    edi = ebx; /* 0x171AE49C: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AE49E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171AE4A0: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AE4A2: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AE4A5: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171AE4A7:
    PUSH32(esp, 0x34u); /* 0x171AE4A7: push 0x34 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE4A9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE4AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AE4B0: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE4CC; /* 0x171AE4B1: je 0x171ae4cc */
L_171AE4B3:
    edx = MEM32(0x17253460); /* 0x171AE4B3: mov edx, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(edx + (-0x10))); /* 0x171AE4B9: push dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFE0u; /* 0x171AE4BC: add edx, -0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x171AE4BF: push edx */
    PUSH32(esp, ebx); /* 0x171AE4C0: push ebx */
    ecx = eax; /* 0x171AE4C1: mov ecx, eax */
    RECOMP_CALL(sub_171A9466); /* 0x171AE4C3: call 0x171a9466 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171AE4C8: mov esi, eax */
    goto L_171AE4CE; /* 0x171AE4CA: jmp 0x171ae4ce */
L_171AE4CC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AE4CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE4CE:
    /* test esi, esi */ /* 0x171AE4CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE4E9; /* 0x171AE4D0: jne 0x171ae4e9 */
L_171AE4D2:
    /* test ebx, ebx */ /* 0x171AE4D2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253484) = 1; /* 0x171AE4D4: mov dword ptr [0x17253484], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE50D; /* 0x171AE4DE: je 0x171ae50d */
L_171AE4E0:
    PUSH32(esp, ebx); /* 0x171AE4E0: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171AE4E1: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE4E6: pop ecx */
    goto L_171AE50D; /* 0x171AE4E7: jmp 0x171ae50d */
L_171AE4E9:
    ecx = MEM32(0x17253478); /* 0x171AE4E9: mov ecx, dword ptr [0x17253478] */
    PUSH32(esp, esi); /* 0x171AE4EF: push esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x171AE4F0: add ecx, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171A96E9); /* 0x171AE4F3: call 0x171a96e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE4F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE506; /* 0x171AE4FA: jne 0x171ae506 */
L_171AE4FC:
    MEM32(0x17253484) = 1; /* 0x171AE4FC: mov dword ptr [0x17253484], 1 */
L_171AE506:
    ecx = esi; /* 0x171AE506: mov ecx, esi */
    RECOMP_CALL(sub_171A52D2); /* 0x171AE508: call 0x171a52d2 */
    RECOMP_FLAGS_IN();
L_171AE50D:
    eax = MEM32(0x17253460); /* 0x171AE50D: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x50))); /* 0x171AE512: push dword ptr [eax - 0x50] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE515: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17253460); /* 0x171AE51A: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x171AE51F: push dword ptr [eax - 0x40] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE522: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17253460); /* 0x171AE527: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x171AE52C: push dword ptr [eax - 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x171AE52F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    goto L_171AE8E2; /* 0x171AE534: jmp 0x171ae8e2 */
L_171AE539:
    _flag_a = (uint32_t)(MEM32(0x17253450)); _flag_b = (uint32_t)(0);
    MEM32(0x17253450) = MEM32(0x17253450) & 0; /* 0x171AE539: and dword ptr [0x17253450], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171AE3CF; /* 0x171AE540: jmp 0x171ae3cf */
L_171AE545:
    PUSH32(esp, ebx); /* 0x171AE545: push ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE546: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE54B: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AE54C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171AE54E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE563; /* 0x171AE550: je 0x171ae563 */
L_171AE552:
    MEM32(eax) = ecx; /* 0x171AE552: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x171AE554: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = 0xAu; /* 0x171AE557: mov dword ptr [eax + 8], 0xa */
    MEM32(eax + 0xC) = ecx; /* 0x171AE55E: mov dword ptr [eax + 0xc], ecx */
    goto L_171AE565; /* 0x171AE561: jmp 0x171ae565 */
L_171AE563:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE563: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE565:
    /* cmp eax, ecx */ /* 0x171AE565: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(0x17253460); /* 0x171AE567: mov edx, dword ptr [0x17253460] */
    MEM32(0x17253450) = eax; /* 0x171AE56D: mov dword ptr [0x17253450], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AE583; /* 0x171AE572: jne 0x171ae583 */
L_171AE574:
    MEM32(0x17253484) = 1; /* 0x171AE574: mov dword ptr [0x17253484], 1 */
    RECOMP_BACKEDGE();
    goto L_171AE3CF; /* 0x171AE57E: jmp 0x171ae3cf */
L_171AE583:
    /* cmp MEM32(edx), ecx */ /* 0x171AE583: cmp dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE3CF; /* 0x171AE585: je 0x171ae3cf */
L_171AE58B:
    ecx = eax; /* 0x171AE58B: mov ecx, eax */
L_171AE58D:
    PUSH32(esp, edx); /* 0x171AE58D: push edx */
    RECOMP_CALL(sub_171A902A); /* 0x171AE58E: call 0x171a902a */
    RECOMP_FLAGS_IN();
    goto L_171AEBD6; /* 0x171AE593: jmp 0x171aebd6 */
L_171AE598:
    ecx = MEM32(edx + (-0x10)); /* 0x171AE598: mov ecx, dword ptr [edx - 0x10] */
    MEM32(0x17253450) = ecx; /* 0x171AE59B: mov dword ptr [0x17253450], ecx */
    /* cmp MEM32(edx), 0 */ /* 0x171AE5A1: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE3CF; /* 0x171AE5A4: je 0x171ae3cf */
L_171AE5AA:
    RECOMP_BACKEDGE();
    goto L_171AE58D; /* 0x171AE5AA: jmp 0x171ae58d */
L_171AE5AC:
    eax = MEM32(edx); /* 0x171AE5AC: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x171AE5AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE539; /* 0x171AE5B0: je 0x171ae539 */
L_171AE5B2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AE5B2: add eax, 4 */
    _flag_k = FK_ADD;
    goto L_171AE646; /* 0x171AE5B5: jmp 0x171ae646 */
L_171AE5BA:
    ecx = MEM32(0x17253478); /* 0x171AE5BA: mov ecx, dword ptr [0x17253478] */
    eax = ebp + (-0xC); /* 0x171AE5C0: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171AE5C3: push eax */
    PUSH32(esp, MEM32(edx + (-0x50))); /* 0x171AE5C4: push dword ptr [edx - 0x50] */
    RECOMP_CALL(sub_171AD5E7); /* 0x171AE5C7: call 0x171ad5e7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE5CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x17253460); /* 0x171AE5CE: mov eax, dword ptr [0x17253460] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE5F5; /* 0x171AE5D3: jne 0x171ae5f5 */
L_171AE5D5:
    ecx = MEM32(eax + (-0x10)); /* 0x171AE5D5: mov ecx, dword ptr [eax - 0x10] */
    /* test ecx, ecx */ /* 0x171AE5D8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE5E3; /* 0x171AE5DA: je 0x171ae5e3 */
L_171AE5DC:
    PUSH32(esp, 1); /* 0x171AE5DC: push 1 */
    RECOMP_CALL(sub_171ABA0A); /* 0x171AE5DE: call 0x171aba0a */
    RECOMP_FLAGS_IN();
L_171AE5E3:
    eax = MEM32(0x17253460); /* 0x171AE5E3: mov eax, dword ptr [0x17253460] */
    _flag_a = (uint32_t)(MEM32(eax + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(eax + (-0x10)) = MEM32(eax + (-0x10)) & 0; /* 0x171AE5E8: and dword ptr [eax - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x17253450)); _flag_b = (uint32_t)(0);
    MEM32(0x17253450) = MEM32(0x17253450) & 0; /* 0x171AE5EC: and dword ptr [0x17253450], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AE62A; /* 0x171AE5F3: jmp 0x171ae62a */
L_171AE5F5:
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x171AE5F5: push dword ptr [eax - 0x10] */
    ecx = eax + (-0x20); /* 0x171AE5F8: lea ecx, [eax - 0x20] */
    PUSH32(esp, ecx); /* 0x171AE5FB: push ecx */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x171AE5FC: push dword ptr [eax - 0x40] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171AE5FF: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(0x17253478)); /* 0x171AE602: push dword ptr [0x17253478] */
    RECOMP_CALL(sub_171ABD50); /* 0x171AE608: call 0x171abd50 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x171AE60D: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171AE60F: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x171AE612: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171AE614: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x171AE616: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253450) = ecx; /* 0x171AE618: mov dword ptr [0x17253450], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE62A; /* 0x171AE61E: jne 0x171ae62a */
L_171AE620:
    MEM32(0x17253484) = 1; /* 0x171AE620: mov dword ptr [0x17253484], 1 */
L_171AE62A:
    eax = MEM32(0x17253460); /* 0x171AE62A: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x50))); /* 0x171AE62F: push dword ptr [eax - 0x50] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE632: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17253460); /* 0x171AE637: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x171AE63C: push dword ptr [eax - 0x40] */
    goto L_171AEA9D; /* 0x171AE63F: jmp 0x171aea9d */
L_171AE644:
    eax = MEM32(edx); /* 0x171AE644: mov eax, dword ptr [edx] */
L_171AE646:
    MEM32(0x17253450) = eax; /* 0x171AE646: mov dword ptr [0x17253450], eax */
    RECOMP_BACKEDGE();
    goto L_171AE3CF; /* 0x171AE64B: jmp 0x171ae3cf */
L_171AE650:
    _flag_a = (uint32_t)(MEM32(0x17253450)); _flag_b = (uint32_t)(0);
    MEM32(0x17253450) = MEM32(0x17253450) & 0; /* 0x171AE650: and dword ptr [0x17253450], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(edx + (-0x40))); /* 0x171AE657: push dword ptr [edx - 0x40] */
    MEM32(0x17253484) = 1; /* 0x171AE65A: mov dword ptr [0x17253484], 1 */
    RECOMP_CALL(sub_1721B224); /* 0x171AE664: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17253460); /* 0x171AE669: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x171AE66E: push dword ptr [eax - 0x30] */
    goto L_171AEA9D; /* 0x171AE671: jmp 0x171aea9d */
L_171AE676:
    PUSH32(esp, 0xCu); /* 0x171AE676: push 0xc */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE678: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE67D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AE67F: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE6A1; /* 0x171AE680: je 0x171ae6a1 */
L_171AE682:
    edx = MEM32(0x17253460); /* 0x171AE682: mov edx, dword ptr [0x17253460] */
    esi = MEM32(edx + (-0x10)); /* 0x171AE688: mov esi, dword ptr [edx - 0x10] */
    edx = MEM32(edx + (-0x30)); /* 0x171AE68B: mov edx, dword ptr [edx - 0x30] */
    ecx = esi; /* 0x171AE68E: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x171AE690: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171AE692: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x171AE694: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = edx; /* 0x171AE697: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = esi; /* 0x171AE699: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = ecx; /* 0x171AE69C: mov dword ptr [eax + 8], ecx */
    goto L_171AE6A3; /* 0x171AE69F: jmp 0x171ae6a3 */
L_171AE6A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE6A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE6A3:
    MEM32(0x17253450) = eax; /* 0x171AE6A3: mov dword ptr [0x17253450], eax */
    goto L_171AEBD6; /* 0x171AE6A8: jmp 0x171aebd6 */
L_171AE6AD:
    PUSH32(esp, 0xCu); /* 0x171AE6AD: push 0xc */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE6AF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE6B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AE6B6: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE6A1; /* 0x171AE6B7: je 0x171ae6a1 */
L_171AE6B9:
    ecx = MEM32(0x17253460); /* 0x171AE6B9: mov ecx, dword ptr [0x17253460] */
    ecx = MEM32(ecx); /* 0x171AE6BF: mov ecx, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x171AE6C1: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x171AE6C5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = 1; /* 0x171AE6C7: mov dword ptr [eax + 8], 1 */
    RECOMP_BACKEDGE();
    goto L_171AE6A3; /* 0x171AE6CE: jmp 0x171ae6a3 */
L_171AE6D0:
    PUSH32(esp, ebx); /* 0x171AE6D0: push ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE6D1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE6D6: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AE6D7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171AE6D9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE6EE; /* 0x171AE6DB: je 0x171ae6ee */
L_171AE6DD:
    MEM32(eax) = ecx; /* 0x171AE6DD: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x171AE6DF: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = 0xAu; /* 0x171AE6E2: mov dword ptr [eax + 8], 0xa */
    MEM32(eax + 0xC) = ecx; /* 0x171AE6E9: mov dword ptr [eax + 0xc], ecx */
    goto L_171AE6F0; /* 0x171AE6EC: jmp 0x171ae6f0 */
L_171AE6EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE6EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE6F0:
    /* cmp eax, ecx */ /* 0x171AE6F0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(0x17253460); /* 0x171AE6F2: mov edx, dword ptr [0x17253460] */
    MEM32(0x17253450) = eax; /* 0x171AE6F8: mov dword ptr [0x17253450], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE574; /* 0x171AE6FD: je 0x171ae574 */
L_171AE703:
    /* cmp MEM32(edx), ecx */ /* 0x171AE703: cmp dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE3CF; /* 0x171AE705: je 0x171ae3cf */
L_171AE70B:
    ecx = eax; /* 0x171AE70B: mov ecx, eax */
L_171AE70D:
    PUSH32(esp, edx); /* 0x171AE70D: push edx */
    RECOMP_CALL(sub_171A902A); /* 0x171AE70E: call 0x171a902a */
    RECOMP_FLAGS_IN();
    goto L_171AEBD6; /* 0x171AE713: jmp 0x171aebd6 */
L_171AE718:
    ecx = MEM32(edx + (-0x10)); /* 0x171AE718: mov ecx, dword ptr [edx - 0x10] */
    MEM32(0x17253450) = ecx; /* 0x171AE71B: mov dword ptr [0x17253450], ecx */
    /* cmp MEM32(edx), 0 */ /* 0x171AE721: cmp dword ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE3CF; /* 0x171AE724: je 0x171ae3cf */
L_171AE72A:
    RECOMP_BACKEDGE();
    goto L_171AE70D; /* 0x171AE72A: jmp 0x171ae70d */
L_171AE72C:
    PUSH32(esp, ebx); /* 0x171AE72C: push ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE72D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE732: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AE733: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171AE735: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE74A; /* 0x171AE737: je 0x171ae74a */
L_171AE739:
    MEM32(eax) = ecx; /* 0x171AE739: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x171AE73B: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = 5; /* 0x171AE73E: mov dword ptr [eax + 8], 5 */
    MEM32(eax + 0xC) = ecx; /* 0x171AE745: mov dword ptr [eax + 0xc], ecx */
    goto L_171AE74C; /* 0x171AE748: jmp 0x171ae74c */
L_171AE74A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE74A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE74C:
    /* cmp eax, ecx */ /* 0x171AE74C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17253450) = eax; /* 0x171AE74E: mov dword ptr [0x17253450], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AEBDE; /* 0x171AE753: je 0x171aebde */
L_171AE759:
    PUSH32(esp, MEM32(0x17253460)); /* 0x171AE759: push dword ptr [0x17253460] */
    ecx = eax; /* 0x171AE75F: mov ecx, eax */
L_171AE761:
    RECOMP_CALL(sub_171A902A); /* 0x171AE761: call 0x171a902a */
    RECOMP_FLAGS_IN();
    goto L_171AEBD6; /* 0x171AE766: jmp 0x171aebd6 */
L_171AE76B:
    ecx = MEM32(edx + (-0x10)); /* 0x171AE76B: mov ecx, dword ptr [edx - 0x10] */
    MEM32(0x17253450) = ecx; /* 0x171AE76E: mov dword ptr [0x17253450], ecx */
    PUSH32(esp, edx); /* 0x171AE774: push edx */
    RECOMP_BACKEDGE();
    goto L_171AE761; /* 0x171AE775: jmp 0x171ae761 */
L_171AE777:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171AE777: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + (-0x20)), 0 */ /* 0x171AE77B: cmp dword ptr [edx - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edx + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE7DD; /* 0x171AE77F: je 0x171ae7dd */
L_171AE781:
    eax = edx + (-0x10); /* 0x171AE781: lea eax, [edx - 0x10] */
    PUSH32(esp, 4); /* 0x171AE784: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AE786: pop ecx */
    edi = 0x1700B4A4u; /* 0x171AE787: mov edi, 0x1700b4a4 */
    esi = eax; /* 0x171AE78C: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AE78E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AE790: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AE7B1; /* 0x171AE792: je 0x171ae7b1 */
L_171AE794:
    ecx = ebp + (-0x4); /* 0x171AE794: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x171AE797: push ecx */
    ecx = MEM32(0x17253478); /* 0x171AE798: mov ecx, dword ptr [0x17253478] */
    PUSH32(esp, eax); /* 0x171AE79E: push eax */
    RECOMP_CALL(sub_171AD621); /* 0x171AE79F: call 0x171ad621 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x17253460); /* 0x171AE7A4: mov edx, dword ptr [0x17253460] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AE7AA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x171AE7AC: mov esi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AE7AE: inc edi */
    _flag_k = FK_INC;
    goto L_171AE7B6; /* 0x171AE7AF: jmp 0x171ae7b6 */
L_171AE7B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AE7B1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AE7B3: inc edi */
    _flag_k = FK_INC;
    esi = edi; /* 0x171AE7B4: mov esi, edi */
L_171AE7B6:
    /* test esi, esi */ /* 0x171AE7B6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE7E0; /* 0x171AE7B8: je 0x171ae7e0 */
L_171AE7BA:
    ecx = MEM32(0x17253478); /* 0x171AE7BA: mov ecx, dword ptr [0x17253478] */
    eax = ebp + (-0x4); /* 0x171AE7C0: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171AE7C3: push eax */
    PUSH32(esp, MEM32(edx + (-0x20))); /* 0x171AE7C4: push dword ptr [edx - 0x20] */
    RECOMP_CALL(sub_171AD5E7); /* 0x171AE7C7: call 0x171ad5e7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x171AE7CC: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE7D5; /* 0x171AE7CE: je 0x171ae7d5 */
L_171AE7D0:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171AE7D0: push dword ptr [ebp - 4] */
    goto L_171AE806; /* 0x171AE7D3: jmp 0x171ae806 */
L_171AE7D5:
    edx = MEM32(0x17253460); /* 0x171AE7D5: mov edx, dword ptr [0x17253460] */
    goto L_171AE7E0; /* 0x171AE7DB: jmp 0x171ae7e0 */
L_171AE7DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AE7DD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AE7DF: inc edi */
    _flag_k = FK_INC;
L_171AE7E0:
    eax = MEM32(edx + (-0x20)); /* 0x171AE7E0: mov eax, dword ptr [edx - 0x20] */
    /* test eax, eax */ /* 0x171AE7E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE833; /* 0x171AE7E5: je 0x171ae833 */
L_171AE7E7:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171AE7E7: push -1 */
    PUSH32(esp, 0x17023A00u); /* 0x171AE7E9: push 0x17023a00 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171AE7EE: push -1 */
    PUSH32(esp, eax); /* 0x171AE7F0: push eax */
    PUSH32(esp, edi); /* 0x171AE7F1: push edi */
    PUSH32(esp, 0x409u); /* 0x171AE7F2: push 0x409 */
    RECOMP_ICALL(MEM32(0x170010A8)); /* 0x171AE7F7: call dword ptr [0x170010a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171AE7FD: push 2 */
    ecx = POP32_VAL(esp); /* 0x171AE7FF: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171AE800: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_171AE82D; /* 0x171AE802: jne 0x171ae82d */
L_171AE804:
    PUSH32(esp, 0); /* 0x171AE804: push 0 */
L_171AE806:
    RECOMP_CALL(sub_171A918C); /* 0x171AE806: call 0x171a918c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE80B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253450) = eax; /* 0x171AE80D: mov dword ptr [0x17253450], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE81A; /* 0x171AE812: jne 0x171ae81a */
L_171AE814:
    MEM32(0x17253484) = edi; /* 0x171AE814: mov dword ptr [0x17253484], edi */
L_171AE81A:
    edx = MEM32(0x17253460); /* 0x171AE81A: mov edx, dword ptr [0x17253460] */
L_171AE820:
    PUSH32(esp, MEM32(edx + (-0x20))); /* 0x171AE820: push dword ptr [edx - 0x20] */
L_171AE823:
    RECOMP_CALL(sub_1721B224); /* 0x171AE823: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    goto L_171AEAA3; /* 0x171AE828: jmp 0x171aeaa3 */
L_171AE82D:
    edx = MEM32(0x17253460); /* 0x171AE82D: mov edx, dword ptr [0x17253460] */
L_171AE833:
    _flag_a = (uint32_t)(MEM32(0x17253450)); _flag_b = (uint32_t)(0);
    MEM32(0x17253450) = MEM32(0x17253450) & 0; /* 0x171AE833: and dword ptr [0x17253450], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253484) = edi; /* 0x171AE83A: mov dword ptr [0x17253484], edi */
    RECOMP_BACKEDGE();
    goto L_171AE820; /* 0x171AE840: jmp 0x171ae820 */
L_171AE842:
    PUSH32(esp, 0); /* 0x171AE842: push 0 */
    RECOMP_CALL(sub_171A918C); /* 0x171AE844: call 0x171a918c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE849: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253450) = eax; /* 0x171AE84B: mov dword ptr [0x17253450], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE85C; /* 0x171AE850: jne 0x171ae85c */
L_171AE852:
    MEM32(0x17253484) = 1; /* 0x171AE852: mov dword ptr [0x17253484], 1 */
L_171AE85C:
    eax = MEM32(0x17253460); /* 0x171AE85C: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x171AE861: push dword ptr [eax - 0x10] */
    RECOMP_BACKEDGE();
    goto L_171AE823; /* 0x171AE864: jmp 0x171ae823 */
L_171AE866:
    eax = MEM32(0x17253478); /* 0x171AE866: mov eax, dword ptr [0x17253478] */
    PUSH32(esp, MEM32(edx + (-0x10))); /* 0x171AE86B: push dword ptr [edx - 0x10] */
    ecx = MEM32(eax + 0x8); /* 0x171AE86E: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171AE871: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x171AE874: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171AE875: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AE878: push eax */
    PUSH32(esp, MEM32(edx + (-0x20))); /* 0x171AE879: push dword ptr [edx - 0x20] */
    PUSH32(esp, MEM32(edx + (-0x30))); /* 0x171AE87C: push dword ptr [edx - 0x30] */
    RECOMP_CALL(sub_171A92FB); /* 0x171AE87F: call 0x171a92fb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE884: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253450) = eax; /* 0x171AE886: mov dword ptr [0x17253450], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE8BB; /* 0x171AE88B: jne 0x171ae8bb */
L_171AE88D:
    eax = MEM32(0x17253460); /* 0x171AE88D: mov eax, dword ptr [0x17253460] */
    esi = MEM32(eax + (-0x30)); /* 0x171AE892: mov esi, dword ptr [eax - 0x30] */
    PUSH32(esp, 0xBu); /* 0x171AE895: push 0xb */
    edi = 0x17023D20u; /* 0x171AE897: mov edi, 0x17023d20 */
    ecx = POP32_VAL(esp); /* 0x171AE89C: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AE89D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AE89F: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AE8AD; /* 0x171AE8A1: je 0x171ae8ad */
L_171AE8A3:
    MEM32(0x17253484) = 1; /* 0x171AE8A3: mov dword ptr [0x17253484], 1 */
L_171AE8AD:
    ecx = MEM32(eax + (-0x10)); /* 0x171AE8AD: mov ecx, dword ptr [eax - 0x10] */
    /* test ecx, ecx */ /* 0x171AE8B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE8BB; /* 0x171AE8B2: je 0x171ae8bb */
L_171AE8B4:
    PUSH32(esp, 1); /* 0x171AE8B4: push 1 */
    RECOMP_CALL(sub_171A7600); /* 0x171AE8B6: call 0x171a7600 */
    RECOMP_FLAGS_IN();
L_171AE8BB:
    eax = MEM32(0x17253460); /* 0x171AE8BB: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x40))); /* 0x171AE8C0: push dword ptr [eax - 0x40] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE8C3: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17253460); /* 0x171AE8C8: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x171AE8CD: push dword ptr [eax - 0x30] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE8D0: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17253460); /* 0x171AE8D5: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x20))); /* 0x171AE8DA: push dword ptr [eax - 0x20] */
    RECOMP_CALL(sub_1721B224); /* 0x171AE8DD: call 0x1721b224 */
    RECOMP_FLAGS_IN();
L_171AE8E2:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171AE8E2: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_171AE3C9; /* 0x171AE8E5: jmp 0x171ae3c9 */
L_171AE8EA:
    PUSH32(esp, ebx); /* 0x171AE8EA: push ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE8EB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE8F0: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AE8F1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171AE8F3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE908; /* 0x171AE8F5: je 0x171ae908 */
L_171AE8F7:
    MEM32(eax) = ecx; /* 0x171AE8F7: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x171AE8F9: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = 2; /* 0x171AE8FC: mov dword ptr [eax + 8], 2 */
    MEM32(eax + 0xC) = ecx; /* 0x171AE903: mov dword ptr [eax + 0xc], ecx */
    goto L_171AE90A; /* 0x171AE906: jmp 0x171ae90a */
L_171AE908:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE908: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE90A:
    /* cmp eax, ecx */ /* 0x171AE90A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17253450) = eax; /* 0x171AE90C: mov dword ptr [0x17253450], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AEBDE; /* 0x171AE911: je 0x171aebde */
L_171AE917:
    PUSH32(esp, MEM32(0x17253460)); /* 0x171AE917: push dword ptr [0x17253460] */
    ecx = eax; /* 0x171AE91D: mov ecx, eax */
L_171AE91F:
    RECOMP_CALL(sub_171A902A); /* 0x171AE91F: call 0x171a902a */
    RECOMP_FLAGS_IN();
    goto L_171AEBD6; /* 0x171AE924: jmp 0x171aebd6 */
L_171AE929:
    ecx = MEM32(edx + (-0x10)); /* 0x171AE929: mov ecx, dword ptr [edx - 0x10] */
    MEM32(0x17253450) = ecx; /* 0x171AE92C: mov dword ptr [0x17253450], ecx */
    PUSH32(esp, edx); /* 0x171AE932: push edx */
    RECOMP_BACKEDGE();
    goto L_171AE91F; /* 0x171AE933: jmp 0x171ae91f */
L_171AE935:
    eax = MEM32(edx + (-0x10)); /* 0x171AE935: mov eax, dword ptr [edx - 0x10] */
    RECOMP_BACKEDGE();
    goto L_171AE646; /* 0x171AE938: jmp 0x171ae646 */
L_171AE93D:
    PUSH32(esp, 8); /* 0x171AE93D: push 8 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE93F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE944: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AE945: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171AE947: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AE95F; /* 0x171AE949: je 0x171ae95f */
L_171AE94B:
    edx = MEM32(0x17253460); /* 0x171AE94B: mov edx, dword ptr [0x17253460] */
    edx = MEM32(edx); /* 0x171AE951: mov edx, dword ptr [edx] */
    MEM32(eax) = edx; /* 0x171AE953: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x171AE955: mov dword ptr [eax + 4], ecx */
    MEM32(0x17253450) = eax; /* 0x171AE958: mov dword ptr [0x17253450], eax */
    goto L_171AE965; /* 0x171AE95D: jmp 0x171ae965 */
L_171AE95F:
    MEM32(0x17253450) = ecx; /* 0x171AE95F: mov dword ptr [0x17253450], ecx */
L_171AE965:
    /* cmp MEM32(0x17253450), ecx */ /* 0x171AE965: cmp dword ptr [0x17253450], ecx */
    _flag_a = (uint32_t)(MEM32(0x17253450)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_171AEBD8; /* 0x171AE96B: jmp 0x171aebd8 */
L_171AE970:
    edx = MEM32(edx); /* 0x171AE970: mov edx, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AE972: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171AE974: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE9BB; /* 0x171AE976: je 0x171ae9bb */
L_171AE978:
    eax = edx; /* 0x171AE978: mov eax, edx */
    edx = eax + 0x1; /* 0x171AE97A: lea edx, [eax + 1] */
L_171AE97D:
    SET_LO8(ecx, MEM8(eax)); /* 0x171AE97D: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AE97F: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AE980: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE97D; /* 0x171AE982: jne 0x171ae97d */
L_171AE984:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AE984: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x171AE986: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x171AE989: push esi */
    RECOMP_CALL(sub_1721B254); /* 0x171AE98A: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171AE98F: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171AE991: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AE993: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE9A2; /* 0x171AE994: jne 0x171ae9a2 */
L_171AE996:
    MEM32(0x17253484) = 1; /* 0x171AE996: mov dword ptr [0x17253484], 1 */
    goto L_171AE9EF; /* 0x171AE9A0: jmp 0x171ae9ef */
L_171AE9A2:
    eax = MEM32(0x17253460); /* 0x171AE9A2: mov eax, dword ptr [0x17253460] */
    ecx = esi; /* 0x171AE9A7: mov ecx, esi */
    esi = MEM32(eax); /* 0x171AE9A9: mov esi, dword ptr [eax] */
    eax = ecx; /* 0x171AE9AB: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AE9AD: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AE9AD: shr ecx, 2 */
    edi = ebx; /* 0x171AE9B0: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AE9B2: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171AE9B4: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AE9B6: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AE9B9: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171AE9BB:
    PUSH32(esp, 8); /* 0x171AE9BB: push 8 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AE9BD: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AE9C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AE9C4: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE9CF; /* 0x171AE9C5: je 0x171ae9cf */
L_171AE9C7:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x171AE9C7: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ebx; /* 0x171AE9CA: mov dword ptr [eax + 4], ebx */
    goto L_171AE9D1; /* 0x171AE9CD: jmp 0x171ae9d1 */
L_171AE9CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AE9CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AE9D1:
    /* test eax, eax */ /* 0x171AE9D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253450) = eax; /* 0x171AE9D3: mov dword ptr [0x17253450], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AE9EF; /* 0x171AE9D8: jne 0x171ae9ef */
L_171AE9DA:
    /* test ebx, ebx */ /* 0x171AE9DA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253484) = 1; /* 0x171AE9DC: mov dword ptr [0x17253484], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE9EF; /* 0x171AE9E6: je 0x171ae9ef */
L_171AE9E8:
    PUSH32(esp, ebx); /* 0x171AE9E8: push ebx */
    RECOMP_CALL(sub_1721B224); /* 0x171AE9E9: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AE9EE: pop ecx */
L_171AE9EF:
    eax = MEM32(0x17253460); /* 0x171AE9EF: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax)); /* 0x171AE9F4: push dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_171AE823; /* 0x171AE9F6: jmp 0x171ae823 */
L_171AE9FB:
    /* cmp MEM32(edx + (-0x30)), 0 */ /* 0x171AE9FB: cmp dword ptr [edx - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(edx + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AEA16; /* 0x171AE9FF: jne 0x171aea16 */
L_171AEA01:
    PUSH32(esp, 4); /* 0x171AEA01: push 4 */
    ecx = POP32_VAL(esp); /* 0x171AEA03: pop ecx */
    edi = 0x1700B4A4u; /* 0x171AEA04: mov edi, 0x1700b4a4 */
    esi = edx + (-0x20); /* 0x171AEA09: lea esi, [edx - 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AEA0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171AEA0E: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171AE574; /* 0x171AEA10: je 0x171ae574 */
L_171AEA16:
    eax = ebp + (-0x10); /* 0x171AEA16: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x171AEA19: push eax */
    PUSH32(esp, MEM32(0x17253478)); /* 0x171AEA1A: push dword ptr [0x17253478] */
    eax = edx + (-0x20); /* 0x171AEA20: lea eax, [edx - 0x20] */
    PUSH32(esp, eax); /* 0x171AEA23: push eax */
    PUSH32(esp, MEM32(edx + (-0x30))); /* 0x171AEA24: push dword ptr [edx - 0x30] */
    RECOMP_CALL(sub_171ABAFA); /* 0x171AEA27: call 0x171abafa */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AEA2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AEA43; /* 0x171AEA2E: jge 0x171aea43 */
L_171AEA30:
    _flag_a = (uint32_t)(MEM32(0x17253450)); _flag_b = (uint32_t)(0);
    MEM32(0x17253450) = MEM32(0x17253450) & 0; /* 0x171AEA30: and dword ptr [0x17253450], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253484) = 1; /* 0x171AEA37: mov dword ptr [0x17253484], 1 */
    goto L_171AEA4B; /* 0x171AEA41: jmp 0x171aea4b */
L_171AEA43:
    eax = MEM32(ebp + (-0x10)); /* 0x171AEA43: mov eax, dword ptr [ebp - 0x10] */
    MEM32(0x17253450) = eax; /* 0x171AEA46: mov dword ptr [0x17253450], eax */
L_171AEA4B:
    eax = MEM32(0x17253460); /* 0x171AEA4B: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x30))); /* 0x171AEA50: push dword ptr [eax - 0x30] */
    RECOMP_BACKEDGE();
    goto L_171AE823; /* 0x171AEA53: jmp 0x171ae823 */
L_171AEA58:
    eax = MEM32(0x17253478); /* 0x171AEA58: mov eax, dword ptr [0x17253478] */
    ecx = MEM32(eax + 0x8); /* 0x171AEA5D: mov ecx, dword ptr [eax + 8] */
    PUSH32(esp, 0); /* 0x171AEA60: push 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171AEA62: add ecx, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x171AEA65: push ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171AEA66: add eax, 0x10 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171AEA69: push eax */
    PUSH32(esp, MEM32(edx + (-0x10))); /* 0x171AEA6A: push dword ptr [edx - 0x10] */
    PUSH32(esp, MEM32(edx + (-0x20))); /* 0x171AEA6D: push dword ptr [edx - 0x20] */
    RECOMP_CALL(sub_171A92FB); /* 0x171AEA70: call 0x171a92fb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AEA75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253450) = eax; /* 0x171AEA77: mov dword ptr [0x17253450], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AEA88; /* 0x171AEA7C: jne 0x171aea88 */
L_171AEA7E:
    MEM32(0x17253484) = 1; /* 0x171AEA7E: mov dword ptr [0x17253484], 1 */
L_171AEA88:
    eax = MEM32(0x17253460); /* 0x171AEA88: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x20))); /* 0x171AEA8D: push dword ptr [eax - 0x20] */
    RECOMP_CALL(sub_1721B224); /* 0x171AEA90: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x17253460); /* 0x171AEA95: mov eax, dword ptr [0x17253460] */
    PUSH32(esp, MEM32(eax + (-0x10))); /* 0x171AEA9A: push dword ptr [eax - 0x10] */
L_171AEA9D:
    RECOMP_CALL(sub_1721B224); /* 0x171AEA9D: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AEAA2: pop ecx */
L_171AEAA3:
    ecx = POP32_VAL(esp); /* 0x171AEAA3: pop ecx */
    RECOMP_BACKEDGE();
    goto L_171AE3C9; /* 0x171AEAA4: jmp 0x171ae3c9 */
L_171AEAA9:
    PUSH32(esp, 0x14u); /* 0x171AEAA9: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AEAAB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AEAB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AEAB2: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE6A1; /* 0x171AEAB3: je 0x171ae6a1 */
L_171AEAB9:
    PUSH32(esp, MEM32(0x17253460)); /* 0x171AEAB9: push dword ptr [0x17253460] */
    ecx = eax; /* 0x171AEABF: mov ecx, eax */
    RECOMP_CALL(sub_171AE01A); /* 0x171AEAC1: call 0x171ae01a */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171AE6A3; /* 0x171AEAC6: jmp 0x171ae6a3 */
L_171AEACB:
    PUSH32(esp, 0x14u); /* 0x171AEACB: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AEACD: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AEAD2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AEAD3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171AEAD5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AEAF1; /* 0x171AEAD7: je 0x171aeaf1 */
L_171AEAD9:
    MEM32(eax + 0x4) = ecx; /* 0x171AEAD9: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x171AEADC: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = 0xAu; /* 0x171AEADF: mov dword ptr [eax + 0xc], 0xa */
    MEM32(eax + 0x10) = ecx; /* 0x171AEAE6: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax) = 0x17023CFCu; /* 0x171AEAE9: mov dword ptr [eax], 0x17023cfc */
    goto L_171AEAF3; /* 0x171AEAEF: jmp 0x171aeaf3 */
L_171AEAF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AEAF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AEAF3:
    /* cmp eax, ecx */ /* 0x171AEAF3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17253450) = eax; /* 0x171AEAF5: mov dword ptr [0x17253450], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AEBDE; /* 0x171AEAFA: je 0x171aebde */
L_171AEB00:
    PUSH32(esp, MEM32(0x17253460)); /* 0x171AEB00: push dword ptr [0x17253460] */
L_171AEB06:
    ecx = eax + 0x4; /* 0x171AEB06: lea ecx, [eax + 4] */
    RECOMP_CALL(sub_171A902A); /* 0x171AEB09: call 0x171a902a */
    RECOMP_FLAGS_IN();
    goto L_171AEBD6; /* 0x171AEB0E: jmp 0x171aebd6 */
L_171AEB13:
    eax = MEM32(edx + (-0x20)); /* 0x171AEB13: mov eax, dword ptr [edx - 0x20] */
    MEM32(0x17253450) = eax; /* 0x171AEB16: mov dword ptr [0x17253450], eax */
    PUSH32(esp, edx); /* 0x171AEB1B: push edx */
    RECOMP_BACKEDGE();
    goto L_171AEB06; /* 0x171AEB1C: jmp 0x171aeb06 */
L_171AEB1E:
    PUSH32(esp, 0x14u); /* 0x171AEB1E: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AEB20: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171AEB25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AEB27: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AE6A1; /* 0x171AEB28: je 0x171ae6a1 */
L_171AEB2E:
    PUSH32(esp, MEM32(0x17253460)); /* 0x171AEB2E: push dword ptr [0x17253460] */
    ecx = eax; /* 0x171AEB34: mov ecx, eax */
    RECOMP_CALL(sub_171AE048); /* 0x171AEB36: call 0x171ae048 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_171AE6A3; /* 0x171AEB3B: jmp 0x171ae6a3 */
L_171AEB40:
    PUSH32(esp, 0x14u); /* 0x171AEB40: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AEB42: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AEB47: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AEB48: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171AEB4A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AEB66; /* 0x171AEB4C: je 0x171aeb66 */
L_171AEB4E:
    MEM32(eax + 0x4) = ecx; /* 0x171AEB4E: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x171AEB51: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = 0xFAu; /* 0x171AEB54: mov dword ptr [eax + 0xc], 0xfa */
    MEM32(eax + 0x10) = ecx; /* 0x171AEB5B: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax) = 0x17023D08u; /* 0x171AEB5E: mov dword ptr [eax], 0x17023d08 */
    goto L_171AEB68; /* 0x171AEB64: jmp 0x171aeb68 */
L_171AEB66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AEB66: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AEB68:
    /* cmp eax, ecx */ /* 0x171AEB68: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17253450) = eax; /* 0x171AEB6A: mov dword ptr [0x17253450], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AEBDE; /* 0x171AEB6F: je 0x171aebde */
L_171AEB71:
    PUSH32(esp, MEM32(0x17253460)); /* 0x171AEB71: push dword ptr [0x17253460] */
L_171AEB77:
    ecx = eax + 0x4; /* 0x171AEB77: lea ecx, [eax + 4] */
    RECOMP_CALL(sub_171A913E); /* 0x171AEB7A: call 0x171a913e */
    RECOMP_FLAGS_IN();
    goto L_171AEBD6; /* 0x171AEB7F: jmp 0x171aebd6 */
L_171AEB81:
    eax = MEM32(edx + (-0x20)); /* 0x171AEB81: mov eax, dword ptr [edx - 0x20] */
    MEM32(0x17253450) = eax; /* 0x171AEB84: mov dword ptr [0x17253450], eax */
    PUSH32(esp, edx); /* 0x171AEB89: push edx */
    RECOMP_BACKEDGE();
    goto L_171AEB77; /* 0x171AEB8A: jmp 0x171aeb77 */
L_171AEB8C:
    PUSH32(esp, 0x14u); /* 0x171AEB8C: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171AEB8E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171AEB93: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AEB94: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171AEB96: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AEBB2; /* 0x171AEB98: je 0x171aebb2 */
L_171AEB9A:
    MEM32(eax + 0x4) = ecx; /* 0x171AEB9A: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x171AEB9D: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = 0xAu; /* 0x171AEBA0: mov dword ptr [eax + 0xc], 0xa */
    MEM32(eax + 0x10) = ecx; /* 0x171AEBA7: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax) = 0x17023D14u; /* 0x171AEBAA: mov dword ptr [eax], 0x17023d14 */
    goto L_171AEBB4; /* 0x171AEBB0: jmp 0x171aebb4 */
L_171AEBB2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AEBB2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AEBB4:
    /* cmp eax, ecx */ /* 0x171AEBB4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x17253450) = eax; /* 0x171AEBB6: mov dword ptr [0x17253450], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AEBDE; /* 0x171AEBBB: je 0x171aebde */
L_171AEBBD:
    PUSH32(esp, MEM32(0x17253460)); /* 0x171AEBBD: push dword ptr [0x17253460] */
    goto L_171AEBCE; /* 0x171AEBC3: jmp 0x171aebce */
L_171AEBC5:
    eax = MEM32(edx + (-0x20)); /* 0x171AEBC5: mov eax, dword ptr [edx - 0x20] */
    MEM32(0x17253450) = eax; /* 0x171AEBC8: mov dword ptr [0x17253450], eax */
    PUSH32(esp, edx); /* 0x171AEBCD: push edx */
L_171AEBCE:
    ecx = eax + 0x4; /* 0x171AEBCE: lea ecx, [eax + 4] */
    RECOMP_CALL(sub_171A902A); /* 0x171AEBD1: call 0x171a902a */
    RECOMP_FLAGS_IN();
L_171AEBD6:
    /* test eax, eax */ /* 0x171AEBD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_171AEBD8:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171AE3C9; /* 0x171AEBD8: jne 0x171ae3c9 */
L_171AEBDE:
    MEM32(0x17253484) = 1; /* 0x171AEBDE: mov dword ptr [0x17253484], 1 */
    RECOMP_BACKEDGE();
    goto L_171AE3C9; /* 0x171AEBE8: jmp 0x171ae3c9 */
L_171AEBED:
    esi = 0x1700B4A4u; /* 0x171AEBED: mov esi, 0x1700b4a4 */
L_171AEBF2:
    edi = eax; /* 0x171AEBF2: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AEBF4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AEBF5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AEBF6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AEBF7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    goto L_171AE3CF; /* 0x171AEBF8: jmp 0x171ae3cf */
L_171AEBFD:
    esi = edx; /* 0x171AEBFD: mov esi, edx */
    RECOMP_BACKEDGE();
    goto L_171AEBF2; /* 0x171AEBFF: jmp 0x171aebf2 */
L_171AEC01:
    edx = ecx + ecx; /* 0x171AEC01: lea edx, [ecx + ecx] */
    ecx = (int32_t)(int16_t)MEM16(edx + 0x172382D8); /* 0x171AEC04: movsx ecx, word ptr [edx + 0x172382d8] */
    /* test ecx, ecx */ /* 0x171AEC0B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AEC31; /* 0x171AEC0D: je 0x171aec31 */
L_171AEC0F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171AEC0F: add ecx, esi */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_171AEC31; /* 0x171AEC11: js 0x171aec31 */
L_171AEC13:
    /* cmp ecx, 0x18Eu */ /* 0x171AEC13: cmp ecx, 0x18e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171AEC31; /* 0x171AEC19: jg 0x171aec31 */
L_171AEC1B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x171AEC1B: add ecx, ecx */
    _flag_k = FK_ADD;
    edi = (int32_t)(int16_t)MEM16(ecx + 0x17238650); /* 0x171AEC1D: movsx edi, word ptr [ecx + 0x17238650] */
    /* cmp edi, esi */ /* 0x171AEC24: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AEC31; /* 0x171AEC26: jne 0x171aec31 */
L_171AEC28:
    ebx = (int32_t)(int16_t)MEM16(ecx + 0x17238330); /* 0x171AEC28: movsx ebx, word ptr [ecx + 0x17238330] */
    goto L_171AEC38; /* 0x171AEC2F: jmp 0x171aec38 */
L_171AEC31:
    ebx = (int32_t)(int16_t)MEM16(edx + 0x17238080); /* 0x171AEC31: movsx ebx, word ptr [edx + 0x17238080] */
L_171AEC38:
    /* cmp eax, 0x1725343Eu */ /* 0x171AEC38: cmp eax, 0x1725343e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1725343Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AED0C; /* 0x171AEC3D: jae 0x171aed0c */
L_171AEC43:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AEC43: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AEC44: inc eax */
    _flag_k = FK_INC;
    MEM32(0x17253464) = eax; /* 0x171AEC45: mov dword ptr [0x17253464], eax */
    esi = 0x17253450u; /* 0x171AEC4A: mov esi, 0x17253450 */
    goto L_171AECDD; /* 0x171AEC4F: jmp 0x171aecdd */
L_171AEC54:
    ecx = MEM32(0x1725346C); /* 0x171AEC54: mov ecx, dword ptr [0x1725346c] */
    /* test ecx, ecx */ /* 0x171AEC5A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AEC64; /* 0x171AEC5C: jne 0x171aec64 */
L_171AEC5E:
    _flag_a = (uint32_t)(MEM32(0x17253470)); _flag_b = (uint32_t)(1);
    MEM32(0x17253470) = MEM32(0x17253470) + 1; /* 0x171AEC5E: inc dword ptr [0x17253470] */
    _flag_k = FK_INC;
L_171AEC64:
    PUSH32(esp, 3); /* 0x171AEC64: push 3 */
    esi = POP32_VAL(esp); /* 0x171AEC66: pop esi */
    /* cmp ecx, esi */ /* 0x171AEC67: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AECFB; /* 0x171AEC69: jge 0x171aecfb */
L_171AEC6F:
    MEM32(0x1725346C) = esi; /* 0x171AEC6F: mov dword ptr [0x1725346c], esi */
    esi = MEM32(0x17253464); /* 0x171AEC75: mov esi, dword ptr [0x17253464] */
    ecx = 0x100u; /* 0x171AEC7B: mov ecx, 0x100 */
L_171AEC80:
    eax = (int32_t)(int16_t)MEM16(esi); /* 0x171AEC80: movsx eax, word ptr [esi] */
    eax = (int32_t)(int16_t)MEM16(eax * 2 + 0x172380D8); /* 0x171AEC83: movsx eax, word ptr [eax*2 + 0x172380d8] */
    /* test eax, eax */ /* 0x171AEC8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AECA1; /* 0x171AEC8D: je 0x171aeca1 */
L_171AEC8F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171AEC8F: add eax, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_171AECA1; /* 0x171AEC91: js 0x171aeca1 */
L_171AEC93:
    /* cmp eax, edi */ /* 0x171AEC93: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171AECA1; /* 0x171AEC95: jg 0x171aeca1 */
L_171AEC97:
    /* cmp MEM16(eax * 2 + 0x17238650), LO16(ecx) */ /* 0x171AEC97: cmp word ptr [eax*2 + 0x17238650], cx */
    _flag_a = (uint32_t)(MEM16(eax * 2 + 0x17238650)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AECBC; /* 0x171AEC9F: je 0x171aecbc */
L_171AECA1:
    /* cmp esi, 0x17253058u */ /* 0x171AECA1: cmp esi, 0x17253058 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x17253058u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AED0C; /* 0x171AECA7: jbe 0x171aed0c */
L_171AECA9:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AECA9: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AECAA: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 0x10u; /* 0x171AECAB: sub edx, 0x10 */
    _flag_k = FK_CMP;
    MEM32(0x17253464) = esi; /* 0x171AECAE: mov dword ptr [0x17253464], esi */
    MEM32(0x17253460) = edx; /* 0x171AECB4: mov dword ptr [0x17253460], edx */
    RECOMP_BACKEDGE();
    goto L_171AEC80; /* 0x171AECBA: jmp 0x171aec80 */
L_171AECBC:
    /* cmp esi, 0x1725343Eu */ /* 0x171AECBC: cmp esi, 0x1725343e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1725343Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AED0C; /* 0x171AECC2: jae 0x171aed0c */
L_171AECC4:
    ebx = (int32_t)(int16_t)MEM16(eax * 2 + 0x17238330); /* 0x171AECC4: movsx ebx, word ptr [eax*2 + 0x17238330] */
    _flag_a = (uint32_t)(MEM32(0x17253464)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x17253464) = MEM32(0x17253464) + 2; /* 0x171AECCC: add dword ptr [0x17253464], 2 */
    _flag_k = FK_ADD;
    eax = MEM32(0x17253464); /* 0x171AECD3: mov eax, dword ptr [0x17253464] */
    esi = 0x17253440u; /* 0x171AECD8: mov esi, 0x17253440 */
L_171AECDD:
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x171AECDD: mov word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM32(0x17253460)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x17253460) = MEM32(0x17253460) + 0x10u; /* 0x171AECE0: add dword ptr [0x17253460], 0x10 */
    _flag_k = FK_ADD;
    edi = MEM32(0x17253460); /* 0x171AECE7: mov edi, dword ptr [0x17253460] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AECED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AECEE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AECEF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171AECF0: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(0x17253468); /* 0x171AECF1: mov eax, dword ptr [0x17253468] */
    RECOMP_BACKEDGE();
    goto L_171AE208; /* 0x171AECF6: jmp 0x171ae208 */
L_171AECFB:
    /* test eax, eax */ /* 0x171AECFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AED0C; /* 0x171AECFD: je 0x171aed0c */
L_171AECFF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171AECFF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x17253468) = eax; /* 0x171AED02: mov dword ptr [0x17253468], eax */
    RECOMP_BACKEDGE();
    goto L_171AE20E; /* 0x171AED07: jmp 0x171ae20e */
L_171AED0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AED0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AED0E: inc eax */
    _flag_k = FK_INC;
L_171AED0F:
    edi = POP32_VAL(esp); /* 0x171AED0F: pop edi */
    esi = POP32_VAL(esp); /* 0x171AED10: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AED11: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AED12: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AED13: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x171AE339u: goto L_171AE339;
      case 0x171AE3CFu: goto L_171AE3CF;
      case 0x171AE457u: goto L_171AE457;
      case 0x171AE539u: goto L_171AE539;
      case 0x171AE545u: goto L_171AE545;
      case 0x171AE598u: goto L_171AE598;
      case 0x171AE5ACu: goto L_171AE5AC;
      case 0x171AE5BAu: goto L_171AE5BA;
      case 0x171AE644u: goto L_171AE644;
      case 0x171AE650u: goto L_171AE650;
      case 0x171AE676u: goto L_171AE676;
      case 0x171AE6ADu: goto L_171AE6AD;
      case 0x171AE6D0u: goto L_171AE6D0;
      case 0x171AE718u: goto L_171AE718;
      case 0x171AE72Cu: goto L_171AE72C;
      case 0x171AE76Bu: goto L_171AE76B;
      case 0x171AE777u: goto L_171AE777;
      case 0x171AE842u: goto L_171AE842;
      case 0x171AE866u: goto L_171AE866;
      case 0x171AE8EAu: goto L_171AE8EA;
      case 0x171AE929u: goto L_171AE929;
      case 0x171AE935u: goto L_171AE935;
      case 0x171AE93Du: goto L_171AE93D;
      case 0x171AE970u: goto L_171AE970;
      case 0x171AE9FBu: goto L_171AE9FB;
      case 0x171AEA58u: goto L_171AEA58;
      case 0x171AEAA9u: goto L_171AEAA9;
      case 0x171AEACBu: goto L_171AEACB;
      case 0x171AEB13u: goto L_171AEB13;
      case 0x171AEB1Eu: goto L_171AEB1E;
      case 0x171AEB40u: goto L_171AEB40;
      case 0x171AEB81u: goto L_171AEB81;
      case 0x171AEB8Cu: goto L_171AEB8C;
      case 0x171AEBC5u: goto L_171AEBC5;
      case 0x171AEBEDu: goto L_171AEBED;
      case 0x171AEBFDu: goto L_171AEBFD;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171AEE41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AEE41u);

L_171AEE41:
    edi = edi; /* 0x171AEE41: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AEE43: push ebp */
    ebp = esp; /* 0x171AEE44: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AEE46: mov eax, dword ptr [ebp + 8] */
    MEM32(0x17253478) = eax; /* 0x171AEE49: mov dword ptr [0x17253478], eax */
    RECOMP_CALL(sub_171AE1C9); /* 0x171AEE4E: call 0x171ae1c9 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171AEE53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AEE54: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AEE5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AEE5Cu);

L_171AEE5C:
    edi = edi; /* 0x171AEE5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AEE5E: push ebp */
    ebp = esp; /* 0x171AEE5F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171AEE61: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x171AEE64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x14); /* 0x171AEE66: mov ecx, dword ptr [ebp + 0x14] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AEE97; /* 0x171AEE69: je 0x171aee97 */
L_171AEE6B:
    PUSH32(esp, esi); /* 0x171AEE6B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171AEE6C: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x171AEE6F: push edi */
L_171AEE70:
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x171AEE70: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171AEE7E; /* 0x171AEE73: ja 0x171aee7e */
L_171AEE75:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171AEE75: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x171AEE76: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx + esi) = (uint8_t)(0x2Eu); /* 0x171AEE7A: mov byte ptr [ecx + esi], 0x2e */
L_171AEE7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AEE7E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xAu); /* 0x171AEE80: push 0xa */
    edi = POP32_VAL(esp); /* 0x171AEE82: pop edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x171AEE83: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171AEE85: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + 0x30u); /* 0x171AEE86: add dl, 0x30 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* test eax, eax */ /* 0x171AEE89: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx + esi) = (uint8_t)(LO8(edx)); /* 0x171AEE8B: mov byte ptr [ecx + esi], dl */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AEE70; /* 0x171AEE8E: ja 0x171aee70 */
L_171AEE90:
    eax = MEM32(ebp + 0x14); /* 0x171AEE90: mov eax, dword ptr [ebp + 0x14] */
    edi = POP32_VAL(esp); /* 0x171AEE93: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171AEE94: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x171AEE96: pop esi */
L_171AEE97:
    ebp = POP32_VAL(esp); /* 0x171AEE97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171AEE98: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171AEEA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AEEA0u);

L_171AEEA0:
    edi = edi; /* 0x171AEEA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AEEA2: push ebp */
    ebp = esp; /* 0x171AEEA3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x171AEEA5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171AEEA8: fld dword ptr [ebp + 8] */
    eax = MEM32(0x1723C894); /* 0x171AEEAB: mov eax, dword ptr [0x1723c894] */
    _st[0] = fabs(_st[0]); /* 0x171AEEB0: fabs  */
    PUSH32(esp, ebx); /* 0x171AEEB2: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171AEEB3: mov ebx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171AEEB6: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x171AEEB9: fcomp dword ptr [0x17001430] */
    fp_pop();
    MEM32(ebp + (-0x4)) = eax; /* 0x171AEEBF: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, esi); /* 0x171AEEC2: push esi */
    PUSH32(esp, edi); /* 0x171AEEC3: push edi */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171AEEC4: fnstsw ax */
    MEM8(ebp + (-0x19)) = (uint8_t)(1); /* 0x171AEEC6: mov byte ptr [ebp - 0x19], 1 */
    /* test HI8(eax), 5 */ /* 0x171AEECA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171AEED3; /* 0x171AEECD: jnp 0x171aeed3 */
L_171AEECF:
    MEM8(ebp + (-0x19)) = (uint8_t)(0); /* 0x171AEECF: mov byte ptr [ebp - 0x19], 0 */
L_171AEED3:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17023D4C)); /* 0x171AEED3: fcom dword ptr [0x17023d4c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171AEED9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171AEEDB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171AEF2C; /* 0x171AEEDE: jp 0x171aef2c */
L_171AEEE0:
    _st[0] *= (double)*(float*)ADDR(0x17023D48); /* 0x171AEEE0: fmul dword ptr [0x17023d48] */
    RECOMP_CALL(sub_1721B050); /* 0x171AEEE6: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x171AEEEB: push 0xa */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AEEED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AEEEF: pop esi */
    ecx = eax; /* 0x171AEEF0: mov ecx, eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x171AEEF2: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, 5 */ /* 0x171AEEF4: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AEEFF; /* 0x171AEEF7: jb 0x171aeeff */
L_171AEEF9:
    PUSH32(esp, esi); /* 0x171AEEF9: push esi */
    eax = POP32_VAL(esp); /* 0x171AEEFA: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AEEFB: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171AEEFD: add ecx, eax */
    _flag_k = FK_ADD;
L_171AEEFF:
    eax = 0x30303030u; /* 0x171AEEFF: mov eax, 0x30303030 */
    edi = ebp + (-0xC); /* 0x171AEF04: lea edi, [ebp - 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x171AEF07: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x171AEF08: stosd dword ptr es:[edi], eax */
    PUSH32(esp, 0x14u); /* 0x171AEF09: push 0x14 */
    eax = ebp + (-0x18); /* 0x171AEF0B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171AEF0E: push eax */
    PUSH32(esp, 0); /* 0x171AEF0F: push 0 */
    PUSH32(esp, 0xAu); /* 0x171AEF11: push 0xa */
    eax = ecx; /* 0x171AEF13: mov eax, ecx */
    ecx = POP32_VAL(esp); /* 0x171AEF15: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AEF16: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171AEF18: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM8(ebp + (-0xB)) = (uint8_t)(0x2Eu); /* 0x171AEF1A: mov byte ptr [ebp - 0xb], 0x2e */
    PUSH32(esp, eax); /* 0x171AEF1E: push eax */
    RECOMP_CALL(sub_171AEE5C); /* 0x171AEF1F: call 0x171aee5c */
    RECOMP_FLAGS_IN();
L_171AEF24:
    PUSH32(esp, 8); /* 0x171AEF24: push 8 */
    eax = POP32_VAL(esp); /* 0x171AEF26: pop eax */
    goto L_171AF042; /* 0x171AEF27: jmp 0x171af042 */
L_171AEF2C:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001424)); /* 0x171AEF2C: fcom dword ptr [0x17001424] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171AEF32: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171AEF34: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171AEF4F; /* 0x171AEF37: jp 0x171aef4f */
L_171AEF39:
    eax = 0x30303030u; /* 0x171AEF39: mov eax, 0x30303030 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171AEF3E: fstp st(0) */
    edi = ebp + (-0xC); /* 0x171AEF40: lea edi, [ebp - 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x171AEF43: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x171AEF44: stosd dword ptr es:[edi], eax */
    MEM8(ebp + (-0xC)) = (uint8_t)(0x31u); /* 0x171AEF45: mov byte ptr [ebp - 0xc], 0x31 */
    MEM8(ebp + (-0xB)) = (uint8_t)(0x2Eu); /* 0x171AEF49: mov byte ptr [ebp - 0xb], 0x2e */
    RECOMP_BACKEDGE();
    goto L_171AEF24; /* 0x171AEF4D: jmp 0x171aef24 */
L_171AEF4F:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17023D44)); /* 0x171AEF4F: fcom dword ptr [0x17023d44] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171AEF55: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171AEF57: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171AEF97; /* 0x171AEF5A: jp 0x171aef97 */
L_171AEF5C:
    fp_push(*(float*)&MEM32(0x17023D48)); /* 0x171AEF5C: fld dword ptr [0x17023d48] */
    _st[0] *= _st[1]; /* 0x171AEF62: fmul st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171AEF64: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x171AEF69: push 0xa */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AEF6B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AEF6D: pop ecx */
    esi = eax; /* 0x171AEF6E: mov esi, eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171AEF70: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, 5 */ /* 0x171AEF72: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AEFDD; /* 0x171AEF75: jb 0x171aefdd */
L_171AEF77:
    PUSH32(esp, ecx); /* 0x171AEF77: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171AEF78: fstp st(0) */
    eax = POP32_VAL(esp); /* 0x171AEF7A: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AEF7B: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171AEF7D: add esi, eax */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x171AEF7F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x171AEF81: mov dword ptr [ebp - 0x20], esi */
    fp_push((double)(int32_t)MEM32(ebp + (-0x20))); /* 0x171AEF84: fild dword ptr [ebp - 0x20] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AEF8F; /* 0x171AEF87: jge 0x171aef8f */
L_171AEF89:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x171AEF89: fadd dword ptr [0x1700142c] */
L_171AEF8F:
    _st[0] *= (double)*(float*)ADDR(0x17023D40); /* 0x171AEF8F: fmul dword ptr [0x17023d40] */
    goto L_171AEFDD; /* 0x171AEF95: jmp 0x171aefdd */
L_171AEF97:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17023D3C)); /* 0x171AEF97: fcom dword ptr [0x17023d3c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171AEF9D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171AEF9F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171AEFF4; /* 0x171AEFA2: jp 0x171aeff4 */
L_171AEFA4:
    fp_push(*(float*)&MEM32(0x17023D38)); /* 0x171AEFA4: fld dword ptr [0x17023d38] */
    _st[0] *= _st[1]; /* 0x171AEFAA: fmul st(1) */
    RECOMP_CALL(sub_1721B050); /* 0x171AEFAC: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x171AEFB1: push 0xa */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AEFB3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AEFB5: pop ecx */
    esi = eax; /* 0x171AEFB6: mov esi, eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171AEFB8: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp edx, 5 */ /* 0x171AEFBA: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AEFDD; /* 0x171AEFBD: jb 0x171aefdd */
L_171AEFBF:
    PUSH32(esp, ecx); /* 0x171AEFBF: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171AEFC0: fstp st(0) */
    eax = POP32_VAL(esp); /* 0x171AEFC2: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AEFC3: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171AEFC5: add esi, eax */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x171AEFC7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x171AEFC9: mov dword ptr [ebp - 0x20], esi */
    fp_push((double)(int32_t)MEM32(ebp + (-0x20))); /* 0x171AEFCC: fild dword ptr [ebp - 0x20] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171AEFD7; /* 0x171AEFCF: jge 0x171aefd7 */
L_171AEFD1:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x171AEFD1: fadd dword ptr [0x1700142c] */
L_171AEFD7:
    _st[0] *= (double)*(float*)ADDR(0x17005A98); /* 0x171AEFD7: fmul dword ptr [0x17005a98] */
L_171AEFDD:
    eax = ebp + (-0x18); /* 0x171AEFDD: lea eax, [ebp - 0x18] */
    PUSH32(esp, 0x14u); /* 0x171AEFE0: push 0x14 */
    PUSH32(esp, eax); /* 0x171AEFE2: push eax */
    RECOMP_CALL(sub_1721B050); /* 0x171AEFE3: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171AEFE8: push eax */
    PUSH32(esp, 0xAu); /* 0x171AEFE9: push 0xa */
    eax = esi; /* 0x171AEFEB: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AEFED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171AEFEF: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171AEFF0: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    goto L_171AF03C; /* 0x171AEFF2: jmp 0x171af03c */
L_171AEFF4:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17023D34)); /* 0x171AEFF4: fcom dword ptr [0x17023d34] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171AEFFA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171AEFFC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171AF016; /* 0x171AEFFF: jp 0x171af016 */
L_171AF001:
    eax = ebp + (-0x18); /* 0x171AF001: lea eax, [ebp - 0x18] */
    fp_push(_st[0]); /* 0x171AF004: fld st(0) */
    PUSH32(esp, 0x14u); /* 0x171AF006: push 0x14 */
    PUSH32(esp, eax); /* 0x171AF008: push eax */
    RECOMP_CALL(sub_1721B050); /* 0x171AF009: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(0x17005320); /* 0x171AF00E: fmul dword ptr [0x17005320] */
    goto L_171AF036; /* 0x171AF014: jmp 0x171af036 */
L_171AF016:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17023D48)); /* 0x171AF016: fcom dword ptr [0x17023d48] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171AF01C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171AF01E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171AF075; /* 0x171AF021: jp 0x171af075 */
L_171AF023:
    eax = ebp + (-0x18); /* 0x171AF023: lea eax, [ebp - 0x18] */
    fp_push(_st[0]); /* 0x171AF026: fld st(0) */
    PUSH32(esp, 0x14u); /* 0x171AF028: push 0x14 */
    PUSH32(esp, eax); /* 0x171AF02A: push eax */
    RECOMP_CALL(sub_1721B050); /* 0x171AF02B: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(0x17023D30); /* 0x171AF030: fmul dword ptr [0x17023d30] */
L_171AF036:
    PUSH32(esp, eax); /* 0x171AF036: push eax */
    RECOMP_CALL(sub_1721B050); /* 0x171AF037: call 0x1721b050 */
    RECOMP_FLAGS_IN();
L_171AF03C:
    PUSH32(esp, eax); /* 0x171AF03C: push eax */
    RECOMP_CALL(sub_171AEE5C); /* 0x171AF03D: call 0x171aee5c */
    RECOMP_FLAGS_IN();
L_171AF042:
    ecx = eax; /* 0x171AF042: mov ecx, eax */
    esi = ebp + (-0x4); /* 0x171AF044: lea esi, [ebp - 4] */
    edx = ecx; /* 0x171AF047: mov edx, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x171AF049: sub esi, eax */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AF04B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AF04B: shr ecx, 2 */
    /* cmp MEM8(ebp + (-0x19)), 0 */ /* 0x171AF04E: cmp byte ptr [ebp - 0x19], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x19))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF064; /* 0x171AF052: je 0x171af064 */
L_171AF054:
    edi = ebx + 0x1; /* 0x171AF054: lea edi, [ebx + 1] */
    MEM8(ebx) = (uint8_t)(0x2Du); /* 0x171AF057: mov byte ptr [ebx], 0x2d */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AF05A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171AF05C: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AF05E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AF061: inc eax */
    _flag_k = FK_INC;
    goto L_171AF06D; /* 0x171AF062: jmp 0x171af06d */
L_171AF064:
    edi = ebx; /* 0x171AF064: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171AF066: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171AF068: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171AF06A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AF06D:
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171AF06D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    MEM8(ebx + eax) = (uint8_t)(0); /* 0x171AF06F: mov byte ptr [ebx + eax], 0 */
    goto L_171AF09D; /* 0x171AF073: jmp 0x171af09d */
L_171AF075:
    PUSH32(esp, ecx); /* 0x171AF075: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171AF076: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171AF078: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x171AF07B: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171AF07C: fstp qword ptr [esp] */
    PUSH32(esp, 0x17023D2Cu); /* 0x171AF07F: push 0x17023d2c */
    PUSH32(esp, 0x14u); /* 0x171AF084: push 0x14 */
    PUSH32(esp, ebx); /* 0x171AF086: push ebx */
    RECOMP_CALL(sub_1705338C); /* 0x171AF087: call 0x1705338c */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x171AF08C: mov eax, ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x171AF08E: add esp, 0x14 */
    _flag_k = FK_ADD;
    edx = eax + 0x1; /* 0x171AF091: lea edx, [eax + 1] */
L_171AF094:
    SET_LO8(ecx, MEM8(eax)); /* 0x171AF094: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AF096: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171AF097: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AF094; /* 0x171AF099: jne 0x171af094 */
L_171AF09B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AF09B: sub eax, edx */
    _flag_k = FK_CMP;
L_171AF09D:
    ecx = MEM32(ebp + (-0x4)); /* 0x171AF09D: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171AF0A0: pop edi */
    esi = POP32_VAL(esp); /* 0x171AF0A1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AF0A2: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171AF0A3: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AF0A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AF0A9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AF0B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF0B1u);

L_171AF0B1:
    edi = edi; /* 0x171AF0B1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF0B3: push ebp */
    ebp = esp; /* 0x171AF0B4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AF0B6: push esi */
    PUSH32(esp, edi); /* 0x171AF0B7: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AF0B8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AF0BA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AF0BC:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171AF0BC: push -1 */
    PUSH32(esp, MEM32(esi + 0x17023D50)); /* 0x171AF0BE: push dword ptr [esi + 0x17023d50] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171AF0C4: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171AF0C6: push dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x171AF0C9: push 1 */
    PUSH32(esp, 0x409u); /* 0x171AF0CB: push 0x409 */
    RECOMP_ICALL(MEM32(0x170010A8)); /* 0x171AF0D0: call dword ptr [0x170010a8] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x171AF0D6: push 2 */
    ecx = POP32_VAL(esp); /* 0x171AF0D8: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171AF0D9: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171AF0F1; /* 0x171AF0DB: je 0x171af0f1 */
L_171AF0DD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x171AF0DD: add esi, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AF0E0: inc edi */
    _flag_k = FK_INC;
    /* cmp esi, 0x9Cu */ /* 0x171AF0E1: cmp esi, 0x9c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x9Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF0BC; /* 0x171AF0E7: jb 0x171af0bc */
L_171AF0E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AF0E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AF0EB:
    edi = POP32_VAL(esp); /* 0x171AF0EB: pop edi */
    esi = POP32_VAL(esp); /* 0x171AF0EC: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AF0ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AF0EE: ret 4 */
L_171AF0F1:
    eax = edi + edi * 2; /* 0x171AF0F1: lea eax, [edi + edi*2] */
    eax = eax * 4 + 0x17023D50; /* 0x171AF0F4: lea eax, [eax*4 + 0x17023d50] */
    RECOMP_BACKEDGE();
    goto L_171AF0EB; /* 0x171AF0FB: jmp 0x171af0eb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171AF102(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF102u);

L_171AF102:
    edi = edi; /* 0x171AF102: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF104: push ebp */
    ebp = esp; /* 0x171AF105: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171AF107: push esi */
    PUSH32(esp, 0x2F74u); /* 0x171AF108: push 0x2f74 */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x171AF10D: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x171AF110: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AF112: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x171AF114: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171AF116: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF1D4; /* 0x171AF117: je 0x171af1d4 */
L_171AF11D:
    PUSH32(esp, edi); /* 0x171AF11D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AF11E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xBDDu; /* 0x171AF120: mov ecx, 0xbdd */
    edi = edx; /* 0x171AF125: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171AF127: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = edx + 0xB8; /* 0x171AF129: lea eax, [edx + 0xb8] */
    MEM32(edx + 0x64) = eax; /* 0x171AF12F: mov dword ptr [edx + 0x64], eax */
    eax = edx + 0xAA0; /* 0x171AF132: lea eax, [edx + 0xaa0] */
    PUSH32(esp, 0xFu); /* 0x171AF138: push 0xf */
    MEM32(edx + 0x68) = eax; /* 0x171AF13A: mov dword ptr [edx + 0x68], eax */
    eax = POP32_VAL(esp); /* 0x171AF13D: pop eax */
    ecx = edx + 0x9AC; /* 0x171AF13E: lea ecx, [edx + 0x9ac] */
    MEM32(edx + 0x78) = eax; /* 0x171AF144: mov dword ptr [edx + 0x78], eax */
    MEM32(edx + 0x80) = ecx; /* 0x171AF147: mov dword ptr [edx + 0x80], ecx */
    MEM32(edx + 0x94) = eax; /* 0x171AF14D: mov dword ptr [edx + 0x94], eax */
    ecx = edx + 0xF20; /* 0x171AF153: lea ecx, [edx + 0xf20] */
    eax = edx + 0xF98; /* 0x171AF159: lea eax, [edx + 0xf98] */
    MEM32(edx + 0x6C) = 0x17023DF8u; /* 0x171AF15F: mov dword ptr [edx + 0x6c], 0x17023df8 */
    MEM32(edx + 0x70) = 0x101u; /* 0x171AF166: mov dword ptr [edx + 0x70], 0x101 */
    MEM32(edx + 0x74) = 0x11Eu; /* 0x171AF16D: mov dword ptr [edx + 0x74], 0x11e */
    MEM32(edx + 0x7C) = esi; /* 0x171AF174: mov dword ptr [edx + 0x7c], esi */
    MEM32(edx + 0x84) = ecx; /* 0x171AF177: mov dword ptr [edx + 0x84], ecx */
    MEM32(edx + 0x88) = 0x17023E70u; /* 0x171AF17D: mov dword ptr [edx + 0x88], 0x17023e70 */
    MEM32(edx + 0x8C) = esi; /* 0x171AF187: mov dword ptr [edx + 0x8c], esi */
    MEM32(edx + 0x90) = 0x1Eu; /* 0x171AF18D: mov dword ptr [edx + 0x90], 0x1e */
    MEM32(edx + 0x98) = esi; /* 0x171AF197: mov dword ptr [edx + 0x98], esi */
    MEM32(edx + 0x9C) = eax; /* 0x171AF19D: mov dword ptr [edx + 0x9c], eax */
    MEM32(edx + 0xA0) = esi; /* 0x171AF1A3: mov dword ptr [edx + 0xa0], esi */
    MEM32(edx + 0xA4) = 0x17023EE8u; /* 0x171AF1A9: mov dword ptr [edx + 0xa4], 0x17023ee8 */
    MEM32(edx + 0xA8) = esi; /* 0x171AF1B3: mov dword ptr [edx + 0xa8], esi */
    MEM32(edx + 0xAC) = 0x13u; /* 0x171AF1B9: mov dword ptr [edx + 0xac], 0x13 */
    MEM32(edx + 0xB0) = 7; /* 0x171AF1C3: mov dword ptr [edx + 0xb0], 7 */
    MEM32(edx + 0xB4) = esi; /* 0x171AF1CD: mov dword ptr [edx + 0xb4], esi */
    edi = POP32_VAL(esp); /* 0x171AF1D3: pop edi */
L_171AF1D4:
    eax = edx; /* 0x171AF1D4: mov eax, edx */
    esi = POP32_VAL(esp); /* 0x171AF1D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x171AF1D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AF1D8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AF1E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF1E0u);

L_171AF1E0:
    edi = edi; /* 0x171AF1E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF1E2: push ebp */
    ebp = esp; /* 0x171AF1E3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171AF1E5: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x171AF1E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x171AF1EA: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x171AF1ED: mov edx, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x171AF1F0: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = edx; /* 0x171AF1F2: mov dword ptr [eax + 8], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF1FF; /* 0x171AF1F5: je 0x171af1ff */
L_171AF1F7:
    /* test edx, edx */ /* 0x171AF1F7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF1FF; /* 0x171AF1F9: je 0x171af1ff */
L_171AF1FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AF1FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AF202; /* 0x171AF1FD: jmp 0x171af202 */
L_171AF1FF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171AF1FF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AF202:
    ebp = POP32_VAL(esp); /* 0x171AF202: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171AF203: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171AF20B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF20Bu);

L_171AF20B:
    ecx = MEM32(eax + 0x38); /* 0x171AF20B: mov ecx, dword ptr [eax + 0x38] */
    PUSH32(esp, esi); /* 0x171AF20E: push esi */
    PUSH32(esp, 0x10u); /* 0x171AF20F: push 0x10 */
    esi = POP32_VAL(esp); /* 0x171AF211: pop esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171AF212: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp ecx, esi */ /* 0x171AF214: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171AF29D; /* 0x171AF216: jle 0x171af29d */
L_171AF21C:
    esi = edx; /* 0x171AF21C: mov esi, edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171AF21E: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171AF21E: shl esi, cl */
    ecx = MEM32(eax + 0x10); /* 0x171AF220: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, ebx); /* 0x171AF223: push ebx */
    ebx = ecx + (-0x2); /* 0x171AF224: lea ebx, [ecx - 2] */
    _flag_a = (uint32_t)((MEM16(eax + 0x34) | LO16(esi))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x34) | LO16(esi))) << 16;
    MEM16(eax + 0x34) = (uint16_t)(MEM16(eax + 0x34) | LO16(esi)); /* 0x171AF227: or word ptr [eax + 0x34], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = (uint32_t)MEM16(eax + 0xC); /* 0x171AF22B: movzx esi, word ptr [eax + 0xc] */
    /* cmp esi, ebx */ /* 0x171AF22F: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AF24F; /* 0x171AF231: jae 0x171af24f */
L_171AF233:
    ecx = MEM32(eax + 0x4); /* 0x171AF233: mov ecx, dword ptr [eax + 4] */
    SET_LO8(ebx, MEM8(eax + 0x34)); /* 0x171AF236: mov bl, byte ptr [eax + 0x34] */
    MEM8(esi + ecx) = (uint8_t)(LO8(ebx)); /* 0x171AF239: mov byte ptr [esi + ecx], bl */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF23C: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF240: movzx ecx, word ptr [eax + 0xc] */
    esi = MEM32(eax + 0x4); /* 0x171AF244: mov esi, dword ptr [eax + 4] */
    SET_LO8(ebx, MEM8(eax + 0x35)); /* 0x171AF247: mov bl, byte ptr [eax + 0x35] */
    MEM8(ecx + esi) = (uint8_t)(LO8(ebx)); /* 0x171AF24A: mov byte ptr [ecx + esi], bl */
    goto L_171AF284; /* 0x171AF24D: jmp 0x171af284 */
L_171AF24F:
    /* cmp esi, ecx */ /* 0x171AF24F: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF25C; /* 0x171AF251: jb 0x171af25c */
L_171AF253:
    MEM32(eax + 0x30) = 1; /* 0x171AF253: mov dword ptr [eax + 0x30], 1 */
    goto L_171AF269; /* 0x171AF25A: jmp 0x171af269 */
L_171AF25C:
    ecx = MEM32(eax + 0x4); /* 0x171AF25C: mov ecx, dword ptr [eax + 4] */
    SET_LO8(ebx, MEM8(eax + 0x34)); /* 0x171AF25F: mov bl, byte ptr [eax + 0x34] */
    MEM8(esi + ecx) = (uint8_t)(LO8(ebx)); /* 0x171AF262: mov byte ptr [esi + ecx], bl */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF265: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_171AF269:
    esi = (uint32_t)MEM16(eax + 0xC); /* 0x171AF269: movzx esi, word ptr [eax + 0xc] */
    /* cmp esi, MEM32(eax + 0x10) */ /* 0x171AF26D: cmp esi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF27B; /* 0x171AF270: jb 0x171af27b */
L_171AF272:
    MEM32(eax + 0x30) = 1; /* 0x171AF272: mov dword ptr [eax + 0x30], 1 */
    goto L_171AF288; /* 0x171AF279: jmp 0x171af288 */
L_171AF27B:
    ecx = MEM32(eax + 0x4); /* 0x171AF27B: mov ecx, dword ptr [eax + 4] */
    SET_LO8(ebx, MEM8(eax + 0x35)); /* 0x171AF27E: mov bl, byte ptr [eax + 0x35] */
    MEM8(esi + ecx) = (uint8_t)(LO8(ebx)); /* 0x171AF281: mov byte ptr [esi + ecx], bl */
L_171AF284:
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF284: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_171AF288:
    esi = MEM32(eax + 0x38); /* 0x171AF288: mov esi, dword ptr [eax + 0x38] */
    PUSH32(esp, 0x10u); /* 0x171AF28B: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x171AF28D: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171AF28E: sub ecx, esi */
    _flag_k = FK_CMP;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x171AF290: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    ecx = esi + edi + (-0x10); /* 0x171AF292: lea ecx, [esi + edi - 0x10] */
    ebx = POP32_VAL(esp); /* 0x171AF296: pop ebx */
    MEM16(eax + 0x34) = (uint16_t)(LO16(edx)); /* 0x171AF297: mov word ptr [eax + 0x34], dx */
    goto L_171AF2A5; /* 0x171AF29B: jmp 0x171af2a5 */
L_171AF29D:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171AF29D: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171AF29D: shl edx, cl */
    _flag_a = (uint32_t)((MEM16(eax + 0x34) | LO16(edx))) << 16; _flag_b = (uint32_t)((MEM16(eax + 0x34) | LO16(edx))) << 16;
    MEM16(eax + 0x34) = (uint16_t)(MEM16(eax + 0x34) | LO16(edx)); /* 0x171AF29F: or word ptr [eax + 0x34], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171AF2A3: add ecx, edi */
    _flag_k = FK_ADD;
L_171AF2A5:
    MEM32(eax + 0x38) = ecx; /* 0x171AF2A5: mov dword ptr [eax + 0x38], ecx */
    esi = POP32_VAL(esp); /* 0x171AF2A8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AF2A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AF2AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF2AFu);

L_171AF2AF:
    edi = edi; /* 0x171AF2AF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF2B1: push ebp */
    ebp = esp; /* 0x171AF2B2: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AF2B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AF2B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AF2B6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(ebp + 0x8)); /* 0x171AF2B8: mov cl, byte ptr [ebp + 8] */
    if (1u) _cf = (((MEM32(ebp + 0x8)) >> 0) & 1u); /* 0x171AF2BB: sar dword ptr [ebp + 8], 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)MEM32(ebp + 0x8) >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + 0x8) = (uint32_t)((int32_t)MEM32(ebp + 0x8) >> 1u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x171AF2BE: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x171AF2C1: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x171AF2C3: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x171AF2C3: shl eax, 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x171AF2C5: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171AF2C8: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_171AF2B6; /* 0x171AF2CC: jg 0x171af2b6 */
L_171AF2CE:
    eax = (uint32_t)LO16(eax); /* 0x171AF2CE: movzx eax, ax */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x171AF2D1: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x171AF2D1: shr eax, 1 */
    ebp = POP32_VAL(esp); /* 0x171AF2D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AF2D4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AF2DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF2DCu);

L_171AF2DC:
    ecx = MEM32(eax + 0x38); /* 0x171AF2DC: mov ecx, dword ptr [eax + 0x38] */
    /* cmp ecx, 8 */ /* 0x171AF2DF: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AF2E2: push ebx */
    PUSH32(esp, esi); /* 0x171AF2E3: push esi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171AF331; /* 0x171AF2E4: jle 0x171af331 */
L_171AF2E6:
    edx = MEM32(eax + 0x10); /* 0x171AF2E6: mov edx, dword ptr [eax + 0x10] */
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF2E9: movzx ecx, word ptr [eax + 0xc] */
    esi = edx + (-0x2); /* 0x171AF2ED: lea esi, [edx - 2] */
    /* cmp ecx, esi */ /* 0x171AF2F0: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AF30A; /* 0x171AF2F2: jae 0x171af30a */
L_171AF2F4:
    edx = MEM32(eax + 0x4); /* 0x171AF2F4: mov edx, dword ptr [eax + 4] */
    SET_LO8(ebx, MEM8(eax + 0x34)); /* 0x171AF2F7: mov bl, byte ptr [eax + 0x34] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x171AF2FA: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF2FD: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF301: movzx ecx, word ptr [eax + 0xc] */
L_171AF305:
    SET_LO8(ebx, MEM8(eax + 0x35)); /* 0x171AF305: mov bl, byte ptr [eax + 0x35] */
    goto L_171AF34A; /* 0x171AF308: jmp 0x171af34a */
L_171AF30A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AF30A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AF30C: inc esi */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171AF30D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF316; /* 0x171AF30F: jb 0x171af316 */
L_171AF311:
    MEM32(eax + 0x30) = esi; /* 0x171AF311: mov dword ptr [eax + 0x30], esi */
    goto L_171AF323; /* 0x171AF314: jmp 0x171af323 */
L_171AF316:
    edx = MEM32(eax + 0x4); /* 0x171AF316: mov edx, dword ptr [eax + 4] */
    SET_LO8(ebx, MEM8(eax + 0x34)); /* 0x171AF319: mov bl, byte ptr [eax + 0x34] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x171AF31C: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF31F: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_171AF323:
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF323: movzx ecx, word ptr [eax + 0xc] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x171AF327: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF305; /* 0x171AF32A: jb 0x171af305 */
L_171AF32C:
    MEM32(eax + 0x30) = esi; /* 0x171AF32C: mov dword ptr [eax + 0x30], esi */
    goto L_171AF354; /* 0x171AF32F: jmp 0x171af354 */
L_171AF331:
    /* test ecx, ecx */ /* 0x171AF331: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AF354; /* 0x171AF333: jle 0x171af354 */
L_171AF335:
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF335: movzx ecx, word ptr [eax + 0xc] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x171AF339: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF347; /* 0x171AF33C: jb 0x171af347 */
L_171AF33E:
    MEM32(eax + 0x30) = 1; /* 0x171AF33E: mov dword ptr [eax + 0x30], 1 */
    goto L_171AF354; /* 0x171AF345: jmp 0x171af354 */
L_171AF347:
    SET_LO8(ebx, MEM8(eax + 0x34)); /* 0x171AF347: mov bl, byte ptr [eax + 0x34] */
L_171AF34A:
    edx = MEM32(eax + 0x4); /* 0x171AF34A: mov edx, dword ptr [eax + 4] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x171AF34D: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF350: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_171AF354:
    _flag_a = (uint32_t)(MEM16(eax + 0x34)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax + 0x34) = (uint16_t)(MEM16(eax + 0x34) & 0); /* 0x171AF354: and word ptr [eax + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x38) = MEM32(eax + 0x38) & 0; /* 0x171AF359: and dword ptr [eax + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171AF35D: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AF35E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AF35F: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AF365(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF365u);

L_171AF365:
    edi = edi; /* 0x171AF365: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF367: push ebp */
    ebp = esp; /* 0x171AF368: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171AF36A: push ebx */
    PUSH32(esp, esi); /* 0x171AF36B: push esi */
    PUSH32(esp, edi); /* 0x171AF36C: push edi */
    SET_LO16(ebx, LO16(ecx)); /* 0x171AF36D: mov bx, cx */
    RECOMP_CALL(sub_171AF2DC); /* 0x171AF370: call 0x171af2dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AF375: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AF377: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171AF378: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF3A4; /* 0x171AF37C: je 0x171af3a4 */
L_171AF37E:
    edx = MEM32(eax + 0x10); /* 0x171AF37E: mov edx, dword ptr [eax + 0x10] */
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF381: movzx ecx, word ptr [eax + 0xc] */
    esi = edx + (-0x2); /* 0x171AF385: lea esi, [edx - 2] */
    /* cmp ecx, esi */ /* 0x171AF388: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AF3BA; /* 0x171AF38A: jae 0x171af3ba */
L_171AF38C:
    edx = MEM32(eax + 0x4); /* 0x171AF38C: mov edx, dword ptr [eax + 4] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x171AF38F: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF392: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF396: movzx ecx, word ptr [eax + 0xc] */
L_171AF39A:
    edx = MEM32(eax + 0x4); /* 0x171AF39A: mov edx, dword ptr [eax + 4] */
    MEM8(ecx + edx) = (uint8_t)(HI8(ebx)); /* 0x171AF39D: mov byte ptr [ecx + edx], bh */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF3A0: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_171AF3A4:
    /* test LO16(ebx), LO16(ebx) */ /* 0x171AF3A4: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF3F0; /* 0x171AF3A7: je 0x171af3f0 */
L_171AF3A9:
    esi = (uint32_t)LO16(ebx); /* 0x171AF3A9: movzx esi, bx */
L_171AF3AC:
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF3AC: movzx ecx, word ptr [eax + 0xc] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x171AF3B0: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF3DB; /* 0x171AF3B3: jb 0x171af3db */
L_171AF3B5:
    MEM32(eax + 0x30) = edi; /* 0x171AF3B5: mov dword ptr [eax + 0x30], edi */
    goto L_171AF3ED; /* 0x171AF3B8: jmp 0x171af3ed */
L_171AF3BA:
    /* cmp ecx, edx */ /* 0x171AF3BA: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF3C3; /* 0x171AF3BC: jb 0x171af3c3 */
L_171AF3BE:
    MEM32(eax + 0x30) = edi; /* 0x171AF3BE: mov dword ptr [eax + 0x30], edi */
    goto L_171AF3CD; /* 0x171AF3C1: jmp 0x171af3cd */
L_171AF3C3:
    edx = MEM32(eax + 0x4); /* 0x171AF3C3: mov edx, dword ptr [eax + 4] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x171AF3C6: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF3C9: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_171AF3CD:
    ecx = (uint32_t)MEM16(eax + 0xC); /* 0x171AF3CD: movzx ecx, word ptr [eax + 0xc] */
    /* cmp ecx, MEM32(eax + 0x10) */ /* 0x171AF3D1: cmp ecx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF39A; /* 0x171AF3D4: jb 0x171af39a */
L_171AF3D6:
    MEM32(eax + 0x30) = edi; /* 0x171AF3D6: mov dword ptr [eax + 0x30], edi */
    RECOMP_BACKEDGE();
    goto L_171AF3A4; /* 0x171AF3D9: jmp 0x171af3a4 */
L_171AF3DB:
    ebx = MEM32(ebp + 0x8); /* 0x171AF3DB: mov ebx, dword ptr [ebp + 8] */
    SET_LO8(ebx, MEM8(ebx)); /* 0x171AF3DE: mov bl, byte ptr [ebx] */
    edx = MEM32(eax + 0x4); /* 0x171AF3E0: mov edx, dword ptr [eax + 4] */
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x171AF3E3: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(MEM16(eax + 0xC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0xC) = (uint16_t)(MEM16(eax + 0xC) + 1); /* 0x171AF3E6: inc word ptr [eax + 0xc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171AF3EA: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
L_171AF3ED:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AF3ED: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AF3AC; /* 0x171AF3EE: jne 0x171af3ac */
L_171AF3F0:
    edi = POP32_VAL(esp); /* 0x171AF3F0: pop edi */
    esi = POP32_VAL(esp); /* 0x171AF3F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AF3F2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AF3F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AF3F4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AF3FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF3FCu);

L_171AF3FC:
    edi = edi; /* 0x171AF3FC: mov edi, edi */
    PUSH32(esp, esi); /* 0x171AF3FE: push esi */
    ecx = eax + 0xB8; /* 0x171AF3FF: lea ecx, [eax + 0xb8] */
    esi = 0x11Eu; /* 0x171AF405: mov esi, 0x11e */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AF40A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AF40C:
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x171AF40C: mov word ptr [ecx], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171AF40F: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AF412: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AF40C; /* 0x171AF413: jne 0x171af40c */
L_171AF415:
    PUSH32(esp, 0x1Eu); /* 0x171AF415: push 0x1e */
    ecx = eax + 0x9AC; /* 0x171AF417: lea ecx, [eax + 0x9ac] */
    esi = POP32_VAL(esp); /* 0x171AF41D: pop esi */
L_171AF41E:
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x171AF41E: mov word ptr [ecx], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171AF421: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AF424: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AF41E; /* 0x171AF425: jne 0x171af41e */
L_171AF427:
    PUSH32(esp, 0x13u); /* 0x171AF427: push 0x13 */
    ecx = eax + 0xF98; /* 0x171AF429: lea ecx, [eax + 0xf98] */
    esi = POP32_VAL(esp); /* 0x171AF42F: pop esi */
L_171AF430:
    MEM16(ecx) = (uint16_t)(LO16(edx)); /* 0x171AF430: mov word ptr [ecx], dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171AF433: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AF436: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AF430; /* 0x171AF437: jne 0x171af430 */
L_171AF439:
    MEM16(eax + 0x4B8) = (uint16_t)(1); /* 0x171AF439: mov word ptr [eax + 0x4b8], 1 */
    MEM32(eax + 0x5C) = edx; /* 0x171AF442: mov dword ptr [eax + 0x5c], edx */
    MEM32(eax + 0x58) = edx; /* 0x171AF445: mov dword ptr [eax + 0x58], edx */
    MEM16(eax + 0x54) = (uint16_t)(LO16(edx)); /* 0x171AF448: mov word ptr [eax + 0x54], dx */
    MEM16(eax + 0x52) = (uint16_t)(LO16(edx)); /* 0x171AF44C: mov word ptr [eax + 0x52], dx */
    MEM16(eax + 0x50) = (uint16_t)(LO16(edx)); /* 0x171AF450: mov word ptr [eax + 0x50], dx */
    MEM8(eax + 0x56) = (uint8_t)(LO8(edx)); /* 0x171AF454: mov byte ptr [eax + 0x56], dl */
    MEM8(eax + 0x57) = (uint8_t)(1); /* 0x171AF457: mov byte ptr [eax + 0x57], 1 */
    esi = POP32_VAL(esp); /* 0x171AF45B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AF45C: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AF462(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF462u);

L_171AF462:
    edi = edi; /* 0x171AF462: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF464: push ebp */
    ebp = esp; /* 0x171AF465: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AF467: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171AF468: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(eax + ecx * 4 + 0x1054); /* 0x171AF46B: mov edx, dword ptr [eax + ecx*4 + 0x1054] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171AF472: mov dword ptr [ebp - 4], edx */
    edx = MEM32(eax + 0x48); /* 0x171AF475: mov edx, dword ptr [eax + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x171AF478: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x171AF47A: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171AF4FB; /* 0x171AF47C: jg 0x171af4fb */
L_171AF47E:
    PUSH32(esp, ebx); /* 0x171AF47E: push ebx */
    PUSH32(esp, esi); /* 0x171AF47F: push esi */
L_171AF480:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_GE, _cf)) goto L_171AF4B7; /* 0x171AF480: jge 0x171af4b7 */
L_171AF482:
    esi = MEM32(eax + ecx * 4 + 0x1058); /* 0x171AF482: mov esi, dword ptr [eax + ecx*4 + 0x1058] */
    edx = MEM32(eax + ecx * 4 + 0x1054); /* 0x171AF489: mov edx, dword ptr [eax + ecx*4 + 0x1054] */
    SET_LO16(ebx, MEM16(edi + esi * 4)); /* 0x171AF490: mov bx, word ptr [edi + esi*4] */
    SET_LO16(edx, MEM16(edi + edx * 4)); /* 0x171AF494: mov dx, word ptr [edi + edx*4] */
    /* cmp LO16(ebx), LO16(edx) */ /* 0x171AF498: cmp bx, dx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF4B6; /* 0x171AF49B: jb 0x171af4b6 */
L_171AF49D:
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AF4B7; /* 0x171AF49D: jne 0x171af4b7 */
L_171AF49F:
    SET_LO8(edx, MEM8(esi + eax + 0x1948)); /* 0x171AF49F: mov dl, byte ptr [esi + eax + 0x1948] */
    esi = MEM32(eax + ecx * 4 + 0x1054); /* 0x171AF4A6: mov esi, dword ptr [eax + ecx*4 + 0x1054] */
    /* cmp LO8(edx), MEM8(esi + eax + 0x1948) */ /* 0x171AF4AD: cmp dl, byte ptr [esi + eax + 0x1948] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + eax + 0x1948)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_171AF4B7; /* 0x171AF4B4: ja 0x171af4b7 */
L_171AF4B6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AF4B6: inc ecx */
    _flag_k = FK_INC;
L_171AF4B7:
    esi = MEM32(eax + ecx * 4 + 0x1054); /* 0x171AF4B7: mov esi, dword ptr [eax + ecx*4 + 0x1054] */
    edx = MEM32(ebp + (-0x4)); /* 0x171AF4BE: mov edx, dword ptr [ebp - 4] */
    SET_LO16(edx, MEM16(edi + edx * 4)); /* 0x171AF4C1: mov dx, word ptr [edi + edx*4] */
    SET_LO16(ebx, MEM16(edi + esi * 4)); /* 0x171AF4C5: mov bx, word ptr [edi + esi*4] */
    /* cmp LO16(edx), LO16(ebx) */ /* 0x171AF4C9: cmp dx, bx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF4F9; /* 0x171AF4CC: jb 0x171af4f9 */
L_171AF4CE:
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AF4E3; /* 0x171AF4CE: jne 0x171af4e3 */
L_171AF4D0:
    edx = MEM32(ebp + (-0x4)); /* 0x171AF4D0: mov edx, dword ptr [ebp - 4] */
    SET_LO8(edx, MEM8(edx + eax + 0x1948)); /* 0x171AF4D3: mov dl, byte ptr [edx + eax + 0x1948] */
    /* cmp LO8(edx), MEM8(esi + eax + 0x1948) */ /* 0x171AF4DA: cmp dl, byte ptr [esi + eax + 0x1948] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + eax + 0x1948)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AF4F9; /* 0x171AF4E1: jbe 0x171af4f9 */
L_171AF4E3:
    edx = MEM32(ebp + 0x8); /* 0x171AF4E3: mov edx, dword ptr [ebp + 8] */
    MEM32(eax + edx * 4 + 0x1054) = esi; /* 0x171AF4E6: mov dword ptr [eax + edx*4 + 0x1054], esi */
    edx = MEM32(eax + 0x48); /* 0x171AF4ED: mov edx, dword ptr [eax + 0x48] */
    MEM32(ebp + 0x8) = ecx; /* 0x171AF4F0: mov dword ptr [ebp + 8], ecx */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x171AF4F3: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x171AF4F3: shl ecx, 1 */
    /* cmp ecx, edx */ /* 0x171AF4F5: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171AF480; /* 0x171AF4F7: jle 0x171af480 */
L_171AF4F9:
    esi = POP32_VAL(esp); /* 0x171AF4F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AF4FA: pop ebx */
L_171AF4FB:
    ecx = MEM32(ebp + (-0x4)); /* 0x171AF4FB: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x8); /* 0x171AF4FE: mov edx, dword ptr [ebp + 8] */
    MEM32(eax + edx * 4 + 0x1054) = ecx; /* 0x171AF501: mov dword ptr [eax + edx*4 + 0x1054], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AF508: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AF509: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AF511(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF511u);

L_171AF511:
    edi = edi; /* 0x171AF511: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF513: push ebp */
    ebp = esp; /* 0x171AF514: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x171AF516: sub esp, 0x28 */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x8); /* 0x171AF519: mov ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171AF51C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ecx; /* 0x171AF520: mov dword ptr [ebp - 0x20], ecx */
    ecx = MEM32(eax + 0xC); /* 0x171AF523: mov ecx, dword ptr [eax + 0xc] */
    PUSH32(esp, ebx); /* 0x171AF526: push ebx */
    ebx = MEM32(eax); /* 0x171AF527: mov ebx, dword ptr [eax] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x171AF529: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(eax + 0x18); /* 0x171AF52C: mov ecx, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x171AF52F: push esi */
    PUSH32(esp, edi); /* 0x171AF530: push edi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171AF531: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(eax + 0x14); /* 0x171AF534: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(eax + 0x4); /* 0x171AF537: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x24)) = eax; /* 0x171AF53A: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AF53D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171AF53F: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, 8); /* 0x171AF542: push 8 */
    edi = edx + 0x1034; /* 0x171AF544: lea edi, [edx + 0x1034] */
    ecx = POP32_VAL(esp); /* 0x171AF54A: pop ecx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171AF54B: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(edx + 0x4C); /* 0x171AF54D: mov eax, dword ptr [edx + 0x4c] */
    eax = MEM32(edx + eax * 4 + 0x1054); /* 0x171AF550: mov eax, dword ptr [edx + eax*4 + 0x1054] */
    _flag_a = (uint32_t)(MEM16(ebx + eax * 4 + 0x2)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ebx + eax * 4 + 0x2) = (uint16_t)(MEM16(ebx + eax * 4 + 0x2) & 0); /* 0x171AF557: and word ptr [ebx + eax*4 + 2], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = MEM32(edx + 0x4C); /* 0x171AF55D: mov esi, dword ptr [edx + 0x4c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AF560: inc esi */
    _flag_k = FK_INC;
    eax = 0x23Du; /* 0x171AF561: mov eax, 0x23d */
    /* cmp esi, eax */ /* 0x171AF566: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AF6B2; /* 0x171AF568: jge 0x171af6b2 */
L_171AF56E:
    ecx = edx + esi * 4 + 0x1054; /* 0x171AF56E: lea ecx, [edx + esi*4 + 0x1054] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171AF575: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x171AF577: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x171AF57A: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171AF57D: add esi, eax */
    _flag_k = FK_ADD;
L_171AF57F:
    eax = MEM32(ebp + (-0x10)); /* 0x171AF57F: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x171AF582: mov ecx, dword ptr [eax] */
    eax = ecx; /* 0x171AF584: mov eax, ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171AF586: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171AF586: shl eax, 2 */
    MEM32(ebp + (-0xC)) = eax; /* 0x171AF589: mov dword ptr [ebp - 0xc], eax */
    eax = (uint32_t)MEM16(eax + ebx + 0x2); /* 0x171AF58C: movzx eax, word ptr [eax + ebx + 2] */
    eax = (uint32_t)MEM16(ebx + eax * 4 + 0x2); /* 0x171AF591: movzx eax, word ptr [ebx + eax*4 + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AF596: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x171AF597: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171AF5A2; /* 0x171AF59A: jle 0x171af5a2 */
L_171AF59C:
    eax = MEM32(ebp + (-0x8)); /* 0x171AF59C: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171AF59F: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
L_171AF5A2:
    /* cmp ecx, MEM32(ebp + (-0x1C)) */ /* 0x171AF5A2: cmp ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0xC)); /* 0x171AF5A5: mov edi, dword ptr [ebp - 0xc] */
    MEM16(edi + ebx + 0x2) = (uint16_t)(LO16(eax)); /* 0x171AF5A8: mov word ptr [edi + ebx + 2], ax */
    if (CMP_G(_flag_a, _flag_b)) goto L_171AF5F1; /* 0x171AF5AD: jg 0x171af5f1 */
L_171AF5AF:
    _flag_a = (uint32_t)(MEM16(edx + eax * 2 + 0x1034)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx + eax * 2 + 0x1034) = (uint16_t)(MEM16(edx + eax * 2 + 0x1034) + 1); /* 0x171AF5AF: inc word ptr [edx + eax*2 + 0x1034] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AF5B7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebp + (-0x14)) */ /* 0x171AF5B9: cmp ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171AF5C7; /* 0x171AF5BC: jl 0x171af5c7 */
L_171AF5BE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x14)); /* 0x171AF5BE: sub ecx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x20)); /* 0x171AF5C1: mov edi, dword ptr [ebp - 0x20] */
    edi = MEM32(edi + ecx * 4); /* 0x171AF5C4: mov edi, dword ptr [edi + ecx*4] */
L_171AF5C7:
    ecx = MEM32(ebp + (-0xC)); /* 0x171AF5C7: mov ecx, dword ptr [ebp - 0xc] */
    ecx = (uint32_t)MEM16(ecx + ebx); /* 0x171AF5CA: movzx ecx, word ptr [ecx + ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171AF5CE: add eax, edi */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171AF5D0: imul eax, ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x58)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0x58) = MEM32(edx + 0x58) + eax; /* 0x171AF5D3: add dword ptr [edx + 0x58], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x24)); /* 0x171AF5D6: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x171AF5D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = ecx; /* 0x171AF5DB: mov dword ptr [ebp - 0x28], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF5F1; /* 0x171AF5DE: je 0x171af5f1 */
L_171AF5E0:
    ecx = MEM32(ebp + (-0xC)); /* 0x171AF5E0: mov ecx, dword ptr [ebp - 0xc] */
    eax = (uint32_t)MEM16(ecx + eax + 0x2); /* 0x171AF5E3: movzx eax, word ptr [ecx + eax + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171AF5E8: add eax, edi */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x28))); /* 0x171AF5EA: imul eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(MEM32(edx + 0x5C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0x5C) = MEM32(edx + 0x5C) + eax; /* 0x171AF5EE: add dword ptr [edx + 0x5c], eax */
    _flag_k = FK_ADD;
L_171AF5F1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 4; /* 0x171AF5F1: add dword ptr [ebp - 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x171AF5F5: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AF57F; /* 0x171AF5F8: jne 0x171af57f */
L_171AF5FA:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x171AF5FA: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF6B2; /* 0x171AF5FE: je 0x171af6b2 */
L_171AF604:
    eax = MEM32(ebp + (-0x8)); /* 0x171AF604: mov eax, dword ptr [ebp - 8] */
    ecx = edx + eax * 2 + 0x1034; /* 0x171AF607: lea ecx, [edx + eax*2 + 0x1034] */
L_171AF60E:
    eax = MEM32(ebp + (-0x8)); /* 0x171AF60E: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171AF611: dec eax */
    _flag_k = FK_DEC;
    edi = edx + eax * 2 + 0x1034; /* 0x171AF612: lea edi, [edx + eax*2 + 0x1034] */
    goto L_171AF61E; /* 0x171AF619: jmp 0x171af61e */
L_171AF61B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171AF61B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171AF61C: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171AF61D: dec edi */
    _flag_k = FK_DEC;
L_171AF61E:
    /* cmp MEM16(edi), 0 */ /* 0x171AF61E: cmp word ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF61B; /* 0x171AF622: je 0x171af61b */
L_171AF624:
    _flag_a = (uint32_t)(MEM16(edx + eax * 2 + 0x1034)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx + eax * 2 + 0x1034) = (uint16_t)(MEM16(edx + eax * 2 + 0x1034) - 1); /* 0x171AF624: dec word ptr [edx + eax*2 + 0x1034] */
    _flag_k = FK_NARROW(FK_DEC, 16);
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 2; /* 0x171AF62C: sub dword ptr [ebp - 4], 2 */
    _flag_k = FK_CMP;
    eax = edx + eax * 2 + 0x1036; /* 0x171AF630: lea eax, [edx + eax*2 + 0x1036] */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(2) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(eax) = (uint16_t)(MEM16(eax) + 2); /* 0x171AF637: add word ptr [eax], 2 */
    _flag_k = FK_NARROW(FK_ADD, 16);
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) - 1); /* 0x171AF63B: dec word ptr [ecx] */
    _flag_k = FK_NARROW(FK_DEC, 16);
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x171AF63E: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_171AF60E; /* 0x171AF642: jg 0x171af60e */
L_171AF644:
    eax = MEM32(ebp + (-0x8)); /* 0x171AF644: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x171AF647: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171AF649: mov dword ptr [ebp - 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF6B2; /* 0x171AF64C: je 0x171af6b2 */
L_171AF64E:
    MEM32(ebp + (-0xC)) = ecx; /* 0x171AF64E: mov dword ptr [ebp - 0xc], ecx */
L_171AF651:
    eax = MEM32(ebp + (-0xC)); /* 0x171AF651: mov eax, dword ptr [ebp - 0xc] */
    eax = (uint32_t)MEM16(eax); /* 0x171AF654: movzx eax, word ptr [eax] */
    /* test eax, eax */ /* 0x171AF657: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x171AF659: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF6A5; /* 0x171AF65C: je 0x171af6a5 */
L_171AF65E:
    ecx = edx + esi * 4 + 0x1054; /* 0x171AF65E: lea ecx, [edx + esi*4 + 0x1054] */
L_171AF665:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x171AF665: sub ecx, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx); /* 0x171AF668: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AF66A: dec esi */
    _flag_k = FK_DEC;
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x171AF66B: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = ecx; /* 0x171AF66E: mov dword ptr [ebp - 0x28], ecx */
    if (CMP_G(_flag_a, _flag_b)) goto L_171AF69F; /* 0x171AF671: jg 0x171af69f */
L_171AF673:
    eax = ebx + eax * 4; /* 0x171AF673: lea eax, [ebx + eax*4] */
    SET_LO16(ecx, MEM16(eax + 0x2)); /* 0x171AF676: mov cx, word ptr [eax + 2] */
    /* cmp LO16(ecx), MEM16(ebp + (-0x4)) */ /* 0x171AF67A: cmp cx, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF699; /* 0x171AF67E: je 0x171af699 */
L_171AF680:
    edi = MEM32(ebp + (-0x4)); /* 0x171AF680: mov edi, dword ptr [ebp - 4] */
    ecx = (uint32_t)LO16(ecx); /* 0x171AF683: movzx ecx, cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171AF686: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(eax); /* 0x171AF688: movzx ecx, word ptr [eax] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x171AF68B: imul edi, ecx */
    SET_LO16(ecx, MEM16(ebp + (-0x4))); /* 0x171AF68E: mov cx, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(edx + 0x58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0x58) = MEM32(edx + 0x58) + edi; /* 0x171AF692: add dword ptr [edx + 0x58], edi */
    _flag_k = FK_ADD;
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x171AF695: mov word ptr [eax + 2], cx */
L_171AF699:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x171AF699: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    ecx = MEM32(ebp + (-0x28)); /* 0x171AF69C: mov ecx, dword ptr [ebp - 0x28] */
L_171AF69F:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x171AF69F: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AF665; /* 0x171AF6A3: jne 0x171af665 */
L_171AF6A5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x171AF6A5: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 2; /* 0x171AF6A8: sub dword ptr [ebp - 0xc], 2 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x171AF6AC: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AF651; /* 0x171AF6B0: jne 0x171af651 */
L_171AF6B2:
    edi = POP32_VAL(esp); /* 0x171AF6B2: pop edi */
    esi = POP32_VAL(esp); /* 0x171AF6B3: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AF6B4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AF6B5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AF6B6: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AF6BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF6BCu);

L_171AF6BC:
    edi = edi; /* 0x171AF6BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF6BE: push ebp */
    ebp = esp; /* 0x171AF6BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x171AF6C1: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171AF6C4: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171AF6C9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x171AF6CC: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AF6CF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171AF6D1: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AF6D2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AF6D4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AF6D6: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x171AF6D7: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1034u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1034u; /* 0x171AF6D8: add eax, 0x1034 */
    _flag_k = FK_ADD;
L_171AF6DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171AF6DD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edi, MEM16(eax)); /* 0x171AF6DF: mov di, word ptr [eax] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(edi, LO16(edi) + LO16(ecx)); /* 0x171AF6E2: add di, cx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    if (1u) _cf = (((edi) >> 31) & 1u); /* 0x171AF6E5: shl edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 1u; /* 0x171AF6E5: shl edi, 1 */
    ecx = edi; /* 0x171AF6E7: mov ecx, edi */
    MEM16(ebp + edx * 2 + (-0x24)) = (uint16_t)(LO16(ecx)); /* 0x171AF6E9: mov word ptr [ebp + edx*2 - 0x24], cx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AF6EE: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AF6EF: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AF6F0: inc eax */
    _flag_k = FK_INC;
    /* cmp edx, 0xFu */ /* 0x171AF6F1: cmp edx, 0xf */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171AF6DD; /* 0x171AF6F4: jle 0x171af6dd */
L_171AF6F6:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x171AF6F6: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171AF725; /* 0x171AF6F9: jl 0x171af725 */
L_171AF6FB:
    ecx = (uint32_t)MEM16(esi + ebx * 4 + 0x2); /* 0x171AF6FB: movzx ecx, word ptr [esi + ebx*4 + 2] */
    /* test ecx, ecx */ /* 0x171AF700: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF71F; /* 0x171AF702: je 0x171af71f */
L_171AF704:
    eax = ebp + ecx * 2 + (-0x24); /* 0x171AF704: lea eax, [ebp + ecx*2 - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AF708: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(eax)); /* 0x171AF70A: mov dx, word ptr [eax] */
    edi = (uint32_t)LO16(edx); /* 0x171AF70D: movzx edi, dx */
    PUSH32(esp, ecx); /* 0x171AF710: push ecx */
    PUSH32(esp, edi); /* 0x171AF711: push edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AF712: inc edx */
    _flag_k = FK_INC;
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x171AF713: mov word ptr [eax], dx */
    RECOMP_CALL(sub_171AF2AF); /* 0x171AF716: call 0x171af2af */
    RECOMP_FLAGS_IN();
    MEM16(esi + ebx * 4) = (uint16_t)(LO16(eax)); /* 0x171AF71B: mov word ptr [esi + ebx*4], ax */
L_171AF71F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171AF71F: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x171AF720: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171AF6FB; /* 0x171AF723: jle 0x171af6fb */
L_171AF725:
    ecx = MEM32(ebp + (-0x4)); /* 0x171AF725: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171AF728: pop edi */
    ebx = POP32_VAL(esp); /* 0x171AF729: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171AF72A: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AF72F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AF730: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AF738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF738u);

L_171AF738:
    edi = edi; /* 0x171AF738: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF73A: push ebp */
    ebp = esp; /* 0x171AF73B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171AF73D: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | 0xFFFFFFFFu; /* 0x171AF740: or dword ptr [ebp - 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171AF744: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171AF745: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x10); /* 0x171AF748: mov ecx, dword ptr [esi + 0x10] */
    edx = MEM32(esi + 0x4); /* 0x171AF74B: mov edx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171AF74E: push edi */
    edi = MEM32(esi); /* 0x171AF74F: mov edi, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x48) = MEM32(ebx + 0x48) & 0; /* 0x171AF751: and dword ptr [ebx + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AF755: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171AF757: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x171AF759: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171AF75C: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebx + 0x4C) = 0x23Du; /* 0x171AF75F: mov dword ptr [ebx + 0x4c], 0x23d */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AF7D8; /* 0x171AF766: jle 0x171af7d8 */
L_171AF768:
    /* cmp MEM16(edi + eax * 4), 0 */ /* 0x171AF768: cmp word ptr [edi + eax*4], 0 */
    _flag_a = (uint32_t)(MEM16(edi + eax * 4)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF78C; /* 0x171AF76D: je 0x171af78c */
L_171AF76F:
    _flag_a = (uint32_t)(MEM32(ebx + 0x48)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x48) = MEM32(ebx + 0x48) + 1; /* 0x171AF76F: inc dword ptr [ebx + 0x48] */
    _flag_k = FK_INC;
    edx = MEM32(ebx + 0x48); /* 0x171AF772: mov edx, dword ptr [ebx + 0x48] */
    MEM32(ebx + edx * 4 + 0x1054) = eax; /* 0x171AF775: mov dword ptr [ebx + edx*4 + 0x1054], eax */
    edx = MEM32(ebp + (-0x4)); /* 0x171AF77C: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171AF77F: mov dword ptr [ebp - 8], eax */
    MEM8(eax + ebx + 0x1948) = (uint8_t)(0); /* 0x171AF782: mov byte ptr [eax + ebx + 0x1948], 0 */
    goto L_171AF792; /* 0x171AF78A: jmp 0x171af792 */
L_171AF78C:
    _flag_a = (uint32_t)(MEM16(edi + eax * 4 + 0x2)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edi + eax * 4 + 0x2) = (uint16_t)(MEM16(edi + eax * 4 + 0x2) & 0); /* 0x171AF78C: and word ptr [edi + eax*4 + 2], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_171AF792:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AF792: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x171AF793: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171AF768; /* 0x171AF795: jl 0x171af768 */
L_171AF797:
    goto L_171AF7D8; /* 0x171AF797: jmp 0x171af7d8 */
L_171AF799:
    /* cmp MEM32(ebp + (-0x8)), 2 */ /* 0x171AF799: cmp dword ptr [ebp - 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AF7A7; /* 0x171AF79D: jge 0x171af7a7 */
L_171AF79F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171AF79F: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x171AF7A2: mov eax, dword ptr [ebp - 8] */
    goto L_171AF7A9; /* 0x171AF7A5: jmp 0x171af7a9 */
L_171AF7A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AF7A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AF7A9:
    _flag_a = (uint32_t)(MEM32(ebx + 0x48)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x48) = MEM32(ebx + 0x48) + 1; /* 0x171AF7A9: inc dword ptr [ebx + 0x48] */
    _flag_k = FK_INC;
    ecx = MEM32(ebx + 0x48); /* 0x171AF7AC: mov ecx, dword ptr [ebx + 0x48] */
    MEM32(ebx + ecx * 4 + 0x1054) = eax; /* 0x171AF7AF: mov dword ptr [ebx + ecx*4 + 0x1054], eax */
    ecx = eax; /* 0x171AF7B6: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171AF7B8: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171AF7B8: shl ecx, 2 */
    MEM16(ecx + edi) = (uint16_t)(1); /* 0x171AF7BB: mov word ptr [ecx + edi], 1 */
    MEM8(ebx + eax + 0x1948) = (uint8_t)(0); /* 0x171AF7C1: mov byte ptr [ebx + eax + 0x1948], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) - 1; /* 0x171AF7C9: dec dword ptr [ebx + 0x58] */
    _flag_k = FK_DEC;
    /* test edx, edx */ /* 0x171AF7CC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF7D8; /* 0x171AF7CE: je 0x171af7d8 */
L_171AF7D0:
    eax = (uint32_t)MEM16(ecx + edx + 0x2); /* 0x171AF7D0: movzx eax, word ptr [ecx + edx + 2] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x5C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx + 0x5C) = MEM32(ebx + 0x5C) - eax; /* 0x171AF7D5: sub dword ptr [ebx + 0x5c], eax */
    _flag_k = FK_CMP;
L_171AF7D8:
    /* cmp MEM32(ebx + 0x48), 2 */ /* 0x171AF7D8: cmp dword ptr [ebx + 0x48], 2 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x48)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171AF799; /* 0x171AF7DC: jl 0x171af799 */
L_171AF7DE:
    eax = MEM32(ebp + (-0x8)); /* 0x171AF7DE: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x18) = eax; /* 0x171AF7E1: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebx + 0x48); /* 0x171AF7E4: mov eax, dword ptr [ebx + 0x48] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171AF7E7: cdq  */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171AF7E8: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x171AF7EA: mov esi, eax */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x171AF7EC: sar esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 1u);
    goto L_171AF7F9; /* 0x171AF7EE: jmp 0x171af7f9 */
L_171AF7F0:
    PUSH32(esp, esi); /* 0x171AF7F0: push esi */
    eax = ebx; /* 0x171AF7F1: mov eax, ebx */
    RECOMP_CALL(sub_171AF462); /* 0x171AF7F3: call 0x171af462 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AF7F8: dec esi */
    _flag_k = FK_DEC;
L_171AF7F9:
    /* cmp esi, 1 */ /* 0x171AF7F9: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AF7F0; /* 0x171AF7FC: jge 0x171af7f0 */
L_171AF7FE:
    eax = MEM32(ebx + 0x48); /* 0x171AF7FE: mov eax, dword ptr [ebx + 0x48] */
    ecx = MEM32(ebx + eax * 4 + 0x1054); /* 0x171AF801: mov ecx, dword ptr [ebx + eax*4 + 0x1054] */
    esi = MEM32(ebx + 0x1058); /* 0x171AF808: mov esi, dword ptr [ebx + 0x1058] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171AF80E: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x48) = eax; /* 0x171AF80F: mov dword ptr [ebx + 0x48], eax */
    PUSH32(esp, 1); /* 0x171AF812: push 1 */
    eax = ebx; /* 0x171AF814: mov eax, ebx */
    MEM32(ebx + 0x1058) = ecx; /* 0x171AF816: mov dword ptr [ebx + 0x1058], ecx */
    RECOMP_CALL(sub_171AF462); /* 0x171AF81C: call 0x171af462 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) - 1; /* 0x171AF821: dec dword ptr [ebx + 0x4c] */
    _flag_k = FK_DEC;
    ecx = MEM32(ebx + 0x4C); /* 0x171AF824: mov ecx, dword ptr [ebx + 0x4c] */
    eax = MEM32(ebx + 0x1058); /* 0x171AF827: mov eax, dword ptr [ebx + 0x1058] */
    MEM32(ebx + ecx * 4 + 0x1054) = esi; /* 0x171AF82D: mov dword ptr [ebx + ecx*4 + 0x1054], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) - 1; /* 0x171AF834: dec dword ptr [ebx + 0x4c] */
    _flag_k = FK_DEC;
    ecx = MEM32(ebx + 0x4C); /* 0x171AF837: mov ecx, dword ptr [ebx + 0x4c] */
    MEM32(ebx + ecx * 4 + 0x1054) = eax; /* 0x171AF83A: mov dword ptr [ebx + ecx*4 + 0x1054], eax */
    ecx = edi + eax * 4; /* 0x171AF841: lea ecx, [edi + eax*4] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171AF844: mov dword ptr [ebp - 0x10], ecx */
    SET_LO16(ecx, MEM16(ecx)); /* 0x171AF847: mov cx, word ptr [ecx] */
    edx = edi + esi * 4; /* 0x171AF84A: lea edx, [edi + esi*4] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(ecx, LO16(ecx) + MEM16(edx)); /* 0x171AF84D: add cx, word ptr [edx] */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM32(ebp + (-0x14)) = edx; /* 0x171AF850: mov dword ptr [ebp - 0x14], edx */
    SET_LO16(edx, LO16(ecx)); /* 0x171AF853: mov dx, cx */
    ecx = MEM32(ebp + (-0xC)); /* 0x171AF856: mov ecx, dword ptr [ebp - 0xc] */
    MEM16(edi + ecx * 4) = (uint16_t)(LO16(edx)); /* 0x171AF859: mov word ptr [edi + ecx*4], dx */
    SET_LO8(edx, MEM8(ebx + esi + 0x1948)); /* 0x171AF85D: mov dl, byte ptr [ebx + esi + 0x1948] */
    SET_LO8(eax, MEM8(ebx + eax + 0x1948)); /* 0x171AF864: mov al, byte ptr [ebx + eax + 0x1948] */
    /* cmp LO8(edx), LO8(eax) */ /* 0x171AF86B: cmp dl, al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_171AF874; /* 0x171AF86D: jb 0x171af874 */
L_171AF86F:
    eax = (uint32_t)LO8(edx); /* 0x171AF86F: movzx eax, dl */
    goto L_171AF877; /* 0x171AF872: jmp 0x171af877 */
L_171AF874:
    eax = (uint32_t)LO8(eax); /* 0x171AF874: movzx eax, al */
L_171AF877:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(eax, LO8(eax) + 1); /* 0x171AF877: inc al */
    _flag_k = FK_NARROW(FK_INC, 24);
    MEM8(ebx + ecx + 0x1948) = (uint8_t)(LO8(eax)); /* 0x171AF879: mov byte ptr [ebx + ecx + 0x1948], al */
    eax = MEM32(ebp + (-0x10)); /* 0x171AF880: mov eax, dword ptr [ebp - 0x10] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x171AF883: mov word ptr [eax + 2], cx */
    eax = MEM32(ebp + (-0x14)); /* 0x171AF887: mov eax, dword ptr [ebp - 0x14] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x171AF88A: mov word ptr [eax + 2], cx */
    MEM32(ebx + 0x1058) = ecx; /* 0x171AF88E: mov dword ptr [ebx + 0x1058], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AF894: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, 1); /* 0x171AF895: push 1 */
    eax = ebx; /* 0x171AF897: mov eax, ebx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171AF899: mov dword ptr [ebp - 0xc], ecx */
    RECOMP_CALL(sub_171AF462); /* 0x171AF89C: call 0x171af462 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0x48), 2 */ /* 0x171AF8A1: cmp dword ptr [ebx + 0x48], 2 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x48)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AF7FE; /* 0x171AF8A5: jge 0x171af7fe */
L_171AF8AB:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x4C) = MEM32(ebx + 0x4C) - 1; /* 0x171AF8AB: dec dword ptr [ebx + 0x4c] */
    _flag_k = FK_DEC;
    eax = MEM32(ebx + 0x4C); /* 0x171AF8AE: mov eax, dword ptr [ebx + 0x4c] */
    ecx = MEM32(ebx + 0x1058); /* 0x171AF8B1: mov ecx, dword ptr [ebx + 0x1058] */
    MEM32(ebx + eax * 4 + 0x1054) = ecx; /* 0x171AF8B7: mov dword ptr [ebx + eax*4 + 0x1054], ecx */
    eax = MEM32(ebp + 0x8); /* 0x171AF8BE: mov eax, dword ptr [ebp + 8] */
    edx = ebx; /* 0x171AF8C1: mov edx, ebx */
    RECOMP_CALL(sub_171AF511); /* 0x171AF8C3: call 0x171af511 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171AF8C8: push dword ptr [ebp - 8] */
    esi = edi; /* 0x171AF8CB: mov esi, edi */
    PUSH32(esp, ebx); /* 0x171AF8CD: push ebx */
    RECOMP_CALL(sub_171AF6BC); /* 0x171AF8CE: call 0x171af6bc */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171AF8D3: pop edi */
    esi = POP32_VAL(esp); /* 0x171AF8D4: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AF8D5: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AF8D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AF8DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF8DEu);

L_171AF8DE:
    edi = edi; /* 0x171AF8DE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF8E0: push ebp */
    ebp = esp; /* 0x171AF8E1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AF8E3: push ecx */
    PUSH32(esp, ecx); /* 0x171AF8E4: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x8)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) | 0xFFFFFFFFu; /* 0x171AF8E5: or dword ptr [ebp - 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171AF8E9: push ebx */
    PUSH32(esp, esi); /* 0x171AF8EA: push esi */
    PUSH32(esp, edi); /* 0x171AF8EB: push edi */
    PUSH32(esp, 7); /* 0x171AF8EC: push 7 */
    esi = ecx; /* 0x171AF8EE: mov esi, ecx */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x171AF8F0: movzx ecx, word ptr [eax + 2] */
    edx = POP32_VAL(esp); /* 0x171AF8F4: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AF8F5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171AF8F7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x171AF8F9: push 4 */
    edi = POP32_VAL(esp); /* 0x171AF8FB: pop edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AF906; /* 0x171AF8FC: jne 0x171af906 */
L_171AF8FE:
    PUSH32(esp, 3); /* 0x171AF8FE: push 3 */
    edx = 0x8Au; /* 0x171AF900: mov edx, 0x8a */
    edi = POP32_VAL(esp); /* 0x171AF905: pop edi */
L_171AF906:
    _flag_a = (uint32_t)((MEM16(eax + esi * 4 + 0x6) | 0xFFFFu)) << 16; _flag_b = (uint32_t)((MEM16(eax + esi * 4 + 0x6) | 0xFFFFu)) << 16;
    MEM16(eax + esi * 4 + 0x6) = (uint16_t)(MEM16(eax + esi * 4 + 0x6) | 0xFFFFu); /* 0x171AF906: or word ptr [eax + esi*4 + 6], 0xffff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test esi, esi */ /* 0x171AF90D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AF997; /* 0x171AF90F: jl 0x171af997 */
L_171AF915:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 6; /* 0x171AF915: add eax, 6 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x171AF918: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AF91B: inc esi */
    _flag_k = FK_INC;
L_171AF91C:
    eax = ecx; /* 0x171AF91C: mov eax, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x171AF91E: mov ecx, dword ptr [ebp - 4] */
    ecx = (uint32_t)MEM16(ecx); /* 0x171AF921: movzx ecx, word ptr [ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171AF924: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edx */ /* 0x171AF925: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AF92D; /* 0x171AF927: jge 0x171af92d */
L_171AF929:
    /* cmp eax, ecx */ /* 0x171AF929: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF990; /* 0x171AF92B: je 0x171af990 */
L_171AF92D:
    /* cmp ebx, edi */ /* 0x171AF92D: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x171AF92F: mov edx, dword ptr [ebp + 8] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AF940; /* 0x171AF932: jge 0x171af940 */
L_171AF934:
    edx = edx + eax * 4 + 0xF98; /* 0x171AF934: lea edx, [edx + eax*4 + 0xf98] */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(edx) = (uint16_t)(MEM16(edx) + LO16(ebx)); /* 0x171AF93B: add word ptr [edx], bx */
    _flag_k = FK_NARROW(FK_ADD, 16);
    goto L_171AF96F; /* 0x171AF93E: jmp 0x171af96f */
L_171AF940:
    /* test eax, eax */ /* 0x171AF940: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AF95A; /* 0x171AF942: je 0x171af95a */
L_171AF944:
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x171AF944: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AF951; /* 0x171AF947: je 0x171af951 */
L_171AF949:
    _flag_a = (uint32_t)(MEM16(edx + eax * 4 + 0xF98)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx + eax * 4 + 0xF98) = (uint16_t)(MEM16(edx + eax * 4 + 0xF98) + 1); /* 0x171AF949: inc word ptr [edx + eax*4 + 0xf98] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_171AF951:
    _flag_a = (uint32_t)(MEM16(edx + 0xFD8)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx + 0xFD8) = (uint16_t)(MEM16(edx + 0xFD8) + 1); /* 0x171AF951: inc word ptr [edx + 0xfd8] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_171AF96F; /* 0x171AF958: jmp 0x171af96f */
L_171AF95A:
    /* cmp ebx, 0xAu */ /* 0x171AF95A: cmp ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171AF968; /* 0x171AF95D: jg 0x171af968 */
L_171AF95F:
    _flag_a = (uint32_t)(MEM16(edx + 0xFDC)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx + 0xFDC) = (uint16_t)(MEM16(edx + 0xFDC) + 1); /* 0x171AF95F: inc word ptr [edx + 0xfdc] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_171AF96F; /* 0x171AF966: jmp 0x171af96f */
L_171AF968:
    _flag_a = (uint32_t)(MEM16(edx + 0xFE0)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(edx + 0xFE0) = (uint16_t)(MEM16(edx + 0xFE0) + 1); /* 0x171AF968: inc word ptr [edx + 0xfe0] */
    _flag_k = FK_NARROW(FK_INC, 16);
L_171AF96F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AF96F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171AF971: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x171AF973: mov dword ptr [ebp - 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AF97F; /* 0x171AF976: jne 0x171af97f */
L_171AF978:
    edx = 0x8Au; /* 0x171AF978: mov edx, 0x8a */
    goto L_171AF986; /* 0x171AF97D: jmp 0x171af986 */
L_171AF97F:
    /* cmp eax, ecx */ /* 0x171AF97F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AF98A; /* 0x171AF981: jne 0x171af98a */
L_171AF983:
    PUSH32(esp, 6); /* 0x171AF983: push 6 */
    edx = POP32_VAL(esp); /* 0x171AF985: pop edx */
L_171AF986:
    PUSH32(esp, 3); /* 0x171AF986: push 3 */
    goto L_171AF98F; /* 0x171AF988: jmp 0x171af98f */
L_171AF98A:
    PUSH32(esp, 7); /* 0x171AF98A: push 7 */
    edx = POP32_VAL(esp); /* 0x171AF98C: pop edx */
    PUSH32(esp, 4); /* 0x171AF98D: push 4 */
L_171AF98F:
    edi = POP32_VAL(esp); /* 0x171AF98F: pop edi */
L_171AF990:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x171AF990: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171AF994: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AF91C; /* 0x171AF995: jne 0x171af91c */
L_171AF997:
    edi = POP32_VAL(esp); /* 0x171AF997: pop edi */
    esi = POP32_VAL(esp); /* 0x171AF998: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AF999: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AF99A: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AF99B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AF9A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AF9A3u);

L_171AF9A3:
    edi = edi; /* 0x171AF9A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AF9A5: push ebp */
    ebp = esp; /* 0x171AF9A6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171AF9A8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x171AF9AB: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171AF9AF: push ebx */
    PUSH32(esp, esi); /* 0x171AF9B0: push esi */
    esi = (uint32_t)MEM16(ecx + 0x2); /* 0x171AF9B1: movzx esi, word ptr [ecx + 2] */
    PUSH32(esp, edi); /* 0x171AF9B5: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AF9B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x171AF9B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 7); /* 0x171AF9BA: push 7 */
    edx = POP32_VAL(esp); /* 0x171AF9BC: pop edx */
    MEM32(ebp + (-0x8)) = 4; /* 0x171AF9BD: mov dword ptr [ebp - 8], 4 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AF9D2; /* 0x171AF9C4: jne 0x171af9d2 */
L_171AF9C6:
    edx = 0x8Au; /* 0x171AF9C6: mov edx, 0x8a */
    MEM32(ebp + (-0x8)) = 3; /* 0x171AF9CB: mov dword ptr [ebp - 8], 3 */
L_171AF9D2:
    edi = MEM32(ebp + 0x8); /* 0x171AF9D2: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x171AF9D5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AFAC9; /* 0x171AF9D7: jl 0x171afac9 */
L_171AF9DD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 6; /* 0x171AF9DD: add ecx, 6 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171AF9E0: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171AF9E1: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x171AF9E4: mov ecx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = edi; /* 0x171AF9E7: mov dword ptr [ebp - 0x10], edi */
    goto L_171AF9EF; /* 0x171AF9EA: jmp 0x171af9ef */
L_171AF9EC:
    esi = MEM32(ebp + 0x8); /* 0x171AF9EC: mov esi, dword ptr [ebp + 8] */
L_171AF9EF:
    edi = MEM32(ebp + (-0x4)); /* 0x171AF9EF: mov edi, dword ptr [ebp - 4] */
    edi = (uint32_t)MEM16(edi); /* 0x171AF9F2: movzx edi, word ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171AF9F5: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edx */ /* 0x171AF9F6: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edi; /* 0x171AF9F8: mov dword ptr [ebp + 8], edi */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AFA05; /* 0x171AF9FB: jge 0x171afa05 */
L_171AF9FD:
    /* cmp esi, edi */ /* 0x171AF9FD: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AFABC; /* 0x171AF9FF: je 0x171afabc */
L_171AFA05:
    /* cmp ebx, ecx */ /* 0x171AFA05: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AFA23; /* 0x171AFA07: jge 0x171afa23 */
L_171AFA09:
    edi = (uint32_t)MEM16(eax + esi * 4 + 0xF9A); /* 0x171AFA09: movzx edi, word ptr [eax + esi*4 + 0xf9a] */
    edx = (uint32_t)MEM16(eax + esi * 4 + 0xF98); /* 0x171AFA11: movzx edx, word ptr [eax + esi*4 + 0xf98] */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFA19: call 0x171af20b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171AFA1E: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AFA09; /* 0x171AFA1F: jne 0x171afa09 */
L_171AFA21:
    goto L_171AFA99; /* 0x171AFA21: jmp 0x171afa99 */
L_171AFA23:
    /* test esi, esi */ /* 0x171AFA23: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AFA5C; /* 0x171AFA25: je 0x171afa5c */
L_171AFA27:
    /* cmp esi, MEM32(ebp + (-0xC)) */ /* 0x171AFA27: cmp esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AFA42; /* 0x171AFA2A: je 0x171afa42 */
L_171AFA2C:
    edi = (uint32_t)MEM16(eax + esi * 4 + 0xF9A); /* 0x171AFA2C: movzx edi, word ptr [eax + esi*4 + 0xf9a] */
    edx = (uint32_t)MEM16(eax + esi * 4 + 0xF98); /* 0x171AFA34: movzx edx, word ptr [eax + esi*4 + 0xf98] */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFA3C: call 0x171af20b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171AFA41: dec ebx */
    _flag_k = FK_DEC;
L_171AFA42:
    edi = (uint32_t)MEM16(eax + 0xFDA); /* 0x171AFA42: movzx edi, word ptr [eax + 0xfda] */
    edx = (uint32_t)MEM16(eax + 0xFD8); /* 0x171AFA49: movzx edx, word ptr [eax + 0xfd8] */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFA50: call 0x171af20b */
    RECOMP_FLAGS_IN();
    edx = ebx + (-0x3); /* 0x171AFA55: lea edx, [ebx - 3] */
    PUSH32(esp, 2); /* 0x171AFA58: push 2 */
    goto L_171AFA93; /* 0x171AFA5A: jmp 0x171afa93 */
L_171AFA5C:
    /* cmp ebx, 0xAu */ /* 0x171AFA5C: cmp ebx, 0xa */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171AFA7B; /* 0x171AFA5F: jg 0x171afa7b */
L_171AFA61:
    edi = (uint32_t)MEM16(eax + 0xFDE); /* 0x171AFA61: movzx edi, word ptr [eax + 0xfde] */
    edx = (uint32_t)MEM16(eax + 0xFDC); /* 0x171AFA68: movzx edx, word ptr [eax + 0xfdc] */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFA6F: call 0x171af20b */
    RECOMP_FLAGS_IN();
    edx = ebx + (-0x3); /* 0x171AFA74: lea edx, [ebx - 3] */
    PUSH32(esp, 3); /* 0x171AFA77: push 3 */
    goto L_171AFA93; /* 0x171AFA79: jmp 0x171afa93 */
L_171AFA7B:
    edi = (uint32_t)MEM16(eax + 0xFE2); /* 0x171AFA7B: movzx edi, word ptr [eax + 0xfe2] */
    edx = (uint32_t)MEM16(eax + 0xFE0); /* 0x171AFA82: movzx edx, word ptr [eax + 0xfe0] */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFA89: call 0x171af20b */
    RECOMP_FLAGS_IN();
    edx = ebx + (-0xB); /* 0x171AFA8E: lea edx, [ebx - 0xb] */
    PUSH32(esp, 7); /* 0x171AFA91: push 7 */
L_171AFA93:
    edi = POP32_VAL(esp); /* 0x171AFA93: pop edi */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFA94: call 0x171af20b */
    RECOMP_FLAGS_IN();
L_171AFA99:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171AFA99: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x171AFA9B: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x171AFA9E: mov dword ptr [ebp - 0xc], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AFAAA; /* 0x171AFAA1: jne 0x171afaaa */
L_171AFAA3:
    edx = 0x8Au; /* 0x171AFAA3: mov edx, 0x8a */
    goto L_171AFAB2; /* 0x171AFAA8: jmp 0x171afab2 */
L_171AFAAA:
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x171AFAAA: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AFAB6; /* 0x171AFAAD: jne 0x171afab6 */
L_171AFAAF:
    PUSH32(esp, 6); /* 0x171AFAAF: push 6 */
    edx = POP32_VAL(esp); /* 0x171AFAB1: pop edx */
L_171AFAB2:
    PUSH32(esp, 3); /* 0x171AFAB2: push 3 */
    goto L_171AFABB; /* 0x171AFAB4: jmp 0x171afabb */
L_171AFAB6:
    PUSH32(esp, 7); /* 0x171AFAB6: push 7 */
    edx = POP32_VAL(esp); /* 0x171AFAB8: pop edx */
    PUSH32(esp, 4); /* 0x171AFAB9: push 4 */
L_171AFABB:
    ecx = POP32_VAL(esp); /* 0x171AFABB: pop ecx */
L_171AFABC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x171AFABC: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x171AFAC0: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AF9EC; /* 0x171AFAC3: jne 0x171af9ec */
L_171AFAC9:
    edi = POP32_VAL(esp); /* 0x171AFAC9: pop edi */
    esi = POP32_VAL(esp); /* 0x171AFACA: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AFACB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AFACC: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AFACD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AFAD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AFAD5u);

L_171AFAD5:
    edi = edi; /* 0x171AFAD5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AFAD7: push ebp */
    ebp = esp; /* 0x171AFAD8: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x171AFADA: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171AFADD: push ebx */
    PUSH32(esp, edi); /* 0x171AFADE: push edi */
    PUSH32(esp, 5); /* 0x171AFADF: push 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFEFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFEFFu; /* 0x171AFAE1: add edx, 0xfffffeff */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x171AFAE7: pop edi */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFAE8: call 0x171af20b */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x171AFAED: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171AFAF0: dec ebx */
    _flag_k = FK_DEC;
    edx = ebx; /* 0x171AFAF1: mov edx, ebx */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFAF3: call 0x171af20b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x171AFAF8: push 4 */
    edx = esi + (-0x4); /* 0x171AFAFA: lea edx, [esi - 4] */
    edi = POP32_VAL(esp); /* 0x171AFAFD: pop edi */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFAFE: call 0x171af20b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x171AFB03: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x171AFB07: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171AFB2D; /* 0x171AFB09: jle 0x171afb2d */
L_171AFB0B:
    ecx = MEM32(ebp + 0xC); /* 0x171AFB0B: mov ecx, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)MEM8(ecx + 0x17023F34); /* 0x171AFB0E: movzx ecx, byte ptr [ecx + 0x17023f34] */
    edx = (uint32_t)MEM16(eax + ecx * 4 + 0xF9A); /* 0x171AFB15: movzx edx, word ptr [eax + ecx*4 + 0xf9a] */
    PUSH32(esp, 3); /* 0x171AFB1D: push 3 */
    edi = POP32_VAL(esp); /* 0x171AFB1F: pop edi */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFB20: call 0x171af20b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x171AFB25: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x171AFB28: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171AFB0B; /* 0x171AFB2B: jl 0x171afb0b */
L_171AFB2D:
    ecx = MEM32(ebp + 0x8); /* 0x171AFB2D: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171AFB30: dec ecx */
    _flag_k = FK_DEC;
    PUSH32(esp, ecx); /* 0x171AFB31: push ecx */
    ecx = eax + 0xB8; /* 0x171AFB32: lea ecx, [eax + 0xb8] */
    RECOMP_CALL(sub_171AF9A3); /* 0x171AFB38: call 0x171af9a3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171AFB3D: push ebx */
    ecx = eax + 0x9AC; /* 0x171AFB3E: lea ecx, [eax + 0x9ac] */
    RECOMP_CALL(sub_171AF9A3); /* 0x171AFB44: call 0x171af9a3 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171AFB49: pop edi */
    ebx = POP32_VAL(esp); /* 0x171AFB4A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171AFB4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AFB4C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AFB54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AFB54u);

L_171AFB54:
    edi = edi; /* 0x171AFB54: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AFB56: push ebp */
    ebp = esp; /* 0x171AFB57: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171AFB59: push ecx */
    PUSH32(esp, esi); /* 0x171AFB5A: push esi */
    esi = (uint32_t)MEM16(eax + 0x50); /* 0x171AFB5B: movzx esi, word ptr [eax + 0x50] */
    PUSH32(esp, edi); /* 0x171AFB5F: push edi */
    edi = MEM32(eax); /* 0x171AFB60: mov edi, dword ptr [eax] */
    MEM8(esi + edi) = (uint8_t)(LO8(ecx)); /* 0x171AFB62: mov byte ptr [esi + edi], cl */
    _flag_a = (uint32_t)(MEM16(eax + 0x50)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0x50) = (uint16_t)(MEM16(eax + 0x50) + 1); /* 0x171AFB65: inc word ptr [eax + 0x50] */
    _flag_k = FK_NARROW(FK_INC, 16);
    /* test edx, edx */ /* 0x171AFB69: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AFB79; /* 0x171AFB6B: jne 0x171afb79 */
L_171AFB6D:
    ecx = eax + ecx * 4 + 0xB8; /* 0x171AFB6D: lea ecx, [eax + ecx*4 + 0xb8] */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) + 1); /* 0x171AFB74: inc word ptr [ecx] */
    _flag_k = FK_NARROW(FK_INC, 16);
    goto L_171AFBCA; /* 0x171AFB77: jmp 0x171afbca */
L_171AFB79:
    ecx = (uint32_t)MEM8(eax + ecx + 0x1B85); /* 0x171AFB79: movzx ecx, byte ptr [eax + ecx + 0x1b85] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171AFB81: dec edx */
    _flag_k = FK_DEC;
    ecx = eax + ecx * 4 + 0x4BC; /* 0x171AFB82: lea ecx, [eax + ecx*4 + 0x4bc] */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) + 1); /* 0x171AFB89: inc word ptr [ecx] */
    _flag_k = FK_NARROW(FK_INC, 16);
    /* cmp edx, 0x100u */ /* 0x171AFB8C: cmp edx, 0x100 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AFB9E; /* 0x171AFB92: jge 0x171afb9e */
L_171AFB94:
    ecx = (uint32_t)MEM8(eax + edx + 0x1C85); /* 0x171AFB94: movzx ecx, byte ptr [eax + edx + 0x1c85] */
    goto L_171AFBAB; /* 0x171AFB9C: jmp 0x171afbab */
L_171AFB9E:
    ecx = edx; /* 0x171AFB9E: mov ecx, edx */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x171AFBA0: sar ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 7u);
    ecx = (uint32_t)MEM8(ecx + eax + 0x1D85); /* 0x171AFBA3: movzx ecx, byte ptr [ecx + eax + 0x1d85] */
L_171AFBAB:
    ecx = eax + ecx * 4 + 0x9AC; /* 0x171AFBAB: lea ecx, [eax + ecx*4 + 0x9ac] */
    _flag_a = (uint32_t)(MEM16(ecx)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ecx) = (uint16_t)(MEM16(ecx) + 1); /* 0x171AFBB2: inc word ptr [ecx] */
    _flag_k = FK_NARROW(FK_INC, 16);
    ecx = (uint32_t)MEM16(eax + 0x52); /* 0x171AFBB5: movzx ecx, word ptr [eax + 0x52] */
    esi = MEM32(eax + 0x8); /* 0x171AFBB9: mov esi, dword ptr [eax + 8] */
    MEM16(esi + ecx * 2) = (uint16_t)(LO16(edx)); /* 0x171AFBBC: mov word ptr [esi + ecx*2], dx */
    SET_LO8(ecx, MEM8(eax + 0x57)); /* 0x171AFBC0: mov cl, byte ptr [eax + 0x57] */
    _flag_a = (uint32_t)(MEM16(eax + 0x52)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0x52) = (uint16_t)(MEM16(eax + 0x52) + 1); /* 0x171AFBC3: inc word ptr [eax + 0x52] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)((MEM8(eax + 0x56) | LO8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x56) | LO8(ecx))) << 24;
    MEM8(eax + 0x56) = (uint8_t)(MEM8(eax + 0x56) | LO8(ecx)); /* 0x171AFBC7: or byte ptr [eax + 0x56], cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171AFBCA:
    if (1u) _cf = (((MEM8(eax + 0x57)) >> 7) & 1u); /* 0x171AFBCA: shl byte ptr [eax + 0x57], 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(eax + 0x57) << 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(eax + 0x57) = (uint8_t)(MEM8(eax + 0x57) << 1u); /* 0x171AFBCA: shl byte ptr [eax + 0x57], 1 */
    /* test MEM8(eax + 0x50), 7 */ /* 0x171AFBCD: test byte ptr [eax + 0x50], 7 */
    _flag_a = (uint32_t)(MEM8(eax + 0x50)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AFBED; /* 0x171AFBD1: jne 0x171afbed */
L_171AFBD3:
    ecx = (uint32_t)MEM16(eax + 0x54); /* 0x171AFBD3: movzx ecx, word ptr [eax + 0x54] */
    SET_LO8(edx, MEM8(eax + 0x56)); /* 0x171AFBD7: mov dl, byte ptr [eax + 0x56] */
    MEM8(ecx + eax + 0x1F74) = (uint8_t)(LO8(edx)); /* 0x171AFBDA: mov byte ptr [ecx + eax + 0x1f74], dl */
    _flag_a = (uint32_t)(MEM16(eax + 0x54)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(eax + 0x54) = (uint16_t)(MEM16(eax + 0x54) + 1); /* 0x171AFBE1: inc word ptr [eax + 0x54] */
    _flag_k = FK_NARROW(FK_INC, 16);
    MEM8(eax + 0x56) = (uint8_t)(0); /* 0x171AFBE5: mov byte ptr [eax + 0x56], 0 */
    MEM8(eax + 0x57) = (uint8_t)(1); /* 0x171AFBE9: mov byte ptr [eax + 0x57], 1 */
L_171AFBED:
    SET_LO16(esi, MEM16(eax + 0x50)); /* 0x171AFBED: mov si, word ptr [eax + 0x50] */
    /* test LO16(esi), 0xFFFu */ /* 0x171AFBF1: test si, 0xfff */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(0xFFFu) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AFC54; /* 0x171AFBF6: jne 0x171afc54 */
L_171AFBF8:
    edx = (uint32_t)MEM16(eax + 0x44); /* 0x171AFBF8: movzx edx, word ptr [eax + 0x44] */
    ecx = (uint32_t)LO16(esi); /* 0x171AFBFC: movzx ecx, si */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x171AFBFF: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x171AFBFF: shl ecx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + 0x3C); /* 0x171AFC02: sub edx, dword ptr [eax + 0x3c] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = 0x17023E70u; /* 0x171AFC05: mov dword ptr [ebp - 4], 0x17023e70 */
    esi = eax + 0x9AC; /* 0x171AFC0C: lea esi, [eax + 0x9ac] */
    PUSH32(esp, ebx); /* 0x171AFC12: push ebx */
L_171AFC13:
    edi = MEM32(ebp + (-0x4)); /* 0x171AFC13: mov edi, dword ptr [ebp - 4] */
    edi = MEM32(edi); /* 0x171AFC16: mov edi, dword ptr [edi] */
    ebx = (uint32_t)MEM16(esi); /* 0x171AFC18: movzx ebx, word ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x171AFC1B: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 5; /* 0x171AFC1F: add edi, 5 */
    _flag_k = FK_ADD;
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x171AFC22: imul edi, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171AFC25: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171AFC27: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 0x17023EE8u */ /* 0x171AFC2A: cmp dword ptr [ebp - 4], 0x17023ee8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x17023EE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171AFC13; /* 0x171AFC31: jl 0x171afc13 */
L_171AFC33:
    SET_LO16(esi, MEM16(eax + 0x50)); /* 0x171AFC33: mov si, word ptr [eax + 0x50] */
    SET_LO16(edi, LO16(esi)); /* 0x171AFC37: mov di, si */
    if (1u) _cf = (((LO16(edi)) >> 0) & 1u); /* 0x171AFC3A: shr di, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((LO16(edi) >> 1u)) << 16), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO16(edi, LO16(edi) >> 1u); /* 0x171AFC3A: shr di, 1 */
    /* cmp MEM16(eax + 0x52), LO16(edi) */ /* 0x171AFC3D: cmp word ptr [eax + 0x52], di */
    _flag_a = (uint32_t)(MEM16(eax + 0x52)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = POP32_VAL(esp); /* 0x171AFC41: pop ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171AFC54; /* 0x171AFC42: jae 0x171afc54 */
L_171AFC44:
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171AFC44: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171AFC44: shr ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFFFFFEu);
    ecx = ecx & 0x3FFFFFFEu; /* 0x171AFC47: and ecx, 0x3ffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    edx = edx & 0xFFFFFFFEu; /* 0x171AFC4D: and edx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edx */ /* 0x171AFC50: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171AFC67; /* 0x171AFC52: jb 0x171afc67 */
L_171AFC54:
    /* cmp LO16(esi), 0x7FFFu */ /* 0x171AFC54: cmp si, 0x7fff */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(0x7FFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AFC67; /* 0x171AFC59: je 0x171afc67 */
L_171AFC5B:
    /* cmp MEM16(eax + 0x52), 0x8000u */ /* 0x171AFC5B: cmp word ptr [eax + 0x52], 0x8000 */
    _flag_a = (uint32_t)(MEM16(eax + 0x52)) << 16; _flag_b = (uint32_t)(0x8000u) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AFC67; /* 0x171AFC61: je 0x171afc67 */
L_171AFC63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AFC63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171AFC6A; /* 0x171AFC65: jmp 0x171afc6a */
L_171AFC67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171AFC67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171AFC69: inc eax */
    _flag_k = FK_INC;
L_171AFC6A:
    edi = POP32_VAL(esp); /* 0x171AFC6A: pop edi */
    esi = POP32_VAL(esp); /* 0x171AFC6B: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AFC6C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AFC6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AFC73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AFC73u);

L_171AFC73:
    edi = edi; /* 0x171AFC73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AFC75: push ebp */
    ebp = esp; /* 0x171AFC76: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171AFC78: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AFC7B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(eax + 0x50), LO16(ecx) */ /* 0x171AFC7D: cmp word ptr [eax + 0x50], cx */
    _flag_a = (uint32_t)(MEM16(eax + 0x50)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, edi); /* 0x171AFC81: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171AFC82: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171AFC85: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171AFC88: mov dword ptr [ebp - 0xc], ecx */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x171AFC8B: mov byte ptr [ebp - 1], cl */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AFD73; /* 0x171AFC8E: je 0x171afd73 */
L_171AFC94:
    PUSH32(esp, ebx); /* 0x171AFC94: push ebx */
    PUSH32(esp, esi); /* 0x171AFC95: push esi */
L_171AFC96:
    /* test MEM8(ebp + (-0x8)), 7 */ /* 0x171AFC96: test byte ptr [ebp - 8], 7 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AFCAD; /* 0x171AFC9A: jne 0x171afcad */
L_171AFC9C:
    ecx = (uint32_t)MEM16(ebp + (-0xC)); /* 0x171AFC9C: movzx ecx, word ptr [ebp - 0xc] */
    SET_LO8(ecx, MEM8(ecx + eax + 0x1F74)); /* 0x171AFCA0: mov cl, byte ptr [ecx + eax + 0x1f74] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x171AFCA7: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x171AFCAA: mov byte ptr [ebp - 1], cl */
L_171AFCAD:
    ecx = (uint32_t)MEM16(ebp + (-0x8)); /* 0x171AFCAD: movzx ecx, word ptr [ebp - 8] */
    edx = MEM32(eax); /* 0x171AFCB1: mov edx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171AFCB3: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    /* test MEM8(ebp + (-0x1)), 1 */ /* 0x171AFCB6: test byte ptr [ebp - 1], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = (uint32_t)MEM8(ecx + edx); /* 0x171AFCBA: movzx ebx, byte ptr [ecx + edx] */
    ecx = MEM32(ebp + 0x8); /* 0x171AFCBE: mov ecx, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AFCD2; /* 0x171AFCC1: jne 0x171afcd2 */
L_171AFCC3:
    ebx = ecx + ebx * 4; /* 0x171AFCC3: lea ebx, [ecx + ebx*4] */
    edi = (uint32_t)MEM16(ebx + 0x2); /* 0x171AFCC6: movzx edi, word ptr [ebx + 2] */
    edx = (uint32_t)MEM16(ebx); /* 0x171AFCCA: movzx edx, word ptr [ebx] */
    goto L_171AFD5B; /* 0x171AFCCD: jmp 0x171afd5b */
L_171AFCD2:
    esi = (uint32_t)MEM8(ebx + eax + 0x1B85); /* 0x171AFCD2: movzx esi, byte ptr [ebx + eax + 0x1b85] */
    edi = (uint32_t)MEM16(ecx + esi * 4 + 0x406); /* 0x171AFCDA: movzx edi, word ptr [ecx + esi*4 + 0x406] */
    edx = (uint32_t)MEM16(ecx + esi * 4 + 0x404); /* 0x171AFCE2: movzx edx, word ptr [ecx + esi*4 + 0x404] */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFCEA: call 0x171af20b */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi * 4 + 0x17023DF8); /* 0x171AFCEF: mov edi, dword ptr [esi*4 + 0x17023df8] */
    /* test edi, edi */ /* 0x171AFCF6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AFD08; /* 0x171AFCF8: je 0x171afd08 */
L_171AFCFA:
    edx = ebx; /* 0x171AFCFA: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + esi * 4 + 0x1E88));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + esi * 4 + 0x1E88); /* 0x171AFCFC: sub edx, dword ptr [eax + esi*4 + 0x1e88] */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_171AF20B); /* 0x171AFD03: call 0x171af20b */
    RECOMP_FLAGS_IN();
L_171AFD08:
    ecx = (uint32_t)MEM16(ebp + (-0x10)); /* 0x171AFD08: movzx ecx, word ptr [ebp - 0x10] */
    edx = MEM32(eax + 0x8); /* 0x171AFD0C: mov edx, dword ptr [eax + 8] */
    ebx = (uint32_t)MEM16(edx + ecx * 2); /* 0x171AFD0F: movzx ebx, word ptr [edx + ecx*2] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x171AFD13: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    /* cmp ebx, 0x100u */ /* 0x171AFD16: cmp ebx, 0x100 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171AFD28; /* 0x171AFD1C: jge 0x171afd28 */
L_171AFD1E:
    esi = (uint32_t)MEM8(ebx + eax + 0x1C85); /* 0x171AFD1E: movzx esi, byte ptr [ebx + eax + 0x1c85] */
    goto L_171AFD35; /* 0x171AFD26: jmp 0x171afd35 */
L_171AFD28:
    ecx = ebx; /* 0x171AFD28: mov ecx, ebx */
    if (7u) _cf = (((ecx) >> 6) & 1u); /* 0x171AFD2A: sar ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 7u);
    esi = (uint32_t)MEM8(ecx + eax + 0x1D85); /* 0x171AFD2D: movzx esi, byte ptr [ecx + eax + 0x1d85] */
L_171AFD35:
    ecx = MEM32(ebp + 0xC); /* 0x171AFD35: mov ecx, dword ptr [ebp + 0xc] */
    ecx = ecx + esi * 4; /* 0x171AFD38: lea ecx, [ecx + esi*4] */
    edi = (uint32_t)MEM16(ecx + 0x2); /* 0x171AFD3B: movzx edi, word ptr [ecx + 2] */
    edx = (uint32_t)MEM16(ecx); /* 0x171AFD3F: movzx edx, word ptr [ecx] */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFD42: call 0x171af20b */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi * 4 + 0x17023E70); /* 0x171AFD47: mov edi, dword ptr [esi*4 + 0x17023e70] */
    /* test edi, edi */ /* 0x171AFD4E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AFD60; /* 0x171AFD50: je 0x171afd60 */
L_171AFD52:
    edx = ebx; /* 0x171AFD52: mov edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + esi * 4 + 0x1EFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(eax + esi * 4 + 0x1EFC); /* 0x171AFD54: sub edx, dword ptr [eax + esi*4 + 0x1efc] */
    _flag_k = FK_CMP;
L_171AFD5B:
    RECOMP_CALL(sub_171AF20B); /* 0x171AFD5B: call 0x171af20b */
    RECOMP_FLAGS_IN();
L_171AFD60:
    SET_LO16(ecx, MEM16(ebp + (-0x8))); /* 0x171AFD60: mov cx, word ptr [ebp - 8] */
    if (1u) _cf = (((MEM8(ebp + (-0x1))) >> 0) & 1u); /* 0x171AFD64: shr byte ptr [ebp - 1], 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((MEM8(ebp + (-0x1)) >> 1u)) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM8(ebp + (-0x1)) = (uint8_t)(MEM8(ebp + (-0x1)) >> 1u); /* 0x171AFD64: shr byte ptr [ebp - 1], 1 */
    /* cmp LO16(ecx), MEM16(eax + 0x50) */ /* 0x171AFD67: cmp cx, word ptr [eax + 0x50] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(eax + 0x50)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AFC96; /* 0x171AFD6B: jb 0x171afc96 */
L_171AFD71:
    esi = POP32_VAL(esp); /* 0x171AFD71: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AFD72: pop ebx */
L_171AFD73:
    ecx = MEM32(ebp + 0x8); /* 0x171AFD73: mov ecx, dword ptr [ebp + 8] */
    edi = (uint32_t)MEM16(ecx + 0x402); /* 0x171AFD76: movzx edi, word ptr [ecx + 0x402] */
    edx = (uint32_t)MEM16(ecx + 0x400); /* 0x171AFD7D: movzx edx, word ptr [ecx + 0x400] */
    RECOMP_CALL(sub_171AF20B); /* 0x171AFD84: call 0x171af20b */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171AFD89: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AFD8A: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171AFD8B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171AFD93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AFD93u);

L_171AFD93:
    edi = edi; /* 0x171AFD93: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AFD95: push ebp */
    ebp = esp; /* 0x171AFD96: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171AFD98: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171AFD9B: push ebx */
    PUSH32(esp, esi); /* 0x171AFD9C: push esi */
    SET_LO16(esi, LO16(ecx)); /* 0x171AFD9D: mov si, cx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AFDA0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax + 0x44)); /* 0x171AFDA2: mov cx, word ptr [eax + 0x44] */
    /* cmp LO16(ecx), 0x7EFAu */ /* 0x171AFDA6: cmp cx, 0x7efa */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(0x7EFAu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, edi); /* 0x171AFDAB: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AFDB9; /* 0x171AFDAC: jbe 0x171afdb9 */
L_171AFDAE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF8106u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFF8106u; /* 0x171AFDAE: add ecx, 0xffff8106 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171AFDB4: mov dword ptr [ebp - 8], ecx */
    goto L_171AFDBD; /* 0x171AFDB7: jmp 0x171afdbd */
L_171AFDB9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171AFDB9: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AFDBD:
    ecx = MEM32(eax + 0x1C); /* 0x171AFDBD: mov ecx, dword ptr [eax + 0x1c] */
    edx = MEM32(eax + 0x20); /* 0x171AFDC0: mov edx, dword ptr [eax + 0x20] */
    edi = (uint32_t)LO16(esi); /* 0x171AFDC3: movzx edi, si */
    ecx = (uint32_t)MEM8(ecx + edi); /* 0x171AFDC6: movzx ecx, byte ptr [ecx + edi] */
    edx = edx + ecx * 2; /* 0x171AFDCA: lea edx, [edx + ecx*2] */
    MEM32(eax + 0x28) = ecx; /* 0x171AFDCD: mov dword ptr [eax + 0x28], ecx */
    SET_LO16(ecx, MEM16(edx)); /* 0x171AFDD0: mov cx, word ptr [edx] */
    MEM16(edx) = (uint16_t)(LO16(esi)); /* 0x171AFDD3: mov word ptr [edx], si */
    edx = MEM32(eax + 0x14); /* 0x171AFDD6: mov edx, dword ptr [eax + 0x14] */
    esi = edi; /* 0x171AFDD9: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFu);
    esi = esi & 0x7FFFu; /* 0x171AFDDB: and esi, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((esi) >> 31) & 1u); /* 0x171AFDE1: shl esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 1u; /* 0x171AFDE1: shl esi, 1 */
    /* test LO16(ecx), LO16(ecx) */ /* 0x171AFDE3: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM16(esi + edx) = (uint16_t)(LO16(ecx)); /* 0x171AFDE6: mov word ptr [esi + edx], cx */
    edx = MEM32(eax + 0x1C); /* 0x171AFDEA: mov edx, dword ptr [eax + 0x1c] */
    SET_LO8(ebx, MEM8(edx + edi + 0x1)); /* 0x171AFDED: mov bl, byte ptr [edx + edi + 1] */
    MEM32(ebp + (-0x4)) = 0x1000u; /* 0x171AFDF1: mov dword ptr [ebp - 4], 0x1000 */
    MEM32(ebp + (-0x10)) = edi; /* 0x171AFDF8: mov dword ptr [ebp - 0x10], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171AFE36; /* 0x171AFDFB: je 0x171afe36 */
L_171AFDFD:
    edi = (uint32_t)LO16(ecx); /* 0x171AFDFD: movzx edi, cx */
    /* cmp LO8(ebx), MEM8(edi + edx + 0x1) */ /* 0x171AFE00: cmp bl, byte ptr [edi + edx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edi + edx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0xC)) = edi; /* 0x171AFE04: mov dword ptr [ebp - 0xc], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AFE33; /* 0x171AFE07: je 0x171afe33 */
L_171AFE09:
    ecx = edi; /* 0x171AFE09: mov ecx, edi */
    edi = MEM32(eax + 0x14); /* 0x171AFE0B: mov edi, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFu);
    ecx = ecx & 0x7FFFu; /* 0x171AFE0E: and ecx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(edi + ecx * 2)); /* 0x171AFE14: mov cx, word ptr [edi + ecx*2] */
    /* cmp LO16(ecx), MEM16(ebp + (-0x8)) */ /* 0x171AFE18: cmp cx, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AFE2C; /* 0x171AFE1C: jbe 0x171afe2c */
L_171AFE1E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0xFFFFu; /* 0x171AFE1E: add dword ptr [ebp - 4], 0xffff */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x4)), 0 */ /* 0x171AFE25: cmp word ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AFE2E; /* 0x171AFE2A: jne 0x171afe2e */
L_171AFE2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AFE2C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AFE2E:
    /* test LO16(ecx), LO16(ecx) */ /* 0x171AFE2E: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AFDFD; /* 0x171AFE31: jne 0x171afdfd */
L_171AFE33:
    edi = MEM32(ebp + (-0x10)); /* 0x171AFE33: mov edi, dword ptr [ebp - 0x10] */
L_171AFE36:
    edx = MEM32(eax + 0x18); /* 0x171AFE36: mov edx, dword ptr [eax + 0x18] */
    MEM16(esi + edx) = (uint16_t)(LO16(ecx)); /* 0x171AFE39: mov word ptr [esi + edx], cx */
    edx = MEM32(eax + 0x1C); /* 0x171AFE3D: mov edx, dword ptr [eax + 0x1c] */
    SET_LO8(ebx, MEM8(edx + edi + 0x2)); /* 0x171AFE40: mov bl, byte ptr [edx + edi + 2] */
    goto L_171AFE72; /* 0x171AFE44: jmp 0x171afe72 */
L_171AFE46:
    edi = (uint32_t)LO16(ecx); /* 0x171AFE46: movzx edi, cx */
    /* cmp LO8(ebx), MEM8(edi + edx + 0x2) */ /* 0x171AFE49: cmp bl, byte ptr [edi + edx + 2] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edi + edx + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171AFE77; /* 0x171AFE4D: je 0x171afe77 */
L_171AFE4F:
    ecx = MEM32(eax + 0x18); /* 0x171AFE4F: mov ecx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFu);
    edi = edi & 0x7FFFu; /* 0x171AFE52: and edi, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(ecx + edi * 2)); /* 0x171AFE58: mov cx, word ptr [ecx + edi*2] */
    /* cmp LO16(ecx), MEM16(ebp + (-0x8)) */ /* 0x171AFE5C: cmp cx, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x8))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AFE70; /* 0x171AFE60: jbe 0x171afe70 */
L_171AFE62:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0xFFFFu; /* 0x171AFE62: add dword ptr [ebp - 4], 0xffff */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x4)), 0 */ /* 0x171AFE69: cmp word ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AFE72; /* 0x171AFE6E: jne 0x171afe72 */
L_171AFE70:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AFE70: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AFE72:
    /* test LO16(ecx), LO16(ecx) */ /* 0x171AFE72: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171AFE46; /* 0x171AFE75: jne 0x171afe46 */
L_171AFE77:
    eax = MEM32(eax + 0x24); /* 0x171AFE77: mov eax, dword ptr [eax + 0x24] */
    MEM16(esi + eax) = (uint16_t)(LO16(ecx)); /* 0x171AFE7A: mov word ptr [esi + eax], cx */
    eax = MEM32(ebp + 0x8); /* 0x171AFE7E: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x171AFE81: pop edi */
    esi = POP32_VAL(esp); /* 0x171AFE82: pop esi */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x171AFE83: mov word ptr [eax], cx */
    ebx = POP32_VAL(esp); /* 0x171AFE86: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171AFE87: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171AFE88: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171AFE90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AFE90u);

L_171AFE90:
    edi = edi; /* 0x171AFE90: mov edi, edi */
    PUSH32(esp, ebx); /* 0x171AFE92: push ebx */
    PUSH32(esp, esi); /* 0x171AFE93: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AFE94: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = 0x100u; /* 0x171AFE96: mov ebx, 0x100 */
    eax = 0x8000u; /* 0x171AFE9B: mov eax, 0x8000 */
L_171AFEA0:
    ecx = MEM32(edi + 0x20); /* 0x171AFEA0: mov ecx, dword ptr [edi + 0x20] */
    edx = ecx + esi; /* 0x171AFEA3: lea edx, [ecx + esi] */
    SET_LO16(ecx, MEM16(edx)); /* 0x171AFEA6: mov cx, word ptr [edx] */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x171AFEA9: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_171AFEB5; /* 0x171AFEAC: jb 0x171afeb5 */
L_171AFEAE:
    ecx = (uint32_t)LO16(ecx); /* 0x171AFEAE: movzx ecx, cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171AFEB1: sub ecx, eax */
    _flag_k = FK_CMP;
    goto L_171AFEB7; /* 0x171AFEB3: jmp 0x171afeb7 */
L_171AFEB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AFEB5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AFEB7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AFEB7: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171AFEB8: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171AFEB9: dec ebx */
    _flag_k = FK_DEC;
    MEM16(edx) = (uint16_t)(LO16(ecx)); /* 0x171AFEBA: mov word ptr [edx], cx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AFEA0; /* 0x171AFEBD: jne 0x171afea0 */
L_171AFEBF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171AFEBF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x171AFEC1: mov ebx, eax */
L_171AFEC3:
    ecx = MEM32(edi + 0x24); /* 0x171AFEC3: mov ecx, dword ptr [edi + 0x24] */
    esi = ecx + edx; /* 0x171AFEC6: lea esi, [ecx + edx] */
    SET_LO16(ecx, MEM16(esi)); /* 0x171AFEC9: mov cx, word ptr [esi] */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x171AFECC: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_171AFED8; /* 0x171AFECF: jb 0x171afed8 */
L_171AFED1:
    ecx = (uint32_t)LO16(ecx); /* 0x171AFED1: movzx ecx, cx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171AFED4: sub ecx, eax */
    _flag_k = FK_CMP;
    goto L_171AFEDA; /* 0x171AFED6: jmp 0x171afeda */
L_171AFED8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171AFED8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AFEDA:
    MEM16(esi) = (uint16_t)(LO16(ecx)); /* 0x171AFEDA: mov word ptr [esi], cx */
    ecx = MEM32(edi + 0x14); /* 0x171AFEDD: mov ecx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171AFEE0: add ecx, edx */
    _flag_k = FK_ADD;
    SET_LO16(esi, MEM16(ecx)); /* 0x171AFEE2: mov si, word ptr [ecx] */
    /* cmp LO16(esi), LO16(eax) */ /* 0x171AFEE5: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_171AFEF1; /* 0x171AFEE8: jb 0x171afef1 */
L_171AFEEA:
    esi = (uint32_t)LO16(esi); /* 0x171AFEEA: movzx esi, si */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x171AFEED: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_171AFEF3; /* 0x171AFEEF: jmp 0x171afef3 */
L_171AFEF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AFEF1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AFEF3:
    MEM16(ecx) = (uint16_t)(LO16(esi)); /* 0x171AFEF3: mov word ptr [ecx], si */
    ecx = MEM32(edi + 0x18); /* 0x171AFEF6: mov ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171AFEF9: add ecx, edx */
    _flag_k = FK_ADD;
    SET_LO16(esi, MEM16(ecx)); /* 0x171AFEFB: mov si, word ptr [ecx] */
    /* cmp LO16(esi), LO16(eax) */ /* 0x171AFEFE: cmp si, ax */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_B(_flag_a, _flag_b)) goto L_171AFF0A; /* 0x171AFF01: jb 0x171aff0a */
L_171AFF03:
    esi = (uint32_t)LO16(esi); /* 0x171AFF03: movzx esi, si */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x171AFF06: sub esi, eax */
    _flag_k = FK_CMP;
    goto L_171AFF0C; /* 0x171AFF08: jmp 0x171aff0c */
L_171AFF0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171AFF0A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AFF0C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFF0C: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFF0D: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171AFF0E: dec ebx */
    _flag_k = FK_DEC;
    MEM16(ecx) = (uint16_t)(LO16(esi)); /* 0x171AFF0F: mov word ptr [ecx], si */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171AFEC3; /* 0x171AFF12: jne 0x171afec3 */
L_171AFF14:
    esi = POP32_VAL(esp); /* 0x171AFF14: pop esi */
    ebx = POP32_VAL(esp); /* 0x171AFF15: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171AFF16: ret  */
    RECOMP_REGS_OUT();
}

void sub_171AFF1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171AFF1Cu);

L_171AFF1C:
    edi = edi; /* 0x171AFF1C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171AFF1E: push ebp */
    ebp = esp; /* 0x171AFF1F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x171AFF21: sub esp, 0x14 */
    _flag_k = FK_CMP;
    SET_LO16(edx, MEM16(esi + 0x44)); /* 0x171AFF24: mov dx, word ptr [esi + 0x44] */
    eax = MEM32(esi + 0x1C); /* 0x171AFF28: mov eax, dword ptr [esi + 0x1c] */
    ecx = (uint32_t)LO16(edx); /* 0x171AFF2B: movzx ecx, dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171AFF2E: add ecx, eax */
    _flag_k = FK_ADD;
    /* cmp LO16(edx), 0x7EFAu */ /* 0x171AFF30: cmp dx, 0x7efa */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(0x7EFAu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, ebx); /* 0x171AFF35: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171AFF36: mov ebx, dword ptr [ebp + 8] */
    eax = ecx + 0x102; /* 0x171AFF39: lea eax, [ecx + 0x102] */
    PUSH32(esp, edi); /* 0x171AFF3F: push edi */
    edi = MEM32(esi + 0x40); /* 0x171AFF40: mov edi, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x10)) = eax; /* 0x171AFF43: mov dword ptr [ebp - 0x10], eax */
    SET_LO8(eax, MEM8(edi + ecx + (-0x1))); /* 0x171AFF46: mov al, byte ptr [edi + ecx - 1] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x171AFF4A: mov byte ptr [ebp - 1], al */
    SET_LO8(eax, MEM8(edi + ecx)); /* 0x171AFF4D: mov al, byte ptr [edi + ecx] */
    MEM32(ebp + (-0x8)) = 0x1000u; /* 0x171AFF50: mov dword ptr [ebp - 8], 0x1000 */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x171AFF57: mov byte ptr [ebp - 2], al */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171AFF67; /* 0x171AFF5A: jbe 0x171aff67 */
L_171AFF5C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF8106u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFF8106u; /* 0x171AFF5C: add edx, 0xffff8106 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = edx; /* 0x171AFF62: mov dword ptr [ebp - 0xc], edx */
    goto L_171AFF6B; /* 0x171AFF65: jmp 0x171aff6b */
L_171AFF67:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x171AFF67: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171AFF6B:
    /* cmp edi, 0x102u */ /* 0x171AFF6B: cmp edi, 0x102 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171AFF7A; /* 0x171AFF71: jl 0x171aff7a */
L_171AFF73:
    MEM32(ebp + (-0x8)) = 0x400u; /* 0x171AFF73: mov dword ptr [ebp - 8], 0x400 */
L_171AFF7A:
    eax = MEM32(esi + 0x1C); /* 0x171AFF7A: mov eax, dword ptr [esi + 0x1c] */
    edx = (uint32_t)LO16(ebx); /* 0x171AFF7D: movzx edx, bx */
    MEM32(ebp + (-0x14)) = edx; /* 0x171AFF80: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171AFF83: add edx, eax */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ebp + (-0x2))); /* 0x171AFF85: mov al, byte ptr [ebp - 2] */
    /* cmp MEM8(edx + edi), LO8(eax) */ /* 0x171AFF88: cmp byte ptr [edx + edi], al */
    _flag_a = (uint32_t)(MEM8(edx + edi)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0038; /* 0x171AFF8B: jne 0x171b0038 */
L_171AFF91:
    SET_LO8(eax, MEM8(ebp + (-0x1))); /* 0x171AFF91: mov al, byte ptr [ebp - 1] */
    /* cmp MEM8(edx + edi + (-0x1)), LO8(eax) */ /* 0x171AFF94: cmp byte ptr [edx + edi - 1], al */
    _flag_a = (uint32_t)(MEM8(edx + edi + (-0x1))) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0038; /* 0x171AFF98: jne 0x171b0038 */
L_171AFF9E:
    SET_LO8(eax, MEM8(edx)); /* 0x171AFF9E: mov al, byte ptr [edx] */
    /* cmp LO8(eax), MEM8(ecx) */ /* 0x171AFFA0: cmp al, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0038; /* 0x171AFFA2: jne 0x171b0038 */
L_171AFFA8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFA8: inc edx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx)); /* 0x171AFFA9: mov al, byte ptr [edx] */
    /* cmp LO8(eax), MEM8(ecx + 0x1) */ /* 0x171AFFAB: cmp al, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0038; /* 0x171AFFAE: jne 0x171b0038 */
L_171AFFB4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFB4: inc edx */
    _flag_k = FK_INC;
    SET_LO8(ebx, MEM8(edx)); /* 0x171AFFB5: mov bl, byte ptr [edx] */
    eax = ecx + 0x2; /* 0x171AFFB7: lea eax, [ecx + 2] */
    /* cmp LO8(ebx), MEM8(eax) */ /* 0x171AFFBA: cmp bl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0038; /* 0x171AFFBC: jne 0x171b0038 */
L_171AFFBE:
    ebx = MEM32(ebp + (-0x10)); /* 0x171AFFBE: mov ebx, dword ptr [ebp - 0x10] */
    ecx = eax; /* 0x171AFFC1: mov ecx, eax */
L_171AFFC3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AFFC3: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x171AFFC4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFC6: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x171AFFC7: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0007; /* 0x171AFFC9: jne 0x171b0007 */
L_171AFFCB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AFFCB: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x171AFFCC: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFCE: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x171AFFCF: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0007; /* 0x171AFFD1: jne 0x171b0007 */
L_171AFFD3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AFFD3: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x171AFFD4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFD6: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x171AFFD7: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0007; /* 0x171AFFD9: jne 0x171b0007 */
L_171AFFDB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AFFDB: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x171AFFDC: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFDE: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x171AFFDF: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0007; /* 0x171AFFE1: jne 0x171b0007 */
L_171AFFE3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AFFE3: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x171AFFE4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFE6: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x171AFFE7: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0007; /* 0x171AFFE9: jne 0x171b0007 */
L_171AFFEB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AFFEB: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x171AFFEC: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFEE: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x171AFFEF: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0007; /* 0x171AFFF1: jne 0x171b0007 */
L_171AFFF3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AFFF3: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x171AFFF4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFF6: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x171AFFF7: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0007; /* 0x171AFFF9: jne 0x171b0007 */
L_171AFFFB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171AFFFB: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ecx)); /* 0x171AFFFC: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171AFFFE: inc edx */
    _flag_k = FK_INC;
    /* cmp LO8(eax), MEM8(edx) */ /* 0x171AFFFF: cmp al, byte ptr [edx] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0007; /* 0x171B0001: jne 0x171b0007 */
L_171B0003:
    /* cmp ecx, ebx */ /* 0x171B0003: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171AFFC3; /* 0x171B0005: jb 0x171affc3 */
L_171B0007:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171B0007: sub ecx, ebx */
    _flag_k = FK_CMP;
    eax = 0x102u; /* 0x171B0009: mov eax, 0x102 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171B000E: add ecx, eax */
    _flag_k = FK_ADD;
    edx = ecx; /* 0x171B0010: mov edx, ecx */
    /* cmp edx, edi */ /* 0x171B0012: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ebx + (-0x102); /* 0x171B0014: lea ecx, [ebx - 0x102] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B0038; /* 0x171B001A: jle 0x171b0038 */
L_171B001C:
    /* cmp edx, eax */ /* 0x171B001C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO16(edi, MEM16(ebp + 0x8)); /* 0x171B001E: mov di, word ptr [ebp + 8] */
    MEM16(esi + 0x46) = (uint16_t)(LO16(edi)); /* 0x171B0022: mov word ptr [esi + 0x46], di */
    edi = edx; /* 0x171B0026: mov edi, edx */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B0064; /* 0x171B0028: jge 0x171b0064 */
L_171B002A:
    eax = edx + ecx; /* 0x171B002A: lea eax, [edx + ecx] */
    SET_LO8(edx, MEM8(eax + (-0x1))); /* 0x171B002D: mov dl, byte ptr [eax - 1] */
    SET_LO8(eax, MEM8(eax)); /* 0x171B0030: mov al, byte ptr [eax] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x171B0032: mov byte ptr [ebp - 1], dl */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(eax)); /* 0x171B0035: mov byte ptr [ebp - 2], al */
L_171B0038:
    eax = MEM32(ebp + (-0x14)); /* 0x171B0038: mov eax, dword ptr [ebp - 0x14] */
    edx = MEM32(esi + 0x24); /* 0x171B003B: mov edx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FFFu);
    eax = eax & 0x7FFFu; /* 0x171B003E: and eax, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B0043: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(edx + eax * 2)); /* 0x171B0045: mov bx, word ptr [edx + eax*2] */
    /* cmp LO16(ebx), MEM16(ebp + (-0xC)) */ /* 0x171B0049: cmp bx, word ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0xC))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebp + 0x8) = ebx; /* 0x171B004D: mov dword ptr [ebp + 8], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B0064; /* 0x171B0050: jbe 0x171b0064 */
L_171B0052:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0xFFFFu; /* 0x171B0052: add dword ptr [ebp - 8], 0xffff */
    _flag_k = FK_ADD;
    /* cmp MEM16(ebp + (-0x8)), 0 */ /* 0x171B0059: cmp word ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171AFF7A; /* 0x171B005E: jne 0x171aff7a */
L_171B0064:
    eax = edi; /* 0x171B0064: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x171B0066: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B0067: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171B0068: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B0069: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B0071(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B0071u);

L_171B0071:
    edi = edi; /* 0x171B0071: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B0073: push ebp */
    ebp = esp; /* 0x171B0074: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B0076: push ecx */
    PUSH32(esp, ecx); /* 0x171B0077: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B0078: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebx + 0xF22), LO16(edx) */ /* 0x171B007A: cmp word ptr [ebx + 0xf22], dx */
    _flag_a = (uint32_t)(MEM16(ebx + 0xF22)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    MEM32(ebx + 0x60) = edx; /* 0x171B0081: mov dword ptr [ebx + 0x60], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B023E; /* 0x171B0084: jne 0x171b023e */
L_171B008A:
    PUSH32(esp, esi); /* 0x171B008A: push esi */
    ecx = ebx + 0x1E88; /* 0x171B008B: lea ecx, [ebx + 0x1e88] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B0091: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x17023DF8u; /* 0x171B0093: mov esi, 0x17023df8 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B0098: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, edi); /* 0x171B009B: push edi */
L_171B009C:
    ecx = MEM32(ebp + (-0x8)); /* 0x171B009C: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171B009F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B00A3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x171B00A5: mov dword ptr [ecx], eax */
    ecx = MEM32(esi); /* 0x171B00A7: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B00A9: inc edi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B00AA: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x171B00AA: shl edi, cl */
    /* test edi, edi */ /* 0x171B00AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B00C7; /* 0x171B00AE: jle 0x171b00c7 */
L_171B00B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B00B0: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebx + eax + 0x1B85) = (uint8_t)(LO8(edx)); /* 0x171B00B2: mov byte ptr [ebx + eax + 0x1b85], dl */
    ecx = MEM32(esi); /* 0x171B00B9: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B00BB: inc edi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B00BC: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x171B00BC: shl edi, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B00BE: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171B00BF: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x171B00C2: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B00B0; /* 0x171B00C5: jl 0x171b00b0 */
L_171B00C7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x171B00C7: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171B00CB: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B00CE: inc edx */
    _flag_k = FK_INC;
    /* cmp esi, 0x17023E68u */ /* 0x171B00CF: cmp esi, 0x17023e68 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x17023E68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B009C; /* 0x171B00D5: jl 0x171b009c */
L_171B00D7:
    MEM8(eax + ebx + 0x1B84) = (uint8_t)(LO8(edx)); /* 0x171B00D7: mov byte ptr [eax + ebx + 0x1b84], dl */
    ecx = ebx + 0x1EFC; /* 0x171B00DE: lea ecx, [ebx + 0x1efc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B00E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B00E6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = 0x17023E70u; /* 0x171B00E8: mov esi, 0x17023e70 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B00ED: mov dword ptr [ebp - 8], ecx */
L_171B00F0:
    ecx = MEM32(ebp + (-0x8)); /* 0x171B00F0: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171B00F3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B00F7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x171B00F9: mov dword ptr [ecx], eax */
    ecx = MEM32(esi); /* 0x171B00FB: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B00FD: inc edi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B00FE: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x171B00FE: shl edi, cl */
    /* test edi, edi */ /* 0x171B0100: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B011B; /* 0x171B0102: jle 0x171b011b */
L_171B0104:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B0104: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebx + eax + 0x1C85) = (uint8_t)(LO8(edx)); /* 0x171B0106: mov byte ptr [ebx + eax + 0x1c85], dl */
    ecx = MEM32(esi); /* 0x171B010D: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B010F: inc edi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0110: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x171B0110: shl edi, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0112: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171B0113: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x171B0116: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B0104; /* 0x171B0119: jl 0x171b0104 */
L_171B011B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x171B011B: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171B011F: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B0122: inc edx */
    _flag_k = FK_INC;
    /* cmp esi, 0x17023EB0u */ /* 0x171B0123: cmp esi, 0x17023eb0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x17023EB0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B00F0; /* 0x171B0129: jl 0x171b00f0 */
L_171B012B:
    if (7u) _cf = (((eax) >> 6) & 1u); /* 0x171B012B: sar eax, 7 */
    if (7u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 7u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 7u);
    /* cmp edx, 0x1Eu */ /* 0x171B012E: cmp edx, 0x1e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B018A; /* 0x171B0131: jge 0x171b018a */
L_171B0133:
    ecx = ebx + edx * 4 + 0x1EFC; /* 0x171B0133: lea ecx, [ebx + edx*4 + 0x1efc] */
    esi = edx * 4 + 0x17023E70; /* 0x171B013A: lea esi, [edx*4 + 0x17023e70] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B0141: mov dword ptr [ebp - 8], ecx */
L_171B0144:
    edi = MEM32(ebp + (-0x8)); /* 0x171B0144: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171B0147: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x171B014B: mov ecx, eax */
    if (7u) _cf = (((ecx) >> 25) & 1u); /* 0x171B014D: shl ecx, 7 */
    if (7u) { _flag_a = recomp_flags_pack((ecx << 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 7u; /* 0x171B014D: shl ecx, 7 */
    MEM32(edi) = ecx; /* 0x171B0150: mov dword ptr [edi], ecx */
    ecx = MEM32(esi); /* 0x171B0152: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B0154: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 7; /* 0x171B0156: sub ecx, 7 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B0159: inc edi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B015A: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x171B015A: shl edi, cl */
    /* test edi, edi */ /* 0x171B015C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B017A; /* 0x171B015E: jle 0x171b017a */
L_171B0160:
    MEM8(ebx + eax + 0x1D85) = (uint8_t)(LO8(edx)); /* 0x171B0160: mov byte ptr [ebx + eax + 0x1d85], dl */
    ecx = MEM32(esi); /* 0x171B0167: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B0169: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 7; /* 0x171B016B: sub ecx, 7 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B016E: inc edi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B016F: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x171B016F: shl edi, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0171: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171B0172: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x171B0175: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B0160; /* 0x171B0178: jl 0x171b0160 */
L_171B017A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x171B017A: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171B017E: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B0181: inc edx */
    _flag_k = FK_INC;
    /* cmp esi, 0x17023EE8u */ /* 0x171B0182: cmp esi, 0x17023ee8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x17023EE8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B0144; /* 0x171B0188: jl 0x171b0144 */
L_171B018A:
    PUSH32(esp, 8); /* 0x171B018A: push 8 */
    edx = POP32_VAL(esp); /* 0x171B018C: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B018D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebx + 0x1034; /* 0x171B018F: lea edi, [ebx + 0x1034] */
    ecx = edx; /* 0x171B0195: mov ecx, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B0197: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = ebx + 0xAA2; /* 0x171B0199: lea eax, [ebx + 0xaa2] */
    ecx = 0x90u; /* 0x171B019F: mov ecx, 0x90 */
    edi = POP32_VAL(esp); /* 0x171B01A4: pop edi */
L_171B01A5:
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x171B01A5: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B01A8: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM16(ebx + 0x1044)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebx + 0x1044) = (uint16_t)(MEM16(ebx + 0x1044) + 1); /* 0x171B01AB: inc word ptr [ebx + 0x1044] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B01B2: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B01A5; /* 0x171B01B3: jne 0x171b01a5 */
L_171B01B5:
    PUSH32(esp, 0x70u); /* 0x171B01B5: push 0x70 */
    eax = ebx + 0xCE2; /* 0x171B01B7: lea eax, [ebx + 0xce2] */
    ecx = POP32_VAL(esp); /* 0x171B01BD: pop ecx */
L_171B01BE:
    MEM16(eax) = (uint16_t)(9); /* 0x171B01BE: mov word ptr [eax], 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B01C3: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM16(ebx + 0x1046)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebx + 0x1046) = (uint16_t)(MEM16(ebx + 0x1046) + 1); /* 0x171B01C6: inc word ptr [ebx + 0x1046] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B01CD: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B01BE; /* 0x171B01CE: jne 0x171b01be */
L_171B01D0:
    PUSH32(esp, 0x18u); /* 0x171B01D0: push 0x18 */
    eax = ebx + 0xEA2; /* 0x171B01D2: lea eax, [ebx + 0xea2] */
    ecx = POP32_VAL(esp); /* 0x171B01D8: pop ecx */
L_171B01D9:
    MEM16(eax) = (uint16_t)(7); /* 0x171B01D9: mov word ptr [eax], 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B01DE: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM16(ebx + 0x1042)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebx + 0x1042) = (uint16_t)(MEM16(ebx + 0x1042) + 1); /* 0x171B01E1: inc word ptr [ebx + 0x1042] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B01E8: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B01D9; /* 0x171B01E9: jne 0x171b01d9 */
L_171B01EB:
    eax = ebx + 0xF02; /* 0x171B01EB: lea eax, [ebx + 0xf02] */
    ecx = edx; /* 0x171B01F1: mov ecx, edx */
L_171B01F3:
    MEM16(eax) = (uint16_t)(LO16(edx)); /* 0x171B01F3: mov word ptr [eax], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B01F6: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM16(ebx + 0x1044)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(ebx + 0x1044) = (uint16_t)(MEM16(ebx + 0x1044) + 1); /* 0x171B01F9: inc word ptr [ebx + 0x1044] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B0200: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B01F3; /* 0x171B0201: jne 0x171b01f3 */
L_171B0203:
    PUSH32(esp, 0x11Fu); /* 0x171B0203: push 0x11f */
    esi = ebx + 0xAA0; /* 0x171B0208: lea esi, [ebx + 0xaa0] */
    PUSH32(esp, ebx); /* 0x171B020E: push ebx */
    RECOMP_CALL(sub_171AF6BC); /* 0x171B020F: call 0x171af6bc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B0214: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx + 0xF20; /* 0x171B0216: lea edx, [ebx + 0xf20] */
L_171B021C:
    PUSH32(esp, 5); /* 0x171B021C: push 5 */
    PUSH32(esp, esi); /* 0x171B021E: push esi */
    MEM16(edx + 0x2) = (uint16_t)(5); /* 0x171B021F: mov word ptr [edx + 2], 5 */
    RECOMP_CALL(sub_171AF2AF); /* 0x171B0225: call 0x171af2af */
    RECOMP_FLAGS_IN();
    MEM16(edx) = (uint16_t)(LO16(eax)); /* 0x171B022A: mov word ptr [edx], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B022D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B022E: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 0x1Eu */ /* 0x171B0231: cmp esi, 0x1e */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B021C; /* 0x171B0234: jl 0x171b021c */
L_171B0236:
    eax = ebx; /* 0x171B0236: mov eax, ebx */
    RECOMP_CALL(sub_171AF3FC); /* 0x171B0238: call 0x171af3fc */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B023D: pop esi */
L_171B023E:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171B023E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B023F: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B0245(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B0245u);

L_171B0245:
    edi = edi; /* 0x171B0245: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B0247: push ebp */
    ebp = esp; /* 0x171B0248: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B024A: push ecx */
    PUSH32(esp, ecx); /* 0x171B024B: push ecx */
    PUSH32(esp, ebx); /* 0x171B024C: push ebx */
    ebx = eax; /* 0x171B024D: mov ebx, eax */
    eax = (uint32_t)MEM16(ebx + 0x54); /* 0x171B024F: movzx eax, word ptr [ebx + 0x54] */
    SET_LO8(ecx, MEM8(ebx + 0x56)); /* 0x171B0253: mov cl, byte ptr [ebx + 0x56] */
    PUSH32(esp, esi); /* 0x171B0256: push esi */
    MEM8(eax + ebx + 0x1F74) = (uint8_t)(LO8(ecx)); /* 0x171B0257: mov byte ptr [eax + ebx + 0x1f74], cl */
    PUSH32(esp, edi); /* 0x171B025E: push edi */
    eax = ebx + 0x64; /* 0x171B025F: lea eax, [ebx + 0x64] */
    PUSH32(esp, eax); /* 0x171B0262: push eax */
    RECOMP_CALL(sub_171AF738); /* 0x171B0263: call 0x171af738 */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x80; /* 0x171B0268: lea eax, [ebx + 0x80] */
    PUSH32(esp, eax); /* 0x171B026E: push eax */
    RECOMP_CALL(sub_171AF738); /* 0x171B026F: call 0x171af738 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x7C); /* 0x171B0274: mov ecx, dword ptr [ebx + 0x7c] */
    eax = ebx + 0xB8; /* 0x171B0277: lea eax, [ebx + 0xb8] */
    PUSH32(esp, ebx); /* 0x171B027D: push ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x171B027E: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_171AF8DE); /* 0x171B0281: call 0x171af8de */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x98); /* 0x171B0286: mov ecx, dword ptr [ebx + 0x98] */
    eax = ebx + 0x9AC; /* 0x171B028C: lea eax, [ebx + 0x9ac] */
    PUSH32(esp, ebx); /* 0x171B0292: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B0293: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_171AF8DE); /* 0x171B0296: call 0x171af8de */
    RECOMP_FLAGS_IN();
    eax = ebx + 0x9C; /* 0x171B029B: lea eax, [ebx + 0x9c] */
    PUSH32(esp, eax); /* 0x171B02A1: push eax */
    RECOMP_CALL(sub_171AF738); /* 0x171B02A2: call 0x171af738 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12u); /* 0x171B02A7: push 0x12 */
    esi = POP32_VAL(esp); /* 0x171B02A9: pop esi */
    PUSH32(esp, 3); /* 0x171B02AA: push 3 */
    edi = POP32_VAL(esp); /* 0x171B02AC: pop edi */
L_171B02AD:
    eax = (uint32_t)MEM8(esi + 0x17023F34); /* 0x171B02AD: movzx eax, byte ptr [esi + 0x17023f34] */
    /* cmp MEM16(ebx + eax * 4 + 0xF9A), 0 */ /* 0x171B02B4: cmp word ptr [ebx + eax*4 + 0xf9a], 0 */
    _flag_a = (uint32_t)(MEM16(ebx + eax * 4 + 0xF9A)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B02C4; /* 0x171B02BD: jne 0x171b02c4 */
L_171B02BF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B02BF: dec esi */
    _flag_k = FK_DEC;
    /* cmp esi, edi */ /* 0x171B02C0: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B02AD; /* 0x171B02C2: jge 0x171b02ad */
L_171B02C4:
    ecx = MEM32(ebx + 0x5C); /* 0x171B02C4: mov ecx, dword ptr [ebx + 0x5c] */
    eax = esi + esi * 2 + 0x11; /* 0x171B02C7: lea eax, [esi + esi*2 + 0x11] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) + eax; /* 0x171B02CB: add dword ptr [ebx + 0x58], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x58); /* 0x171B02CE: mov eax, dword ptr [ebx + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xAu; /* 0x171B02D1: add eax, 0xa */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xAu; /* 0x171B02D4: add ecx, 0xa */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171B02D7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x171B02D7: shr eax, 3 */
    if (3u) _cf = (((ecx) >> 2) & 1u); /* 0x171B02DA: shr ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 3u; /* 0x171B02DA: shr ecx, 3 */
    /* cmp ecx, eax */ /* 0x171B02DD: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B02E3; /* 0x171B02DF: ja 0x171b02e3 */
L_171B02E1:
    eax = ecx; /* 0x171B02E1: mov eax, ecx */
L_171B02E3:
    edx = MEM32(ebp + 0xC); /* 0x171B02E3: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x171B02E6: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x171B02E9: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B0323; /* 0x171B02EB: ja 0x171b0323 */
L_171B02ED:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171B02ED: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0323; /* 0x171B02F1: je 0x171b0323 */
L_171B02F3:
    edx = MEM32(ebp + 0x10); /* 0x171B02F3: mov edx, dword ptr [ebp + 0x10] */
    eax = ebx; /* 0x171B02F6: mov eax, ebx */
    RECOMP_CALL(sub_171AF20B); /* 0x171B02F8: call 0x171af20b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x60); /* 0x171B02FD: mov ecx, dword ptr [ebx + 0x60] */
    eax = MEM32(ebp + 0xC); /* 0x171B0300: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xAu; /* 0x171B0303: add ecx, 0xa */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFF8u);
    ecx = ecx & 0xFFFFFFF8u; /* 0x171B0306: and ecx, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171B0309: add eax, 2 */
    _flag_k = FK_ADD;
    eax = ecx + eax * 8; /* 0x171B030C: lea eax, [ecx + eax*8] */
    ecx = MEM32(ebp + 0xC); /* 0x171B030F: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x171B0312: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171B0314: push dword ptr [ebp + 8] */
    MEM32(ebx + 0x60) = eax; /* 0x171B0317: mov dword ptr [ebx + 0x60], eax */
    eax = ebx; /* 0x171B031A: mov eax, ebx */
    RECOMP_CALL(sub_171AF365); /* 0x171B031C: call 0x171af365 */
    RECOMP_FLAGS_IN();
    goto L_171B037E; /* 0x171B0321: jmp 0x171b037e */
L_171B0323:
    edx = MEM32(ebp + 0x10); /* 0x171B0323: mov edx, dword ptr [ebp + 0x10] */
    /* cmp ecx, eax */ /* 0x171B0326: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x171B0328: mov eax, ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B034E; /* 0x171B032A: jne 0x171b034e */
L_171B032C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x171B032C: add edx, 2 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171AF20B); /* 0x171B032F: call 0x171af20b */
    RECOMP_FLAGS_IN();
    eax = ebx + 0xF20; /* 0x171B0334: lea eax, [ebx + 0xf20] */
    PUSH32(esp, eax); /* 0x171B033A: push eax */
    eax = ebx + 0xAA0; /* 0x171B033B: lea eax, [ebx + 0xaa0] */
    PUSH32(esp, eax); /* 0x171B0341: push eax */
    eax = ebx; /* 0x171B0342: mov eax, ebx */
    RECOMP_CALL(sub_171AFC73); /* 0x171B0344: call 0x171afc73 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x5C); /* 0x171B0349: mov eax, dword ptr [ebx + 0x5c] */
    goto L_171B0379; /* 0x171B034C: jmp 0x171b0379 */
L_171B034E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B034E: add edx, 4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_171AF20B); /* 0x171B0351: call 0x171af20b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x98); /* 0x171B0356: mov eax, dword ptr [ebx + 0x98] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B035C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B035D: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171B035E: push eax */
    eax = MEM32(ebx + 0x7C); /* 0x171B035F: mov eax, dword ptr [ebx + 0x7c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0362: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x171B0363: push eax */
    eax = ebx; /* 0x171B0364: mov eax, ebx */
    RECOMP_CALL(sub_171AFAD5); /* 0x171B0366: call 0x171afad5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171B036B: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171B036E: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171AFC73); /* 0x171B0371: call 0x171afc73 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x58); /* 0x171B0376: mov eax, dword ptr [ebx + 0x58] */
L_171B0379:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171B0379: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebx + 0x60)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x60) = MEM32(ebx + 0x60) + eax; /* 0x171B037B: add dword ptr [ebx + 0x60], eax */
    _flag_k = FK_ADD;
L_171B037E:
    eax = ebx; /* 0x171B037E: mov eax, ebx */
    RECOMP_CALL(sub_171AF3FC); /* 0x171B0380: call 0x171af3fc */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171B0385: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0394; /* 0x171B0389: je 0x171b0394 */
L_171B038B:
    RECOMP_CALL(sub_171AF2DC); /* 0x171B038B: call 0x171af2dc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x60)); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x60) = MEM32(ebx + 0x60) + 7; /* 0x171B0390: add dword ptr [ebx + 0x60], 7 */
    _flag_k = FK_ADD;
L_171B0394:
    eax = MEM32(ebx + 0x60); /* 0x171B0394: mov eax, dword ptr [ebx + 0x60] */
    edi = POP32_VAL(esp); /* 0x171B0397: pop edi */
    esi = POP32_VAL(esp); /* 0x171B0398: pop esi */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171B0399: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x171B0399: shr eax, 3 */
    ebx = POP32_VAL(esp); /* 0x171B039C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171B039D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B039E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B03A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B03A6u);

L_171B03A6:
    edi = edi; /* 0x171B03A6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B03A8: push ebp */
    ebp = esp; /* 0x171B03A9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B03AB: push ecx */
    PUSH32(esp, ecx); /* 0x171B03AC: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171B03AD: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171B03B1: push ebx */
    PUSH32(esp, esi); /* 0x171B03B2: push esi */
    esi = eax; /* 0x171B03B3: mov esi, eax */
    /* cmp MEM32(esi + 0x2C), 0 */ /* 0x171B03B5: cmp dword ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 2); /* 0x171B03B9: push 2 */
    ebx = POP32_VAL(esp); /* 0x171B03BB: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0580; /* 0x171B03BC: je 0x171b0580 */
L_171B03C2:
    PUSH32(esp, edi); /* 0x171B03C2: push edi */
L_171B03C3:
    /* cmp MEM32(esi + 0x2C), 1 */ /* 0x171B03C3: cmp dword ptr [esi + 0x2c], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B03DA; /* 0x171B03C7: jle 0x171b03da */
L_171B03C9:
    SET_LO16(ecx, MEM16(esi + 0x44)); /* 0x171B03C9: mov cx, word ptr [esi + 0x44] */
    eax = ebp + (-0x4); /* 0x171B03CD: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171B03D0: push eax */
    eax = esi; /* 0x171B03D1: mov eax, esi */
    RECOMP_CALL(sub_171AFD93); /* 0x171B03D3: call 0x171afd93 */
    RECOMP_FLAGS_IN();
    goto L_171B03E2; /* 0x171B03D8: jmp 0x171b03e2 */
L_171B03DA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171B03DA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0; /* 0x171B03DE: and dword ptr [esi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B03E2:
    /* cmp MEM16(ebp + (-0x4)), 0 */ /* 0x171B03E2: cmp word ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x4))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    SET_LO16(edi, MEM16(esi + 0x46)); /* 0x171B03E7: mov di, word ptr [esi + 0x46] */
    PUSH32(esp, 2); /* 0x171B03EB: push 2 */
    MEM32(esi + 0x40) = ebx; /* 0x171B03ED: mov dword ptr [esi + 0x40], ebx */
    ebx = POP32_VAL(esp); /* 0x171B03F0: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0441; /* 0x171B03F1: je 0x171b0441 */
L_171B03F3:
    /* cmp MEM32(esi + 0x40), 0x20u */ /* 0x171B03F3: cmp dword ptr [esi + 0x40], 0x20 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171B0441; /* 0x171B03F7: jge 0x171b0441 */
L_171B03F9:
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x171B03F9: mov ax, word ptr [esi + 0x44] */
    edx = (uint32_t)MEM16(ebp + (-0x4)); /* 0x171B03FD: movzx edx, word ptr [ebp - 4] */
    ecx = (uint32_t)LO16(eax); /* 0x171B0401: movzx ecx, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x171B0404: sub ecx, edx */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x7EFAu */ /* 0x171B0406: cmp ecx, 0x7efa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7EFAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B0441; /* 0x171B040C: jg 0x171b0441 */
L_171B040E:
    /* cmp LO16(eax), 0xFFFDu */ /* 0x171B040E: cmp ax, 0xfffd */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0xFFFDu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0441; /* 0x171B0412: jae 0x171b0441 */
L_171B0414:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171B0414: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171AFF1C); /* 0x171B0417: call 0x171aff1c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171B041C: mov ebx, eax */
    eax = MEM32(esi + 0x2C); /* 0x171B041E: mov eax, dword ptr [esi + 0x2c] */
    /* cmp ebx, eax */ /* 0x171B0421: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B0427; /* 0x171B0423: jle 0x171b0427 */
L_171B0425:
    ebx = eax; /* 0x171B0425: mov ebx, eax */
L_171B0427:
    /* cmp ebx, 3 */ /* 0x171B0427: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0441; /* 0x171B042A: jne 0x171b0441 */
L_171B042C:
    eax = (uint32_t)MEM16(esi + 0x46); /* 0x171B042C: movzx eax, word ptr [esi + 0x46] */
    ecx = (uint32_t)MEM16(esi + 0x44); /* 0x171B0430: movzx ecx, word ptr [esi + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171B0434: sub ecx, eax */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x1000u */ /* 0x171B0436: cmp ecx, 0x1000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B0441; /* 0x171B043C: jle 0x171b0441 */
L_171B043E:
    PUSH32(esp, 2); /* 0x171B043E: push 2 */
    ebx = POP32_VAL(esp); /* 0x171B0440: pop ebx */
L_171B0441:
    eax = MEM32(esi + 0x40); /* 0x171B0441: mov eax, dword ptr [esi + 0x40] */
    /* cmp eax, 3 */ /* 0x171B0444: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B04EA; /* 0x171B0447: jl 0x171b04ea */
L_171B044D:
    /* cmp ebx, eax */ /* 0x171B044D: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B04EA; /* 0x171B044F: jg 0x171b04ea */
L_171B0455:
    edx = (uint32_t)MEM16(esi + 0x44); /* 0x171B0455: movzx edx, word ptr [esi + 0x44] */
    ecx = eax + (-0x3); /* 0x171B0459: lea ecx, [eax - 3] */
    eax = (uint32_t)LO16(edi); /* 0x171B045C: movzx eax, di */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x171B045F: sub edx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B0461: dec edx */
    _flag_k = FK_DEC;
    eax = esi; /* 0x171B0462: mov eax, esi */
    RECOMP_CALL(sub_171AFB54); /* 0x171B0464: call 0x171afb54 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0469: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x171B046B: mov edi, eax */
    eax = MEM32(esi + 0x40); /* 0x171B046D: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B0470: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171B0471: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + ecx; /* 0x171B0473: add dword ptr [esi + 0x2c], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x171B0476: add eax, -2 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x40) = eax; /* 0x171B0479: mov dword ptr [esi + 0x40], eax */
L_171B047C:
    _flag_a = (uint32_t)(MEM16(esi + 0x44)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x44) = (uint16_t)(MEM16(esi + 0x44) + 1); /* 0x171B047C: inc word ptr [esi + 0x44] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0480: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x2C), 1 */ /* 0x171B0482: cmp dword ptr [esi + 0x2c], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO16(ecx, MEM16(esi + 0x44)); /* 0x171B0486: mov cx, word ptr [esi + 0x44] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B0497; /* 0x171B048A: jle 0x171b0497 */
L_171B048C:
    eax = ebp + (-0x4); /* 0x171B048C: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171B048F: push eax */
    eax = esi; /* 0x171B0490: mov eax, esi */
    RECOMP_CALL(sub_171AFD93); /* 0x171B0492: call 0x171afd93 */
    RECOMP_FLAGS_IN();
L_171B0497:
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) - 1; /* 0x171B0497: dec dword ptr [esi + 0x40] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B047C; /* 0x171B049A: jne 0x171b047c */
L_171B049C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171B049C: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM16(esi + 0x44)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x44) = (uint16_t)(MEM16(esi + 0x44) + 1); /* 0x171B04A0: inc word ptr [esi + 0x44] */
    _flag_k = FK_NARROW(FK_INC, 16);
    /* test edi, edi */ /* 0x171B04A4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x171B04A6: mov ax, word ptr [esi + 0x44] */
    PUSH32(esp, 2); /* 0x171B04AA: push 2 */
    ebx = POP32_VAL(esp); /* 0x171B04AC: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B0556; /* 0x171B04AD: je 0x171b0556 */
L_171B04B3:
    /* test LO16(eax), LO16(eax) */ /* 0x171B04B3: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x3C); /* 0x171B04B6: mov ecx, dword ptr [esi + 0x3c] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B04C2; /* 0x171B04B9: jne 0x171b04c2 */
L_171B04BB:
    eax = 0x00010000u; /* 0x171B04BB: mov eax, 0x10000 */
    goto L_171B04C5; /* 0x171B04C0: jmp 0x171b04c5 */
L_171B04C2:
    eax = (uint32_t)LO16(eax); /* 0x171B04C2: movzx eax, ax */
L_171B04C5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B04C5: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x171B04C7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B04D4; /* 0x171B04C9: jl 0x171b04d4 */
L_171B04CB:
    ecx = (uint32_t)MEM16(esi + 0x3C); /* 0x171B04CB: movzx ecx, word ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x1C); /* 0x171B04CF: add ecx, dword ptr [esi + 0x1c] */
    _flag_k = FK_ADD;
    goto L_171B04D6; /* 0x171B04D2: jmp 0x171b04d6 */
L_171B04D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B04D4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B04D6:
    PUSH32(esp, 0); /* 0x171B04D6: push 0 */
    PUSH32(esp, eax); /* 0x171B04D8: push eax */
    PUSH32(esp, ecx); /* 0x171B04D9: push ecx */
    eax = esi; /* 0x171B04DA: mov eax, esi */
    RECOMP_CALL(sub_171B0245); /* 0x171B04DC: call 0x171b0245 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi + 0x44); /* 0x171B04E1: movzx eax, word ptr [esi + 0x44] */
    MEM32(esi + 0x3C) = eax; /* 0x171B04E5: mov dword ptr [esi + 0x3c], eax */
    goto L_171B0556; /* 0x171B04E8: jmp 0x171b0556 */
L_171B04EA:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x171B04EA: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0548; /* 0x171B04EE: je 0x171b0548 */
L_171B04F0:
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x171B04F0: mov ax, word ptr [esi + 0x44] */
    ecx = MEM32(esi + 0x1C); /* 0x171B04F4: mov ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x171B04F7: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    eax = (uint32_t)LO16(eax); /* 0x171B04F9: movzx eax, ax */
    ecx = (uint32_t)MEM8(eax + ecx); /* 0x171B04FC: movzx ecx, byte ptr [eax + ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B0500: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x171B0502: mov eax, esi */
    RECOMP_CALL(sub_171AFB54); /* 0x171B0504: call 0x171afb54 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B0509: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B054F; /* 0x171B050B: je 0x171b054f */
L_171B050D:
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x171B050D: mov ax, word ptr [esi + 0x44] */
    /* test LO16(eax), LO16(eax) */ /* 0x171B0511: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x3C); /* 0x171B0514: mov ecx, dword ptr [esi + 0x3c] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B0520; /* 0x171B0517: jne 0x171b0520 */
L_171B0519:
    eax = 0x00010000u; /* 0x171B0519: mov eax, 0x10000 */
    goto L_171B0523; /* 0x171B051E: jmp 0x171b0523 */
L_171B0520:
    eax = (uint32_t)LO16(eax); /* 0x171B0520: movzx eax, ax */
L_171B0523:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B0523: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x171B0525: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B0532; /* 0x171B0527: jl 0x171b0532 */
L_171B0529:
    ecx = (uint32_t)MEM16(esi + 0x3C); /* 0x171B0529: movzx ecx, word ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x1C); /* 0x171B052D: add ecx, dword ptr [esi + 0x1c] */
    _flag_k = FK_ADD;
    goto L_171B0534; /* 0x171B0530: jmp 0x171b0534 */
L_171B0532:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0532: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0534:
    PUSH32(esp, 0); /* 0x171B0534: push 0 */
    PUSH32(esp, eax); /* 0x171B0536: push eax */
    PUSH32(esp, ecx); /* 0x171B0537: push ecx */
    eax = esi; /* 0x171B0538: mov eax, esi */
    RECOMP_CALL(sub_171B0245); /* 0x171B053A: call 0x171b0245 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi + 0x44); /* 0x171B053F: movzx eax, word ptr [esi + 0x44] */
    MEM32(esi + 0x3C) = eax; /* 0x171B0543: mov dword ptr [esi + 0x3c], eax */
    goto L_171B054F; /* 0x171B0546: jmp 0x171b054f */
L_171B0548:
    MEM32(ebp + (-0x8)) = 1; /* 0x171B0548: mov dword ptr [ebp - 8], 1 */
L_171B054F:
    _flag_a = (uint32_t)(MEM16(esi + 0x44)) << 16; _flag_b = (uint32_t)(1) << 16;
    MEM16(esi + 0x44) = (uint16_t)(MEM16(esi + 0x44) + 1); /* 0x171B054F: inc word ptr [esi + 0x44] */
    _flag_k = FK_NARROW(FK_INC, 16);
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) - 1; /* 0x171B0553: dec dword ptr [esi + 0x2c] */
    _flag_k = FK_DEC;
L_171B0556:
    /* cmp MEM32(esi + 0x2C), 0 */ /* 0x171B0556: cmp dword ptr [esi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B03C3; /* 0x171B055A: jne 0x171b03c3 */
L_171B0560:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x171B0560: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171B0564: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0580; /* 0x171B0565: je 0x171b0580 */
L_171B0567:
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x171B0567: mov ax, word ptr [esi + 0x44] */
    ecx = MEM32(esi + 0x1C); /* 0x171B056B: mov ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(1) << 16;
    SET_LO16(eax, LO16(eax) - 1); /* 0x171B056E: dec ax */
    _flag_k = FK_NARROW(FK_DEC, 16);
    eax = (uint32_t)LO16(eax); /* 0x171B0570: movzx eax, ax */
    ecx = (uint32_t)MEM8(eax + ecx); /* 0x171B0573: movzx ecx, byte ptr [eax + ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B0577: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x171B0579: mov eax, esi */
    RECOMP_CALL(sub_171AFB54); /* 0x171B057B: call 0x171afb54 */
    RECOMP_FLAGS_IN();
L_171B0580:
    SET_LO16(eax, MEM16(esi + 0x44)); /* 0x171B0580: mov ax, word ptr [esi + 0x44] */
    /* test LO16(eax), LO16(eax) */ /* 0x171B0584: test ax, ax */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = MEM32(esi + 0x3C); /* 0x171B0587: mov ecx, dword ptr [esi + 0x3c] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B0593; /* 0x171B058A: jne 0x171b0593 */
L_171B058C:
    eax = 0x00010000u; /* 0x171B058C: mov eax, 0x10000 */
    goto L_171B0596; /* 0x171B0591: jmp 0x171b0596 */
L_171B0593:
    eax = (uint32_t)LO16(eax); /* 0x171B0593: movzx eax, ax */
L_171B0596:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B0596: sub eax, ecx */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x171B0598: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B05A5; /* 0x171B059A: jl 0x171b05a5 */
L_171B059C:
    ecx = (uint32_t)MEM16(esi + 0x3C); /* 0x171B059C: movzx ecx, word ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0x1C); /* 0x171B05A0: add ecx, dword ptr [esi + 0x1c] */
    _flag_k = FK_ADD;
    goto L_171B05A7; /* 0x171B05A3: jmp 0x171b05a7 */
L_171B05A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B05A5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B05A7:
    PUSH32(esp, 1); /* 0x171B05A7: push 1 */
    PUSH32(esp, eax); /* 0x171B05A9: push eax */
    PUSH32(esp, ecx); /* 0x171B05AA: push ecx */
    eax = esi; /* 0x171B05AB: mov eax, esi */
    RECOMP_CALL(sub_171B0245); /* 0x171B05AD: call 0x171b0245 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B05B2: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B05B3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171B05B4: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B05B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B05BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B05BBu);

L_171B05BB:
    edi = edi; /* 0x171B05BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B05BD: push ebp */
    ebp = esp; /* 0x171B05BE: mov ebp, esp */
    eax = MEM32(ebp + 0x1C); /* 0x171B05C0: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0x18); /* 0x171B05C3: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x171B05C6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171B05C7: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebx + 0x20) = eax; /* 0x171B05CA: mov dword ptr [ebx + 0x20], eax */
    eax = MEM32(ebp + 0x20); /* 0x171B05CD: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebx + 0x24) = eax; /* 0x171B05D0: mov dword ptr [ebx + 0x24], eax */
    eax = MEM32(ebp + 0x24); /* 0x171B05D3: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ebx + 0x14) = eax; /* 0x171B05D6: mov dword ptr [ebx + 0x14], eax */
    eax = MEM32(ebp + 0x28); /* 0x171B05D9: mov eax, dword ptr [ebp + 0x28] */
    MEM32(ebx + 0x18) = eax; /* 0x171B05DC: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebp + 0x14); /* 0x171B05DF: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x171B05E2: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171B05E3: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0x4) = eax; /* 0x171B05E6: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B05E9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x2C), LO8(eax) */ /* 0x171B05EB: cmp byte ptr [ebp + 0x2c], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0x2C)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebx + 0x10) = ecx; /* 0x171B05EE: mov dword ptr [ebx + 0x10], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171B05F1: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x171B05F4: push edi */
    MEM16(ebx + 0xC) = (uint16_t)(LO16(eax)); /* 0x171B05F5: mov word ptr [ebx + 0xc], ax */
    MEM32(ebx + 0x1C) = esi; /* 0x171B05F9: mov dword ptr [ebx + 0x1c], esi */
    MEM32(ebx + 0x2C) = ecx; /* 0x171B05FC: mov dword ptr [ebx + 0x2c], ecx */
    MEM32(ebx + 0x30) = eax; /* 0x171B05FF: mov dword ptr [ebx + 0x30], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0611; /* 0x171B0602: jne 0x171b0611 */
L_171B0604:
    ecx = 0x2000u; /* 0x171B0604: mov ecx, 0x2000 */
    edi = esi + 0x8000; /* 0x171B0609: lea edi, [esi + 0x8000] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B060F: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_171B0611:
    MEM16(ebx + 0x34) = (uint16_t)(LO16(eax)); /* 0x171B0611: mov word ptr [ebx + 0x34], ax */
    MEM32(ebx + 0x38) = eax; /* 0x171B0615: mov dword ptr [ebx + 0x38], eax */
    RECOMP_CALL(sub_171B0071); /* 0x171B0618: call 0x171b0071 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) & 0; /* 0x171B061D: and dword ptr [ebx + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0x2C), 0 */ /* 0x171B0621: cmp byte ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x2C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM16(ebx + 0x44) = (uint16_t)(0x8000u); /* 0x171B0625: mov word ptr [ebx + 0x44], 0x8000 */
    MEM32(ebx + 0x3C) = 0x8000u; /* 0x171B062B: mov dword ptr [ebx + 0x3c], 0x8000 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B063D; /* 0x171B0632: je 0x171b063d */
L_171B0634:
    edi = ebx; /* 0x171B0634: mov edi, ebx */
    RECOMP_CALL(sub_171AFE90); /* 0x171B0636: call 0x171afe90 */
    RECOMP_FLAGS_IN();
    goto L_171B0651; /* 0x171B063B: jmp 0x171b0651 */
L_171B063D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B063D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100u; /* 0x171B063F: mov ecx, 0x100 */
L_171B0644:
    edx = MEM32(ebx + 0x20); /* 0x171B0644: mov edx, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(MEM16(eax + edx)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax + edx) = (uint16_t)(MEM16(eax + edx) & 0); /* 0x171B0647: and word ptr [eax + edx], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B064C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B064D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B064E: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B0644; /* 0x171B064F: jne 0x171b0644 */
L_171B0651:
    PUSH32(esp, 8); /* 0x171B0651: push 8 */
    edi = POP32_VAL(esp); /* 0x171B0653: pop edi */
    PUSH32(esp, 0x43u); /* 0x171B0654: push 0x43 */
    edx = POP32_VAL(esp); /* 0x171B0656: pop edx */
    eax = ebx; /* 0x171B0657: mov eax, ebx */
    RECOMP_CALL(sub_171AF20B); /* 0x171B0659: call 0x171af20b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x4Bu); /* 0x171B065E: push 0x4b */
    edx = POP32_VAL(esp); /* 0x171B0660: pop edx */
    RECOMP_CALL(sub_171AF20B); /* 0x171B0661: call 0x171af20b */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_171B03A6); /* 0x171B0666: call 0x171b03a6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x30); /* 0x171B066B: mov ecx, dword ptr [ebp + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B066E: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B066F: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(ebp + 0x2C), 0 */ /* 0x171B0670: cmp byte ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x2C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (uint32_t)LO16(eax); /* 0x171B0674: movzx eax, ax */
    MEM32(ecx) = eax; /* 0x171B0677: mov dword ptr [ecx], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B068B; /* 0x171B0679: je 0x171b068b */
L_171B067B:
    edi = MEM32(ebx + 0x1C); /* 0x171B067B: mov edi, dword ptr [ebx + 0x1c] */
    ecx = 0x2000u; /* 0x171B067E: mov ecx, 0x2000 */
    esi = edi + 0x8000; /* 0x171B0683: lea esi, [edi + 0x8000] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B0689: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_171B068B:
    eax = MEM32(ebx + 0x30); /* 0x171B068B: mov eax, dword ptr [ebx + 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171B068E: neg eax */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171B0690: pop edi */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171B0691: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = POP32_VAL(esp); /* 0x171B0693: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x171B0694: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B0697: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B0698: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x171B0699: ret 0x2c */
    RECOMP_REGS_OUT();
}

void sub_171B06A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B06A1u);

L_171B06A1:
    edi = edi; /* 0x171B06A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B06A3: push ebp */
    ebp = esp; /* 0x171B06A4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58Cu; /* 0x171B06A6: sub esp, 0x58c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171B06AC: push ebx */
    PUSH32(esp, esi); /* 0x171B06AD: push esi */
    PUSH32(esp, edi); /* 0x171B06AE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B06AF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x11u); /* 0x171B06B1: push 0x11 */
    ebx = eax; /* 0x171B06B3: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x171B06B5: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B06B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x88); /* 0x171B06B8: lea edi, [ebp - 0x88] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B06BE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + 0xC); /* 0x171B06C0: mov edi, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x171B06C3: mov ecx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x38)) = esi; /* 0x171B06C6: mov dword ptr [ebp - 0x38], esi */
    edx = edi; /* 0x171B06C9: mov edx, edi */
L_171B06CB:
    eax = MEM32(ecx); /* 0x171B06CB: mov eax, dword ptr [ecx] */
    eax = ebp + eax * 4 + (-0x88); /* 0x171B06CD: lea eax, [ebp + eax*4 - 0x88] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x171B06D4: inc dword ptr [eax] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171B06D6: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B06D9: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B06CB; /* 0x171B06DA: jne 0x171b06cb */
L_171B06DC:
    /* cmp MEM32(ebp + (-0x88)), edi */ /* 0x171B06DC: cmp dword ptr [ebp - 0x88], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x88))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B06EB; /* 0x171B06E2: jne 0x171b06eb */
L_171B06E4:
    MEM32(ebx) = esi; /* 0x171B06E4: mov dword ptr [ebx], esi */
    goto L_171B09EF; /* 0x171B06E6: jmp 0x171b09ef */
L_171B06EB:
    eax = MEM32(ebx); /* 0x171B06EB: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B06ED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B06EF: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B06F0: mov dword ptr [ebp - 4], eax */
    ecx = edx; /* 0x171B06F3: mov ecx, edx */
L_171B06F5:
    /* cmp MEM32(ebp + ecx * 4 + (-0x88)), esi */ /* 0x171B06F5: cmp dword ptr [ebp + ecx*4 - 0x88], esi */
    _flag_a = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x88))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0704; /* 0x171B06FC: jne 0x171b0704 */
L_171B06FE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B06FE: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, 0x10u */ /* 0x171B06FF: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B06F5; /* 0x171B0702: jbe 0x171b06f5 */
L_171B0704:
    /* cmp eax, ecx */ /* 0x171B0704: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B0706: mov dword ptr [ebp - 8], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B070E; /* 0x171B0709: jae 0x171b070e */
L_171B070B:
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B070B: mov dword ptr [ebp - 4], ecx */
L_171B070E:
    PUSH32(esp, 0x10u); /* 0x171B070E: push 0x10 */
    eax = POP32_VAL(esp); /* 0x171B0710: pop eax */
L_171B0711:
    /* cmp MEM32(ebp + eax * 4 + (-0x88)), esi */ /* 0x171B0711: cmp dword ptr [ebp + eax*4 - 0x88], esi */
    _flag_a = (uint32_t)(MEM32(ebp + eax * 4 + (-0x88))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B071D; /* 0x171B0718: jne 0x171b071d */
L_171B071A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B071A: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B0711; /* 0x171B071B: jne 0x171b0711 */
L_171B071D:
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x171B071D: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = eax; /* 0x171B0720: mov dword ptr [ebp - 0x20], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B0728; /* 0x171B0723: jbe 0x171b0728 */
L_171B0725:
    MEM32(ebp + (-0x4)) = eax; /* 0x171B0725: mov dword ptr [ebp - 4], eax */
L_171B0728:
    edi = MEM32(ebp + (-0x4)); /* 0x171B0728: mov edi, dword ptr [ebp - 4] */
    MEM32(ebx) = edi; /* 0x171B072B: mov dword ptr [ebx], edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B072D: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B072D: shl edx, cl */
    goto L_171B0741; /* 0x171B072F: jmp 0x171b0741 */
L_171B0731:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + ecx * 4 + (-0x88)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + ecx * 4 + (-0x88)); /* 0x171B0731: sub edx, dword ptr [ebp + ecx*4 - 0x88] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_171B07F7; /* 0x171B0738: js 0x171b07f7 */
L_171B073E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B073E: inc ecx */
    _flag_k = FK_INC;
    if (1u) _cf = (((edx) >> 31) & 1u); /* 0x171B073F: shl edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 1u; /* 0x171B073F: shl edx, 1 */
L_171B0741:
    /* cmp ecx, eax */ /* 0x171B0741: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0731; /* 0x171B0743: jb 0x171b0731 */
L_171B0745:
    ecx = ebp + eax * 4 + (-0x88); /* 0x171B0745: lea ecx, [ebp + eax*4 - 0x88] */
    edi = MEM32(ecx); /* 0x171B074C: mov edi, dword ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x171B074E: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x44)) = edx; /* 0x171B0750: mov dword ptr [ebp - 0x44], edx */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_171B07F7; /* 0x171B0753: js 0x171b07f7 */
L_171B0759:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171B0759: add edi, edx */
    _flag_k = FK_ADD;
    MEM32(ecx) = edi; /* 0x171B075B: mov dword ptr [ecx], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B075D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B075F: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC8)) = esi; /* 0x171B0760: mov dword ptr [ebp - 0xc8], esi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B077E; /* 0x171B0766: je 0x171b077e */
L_171B0768:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B0768: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B076A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + edi + (-0x84)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + edi + (-0x84)); /* 0x171B076A: add ecx, dword ptr [ebp + edi - 0x84] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171B0771: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B0774: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + edi + (-0xC8)) = ecx; /* 0x171B0775: mov dword ptr [ebp + edi - 0xc8], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B076A; /* 0x171B077C: jne 0x171b076a */
L_171B077E:
    ebx = MEM32(ebp + 0x8); /* 0x171B077E: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B0781: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0783:
    eax = MEM32(ebx); /* 0x171B0783: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171B0785: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x171B0788: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B079F; /* 0x171B078A: je 0x171b079f */
L_171B078C:
    eax = ebp + eax * 4 + (-0xCC); /* 0x171B078C: lea eax, [ebp + eax*4 - 0xcc] */
    ecx = MEM32(eax); /* 0x171B0793: mov ecx, dword ptr [eax] */
    MEM32(ebp + ecx * 4 + (-0x58C)) = edi; /* 0x171B0795: mov dword ptr [ebp + ecx*4 - 0x58c], edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B079C: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax) = ecx; /* 0x171B079D: mov dword ptr [eax], ecx */
L_171B079F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B079F: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x171B07A0: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0783; /* 0x171B07A3: jb 0x171b0783 */
L_171B07A5:
    ebx = MEM32(ebp + (-0x4)); /* 0x171B07A5: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0xC)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) | 0xFFFFFFFFu; /* 0x171B07A8: or dword ptr [ebp - 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x58C); /* 0x171B07AC: lea eax, [ebp - 0x58c] */
    MEM32(ebp + 0x8) = eax; /* 0x171B07B2: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x171B07B5: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x171B07B8: neg ebx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x171B07BA: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = esi; /* 0x171B07BD: mov dword ptr [ebp - 0x30], esi */
    MEM32(ebp + (-0xCC)) = esi; /* 0x171B07C0: mov dword ptr [ebp - 0xcc], esi */
    MEM32(ebp + (-0x10C)) = esi; /* 0x171B07C6: mov dword ptr [ebp - 0x10c], esi */
    MEM32(ebp + (-0x34)) = esi; /* 0x171B07CC: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x18)) = esi; /* 0x171B07CF: mov dword ptr [ebp - 0x18], esi */
    if (CMP_G(_flag_a, _flag_b)) goto L_171B09E3; /* 0x171B07D2: jg 0x171b09e3 */
L_171B07D8:
    ecx = eax + (-0x1); /* 0x171B07D8: lea ecx, [eax - 1] */
    eax = ebp + eax * 4 + (-0x88); /* 0x171B07DB: lea eax, [ebp + eax*4 - 0x88] */
    MEM32(ebp + (-0x28)) = ecx; /* 0x171B07E2: mov dword ptr [ebp - 0x28], ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171B07E5: mov dword ptr [ebp - 0x1c], eax */
L_171B07E8:
    eax = MEM32(ebp + (-0x1C)); /* 0x171B07E8: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax); /* 0x171B07EB: mov eax, dword ptr [eax] */
    /* cmp eax, esi */ /* 0x171B07ED: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B09CD; /* 0x171B07EF: je 0x171b09cd */
L_171B07F5:
    goto L_171B0801; /* 0x171B07F5: jmp 0x171b0801 */
L_171B07F7:
    PUSH32(esp, 2); /* 0x171B07F7: push 2 */
    goto L_171B09FA; /* 0x171B07F9: jmp 0x171b09fa */
L_171B07FE:
    eax = MEM32(ebp + (-0x24)); /* 0x171B07FE: mov eax, dword ptr [ebp - 0x24] */
L_171B0801:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B0801: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B0804: dec eax */
    _flag_k = FK_DEC;
    esi = ebx + ecx; /* 0x171B0805: lea esi, [ebx + ecx] */
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x171B0808: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = eax; /* 0x171B080B: mov dword ptr [ebp - 0x24], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B08E8; /* 0x171B080E: jle 0x171b08e8 */
L_171B0814:
    MEM32(ebp + (-0x2C)) = esi; /* 0x171B0814: mov dword ptr [ebp - 0x2c], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0817: inc eax */
    _flag_k = FK_INC;
    esi = ebx; /* 0x171B0818: mov esi, ebx */
    MEM32(ebp + (-0x40)) = eax; /* 0x171B081A: mov dword ptr [ebp - 0x40], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x171B081D: sub esi, ecx */
    _flag_k = FK_CMP;
L_171B081F:
    eax = MEM32(ebp + (-0x4)); /* 0x171B081F: mov eax, dword ptr [ebp - 4] */
    edi = (uint32_t)MEM16(ebp + (-0x20)); /* 0x171B0822: movzx edi, word ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x171B0826: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x171B0829: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x171B082C: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x171B082E: sub edi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171B0830: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x171B0832: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B0839; /* 0x171B0834: jbe 0x171b0839 */
L_171B0836:
    edi = (uint32_t)LO16(eax); /* 0x171B0836: movzx edi, ax */
L_171B0839:
    ecx = MEM32(ebp + (-0x8)); /* 0x171B0839: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B083C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171B083E: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0840: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0841: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B0841: shl eax, cl */
    /* cmp eax, MEM32(ebp + (-0x40)) */ /* 0x171B0843: cmp eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B0872; /* 0x171B0846: jbe 0x171b0872 */
L_171B0848:
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x171B0848: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x24)); /* 0x171B084B: sub edx, dword ptr [ebp - 0x24] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B084E: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x1C)); /* 0x171B0850: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B0853: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x171B0854: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0872; /* 0x171B0856: jae 0x171b0872 */
L_171B0858:
    goto L_171B085D; /* 0x171B0858: jmp 0x171b085d */
L_171B085A:
    edx = MEM32(ebp + (-0x18)); /* 0x171B085A: mov edx, dword ptr [ebp - 0x18] */
L_171B085D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B085D: add edx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edx; /* 0x171B0860: mov dword ptr [ebp - 0x18], edx */
    edx = MEM32(edx); /* 0x171B0863: mov edx, dword ptr [edx] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x171B0865: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x171B0865: shl eax, 1 */
    /* cmp eax, edx */ /* 0x171B0867: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B0872; /* 0x171B0869: jbe 0x171b0872 */
L_171B086B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B086B: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B086D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edi */ /* 0x171B086E: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B085A; /* 0x171B0870: jb 0x171b085a */
L_171B0872:
    edi = MEM32(ebp + (-0x38)); /* 0x171B0872: mov edi, dword ptr [ebp - 0x38] */
    edx = MEM32(ebp + 0x1C); /* 0x171B0875: mov edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B0878: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B087A: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B087B: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B087B: shl eax, cl */
    edx = edx + edi * 8; /* 0x171B087D: lea edx, [edx + edi*8] */
    MEM32(ebp + (-0x34)) = edx; /* 0x171B0880: mov dword ptr [ebp - 0x34], edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171B0883: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + 0x20) */ /* 0x171B0885: cmp edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x171B0888: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x38)) = edi; /* 0x171B088B: mov dword ptr [ebp - 0x38], edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171B09F8; /* 0x171B088E: ja 0x171b09f8 */
L_171B0894:
    eax = MEM32(ebp + (-0xC)); /* 0x171B0894: mov eax, dword ptr [ebp - 0xc] */
    edi = eax; /* 0x171B0897: mov edi, eax */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x171B0899: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x171B0899: shl edi, 2 */
    /* test eax, eax */ /* 0x171B089C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x3C)) = edi; /* 0x171B089E: mov dword ptr [ebp - 0x3c], edi */
    edi = ebp + edi + (-0x10C); /* 0x171B08A1: lea edi, [ebp + edi - 0x10c] */
    MEM32(edi) = edx; /* 0x171B08A8: mov dword ptr [edi], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B08DC; /* 0x171B08AA: je 0x171b08dc */
L_171B08AC:
    eax = MEM32(ebp + (-0x3C)); /* 0x171B08AC: mov eax, dword ptr [ebp - 0x3c] */
    edx = MEM32(ebp + (-0x30)); /* 0x171B08AF: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + 0x10u); /* 0x171B08B2: add cl, 0x10 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(ecx)); /* 0x171B08B5: mov byte ptr [ebp - 0x14], cl */
    MEM32(ebp + eax + (-0xCC)) = edx; /* 0x171B08B8: mov dword ptr [ebp + eax - 0xcc], edx */
    SET_LO8(eax, MEM8(ebp + (-0x4))); /* 0x171B08BF: mov al, byte ptr [ebp - 4] */
    ecx = esi; /* 0x171B08C2: mov ecx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B08C4: shr edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> ((LO8(ecx)) & 31); /* 0x171B08C4: shr edx, cl */
    ecx = MEM32(edi + (-0x4)); /* 0x171B08C6: mov ecx, dword ptr [edi - 4] */
    MEM8(ebp + (-0x13)) = (uint8_t)(LO8(eax)); /* 0x171B08C9: mov byte ptr [ebp - 0x13], al */
    edi = MEM32(ebp + (-0x14)); /* 0x171B08CC: mov edi, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x34)); /* 0x171B08CF: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ecx + edx * 8) = edi; /* 0x171B08D2: mov dword ptr [ecx + edx*8], edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x171B08D5: mov dword ptr [ebp - 0x10], eax */
    MEM32(ecx + edx * 8 + 0x4) = eax; /* 0x171B08D8: mov dword ptr [ecx + edx*8 + 4], eax */
L_171B08DC:
    eax = MEM32(ebp + (-0x8)); /* 0x171B08DC: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x171B08DF: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_171B081F; /* 0x171B08E2: jg 0x171b081f */
L_171B08E8:
    ecx = MEM32(ebp + (-0x8)); /* 0x171B08E8: mov ecx, dword ptr [ebp - 8] */
    SET_LO8(eax, LO8(ecx)); /* 0x171B08EB: mov al, cl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - LO8(ebx)); /* 0x171B08ED: sub al, bl */
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x13)) = (uint8_t)(LO8(eax)); /* 0x171B08EF: mov byte ptr [ebp - 0x13], al */
    eax = MEM32(ebp + 0xC); /* 0x171B08F2: mov eax, dword ptr [ebp + 0xc] */
    eax = ebp + eax * 4 + (-0x58C); /* 0x171B08F5: lea eax, [ebp + eax*4 - 0x58c] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x171B08FC: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0907; /* 0x171B08FF: jb 0x171b0907 */
L_171B0901:
    MEM8(ebp + (-0x14)) = (uint8_t)(0x63u); /* 0x171B0901: mov byte ptr [ebp - 0x14], 0x63 */
    goto L_171B0943; /* 0x171B0905: jmp 0x171b0943 */
L_171B0907:
    eax = MEM32(ebp + 0x8); /* 0x171B0907: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x171B090A: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x171B090C: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0926; /* 0x171B090F: jae 0x171b0926 */
L_171B0911:
    /* cmp eax, 0x100u */ /* 0x171B0911: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_B(_flag_a, _flag_b)) ? 1 : 0); /* 0x171B0916: setb al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFu) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0xFu); /* 0x171B0919: add al, 0xf */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(eax)); /* 0x171B091B: mov byte ptr [ebp - 0x14], al */
    eax = MEM32(ebp + 0x8); /* 0x171B091E: mov eax, dword ptr [ebp + 8] */
    SET_LO16(eax, MEM16(eax)); /* 0x171B0921: mov ax, word ptr [eax] */
    goto L_171B093B; /* 0x171B0924: jmp 0x171b093b */
L_171B0926:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x10); /* 0x171B0926: sub eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x18); /* 0x171B0929: mov edx, dword ptr [ebp + 0x18] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x171B092C: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x171B092C: shl eax, 1 */
    SET_LO8(edx, MEM8(eax + edx)); /* 0x171B092E: mov dl, byte ptr [eax + edx] */
    MEM8(ebp + (-0x14)) = (uint8_t)(LO8(edx)); /* 0x171B0931: mov byte ptr [ebp - 0x14], dl */
    edx = MEM32(ebp + 0x14); /* 0x171B0934: mov edx, dword ptr [ebp + 0x14] */
    SET_LO16(eax, MEM16(eax + edx)); /* 0x171B0937: mov ax, word ptr [eax + edx] */
L_171B093B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x171B093B: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x10)) = (uint16_t)(LO16(eax)); /* 0x171B093F: mov word ptr [ebp - 0x10], ax */
L_171B0943:
    esi = MEM32(ebp + (-0x30)); /* 0x171B0943: mov esi, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B0946: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171B0948: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B094A: inc edx */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B094B: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B094B: shl edx, cl */
    eax = esi; /* 0x171B094D: mov eax, esi */
    ecx = ebx; /* 0x171B094F: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B0951: shr eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> ((LO8(ecx)) & 31); /* 0x171B0951: shr eax, cl */
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x171B0953: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0977; /* 0x171B0956: jae 0x171b0977 */
L_171B0958:
    ecx = MEM32(ebp + (-0x34)); /* 0x171B0958: mov ecx, dword ptr [ebp - 0x34] */
    ecx = ecx + eax * 8; /* 0x171B095B: lea ecx, [ecx + eax*8] */
L_171B095E:
    edi = MEM32(ebp + (-0x14)); /* 0x171B095E: mov edi, dword ptr [ebp - 0x14] */
    MEM32(ecx) = edi; /* 0x171B0961: mov dword ptr [ecx], edi */
    edi = MEM32(ebp + (-0x10)); /* 0x171B0963: mov edi, dword ptr [ebp - 0x10] */
    MEM32(ecx + 0x4) = edi; /* 0x171B0966: mov dword ptr [ecx + 4], edi */
    edi = edx; /* 0x171B0969: mov edi, edx */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x171B096B: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x171B096B: shl edi, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B096E: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171B0970: add ecx, edi */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x18)) */ /* 0x171B0972: cmp eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B095E; /* 0x171B0975: jb 0x171b095e */
L_171B0977:
    ecx = MEM32(ebp + (-0x28)); /* 0x171B0977: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B097A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B097C: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B097D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B097D: shl eax, cl */
    goto L_171B0985; /* 0x171B097F: jmp 0x171b0985 */
L_171B0981:
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x171B0981: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x171B0983: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x171B0983: shr eax, 1 */
L_171B0985:
    /* test esi, eax */ /* 0x171B0985: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B0981; /* 0x171B0987: jne 0x171b0981 */
L_171B0989:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B0989: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B098B: inc edx */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x171B098C: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B098E: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B098E: shl edx, cl */
    _flag_a = (uint32_t)((esi ^ eax)); _flag_b = (uint32_t)((esi ^ eax));
    esi = esi ^ eax; /* 0x171B0990: xor esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0xC)); /* 0x171B0992: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x30)) = esi; /* 0x171B0995: mov dword ptr [ebp - 0x30], esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B0998: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x171B0999: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + eax * 4 + (-0xCC)) */ /* 0x171B099B: cmp edx, dword ptr [ebp + eax*4 - 0xcc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + eax * 4 + (-0xCC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B09BE; /* 0x171B09A2: je 0x171b09be */
L_171B09A4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x4)); /* 0x171B09A4: sub ebx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B09A7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B09A9: inc edx */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x171B09AA: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B09AC: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171B09AC: shl edx, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B09AE: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171B09AF: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x171B09B0: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(ebp + eax * 4 + (-0xCC)) */ /* 0x171B09B2: cmp edx, dword ptr [ebp + eax*4 - 0xcc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + eax * 4 + (-0xCC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B09A4; /* 0x171B09B9: jne 0x171b09a4 */
L_171B09BB:
    MEM32(ebp + (-0xC)) = eax; /* 0x171B09BB: mov dword ptr [ebp - 0xc], eax */
L_171B09BE:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x171B09BE: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B07FE; /* 0x171B09C2: jne 0x171b07fe */
L_171B09C8:
    edx = MEM32(ebp + (-0x44)); /* 0x171B09C8: mov edx, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171B09CB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B09CD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171B09CD: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 4; /* 0x171B09D0: add dword ptr [ebp - 0x1c], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x171B09D4: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 1; /* 0x171B09D7: inc dword ptr [ebp - 0x28] */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x171B09DA: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B07E8; /* 0x171B09DD: jle 0x171b07e8 */
L_171B09E3:
    /* cmp edx, esi */ /* 0x171B09E3: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B09EF; /* 0x171B09E5: je 0x171b09ef */
L_171B09E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B09E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B09E9: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x171B09EA: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B09F1; /* 0x171B09ED: jne 0x171b09f1 */
L_171B09EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B09EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B09F1:
    edi = POP32_VAL(esp); /* 0x171B09F1: pop edi */
    esi = POP32_VAL(esp); /* 0x171B09F2: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B09F3: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171B09F4: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171B09F5: ret 0x1c */
L_171B09F8:
    PUSH32(esp, 3); /* 0x171B09F8: push 3 */
L_171B09FA:
    eax = POP32_VAL(esp); /* 0x171B09FA: pop eax */
    RECOMP_BACKEDGE();
    goto L_171B09F1; /* 0x171B09FB: jmp 0x171b09f1 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171B0A02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B0A02u);

L_171B0A02:
    edi = edi; /* 0x171B0A02: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B0A04: push ebp */
    ebp = esp; /* 0x171B0A05: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171B0A07: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM16(ebp + 0x18), 0 */ /* 0x171B0A0A: cmp word ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM16(ebp + 0x18)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(ebp + 0x10); /* 0x171B0A0F: mov ecx, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)MEM16(ecx * 2 + 0x17238B3C); /* 0x171B0A12: movzx ecx, word ptr [ecx*2 + 0x17238b3c] */
    eax = MEM32(edx + 0x24); /* 0x171B0A1A: mov eax, dword ptr [edx + 0x24] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B0A1D: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171B0A20: mov ecx, dword ptr [ebp + 0x14] */
    ecx = (uint32_t)MEM16(ecx * 2 + 0x17238B3C); /* 0x171B0A23: movzx ecx, word ptr [ecx*2 + 0x17238b3c] */
    PUSH32(esp, ebx); /* 0x171B0A2B: push ebx */
    PUSH32(esp, esi); /* 0x171B0A2C: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B0A2D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edx + 0x28); /* 0x171B0A30: mov eax, dword ptr [edx + 0x28] */
    PUSH32(esp, edi); /* 0x171B0A33: push edi */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171B0A34: mov dword ptr [ebp - 0xc], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0A4E; /* 0x171B0A37: je 0x171b0a4e */
L_171B0A39:
    /* cmp MEM16(edx + 0x48), 0 */ /* 0x171B0A39: cmp word ptr [edx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM16(edx + 0x48)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0A4E; /* 0x171B0A3E: je 0x171b0a4e */
L_171B0A40:
    esi = MEM32(edx + 0x50); /* 0x171B0A40: mov esi, dword ptr [edx + 0x50] */
    ecx = MEM32(edx + 0x4C); /* 0x171B0A43: mov ecx, dword ptr [edx + 0x4c] */
    MEM32(ebp + 0x18) = esi; /* 0x171B0A46: mov dword ptr [ebp + 0x18], esi */
    goto L_171B0D09; /* 0x171B0A49: jmp 0x171b0d09 */
L_171B0A4E:
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x171B0A4E: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0A87; /* 0x171B0A51: jae 0x171b0a87 */
L_171B0A53:
    edi = MEM32(edx + 0x14); /* 0x171B0A53: mov edi, dword ptr [edx + 0x14] */
L_171B0A56:
    esi = MEM32(edx + 0x18); /* 0x171B0A56: mov esi, dword ptr [edx + 0x18] */
    /* cmp esi, edi */ /* 0x171B0A59: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0A6A; /* 0x171B0A5B: jae 0x171b0a6a */
L_171B0A5D:
    ecx = MEM32(edx + 0x8); /* 0x171B0A5D: mov ecx, dword ptr [edx + 8] */
    ecx = (uint32_t)MEM8(ecx + esi); /* 0x171B0A60: movzx ecx, byte ptr [ecx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B0A64: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = esi; /* 0x171B0A65: mov dword ptr [edx + 0x18], esi */
    goto L_171B0A75; /* 0x171B0A68: jmp 0x171b0a75 */
L_171B0A6A:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0A73; /* 0x171B0A6A: je 0x171b0a73 */
L_171B0A6C:
    MEM32(edx + 0x4) = 1; /* 0x171B0A6C: mov dword ptr [edx + 4], 1 */
L_171B0A73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0A73: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0A75:
    esi = (uint32_t)LO8(ecx); /* 0x171B0A75: movzx esi, cl */
    ecx = eax; /* 0x171B0A78: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0A7A: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B0A7A: shl esi, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171B0A7C: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | esi)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | esi));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | esi; /* 0x171B0A7F: or dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x171B0A82: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0A56; /* 0x171B0A85: jb 0x171b0a56 */
L_171B0A87:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x171B0A87: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0D14; /* 0x171B0A8B: jne 0x171b0d14 */
L_171B0A91:
    ecx = MEM32(ebp + (-0x8)); /* 0x171B0A91: mov ecx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x8); /* 0x171B0A94: mov esi, dword ptr [ebp + 8] */
    goto L_171B0AFC; /* 0x171B0A97: jmp 0x171b0afc */
L_171B0A99:
    /* cmp edi, 0x63u */ /* 0x171B0A99: cmp edi, 0x63 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0D14; /* 0x171B0A9C: je 0x171b0d14 */
L_171B0AA2:
    ecx = (uint32_t)MEM8(esi + 0x1); /* 0x171B0AA2: movzx ecx, byte ptr [esi + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B0AA6: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x171B0AA6: shr dword ptr [ebp - 4], cl */
    ecx = (uint32_t)MEM8(esi + 0x1); /* 0x171B0AA9: movzx ecx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B0AAD: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x10u; /* 0x171B0AAF: sub edi, 0x10 */
    _flag_k = FK_CMP;
    goto L_171B0AE3; /* 0x171B0AB2: jmp 0x171b0ae3 */
L_171B0AB4:
    ecx = MEM32(edx + 0x18); /* 0x171B0AB4: mov ecx, dword ptr [edx + 0x18] */
    ebx = MEM32(edx + 0x14); /* 0x171B0AB7: mov ebx, dword ptr [edx + 0x14] */
    /* cmp ecx, ebx */ /* 0x171B0ABA: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0ACB; /* 0x171B0ABC: jae 0x171b0acb */
L_171B0ABE:
    ebx = MEM32(edx + 0x8); /* 0x171B0ABE: mov ebx, dword ptr [edx + 8] */
    ebx = (uint32_t)MEM8(ebx + ecx); /* 0x171B0AC1: movzx ebx, byte ptr [ebx + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B0AC5: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = ecx; /* 0x171B0AC6: mov dword ptr [edx + 0x18], ecx */
    goto L_171B0AD6; /* 0x171B0AC9: jmp 0x171b0ad6 */
L_171B0ACB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0AD4; /* 0x171B0ACB: je 0x171b0ad4 */
L_171B0ACD:
    MEM32(edx + 0x4) = 1; /* 0x171B0ACD: mov dword ptr [edx + 4], 1 */
L_171B0AD4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B0AD4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0AD6:
    ebx = (uint32_t)LO8(ebx); /* 0x171B0AD6: movzx ebx, bl */
    ecx = eax; /* 0x171B0AD9: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0ADB: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x171B0ADB: shl ebx, cl */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | ebx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | ebx));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | ebx; /* 0x171B0ADD: or dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171B0AE0: add eax, 8 */
    _flag_k = FK_ADD;
L_171B0AE3:
    /* cmp eax, edi */ /* 0x171B0AE3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0AB4; /* 0x171B0AE5: jb 0x171b0ab4 */
L_171B0AE7:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x171B0AE7: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0D14; /* 0x171B0AEB: jne 0x171b0d14 */
L_171B0AF1:
    ecx = (uint32_t)MEM16(edi * 2 + 0x17238B3C); /* 0x171B0AF1: movzx ecx, word ptr [edi*2 + 0x17238b3c] */
    esi = MEM32(esi + 0x4); /* 0x171B0AF9: mov esi, dword ptr [esi + 4] */
L_171B0AFC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    ecx = ecx & MEM32(ebp + (-0x4)); /* 0x171B0AFC: and ecx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = esi + ecx * 8; /* 0x171B0AFF: lea esi, [esi + ecx*8] */
    edi = (uint32_t)MEM8(esi); /* 0x171B0B02: movzx edi, byte ptr [esi] */
    /* cmp edi, 0x10u */ /* 0x171B0B05: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171B0A99; /* 0x171B0B08: ja 0x171b0a99 */
L_171B0B0A:
    ecx = (uint32_t)MEM8(esi + 0x1); /* 0x171B0B0A: movzx ecx, byte ptr [esi + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B0B0E: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x171B0B0E: shr dword ptr [ebp - 4], cl */
    ecx = (uint32_t)MEM8(esi + 0x1); /* 0x171B0B11: movzx ecx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B0B15: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp edi, 0x10u */ /* 0x171B0B17: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0B52; /* 0x171B0B1A: jne 0x171b0b52 */
L_171B0B1C:
    SET_LO8(ebx, MEM8(esi + 0x4)); /* 0x171B0B1C: mov bl, byte ptr [esi + 4] */
    ecx = MEM32(edx + 0xC); /* 0x171B0B1F: mov ecx, dword ptr [edx + 0xc] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171B0B22: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + 1; /* 0x171B0B24: inc dword ptr [edx + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) - 1; /* 0x171B0B27: dec dword ptr [edx + 0x1c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B0A4E; /* 0x171B0B2A: jne 0x171b0a4e */
L_171B0B30:
    ecx = MEM32(ebp + 0x8); /* 0x171B0B30: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM16(edx + 0x48)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x48) = (uint16_t)(MEM16(edx + 0x48) & 0); /* 0x171B0B33: and word ptr [edx + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(edx + 0x38) = ecx; /* 0x171B0B38: mov dword ptr [edx + 0x38], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171B0B3B: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edx + 0x3C) = ecx; /* 0x171B0B3E: mov dword ptr [edx + 0x3c], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171B0B41: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edx + 0x40) = ecx; /* 0x171B0B44: mov dword ptr [edx + 0x40], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171B0B47: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x44) = ecx; /* 0x171B0B4A: mov dword ptr [edx + 0x44], ecx */
    goto L_171B0D40; /* 0x171B0B4D: jmp 0x171b0d40 */
L_171B0B52:
    /* cmp edi, 0xFu */ /* 0x171B0B52: cmp edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0D47; /* 0x171B0B55: je 0x171b0d47 */
L_171B0B5B:
    goto L_171B0B8C; /* 0x171B0B5B: jmp 0x171b0b8c */
L_171B0B5D:
    ecx = MEM32(edx + 0x18); /* 0x171B0B5D: mov ecx, dword ptr [edx + 0x18] */
    ebx = MEM32(edx + 0x14); /* 0x171B0B60: mov ebx, dword ptr [edx + 0x14] */
    /* cmp ecx, ebx */ /* 0x171B0B63: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0B74; /* 0x171B0B65: jae 0x171b0b74 */
L_171B0B67:
    ebx = MEM32(edx + 0x8); /* 0x171B0B67: mov ebx, dword ptr [edx + 8] */
    ebx = (uint32_t)MEM8(ebx + ecx); /* 0x171B0B6A: movzx ebx, byte ptr [ebx + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B0B6E: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = ecx; /* 0x171B0B6F: mov dword ptr [edx + 0x18], ecx */
    goto L_171B0B7F; /* 0x171B0B72: jmp 0x171b0b7f */
L_171B0B74:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0B7D; /* 0x171B0B74: je 0x171b0b7d */
L_171B0B76:
    MEM32(edx + 0x4) = 1; /* 0x171B0B76: mov dword ptr [edx + 4], 1 */
L_171B0B7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B0B7D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0B7F:
    ebx = (uint32_t)LO8(ebx); /* 0x171B0B7F: movzx ebx, bl */
    ecx = eax; /* 0x171B0B82: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0B84: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x171B0B84: shl ebx, cl */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | ebx)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | ebx));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | ebx; /* 0x171B0B86: or dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171B0B89: add eax, 8 */
    _flag_k = FK_ADD;
L_171B0B8C:
    /* cmp eax, edi */ /* 0x171B0B8C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0B5D; /* 0x171B0B8E: jb 0x171b0b5d */
L_171B0B90:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x171B0B90: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0D14; /* 0x171B0B94: jne 0x171b0d14 */
L_171B0B9A:
    ecx = (uint32_t)MEM16(edi * 2 + 0x17238B3C); /* 0x171B0B9A: movzx ecx, word ptr [edi*2 + 0x17238b3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    ecx = ecx & MEM32(ebp + (-0x4)); /* 0x171B0BA2: and ecx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = (uint32_t)MEM16(esi + 0x4); /* 0x171B0BA5: movzx esi, word ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171B0BA9: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = ecx; /* 0x171B0BAB: mov dword ptr [ebp + 0x18], ecx */
    ecx = edi; /* 0x171B0BAE: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B0BB0: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x171B0BB0: shr dword ptr [ebp - 4], cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171B0BB3: sub eax, edi */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x171B0BB5: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0BEE; /* 0x171B0BB8: jae 0x171b0bee */
L_171B0BBA:
    edi = MEM32(edx + 0x14); /* 0x171B0BBA: mov edi, dword ptr [edx + 0x14] */
L_171B0BBD:
    esi = MEM32(edx + 0x18); /* 0x171B0BBD: mov esi, dword ptr [edx + 0x18] */
    /* cmp esi, edi */ /* 0x171B0BC0: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0BD1; /* 0x171B0BC2: jae 0x171b0bd1 */
L_171B0BC4:
    ecx = MEM32(edx + 0x8); /* 0x171B0BC4: mov ecx, dword ptr [edx + 8] */
    ecx = (uint32_t)MEM8(ecx + esi); /* 0x171B0BC7: movzx ecx, byte ptr [ecx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B0BCB: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = esi; /* 0x171B0BCC: mov dword ptr [edx + 0x18], esi */
    goto L_171B0BDC; /* 0x171B0BCF: jmp 0x171b0bdc */
L_171B0BD1:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0BDA; /* 0x171B0BD1: je 0x171b0bda */
L_171B0BD3:
    MEM32(edx + 0x4) = 1; /* 0x171B0BD3: mov dword ptr [edx + 4], 1 */
L_171B0BDA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0BDA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0BDC:
    esi = (uint32_t)LO8(ecx); /* 0x171B0BDC: movzx esi, cl */
    ecx = eax; /* 0x171B0BDF: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0BE1: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B0BE1: shl esi, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171B0BE3: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | esi)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | esi));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | esi; /* 0x171B0BE6: or dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x171B0BE9: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0BBD; /* 0x171B0BEC: jb 0x171b0bbd */
L_171B0BEE:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x171B0BEE: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0D14; /* 0x171B0BF2: jne 0x171b0d14 */
L_171B0BF8:
    ecx = MEM32(ebp + (-0xC)); /* 0x171B0BF8: mov ecx, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + 0xC); /* 0x171B0BFB: mov esi, dword ptr [ebp + 0xc] */
    goto L_171B0C63; /* 0x171B0BFE: jmp 0x171b0c63 */
L_171B0C00:
    /* cmp edi, 0x63u */ /* 0x171B0C00: cmp edi, 0x63 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x63u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B0D14; /* 0x171B0C03: je 0x171b0d14 */
L_171B0C09:
    ecx = (uint32_t)MEM8(ebx + 0x1); /* 0x171B0C09: movzx ecx, byte ptr [ebx + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B0C0D: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x171B0C0D: shr dword ptr [ebp - 4], cl */
    ecx = (uint32_t)MEM8(ebx + 0x1); /* 0x171B0C10: movzx ecx, byte ptr [ebx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B0C14: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x10u; /* 0x171B0C16: sub edi, 0x10 */
    _flag_k = FK_CMP;
    goto L_171B0C4A; /* 0x171B0C19: jmp 0x171b0c4a */
L_171B0C1B:
    esi = MEM32(edx + 0x18); /* 0x171B0C1B: mov esi, dword ptr [edx + 0x18] */
    ecx = MEM32(edx + 0x14); /* 0x171B0C1E: mov ecx, dword ptr [edx + 0x14] */
    /* cmp esi, ecx */ /* 0x171B0C21: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0C32; /* 0x171B0C23: jae 0x171b0c32 */
L_171B0C25:
    ecx = MEM32(edx + 0x8); /* 0x171B0C25: mov ecx, dword ptr [edx + 8] */
    ecx = (uint32_t)MEM8(ecx + esi); /* 0x171B0C28: movzx ecx, byte ptr [ecx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B0C2C: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = esi; /* 0x171B0C2D: mov dword ptr [edx + 0x18], esi */
    goto L_171B0C3D; /* 0x171B0C30: jmp 0x171b0c3d */
L_171B0C32:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0C3B; /* 0x171B0C32: je 0x171b0c3b */
L_171B0C34:
    MEM32(edx + 0x4) = 1; /* 0x171B0C34: mov dword ptr [edx + 4], 1 */
L_171B0C3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0C3B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0C3D:
    esi = (uint32_t)LO8(ecx); /* 0x171B0C3D: movzx esi, cl */
    ecx = eax; /* 0x171B0C40: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0C42: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B0C42: shl esi, cl */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | esi)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | esi));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | esi; /* 0x171B0C44: or dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171B0C47: add eax, 8 */
    _flag_k = FK_ADD;
L_171B0C4A:
    /* cmp eax, edi */ /* 0x171B0C4A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0C1B; /* 0x171B0C4C: jb 0x171b0c1b */
L_171B0C4E:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x171B0C4E: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0D14; /* 0x171B0C52: jne 0x171b0d14 */
L_171B0C58:
    ecx = (uint32_t)MEM16(edi * 2 + 0x17238B3C); /* 0x171B0C58: movzx ecx, word ptr [edi*2 + 0x17238b3c] */
    esi = MEM32(ebx + 0x4); /* 0x171B0C60: mov esi, dword ptr [ebx + 4] */
L_171B0C63:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    ecx = ecx & MEM32(ebp + (-0x4)); /* 0x171B0C63: and ecx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi + ecx * 8; /* 0x171B0C66: lea ebx, [esi + ecx*8] */
    edi = (uint32_t)MEM8(ebx); /* 0x171B0C69: movzx edi, byte ptr [ebx] */
    /* cmp edi, 0x10u */ /* 0x171B0C6C: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171B0C00; /* 0x171B0C6F: ja 0x171b0c00 */
L_171B0C71:
    ecx = (uint32_t)MEM8(ebx + 0x1); /* 0x171B0C71: movzx ecx, byte ptr [ebx + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B0C75: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x171B0C75: shr dword ptr [ebp - 4], cl */
    ecx = (uint32_t)MEM8(ebx + 0x1); /* 0x171B0C78: movzx ecx, byte ptr [ebx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171B0C7C: sub eax, ecx */
    _flag_k = FK_CMP;
    goto L_171B0CAF; /* 0x171B0C7E: jmp 0x171b0caf */
L_171B0C80:
    esi = MEM32(edx + 0x18); /* 0x171B0C80: mov esi, dword ptr [edx + 0x18] */
    ecx = MEM32(edx + 0x14); /* 0x171B0C83: mov ecx, dword ptr [edx + 0x14] */
    /* cmp esi, ecx */ /* 0x171B0C86: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0C97; /* 0x171B0C88: jae 0x171b0c97 */
L_171B0C8A:
    ecx = MEM32(edx + 0x8); /* 0x171B0C8A: mov ecx, dword ptr [edx + 8] */
    ecx = (uint32_t)MEM8(ecx + esi); /* 0x171B0C8D: movzx ecx, byte ptr [ecx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B0C91: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = esi; /* 0x171B0C92: mov dword ptr [edx + 0x18], esi */
    goto L_171B0CA2; /* 0x171B0C95: jmp 0x171b0ca2 */
L_171B0C97:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0CA0; /* 0x171B0C97: je 0x171b0ca0 */
L_171B0C99:
    MEM32(edx + 0x4) = 1; /* 0x171B0C99: mov dword ptr [edx + 4], 1 */
L_171B0CA0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0CA0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0CA2:
    esi = (uint32_t)LO8(ecx); /* 0x171B0CA2: movzx esi, cl */
    ecx = eax; /* 0x171B0CA5: mov ecx, eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0CA7: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B0CA7: shl esi, cl */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | esi)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | esi));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | esi; /* 0x171B0CA9: or dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171B0CAC: add eax, 8 */
    _flag_k = FK_ADD;
L_171B0CAF:
    /* cmp eax, edi */ /* 0x171B0CAF: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0C80; /* 0x171B0CB1: jb 0x171b0c80 */
L_171B0CB3:
    /* cmp MEM32(edx + 0x4), 0 */ /* 0x171B0CB3: cmp dword ptr [edx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0D14; /* 0x171B0CB7: jne 0x171b0d14 */
L_171B0CB9:
    esi = (uint32_t)MEM16(edi * 2 + 0x17238B3C); /* 0x171B0CB9: movzx esi, word ptr [edi*2 + 0x17238b3c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    esi = esi & MEM32(ebp + (-0x4)); /* 0x171B0CC1: and esi, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)MEM16(ebx + 0x4); /* 0x171B0CC4: movzx ecx, word ptr [ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171B0CC8: add esi, ecx */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x171B0CCA: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B0CCC: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x171B0CCC: shr dword ptr [ebp - 4], cl */
    ecx = MEM32(edx + 0xC); /* 0x171B0CCF: mov ecx, dword ptr [edx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x171B0CD2: sub eax, edi */
    _flag_k = FK_CMP;
    edi = ecx; /* 0x171B0CD4: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(edx + 0x10); /* 0x171B0CD6: sub edi, dword ptr [edx + 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171B0CD9: sub ecx, esi */
    _flag_k = FK_CMP;
    /* cmp esi, edi */ /* 0x171B0CDB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B0D09; /* 0x171B0CDD: jbe 0x171b0d09 */
L_171B0CDF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x8000u; /* 0x171B0CDF: add ecx, 0x8000 */
    _flag_k = FK_ADD;
    goto L_171B0D09; /* 0x171B0CE5: jmp 0x171b0d09 */
L_171B0CE7:
    esi = MEM32(edx + 0xC); /* 0x171B0CE7: mov esi, dword ptr [edx + 0xc] */
    SET_LO8(ebx, MEM8(ecx)); /* 0x171B0CEA: mov bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1; /* 0x171B0CEC: dec dword ptr [ebp + 0x18] */
    _flag_k = FK_DEC;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x171B0CEF: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + 1; /* 0x171B0CF1: inc dword ptr [edx + 0xc] */
    _flag_k = FK_INC;
    esi = MEM32(edx + 0x10); /* 0x171B0CF4: mov esi, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B0CF7: inc ecx */
    _flag_k = FK_INC;
    edi = esi + 0x8000; /* 0x171B0CF8: lea edi, [esi + 0x8000] */
    /* cmp ecx, edi */ /* 0x171B0CFE: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0D04; /* 0x171B0D00: jne 0x171b0d04 */
L_171B0D02:
    ecx = esi; /* 0x171B0D02: mov ecx, esi */
L_171B0D04:
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) - 1; /* 0x171B0D04: dec dword ptr [edx + 0x1c] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B0D19; /* 0x171B0D07: je 0x171b0d19 */
L_171B0D09:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x171B0D09: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B0CE7; /* 0x171B0D0D: jne 0x171b0ce7 */
L_171B0D0F:
    RECOMP_BACKEDGE();
    goto L_171B0A4E; /* 0x171B0D0F: jmp 0x171b0a4e */
L_171B0D14:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B0D14: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0D16: inc eax */
    _flag_k = FK_INC;
    goto L_171B0D52; /* 0x171B0D17: jmp 0x171b0d52 */
L_171B0D19:
    esi = MEM32(ebp + 0x8); /* 0x171B0D19: mov esi, dword ptr [ebp + 8] */
    MEM32(edx + 0x38) = esi; /* 0x171B0D1C: mov dword ptr [edx + 0x38], esi */
    esi = MEM32(ebp + 0xC); /* 0x171B0D1F: mov esi, dword ptr [ebp + 0xc] */
    MEM32(edx + 0x3C) = esi; /* 0x171B0D22: mov dword ptr [edx + 0x3c], esi */
    esi = MEM32(ebp + 0x10); /* 0x171B0D25: mov esi, dword ptr [ebp + 0x10] */
    MEM32(edx + 0x40) = esi; /* 0x171B0D28: mov dword ptr [edx + 0x40], esi */
    esi = MEM32(ebp + 0x14); /* 0x171B0D2B: mov esi, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x4C) = ecx; /* 0x171B0D2E: mov dword ptr [edx + 0x4c], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x171B0D31: mov ecx, dword ptr [ebp + 0x18] */
    MEM16(edx + 0x48) = (uint16_t)(1); /* 0x171B0D34: mov word ptr [edx + 0x48], 1 */
    MEM32(edx + 0x44) = esi; /* 0x171B0D3A: mov dword ptr [edx + 0x44], esi */
    MEM32(edx + 0x50) = ecx; /* 0x171B0D3D: mov dword ptr [edx + 0x50], ecx */
L_171B0D40:
    MEM32(edx + 0x2C) = 2; /* 0x171B0D40: mov dword ptr [edx + 0x2c], 2 */
L_171B0D47:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B0D47: mov ecx, dword ptr [ebp - 4] */
    MEM32(edx + 0x28) = eax; /* 0x171B0D4A: mov dword ptr [edx + 0x28], eax */
    MEM32(edx + 0x24) = ecx; /* 0x171B0D4D: mov dword ptr [edx + 0x24], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B0D50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0D52:
    edi = POP32_VAL(esp); /* 0x171B0D52: pop edi */
    esi = POP32_VAL(esp); /* 0x171B0D53: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B0D54: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171B0D55: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B0D56: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171B0D5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B0D5Eu);

L_171B0D5E:
    edi = edi; /* 0x171B0D5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B0D60: push ebp */
    ebp = esp; /* 0x171B0D61: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x510u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x510u; /* 0x171B0D63: sub esp, 0x510 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171B0D69: push ebx */
    ebx = MEM32(esi + 0x28); /* 0x171B0D6A: mov ebx, dword ptr [esi + 0x28] */
    PUSH32(esp, edi); /* 0x171B0D6D: push edi */
    edi = MEM32(esi + 0x24); /* 0x171B0D6E: mov edi, dword ptr [esi + 0x24] */
    PUSH32(esp, 5); /* 0x171B0D71: push 5 */
    edx = POP32_VAL(esp); /* 0x171B0D73: pop edx */
    goto L_171B0DA4; /* 0x171B0D74: jmp 0x171b0da4 */
L_171B0D76:
    eax = MEM32(esi + 0x18); /* 0x171B0D76: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(esi + 0x14); /* 0x171B0D79: mov ecx, dword ptr [esi + 0x14] */
    /* cmp eax, ecx */ /* 0x171B0D7C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0D8D; /* 0x171B0D7E: jae 0x171b0d8d */
L_171B0D80:
    ecx = MEM32(esi + 0x8); /* 0x171B0D80: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)MEM8(ecx + eax); /* 0x171B0D83: movzx ecx, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0D87: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = eax; /* 0x171B0D88: mov dword ptr [esi + 0x18], eax */
    goto L_171B0D98; /* 0x171B0D8B: jmp 0x171b0d98 */
L_171B0D8D:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0D96; /* 0x171B0D8D: je 0x171b0d96 */
L_171B0D8F:
    MEM32(esi + 0x4) = 1; /* 0x171B0D8F: mov dword ptr [esi + 4], 1 */
L_171B0D96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0D96: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0D98:
    eax = (uint32_t)LO8(ecx); /* 0x171B0D98: movzx eax, cl */
    ecx = ebx; /* 0x171B0D9B: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0D9D: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B0D9D: shl eax, cl */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x171B0D9F: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B0DA1: add ebx, 8 */
    _flag_k = FK_ADD;
L_171B0DA4:
    /* cmp ebx, edx */ /* 0x171B0DA4: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0D76; /* 0x171B0DA6: jb 0x171b0d76 */
L_171B0DA8:
    eax = edi; /* 0x171B0DA8: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    eax = eax & 0x1Fu; /* 0x171B0DAA: and eax, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x101u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x101u; /* 0x171B0DAD: add eax, 0x101 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171B0DB2: sub ebx, edx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x171B0DB4: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x171B0DB4: shr edi, 5 */
    /* cmp ebx, edx */ /* 0x171B0DB7: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x171B0DB9: mov dword ptr [ebp - 0x14], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0DF1; /* 0x171B0DBC: jae 0x171b0df1 */
L_171B0DBE:
    edx = MEM32(esi + 0x14); /* 0x171B0DBE: mov edx, dword ptr [esi + 0x14] */
L_171B0DC1:
    eax = MEM32(esi + 0x18); /* 0x171B0DC1: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edx */ /* 0x171B0DC4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0DD5; /* 0x171B0DC6: jae 0x171b0dd5 */
L_171B0DC8:
    ecx = MEM32(esi + 0x8); /* 0x171B0DC8: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)MEM8(ecx + eax); /* 0x171B0DCB: movzx ecx, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0DCF: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = eax; /* 0x171B0DD0: mov dword ptr [esi + 0x18], eax */
    goto L_171B0DE0; /* 0x171B0DD3: jmp 0x171b0de0 */
L_171B0DD5:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0DDE; /* 0x171B0DD5: je 0x171b0dde */
L_171B0DD7:
    MEM32(esi + 0x4) = 1; /* 0x171B0DD7: mov dword ptr [esi + 4], 1 */
L_171B0DDE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0DDE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0DE0:
    eax = (uint32_t)LO8(ecx); /* 0x171B0DE0: movzx eax, cl */
    ecx = ebx; /* 0x171B0DE3: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0DE5: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B0DE5: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B0DE7: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x171B0DEA: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 5 */ /* 0x171B0DEC: cmp ebx, 5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0DC1; /* 0x171B0DEF: jb 0x171b0dc1 */
L_171B0DF1:
    edx = edi; /* 0x171B0DF1: mov edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    edx = edx & 0x1Fu; /* 0x171B0DF3: and edx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B0DF6: inc edx */
    _flag_k = FK_INC;
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x171B0DF7: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x171B0DF7: shr edi, 5 */
    MEM32(ebp + (-0x1C)) = edx; /* 0x171B0DFA: mov dword ptr [ebp - 0x1c], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 5; /* 0x171B0DFD: sub ebx, 5 */
    _flag_k = FK_CMP;
    goto L_171B0E30; /* 0x171B0E00: jmp 0x171b0e30 */
L_171B0E02:
    eax = MEM32(esi + 0x18); /* 0x171B0E02: mov eax, dword ptr [esi + 0x18] */
    ecx = MEM32(esi + 0x14); /* 0x171B0E05: mov ecx, dword ptr [esi + 0x14] */
    /* cmp eax, ecx */ /* 0x171B0E08: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0E19; /* 0x171B0E0A: jae 0x171b0e19 */
L_171B0E0C:
    ecx = MEM32(esi + 0x8); /* 0x171B0E0C: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)MEM8(ecx + eax); /* 0x171B0E0F: movzx ecx, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0E13: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = eax; /* 0x171B0E14: mov dword ptr [esi + 0x18], eax */
    goto L_171B0E24; /* 0x171B0E17: jmp 0x171b0e24 */
L_171B0E19:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0E22; /* 0x171B0E19: je 0x171b0e22 */
L_171B0E1B:
    MEM32(esi + 0x4) = 1; /* 0x171B0E1B: mov dword ptr [esi + 4], 1 */
L_171B0E22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0E22: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0E24:
    eax = (uint32_t)LO8(ecx); /* 0x171B0E24: movzx eax, cl */
    ecx = ebx; /* 0x171B0E27: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0E29: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B0E29: shl eax, cl */
    _flag_a = (uint32_t)((edi | eax)); _flag_b = (uint32_t)((edi | eax));
    edi = edi | eax; /* 0x171B0E2B: or edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B0E2D: add ebx, 8 */
    _flag_k = FK_ADD;
L_171B0E30:
    /* cmp ebx, 4 */ /* 0x171B0E30: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0E02; /* 0x171B0E33: jb 0x171b0e02 */
L_171B0E35:
    eax = edi; /* 0x171B0E35: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x171B0E37: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((edi) >> 3) & 1u); /* 0x171B0E3A: shr edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi >> 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 4u; /* 0x171B0E3A: shr edi, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B0E3D: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x171B0E40: sub ebx, 4 */
    _flag_k = FK_CMP;
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x171B0E43: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x171B0E47: mov dword ptr [ebp - 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B0E4A: jne 0x171b11ac */
L_171B0E50:
    /* cmp MEM32(ebp + (-0x14)), 0x11Eu */ /* 0x171B0E50: cmp dword ptr [ebp - 0x14], 0x11e */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x11Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B0E57: ja 0x171b11ac */
L_171B0E5D:
    /* cmp edx, 0x1Eu */ /* 0x171B0E5D: cmp edx, 0x1e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B0E60: ja 0x171b11ac */
L_171B0E66:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B0E66: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171B0E68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B0F34; /* 0x171B0E6A: ja 0x171b0f34 */
L_171B0E70:
    eax = MEM32(edx * 4 + 0x172389F8); /* 0x171B0E70: mov eax, dword ptr [edx*4 + 0x172389f8] */
    _flag_a = (uint32_t)(MEM32(ebp + eax * 4 + (-0x510))); _flag_b = (uint32_t)(0);
    MEM32(ebp + eax * 4 + (-0x510)) = MEM32(ebp + eax * 4 + (-0x510)) & 0; /* 0x171B0E77: and dword ptr [ebp + eax*4 - 0x510], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B0E7F: inc edx */
    _flag_k = FK_INC;
L_171B0E80:
    /* cmp edx, 0x13u */ /* 0x171B0E80: cmp edx, 0x13 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0E70; /* 0x171B0E83: jb 0x171b0e70 */
L_171B0E85:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x171B0E85: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B0E89: jne 0x171b11ac */
L_171B0E8F:
    PUSH32(esp, 0x320u); /* 0x171B0E8F: push 0x320 */
    eax = esi + 0x54; /* 0x171B0E94: lea eax, [esi + 0x54] */
    PUSH32(esp, eax); /* 0x171B0E97: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B0E98: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B0E9A: push edi */
    PUSH32(esp, edi); /* 0x171B0E9B: push edi */
    PUSH32(esp, 0x13u); /* 0x171B0E9C: push 0x13 */
    PUSH32(esp, 0x13u); /* 0x171B0E9E: push 0x13 */
    eax = ebp + (-0x510); /* 0x171B0EA0: lea eax, [ebp - 0x510] */
    PUSH32(esp, eax); /* 0x171B0EA6: push eax */
    eax = ebp + (-0x10); /* 0x171B0EA7: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 7; /* 0x171B0EAA: mov dword ptr [ebp - 0x10], 7 */
    RECOMP_CALL(sub_171B06A1); /* 0x171B0EB1: call 0x171b06a1 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171B0EB6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B11AF; /* 0x171B0EB8: jne 0x171b11af */
L_171B0EBE:
    ecx = MEM32(ebp + (-0x14)); /* 0x171B0EBE: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x1C)); /* 0x171B0EC1: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171B0EC4: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x171B0EC6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x171B0EC8: mov ecx, dword ptr [ebp - 0x10] */
    ecx = (uint32_t)MEM16(ecx * 2 + 0x17238B3C); /* 0x171B0ECB: movzx ecx, word ptr [ecx*2 + 0x17238b3c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171B0ED3: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x171B0ED6: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x171B0ED9: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x171B0EDC: mov dword ptr [ebp - 8], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B111A; /* 0x171B0EDF: jbe 0x171b111a */
L_171B0EE5:
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x171B0EE5: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0F7F; /* 0x171B0EE8: jae 0x171b0f7f */
L_171B0EEE:
    edx = MEM32(esi + 0x14); /* 0x171B0EEE: mov edx, dword ptr [esi + 0x14] */
L_171B0EF1:
    eax = MEM32(esi + 0x18); /* 0x171B0EF1: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edx */ /* 0x171B0EF4: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0F5E; /* 0x171B0EF6: jae 0x171b0f5e */
L_171B0EF8:
    ecx = MEM32(esi + 0x8); /* 0x171B0EF8: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)MEM8(ecx + eax); /* 0x171B0EFB: movzx ecx, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0EFF: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = eax; /* 0x171B0F00: mov dword ptr [esi + 0x18], eax */
    goto L_171B0F69; /* 0x171B0F03: jmp 0x171b0f69 */
L_171B0F05:
    edi = MEM32(esi + 0x18); /* 0x171B0F05: mov edi, dword ptr [esi + 0x18] */
    ecx = MEM32(esi + 0x14); /* 0x171B0F08: mov ecx, dword ptr [esi + 0x14] */
    /* cmp edi, ecx */ /* 0x171B0F0B: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0F1C; /* 0x171B0F0D: jae 0x171b0f1c */
L_171B0F0F:
    ecx = MEM32(esi + 0x8); /* 0x171B0F0F: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)MEM8(ecx + edi); /* 0x171B0F12: movzx ecx, byte ptr [ecx + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B0F16: inc edi */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = edi; /* 0x171B0F17: mov dword ptr [esi + 0x18], edi */
    goto L_171B0F27; /* 0x171B0F1A: jmp 0x171b0f27 */
L_171B0F1C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0F25; /* 0x171B0F1C: je 0x171b0f25 */
L_171B0F1E:
    MEM32(esi + 0x4) = 1; /* 0x171B0F1E: mov dword ptr [esi + 4], 1 */
L_171B0F25:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0F25: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0F27:
    edi = (uint32_t)LO8(ecx); /* 0x171B0F27: movzx edi, cl */
    ecx = ebx; /* 0x171B0F2A: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0F2C: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x171B0F2C: shl edi, cl */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | edi)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | edi));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | edi; /* 0x171B0F2E: or dword ptr [ebp - 4], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B0F31: add ebx, 8 */
    _flag_k = FK_ADD;
L_171B0F34:
    /* cmp ebx, 3 */ /* 0x171B0F34: cmp ebx, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0F05; /* 0x171B0F37: jb 0x171b0f05 */
L_171B0F39:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B0F39: mov ecx, dword ptr [ebp - 4] */
    edi = MEM32(edx * 4 + 0x172389F8); /* 0x171B0F3C: mov edi, dword ptr [edx*4 + 0x172389f8] */
    if (3u) _cf = (((MEM32(ebp + (-0x4))) >> 2) & 1u); /* 0x171B0F43: shr dword ptr [ebp - 4], 3 */
    if (3u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> 3u; /* 0x171B0F43: shr dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x171B0F47: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 3; /* 0x171B0F4A: sub ebx, 3 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B0F4D: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x171B0F4E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + edi * 4 + (-0x510)) = ecx; /* 0x171B0F50: mov dword ptr [ebp + edi*4 - 0x510], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0F34; /* 0x171B0F57: jb 0x171b0f34 */
L_171B0F59:
    RECOMP_BACKEDGE();
    goto L_171B0E80; /* 0x171B0F59: jmp 0x171b0e80 */
L_171B0F5E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0F67; /* 0x171B0F5E: je 0x171b0f67 */
L_171B0F60:
    MEM32(esi + 0x4) = 1; /* 0x171B0F60: mov dword ptr [esi + 4], 1 */
L_171B0F67:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0F67: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0F69:
    eax = (uint32_t)LO8(ecx); /* 0x171B0F69: movzx eax, cl */
    ecx = ebx; /* 0x171B0F6C: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0F6E: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B0F6E: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B0F70: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | eax; /* 0x171B0F73: or dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, MEM32(ebp + (-0x10)) */ /* 0x171B0F76: cmp ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0EF1; /* 0x171B0F79: jb 0x171b0ef1 */
L_171B0F7F:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x171B0F7F: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B0F83: jne 0x171b11ac */
L_171B0F89:
    eax = MEM32(ebp + (-0x20)); /* 0x171B0F89: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    eax = eax & MEM32(ebp + (-0x4)); /* 0x171B0F8C: and eax, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + eax * 8 + 0x54; /* 0x171B0F8F: lea edx, [esi + eax*8 + 0x54] */
    ecx = (uint32_t)MEM8(edx + 0x1); /* 0x171B0F93: movzx ecx, byte ptr [edx + 1] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((MEM32(ebp + (-0x4))) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B0F97: shr dword ptr [ebp - 4], cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> ((LO8(ecx)) & 31); /* 0x171B0F97: shr dword ptr [ebp - 4], cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171B0F9A: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)MEM16(edx + 0x4); /* 0x171B0F9C: movzx ecx, word ptr [edx + 4] */
    /* cmp ecx, 0x10u */ /* 0x171B0FA0: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0FBB; /* 0x171B0FA3: jae 0x171b0fbb */
L_171B0FA5:
    eax = MEM32(ebp + (-0x8)); /* 0x171B0FA5: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + eax * 4 + (-0x510)) = ecx; /* 0x171B0FA8: mov dword ptr [ebp + eax*4 - 0x510], ecx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x171B0FAF: mov dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0FB2: inc eax */
    _flag_k = FK_INC;
L_171B0FB3:
    MEM32(ebp + (-0x8)) = eax; /* 0x171B0FB3: mov dword ptr [ebp - 8], eax */
    goto L_171B1108; /* 0x171B0FB6: jmp 0x171b1108 */
L_171B0FBB:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171B1039; /* 0x171B0FBB: jne 0x171b1039 */
L_171B0FBD:
    /* cmp ebx, 2 */ /* 0x171B0FBD: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0FF6; /* 0x171B0FC0: jae 0x171b0ff6 */
L_171B0FC2:
    edx = MEM32(esi + 0x14); /* 0x171B0FC2: mov edx, dword ptr [esi + 0x14] */
L_171B0FC5:
    eax = MEM32(esi + 0x18); /* 0x171B0FC5: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edx */ /* 0x171B0FC8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B0FD9; /* 0x171B0FCA: jae 0x171b0fd9 */
L_171B0FCC:
    ecx = MEM32(esi + 0x8); /* 0x171B0FCC: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)MEM8(ecx + eax); /* 0x171B0FCF: movzx ecx, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B0FD3: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = eax; /* 0x171B0FD4: mov dword ptr [esi + 0x18], eax */
    goto L_171B0FE4; /* 0x171B0FD7: jmp 0x171b0fe4 */
L_171B0FD9:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B0FE2; /* 0x171B0FD9: je 0x171b0fe2 */
L_171B0FDB:
    MEM32(esi + 0x4) = 1; /* 0x171B0FDB: mov dword ptr [esi + 4], 1 */
L_171B0FE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B0FE2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B0FE4:
    eax = (uint32_t)LO8(ecx); /* 0x171B0FE4: movzx eax, cl */
    ecx = ebx; /* 0x171B0FE7: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B0FE9: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B0FE9: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B0FEB: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | eax; /* 0x171B0FEE: or dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 2 */ /* 0x171B0FF1: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0FC5; /* 0x171B0FF4: jb 0x171b0fc5 */
L_171B0FF6:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x171B0FF6: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B0FFA: jne 0x171b11ac */
L_171B1000:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B1000: mov ecx, dword ptr [ebp - 4] */
    if (2u) _cf = (((MEM32(ebp + (-0x4))) >> 1) & 1u); /* 0x171B1003: shr dword ptr [ebp - 4], 2 */
    if (2u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> 2u; /* 0x171B1003: shr dword ptr [ebp - 4], 2 */
    eax = MEM32(ebp + (-0x8)); /* 0x171B1007: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B100A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x171B100D: add ecx, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1010: dec ebx */
    _flag_k = FK_DEC;
    edx = eax + ecx; /* 0x171B1011: lea edx, [eax + ecx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1014: dec ebx */
    _flag_k = FK_DEC;
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x171B1015: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B1113; /* 0x171B1018: ja 0x171b1113 */
L_171B101E:
    /* test ecx, ecx */ /* 0x171B101E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1108; /* 0x171B1020: je 0x171b1108 */
L_171B1026:
    edi = ebp + eax * 4 + (-0x510); /* 0x171B1026: lea edi, [ebp + eax*4 - 0x510] */
    eax = MEM32(ebp + (-0x18)); /* 0x171B102D: mov eax, dword ptr [ebp - 0x18] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B1030: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = edx; /* 0x171B1032: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_171B0FB3; /* 0x171B1034: jmp 0x171b0fb3 */
L_171B1039:
    /* cmp ecx, 0x11u */ /* 0x171B1039: cmp ecx, 0x11 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1092; /* 0x171B103C: jne 0x171b1092 */
L_171B103E:
    PUSH32(esp, 3); /* 0x171B103E: push 3 */
    edi = POP32_VAL(esp); /* 0x171B1040: pop edi */
    /* cmp ebx, edi */ /* 0x171B1041: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B1078; /* 0x171B1043: jae 0x171b1078 */
L_171B1045:
    edx = MEM32(esi + 0x14); /* 0x171B1045: mov edx, dword ptr [esi + 0x14] */
L_171B1048:
    eax = MEM32(esi + 0x18); /* 0x171B1048: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edx */ /* 0x171B104B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B105C; /* 0x171B104D: jae 0x171b105c */
L_171B104F:
    ecx = MEM32(esi + 0x8); /* 0x171B104F: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)MEM8(ecx + eax); /* 0x171B1052: movzx ecx, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B1056: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = eax; /* 0x171B1057: mov dword ptr [esi + 0x18], eax */
    goto L_171B1067; /* 0x171B105A: jmp 0x171b1067 */
L_171B105C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B1065; /* 0x171B105C: je 0x171b1065 */
L_171B105E:
    MEM32(esi + 0x4) = 1; /* 0x171B105E: mov dword ptr [esi + 4], 1 */
L_171B1065:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B1065: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B1067:
    eax = (uint32_t)LO8(ecx); /* 0x171B1067: movzx eax, cl */
    ecx = ebx; /* 0x171B106A: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B106C: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B106C: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B106E: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | eax; /* 0x171B1071: or dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x171B1074: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B1048; /* 0x171B1076: jb 0x171b1048 */
L_171B1078:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x171B1078: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B107C: jne 0x171b11ac */
L_171B1082:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B1082: mov ecx, dword ptr [ebp - 4] */
    if (3u) _cf = (((MEM32(ebp + (-0x4))) >> 2) & 1u); /* 0x171B1085: shr dword ptr [ebp - 4], 3 */
    if (3u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> 3u; /* 0x171B1085: shr dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x171B1089: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171B108C: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x171B108E: sub ebx, edi */
    _flag_k = FK_CMP;
    goto L_171B10E5; /* 0x171B1090: jmp 0x171b10e5 */
L_171B1092:
    /* cmp ebx, 7 */ /* 0x171B1092: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B10CB; /* 0x171B1095: jae 0x171b10cb */
L_171B1097:
    edx = MEM32(esi + 0x14); /* 0x171B1097: mov edx, dword ptr [esi + 0x14] */
L_171B109A:
    eax = MEM32(esi + 0x18); /* 0x171B109A: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edx */ /* 0x171B109D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B10AE; /* 0x171B109F: jae 0x171b10ae */
L_171B10A1:
    ecx = MEM32(esi + 0x8); /* 0x171B10A1: mov ecx, dword ptr [esi + 8] */
    ecx = (uint32_t)MEM8(ecx + eax); /* 0x171B10A4: movzx ecx, byte ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B10A8: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x18) = eax; /* 0x171B10A9: mov dword ptr [esi + 0x18], eax */
    goto L_171B10B9; /* 0x171B10AC: jmp 0x171b10b9 */
L_171B10AE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B10B7; /* 0x171B10AE: je 0x171b10b7 */
L_171B10B0:
    MEM32(esi + 0x4) = 1; /* 0x171B10B0: mov dword ptr [esi + 4], 1 */
L_171B10B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B10B7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B10B9:
    eax = (uint32_t)LO8(ecx); /* 0x171B10B9: movzx eax, cl */
    ecx = ebx; /* 0x171B10BC: mov ecx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B10BE: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171B10BE: shl eax, cl */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x171B10C0: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | eax)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | eax));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | eax; /* 0x171B10C3: or dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, 7 */ /* 0x171B10C6: cmp ebx, 7 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B109A; /* 0x171B10C9: jb 0x171b109a */
L_171B10CB:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x171B10CB: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B10CF: jne 0x171b11ac */
L_171B10D5:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B10D5: mov ecx, dword ptr [ebp - 4] */
    if (7u) _cf = (((MEM32(ebp + (-0x4))) >> 6) & 1u); /* 0x171B10D8: shr dword ptr [ebp - 4], 7 */
    if (7u) { _flag_a = recomp_flags_pack((MEM32(ebp + (-0x4)) >> 7u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) >> 7u; /* 0x171B10D8: shr dword ptr [ebp - 4], 7 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7Fu);
    ecx = ecx & 0x7Fu; /* 0x171B10DC: and ecx, 0x7f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xBu; /* 0x171B10DF: add ecx, 0xb */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 7; /* 0x171B10E2: sub ebx, 7 */
    _flag_k = FK_CMP;
L_171B10E5:
    eax = MEM32(ebp + (-0x8)); /* 0x171B10E5: mov eax, dword ptr [ebp - 8] */
    edx = eax + ecx; /* 0x171B10E8: lea edx, [eax + ecx] */
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x171B10EB: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B1113; /* 0x171B10EE: ja 0x171b1113 */
L_171B10F0:
    /* test ecx, ecx */ /* 0x171B10F0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1104; /* 0x171B10F2: je 0x171b1104 */
L_171B10F4:
    edi = ebp + eax * 4 + (-0x510); /* 0x171B10F4: lea edi, [ebp + eax*4 - 0x510] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B10FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B10FD: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = edx; /* 0x171B10FF: mov eax, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x171B1101: mov dword ptr [ebp - 8], eax */
L_171B1104:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x171B1104: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B1108:
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x171B1108: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B0EE5; /* 0x171B110B: jb 0x171b0ee5 */
L_171B1111:
    goto L_171B111A; /* 0x171B1111: jmp 0x171b111a */
L_171B1113:
    MEM32(esi + 0x4) = 2; /* 0x171B1113: mov dword ptr [esi + 4], 2 */
L_171B111A:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x171B111A: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B11AC; /* 0x171B111E: jne 0x171b11ac */
L_171B1124:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1124: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x320u); /* 0x171B1127: push 0x320 */
    edi = esi + 0x54; /* 0x171B112C: lea edi, [esi + 0x54] */
    PUSH32(esp, edi); /* 0x171B112F: push edi */
    PUSH32(esp, 0x17238A84u); /* 0x171B1130: push 0x17238a84 */
    PUSH32(esp, 0x17238A44u); /* 0x171B1135: push 0x17238a44 */
    PUSH32(esp, 0x101u); /* 0x171B113A: push 0x101 */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171B113F: push dword ptr [ebp - 0x14] */
    MEM32(esi + 0x24) = eax; /* 0x171B1142: mov dword ptr [esi + 0x24], eax */
    eax = ebp + (-0x510); /* 0x171B1145: lea eax, [ebp - 0x510] */
    PUSH32(esp, eax); /* 0x171B114B: push eax */
    eax = ebp + (-0x10); /* 0x171B114C: lea eax, [ebp - 0x10] */
    MEM32(esi + 0x28) = ebx; /* 0x171B114F: mov dword ptr [esi + 0x28], ebx */
    MEM32(ebp + (-0x10)) = 9; /* 0x171B1152: mov dword ptr [ebp - 0x10], 9 */
    RECOMP_CALL(sub_171B06A1); /* 0x171B1159: call 0x171b06a1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B115E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B11AF; /* 0x171B1160: jne 0x171b11af */
L_171B1162:
    PUSH32(esp, 0x96u); /* 0x171B1162: push 0x96 */
    ebx = esi + 0x1954; /* 0x171B1167: lea ebx, [esi + 0x1954] */
    PUSH32(esp, ebx); /* 0x171B116D: push ebx */
    PUSH32(esp, 0x17238B00u); /* 0x171B116E: push 0x17238b00 */
    PUSH32(esp, 0x17238AC4u); /* 0x171B1173: push 0x17238ac4 */
    PUSH32(esp, eax); /* 0x171B1178: push eax */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x171B1179: push dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x14)); /* 0x171B117C: mov eax, dword ptr [ebp - 0x14] */
    eax = ebp + eax * 4 + (-0x510); /* 0x171B117F: lea eax, [ebp + eax*4 - 0x510] */
    PUSH32(esp, eax); /* 0x171B1186: push eax */
    eax = ebp + (-0xC); /* 0x171B1187: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 6; /* 0x171B118A: mov dword ptr [ebp - 0xc], 6 */
    RECOMP_CALL(sub_171B06A1); /* 0x171B1191: call 0x171b06a1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1196: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B11AF; /* 0x171B1198: jne 0x171b11af */
L_171B119A:
    PUSH32(esp, eax); /* 0x171B119A: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171B119B: push dword ptr [ebp - 0xc] */
    edx = esi; /* 0x171B119E: mov edx, esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x171B11A0: push dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x171B11A3: push ebx */
    PUSH32(esp, edi); /* 0x171B11A4: push edi */
    RECOMP_CALL(sub_171B0A02); /* 0x171B11A5: call 0x171b0a02 */
    RECOMP_FLAGS_IN();
    goto L_171B11AF; /* 0x171B11AA: jmp 0x171b11af */
L_171B11AC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B11AC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B11AE: inc eax */
    _flag_k = FK_INC;
L_171B11AF:
    edi = POP32_VAL(esp); /* 0x171B11AF: pop edi */
    ebx = POP32_VAL(esp); /* 0x171B11B0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171B11B1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B11B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B11B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B11B8u);

L_171B11B8:
    edi = edi; /* 0x171B11B8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B11BA: push ebp */
    ebp = esp; /* 0x171B11BB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x484u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x484u; /* 0x171B11BD: sub esp, 0x484 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B11C3: push edi */
    PUSH32(esp, 8); /* 0x171B11C4: push 8 */
    eax = POP32_VAL(esp); /* 0x171B11C6: pop eax */
    PUSH32(esp, 0x70u); /* 0x171B11C7: push 0x70 */
    ecx = 0x90u; /* 0x171B11C9: mov ecx, 0x90 */
    edi = ebp + (-0x484); /* 0x171B11CE: lea edi, [ebp - 0x484] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B11D4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = POP32_VAL(esp); /* 0x171B11D6: pop ecx */
    PUSH32(esp, 9); /* 0x171B11D7: push 9 */
    edx = POP32_VAL(esp); /* 0x171B11D9: pop edx */
    PUSH32(esp, 0x18u); /* 0x171B11DA: push 0x18 */
    eax = edx; /* 0x171B11DC: mov eax, edx */
    edi = ebp + (-0x244); /* 0x171B11DE: lea edi, [ebp - 0x244] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B11E4: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = POP32_VAL(esp); /* 0x171B11E6: pop ecx */
    PUSH32(esp, 7); /* 0x171B11E7: push 7 */
    eax = POP32_VAL(esp); /* 0x171B11E9: pop eax */
    PUSH32(esp, 8); /* 0x171B11EA: push 8 */
    edi = ebp + (-0x84); /* 0x171B11EC: lea edi, [ebp - 0x84] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B11F2: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = POP32_VAL(esp); /* 0x171B11F4: pop ecx */
    PUSH32(esp, ecx); /* 0x171B11F5: push ecx */
    eax = POP32_VAL(esp); /* 0x171B11F6: pop eax */
    PUSH32(esp, 0x208u); /* 0x171B11F7: push 0x208 */
    PUSH32(esp, 0x17253590u); /* 0x171B11FC: push 0x17253590 */
    PUSH32(esp, 0x17238A84u); /* 0x171B1201: push 0x17238a84 */
    PUSH32(esp, 0x17238A44u); /* 0x171B1206: push 0x17238a44 */
    PUSH32(esp, 0x101u); /* 0x171B120B: push 0x101 */
    edi = ebp + (-0x24); /* 0x171B1210: lea edi, [ebp - 0x24] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B1213: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, 0x120u); /* 0x171B1215: push 0x120 */
    eax = ebp + (-0x484); /* 0x171B121A: lea eax, [ebp - 0x484] */
    PUSH32(esp, eax); /* 0x171B1220: push eax */
    eax = ebp + (-0x4); /* 0x171B1221: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B1224: mov dword ptr [ebp - 4], edx */
    RECOMP_CALL(sub_171B06A1); /* 0x171B1227: call 0x171b06a1 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B122C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B126C; /* 0x171B122E: jne 0x171b126c */
L_171B1230:
    PUSH32(esp, 0x1Eu); /* 0x171B1230: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x171B1232: pop ecx */
    PUSH32(esp, 5); /* 0x171B1233: push 5 */
    eax = POP32_VAL(esp); /* 0x171B1235: pop eax */
    PUSH32(esp, 0x20u); /* 0x171B1236: push 0x20 */
    PUSH32(esp, 0x17253490u); /* 0x171B1238: push 0x17253490 */
    PUSH32(esp, 0x17238B00u); /* 0x171B123D: push 0x17238b00 */
    PUSH32(esp, 0x17238AC4u); /* 0x171B1242: push 0x17238ac4 */
    PUSH32(esp, 0); /* 0x171B1247: push 0 */
    edi = ebp + (-0x484); /* 0x171B1249: lea edi, [ebp - 0x484] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B124F: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    MEM32(ebp + (-0x4)) = eax; /* 0x171B1251: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, 0x1Eu); /* 0x171B1254: push 0x1e */
    eax = ebp + (-0x484); /* 0x171B1256: lea eax, [ebp - 0x484] */
    PUSH32(esp, eax); /* 0x171B125C: push eax */
    eax = ebp + (-0x4); /* 0x171B125D: lea eax, [ebp - 4] */
    RECOMP_CALL(sub_171B06A1); /* 0x171B1260: call 0x171b06a1 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x171B1265: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B126C; /* 0x171B1268: jg 0x171b126c */
L_171B126A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B126A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B126C:
    edi = POP32_VAL(esp); /* 0x171B126C: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171B126D: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B126E: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B1274(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1274u);

L_171B1274:
    edi = edi; /* 0x171B1274: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1276: push ebp */
    ebp = esp; /* 0x171B1277: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B1279: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B127A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + 0x8), LO16(eax) */ /* 0x171B127C: cmp word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, esi); /* 0x171B1280: push esi */
    PUSH32(esp, edi); /* 0x171B1281: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B128F; /* 0x171B1282: je 0x171b128f */
L_171B1284:
    esi = MEM32(edx + 0x34); /* 0x171B1284: mov esi, dword ptr [edx + 0x34] */
    ebx = MEM32(edx + 0x30); /* 0x171B1287: mov ebx, dword ptr [edx + 0x30] */
    MEM32(edx + 0x2C) = eax; /* 0x171B128A: mov dword ptr [edx + 0x2c], eax */
    goto L_171B12F6; /* 0x171B128D: jmp 0x171b12f6 */
L_171B128F:
    edi = MEM32(edx + 0x28); /* 0x171B128F: mov edi, dword ptr [edx + 0x28] */
    ebx = MEM32(edx + 0x24); /* 0x171B1292: mov ebx, dword ptr [edx + 0x24] */
    ecx = edi; /* 0x171B1295: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(7);
    ecx = ecx & 7; /* 0x171B1297: and ecx, 7 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x171B129A: shr ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> ((LO8(ecx)) & 31); /* 0x171B129A: shr ebx, cl */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171B129C: sub edi, ecx */
    _flag_k = FK_CMP;
    goto L_171B12CE; /* 0x171B129E: jmp 0x171b12ce */
L_171B12A0:
    esi = MEM32(edx + 0x18); /* 0x171B12A0: mov esi, dword ptr [edx + 0x18] */
    ecx = MEM32(edx + 0x14); /* 0x171B12A3: mov ecx, dword ptr [edx + 0x14] */
    /* cmp esi, ecx */ /* 0x171B12A6: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B12B7; /* 0x171B12A8: jae 0x171b12b7 */
L_171B12AA:
    ecx = MEM32(edx + 0x8); /* 0x171B12AA: mov ecx, dword ptr [edx + 8] */
    ecx = (uint32_t)MEM8(ecx + esi); /* 0x171B12AD: movzx ecx, byte ptr [ecx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B12B1: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = esi; /* 0x171B12B2: mov dword ptr [edx + 0x18], esi */
    goto L_171B12C2; /* 0x171B12B5: jmp 0x171b12c2 */
L_171B12B7:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B12C0; /* 0x171B12B7: je 0x171b12c0 */
L_171B12B9:
    MEM32(edx + 0x4) = 1; /* 0x171B12B9: mov dword ptr [edx + 4], 1 */
L_171B12C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B12C0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B12C2:
    esi = (uint32_t)LO8(ecx); /* 0x171B12C2: movzx esi, cl */
    ecx = edi; /* 0x171B12C5: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B12C7: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B12C7: shl esi, cl */
    _flag_a = (uint32_t)((ebx | esi)); _flag_b = (uint32_t)((ebx | esi));
    ebx = ebx | esi; /* 0x171B12C9: or ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x171B12CB: add edi, 8 */
    _flag_k = FK_ADD;
L_171B12CE:
    /* cmp edi, 0x10u */ /* 0x171B12CE: cmp edi, 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B12A0; /* 0x171B12D1: jb 0x171b12a0 */
L_171B12D3:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFu);
    ebx = ebx & 0xFFFFu; /* 0x171B12D3: and ebx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x4), eax */ /* 0x171B12D9: cmp dword ptr [edx + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B134D; /* 0x171B12DC: jne 0x171b134d */
L_171B12DE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xFFFFFFF0u; /* 0x171B12DE: add edi, -0x10 */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_171B134D; /* 0x171B12E1: jne 0x171b134d */
L_171B12E3:
    esi = MEM32(edx + 0x8); /* 0x171B12E3: mov esi, dword ptr [edx + 8] */
    MEM32(edx + 0x28) = eax; /* 0x171B12E6: mov dword ptr [edx + 0x28], eax */
    MEM32(edx + 0x24) = eax; /* 0x171B12E9: mov dword ptr [edx + 0x24], eax */
    eax = MEM32(edx + 0x18); /* 0x171B12EC: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171B12EF: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171B12F1: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(edx + 0x18) = eax; /* 0x171B12F3: mov dword ptr [edx + 0x18], eax */
L_171B12F6:
    ecx = MEM32(edx + 0x1C); /* 0x171B12F6: mov ecx, dword ptr [edx + 0x1c] */
    /* cmp ebx, ecx */ /* 0x171B12F9: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(edx + 0xC); /* 0x171B12FB: mov edi, dword ptr [edx + 0xc] */
    MEM32(ebp + 0x8) = esi; /* 0x171B12FE: mov dword ptr [ebp + 8], esi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171B131D; /* 0x171B1301: ja 0x171b131d */
L_171B1303:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171B1303: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(edx + 0x1C) = ecx; /* 0x171B1305: mov dword ptr [edx + 0x1c], ecx */
    ecx = ebx; /* 0x171B1308: mov ecx, ebx */
    eax = ecx; /* 0x171B130A: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171B130C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171B130C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B130F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171B1311: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B1313: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171B1316: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + ebx; /* 0x171B1318: add dword ptr [edx + 0xc], ebx */
    _flag_k = FK_ADD;
    goto L_171B1349; /* 0x171B131B: jmp 0x171b1349 */
L_171B131D:
    eax = ecx; /* 0x171B131D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171B131F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171B131F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B1322: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171B1324: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B1326: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171B1329: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(edx + 0x1C); /* 0x171B132B: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) + eax; /* 0x171B132E: add dword ptr [edx + 0xc], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x171B1331: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x171B1334: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171B1336: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) & 0; /* 0x171B1338: and dword ptr [edx + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edx + 0x2C) = 1; /* 0x171B133C: mov dword ptr [edx + 0x2c], 1 */
    MEM32(edx + 0x30) = ebx; /* 0x171B1343: mov dword ptr [edx + 0x30], ebx */
    MEM32(edx + 0x34) = eax; /* 0x171B1346: mov dword ptr [edx + 0x34], eax */
L_171B1349:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B1349: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171B1350; /* 0x171B134B: jmp 0x171b1350 */
L_171B134D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B134D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B134F: inc eax */
    _flag_k = FK_INC;
L_171B1350:
    edi = POP32_VAL(esp); /* 0x171B1350: pop edi */
    esi = POP32_VAL(esp); /* 0x171B1351: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B1352: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B1353: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1354: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B135C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B135Cu);

L_171B135C:
    ecx = MEM32(edx + 0x28); /* 0x171B135C: mov ecx, dword ptr [edx + 0x28] */
    PUSH32(esp, ebx); /* 0x171B135F: push ebx */
    PUSH32(esp, esi); /* 0x171B1360: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B1361: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B1363: push edi */
    edi = MEM32(edx + 0x24); /* 0x171B1364: mov edi, dword ptr [edx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B1367: inc eax */
    _flag_k = FK_INC;
    goto L_171B1392; /* 0x171B1368: jmp 0x171b1392 */
L_171B136A:
    esi = MEM32(edx + 0x18); /* 0x171B136A: mov esi, dword ptr [edx + 0x18] */
    ebx = MEM32(edx + 0x14); /* 0x171B136D: mov ebx, dword ptr [edx + 0x14] */
    /* cmp esi, ebx */ /* 0x171B1370: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B1381; /* 0x171B1372: jae 0x171b1381 */
L_171B1374:
    ebx = MEM32(edx + 0x8); /* 0x171B1374: mov ebx, dword ptr [edx + 8] */
    ebx = (uint32_t)MEM8(ebx + esi); /* 0x171B1377: movzx ebx, byte ptr [ebx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B137B: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = esi; /* 0x171B137C: mov dword ptr [edx + 0x18], esi */
    goto L_171B1388; /* 0x171B137F: jmp 0x171b1388 */
L_171B1381:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B1386; /* 0x171B1381: je 0x171b1386 */
L_171B1383:
    MEM32(edx + 0x4) = eax; /* 0x171B1383: mov dword ptr [edx + 4], eax */
L_171B1386:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B1386: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B1388:
    esi = (uint32_t)LO8(ebx); /* 0x171B1388: movzx esi, bl */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B138B: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B138B: shl esi, cl */
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x171B138D: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171B138F: add ecx, 8 */
    _flag_k = FK_ADD;
L_171B1392:
    /* cmp ecx, eax */ /* 0x171B1392: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B136A; /* 0x171B1394: jb 0x171b136a */
L_171B1396:
    esi = edi; /* 0x171B1396: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x171B1398: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x171B139A: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x171B139A: shr edi, 1 */
    MEM32(edx) = esi; /* 0x171B139C: mov dword ptr [edx], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B139E: dec ecx */
    _flag_k = FK_DEC;
    goto L_171B13C9; /* 0x171B139F: jmp 0x171b13c9 */
L_171B13A1:
    esi = MEM32(edx + 0x18); /* 0x171B13A1: mov esi, dword ptr [edx + 0x18] */
    ebx = MEM32(edx + 0x14); /* 0x171B13A4: mov ebx, dword ptr [edx + 0x14] */
    /* cmp esi, ebx */ /* 0x171B13A7: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B13B8; /* 0x171B13A9: jae 0x171b13b8 */
L_171B13AB:
    ebx = MEM32(edx + 0x8); /* 0x171B13AB: mov ebx, dword ptr [edx + 8] */
    ebx = (uint32_t)MEM8(ebx + esi); /* 0x171B13AE: movzx ebx, byte ptr [ebx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B13B2: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + 0x18) = esi; /* 0x171B13B3: mov dword ptr [edx + 0x18], esi */
    goto L_171B13BF; /* 0x171B13B6: jmp 0x171b13bf */
L_171B13B8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B13BD; /* 0x171B13B8: je 0x171b13bd */
L_171B13BA:
    MEM32(edx + 0x4) = eax; /* 0x171B13BA: mov dword ptr [edx + 4], eax */
L_171B13BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B13BD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B13BF:
    esi = (uint32_t)LO8(ebx); /* 0x171B13BF: movzx esi, bl */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171B13C2: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x171B13C2: shl esi, cl */
    _flag_a = (uint32_t)((edi | esi)); _flag_b = (uint32_t)((edi | esi));
    edi = edi | esi; /* 0x171B13C4: or edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x171B13C6: add ecx, 8 */
    _flag_k = FK_ADD;
L_171B13C9:
    /* cmp ecx, 2 */ /* 0x171B13C9: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B13A1; /* 0x171B13CC: jb 0x171b13a1 */
L_171B13CE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x171B13CE: add ecx, -2 */
    _flag_k = FK_ADD;
    esi = edi; /* 0x171B13D1: mov esi, edi */
    MEM32(edx + 0x28) = ecx; /* 0x171B13D3: mov dword ptr [edx + 0x28], ecx */
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x171B13D6: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x171B13D6: shr esi, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B13D9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x4), ecx */ /* 0x171B13DB: cmp dword ptr [edx + 4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edx + 0x24) = esi; /* 0x171B13DE: mov dword ptr [edx + 0x24], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B141A; /* 0x171B13E1: jne 0x171b141a */
L_171B13E3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    edi = edi & 3; /* 0x171B13E3: and edi, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171B13E6: sub edi, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B1414; /* 0x171B13E8: je 0x171b1414 */
L_171B13EA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B13EA: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B13FE; /* 0x171B13EB: je 0x171b13fe */
L_171B13ED:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B13ED: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B13F5; /* 0x171B13EE: je 0x171b13f5 */
L_171B13F0:
    PUSH32(esp, 2); /* 0x171B13F0: push 2 */
    eax = POP32_VAL(esp); /* 0x171B13F2: pop eax */
    goto L_171B141A; /* 0x171B13F3: jmp 0x171b141a */
L_171B13F5:
    esi = edx; /* 0x171B13F5: mov esi, edx */
    RECOMP_CALL(sub_171B0D5E); /* 0x171B13F7: call 0x171b0d5e */
    RECOMP_FLAGS_IN();
    goto L_171B141A; /* 0x171B13FC: jmp 0x171b141a */
L_171B13FE:
    PUSH32(esp, ecx); /* 0x171B13FE: push ecx */
    PUSH32(esp, 5); /* 0x171B13FF: push 5 */
    PUSH32(esp, 9); /* 0x171B1401: push 9 */
    PUSH32(esp, 0x17253490u); /* 0x171B1403: push 0x17253490 */
    PUSH32(esp, 0x17253590u); /* 0x171B1408: push 0x17253590 */
    RECOMP_CALL(sub_171B0A02); /* 0x171B140D: call 0x171b0a02 */
    RECOMP_FLAGS_IN();
    goto L_171B141A; /* 0x171B1412: jmp 0x171b141a */
L_171B1414:
    PUSH32(esp, ecx); /* 0x171B1414: push ecx */
    RECOMP_CALL(sub_171B1274); /* 0x171B1415: call 0x171b1274 */
    RECOMP_FLAGS_IN();
L_171B141A:
    edi = POP32_VAL(esp); /* 0x171B141A: pop edi */
    esi = POP32_VAL(esp); /* 0x171B141B: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B141C: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B141D: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B1423(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1423u);

L_171B1423:
    edi = edi; /* 0x171B1423: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1425: push ebp */
    ebp = esp; /* 0x171B1426: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171B1428: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM8(eax), 0x43u */ /* 0x171B142B: cmp byte ptr [eax], 0x43 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B146E; /* 0x171B142E: jne 0x171b146e */
L_171B1430:
    /* cmp MEM8(eax + 0x1), 0x4Bu */ /* 0x171B1430: cmp byte ptr [eax + 1], 0x4b */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0x4Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B146E; /* 0x171B1434: jne 0x171b146e */
L_171B1436:
    ecx = eax + 0x2; /* 0x171B1436: lea ecx, [eax + 2] */
    eax = MEM32(ebp + 0x8); /* 0x171B1439: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x171B143C: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171B143F: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFEu; /* 0x171B1442: add ecx, -2 */
    _flag_k = FK_ADD;
    MEM32(eax + 0x14) = ecx; /* 0x171B1445: mov dword ptr [eax + 0x14], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x171B1448: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B144B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0xC) = ecx; /* 0x171B144D: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x171B1450: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x171B1453: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(eax + 0x18) = edx; /* 0x171B1456: mov dword ptr [eax + 0x18], edx */
    MEM32(eax + 0x28) = edx; /* 0x171B1459: mov dword ptr [eax + 0x28], edx */
    MEM32(eax + 0x24) = edx; /* 0x171B145C: mov dword ptr [eax + 0x24], edx */
    MEM32(eax + 0x20) = ecx; /* 0x171B145F: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax) = edx; /* 0x171B1462: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = edx; /* 0x171B1464: mov dword ptr [eax + 4], edx */
    MEM32(eax + 0x2C) = edx; /* 0x171B1467: mov dword ptr [eax + 0x2c], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B146A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171B1471; /* 0x171B146C: jmp 0x171b1471 */
L_171B146E:
    PUSH32(esp, 3); /* 0x171B146E: push 3 */
    eax = POP32_VAL(esp); /* 0x171B1470: pop eax */
L_171B1471:
    ebp = POP32_VAL(esp); /* 0x171B1471: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171B1472: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171B147A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B147Au);

L_171B147A:
    edi = edi; /* 0x171B147A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B147C: push ebp */
    ebp = esp; /* 0x171B147D: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x171B147F: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(edx); /* 0x171B1482: mov eax, dword ptr [edx] */
    PUSH32(esp, ebx); /* 0x171B1484: push ebx */
    PUSH32(esp, esi); /* 0x171B1485: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B1486: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x20); /* 0x171B1489: mov ecx, dword ptr [esi + 0x20] */
    /* cmp eax, ecx */ /* 0x171B148C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B148E: push edi */
    MEM32(esi + 0x1C) = eax; /* 0x171B148F: mov dword ptr [esi + 0x1c], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B1497; /* 0x171B1492: jbe 0x171b1497 */
L_171B1494:
    MEM32(esi + 0x1C) = ecx; /* 0x171B1494: mov dword ptr [esi + 0x1c], ecx */
L_171B1497:
    edi = MEM32(esi + 0x1C); /* 0x171B1497: mov edi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B149A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x171B149C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B14EF; /* 0x171B149E: jbe 0x171b14ef */
L_171B14A0:
    eax = MEM32(esi + 0x2C); /* 0x171B14A0: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171B14A3: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B14EB; /* 0x171B14A5: je 0x171b14eb */
L_171B14A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B14A7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B14D0; /* 0x171B14A8: je 0x171b14d0 */
L_171B14AA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B14AA: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B14B9; /* 0x171B14AB: je 0x171b14b9 */
L_171B14AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B14AD: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B14B5; /* 0x171B14AE: je 0x171b14b5 */
L_171B14B0:
    PUSH32(esp, 3); /* 0x171B14B0: push 3 */
    eax = POP32_VAL(esp); /* 0x171B14B2: pop eax */
    goto L_171B14FD; /* 0x171B14B3: jmp 0x171b14fd */
L_171B14B5:
    MEM32(edx) = ebx; /* 0x171B14B5: mov dword ptr [edx], ebx */
    goto L_171B14FB; /* 0x171B14B7: jmp 0x171b14fb */
L_171B14B9:
    PUSH32(esp, 1); /* 0x171B14B9: push 1 */
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x171B14BB: push dword ptr [esi + 0x44] */
    edx = esi; /* 0x171B14BE: mov edx, esi */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x171B14C0: push dword ptr [esi + 0x40] */
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x171B14C3: push dword ptr [esi + 0x3c] */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x171B14C6: push dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_171B0A02); /* 0x171B14C9: call 0x171b0a02 */
    RECOMP_FLAGS_IN();
    goto L_171B14EB; /* 0x171B14CE: jmp 0x171b14eb */
L_171B14D0:
    PUSH32(esp, 1); /* 0x171B14D0: push 1 */
    edx = esi; /* 0x171B14D2: mov edx, esi */
    RECOMP_CALL(sub_171B1274); /* 0x171B14D4: call 0x171b1274 */
    RECOMP_FLAGS_IN();
    goto L_171B14EB; /* 0x171B14D9: jmp 0x171b14eb */
L_171B14DB:
    /* cmp MEM32(esi + 0x1C), ebx */ /* 0x171B14DB: cmp dword ptr [esi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B14EF; /* 0x171B14DE: jbe 0x171b14ef */
L_171B14E0:
    edx = esi; /* 0x171B14E0: mov edx, esi */
    RECOMP_CALL(sub_171B135C); /* 0x171B14E2: call 0x171b135c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171B14E7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1504; /* 0x171B14E9: jne 0x171b1504 */
L_171B14EB:
    /* cmp MEM32(esi), ebx */ /* 0x171B14EB: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B14DB; /* 0x171B14ED: je 0x171b14db */
L_171B14EF:
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x1C)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO16(edi, LO16(edi) - MEM16(esi + 0x1C)); /* 0x171B14EF: sub di, word ptr [esi + 0x1c] */
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = MEM32(ebp + 0xC); /* 0x171B14F3: mov ecx, dword ptr [ebp + 0xc] */
    eax = (uint32_t)LO16(edi); /* 0x171B14F6: movzx eax, di */
    MEM32(ecx) = eax; /* 0x171B14F9: mov dword ptr [ecx], eax */
L_171B14FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B14FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B14FD:
    edi = POP32_VAL(esp); /* 0x171B14FD: pop edi */
    esi = POP32_VAL(esp); /* 0x171B14FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B14FF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B1500: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B1501: ret 8 */
L_171B1504:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B1504: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 3 */ /* 0x171B1506: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x171B1509: setne cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B150C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B150D: inc ecx */
    _flag_k = FK_INC;
    eax = ecx; /* 0x171B150E: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_171B14FD; /* 0x171B1510: jmp 0x171b14fd */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171B1517(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1517u);

L_171B1517:
    edi = edi; /* 0x171B1517: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1519: push ebp */
    ebp = esp; /* 0x171B151A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B151C: push esi */
    PUSH32(esp, 0x1E04u); /* 0x171B151D: push 0x1e04 */
    RECOMP_ICALL(MEM32(ebp + 0x8)); /* 0x171B1522: call dword ptr [ebp + 8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171B1525: mov esi, eax */
    /* test esi, esi */ /* 0x171B1527: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171B1529: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1550; /* 0x171B152A: je 0x171b1550 */
L_171B152C:
    PUSH32(esp, edi); /* 0x171B152C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B152D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x172545D0), eax */ /* 0x171B152F: cmp dword ptr [0x172545d0], eax */
    _flag_a = (uint32_t)(MEM32(0x172545D0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = 0x781u; /* 0x171B1535: mov ecx, 0x781 */
    edi = esi; /* 0x171B153A: mov edi, esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B153C: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x171B153E: pop edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1550; /* 0x171B153F: jne 0x171b1550 */
L_171B1541:
    RECOMP_CALL(sub_171B11B8); /* 0x171B1541: call 0x171b11b8 */
    RECOMP_FLAGS_IN();
    MEM32(0x172545D0) = 1; /* 0x171B1546: mov dword ptr [0x172545d0], 1 */
L_171B1550:
    eax = esi; /* 0x171B1550: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171B1552: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1553: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1554: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B155C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B155Cu);

L_171B155C:
    edi = edi; /* 0x171B155C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B155E: push ebp */
    ebp = esp; /* 0x171B155F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171B1561: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + 0xC)); /* 0x171B1564: call dword ptr [ebp + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171B1567: pop ecx */
    ebp = POP32_VAL(esp); /* 0x171B1568: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B1569: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B1571(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1571u);

L_171B1571:
    edi = edi; /* 0x171B1571: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1573: push ebp */
    ebp = esp; /* 0x171B1574: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171B1576: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 1; /* 0x171B1579: inc dword ptr [eax + 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x18); /* 0x171B157C: mov eax, dword ptr [eax + 0x18] */
    ebp = POP32_VAL(esp); /* 0x171B157F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1580: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B1588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1588u);

L_171B1588:
    edi = edi; /* 0x171B1588: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B158A: push ebp */
    ebp = esp; /* 0x171B158B: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171B158D: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) - 1; /* 0x171B1590: dec dword ptr [ecx + 0x18] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171B1593: push esi */
    esi = MEM32(ecx + 0x18); /* 0x171B1594: mov esi, dword ptr [ecx + 0x18] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B15A0; /* 0x171B1597: jne 0x171b15a0 */
L_171B1599:
    eax = MEM32(ecx); /* 0x171B1599: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171B159B: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171B159D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_171B15A0:
    eax = esi; /* 0x171B15A0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171B15A2: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B15A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B15A4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B15AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B15ACu);

L_171B15AC:
    edi = edi; /* 0x171B15AC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B15AE: push ebp */
    ebp = esp; /* 0x171B15AF: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171B15B1: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171B15B2: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x171B15B5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171B15B7: push esi */
    PUSH32(esp, edi); /* 0x171B15B8: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B160B; /* 0x171B15B9: je 0x171b160b */
L_171B15BB:
    eax = MEM32(ebp + 0x8); /* 0x171B15BB: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x4); /* 0x171B15BE: mov esi, dword ptr [eax + 4] */
    /* test esi, esi */ /* 0x171B15C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B15DB; /* 0x171B15C3: jne 0x171b15db */
L_171B15C5:
    /* cmp MEM32(ebx), esi */ /* 0x171B15C5: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171B15D3; /* 0x171B15C7: jbe 0x171b15d3 */
L_171B15C9:
    eax = MEM32(ebp + 0xC); /* 0x171B15C9: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B15CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B15D3; /* 0x171B15CE: je 0x171b15d3 */
L_171B15D0:
    MEM8(eax) = (uint8_t)(0); /* 0x171B15D0: mov byte ptr [eax], 0 */
L_171B15D3:
    MEM32(ebx) = 1; /* 0x171B15D3: mov dword ptr [ebx], 1 */
    goto L_171B1607; /* 0x171B15D9: jmp 0x171b1607 */
L_171B15DB:
    eax = esi; /* 0x171B15DB: mov eax, esi */
    edx = eax + 0x1; /* 0x171B15DD: lea edx, [eax + 1] */
L_171B15E0:
    SET_LO8(ecx, MEM8(eax)); /* 0x171B15E0: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B15E2: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171B15E3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B15E0; /* 0x171B15E5: jne 0x171b15e0 */
L_171B15E7:
    edi = MEM32(ebp + 0xC); /* 0x171B15E7: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171B15EA: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B15EC: inc eax */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x171B15ED: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1605; /* 0x171B15EF: je 0x171b1605 */
L_171B15F1:
    /* cmp eax, MEM32(ebx) */ /* 0x171B15F1: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B160B; /* 0x171B15F3: ja 0x171b160b */
L_171B15F5:
    ecx = eax; /* 0x171B15F5: mov ecx, eax */
    edx = ecx; /* 0x171B15F7: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171B15F9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171B15F9: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B15FC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x171B15FE: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171B1600: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171B1603: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_171B1605:
    MEM32(ebx) = eax; /* 0x171B1605: mov dword ptr [ebx], eax */
L_171B1607:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B1607: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171B1610; /* 0x171B1609: jmp 0x171b1610 */
L_171B160B:
    eax = 0x88760385u; /* 0x171B160B: mov eax, 0x88760385 */
L_171B1610:
    edi = POP32_VAL(esp); /* 0x171B1610: pop edi */
    esi = POP32_VAL(esp); /* 0x171B1611: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B1612: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B1613: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B1614: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B161C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B161Cu);

L_171B161C:
    edi = edi; /* 0x171B161C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B161E: push ebp */
    ebp = esp; /* 0x171B161F: mov ebp, esp */
    PUSH32(esp, edi); /* 0x171B1621: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171B1622: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x171B1625: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1639; /* 0x171B1627: je 0x171b1639 */
L_171B1629:
    PUSH32(esp, esi); /* 0x171B1629: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B162A: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171B162D: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171B1630: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171B1631: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171B1632: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171B1633: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B1634: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B1636: pop esi */
    goto L_171B163E; /* 0x171B1637: jmp 0x171b163e */
L_171B1639:
    eax = 0x88760385u; /* 0x171B1639: mov eax, 0x88760385 */
L_171B163E:
    edi = POP32_VAL(esp); /* 0x171B163E: pop edi */
    ebp = POP32_VAL(esp); /* 0x171B163F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B1640: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B1648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1648u);

L_171B1648:
    edi = edi; /* 0x171B1648: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B164A: push ebp */
    ebp = esp; /* 0x171B164B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B164D: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171B164E: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x171B1651: mov esi, ecx */
    eax = MEM32(esi); /* 0x171B1653: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x171B1655: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1658: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1667; /* 0x171B165A: je 0x171b1667 */
L_171B165C:
    ecx = MEM32(ebp + 0x8); /* 0x171B165C: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B165F: push esi */
    RECOMP_CALL(sub_171AB243); /* 0x171B1660: call 0x171ab243 */
    RECOMP_FLAGS_IN();
    goto L_171B166C; /* 0x171B1665: jmp 0x171b166c */
L_171B1667:
    eax = 0x88760384u; /* 0x171B1667: mov eax, 0x88760384 */
L_171B166C:
    esi = POP32_VAL(esp); /* 0x171B166C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B166D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B166E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B1680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1680u);

L_171B1680:
    /* cmp MEM32(esi + 0x14), 0xCCu */ /* 0x171B1680: cmp dword ptr [esi + 0x14], 0xcc */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B16A3; /* 0x171B1687: je 0x171b16a3 */
L_171B1689:
    eax = MEM32(esi + 0x1A8); /* 0x171B1689: mov eax, dword ptr [esi + 0x1a8] */
    PUSH32(esp, esi); /* 0x171B168F: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1690: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8C) = 0; /* 0x171B1692: mov dword ptr [esi + 0x8c], 0 */
    MEM32(esi + 0x14) = 0xCCu; /* 0x171B169C: mov dword ptr [esi + 0x14], 0xcc */
L_171B16A3:
    ecx = MEM32(esi + 0x1A8); /* 0x171B16A3: mov ecx, dword ptr [esi + 0x1a8] */
    eax = MEM32(ecx + 0x8); /* 0x171B16A9: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x171B16AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B16C9; /* 0x171B16AE: je 0x171b16c9 */
L_171B16B0:
    eax = MEM32(esi); /* 0x171B16B0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B16B2: push esi */
    MEM32(eax + 0x14) = 0x30u; /* 0x171B16B3: mov dword ptr [eax + 0x14], 0x30 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B16BA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x1A8); /* 0x171B16BC: mov edx, dword ptr [esi + 0x1a8] */
    eax = MEM32(edx + 0x8); /* 0x171B16C2: mov eax, dword ptr [edx + 8] */
    /* test eax, eax */ /* 0x171B16C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B16B0; /* 0x171B16C7: jne 0x171b16b0 */
L_171B16C9:
    edx = MEM32(esi + 0x44); /* 0x171B16C9: mov edx, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B16CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171B16CE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171B16D0: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCDu; /* 0x171B16D3: add eax, 0xcd */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x171B16D8: mov dword ptr [esi + 0x14], eax */
    eax = 1; /* 0x171B16DB: mov eax, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B16E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B16F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B16F0u);

L_171B16F0:
    edi = edi; /* 0x171B16F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B16F2: push ebp */
    ebp = esp; /* 0x171B16F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B16F5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B16F6: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B16F9: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0xCDu */ /* 0x171B16FC: cmp ecx, 0xcd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1713; /* 0x171B1702: je 0x171b1713 */
L_171B1704:
    eax = MEM32(esi); /* 0x171B1704: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B1706: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B170D: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B170E: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1711: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1713:
    ecx = MEM32(esi + 0x8C); /* 0x171B1713: mov ecx, dword ptr [esi + 0x8c] */
    edx = MEM32(esi + 0x74); /* 0x171B1719: mov edx, dword ptr [esi + 0x74] */
    /* cmp ecx, edx */ /* 0x171B171C: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B1736; /* 0x171B171E: jb 0x171b1736 */
L_171B1720:
    eax = MEM32(esi); /* 0x171B1720: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B1722: push -1 */
    PUSH32(esp, esi); /* 0x171B1724: push esi */
    MEM32(eax + 0x14) = 0x7Bu; /* 0x171B1725: mov dword ptr [eax + 0x14], 0x7b */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B172C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B172F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B1731: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1732: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B1733: ret 0xc */
L_171B1736:
    eax = MEM32(esi + 0x8); /* 0x171B1736: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x171B1739: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1746; /* 0x171B173B: je 0x171b1746 */
L_171B173D:
    MEM32(eax + 0x4) = ecx; /* 0x171B173D: mov dword ptr [eax + 4], ecx */
    PUSH32(esp, esi); /* 0x171B1740: push esi */
    MEM32(eax + 0x8) = edx; /* 0x171B1741: mov dword ptr [eax + 8], edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1744: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1746:
    ecx = MEM32(ebp + 0x10); /* 0x171B1746: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(esi + 0x1AC); /* 0x171B1749: mov eax, dword ptr [esi + 0x1ac] */
    PUSH32(esp, ecx); /* 0x171B174F: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171B1750: mov ecx, dword ptr [ebp + 0xc] */
    edx = ebp + 0x8; /* 0x171B1753: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x171B1756: push edx */
    PUSH32(esp, ecx); /* 0x171B1757: push ecx */
    PUSH32(esp, esi); /* 0x171B1758: push esi */
    MEM32(ebp + 0x8) = 0; /* 0x171B1759: mov dword ptr [ebp + 8], 0 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B1760: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x8C); /* 0x171B1763: mov ecx, dword ptr [esi + 0x8c] */
    eax = MEM32(ebp + 0x8); /* 0x171B1769: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171B176C: add ecx, eax */
    _flag_k = FK_ADD;
    MEM32(esi + 0x8C) = ecx; /* 0x171B176E: mov dword ptr [esi + 0x8c], ecx */
    esi = POP32_VAL(esp); /* 0x171B1774: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1775: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B1776: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B1780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1780u);

L_171B1780:
    edi = edi; /* 0x171B1780: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1782: push ebp */
    ebp = esp; /* 0x171B1783: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B1785: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B1786: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0xCAu */ /* 0x171B1789: cmp dword ptr [esi + 0x14], 0xca */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0xCAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B17B7; /* 0x171B1790: jne 0x171b17b7 */
L_171B1792:
    PUSH32(esp, esi); /* 0x171B1792: push esi */
    RECOMP_CALL(sub_171B49C0); /* 0x171B1793: call 0x171b49c0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x40); /* 0x171B1798: mov eax, dword ptr [esi + 0x40] */
    /* test eax, eax */ /* 0x171B179B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B17B0; /* 0x171B179D: je 0x171b17b0 */
L_171B179F:
    MEM32(esi + 0x14) = 0xCFu; /* 0x171B179F: mov dword ptr [esi + 0x14], 0xcf */
    eax = 1; /* 0x171B17A6: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x171B17AB: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B17AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B17AD: ret 4 */
L_171B17B0:
    MEM32(esi + 0x14) = 0xCBu; /* 0x171B17B0: mov dword ptr [esi + 0x14], 0xcb */
L_171B17B7:
    ecx = MEM32(esi + 0x14); /* 0x171B17B7: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0xCBu */ /* 0x171B17BA: cmp ecx, 0xcb */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1836; /* 0x171B17C0: jne 0x171b1836 */
L_171B17C2:
    eax = MEM32(esi + 0x1B8); /* 0x171B17C2: mov eax, dword ptr [esi + 0x1b8] */
    ecx = MEM32(eax + 0x10); /* 0x171B17C8: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x171B17CB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1820; /* 0x171B17CD: je 0x171b1820 */
L_171B17CF:
    /* nop */ /* 0x171B17CF: nop  */
L_171B17D0:
    eax = MEM32(esi + 0x8); /* 0x171B17D0: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x171B17D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B17DA; /* 0x171B17D5: je 0x171b17da */
L_171B17D7:
    PUSH32(esp, esi); /* 0x171B17D7: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B17D8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B17DA:
    ecx = MEM32(esi + 0x1B8); /* 0x171B17DA: mov ecx, dword ptr [esi + 0x1b8] */
    PUSH32(esp, esi); /* 0x171B17E0: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B17E1: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B17E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1819; /* 0x171B17E5: je 0x171b1819 */
L_171B17E7:
    /* cmp eax, 2 */ /* 0x171B17E7: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1820; /* 0x171B17EA: je 0x171b1820 */
L_171B17EC:
    ecx = MEM32(esi + 0x8); /* 0x171B17EC: mov ecx, dword ptr [esi + 8] */
    /* test ecx, ecx */ /* 0x171B17EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B17D0; /* 0x171B17F1: je 0x171b17d0 */
L_171B17F3:
    /* cmp eax, 3 */ /* 0x171B17F3: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B17FD; /* 0x171B17F6: je 0x171b17fd */
L_171B17F8:
    /* cmp eax, 1 */ /* 0x171B17F8: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B17D0; /* 0x171B17FB: jne 0x171b17d0 */
L_171B17FD:
    eax = MEM32(ecx + 0x4); /* 0x171B17FD: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B1800: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + 0x4) = eax; /* 0x171B1801: mov dword ptr [ecx + 4], eax */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x171B1804: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B17D0; /* 0x171B1807: jl 0x171b17d0 */
L_171B1809:
    eax = MEM32(ecx + 0x8); /* 0x171B1809: mov eax, dword ptr [ecx + 8] */
    edx = MEM32(esi + 0x144); /* 0x171B180C: mov edx, dword ptr [esi + 0x144] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B1812: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x8) = eax; /* 0x171B1814: mov dword ptr [ecx + 8], eax */
    RECOMP_BACKEDGE();
    goto L_171B17D0; /* 0x171B1817: jmp 0x171b17d0 */
L_171B1819:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B1819: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B181B: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B181C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B181D: ret 4 */
L_171B1820:
    eax = MEM32(esi + 0x94); /* 0x171B1820: mov eax, dword ptr [esi + 0x94] */
    MEM32(esi + 0x9C) = eax; /* 0x171B1826: mov dword ptr [esi + 0x9c], eax */
    RECOMP_CALL(sub_171B1680); /* 0x171B182C: call 0x171b1680 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B1831: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1832: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1833: ret 4 */
L_171B1836:
    /* cmp ecx, 0xCCu */ /* 0x171B1836: cmp ecx, 0xcc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B184D; /* 0x171B183C: je 0x171b184d */
L_171B183E:
    eax = MEM32(esi); /* 0x171B183E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B1840: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B1847: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B1848: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B184B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B184D:
    RECOMP_CALL(sub_171B1680); /* 0x171B184D: call 0x171b1680 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171B1852: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1853: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1854: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B1860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1860u);

L_171B1860:
    edi = edi; /* 0x171B1860: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1862: push ebp */
    ebp = esp; /* 0x171B1863: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171B1865: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171B1868: push ebx */
    PUSH32(esp, esi); /* 0x171B1869: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B186A: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B186D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x3Eu */ /* 0x171B186F: cmp ecx, 0x3e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171B1872: push edi */
    MEM32(esi + 0x4) = ebx; /* 0x171B1873: mov dword ptr [esi + 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B188E; /* 0x171B1876: je 0x171b188e */
L_171B1878:
    eax = MEM32(esi); /* 0x171B1878: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xCu; /* 0x171B187A: mov dword ptr [eax + 0x14], 0xc */
    MEM32(eax + 0x18) = 0x3Eu; /* 0x171B1881: mov dword ptr [eax + 0x18], 0x3e */
    PUSH32(esp, esi); /* 0x171B1888: push esi */
    MEM32(eax + 0x1C) = ecx; /* 0x171B1889: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B188C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B188E:
    ecx = MEM32(ebp + 0x10); /* 0x171B188E: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, 0x1D8u */ /* 0x171B1891: cmp ecx, 0x1d8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B18AF; /* 0x171B1897: je 0x171b18af */
L_171B1899:
    eax = MEM32(esi); /* 0x171B1899: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x15u; /* 0x171B189B: mov dword ptr [eax + 0x14], 0x15 */
    MEM32(eax + 0x18) = 0x1D8u; /* 0x171B18A2: mov dword ptr [eax + 0x18], 0x1d8 */
    PUSH32(esp, esi); /* 0x171B18A9: push esi */
    MEM32(eax + 0x1C) = ecx; /* 0x171B18AA: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B18AD: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B18AF:
    eax = MEM32(esi + 0xC); /* 0x171B18AF: mov eax, dword ptr [esi + 0xc] */
    edx = MEM32(esi); /* 0x171B18B2: mov edx, dword ptr [esi] */
    MEM32(ebp + 0x8) = eax; /* 0x171B18B4: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B18B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x76u; /* 0x171B18B9: mov ecx, 0x76 */
    edi = esi; /* 0x171B18BE: mov edi, esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171B18C0: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + 0x8); /* 0x171B18C2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B18C5: push esi */
    MEM32(esi) = edx; /* 0x171B18C6: mov dword ptr [esi], edx */
    MEM32(esi + 0xC) = ecx; /* 0x171B18C8: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x10) = 1; /* 0x171B18CB: mov dword ptr [esi + 0x10], 1 */
    RECOMP_CALL(sub_171B5B40); /* 0x171B18D2: call 0x171b5b40 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = ebx; /* 0x171B18D7: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0x18) = ebx; /* 0x171B18DA: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi + 0xA8) = ebx; /* 0x171B18DD: mov dword ptr [esi + 0xa8], ebx */
    MEM32(esi + 0xAC) = ebx; /* 0x171B18E3: mov dword ptr [esi + 0xac], ebx */
    MEM32(esi + 0xB0) = ebx; /* 0x171B18E9: mov dword ptr [esi + 0xb0], ebx */
    MEM32(esi + 0xB4) = ebx; /* 0x171B18EF: mov dword ptr [esi + 0xb4], ebx */
    MEM32(esi + 0xB8) = ebx; /* 0x171B18F5: mov dword ptr [esi + 0xb8], ebx */
    MEM32(esi + 0xC8) = ebx; /* 0x171B18FB: mov dword ptr [esi + 0xc8], ebx */
    MEM32(esi + 0xBC) = ebx; /* 0x171B1901: mov dword ptr [esi + 0xbc], ebx */
    MEM32(esi + 0xCC) = ebx; /* 0x171B1907: mov dword ptr [esi + 0xcc], ebx */
    MEM32(esi + 0xC0) = ebx; /* 0x171B190D: mov dword ptr [esi + 0xc0], ebx */
    MEM32(esi + 0xD0) = ebx; /* 0x171B1913: mov dword ptr [esi + 0xd0], ebx */
    MEM32(esi + 0xC4) = ebx; /* 0x171B1919: mov dword ptr [esi + 0xc4], ebx */
    MEM32(esi + 0xD4) = ebx; /* 0x171B191F: mov dword ptr [esi + 0xd4], ebx */
    PUSH32(esp, esi); /* 0x171B1925: push esi */
    MEM32(esi + 0x134) = ebx; /* 0x171B1926: mov dword ptr [esi + 0x134], ebx */
    RECOMP_CALL(sub_171B3540); /* 0x171B192C: call 0x171b3540 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171B1931: push esi */
    RECOMP_CALL(sub_171B4FB0); /* 0x171B1932: call 0x171b4fb0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B1937: pop edi */
    MEM32(esi + 0x14) = 0xC8u; /* 0x171B1938: mov dword ptr [esi + 0x14], 0xc8 */
    esi = POP32_VAL(esp); /* 0x171B193F: pop esi */
    ebx = POP32_VAL(esp); /* 0x171B1940: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B1941: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171B1942: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171B1950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1950u);

L_171B1950:
    edi = edi; /* 0x171B1950: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1952: push ebp */
    ebp = esp; /* 0x171B1953: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x171B1955: pop ebp */
    goto L_171B5C50; /* 0x171B1956: jmp 0x171b5c50 */
L_171B5C50:
    edi = edi; /* 0x171B5C50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B5C52: push ebp */
    ebp = esp; /* 0x171B5C53: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B5C55: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B5C56: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171B5C59: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171B5C5C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B5C5D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171B5C5F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B5C67; /* 0x171B5C61: je 0x171b5c67 */
L_171B5C63:
    PUSH32(esp, esi); /* 0x171B5C63: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x171B5C64: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
L_171B5C67:
    MEM32(esi + 0x4) = edi; /* 0x171B5C67: mov dword ptr [esi + 4], edi */
    MEM32(esi + 0x14) = edi; /* 0x171B5C6A: mov dword ptr [esi + 0x14], edi */
    edi = POP32_VAL(esp); /* 0x171B5C6D: pop edi */
    esi = POP32_VAL(esp); /* 0x171B5C6E: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B5C6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B5C70: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B1960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1960u);

L_171B1960:
    eax = MEM32(esi + 0x24); /* 0x171B1960: mov eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B1963: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x171B1964: push edi */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B1A76; /* 0x171B1965: je 0x171b1a76 */
L_171B196B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x171B196B: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B19CE; /* 0x171B196E: je 0x171b19ce */
L_171B1970:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B1970: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B1980; /* 0x171B1971: je 0x171b1980 */
L_171B1973:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B1973: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x28) = eax; /* 0x171B1975: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171B1978: mov dword ptr [esi + 0x2c], eax */
    goto L_171B1A83; /* 0x171B197B: jmp 0x171b1a83 */
L_171B1980:
    eax = MEM32(esi + 0x128); /* 0x171B1980: mov eax, dword ptr [esi + 0x128] */
    /* test eax, eax */ /* 0x171B1986: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 4; /* 0x171B1988: mov edi, 4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B19C3; /* 0x171B198D: je 0x171b19c3 */
L_171B198F:
    ecx = (uint32_t)MEM8(esi + 0x12C); /* 0x171B198F: movzx ecx, byte ptr [esi + 0x12c] */
    eax = ecx; /* 0x171B1996: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171B1998: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B19C3; /* 0x171B199B: je 0x171b19c3 */
L_171B199D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x171B199D: sub eax, 2 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B19B4; /* 0x171B19A0: je 0x171b19b4 */
L_171B19A2:
    eax = MEM32(esi); /* 0x171B19A2: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B19A4: push -1 */
    MEM32(eax + 0x14) = 0x72u; /* 0x171B19A6: mov dword ptr [eax + 0x14], 0x72 */
    PUSH32(esp, esi); /* 0x171B19AD: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B19AE: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B19B1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_171B19B4:
    MEM32(esi + 0x28) = 5; /* 0x171B19B4: mov dword ptr [esi + 0x28], 5 */
    MEM32(esi + 0x2C) = edi; /* 0x171B19BB: mov dword ptr [esi + 0x2c], edi */
    goto L_171B1A81; /* 0x171B19BE: jmp 0x171b1a81 */
L_171B19C3:
    MEM32(esi + 0x28) = edi; /* 0x171B19C3: mov dword ptr [esi + 0x28], edi */
    MEM32(esi + 0x2C) = edi; /* 0x171B19C6: mov dword ptr [esi + 0x2c], edi */
    goto L_171B1A81; /* 0x171B19C9: jmp 0x171b1a81 */
L_171B19CE:
    eax = MEM32(esi + 0x11C); /* 0x171B19CE: mov eax, dword ptr [esi + 0x11c] */
    /* test eax, eax */ /* 0x171B19D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1A66; /* 0x171B19D6: jne 0x171b1a66 */
L_171B19DC:
    eax = MEM32(esi + 0x128); /* 0x171B19DC: mov eax, dword ptr [esi + 0x128] */
    /* test eax, eax */ /* 0x171B19E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1A17; /* 0x171B19E4: je 0x171b1a17 */
L_171B19E6:
    ecx = (uint32_t)MEM8(esi + 0x12C); /* 0x171B19E6: movzx ecx, byte ptr [esi + 0x12c] */
    eax = ecx; /* 0x171B19ED: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171B19EF: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B1A07; /* 0x171B19F2: je 0x171b1a07 */
L_171B19F4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B19F4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B1A66; /* 0x171B19F5: je 0x171b1a66 */
L_171B19F7:
    eax = MEM32(esi); /* 0x171B19F7: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x72u; /* 0x171B19F9: mov dword ptr [eax + 0x14], 0x72 */
    MEM32(eax + 0x18) = ecx; /* 0x171B1A00: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B1A03: push -1 */
    goto L_171B1A62; /* 0x171B1A05: jmp 0x171b1a62 */
L_171B1A07:
    MEM32(esi + 0x28) = 2; /* 0x171B1A07: mov dword ptr [esi + 0x28], 2 */
    MEM32(esi + 0x2C) = 2; /* 0x171B1A0E: mov dword ptr [esi + 0x2c], 2 */
    goto L_171B1A81; /* 0x171B1A15: jmp 0x171b1a81 */
L_171B1A17:
    eax = MEM32(esi + 0xDC); /* 0x171B1A17: mov eax, dword ptr [esi + 0xdc] */
    ecx = MEM32(eax); /* 0x171B1A1D: mov ecx, dword ptr [eax] */
    /* cmp ecx, 1 */ /* 0x171B1A1F: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(eax + 0x54); /* 0x171B1A22: mov edx, dword ptr [eax + 0x54] */
    edi = MEM32(eax + 0xA8); /* 0x171B1A25: mov edi, dword ptr [eax + 0xa8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1A3F; /* 0x171B1A2B: jne 0x171b1a3f */
L_171B1A2D:
    /* cmp edx, 2 */ /* 0x171B1A2D: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1A4E; /* 0x171B1A30: jne 0x171b1a4e */
L_171B1A32:
    /* cmp edi, 3 */ /* 0x171B1A32: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1A4E; /* 0x171B1A35: jne 0x171b1a4e */
L_171B1A37:
    MEM32(esi + 0x28) = edi; /* 0x171B1A37: mov dword ptr [esi + 0x28], edi */
    MEM32(esi + 0x2C) = edx; /* 0x171B1A3A: mov dword ptr [esi + 0x2c], edx */
    goto L_171B1A81; /* 0x171B1A3D: jmp 0x171b1a81 */
L_171B1A3F:
    /* cmp ecx, 0x52u */ /* 0x171B1A3F: cmp ecx, 0x52 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1A4E; /* 0x171B1A42: jne 0x171b1a4e */
L_171B1A44:
    /* cmp edx, 0x47u */ /* 0x171B1A44: cmp edx, 0x47 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x47u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1A4E; /* 0x171B1A47: jne 0x171b1a4e */
L_171B1A49:
    /* cmp edi, 0x42u */ /* 0x171B1A49: cmp edi, 0x42 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x42u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1A07; /* 0x171B1A4C: je 0x171b1a07 */
L_171B1A4E:
    eax = MEM32(esi); /* 0x171B1A4E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = ecx; /* 0x171B1A50: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = edx; /* 0x171B1A53: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x20) = edi; /* 0x171B1A56: mov dword ptr [eax + 0x20], edi */
    MEM32(eax + 0x14) = 0x6Fu; /* 0x171B1A59: mov dword ptr [eax + 0x14], 0x6f */
    PUSH32(esp, 1); /* 0x171B1A60: push 1 */
L_171B1A62:
    PUSH32(esp, esi); /* 0x171B1A62: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B1A63: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_171B1A66:
    MEM32(esi + 0x28) = 3; /* 0x171B1A66: mov dword ptr [esi + 0x28], 3 */
    MEM32(esi + 0x2C) = 2; /* 0x171B1A6D: mov dword ptr [esi + 0x2c], 2 */
    goto L_171B1A81; /* 0x171B1A74: jmp 0x171b1a81 */
L_171B1A76:
    eax = 1; /* 0x171B1A76: mov eax, 1 */
    MEM32(esi + 0x28) = eax; /* 0x171B1A7B: mov dword ptr [esi + 0x28], eax */
    MEM32(esi + 0x2C) = eax; /* 0x171B1A7E: mov dword ptr [esi + 0x2c], eax */
L_171B1A81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B1A81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171B1A83:
    fp_push(*(double*)ADDR(0x17001D88)); /* 0x171B1A83: fld qword ptr [0x17001d88] */
    ecx = 1; /* 0x171B1A89: mov ecx, 1 */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x38) = _v; } /* 0x171B1A8E: fstp qword ptr [esi + 0x38] */
    MEM32(esi + 0x30) = ecx; /* 0x171B1A91: mov dword ptr [esi + 0x30], ecx */
    MEM32(esi + 0x34) = ecx; /* 0x171B1A94: mov dword ptr [esi + 0x34], ecx */
    MEM32(esi + 0x40) = eax; /* 0x171B1A97: mov dword ptr [esi + 0x40], eax */
    MEM32(esi + 0x44) = eax; /* 0x171B1A9A: mov dword ptr [esi + 0x44], eax */
    MEM32(esi + 0x48) = eax; /* 0x171B1A9D: mov dword ptr [esi + 0x48], eax */
    MEM32(esi + 0x4C) = ecx; /* 0x171B1AA0: mov dword ptr [esi + 0x4c], ecx */
    MEM32(esi + 0x50) = ecx; /* 0x171B1AA3: mov dword ptr [esi + 0x50], ecx */
    MEM32(esi + 0x54) = eax; /* 0x171B1AA6: mov dword ptr [esi + 0x54], eax */
    MEM32(esi + 0x58) = 2; /* 0x171B1AA9: mov dword ptr [esi + 0x58], 2 */
    MEM32(esi + 0x5C) = eax; /* 0x171B1AB0: mov dword ptr [esi + 0x5c], eax */
    MEM32(esi + 0x60) = 0x100u; /* 0x171B1AB3: mov dword ptr [esi + 0x60], 0x100 */
    MEM32(esi + 0x88) = eax; /* 0x171B1ABA: mov dword ptr [esi + 0x88], eax */
    MEM32(esi + 0x64) = eax; /* 0x171B1AC0: mov dword ptr [esi + 0x64], eax */
    MEM32(esi + 0x68) = eax; /* 0x171B1AC3: mov dword ptr [esi + 0x68], eax */
    MEM32(esi + 0x6C) = eax; /* 0x171B1AC6: mov dword ptr [esi + 0x6c], eax */
    edi = POP32_VAL(esp); /* 0x171B1AC9: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B1ACA: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B1AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1AD0u);

L_171B1AD0:
    edi = edi; /* 0x171B1AD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1AD2: push ebp */
    ebp = esp; /* 0x171B1AD3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B1AD5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B1AD6: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B1AD9: mov ecx, dword ptr [esi + 0x14] */
    PUSH32(esp, edi); /* 0x171B1ADC: push edi */
    eax = ecx + (-0xC8); /* 0x171B1ADD: lea eax, [ecx - 0xc8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171B1AE3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xAu */ /* 0x171B1AE5: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171B1B4E; /* 0x171B1AE8: ja 0x171b1b4e */
L_171B1AEA:
    eax = (uint32_t)MEM8(eax + 0x171B1B7C); /* 0x171B1AEA: movzx eax, byte ptr [eax + 0x171b1b7c] */
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x171B1B68)); goto _ljump; }
L_171B1AF8:
    ecx = MEM32(esi + 0x1B8); /* 0x171B1AF8: mov ecx, dword ptr [esi + 0x1b8] */
    PUSH32(esp, esi); /* 0x171B1AFE: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171B1AFF: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x18); /* 0x171B1B02: mov edx, dword ptr [esi + 0x18] */
    PUSH32(esp, esi); /* 0x171B1B05: push esi */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x171B1B06: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 0xC9u; /* 0x171B1B09: mov dword ptr [esi + 0x14], 0xc9 */
L_171B1B10:
    eax = MEM32(esi + 0x1B8); /* 0x171B1B10: mov eax, dword ptr [esi + 0x1b8] */
    PUSH32(esp, esi); /* 0x171B1B16: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1B17: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171B1B19: mov edi, eax */
    /* cmp edi, 1 */ /* 0x171B1B1B: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1B5D; /* 0x171B1B1E: jne 0x171b1b5d */
L_171B1B20:
    RECOMP_CALL(sub_171B1960); /* 0x171B1B20: call 0x171b1960 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171B1B25: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x171B1B27: pop edi */
    MEM32(esi + 0x14) = 0xCAu; /* 0x171B1B28: mov dword ptr [esi + 0x14], 0xca */
    esi = POP32_VAL(esp); /* 0x171B1B2F: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1B30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1B31: ret 4 */
L_171B1B34:
    edi = POP32_VAL(esp); /* 0x171B1B34: pop edi */
    eax = 1; /* 0x171B1B35: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x171B1B3A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1B3B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1B3C: ret 4 */
L_171B1B3F:
    ecx = MEM32(esi + 0x1B8); /* 0x171B1B3F: mov ecx, dword ptr [esi + 0x1b8] */
    PUSH32(esp, esi); /* 0x171B1B45: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B1B46: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B1B48: pop edi */
    esi = POP32_VAL(esp); /* 0x171B1B49: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1B4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1B4B: ret 4 */
L_171B1B4E:
    eax = MEM32(esi); /* 0x171B1B4E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B1B50: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B1B57: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B1B58: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1B5B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1B5D:
    eax = edi; /* 0x171B1B5D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x171B1B5F: pop edi */
    esi = POP32_VAL(esp); /* 0x171B1B60: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1B61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1B62: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171B1AF8u: goto L_171B1AF8;
      case 0x171B1B10u: goto L_171B1B10;
      case 0x171B1B34u: goto L_171B1B34;
      case 0x171B1B3Fu: goto L_171B1B3F;
      case 0x171B1B4Eu: goto L_171B1B4E;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171B1B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1B90u);

L_171B1B90:
    edi = edi; /* 0x171B1B90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1B92: push ebp */
    ebp = esp; /* 0x171B1B93: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B1B95: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B1B96: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B1B99: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0xCDu */ /* 0x171B1B9C: cmp ecx, 0xcd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1BAC; /* 0x171B1BA2: je 0x171b1bac */
L_171B1BA4:
    /* cmp ecx, 0xCEu */ /* 0x171B1BA4: cmp ecx, 0xce */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1BDD; /* 0x171B1BAA: jne 0x171b1bdd */
L_171B1BAC:
    eax = MEM32(esi + 0x40); /* 0x171B1BAC: mov eax, dword ptr [esi + 0x40] */
    /* test eax, eax */ /* 0x171B1BAF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1BDD; /* 0x171B1BB1: jne 0x171b1bdd */
L_171B1BB3:
    eax = MEM32(esi + 0x8C); /* 0x171B1BB3: mov eax, dword ptr [esi + 0x8c] */
    /* cmp eax, MEM32(esi + 0x74) */ /* 0x171B1BB9: cmp eax, dword ptr [esi + 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x74));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171B1BCA; /* 0x171B1BBC: jae 0x171b1bca */
L_171B1BBE:
    eax = MEM32(esi); /* 0x171B1BBE: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B1BC0: push esi */
    MEM32(eax + 0x14) = 0x43u; /* 0x171B1BC1: mov dword ptr [eax + 0x14], 0x43 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1BC8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1BCA:
    ecx = MEM32(esi + 0x1A8); /* 0x171B1BCA: mov ecx, dword ptr [esi + 0x1a8] */
    PUSH32(esp, esi); /* 0x171B1BD0: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171B1BD1: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x14) = 0xD2u; /* 0x171B1BD4: mov dword ptr [esi + 0x14], 0xd2 */
    goto L_171B1C05; /* 0x171B1BDB: jmp 0x171b1c05 */
L_171B1BDD:
    /* cmp ecx, 0xCFu */ /* 0x171B1BDD: cmp ecx, 0xcf */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B1BEE; /* 0x171B1BE3: jne 0x171b1bee */
L_171B1BE5:
    MEM32(esi + 0x14) = 0xD2u; /* 0x171B1BE5: mov dword ptr [esi + 0x14], 0xd2 */
    goto L_171B1C05; /* 0x171B1BEC: jmp 0x171b1c05 */
L_171B1BEE:
    /* cmp ecx, 0xD2u */ /* 0x171B1BEE: cmp ecx, 0xd2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD2u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1C05; /* 0x171B1BF4: je 0x171b1c05 */
L_171B1BF6:
    eax = MEM32(esi); /* 0x171B1BF6: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B1BF8: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B1BFF: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B1C00: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1C03: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1C05:
    edx = MEM32(esi + 0x1B8); /* 0x171B1C05: mov edx, dword ptr [esi + 0x1b8] */
    eax = MEM32(edx + 0x14); /* 0x171B1C0B: mov eax, dword ptr [edx + 0x14] */
    /* test eax, eax */ /* 0x171B1C0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1C2C; /* 0x171B1C10: jne 0x171b1c2c */
L_171B1C12:
    eax = MEM32(esi + 0x1B8); /* 0x171B1C12: mov eax, dword ptr [esi + 0x1b8] */
    PUSH32(esp, esi); /* 0x171B1C18: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1C19: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1C1B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1C43; /* 0x171B1C1D: je 0x171b1c43 */
L_171B1C1F:
    ecx = MEM32(esi + 0x1B8); /* 0x171B1C1F: mov ecx, dword ptr [esi + 0x1b8] */
    eax = MEM32(ecx + 0x14); /* 0x171B1C25: mov eax, dword ptr [ecx + 0x14] */
    /* test eax, eax */ /* 0x171B1C28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1C12; /* 0x171B1C2A: je 0x171b1c12 */
L_171B1C2C:
    edx = MEM32(esi + 0x18); /* 0x171B1C2C: mov edx, dword ptr [esi + 0x18] */
    PUSH32(esp, esi); /* 0x171B1C2F: push esi */
    RECOMP_ICALL(MEM32(edx + 0x18)); /* 0x171B1C30: call dword ptr [edx + 0x18] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171B1C33: push esi */
    RECOMP_CALL(sub_171B5C00); /* 0x171B1C34: call 0x171b5c00 */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x171B1C39: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x171B1C3E: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1C3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1C40: ret 4 */
L_171B1C43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B1C43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B1C45: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1C46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B1C47: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B1C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1C50u);

L_171B1C50:
    edi = edi; /* 0x171B1C50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1C52: push ebp */
    ebp = esp; /* 0x171B1C53: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171B1C55: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171B1C56: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x14); /* 0x171B1C59: mov ecx, dword ptr [esi + 0x14] */
    /* cmp ecx, 0xC8u */ /* 0x171B1C5C: cmp ecx, 0xc8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1C7B; /* 0x171B1C62: je 0x171b1c7b */
L_171B1C64:
    /* cmp ecx, 0xC9u */ /* 0x171B1C64: cmp ecx, 0xc9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC9u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1C7B; /* 0x171B1C6A: je 0x171b1c7b */
L_171B1C6C:
    eax = MEM32(esi); /* 0x171B1C6C: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x14u; /* 0x171B1C6E: mov dword ptr [eax + 0x14], 0x14 */
    PUSH32(esp, esi); /* 0x171B1C75: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B1C76: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1C79: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1C7B:
    PUSH32(esp, esi); /* 0x171B1C7B: push esi */
    RECOMP_CALL(sub_171B1AD0); /* 0x171B1C7C: call 0x171b1ad0 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x171B1C81: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B1C83: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B1CAC; /* 0x171B1C84: je 0x171b1cac */
L_171B1C86:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B1C86: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B1CB1; /* 0x171B1C87: jne 0x171b1cb1 */
L_171B1C89:
    eax = MEM32(ebp + 0xC); /* 0x171B1C89: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171B1C8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1C9C; /* 0x171B1C8E: je 0x171b1c9c */
L_171B1C90:
    eax = MEM32(esi); /* 0x171B1C90: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B1C92: push esi */
    MEM32(eax + 0x14) = 0x33u; /* 0x171B1C93: mov dword ptr [eax + 0x14], 0x33 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1C9A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1C9C:
    PUSH32(esp, esi); /* 0x171B1C9C: push esi */
    RECOMP_CALL(sub_171B5C00); /* 0x171B1C9D: call 0x171b5c00 */
    RECOMP_FLAGS_IN();
    eax = 2; /* 0x171B1CA2: mov eax, 2 */
    esi = POP32_VAL(esp); /* 0x171B1CA7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1CA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B1CA9: ret 8 */
L_171B1CAC:
    eax = 1; /* 0x171B1CAC: mov eax, 1 */
L_171B1CB1:
    esi = POP32_VAL(esp); /* 0x171B1CB1: pop esi */
    ebp = POP32_VAL(esp); /* 0x171B1CB2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171B1CB3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171B1CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1CC0u);

L_171B1CC0:
    eax = MEM32(esi); /* 0x171B1CC0: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x171B1CC2: push ebx */
    PUSH32(esp, 1); /* 0x171B1CC3: push 1 */
    PUSH32(esp, esi); /* 0x171B1CC5: push esi */
    MEM32(eax + 0x14) = 0x66u; /* 0x171B1CC6: mov dword ptr [eax + 0x14], 0x66 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B1CCD: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1BC); /* 0x171B1CD0: mov eax, dword ptr [esi + 0x1bc] */
    ecx = MEM32(eax + 0xC); /* 0x171B1CD6: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171B1CD9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x171B1CDB: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1CEB; /* 0x171B1CDD: je 0x171b1ceb */
L_171B1CDF:
    eax = MEM32(esi); /* 0x171B1CDF: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B1CE1: push esi */
    MEM32(eax + 0x14) = 0x3Du; /* 0x171B1CE2: mov dword ptr [eax + 0x14], 0x3d */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1CE9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1CEB:
    eax = esi + 0xF8; /* 0x171B1CEB: lea eax, [esi + 0xf8] */
    ecx = 0x10u; /* 0x171B1CF1: mov ecx, 0x10 */
    SET_LO8(edx, 5); /* 0x171B1CF6: mov dl, 5 */
    goto L_171B1D00; /* 0x171B1CF8: jmp 0x171b1d00 */
L_171B1D00:
    MEM8(eax + (-0x10)) = (uint8_t)(LO8(ebx)); /* 0x171B1D00: mov byte ptr [eax - 0x10], bl */
    MEM8(eax) = (uint8_t)(1); /* 0x171B1D03: mov byte ptr [eax], 1 */
    MEM8(eax + 0x10) = (uint8_t)(LO8(edx)); /* 0x171B1D06: mov byte ptr [eax + 0x10], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B1D09: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171B1D0A: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B1D00; /* 0x171B1D0B: jne 0x171b1d00 */
L_171B1D0D:
    ecx = MEM32(esi + 0x1BC); /* 0x171B1D0D: mov ecx, dword ptr [esi + 0x1bc] */
    MEM32(esi + 0x118) = ebx; /* 0x171B1D13: mov dword ptr [esi + 0x118], ebx */
    MEM32(esi + 0x28) = ebx; /* 0x171B1D19: mov dword ptr [esi + 0x28], ebx */
    MEM32(esi + 0x130) = ebx; /* 0x171B1D1C: mov dword ptr [esi + 0x130], ebx */
    MEM32(esi + 0x11C) = ebx; /* 0x171B1D22: mov dword ptr [esi + 0x11c], ebx */
    MEM8(esi + 0x122) = (uint8_t)(LO8(ebx)); /* 0x171B1D28: mov byte ptr [esi + 0x122], bl */
    MEM32(esi + 0x128) = ebx; /* 0x171B1D2E: mov dword ptr [esi + 0x128], ebx */
    MEM8(esi + 0x12C) = (uint8_t)(LO8(ebx)); /* 0x171B1D34: mov byte ptr [esi + 0x12c], bl */
    MEM8(esi + 0x120) = (uint8_t)(1); /* 0x171B1D3A: mov byte ptr [esi + 0x120], 1 */
    MEM8(esi + 0x121) = (uint8_t)(1); /* 0x171B1D41: mov byte ptr [esi + 0x121], 1 */
    MEM16(esi + 0x124) = (uint16_t)(1); /* 0x171B1D48: mov word ptr [esi + 0x124], 1 */
    MEM16(esi + 0x126) = (uint16_t)(1); /* 0x171B1D51: mov word ptr [esi + 0x126], 1 */
    MEM32(ecx + 0xC) = 1; /* 0x171B1D5A: mov dword ptr [ecx + 0xc], 1 */
    eax = 1; /* 0x171B1D61: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B1D66: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B1D67: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B1D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B1D70u);

L_171B1D70:
    edi = edi; /* 0x171B1D70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B1D72: push ebp */
    ebp = esp; /* 0x171B1D73: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171B1D75: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x18); /* 0x171B1D78: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, ebx); /* 0x171B1D7B: push ebx */
    ebx = MEM32(eax + 0x4); /* 0x171B1D7C: mov ebx, dword ptr [eax + 4] */
    /* test ebx, ebx */ /* 0x171B1D7F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B1D81: push edi */
    edi = MEM32(eax); /* 0x171B1D82: mov edi, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B1D84: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0xE0) = ecx; /* 0x171B1D87: mov dword ptr [esi + 0xe0], ecx */
    MEM32(esi + 0xE4) = edx; /* 0x171B1D8D: mov dword ptr [esi + 0xe4], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1DA9; /* 0x171B1D93: jne 0x171b1da9 */
L_171B1D95:
    PUSH32(esp, esi); /* 0x171B1D95: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B1D96: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1D99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1D9B: je 0x171b203e */
L_171B1DA1:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1DA1: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(eax); /* 0x171B1DA4: mov edi, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x171B1DA6: mov ebx, dword ptr [eax + 4] */
L_171B1DA9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B1DA9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(ecx, MEM8(edi)); /* 0x171B1DAB: mov ch, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1DAD: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1DAE: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1DAF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B1DB1: mov dword ptr [ebp - 8], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1DCA; /* 0x171B1DB4: jne 0x171b1dca */
L_171B1DB6:
    PUSH32(esp, esi); /* 0x171B1DB6: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B1DB7: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1DBA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1DBC: je 0x171b203e */
L_171B1DC2:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1DC2: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(eax); /* 0x171B1DC5: mov edi, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x171B1DC7: mov ebx, dword ptr [eax + 4] */
L_171B1DCA:
    edx = (uint32_t)MEM8(edi); /* 0x171B1DCA: movzx edx, byte ptr [edi] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171B1DCD: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171B1DD0: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1DD2: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1DD3: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1DD4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B1DD6: mov dword ptr [ebp - 8], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1DEF; /* 0x171B1DD9: jne 0x171b1def */
L_171B1DDB:
    PUSH32(esp, esi); /* 0x171B1DDB: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B1DDC: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1DDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1DE1: je 0x171b203e */
L_171B1DE7:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1DE7: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(eax); /* 0x171B1DEA: mov edi, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x171B1DEC: mov ebx, dword ptr [eax + 4] */
L_171B1DEF:
    ecx = (uint32_t)MEM8(edi); /* 0x171B1DEF: movzx ecx, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1DF2: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1DF3: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1DF4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xD8) = ecx; /* 0x171B1DF6: mov dword ptr [esi + 0xd8], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1E12; /* 0x171B1DFC: jne 0x171b1e12 */
L_171B1DFE:
    PUSH32(esp, esi); /* 0x171B1DFE: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B1DFF: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1E02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1E04: je 0x171b203e */
L_171B1E0A:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1E0A: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(eax); /* 0x171B1E0D: mov edi, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x171B1E0F: mov ebx, dword ptr [eax + 4] */
L_171B1E12:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B1E12: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(edx, MEM8(edi)); /* 0x171B1E14: mov dh, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1E16: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1E17: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1E18: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x20) = edx; /* 0x171B1E1A: mov dword ptr [esi + 0x20], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1E33; /* 0x171B1E1D: jne 0x171b1e33 */
L_171B1E1F:
    PUSH32(esp, esi); /* 0x171B1E1F: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B1E20: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1E23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1E25: je 0x171b203e */
L_171B1E2B:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1E2B: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(eax); /* 0x171B1E2E: mov edi, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x171B1E30: mov ebx, dword ptr [eax + 4] */
L_171B1E33:
    ecx = (uint32_t)MEM8(edi); /* 0x171B1E33: movzx ecx, byte ptr [edi] */
    edx = MEM32(esi + 0x20); /* 0x171B1E36: mov edx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171B1E39: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1E3B: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1E3C: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1E3D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x20) = edx; /* 0x171B1E3F: mov dword ptr [esi + 0x20], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1E58; /* 0x171B1E42: jne 0x171b1e58 */
L_171B1E44:
    PUSH32(esp, esi); /* 0x171B1E44: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B1E45: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1E48: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1E4A: je 0x171b203e */
L_171B1E50:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1E50: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(eax); /* 0x171B1E53: mov edi, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x171B1E55: mov ebx, dword ptr [eax + 4] */
L_171B1E58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B1E58: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(edx, MEM8(edi)); /* 0x171B1E5A: mov dh, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1E5C: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1E5D: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1E5E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = edx; /* 0x171B1E60: mov dword ptr [esi + 0x1c], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1E79; /* 0x171B1E63: jne 0x171b1e79 */
L_171B1E65:
    PUSH32(esp, esi); /* 0x171B1E65: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B1E66: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1E69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1E6B: je 0x171b203e */
L_171B1E71:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1E71: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(eax); /* 0x171B1E74: mov edi, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x171B1E76: mov ebx, dword ptr [eax + 4] */
L_171B1E79:
    ecx = (uint32_t)MEM8(edi); /* 0x171B1E79: movzx ecx, byte ptr [edi] */
    edx = MEM32(esi + 0x1C); /* 0x171B1E7C: mov edx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171B1E7F: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1E81: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1E82: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1E83: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x1C) = edx; /* 0x171B1E85: mov dword ptr [esi + 0x1c], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1E9E; /* 0x171B1E88: jne 0x171b1e9e */
L_171B1E8A:
    PUSH32(esp, esi); /* 0x171B1E8A: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B1E8B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1E8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1E90: je 0x171b203e */
L_171B1E96:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1E96: mov eax, dword ptr [ebp - 4] */
    edi = MEM32(eax); /* 0x171B1E99: mov edi, dword ptr [eax] */
    ebx = MEM32(eax + 0x4); /* 0x171B1E9B: mov ebx, dword ptr [eax + 4] */
L_171B1E9E:
    edx = (uint32_t)MEM8(edi); /* 0x171B1E9E: movzx edx, byte ptr [edi] */
    eax = MEM32(esi); /* 0x171B1EA1: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0x1A4); /* 0x171B1EA3: mov ecx, dword ptr [esi + 0x1a4] */
    MEM32(esi + 0x24) = edx; /* 0x171B1EA9: mov dword ptr [esi + 0x24], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 8; /* 0x171B1EAC: sub dword ptr [ebp - 8], 8 */
    _flag_k = FK_CMP;
    edx = MEM32(esi + 0x1C); /* 0x171B1EB0: mov edx, dword ptr [esi + 0x1c] */
    MEM32(eax + 0x18) = ecx; /* 0x171B1EB3: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(esi + 0x20); /* 0x171B1EB6: mov ecx, dword ptr [esi + 0x20] */
    MEM32(eax + 0x1C) = edx; /* 0x171B1EB9: mov dword ptr [eax + 0x1c], edx */
    edx = MEM32(esi + 0x24); /* 0x171B1EBC: mov edx, dword ptr [esi + 0x24] */
    PUSH32(esp, 1); /* 0x171B1EBF: push 1 */
    MEM32(eax + 0x20) = ecx; /* 0x171B1EC1: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = edx; /* 0x171B1EC4: mov dword ptr [eax + 0x24], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1EC7: dec ebx */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171B1EC8: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1EC9: inc edi */
    _flag_k = FK_INC;
    MEM32(eax + 0x14) = 0x64u; /* 0x171B1ECA: mov dword ptr [eax + 0x14], 0x64 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B1ED1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x1BC); /* 0x171B1ED4: mov eax, dword ptr [esi + 0x1bc] */
    ecx = MEM32(eax + 0x10); /* 0x171B1EDA: mov ecx, dword ptr [eax + 0x10] */
    /* test ecx, ecx */ /* 0x171B1EDD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1EED; /* 0x171B1EDF: je 0x171b1eed */
L_171B1EE1:
    eax = MEM32(esi); /* 0x171B1EE1: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B1EE3: push esi */
    MEM32(eax + 0x14) = 0x3Au; /* 0x171B1EE4: mov dword ptr [eax + 0x14], 0x3a */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1EEB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1EED:
    eax = MEM32(esi + 0x20); /* 0x171B1EED: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x171B1EF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1F02; /* 0x171B1EF2: jbe 0x171b1f02 */
L_171B1EF4:
    eax = MEM32(esi + 0x1C); /* 0x171B1EF4: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x171B1EF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B1F02; /* 0x171B1EF9: jbe 0x171b1f02 */
L_171B1EFB:
    eax = MEM32(esi + 0x24); /* 0x171B1EFB: mov eax, dword ptr [esi + 0x24] */
    /* test eax, eax */ /* 0x171B1EFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B1F0E; /* 0x171B1F00: jg 0x171b1f0e */
L_171B1F02:
    eax = MEM32(esi); /* 0x171B1F02: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B1F04: push esi */
    MEM32(eax + 0x14) = 0x20u; /* 0x171B1F05: mov dword ptr [eax + 0x14], 0x20 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1F0C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1F0E:
    eax = MEM32(esi + 0x24); /* 0x171B1F0E: mov eax, dword ptr [esi + 0x24] */
    ecx = eax + eax * 2; /* 0x171B1F11: lea ecx, [eax + eax*2] */
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x171B1F14: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B1F25; /* 0x171B1F17: je 0x171b1f25 */
L_171B1F19:
    eax = MEM32(esi); /* 0x171B1F19: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B1F1B: push esi */
    MEM32(eax + 0x14) = 0xBu; /* 0x171B1F1C: mov dword ptr [eax + 0x14], 0xb */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B1F23: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B1F25:
    eax = MEM32(esi + 0xDC); /* 0x171B1F25: mov eax, dword ptr [esi + 0xdc] */
    /* test eax, eax */ /* 0x171B1F2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1F44; /* 0x171B1F2D: jne 0x171b1f44 */
L_171B1F2F:
    eax = MEM32(esi + 0x24); /* 0x171B1F2F: mov eax, dword ptr [esi + 0x24] */
    edx = MEM32(esi + 0x4); /* 0x171B1F32: mov edx, dword ptr [esi + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54u); /* 0x171B1F35: imul eax, eax, 0x54 */
    PUSH32(esp, eax); /* 0x171B1F38: push eax */
    PUSH32(esp, 1); /* 0x171B1F39: push 1 */
    PUSH32(esp, esi); /* 0x171B1F3B: push esi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171B1F3C: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xDC) = eax; /* 0x171B1F3E: mov dword ptr [esi + 0xdc], eax */
L_171B1F44:
    eax = MEM32(esi + 0x24); /* 0x171B1F44: mov eax, dword ptr [esi + 0x24] */
    /* test eax, eax */ /* 0x171B1F47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0xDC); /* 0x171B1F49: mov ecx, dword ptr [esi + 0xdc] */
    MEM32(ebp + (-0xC)) = 0; /* 0x171B1F4F: mov dword ptr [ebp - 0xc], 0 */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B1F56: mov dword ptr [ebp - 8], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B1F80; /* 0x171B1F59: jg 0x171b1f80 */
L_171B1F5B:
    eax = MEM32(ebp + (-0x4)); /* 0x171B1F5B: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x1BC); /* 0x171B1F5E: mov edx, dword ptr [esi + 0x1bc] */
    MEM32(edx + 0x10) = 1; /* 0x171B1F64: mov dword ptr [edx + 0x10], 1 */
    MEM32(eax) = edi; /* 0x171B1F6B: mov dword ptr [eax], edi */
    MEM32(eax + 0x4) = ebx; /* 0x171B1F6D: mov dword ptr [eax + 4], ebx */
    edi = POP32_VAL(esp); /* 0x171B1F70: pop edi */
    eax = 1; /* 0x171B1F71: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B1F76: pop ebx */
    esp = ebp; /* 0x171B1F77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B1F79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B1F7A: ret  */
L_171B1F7B:
    ecx = MEM32(ebp + (-0x8)); /* 0x171B1F7B: mov ecx, dword ptr [ebp - 8] */
    edi = edi; /* 0x171B1F7E: mov edi, edi */
L_171B1F80:
    /* test ebx, ebx */ /* 0x171B1F80: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0xC)); /* 0x171B1F82: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0x4) = edx; /* 0x171B1F85: mov dword ptr [ecx + 4], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1FA1; /* 0x171B1F88: jne 0x171b1fa1 */
L_171B1F8A:
    ebx = MEM32(ebp + (-0x4)); /* 0x171B1F8A: mov ebx, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x171B1F8D: push esi */
    RECOMP_ICALL(MEM32(ebx + 0xC)); /* 0x171B1F8E: call dword ptr [ebx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1F91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1F93: je 0x171b203e */
L_171B1F99:
    edi = MEM32(ebx); /* 0x171B1F99: mov edi, dword ptr [ebx] */
    ebx = MEM32(ebx + 0x4); /* 0x171B1F9B: mov ebx, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171B1F9E: mov ecx, dword ptr [ebp - 8] */
L_171B1FA1:
    eax = (uint32_t)MEM8(edi); /* 0x171B1FA1: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1FA4: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1FA5: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1FA6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x171B1FA8: mov dword ptr [ecx], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1FC3; /* 0x171B1FAA: jne 0x171b1fc3 */
L_171B1FAC:
    ebx = MEM32(ebp + (-0x4)); /* 0x171B1FAC: mov ebx, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x171B1FAF: push esi */
    RECOMP_ICALL(MEM32(ebx + 0xC)); /* 0x171B1FB0: call dword ptr [ebx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1FB3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1FB5: je 0x171b203e */
L_171B1FBB:
    edi = MEM32(ebx); /* 0x171B1FBB: mov edi, dword ptr [ebx] */
    ebx = MEM32(ebx + 0x4); /* 0x171B1FBD: mov ebx, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171B1FC0: mov ecx, dword ptr [ebp - 8] */
L_171B1FC3:
    eax = (uint32_t)MEM8(edi); /* 0x171B1FC3: movzx eax, byte ptr [edi] */
    edx = eax; /* 0x171B1FC6: mov edx, eax */
    if (4u) _cf = (((edx) >> 3) & 1u); /* 0x171B1FC8: sar edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 4u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B1FCB: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFu);
    edx = edx & 0xFu; /* 0x171B1FCC: and edx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x171B1FCF: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B1FD2: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B1FD3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = edx; /* 0x171B1FD5: mov dword ptr [ecx + 8], edx */
    MEM32(ecx + 0xC) = eax; /* 0x171B1FD8: mov dword ptr [ecx + 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B1FF0; /* 0x171B1FDB: jne 0x171b1ff0 */
L_171B1FDD:
    ebx = MEM32(ebp + (-0x4)); /* 0x171B1FDD: mov ebx, dword ptr [ebp - 4] */
    PUSH32(esp, esi); /* 0x171B1FE0: push esi */
    RECOMP_ICALL(MEM32(ebx + 0xC)); /* 0x171B1FE1: call dword ptr [ebx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B1FE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B203E; /* 0x171B1FE6: je 0x171b203e */
L_171B1FE8:
    edi = MEM32(ebx); /* 0x171B1FE8: mov edi, dword ptr [ebx] */
    ebx = MEM32(ebx + 0x4); /* 0x171B1FEA: mov ebx, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171B1FED: mov ecx, dword ptr [ebp - 8] */
L_171B1FF0:
    eax = (uint32_t)MEM8(edi); /* 0x171B1FF0: movzx eax, byte ptr [edi] */
    edx = MEM32(ecx); /* 0x171B1FF3: mov edx, dword ptr [ecx] */
    MEM32(ecx + 0x10) = eax; /* 0x171B1FF5: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(esi); /* 0x171B1FF8: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = edx; /* 0x171B1FFA: mov dword ptr [eax + 0x18], edx */
    edx = MEM32(ecx + 0x8); /* 0x171B1FFD: mov edx, dword ptr [ecx + 8] */
    MEM32(eax + 0x1C) = edx; /* 0x171B2000: mov dword ptr [eax + 0x1c], edx */
    edx = MEM32(ecx + 0xC); /* 0x171B2003: mov edx, dword ptr [ecx + 0xc] */
    MEM32(eax + 0x20) = edx; /* 0x171B2006: mov dword ptr [eax + 0x20], edx */
    ecx = MEM32(ecx + 0x10); /* 0x171B2009: mov ecx, dword ptr [ecx + 0x10] */
    PUSH32(esp, 1); /* 0x171B200C: push 1 */
    MEM32(eax + 0x24) = ecx; /* 0x171B200E: mov dword ptr [eax + 0x24], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B2011: dec ebx */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171B2012: push esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B2013: inc edi */
    _flag_k = FK_INC;
    MEM32(eax + 0x14) = 0x65u; /* 0x171B2014: mov dword ptr [eax + 0x14], 0x65 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B201B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x171B201E: mov eax, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x171B2021: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(esi + 0x24); /* 0x171B2024: mov ecx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B2027: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x54u; /* 0x171B2028: add edx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B202B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x171B202D: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x171B2030: mov dword ptr [ebp - 8], edx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B1F7B; /* 0x171B2033: jl 0x171b1f7b */
L_171B2039:
    RECOMP_BACKEDGE();
    goto L_171B1F5B; /* 0x171B2039: jmp 0x171b1f5b */
L_171B203E:
    edi = POP32_VAL(esp); /* 0x171B203E: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B203F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B2041: pop ebx */
    esp = ebp; /* 0x171B2042: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2044: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2045: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B2050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B2050u);

L_171B2050:
    edi = edi; /* 0x171B2050: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B2052: push ebp */
    ebp = esp; /* 0x171B2053: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171B2055: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x1BC); /* 0x171B2058: mov ecx, dword ptr [esi + 0x1bc] */
    edx = MEM32(ecx + 0x10); /* 0x171B205E: mov edx, dword ptr [ecx + 0x10] */
    /* test edx, edx */ /* 0x171B2061: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171B2063: push ebx */
    PUSH32(esp, edi); /* 0x171B2064: push edi */
    edi = MEM32(esi + 0x18); /* 0x171B2065: mov edi, dword ptr [esi + 0x18] */
    eax = MEM32(edi + 0x4); /* 0x171B2068: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B206B: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x18)) = edi; /* 0x171B206D: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2070: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2084; /* 0x171B2073: jne 0x171b2084 */
L_171B2075:
    eax = MEM32(esi); /* 0x171B2075: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B2077: push esi */
    MEM32(eax + 0x14) = 0x3Eu; /* 0x171B2078: mov dword ptr [eax + 0x14], 0x3e */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B207F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171B2081: mov eax, dword ptr [ebp - 4] */
L_171B2084:
    /* test eax, eax */ /* 0x171B2084: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B209E; /* 0x171B2086: jne 0x171b209e */
L_171B2088:
    PUSH32(esp, esi); /* 0x171B2088: push esi */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B2089: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B208C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B227E; /* 0x171B208E: je 0x171b227e */
L_171B2094:
    edx = MEM32(edi + 0x4); /* 0x171B2094: mov edx, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B2097: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B2099: mov dword ptr [ebp - 4], edx */
    eax = edx; /* 0x171B209C: mov eax, edx */
L_171B209E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B209E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(ecx, MEM8(ebx)); /* 0x171B20A0: mov ch, byte ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B20A2: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B20A3: inc ebx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x171B20A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B20A6: mov dword ptr [ebp - 8], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B20C1; /* 0x171B20A9: jne 0x171b20c1 */
L_171B20AB:
    PUSH32(esp, esi); /* 0x171B20AB: push esi */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B20AC: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B20AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B227E; /* 0x171B20B1: je 0x171b227e */
L_171B20B7:
    edx = MEM32(edi + 0x4); /* 0x171B20B7: mov edx, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B20BA: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B20BC: mov dword ptr [ebp - 4], edx */
    eax = edx; /* 0x171B20BF: mov eax, edx */
L_171B20C1:
    ecx = (uint32_t)MEM8(ebx); /* 0x171B20C1: movzx ecx, byte ptr [ebx] */
    edx = MEM32(ebp + (-0x8)); /* 0x171B20C4: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171B20C7: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B20C9: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B20CA: inc ebx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x171B20CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x171B20CD: mov dword ptr [ebp - 8], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B20E8; /* 0x171B20D0: jne 0x171b20e8 */
L_171B20D2:
    PUSH32(esp, esi); /* 0x171B20D2: push esi */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B20D3: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B20D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B227E; /* 0x171B20D8: je 0x171b227e */
L_171B20DE:
    edx = MEM32(edi + 0x4); /* 0x171B20DE: mov edx, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B20E1: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B20E3: mov dword ptr [ebp - 4], edx */
    eax = edx; /* 0x171B20E6: mov eax, edx */
L_171B20E8:
    ecx = (uint32_t)MEM8(ebx); /* 0x171B20E8: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B20EB: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B20EC: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi); /* 0x171B20EF: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171B20F1: push 1 */
    MEM32(eax + 0x14) = 0x67u; /* 0x171B20F3: mov dword ptr [eax + 0x14], 0x67 */
    PUSH32(esp, esi); /* 0x171B20FA: push esi */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171B20FB: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B20FE: inc ebx */
    _flag_k = FK_INC;
    MEM32(eax + 0x18) = ecx; /* 0x171B20FF: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2102: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x171B2105: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x171B2108: mov edx, dword ptr [ebp - 8] */
    ecx = eax + eax + 0x6; /* 0x171B210B: lea ecx, [eax + eax + 6] */
    /* cmp edx, ecx */ /* 0x171B210F: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B211D; /* 0x171B2111: jne 0x171b211d */
L_171B2113:
    /* cmp eax, 1 */ /* 0x171B2113: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B211D; /* 0x171B2116: jl 0x171b211d */
L_171B2118:
    /* cmp eax, 4 */ /* 0x171B2118: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B212C; /* 0x171B211B: jle 0x171b212c */
L_171B211D:
    eax = MEM32(esi); /* 0x171B211D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171B211F: push esi */
    MEM32(eax + 0x14) = 0xBu; /* 0x171B2120: mov dword ptr [eax + 0x14], 0xb */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B2127: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x171B2129: mov eax, dword ptr [ebp - 0x10] */
L_171B212C:
    /* test eax, eax */ /* 0x171B212C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14C) = eax; /* 0x171B212E: mov dword ptr [esi + 0x14c], eax */
    MEM32(ebp + (-0x14)) = 0; /* 0x171B2134: mov dword ptr [ebp - 0x14], 0 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B222C; /* 0x171B213B: jle 0x171b222c */
L_171B2141:
    edx = esi + 0x150; /* 0x171B2141: lea edx, [esi + 0x150] */
    MEM32(ebp + (-0xC)) = edx; /* 0x171B2147: mov dword ptr [ebp - 0xc], edx */
    ebx = ebx; /* 0x171B214A: lea ebx, [ebx] */
L_171B2150:
    eax = MEM32(ebp + (-0x4)); /* 0x171B2150: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171B2153: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B216B; /* 0x171B2155: jne 0x171b216b */
L_171B2157:
    PUSH32(esp, esi); /* 0x171B2157: push esi */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B2158: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B215B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B227E; /* 0x171B215D: je 0x171b227e */
L_171B2163:
    eax = MEM32(edi + 0x4); /* 0x171B2163: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B2166: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2168: mov dword ptr [ebp - 4], eax */
L_171B216B:
    eax = MEM32(ebp + (-0x4)); /* 0x171B216B: mov eax, dword ptr [ebp - 4] */
    ecx = (uint32_t)MEM8(ebx); /* 0x171B216E: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B2171: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B2172: inc ebx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x171B2173: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2175: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171B2178: mov dword ptr [ebp - 8], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2191; /* 0x171B217B: jne 0x171b2191 */
L_171B217D:
    PUSH32(esp, esi); /* 0x171B217D: push esi */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B217E: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2181: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B227E; /* 0x171B2183: je 0x171b227e */
L_171B2189:
    edx = MEM32(edi + 0x4); /* 0x171B2189: mov edx, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B218C: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B218E: mov dword ptr [ebp - 4], edx */
L_171B2191:
    eax = MEM32(ebp + (-0x4)); /* 0x171B2191: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x24); /* 0x171B2194: mov edx, dword ptr [esi + 0x24] */
    edi = MEM32(esi + 0xDC); /* 0x171B2197: mov edi, dword ptr [esi + 0xdc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B219D: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B219E: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM8(ebx); /* 0x171B21A1: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B21A4: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B21A5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171B21A7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x171B21A9: mov dword ptr [ebp - 0x1c], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B21C2; /* 0x171B21AC: jle 0x171b21c2 */
L_171B21AE:
    edi = edi; /* 0x171B21AE: mov edi, edi */
L_171B21B0:
    edx = MEM32(ebp + (-0x8)); /* 0x171B21B0: mov edx, dword ptr [ebp - 8] */
    /* cmp edx, MEM32(edi) */ /* 0x171B21B3: cmp edx, dword ptr [edi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B21D7; /* 0x171B21B5: je 0x171b21d7 */
L_171B21B7:
    edx = MEM32(esi + 0x24); /* 0x171B21B7: mov edx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171B21BA: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171B21BB: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x171B21BE: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B21B0; /* 0x171B21C0: jl 0x171b21b0 */
L_171B21C2:
    eax = MEM32(esi); /* 0x171B21C2: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171B21C4: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x14) = 5; /* 0x171B21C7: mov dword ptr [eax + 0x14], 5 */
    PUSH32(esp, esi); /* 0x171B21CE: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B21CF: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B21D2: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x171B21D4: mov eax, dword ptr [ebp - 0x1c] */
L_171B21D7:
    edx = MEM32(ebp + (-0xC)); /* 0x171B21D7: mov edx, dword ptr [ebp - 0xc] */
    ecx = eax; /* 0x171B21DA: mov ecx, eax */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x171B21DC: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x171B21DF: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x18) = eax; /* 0x171B21E2: mov dword ptr [edi + 0x18], eax */
    MEM32(edx) = edi; /* 0x171B21E5: mov dword ptr [edx], edi */
    eax = MEM32(esi); /* 0x171B21E7: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + (-0x8)); /* 0x171B21E9: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x171B21EC: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = ecx; /* 0x171B21EF: mov dword ptr [edi + 0x14], ecx */
    MEM32(eax + 0x18) = edx; /* 0x171B21F2: mov dword ptr [eax + 0x18], edx */
    ecx = MEM32(edi + 0x14); /* 0x171B21F5: mov ecx, dword ptr [edi + 0x14] */
    MEM32(eax + 0x1C) = ecx; /* 0x171B21F8: mov dword ptr [eax + 0x1c], ecx */
    edx = MEM32(edi + 0x18); /* 0x171B21FB: mov edx, dword ptr [edi + 0x18] */
    PUSH32(esp, 1); /* 0x171B21FE: push 1 */
    MEM32(eax + 0x20) = edx; /* 0x171B2200: mov dword ptr [eax + 0x20], edx */
    PUSH32(esp, esi); /* 0x171B2203: push esi */
    MEM32(eax + 0x14) = 0x68u; /* 0x171B2204: mov dword ptr [eax + 0x14], 0x68 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B220B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x171B220E: mov eax, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0xC)); /* 0x171B2211: mov edx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x10)); /* 0x171B2214: mov ecx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x18)); /* 0x171B2217: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B221A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171B221B: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171B221E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x171B2220: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0xC)) = edx; /* 0x171B2223: mov dword ptr [ebp - 0xc], edx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B2150; /* 0x171B2226: jl 0x171b2150 */
L_171B222C:
    eax = MEM32(ebp + (-0x4)); /* 0x171B222C: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171B222F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2243; /* 0x171B2231: jne 0x171b2243 */
L_171B2233:
    PUSH32(esp, esi); /* 0x171B2233: push esi */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B2234: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2237: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B227E; /* 0x171B2239: je 0x171b227e */
L_171B223B:
    eax = MEM32(edi + 0x4); /* 0x171B223B: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B223E: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2240: mov dword ptr [ebp - 4], eax */
L_171B2243:
    ecx = (uint32_t)MEM8(ebx); /* 0x171B2243: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B2246: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B2247: inc ebx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x171B2248: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x194) = ecx; /* 0x171B224A: mov dword ptr [esi + 0x194], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2264; /* 0x171B2250: jne 0x171b2264 */
L_171B2252:
    PUSH32(esp, esi); /* 0x171B2252: push esi */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B2253: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2256: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B227E; /* 0x171B2258: je 0x171b227e */
L_171B225A:
    ecx = MEM32(edi + 0x4); /* 0x171B225A: mov ecx, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B225D: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B225F: mov dword ptr [ebp - 4], ecx */
    eax = ecx; /* 0x171B2262: mov eax, ecx */
L_171B2264:
    ecx = (uint32_t)MEM8(ebx); /* 0x171B2264: movzx ecx, byte ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B2267: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B2268: inc ebx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x171B2269: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B226B: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0x198) = ecx; /* 0x171B226E: mov dword ptr [esi + 0x198], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B228E; /* 0x171B2274: jne 0x171b228e */
L_171B2276:
    PUSH32(esp, esi); /* 0x171B2276: push esi */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B2277: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B227A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2286; /* 0x171B227C: jne 0x171b2286 */
L_171B227E:
    edi = POP32_VAL(esp); /* 0x171B227E: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B227F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B2281: pop ebx */
    esp = ebp; /* 0x171B2282: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2284: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2285: ret  */
L_171B2286:
    edx = MEM32(edi + 0x4); /* 0x171B2286: mov edx, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B2289: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B228B: mov dword ptr [ebp - 4], edx */
L_171B228E:
    eax = (uint32_t)MEM8(ebx); /* 0x171B228E: movzx eax, byte ptr [ebx] */
    edx = MEM32(esi + 0x194); /* 0x171B2291: mov edx, dword ptr [esi + 0x194] */
    ecx = eax; /* 0x171B2297: mov ecx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x171B2299: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x171B229C: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x171B229F: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x171B22A2: mov dword ptr [ebp - 0x1c], eax */
    MEM32(esi + 0x1A0) = eax; /* 0x171B22A5: mov dword ptr [esi + 0x1a0], eax */
    eax = MEM32(esi); /* 0x171B22AB: mov eax, dword ptr [esi] */
    MEM32(eax + 0x18) = edx; /* 0x171B22AD: mov dword ptr [eax + 0x18], edx */
    edx = MEM32(esi + 0x198); /* 0x171B22B0: mov edx, dword ptr [esi + 0x198] */
    MEM32(eax + 0x20) = ecx; /* 0x171B22B6: mov dword ptr [eax + 0x20], ecx */
    MEM32(esi + 0x19C) = ecx; /* 0x171B22B9: mov dword ptr [esi + 0x19c], ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x171B22BF: mov ecx, dword ptr [ebp - 0x1c] */
    PUSH32(esp, 1); /* 0x171B22C2: push 1 */
    MEM32(eax + 0x1C) = edx; /* 0x171B22C4: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x24) = ecx; /* 0x171B22C7: mov dword ptr [eax + 0x24], ecx */
    PUSH32(esp, esi); /* 0x171B22CA: push esi */
    MEM32(eax + 0x14) = 0x69u; /* 0x171B22CB: mov dword ptr [eax + 0x14], 0x69 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B22D2: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x94); /* 0x171B22D5: mov eax, dword ptr [esi + 0x94] */
    edx = MEM32(esi + 0x1BC); /* 0x171B22DB: mov edx, dword ptr [esi + 0x1bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B22E1: inc eax */
    _flag_k = FK_INC;
    MEM32(esi + 0x94) = eax; /* 0x171B22E2: mov dword ptr [esi + 0x94], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x171B22E8: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B22EB: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B22EC: dec eax */
    _flag_k = FK_DEC;
    MEM32(edx + 0x14) = 0; /* 0x171B22ED: mov dword ptr [edx + 0x14], 0 */
    MEM32(edi) = ebx; /* 0x171B22F4: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = eax; /* 0x171B22F6: mov dword ptr [edi + 4], eax */
    edi = POP32_VAL(esp); /* 0x171B22F9: pop edi */
    eax = 1; /* 0x171B22FA: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B22FF: pop ebx */
    esp = ebp; /* 0x171B2300: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2302: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2303: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B2310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B2310u);

L_171B2310:
    edi = edi; /* 0x171B2310: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B2312: push ebp */
    ebp = esp; /* 0x171B2313: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x171B2315: sub esp, 0x134 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171B231B: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x171B2320: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2321: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x18); /* 0x171B2324: mov eax, dword ptr [ebx + 0x18] */
    esi = MEM32(eax); /* 0x171B2327: mov esi, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x171B2329: push edi */
    edi = MEM32(eax + 0x4); /* 0x171B232A: mov edi, dword ptr [eax + 4] */
    /* test edi, edi */ /* 0x171B232D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x124)) = eax; /* 0x171B232F: mov dword ptr [ebp - 0x124], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B235E; /* 0x171B2335: jne 0x171b235e */
L_171B2337:
    PUSH32(esp, ebx); /* 0x171B2337: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B2338: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B233B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2677; /* 0x171B233D: je 0x171b2677 */
L_171B2343:
    eax = MEM32(ebp + (-0x124)); /* 0x171B2343: mov eax, dword ptr [ebp - 0x124] */
    ecx = MEM32(eax); /* 0x171B2349: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x171B234B: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x120)) = ecx; /* 0x171B234E: mov dword ptr [ebp - 0x120], ecx */
    MEM32(ebp + (-0x11C)) = edx; /* 0x171B2354: mov dword ptr [ebp - 0x11c], edx */
    esi = ecx; /* 0x171B235A: mov esi, ecx */
    edi = edx; /* 0x171B235C: mov edi, edx */
L_171B235E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B235E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(ecx, MEM8(esi)); /* 0x171B2360: mov ch, byte ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B2362: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B2363: inc esi */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x171B2364: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x128)) = ecx; /* 0x171B2366: mov dword ptr [ebp - 0x128], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B239B; /* 0x171B236C: jne 0x171b239b */
L_171B236E:
    PUSH32(esp, ebx); /* 0x171B236E: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B236F: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2372: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2677; /* 0x171B2374: je 0x171b2677 */
L_171B237A:
    eax = MEM32(ebp + (-0x124)); /* 0x171B237A: mov eax, dword ptr [ebp - 0x124] */
    ecx = MEM32(eax); /* 0x171B2380: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x171B2382: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x120)) = ecx; /* 0x171B2385: mov dword ptr [ebp - 0x120], ecx */
    esi = ecx; /* 0x171B238B: mov esi, ecx */
    ecx = MEM32(ebp + (-0x128)); /* 0x171B238D: mov ecx, dword ptr [ebp - 0x128] */
    MEM32(ebp + (-0x11C)) = edx; /* 0x171B2393: mov dword ptr [ebp - 0x11c], edx */
    edi = edx; /* 0x171B2399: mov edi, edx */
L_171B239B:
    edx = (uint32_t)MEM8(esi); /* 0x171B239B: movzx edx, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171B239E: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B23A0: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x171B23A1: sub ecx, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B23A4: inc esi */
    _flag_k = FK_INC;
    /* cmp ecx, 0x10u */ /* 0x171B23A5: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x128)) = ecx; /* 0x171B23A8: mov dword ptr [ebp - 0x128], ecx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B2649; /* 0x171B23AE: jle 0x171b2649 */
L_171B23B4:
    /* test edi, edi */ /* 0x171B23B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B23DF; /* 0x171B23B6: jne 0x171b23df */
L_171B23B8:
    PUSH32(esp, ebx); /* 0x171B23B8: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171B23B9: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B23BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2677; /* 0x171B23BE: je 0x171b2677 */
L_171B23C4:
    eax = MEM32(ebp + (-0x124)); /* 0x171B23C4: mov eax, dword ptr [ebp - 0x124] */
    ecx = MEM32(eax); /* 0x171B23CA: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x171B23CC: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x120)) = ecx; /* 0x171B23CF: mov dword ptr [ebp - 0x120], ecx */
    MEM32(ebp + (-0x11C)) = edx; /* 0x171B23D5: mov dword ptr [ebp - 0x11c], edx */
    esi = ecx; /* 0x171B23DB: mov esi, ecx */
    edi = edx; /* 0x171B23DD: mov edi, edx */
L_171B23DF:
    ecx = (uint32_t)MEM8(esi); /* 0x171B23DF: movzx ecx, byte ptr [esi] */
    eax = MEM32(ebx); /* 0x171B23E2: mov eax, dword ptr [ebx] */
    PUSH32(esp, 1); /* 0x171B23E4: push 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B23E6: dec edi */
    _flag_k = FK_DEC;
    MEM32(eax + 0x14) = 0x50u; /* 0x171B23E7: mov dword ptr [eax + 0x14], 0x50 */
    PUSH32(esp, ebx); /* 0x171B23EE: push ebx */
    MEM32(ebp + (-0x134)) = ecx; /* 0x171B23EF: mov dword ptr [ebp - 0x134], ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B23F5: inc esi */
    _flag_k = FK_INC;
    MEM32(eax + 0x18) = ecx; /* 0x171B23F6: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B23F9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = 1; /* 0x171B23FC: mov eax, 1 */
    MEM8(ebp + (-0x18)) = (uint8_t)(0); /* 0x171B2401: mov byte ptr [ebp - 0x18], 0 */
    MEM32(ebp + (-0x12C)) = 0; /* 0x171B2405: mov dword ptr [ebp - 0x12c], 0 */
    MEM32(ebp + (-0x130)) = eax; /* 0x171B240F: mov dword ptr [ebp - 0x130], eax */
L_171B2415:
    /* test edi, edi */ /* 0x171B2415: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2446; /* 0x171B2417: jne 0x171b2446 */
L_171B2419:
    esi = MEM32(ebp + (-0x124)); /* 0x171B2419: mov esi, dword ptr [ebp - 0x124] */
    PUSH32(esp, ebx); /* 0x171B241F: push ebx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2420: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2423: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2677; /* 0x171B2425: je 0x171b2677 */
L_171B242B:
    eax = MEM32(esi); /* 0x171B242B: mov eax, dword ptr [esi] */
    ecx = MEM32(esi + 0x4); /* 0x171B242D: mov ecx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x120)) = eax; /* 0x171B2430: mov dword ptr [ebp - 0x120], eax */
    esi = eax; /* 0x171B2436: mov esi, eax */
    eax = MEM32(ebp + (-0x130)); /* 0x171B2438: mov eax, dword ptr [ebp - 0x130] */
    MEM32(ebp + (-0x11C)) = ecx; /* 0x171B243E: mov dword ptr [ebp - 0x11c], ecx */
    edi = ecx; /* 0x171B2444: mov edi, ecx */
L_171B2446:
    SET_LO8(edx, MEM8(esi)); /* 0x171B2446: mov dl, byte ptr [esi] */
    MEM8(ebp + eax + (-0x18)) = (uint8_t)(LO8(edx)); /* 0x171B2448: mov byte ptr [ebp + eax - 0x18], dl */
    ecx = (uint32_t)LO8(edx); /* 0x171B244C: movzx ecx, dl */
    edx = MEM32(ebp + (-0x12C)); /* 0x171B244F: mov edx, dword ptr [ebp - 0x12c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B2455: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B2456: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171B2457: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B2459: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x10u */ /* 0x171B245A: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x11C)) = edi; /* 0x171B245D: mov dword ptr [ebp - 0x11c], edi */
    MEM32(ebp + (-0x120)) = esi; /* 0x171B2463: mov dword ptr [ebp - 0x120], esi */
    MEM32(ebp + (-0x12C)) = edx; /* 0x171B2469: mov dword ptr [ebp - 0x12c], edx */
    MEM32(ebp + (-0x130)) = eax; /* 0x171B246F: mov dword ptr [ebp - 0x130], eax */
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B2415; /* 0x171B2475: jle 0x171b2415 */
L_171B2477:
    eax = MEM32(ebp + (-0x128)); /* 0x171B2477: mov eax, dword ptr [ebp - 0x128] */
    edx = (uint32_t)MEM8(ebp + (-0x17)); /* 0x171B247D: movzx edx, byte ptr [ebp - 0x17] */
    ecx = (uint32_t)MEM8(ebp + (-0x16)); /* 0x171B2481: movzx ecx, byte ptr [ebp - 0x16] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x11u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x11u; /* 0x171B2485: sub eax, 0x11 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x128)) = eax; /* 0x171B2488: mov dword ptr [ebp - 0x128], eax */
    eax = MEM32(ebx); /* 0x171B248E: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x18) = edx; /* 0x171B2490: mov dword ptr [eax + 0x18], edx */
    edx = (uint32_t)MEM8(ebp + (-0x15)); /* 0x171B2493: movzx edx, byte ptr [ebp - 0x15] */
    MEM32(eax + 0x1C) = ecx; /* 0x171B2497: mov dword ptr [eax + 0x1c], ecx */
    ecx = (uint32_t)MEM8(ebp + (-0x14)); /* 0x171B249A: movzx ecx, byte ptr [ebp - 0x14] */
    MEM32(eax + 0x20) = edx; /* 0x171B249E: mov dword ptr [eax + 0x20], edx */
    edx = (uint32_t)MEM8(ebp + (-0x13)); /* 0x171B24A1: movzx edx, byte ptr [ebp - 0x13] */
    MEM32(eax + 0x24) = ecx; /* 0x171B24A5: mov dword ptr [eax + 0x24], ecx */
    ecx = (uint32_t)MEM8(ebp + (-0x12)); /* 0x171B24A8: movzx ecx, byte ptr [ebp - 0x12] */
    MEM32(eax + 0x28) = edx; /* 0x171B24AC: mov dword ptr [eax + 0x28], edx */
    edx = (uint32_t)MEM8(ebp + (-0x11)); /* 0x171B24AF: movzx edx, byte ptr [ebp - 0x11] */
    MEM32(eax + 0x2C) = ecx; /* 0x171B24B3: mov dword ptr [eax + 0x2c], ecx */
    ecx = (uint32_t)MEM8(ebp + (-0x10)); /* 0x171B24B6: movzx ecx, byte ptr [ebp - 0x10] */
    PUSH32(esp, 2); /* 0x171B24BA: push 2 */
    MEM32(eax + 0x30) = edx; /* 0x171B24BC: mov dword ptr [eax + 0x30], edx */
    MEM32(eax + 0x34) = ecx; /* 0x171B24BF: mov dword ptr [eax + 0x34], ecx */
    PUSH32(esp, ebx); /* 0x171B24C2: push ebx */
    MEM32(eax + 0x14) = 0x56u; /* 0x171B24C3: mov dword ptr [eax + 0x14], 0x56 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B24CA: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x171B24CD: mov eax, dword ptr [ebx] */
    edx = (uint32_t)MEM8(ebp + (-0xF)); /* 0x171B24CF: movzx edx, byte ptr [ebp - 0xf] */
    ecx = (uint32_t)MEM8(ebp + (-0xE)); /* 0x171B24D3: movzx ecx, byte ptr [ebp - 0xe] */
    MEM32(eax + 0x18) = edx; /* 0x171B24D7: mov dword ptr [eax + 0x18], edx */
    edx = (uint32_t)MEM8(ebp + (-0xD)); /* 0x171B24DA: movzx edx, byte ptr [ebp - 0xd] */
    MEM32(eax + 0x1C) = ecx; /* 0x171B24DE: mov dword ptr [eax + 0x1c], ecx */
    ecx = (uint32_t)MEM8(ebp + (-0xC)); /* 0x171B24E1: movzx ecx, byte ptr [ebp - 0xc] */
    MEM32(eax + 0x20) = edx; /* 0x171B24E5: mov dword ptr [eax + 0x20], edx */
    edx = (uint32_t)MEM8(ebp + (-0xB)); /* 0x171B24E8: movzx edx, byte ptr [ebp - 0xb] */
    MEM32(eax + 0x24) = ecx; /* 0x171B24EC: mov dword ptr [eax + 0x24], ecx */
    ecx = (uint32_t)MEM8(ebp + (-0xA)); /* 0x171B24EF: movzx ecx, byte ptr [ebp - 0xa] */
    MEM32(eax + 0x28) = edx; /* 0x171B24F3: mov dword ptr [eax + 0x28], edx */
    edx = (uint32_t)MEM8(ebp + (-0x9)); /* 0x171B24F6: movzx edx, byte ptr [ebp - 9] */
    MEM32(eax + 0x2C) = ecx; /* 0x171B24FA: mov dword ptr [eax + 0x2c], ecx */
    ecx = (uint32_t)MEM8(ebp + (-0x8)); /* 0x171B24FD: movzx ecx, byte ptr [ebp - 8] */
    PUSH32(esp, 2); /* 0x171B2501: push 2 */
    MEM32(eax + 0x30) = edx; /* 0x171B2503: mov dword ptr [eax + 0x30], edx */
    MEM32(eax + 0x34) = ecx; /* 0x171B2506: mov dword ptr [eax + 0x34], ecx */
    PUSH32(esp, ebx); /* 0x171B2509: push ebx */
    MEM32(eax + 0x14) = 0x56u; /* 0x171B250A: mov dword ptr [eax + 0x14], 0x56 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2511: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x12C)); /* 0x171B2514: mov ecx, dword ptr [ebp - 0x12c] */
    /* cmp ecx, 0x100u */ /* 0x171B251A: cmp ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171B252A; /* 0x171B2520: jg 0x171b252a */
L_171B2522:
    /* cmp ecx, MEM32(ebp + (-0x128)) */ /* 0x171B2522: cmp ecx, dword ptr [ebp - 0x128] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x128)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171B253C; /* 0x171B2528: jle 0x171b253c */
L_171B252A:
    eax = MEM32(ebx); /* 0x171B252A: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x171B252C: push ebx */
    MEM32(eax + 0x14) = 8; /* 0x171B252D: mov dword ptr [eax + 0x14], 8 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B2534: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x12C)); /* 0x171B2536: mov ecx, dword ptr [ebp - 0x12c] */
L_171B253C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B253C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171B253E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x130)) = eax; /* 0x171B2540: mov dword ptr [ebp - 0x130], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B25A1; /* 0x171B2546: jle 0x171b25a1 */
L_171B2548:
    /* test edi, edi */ /* 0x171B2548: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B257F; /* 0x171B254A: jne 0x171b257f */
L_171B254C:
    esi = MEM32(ebp + (-0x124)); /* 0x171B254C: mov esi, dword ptr [ebp - 0x124] */
    PUSH32(esp, ebx); /* 0x171B2552: push ebx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2553: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2556: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2677; /* 0x171B2558: je 0x171b2677 */
L_171B255E:
    eax = MEM32(esi + 0x4); /* 0x171B255E: mov eax, dword ptr [esi + 4] */
    edx = MEM32(esi); /* 0x171B2561: mov edx, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x12C)); /* 0x171B2563: mov ecx, dword ptr [ebp - 0x12c] */
    MEM32(ebp + (-0x11C)) = eax; /* 0x171B2569: mov dword ptr [ebp - 0x11c], eax */
    edi = eax; /* 0x171B256F: mov edi, eax */
    eax = MEM32(ebp + (-0x130)); /* 0x171B2571: mov eax, dword ptr [ebp - 0x130] */
    MEM32(ebp + (-0x120)) = edx; /* 0x171B2577: mov dword ptr [ebp - 0x120], edx */
    esi = edx; /* 0x171B257D: mov esi, edx */
L_171B257F:
    SET_LO8(edx, MEM8(esi)); /* 0x171B257F: mov dl, byte ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B2581: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171B2582: inc esi */
    _flag_k = FK_INC;
    MEM8(ebp + eax + (-0x118)) = (uint8_t)(LO8(edx)); /* 0x171B2583: mov byte ptr [ebp + eax - 0x118], dl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B258A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x171B258B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x11C)) = edi; /* 0x171B258D: mov dword ptr [ebp - 0x11c], edi */
    MEM32(ebp + (-0x120)) = esi; /* 0x171B2593: mov dword ptr [ebp - 0x120], esi */
    MEM32(ebp + (-0x130)) = eax; /* 0x171B2599: mov dword ptr [ebp - 0x130], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B2548; /* 0x171B259F: jl 0x171b2548 */
L_171B25A1:
    edx = MEM32(ebp + (-0x128)); /* 0x171B25A1: mov edx, dword ptr [ebp - 0x128] */
    eax = MEM32(ebp + (-0x134)); /* 0x171B25A7: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171B25AD: sub edx, ecx */
    _flag_k = FK_CMP;
    /* test LO8(eax), 0x10u */ /* 0x171B25AF: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x128)) = edx; /* 0x171B25B1: mov dword ptr [ebp - 0x128], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B25C5; /* 0x171B25B7: je 0x171b25c5 */
L_171B25B9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10u; /* 0x171B25B9: sub eax, 0x10 */
    _flag_k = FK_CMP;
    esi = ebx + eax * 4 + 0xC8; /* 0x171B25BC: lea esi, [ebx + eax*4 + 0xc8] */
    goto L_171B25CC; /* 0x171B25C3: jmp 0x171b25cc */
L_171B25C5:
    esi = ebx + eax * 4 + 0xB8; /* 0x171B25C5: lea esi, [ebx + eax*4 + 0xb8] */
L_171B25CC:
    /* test eax, eax */ /* 0x171B25CC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B25D5; /* 0x171B25CE: jl 0x171b25d5 */
L_171B25D0:
    /* cmp eax, 4 */ /* 0x171B25D0: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B25E4; /* 0x171B25D3: jl 0x171b25e4 */
L_171B25D5:
    ecx = MEM32(ebx); /* 0x171B25D5: mov ecx, dword ptr [ebx] */
    MEM32(ecx + 0x14) = 0x1Eu; /* 0x171B25D7: mov dword ptr [ecx + 0x14], 0x1e */
    PUSH32(esp, ebx); /* 0x171B25DE: push ebx */
    MEM32(ecx + 0x18) = eax; /* 0x171B25DF: mov dword ptr [ecx + 0x18], eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171B25E2: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
L_171B25E4:
    /* cmp MEM32(esi), 0 */ /* 0x171B25E4: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B25F1; /* 0x171B25E7: jne 0x171b25f1 */
L_171B25E9:
    PUSH32(esp, ebx); /* 0x171B25E9: push ebx */
    RECOMP_CALL(sub_171B5CB0); /* 0x171B25EA: call 0x171b5cb0 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x171B25EF: mov dword ptr [esi], eax */
L_171B25F1:
    eax = MEM32(esi); /* 0x171B25F1: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + (-0x18)); /* 0x171B25F3: mov edx, dword ptr [ebp - 0x18] */
    ecx = eax; /* 0x171B25F6: mov ecx, eax */
    MEM32(ecx) = edx; /* 0x171B25F8: mov dword ptr [ecx], edx */
    edx = MEM32(ebp + (-0x14)); /* 0x171B25FA: mov edx, dword ptr [ebp - 0x14] */
    MEM32(ecx + 0x4) = edx; /* 0x171B25FD: mov dword ptr [ecx + 4], edx */
    edx = MEM32(ebp + (-0x10)); /* 0x171B2600: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ecx + 0x8) = edx; /* 0x171B2603: mov dword ptr [ecx + 8], edx */
    edx = MEM32(ebp + (-0xC)); /* 0x171B2606: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0xC) = edx; /* 0x171B2609: mov dword ptr [ecx + 0xc], edx */
    SET_LO8(edx, MEM8(ebp + (-0x8))); /* 0x171B260C: mov dl, byte ptr [ebp - 8] */
    edi = eax + 0x11; /* 0x171B260F: lea edi, [eax + 0x11] */
    eax = MEM32(ebp + (-0x128)); /* 0x171B2612: mov eax, dword ptr [ebp - 0x128] */
    MEM8(ecx + 0x10) = (uint8_t)(LO8(edx)); /* 0x171B2618: mov byte ptr [ecx + 0x10], dl */
    ecx = 0x40u; /* 0x171B261B: mov ecx, 0x40 */
    esi = ebp + (-0x118); /* 0x171B2620: lea esi, [ebp - 0x118] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171B2626: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x11C)); /* 0x171B2628: mov edi, dword ptr [ebp - 0x11c] */
    esi = MEM32(ebp + (-0x120)); /* 0x171B262E: mov esi, dword ptr [ebp - 0x120] */
    /* cmp eax, 0x10u */ /* 0x171B2634: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x124)); /* 0x171B2637: mov eax, dword ptr [ebp - 0x124] */
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_171B23B4; /* 0x171B263D: jg 0x171b23b4 */
L_171B2643:
    ecx = MEM32(ebp + (-0x128)); /* 0x171B2643: mov ecx, dword ptr [ebp - 0x128] */
L_171B2649:
    /* test ecx, ecx */ /* 0x171B2649: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B265F; /* 0x171B264B: je 0x171b265f */
L_171B264D:
    eax = MEM32(ebx); /* 0x171B264D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x171B264F: push ebx */
    MEM32(eax + 0x14) = 0xBu; /* 0x171B2650: mov dword ptr [eax + 0x14], 0xb */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B2657: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x124)); /* 0x171B2659: mov eax, dword ptr [ebp - 0x124] */
L_171B265F:
    MEM32(eax + 0x4) = edi; /* 0x171B265F: mov dword ptr [eax + 4], edi */
    MEM32(eax) = esi; /* 0x171B2662: mov dword ptr [eax], esi */
    edi = POP32_VAL(esp); /* 0x171B2664: pop edi */
    eax = 1; /* 0x171B2665: mov eax, 1 */
    esi = POP32_VAL(esp); /* 0x171B266A: pop esi */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B266B: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x171B266E: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171B2673: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2675: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2676: ret  */
L_171B2677:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B2677: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171B267A: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B267B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171B267D: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x171B267E: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171B2683: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2685: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2686: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B2690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B2690u);

L_171B2690:
    edi = edi; /* 0x171B2690: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B2692: push ebp */
    ebp = esp; /* 0x171B2693: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171B2695: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x171B2698: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171B269B: push ebx */
    PUSH32(esp, esi); /* 0x171B269C: push esi */
    esi = MEM32(ecx + 0x18); /* 0x171B269D: mov esi, dword ptr [ecx + 0x18] */
    ebx = MEM32(esi + 0x4); /* 0x171B26A0: mov ebx, dword ptr [esi + 4] */
    /* test ebx, ebx */ /* 0x171B26A3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B26A5: push edi */
    edi = MEM32(esi); /* 0x171B26A6: mov edi, dword ptr [esi] */
    MEM32(ebp + (-0x8)) = esi; /* 0x171B26A8: mov dword ptr [ebp - 8], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B26C1; /* 0x171B26AB: jne 0x171b26c1 */
L_171B26AD:
    PUSH32(esp, ecx); /* 0x171B26AD: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B26AE: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B26B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B28CE; /* 0x171B26B3: je 0x171b28ce */
L_171B26B9:
    edi = MEM32(esi); /* 0x171B26B9: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B26BB: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B26BE: mov ecx, dword ptr [ebp + 8] */
L_171B26C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B26C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(eax, MEM8(edi)); /* 0x171B26C3: mov ah, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B26C5: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B26C6: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B26C7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B26C9: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B26E5; /* 0x171B26CC: jne 0x171b26e5 */
L_171B26CE:
    PUSH32(esp, ecx); /* 0x171B26CE: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B26CF: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B26D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B28CE; /* 0x171B26D4: je 0x171b28ce */
L_171B26DA:
    edi = MEM32(esi); /* 0x171B26DA: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B26DC: mov ebx, dword ptr [esi + 4] */
    eax = MEM32(ebp + (-0x4)); /* 0x171B26DF: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B26E2: mov ecx, dword ptr [ebp + 8] */
L_171B26E5:
    edx = (uint32_t)MEM8(edi); /* 0x171B26E5: movzx edx, byte ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B26E8: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B26EA: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x171B26EB: sub eax, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B26EE: inc edi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x171B26EF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B26F1: mov dword ptr [ebp - 4], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B28AD; /* 0x171B26F4: jle 0x171b28ad */
L_171B26FA:
    ebx = ebx; /* 0x171B26FA: lea ebx, [ebx] */
L_171B2700:
    /* test ebx, ebx */ /* 0x171B2700: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2715; /* 0x171B2702: jne 0x171b2715 */
L_171B2704:
    PUSH32(esp, ecx); /* 0x171B2704: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2705: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2708: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B28CE; /* 0x171B270A: je 0x171b28ce */
L_171B2710:
    edi = MEM32(esi); /* 0x171B2710: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B2712: mov ebx, dword ptr [esi + 4] */
L_171B2715:
    esi = (uint32_t)MEM8(edi); /* 0x171B2715: movzx esi, byte ptr [edi] */
    edx = MEM32(ebp + 0x8); /* 0x171B2718: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x171B271B: mov eax, dword ptr [edx] */
    ecx = esi; /* 0x171B271D: mov ecx, esi */
    if (4u) _cf = (((ecx) >> 3) & 1u); /* 0x171B271F: sar ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 4u);
    MEM32(eax + 0x14) = 0x51u; /* 0x171B2722: mov dword ptr [eax + 0x14], 0x51 */
    PUSH32(esp, 1); /* 0x171B2729: push 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFu);
    esi = esi & 0xFu; /* 0x171B272B: and esi, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x18) = esi; /* 0x171B272E: mov dword ptr [eax + 0x18], esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B2731: dec ebx */
    _flag_k = FK_DEC;
    PUSH32(esp, edx); /* 0x171B2732: push edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B2733: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = ecx; /* 0x171B2734: mov dword ptr [ebp - 0x14], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x171B2737: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B273A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp esi, 4 */ /* 0x171B273D: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B2754; /* 0x171B2740: jl 0x171b2754 */
L_171B2742:
    ecx = MEM32(ebp + 0x8); /* 0x171B2742: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171B2745: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0x1Fu; /* 0x171B2747: mov dword ptr [eax + 0x14], 0x1f */
    PUSH32(esp, ecx); /* 0x171B274E: push ecx */
    MEM32(eax + 0x18) = esi; /* 0x171B274F: mov dword ptr [eax + 0x18], esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B2752: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B2754:
    ecx = MEM32(ebp + 0x8); /* 0x171B2754: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + esi * 4 + 0xA8); /* 0x171B2757: mov eax, dword ptr [ecx + esi*4 + 0xa8] */
    /* test eax, eax */ /* 0x171B275E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2772; /* 0x171B2760: jne 0x171b2772 */
L_171B2762:
    PUSH32(esp, ecx); /* 0x171B2762: push ecx */
    RECOMP_CALL(sub_171B5C80); /* 0x171B2763: call 0x171b5c80 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x171B2768: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + esi * 4 + 0xA8) = eax; /* 0x171B276B: mov dword ptr [ecx + esi*4 + 0xa8], eax */
L_171B2772:
    esi = MEM32(ecx + esi * 4 + 0xA8); /* 0x171B2772: mov esi, dword ptr [ecx + esi*4 + 0xa8] */
    MEM32(ebp + (-0x18)) = esi; /* 0x171B2779: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x10)) = 0x17025788u; /* 0x171B277C: mov dword ptr [ebp - 0x10], 0x17025788 */
L_171B2783:
    eax = MEM32(ebp + (-0x14)); /* 0x171B2783: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x171B2786: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B27D3; /* 0x171B2788: je 0x171b27d3 */
L_171B278A:
    /* test ebx, ebx */ /* 0x171B278A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x8)); /* 0x171B278C: mov esi, dword ptr [ebp - 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B27A5; /* 0x171B278F: jne 0x171b27a5 */
L_171B2791:
    PUSH32(esp, ecx); /* 0x171B2791: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2792: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2795: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B28CE; /* 0x171B2797: je 0x171b28ce */
L_171B279D:
    edi = MEM32(esi); /* 0x171B279D: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B279F: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B27A2: mov ecx, dword ptr [ebp + 8] */
L_171B27A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171B27A5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(edx, MEM8(edi)); /* 0x171B27A7: mov dh, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B27A9: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B27AA: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B27AB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x171B27AD: mov dword ptr [ebp - 0xc], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B27C6; /* 0x171B27B0: jne 0x171b27c6 */
L_171B27B2:
    PUSH32(esp, ecx); /* 0x171B27B2: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B27B3: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B27B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B28CE; /* 0x171B27B8: je 0x171b28ce */
L_171B27BE:
    edi = MEM32(esi); /* 0x171B27BE: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B27C0: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B27C3: mov ecx, dword ptr [ebp + 8] */
L_171B27C6:
    eax = (uint32_t)MEM8(edi); /* 0x171B27C6: movzx eax, byte ptr [edi] */
    edx = MEM32(ebp + (-0xC)); /* 0x171B27C9: mov edx, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x18)); /* 0x171B27CC: mov esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B27CF: add edx, eax */
    _flag_k = FK_ADD;
    goto L_171B27F1; /* 0x171B27D1: jmp 0x171b27f1 */
L_171B27D3:
    /* test ebx, ebx */ /* 0x171B27D3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B27EE; /* 0x171B27D5: jne 0x171b27ee */
L_171B27D7:
    ebx = MEM32(ebp + (-0x8)); /* 0x171B27D7: mov ebx, dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x171B27DA: push ecx */
    RECOMP_ICALL(MEM32(ebx + 0xC)); /* 0x171B27DB: call dword ptr [ebx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B27DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B28CE; /* 0x171B27E0: je 0x171b28ce */
L_171B27E6:
    edi = MEM32(ebx); /* 0x171B27E6: mov edi, dword ptr [ebx] */
    ebx = MEM32(ebx + 0x4); /* 0x171B27E8: mov ebx, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B27EB: mov ecx, dword ptr [ebp + 8] */
L_171B27EE:
    edx = (uint32_t)MEM8(edi); /* 0x171B27EE: movzx edx, byte ptr [edi] */
L_171B27F1:
    eax = MEM32(ebp + (-0x10)); /* 0x171B27F1: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = edx; /* 0x171B27F4: mov dword ptr [ebp - 0xc], edx */
    edx = MEM32(eax); /* 0x171B27F7: mov edx, dword ptr [eax] */
    SET_LO16(eax, MEM16(ebp + (-0xC))); /* 0x171B27F9: mov ax, word ptr [ebp - 0xc] */
    MEM16(esi + edx * 2) = (uint16_t)(LO16(eax)); /* 0x171B27FD: mov word ptr [esi + edx*2], ax */
    eax = MEM32(ebp + (-0x10)); /* 0x171B2801: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B2804: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171B2805: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B2808: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0x17025888u */ /* 0x171B2809: cmp eax, 0x17025888 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17025888u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x171B280E: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171B2783; /* 0x171B2811: jl 0x171b2783 */
L_171B2817:
    edx = MEM32(ecx); /* 0x171B2817: mov edx, dword ptr [ecx] */
    /* cmp MEM32(edx + 0x68), 2 */ /* 0x171B2819: cmp dword ptr [edx + 0x68], 2 */
    _flag_a = (uint32_t)(MEM32(edx + 0x68)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171B2882; /* 0x171B281D: jl 0x171b2882 */
L_171B281F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171B281F: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = 8; /* 0x171B2822: mov dword ptr [ebp - 0x10], 8 */
    goto L_171B2830; /* 0x171B2829: jmp 0x171b2830 */
L_171B282B:
    ecx = MEM32(ebp + 0x8); /* 0x171B282B: mov ecx, dword ptr [ebp + 8] */
    edi = edi; /* 0x171B282E: mov edi, edi */
L_171B2830:
    edx = (uint32_t)MEM16(esi + (-0x4)); /* 0x171B2830: movzx edx, word ptr [esi - 4] */
    eax = MEM32(ecx); /* 0x171B2834: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x18) = edx; /* 0x171B2836: mov dword ptr [eax + 0x18], edx */
    edx = (uint32_t)MEM16(esi + (-0x2)); /* 0x171B2839: movzx edx, word ptr [esi - 2] */
    MEM32(eax + 0x1C) = edx; /* 0x171B283D: mov dword ptr [eax + 0x1c], edx */
    edx = (uint32_t)MEM16(esi); /* 0x171B2840: movzx edx, word ptr [esi] */
    MEM32(eax + 0x20) = edx; /* 0x171B2843: mov dword ptr [eax + 0x20], edx */
    edx = (uint32_t)MEM16(esi + 0x2); /* 0x171B2846: movzx edx, word ptr [esi + 2] */
    MEM32(eax + 0x24) = edx; /* 0x171B284A: mov dword ptr [eax + 0x24], edx */
    edx = (uint32_t)MEM16(esi + 0x4); /* 0x171B284D: movzx edx, word ptr [esi + 4] */
    MEM32(eax + 0x28) = edx; /* 0x171B2851: mov dword ptr [eax + 0x28], edx */
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x171B2854: movzx edx, word ptr [esi + 6] */
    MEM32(eax + 0x2C) = edx; /* 0x171B2858: mov dword ptr [eax + 0x2c], edx */
    edx = (uint32_t)MEM16(esi + 0x8); /* 0x171B285B: movzx edx, word ptr [esi + 8] */
    MEM32(eax + 0x30) = edx; /* 0x171B285F: mov dword ptr [eax + 0x30], edx */
    edx = (uint32_t)MEM16(esi + 0xA); /* 0x171B2862: movzx edx, word ptr [esi + 0xa] */
    PUSH32(esp, 2); /* 0x171B2866: push 2 */
    MEM32(eax + 0x34) = edx; /* 0x171B2868: mov dword ptr [eax + 0x34], edx */
    PUSH32(esp, ecx); /* 0x171B286B: push ecx */
    MEM32(eax + 0x14) = 0x5Du; /* 0x171B286C: mov dword ptr [eax + 0x14], 0x5d */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2873: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x171B2876: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x171B2879: add esi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B287C: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = eax; /* 0x171B287D: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171B282B; /* 0x171B2880: jne 0x171b282b */
L_171B2882:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B2882: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x14)); /* 0x171B2885: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x41u; /* 0x171B2888: sub ecx, 0x41 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x171B288B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B288D: mov dword ptr [ebp - 4], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B289A; /* 0x171B2890: je 0x171b289a */
L_171B2892:
    eax = ecx; /* 0x171B2892: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x40u; /* 0x171B2894: sub eax, 0x40 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2897: mov dword ptr [ebp - 4], eax */
L_171B289A:
    eax = MEM32(ebp + (-0x4)); /* 0x171B289A: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171B289D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x171B289F: mov ecx, dword ptr [ebp + 8] */
    esi = MEM32(ebp + (-0x8)); /* 0x171B28A2: mov esi, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171B2700; /* 0x171B28A5: jg 0x171b2700 */
L_171B28AB:
    /* test eax, eax */ /* 0x171B28AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_171B28AD:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171B28BB; /* 0x171B28AD: je 0x171b28bb */
L_171B28AF:
    eax = MEM32(ecx); /* 0x171B28AF: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171B28B1: push ecx */
    MEM32(eax + 0x14) = 0xBu; /* 0x171B28B2: mov dword ptr [eax + 0x14], 0xb */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B28B9: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171B28BB:
    MEM32(esi) = edi; /* 0x171B28BB: mov dword ptr [esi], edi */
    edi = POP32_VAL(esp); /* 0x171B28BD: pop edi */
    MEM32(esi + 0x4) = ebx; /* 0x171B28BE: mov dword ptr [esi + 4], ebx */
    esi = POP32_VAL(esp); /* 0x171B28C1: pop esi */
    eax = 1; /* 0x171B28C2: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B28C7: pop ebx */
    esp = ebp; /* 0x171B28C8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B28CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B28CB: ret 4 */
L_171B28CE:
    edi = POP32_VAL(esp); /* 0x171B28CE: pop edi */
    esi = POP32_VAL(esp); /* 0x171B28CF: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B28D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B28D2: pop ebx */
    esp = ebp; /* 0x171B28D3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B28D5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B28D6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B28E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B28E0u);

L_171B28E0:
    edi = edi; /* 0x171B28E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B28E2: push ebp */
    ebp = esp; /* 0x171B28E3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B28E5: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171B28E6: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171B28E9: push ebx */
    PUSH32(esp, esi); /* 0x171B28EA: push esi */
    esi = MEM32(ecx + 0x18); /* 0x171B28EB: mov esi, dword ptr [ecx + 0x18] */
    ebx = MEM32(esi + 0x4); /* 0x171B28EE: mov ebx, dword ptr [esi + 4] */
    /* test ebx, ebx */ /* 0x171B28F1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B28F3: push edi */
    edi = MEM32(esi); /* 0x171B28F4: mov edi, dword ptr [esi] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2908; /* 0x171B28F6: jne 0x171b2908 */
L_171B28F8:
    PUSH32(esp, ecx); /* 0x171B28F8: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B28F9: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B28FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B296C; /* 0x171B28FE: je 0x171b296c */
L_171B2900:
    edi = MEM32(esi); /* 0x171B2900: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B2902: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B2905: mov ecx, dword ptr [ebp + 8] */
L_171B2908:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B2908: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(eax, MEM8(edi)); /* 0x171B290A: mov ah, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B290C: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B290D: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B290E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2910: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2928; /* 0x171B2913: jne 0x171b2928 */
L_171B2915:
    PUSH32(esp, ecx); /* 0x171B2915: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2916: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2919: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B296C; /* 0x171B291B: je 0x171b296c */
L_171B291D:
    edi = MEM32(esi); /* 0x171B291D: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B291F: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B2922: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x171B2925: mov eax, dword ptr [ebp - 4] */
L_171B2928:
    edx = (uint32_t)MEM8(edi); /* 0x171B2928: movzx edx, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B292B: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B292C: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B292E: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 4 */ /* 0x171B292F: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B2943; /* 0x171B2932: je 0x171b2943 */
L_171B2934:
    eax = MEM32(ecx); /* 0x171B2934: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x171B2936: push ecx */
    MEM32(eax + 0x14) = 0xBu; /* 0x171B2937: mov dword ptr [eax + 0x14], 0xb */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B293E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x171B2940: mov ecx, dword ptr [ebp + 8] */
L_171B2943:
    /* test ebx, ebx */ /* 0x171B2943: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2957; /* 0x171B2945: jne 0x171b2957 */
L_171B2947:
    PUSH32(esp, ecx); /* 0x171B2947: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2948: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B294B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B296C; /* 0x171B294D: je 0x171b296c */
L_171B294F:
    edi = MEM32(esi); /* 0x171B294F: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B2951: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B2954: mov ecx, dword ptr [ebp + 8] */
L_171B2957:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B2957: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(eax, MEM8(edi)); /* 0x171B2959: mov ah, byte ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B295B: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B295C: inc edi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171B295D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B295F: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B297F; /* 0x171B2962: jne 0x171b297f */
L_171B2964:
    PUSH32(esp, ecx); /* 0x171B2964: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2965: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2968: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2977; /* 0x171B296A: jne 0x171b2977 */
L_171B296C:
    edi = POP32_VAL(esp); /* 0x171B296C: pop edi */
    esi = POP32_VAL(esp); /* 0x171B296D: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B296E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B2970: pop ebx */
    esp = ebp; /* 0x171B2971: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2973: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2974: ret 4 */
L_171B2977:
    edi = MEM32(esi); /* 0x171B2977: mov edi, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x171B2979: mov ebx, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B297C: mov ecx, dword ptr [ebp + 8] */
L_171B297F:
    eax = (uint32_t)MEM8(edi); /* 0x171B297F: movzx eax, byte ptr [edi] */
    edx = MEM32(ebp + (-0x4)); /* 0x171B2982: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B2985: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x171B2987: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x171B2989: push 1 */
    MEM32(eax + 0x14) = 0x52u; /* 0x171B298B: mov dword ptr [eax + 0x14], 0x52 */
    PUSH32(esp, ecx); /* 0x171B2992: push ecx */
    MEM32(ebp + (-0x4)) = edx; /* 0x171B2993: mov dword ptr [ebp - 4], edx */
    MEM32(eax + 0x18) = edx; /* 0x171B2996: mov dword ptr [eax + 0x18], edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2999: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x171B299C: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x8); /* 0x171B299F: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B29A2: inc edi */
    _flag_k = FK_INC;
    MEM32(esi) = edi; /* 0x171B29A3: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171B29A5: dec ebx */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x171B29A6: pop edi */
    MEM32(esi + 0x4) = ebx; /* 0x171B29A7: mov dword ptr [esi + 4], ebx */
    esi = POP32_VAL(esp); /* 0x171B29AA: pop esi */
    MEM32(edx + 0x118) = ecx; /* 0x171B29AB: mov dword ptr [edx + 0x118], ecx */
    eax = 1; /* 0x171B29B1: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B29B6: pop ebx */
    esp = ebp; /* 0x171B29B7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B29B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B29BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B29D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B29D0u);

L_171B29D0:
    /* cmp eax, 0xEu */ /* 0x171B29D0: cmp eax, 0xe */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171B29D3: push ebx */
    ebx = eax + ecx; /* 0x171B29D4: lea ebx, [eax + ecx] */
    SET_LO8(ecx, 0x46u); /* 0x171B29D7: mov cl, 0x46 */
    if (CMP_B(_flag_a, _flag_b)) goto L_171B2B16; /* 0x171B29D9: jb 0x171b2b16 */
L_171B29DF:
    /* cmp MEM8(edi), 0x4Au */ /* 0x171B29DF: cmp byte ptr [edi], 0x4a */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x4Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2B16; /* 0x171B29E2: jne 0x171b2b16 */
L_171B29E8:
    /* cmp MEM8(edi + 0x1), LO8(ecx) */ /* 0x171B29E8: cmp byte ptr [edi + 1], cl */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2B16; /* 0x171B29EB: jne 0x171b2b16 */
L_171B29F1:
    /* cmp MEM8(edi + 0x2), 0x49u */ /* 0x171B29F1: cmp byte ptr [edi + 2], 0x49 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0x49u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2B16; /* 0x171B29F5: jne 0x171b2b16 */
L_171B29FB:
    /* cmp MEM8(edi + 0x3), LO8(ecx) */ /* 0x171B29FB: cmp byte ptr [edi + 3], cl */
    _flag_a = (uint32_t)(MEM8(edi + 0x3)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2B16; /* 0x171B29FE: jne 0x171b2b16 */
L_171B2A04:
    SET_LO8(edx, MEM8(edi + 0x4)); /* 0x171B2A04: mov dl, byte ptr [edi + 4] */
    /* test LO8(edx), LO8(edx) */ /* 0x171B2A07: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2B16; /* 0x171B2A09: jne 0x171b2b16 */
L_171B2A0F:
    SET_LO8(eax, MEM8(edi + 0x6)); /* 0x171B2A0F: mov al, byte ptr [edi + 6] */
    SET_LO8(edx, MEM8(edi + 0x7)); /* 0x171B2A12: mov dl, byte ptr [edi + 7] */
    SET_LO8(ecx, MEM8(edi + 0x5)); /* 0x171B2A15: mov cl, byte ptr [edi + 5] */
    MEM8(esi + 0x121) = (uint8_t)(LO8(eax)); /* 0x171B2A18: mov byte ptr [esi + 0x121], al */
    SET_LO16(eax, (uint32_t)MEM8(edi + 0x8)); /* 0x171B2A1E: movzx ax, byte ptr [edi + 8] */
    MEM8(esi + 0x122) = (uint8_t)(LO8(edx)); /* 0x171B2A23: mov byte ptr [esi + 0x122], dl */
    SET_LO16(edx, (uint32_t)MEM8(edi + 0x9)); /* 0x171B2A29: movzx dx, byte ptr [edi + 9] */
    MEM32(esi + 0x11C) = 1; /* 0x171B2A2E: mov dword ptr [esi + 0x11c], 1 */
    MEM8(esi + 0x120) = (uint8_t)(LO8(ecx)); /* 0x171B2A38: mov byte ptr [esi + 0x120], cl */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x171B2A3E: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x171B2A3E: shl eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B2A41: add eax, edx */
    _flag_k = FK_ADD;
    SET_LO16(edx, (uint32_t)MEM8(edi + 0xB)); /* 0x171B2A43: movzx dx, byte ptr [edi + 0xb] */
    MEM16(esi + 0x124) = (uint16_t)(LO16(eax)); /* 0x171B2A48: mov word ptr [esi + 0x124], ax */
    SET_LO16(eax, (uint32_t)MEM8(edi + 0xA)); /* 0x171B2A4F: movzx ax, byte ptr [edi + 0xa] */
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x171B2A54: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x171B2A54: shl eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171B2A57: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp LO8(ecx), 1 */ /* 0x171B2A59: cmp cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM16(esi + 0x126) = (uint16_t)(LO16(eax)); /* 0x171B2A5C: mov word ptr [esi + 0x126], ax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B2A81; /* 0x171B2A63: je 0x171b2a81 */
L_171B2A65:
    eax = MEM32(esi); /* 0x171B2A65: mov eax, dword ptr [esi] */
    edx = (uint32_t)MEM8(edi + 0x6); /* 0x171B2A67: movzx edx, byte ptr [edi + 6] */
    ecx = (uint32_t)LO8(ecx); /* 0x171B2A6B: movzx ecx, cl */
    MEM32(eax + 0x14) = 0x77u; /* 0x171B2A6E: mov dword ptr [eax + 0x14], 0x77 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B2A75: push -1 */
    MEM32(eax + 0x18) = ecx; /* 0x171B2A77: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x171B2A7A: push esi */
    MEM32(eax + 0x1C) = edx; /* 0x171B2A7B: mov dword ptr [eax + 0x1c], edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2A7E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_171B2A81:
    eax = MEM32(esi); /* 0x171B2A81: mov eax, dword ptr [esi] */
    ecx = (uint32_t)MEM8(esi + 0x120); /* 0x171B2A83: movzx ecx, byte ptr [esi + 0x120] */
    edx = (uint32_t)MEM8(esi + 0x121); /* 0x171B2A8A: movzx edx, byte ptr [esi + 0x121] */
    MEM32(eax + 0x18) = ecx; /* 0x171B2A91: mov dword ptr [eax + 0x18], ecx */
    ecx = (uint32_t)MEM16(esi + 0x124); /* 0x171B2A94: movzx ecx, word ptr [esi + 0x124] */
    MEM32(eax + 0x1C) = edx; /* 0x171B2A9B: mov dword ptr [eax + 0x1c], edx */
    edx = (uint32_t)MEM16(esi + 0x126); /* 0x171B2A9E: movzx edx, word ptr [esi + 0x126] */
    MEM32(eax + 0x20) = ecx; /* 0x171B2AA5: mov dword ptr [eax + 0x20], ecx */
    ecx = (uint32_t)MEM8(esi + 0x122); /* 0x171B2AA8: movzx ecx, byte ptr [esi + 0x122] */
    PUSH32(esp, 1); /* 0x171B2AAF: push 1 */
    MEM32(eax + 0x24) = edx; /* 0x171B2AB1: mov dword ptr [eax + 0x24], edx */
    MEM32(eax + 0x28) = ecx; /* 0x171B2AB4: mov dword ptr [eax + 0x28], ecx */
    PUSH32(esp, esi); /* 0x171B2AB7: push esi */
    MEM32(eax + 0x14) = 0x57u; /* 0x171B2AB8: mov dword ptr [eax + 0x14], 0x57 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2ABF: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(edi + 0xC)); /* 0x171B2AC2: mov dl, byte ptr [edi + 0xc] */
    SET_LO8(ecx, MEM8(edi + 0xD)); /* 0x171B2AC5: mov cl, byte ptr [edi + 0xd] */
    SET_LO8(eax, LO8(edx)); /* 0x171B2AC8: mov al, dl */
    _flag_a = (uint32_t)((LO8(eax) | LO8(ecx))) << 24; _flag_b = (uint32_t)((LO8(eax) | LO8(ecx))) << 24;
    SET_LO8(eax, LO8(eax) | LO8(ecx)); /* 0x171B2ACA: or al, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2AE9; /* 0x171B2ACC: je 0x171b2ae9 */
L_171B2ACE:
    eax = MEM32(esi); /* 0x171B2ACE: mov eax, dword ptr [esi] */
    edx = (uint32_t)LO8(edx); /* 0x171B2AD0: movzx edx, dl */
    ecx = (uint32_t)LO8(ecx); /* 0x171B2AD3: movzx ecx, cl */
    MEM32(eax + 0x14) = 0x5Au; /* 0x171B2AD6: mov dword ptr [eax + 0x14], 0x5a */
    PUSH32(esp, 1); /* 0x171B2ADD: push 1 */
    MEM32(eax + 0x18) = edx; /* 0x171B2ADF: mov dword ptr [eax + 0x18], edx */
    PUSH32(esp, esi); /* 0x171B2AE2: push esi */
    MEM32(eax + 0x1C) = ecx; /* 0x171B2AE3: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2AE6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_171B2AE9:
    eax = (uint32_t)MEM8(edi + 0xC); /* 0x171B2AE9: movzx eax, byte ptr [edi + 0xc] */
    edx = (uint32_t)MEM8(edi + 0xD); /* 0x171B2AED: movzx edx, byte ptr [edi + 0xd] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x171B2AF1: imul eax, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0xEu; /* 0x171B2AF4: sub ebx, 0xe */
    _flag_k = FK_CMP;
    eax = eax + eax * 2; /* 0x171B2AF7: lea eax, [eax + eax*2] */
    /* cmp ebx, eax */ /* 0x171B2AFA: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B2BA7; /* 0x171B2AFC: je 0x171b2ba7 */
L_171B2B02:
    eax = MEM32(esi); /* 0x171B2B02: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171B2B04: push 1 */
    MEM32(eax + 0x14) = 0x58u; /* 0x171B2B06: mov dword ptr [eax + 0x14], 0x58 */
    PUSH32(esp, esi); /* 0x171B2B0D: push esi */
    MEM32(eax + 0x18) = ebx; /* 0x171B2B0E: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2B11: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x171B2B14: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2B15: ret  */
L_171B2B16:
    /* cmp eax, 6 */ /* 0x171B2B16: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B2B95; /* 0x171B2B19: jb 0x171b2b95 */
L_171B2B1B:
    /* cmp MEM8(edi), 0x4Au */ /* 0x171B2B1B: cmp byte ptr [edi], 0x4a */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x4Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2B95; /* 0x171B2B1E: jne 0x171b2b95 */
L_171B2B20:
    /* cmp MEM8(edi + 0x1), LO8(ecx) */ /* 0x171B2B20: cmp byte ptr [edi + 1], cl */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2B95; /* 0x171B2B23: jne 0x171b2b95 */
L_171B2B25:
    SET_LO8(ecx, MEM8(edi + 0x2)); /* 0x171B2B25: mov cl, byte ptr [edi + 2] */
    SET_LO8(eax, 0x58u); /* 0x171B2B28: mov al, 0x58 */
    /* cmp LO8(ecx), LO8(eax) */ /* 0x171B2B2A: cmp cl, al */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2B95; /* 0x171B2B2C: jne 0x171b2b95 */
L_171B2B2E:
    /* cmp MEM8(edi + 0x3), LO8(eax) */ /* 0x171B2B2E: cmp byte ptr [edi + 3], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x3)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2B95; /* 0x171B2B31: jne 0x171b2b95 */
L_171B2B33:
    SET_LO8(eax, MEM8(edi + 0x4)); /* 0x171B2B33: mov al, byte ptr [edi + 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x171B2B36: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2B95; /* 0x171B2B38: jne 0x171b2b95 */
L_171B2B3A:
    ecx = (uint32_t)MEM8(edi + 0x5); /* 0x171B2B3A: movzx ecx, byte ptr [edi + 5] */
    eax = ecx; /* 0x171B2B3E: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x10u; /* 0x171B2B40: sub eax, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x171B2B43: push 1 */
    PUSH32(esp, esi); /* 0x171B2B45: push esi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B2B84; /* 0x171B2B46: je 0x171b2b84 */
L_171B2B48:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B2B48: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B2B73; /* 0x171B2B49: je 0x171b2b73 */
L_171B2B4B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 2; /* 0x171B2B4B: sub eax, 2 */
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x171B2B4E: mov eax, dword ptr [esi] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B2B64; /* 0x171B2B50: je 0x171b2b64 */
L_171B2B52:
    MEM32(eax + 0x14) = 0x59u; /* 0x171B2B52: mov dword ptr [eax + 0x14], 0x59 */
    MEM32(eax + 0x18) = ecx; /* 0x171B2B59: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ebx; /* 0x171B2B5C: mov dword ptr [eax + 0x1c], ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2B5F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x171B2B62: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2B63: ret  */
L_171B2B64:
    MEM32(eax + 0x14) = 0x6Eu; /* 0x171B2B64: mov dword ptr [eax + 0x14], 0x6e */
    MEM32(eax + 0x18) = ebx; /* 0x171B2B6B: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2B6E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x171B2B71: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2B72: ret  */
L_171B2B73:
    eax = MEM32(esi); /* 0x171B2B73: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x6Du; /* 0x171B2B75: mov dword ptr [eax + 0x14], 0x6d */
    MEM32(eax + 0x18) = ebx; /* 0x171B2B7C: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2B7F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x171B2B82: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2B83: ret  */
L_171B2B84:
    eax = MEM32(esi); /* 0x171B2B84: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x6Cu; /* 0x171B2B86: mov dword ptr [eax + 0x14], 0x6c */
    MEM32(eax + 0x18) = ebx; /* 0x171B2B8D: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2B90: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x171B2B93: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2B94: ret  */
L_171B2B95:
    eax = MEM32(esi); /* 0x171B2B95: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171B2B97: push 1 */
    MEM32(eax + 0x14) = 0x4Du; /* 0x171B2B99: mov dword ptr [eax + 0x14], 0x4d */
    PUSH32(esp, esi); /* 0x171B2BA0: push esi */
    MEM32(eax + 0x18) = ebx; /* 0x171B2BA1: mov dword ptr [eax + 0x18], ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2BA4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_171B2BA7:
    ebx = POP32_VAL(esp); /* 0x171B2BA7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171B2BA8: ret  */
    RECOMP_REGS_OUT();
}

void sub_171B2BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B2BB0u);

L_171B2BB0:
    edi = edi; /* 0x171B2BB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B2BB2: push ebp */
    ebp = esp; /* 0x171B2BB3: mov ebp, esp */
    /* cmp ecx, 0xCu */ /* 0x171B2BB5: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171B2C35; /* 0x171B2BB8: jb 0x171b2c35 */
L_171B2BBA:
    /* cmp MEM8(eax), 0x41u */ /* 0x171B2BBA: cmp byte ptr [eax], 0x41 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2C35; /* 0x171B2BBD: jne 0x171b2c35 */
L_171B2BBF:
    /* cmp MEM8(eax + 0x1), 0x64u */ /* 0x171B2BBF: cmp byte ptr [eax + 1], 0x64 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0x64u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2C35; /* 0x171B2BC3: jne 0x171b2c35 */
L_171B2BC5:
    /* cmp MEM8(eax + 0x2), 0x6Fu */ /* 0x171B2BC5: cmp byte ptr [eax + 2], 0x6f */
    _flag_a = (uint32_t)(MEM8(eax + 0x2)) << 24; _flag_b = (uint32_t)(0x6Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2C35; /* 0x171B2BC9: jne 0x171b2c35 */
L_171B2BCB:
    /* cmp MEM8(eax + 0x3), 0x62u */ /* 0x171B2BCB: cmp byte ptr [eax + 3], 0x62 */
    _flag_a = (uint32_t)(MEM8(eax + 0x3)) << 24; _flag_b = (uint32_t)(0x62u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2C35; /* 0x171B2BCF: jne 0x171b2c35 */
L_171B2BD1:
    /* cmp MEM8(eax + 0x4), 0x65u */ /* 0x171B2BD1: cmp byte ptr [eax + 4], 0x65 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(0x65u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2C35; /* 0x171B2BD5: jne 0x171b2c35 */
L_171B2BD7:
    edx = (uint32_t)MEM8(eax + 0x5); /* 0x171B2BD7: movzx edx, byte ptr [eax + 5] */
    ecx = MEM32(esi); /* 0x171B2BDB: mov ecx, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x171B2BDD: push ebx */
    ebx = (uint32_t)MEM8(eax + 0xB); /* 0x171B2BDE: movzx ebx, byte ptr [eax + 0xb] */
    PUSH32(esp, edi); /* 0x171B2BE2: push edi */
    edi = (uint32_t)MEM8(eax + 0x6); /* 0x171B2BE3: movzx edi, byte ptr [eax + 6] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x171B2BE7: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x171B2BE7: shl edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171B2BEA: add edx, edi */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM8(eax + 0x8); /* 0x171B2BEC: movzx edi, byte ptr [eax + 8] */
    MEM32(ecx + 0x18) = edx; /* 0x171B2BF0: mov dword ptr [ecx + 0x18], edx */
    edx = (uint32_t)MEM8(eax + 0x7); /* 0x171B2BF3: movzx edx, byte ptr [eax + 7] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x171B2BF7: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x171B2BF7: shl edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171B2BFA: add edx, edi */
    _flag_k = FK_ADD;
    MEM32(ecx + 0x1C) = edx; /* 0x171B2BFC: mov dword ptr [ecx + 0x1c], edx */
    edx = (uint32_t)MEM8(eax + 0x9); /* 0x171B2BFF: movzx edx, byte ptr [eax + 9] */
    eax = (uint32_t)MEM8(eax + 0xA); /* 0x171B2C03: movzx eax, byte ptr [eax + 0xa] */
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x171B2C07: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x171B2C07: shl edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171B2C0A: add edx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x171B2C0C: push 1 */
    MEM32(ecx + 0x20) = edx; /* 0x171B2C0E: mov dword ptr [ecx + 0x20], edx */
    MEM32(ecx + 0x24) = ebx; /* 0x171B2C11: mov dword ptr [ecx + 0x24], ebx */
    PUSH32(esp, esi); /* 0x171B2C14: push esi */
    MEM32(ecx + 0x14) = 0x4Cu; /* 0x171B2C15: mov dword ptr [ecx + 0x14], 0x4c */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171B2C1C: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171B2C1F: pop edi */
    MEM8(esi + 0x12C) = (uint8_t)(LO8(ebx)); /* 0x171B2C20: mov byte ptr [esi + 0x12c], bl */
    MEM32(esi + 0x128) = 1; /* 0x171B2C26: mov dword ptr [esi + 0x128], 1 */
    ebx = POP32_VAL(esp); /* 0x171B2C30: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171B2C31: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2C32: ret 4 */
L_171B2C35:
    eax = MEM32(esi); /* 0x171B2C35: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + 0x8); /* 0x171B2C37: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x171B2C3A: push 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171B2C3C: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(eax + 0x14) = 0x4Eu; /* 0x171B2C3E: mov dword ptr [eax + 0x14], 0x4e */
    PUSH32(esp, esi); /* 0x171B2C45: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171B2C46: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2C49: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x171B2C4C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2C4D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B2C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B2C60u);

L_171B2C60:
    edi = edi; /* 0x171B2C60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B2C62: push ebp */
    ebp = esp; /* 0x171B2C63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x171B2C65: sub esp, 0x2c */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x171B2C68: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(0x1723C894); /* 0x171B2C6B: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x171B2C70: push ebx */
    PUSH32(esp, esi); /* 0x171B2C71: push esi */
    PUSH32(esp, edi); /* 0x171B2C72: push edi */
    edi = MEM32(edx + 0x18); /* 0x171B2C73: mov edi, dword ptr [edx + 0x18] */
    esi = MEM32(edi + 0x4); /* 0x171B2C76: mov esi, dword ptr [edi + 4] */
    /* test esi, esi */ /* 0x171B2C79: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(edi); /* 0x171B2C7B: mov ebx, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2C7D: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x20)) = edx; /* 0x171B2C80: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x2C)) = edi; /* 0x171B2C83: mov dword ptr [ebp - 0x2c], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2CA1; /* 0x171B2C86: jne 0x171b2ca1 */
L_171B2C88:
    PUSH32(esp, edx); /* 0x171B2C88: push edx */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B2C89: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2C8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2D6A; /* 0x171B2C8E: je 0x171b2d6a */
L_171B2C94:
    eax = MEM32(edi + 0x4); /* 0x171B2C94: mov eax, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B2C97: mov ebx, dword ptr [edi] */
    edx = MEM32(ebp + (-0x20)); /* 0x171B2C99: mov edx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171B2C9C: mov dword ptr [ebp - 0x18], eax */
    esi = eax; /* 0x171B2C9F: mov esi, eax */
L_171B2CA1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B2CA1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(ecx, MEM8(ebx)); /* 0x171B2CA3: mov ch, byte ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B2CA5: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B2CA6: inc ebx */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x171B2CA7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ecx; /* 0x171B2CA9: mov dword ptr [ebp - 0x24], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2CCA; /* 0x171B2CAC: jne 0x171b2cca */
L_171B2CAE:
    PUSH32(esp, edx); /* 0x171B2CAE: push edx */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B2CAF: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2CB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2D6A; /* 0x171B2CB4: je 0x171b2d6a */
L_171B2CBA:
    ecx = MEM32(edi + 0x4); /* 0x171B2CBA: mov ecx, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B2CBD: mov ebx, dword ptr [edi] */
    edx = MEM32(ebp + (-0x20)); /* 0x171B2CBF: mov edx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x171B2CC2: mov dword ptr [ebp - 0x18], ecx */
    esi = ecx; /* 0x171B2CC5: mov esi, ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x171B2CC7: mov ecx, dword ptr [ebp - 0x24] */
L_171B2CCA:
    eax = (uint32_t)MEM8(ebx); /* 0x171B2CCA: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171B2CCD: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B2CCF: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 2; /* 0x171B2CD0: sub ecx, 2 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B2CD3: inc ebx */
    _flag_k = FK_INC;
    /* cmp ecx, 0xEu */ /* 0x171B2CD4: cmp ecx, 0xe */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = esi; /* 0x171B2CD7: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x24)) = ecx; /* 0x171B2CDA: mov dword ptr [ebp - 0x24], ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_171B2CE8; /* 0x171B2CDD: jl 0x171b2ce8 */
L_171B2CDF:
    MEM32(ebp + (-0x1C)) = 0xEu; /* 0x171B2CDF: mov dword ptr [ebp - 0x1c], 0xe */
    goto L_171B2CF5; /* 0x171B2CE6: jmp 0x171b2cf5 */
L_171B2CE8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B2CE8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171B2CEA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) ? 1 : 0); /* 0x171B2CEC: setle al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B2CEF: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x171B2CF0: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x171B2CF2: mov dword ptr [ebp - 0x1c], eax */
L_171B2CF5:
    eax = MEM32(ebp + (-0x1C)); /* 0x171B2CF5: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x171B2CF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = 0; /* 0x171B2CFA: mov dword ptr [ebp - 0x28], 0 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2D3B; /* 0x171B2D01: jbe 0x171b2d3b */
L_171B2D03:
    eax = MEM32(ebp + (-0x28)); /* 0x171B2D03: mov eax, dword ptr [ebp - 0x28] */
L_171B2D06:
    /* test esi, esi */ /* 0x171B2D06: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2D22; /* 0x171B2D08: jne 0x171b2d22 */
L_171B2D0A:
    PUSH32(esp, edx); /* 0x171B2D0A: push edx */
    RECOMP_ICALL(MEM32(edi + 0xC)); /* 0x171B2D0B: call dword ptr [edi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2D0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2D6A; /* 0x171B2D10: je 0x171b2d6a */
L_171B2D12:
    ecx = MEM32(edi + 0x4); /* 0x171B2D12: mov ecx, dword ptr [edi + 4] */
    ebx = MEM32(edi); /* 0x171B2D15: mov ebx, dword ptr [edi] */
    eax = MEM32(ebp + (-0x28)); /* 0x171B2D17: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x171B2D1A: mov dword ptr [ebp - 0x18], ecx */
    esi = ecx; /* 0x171B2D1D: mov esi, ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x171B2D1F: mov ecx, dword ptr [ebp - 0x24] */
L_171B2D22:
    SET_LO8(edx, MEM8(ebx)); /* 0x171B2D22: mov dl, byte ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B2D24: dec esi */
    _flag_k = FK_DEC;
    MEM8(ebp + eax + (-0x14)) = (uint8_t)(LO8(edx)); /* 0x171B2D25: mov byte ptr [ebp + eax - 0x14], dl */
    edx = MEM32(ebp + (-0x1C)); /* 0x171B2D29: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B2D2C: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171B2D2D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x171B2D2E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x20)); /* 0x171B2D30: mov edx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x18)) = esi; /* 0x171B2D33: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x28)) = eax; /* 0x171B2D36: mov dword ptr [ebp - 0x28], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171B2D06; /* 0x171B2D39: jb 0x171b2d06 */
L_171B2D3B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x1C)); /* 0x171B2D3B: sub ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    eax = MEM32(edx + 0x1A4); /* 0x171B2D3E: mov eax, dword ptr [edx + 0x1a4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xE0u; /* 0x171B2D44: sub eax, 0xe0 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = ecx; /* 0x171B2D49: mov dword ptr [ebp - 0x24], ecx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B2D8D; /* 0x171B2D4C: je 0x171b2d8d */
L_171B2D4E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xEu; /* 0x171B2D4E: sub eax, 0xe */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171B2D7D; /* 0x171B2D51: je 0x171b2d7d */
L_171B2D53:
    eax = MEM32(edx); /* 0x171B2D53: mov eax, dword ptr [edx] */
    ecx = MEM32(edx + 0x1A4); /* 0x171B2D55: mov ecx, dword ptr [edx + 0x1a4] */
    MEM32(eax + 0x14) = 0x44u; /* 0x171B2D5B: mov dword ptr [eax + 0x14], 0x44 */
    PUSH32(esp, edx); /* 0x171B2D62: push edx */
    MEM32(eax + 0x18) = ecx; /* 0x171B2D63: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B2D66: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171B2DA0; /* 0x171B2D68: jmp 0x171b2da0 */
L_171B2D6A:
    edi = POP32_VAL(esp); /* 0x171B2D6A: pop edi */
    esi = POP32_VAL(esp); /* 0x171B2D6B: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B2D6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B2D6E: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B2D6F: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x171B2D72: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171B2D77: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2D79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2D7A: ret 4 */
L_171B2D7D:
    PUSH32(esp, ecx); /* 0x171B2D7D: push ecx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x171B2D7E: mov ecx, dword ptr [ebp - 0x1c] */
    eax = ebp + (-0x14); /* 0x171B2D81: lea eax, [ebp - 0x14] */
    esi = edx; /* 0x171B2D84: mov esi, edx */
    RECOMP_CALL(sub_171B2BB0); /* 0x171B2D86: call 0x171b2bb0 */
    RECOMP_FLAGS_IN();
    goto L_171B2D9D; /* 0x171B2D8B: jmp 0x171b2d9d */
L_171B2D8D:
    eax = MEM32(ebp + (-0x1C)); /* 0x171B2D8D: mov eax, dword ptr [ebp - 0x1c] */
    edi = ebp + (-0x14); /* 0x171B2D90: lea edi, [ebp - 0x14] */
    esi = edx; /* 0x171B2D93: mov esi, edx */
    RECOMP_CALL(sub_171B29D0); /* 0x171B2D95: call 0x171b29d0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x2C)); /* 0x171B2D9A: mov edi, dword ptr [ebp - 0x2c] */
L_171B2D9D:
    esi = MEM32(ebp + (-0x18)); /* 0x171B2D9D: mov esi, dword ptr [ebp - 0x18] */
L_171B2DA0:
    eax = MEM32(ebp + (-0x24)); /* 0x171B2DA0: mov eax, dword ptr [ebp - 0x24] */
    /* test eax, eax */ /* 0x171B2DA3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = ebx; /* 0x171B2DA5: mov dword ptr [edi], ebx */
    MEM32(edi + 0x4) = esi; /* 0x171B2DA7: mov dword ptr [edi + 4], esi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B2DB7; /* 0x171B2DAA: jle 0x171b2db7 */
L_171B2DAC:
    ecx = MEM32(ebp + (-0x20)); /* 0x171B2DAC: mov ecx, dword ptr [ebp - 0x20] */
    edx = MEM32(ecx + 0x18); /* 0x171B2DAF: mov edx, dword ptr [ecx + 0x18] */
    PUSH32(esp, eax); /* 0x171B2DB2: push eax */
    PUSH32(esp, ecx); /* 0x171B2DB3: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x171B2DB4: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
L_171B2DB7:
    ecx = MEM32(ebp + (-0x4)); /* 0x171B2DB7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171B2DBA: pop edi */
    esi = POP32_VAL(esp); /* 0x171B2DBB: pop esi */
    eax = 1; /* 0x171B2DBC: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B2DC1: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x171B2DC2: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171B2DC7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2DC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2DCA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B2DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B2DE0u);

L_171B2DE0:
    edi = edi; /* 0x171B2DE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B2DE2: push ebp */
    ebp = esp; /* 0x171B2DE3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B2DE5: push ecx */
    PUSH32(esp, ebx); /* 0x171B2DE6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171B2DE7: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171B2DEA: push esi */
    esi = MEM32(ebx + 0x18); /* 0x171B2DEB: mov esi, dword ptr [ebx + 0x18] */
    eax = MEM32(esi + 0x4); /* 0x171B2DEE: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x171B2DF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171B2DF3: push edi */
    edi = MEM32(esi); /* 0x171B2DF4: mov edi, dword ptr [esi] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2E08; /* 0x171B2DF6: jne 0x171b2e08 */
L_171B2DF8:
    PUSH32(esp, ebx); /* 0x171B2DF8: push ebx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2DF9: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2DFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2E20; /* 0x171B2DFE: je 0x171b2e20 */
L_171B2E00:
    eax = MEM32(esi + 0x4); /* 0x171B2E00: mov eax, dword ptr [esi + 4] */
    edi = MEM32(esi); /* 0x171B2E03: mov edi, dword ptr [esi] */
    MEM32(ebp + 0x8) = eax; /* 0x171B2E05: mov dword ptr [ebp + 8], eax */
L_171B2E08:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171B2E08: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_HI8(ecx, MEM8(edi)); /* 0x171B2E0A: mov ch, byte ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B2E0C: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B2E0D: inc edi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x171B2E0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x171B2E10: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B2E13: mov dword ptr [ebp - 4], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2E33; /* 0x171B2E16: jne 0x171b2e33 */
L_171B2E18:
    PUSH32(esp, ebx); /* 0x171B2E18: push ebx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2E19: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2E1C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2E2B; /* 0x171B2E1E: jne 0x171b2e2b */
L_171B2E20:
    edi = POP32_VAL(esp); /* 0x171B2E20: pop edi */
    esi = POP32_VAL(esp); /* 0x171B2E21: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B2E22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B2E24: pop ebx */
    esp = ebp; /* 0x171B2E25: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2E27: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2E28: ret 4 */
L_171B2E2B:
    edx = MEM32(esi + 0x4); /* 0x171B2E2B: mov edx, dword ptr [esi + 4] */
    edi = MEM32(esi); /* 0x171B2E2E: mov edi, dword ptr [esi] */
    MEM32(ebp + 0x8) = edx; /* 0x171B2E30: mov dword ptr [ebp + 8], edx */
L_171B2E33:
    eax = (uint32_t)MEM8(edi); /* 0x171B2E33: movzx eax, byte ptr [edi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171B2E36: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebx + 0x1A4); /* 0x171B2E39: mov edx, dword ptr [ebx + 0x1a4] */
    ecx = ecx + eax + (-0x2); /* 0x171B2E3F: lea ecx, [ecx + eax - 2] */
    eax = MEM32(ebx); /* 0x171B2E43: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x14) = 0x5Bu; /* 0x171B2E45: mov dword ptr [eax + 0x14], 0x5b */
    PUSH32(esp, 1); /* 0x171B2E4C: push 1 */
    MEM32(eax + 0x18) = edx; /* 0x171B2E4E: mov dword ptr [eax + 0x18], edx */
    PUSH32(esp, ebx); /* 0x171B2E51: push ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171B2E52: mov dword ptr [ebp - 4], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x171B2E55: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2E58: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171B2E5B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B2E5E: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171B2E5F: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi + 0x4) = eax; /* 0x171B2E60: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x171B2E63: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171B2E66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x171B2E68: mov dword ptr [esi], edi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171B2E74; /* 0x171B2E6A: jle 0x171b2e74 */
L_171B2E6C:
    ecx = MEM32(ebx + 0x18); /* 0x171B2E6C: mov ecx, dword ptr [ebx + 0x18] */
    PUSH32(esp, eax); /* 0x171B2E6F: push eax */
    PUSH32(esp, ebx); /* 0x171B2E70: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x171B2E71: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
L_171B2E74:
    edi = POP32_VAL(esp); /* 0x171B2E74: pop edi */
    esi = POP32_VAL(esp); /* 0x171B2E75: pop esi */
    eax = 1; /* 0x171B2E76: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B2E7B: pop ebx */
    esp = ebp; /* 0x171B2E7C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2E7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2E7F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B2E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B2E90u);

L_171B2E90:
    edi = edi; /* 0x171B2E90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B2E92: push ebp */
    ebp = esp; /* 0x171B2E93: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B2E95: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171B2E96: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171B2E99: push ebx */
    ebx = MEM32(ecx + 0x18); /* 0x171B2E9A: mov ebx, dword ptr [ecx + 0x18] */
    PUSH32(esp, esi); /* 0x171B2E9D: push esi */
    esi = MEM32(ebx + 0x4); /* 0x171B2E9E: mov esi, dword ptr [ebx + 4] */
    PUSH32(esp, edi); /* 0x171B2EA1: push edi */
    edi = MEM32(ebx); /* 0x171B2EA2: mov edi, dword ptr [ebx] */
L_171B2EA4:
    /* test esi, esi */ /* 0x171B2EA4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2EBC; /* 0x171B2EA6: jne 0x171b2ebc */
L_171B2EA8:
    PUSH32(esp, ecx); /* 0x171B2EA8: push ecx */
    RECOMP_ICALL(MEM32(ebx + 0xC)); /* 0x171B2EA9: call dword ptr [ebx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2EAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2F3D; /* 0x171B2EAE: je 0x171b2f3d */
L_171B2EB4:
    edi = MEM32(ebx); /* 0x171B2EB4: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x171B2EB6: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B2EB9: mov ecx, dword ptr [ebp + 8] */
L_171B2EBC:
    eax = (uint32_t)MEM8(edi); /* 0x171B2EBC: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B2EBF: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B2EC0: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x171B2EC1: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B2F02; /* 0x171B2EC6: je 0x171b2f02 */
L_171B2EC8:
    goto L_171B2ED0; /* 0x171B2EC8: jmp 0x171b2ed0 */
L_171B2ED0:
    eax = MEM32(ecx + 0x1BC); /* 0x171B2ED0: mov eax, dword ptr [ecx + 0x1bc] */
    edx = MEM32(eax + 0x18); /* 0x171B2ED6: mov edx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171B2ED9: inc edx */
    _flag_k = FK_INC;
    /* test esi, esi */ /* 0x171B2EDA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x18) = edx; /* 0x171B2EDC: mov dword ptr [eax + 0x18], edx */
    MEM32(ebx) = edi; /* 0x171B2EDF: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = esi; /* 0x171B2EE1: mov dword ptr [ebx + 4], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2EF6; /* 0x171B2EE4: jne 0x171b2ef6 */
L_171B2EE6:
    PUSH32(esp, ecx); /* 0x171B2EE6: push ecx */
    RECOMP_ICALL(MEM32(ebx + 0xC)); /* 0x171B2EE7: call dword ptr [ebx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2EEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2F3D; /* 0x171B2EEC: je 0x171b2f3d */
L_171B2EEE:
    edi = MEM32(ebx); /* 0x171B2EEE: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x171B2EF0: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B2EF3: mov ecx, dword ptr [ebp + 8] */
L_171B2EF6:
    eax = (uint32_t)MEM8(edi); /* 0x171B2EF6: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B2EF9: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B2EFA: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x171B2EFB: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B2ED0; /* 0x171B2F00: jne 0x171b2ed0 */
L_171B2F02:
    /* test esi, esi */ /* 0x171B2F02: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2F16; /* 0x171B2F04: jne 0x171b2f16 */
L_171B2F06:
    PUSH32(esp, ecx); /* 0x171B2F06: push ecx */
    RECOMP_ICALL(MEM32(ebx + 0xC)); /* 0x171B2F07: call dword ptr [ebx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2F0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2F3D; /* 0x171B2F0C: je 0x171b2f3d */
L_171B2F0E:
    edi = MEM32(ebx); /* 0x171B2F0E: mov edi, dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x171B2F10: mov esi, dword ptr [ebx + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B2F13: mov ecx, dword ptr [ebp + 8] */
L_171B2F16:
    eax = (uint32_t)MEM8(edi); /* 0x171B2F16: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171B2F19: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171B2F1A: inc edi */
    _flag_k = FK_INC;
    /* cmp eax, 0xFFu */ /* 0x171B2F1B: cmp eax, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B2F20: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B2F02; /* 0x171B2F23: je 0x171b2f02 */
L_171B2F25:
    /* test eax, eax */ /* 0x171B2F25: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2F48; /* 0x171B2F27: jne 0x171b2f48 */
L_171B2F29:
    eax = MEM32(ecx + 0x1BC); /* 0x171B2F29: mov eax, dword ptr [ecx + 0x1bc] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 2; /* 0x171B2F2F: add dword ptr [eax + 0x18], 2 */
    _flag_k = FK_ADD;
    MEM32(ebx) = edi; /* 0x171B2F33: mov dword ptr [ebx], edi */
    MEM32(ebx + 0x4) = esi; /* 0x171B2F35: mov dword ptr [ebx + 4], esi */
    RECOMP_BACKEDGE();
    goto L_171B2EA4; /* 0x171B2F38: jmp 0x171b2ea4 */
L_171B2F3D:
    edi = POP32_VAL(esp); /* 0x171B2F3D: pop edi */
    esi = POP32_VAL(esp); /* 0x171B2F3E: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B2F3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B2F41: pop ebx */
    esp = ebp; /* 0x171B2F42: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2F44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2F45: ret 4 */
L_171B2F48:
    edx = MEM32(ecx + 0x1BC); /* 0x171B2F48: mov edx, dword ptr [ecx + 0x1bc] */
    edx = MEM32(edx + 0x18); /* 0x171B2F4E: mov edx, dword ptr [edx + 0x18] */
    /* test edx, edx */ /* 0x171B2F51: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2F83; /* 0x171B2F53: je 0x171b2f83 */
L_171B2F55:
    eax = MEM32(ecx); /* 0x171B2F55: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0x74u; /* 0x171B2F57: mov dword ptr [eax + 0x14], 0x74 */
    MEM32(eax + 0x18) = edx; /* 0x171B2F5E: mov dword ptr [eax + 0x18], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x171B2F61: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171B2F64: push -1 */
    PUSH32(esp, ecx); /* 0x171B2F66: push ecx */
    MEM32(eax + 0x1C) = edx; /* 0x171B2F67: mov dword ptr [eax + 0x1c], edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171B2F6A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171B2F6D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x1BC); /* 0x171B2F70: mov ecx, dword ptr [eax + 0x1bc] */
    eax = MEM32(ebp + (-0x4)); /* 0x171B2F76: mov eax, dword ptr [ebp - 4] */
    MEM32(ecx + 0x18) = 0; /* 0x171B2F79: mov dword ptr [ecx + 0x18], 0 */
    ecx = MEM32(ebp + 0x8); /* 0x171B2F80: mov ecx, dword ptr [ebp + 8] */
L_171B2F83:
    MEM32(ebx) = edi; /* 0x171B2F83: mov dword ptr [ebx], edi */
    edi = POP32_VAL(esp); /* 0x171B2F85: pop edi */
    MEM32(ebx + 0x4) = esi; /* 0x171B2F86: mov dword ptr [ebx + 4], esi */
    esi = POP32_VAL(esp); /* 0x171B2F89: pop esi */
    MEM32(ecx + 0x1A4) = eax; /* 0x171B2F8A: mov dword ptr [ecx + 0x1a4], eax */
    eax = 1; /* 0x171B2F90: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B2F95: pop ebx */
    esp = ebp; /* 0x171B2F96: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2F98: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2F99: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171B2FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171B2FB0u);

L_171B2FB0:
    edi = edi; /* 0x171B2FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171B2FB2: push ebp */
    ebp = esp; /* 0x171B2FB3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171B2FB5: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x171B2FB6: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171B2FB9: push ebx */
    PUSH32(esp, esi); /* 0x171B2FBA: push esi */
    esi = MEM32(ecx + 0x18); /* 0x171B2FBB: mov esi, dword ptr [ecx + 0x18] */
    ebx = MEM32(esi); /* 0x171B2FBE: mov ebx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x171B2FC0: push edi */
    edi = MEM32(esi + 0x4); /* 0x171B2FC1: mov edi, dword ptr [esi + 4] */
    /* test edi, edi */ /* 0x171B2FC4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2FD8; /* 0x171B2FC6: jne 0x171b2fd8 */
L_171B2FC8:
    PUSH32(esp, ecx); /* 0x171B2FC8: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2FC9: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2FCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171B2FEC; /* 0x171B2FCE: je 0x171b2fec */
L_171B2FD0:
    ebx = MEM32(esi); /* 0x171B2FD0: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x171B2FD2: mov edi, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B2FD5: mov ecx, dword ptr [ebp + 8] */
L_171B2FD8:
    edx = (uint32_t)MEM8(ebx); /* 0x171B2FD8: movzx edx, byte ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B2FDB: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B2FDC: inc ebx */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x171B2FDD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x171B2FDF: mov dword ptr [ebp - 4], edx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B3002; /* 0x171B2FE2: jne 0x171b3002 */
L_171B2FE4:
    PUSH32(esp, ecx); /* 0x171B2FE4: push ecx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171B2FE5: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171B2FE8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171B2FF7; /* 0x171B2FEA: jne 0x171b2ff7 */
L_171B2FEC:
    edi = POP32_VAL(esp); /* 0x171B2FEC: pop edi */
    esi = POP32_VAL(esp); /* 0x171B2FED: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171B2FEE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171B2FF0: pop ebx */
    esp = ebp; /* 0x171B2FF1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B2FF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B2FF4: ret 4 */
L_171B2FF7:
    ebx = MEM32(esi); /* 0x171B2FF7: mov ebx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x171B2FF9: mov edi, dword ptr [esi + 4] */
    ecx = MEM32(ebp + 0x8); /* 0x171B2FFC: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x171B2FFF: mov edx, dword ptr [ebp - 4] */
L_171B3002:
    eax = (uint32_t)MEM8(ebx); /* 0x171B3002: movzx eax, byte ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171B3005: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171B3006: inc ebx */
    _flag_k = FK_INC;
    /* cmp edx, 0xFFu */ /* 0x171B3007: cmp edx, 0xff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171B300D: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171B3019; /* 0x171B3010: jne 0x171b3019 */
L_171B3012:
    /* cmp eax, 0xD8u */ /* 0x171B3012: cmp eax, 0xd8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171B3034; /* 0x171B3017: je 0x171b3034 */
L_171B3019:
    eax = MEM32(ecx); /* 0x171B3019: mov eax, dword ptr [ecx] */
    MEM32(eax + 0x14) = 0x35u; /* 0x171B301B: mov dword ptr [eax + 0x14], 0x35 */
    MEM32(eax + 0x18) = edx; /* 0x171B3022: mov dword ptr [eax + 0x18], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x171B3025: mov edx, dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x171B3028: push ecx */
    MEM32(eax + 0x1C) = edx; /* 0x171B3029: mov dword ptr [eax + 0x1c], edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171B302C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x171B302E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x171B3031: mov eax, dword ptr [ebp - 4] */
L_171B3034:
    MEM32(esi + 0x4) = edi; /* 0x171B3034: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x171B3037: pop edi */
    MEM32(esi) = ebx; /* 0x171B3038: mov dword ptr [esi], ebx */
    esi = POP32_VAL(esp); /* 0x171B303A: pop esi */
    MEM32(ecx + 0x1A4) = eax; /* 0x171B303B: mov dword ptr [ecx + 0x1a4], eax */
    eax = 1; /* 0x171B3041: mov eax, 1 */
    ebx = POP32_VAL(esp); /* 0x171B3046: pop ebx */
    esp = ebp; /* 0x171B3047: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171B3049: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171B304A: ret 4 */
    RECOMP_REGS_OUT();
}
